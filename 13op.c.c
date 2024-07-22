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
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sDivNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sModNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sLShiftNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sRShiftNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sGtEqNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sLtEqNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sLtNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sGtNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sEqNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sNotEqNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sEq2Node
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sNotEq2Node
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sAndNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sXOrNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sOrNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sAndAndNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sOrOrNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
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

char* sNullNode_kind(struct sNullNode* self);

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
struct sNode* create_null_node(struct sInfo* info);

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info);

char* sNilNode_kind(struct sNilNode* self);

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info);

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sAddNode_kind(struct sAddNode* self);

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sSubNode_kind(struct sSubNode* self);

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sMultNode_kind(struct sMultNode* self);

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info);

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sDivNode_kind(struct sDivNode* self);

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info);

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sModNode_kind(struct sModNode* self);

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info);

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sLShiftNode_kind(struct sLShiftNode* self);

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info);

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sRShiftNode_kind(struct sRShiftNode* self);

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info);

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sGtEqNode_kind(struct sGtEqNode* self);

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info);

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sLtEqNode_kind(struct sLtEqNode* self);

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info);

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sLtNode_kind(struct sLtNode* self);

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info);

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sGtNode_kind(struct sGtNode* self);

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info);

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sEqNode_kind(struct sEqNode* self);

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info);

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sNotEqNode_kind(struct sNotEqNode* self);

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info);

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sEq2Node_kind(struct sEq2Node* self);

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info);

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sNotEq2Node_kind(struct sNotEq2Node* self);

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info);

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sAndNode_kind(struct sAndNode* self);

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info);

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sXOrNode_kind(struct sXOrNode* self);

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info);

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sOrNode_kind(struct sOrNode* self);

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info);

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sAndAndNode_kind(struct sAndAndNode* self);

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info);

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sOrOrNode_kind(struct sOrOrNode* self);

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info);

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

char* sCommaNode_kind(struct sCommaNode* self);

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info);

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);

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










_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info){
void* __result_obj__;
void* right_value114;
struct sType* generics_type_77;
_Bool _if_conditional114;
struct sType* __dec_obj35;
_Bool _if_conditional115;
struct sClass* klass_78;
char* class_name_79;
struct sFun* operator_fun_80;
char* fun_name2_81;
_Bool _if_conditional117;
void* right_value115;
char* none_generics_name_82;
void* right_value116;
struct sType* obj_type_83;
void* right_value117;
char* __dec_obj36;
void* right_value118;
char* fun_name3_84;
struct sGenericsFun* generics_fun_87;
_Bool _if_conditional132;
void* right_value119;
_Bool _if_conditional133;
_Bool __result76__;
_Bool _if_conditional153;
void* right_value120;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_91;
char* fun_name_92;
void* right_value121;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun2_93;
char* fun_name2_94;
_Bool _if_conditional155;
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
_Bool _if_conditional156;
void* right_value126;
char* __dec_obj38;
_Bool _if_conditional157;
_Bool result_101;
_Bool _if_conditional158;
void* right_value127;
struct CVALUE* come_value_102;
char* left_value2_103;
void* right_value128;
void* right_value129;
_Bool _if_conditional163;
void* right_value130;
char* __dec_obj39;
void* right_value131;
char* __dec_obj40;
char* right_value2_107;
void* right_value132;
void* right_value133;
_Bool _if_conditional164;
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
_Bool _if_conditional165;
void* right_value143;
char* __dec_obj45;
_Bool _if_conditional166;
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
    if(_if_conditional117=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional117) {
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
            if(_if_conditional133=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(fun_name2_81)))),generics_fun_87,obj_type_83,info),            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional133) {
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
            if(_if_conditional153=charp_operator_equals(fun_name,"operator_equals"),            _if_conditional153) {
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
                if(_if_conditional155=charp_operator_equals(fun_name,"operator_not_equals"),                _if_conditional155) {
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
        if(_if_conditional157=operator_fun_80==((void*)0),        _if_conditional157) {
            operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_81);
        }
    }
    result_101=(_Bool)0;
    if(_if_conditional158=operator_fun_80&&(list$1sTypeph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult")),    _if_conditional158) {
        come_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 77, "CVALUE"))));
        come_call_finalizer3(right_value127,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        check_assign_type(((char*)(right_value129=xsprintf("\%s is assigned to",((char*)(right_value128=string_to_string(fun_name2_81)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,0), "13op.c", 79, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional163=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,0), "13op.c", 80, 1))->mHeap&&left_value->type->mHeap,        _if_conditional163) {
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
        if(_if_conditional164=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,1), "13op.c", 89, 4))->mHeap&&right_value->type->mHeap,        _if_conditional164) {
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
        if(_if_conditional166=!break_guard&&type3_109->mGuardValue&&type3_109->mPointerNum>0,        _if_conditional166) {
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
_Bool _if_conditional97;
void* right_value111;
struct sNode* __dec_obj32;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
void* right_value112;
char* __dec_obj33;
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
void* right_value113;
char* __dec_obj34;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
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
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            result_47->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
        }
        if(_if_conditional97=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional97) {
            __dec_obj32=result_47->mSizeNum;
            result_47->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value111=sNode_clone(self->mSizeNum))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value111) { right_value111 = come_decrement_ref_count2(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            result_47->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            result_47->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional100=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional100) {
            __dec_obj33=result_47->mOriginalTypeName;
            result_47->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value112=string_clone(self->mOriginalTypeName))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            result_47->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            result_47->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            result_47->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            result_47->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            result_47->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            result_47->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            result_47->mInline=self->mInline;
        }
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            result_47->mNullValue=self->mNullValue;
        }
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            result_47->mGuardValue=self->mGuardValue;
        }
        if(_if_conditional110=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional110) {
            __dec_obj34=result_47->mAsmName;
            result_47->mAsmName=(char*)come_increment_ref_count(((char*)(right_value113=string_clone(self->mAsmName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            result_47->mArrayPointerType=self->mArrayPointerType;
        }
        if(_if_conditional112=self!=((void*)0),        _if_conditional112) {
            result_47->mLambdaArray=self->mLambdaArray;
        }
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            result_47->mNoNumberArray=self->mNoNumberArray;
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
                result_54=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value80=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 137, "list$1sTypeph"))))))));
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
                            litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value82=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 151, "list_item$1sTypeph"))));
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
                                litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 161, "list_item$1sTypeph"))));
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
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 171, "list_item$1sTypeph"))));
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
                result_62=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value94=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value93=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 137, "list$1sNodeph"))))))));
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
                            litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value95=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 151, "list_item$1sNodeph"))));
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
                                litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 161, "list_item$1sNodeph"))));
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
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 171, "list_item$1sNodeph"))));
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
                result_70=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value103=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value102=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 137, "list$1charph"))))))));
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
                            litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value104=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 151, "list_item$1charph"))));
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
                                litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value105=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 161, "list_item$1charph"))));
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
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 171, "list_item$1charph"))));
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
_Bool _if_conditional116;
int __result70__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional116=self==((void*)0),        _if_conditional116) {
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
_Bool _if_conditional118;
_Bool _if_conditional119;
struct sGenericsFun* __result72__;
_Bool _if_conditional130;
_Bool _if_conditional131;
struct sGenericsFun* __result73__;
struct sGenericsFun* __result74__;
struct sGenericsFun* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_85, 0, sizeof(unsigned int));
memset(&it_86, 0, sizeof(unsigned int));
            hash_85=string_get_hash_key(((char*)key))%self->size;
            it_86=hash_85;
            while(_while_condtional16=(_Bool)1,            _while_condtional16) {
                if(_if_conditional118=self->item_existance[it_86],                _if_conditional118) {
                    if(_if_conditional119=string_equals(self->keys[it_86],key),                    _if_conditional119) {
                        __result72__ = __result_obj__ = self->items[it_86];
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result72__;
                    }
                    it_86++;
                    if(_if_conditional130=it_86>=self->size,                    _if_conditional130) {
                        it_86=0;
                    }
                    else {
                        if(_if_conditional131=it_86==hash_85,                        _if_conditional131) {
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
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional120=self!=((void*)0)&&self->mImplType!=((void*)0),                            _if_conditional120) {
                                come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional121=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional121) {
                                come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional122=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                            _if_conditional122) {
                                come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional123=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional123) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional124=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional124) {
                                come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional125=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional125) {
                                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional126=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional126) {
                                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional127=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional127) {
                                come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional128=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional128) {
                                self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional129=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                            _if_conditional129) {
                                self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_88;
unsigned int hash_89;
unsigned int it_90;
_Bool _while_condtional17;
_Bool _if_conditional134;
_Bool _if_conditional135;
struct sFun* __result77__;
_Bool _if_conditional151;
_Bool _if_conditional152;
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
                    if(_if_conditional134=self->item_existance[it_90],                    _if_conditional134) {
                        if(_if_conditional135=string_equals(self->keys[it_90],key),                        _if_conditional135) {
                            __result77__ = __result_obj__ = self->items[it_90];
                            come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            return __result77__;
                        }
                        it_90++;
                        if(_if_conditional151=it_90>=self->size,                        _if_conditional151) {
                            it_90=0;
                        }
                        else {
                            if(_if_conditional152=it_90==hash_89,                            _if_conditional152) {
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
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional145;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional136=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional136) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional137=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional137) {
                                    come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional138=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional138) {
                                    come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional139=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional139) {
                                    come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional140=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional140) {
                                    come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional141=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional141) {
                                    come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional142=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional142) {
                                    come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional145=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional145) {
                                    come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional146=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional146) {
                                    come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional147=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional147) {
                                    come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional148=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional148) {
                                    come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional149=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional149) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional150=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional150) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional143;
_Bool _if_conditional144;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional143=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional143) {
                                            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional144=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional144) {
                                            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional154;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional154=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional154) {
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional159;
_Bool _if_conditional160;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional159=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional159) {
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional160=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional160) {
                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional161;
struct list_item$1sTypeph* it_104;
int i_105;
_Bool _while_condtional18;
_Bool _if_conditional162;
struct sType* __result81__;
struct sType* default_value_106;
struct sType* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_104, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_105, 0, sizeof(int));
memset(&default_value_106, 0, sizeof(struct sType*));
            if(_if_conditional161=position<0,            _if_conditional161) {
                position+=self->len;
            }
            it_104=self->head;
            i_105=0;
            while(_while_condtional18=it_104!=((void*)0),            _while_condtional18) {
                if(_if_conditional162=position==i_105,                _if_conditional162) {
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
_Bool _if_conditional167;
void* right_value147;
struct list_item$1CVALUEph* litem_110;
struct CVALUE* __dec_obj48;
_Bool _if_conditional169;
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
            if(_if_conditional167=self->len==0,            _if_conditional167) {
                litem_110=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value147=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 221, "list_item$1CVALUEph"))));
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
                if(_if_conditional169=self->len==1,                _if_conditional169) {
                    litem_111=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value148=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 231, "list_item$1CVALUEph"))));
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
                    litem_112=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value149=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 241, "list_item$1CVALUEph"))));
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
_Bool _if_conditional168;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional168=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional168) {
                        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value150;
struct sNullNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
    ((struct sNodeBase*)(right_value150=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value150,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result85__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result85__;
    come_call_finalizer3(self,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sNullNode_kind(struct sNullNode* self){
void* __result_obj__;
void* right_value151;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
    __result86__ = __result_obj__ = ((char*)(right_value151=__builtin_string("sNullNode")));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result86__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value152;
struct CVALUE* come_value_113;
void* right_value153;
char* __dec_obj51;
void* right_value154;
void* right_value155;
struct sType* __dec_obj52;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
memset(&come_value_113, 0, sizeof(struct CVALUE*));
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
    come_value_113=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value152=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 140, "CVALUE"))));
    come_call_finalizer3(right_value152,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj51=come_value_113->c_value;
    come_value_113->c_value=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("((void*)0)"))));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj52=come_value_113->type;
    come_value_113->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value154=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 143, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value154,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value155,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_113->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_113->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_113));
    __result87__ = (_Bool)1;
    come_call_finalizer3(come_value_113,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result87__;
    come_call_finalizer3(come_value_113,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNodeBase_finalize(struct sNodeBase* self){
void* __result_obj__;
_Bool _if_conditional170;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional170=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional170) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sNode* create_null_node(struct sInfo* info){
void* __result_obj__;
void* right_value156;
void* right_value157;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* right_value160;
struct sNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value160 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 156, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNullNode*)(right_value157=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value156=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 156, "sNullNode")))),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result90__ = __result_obj__ = ((struct sNode*)(right_value160=_inf_value1));
    come_call_finalizer3(right_value156,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value157,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value160) { right_value160 = come_decrement_ref_count2(right_value160, ((struct sNode*)right_value160)->finalize, ((struct sNode*)right_value160)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result90__;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value161;
struct sNilNode* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
    ((struct sNodeBase*)(right_value161=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value161,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result91__ = __result_obj__ = self;
    come_call_finalizer3(self,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result91__;
    come_call_finalizer3(self,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sNilNode_kind(struct sNilNode* self){
void* __result_obj__;
void* right_value162;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
    __result92__ = __result_obj__ = ((char*)(right_value162=__builtin_string("sNilNode")));
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result92__;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value163;
struct CVALUE* come_value_115;
void* right_value164;
char* __dec_obj54;
void* right_value165;
void* right_value166;
struct sType* __dec_obj55;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
memset(&come_value_115, 0, sizeof(struct CVALUE*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
    come_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value163=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 173, "CVALUE"))));
    come_call_finalizer3(right_value163,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj54=come_value_115->c_value;
    come_value_115->c_value=(char*)come_increment_ref_count(((char*)(right_value164=xsprintf("((void*)0)"))));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj55=come_value_115->type;
    come_value_115->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value165=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 176, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value165,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value166,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_115->type->mNullValue=(_Bool)1;
    come_value_115->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_115->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_115));
    __result93__ = (_Bool)1;
    come_call_finalizer3(come_value_115,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result93__;
    come_call_finalizer3(come_value_115,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value167;
void* right_value168;
struct sNode* __dec_obj56;
void* right_value169;
struct sNode* __dec_obj57;
struct sAddNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
    ((struct sNodeBase*)(right_value167=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value167,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj56=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value168=sNode_clone(left))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value168) { right_value168 = come_decrement_ref_count2(right_value168, ((struct sNode*)right_value168)->finalize, ((struct sNode*)right_value168)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj57=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value169=sNode_clone(right))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value169) { right_value169 = come_decrement_ref_count2(right_value169, ((struct sNode*)right_value169)->finalize, ((struct sNode*)right_value169)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result94__ = __result_obj__ = self;
    come_call_finalizer3(self,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result94__;
    come_call_finalizer3(self,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sAddNode_kind(struct sAddNode* self){
void* __result_obj__;
void* right_value170;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
    __result95__ = __result_obj__ = ((char*)(right_value170=__builtin_string("sAddNode")));
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result95__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_116;
_Bool _if_conditional180;
_Bool __result96__;
void* right_value171;
struct CVALUE* __exception_result_var_b1;
struct CVALUE* left_value_117;
struct sNode* right_node_118;
_Bool _if_conditional181;
_Bool __result97__;
void* right_value172;
struct CVALUE* __exception_result_var_b2;
struct CVALUE* right_value_119;
struct sType* type_120;
char* fun_name_121;
_Bool calling_fun_122;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value173;
struct CVALUE* come_value_123;
void* right_value174;
char* __dec_obj58;
void* right_value175;
struct sType* __dec_obj59;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_116, 0, sizeof(struct sNode*));
right_value171 = (void*)0;
memset(&left_value_117, 0, sizeof(struct CVALUE*));
memset(&right_node_118, 0, sizeof(struct sNode*));
right_value172 = (void*)0;
memset(&right_value_119, 0, sizeof(struct CVALUE*));
memset(&type_120, 0, sizeof(struct sType*));
memset(&fun_name_121, 0, sizeof(char*));
memset(&calling_fun_122, 0, sizeof(_Bool));
right_value173 = (void*)0;
memset(&come_value_123, 0, sizeof(struct CVALUE*));
right_value174 = (void*)0;
right_value175 = (void*)0;
    left_node_116=self->mLeft;
    if(_if_conditional180=!node_compile(left_node_116,info),    _if_conditional180) {
        __result96__ = (_Bool)0;
        return __result96__;
    }
    left_value_117=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 213, 6),__exception_result_var_b1=((struct CVALUE*)(right_value171=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b1));
    come_call_finalizer3(right_value171,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_118=self->mRight;
    if(_if_conditional181=!node_compile(right_node_118,info),    _if_conditional181) {
        __result97__ = (_Bool)0;
        come_call_finalizer3(left_value_117,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result97__;
    }
    right_value_119=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 222, 7),__exception_result_var_b2=((struct CVALUE*)(right_value172=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b2));
    come_call_finalizer3(right_value172,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_120=(struct sType*)come_increment_ref_count(left_value_117->type);
    fun_name_121="operator_add";
    if(self->mQuote) {
        calling_fun_122=(_Bool)0;
    }
    else {
        calling_fun_122=operator_overload_fun(type_120,fun_name_121,left_value_117,right_value_119,(_Bool)0,info);
    }
    if(_if_conditional183=!calling_fun_122,    _if_conditional183) {
        come_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value173=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 237, "CVALUE"))));
        come_call_finalizer3(right_value173,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj58=come_value_123->c_value;
        come_value_123->c_value=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("%s+%s",left_value_117->c_value,right_value_119->c_value))));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj59=come_value_123->type;
        come_value_123->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=sType_clone(left_value_117->type))));
        come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value175,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_123->type->mHeap=(_Bool)0;
        come_value_123->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_123->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_123));
        come_call_finalizer3(come_value_123,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result98__ = (_Bool)1;
    come_call_finalizer3(left_value_117,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result98__;
    come_call_finalizer3(left_value_117,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value176;
void* right_value177;
struct sNode* __dec_obj60;
void* right_value178;
struct sNode* __dec_obj61;
struct sSubNode* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
    ((struct sNodeBase*)(right_value176=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value176,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj60=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value177=sNode_clone(left))));
    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value177) { right_value177 = come_decrement_ref_count2(right_value177, ((struct sNode*)right_value177)->finalize, ((struct sNode*)right_value177)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj61=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value178=sNode_clone(right))));
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value178) { right_value178 = come_decrement_ref_count2(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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

char* sSubNode_kind(struct sSubNode* self){
void* __result_obj__;
void* right_value179;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
    __result100__ = __result_obj__ = ((char*)(right_value179=__builtin_string("sSubNode")));
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result100__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_124;
_Bool _if_conditional187;
_Bool __result101__;
void* right_value180;
struct CVALUE* __exception_result_var_b3;
struct CVALUE* left_value_125;
struct sNode* right_node_126;
_Bool _if_conditional188;
_Bool __result102__;
void* right_value181;
struct CVALUE* __exception_result_var_b4;
struct CVALUE* right_value_127;
struct sType* type_128;
char* fun_name_129;
_Bool calling_fun_130;
_Bool _if_conditional189;
_Bool _if_conditional190;
void* right_value182;
struct CVALUE* come_value_131;
void* right_value183;
char* __dec_obj62;
void* right_value184;
struct sType* __dec_obj63;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_124, 0, sizeof(struct sNode*));
right_value180 = (void*)0;
memset(&left_value_125, 0, sizeof(struct CVALUE*));
memset(&right_node_126, 0, sizeof(struct sNode*));
right_value181 = (void*)0;
memset(&right_value_127, 0, sizeof(struct CVALUE*));
memset(&type_128, 0, sizeof(struct sType*));
memset(&fun_name_129, 0, sizeof(char*));
memset(&calling_fun_130, 0, sizeof(_Bool));
right_value182 = (void*)0;
memset(&come_value_131, 0, sizeof(struct CVALUE*));
right_value183 = (void*)0;
right_value184 = (void*)0;
    left_node_124=self->mLeft;
    if(_if_conditional187=!node_compile(left_node_124,info),    _if_conditional187) {
        __result101__ = (_Bool)0;
        return __result101__;
    }
    left_value_125=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 278, 8),__exception_result_var_b3=((struct CVALUE*)(right_value180=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b3));
    come_call_finalizer3(right_value180,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_126=self->mRight;
    if(_if_conditional188=!node_compile(right_node_126,info),    _if_conditional188) {
        __result102__ = (_Bool)0;
        come_call_finalizer3(left_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result102__;
    }
    right_value_127=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 287, 9),__exception_result_var_b4=((struct CVALUE*)(right_value181=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b4));
    come_call_finalizer3(right_value181,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_128=(struct sType*)come_increment_ref_count(left_value_125->type);
    fun_name_129="operator_sub";
    if(self->mQuote) {
        calling_fun_130=(_Bool)0;
    }
    else {
        calling_fun_130=operator_overload_fun(type_128,fun_name_129,left_value_125,right_value_127,(_Bool)0,info);
    }
    if(_if_conditional190=!calling_fun_130,    _if_conditional190) {
        come_value_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 302, "CVALUE"))));
        come_call_finalizer3(right_value182,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj62=come_value_131->c_value;
        come_value_131->c_value=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("%s-%s",left_value_125->c_value,right_value_127->c_value))));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj63=come_value_131->type;
        come_value_131->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_clone(left_value_125->type))));
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value184,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_131->type->mHeap=(_Bool)0;
        come_value_131->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_131->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_131));
        come_call_finalizer3(come_value_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result103__ = (_Bool)1;
    come_call_finalizer3(left_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_128,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result103__;
    come_call_finalizer3(left_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_128,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value185;
void* right_value186;
struct sNode* __dec_obj64;
void* right_value187;
struct sNode* __dec_obj65;
struct sMultNode* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
    ((struct sNodeBase*)(right_value185=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value185,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj64=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value186=sNode_clone(left))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value186) { right_value186 = come_decrement_ref_count2(right_value186, ((struct sNode*)right_value186)->finalize, ((struct sNode*)right_value186)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj65=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value187=sNode_clone(right))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value187) { right_value187 = come_decrement_ref_count2(right_value187, ((struct sNode*)right_value187)->finalize, ((struct sNode*)right_value187)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result104__ = __result_obj__ = self;
    come_call_finalizer3(self,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result104__;
    come_call_finalizer3(self,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sMultNode_kind(struct sMultNode* self){
void* __result_obj__;
void* right_value188;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
    __result105__ = __result_obj__ = ((char*)(right_value188=__builtin_string("sMultNode")));
    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result105__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_132;
_Bool _if_conditional194;
_Bool __result106__;
void* right_value189;
struct CVALUE* __exception_result_var_b5;
struct CVALUE* left_value_133;
struct sNode* right_node_134;
_Bool _if_conditional195;
_Bool __result107__;
void* right_value190;
struct CVALUE* __exception_result_var_b6;
struct CVALUE* right_value_135;
struct sType* type_136;
char* fun_name_137;
_Bool calling_fun_138;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value191;
struct CVALUE* come_value_139;
void* right_value192;
char* __dec_obj66;
void* right_value193;
struct sType* __dec_obj67;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_132, 0, sizeof(struct sNode*));
right_value189 = (void*)0;
memset(&left_value_133, 0, sizeof(struct CVALUE*));
memset(&right_node_134, 0, sizeof(struct sNode*));
right_value190 = (void*)0;
memset(&right_value_135, 0, sizeof(struct CVALUE*));
memset(&type_136, 0, sizeof(struct sType*));
memset(&fun_name_137, 0, sizeof(char*));
memset(&calling_fun_138, 0, sizeof(_Bool));
right_value191 = (void*)0;
memset(&come_value_139, 0, sizeof(struct CVALUE*));
right_value192 = (void*)0;
right_value193 = (void*)0;
    left_node_132=self->mLeft;
    if(_if_conditional194=!node_compile(left_node_132,info),    _if_conditional194) {
        __result106__ = (_Bool)0;
        return __result106__;
    }
    left_value_133=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 343, 10),__exception_result_var_b5=((struct CVALUE*)(right_value189=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b5));
    come_call_finalizer3(right_value189,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_134=self->mRight;
    if(_if_conditional195=!node_compile(right_node_134,info),    _if_conditional195) {
        __result107__ = (_Bool)0;
        come_call_finalizer3(left_value_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result107__;
    }
    right_value_135=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 352, 11),__exception_result_var_b6=((struct CVALUE*)(right_value190=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b6));
    come_call_finalizer3(right_value190,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_136=(struct sType*)come_increment_ref_count(left_value_133->type);
    fun_name_137="operator_mult";
    if(self->mQuote) {
        calling_fun_138=(_Bool)0;
    }
    else {
        calling_fun_138=operator_overload_fun(type_136,fun_name_137,left_value_133,right_value_135,(_Bool)0,info);
    }
    if(_if_conditional197=!calling_fun_138,    _if_conditional197) {
        come_value_139=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 367, "CVALUE"))));
        come_call_finalizer3(right_value191,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj66=come_value_139->c_value;
        come_value_139->c_value=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("%s*%s",left_value_133->c_value,right_value_135->c_value))));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj67=come_value_139->type;
        come_value_139->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(left_value_133->type))));
        come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value193,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_139->type->mHeap=(_Bool)0;
        come_value_139->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_139->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_139));
        come_call_finalizer3(come_value_139,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result108__ = (_Bool)1;
    come_call_finalizer3(left_value_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_136,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result108__;
    come_call_finalizer3(left_value_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_136,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value194;
void* right_value195;
struct sNode* __dec_obj68;
void* right_value196;
struct sNode* __dec_obj69;
struct sDivNode* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
    ((struct sNodeBase*)(right_value194=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value194,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj68=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value195=sNode_clone(left))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value195) { right_value195 = come_decrement_ref_count2(right_value195, ((struct sNode*)right_value195)->finalize, ((struct sNode*)right_value195)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj69=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value196=sNode_clone(right))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value196) { right_value196 = come_decrement_ref_count2(right_value196, ((struct sNode*)right_value196)->finalize, ((struct sNode*)right_value196)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result109__ = __result_obj__ = self;
    come_call_finalizer3(self,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result109__;
    come_call_finalizer3(self,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sDivNode_kind(struct sDivNode* self){
void* __result_obj__;
void* right_value197;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value197 = (void*)0;
    __result110__ = __result_obj__ = ((char*)(right_value197=__builtin_string("sDivNode")));
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result110__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_140;
_Bool _if_conditional201;
_Bool __result111__;
void* right_value198;
struct CVALUE* __exception_result_var_b7;
struct CVALUE* left_value_141;
struct sNode* right_node_142;
_Bool _if_conditional202;
_Bool __result112__;
void* right_value199;
struct CVALUE* __exception_result_var_b8;
struct CVALUE* right_value_143;
struct sType* type_144;
char* fun_name_145;
_Bool calling_fun_146;
_Bool _if_conditional203;
_Bool _if_conditional204;
void* right_value200;
struct CVALUE* come_value_147;
void* right_value201;
char* __dec_obj70;
void* right_value202;
struct sType* __dec_obj71;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_140, 0, sizeof(struct sNode*));
right_value198 = (void*)0;
memset(&left_value_141, 0, sizeof(struct CVALUE*));
memset(&right_node_142, 0, sizeof(struct sNode*));
right_value199 = (void*)0;
memset(&right_value_143, 0, sizeof(struct CVALUE*));
memset(&type_144, 0, sizeof(struct sType*));
memset(&fun_name_145, 0, sizeof(char*));
memset(&calling_fun_146, 0, sizeof(_Bool));
right_value200 = (void*)0;
memset(&come_value_147, 0, sizeof(struct CVALUE*));
right_value201 = (void*)0;
right_value202 = (void*)0;
    left_node_140=self->mLeft;
    if(_if_conditional201=!node_compile(left_node_140,info),    _if_conditional201) {
        __result111__ = (_Bool)0;
        return __result111__;
    }
    left_value_141=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 408, 12),__exception_result_var_b7=((struct CVALUE*)(right_value198=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b7));
    come_call_finalizer3(right_value198,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_142=self->mRight;
    if(_if_conditional202=!node_compile(right_node_142,info),    _if_conditional202) {
        __result112__ = (_Bool)0;
        come_call_finalizer3(left_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result112__;
    }
    right_value_143=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 417, 13),__exception_result_var_b8=((struct CVALUE*)(right_value199=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b8));
    come_call_finalizer3(right_value199,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_144=(struct sType*)come_increment_ref_count(left_value_141->type);
    fun_name_145="operator_div";
    if(self->mQuote) {
        calling_fun_146=(_Bool)0;
    }
    else {
        calling_fun_146=operator_overload_fun(type_144,fun_name_145,left_value_141,right_value_143,(_Bool)0,info);
    }
    if(_if_conditional204=!calling_fun_146,    _if_conditional204) {
        come_value_147=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value200=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 432, "CVALUE"))));
        come_call_finalizer3(right_value200,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj70=come_value_147->c_value;
        come_value_147->c_value=(char*)come_increment_ref_count(((char*)(right_value201=xsprintf("%s/%s",left_value_141->c_value,right_value_143->c_value))));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj71=come_value_147->type;
        come_value_147->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_clone(left_value_141->type))));
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value202,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_147->type->mHeap=(_Bool)0;
        come_value_147->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_147->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_147));
        come_call_finalizer3(come_value_147,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result113__ = (_Bool)1;
    come_call_finalizer3(left_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_143,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_144,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result113__;
    come_call_finalizer3(left_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_143,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_144,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value203;
void* right_value204;
struct sNode* __dec_obj72;
void* right_value205;
struct sNode* __dec_obj73;
struct sModNode* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
    ((struct sNodeBase*)(right_value203=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value203,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj72=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value204=sNode_clone(left))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value204) { right_value204 = come_decrement_ref_count2(right_value204, ((struct sNode*)right_value204)->finalize, ((struct sNode*)right_value204)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj73=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value205=sNode_clone(right))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value205) { right_value205 = come_decrement_ref_count2(right_value205, ((struct sNode*)right_value205)->finalize, ((struct sNode*)right_value205)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result114__ = __result_obj__ = self;
    come_call_finalizer3(self,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result114__;
    come_call_finalizer3(self,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sModNode_kind(struct sModNode* self){
void* __result_obj__;
void* right_value206;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
    __result115__ = __result_obj__ = ((char*)(right_value206=__builtin_string("sModNode")));
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result115__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_148;
_Bool _if_conditional208;
_Bool __result116__;
void* right_value207;
struct CVALUE* __exception_result_var_b9;
struct CVALUE* left_value_149;
struct sNode* right_node_150;
_Bool _if_conditional209;
_Bool __result117__;
void* right_value208;
struct CVALUE* __exception_result_var_b10;
struct CVALUE* right_value_151;
struct sType* type_152;
char* fun_name_153;
_Bool calling_fun_154;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value209;
struct CVALUE* come_value_155;
void* right_value210;
char* __dec_obj74;
void* right_value211;
struct sType* __dec_obj75;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_148, 0, sizeof(struct sNode*));
right_value207 = (void*)0;
memset(&left_value_149, 0, sizeof(struct CVALUE*));
memset(&right_node_150, 0, sizeof(struct sNode*));
right_value208 = (void*)0;
memset(&right_value_151, 0, sizeof(struct CVALUE*));
memset(&type_152, 0, sizeof(struct sType*));
memset(&fun_name_153, 0, sizeof(char*));
memset(&calling_fun_154, 0, sizeof(_Bool));
right_value209 = (void*)0;
memset(&come_value_155, 0, sizeof(struct CVALUE*));
right_value210 = (void*)0;
right_value211 = (void*)0;
    left_node_148=self->mLeft;
    if(_if_conditional208=!node_compile(left_node_148,info),    _if_conditional208) {
        __result116__ = (_Bool)0;
        return __result116__;
    }
    left_value_149=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 473, 14),__exception_result_var_b9=((struct CVALUE*)(right_value207=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b9));
    come_call_finalizer3(right_value207,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_150=self->mRight;
    if(_if_conditional209=!node_compile(right_node_150,info),    _if_conditional209) {
        __result117__ = (_Bool)0;
        come_call_finalizer3(left_value_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result117__;
    }
    right_value_151=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 482, 15),__exception_result_var_b10=((struct CVALUE*)(right_value208=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b10));
    come_call_finalizer3(right_value208,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_152=(struct sType*)come_increment_ref_count(left_value_149->type);
    fun_name_153="operator_mod";
    if(self->mQuote) {
        calling_fun_154=(_Bool)0;
    }
    else {
        calling_fun_154=operator_overload_fun(type_152,fun_name_153,left_value_149,right_value_151,(_Bool)0,info);
    }
    if(_if_conditional211=!calling_fun_154,    _if_conditional211) {
        come_value_155=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 497, "CVALUE"))));
        come_call_finalizer3(right_value209,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj74=come_value_155->c_value;
        come_value_155->c_value=(char*)come_increment_ref_count(((char*)(right_value210=xsprintf("%s%%%s",left_value_149->c_value,right_value_151->c_value))));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj75=come_value_155->type;
        come_value_155->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=sType_clone(left_value_149->type))));
        come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value211,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_155->type->mHeap=(_Bool)0;
        come_value_155->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_155->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_155));
        come_call_finalizer3(come_value_155,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result118__ = (_Bool)1;
    come_call_finalizer3(left_value_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_152,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result118__;
    come_call_finalizer3(left_value_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_152,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value212;
void* right_value213;
struct sNode* __dec_obj76;
void* right_value214;
struct sNode* __dec_obj77;
struct sLShiftNode* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
    ((struct sNodeBase*)(right_value212=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value212,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj76=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value213=sNode_clone(left))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value213) { right_value213 = come_decrement_ref_count2(right_value213, ((struct sNode*)right_value213)->finalize, ((struct sNode*)right_value213)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj77=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value214=sNode_clone(right))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value214) { right_value214 = come_decrement_ref_count2(right_value214, ((struct sNode*)right_value214)->finalize, ((struct sNode*)right_value214)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result119__ = __result_obj__ = self;
    come_call_finalizer3(self,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result119__;
    come_call_finalizer3(self,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sLShiftNode_kind(struct sLShiftNode* self){
void* __result_obj__;
void* right_value215;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
    __result120__ = __result_obj__ = ((char*)(right_value215=__builtin_string("sLShiftNode")));
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result120__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_156;
_Bool _if_conditional215;
_Bool __result121__;
void* right_value216;
struct CVALUE* __exception_result_var_b11;
struct CVALUE* left_value_157;
struct sNode* right_node_158;
_Bool _if_conditional216;
_Bool __result122__;
void* right_value217;
struct CVALUE* __exception_result_var_b12;
struct CVALUE* right_value_159;
struct sType* type_160;
char* fun_name_161;
_Bool calling_fun_162;
_Bool _if_conditional217;
_Bool _if_conditional218;
void* right_value218;
struct CVALUE* come_value_163;
void* right_value219;
char* __dec_obj78;
void* right_value220;
struct sType* __dec_obj79;
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_156, 0, sizeof(struct sNode*));
right_value216 = (void*)0;
memset(&left_value_157, 0, sizeof(struct CVALUE*));
memset(&right_node_158, 0, sizeof(struct sNode*));
right_value217 = (void*)0;
memset(&right_value_159, 0, sizeof(struct CVALUE*));
memset(&type_160, 0, sizeof(struct sType*));
memset(&fun_name_161, 0, sizeof(char*));
memset(&calling_fun_162, 0, sizeof(_Bool));
right_value218 = (void*)0;
memset(&come_value_163, 0, sizeof(struct CVALUE*));
right_value219 = (void*)0;
right_value220 = (void*)0;
    left_node_156=self->mLeft;
    if(_if_conditional215=!node_compile(left_node_156,info),    _if_conditional215) {
        __result121__ = (_Bool)0;
        return __result121__;
    }
    left_value_157=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 539, 16),__exception_result_var_b11=((struct CVALUE*)(right_value216=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b11));
    come_call_finalizer3(right_value216,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_158=self->mRight;
    if(_if_conditional216=!node_compile(right_node_158,info),    _if_conditional216) {
        __result122__ = (_Bool)0;
        come_call_finalizer3(left_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result122__;
    }
    right_value_159=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 548, 17),__exception_result_var_b12=((struct CVALUE*)(right_value217=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b12));
    come_call_finalizer3(right_value217,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_160=(struct sType*)come_increment_ref_count(left_value_157->type);
    fun_name_161="operator_lshift";
    if(self->mQuote) {
        calling_fun_162=(_Bool)0;
    }
    else {
        calling_fun_162=operator_overload_fun(type_160,fun_name_161,left_value_157,right_value_159,(_Bool)0,info);
    }
    if(_if_conditional218=!calling_fun_162,    _if_conditional218) {
        come_value_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value218=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 563, "CVALUE"))));
        come_call_finalizer3(right_value218,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj78=come_value_163->c_value;
        come_value_163->c_value=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("%s<<%s",left_value_157->c_value,right_value_159->c_value))));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj79=come_value_163->type;
        come_value_163->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_clone(left_value_157->type))));
        come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value220,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_163->type->mHeap=(_Bool)0;
        come_value_163->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_163->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_163));
        come_call_finalizer3(come_value_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result123__ = (_Bool)1;
    come_call_finalizer3(left_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_159,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_160,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result123__;
    come_call_finalizer3(left_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_159,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_160,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value221;
void* right_value222;
struct sNode* __dec_obj80;
void* right_value223;
struct sNode* __dec_obj81;
struct sRShiftNode* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
    ((struct sNodeBase*)(right_value221=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value221,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj80=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value222=sNode_clone(left))));
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value222) { right_value222 = come_decrement_ref_count2(right_value222, ((struct sNode*)right_value222)->finalize, ((struct sNode*)right_value222)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj81=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value223=sNode_clone(right))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value223) { right_value223 = come_decrement_ref_count2(right_value223, ((struct sNode*)right_value223)->finalize, ((struct sNode*)right_value223)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result124__ = __result_obj__ = self;
    come_call_finalizer3(self,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result124__;
    come_call_finalizer3(self,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sRShiftNode_kind(struct sRShiftNode* self){
void* __result_obj__;
void* right_value224;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value224 = (void*)0;
    __result125__ = __result_obj__ = ((char*)(right_value224=__builtin_string("sRShiftNode")));
    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result125__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_164;
_Bool _if_conditional222;
_Bool __result126__;
void* right_value225;
struct CVALUE* __exception_result_var_b13;
struct CVALUE* left_value_165;
struct sNode* right_node_166;
_Bool _if_conditional223;
_Bool __result127__;
void* right_value226;
struct CVALUE* __exception_result_var_b14;
struct CVALUE* right_value_167;
struct sType* type_168;
char* fun_name_169;
_Bool calling_fun_170;
_Bool _if_conditional224;
_Bool _if_conditional225;
void* right_value227;
struct CVALUE* come_value_171;
void* right_value228;
char* __dec_obj82;
void* right_value229;
struct sType* __dec_obj83;
_Bool __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_164, 0, sizeof(struct sNode*));
right_value225 = (void*)0;
memset(&left_value_165, 0, sizeof(struct CVALUE*));
memset(&right_node_166, 0, sizeof(struct sNode*));
right_value226 = (void*)0;
memset(&right_value_167, 0, sizeof(struct CVALUE*));
memset(&type_168, 0, sizeof(struct sType*));
memset(&fun_name_169, 0, sizeof(char*));
memset(&calling_fun_170, 0, sizeof(_Bool));
right_value227 = (void*)0;
memset(&come_value_171, 0, sizeof(struct CVALUE*));
right_value228 = (void*)0;
right_value229 = (void*)0;
    left_node_164=self->mLeft;
    if(_if_conditional222=!node_compile(left_node_164,info),    _if_conditional222) {
        __result126__ = (_Bool)0;
        return __result126__;
    }
    left_value_165=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 604, 18),__exception_result_var_b13=((struct CVALUE*)(right_value225=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b13));
    come_call_finalizer3(right_value225,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_166=self->mRight;
    if(_if_conditional223=!node_compile(right_node_166,info),    _if_conditional223) {
        __result127__ = (_Bool)0;
        come_call_finalizer3(left_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result127__;
    }
    right_value_167=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 613, 19),__exception_result_var_b14=((struct CVALUE*)(right_value226=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b14));
    come_call_finalizer3(right_value226,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_168=(struct sType*)come_increment_ref_count(left_value_165->type);
    fun_name_169="operator_rshift";
    if(self->mQuote) {
        calling_fun_170=(_Bool)0;
    }
    else {
        calling_fun_170=operator_overload_fun(type_168,fun_name_169,left_value_165,right_value_167,(_Bool)0,info);
    }
    if(_if_conditional225=!calling_fun_170,    _if_conditional225) {
        come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value227=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 628, "CVALUE"))));
        come_call_finalizer3(right_value227,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj82=come_value_171->c_value;
        come_value_171->c_value=(char*)come_increment_ref_count(((char*)(right_value228=xsprintf("%s>>%s",left_value_165->c_value,right_value_167->c_value))));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj83=come_value_171->type;
        come_value_171->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=sType_clone(left_value_165->type))));
        come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value229,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_171->type->mHeap=(_Bool)0;
        come_value_171->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_171->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_171));
        come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result128__ = (_Bool)1;
    come_call_finalizer3(left_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_168,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result128__;
    come_call_finalizer3(left_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_168,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value230;
void* right_value231;
struct sNode* __dec_obj84;
void* right_value232;
struct sNode* __dec_obj85;
struct sGtEqNode* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
    ((struct sNodeBase*)(right_value230=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value230,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj84=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value231=sNode_clone(left))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value231) { right_value231 = come_decrement_ref_count2(right_value231, ((struct sNode*)right_value231)->finalize, ((struct sNode*)right_value231)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj85=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value232=sNode_clone(right))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value232) { right_value232 = come_decrement_ref_count2(right_value232, ((struct sNode*)right_value232)->finalize, ((struct sNode*)right_value232)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result129__ = __result_obj__ = self;
    come_call_finalizer3(self,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result129__;
    come_call_finalizer3(self,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sGtEqNode_kind(struct sGtEqNode* self){
void* __result_obj__;
void* right_value233;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value233 = (void*)0;
    __result130__ = __result_obj__ = ((char*)(right_value233=__builtin_string("sGtEqNode")));
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result130__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_172;
_Bool _if_conditional229;
_Bool __result131__;
void* right_value234;
struct CVALUE* __exception_result_var_b15;
struct CVALUE* left_value_173;
struct sNode* right_node_174;
_Bool _if_conditional230;
_Bool __result132__;
void* right_value235;
struct CVALUE* __exception_result_var_b16;
struct CVALUE* right_value_175;
struct sType* type_176;
char* fun_name_177;
_Bool calling_fun_178;
_Bool _if_conditional231;
_Bool _if_conditional232;
void* right_value236;
struct CVALUE* come_value_179;
void* right_value237;
char* __dec_obj86;
void* right_value238;
struct sType* __dec_obj87;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_172, 0, sizeof(struct sNode*));
right_value234 = (void*)0;
memset(&left_value_173, 0, sizeof(struct CVALUE*));
memset(&right_node_174, 0, sizeof(struct sNode*));
right_value235 = (void*)0;
memset(&right_value_175, 0, sizeof(struct CVALUE*));
memset(&type_176, 0, sizeof(struct sType*));
memset(&fun_name_177, 0, sizeof(char*));
memset(&calling_fun_178, 0, sizeof(_Bool));
right_value236 = (void*)0;
memset(&come_value_179, 0, sizeof(struct CVALUE*));
right_value237 = (void*)0;
right_value238 = (void*)0;
    left_node_172=self->mLeft;
    if(_if_conditional229=!node_compile(left_node_172,info),    _if_conditional229) {
        __result131__ = (_Bool)0;
        return __result131__;
    }
    left_value_173=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 669, 20),__exception_result_var_b15=((struct CVALUE*)(right_value234=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b15));
    come_call_finalizer3(right_value234,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_174=self->mRight;
    if(_if_conditional230=!node_compile(right_node_174,info),    _if_conditional230) {
        __result132__ = (_Bool)0;
        come_call_finalizer3(left_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result132__;
    }
    right_value_175=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 678, 21),__exception_result_var_b16=((struct CVALUE*)(right_value235=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b16));
    come_call_finalizer3(right_value235,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_176=(struct sType*)come_increment_ref_count(left_value_173->type);
    fun_name_177="operator_gteq";
    if(self->mQuote) {
        calling_fun_178=(_Bool)0;
    }
    else {
        calling_fun_178=operator_overload_fun(type_176,fun_name_177,left_value_173,right_value_175,(_Bool)0,info);
    }
    if(_if_conditional232=!calling_fun_178,    _if_conditional232) {
        come_value_179=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value236=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 693, "CVALUE"))));
        come_call_finalizer3(right_value236,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj86=come_value_179->c_value;
        come_value_179->c_value=(char*)come_increment_ref_count(((char*)(right_value237=xsprintf("%s>=%s",left_value_173->c_value,right_value_175->c_value))));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj87=come_value_179->type;
        come_value_179->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value238=sType_clone(left_value_173->type))));
        come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value238,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_179->type->mHeap=(_Bool)0;
        come_value_179->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_179->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_179));
        come_call_finalizer3(come_value_179,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result133__ = (_Bool)1;
    come_call_finalizer3(left_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_176,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result133__;
    come_call_finalizer3(left_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_176,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value239;
void* right_value240;
struct sNode* __dec_obj88;
void* right_value241;
struct sNode* __dec_obj89;
struct sLtEqNode* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
    ((struct sNodeBase*)(right_value239=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value239,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj88=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value240=sNode_clone(left))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value240) { right_value240 = come_decrement_ref_count2(right_value240, ((struct sNode*)right_value240)->finalize, ((struct sNode*)right_value240)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj89=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value241=sNode_clone(right))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value241) { right_value241 = come_decrement_ref_count2(right_value241, ((struct sNode*)right_value241)->finalize, ((struct sNode*)right_value241)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result134__ = __result_obj__ = self;
    come_call_finalizer3(self,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result134__;
    come_call_finalizer3(self,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sLtEqNode_kind(struct sLtEqNode* self){
void* __result_obj__;
void* right_value242;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value242 = (void*)0;
    __result135__ = __result_obj__ = ((char*)(right_value242=__builtin_string("sLtEqNode")));
    right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result135__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_180;
_Bool _if_conditional236;
_Bool __result136__;
void* right_value243;
struct CVALUE* __exception_result_var_b17;
struct CVALUE* left_value_181;
struct sNode* right_node_182;
_Bool _if_conditional237;
_Bool __result137__;
void* right_value244;
struct CVALUE* __exception_result_var_b18;
struct CVALUE* right_value_183;
struct sType* type_184;
char* fun_name_185;
_Bool calling_fun_186;
_Bool _if_conditional238;
_Bool _if_conditional239;
void* right_value245;
struct CVALUE* come_value_187;
void* right_value246;
char* __dec_obj90;
void* right_value247;
struct sType* __dec_obj91;
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_180, 0, sizeof(struct sNode*));
right_value243 = (void*)0;
memset(&left_value_181, 0, sizeof(struct CVALUE*));
memset(&right_node_182, 0, sizeof(struct sNode*));
right_value244 = (void*)0;
memset(&right_value_183, 0, sizeof(struct CVALUE*));
memset(&type_184, 0, sizeof(struct sType*));
memset(&fun_name_185, 0, sizeof(char*));
memset(&calling_fun_186, 0, sizeof(_Bool));
right_value245 = (void*)0;
memset(&come_value_187, 0, sizeof(struct CVALUE*));
right_value246 = (void*)0;
right_value247 = (void*)0;
    left_node_180=self->mLeft;
    if(_if_conditional236=!node_compile(left_node_180,info),    _if_conditional236) {
        __result136__ = (_Bool)0;
        return __result136__;
    }
    left_value_181=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 734, 22),__exception_result_var_b17=((struct CVALUE*)(right_value243=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b17));
    come_call_finalizer3(right_value243,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_182=self->mRight;
    if(_if_conditional237=!node_compile(right_node_182,info),    _if_conditional237) {
        __result137__ = (_Bool)0;
        come_call_finalizer3(left_value_181,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result137__;
    }
    right_value_183=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 743, 23),__exception_result_var_b18=((struct CVALUE*)(right_value244=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b18));
    come_call_finalizer3(right_value244,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_184=(struct sType*)come_increment_ref_count(left_value_181->type);
    fun_name_185="operator_lteq";
    if(self->mQuote) {
        calling_fun_186=(_Bool)0;
    }
    else {
        calling_fun_186=operator_overload_fun(type_184,fun_name_185,left_value_181,right_value_183,(_Bool)0,info);
    }
    if(_if_conditional239=!calling_fun_186,    _if_conditional239) {
        come_value_187=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value245=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 758, "CVALUE"))));
        come_call_finalizer3(right_value245,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj90=come_value_187->c_value;
        come_value_187->c_value=(char*)come_increment_ref_count(((char*)(right_value246=xsprintf("%s<=%s",left_value_181->c_value,right_value_183->c_value))));
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj91=come_value_187->type;
        come_value_187->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value247=sType_clone(left_value_181->type))));
        come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value247,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_187->type->mHeap=(_Bool)0;
        come_value_187->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_187->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_187));
        come_call_finalizer3(come_value_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result138__ = (_Bool)1;
    come_call_finalizer3(left_value_181,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_184,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result138__;
    come_call_finalizer3(left_value_181,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_184,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value248;
void* right_value249;
struct sNode* __dec_obj92;
void* right_value250;
struct sNode* __dec_obj93;
struct sLtNode* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
    ((struct sNodeBase*)(right_value248=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value248,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj92=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value249=sNode_clone(left))));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count2(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value249) { right_value249 = come_decrement_ref_count2(right_value249, ((struct sNode*)right_value249)->finalize, ((struct sNode*)right_value249)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj93=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value250=sNode_clone(right))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value250) { right_value250 = come_decrement_ref_count2(right_value250, ((struct sNode*)right_value250)->finalize, ((struct sNode*)right_value250)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result139__ = __result_obj__ = self;
    come_call_finalizer3(self,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result139__;
    come_call_finalizer3(self,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sLtNode_kind(struct sLtNode* self){
void* __result_obj__;
void* right_value251;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value251 = (void*)0;
    __result140__ = __result_obj__ = ((char*)(right_value251=__builtin_string("sLtNode")));
    right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result140__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_188;
_Bool _if_conditional243;
_Bool __result141__;
void* right_value252;
struct CVALUE* __exception_result_var_b19;
struct CVALUE* left_value_189;
struct sNode* right_node_190;
_Bool _if_conditional244;
_Bool __result142__;
void* right_value253;
struct CVALUE* __exception_result_var_b20;
struct CVALUE* right_value_191;
struct sType* type_192;
char* fun_name_193;
_Bool calling_fun_194;
_Bool _if_conditional245;
_Bool _if_conditional246;
void* right_value254;
struct CVALUE* come_value_195;
void* right_value255;
char* __dec_obj94;
void* right_value256;
struct sType* __dec_obj95;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_188, 0, sizeof(struct sNode*));
right_value252 = (void*)0;
memset(&left_value_189, 0, sizeof(struct CVALUE*));
memset(&right_node_190, 0, sizeof(struct sNode*));
right_value253 = (void*)0;
memset(&right_value_191, 0, sizeof(struct CVALUE*));
memset(&type_192, 0, sizeof(struct sType*));
memset(&fun_name_193, 0, sizeof(char*));
memset(&calling_fun_194, 0, sizeof(_Bool));
right_value254 = (void*)0;
memset(&come_value_195, 0, sizeof(struct CVALUE*));
right_value255 = (void*)0;
right_value256 = (void*)0;
    left_node_188=self->mLeft;
    if(_if_conditional243=!node_compile(left_node_188,info),    _if_conditional243) {
        __result141__ = (_Bool)0;
        return __result141__;
    }
    left_value_189=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 799, 24),__exception_result_var_b19=((struct CVALUE*)(right_value252=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b19));
    come_call_finalizer3(right_value252,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_190=self->mRight;
    if(_if_conditional244=!node_compile(right_node_190,info),    _if_conditional244) {
        __result142__ = (_Bool)0;
        come_call_finalizer3(left_value_189,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result142__;
    }
    right_value_191=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 808, 25),__exception_result_var_b20=((struct CVALUE*)(right_value253=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b20));
    come_call_finalizer3(right_value253,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_192=(struct sType*)come_increment_ref_count(left_value_189->type);
    fun_name_193="operator_lt";
    if(self->mQuote) {
        calling_fun_194=(_Bool)0;
    }
    else {
        calling_fun_194=operator_overload_fun(type_192,fun_name_193,left_value_189,right_value_191,(_Bool)0,info);
    }
    if(_if_conditional246=!calling_fun_194,    _if_conditional246) {
        come_value_195=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value254=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 823, "CVALUE"))));
        come_call_finalizer3(right_value254,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj94=come_value_195->c_value;
        come_value_195->c_value=(char*)come_increment_ref_count(((char*)(right_value255=xsprintf("%s<%s",left_value_189->c_value,right_value_191->c_value))));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj95=come_value_195->type;
        come_value_195->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value256=sType_clone(left_value_189->type))));
        come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value256,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_195->type->mHeap=(_Bool)0;
        come_value_195->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_195->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_195));
        come_call_finalizer3(come_value_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result143__ = (_Bool)1;
    come_call_finalizer3(left_value_189,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_191,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_192,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result143__;
    come_call_finalizer3(left_value_189,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_191,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_192,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value257;
void* right_value258;
struct sNode* __dec_obj96;
void* right_value259;
struct sNode* __dec_obj97;
struct sGtNode* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
    ((struct sNodeBase*)(right_value257=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value257,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj96=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value258=sNode_clone(left))));
    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value258) { right_value258 = come_decrement_ref_count2(right_value258, ((struct sNode*)right_value258)->finalize, ((struct sNode*)right_value258)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj97=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value259=sNode_clone(right))));
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value259) { right_value259 = come_decrement_ref_count2(right_value259, ((struct sNode*)right_value259)->finalize, ((struct sNode*)right_value259)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result144__ = __result_obj__ = self;
    come_call_finalizer3(self,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result144__;
    come_call_finalizer3(self,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sGtNode_kind(struct sGtNode* self){
void* __result_obj__;
void* right_value260;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value260 = (void*)0;
    __result145__ = __result_obj__ = ((char*)(right_value260=__builtin_string("sGtNode")));
    right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result145__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_196;
_Bool _if_conditional250;
_Bool __result146__;
void* right_value261;
struct CVALUE* __exception_result_var_b21;
struct CVALUE* left_value_197;
struct sNode* right_node_198;
_Bool _if_conditional251;
_Bool __result147__;
void* right_value262;
struct CVALUE* __exception_result_var_b22;
struct CVALUE* right_value_199;
struct sType* type_200;
char* fun_name_201;
_Bool calling_fun_202;
_Bool _if_conditional252;
_Bool _if_conditional253;
void* right_value263;
struct CVALUE* come_value_203;
void* right_value264;
char* __dec_obj98;
void* right_value265;
struct sType* __dec_obj99;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_196, 0, sizeof(struct sNode*));
right_value261 = (void*)0;
memset(&left_value_197, 0, sizeof(struct CVALUE*));
memset(&right_node_198, 0, sizeof(struct sNode*));
right_value262 = (void*)0;
memset(&right_value_199, 0, sizeof(struct CVALUE*));
memset(&type_200, 0, sizeof(struct sType*));
memset(&fun_name_201, 0, sizeof(char*));
memset(&calling_fun_202, 0, sizeof(_Bool));
right_value263 = (void*)0;
memset(&come_value_203, 0, sizeof(struct CVALUE*));
right_value264 = (void*)0;
right_value265 = (void*)0;
    left_node_196=self->mLeft;
    if(_if_conditional250=!node_compile(left_node_196,info),    _if_conditional250) {
        __result146__ = (_Bool)0;
        return __result146__;
    }
    left_value_197=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 864, 26),__exception_result_var_b21=((struct CVALUE*)(right_value261=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b21));
    come_call_finalizer3(right_value261,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_198=self->mRight;
    if(_if_conditional251=!node_compile(right_node_198,info),    _if_conditional251) {
        __result147__ = (_Bool)0;
        come_call_finalizer3(left_value_197,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result147__;
    }
    right_value_199=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 873, 27),__exception_result_var_b22=((struct CVALUE*)(right_value262=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b22));
    come_call_finalizer3(right_value262,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_200=(struct sType*)come_increment_ref_count(left_value_197->type);
    fun_name_201="operator_gt";
    if(self->mQuote) {
        calling_fun_202=(_Bool)0;
    }
    else {
        calling_fun_202=operator_overload_fun(type_200,fun_name_201,left_value_197,right_value_199,(_Bool)0,info);
    }
    if(_if_conditional253=!calling_fun_202,    _if_conditional253) {
        come_value_203=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value263=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 888, "CVALUE"))));
        come_call_finalizer3(right_value263,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj98=come_value_203->c_value;
        come_value_203->c_value=(char*)come_increment_ref_count(((char*)(right_value264=xsprintf("%s>%s",left_value_197->c_value,right_value_199->c_value))));
        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj99=come_value_203->type;
        come_value_203->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_clone(left_value_197->type))));
        come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value265,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_203->type->mHeap=(_Bool)0;
        come_value_203->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_203->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_203));
        come_call_finalizer3(come_value_203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result148__ = (_Bool)1;
    come_call_finalizer3(left_value_197,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_199,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_200,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result148__;
    come_call_finalizer3(left_value_197,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_199,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_200,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value266;
void* right_value267;
struct sNode* __dec_obj100;
void* right_value268;
struct sNode* __dec_obj101;
struct sEqNode* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
    ((struct sNodeBase*)(right_value266=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value266,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj100=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value267=sNode_clone(left))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value267) { right_value267 = come_decrement_ref_count2(right_value267, ((struct sNode*)right_value267)->finalize, ((struct sNode*)right_value267)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj101=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value268=sNode_clone(right))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value268) { right_value268 = come_decrement_ref_count2(right_value268, ((struct sNode*)right_value268)->finalize, ((struct sNode*)right_value268)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result149__ = __result_obj__ = self;
    come_call_finalizer3(self,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result149__;
    come_call_finalizer3(self,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sEqNode_kind(struct sEqNode* self){
void* __result_obj__;
void* right_value269;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value269 = (void*)0;
    __result150__ = __result_obj__ = ((char*)(right_value269=__builtin_string("sEqNode")));
    right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result150__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_204;
_Bool _if_conditional257;
_Bool __result151__;
void* right_value270;
struct CVALUE* __exception_result_var_b23;
struct CVALUE* left_value_205;
struct sNode* right_node_206;
_Bool _if_conditional258;
_Bool __result152__;
void* right_value271;
struct CVALUE* __exception_result_var_b24;
struct CVALUE* right_value_207;
void* right_value272;
struct CVALUE* come_value_208;
void* right_value273;
char* __dec_obj102;
void* right_value274;
struct sType* __dec_obj103;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_204, 0, sizeof(struct sNode*));
right_value270 = (void*)0;
memset(&left_value_205, 0, sizeof(struct CVALUE*));
memset(&right_node_206, 0, sizeof(struct sNode*));
right_value271 = (void*)0;
memset(&right_value_207, 0, sizeof(struct CVALUE*));
right_value272 = (void*)0;
memset(&come_value_208, 0, sizeof(struct CVALUE*));
right_value273 = (void*)0;
right_value274 = (void*)0;
    left_node_204=self->mLeft;
    if(_if_conditional257=!node_compile(left_node_204,info),    _if_conditional257) {
        __result151__ = (_Bool)0;
        return __result151__;
    }
    left_value_205=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 929, 28),__exception_result_var_b23=((struct CVALUE*)(right_value270=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b23));
    come_call_finalizer3(right_value270,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_206=self->mRight;
    if(_if_conditional258=!node_compile(right_node_206,info),    _if_conditional258) {
        __result152__ = (_Bool)0;
        come_call_finalizer3(left_value_205,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result152__;
    }
    right_value_207=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 938, 29),__exception_result_var_b24=((struct CVALUE*)(right_value271=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b24));
    come_call_finalizer3(right_value271,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_208=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value272=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 941, "CVALUE"))));
    come_call_finalizer3(right_value272,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj102=come_value_208->c_value;
    come_value_208->c_value=(char*)come_increment_ref_count(((char*)(right_value273=xsprintf("%s==%s",left_value_205->c_value,right_value_207->c_value))));
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj103=come_value_208->type;
    come_value_208->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value274=sType_clone(left_value_205->type))));
    come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value274,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_208->type->mHeap=(_Bool)0;
    come_value_208->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_208->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_208));
    __result153__ = (_Bool)1;
    come_call_finalizer3(left_value_205,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_207,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_208,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result153__;
    come_call_finalizer3(left_value_205,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_207,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_208,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value275;
void* right_value276;
struct sNode* __dec_obj104;
void* right_value277;
struct sNode* __dec_obj105;
struct sNotEqNode* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
    ((struct sNodeBase*)(right_value275=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value275,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj104=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value276=sNode_clone(left))));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value276) { right_value276 = come_decrement_ref_count2(right_value276, ((struct sNode*)right_value276)->finalize, ((struct sNode*)right_value276)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj105=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value277=sNode_clone(right))));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value277) { right_value277 = come_decrement_ref_count2(right_value277, ((struct sNode*)right_value277)->finalize, ((struct sNode*)right_value277)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result154__ = __result_obj__ = self;
    come_call_finalizer3(self,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result154__;
    come_call_finalizer3(self,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sNotEqNode_kind(struct sNotEqNode* self){
void* __result_obj__;
void* right_value278;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
    __result155__ = __result_obj__ = ((char*)(right_value278=__builtin_string("sNotEqNode")));
    right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result155__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_209;
_Bool _if_conditional262;
_Bool __result156__;
void* right_value279;
struct CVALUE* __exception_result_var_b25;
struct CVALUE* left_value_210;
struct sNode* right_node_211;
_Bool _if_conditional263;
_Bool __result157__;
void* right_value280;
struct CVALUE* __exception_result_var_b26;
struct CVALUE* right_value_212;
void* right_value281;
struct CVALUE* come_value_213;
void* right_value282;
char* __dec_obj106;
void* right_value283;
struct sType* __dec_obj107;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_209, 0, sizeof(struct sNode*));
right_value279 = (void*)0;
memset(&left_value_210, 0, sizeof(struct CVALUE*));
memset(&right_node_211, 0, sizeof(struct sNode*));
right_value280 = (void*)0;
memset(&right_value_212, 0, sizeof(struct CVALUE*));
right_value281 = (void*)0;
memset(&come_value_213, 0, sizeof(struct CVALUE*));
right_value282 = (void*)0;
right_value283 = (void*)0;
    left_node_209=self->mLeft;
    if(_if_conditional262=!node_compile(left_node_209,info),    _if_conditional262) {
        __result156__ = (_Bool)0;
        return __result156__;
    }
    left_value_210=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 981, 30),__exception_result_var_b25=((struct CVALUE*)(right_value279=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b25));
    come_call_finalizer3(right_value279,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_211=self->mRight;
    if(_if_conditional263=!node_compile(right_node_211,info),    _if_conditional263) {
        __result157__ = (_Bool)0;
        come_call_finalizer3(left_value_210,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result157__;
    }
    right_value_212=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 990, 31),__exception_result_var_b26=((struct CVALUE*)(right_value280=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b26));
    come_call_finalizer3(right_value280,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_213=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value281=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 993, "CVALUE"))));
    come_call_finalizer3(right_value281,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj106=come_value_213->c_value;
    come_value_213->c_value=(char*)come_increment_ref_count(((char*)(right_value282=xsprintf("%s!=%s",left_value_210->c_value,right_value_212->c_value))));
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj107=come_value_213->type;
    come_value_213->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value283=sType_clone(left_value_210->type))));
    come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value283,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_213->type->mHeap=(_Bool)0;
    come_value_213->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_213->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_213));
    __result158__ = (_Bool)1;
    come_call_finalizer3(left_value_210,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_212,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result158__;
    come_call_finalizer3(left_value_210,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_212,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value284;
void* right_value285;
struct sNode* __dec_obj108;
void* right_value286;
struct sNode* __dec_obj109;
struct sEq2Node* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
    ((struct sNodeBase*)(right_value284=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value284,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj108=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value285=sNode_clone(left))));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value285) { right_value285 = come_decrement_ref_count2(right_value285, ((struct sNode*)right_value285)->finalize, ((struct sNode*)right_value285)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj109=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value286=sNode_clone(right))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value286) { right_value286 = come_decrement_ref_count2(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result159__ = __result_obj__ = self;
    come_call_finalizer3(self,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result159__;
    come_call_finalizer3(self,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sEq2Node_kind(struct sEq2Node* self){
void* __result_obj__;
void* right_value287;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value287 = (void*)0;
    __result160__ = __result_obj__ = ((char*)(right_value287=__builtin_string("sEq2Node")));
    right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result160__;
}

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_214;
_Bool _if_conditional267;
_Bool __result161__;
void* right_value288;
struct CVALUE* __exception_result_var_b27;
struct CVALUE* left_value_215;
struct sNode* right_node_216;
_Bool _if_conditional268;
_Bool __result162__;
void* right_value289;
struct CVALUE* __exception_result_var_b28;
struct CVALUE* right_value_217;
struct sType* type_218;
char* fun_name_219;
_Bool calling_fun_220;
_Bool _if_conditional269;
_Bool _if_conditional270;
void* right_value290;
struct CVALUE* come_value_221;
void* right_value291;
char* __dec_obj110;
void* right_value292;
struct sType* __dec_obj111;
_Bool __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_214, 0, sizeof(struct sNode*));
right_value288 = (void*)0;
memset(&left_value_215, 0, sizeof(struct CVALUE*));
memset(&right_node_216, 0, sizeof(struct sNode*));
right_value289 = (void*)0;
memset(&right_value_217, 0, sizeof(struct CVALUE*));
memset(&type_218, 0, sizeof(struct sType*));
memset(&fun_name_219, 0, sizeof(char*));
memset(&calling_fun_220, 0, sizeof(_Bool));
right_value290 = (void*)0;
memset(&come_value_221, 0, sizeof(struct CVALUE*));
right_value291 = (void*)0;
right_value292 = (void*)0;
    left_node_214=self->mLeft;
    if(_if_conditional267=!node_compile(left_node_214,info),    _if_conditional267) {
        __result161__ = (_Bool)0;
        return __result161__;
    }
    left_value_215=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1033, 32),__exception_result_var_b27=((struct CVALUE*)(right_value288=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b27));
    come_call_finalizer3(right_value288,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_216=self->mRight;
    if(_if_conditional268=!node_compile(right_node_216,info),    _if_conditional268) {
        __result162__ = (_Bool)0;
        come_call_finalizer3(left_value_215,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result162__;
    }
    right_value_217=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1042, 33),__exception_result_var_b28=((struct CVALUE*)(right_value289=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b28));
    come_call_finalizer3(right_value289,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_218=(struct sType*)come_increment_ref_count(left_value_215->type);
    fun_name_219="operator_equals";
    if(self->mQuote) {
        calling_fun_220=(_Bool)0;
    }
    else {
        calling_fun_220=operator_overload_fun(type_218,fun_name_219,left_value_215,right_value_217,(_Bool)0,info);
    }
    if(_if_conditional270=!calling_fun_220,    _if_conditional270) {
        come_value_221=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value290=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1057, "CVALUE"))));
        come_call_finalizer3(right_value290,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj110=come_value_221->c_value;
        come_value_221->c_value=(char*)come_increment_ref_count(((char*)(right_value291=xsprintf("%s==%s",left_value_215->c_value,right_value_217->c_value))));
        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj111=come_value_221->type;
        come_value_221->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value292=sType_clone(left_value_215->type))));
        come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value292,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_221->type->mHeap=(_Bool)0;
        come_value_221->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_221->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_221));
        come_call_finalizer3(come_value_221,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result163__ = (_Bool)1;
    come_call_finalizer3(left_value_215,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_217,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_218,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result163__;
    come_call_finalizer3(left_value_215,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_217,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_218,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value293;
void* right_value294;
struct sNode* __dec_obj112;
void* right_value295;
struct sNode* __dec_obj113;
struct sNotEq2Node* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
    ((struct sNodeBase*)(right_value293=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value293,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj112=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value294=sNode_clone(left))));
    if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value294) { right_value294 = come_decrement_ref_count2(right_value294, ((struct sNode*)right_value294)->finalize, ((struct sNode*)right_value294)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj113=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value295=sNode_clone(right))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value295) { right_value295 = come_decrement_ref_count2(right_value295, ((struct sNode*)right_value295)->finalize, ((struct sNode*)right_value295)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result164__ = __result_obj__ = self;
    come_call_finalizer3(self,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result164__;
    come_call_finalizer3(self,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sNotEq2Node_kind(struct sNotEq2Node* self){
void* __result_obj__;
void* right_value296;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value296 = (void*)0;
    __result165__ = __result_obj__ = ((char*)(right_value296=__builtin_string("sNotEq2Node")));
    right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result165__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_222;
_Bool _if_conditional274;
_Bool __result166__;
void* right_value297;
struct CVALUE* __exception_result_var_b29;
struct CVALUE* left_value_223;
struct sNode* right_node_224;
_Bool _if_conditional275;
_Bool __result167__;
void* right_value298;
struct CVALUE* __exception_result_var_b30;
struct CVALUE* right_value_225;
struct sType* type_226;
char* fun_name_227;
_Bool calling_fun_228;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value299;
struct CVALUE* come_value_229;
void* right_value300;
char* __dec_obj114;
void* right_value301;
struct sType* __dec_obj115;
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_222, 0, sizeof(struct sNode*));
right_value297 = (void*)0;
memset(&left_value_223, 0, sizeof(struct CVALUE*));
memset(&right_node_224, 0, sizeof(struct sNode*));
right_value298 = (void*)0;
memset(&right_value_225, 0, sizeof(struct CVALUE*));
memset(&type_226, 0, sizeof(struct sType*));
memset(&fun_name_227, 0, sizeof(char*));
memset(&calling_fun_228, 0, sizeof(_Bool));
right_value299 = (void*)0;
memset(&come_value_229, 0, sizeof(struct CVALUE*));
right_value300 = (void*)0;
right_value301 = (void*)0;
    left_node_222=self->mLeft;
    if(_if_conditional274=!node_compile(left_node_222,info),    _if_conditional274) {
        __result166__ = (_Bool)0;
        return __result166__;
    }
    left_value_223=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1098, 34),__exception_result_var_b29=((struct CVALUE*)(right_value297=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b29));
    come_call_finalizer3(right_value297,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_224=self->mRight;
    if(_if_conditional275=!node_compile(right_node_224,info),    _if_conditional275) {
        __result167__ = (_Bool)0;
        come_call_finalizer3(left_value_223,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result167__;
    }
    right_value_225=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1107, 35),__exception_result_var_b30=((struct CVALUE*)(right_value298=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b30));
    come_call_finalizer3(right_value298,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_226=(struct sType*)come_increment_ref_count(left_value_223->type);
    fun_name_227="operator_not_equals";
    if(self->mQuote) {
        calling_fun_228=(_Bool)0;
    }
    else {
        calling_fun_228=operator_overload_fun(type_226,fun_name_227,left_value_223,right_value_225,(_Bool)0,info);
    }
    if(_if_conditional277=!calling_fun_228,    _if_conditional277) {
        come_value_229=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value299=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1122, "CVALUE"))));
        come_call_finalizer3(right_value299,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj114=come_value_229->c_value;
        come_value_229->c_value=(char*)come_increment_ref_count(((char*)(right_value300=xsprintf("%s!=%s",left_value_223->c_value,right_value_225->c_value))));
        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj115=come_value_229->type;
        come_value_229->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value301=sType_clone(left_value_223->type))));
        come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value301,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_229->type->mHeap=(_Bool)0;
        come_value_229->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_229->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_229));
        come_call_finalizer3(come_value_229,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result168__ = (_Bool)1;
    come_call_finalizer3(left_value_223,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_225,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_226,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result168__;
    come_call_finalizer3(left_value_223,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_225,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_226,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value302;
void* right_value303;
struct sNode* __dec_obj116;
void* right_value304;
struct sNode* __dec_obj117;
struct sAndNode* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
    ((struct sNodeBase*)(right_value302=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value302,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj116=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value303=sNode_clone(left))));
    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value303) { right_value303 = come_decrement_ref_count2(right_value303, ((struct sNode*)right_value303)->finalize, ((struct sNode*)right_value303)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj117=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value304=sNode_clone(right))));
    if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value304) { right_value304 = come_decrement_ref_count2(right_value304, ((struct sNode*)right_value304)->finalize, ((struct sNode*)right_value304)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result169__ = __result_obj__ = self;
    come_call_finalizer3(self,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result169__;
    come_call_finalizer3(self,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sAndNode_kind(struct sAndNode* self){
void* __result_obj__;
void* right_value305;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value305 = (void*)0;
    __result170__ = __result_obj__ = ((char*)(right_value305=__builtin_string("sAndNode")));
    right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result170__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_230;
_Bool _if_conditional281;
_Bool __result171__;
void* right_value306;
struct CVALUE* __exception_result_var_b31;
struct CVALUE* left_value_231;
struct sNode* right_node_232;
_Bool _if_conditional282;
_Bool __result172__;
void* right_value307;
struct CVALUE* __exception_result_var_b32;
struct CVALUE* right_value_233;
struct sType* type_234;
char* fun_name_235;
_Bool calling_fun_236;
_Bool _if_conditional283;
_Bool _if_conditional284;
void* right_value308;
struct CVALUE* come_value_237;
void* right_value309;
char* __dec_obj118;
void* right_value310;
struct sType* __dec_obj119;
_Bool __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_230, 0, sizeof(struct sNode*));
right_value306 = (void*)0;
memset(&left_value_231, 0, sizeof(struct CVALUE*));
memset(&right_node_232, 0, sizeof(struct sNode*));
right_value307 = (void*)0;
memset(&right_value_233, 0, sizeof(struct CVALUE*));
memset(&type_234, 0, sizeof(struct sType*));
memset(&fun_name_235, 0, sizeof(char*));
memset(&calling_fun_236, 0, sizeof(_Bool));
right_value308 = (void*)0;
memset(&come_value_237, 0, sizeof(struct CVALUE*));
right_value309 = (void*)0;
right_value310 = (void*)0;
    left_node_230=self->mLeft;
    if(_if_conditional281=!node_compile(left_node_230,info),    _if_conditional281) {
        __result171__ = (_Bool)0;
        return __result171__;
    }
    left_value_231=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1163, 36),__exception_result_var_b31=((struct CVALUE*)(right_value306=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b31));
    come_call_finalizer3(right_value306,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_232=self->mRight;
    if(_if_conditional282=!node_compile(right_node_232,info),    _if_conditional282) {
        __result172__ = (_Bool)0;
        come_call_finalizer3(left_value_231,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result172__;
    }
    right_value_233=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1172, 37),__exception_result_var_b32=((struct CVALUE*)(right_value307=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b32));
    come_call_finalizer3(right_value307,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_234=(struct sType*)come_increment_ref_count(left_value_231->type);
    fun_name_235="operator_and";
    if(self->mQuote) {
        calling_fun_236=(_Bool)0;
    }
    else {
        calling_fun_236=operator_overload_fun(type_234,fun_name_235,left_value_231,right_value_233,(_Bool)0,info);
    }
    if(_if_conditional284=!calling_fun_236,    _if_conditional284) {
        come_value_237=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value308=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1188, "CVALUE"))));
        come_call_finalizer3(right_value308,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj118=come_value_237->c_value;
        come_value_237->c_value=(char*)come_increment_ref_count(((char*)(right_value309=xsprintf("%s&%s",left_value_231->c_value,right_value_233->c_value))));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj119=come_value_237->type;
        come_value_237->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=sType_clone(left_value_231->type))));
        come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value310,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_237->type->mHeap=(_Bool)0;
        come_value_237->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_237->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_237));
        come_call_finalizer3(come_value_237,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result173__ = (_Bool)1;
    come_call_finalizer3(left_value_231,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_233,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_234,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result173__;
    come_call_finalizer3(left_value_231,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_233,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_234,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value311;
void* right_value312;
struct sNode* __dec_obj120;
void* right_value313;
struct sNode* __dec_obj121;
struct sXOrNode* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
    ((struct sNodeBase*)(right_value311=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value311,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj120=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value312=sNode_clone(left))));
    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value312) { right_value312 = come_decrement_ref_count2(right_value312, ((struct sNode*)right_value312)->finalize, ((struct sNode*)right_value312)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj121=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value313=sNode_clone(right))));
    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value313) { right_value313 = come_decrement_ref_count2(right_value313, ((struct sNode*)right_value313)->finalize, ((struct sNode*)right_value313)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result174__ = __result_obj__ = self;
    come_call_finalizer3(self,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result174__;
    come_call_finalizer3(self,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sXOrNode_kind(struct sXOrNode* self){
void* __result_obj__;
void* right_value314;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value314 = (void*)0;
    __result175__ = __result_obj__ = ((char*)(right_value314=__builtin_string("sXOrNode")));
    right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result175__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_238;
_Bool _if_conditional288;
_Bool __result176__;
void* right_value315;
struct CVALUE* __exception_result_var_b33;
struct CVALUE* left_value_239;
struct sNode* right_node_240;
_Bool _if_conditional289;
_Bool __result177__;
void* right_value316;
struct CVALUE* __exception_result_var_b34;
struct CVALUE* right_value_241;
struct sType* type_242;
char* fun_name_243;
_Bool calling_fun_244;
_Bool _if_conditional290;
_Bool _if_conditional291;
void* right_value317;
struct CVALUE* come_value_245;
void* right_value318;
char* __dec_obj122;
void* right_value319;
struct sType* __dec_obj123;
_Bool __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_238, 0, sizeof(struct sNode*));
right_value315 = (void*)0;
memset(&left_value_239, 0, sizeof(struct CVALUE*));
memset(&right_node_240, 0, sizeof(struct sNode*));
right_value316 = (void*)0;
memset(&right_value_241, 0, sizeof(struct CVALUE*));
memset(&type_242, 0, sizeof(struct sType*));
memset(&fun_name_243, 0, sizeof(char*));
memset(&calling_fun_244, 0, sizeof(_Bool));
right_value317 = (void*)0;
memset(&come_value_245, 0, sizeof(struct CVALUE*));
right_value318 = (void*)0;
right_value319 = (void*)0;
    left_node_238=self->mLeft;
    if(_if_conditional288=!node_compile(left_node_238,info),    _if_conditional288) {
        __result176__ = (_Bool)0;
        return __result176__;
    }
    left_value_239=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1229, 38),__exception_result_var_b33=((struct CVALUE*)(right_value315=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b33));
    come_call_finalizer3(right_value315,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_240=self->mRight;
    if(_if_conditional289=!node_compile(right_node_240,info),    _if_conditional289) {
        __result177__ = (_Bool)0;
        come_call_finalizer3(left_value_239,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result177__;
    }
    right_value_241=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1238, 39),__exception_result_var_b34=((struct CVALUE*)(right_value316=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b34));
    come_call_finalizer3(right_value316,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_242=(struct sType*)come_increment_ref_count(left_value_239->type);
    fun_name_243="operator_xor";
    if(self->mQuote) {
        calling_fun_244=(_Bool)0;
    }
    else {
        calling_fun_244=operator_overload_fun(type_242,fun_name_243,left_value_239,right_value_241,(_Bool)0,info);
    }
    if(_if_conditional291=!calling_fun_244,    _if_conditional291) {
        come_value_245=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value317=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1253, "CVALUE"))));
        come_call_finalizer3(right_value317,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj122=come_value_245->c_value;
        come_value_245->c_value=(char*)come_increment_ref_count(((char*)(right_value318=xsprintf("%s^%s",left_value_239->c_value,right_value_241->c_value))));
        __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj123=come_value_245->type;
        come_value_245->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value319=sType_clone(left_value_239->type))));
        come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value319,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_245->type->mHeap=(_Bool)0;
        come_value_245->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_245->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_245));
        come_call_finalizer3(come_value_245,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result178__ = (_Bool)1;
    come_call_finalizer3(left_value_239,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_241,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_242,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result178__;
    come_call_finalizer3(left_value_239,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_241,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_242,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value320;
void* right_value321;
struct sNode* __dec_obj124;
void* right_value322;
struct sNode* __dec_obj125;
struct sOrNode* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
    ((struct sNodeBase*)(right_value320=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value320,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj124=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value321=sNode_clone(left))));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value321) { right_value321 = come_decrement_ref_count2(right_value321, ((struct sNode*)right_value321)->finalize, ((struct sNode*)right_value321)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj125=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value322=sNode_clone(right))));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value322) { right_value322 = come_decrement_ref_count2(right_value322, ((struct sNode*)right_value322)->finalize, ((struct sNode*)right_value322)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result179__ = __result_obj__ = self;
    come_call_finalizer3(self,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result179__;
    come_call_finalizer3(self,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sOrNode_kind(struct sOrNode* self){
void* __result_obj__;
void* right_value323;
char* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
right_value323 = (void*)0;
    __result180__ = __result_obj__ = ((char*)(right_value323=__builtin_string("sOrNode")));
    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result180__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_246;
_Bool _if_conditional295;
_Bool __result181__;
void* right_value324;
struct CVALUE* __exception_result_var_b35;
struct CVALUE* left_value_247;
struct sNode* right_node_248;
_Bool _if_conditional296;
_Bool __result182__;
void* right_value325;
struct CVALUE* __exception_result_var_b36;
struct CVALUE* right_value_249;
struct sType* type_250;
char* fun_name_251;
_Bool calling_fun_252;
_Bool _if_conditional297;
_Bool _if_conditional298;
void* right_value326;
struct CVALUE* come_value_253;
void* right_value327;
char* __dec_obj126;
void* right_value328;
struct sType* __dec_obj127;
_Bool __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_246, 0, sizeof(struct sNode*));
right_value324 = (void*)0;
memset(&left_value_247, 0, sizeof(struct CVALUE*));
memset(&right_node_248, 0, sizeof(struct sNode*));
right_value325 = (void*)0;
memset(&right_value_249, 0, sizeof(struct CVALUE*));
memset(&type_250, 0, sizeof(struct sType*));
memset(&fun_name_251, 0, sizeof(char*));
memset(&calling_fun_252, 0, sizeof(_Bool));
right_value326 = (void*)0;
memset(&come_value_253, 0, sizeof(struct CVALUE*));
right_value327 = (void*)0;
right_value328 = (void*)0;
    left_node_246=self->mLeft;
    if(_if_conditional295=!node_compile(left_node_246,info),    _if_conditional295) {
        __result181__ = (_Bool)0;
        return __result181__;
    }
    left_value_247=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1294, 40),__exception_result_var_b35=((struct CVALUE*)(right_value324=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b35));
    come_call_finalizer3(right_value324,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_248=self->mRight;
    if(_if_conditional296=!node_compile(right_node_248,info),    _if_conditional296) {
        __result182__ = (_Bool)0;
        come_call_finalizer3(left_value_247,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result182__;
    }
    right_value_249=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1303, 41),__exception_result_var_b36=((struct CVALUE*)(right_value325=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b36));
    come_call_finalizer3(right_value325,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_250=(struct sType*)come_increment_ref_count(left_value_247->type);
    fun_name_251="operator_or";
    if(self->mQuote) {
        calling_fun_252=(_Bool)0;
    }
    else {
        calling_fun_252=operator_overload_fun(type_250,fun_name_251,left_value_247,right_value_249,(_Bool)0,info);
    }
    if(_if_conditional298=!calling_fun_252,    _if_conditional298) {
        come_value_253=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value326=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1319, "CVALUE"))));
        come_call_finalizer3(right_value326,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj126=come_value_253->c_value;
        come_value_253->c_value=(char*)come_increment_ref_count(((char*)(right_value327=xsprintf("%s|%s",left_value_247->c_value,right_value_249->c_value))));
        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj127=come_value_253->type;
        come_value_253->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value328=sType_clone(left_value_247->type))));
        come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value328,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_253->type->mHeap=(_Bool)0;
        come_value_253->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_253->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_253));
        come_call_finalizer3(come_value_253,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result183__ = (_Bool)1;
    come_call_finalizer3(left_value_247,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_249,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result183__;
    come_call_finalizer3(left_value_247,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_249,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_250,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value329;
void* right_value330;
struct sNode* __dec_obj128;
void* right_value331;
struct sNode* __dec_obj129;
struct sAndAndNode* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
    ((struct sNodeBase*)(right_value329=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value329,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj128=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value330=sNode_clone(left))));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value330) { right_value330 = come_decrement_ref_count2(right_value330, ((struct sNode*)right_value330)->finalize, ((struct sNode*)right_value330)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj129=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value331=sNode_clone(right))));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value331) { right_value331 = come_decrement_ref_count2(right_value331, ((struct sNode*)right_value331)->finalize, ((struct sNode*)right_value331)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result184__ = __result_obj__ = self;
    come_call_finalizer3(self,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result184__;
    come_call_finalizer3(self,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sAndAndNode_kind(struct sAndAndNode* self){
void* __result_obj__;
void* right_value332;
char* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
right_value332 = (void*)0;
    __result185__ = __result_obj__ = ((char*)(right_value332=__builtin_string("sAndAndNode")));
    right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result185__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_254;
_Bool _if_conditional302;
_Bool __result186__;
void* right_value333;
struct CVALUE* __exception_result_var_b37;
struct CVALUE* left_value_255;
struct sNode* right_node_256;
_Bool _if_conditional303;
_Bool __result187__;
void* right_value334;
struct CVALUE* __exception_result_var_b38;
struct CVALUE* right_value_257;
struct sType* type_258;
char* fun_name_259;
_Bool calling_fun_260;
_Bool _if_conditional304;
_Bool _if_conditional305;
void* right_value335;
struct CVALUE* come_value_261;
void* right_value336;
char* __dec_obj130;
void* right_value337;
struct sType* __dec_obj131;
_Bool __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_254, 0, sizeof(struct sNode*));
right_value333 = (void*)0;
memset(&left_value_255, 0, sizeof(struct CVALUE*));
memset(&right_node_256, 0, sizeof(struct sNode*));
right_value334 = (void*)0;
memset(&right_value_257, 0, sizeof(struct CVALUE*));
memset(&type_258, 0, sizeof(struct sType*));
memset(&fun_name_259, 0, sizeof(char*));
memset(&calling_fun_260, 0, sizeof(_Bool));
right_value335 = (void*)0;
memset(&come_value_261, 0, sizeof(struct CVALUE*));
right_value336 = (void*)0;
right_value337 = (void*)0;
    left_node_254=self->mLeft;
    if(_if_conditional302=!node_compile(left_node_254,info),    _if_conditional302) {
        __result186__ = (_Bool)0;
        return __result186__;
    }
    left_value_255=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1360, 42),__exception_result_var_b37=((struct CVALUE*)(right_value333=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b37));
    come_call_finalizer3(right_value333,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_256=self->mRight;
    if(_if_conditional303=!node_compile(right_node_256,info),    _if_conditional303) {
        __result187__ = (_Bool)0;
        come_call_finalizer3(left_value_255,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result187__;
    }
    right_value_257=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1369, 43),__exception_result_var_b38=((struct CVALUE*)(right_value334=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b38));
    come_call_finalizer3(right_value334,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_258=(struct sType*)come_increment_ref_count(left_value_255->type);
    fun_name_259="operator_andand";
    if(self->mQuote) {
        calling_fun_260=(_Bool)0;
    }
    else {
        calling_fun_260=operator_overload_fun(type_258,fun_name_259,left_value_255,right_value_257,(_Bool)0,info);
    }
    if(_if_conditional305=!calling_fun_260,    _if_conditional305) {
        come_value_261=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value335=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1385, "CVALUE"))));
        come_call_finalizer3(right_value335,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj130=come_value_261->c_value;
        come_value_261->c_value=(char*)come_increment_ref_count(((char*)(right_value336=xsprintf("%s&&%s",left_value_255->c_value,right_value_257->c_value))));
        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj131=come_value_261->type;
        come_value_261->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value337=sType_clone(left_value_255->type))));
        come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value337,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_261->type->mHeap=(_Bool)0;
        come_value_261->var=left_value_255->var;
        add_come_last_code(info,"%s;\n",come_value_261->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_261));
        come_call_finalizer3(come_value_261,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result188__ = (_Bool)1;
    come_call_finalizer3(left_value_255,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_257,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_258,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result188__;
    come_call_finalizer3(left_value_255,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_257,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_258,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value338;
void* right_value339;
struct sNode* __dec_obj132;
void* right_value340;
struct sNode* __dec_obj133;
struct sOrOrNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
    ((struct sNodeBase*)(right_value338=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value338,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj132=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value339=sNode_clone(left))));
    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value339) { right_value339 = come_decrement_ref_count2(right_value339, ((struct sNode*)right_value339)->finalize, ((struct sNode*)right_value339)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj133=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value340=sNode_clone(right))));
    if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value340) { right_value340 = come_decrement_ref_count2(right_value340, ((struct sNode*)right_value340)->finalize, ((struct sNode*)right_value340)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result189__ = __result_obj__ = self;
    come_call_finalizer3(self,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result189__;
    come_call_finalizer3(self,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sOrOrNode_kind(struct sOrOrNode* self){
void* __result_obj__;
void* right_value341;
char* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
right_value341 = (void*)0;
    __result190__ = __result_obj__ = ((char*)(right_value341=__builtin_string("sOrOrNode")));
    right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result190__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_262;
_Bool _if_conditional309;
_Bool __result191__;
void* right_value342;
struct CVALUE* __exception_result_var_b39;
struct CVALUE* left_value_263;
struct sNode* right_node_264;
_Bool _if_conditional310;
_Bool __result192__;
void* right_value343;
struct CVALUE* __exception_result_var_b40;
struct CVALUE* right_value_265;
struct sType* type_266;
char* fun_name_267;
_Bool calling_fun_268;
_Bool _if_conditional311;
_Bool _if_conditional312;
void* right_value344;
struct CVALUE* come_value_269;
void* right_value345;
char* __dec_obj134;
void* right_value346;
struct sType* __dec_obj135;
_Bool __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_262, 0, sizeof(struct sNode*));
right_value342 = (void*)0;
memset(&left_value_263, 0, sizeof(struct CVALUE*));
memset(&right_node_264, 0, sizeof(struct sNode*));
right_value343 = (void*)0;
memset(&right_value_265, 0, sizeof(struct CVALUE*));
memset(&type_266, 0, sizeof(struct sType*));
memset(&fun_name_267, 0, sizeof(char*));
memset(&calling_fun_268, 0, sizeof(_Bool));
right_value344 = (void*)0;
memset(&come_value_269, 0, sizeof(struct CVALUE*));
right_value345 = (void*)0;
right_value346 = (void*)0;
    left_node_262=self->mLeft;
    if(_if_conditional309=!node_compile(left_node_262,info),    _if_conditional309) {
        __result191__ = (_Bool)0;
        return __result191__;
    }
    left_value_263=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1426, 44),__exception_result_var_b39=((struct CVALUE*)(right_value342=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b39));
    come_call_finalizer3(right_value342,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_264=self->mRight;
    if(_if_conditional310=!node_compile(right_node_264,info),    _if_conditional310) {
        __result192__ = (_Bool)0;
        come_call_finalizer3(left_value_263,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result192__;
    }
    right_value_265=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1435, 45),__exception_result_var_b40=((struct CVALUE*)(right_value343=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b40));
    come_call_finalizer3(right_value343,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_266=(struct sType*)come_increment_ref_count(left_value_263->type);
    fun_name_267="operator_oror";
    if(self->mQuote) {
        calling_fun_268=(_Bool)0;
    }
    else {
        calling_fun_268=operator_overload_fun(type_266,fun_name_267,left_value_263,right_value_265,(_Bool)0,info);
    }
    if(_if_conditional312=!calling_fun_268,    _if_conditional312) {
        come_value_269=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value344=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1450, "CVALUE"))));
        come_call_finalizer3(right_value344,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj134=come_value_269->c_value;
        come_value_269->c_value=(char*)come_increment_ref_count(((char*)(right_value345=xsprintf("%s||%s",left_value_263->c_value,right_value_265->c_value))));
        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj135=come_value_269->type;
        come_value_269->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value346=sType_clone(left_value_263->type))));
        come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value346,sType_finalize, 0, 1, 0, 0, __result_obj__);
        come_value_269->type->mHeap=(_Bool)0;
        come_value_269->var=left_value_263->var;
        add_come_last_code(info,"%s;\n",come_value_269->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_269));
        come_call_finalizer3(come_value_269,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result193__ = (_Bool)1;
    come_call_finalizer3(left_value_263,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_265,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_266,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result193__;
    come_call_finalizer3(left_value_263,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_265,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_266,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
void* right_value347;
void* right_value348;
struct sNode* __dec_obj136;
void* right_value349;
struct sNode* __dec_obj137;
struct sCommaNode* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
    ((struct sNodeBase*)(right_value347=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value347,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj136=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value348=sNode_clone(left))));
    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value348) { right_value348 = come_decrement_ref_count2(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj137=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value349=sNode_clone(right))));
    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value349) { right_value349 = come_decrement_ref_count2(right_value349, ((struct sNode*)right_value349)->finalize, ((struct sNode*)right_value349)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result194__ = __result_obj__ = self;
    come_call_finalizer3(self,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result194__;
    come_call_finalizer3(self,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sCommaNode_kind(struct sCommaNode* self){
void* __result_obj__;
void* right_value350;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value350 = (void*)0;
    __result195__ = __result_obj__ = ((char*)(right_value350=__builtin_string("sCommaNode")));
    right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result195__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_270;
_Bool _if_conditional316;
_Bool __result196__;
void* right_value351;
struct CVALUE* __exception_result_var_b41;
struct CVALUE* left_value_271;
struct sNode* right_node_272;
_Bool _if_conditional317;
_Bool __result197__;
void* right_value352;
struct CVALUE* __exception_result_var_b42;
struct CVALUE* right_value_273;
void* right_value353;
struct CVALUE* come_value_274;
void* right_value354;
char* __dec_obj138;
void* right_value355;
struct sType* __dec_obj139;
_Bool __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_270, 0, sizeof(struct sNode*));
right_value351 = (void*)0;
memset(&left_value_271, 0, sizeof(struct CVALUE*));
memset(&right_node_272, 0, sizeof(struct sNode*));
right_value352 = (void*)0;
memset(&right_value_273, 0, sizeof(struct CVALUE*));
right_value353 = (void*)0;
memset(&come_value_274, 0, sizeof(struct CVALUE*));
right_value354 = (void*)0;
right_value355 = (void*)0;
    left_node_270=self->mLeft;
    if(_if_conditional316=!node_compile(left_node_270,info),    _if_conditional316) {
        __result196__ = (_Bool)0;
        return __result196__;
    }
    left_value_271=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1490, 46),__exception_result_var_b41=((struct CVALUE*)(right_value351=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b41));
    come_call_finalizer3(right_value351,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_272=self->mRight;
    if(_if_conditional317=!node_compile(right_node_272,info),    _if_conditional317) {
        __result197__ = (_Bool)0;
        come_call_finalizer3(left_value_271,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result197__;
    }
    right_value_273=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1499, 47),__exception_result_var_b42=((struct CVALUE*)(right_value352=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b42));
    come_call_finalizer3(right_value352,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_274=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value353=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1502, "CVALUE"))));
    come_call_finalizer3(right_value353,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj138=come_value_274->c_value;
    come_value_274->c_value=(char*)come_increment_ref_count(((char*)(right_value354=xsprintf("%s,%s",left_value_271->c_value,right_value_273->c_value))));
    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj139=come_value_274->type;
    come_value_274->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value355=sType_clone(left_value_271->type))));
    come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value355,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_274->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_274->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_274));
    __result198__ = (_Bool)1;
    come_call_finalizer3(left_value_271,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_273,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_274,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result198__;
    come_call_finalizer3(left_value_271,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_273,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_274,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__;
void* right_value356;
void* right_value357;
struct sNode* __dec_obj140;
void* right_value358;
struct sNode* __dec_obj141;
void* right_value359;
struct sNode* __dec_obj142;
struct sConditionalNode* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value359 = (void*)0;
    ((struct sNodeBase*)(right_value356=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value356,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj140=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value357=sNode_clone(value1))));
    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value357) { right_value357 = come_decrement_ref_count2(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj141=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value358=sNode_clone(value2))));
    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value358) { right_value358 = come_decrement_ref_count2(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj142=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value359=sNode_clone(value3))));
    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value359) { right_value359 = come_decrement_ref_count2(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result199__ = __result_obj__ = self;
    come_call_finalizer3(self,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result199__;
    come_call_finalizer3(self,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sConditionalNode_kind(struct sConditionalNode* self){
void* __result_obj__;
void* right_value360;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
right_value360 = (void*)0;
    __result200__ = __result_obj__ = ((char*)(right_value360=__builtin_string("sConditionalNode")));
    right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result200__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value1_275;
_Bool _if_conditional322;
_Bool __result201__;
void* right_value361;
struct CVALUE* __exception_result_var_b43;
struct CVALUE* value1_value_276;
struct sNode* value2_277;
_Bool _if_conditional323;
_Bool __result202__;
void* right_value362;
struct CVALUE* __exception_result_var_b44;
struct CVALUE* value2_value_278;
struct sNode* value3_279;
_Bool _if_conditional324;
_Bool __result203__;
void* right_value363;
struct CVALUE* __exception_result_var_b45;
struct CVALUE* value3_value_280;
void* right_value364;
struct CVALUE* come_value_281;
void* right_value365;
char* __dec_obj143;
void* right_value366;
struct sType* __dec_obj144;
_Bool __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value1_275, 0, sizeof(struct sNode*));
right_value361 = (void*)0;
memset(&value1_value_276, 0, sizeof(struct CVALUE*));
memset(&value2_277, 0, sizeof(struct sNode*));
right_value362 = (void*)0;
memset(&value2_value_278, 0, sizeof(struct CVALUE*));
memset(&value3_279, 0, sizeof(struct sNode*));
right_value363 = (void*)0;
memset(&value3_value_280, 0, sizeof(struct CVALUE*));
right_value364 = (void*)0;
memset(&come_value_281, 0, sizeof(struct CVALUE*));
right_value365 = (void*)0;
right_value366 = (void*)0;
    value1_275=self->mValue1;
    if(_if_conditional322=!node_compile(value1_275,info),    _if_conditional322) {
        __result201__ = (_Bool)0;
        return __result201__;
    }
    value1_value_276=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1541, 48),__exception_result_var_b43=((struct CVALUE*)(right_value361=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b43));
    come_call_finalizer3(right_value361,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    value2_277=self->mValue2;
    if(_if_conditional323=!node_compile(value2_277,info),    _if_conditional323) {
        __result202__ = (_Bool)0;
        come_call_finalizer3(value1_value_276,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result202__;
    }
    value2_value_278=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1550, 49),__exception_result_var_b44=((struct CVALUE*)(right_value362=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b44));
    come_call_finalizer3(right_value362,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    value3_279=self->mValue3;
    if(_if_conditional324=!node_compile(value3_279,info),    _if_conditional324) {
        __result203__ = (_Bool)0;
        come_call_finalizer3(value1_value_276,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value2_value_278,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result203__;
    }
    value3_value_280=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("13op.c", 1559, 50),__exception_result_var_b45=((struct CVALUE*)(right_value363=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b45));
    come_call_finalizer3(right_value363,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_281=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value364=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1562, "CVALUE"))));
    come_call_finalizer3(right_value364,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj143=come_value_281->c_value;
    come_value_281->c_value=(char*)come_increment_ref_count(((char*)(right_value365=xsprintf("%s?%s:%s",value1_value_276->c_value,value2_value_278->c_value,value3_value_280->c_value))));
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj144=come_value_281->type;
    come_value_281->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value366=sType_clone(value1_value_276->type))));
    come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value366,sType_finalize, 0, 1, 0, 0, __result_obj__);
    come_value_281->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_281->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_281));
    __result204__ = (_Bool)1;
    come_call_finalizer3(value1_value_276,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value2_value_278,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value3_value_280,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_281,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result204__;
    come_call_finalizer3(value1_value_276,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value2_value_278,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value3_value_280,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_281,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__;
void* right_value367;
struct sNode* __exception_result_var_b46;
struct sNode* node_282;
_Bool _while_condtional19;
_Bool _if_conditional325;
void* right_value368;
struct sNode* right_283;
void* right_value369;
void* right_value370;
struct sNode* _inf_value2;
struct sMultNode* _inf_obj_value2;
void* right_value375;
struct sNode* __result207__;
_Bool _if_conditional335;
void* right_value376;
struct sNode* right_285;
void* right_value377;
void* right_value378;
struct sNode* _inf_value3;
struct sDivNode* _inf_obj_value3;
void* right_value383;
struct sNode* __result210__;
_Bool _if_conditional345;
void* right_value384;
struct sNode* __exception_result_var_b47;
struct sNode* right_287;
void* right_value385;
void* right_value386;
struct sNode* _inf_value4;
struct sModNode* _inf_obj_value4;
void* right_value391;
struct sNode* __result213__;
_Bool _if_conditional355;
void* right_value392;
struct sNode* right_289;
void* right_value393;
void* right_value394;
struct sNode* _inf_value5;
struct sMultNode* _inf_obj_value5;
void* right_value399;
struct sNode* __result216__;
_Bool _if_conditional365;
void* right_value400;
struct sNode* right_291;
void* right_value401;
void* right_value402;
struct sNode* _inf_value6;
struct sDivNode* _inf_obj_value6;
void* right_value407;
struct sNode* __result219__;
_Bool _if_conditional375;
void* right_value408;
struct sNode* __exception_result_var_b48;
struct sNode* right_293;
void* right_value409;
void* right_value410;
struct sNode* _inf_value7;
struct sModNode* _inf_obj_value7;
void* right_value415;
struct sNode* __result222__;
struct sNode* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
right_value367 = (void*)0;
memset(&node_282, 0, sizeof(struct sNode*));
right_value368 = (void*)0;
memset(&right_283, 0, sizeof(struct sNode*));
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
memset(&right_285, 0, sizeof(struct sNode*));
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
memset(&right_287, 0, sizeof(struct sNode*));
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
memset(&right_289, 0, sizeof(struct sNode*));
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value399 = (void*)0;
right_value400 = (void*)0;
memset(&right_291, 0, sizeof(struct sNode*));
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value407 = (void*)0;
right_value408 = (void*)0;
memset(&right_293, 0, sizeof(struct sNode*));
right_value409 = (void*)0;
right_value410 = (void*)0;
right_value415 = (void*)0;
    node_282=(struct sNode*)come_increment_ref_count((come_push_stackframe("13op.c", 1578, 51),__exception_result_var_b46=((struct sNode*)(right_value367=expression_node_v99(info))), come_pop_stackframe(), __exception_result_var_b46));
    if(right_value367) { right_value367 = come_decrement_ref_count2(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional19=*info->p,    _while_condtional19) {
        if(_if_conditional325=!node_282->terminated(node_282->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61,        _if_conditional325) {
            info->p++;
            skip_spaces_and_lf(info);
            right_283=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value368=mult_exp(info))));
            if(right_value368) { right_value368 = come_decrement_ref_count2(right_value368, ((struct sNode*)right_value368)->finalize, ((struct sNode*)right_value368)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1589, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sMultNode*)(right_value370=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value369=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1589, "sMultNode")))),(struct sNode*)come_increment_ref_count(node_282),(struct sNode*)come_increment_ref_count(right_283),(_Bool)0,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sMultNode_finalize;
            _inf_value2->clone=(void*)sMultNode_clone;
            _inf_value2->compile=(void*)sMultNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sMultNode_kind;
            __result207__ = __result_obj__ = ((struct sNode*)(right_value375=_inf_value2));
            if(right_283) { right_283 = come_decrement_ref_count2(right_283, ((struct sNode*)right_283)->finalize, ((struct sNode*)right_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_282) { node_282 = come_decrement_ref_count2(node_282, ((struct sNode*)node_282)->finalize, ((struct sNode*)node_282)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value369,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value370,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value375) { right_value375 = come_decrement_ref_count2(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result207__;
            if(right_283) { right_283 = come_decrement_ref_count2(right_283, ((struct sNode*)right_283)->finalize, ((struct sNode*)right_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional335=*info->p==47&&*(info->p+1)!=61,            _if_conditional335) {
                info->p++;
                skip_spaces_and_lf(info);
                right_285=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value376=mult_exp(info))));
                if(right_value376) { right_value376 = come_decrement_ref_count2(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1597, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sDivNode*)(right_value378=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value377=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1597, "sDivNode")))),(struct sNode*)come_increment_ref_count(node_282),(struct sNode*)come_increment_ref_count(right_285),(_Bool)0,info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sDivNode_finalize;
                _inf_value3->clone=(void*)sDivNode_clone;
                _inf_value3->compile=(void*)sDivNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sNodeBase_terminated;
                _inf_value3->kind=(void*)sDivNode_kind;
                __result210__ = __result_obj__ = ((struct sNode*)(right_value383=_inf_value3));
                if(right_285) { right_285 = come_decrement_ref_count2(right_285, ((struct sNode*)right_285)->finalize, ((struct sNode*)right_285)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_282) { node_282 = come_decrement_ref_count2(node_282, ((struct sNode*)node_282)->finalize, ((struct sNode*)node_282)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value377,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value378,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value383) { right_value383 = come_decrement_ref_count2(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result210__;
                if(right_285) { right_285 = come_decrement_ref_count2(right_285, ((struct sNode*)right_285)->finalize, ((struct sNode*)right_285)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional345=*info->p==37&&*(info->p+1)!=61,                _if_conditional345) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_287=(struct sNode*)come_increment_ref_count((come_push_stackframe("13op.c", 1603, 52),__exception_result_var_b47=((struct sNode*)(right_value384=expression_node_v99(info))), come_pop_stackframe(), __exception_result_var_b47));
                    if(right_value384) { right_value384 = come_decrement_ref_count2(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1605, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sModNode*)(right_value386=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value385=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1605, "sModNode")))),(struct sNode*)come_increment_ref_count(node_282),(struct sNode*)come_increment_ref_count(right_287),(_Bool)0,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sModNode_finalize;
                    _inf_value4->clone=(void*)sModNode_clone;
                    _inf_value4->compile=(void*)sModNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sNodeBase_terminated;
                    _inf_value4->kind=(void*)sModNode_kind;
                    __result213__ = __result_obj__ = ((struct sNode*)(right_value391=_inf_value4));
                    if(right_287) { right_287 = come_decrement_ref_count2(right_287, ((struct sNode*)right_287)->finalize, ((struct sNode*)right_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_282) { node_282 = come_decrement_ref_count2(node_282, ((struct sNode*)node_282)->finalize, ((struct sNode*)node_282)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value385,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value386,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value391) { right_value391 = come_decrement_ref_count2(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result213__;
                    if(right_287) { right_287 = come_decrement_ref_count2(right_287, ((struct sNode*)right_287)->finalize, ((struct sNode*)right_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional355=!node_282->terminated(node_282->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61,                    _if_conditional355) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_289=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value392=mult_exp(info))));
                        if(right_value392) { right_value392 = come_decrement_ref_count2(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1613, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sMultNode*)(right_value394=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value393=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1613, "sMultNode")))),(struct sNode*)come_increment_ref_count(node_282),(struct sNode*)come_increment_ref_count(right_289),(_Bool)1,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sMultNode_finalize;
                        _inf_value5->clone=(void*)sMultNode_clone;
                        _inf_value5->compile=(void*)sMultNode_compile;
                        _inf_value5->sline=(void*)sNodeBase_sline;
                        _inf_value5->sname=(void*)sNodeBase_sname;
                        _inf_value5->terminated=(void*)sNodeBase_terminated;
                        _inf_value5->kind=(void*)sMultNode_kind;
                        __result216__ = __result_obj__ = ((struct sNode*)(right_value399=_inf_value5));
                        if(right_289) { right_289 = come_decrement_ref_count2(right_289, ((struct sNode*)right_289)->finalize, ((struct sNode*)right_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_282) { node_282 = come_decrement_ref_count2(node_282, ((struct sNode*)node_282)->finalize, ((struct sNode*)node_282)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value393,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value394,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value399) { right_value399 = come_decrement_ref_count2(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result216__;
                        if(right_289) { right_289 = come_decrement_ref_count2(right_289, ((struct sNode*)right_289)->finalize, ((struct sNode*)right_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional365=*info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61,                        _if_conditional365) {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            right_291=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=mult_exp(info))));
                            if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1621, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sDivNode*)(right_value402=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value401=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1621, "sDivNode")))),(struct sNode*)come_increment_ref_count(node_282),(struct sNode*)come_increment_ref_count(right_291),(_Bool)1,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sDivNode_finalize;
                            _inf_value6->clone=(void*)sDivNode_clone;
                            _inf_value6->compile=(void*)sDivNode_compile;
                            _inf_value6->sline=(void*)sNodeBase_sline;
                            _inf_value6->sname=(void*)sNodeBase_sname;
                            _inf_value6->terminated=(void*)sNodeBase_terminated;
                            _inf_value6->kind=(void*)sDivNode_kind;
                            __result219__ = __result_obj__ = ((struct sNode*)(right_value407=_inf_value6));
                            if(right_291) { right_291 = come_decrement_ref_count2(right_291, ((struct sNode*)right_291)->finalize, ((struct sNode*)right_291)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_282) { node_282 = come_decrement_ref_count2(node_282, ((struct sNode*)node_282)->finalize, ((struct sNode*)node_282)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value401,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value402,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result219__;
                            if(right_291) { right_291 = come_decrement_ref_count2(right_291, ((struct sNode*)right_291)->finalize, ((struct sNode*)right_291)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional375=*info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61,                            _if_conditional375) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                                right_293=(struct sNode*)come_increment_ref_count((come_push_stackframe("13op.c", 1627, 53),__exception_result_var_b48=((struct sNode*)(right_value408=expression_node_v99(info))), come_pop_stackframe(), __exception_result_var_b48));
                                if(right_value408) { right_value408 = come_decrement_ref_count2(right_value408, ((struct sNode*)right_value408)->finalize, ((struct sNode*)right_value408)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1629, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sModNode*)(right_value410=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value409=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1629, "sModNode")))),(struct sNode*)come_increment_ref_count(node_282),(struct sNode*)come_increment_ref_count(right_293),(_Bool)1,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sModNode_finalize;
                                _inf_value7->clone=(void*)sModNode_clone;
                                _inf_value7->compile=(void*)sModNode_compile;
                                _inf_value7->sline=(void*)sNodeBase_sline;
                                _inf_value7->sname=(void*)sNodeBase_sname;
                                _inf_value7->terminated=(void*)sNodeBase_terminated;
                                _inf_value7->kind=(void*)sModNode_kind;
                                __result222__ = __result_obj__ = ((struct sNode*)(right_value415=_inf_value7));
                                if(right_293) { right_293 = come_decrement_ref_count2(right_293, ((struct sNode*)right_293)->finalize, ((struct sNode*)right_293)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_282) { node_282 = come_decrement_ref_count2(node_282, ((struct sNode*)node_282)->finalize, ((struct sNode*)node_282)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(right_value409,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value410,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value415) { right_value415 = come_decrement_ref_count2(right_value415, ((struct sNode*)right_value415)->finalize, ((struct sNode*)right_value415)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result222__;
                                if(right_293) { right_293 = come_decrement_ref_count2(right_293, ((struct sNode*)right_293)->finalize, ((struct sNode*)right_293)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    __result223__ = __result_obj__ = node_282;
    if(node_282) { node_282 = come_decrement_ref_count2(node_282, ((struct sNode*)node_282)->finalize, ((struct sNode*)node_282)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result223__;
    if(node_282) { node_282 = come_decrement_ref_count2(node_282, ((struct sNode*)node_282)->finalize, ((struct sNode*)node_282)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sMultNode_finalize(struct sMultNode* self){
void* __result_obj__;
_Bool _if_conditional356;
_Bool _if_conditional357;
_Bool _if_conditional358;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional356=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional356) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional357=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional357) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional358=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional358) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__;
_Bool _if_conditional359;
struct sMultNode* __result214__;
void* right_value395;
struct sMultNode* result_290;
_Bool _if_conditional360;
_Bool _if_conditional361;
void* right_value396;
char* __dec_obj154;
_Bool _if_conditional362;
_Bool _if_conditional363;
void* right_value397;
struct sNode* __dec_obj155;
_Bool _if_conditional364;
void* right_value398;
struct sNode* __dec_obj156;
struct sMultNode* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
right_value395 = (void*)0;
memset(&result_290, 0, sizeof(struct sMultNode*));
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value398 = (void*)0;
                            if(_if_conditional359=self==(void*)0,                            _if_conditional359) {
                                __result214__ = __result_obj__ = (void*)0;
                                return __result214__;
                            }
                            result_290=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value395=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "sMultNode"))));
                            come_call_finalizer3(right_value395,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional360=self!=((void*)0),                            _if_conditional360) {
                                result_290->sline=self->sline;
                            }
                            if(_if_conditional361=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional361) {
                                __dec_obj154=result_290->sname;
                                result_290->sname=(char*)come_increment_ref_count(((char*)(right_value396=string_clone(self->sname))));
                                __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value396 = come_decrement_ref_count2(right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional362=self!=((void*)0),                            _if_conditional362) {
                                result_290->mQuote=self->mQuote;
                            }
                            if(_if_conditional363=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional363) {
                                __dec_obj155=result_290->mLeft;
                                result_290->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value397=sNode_clone(self->mLeft))));
                                if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value397) { right_value397 = come_decrement_ref_count2(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional364=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional364) {
                                __dec_obj156=result_290->mRight;
                                result_290->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=sNode_clone(self->mRight))));
                                if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            __result215__ = __result_obj__ = result_290;
                            come_call_finalizer3(result_290,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result215__;
                            come_call_finalizer3(result_290,sMultNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDivNode_finalize(struct sDivNode* self){
void* __result_obj__;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional366=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional366) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional367=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional367) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional368=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional368) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__;
_Bool _if_conditional369;
struct sDivNode* __result217__;
void* right_value403;
struct sDivNode* result_292;
_Bool _if_conditional370;
_Bool _if_conditional371;
void* right_value404;
char* __dec_obj157;
_Bool _if_conditional372;
_Bool _if_conditional373;
void* right_value405;
struct sNode* __dec_obj158;
_Bool _if_conditional374;
void* right_value406;
struct sNode* __dec_obj159;
struct sDivNode* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
right_value403 = (void*)0;
memset(&result_292, 0, sizeof(struct sDivNode*));
right_value404 = (void*)0;
right_value405 = (void*)0;
right_value406 = (void*)0;
                                if(_if_conditional369=self==(void*)0,                                _if_conditional369) {
                                    __result217__ = __result_obj__ = (void*)0;
                                    return __result217__;
                                }
                                result_292=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value403=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "sDivNode"))));
                                come_call_finalizer3(right_value403,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional370=self!=((void*)0),                                _if_conditional370) {
                                    result_292->sline=self->sline;
                                }
                                if(_if_conditional371=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional371) {
                                    __dec_obj157=result_292->sname;
                                    result_292->sname=(char*)come_increment_ref_count(((char*)(right_value404=string_clone(self->sname))));
                                    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value404 = come_decrement_ref_count2(right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional372=self!=((void*)0),                                _if_conditional372) {
                                    result_292->mQuote=self->mQuote;
                                }
                                if(_if_conditional373=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional373) {
                                    __dec_obj158=result_292->mLeft;
                                    result_292->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value405=sNode_clone(self->mLeft))));
                                    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value405) { right_value405 = come_decrement_ref_count2(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional374=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional374) {
                                    __dec_obj159=result_292->mRight;
                                    result_292->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value406=sNode_clone(self->mRight))));
                                    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value406) { right_value406 = come_decrement_ref_count2(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                __result218__ = __result_obj__ = result_292;
                                come_call_finalizer3(result_292,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result218__;
                                come_call_finalizer3(result_292,sDivNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sModNode_finalize(struct sModNode* self){
void* __result_obj__;
_Bool _if_conditional376;
_Bool _if_conditional377;
_Bool _if_conditional378;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional376=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional376) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional377=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional377) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional378=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional378) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__;
_Bool _if_conditional379;
struct sModNode* __result220__;
void* right_value411;
struct sModNode* result_294;
_Bool _if_conditional380;
_Bool _if_conditional381;
void* right_value412;
char* __dec_obj160;
_Bool _if_conditional382;
_Bool _if_conditional383;
void* right_value413;
struct sNode* __dec_obj161;
_Bool _if_conditional384;
void* right_value414;
struct sNode* __dec_obj162;
struct sModNode* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
right_value411 = (void*)0;
memset(&result_294, 0, sizeof(struct sModNode*));
right_value412 = (void*)0;
right_value413 = (void*)0;
right_value414 = (void*)0;
                                    if(_if_conditional379=self==(void*)0,                                    _if_conditional379) {
                                        __result220__ = __result_obj__ = (void*)0;
                                        return __result220__;
                                    }
                                    result_294=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value411=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "sModNode"))));
                                    come_call_finalizer3(right_value411,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional380=self!=((void*)0),                                    _if_conditional380) {
                                        result_294->sline=self->sline;
                                    }
                                    if(_if_conditional381=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional381) {
                                        __dec_obj160=result_294->sname;
                                        result_294->sname=(char*)come_increment_ref_count(((char*)(right_value412=string_clone(self->sname))));
                                        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value412 = come_decrement_ref_count2(right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional382=self!=((void*)0),                                    _if_conditional382) {
                                        result_294->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional383=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional383) {
                                        __dec_obj161=result_294->mLeft;
                                        result_294->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value413=sNode_clone(self->mLeft))));
                                        if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value413) { right_value413 = come_decrement_ref_count2(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional384=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional384) {
                                        __dec_obj162=result_294->mRight;
                                        result_294->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value414=sNode_clone(self->mRight))));
                                        if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value414) { right_value414 = come_decrement_ref_count2(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    __result221__ = __result_obj__ = result_294;
                                    come_call_finalizer3(result_294,sModNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result221__;
                                    come_call_finalizer3(result_294,sModNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* add_exp(struct sInfo* info){
void* __result_obj__;
void* right_value416;
struct sNode* node_295;
_Bool _while_condtional20;
_Bool _if_conditional385;
void* right_value417;
struct sNode* right_296;
void* right_value418;
void* right_value419;
struct sNode* _inf_value8;
struct sAddNode* _inf_obj_value8;
void* right_value424;
struct sNode* __result226__;
_Bool _if_conditional395;
void* right_value425;
struct sNode* right_298;
void* right_value426;
void* right_value427;
struct sNode* _inf_value9;
struct sSubNode* _inf_obj_value9;
void* right_value432;
struct sNode* __result229__;
_Bool _if_conditional405;
void* right_value433;
struct sNode* right_300;
void* right_value434;
void* right_value435;
struct sNode* _inf_value10;
struct sAddNode* _inf_obj_value10;
void* right_value440;
struct sNode* __result232__;
_Bool _if_conditional415;
void* right_value441;
struct sNode* right_302;
void* right_value442;
void* right_value443;
struct sNode* _inf_value11;
struct sSubNode* _inf_obj_value11;
void* right_value448;
struct sNode* __result235__;
struct sNode* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
right_value416 = (void*)0;
memset(&node_295, 0, sizeof(struct sNode*));
right_value417 = (void*)0;
memset(&right_296, 0, sizeof(struct sNode*));
right_value418 = (void*)0;
right_value419 = (void*)0;
right_value424 = (void*)0;
right_value425 = (void*)0;
memset(&right_298, 0, sizeof(struct sNode*));
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value432 = (void*)0;
right_value433 = (void*)0;
memset(&right_300, 0, sizeof(struct sNode*));
right_value434 = (void*)0;
right_value435 = (void*)0;
right_value440 = (void*)0;
right_value441 = (void*)0;
memset(&right_302, 0, sizeof(struct sNode*));
right_value442 = (void*)0;
right_value443 = (void*)0;
right_value448 = (void*)0;
    node_295=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value416=mult_exp(info))));
    if(right_value416) { right_value416 = come_decrement_ref_count2(right_value416, ((struct sNode*)right_value416)->finalize, ((struct sNode*)right_value416)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional20=*info->p,    _while_condtional20) {
        if(_if_conditional385=*info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43,        _if_conditional385) {
            info->p++;
            skip_spaces_and_lf(info);
            right_296=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value417=add_exp(info))));
            if(right_value417) { right_value417 = come_decrement_ref_count2(right_value417, ((struct sNode*)right_value417)->finalize, ((struct sNode*)right_value417)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1655, "struct sNode");
            _inf_obj_value8=come_increment_ref_count(((struct sAddNode*)(right_value419=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value418=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1655, "sAddNode")))),(struct sNode*)come_increment_ref_count(node_295),(struct sNode*)come_increment_ref_count(right_296),(_Bool)0,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sAddNode_finalize;
            _inf_value8->clone=(void*)sAddNode_clone;
            _inf_value8->compile=(void*)sAddNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sAddNode_kind;
            __result226__ = __result_obj__ = ((struct sNode*)(right_value424=_inf_value8));
            if(right_296) { right_296 = come_decrement_ref_count2(right_296, ((struct sNode*)right_296)->finalize, ((struct sNode*)right_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_295) { node_295 = come_decrement_ref_count2(node_295, ((struct sNode*)node_295)->finalize, ((struct sNode*)node_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value418,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value419,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value424) { right_value424 = come_decrement_ref_count2(right_value424, ((struct sNode*)right_value424)->finalize, ((struct sNode*)right_value424)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result226__;
            if(right_296) { right_296 = come_decrement_ref_count2(right_296, ((struct sNode*)right_296)->finalize, ((struct sNode*)right_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional395=*info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62,            _if_conditional395) {
                info->p++;
                skip_spaces_and_lf(info);
                right_298=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value425=add_exp(info))));
                if(right_value425) { right_value425 = come_decrement_ref_count2(right_value425, ((struct sNode*)right_value425)->finalize, ((struct sNode*)right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1664, "struct sNode");
                _inf_obj_value9=come_increment_ref_count(((struct sSubNode*)(right_value427=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value426=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1664, "sSubNode")))),(struct sNode*)come_increment_ref_count(node_295),(struct sNode*)come_increment_ref_count(right_298),(_Bool)0,info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sSubNode_finalize;
                _inf_value9->clone=(void*)sSubNode_clone;
                _inf_value9->compile=(void*)sSubNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sSubNode_kind;
                __result229__ = __result_obj__ = ((struct sNode*)(right_value432=_inf_value9));
                if(right_298) { right_298 = come_decrement_ref_count2(right_298, ((struct sNode*)right_298)->finalize, ((struct sNode*)right_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_295) { node_295 = come_decrement_ref_count2(node_295, ((struct sNode*)node_295)->finalize, ((struct sNode*)node_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value426,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value427,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value432) { right_value432 = come_decrement_ref_count2(right_value432, ((struct sNode*)right_value432)->finalize, ((struct sNode*)right_value432)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result229__;
                if(right_298) { right_298 = come_decrement_ref_count2(right_298, ((struct sNode*)right_298)->finalize, ((struct sNode*)right_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional405=*info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43,                _if_conditional405) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    right_300=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value433=add_exp(info))));
                    if(right_value433) { right_value433 = come_decrement_ref_count2(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1673, "struct sNode");
                    _inf_obj_value10=come_increment_ref_count(((struct sAddNode*)(right_value435=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value434=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1673, "sAddNode")))),(struct sNode*)come_increment_ref_count(node_295),(struct sNode*)come_increment_ref_count(right_300),(_Bool)1,info))));
                    _inf_value10->_protocol_obj=_inf_obj_value10;
                    _inf_value10->finalize=(void*)sAddNode_finalize;
                    _inf_value10->clone=(void*)sAddNode_clone;
                    _inf_value10->compile=(void*)sAddNode_compile;
                    _inf_value10->sline=(void*)sNodeBase_sline;
                    _inf_value10->sname=(void*)sNodeBase_sname;
                    _inf_value10->terminated=(void*)sNodeBase_terminated;
                    _inf_value10->kind=(void*)sAddNode_kind;
                    __result232__ = __result_obj__ = ((struct sNode*)(right_value440=_inf_value10));
                    if(right_300) { right_300 = come_decrement_ref_count2(right_300, ((struct sNode*)right_300)->finalize, ((struct sNode*)right_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_295) { node_295 = come_decrement_ref_count2(node_295, ((struct sNode*)node_295)->finalize, ((struct sNode*)node_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value434,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value435,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value440) { right_value440 = come_decrement_ref_count2(right_value440, ((struct sNode*)right_value440)->finalize, ((struct sNode*)right_value440)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result232__;
                    if(right_300) { right_300 = come_decrement_ref_count2(right_300, ((struct sNode*)right_300)->finalize, ((struct sNode*)right_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional415=*info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62,                    _if_conditional415) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_302=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value441=add_exp(info))));
                        if(right_value441) { right_value441 = come_decrement_ref_count2(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1682, "struct sNode");
                        _inf_obj_value11=come_increment_ref_count(((struct sSubNode*)(right_value443=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value442=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1682, "sSubNode")))),(struct sNode*)come_increment_ref_count(node_295),(struct sNode*)come_increment_ref_count(right_302),(_Bool)1,info))));
                        _inf_value11->_protocol_obj=_inf_obj_value11;
                        _inf_value11->finalize=(void*)sSubNode_finalize;
                        _inf_value11->clone=(void*)sSubNode_clone;
                        _inf_value11->compile=(void*)sSubNode_compile;
                        _inf_value11->sline=(void*)sNodeBase_sline;
                        _inf_value11->sname=(void*)sNodeBase_sname;
                        _inf_value11->terminated=(void*)sNodeBase_terminated;
                        _inf_value11->kind=(void*)sSubNode_kind;
                        __result235__ = __result_obj__ = ((struct sNode*)(right_value448=_inf_value11));
                        if(right_302) { right_302 = come_decrement_ref_count2(right_302, ((struct sNode*)right_302)->finalize, ((struct sNode*)right_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_295) { node_295 = come_decrement_ref_count2(node_295, ((struct sNode*)node_295)->finalize, ((struct sNode*)node_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value442,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value443,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value448) { right_value448 = come_decrement_ref_count2(right_value448, ((struct sNode*)right_value448)->finalize, ((struct sNode*)right_value448)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result235__;
                        if(right_302) { right_302 = come_decrement_ref_count2(right_302, ((struct sNode*)right_302)->finalize, ((struct sNode*)right_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result236__ = __result_obj__ = node_295;
    if(node_295) { node_295 = come_decrement_ref_count2(node_295, ((struct sNode*)node_295)->finalize, ((struct sNode*)node_295)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result236__;
    if(node_295) { node_295 = come_decrement_ref_count2(node_295, ((struct sNode*)node_295)->finalize, ((struct sNode*)node_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAddNode_finalize(struct sAddNode* self){
void* __result_obj__;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool _if_conditional408;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional406=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional406) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional407=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional407) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional408=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional408) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__;
_Bool _if_conditional409;
struct sAddNode* __result230__;
void* right_value436;
struct sAddNode* result_301;
_Bool _if_conditional410;
_Bool _if_conditional411;
void* right_value437;
char* __dec_obj169;
_Bool _if_conditional412;
void* right_value438;
struct sNode* __dec_obj170;
_Bool _if_conditional413;
void* right_value439;
struct sNode* __dec_obj171;
_Bool _if_conditional414;
struct sAddNode* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
right_value436 = (void*)0;
memset(&result_301, 0, sizeof(struct sAddNode*));
right_value437 = (void*)0;
right_value438 = (void*)0;
right_value439 = (void*)0;
                        if(_if_conditional409=self==(void*)0,                        _if_conditional409) {
                            __result230__ = __result_obj__ = (void*)0;
                            return __result230__;
                        }
                        result_301=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value436=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "sAddNode"))));
                        come_call_finalizer3(right_value436,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional410=self!=((void*)0),                        _if_conditional410) {
                            result_301->sline=self->sline;
                        }
                        if(_if_conditional411=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional411) {
                            __dec_obj169=result_301->sname;
                            result_301->sname=(char*)come_increment_ref_count(((char*)(right_value437=string_clone(self->sname))));
                            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value437 = come_decrement_ref_count2(right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional412=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional412) {
                            __dec_obj170=result_301->mLeft;
                            result_301->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value438=sNode_clone(self->mLeft))));
                            if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value438) { right_value438 = come_decrement_ref_count2(right_value438, ((struct sNode*)right_value438)->finalize, ((struct sNode*)right_value438)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional413=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional413) {
                            __dec_obj171=result_301->mRight;
                            result_301->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value439=sNode_clone(self->mRight))));
                            if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value439) { right_value439 = come_decrement_ref_count2(right_value439, ((struct sNode*)right_value439)->finalize, ((struct sNode*)right_value439)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional414=self!=((void*)0),                        _if_conditional414) {
                            result_301->mQuote=self->mQuote;
                        }
                        __result231__ = __result_obj__ = result_301;
                        come_call_finalizer3(result_301,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result231__;
                        come_call_finalizer3(result_301,sAddNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sSubNode_finalize(struct sSubNode* self){
void* __result_obj__;
_Bool _if_conditional416;
_Bool _if_conditional417;
_Bool _if_conditional418;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional416=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional416) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional417=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional417) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional418=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional418) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__;
_Bool _if_conditional419;
struct sSubNode* __result233__;
void* right_value444;
struct sSubNode* result_303;
_Bool _if_conditional420;
_Bool _if_conditional421;
void* right_value445;
char* __dec_obj172;
_Bool _if_conditional422;
void* right_value446;
struct sNode* __dec_obj173;
_Bool _if_conditional423;
void* right_value447;
struct sNode* __dec_obj174;
_Bool _if_conditional424;
struct sSubNode* __result234__;
memset(&__result_obj__, 0, sizeof(void*));
right_value444 = (void*)0;
memset(&result_303, 0, sizeof(struct sSubNode*));
right_value445 = (void*)0;
right_value446 = (void*)0;
right_value447 = (void*)0;
                            if(_if_conditional419=self==(void*)0,                            _if_conditional419) {
                                __result233__ = __result_obj__ = (void*)0;
                                return __result233__;
                            }
                            result_303=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value444=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "sSubNode"))));
                            come_call_finalizer3(right_value444,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional420=self!=((void*)0),                            _if_conditional420) {
                                result_303->sline=self->sline;
                            }
                            if(_if_conditional421=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional421) {
                                __dec_obj172=result_303->sname;
                                result_303->sname=(char*)come_increment_ref_count(((char*)(right_value445=string_clone(self->sname))));
                                __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value445 = come_decrement_ref_count2(right_value445, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional422=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional422) {
                                __dec_obj173=result_303->mLeft;
                                result_303->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value446=sNode_clone(self->mLeft))));
                                if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value446) { right_value446 = come_decrement_ref_count2(right_value446, ((struct sNode*)right_value446)->finalize, ((struct sNode*)right_value446)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional423=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional423) {
                                __dec_obj174=result_303->mRight;
                                result_303->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value447=sNode_clone(self->mRight))));
                                if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value447) { right_value447 = come_decrement_ref_count2(right_value447, ((struct sNode*)right_value447)->finalize, ((struct sNode*)right_value447)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional424=self!=((void*)0),                            _if_conditional424) {
                                result_303->mQuote=self->mQuote;
                            }
                            __result234__ = __result_obj__ = result_303;
                            come_call_finalizer3(result_303,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result234__;
                            come_call_finalizer3(result_303,sSubNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* shift_exp(struct sInfo* info){
void* __result_obj__;
void* right_value449;
struct sNode* node_304;
_Bool _while_condtional21;
_Bool _if_conditional425;
void* right_value450;
struct sNode* right_305;
void* right_value451;
void* right_value452;
struct sNode* _inf_value12;
struct sLShiftNode* _inf_obj_value12;
void* right_value457;
struct sNode* __result239__;
_Bool _if_conditional435;
void* right_value458;
struct sNode* right_307;
void* right_value459;
void* right_value460;
struct sNode* _inf_value13;
struct sRShiftNode* _inf_obj_value13;
void* right_value465;
struct sNode* __result242__;
_Bool _if_conditional445;
void* right_value466;
struct sNode* right_309;
void* right_value467;
void* right_value468;
struct sNode* _inf_value14;
struct sLShiftNode* _inf_obj_value14;
void* right_value473;
struct sNode* __result245__;
_Bool _if_conditional455;
void* right_value474;
struct sNode* right_311;
void* right_value475;
void* right_value476;
struct sNode* _inf_value15;
struct sRShiftNode* _inf_obj_value15;
void* right_value481;
struct sNode* __result248__;
struct sNode* __result249__;
memset(&__result_obj__, 0, sizeof(void*));
right_value449 = (void*)0;
memset(&node_304, 0, sizeof(struct sNode*));
right_value450 = (void*)0;
memset(&right_305, 0, sizeof(struct sNode*));
right_value451 = (void*)0;
right_value452 = (void*)0;
right_value457 = (void*)0;
right_value458 = (void*)0;
memset(&right_307, 0, sizeof(struct sNode*));
right_value459 = (void*)0;
right_value460 = (void*)0;
right_value465 = (void*)0;
right_value466 = (void*)0;
memset(&right_309, 0, sizeof(struct sNode*));
right_value467 = (void*)0;
right_value468 = (void*)0;
right_value473 = (void*)0;
right_value474 = (void*)0;
memset(&right_311, 0, sizeof(struct sNode*));
right_value475 = (void*)0;
right_value476 = (void*)0;
right_value481 = (void*)0;
    parse_sharp_v5(info);
    node_304=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value449=add_exp(info))));
    if(right_value449) { right_value449 = come_decrement_ref_count2(right_value449, ((struct sNode*)right_value449)->finalize, ((struct sNode*)right_value449)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional21=*info->p,    _while_condtional21) {
        if(_if_conditional425=*info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61,        _if_conditional425) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_305=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value450=shift_exp(info))));
            if(right_value450) { right_value450 = come_decrement_ref_count2(right_value450, ((struct sNode*)right_value450)->finalize, ((struct sNode*)right_value450)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1709, "struct sNode");
            _inf_obj_value12=come_increment_ref_count(((struct sLShiftNode*)(right_value452=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value451=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1709, "sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_304),(struct sNode*)come_increment_ref_count(right_305),(_Bool)0,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sLShiftNode_finalize;
            _inf_value12->clone=(void*)sLShiftNode_clone;
            _inf_value12->compile=(void*)sLShiftNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sLShiftNode_kind;
            __result239__ = __result_obj__ = ((struct sNode*)(right_value457=_inf_value12));
            if(right_305) { right_305 = come_decrement_ref_count2(right_305, ((struct sNode*)right_305)->finalize, ((struct sNode*)right_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_304) { node_304 = come_decrement_ref_count2(node_304, ((struct sNode*)node_304)->finalize, ((struct sNode*)node_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value451,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value452,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value457) { right_value457 = come_decrement_ref_count2(right_value457, ((struct sNode*)right_value457)->finalize, ((struct sNode*)right_value457)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result239__;
            if(right_305) { right_305 = come_decrement_ref_count2(right_305, ((struct sNode*)right_305)->finalize, ((struct sNode*)right_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional435=*info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62,            _if_conditional435) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_307=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value458=shift_exp(info))));
                if(right_value458) { right_value458 = come_decrement_ref_count2(right_value458, ((struct sNode*)right_value458)->finalize, ((struct sNode*)right_value458)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1717, "struct sNode");
                _inf_obj_value13=come_increment_ref_count(((struct sRShiftNode*)(right_value460=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value459=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1717, "sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_304),(struct sNode*)come_increment_ref_count(right_307),(_Bool)0,info))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sRShiftNode_finalize;
                _inf_value13->clone=(void*)sRShiftNode_clone;
                _inf_value13->compile=(void*)sRShiftNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sRShiftNode_kind;
                __result242__ = __result_obj__ = ((struct sNode*)(right_value465=_inf_value13));
                if(right_307) { right_307 = come_decrement_ref_count2(right_307, ((struct sNode*)right_307)->finalize, ((struct sNode*)right_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_304) { node_304 = come_decrement_ref_count2(node_304, ((struct sNode*)node_304)->finalize, ((struct sNode*)node_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value459,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value460,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value465) { right_value465 = come_decrement_ref_count2(right_value465, ((struct sNode*)right_value465)->finalize, ((struct sNode*)right_value465)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result242__;
                if(right_307) { right_307 = come_decrement_ref_count2(right_307, ((struct sNode*)right_307)->finalize, ((struct sNode*)right_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional445=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61,                _if_conditional445) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_309=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value466=shift_exp(info))));
                    if(right_value466) { right_value466 = come_decrement_ref_count2(right_value466, ((struct sNode*)right_value466)->finalize, ((struct sNode*)right_value466)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1725, "struct sNode");
                    _inf_obj_value14=come_increment_ref_count(((struct sLShiftNode*)(right_value468=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value467=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1725, "sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_304),(struct sNode*)come_increment_ref_count(right_309),(_Bool)1,info))));
                    _inf_value14->_protocol_obj=_inf_obj_value14;
                    _inf_value14->finalize=(void*)sLShiftNode_finalize;
                    _inf_value14->clone=(void*)sLShiftNode_clone;
                    _inf_value14->compile=(void*)sLShiftNode_compile;
                    _inf_value14->sline=(void*)sNodeBase_sline;
                    _inf_value14->sname=(void*)sNodeBase_sname;
                    _inf_value14->terminated=(void*)sNodeBase_terminated;
                    _inf_value14->kind=(void*)sLShiftNode_kind;
                    __result245__ = __result_obj__ = ((struct sNode*)(right_value473=_inf_value14));
                    if(right_309) { right_309 = come_decrement_ref_count2(right_309, ((struct sNode*)right_309)->finalize, ((struct sNode*)right_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_304) { node_304 = come_decrement_ref_count2(node_304, ((struct sNode*)node_304)->finalize, ((struct sNode*)node_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value467,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value468,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value473) { right_value473 = come_decrement_ref_count2(right_value473, ((struct sNode*)right_value473)->finalize, ((struct sNode*)right_value473)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result245__;
                    if(right_309) { right_309 = come_decrement_ref_count2(right_309, ((struct sNode*)right_309)->finalize, ((struct sNode*)right_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional455=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62,                    _if_conditional455) {
                        info->p+=3;
                        skip_spaces_and_lf(info);
                        right_311=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value474=shift_exp(info))));
                        if(right_value474) { right_value474 = come_decrement_ref_count2(right_value474, ((struct sNode*)right_value474)->finalize, ((struct sNode*)right_value474)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1733, "struct sNode");
                        _inf_obj_value15=come_increment_ref_count(((struct sRShiftNode*)(right_value476=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value475=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1733, "sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_304),(struct sNode*)come_increment_ref_count(right_311),(_Bool)1,info))));
                        _inf_value15->_protocol_obj=_inf_obj_value15;
                        _inf_value15->finalize=(void*)sRShiftNode_finalize;
                        _inf_value15->clone=(void*)sRShiftNode_clone;
                        _inf_value15->compile=(void*)sRShiftNode_compile;
                        _inf_value15->sline=(void*)sNodeBase_sline;
                        _inf_value15->sname=(void*)sNodeBase_sname;
                        _inf_value15->terminated=(void*)sNodeBase_terminated;
                        _inf_value15->kind=(void*)sRShiftNode_kind;
                        __result248__ = __result_obj__ = ((struct sNode*)(right_value481=_inf_value15));
                        if(right_311) { right_311 = come_decrement_ref_count2(right_311, ((struct sNode*)right_311)->finalize, ((struct sNode*)right_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_304) { node_304 = come_decrement_ref_count2(node_304, ((struct sNode*)node_304)->finalize, ((struct sNode*)node_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value475,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value476,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value481) { right_value481 = come_decrement_ref_count2(right_value481, ((struct sNode*)right_value481)->finalize, ((struct sNode*)right_value481)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result248__;
                        if(right_311) { right_311 = come_decrement_ref_count2(right_311, ((struct sNode*)right_311)->finalize, ((struct sNode*)right_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result249__ = __result_obj__ = node_304;
    if(node_304) { node_304 = come_decrement_ref_count2(node_304, ((struct sNode*)node_304)->finalize, ((struct sNode*)node_304)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result249__;
    if(node_304) { node_304 = come_decrement_ref_count2(node_304, ((struct sNode*)node_304)->finalize, ((struct sNode*)node_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
void* __result_obj__;
_Bool _if_conditional446;
_Bool _if_conditional447;
_Bool _if_conditional448;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional446=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional446) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(_if_conditional447=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional447) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional448=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional448) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__;
_Bool _if_conditional449;
struct sLShiftNode* __result243__;
void* right_value469;
struct sLShiftNode* result_310;
_Bool _if_conditional450;
_Bool _if_conditional451;
void* right_value470;
char* __dec_obj181;
_Bool _if_conditional452;
_Bool _if_conditional453;
void* right_value471;
struct sNode* __dec_obj182;
_Bool _if_conditional454;
void* right_value472;
struct sNode* __dec_obj183;
struct sLShiftNode* __result244__;
memset(&__result_obj__, 0, sizeof(void*));
right_value469 = (void*)0;
memset(&result_310, 0, sizeof(struct sLShiftNode*));
right_value470 = (void*)0;
right_value471 = (void*)0;
right_value472 = (void*)0;
                        if(_if_conditional449=self==(void*)0,                        _if_conditional449) {
                            __result243__ = __result_obj__ = (void*)0;
                            return __result243__;
                        }
                        result_310=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value469=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "sLShiftNode"))));
                        come_call_finalizer3(right_value469,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional450=self!=((void*)0),                        _if_conditional450) {
                            result_310->sline=self->sline;
                        }
                        if(_if_conditional451=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional451) {
                            __dec_obj181=result_310->sname;
                            result_310->sname=(char*)come_increment_ref_count(((char*)(right_value470=string_clone(self->sname))));
                            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value470 = come_decrement_ref_count2(right_value470, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(_if_conditional452=self!=((void*)0),                        _if_conditional452) {
                            result_310->mQuote=self->mQuote;
                        }
                        if(_if_conditional453=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional453) {
                            __dec_obj182=result_310->mLeft;
                            result_310->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value471=sNode_clone(self->mLeft))));
                            if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value471) { right_value471 = come_decrement_ref_count2(right_value471, ((struct sNode*)right_value471)->finalize, ((struct sNode*)right_value471)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional454=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional454) {
                            __dec_obj183=result_310->mRight;
                            result_310->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value472=sNode_clone(self->mRight))));
                            if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value472) { right_value472 = come_decrement_ref_count2(right_value472, ((struct sNode*)right_value472)->finalize, ((struct sNode*)right_value472)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        __result244__ = __result_obj__ = result_310;
                        come_call_finalizer3(result_310,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result244__;
                        come_call_finalizer3(result_310,sLShiftNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
void* __result_obj__;
_Bool _if_conditional456;
_Bool _if_conditional457;
_Bool _if_conditional458;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional456=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional456) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional457=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional457) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional458=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional458) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__;
_Bool _if_conditional459;
struct sRShiftNode* __result246__;
void* right_value477;
struct sRShiftNode* result_312;
_Bool _if_conditional460;
_Bool _if_conditional461;
void* right_value478;
char* __dec_obj184;
_Bool _if_conditional462;
_Bool _if_conditional463;
void* right_value479;
struct sNode* __dec_obj185;
_Bool _if_conditional464;
void* right_value480;
struct sNode* __dec_obj186;
struct sRShiftNode* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
right_value477 = (void*)0;
memset(&result_312, 0, sizeof(struct sRShiftNode*));
right_value478 = (void*)0;
right_value479 = (void*)0;
right_value480 = (void*)0;
                            if(_if_conditional459=self==(void*)0,                            _if_conditional459) {
                                __result246__ = __result_obj__ = (void*)0;
                                return __result246__;
                            }
                            result_312=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value477=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "sRShiftNode"))));
                            come_call_finalizer3(right_value477,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional460=self!=((void*)0),                            _if_conditional460) {
                                result_312->sline=self->sline;
                            }
                            if(_if_conditional461=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional461) {
                                __dec_obj184=result_312->sname;
                                result_312->sname=(char*)come_increment_ref_count(((char*)(right_value478=string_clone(self->sname))));
                                __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value478 = come_decrement_ref_count2(right_value478, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(_if_conditional462=self!=((void*)0),                            _if_conditional462) {
                                result_312->mQuote=self->mQuote;
                            }
                            if(_if_conditional463=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional463) {
                                __dec_obj185=result_312->mLeft;
                                result_312->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value479=sNode_clone(self->mLeft))));
                                if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value479) { right_value479 = come_decrement_ref_count2(right_value479, ((struct sNode*)right_value479)->finalize, ((struct sNode*)right_value479)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional464=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional464) {
                                __dec_obj186=result_312->mRight;
                                result_312->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value480=sNode_clone(self->mRight))));
                                if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value480) { right_value480 = come_decrement_ref_count2(right_value480, ((struct sNode*)right_value480)->finalize, ((struct sNode*)right_value480)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            __result247__ = __result_obj__ = result_312;
                            come_call_finalizer3(result_312,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result247__;
                            come_call_finalizer3(result_312,sRShiftNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* comparison_exp(struct sInfo* info){
void* __result_obj__;
void* right_value482;
struct sNode* node_313;
_Bool _while_condtional22;
_Bool _if_conditional465;
void* right_value483;
struct sNode* right_314;
void* right_value484;
void* right_value485;
struct sNode* _inf_value16;
struct sGtEqNode* _inf_obj_value16;
void* right_value490;
struct sNode* __result252__;
_Bool _if_conditional475;
void* right_value491;
struct sNode* right_316;
void* right_value492;
void* right_value493;
struct sNode* _inf_value17;
struct sLtEqNode* _inf_obj_value17;
void* right_value498;
struct sNode* __result255__;
_Bool _if_conditional485;
void* right_value499;
struct sNode* right_318;
void* right_value500;
void* right_value501;
struct sNode* _inf_value18;
struct sGtNode* _inf_obj_value18;
void* right_value506;
struct sNode* __result258__;
_Bool _if_conditional495;
void* right_value507;
struct sNode* right_320;
void* right_value508;
void* right_value509;
struct sNode* _inf_value19;
struct sLtNode* _inf_obj_value19;
void* right_value514;
struct sNode* __result261__;
_Bool _if_conditional505;
void* right_value515;
struct sNode* right_322;
void* right_value516;
void* right_value517;
struct sNode* _inf_value20;
struct sGtEqNode* _inf_obj_value20;
void* right_value522;
struct sNode* __result264__;
_Bool _if_conditional515;
void* right_value523;
struct sNode* right_324;
void* right_value524;
void* right_value525;
struct sNode* _inf_value21;
struct sLtEqNode* _inf_obj_value21;
void* right_value530;
struct sNode* __result267__;
_Bool _if_conditional525;
void* right_value531;
struct sNode* right_326;
void* right_value532;
void* right_value533;
struct sNode* _inf_value22;
struct sGtNode* _inf_obj_value22;
void* right_value538;
struct sNode* __result270__;
_Bool _if_conditional535;
void* right_value539;
struct sNode* right_328;
void* right_value540;
void* right_value541;
struct sNode* _inf_value23;
struct sLtNode* _inf_obj_value23;
void* right_value546;
struct sNode* __result273__;
struct sNode* __result274__;
memset(&__result_obj__, 0, sizeof(void*));
right_value482 = (void*)0;
memset(&node_313, 0, sizeof(struct sNode*));
right_value483 = (void*)0;
memset(&right_314, 0, sizeof(struct sNode*));
right_value484 = (void*)0;
right_value485 = (void*)0;
right_value490 = (void*)0;
right_value491 = (void*)0;
memset(&right_316, 0, sizeof(struct sNode*));
right_value492 = (void*)0;
right_value493 = (void*)0;
right_value498 = (void*)0;
right_value499 = (void*)0;
memset(&right_318, 0, sizeof(struct sNode*));
right_value500 = (void*)0;
right_value501 = (void*)0;
right_value506 = (void*)0;
right_value507 = (void*)0;
memset(&right_320, 0, sizeof(struct sNode*));
right_value508 = (void*)0;
right_value509 = (void*)0;
right_value514 = (void*)0;
right_value515 = (void*)0;
memset(&right_322, 0, sizeof(struct sNode*));
right_value516 = (void*)0;
right_value517 = (void*)0;
right_value522 = (void*)0;
right_value523 = (void*)0;
memset(&right_324, 0, sizeof(struct sNode*));
right_value524 = (void*)0;
right_value525 = (void*)0;
right_value530 = (void*)0;
right_value531 = (void*)0;
memset(&right_326, 0, sizeof(struct sNode*));
right_value532 = (void*)0;
right_value533 = (void*)0;
right_value538 = (void*)0;
right_value539 = (void*)0;
memset(&right_328, 0, sizeof(struct sNode*));
right_value540 = (void*)0;
right_value541 = (void*)0;
right_value546 = (void*)0;
    parse_sharp_v5(info);
    node_313=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value482=shift_exp(info))));
    if(right_value482) { right_value482 = come_decrement_ref_count2(right_value482, ((struct sNode*)right_value482)->finalize, ((struct sNode*)right_value482)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional22=*info->p,    _while_condtional22) {
        if(_if_conditional465=*info->p==62&&*(info->p+1)==61,        _if_conditional465) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value483=shift_exp(info))));
            if(right_value483) { right_value483 = come_decrement_ref_count2(right_value483, ((struct sNode*)right_value483)->finalize, ((struct sNode*)right_value483)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1760, "struct sNode");
            _inf_obj_value16=come_increment_ref_count(((struct sGtEqNode*)(right_value485=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value484=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1760, "sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_313),(struct sNode*)come_increment_ref_count(right_314),(_Bool)0,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sGtEqNode_finalize;
            _inf_value16->clone=(void*)sGtEqNode_clone;
            _inf_value16->compile=(void*)sGtEqNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sGtEqNode_kind;
            __result252__ = __result_obj__ = ((struct sNode*)(right_value490=_inf_value16));
            if(right_314) { right_314 = come_decrement_ref_count2(right_314, ((struct sNode*)right_314)->finalize, ((struct sNode*)right_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_313) { node_313 = come_decrement_ref_count2(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value484,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value485,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value490) { right_value490 = come_decrement_ref_count2(right_value490, ((struct sNode*)right_value490)->finalize, ((struct sNode*)right_value490)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result252__;
            if(right_314) { right_314 = come_decrement_ref_count2(right_314, ((struct sNode*)right_314)->finalize, ((struct sNode*)right_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional475=*info->p==60&&*(info->p+1)==61,            _if_conditional475) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_316=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value491=shift_exp(info))));
                if(right_value491) { right_value491 = come_decrement_ref_count2(right_value491, ((struct sNode*)right_value491)->finalize, ((struct sNode*)right_value491)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1768, "struct sNode");
                _inf_obj_value17=come_increment_ref_count(((struct sLtEqNode*)(right_value493=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value492=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1768, "sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_313),(struct sNode*)come_increment_ref_count(right_316),(_Bool)0,info))));
                _inf_value17->_protocol_obj=_inf_obj_value17;
                _inf_value17->finalize=(void*)sLtEqNode_finalize;
                _inf_value17->clone=(void*)sLtEqNode_clone;
                _inf_value17->compile=(void*)sLtEqNode_compile;
                _inf_value17->sline=(void*)sNodeBase_sline;
                _inf_value17->sname=(void*)sNodeBase_sname;
                _inf_value17->terminated=(void*)sNodeBase_terminated;
                _inf_value17->kind=(void*)sLtEqNode_kind;
                __result255__ = __result_obj__ = ((struct sNode*)(right_value498=_inf_value17));
                if(right_316) { right_316 = come_decrement_ref_count2(right_316, ((struct sNode*)right_316)->finalize, ((struct sNode*)right_316)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_313) { node_313 = come_decrement_ref_count2(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value492,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value493,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value498) { right_value498 = come_decrement_ref_count2(right_value498, ((struct sNode*)right_value498)->finalize, ((struct sNode*)right_value498)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result255__;
                if(right_316) { right_316 = come_decrement_ref_count2(right_316, ((struct sNode*)right_316)->finalize, ((struct sNode*)right_316)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional485=*info->p==62&&*(info->p+1)!=62,                _if_conditional485) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_318=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value499=shift_exp(info))));
                    if(right_value499) { right_value499 = come_decrement_ref_count2(right_value499, ((struct sNode*)right_value499)->finalize, ((struct sNode*)right_value499)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1776, "struct sNode");
                    _inf_obj_value18=come_increment_ref_count(((struct sGtNode*)(right_value501=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value500=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1776, "sGtNode")))),(struct sNode*)come_increment_ref_count(node_313),(struct sNode*)come_increment_ref_count(right_318),(_Bool)0,info))));
                    _inf_value18->_protocol_obj=_inf_obj_value18;
                    _inf_value18->finalize=(void*)sGtNode_finalize;
                    _inf_value18->clone=(void*)sGtNode_clone;
                    _inf_value18->compile=(void*)sGtNode_compile;
                    _inf_value18->sline=(void*)sNodeBase_sline;
                    _inf_value18->sname=(void*)sNodeBase_sname;
                    _inf_value18->terminated=(void*)sNodeBase_terminated;
                    _inf_value18->kind=(void*)sGtNode_kind;
                    __result258__ = __result_obj__ = ((struct sNode*)(right_value506=_inf_value18));
                    if(right_318) { right_318 = come_decrement_ref_count2(right_318, ((struct sNode*)right_318)->finalize, ((struct sNode*)right_318)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_313) { node_313 = come_decrement_ref_count2(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value500,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value501,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value506) { right_value506 = come_decrement_ref_count2(right_value506, ((struct sNode*)right_value506)->finalize, ((struct sNode*)right_value506)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result258__;
                    if(right_318) { right_318 = come_decrement_ref_count2(right_318, ((struct sNode*)right_318)->finalize, ((struct sNode*)right_318)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional495=*info->p==60&&*(info->p+1)!=60,                    _if_conditional495) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        right_320=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value507=shift_exp(info))));
                        if(right_value507) { right_value507 = come_decrement_ref_count2(right_value507, ((struct sNode*)right_value507)->finalize, ((struct sNode*)right_value507)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1784, "struct sNode");
                        _inf_obj_value19=come_increment_ref_count(((struct sLtNode*)(right_value509=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value508=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1784, "sLtNode")))),(struct sNode*)come_increment_ref_count(node_313),(struct sNode*)come_increment_ref_count(right_320),(_Bool)0,info))));
                        _inf_value19->_protocol_obj=_inf_obj_value19;
                        _inf_value19->finalize=(void*)sLtNode_finalize;
                        _inf_value19->clone=(void*)sLtNode_clone;
                        _inf_value19->compile=(void*)sLtNode_compile;
                        _inf_value19->sline=(void*)sNodeBase_sline;
                        _inf_value19->sname=(void*)sNodeBase_sname;
                        _inf_value19->terminated=(void*)sNodeBase_terminated;
                        _inf_value19->kind=(void*)sLtNode_kind;
                        __result261__ = __result_obj__ = ((struct sNode*)(right_value514=_inf_value19));
                        if(right_320) { right_320 = come_decrement_ref_count2(right_320, ((struct sNode*)right_320)->finalize, ((struct sNode*)right_320)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_313) { node_313 = come_decrement_ref_count2(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value508,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value509,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value514) { right_value514 = come_decrement_ref_count2(right_value514, ((struct sNode*)right_value514)->finalize, ((struct sNode*)right_value514)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result261__;
                        if(right_320) { right_320 = come_decrement_ref_count2(right_320, ((struct sNode*)right_320)->finalize, ((struct sNode*)right_320)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional505=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==61,                        _if_conditional505) {
                            info->p+=3;
                            skip_spaces_and_lf(info);
                            right_322=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value515=shift_exp(info))));
                            if(right_value515) { right_value515 = come_decrement_ref_count2(right_value515, ((struct sNode*)right_value515)->finalize, ((struct sNode*)right_value515)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1792, "struct sNode");
                            _inf_obj_value20=come_increment_ref_count(((struct sGtEqNode*)(right_value517=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value516=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1792, "sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_313),(struct sNode*)come_increment_ref_count(right_322),(_Bool)1,info))));
                            _inf_value20->_protocol_obj=_inf_obj_value20;
                            _inf_value20->finalize=(void*)sGtEqNode_finalize;
                            _inf_value20->clone=(void*)sGtEqNode_clone;
                            _inf_value20->compile=(void*)sGtEqNode_compile;
                            _inf_value20->sline=(void*)sNodeBase_sline;
                            _inf_value20->sname=(void*)sNodeBase_sname;
                            _inf_value20->terminated=(void*)sNodeBase_terminated;
                            _inf_value20->kind=(void*)sGtEqNode_kind;
                            __result264__ = __result_obj__ = ((struct sNode*)(right_value522=_inf_value20));
                            if(right_322) { right_322 = come_decrement_ref_count2(right_322, ((struct sNode*)right_322)->finalize, ((struct sNode*)right_322)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_313) { node_313 = come_decrement_ref_count2(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value516,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value517,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value522) { right_value522 = come_decrement_ref_count2(right_value522, ((struct sNode*)right_value522)->finalize, ((struct sNode*)right_value522)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result264__;
                            if(right_322) { right_322 = come_decrement_ref_count2(right_322, ((struct sNode*)right_322)->finalize, ((struct sNode*)right_322)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional515=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==61,                            _if_conditional515) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_324=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value523=shift_exp(info))));
                                if(right_value523) { right_value523 = come_decrement_ref_count2(right_value523, ((struct sNode*)right_value523)->finalize, ((struct sNode*)right_value523)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1800, "struct sNode");
                                _inf_obj_value21=come_increment_ref_count(((struct sLtEqNode*)(right_value525=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value524=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1800, "sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_313),(struct sNode*)come_increment_ref_count(right_324),(_Bool)1,info))));
                                _inf_value21->_protocol_obj=_inf_obj_value21;
                                _inf_value21->finalize=(void*)sLtEqNode_finalize;
                                _inf_value21->clone=(void*)sLtEqNode_clone;
                                _inf_value21->compile=(void*)sLtEqNode_compile;
                                _inf_value21->sline=(void*)sNodeBase_sline;
                                _inf_value21->sname=(void*)sNodeBase_sname;
                                _inf_value21->terminated=(void*)sNodeBase_terminated;
                                _inf_value21->kind=(void*)sLtEqNode_kind;
                                __result267__ = __result_obj__ = ((struct sNode*)(right_value530=_inf_value21));
                                if(right_324) { right_324 = come_decrement_ref_count2(right_324, ((struct sNode*)right_324)->finalize, ((struct sNode*)right_324)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_313) { node_313 = come_decrement_ref_count2(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(right_value524,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value525,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value530) { right_value530 = come_decrement_ref_count2(right_value530, ((struct sNode*)right_value530)->finalize, ((struct sNode*)right_value530)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result267__;
                                if(right_324) { right_324 = come_decrement_ref_count2(right_324, ((struct sNode*)right_324)->finalize, ((struct sNode*)right_324)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional525=*info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62,                                _if_conditional525) {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                    right_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value531=shift_exp(info))));
                                    if(right_value531) { right_value531 = come_decrement_ref_count2(right_value531, ((struct sNode*)right_value531)->finalize, ((struct sNode*)right_value531)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1808, "struct sNode");
                                    _inf_obj_value22=come_increment_ref_count(((struct sGtNode*)(right_value533=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value532=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1808, "sGtNode")))),(struct sNode*)come_increment_ref_count(node_313),(struct sNode*)come_increment_ref_count(right_326),(_Bool)1,info))));
                                    _inf_value22->_protocol_obj=_inf_obj_value22;
                                    _inf_value22->finalize=(void*)sGtNode_finalize;
                                    _inf_value22->clone=(void*)sGtNode_clone;
                                    _inf_value22->compile=(void*)sGtNode_compile;
                                    _inf_value22->sline=(void*)sNodeBase_sline;
                                    _inf_value22->sname=(void*)sNodeBase_sname;
                                    _inf_value22->terminated=(void*)sNodeBase_terminated;
                                    _inf_value22->kind=(void*)sGtNode_kind;
                                    __result270__ = __result_obj__ = ((struct sNode*)(right_value538=_inf_value22));
                                    if(right_326) { right_326 = come_decrement_ref_count2(right_326, ((struct sNode*)right_326)->finalize, ((struct sNode*)right_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node_313) { node_313 = come_decrement_ref_count2(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_value532,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value533,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value538) { right_value538 = come_decrement_ref_count2(right_value538, ((struct sNode*)right_value538)->finalize, ((struct sNode*)right_value538)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result270__;
                                    if(right_326) { right_326 = come_decrement_ref_count2(right_326, ((struct sNode*)right_326)->finalize, ((struct sNode*)right_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional535=*info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60,                                    _if_conditional535) {
                                        info->p+=2;
                                        skip_spaces_and_lf(info);
                                        right_328=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value539=shift_exp(info))));
                                        if(right_value539) { right_value539 = come_decrement_ref_count2(right_value539, ((struct sNode*)right_value539)->finalize, ((struct sNode*)right_value539)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1816, "struct sNode");
                                        _inf_obj_value23=come_increment_ref_count(((struct sLtNode*)(right_value541=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value540=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1816, "sLtNode")))),(struct sNode*)come_increment_ref_count(node_313),(struct sNode*)come_increment_ref_count(right_328),(_Bool)1,info))));
                                        _inf_value23->_protocol_obj=_inf_obj_value23;
                                        _inf_value23->finalize=(void*)sLtNode_finalize;
                                        _inf_value23->clone=(void*)sLtNode_clone;
                                        _inf_value23->compile=(void*)sLtNode_compile;
                                        _inf_value23->sline=(void*)sNodeBase_sline;
                                        _inf_value23->sname=(void*)sNodeBase_sname;
                                        _inf_value23->terminated=(void*)sNodeBase_terminated;
                                        _inf_value23->kind=(void*)sLtNode_kind;
                                        __result273__ = __result_obj__ = ((struct sNode*)(right_value546=_inf_value23));
                                        if(right_328) { right_328 = come_decrement_ref_count2(right_328, ((struct sNode*)right_328)->finalize, ((struct sNode*)right_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node_313) { node_313 = come_decrement_ref_count2(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(right_value540,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value541,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value546) { right_value546 = come_decrement_ref_count2(right_value546, ((struct sNode*)right_value546)->finalize, ((struct sNode*)right_value546)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result273__;
                                        if(right_328) { right_328 = come_decrement_ref_count2(right_328, ((struct sNode*)right_328)->finalize, ((struct sNode*)right_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    __result274__ = __result_obj__ = node_313;
    if(node_313) { node_313 = come_decrement_ref_count2(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result274__;
    if(node_313) { node_313 = come_decrement_ref_count2(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
void* __result_obj__;
_Bool _if_conditional506;
_Bool _if_conditional507;
_Bool _if_conditional508;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional506=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional506) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional507=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional507) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional508=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional508) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__;
_Bool _if_conditional509;
struct sGtEqNode* __result262__;
void* right_value518;
struct sGtEqNode* result_323;
_Bool _if_conditional510;
_Bool _if_conditional511;
void* right_value519;
char* __dec_obj199;
_Bool _if_conditional512;
_Bool _if_conditional513;
void* right_value520;
struct sNode* __dec_obj200;
_Bool _if_conditional514;
void* right_value521;
struct sNode* __dec_obj201;
struct sGtEqNode* __result263__;
memset(&__result_obj__, 0, sizeof(void*));
right_value518 = (void*)0;
memset(&result_323, 0, sizeof(struct sGtEqNode*));
right_value519 = (void*)0;
right_value520 = (void*)0;
right_value521 = (void*)0;
                                if(_if_conditional509=self==(void*)0,                                _if_conditional509) {
                                    __result262__ = __result_obj__ = (void*)0;
                                    return __result262__;
                                }
                                result_323=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value518=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "sGtEqNode"))));
                                come_call_finalizer3(right_value518,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional510=self!=((void*)0),                                _if_conditional510) {
                                    result_323->sline=self->sline;
                                }
                                if(_if_conditional511=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional511) {
                                    __dec_obj199=result_323->sname;
                                    result_323->sname=(char*)come_increment_ref_count(((char*)(right_value519=string_clone(self->sname))));
                                    __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value519 = come_decrement_ref_count2(right_value519, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional512=self!=((void*)0),                                _if_conditional512) {
                                    result_323->mQuote=self->mQuote;
                                }
                                if(_if_conditional513=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional513) {
                                    __dec_obj200=result_323->mLeft;
                                    result_323->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value520=sNode_clone(self->mLeft))));
                                    if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value520) { right_value520 = come_decrement_ref_count2(right_value520, ((struct sNode*)right_value520)->finalize, ((struct sNode*)right_value520)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional514=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional514) {
                                    __dec_obj201=result_323->mRight;
                                    result_323->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value521=sNode_clone(self->mRight))));
                                    if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count2(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value521) { right_value521 = come_decrement_ref_count2(right_value521, ((struct sNode*)right_value521)->finalize, ((struct sNode*)right_value521)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                __result263__ = __result_obj__ = result_323;
                                come_call_finalizer3(result_323,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result263__;
                                come_call_finalizer3(result_323,sGtEqNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
void* __result_obj__;
_Bool _if_conditional516;
_Bool _if_conditional517;
_Bool _if_conditional518;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional516=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional516) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional517=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional517) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional518=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional518) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__;
_Bool _if_conditional519;
struct sLtEqNode* __result265__;
void* right_value526;
struct sLtEqNode* result_325;
_Bool _if_conditional520;
_Bool _if_conditional521;
void* right_value527;
char* __dec_obj202;
_Bool _if_conditional522;
_Bool _if_conditional523;
void* right_value528;
struct sNode* __dec_obj203;
_Bool _if_conditional524;
void* right_value529;
struct sNode* __dec_obj204;
struct sLtEqNode* __result266__;
memset(&__result_obj__, 0, sizeof(void*));
right_value526 = (void*)0;
memset(&result_325, 0, sizeof(struct sLtEqNode*));
right_value527 = (void*)0;
right_value528 = (void*)0;
right_value529 = (void*)0;
                                    if(_if_conditional519=self==(void*)0,                                    _if_conditional519) {
                                        __result265__ = __result_obj__ = (void*)0;
                                        return __result265__;
                                    }
                                    result_325=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value526=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "sLtEqNode"))));
                                    come_call_finalizer3(right_value526,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional520=self!=((void*)0),                                    _if_conditional520) {
                                        result_325->sline=self->sline;
                                    }
                                    if(_if_conditional521=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional521) {
                                        __dec_obj202=result_325->sname;
                                        result_325->sname=(char*)come_increment_ref_count(((char*)(right_value527=string_clone(self->sname))));
                                        __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value527 = come_decrement_ref_count2(right_value527, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional522=self!=((void*)0),                                    _if_conditional522) {
                                        result_325->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional523=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional523) {
                                        __dec_obj203=result_325->mLeft;
                                        result_325->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value528=sNode_clone(self->mLeft))));
                                        if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value528) { right_value528 = come_decrement_ref_count2(right_value528, ((struct sNode*)right_value528)->finalize, ((struct sNode*)right_value528)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional524=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional524) {
                                        __dec_obj204=result_325->mRight;
                                        result_325->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value529=sNode_clone(self->mRight))));
                                        if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value529) { right_value529 = come_decrement_ref_count2(right_value529, ((struct sNode*)right_value529)->finalize, ((struct sNode*)right_value529)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    __result266__ = __result_obj__ = result_325;
                                    come_call_finalizer3(result_325,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result266__;
                                    come_call_finalizer3(result_325,sLtEqNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sGtNode_finalize(struct sGtNode* self){
void* __result_obj__;
_Bool _if_conditional526;
_Bool _if_conditional527;
_Bool _if_conditional528;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional526=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional526) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional527=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional527) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional528=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional528) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__;
_Bool _if_conditional529;
struct sGtNode* __result268__;
void* right_value534;
struct sGtNode* result_327;
_Bool _if_conditional530;
_Bool _if_conditional531;
void* right_value535;
char* __dec_obj205;
_Bool _if_conditional532;
_Bool _if_conditional533;
void* right_value536;
struct sNode* __dec_obj206;
_Bool _if_conditional534;
void* right_value537;
struct sNode* __dec_obj207;
struct sGtNode* __result269__;
memset(&__result_obj__, 0, sizeof(void*));
right_value534 = (void*)0;
memset(&result_327, 0, sizeof(struct sGtNode*));
right_value535 = (void*)0;
right_value536 = (void*)0;
right_value537 = (void*)0;
                                        if(_if_conditional529=self==(void*)0,                                        _if_conditional529) {
                                            __result268__ = __result_obj__ = (void*)0;
                                            return __result268__;
                                        }
                                        result_327=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value534=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "sGtNode"))));
                                        come_call_finalizer3(right_value534,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional530=self!=((void*)0),                                        _if_conditional530) {
                                            result_327->sline=self->sline;
                                        }
                                        if(_if_conditional531=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional531) {
                                            __dec_obj205=result_327->sname;
                                            result_327->sname=(char*)come_increment_ref_count(((char*)(right_value535=string_clone(self->sname))));
                                            __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value535 = come_decrement_ref_count2(right_value535, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional532=self!=((void*)0),                                        _if_conditional532) {
                                            result_327->mQuote=self->mQuote;
                                        }
                                        if(_if_conditional533=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional533) {
                                            __dec_obj206=result_327->mLeft;
                                            result_327->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value536=sNode_clone(self->mLeft))));
                                            if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value536) { right_value536 = come_decrement_ref_count2(right_value536, ((struct sNode*)right_value536)->finalize, ((struct sNode*)right_value536)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional534=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional534) {
                                            __dec_obj207=result_327->mRight;
                                            result_327->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value537=sNode_clone(self->mRight))));
                                            if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count2(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value537) { right_value537 = come_decrement_ref_count2(right_value537, ((struct sNode*)right_value537)->finalize, ((struct sNode*)right_value537)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        __result269__ = __result_obj__ = result_327;
                                        come_call_finalizer3(result_327,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result269__;
                                        come_call_finalizer3(result_327,sGtNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLtNode_finalize(struct sLtNode* self){
void* __result_obj__;
_Bool _if_conditional536;
_Bool _if_conditional537;
_Bool _if_conditional538;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional536=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional536) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional537=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional537) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional538=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional538) {
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__;
_Bool _if_conditional539;
struct sLtNode* __result271__;
void* right_value542;
struct sLtNode* result_329;
_Bool _if_conditional540;
_Bool _if_conditional541;
void* right_value543;
char* __dec_obj208;
_Bool _if_conditional542;
_Bool _if_conditional543;
void* right_value544;
struct sNode* __dec_obj209;
_Bool _if_conditional544;
void* right_value545;
struct sNode* __dec_obj210;
struct sLtNode* __result272__;
memset(&__result_obj__, 0, sizeof(void*));
right_value542 = (void*)0;
memset(&result_329, 0, sizeof(struct sLtNode*));
right_value543 = (void*)0;
right_value544 = (void*)0;
right_value545 = (void*)0;
                                            if(_if_conditional539=self==(void*)0,                                            _if_conditional539) {
                                                __result271__ = __result_obj__ = (void*)0;
                                                return __result271__;
                                            }
                                            result_329=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value542=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "sLtNode"))));
                                            come_call_finalizer3(right_value542,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional540=self!=((void*)0),                                            _if_conditional540) {
                                                result_329->sline=self->sline;
                                            }
                                            if(_if_conditional541=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional541) {
                                                __dec_obj208=result_329->sname;
                                                result_329->sname=(char*)come_increment_ref_count(((char*)(right_value543=string_clone(self->sname))));
                                                __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value543 = come_decrement_ref_count2(right_value543, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            if(_if_conditional542=self!=((void*)0),                                            _if_conditional542) {
                                                result_329->mQuote=self->mQuote;
                                            }
                                            if(_if_conditional543=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional543) {
                                                __dec_obj209=result_329->mLeft;
                                                result_329->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value544=sNode_clone(self->mLeft))));
                                                if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count2(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value544) { right_value544 = come_decrement_ref_count2(right_value544, ((struct sNode*)right_value544)->finalize, ((struct sNode*)right_value544)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional544=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional544) {
                                                __dec_obj210=result_329->mRight;
                                                result_329->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value545=sNode_clone(self->mRight))));
                                                if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value545) { right_value545 = come_decrement_ref_count2(right_value545, ((struct sNode*)right_value545)->finalize, ((struct sNode*)right_value545)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            __result272__ = __result_obj__ = result_329;
                                            come_call_finalizer3(result_329,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result272__;
                                            come_call_finalizer3(result_329,sLtNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* eq_exp(struct sInfo* info){
void* __result_obj__;
void* right_value547;
struct sNode* node_330;
_Bool _while_condtional23;
_Bool _if_conditional545;
void* right_value548;
struct sNode* right_331;
void* right_value549;
void* right_value550;
struct sNode* _inf_value24;
struct sEq2Node* _inf_obj_value24;
void* right_value555;
struct sNode* __result277__;
_Bool _if_conditional555;
void* right_value556;
struct sNode* right_333;
void* right_value557;
void* right_value558;
struct sNode* _inf_value25;
struct sEqNode* _inf_obj_value25;
void* right_value563;
struct sNode* __result280__;
_Bool _if_conditional565;
void* right_value564;
struct sNode* right_335;
void* right_value565;
void* right_value566;
struct sNode* _inf_value26;
struct sNotEq2Node* _inf_obj_value26;
void* right_value571;
struct sNode* __result283__;
_Bool _if_conditional575;
void* right_value572;
struct sNode* right_337;
void* right_value573;
void* right_value574;
struct sNode* _inf_value27;
struct sNotEqNode* _inf_obj_value27;
void* right_value579;
struct sNode* __result286__;
_Bool _if_conditional585;
void* right_value580;
struct sNode* right_339;
void* right_value581;
void* right_value582;
struct sNode* _inf_value28;
struct sEq2Node* _inf_obj_value28;
void* right_value587;
struct sNode* __result289__;
_Bool _if_conditional595;
void* right_value588;
struct sNode* right_341;
void* right_value589;
void* right_value590;
struct sNode* _inf_value29;
struct sEqNode* _inf_obj_value29;
void* right_value595;
struct sNode* __result292__;
_Bool _if_conditional605;
void* right_value596;
struct sNode* right_343;
void* right_value597;
void* right_value598;
struct sNode* _inf_value30;
struct sNotEq2Node* _inf_obj_value30;
void* right_value603;
struct sNode* __result295__;
_Bool _if_conditional615;
void* right_value604;
struct sNode* right_345;
void* right_value605;
void* right_value606;
struct sNode* _inf_value31;
struct sNotEqNode* _inf_obj_value31;
void* right_value611;
struct sNode* __result298__;
struct sNode* __result299__;
memset(&__result_obj__, 0, sizeof(void*));
right_value547 = (void*)0;
memset(&node_330, 0, sizeof(struct sNode*));
right_value548 = (void*)0;
memset(&right_331, 0, sizeof(struct sNode*));
right_value549 = (void*)0;
right_value550 = (void*)0;
right_value555 = (void*)0;
right_value556 = (void*)0;
memset(&right_333, 0, sizeof(struct sNode*));
right_value557 = (void*)0;
right_value558 = (void*)0;
right_value563 = (void*)0;
right_value564 = (void*)0;
memset(&right_335, 0, sizeof(struct sNode*));
right_value565 = (void*)0;
right_value566 = (void*)0;
right_value571 = (void*)0;
right_value572 = (void*)0;
memset(&right_337, 0, sizeof(struct sNode*));
right_value573 = (void*)0;
right_value574 = (void*)0;
right_value579 = (void*)0;
right_value580 = (void*)0;
memset(&right_339, 0, sizeof(struct sNode*));
right_value581 = (void*)0;
right_value582 = (void*)0;
right_value587 = (void*)0;
right_value588 = (void*)0;
memset(&right_341, 0, sizeof(struct sNode*));
right_value589 = (void*)0;
right_value590 = (void*)0;
right_value595 = (void*)0;
right_value596 = (void*)0;
memset(&right_343, 0, sizeof(struct sNode*));
right_value597 = (void*)0;
right_value598 = (void*)0;
right_value603 = (void*)0;
right_value604 = (void*)0;
memset(&right_345, 0, sizeof(struct sNode*));
right_value605 = (void*)0;
right_value606 = (void*)0;
right_value611 = (void*)0;
    parse_sharp_v5(info);
    node_330=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value547=comparison_exp(info))));
    if(right_value547) { right_value547 = come_decrement_ref_count2(right_value547, ((struct sNode*)right_value547)->finalize, ((struct sNode*)right_value547)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional23=*info->p,    _while_condtional23) {
        if(_if_conditional545=*info->p==61&&*(info->p+1)==61&&*(info->p+2)==61,        _if_conditional545) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_331=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value548=eq_exp(info))));
            if(right_value548) { right_value548 = come_decrement_ref_count2(right_value548, ((struct sNode*)right_value548)->finalize, ((struct sNode*)right_value548)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1843, "struct sNode");
            _inf_obj_value24=come_increment_ref_count(((struct sEq2Node*)(right_value550=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value549=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 1843, "sEq2Node")))),(struct sNode*)come_increment_ref_count(node_330),(struct sNode*)come_increment_ref_count(right_331),(_Bool)0,info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sEq2Node_finalize;
            _inf_value24->clone=(void*)sEq2Node_clone;
            _inf_value24->compile=(void*)sEq2Node_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sEq2Node_kind;
            __result277__ = __result_obj__ = ((struct sNode*)(right_value555=_inf_value24));
            if(right_331) { right_331 = come_decrement_ref_count2(right_331, ((struct sNode*)right_331)->finalize, ((struct sNode*)right_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_330) { node_330 = come_decrement_ref_count2(node_330, ((struct sNode*)node_330)->finalize, ((struct sNode*)node_330)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value549,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value550,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value555) { right_value555 = come_decrement_ref_count2(right_value555, ((struct sNode*)right_value555)->finalize, ((struct sNode*)right_value555)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result277__;
            if(right_331) { right_331 = come_decrement_ref_count2(right_331, ((struct sNode*)right_331)->finalize, ((struct sNode*)right_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional555=*info->p==61&&*(info->p+1)==61,            _if_conditional555) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_333=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value556=eq_exp(info))));
                if(right_value556) { right_value556 = come_decrement_ref_count2(right_value556, ((struct sNode*)right_value556)->finalize, ((struct sNode*)right_value556)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1851, "struct sNode");
                _inf_obj_value25=come_increment_ref_count(((struct sEqNode*)(right_value558=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value557=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 1851, "sEqNode")))),(struct sNode*)come_increment_ref_count(node_330),(struct sNode*)come_increment_ref_count(right_333),(_Bool)0,info))));
                _inf_value25->_protocol_obj=_inf_obj_value25;
                _inf_value25->finalize=(void*)sEqNode_finalize;
                _inf_value25->clone=(void*)sEqNode_clone;
                _inf_value25->compile=(void*)sEqNode_compile;
                _inf_value25->sline=(void*)sNodeBase_sline;
                _inf_value25->sname=(void*)sNodeBase_sname;
                _inf_value25->terminated=(void*)sNodeBase_terminated;
                _inf_value25->kind=(void*)sEqNode_kind;
                __result280__ = __result_obj__ = ((struct sNode*)(right_value563=_inf_value25));
                if(right_333) { right_333 = come_decrement_ref_count2(right_333, ((struct sNode*)right_333)->finalize, ((struct sNode*)right_333)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_330) { node_330 = come_decrement_ref_count2(node_330, ((struct sNode*)node_330)->finalize, ((struct sNode*)node_330)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value557,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value558,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value563) { right_value563 = come_decrement_ref_count2(right_value563, ((struct sNode*)right_value563)->finalize, ((struct sNode*)right_value563)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result280__;
                if(right_333) { right_333 = come_decrement_ref_count2(right_333, ((struct sNode*)right_333)->finalize, ((struct sNode*)right_333)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional565=*info->p==33&&*(info->p+1)==61&&*(info->p+2)==61,                _if_conditional565) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_335=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value564=eq_exp(info))));
                    if(right_value564) { right_value564 = come_decrement_ref_count2(right_value564, ((struct sNode*)right_value564)->finalize, ((struct sNode*)right_value564)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1859, "struct sNode");
                    _inf_obj_value26=come_increment_ref_count(((struct sNotEq2Node*)(right_value566=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value565=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 1859, "sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_330),(struct sNode*)come_increment_ref_count(right_335),(_Bool)0,info))));
                    _inf_value26->_protocol_obj=_inf_obj_value26;
                    _inf_value26->finalize=(void*)sNotEq2Node_finalize;
                    _inf_value26->clone=(void*)sNotEq2Node_clone;
                    _inf_value26->compile=(void*)sNotEq2Node_compile;
                    _inf_value26->sline=(void*)sNodeBase_sline;
                    _inf_value26->sname=(void*)sNodeBase_sname;
                    _inf_value26->terminated=(void*)sNodeBase_terminated;
                    _inf_value26->kind=(void*)sNotEq2Node_kind;
                    __result283__ = __result_obj__ = ((struct sNode*)(right_value571=_inf_value26));
                    if(right_335) { right_335 = come_decrement_ref_count2(right_335, ((struct sNode*)right_335)->finalize, ((struct sNode*)right_335)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_330) { node_330 = come_decrement_ref_count2(node_330, ((struct sNode*)node_330)->finalize, ((struct sNode*)node_330)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value565,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value566,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value571) { right_value571 = come_decrement_ref_count2(right_value571, ((struct sNode*)right_value571)->finalize, ((struct sNode*)right_value571)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result283__;
                    if(right_335) { right_335 = come_decrement_ref_count2(right_335, ((struct sNode*)right_335)->finalize, ((struct sNode*)right_335)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional575=*info->p==33&&*(info->p+1)==61,                    _if_conditional575) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_337=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value572=eq_exp(info))));
                        if(right_value572) { right_value572 = come_decrement_ref_count2(right_value572, ((struct sNode*)right_value572)->finalize, ((struct sNode*)right_value572)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1867, "struct sNode");
                        _inf_obj_value27=come_increment_ref_count(((struct sNotEqNode*)(right_value574=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value573=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 1867, "sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_330),(struct sNode*)come_increment_ref_count(right_337),(_Bool)0,info))));
                        _inf_value27->_protocol_obj=_inf_obj_value27;
                        _inf_value27->finalize=(void*)sNotEqNode_finalize;
                        _inf_value27->clone=(void*)sNotEqNode_clone;
                        _inf_value27->compile=(void*)sNotEqNode_compile;
                        _inf_value27->sline=(void*)sNodeBase_sline;
                        _inf_value27->sname=(void*)sNodeBase_sname;
                        _inf_value27->terminated=(void*)sNodeBase_terminated;
                        _inf_value27->kind=(void*)sNotEqNode_kind;
                        __result286__ = __result_obj__ = ((struct sNode*)(right_value579=_inf_value27));
                        if(right_337) { right_337 = come_decrement_ref_count2(right_337, ((struct sNode*)right_337)->finalize, ((struct sNode*)right_337)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_330) { node_330 = come_decrement_ref_count2(node_330, ((struct sNode*)node_330)->finalize, ((struct sNode*)node_330)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value573,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value574,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value579) { right_value579 = come_decrement_ref_count2(right_value579, ((struct sNode*)right_value579)->finalize, ((struct sNode*)right_value579)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result286__;
                        if(right_337) { right_337 = come_decrement_ref_count2(right_337, ((struct sNode*)right_337)->finalize, ((struct sNode*)right_337)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional585=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61,                        _if_conditional585) {
                            info->p+=4;
                            skip_spaces_and_lf(info);
                            right_339=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value580=eq_exp(info))));
                            if(right_value580) { right_value580 = come_decrement_ref_count2(right_value580, ((struct sNode*)right_value580)->finalize, ((struct sNode*)right_value580)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1875, "struct sNode");
                            _inf_obj_value28=come_increment_ref_count(((struct sEq2Node*)(right_value582=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value581=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 1875, "sEq2Node")))),(struct sNode*)come_increment_ref_count(node_330),(struct sNode*)come_increment_ref_count(right_339),(_Bool)1,info))));
                            _inf_value28->_protocol_obj=_inf_obj_value28;
                            _inf_value28->finalize=(void*)sEq2Node_finalize;
                            _inf_value28->clone=(void*)sEq2Node_clone;
                            _inf_value28->compile=(void*)sEq2Node_compile;
                            _inf_value28->sline=(void*)sNodeBase_sline;
                            _inf_value28->sname=(void*)sNodeBase_sname;
                            _inf_value28->terminated=(void*)sNodeBase_terminated;
                            _inf_value28->kind=(void*)sEq2Node_kind;
                            __result289__ = __result_obj__ = ((struct sNode*)(right_value587=_inf_value28));
                            if(right_339) { right_339 = come_decrement_ref_count2(right_339, ((struct sNode*)right_339)->finalize, ((struct sNode*)right_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_330) { node_330 = come_decrement_ref_count2(node_330, ((struct sNode*)node_330)->finalize, ((struct sNode*)node_330)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value581,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value582,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value587) { right_value587 = come_decrement_ref_count2(right_value587, ((struct sNode*)right_value587)->finalize, ((struct sNode*)right_value587)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result289__;
                            if(right_339) { right_339 = come_decrement_ref_count2(right_339, ((struct sNode*)right_339)->finalize, ((struct sNode*)right_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional595=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61,                            _if_conditional595) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_341=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value588=eq_exp(info))));
                                if(right_value588) { right_value588 = come_decrement_ref_count2(right_value588, ((struct sNode*)right_value588)->finalize, ((struct sNode*)right_value588)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1883, "struct sNode");
                                _inf_obj_value29=come_increment_ref_count(((struct sEqNode*)(right_value590=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value589=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 1883, "sEqNode")))),(struct sNode*)come_increment_ref_count(node_330),(struct sNode*)come_increment_ref_count(right_341),(_Bool)1,info))));
                                _inf_value29->_protocol_obj=_inf_obj_value29;
                                _inf_value29->finalize=(void*)sEqNode_finalize;
                                _inf_value29->clone=(void*)sEqNode_clone;
                                _inf_value29->compile=(void*)sEqNode_compile;
                                _inf_value29->sline=(void*)sNodeBase_sline;
                                _inf_value29->sname=(void*)sNodeBase_sname;
                                _inf_value29->terminated=(void*)sNodeBase_terminated;
                                _inf_value29->kind=(void*)sEqNode_kind;
                                __result292__ = __result_obj__ = ((struct sNode*)(right_value595=_inf_value29));
                                if(right_341) { right_341 = come_decrement_ref_count2(right_341, ((struct sNode*)right_341)->finalize, ((struct sNode*)right_341)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_330) { node_330 = come_decrement_ref_count2(node_330, ((struct sNode*)node_330)->finalize, ((struct sNode*)node_330)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(right_value589,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value590,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value595) { right_value595 = come_decrement_ref_count2(right_value595, ((struct sNode*)right_value595)->finalize, ((struct sNode*)right_value595)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result292__;
                                if(right_341) { right_341 = come_decrement_ref_count2(right_341, ((struct sNode*)right_341)->finalize, ((struct sNode*)right_341)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional605=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61,                                _if_conditional605) {
                                    info->p+=4;
                                    skip_spaces_and_lf(info);
                                    right_343=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value596=eq_exp(info))));
                                    if(right_value596) { right_value596 = come_decrement_ref_count2(right_value596, ((struct sNode*)right_value596)->finalize, ((struct sNode*)right_value596)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1891, "struct sNode");
                                    _inf_obj_value30=come_increment_ref_count(((struct sNotEq2Node*)(right_value598=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value597=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 1891, "sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_330),(struct sNode*)come_increment_ref_count(right_343),(_Bool)1,info))));
                                    _inf_value30->_protocol_obj=_inf_obj_value30;
                                    _inf_value30->finalize=(void*)sNotEq2Node_finalize;
                                    _inf_value30->clone=(void*)sNotEq2Node_clone;
                                    _inf_value30->compile=(void*)sNotEq2Node_compile;
                                    _inf_value30->sline=(void*)sNodeBase_sline;
                                    _inf_value30->sname=(void*)sNodeBase_sname;
                                    _inf_value30->terminated=(void*)sNodeBase_terminated;
                                    _inf_value30->kind=(void*)sNotEq2Node_kind;
                                    __result295__ = __result_obj__ = ((struct sNode*)(right_value603=_inf_value30));
                                    if(right_343) { right_343 = come_decrement_ref_count2(right_343, ((struct sNode*)right_343)->finalize, ((struct sNode*)right_343)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node_330) { node_330 = come_decrement_ref_count2(node_330, ((struct sNode*)node_330)->finalize, ((struct sNode*)node_330)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_value597,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value598,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value603) { right_value603 = come_decrement_ref_count2(right_value603, ((struct sNode*)right_value603)->finalize, ((struct sNode*)right_value603)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result295__;
                                    if(right_343) { right_343 = come_decrement_ref_count2(right_343, ((struct sNode*)right_343)->finalize, ((struct sNode*)right_343)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional615=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61,                                    _if_conditional615) {
                                        info->p+=3;
                                        skip_spaces_and_lf(info);
                                        right_345=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value604=eq_exp(info))));
                                        if(right_value604) { right_value604 = come_decrement_ref_count2(right_value604, ((struct sNode*)right_value604)->finalize, ((struct sNode*)right_value604)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1899, "struct sNode");
                                        _inf_obj_value31=come_increment_ref_count(((struct sNotEqNode*)(right_value606=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value605=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 1899, "sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_330),(struct sNode*)come_increment_ref_count(right_345),(_Bool)1,info))));
                                        _inf_value31->_protocol_obj=_inf_obj_value31;
                                        _inf_value31->finalize=(void*)sNotEqNode_finalize;
                                        _inf_value31->clone=(void*)sNotEqNode_clone;
                                        _inf_value31->compile=(void*)sNotEqNode_compile;
                                        _inf_value31->sline=(void*)sNodeBase_sline;
                                        _inf_value31->sname=(void*)sNodeBase_sname;
                                        _inf_value31->terminated=(void*)sNodeBase_terminated;
                                        _inf_value31->kind=(void*)sNotEqNode_kind;
                                        __result298__ = __result_obj__ = ((struct sNode*)(right_value611=_inf_value31));
                                        if(right_345) { right_345 = come_decrement_ref_count2(right_345, ((struct sNode*)right_345)->finalize, ((struct sNode*)right_345)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node_330) { node_330 = come_decrement_ref_count2(node_330, ((struct sNode*)node_330)->finalize, ((struct sNode*)node_330)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(right_value605,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value606,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value611) { right_value611 = come_decrement_ref_count2(right_value611, ((struct sNode*)right_value611)->finalize, ((struct sNode*)right_value611)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result298__;
                                        if(right_345) { right_345 = come_decrement_ref_count2(right_345, ((struct sNode*)right_345)->finalize, ((struct sNode*)right_345)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    __result299__ = __result_obj__ = node_330;
    if(node_330) { node_330 = come_decrement_ref_count2(node_330, ((struct sNode*)node_330)->finalize, ((struct sNode*)node_330)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result299__;
    if(node_330) { node_330 = come_decrement_ref_count2(node_330, ((struct sNode*)node_330)->finalize, ((struct sNode*)node_330)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sEq2Node_finalize(struct sEq2Node* self){
void* __result_obj__;
_Bool _if_conditional586;
_Bool _if_conditional587;
_Bool _if_conditional588;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional586=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional586) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional587=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional587) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional588=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional588) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__;
_Bool _if_conditional589;
struct sEq2Node* __result287__;
void* right_value583;
struct sEq2Node* result_340;
_Bool _if_conditional590;
_Bool _if_conditional591;
void* right_value584;
char* __dec_obj223;
_Bool _if_conditional592;
_Bool _if_conditional593;
void* right_value585;
struct sNode* __dec_obj224;
_Bool _if_conditional594;
void* right_value586;
struct sNode* __dec_obj225;
struct sEq2Node* __result288__;
memset(&__result_obj__, 0, sizeof(void*));
right_value583 = (void*)0;
memset(&result_340, 0, sizeof(struct sEq2Node*));
right_value584 = (void*)0;
right_value585 = (void*)0;
right_value586 = (void*)0;
                                if(_if_conditional589=self==(void*)0,                                _if_conditional589) {
                                    __result287__ = __result_obj__ = (void*)0;
                                    return __result287__;
                                }
                                result_340=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value583=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "sEq2Node"))));
                                come_call_finalizer3(right_value583,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional590=self!=((void*)0),                                _if_conditional590) {
                                    result_340->sline=self->sline;
                                }
                                if(_if_conditional591=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional591) {
                                    __dec_obj223=result_340->sname;
                                    result_340->sname=(char*)come_increment_ref_count(((char*)(right_value584=string_clone(self->sname))));
                                    __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value584 = come_decrement_ref_count2(right_value584, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(_if_conditional592=self!=((void*)0),                                _if_conditional592) {
                                    result_340->mQuote=self->mQuote;
                                }
                                if(_if_conditional593=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional593) {
                                    __dec_obj224=result_340->mLeft;
                                    result_340->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value585=sNode_clone(self->mLeft))));
                                    if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value585) { right_value585 = come_decrement_ref_count2(right_value585, ((struct sNode*)right_value585)->finalize, ((struct sNode*)right_value585)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional594=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional594) {
                                    __dec_obj225=result_340->mRight;
                                    result_340->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value586=sNode_clone(self->mRight))));
                                    if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value586) { right_value586 = come_decrement_ref_count2(right_value586, ((struct sNode*)right_value586)->finalize, ((struct sNode*)right_value586)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                __result288__ = __result_obj__ = result_340;
                                come_call_finalizer3(result_340,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
                                return __result288__;
                                come_call_finalizer3(result_340,sEq2Node_finalize, 0, 0, 0, 0, (void*)0);
}

static void sEqNode_finalize(struct sEqNode* self){
void* __result_obj__;
_Bool _if_conditional596;
_Bool _if_conditional597;
_Bool _if_conditional598;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional596=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional596) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(_if_conditional597=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional597) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional598=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional598) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__;
_Bool _if_conditional599;
struct sEqNode* __result290__;
void* right_value591;
struct sEqNode* result_342;
_Bool _if_conditional600;
_Bool _if_conditional601;
void* right_value592;
char* __dec_obj226;
_Bool _if_conditional602;
_Bool _if_conditional603;
void* right_value593;
struct sNode* __dec_obj227;
_Bool _if_conditional604;
void* right_value594;
struct sNode* __dec_obj228;
struct sEqNode* __result291__;
memset(&__result_obj__, 0, sizeof(void*));
right_value591 = (void*)0;
memset(&result_342, 0, sizeof(struct sEqNode*));
right_value592 = (void*)0;
right_value593 = (void*)0;
right_value594 = (void*)0;
                                    if(_if_conditional599=self==(void*)0,                                    _if_conditional599) {
                                        __result290__ = __result_obj__ = (void*)0;
                                        return __result290__;
                                    }
                                    result_342=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value591=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "sEqNode"))));
                                    come_call_finalizer3(right_value591,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional600=self!=((void*)0),                                    _if_conditional600) {
                                        result_342->sline=self->sline;
                                    }
                                    if(_if_conditional601=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional601) {
                                        __dec_obj226=result_342->sname;
                                        result_342->sname=(char*)come_increment_ref_count(((char*)(right_value592=string_clone(self->sname))));
                                        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value592 = come_decrement_ref_count2(right_value592, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(_if_conditional602=self!=((void*)0),                                    _if_conditional602) {
                                        result_342->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional603=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional603) {
                                        __dec_obj227=result_342->mLeft;
                                        result_342->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value593=sNode_clone(self->mLeft))));
                                        if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value593) { right_value593 = come_decrement_ref_count2(right_value593, ((struct sNode*)right_value593)->finalize, ((struct sNode*)right_value593)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional604=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional604) {
                                        __dec_obj228=result_342->mRight;
                                        result_342->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value594=sNode_clone(self->mRight))));
                                        if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value594) { right_value594 = come_decrement_ref_count2(right_value594, ((struct sNode*)right_value594)->finalize, ((struct sNode*)right_value594)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    __result291__ = __result_obj__ = result_342;
                                    come_call_finalizer3(result_342,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result291__;
                                    come_call_finalizer3(result_342,sEqNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
void* __result_obj__;
_Bool _if_conditional606;
_Bool _if_conditional607;
_Bool _if_conditional608;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional606=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional606) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional607=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional607) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional608=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional608) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__;
_Bool _if_conditional609;
struct sNotEq2Node* __result293__;
void* right_value599;
struct sNotEq2Node* result_344;
_Bool _if_conditional610;
_Bool _if_conditional611;
void* right_value600;
char* __dec_obj229;
_Bool _if_conditional612;
_Bool _if_conditional613;
void* right_value601;
struct sNode* __dec_obj230;
_Bool _if_conditional614;
void* right_value602;
struct sNode* __dec_obj231;
struct sNotEq2Node* __result294__;
memset(&__result_obj__, 0, sizeof(void*));
right_value599 = (void*)0;
memset(&result_344, 0, sizeof(struct sNotEq2Node*));
right_value600 = (void*)0;
right_value601 = (void*)0;
right_value602 = (void*)0;
                                        if(_if_conditional609=self==(void*)0,                                        _if_conditional609) {
                                            __result293__ = __result_obj__ = (void*)0;
                                            return __result293__;
                                        }
                                        result_344=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value599=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "sNotEq2Node"))));
                                        come_call_finalizer3(right_value599,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional610=self!=((void*)0),                                        _if_conditional610) {
                                            result_344->sline=self->sline;
                                        }
                                        if(_if_conditional611=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional611) {
                                            __dec_obj229=result_344->sname;
                                            result_344->sname=(char*)come_increment_ref_count(((char*)(right_value600=string_clone(self->sname))));
                                            __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value600 = come_decrement_ref_count2(right_value600, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(_if_conditional612=self!=((void*)0),                                        _if_conditional612) {
                                            result_344->mQuote=self->mQuote;
                                        }
                                        if(_if_conditional613=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional613) {
                                            __dec_obj230=result_344->mLeft;
                                            result_344->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value601=sNode_clone(self->mLeft))));
                                            if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value601) { right_value601 = come_decrement_ref_count2(right_value601, ((struct sNode*)right_value601)->finalize, ((struct sNode*)right_value601)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional614=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional614) {
                                            __dec_obj231=result_344->mRight;
                                            result_344->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value602=sNode_clone(self->mRight))));
                                            if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count2(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value602) { right_value602 = come_decrement_ref_count2(right_value602, ((struct sNode*)right_value602)->finalize, ((struct sNode*)right_value602)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        __result294__ = __result_obj__ = result_344;
                                        come_call_finalizer3(result_344,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result294__;
                                        come_call_finalizer3(result_344,sNotEq2Node_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
void* __result_obj__;
_Bool _if_conditional616;
_Bool _if_conditional617;
_Bool _if_conditional618;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional616=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional616) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(_if_conditional617=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional617) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional618=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional618) {
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__;
_Bool _if_conditional619;
struct sNotEqNode* __result296__;
void* right_value607;
struct sNotEqNode* result_346;
_Bool _if_conditional620;
_Bool _if_conditional621;
void* right_value608;
char* __dec_obj232;
_Bool _if_conditional622;
_Bool _if_conditional623;
void* right_value609;
struct sNode* __dec_obj233;
_Bool _if_conditional624;
void* right_value610;
struct sNode* __dec_obj234;
struct sNotEqNode* __result297__;
memset(&__result_obj__, 0, sizeof(void*));
right_value607 = (void*)0;
memset(&result_346, 0, sizeof(struct sNotEqNode*));
right_value608 = (void*)0;
right_value609 = (void*)0;
right_value610 = (void*)0;
                                            if(_if_conditional619=self==(void*)0,                                            _if_conditional619) {
                                                __result296__ = __result_obj__ = (void*)0;
                                                return __result296__;
                                            }
                                            result_346=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value607=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "sNotEqNode"))));
                                            come_call_finalizer3(right_value607,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional620=self!=((void*)0),                                            _if_conditional620) {
                                                result_346->sline=self->sline;
                                            }
                                            if(_if_conditional621=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional621) {
                                                __dec_obj232=result_346->sname;
                                                result_346->sname=(char*)come_increment_ref_count(((char*)(right_value608=string_clone(self->sname))));
                                                __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value608 = come_decrement_ref_count2(right_value608, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            if(_if_conditional622=self!=((void*)0),                                            _if_conditional622) {
                                                result_346->mQuote=self->mQuote;
                                            }
                                            if(_if_conditional623=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional623) {
                                                __dec_obj233=result_346->mLeft;
                                                result_346->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value609=sNode_clone(self->mLeft))));
                                                if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count2(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value609) { right_value609 = come_decrement_ref_count2(right_value609, ((struct sNode*)right_value609)->finalize, ((struct sNode*)right_value609)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional624=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional624) {
                                                __dec_obj234=result_346->mRight;
                                                result_346->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value610=sNode_clone(self->mRight))));
                                                if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value610) { right_value610 = come_decrement_ref_count2(right_value610, ((struct sNode*)right_value610)->finalize, ((struct sNode*)right_value610)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            __result297__ = __result_obj__ = result_346;
                                            come_call_finalizer3(result_346,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result297__;
                                            come_call_finalizer3(result_346,sNotEqNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* and_exp(struct sInfo* info){
void* __result_obj__;
void* right_value612;
struct sNode* node_347;
_Bool _while_condtional24;
_Bool _if_conditional625;
void* right_value613;
struct sNode* right_348;
void* right_value614;
void* right_value615;
struct sNode* _inf_value32;
struct sAndNode* _inf_obj_value32;
void* right_value620;
struct sNode* __result302__;
_Bool _if_conditional635;
void* right_value621;
struct sNode* right_350;
void* right_value622;
void* right_value623;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* right_value628;
struct sNode* __result305__;
struct sNode* __result306__;
memset(&__result_obj__, 0, sizeof(void*));
right_value612 = (void*)0;
memset(&node_347, 0, sizeof(struct sNode*));
right_value613 = (void*)0;
memset(&right_348, 0, sizeof(struct sNode*));
right_value614 = (void*)0;
right_value615 = (void*)0;
right_value620 = (void*)0;
right_value621 = (void*)0;
memset(&right_350, 0, sizeof(struct sNode*));
right_value622 = (void*)0;
right_value623 = (void*)0;
right_value628 = (void*)0;
    parse_sharp_v5(info);
    node_347=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value612=eq_exp(info))));
    if(right_value612) { right_value612 = come_decrement_ref_count2(right_value612, ((struct sNode*)right_value612)->finalize, ((struct sNode*)right_value612)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional24=*info->p,    _while_condtional24) {
        if(_if_conditional625=!node_347->terminated(node_347->_protocol_obj)&&*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61,        _if_conditional625) {
            info->p++;
            skip_spaces_and_lf(info);
            right_348=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value613=and_exp(info))));
            if(right_value613) { right_value613 = come_decrement_ref_count2(right_value613, ((struct sNode*)right_value613)->finalize, ((struct sNode*)right_value613)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1926, "struct sNode");
            _inf_obj_value32=come_increment_ref_count(((struct sAndNode*)(right_value615=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value614=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 1926, "sAndNode")))),(struct sNode*)come_increment_ref_count(node_347),(struct sNode*)come_increment_ref_count(right_348),(_Bool)0,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sAndNode_finalize;
            _inf_value32->clone=(void*)sAndNode_clone;
            _inf_value32->compile=(void*)sAndNode_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sNodeBase_terminated;
            _inf_value32->kind=(void*)sAndNode_kind;
            __result302__ = __result_obj__ = ((struct sNode*)(right_value620=_inf_value32));
            if(right_348) { right_348 = come_decrement_ref_count2(right_348, ((struct sNode*)right_348)->finalize, ((struct sNode*)right_348)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_347) { node_347 = come_decrement_ref_count2(node_347, ((struct sNode*)node_347)->finalize, ((struct sNode*)node_347)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value614,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value615,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value620) { right_value620 = come_decrement_ref_count2(right_value620, ((struct sNode*)right_value620)->finalize, ((struct sNode*)right_value620)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result302__;
            if(right_348) { right_348 = come_decrement_ref_count2(right_348, ((struct sNode*)right_348)->finalize, ((struct sNode*)right_348)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional635=!node_347->terminated(node_347->_protocol_obj)&&*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61,            _if_conditional635) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_350=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value621=and_exp(info))));
                if(right_value621) { right_value621 = come_decrement_ref_count2(right_value621, ((struct sNode*)right_value621)->finalize, ((struct sNode*)right_value621)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1934, "struct sNode");
                _inf_obj_value33=come_increment_ref_count(((struct sAndNode*)(right_value623=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value622=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 1934, "sAndNode")))),(struct sNode*)come_increment_ref_count(node_347),(struct sNode*)come_increment_ref_count(right_350),(_Bool)1,info))));
                _inf_value33->_protocol_obj=_inf_obj_value33;
                _inf_value33->finalize=(void*)sAndNode_finalize;
                _inf_value33->clone=(void*)sAndNode_clone;
                _inf_value33->compile=(void*)sAndNode_compile;
                _inf_value33->sline=(void*)sNodeBase_sline;
                _inf_value33->sname=(void*)sNodeBase_sname;
                _inf_value33->terminated=(void*)sNodeBase_terminated;
                _inf_value33->kind=(void*)sAndNode_kind;
                __result305__ = __result_obj__ = ((struct sNode*)(right_value628=_inf_value33));
                if(right_350) { right_350 = come_decrement_ref_count2(right_350, ((struct sNode*)right_350)->finalize, ((struct sNode*)right_350)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_347) { node_347 = come_decrement_ref_count2(node_347, ((struct sNode*)node_347)->finalize, ((struct sNode*)node_347)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value622,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value623,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value628) { right_value628 = come_decrement_ref_count2(right_value628, ((struct sNode*)right_value628)->finalize, ((struct sNode*)right_value628)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result305__;
                if(right_350) { right_350 = come_decrement_ref_count2(right_350, ((struct sNode*)right_350)->finalize, ((struct sNode*)right_350)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result306__ = __result_obj__ = node_347;
    if(node_347) { node_347 = come_decrement_ref_count2(node_347, ((struct sNode*)node_347)->finalize, ((struct sNode*)node_347)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result306__;
    if(node_347) { node_347 = come_decrement_ref_count2(node_347, ((struct sNode*)node_347)->finalize, ((struct sNode*)node_347)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAndNode_finalize(struct sAndNode* self){
void* __result_obj__;
_Bool _if_conditional636;
_Bool _if_conditional637;
_Bool _if_conditional638;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional636=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional636) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional637=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional637) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional638=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional638) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__;
_Bool _if_conditional639;
struct sAndNode* __result303__;
void* right_value624;
struct sAndNode* result_351;
_Bool _if_conditional640;
_Bool _if_conditional641;
void* right_value625;
char* __dec_obj238;
_Bool _if_conditional642;
_Bool _if_conditional643;
void* right_value626;
struct sNode* __dec_obj239;
_Bool _if_conditional644;
void* right_value627;
struct sNode* __dec_obj240;
struct sAndNode* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
right_value624 = (void*)0;
memset(&result_351, 0, sizeof(struct sAndNode*));
right_value625 = (void*)0;
right_value626 = (void*)0;
right_value627 = (void*)0;
                    if(_if_conditional639=self==(void*)0,                    _if_conditional639) {
                        __result303__ = __result_obj__ = (void*)0;
                        return __result303__;
                    }
                    result_351=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value624=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "sAndNode"))));
                    come_call_finalizer3(right_value624,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional640=self!=((void*)0),                    _if_conditional640) {
                        result_351->sline=self->sline;
                    }
                    if(_if_conditional641=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional641) {
                        __dec_obj238=result_351->sname;
                        result_351->sname=(char*)come_increment_ref_count(((char*)(right_value625=string_clone(self->sname))));
                        __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value625 = come_decrement_ref_count2(right_value625, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional642=self!=((void*)0),                    _if_conditional642) {
                        result_351->mQuote=self->mQuote;
                    }
                    if(_if_conditional643=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional643) {
                        __dec_obj239=result_351->mLeft;
                        result_351->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value626=sNode_clone(self->mLeft))));
                        if(__dec_obj239) { __dec_obj239 = come_decrement_ref_count2(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value626) { right_value626 = come_decrement_ref_count2(right_value626, ((struct sNode*)right_value626)->finalize, ((struct sNode*)right_value626)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional644=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional644) {
                        __dec_obj240=result_351->mRight;
                        result_351->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value627=sNode_clone(self->mRight))));
                        if(__dec_obj240) { __dec_obj240 = come_decrement_ref_count2(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value627) { right_value627 = come_decrement_ref_count2(right_value627, ((struct sNode*)right_value627)->finalize, ((struct sNode*)right_value627)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    __result304__ = __result_obj__ = result_351;
                    come_call_finalizer3(result_351,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result304__;
                    come_call_finalizer3(result_351,sAndNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* xor_exp(struct sInfo* info){
void* __result_obj__;
void* right_value629;
struct sNode* node_352;
_Bool _while_condtional25;
_Bool _if_conditional645;
void* right_value630;
struct sNode* right_353;
void* right_value631;
void* right_value632;
struct sNode* _inf_value34;
struct sXOrNode* _inf_obj_value34;
void* right_value637;
struct sNode* __result309__;
_Bool _if_conditional655;
void* right_value638;
struct sNode* right_355;
void* right_value639;
void* right_value640;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* right_value645;
struct sNode* __result312__;
struct sNode* __result313__;
memset(&__result_obj__, 0, sizeof(void*));
right_value629 = (void*)0;
memset(&node_352, 0, sizeof(struct sNode*));
right_value630 = (void*)0;
memset(&right_353, 0, sizeof(struct sNode*));
right_value631 = (void*)0;
right_value632 = (void*)0;
right_value637 = (void*)0;
right_value638 = (void*)0;
memset(&right_355, 0, sizeof(struct sNode*));
right_value639 = (void*)0;
right_value640 = (void*)0;
right_value645 = (void*)0;
    parse_sharp_v5(info);
    node_352=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value629=and_exp(info))));
    if(right_value629) { right_value629 = come_decrement_ref_count2(right_value629, ((struct sNode*)right_value629)->finalize, ((struct sNode*)right_value629)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional25=*info->p,    _while_condtional25) {
        if(_if_conditional645=*info->p==94&&*(info->p+1)!=61,        _if_conditional645) {
            info->p++;
            skip_spaces_and_lf(info);
            right_353=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value630=xor_exp(info))));
            if(right_value630) { right_value630 = come_decrement_ref_count2(right_value630, ((struct sNode*)right_value630)->finalize, ((struct sNode*)right_value630)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1961, "struct sNode");
            _inf_obj_value34=come_increment_ref_count(((struct sXOrNode*)(right_value632=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value631=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 1961, "sXOrNode")))),(struct sNode*)come_increment_ref_count(node_352),(struct sNode*)come_increment_ref_count(right_353),(_Bool)0,info))));
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sXOrNode_finalize;
            _inf_value34->clone=(void*)sXOrNode_clone;
            _inf_value34->compile=(void*)sXOrNode_compile;
            _inf_value34->sline=(void*)sNodeBase_sline;
            _inf_value34->sname=(void*)sNodeBase_sname;
            _inf_value34->terminated=(void*)sNodeBase_terminated;
            _inf_value34->kind=(void*)sXOrNode_kind;
            __result309__ = __result_obj__ = ((struct sNode*)(right_value637=_inf_value34));
            if(right_353) { right_353 = come_decrement_ref_count2(right_353, ((struct sNode*)right_353)->finalize, ((struct sNode*)right_353)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_352) { node_352 = come_decrement_ref_count2(node_352, ((struct sNode*)node_352)->finalize, ((struct sNode*)node_352)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value631,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value632,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value637) { right_value637 = come_decrement_ref_count2(right_value637, ((struct sNode*)right_value637)->finalize, ((struct sNode*)right_value637)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result309__;
            if(right_353) { right_353 = come_decrement_ref_count2(right_353, ((struct sNode*)right_353)->finalize, ((struct sNode*)right_353)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional655=*info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61,            _if_conditional655) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_355=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value638=xor_exp(info))));
                if(right_value638) { right_value638 = come_decrement_ref_count2(right_value638, ((struct sNode*)right_value638)->finalize, ((struct sNode*)right_value638)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1969, "struct sNode");
                _inf_obj_value35=come_increment_ref_count(((struct sXOrNode*)(right_value640=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value639=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 1969, "sXOrNode")))),(struct sNode*)come_increment_ref_count(node_352),(struct sNode*)come_increment_ref_count(right_355),(_Bool)1,info))));
                _inf_value35->_protocol_obj=_inf_obj_value35;
                _inf_value35->finalize=(void*)sXOrNode_finalize;
                _inf_value35->clone=(void*)sXOrNode_clone;
                _inf_value35->compile=(void*)sXOrNode_compile;
                _inf_value35->sline=(void*)sNodeBase_sline;
                _inf_value35->sname=(void*)sNodeBase_sname;
                _inf_value35->terminated=(void*)sNodeBase_terminated;
                _inf_value35->kind=(void*)sXOrNode_kind;
                __result312__ = __result_obj__ = ((struct sNode*)(right_value645=_inf_value35));
                if(right_355) { right_355 = come_decrement_ref_count2(right_355, ((struct sNode*)right_355)->finalize, ((struct sNode*)right_355)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_352) { node_352 = come_decrement_ref_count2(node_352, ((struct sNode*)node_352)->finalize, ((struct sNode*)node_352)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value639,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value640,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value645) { right_value645 = come_decrement_ref_count2(right_value645, ((struct sNode*)right_value645)->finalize, ((struct sNode*)right_value645)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result312__;
                if(right_355) { right_355 = come_decrement_ref_count2(right_355, ((struct sNode*)right_355)->finalize, ((struct sNode*)right_355)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result313__ = __result_obj__ = node_352;
    if(node_352) { node_352 = come_decrement_ref_count2(node_352, ((struct sNode*)node_352)->finalize, ((struct sNode*)node_352)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result313__;
    if(node_352) { node_352 = come_decrement_ref_count2(node_352, ((struct sNode*)node_352)->finalize, ((struct sNode*)node_352)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sXOrNode_finalize(struct sXOrNode* self){
void* __result_obj__;
_Bool _if_conditional656;
_Bool _if_conditional657;
_Bool _if_conditional658;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional656=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional656) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional657=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional657) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional658=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional658) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__;
_Bool _if_conditional659;
struct sXOrNode* __result310__;
void* right_value641;
struct sXOrNode* result_356;
_Bool _if_conditional660;
_Bool _if_conditional661;
void* right_value642;
char* __dec_obj244;
_Bool _if_conditional662;
_Bool _if_conditional663;
void* right_value643;
struct sNode* __dec_obj245;
_Bool _if_conditional664;
void* right_value644;
struct sNode* __dec_obj246;
struct sXOrNode* __result311__;
memset(&__result_obj__, 0, sizeof(void*));
right_value641 = (void*)0;
memset(&result_356, 0, sizeof(struct sXOrNode*));
right_value642 = (void*)0;
right_value643 = (void*)0;
right_value644 = (void*)0;
                    if(_if_conditional659=self==(void*)0,                    _if_conditional659) {
                        __result310__ = __result_obj__ = (void*)0;
                        return __result310__;
                    }
                    result_356=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value641=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "sXOrNode"))));
                    come_call_finalizer3(right_value641,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional660=self!=((void*)0),                    _if_conditional660) {
                        result_356->sline=self->sline;
                    }
                    if(_if_conditional661=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional661) {
                        __dec_obj244=result_356->sname;
                        result_356->sname=(char*)come_increment_ref_count(((char*)(right_value642=string_clone(self->sname))));
                        __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value642 = come_decrement_ref_count2(right_value642, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional662=self!=((void*)0),                    _if_conditional662) {
                        result_356->mQuote=self->mQuote;
                    }
                    if(_if_conditional663=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional663) {
                        __dec_obj245=result_356->mLeft;
                        result_356->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value643=sNode_clone(self->mLeft))));
                        if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count2(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value643) { right_value643 = come_decrement_ref_count2(right_value643, ((struct sNode*)right_value643)->finalize, ((struct sNode*)right_value643)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional664=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional664) {
                        __dec_obj246=result_356->mRight;
                        result_356->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value644=sNode_clone(self->mRight))));
                        if(__dec_obj246) { __dec_obj246 = come_decrement_ref_count2(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value644) { right_value644 = come_decrement_ref_count2(right_value644, ((struct sNode*)right_value644)->finalize, ((struct sNode*)right_value644)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    __result311__ = __result_obj__ = result_356;
                    come_call_finalizer3(result_356,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result311__;
                    come_call_finalizer3(result_356,sXOrNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* or_exp(struct sInfo* info){
void* __result_obj__;
void* right_value646;
struct sNode* node_357;
_Bool _while_condtional26;
_Bool _if_conditional665;
void* right_value647;
struct sNode* right_358;
void* right_value648;
void* right_value649;
struct sNode* _inf_value36;
struct sOrNode* _inf_obj_value36;
void* right_value654;
struct sNode* __result316__;
_Bool _if_conditional675;
void* right_value655;
struct sNode* right_360;
void* right_value656;
void* right_value657;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* right_value662;
struct sNode* __result319__;
struct sNode* __result320__;
memset(&__result_obj__, 0, sizeof(void*));
right_value646 = (void*)0;
memset(&node_357, 0, sizeof(struct sNode*));
right_value647 = (void*)0;
memset(&right_358, 0, sizeof(struct sNode*));
right_value648 = (void*)0;
right_value649 = (void*)0;
right_value654 = (void*)0;
right_value655 = (void*)0;
memset(&right_360, 0, sizeof(struct sNode*));
right_value656 = (void*)0;
right_value657 = (void*)0;
right_value662 = (void*)0;
    parse_sharp_v5(info);
    node_357=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value646=xor_exp(info))));
    if(right_value646) { right_value646 = come_decrement_ref_count2(right_value646, ((struct sNode*)right_value646)->finalize, ((struct sNode*)right_value646)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional26=*info->p,    _while_condtional26) {
        if(_if_conditional665=*info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124,        _if_conditional665) {
            info->p++;
            skip_spaces_and_lf(info);
            right_358=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value647=or_exp(info))));
            if(right_value647) { right_value647 = come_decrement_ref_count2(right_value647, ((struct sNode*)right_value647)->finalize, ((struct sNode*)right_value647)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1996, "struct sNode");
            _inf_obj_value36=come_increment_ref_count(((struct sOrNode*)(right_value649=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value648=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 1996, "sOrNode")))),(struct sNode*)come_increment_ref_count(node_357),(struct sNode*)come_increment_ref_count(right_358),(_Bool)0,info))));
            _inf_value36->_protocol_obj=_inf_obj_value36;
            _inf_value36->finalize=(void*)sOrNode_finalize;
            _inf_value36->clone=(void*)sOrNode_clone;
            _inf_value36->compile=(void*)sOrNode_compile;
            _inf_value36->sline=(void*)sNodeBase_sline;
            _inf_value36->sname=(void*)sNodeBase_sname;
            _inf_value36->terminated=(void*)sNodeBase_terminated;
            _inf_value36->kind=(void*)sOrNode_kind;
            __result316__ = __result_obj__ = ((struct sNode*)(right_value654=_inf_value36));
            if(right_358) { right_358 = come_decrement_ref_count2(right_358, ((struct sNode*)right_358)->finalize, ((struct sNode*)right_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_357) { node_357 = come_decrement_ref_count2(node_357, ((struct sNode*)node_357)->finalize, ((struct sNode*)node_357)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value648,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value649,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value654) { right_value654 = come_decrement_ref_count2(right_value654, ((struct sNode*)right_value654)->finalize, ((struct sNode*)right_value654)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result316__;
            if(right_358) { right_358 = come_decrement_ref_count2(right_358, ((struct sNode*)right_358)->finalize, ((struct sNode*)right_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional675=*info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124,            _if_conditional675) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_360=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value655=or_exp(info))));
                if(right_value655) { right_value655 = come_decrement_ref_count2(right_value655, ((struct sNode*)right_value655)->finalize, ((struct sNode*)right_value655)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2004, "struct sNode");
                _inf_obj_value37=come_increment_ref_count(((struct sOrNode*)(right_value657=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value656=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2004, "sOrNode")))),(struct sNode*)come_increment_ref_count(node_357),(struct sNode*)come_increment_ref_count(right_360),(_Bool)1,info))));
                _inf_value37->_protocol_obj=_inf_obj_value37;
                _inf_value37->finalize=(void*)sOrNode_finalize;
                _inf_value37->clone=(void*)sOrNode_clone;
                _inf_value37->compile=(void*)sOrNode_compile;
                _inf_value37->sline=(void*)sNodeBase_sline;
                _inf_value37->sname=(void*)sNodeBase_sname;
                _inf_value37->terminated=(void*)sNodeBase_terminated;
                _inf_value37->kind=(void*)sOrNode_kind;
                __result319__ = __result_obj__ = ((struct sNode*)(right_value662=_inf_value37));
                if(right_360) { right_360 = come_decrement_ref_count2(right_360, ((struct sNode*)right_360)->finalize, ((struct sNode*)right_360)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_357) { node_357 = come_decrement_ref_count2(node_357, ((struct sNode*)node_357)->finalize, ((struct sNode*)node_357)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value656,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value657,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value662) { right_value662 = come_decrement_ref_count2(right_value662, ((struct sNode*)right_value662)->finalize, ((struct sNode*)right_value662)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result319__;
                if(right_360) { right_360 = come_decrement_ref_count2(right_360, ((struct sNode*)right_360)->finalize, ((struct sNode*)right_360)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result320__ = __result_obj__ = node_357;
    if(node_357) { node_357 = come_decrement_ref_count2(node_357, ((struct sNode*)node_357)->finalize, ((struct sNode*)node_357)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result320__;
    if(node_357) { node_357 = come_decrement_ref_count2(node_357, ((struct sNode*)node_357)->finalize, ((struct sNode*)node_357)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sOrNode_finalize(struct sOrNode* self){
void* __result_obj__;
_Bool _if_conditional676;
_Bool _if_conditional677;
_Bool _if_conditional678;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional676=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional676) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional677=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional677) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional678=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional678) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__;
_Bool _if_conditional679;
struct sOrNode* __result317__;
void* right_value658;
struct sOrNode* result_361;
_Bool _if_conditional680;
_Bool _if_conditional681;
void* right_value659;
char* __dec_obj250;
_Bool _if_conditional682;
_Bool _if_conditional683;
void* right_value660;
struct sNode* __dec_obj251;
_Bool _if_conditional684;
void* right_value661;
struct sNode* __dec_obj252;
struct sOrNode* __result318__;
memset(&__result_obj__, 0, sizeof(void*));
right_value658 = (void*)0;
memset(&result_361, 0, sizeof(struct sOrNode*));
right_value659 = (void*)0;
right_value660 = (void*)0;
right_value661 = (void*)0;
                    if(_if_conditional679=self==(void*)0,                    _if_conditional679) {
                        __result317__ = __result_obj__ = (void*)0;
                        return __result317__;
                    }
                    result_361=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value658=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "sOrNode"))));
                    come_call_finalizer3(right_value658,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional680=self!=((void*)0),                    _if_conditional680) {
                        result_361->sline=self->sline;
                    }
                    if(_if_conditional681=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional681) {
                        __dec_obj250=result_361->sname;
                        result_361->sname=(char*)come_increment_ref_count(((char*)(right_value659=string_clone(self->sname))));
                        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value659 = come_decrement_ref_count2(right_value659, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional682=self!=((void*)0),                    _if_conditional682) {
                        result_361->mQuote=self->mQuote;
                    }
                    if(_if_conditional683=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional683) {
                        __dec_obj251=result_361->mLeft;
                        result_361->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value660=sNode_clone(self->mLeft))));
                        if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value660) { right_value660 = come_decrement_ref_count2(right_value660, ((struct sNode*)right_value660)->finalize, ((struct sNode*)right_value660)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional684=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional684) {
                        __dec_obj252=result_361->mRight;
                        result_361->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value661=sNode_clone(self->mRight))));
                        if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value661) { right_value661 = come_decrement_ref_count2(right_value661, ((struct sNode*)right_value661)->finalize, ((struct sNode*)right_value661)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    __result318__ = __result_obj__ = result_361;
                    come_call_finalizer3(result_361,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result318__;
                    come_call_finalizer3(result_361,sOrNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* andand_exp(struct sInfo* info){
void* __result_obj__;
void* right_value663;
struct sNode* node_362;
_Bool _while_condtional27;
_Bool _if_conditional685;
void* right_value664;
struct sNode* right_363;
void* right_value665;
void* right_value666;
struct sNode* _inf_value38;
struct sAndAndNode* _inf_obj_value38;
void* right_value671;
struct sNode* __result323__;
_Bool _if_conditional695;
void* right_value672;
struct sNode* right_365;
void* right_value673;
void* right_value674;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* right_value679;
struct sNode* __result326__;
struct sNode* __result327__;
memset(&__result_obj__, 0, sizeof(void*));
right_value663 = (void*)0;
memset(&node_362, 0, sizeof(struct sNode*));
right_value664 = (void*)0;
memset(&right_363, 0, sizeof(struct sNode*));
right_value665 = (void*)0;
right_value666 = (void*)0;
right_value671 = (void*)0;
right_value672 = (void*)0;
memset(&right_365, 0, sizeof(struct sNode*));
right_value673 = (void*)0;
right_value674 = (void*)0;
right_value679 = (void*)0;
    parse_sharp_v5(info);
    node_362=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value663=or_exp(info))));
    if(right_value663) { right_value663 = come_decrement_ref_count2(right_value663, ((struct sNode*)right_value663)->finalize, ((struct sNode*)right_value663)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional27=*info->p,    _while_condtional27) {
        if(_if_conditional685=*info->p==38&&*(info->p+1)==38,        _if_conditional685) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_363=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value664=andand_exp(info))));
            if(right_value664) { right_value664 = come_decrement_ref_count2(right_value664, ((struct sNode*)right_value664)->finalize, ((struct sNode*)right_value664)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2031, "struct sNode");
            _inf_obj_value38=come_increment_ref_count(((struct sAndAndNode*)(right_value666=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value665=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2031, "sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_362),(struct sNode*)come_increment_ref_count(right_363),(_Bool)0,info))));
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sAndAndNode_finalize;
            _inf_value38->clone=(void*)sAndAndNode_clone;
            _inf_value38->compile=(void*)sAndAndNode_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sAndAndNode_kind;
            __result323__ = __result_obj__ = ((struct sNode*)(right_value671=_inf_value38));
            if(right_363) { right_363 = come_decrement_ref_count2(right_363, ((struct sNode*)right_363)->finalize, ((struct sNode*)right_363)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_362) { node_362 = come_decrement_ref_count2(node_362, ((struct sNode*)node_362)->finalize, ((struct sNode*)node_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value665,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value666,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value671) { right_value671 = come_decrement_ref_count2(right_value671, ((struct sNode*)right_value671)->finalize, ((struct sNode*)right_value671)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result323__;
            if(right_363) { right_363 = come_decrement_ref_count2(right_363, ((struct sNode*)right_363)->finalize, ((struct sNode*)right_363)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional695=*info->p==92&&*(info->p+1)==38&&*(info->p+2)==38,            _if_conditional695) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_365=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value672=andand_exp(info))));
                if(right_value672) { right_value672 = come_decrement_ref_count2(right_value672, ((struct sNode*)right_value672)->finalize, ((struct sNode*)right_value672)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2039, "struct sNode");
                _inf_obj_value39=come_increment_ref_count(((struct sAndAndNode*)(right_value674=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value673=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2039, "sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_362),(struct sNode*)come_increment_ref_count(right_365),(_Bool)1,info))));
                _inf_value39->_protocol_obj=_inf_obj_value39;
                _inf_value39->finalize=(void*)sAndAndNode_finalize;
                _inf_value39->clone=(void*)sAndAndNode_clone;
                _inf_value39->compile=(void*)sAndAndNode_compile;
                _inf_value39->sline=(void*)sNodeBase_sline;
                _inf_value39->sname=(void*)sNodeBase_sname;
                _inf_value39->terminated=(void*)sNodeBase_terminated;
                _inf_value39->kind=(void*)sAndAndNode_kind;
                __result326__ = __result_obj__ = ((struct sNode*)(right_value679=_inf_value39));
                if(right_365) { right_365 = come_decrement_ref_count2(right_365, ((struct sNode*)right_365)->finalize, ((struct sNode*)right_365)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_362) { node_362 = come_decrement_ref_count2(node_362, ((struct sNode*)node_362)->finalize, ((struct sNode*)node_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value673,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value674,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value679) { right_value679 = come_decrement_ref_count2(right_value679, ((struct sNode*)right_value679)->finalize, ((struct sNode*)right_value679)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result326__;
                if(right_365) { right_365 = come_decrement_ref_count2(right_365, ((struct sNode*)right_365)->finalize, ((struct sNode*)right_365)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result327__ = __result_obj__ = node_362;
    if(node_362) { node_362 = come_decrement_ref_count2(node_362, ((struct sNode*)node_362)->finalize, ((struct sNode*)node_362)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result327__;
    if(node_362) { node_362 = come_decrement_ref_count2(node_362, ((struct sNode*)node_362)->finalize, ((struct sNode*)node_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
void* __result_obj__;
_Bool _if_conditional696;
_Bool _if_conditional697;
_Bool _if_conditional698;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional696=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional696) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional697=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional697) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional698=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional698) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__;
_Bool _if_conditional699;
struct sAndAndNode* __result324__;
void* right_value675;
struct sAndAndNode* result_366;
_Bool _if_conditional700;
_Bool _if_conditional701;
void* right_value676;
char* __dec_obj256;
_Bool _if_conditional702;
_Bool _if_conditional703;
void* right_value677;
struct sNode* __dec_obj257;
_Bool _if_conditional704;
void* right_value678;
struct sNode* __dec_obj258;
struct sAndAndNode* __result325__;
memset(&__result_obj__, 0, sizeof(void*));
right_value675 = (void*)0;
memset(&result_366, 0, sizeof(struct sAndAndNode*));
right_value676 = (void*)0;
right_value677 = (void*)0;
right_value678 = (void*)0;
                    if(_if_conditional699=self==(void*)0,                    _if_conditional699) {
                        __result324__ = __result_obj__ = (void*)0;
                        return __result324__;
                    }
                    result_366=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value675=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "sAndAndNode"))));
                    come_call_finalizer3(right_value675,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional700=self!=((void*)0),                    _if_conditional700) {
                        result_366->sline=self->sline;
                    }
                    if(_if_conditional701=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional701) {
                        __dec_obj256=result_366->sname;
                        result_366->sname=(char*)come_increment_ref_count(((char*)(right_value676=string_clone(self->sname))));
                        __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value676 = come_decrement_ref_count2(right_value676, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional702=self!=((void*)0),                    _if_conditional702) {
                        result_366->mQuote=self->mQuote;
                    }
                    if(_if_conditional703=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional703) {
                        __dec_obj257=result_366->mLeft;
                        result_366->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value677=sNode_clone(self->mLeft))));
                        if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value677) { right_value677 = come_decrement_ref_count2(right_value677, ((struct sNode*)right_value677)->finalize, ((struct sNode*)right_value677)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional704=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional704) {
                        __dec_obj258=result_366->mRight;
                        result_366->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value678=sNode_clone(self->mRight))));
                        if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value678) { right_value678 = come_decrement_ref_count2(right_value678, ((struct sNode*)right_value678)->finalize, ((struct sNode*)right_value678)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    __result325__ = __result_obj__ = result_366;
                    come_call_finalizer3(result_366,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result325__;
                    come_call_finalizer3(result_366,sAndAndNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* oror_exp(struct sInfo* info){
void* __result_obj__;
void* right_value680;
struct sNode* node_367;
_Bool _while_condtional28;
_Bool _if_conditional705;
void* right_value681;
struct sNode* right_368;
void* right_value682;
void* right_value683;
struct sNode* _inf_value40;
struct sOrOrNode* _inf_obj_value40;
void* right_value688;
struct sNode* __result330__;
_Bool _if_conditional715;
void* right_value689;
struct sNode* right_370;
void* right_value690;
void* right_value691;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* right_value696;
struct sNode* __result333__;
struct sNode* __result334__;
memset(&__result_obj__, 0, sizeof(void*));
right_value680 = (void*)0;
memset(&node_367, 0, sizeof(struct sNode*));
right_value681 = (void*)0;
memset(&right_368, 0, sizeof(struct sNode*));
right_value682 = (void*)0;
right_value683 = (void*)0;
right_value688 = (void*)0;
right_value689 = (void*)0;
memset(&right_370, 0, sizeof(struct sNode*));
right_value690 = (void*)0;
right_value691 = (void*)0;
right_value696 = (void*)0;
    parse_sharp_v5(info);
    node_367=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value680=andand_exp(info))));
    if(right_value680) { right_value680 = come_decrement_ref_count2(right_value680, ((struct sNode*)right_value680)->finalize, ((struct sNode*)right_value680)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional28=*info->p,    _while_condtional28) {
        if(_if_conditional705=*info->p==124&&*(info->p+1)==124,        _if_conditional705) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_368=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value681=oror_exp(info))));
            if(right_value681) { right_value681 = come_decrement_ref_count2(right_value681, ((struct sNode*)right_value681)->finalize, ((struct sNode*)right_value681)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2066, "struct sNode");
            _inf_obj_value40=come_increment_ref_count(((struct sOrOrNode*)(right_value683=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value682=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2066, "sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_367),(struct sNode*)come_increment_ref_count(right_368),(_Bool)0,info))));
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sOrOrNode_finalize;
            _inf_value40->clone=(void*)sOrOrNode_clone;
            _inf_value40->compile=(void*)sOrOrNode_compile;
            _inf_value40->sline=(void*)sNodeBase_sline;
            _inf_value40->sname=(void*)sNodeBase_sname;
            _inf_value40->terminated=(void*)sNodeBase_terminated;
            _inf_value40->kind=(void*)sOrOrNode_kind;
            __result330__ = __result_obj__ = ((struct sNode*)(right_value688=_inf_value40));
            if(right_368) { right_368 = come_decrement_ref_count2(right_368, ((struct sNode*)right_368)->finalize, ((struct sNode*)right_368)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_367) { node_367 = come_decrement_ref_count2(node_367, ((struct sNode*)node_367)->finalize, ((struct sNode*)node_367)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value682,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value683,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value688) { right_value688 = come_decrement_ref_count2(right_value688, ((struct sNode*)right_value688)->finalize, ((struct sNode*)right_value688)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result330__;
            if(right_368) { right_368 = come_decrement_ref_count2(right_368, ((struct sNode*)right_368)->finalize, ((struct sNode*)right_368)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional715=*info->p==92&&*(info->p+1)==124&&*(info->p+2)==124,            _if_conditional715) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_370=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value689=oror_exp(info))));
                if(right_value689) { right_value689 = come_decrement_ref_count2(right_value689, ((struct sNode*)right_value689)->finalize, ((struct sNode*)right_value689)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2074, "struct sNode");
                _inf_obj_value41=come_increment_ref_count(((struct sOrOrNode*)(right_value691=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value690=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2074, "sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_367),(struct sNode*)come_increment_ref_count(right_370),(_Bool)1,info))));
                _inf_value41->_protocol_obj=_inf_obj_value41;
                _inf_value41->finalize=(void*)sOrOrNode_finalize;
                _inf_value41->clone=(void*)sOrOrNode_clone;
                _inf_value41->compile=(void*)sOrOrNode_compile;
                _inf_value41->sline=(void*)sNodeBase_sline;
                _inf_value41->sname=(void*)sNodeBase_sname;
                _inf_value41->terminated=(void*)sNodeBase_terminated;
                _inf_value41->kind=(void*)sOrOrNode_kind;
                __result333__ = __result_obj__ = ((struct sNode*)(right_value696=_inf_value41));
                if(right_370) { right_370 = come_decrement_ref_count2(right_370, ((struct sNode*)right_370)->finalize, ((struct sNode*)right_370)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_367) { node_367 = come_decrement_ref_count2(node_367, ((struct sNode*)node_367)->finalize, ((struct sNode*)node_367)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value690,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value691,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value696) { right_value696 = come_decrement_ref_count2(right_value696, ((struct sNode*)right_value696)->finalize, ((struct sNode*)right_value696)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result333__;
                if(right_370) { right_370 = come_decrement_ref_count2(right_370, ((struct sNode*)right_370)->finalize, ((struct sNode*)right_370)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result334__ = __result_obj__ = node_367;
    if(node_367) { node_367 = come_decrement_ref_count2(node_367, ((struct sNode*)node_367)->finalize, ((struct sNode*)node_367)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result334__;
    if(node_367) { node_367 = come_decrement_ref_count2(node_367, ((struct sNode*)node_367)->finalize, ((struct sNode*)node_367)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
void* __result_obj__;
_Bool _if_conditional716;
_Bool _if_conditional717;
_Bool _if_conditional718;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional716=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional716) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional717=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional717) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional718=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional718) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__;
_Bool _if_conditional719;
struct sOrOrNode* __result331__;
void* right_value692;
struct sOrOrNode* result_371;
_Bool _if_conditional720;
_Bool _if_conditional721;
void* right_value693;
char* __dec_obj262;
_Bool _if_conditional722;
_Bool _if_conditional723;
void* right_value694;
struct sNode* __dec_obj263;
_Bool _if_conditional724;
void* right_value695;
struct sNode* __dec_obj264;
struct sOrOrNode* __result332__;
memset(&__result_obj__, 0, sizeof(void*));
right_value692 = (void*)0;
memset(&result_371, 0, sizeof(struct sOrOrNode*));
right_value693 = (void*)0;
right_value694 = (void*)0;
right_value695 = (void*)0;
                    if(_if_conditional719=self==(void*)0,                    _if_conditional719) {
                        __result331__ = __result_obj__ = (void*)0;
                        return __result331__;
                    }
                    result_371=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value692=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "sOrOrNode"))));
                    come_call_finalizer3(right_value692,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional720=self!=((void*)0),                    _if_conditional720) {
                        result_371->sline=self->sline;
                    }
                    if(_if_conditional721=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional721) {
                        __dec_obj262=result_371->sname;
                        result_371->sname=(char*)come_increment_ref_count(((char*)(right_value693=string_clone(self->sname))));
                        __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value693 = come_decrement_ref_count2(right_value693, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(_if_conditional722=self!=((void*)0),                    _if_conditional722) {
                        result_371->mQuote=self->mQuote;
                    }
                    if(_if_conditional723=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional723) {
                        __dec_obj263=result_371->mLeft;
                        result_371->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value694=sNode_clone(self->mLeft))));
                        if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value694) { right_value694 = come_decrement_ref_count2(right_value694, ((struct sNode*)right_value694)->finalize, ((struct sNode*)right_value694)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional724=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional724) {
                        __dec_obj264=result_371->mRight;
                        result_371->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value695=sNode_clone(self->mRight))));
                        if(__dec_obj264) { __dec_obj264 = come_decrement_ref_count2(__dec_obj264, ((struct sNode*)__dec_obj264)->finalize, ((struct sNode*)__dec_obj264)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value695) { right_value695 = come_decrement_ref_count2(right_value695, ((struct sNode*)right_value695)->finalize, ((struct sNode*)right_value695)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    __result332__ = __result_obj__ = result_371;
                    come_call_finalizer3(result_371,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result332__;
                    come_call_finalizer3(result_371,sOrOrNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* comma_exp(struct sInfo* info){
void* __result_obj__;
void* right_value697;
struct sNode* node_372;
_Bool _while_condtional29;
_Bool _if_conditional725;
void* right_value698;
struct sNode* node2_373;
void* right_value699;
void* right_value700;
struct sNode* _inf_value42;
struct sCommaNode* _inf_obj_value42;
void* right_value705;
struct sNode* __result337__;
struct sNode* __result338__;
memset(&__result_obj__, 0, sizeof(void*));
right_value697 = (void*)0;
memset(&node_372, 0, sizeof(struct sNode*));
right_value698 = (void*)0;
memset(&node2_373, 0, sizeof(struct sNode*));
right_value699 = (void*)0;
right_value700 = (void*)0;
right_value705 = (void*)0;
    parse_sharp_v5(info);
    node_372=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value697=oror_exp(info))));
    if(right_value697) { right_value697 = come_decrement_ref_count2(right_value697, ((struct sNode*)right_value697)->finalize, ((struct sNode*)right_value697)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional29=*info->p,    _while_condtional29) {
        if(_if_conditional725=!info->no_comma&&*info->p==44,        _if_conditional725) {
            info->p++;
            skip_spaces_and_lf(info);
            node2_373=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value698=oror_exp(info))));
            if(right_value698) { right_value698 = come_decrement_ref_count2(right_value698, ((struct sNode*)right_value698)->finalize, ((struct sNode*)right_value698)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2101, "struct sNode");
            _inf_obj_value42=come_increment_ref_count(((struct sCommaNode*)(right_value700=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value699=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2101, "sCommaNode")))),(struct sNode*)come_increment_ref_count(node_372),(struct sNode*)come_increment_ref_count(node2_373),info))));
            _inf_value42->_protocol_obj=_inf_obj_value42;
            _inf_value42->finalize=(void*)sCommaNode_finalize;
            _inf_value42->clone=(void*)sCommaNode_clone;
            _inf_value42->compile=(void*)sCommaNode_compile;
            _inf_value42->sline=(void*)sNodeBase_sline;
            _inf_value42->sname=(void*)sNodeBase_sname;
            _inf_value42->terminated=(void*)sNodeBase_terminated;
            _inf_value42->kind=(void*)sCommaNode_kind;
            __result337__ = __result_obj__ = ((struct sNode*)(right_value705=_inf_value42));
            if(node2_373) { node2_373 = come_decrement_ref_count2(node2_373, ((struct sNode*)node2_373)->finalize, ((struct sNode*)node2_373)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_372) { node_372 = come_decrement_ref_count2(node_372, ((struct sNode*)node_372)->finalize, ((struct sNode*)node_372)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value699,sCommaNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value700,sCommaNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value705) { right_value705 = come_decrement_ref_count2(right_value705, ((struct sNode*)right_value705)->finalize, ((struct sNode*)right_value705)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result337__;
            if(node2_373) { node2_373 = come_decrement_ref_count2(node2_373, ((struct sNode*)node2_373)->finalize, ((struct sNode*)node2_373)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result338__ = __result_obj__ = node_372;
    if(node_372) { node_372 = come_decrement_ref_count2(node_372, ((struct sNode*)node_372)->finalize, ((struct sNode*)node_372)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result338__;
    if(node_372) { node_372 = come_decrement_ref_count2(node_372, ((struct sNode*)node_372)->finalize, ((struct sNode*)node_372)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sCommaNode_finalize(struct sCommaNode* self){
void* __result_obj__;
_Bool _if_conditional726;
_Bool _if_conditional727;
_Bool _if_conditional728;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional726=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional726) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional727=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional727) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional728=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional728) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__;
_Bool _if_conditional729;
struct sCommaNode* __result335__;
void* right_value701;
struct sCommaNode* result_374;
_Bool _if_conditional730;
_Bool _if_conditional731;
void* right_value702;
char* __dec_obj265;
_Bool _if_conditional732;
void* right_value703;
struct sNode* __dec_obj266;
_Bool _if_conditional733;
void* right_value704;
struct sNode* __dec_obj267;
struct sCommaNode* __result336__;
memset(&__result_obj__, 0, sizeof(void*));
right_value701 = (void*)0;
memset(&result_374, 0, sizeof(struct sCommaNode*));
right_value702 = (void*)0;
right_value703 = (void*)0;
right_value704 = (void*)0;
                if(_if_conditional729=self==(void*)0,                _if_conditional729) {
                    __result335__ = __result_obj__ = (void*)0;
                    return __result335__;
                }
                result_374=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value701=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "sCommaNode"))));
                come_call_finalizer3(right_value701,sCommaNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional730=self!=((void*)0),                _if_conditional730) {
                    result_374->sline=self->sline;
                }
                if(_if_conditional731=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional731) {
                    __dec_obj265=result_374->sname;
                    result_374->sname=(char*)come_increment_ref_count(((char*)(right_value702=string_clone(self->sname))));
                    __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value702 = come_decrement_ref_count2(right_value702, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional732=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional732) {
                    __dec_obj266=result_374->mLeft;
                    result_374->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value703=sNode_clone(self->mLeft))));
                    if(__dec_obj266) { __dec_obj266 = come_decrement_ref_count2(__dec_obj266, ((struct sNode*)__dec_obj266)->finalize, ((struct sNode*)__dec_obj266)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value703) { right_value703 = come_decrement_ref_count2(right_value703, ((struct sNode*)right_value703)->finalize, ((struct sNode*)right_value703)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional733=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional733) {
                    __dec_obj267=result_374->mRight;
                    result_374->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value704=sNode_clone(self->mRight))));
                    if(__dec_obj267) { __dec_obj267 = come_decrement_ref_count2(__dec_obj267, ((struct sNode*)__dec_obj267)->finalize, ((struct sNode*)__dec_obj267)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value704) { right_value704 = come_decrement_ref_count2(right_value704, ((struct sNode*)right_value704)->finalize, ((struct sNode*)right_value704)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result336__ = __result_obj__ = result_374;
                come_call_finalizer3(result_374,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result336__;
                come_call_finalizer3(result_374,sCommaNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* conditional_exp(struct sInfo* info){
void* __result_obj__;
void* right_value706;
struct sNode* node_375;
_Bool _while_condtional30;
_Bool _if_conditional734;
struct sNode* value1_376;
_Bool _if_conditional735;
void* right_value707;
void* right_value708;
struct sNode* _inf_value43;
struct sNullNode* _inf_obj_value43;
void* right_value711;
struct sNode* __dec_obj269;
_Bool no_label_378;
void* right_value712;
struct sNode* __dec_obj270;
int __exception_result_var_b49;
void* right_value713;
struct sNode* value2_379;
void* right_value714;
void* right_value715;
struct sNode* _inf_value44;
struct sConditionalNode* _inf_obj_value44;
void* right_value721;
struct sNode* __result343__;
struct sNode* __result344__;
memset(&__result_obj__, 0, sizeof(void*));
right_value706 = (void*)0;
memset(&node_375, 0, sizeof(struct sNode*));
memset(&value1_376, 0, sizeof(struct sNode*));
right_value707 = (void*)0;
right_value708 = (void*)0;
right_value711 = (void*)0;
memset(&no_label_378, 0, sizeof(_Bool));
right_value712 = (void*)0;
right_value713 = (void*)0;
memset(&value2_379, 0, sizeof(struct sNode*));
right_value714 = (void*)0;
right_value715 = (void*)0;
right_value721 = (void*)0;
    parse_sharp_v5(info);
    node_375=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value706=comma_exp(info))));
    if(right_value706) { right_value706 = come_decrement_ref_count2(right_value706, ((struct sNode*)right_value706)->finalize, ((struct sNode*)right_value706)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional30=*info->p,    _while_condtional30) {
        if(_if_conditional734=*info->p==63,        _if_conditional734) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(_if_conditional735=*info->p==58,            _if_conditional735) {
                _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2130, "struct sNode");
                _inf_obj_value43=come_increment_ref_count(((struct sNullNode*)(right_value708=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value707=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2130, "sNullNode")))),info))));
                _inf_value43->_protocol_obj=_inf_obj_value43;
                _inf_value43->finalize=(void*)sNullNode_finalize;
                _inf_value43->clone=(void*)sNullNode_clone;
                _inf_value43->compile=(void*)sNullNode_compile;
                _inf_value43->sline=(void*)sNodeBase_sline;
                _inf_value43->sname=(void*)sNodeBase_sname;
                _inf_value43->terminated=(void*)sNodeBase_terminated;
                _inf_value43->kind=(void*)sNullNode_kind;
                __dec_obj269=value1_376;
                value1_376=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value711=_inf_value43)));
                if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); }
                come_call_finalizer3(right_value707,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value708,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value711) { right_value711 = come_decrement_ref_count2(right_value711, ((struct sNode*)right_value711)->finalize, ((struct sNode*)right_value711)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            else {
                no_label_378=info->no_label;
                info->no_label=(_Bool)1;
                __dec_obj270=value1_376;
                value1_376=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value712=conditional_exp(info))));
                if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value712) { right_value712 = come_decrement_ref_count2(right_value712, ((struct sNode*)right_value712)->finalize, ((struct sNode*)right_value712)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_label=no_label_378;
            }
            parse_sharp_v5(info);
            (come_push_stackframe("13op.c", 2141, 54),__exception_result_var_b49=expected_next_character(58,info), come_pop_stackframe(), __exception_result_var_b49);
            value2_379=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value713=conditional_exp(info))));
            if(right_value713) { right_value713 = come_decrement_ref_count2(right_value713, ((struct sNode*)right_value713)->finalize, ((struct sNode*)right_value713)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            parse_sharp_v5(info);
            _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2147, "struct sNode");
            _inf_obj_value44=come_increment_ref_count(((struct sConditionalNode*)(right_value715=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value714=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2147, "sConditionalNode")))),(struct sNode*)come_increment_ref_count(node_375),(struct sNode*)come_increment_ref_count(value1_376),(struct sNode*)come_increment_ref_count(value2_379),info))));
            _inf_value44->_protocol_obj=_inf_obj_value44;
            _inf_value44->finalize=(void*)sConditionalNode_finalize;
            _inf_value44->clone=(void*)sConditionalNode_clone;
            _inf_value44->compile=(void*)sConditionalNode_compile;
            _inf_value44->sline=(void*)sNodeBase_sline;
            _inf_value44->sname=(void*)sNodeBase_sname;
            _inf_value44->terminated=(void*)sNodeBase_terminated;
            _inf_value44->kind=(void*)sConditionalNode_kind;
            __result343__ = __result_obj__ = ((struct sNode*)(right_value721=_inf_value44));
            if(value1_376) { value1_376 = come_decrement_ref_count2(value1_376, ((struct sNode*)value1_376)->finalize, ((struct sNode*)value1_376)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_379) { value2_379 = come_decrement_ref_count2(value2_379, ((struct sNode*)value2_379)->finalize, ((struct sNode*)value2_379)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_375) { node_375 = come_decrement_ref_count2(node_375, ((struct sNode*)node_375)->finalize, ((struct sNode*)node_375)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value714,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value715,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value721) { right_value721 = come_decrement_ref_count2(right_value721, ((struct sNode*)right_value721)->finalize, ((struct sNode*)right_value721)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result343__;
            if(value1_376) { value1_376 = come_decrement_ref_count2(value1_376, ((struct sNode*)value1_376)->finalize, ((struct sNode*)value1_376)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_379) { value2_379 = come_decrement_ref_count2(value2_379, ((struct sNode*)value2_379)->finalize, ((struct sNode*)value2_379)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result344__ = __result_obj__ = node_375;
    if(node_375) { node_375 = come_decrement_ref_count2(node_375, ((struct sNode*)node_375)->finalize, ((struct sNode*)node_375)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result344__;
    if(node_375) { node_375 = come_decrement_ref_count2(node_375, ((struct sNode*)node_375)->finalize, ((struct sNode*)node_375)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
void* __result_obj__;
_Bool _if_conditional740;
_Bool _if_conditional741;
_Bool _if_conditional742;
_Bool _if_conditional743;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional740=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional740) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional741=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional741) {
                    if(self->mValue1) { self->mValue1 = come_decrement_ref_count2(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional742=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional742) {
                    if(self->mValue2) { self->mValue2 = come_decrement_ref_count2(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional743=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional743) {
                    if(self->mValue3) { self->mValue3 = come_decrement_ref_count2(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__;
_Bool _if_conditional744;
struct sConditionalNode* __result341__;
void* right_value716;
struct sConditionalNode* result_380;
_Bool _if_conditional745;
_Bool _if_conditional746;
void* right_value717;
char* __dec_obj271;
_Bool _if_conditional747;
void* right_value718;
struct sNode* __dec_obj272;
_Bool _if_conditional748;
void* right_value719;
struct sNode* __dec_obj273;
_Bool _if_conditional749;
void* right_value720;
struct sNode* __dec_obj274;
struct sConditionalNode* __result342__;
memset(&__result_obj__, 0, sizeof(void*));
right_value716 = (void*)0;
memset(&result_380, 0, sizeof(struct sConditionalNode*));
right_value717 = (void*)0;
right_value718 = (void*)0;
right_value719 = (void*)0;
right_value720 = (void*)0;
                if(_if_conditional744=self==(void*)0,                _if_conditional744) {
                    __result341__ = __result_obj__ = (void*)0;
                    return __result341__;
                }
                result_380=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value716=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "sConditionalNode"))));
                come_call_finalizer3(right_value716,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional745=self!=((void*)0),                _if_conditional745) {
                    result_380->sline=self->sline;
                }
                if(_if_conditional746=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional746) {
                    __dec_obj271=result_380->sname;
                    result_380->sname=(char*)come_increment_ref_count(((char*)(right_value717=string_clone(self->sname))));
                    __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value717 = come_decrement_ref_count2(right_value717, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional747=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional747) {
                    __dec_obj272=result_380->mValue1;
                    result_380->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value718=sNode_clone(self->mValue1))));
                    if(__dec_obj272) { __dec_obj272 = come_decrement_ref_count2(__dec_obj272, ((struct sNode*)__dec_obj272)->finalize, ((struct sNode*)__dec_obj272)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value718) { right_value718 = come_decrement_ref_count2(right_value718, ((struct sNode*)right_value718)->finalize, ((struct sNode*)right_value718)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional748=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional748) {
                    __dec_obj273=result_380->mValue2;
                    result_380->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value719=sNode_clone(self->mValue2))));
                    if(__dec_obj273) { __dec_obj273 = come_decrement_ref_count2(__dec_obj273, ((struct sNode*)__dec_obj273)->finalize, ((struct sNode*)__dec_obj273)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value719) { right_value719 = come_decrement_ref_count2(right_value719, ((struct sNode*)right_value719)->finalize, ((struct sNode*)right_value719)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional749=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional749) {
                    __dec_obj274=result_380->mValue3;
                    result_380->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value720=sNode_clone(self->mValue3))));
                    if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count2(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value720) { right_value720 = come_decrement_ref_count2(right_value720, ((struct sNode*)right_value720)->finalize, ((struct sNode*)right_value720)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result342__ = __result_obj__ = result_380;
                come_call_finalizer3(result_380,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result342__;
                come_call_finalizer3(result_380,sConditionalNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_v13(struct sInfo* info){
void* __result_obj__;
void* right_value722;
struct sNode* node_381;
struct sNode* __result345__;
memset(&__result_obj__, 0, sizeof(void*));
right_value722 = (void*)0;
memset(&node_381, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_381=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value722=conditional_exp(info))));
    if(right_value722) { right_value722 = come_decrement_ref_count2(right_value722, ((struct sNode*)right_value722)->finalize, ((struct sNode*)right_value722)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result345__ = __result_obj__ = node_381;
    if(node_381) { node_381 = come_decrement_ref_count2(node_381, ((struct sNode*)node_381)->finalize, ((struct sNode*)node_381)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result345__;
    if(node_381) { node_381 = come_decrement_ref_count2(node_381, ((struct sNode*)node_381)->finalize, ((struct sNode*)node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional750;
void* right_value723;
void* right_value724;
struct sNode* _inf_value45;
struct sNullNode* _inf_obj_value45;
void* right_value727;
struct sNode* __result348__;
_Bool _if_conditional755;
void* right_value728;
void* right_value729;
struct sNode* _inf_value46;
struct sNilNode* _inf_obj_value46;
void* right_value732;
struct sNode* __result351__;
void* right_value733;
struct sNode* __result352__;
memset(&__result_obj__, 0, sizeof(void*));
right_value723 = (void*)0;
right_value724 = (void*)0;
right_value727 = (void*)0;
right_value728 = (void*)0;
right_value729 = (void*)0;
right_value732 = (void*)0;
right_value733 = (void*)0;
    if(_if_conditional750=charp_operator_equals(buf,"null"),    _if_conditional750) {
        _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2171, "struct sNode");
        _inf_obj_value45=come_increment_ref_count(((struct sNullNode*)(right_value724=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value723=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2171, "sNullNode")))),info))));
        _inf_value45->_protocol_obj=_inf_obj_value45;
        _inf_value45->finalize=(void*)sNullNode_finalize;
        _inf_value45->clone=(void*)sNullNode_clone;
        _inf_value45->compile=(void*)sNullNode_compile;
        _inf_value45->sline=(void*)sNodeBase_sline;
        _inf_value45->sname=(void*)sNodeBase_sname;
        _inf_value45->terminated=(void*)sNodeBase_terminated;
        _inf_value45->kind=(void*)sNullNode_kind;
        __result348__ = __result_obj__ = ((struct sNode*)(right_value727=_inf_value45));
        come_call_finalizer3(right_value723,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value724,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value727) { right_value727 = come_decrement_ref_count2(right_value727, ((struct sNode*)right_value727)->finalize, ((struct sNode*)right_value727)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result348__;
    }
    else {
        if(_if_conditional755=charp_operator_equals(buf,"nil"),        _if_conditional755) {
            _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2174, "struct sNode");
            _inf_obj_value46=come_increment_ref_count(((struct sNilNode*)(right_value729=sNilNode_initialize((struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value728=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2174, "sNilNode")))),info))));
            _inf_value46->_protocol_obj=_inf_obj_value46;
            _inf_value46->finalize=(void*)sNilNode_finalize;
            _inf_value46->clone=(void*)sNilNode_clone;
            _inf_value46->compile=(void*)sNilNode_compile;
            _inf_value46->sline=(void*)sNodeBase_sline;
            _inf_value46->sname=(void*)sNodeBase_sname;
            _inf_value46->terminated=(void*)sNodeBase_terminated;
            _inf_value46->kind=(void*)sNilNode_kind;
            __result351__ = __result_obj__ = ((struct sNode*)(right_value732=_inf_value46));
            come_call_finalizer3(right_value728,sNilNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value729,sNilNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value732) { right_value732 = come_decrement_ref_count2(right_value732, ((struct sNode*)right_value732)->finalize, ((struct sNode*)right_value732)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result351__;
        }
    }
    __result352__ = __result_obj__ = ((struct sNode*)(right_value733=string_node_v12(buf,head,head_sline,info)));
    if(right_value733) { right_value733 = come_decrement_ref_count2(right_value733, ((struct sNode*)right_value733)->finalize, ((struct sNode*)right_value733)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result352__;
}

static void sNullNode_finalize(struct sNullNode* self){
void* __result_obj__;
_Bool _if_conditional751;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional751=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional751) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__;
_Bool _if_conditional752;
struct sNullNode* __result346__;
void* right_value725;
struct sNullNode* result_382;
_Bool _if_conditional753;
_Bool _if_conditional754;
void* right_value726;
char* __dec_obj275;
struct sNullNode* __result347__;
memset(&__result_obj__, 0, sizeof(void*));
right_value725 = (void*)0;
memset(&result_382, 0, sizeof(struct sNullNode*));
right_value726 = (void*)0;
            if(_if_conditional752=self==(void*)0,            _if_conditional752) {
                __result346__ = __result_obj__ = (void*)0;
                return __result346__;
            }
            result_382=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value725=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "sNullNode"))));
            come_call_finalizer3(right_value725,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional753=self!=((void*)0),            _if_conditional753) {
                result_382->sline=self->sline;
            }
            if(_if_conditional754=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional754) {
                __dec_obj275=result_382->sname;
                result_382->sname=(char*)come_increment_ref_count(((char*)(right_value726=string_clone(self->sname))));
                __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value726 = come_decrement_ref_count2(right_value726, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result347__ = __result_obj__ = result_382;
            come_call_finalizer3(result_382,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result347__;
            come_call_finalizer3(result_382,sNullNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNilNode_finalize(struct sNilNode* self){
void* __result_obj__;
_Bool _if_conditional756;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional756=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional756) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
void* __result_obj__;
_Bool _if_conditional757;
struct sNilNode* __result349__;
void* right_value730;
struct sNilNode* result_383;
_Bool _if_conditional758;
_Bool _if_conditional759;
void* right_value731;
char* __dec_obj276;
struct sNilNode* __result350__;
memset(&__result_obj__, 0, sizeof(void*));
right_value730 = (void*)0;
memset(&result_383, 0, sizeof(struct sNilNode*));
right_value731 = (void*)0;
                if(_if_conditional757=self==(void*)0,                _if_conditional757) {
                    __result349__ = __result_obj__ = (void*)0;
                    return __result349__;
                }
                result_383=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value730=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "sNilNode"))));
                come_call_finalizer3(right_value730,sNilNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional758=self!=((void*)0),                _if_conditional758) {
                    result_383->sline=self->sline;
                }
                if(_if_conditional759=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional759) {
                    __dec_obj276=result_383->sname;
                    result_383->sname=(char*)come_increment_ref_count(((char*)(right_value731=string_clone(self->sname))));
                    __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value731 = come_decrement_ref_count2(right_value731, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result350__ = __result_obj__ = result_383;
                come_call_finalizer3(result_383,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result350__;
                come_call_finalizer3(result_383,sNilNode_finalize, 0, 0, 0, 0, (void*)0);
}

