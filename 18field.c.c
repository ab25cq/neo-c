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
struct lconv
{
    char* decimal_point;
    char* thousands_sep;
    char* grouping;
    char* int_curr_symbol;
    char* currency_symbol;
    char* mon_decimal_point;
    char* mon_thousands_sep;
    char* mon_grouping;
    char* positive_sign;
    char* negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};
extern char* program_invocation_short_name;
extern char* program_invocation_name;
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
struct sRightValueObject;
struct list_item$1sRightValueObjectp
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObjectp* prev;
    struct list_item$1sRightValueObjectp* next;
};
struct list$1sRightValueObjectp
{
    struct list_item$1sRightValueObjectp* head;
    struct list_item$1sRightValueObjectp* tail;
    int len;
    struct list_item$1sRightValueObjectp* it;
};
struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct list$1sRightValueObjectp* right_values;
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
    _Bool mNoResultType;
    _Bool mDeclaredResultObject;
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
    struct buffer* mSourceHead3;
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
    _Bool in_fun_param;
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
struct sStoreFieldNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
};
struct sNullCheckNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
};
struct sNullableNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
};
struct sRangeCheckNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mBegin;
    struct sNode* mEnd;
};
struct sLoadFieldNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    char* mName;
};
struct sStoreArrayNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
};
struct sLoadArrayNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* mArrayNum;
    _Bool mBreakGuard;
    struct sNode* mLeft;
    _Bool mQuote;
};
struct sLoadRangeArrayNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* mArrayNum;
    struct sNode* mLeft;
    _Bool mQuote;
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

char* setlocale(int anonymous_var_nameX462, const char* anonymous_var_nameX463);

struct lconv* localeconv();

struct __locale_struct* duplocale(struct __locale_struct* anonymous_var_nameX464);

void freelocale(struct __locale_struct* anonymous_var_nameX465);

struct __locale_struct* newlocale(int anonymous_var_nameX466, const char* anonymous_var_nameX467, struct __locale_struct* anonymous_var_nameX468);

struct __locale_struct* uselocale(struct __locale_struct* anonymous_var_nameX469);

int* __errno_location();

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

char* xbasename(char* path);

char* xextname(char* path);

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

struct CVALUE* CVALUE_initialize(struct CVALUE* self);

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

void add_come_code_at_source_head3(struct sInfo* info, const char* msg, ...);

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

_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);

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

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);

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
static void CVALUE_finalize(struct CVALUE* self);
static void list$1sRightValueObjectpp_finalize(struct list$1sRightValueObjectp* self);
static void list_item$1sRightValueObjectpp_finalize(struct list_item$1sRightValueObjectp* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

char* sStoreFieldNode_kind(struct sStoreFieldNode* self);

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);

char* sNullCheckNode_kind(struct sNullCheckNode* self);

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info);

char* sNullableNode_kind(struct sNullableNode* self);

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info);

static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct list$1sRightValueObjectp* list$1sRightValueObjectpp_clone(struct list$1sRightValueObjectp* self);
static struct list$1sRightValueObjectp* list$1sRightValueObjectp_initialize(struct list$1sRightValueObjectp* self);
static struct list$1sRightValueObjectp* list$1sRightValueObjectp_add(struct list$1sRightValueObjectp* self, struct sRightValueObject* item);
static struct sRightValueObject* sRightValueObject_clone(struct sRightValueObject* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectp_finalize(struct list$1sRightValueObjectp* self);
struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info);

char* sRangeCheckNode_kind(struct sRangeCheckNode* self);

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info);

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);

char* sLoadFieldNode_kind(struct sLoadFieldNode* self);

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);

static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

char* sStoreArrayNode_kind(struct sStoreArrayNode* self);

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info);

char* sLoadArrayNode_kind(struct sLoadArrayNode* self);

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self);

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static void sRangeCheckNode_finalize(struct sRangeCheckNode* self);
static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self);
static void sNullableNode_finalize(struct sNullableNode* self);
static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
// uniq global variable
// source head3

// inline function
static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value0;
void* right_value1;
struct buffer* result_0;
struct buffer* __result1__;
memset(&__result_obj__, 0, sizeof(void*));
right_value0 = (void*)0;
right_value1 = (void*)0;
memset(&result_0, 0, sizeof(struct buffer*));
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1899, "buffer"))))))));
    come_call_finalizer3(right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value1,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result1__;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value2;
void* right_value3;
struct buffer* result_1;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
right_value2 = (void*)0;
right_value3 = (void*)0;
memset(&result_1, 0, sizeof(struct buffer*));
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1906, "buffer"))))))));
    come_call_finalizer3(right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value3,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    __result2__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value4;
void* right_value5;
struct buffer* result_2;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
right_value4 = (void*)0;
right_value5 = (void*)0;
memset(&result_2, 0, sizeof(struct buffer*));
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1913, "buffer"))))))));
    come_call_finalizer3(right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value5,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    __result3__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value6;
void* right_value7;
struct buffer* result_3;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
right_value6 = (void*)0;
right_value7 = (void*)0;
memset(&result_3, 0, sizeof(struct buffer*));
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1920, "buffer"))))))));
    come_call_finalizer3(right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value7,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    __result4__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value8;
void* right_value9;
struct buffer* result_4;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
right_value8 = (void*)0;
right_value9 = (void*)0;
memset(&result_4, 0, sizeof(struct buffer*));
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1927, "buffer"))))))));
    come_call_finalizer3(right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value9,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    __result5__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value10;
void* right_value11;
struct buffer* result_5;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct buffer*));
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1934, "buffer"))))))));
    come_call_finalizer3(right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value11,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    __result6__ = __result_obj__ = result_5;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* right_value12;
struct smart_pointer$1char* result_6;
void* right_value13;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
right_value13 = (void*)0;
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1950, "smart_pointer$1char"))));
    come_call_finalizer3(right_value12,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value13,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_6->p=result_6->memory->buf;
    __result7__ = __result_obj__ = result_6;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* right_value14;
struct smart_pointer$1char* result_7;
void* right_value15;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
right_value15 = (void*)0;
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1960, "smart_pointer$1char"))));
    come_call_finalizer3(right_value14,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value15,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_7->p=(char*)result_7->memory->buf;
    __result8__ = __result_obj__ = result_7;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result8__;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* right_value16;
struct smart_pointer$1short* result_8;
void* right_value17;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
right_value17 = (void*)0;
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1970, "smart_pointer$1short"))));
    come_call_finalizer3(right_value16,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value17,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_8->p=(short short*)result_8->memory->buf;
    __result9__ = __result_obj__ = result_8;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result9__;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* right_value18;
struct smart_pointer$1int* result_9;
void* right_value19;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
right_value19 = (void*)0;
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1980, "smart_pointer$1int"))));
    come_call_finalizer3(right_value18,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value19,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_9->p=(int*)result_9->memory->buf;
    __result10__ = __result_obj__ = result_9;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* right_value20;
struct smart_pointer$1long* result_10;
void* right_value21;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
right_value20 = (void*)0;
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
right_value21 = (void*)0;
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1990, "smart_pointer$1long"))));
    come_call_finalizer3(right_value20,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value21,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_10->p=(long*)result_10->memory->buf;
    __result11__ = __result_obj__ = result_10;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result11__;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    __result13__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2161, "smart_pointer$1char")))),self,len)));
    come_call_finalizer3(right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result13__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value26;
void* right_value29;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value29 = (void*)0;
    __result15__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2166, "smart_pointer$1short")))),self,len)));
    come_call_finalizer3(right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result15__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value30;
void* right_value33;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value33 = (void*)0;
    __result17__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2171, "smart_pointer$1int")))),self,len)));
    come_call_finalizer3(right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result17__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value34;
void* right_value37;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
right_value37 = (void*)0;
    __result19__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2176, "smart_pointer$1long")))),self,len)));
    come_call_finalizer3(right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result19__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value38;
void* right_value41;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
right_value41 = (void*)0;
    __result21__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2181, "smart_pointer$1float")))),self,len)));
    come_call_finalizer3(right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result21__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value42;
void* right_value45;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
right_value45 = (void*)0;
    __result23__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2186, "smart_pointer$1double")))),self,len)));
    come_call_finalizer3(right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result23__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__;
void* right_value46;
void* right_value50;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
right_value50 = (void*)0;
    __result26__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2191, "list$1char")))),len,self)));
    come_call_finalizer3(right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result26__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value51;
void* right_value55;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value55 = (void*)0;
    __result29__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2196, "list$1short")))),len,self)));
    come_call_finalizer3(right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result29__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__;
void* right_value56;
void* right_value60;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
right_value60 = (void*)0;
    __result32__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2201, "list$1int")))),len,self)));
    come_call_finalizer3(right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result32__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__;
void* right_value61;
void* right_value65;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
right_value65 = (void*)0;
    __result35__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2206, "list$1long")))),len,self)));
    come_call_finalizer3(right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result35__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__;
void* right_value66;
void* right_value70;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value70 = (void*)0;
    __result38__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2211, "list$1float")))),len,self)));
    come_call_finalizer3(right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result38__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__;
void* right_value71;
void* right_value75;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
right_value75 = (void*)0;
    __result41__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2216, "list$1double")))),len,self)));
    come_call_finalizer3(right_value71,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value75,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result41__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
    return len;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
    return len;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
    return len;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
    return len;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
    return len;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
    return len;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value76;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    __result42__ = __result_obj__ = ((char*)(right_value76=xsprintf(msg,self)));
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value77;
char* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
    __result43__ = __result_obj__ = ((char*)(right_value77=xsprintf(msg,self)));
    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result43__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value78;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
    __result44__ = __result_obj__ = ((char*)(right_value78=xsprintf(msg,self)));
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result44__;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
        if(self!=((void*)0)&&self->memory!=((void*)0)) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
        if(self!=((void*)0)&&self->memory!=((void*)0)) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
        if(self!=((void*)0)&&self->memory!=((void*)0)) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
        if(self!=((void*)0)&&self->memory!=((void*)0)) {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
}


static struct smart_pointer$1char* smart_pointer$1char_initialize(struct smart_pointer$1char* self, void* memory, int size){
void* __result_obj__;
void* right_value23;
void* right_value24;
struct buffer* __dec_obj6;
struct smart_pointer$1char* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value24,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(char)*size);
        self->p=(char*)self->memory->buf;
        __result12__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result12__;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* right_value27;
void* right_value28;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value27 = (void*)0;
right_value28 = (void*)0;
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value28,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(short short)*size);
        self->p=(short short*)self->memory->buf;
        __result14__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result14__;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* right_value31;
void* right_value32;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
right_value32 = (void*)0;
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value32,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(int)*size);
        self->p=(int*)self->memory->buf;
        __result16__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result16__;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* right_value35;
void* right_value36;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
right_value36 = (void*)0;
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value36,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(long)*size);
        self->p=(long*)self->memory->buf;
        __result18__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result18__;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* right_value39;
void* right_value40;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value39 = (void*)0;
right_value40 = (void*)0;
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value40,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(float)*size);
        self->p=(float*)self->memory->buf;
        __result20__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result20__;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
            if(self!=((void*)0)&&self->memory!=((void*)0)) {
                come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
void* right_value43;
void* right_value44;
struct buffer* __dec_obj11;
struct smart_pointer$1double* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value43 = (void*)0;
right_value44 = (void*)0;
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value44,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(double)*size);
        self->p=(double*)self->memory->buf;
        __result22__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result22__;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
            if(self!=((void*)0)&&self->memory!=((void*)0)) {
                come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__;
int i_11;
struct list$1char* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            list$1char_push_back(self,values[i_11]);
        }
        __result25__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result25__;
        come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__;
void* right_value47;
struct list_item$1char* litem_12;
void* right_value48;
struct list_item$1char* litem_13;
void* right_value49;
struct list_item$1char* litem_14;
struct list$1char* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value47 = (void*)0;
memset(&litem_12, 0, sizeof(struct list_item$1char*));
right_value48 = (void*)0;
memset(&litem_13, 0, sizeof(struct list_item$1char*));
right_value49 = (void*)0;
memset(&litem_14, 0, sizeof(struct list_item$1char*));
                if(self->len==0) {
                    litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 219, "list_item$1char"))));
                    come_call_finalizer3(right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_12->prev=((void*)0);
                    litem_12->next=((void*)0);
                    litem_12->item=item;
                    self->tail=litem_12;
                    self->head=litem_12;
                }
                else {
                    if(self->len==1) {
                        litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 229, "list_item$1char"))));
                        come_call_finalizer3(right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_13->prev=self->head;
                        litem_13->next=((void*)0);
                        litem_13->item=item;
                        self->tail=litem_13;
                        self->head->next=litem_13;
                    }
                    else {
                        litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 239, "list_item$1char"))));
                        come_call_finalizer3(right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_14->prev=self->tail;
                        litem_14->next=((void*)0);
                        litem_14->item=item;
                        self->tail->next=litem_14;
                        self->tail=litem_14;
                    }
                }
                self->len++;
                __result24__ = __result_obj__ = self;
                return __result24__;
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_15;
struct list_item$1char* prev_it_16;
memset(&it_15, 0, sizeof(struct list_item$1char*));
memset(&prev_it_16, 0, sizeof(struct list_item$1char*));
            it_15=self->head;
            while(it_15!=((void*)0)) {
                prev_it_16=it_15;
                it_15=it_15->next;
                come_call_finalizer3(prev_it_16,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
void* __result_obj__;
int i_17;
struct list$1short* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            list$1short_push_back(self,values[i_17]);
        }
        __result28__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result28__;
        come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__;
void* right_value52;
struct list_item$1short* litem_18;
void* right_value53;
struct list_item$1short* litem_19;
void* right_value54;
struct list_item$1short* litem_20;
struct list$1short* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1short*));
right_value53 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1short*));
right_value54 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1short*));
                if(self->len==0) {
                    litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 219, "list_item$1short"))));
                    come_call_finalizer3(right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_18->prev=((void*)0);
                    litem_18->next=((void*)0);
                    litem_18->item=item;
                    self->tail=litem_18;
                    self->head=litem_18;
                }
                else {
                    if(self->len==1) {
                        litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 229, "list_item$1short"))));
                        come_call_finalizer3(right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_19->prev=self->head;
                        litem_19->next=((void*)0);
                        litem_19->item=item;
                        self->tail=litem_19;
                        self->head->next=litem_19;
                    }
                    else {
                        litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 239, "list_item$1short"))));
                        come_call_finalizer3(right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_20->prev=self->tail;
                        litem_20->next=((void*)0);
                        litem_20->item=item;
                        self->tail->next=litem_20;
                        self->tail=litem_20;
                    }
                }
                self->len++;
                __result27__ = __result_obj__ = self;
                return __result27__;
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_21;
struct list_item$1short* prev_it_22;
memset(&it_21, 0, sizeof(struct list_item$1short*));
memset(&prev_it_22, 0, sizeof(struct list_item$1short*));
            it_21=self->head;
            while(it_21!=((void*)0)) {
                prev_it_22=it_21;
                it_21=it_21->next;
                come_call_finalizer3(prev_it_22,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__;
int i_23;
struct list$1int* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            list$1int_push_back(self,values[i_23]);
        }
        __result31__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result31__;
        come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__;
void* right_value57;
struct list_item$1int* litem_24;
void* right_value58;
struct list_item$1int* litem_25;
void* right_value59;
struct list_item$1int* litem_26;
struct list$1int* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1int*));
right_value58 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1int*));
right_value59 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1int*));
                if(self->len==0) {
                    litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 219, "list_item$1int"))));
                    come_call_finalizer3(right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_24->prev=((void*)0);
                    litem_24->next=((void*)0);
                    litem_24->item=item;
                    self->tail=litem_24;
                    self->head=litem_24;
                }
                else {
                    if(self->len==1) {
                        litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 229, "list_item$1int"))));
                        come_call_finalizer3(right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_25->prev=self->head;
                        litem_25->next=((void*)0);
                        litem_25->item=item;
                        self->tail=litem_25;
                        self->head->next=litem_25;
                    }
                    else {
                        litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 239, "list_item$1int"))));
                        come_call_finalizer3(right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_26->prev=self->tail;
                        litem_26->next=((void*)0);
                        litem_26->item=item;
                        self->tail->next=litem_26;
                        self->tail=litem_26;
                    }
                }
                self->len++;
                __result30__ = __result_obj__ = self;
                return __result30__;
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_27;
struct list_item$1int* prev_it_28;
memset(&it_27, 0, sizeof(struct list_item$1int*));
memset(&prev_it_28, 0, sizeof(struct list_item$1int*));
            it_27=self->head;
            while(it_27!=((void*)0)) {
                prev_it_28=it_27;
                it_27=it_27->next;
                come_call_finalizer3(prev_it_28,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__;
int i_29;
struct list$1long* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            list$1long_push_back(self,values[i_29]);
        }
        __result34__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result34__;
        come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__;
void* right_value62;
struct list_item$1long* litem_30;
void* right_value63;
struct list_item$1long* litem_31;
void* right_value64;
struct list_item$1long* litem_32;
struct list$1long* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value62 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1long*));
right_value63 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1long*));
right_value64 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1long*));
                if(self->len==0) {
                    litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 219, "list_item$1long"))));
                    come_call_finalizer3(right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_30->prev=((void*)0);
                    litem_30->next=((void*)0);
                    litem_30->item=item;
                    self->tail=litem_30;
                    self->head=litem_30;
                }
                else {
                    if(self->len==1) {
                        litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 229, "list_item$1long"))));
                        come_call_finalizer3(right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_31->prev=self->head;
                        litem_31->next=((void*)0);
                        litem_31->item=item;
                        self->tail=litem_31;
                        self->head->next=litem_31;
                    }
                    else {
                        litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 239, "list_item$1long"))));
                        come_call_finalizer3(right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_32->prev=self->tail;
                        litem_32->next=((void*)0);
                        litem_32->item=item;
                        self->tail->next=litem_32;
                        self->tail=litem_32;
                    }
                }
                self->len++;
                __result33__ = __result_obj__ = self;
                return __result33__;
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_33;
struct list_item$1long* prev_it_34;
memset(&it_33, 0, sizeof(struct list_item$1long*));
memset(&prev_it_34, 0, sizeof(struct list_item$1long*));
            it_33=self->head;
            while(it_33!=((void*)0)) {
                prev_it_34=it_33;
                it_33=it_33->next;
                come_call_finalizer3(prev_it_34,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__;
int i_35;
struct list$1float* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            list$1float_push_back(self,values[i_35]);
        }
        __result37__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result37__;
        come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__;
void* right_value67;
struct list_item$1float* litem_36;
void* right_value68;
struct list_item$1float* litem_37;
void* right_value69;
struct list_item$1float* litem_38;
struct list$1float* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value67 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1float*));
right_value68 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1float*));
right_value69 = (void*)0;
memset(&litem_38, 0, sizeof(struct list_item$1float*));
                if(self->len==0) {
                    litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 219, "list_item$1float"))));
                    come_call_finalizer3(right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_36->prev=((void*)0);
                    litem_36->next=((void*)0);
                    litem_36->item=item;
                    self->tail=litem_36;
                    self->head=litem_36;
                }
                else {
                    if(self->len==1) {
                        litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 229, "list_item$1float"))));
                        come_call_finalizer3(right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_37->prev=self->head;
                        litem_37->next=((void*)0);
                        litem_37->item=item;
                        self->tail=litem_37;
                        self->head->next=litem_37;
                    }
                    else {
                        litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 239, "list_item$1float"))));
                        come_call_finalizer3(right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_38->prev=self->tail;
                        litem_38->next=((void*)0);
                        litem_38->item=item;
                        self->tail->next=litem_38;
                        self->tail=litem_38;
                    }
                }
                self->len++;
                __result36__ = __result_obj__ = self;
                return __result36__;
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_39;
struct list_item$1float* prev_it_40;
memset(&it_39, 0, sizeof(struct list_item$1float*));
memset(&prev_it_40, 0, sizeof(struct list_item$1float*));
            it_39=self->head;
            while(it_39!=((void*)0)) {
                prev_it_40=it_39;
                it_39=it_39->next;
                come_call_finalizer3(prev_it_40,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
            }
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__;
int i_41;
struct list$1double* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            list$1double_push_back(self,values[i_41]);
        }
        __result40__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result40__;
        come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__;
void* right_value72;
struct list_item$1double* litem_42;
void* right_value73;
struct list_item$1double* litem_43;
void* right_value74;
struct list_item$1double* litem_44;
struct list$1double* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1double*));
right_value73 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1double*));
right_value74 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1double*));
                if(self->len==0) {
                    litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 219, "list_item$1double"))));
                    come_call_finalizer3(right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_42->prev=((void*)0);
                    litem_42->next=((void*)0);
                    litem_42->item=item;
                    self->tail=litem_42;
                    self->head=litem_42;
                }
                else {
                    if(self->len==1) {
                        litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 229, "list_item$1double"))));
                        come_call_finalizer3(right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_43->prev=self->head;
                        litem_43->next=((void*)0);
                        litem_43->item=item;
                        self->tail=litem_43;
                        self->head->next=litem_43;
                    }
                    else {
                        litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 239, "list_item$1double"))));
                        come_call_finalizer3(right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_44->prev=self->tail;
                        litem_44->next=((void*)0);
                        litem_44->item=item;
                        self->tail->next=litem_44;
                        self->tail=litem_44;
                    }
                }
                self->len++;
                __result39__ = __result_obj__ = self;
                return __result39__;
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_45;
struct list_item$1double* prev_it_46;
memset(&it_45, 0, sizeof(struct list_item$1double*));
memset(&prev_it_46, 0, sizeof(struct list_item$1double*));
            it_45=self->head;
            while(it_45!=((void*)0)) {
                prev_it_46=it_45;
                it_45=it_45->next;
                come_call_finalizer3(prev_it_46,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
            }
}










_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* right_value114;
struct sType* generics_type_47;
struct sType* __dec_obj35;
struct sClass* klass_78;
char* class_name_79;
char* fun_name2_80;
struct sFun* operator_fun_81;
void* right_value115;
char* none_generics_name_82;
void* right_value116;
struct sType* obj_type_83;
void* right_value117;
char* __dec_obj36;
void* right_value118;
char* fun_name3_84;
struct sGenericsFun* generics_fun_85;
void* right_value119;
_Bool _if_conditional1;
_Bool __result67__;
void* right_value120;
char* __dec_obj37;
int i_91;
void* right_value121;
char* new_fun_name_92;
void* right_value122;
char* __dec_obj38;
_Bool result_93;
void* right_value123;
void* right_value124;
struct CVALUE* come_value_94;
char* left_value2_97;
void* right_value125;
void* right_value126;
void* right_value127;
char* __dec_obj39;
void* right_value128;
char* __dec_obj40;
char* middle_value2_101;
void* right_value129;
void* right_value130;
void* right_value131;
char* __dec_obj41;
void* right_value132;
char* __dec_obj42;
char* right_value2_102;
void* right_value133;
void* right_value134;
void* right_value135;
char* __dec_obj43;
void* right_value136;
char* __dec_obj44;
void* right_value137;
void* right_value138;
void* right_value139;
void* right_value140;
void* right_value141;
char* __dec_obj45;
void* right_value142;
struct sType* result_type1_103;
void* right_value143;
struct sType* result_type2_104;
void* right_value144;
struct sType* __dec_obj46;
void* right_value145;
char* __dec_obj47;
void* right_value146;
void* right_value147;
char* __dec_obj48;
void* right_value148;
char* __dec_obj49;
_Bool __result75__;
right_value114 = (void*)0;
memset(&generics_type_47, 0, sizeof(struct sType*));
memset(&klass_78, 0, sizeof(struct sClass*));
memset(&class_name_79, 0, sizeof(char*));
memset(&fun_name2_80, 0, sizeof(char*));
memset(&operator_fun_81, 0, sizeof(struct sFun*));
right_value115 = (void*)0;
memset(&none_generics_name_82, 0, sizeof(char*));
right_value116 = (void*)0;
memset(&obj_type_83, 0, sizeof(struct sType*));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&fun_name3_84, 0, sizeof(char*));
memset(&generics_fun_85, 0, sizeof(struct sGenericsFun*));
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&i_91, 0, sizeof(int));
right_value121 = (void*)0;
memset(&new_fun_name_92, 0, sizeof(char*));
right_value122 = (void*)0;
memset(&result_93, 0, sizeof(_Bool));
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&come_value_94, 0, sizeof(struct CVALUE*));
memset(&left_value2_97, 0, sizeof(char*));
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
memset(&middle_value2_101, 0, sizeof(char*));
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
memset(&right_value2_102, 0, sizeof(char*));
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
memset(&result_type1_103, 0, sizeof(struct sType*));
right_value143 = (void*)0;
memset(&result_type2_104, 0, sizeof(struct sType*));
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
right_value148 = (void*)0;
    generics_type_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(type))));
    come_call_finalizer3(right_value114,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(generics_type_47->mNoSolvedGenericsType->v1) {
        __dec_obj35=generics_type_47;
        generics_type_47=(struct sType*)come_increment_ref_count(generics_type_47->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    klass_78=type->mClass;
    class_name_79=klass_78->mName;
    operator_fun_81=((void*)0);
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_82=(char*)come_increment_ref_count(((char*)(right_value115=get_none_generics_name(type->mClass->mName))));
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        obj_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj36=fun_name2_80;
        fun_name2_80=(char*)come_increment_ref_count(((char*)(right_value117=create_method_name(obj_type_83,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_name3_84=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("%s_%s",none_generics_name_82,fun_name))));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        generics_fun_85=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_84,((void*)0));
        if(generics_fun_85) {
            if(_if_conditional1=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(fun_name2_80)))),generics_fun_85,obj_type_83,info),            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, (void*)0),
            _if_conditional1) {
                __result67__ = (_Bool)0;
                none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(generics_type_47,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_80 = come_decrement_ref_count2(fun_name2_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result67__;
            }
        }
        operator_fun_81=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_80);
        none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj37=fun_name2_80;
        fun_name2_80=(char*)come_increment_ref_count(((char*)(right_value120=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        for(        i_91=128-1;        i_91>=1;        i_91--        ){
            new_fun_name_92=(char*)come_increment_ref_count(((char*)(right_value121=xsprintf("%s_v%d",fun_name2_80,i_91))));
            right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            operator_fun_81=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_92);
            if(operator_fun_81) {
                __dec_obj38=fun_name2_80;
                fun_name2_80=(char*)come_increment_ref_count(((char*)(right_value122=__builtin_string(new_fun_name_92))));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                new_fun_name_92 = come_decrement_ref_count2(new_fun_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_92 = come_decrement_ref_count2(new_fun_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(operator_fun_81==((void*)0)) {
            operator_fun_81=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_80);
        }
    }
    result_93=(_Bool)0;
    if(operator_fun_81) {
        come_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value124=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value123=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61, "CVALUE"))))))));
        come_call_finalizer3(right_value123,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value124,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        check_assign_type(((char*)(right_value126=xsprintf("\%s is assigned to",((char*)(right_value125=string_to_string(fun_name2_80)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,0), "18field.c", 63, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,0), "18field.c", 64, 1))->mHeap&&left_value->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,0), "18field.c", 65, 2)),left_value->type,left_value,info);
            __dec_obj39=left_value2_97;
            left_value2_97=(char*)come_increment_ref_count(((char*)(right_value127=xsprintf("%s",left_value->c_value))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            __dec_obj40=left_value2_97;
            left_value2_97=(char*)come_increment_ref_count(((char*)(right_value128=string_clone(left_value->c_value))));
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        check_assign_type(((char*)(right_value130=xsprintf("\%s is assigned to",((char*)(right_value129=string_to_string(fun_name2_80)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,1), "18field.c", 72, 3)),middle_value->type,middle_value,(_Bool)0,(_Bool)1,info);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,1), "18field.c", 73, 4))->mHeap&&middle_value->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,1), "18field.c", 74, 5)),middle_value->type,middle_value,info);
            __dec_obj41=middle_value2_101;
            middle_value2_101=(char*)come_increment_ref_count(((char*)(right_value131=xsprintf("%s",middle_value->c_value))));
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            __dec_obj42=middle_value2_101;
            middle_value2_101=(char*)come_increment_ref_count(((char*)(right_value132=string_clone(middle_value->c_value))));
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        check_assign_type(((char*)(right_value134=xsprintf("\%s is assigned to",((char*)(right_value133=string_to_string(fun_name2_80)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,2), "18field.c", 81, 6)),right_value->type,right_value,(_Bool)0,(_Bool)1,info);
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,2), "18field.c", 82, 7))->mHeap&&right_value->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,2), "18field.c", 83, 8)),right_value->type,right_value,info);
            __dec_obj43=right_value2_102;
            right_value2_102=(char*)come_increment_ref_count(((char*)(right_value135=xsprintf("%s",right_value->c_value))));
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            __dec_obj44=right_value2_102;
            right_value2_102=(char*)come_increment_ref_count(((char*)(right_value136=string_clone(right_value->c_value))));
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        __dec_obj45=come_value_94->c_value;
        come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value141=xsprintf("\%s(\%s,\%s,\%s)",((char*)(right_value137=string_to_string(fun_name2_80))),((char*)(right_value138=string_to_string(left_value2_97))),((char*)(right_value139=string_to_string(middle_value2_101))),((char*)(right_value140=string_to_string(right_value2_102)))))));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type1_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_clone(operator_fun_81->mResultType))));
        come_call_finalizer3(right_value142,sType_finalize, 0, 1, 0, 0, (void*)0);
        result_type2_104=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=solve_generics(result_type1_103,generics_type_47,info))));
        come_call_finalizer3(right_value143,sType_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj46=come_value_94->type;
        come_value_94->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_clone(result_type2_104))));
        come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value144,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_94->var=((void*)0);
        if(result_type2_104->mHeap) {
            __dec_obj47=come_value_94->c_value;
            come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value145=append_object_to_right_values(come_value_94->c_value,(struct sType*)come_increment_ref_count(result_type2_104),info))));
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        if(result_type2_104->mGuardValue&&result_type2_104->mPointerNum>0) {
            __dec_obj48=come_value_94->c_value;
            come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value147=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value146=make_type_name_string(result_type2_104,(_Bool)0,(_Bool)0,(_Bool)0,info))),come_value_94->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        __dec_obj49=come_value_94->c_value;
        come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value148=append_stackframe(come_value_94->c_value,come_value_94->type,info))));
        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_last_code(info,"%s;\n",come_value_94->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_94));
        result_93=(_Bool)1;
        come_call_finalizer3(come_value_94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_97 = come_decrement_ref_count2(left_value2_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        middle_value2_101 = come_decrement_ref_count2(middle_value2_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_102 = come_decrement_ref_count2(right_value2_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type1_103,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_104,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result75__ = result_93;
    come_call_finalizer3(generics_type_47,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_80 = come_decrement_ref_count2(fun_name2_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result75__;
    come_call_finalizer3(generics_type_47,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_80 = come_decrement_ref_count2(fun_name2_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
struct sType* __result45__;
void* right_value79;
struct sType* result_48;
void* right_value86;
struct list$1sTypeph* __dec_obj15;
void* right_value89;
struct tuple1$1sTypeph* __dec_obj17;
void* right_value90;
struct tuple1$1sTypeph* __dec_obj18;
void* right_value91;
char* __dec_obj19;
void* right_value92;
struct list$1sTypeph* __dec_obj20;
void* right_value100;
struct list$1sNodeph* __dec_obj24;
void* right_value101;
struct list$1sTypeph* __dec_obj25;
void* right_value108;
struct list$1charph* __dec_obj29;
void* right_value109;
struct tuple1$1sTypeph* __dec_obj30;
void* right_value110;
struct sNode* __dec_obj31;
void* right_value111;
struct sNode* __dec_obj32;
void* right_value112;
char* __dec_obj33;
void* right_value113;
char* __dec_obj34;
struct sType* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
memset(&result_48, 0, sizeof(struct sType*));
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
        if(self==(void*)0) {
            __result45__ = __result_obj__ = (void*)0;
            return __result45__;
        }
        result_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value79,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(self!=((void*)0)) {
            result_48->mClass=self->mClass;
        }
        if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
            __dec_obj15=result_48->mMultipleTypes;
            result_48->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value86=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj15,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value86,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
            __dec_obj17=result_48->mNoSolvedGenericsType;
            result_48->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj17,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value89,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
            __dec_obj18=result_48->mOriginalLoadVarType;
            result_48->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value90,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
            __dec_obj19=result_48->mGenericsName;
            result_48->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value91=string_clone(self->mGenericsName))));
            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
            __dec_obj20=result_48->mGenericsTypes;
            result_48->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value92=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value92,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
            __dec_obj24=result_48->mArrayNum;
            result_48->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value100=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value100,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_48->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            __dec_obj25=result_48->mParamTypes;
            result_48->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value101=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value101,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            __dec_obj29=result_48->mParamNames;
            result_48->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value108=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value108,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            __dec_obj30=result_48->mResultType;
            result_48->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value109=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value109,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_48->mVarArgs=self->mVarArgs;
        }
        if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
            __dec_obj31=result_48->mAlignas;
            result_48->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value110=sNode_clone(self->mAlignas))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value110) { right_value110 = come_decrement_ref_count2(right_value110, ((struct sNode*)right_value110)->finalize, ((struct sNode*)right_value110)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(self!=((void*)0)) {
            result_48->mUnsigned=self->mUnsigned;
        }
        if(self!=((void*)0)) {
            result_48->mShort=self->mShort;
        }
        if(self!=((void*)0)) {
            result_48->mLong=self->mLong;
        }
        if(self!=((void*)0)) {
            result_48->mLongLong=self->mLongLong;
        }
        if(self!=((void*)0)) {
            result_48->mConstant=self->mConstant;
        }
        if(self!=((void*)0)) {
            result_48->mRegister=self->mRegister;
        }
        if(self!=((void*)0)) {
            result_48->mVolatile=self->mVolatile;
        }
        if(self!=((void*)0)) {
            result_48->mStatic=self->mStatic;
        }
        if(self!=((void*)0)) {
            result_48->mUniq=self->mUniq;
        }
        if(self!=((void*)0)) {
            result_48->mRecord=self->mRecord;
        }
        if(self!=((void*)0)) {
            result_48->mExtern=self->mExtern;
        }
        if(self!=((void*)0)) {
            result_48->mRestrict=self->mRestrict;
        }
        if(self!=((void*)0)) {
            result_48->mImmutable=self->mImmutable;
        }
        if(self!=((void*)0)) {
            result_48->mHeap=self->mHeap;
        }
        if(self!=((void*)0)) {
            result_48->mDummyHeap=self->mDummyHeap;
        }
        if(self!=((void*)0)) {
            result_48->mDelegate=self->mDelegate;
        }
        if(self!=((void*)0)) {
            result_48->mShare=self->mShare;
        }
        if(self!=((void*)0)) {
            result_48->mClone=self->mClone;
        }
        if(self!=((void*)0)) {
            result_48->mNoHeap=self->mNoHeap;
        }
        if(self!=((void*)0)) {
            result_48->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(self!=((void*)0)) {
            result_48->mRefference=self->mRefference;
        }
        if(self!=((void*)0)) {
            result_48->mException=self->mException;
        }
        if(self!=((void*)0)) {
            result_48->mPointerNum=self->mPointerNum;
        }
        if(self!=((void*)0)) {
            result_48->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(self!=((void*)0)) {
            result_48->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(self!=((void*)0)) {
            result_48->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
        }
        if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
            __dec_obj32=result_48->mSizeNum;
            result_48->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value111=sNode_clone(self->mSizeNum))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value111) { right_value111 = come_decrement_ref_count2(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(self!=((void*)0)) {
            result_48->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(self!=((void*)0)) {
            result_48->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
            __dec_obj33=result_48->mOriginalTypeName;
            result_48->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value112=string_clone(self->mOriginalTypeName))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_48->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(self!=((void*)0)) {
            result_48->mFunctionParam=self->mFunctionParam;
        }
        if(self!=((void*)0)) {
            result_48->mAllocaValue=self->mAllocaValue;
        }
        if(self!=((void*)0)) {
            result_48->mGenericsStruct=self->mGenericsStruct;
        }
        if(self!=((void*)0)) {
            result_48->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(self!=((void*)0)) {
            result_48->mComeMemCore=self->mComeMemCore;
        }
        if(self!=((void*)0)) {
            result_48->mInline=self->mInline;
        }
        if(self!=((void*)0)) {
            result_48->mNullValue=self->mNullValue;
        }
        if(self!=((void*)0)) {
            result_48->mGuardValue=self->mGuardValue;
        }
        if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
            __dec_obj34=result_48->mAsmName;
            result_48->mAsmName=(char*)come_increment_ref_count(((char*)(right_value113=string_clone(self->mAsmName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_48->mArrayPointerType=self->mArrayPointerType;
        }
        if(self!=((void*)0)) {
            result_48->mLambdaArray=self->mLambdaArray;
        }
        if(self!=((void*)0)) {
            result_48->mNoNumberArray=self->mNoNumberArray;
        }
        __result62__ = __result_obj__ = result_48;
        come_call_finalizer3(result_48,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result62__;
        come_call_finalizer3(result_48,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
            if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
                come_call_finalizer3(self->mMultipleTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
                come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_49;
struct list_item$1sTypeph* prev_it_50;
memset(&it_49, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_50, 0, sizeof(struct list_item$1sTypeph*));
                    it_49=self->head;
                    while(it_49!=((void*)0)) {
                        prev_it_50=it_49;
                        it_49=it_49->next;
                        come_call_finalizer3(prev_it_50,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
                            if(self!=((void*)0)&&self->item!=((void*)0)) {
                                come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_51;
struct list_item$1sNodeph* prev_it_52;
memset(&it_51, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_52, 0, sizeof(struct list_item$1sNodeph*));
                    it_51=self->head;
                    while(it_51!=((void*)0)) {
                        prev_it_52=it_51;
                        it_51=it_51->next;
                        come_call_finalizer3(prev_it_52,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
                            if(self!=((void*)0)&&self->item!=((void*)0)) {
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_53;
struct list_item$1charph* prev_it_54;
memset(&it_53, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_54, 0, sizeof(struct list_item$1charph*));
                    it_53=self->head;
                    while(it_53!=((void*)0)) {
                        prev_it_54=it_53;
                        it_53=it_53->next;
                        come_call_finalizer3(prev_it_54,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
                            if(self!=((void*)0)&&self->item!=((void*)0)) {
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result46__;
void* right_value80;
void* right_value81;
struct list$1sTypeph* result_55;
struct list_item$1sTypeph* it_56;
void* right_value85;
struct list$1sTypeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
right_value81 = (void*)0;
memset(&result_55, 0, sizeof(struct list$1sTypeph*));
memset(&it_56, 0, sizeof(struct list_item$1sTypeph*));
right_value85 = (void*)0;
                if(self==((void*)0)) {
                    __result46__ = __result_obj__ = ((void*)0);
                    return __result46__;
                }
                result_55=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value80=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value80,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value81,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_56=self->head;
                while(it_56!=((void*)0)) {
                    list$1sTypeph_add(result_55,(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(it_56->item)))));
                    come_call_finalizer3(right_value85,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    it_56=it_56->next;
                }
                __result49__ = __result_obj__ = result_55;
                come_call_finalizer3(result_55,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result49__;
                come_call_finalizer3(result_55,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result47__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result47__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* right_value82;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj12;
void* right_value83;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj13;
void* right_value84;
struct list_item$1sTypeph* litem_59;
struct sType* __dec_obj14;
struct list$1sTypeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value83 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
right_value84 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1sTypeph*));
                        if(self->len==0) {
                            litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value82=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value82,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_57->prev=((void*)0);
                            litem_57->next=((void*)0);
                            __dec_obj12=litem_57->item;
                            litem_57->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj12,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_57;
                            self->head=litem_57;
                        }
                        else {
                            if(self->len==1) {
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value83,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_58->prev=self->head;
                                litem_58->next=((void*)0);
                                __dec_obj13=litem_58->item;
                                litem_58->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_58;
                                self->head->next=litem_58;
                            }
                            else {
                                litem_59=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_59->prev=self->tail;
                                litem_59->next=((void*)0);
                                __dec_obj14=litem_59->item;
                                litem_59->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_59;
                                self->tail=litem_59;
                            }
                        }
                        self->len++;
                        __result48__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result48__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_60;
struct list_item$1sTypeph* prev_it_61;
memset(&it_60, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_61, 0, sizeof(struct list_item$1sTypeph*));
                it_60=self->head;
                while(it_60!=((void*)0)) {
                    prev_it_61=it_60;
                    it_60=it_60->next;
                    come_call_finalizer3(prev_it_61,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
struct tuple1$1sTypeph* __result50__;
void* right_value87;
struct tuple1$1sTypeph* result_62;
void* right_value88;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&result_62, 0, sizeof(struct tuple1$1sTypeph*));
right_value88 = (void*)0;
                if(self==(void*)0) {
                    __result50__ = __result_obj__ = (void*)0;
                    return __result50__;
                }
                result_62=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value87=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value87,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj16=result_62->v1;
                    result_62->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value88,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result51__ = __result_obj__ = result_62;
                come_call_finalizer3(result_62,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result51__;
                come_call_finalizer3(result_62,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result52__;
void* right_value93;
void* right_value94;
struct list$1sNodeph* result_63;
struct list_item$1sNodeph* it_64;
void* right_value99;
struct list$1sNodeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&result_63, 0, sizeof(struct list$1sNodeph*));
memset(&it_64, 0, sizeof(struct list_item$1sNodeph*));
right_value99 = (void*)0;
                if(self==((void*)0)) {
                    __result52__ = __result_obj__ = ((void*)0);
                    return __result52__;
                }
                result_63=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value94=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value93=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value93,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value94,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_64=self->head;
                while(it_64!=((void*)0)) {
                    list$1sNodeph_add(result_63,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value99=sNode_clone(it_64->item)))));
                    if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_64=it_64->next;
                }
                __result57__ = __result_obj__ = result_63;
                come_call_finalizer3(result_63,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result57__;
                come_call_finalizer3(result_63,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result53__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result53__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* right_value95;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj21;
void* right_value96;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj22;
void* right_value97;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value96 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
right_value97 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
                        if(self->len==0) {
                            litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value95=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value95,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_65->prev=((void*)0);
                            litem_65->next=((void*)0);
                            __dec_obj21=litem_65->item;
                            litem_65->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_65;
                            self->head=litem_65;
                        }
                        else {
                            if(self->len==1) {
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value96,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_66->prev=self->head;
                                litem_66->next=((void*)0);
                                __dec_obj22=litem_66->item;
                                litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_66;
                                self->head->next=litem_66;
                            }
                            else {
                                litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_67->prev=self->tail;
                                litem_67->next=((void*)0);
                                __dec_obj23=litem_67->item;
                                litem_67->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_67;
                                self->tail=litem_67;
                            }
                        }
                        self->len++;
                        __result54__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result54__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
struct sNode* __result55__;
void* right_value98;
struct sNode* result_68;
struct sNode* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&result_68, 0, sizeof(struct sNode*));
                        if(self==(void*)0) {
                            __result55__ = __result_obj__ = (void*)0;
                            return __result55__;
                        }
                        result_68=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value98=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value98) { right_value98 = come_decrement_ref_count2(right_value98, ((struct sNode*)right_value98)->finalize, ((struct sNode*)right_value98)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(self!=((void*)0)&&self->clone!=((void*)0)) {
                            result_68->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(self!=((void*)0)) {
                            result_68->finalize=self->finalize;
                        }
                        if(self!=((void*)0)) {
                            result_68->clone=self->clone;
                        }
                        if(self!=((void*)0)) {
                            result_68->compile=self->compile;
                        }
                        if(self!=((void*)0)) {
                            result_68->sline=self->sline;
                        }
                        if(self!=((void*)0)) {
                            result_68->sname=self->sname;
                        }
                        if(self!=((void*)0)) {
                            result_68->terminated=self->terminated;
                        }
                        if(self!=((void*)0)) {
                            result_68->kind=self->kind;
                        }
                        __result56__ = __result_obj__ = result_68;
                        if(result_68) { result_68 = come_decrement_ref_count2(result_68, ((struct sNode*)result_68)->finalize, ((struct sNode*)result_68)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result56__;
                        if(result_68) { result_68 = come_decrement_ref_count2(result_68, ((struct sNode*)result_68)->finalize, ((struct sNode*)result_68)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_69;
struct list_item$1sNodeph* prev_it_70;
memset(&it_69, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_70, 0, sizeof(struct list_item$1sNodeph*));
                it_69=self->head;
                while(it_69!=((void*)0)) {
                    prev_it_70=it_69;
                    it_69=it_69->next;
                    come_call_finalizer3(prev_it_70,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result58__;
void* right_value102;
void* right_value103;
struct list$1charph* result_71;
struct list_item$1charph* it_72;
void* right_value107;
struct list$1charph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&result_71, 0, sizeof(struct list$1charph*));
memset(&it_72, 0, sizeof(struct list_item$1charph*));
right_value107 = (void*)0;
                if(self==((void*)0)) {
                    __result58__ = __result_obj__ = ((void*)0);
                    return __result58__;
                }
                result_71=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value103=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value102=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))))));
                come_call_finalizer3(right_value102,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value103,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_72=self->head;
                while(it_72!=((void*)0)) {
                    list$1charph_add(result_71,(char*)come_increment_ref_count(((char*)(right_value107=string_clone(it_72->item)))));
                    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_72=it_72->next;
                }
                __result61__ = __result_obj__ = result_71;
                come_call_finalizer3(result_71,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result61__;
                come_call_finalizer3(result_71,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result59__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result59__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
void* right_value104;
struct list_item$1charph* litem_73;
char* __dec_obj26;
void* right_value105;
struct list_item$1charph* litem_74;
char* __dec_obj27;
void* right_value106;
struct list_item$1charph* litem_75;
char* __dec_obj28;
struct list$1charph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value105 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
right_value106 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1charph*));
                        if(self->len==0) {
                            litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value104=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
                            come_call_finalizer3(right_value104,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_73->prev=((void*)0);
                            litem_73->next=((void*)0);
                            __dec_obj26=litem_73->item;
                            litem_73->item=(char*)come_increment_ref_count(item);
                            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_73;
                            self->head=litem_73;
                        }
                        else {
                            if(self->len==1) {
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value105=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
                                come_call_finalizer3(right_value105,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_74->prev=self->head;
                                litem_74->next=((void*)0);
                                __dec_obj27=litem_74->item;
                                litem_74->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_74;
                                self->head->next=litem_74;
                            }
                            else {
                                litem_75=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
                                come_call_finalizer3(right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_75->prev=self->tail;
                                litem_75->next=((void*)0);
                                __dec_obj28=litem_75->item;
                                litem_75->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_75;
                                self->tail=litem_75;
                            }
                        }
                        self->len++;
                        __result60__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result60__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_76;
struct list_item$1charph* prev_it_77;
memset(&it_76, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_77, 0, sizeof(struct list_item$1charph*));
                it_76=self->head;
                while(it_76!=((void*)0)) {
                    prev_it_77=it_76;
                    it_76=it_76->next;
                    come_call_finalizer3(prev_it_77,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
        if(self==((void*)0)) {
            return 0;
        }
        return self->len;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_86;
unsigned int it_87;
struct sGenericsFun* __result63__;
struct sGenericsFun* __result64__;
struct sGenericsFun* __result65__;
struct sGenericsFun* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_86, 0, sizeof(unsigned int));
memset(&it_87, 0, sizeof(unsigned int));
            hash_86=string_get_hash_key(((char*)key))%self->size;
            it_87=hash_86;
            while((_Bool)1) {
                if(self->item_existance[it_87]) {
                    if(string_equals(self->keys[it_87],key)) {
                        __result63__ = __result_obj__ = self->items[it_87];
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result63__;
                    }
                    it_87++;
                    if(it_87>=self->size) {
                        it_87=0;
                    }
                    else {
                        if(it_87==hash_86) {
                            __result64__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result64__;
                        }
                    }
                }
                else {
                    __result65__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result65__;
                }
            }
            __result66__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result66__;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
                            if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
                                come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
                                come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
                                come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                                come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
                                come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                                self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
                                self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_88;
unsigned int hash_89;
unsigned int it_90;
struct sFun* __result68__;
struct sFun* __result69__;
struct sFun* __result70__;
struct sFun* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_88, 0, sizeof(struct sFun*));
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(unsigned int));
            memset(&default_value_88,0,sizeof(struct sFun*));
            hash_89=string_get_hash_key(((char*)key))%self->size;
            it_90=hash_89;
            while((_Bool)1) {
                if(self->item_existance[it_90]) {
                    if(string_equals(self->keys[it_90],key)) {
                        __result68__ = __result_obj__ = self->items[it_90];
                        come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 0, 0, (void*)0);
                        return __result68__;
                    }
                    it_90++;
                    if(it_90>=self->size) {
                        it_90=0;
                    }
                    else {
                        if(it_90==hash_89) {
                            __result69__ = __result_obj__ = default_value_88;
                            come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result69__;
                        }
                    }
                }
                else {
                    __result70__ = __result_obj__ = default_value_88;
                    come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result70__;
                }
            }
            __result71__ = __result_obj__ = default_value_88;
            come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result71__;
            come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
                            if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                                come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                                come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                                come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
                                come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
                                come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
                                come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mSource!=((void*)0)) {
                                come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
                                come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
                                come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
                                come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
                                self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
                                self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sBlock_finalize(struct sBlock* self){
                                    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
                                        come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
                                        come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void CVALUE_finalize(struct CVALUE* self){
            if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->right_values!=((void*)0)) {
                come_call_finalizer3(self->right_values,list$1sRightValueObjectpp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void list$1sRightValueObjectpp_finalize(struct list$1sRightValueObjectp* self){
struct list_item$1sRightValueObjectp* it_95;
struct list_item$1sRightValueObjectp* prev_it_96;
memset(&it_95, 0, sizeof(struct list_item$1sRightValueObjectp*));
memset(&prev_it_96, 0, sizeof(struct list_item$1sRightValueObjectp*));
                    it_95=self->head;
                    while(it_95!=((void*)0)) {
                        prev_it_96=it_95;
                        it_95=it_95->next;
                        come_call_finalizer3(prev_it_96,list_item$1sRightValueObjectpp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sRightValueObjectpp_finalize(struct list_item$1sRightValueObjectp* self){
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
struct list_item$1sTypeph* it_98;
int i_99;
struct sType* __result72__;
struct sType* default_value_100;
struct sType* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_98, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_99, 0, sizeof(int));
memset(&default_value_100, 0, sizeof(struct sType*));
            if(position<0) {
                position+=self->len;
            }
            it_98=self->head;
            i_99=0;
            while(it_98!=((void*)0)) {
                if(position==i_99) {
                    __result72__ = __result_obj__ = it_98->item;
                    return __result72__;
                }
                it_98=it_98->next;
                i_99++;
            }
            memset(&default_value_100,0,sizeof(struct sType*));
            __result73__ = __result_obj__ = default_value_100;
            come_call_finalizer3(default_value_100,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result73__;
            come_call_finalizer3(default_value_100,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
void* right_value149;
struct list_item$1CVALUEph* litem_105;
struct CVALUE* __dec_obj50;
void* right_value150;
struct list_item$1CVALUEph* litem_106;
struct CVALUE* __dec_obj51;
void* right_value151;
struct list_item$1CVALUEph* litem_107;
struct CVALUE* __dec_obj52;
struct list$1CVALUEph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
memset(&litem_105, 0, sizeof(struct list_item$1CVALUEph*));
right_value150 = (void*)0;
memset(&litem_106, 0, sizeof(struct list_item$1CVALUEph*));
right_value151 = (void*)0;
memset(&litem_107, 0, sizeof(struct list_item$1CVALUEph*));
            if(self->len==0) {
                litem_105=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value149=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 219, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value149,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_105->prev=((void*)0);
                litem_105->next=((void*)0);
                __dec_obj50=litem_105->item;
                litem_105->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_105;
                self->head=litem_105;
            }
            else {
                if(self->len==1) {
                    litem_106=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value150=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 229, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value150,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_106->prev=self->head;
                    litem_106->next=((void*)0);
                    __dec_obj51=litem_106->item;
                    litem_106->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_106;
                    self->head->next=litem_106;
                }
                else {
                    litem_107=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value151=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 239, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value151,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_107->prev=self->tail;
                    litem_107->next=((void*)0);
                    __dec_obj52=litem_107->item;
                    litem_107->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj52,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_107;
                    self->tail=litem_107;
                }
            }
            self->len++;
            __result74__ = __result_obj__ = self;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result74__;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
                    if(self!=((void*)0)&&self->item!=((void*)0)) {
                        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value152;
void* right_value153;
struct sNode* __dec_obj53;
void* right_value154;
struct sNode* __dec_obj54;
void* right_value155;
char* __dec_obj55;
struct sStoreFieldNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
    ((struct sNodeBase*)(right_value152=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value152,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj53=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value153=sNode_clone(left))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value153) { right_value153 = come_decrement_ref_count2(right_value153, ((struct sNode*)right_value153)->finalize, ((struct sNode*)right_value153)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj54=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value154=sNode_clone(right))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value154) { right_value154 = come_decrement_ref_count2(right_value154, ((struct sNode*)right_value154)->finalize, ((struct sNode*)right_value154)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj55=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string(name))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result76__ = __result_obj__ = self;
    come_call_finalizer3(self,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result76__;
    come_call_finalizer3(self,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sStoreFieldNode_kind(struct sStoreFieldNode* self){
void* __result_obj__;
void* right_value156;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
    __result77__ = __result_obj__ = ((char*)(right_value156=__builtin_string("sStoreFieldNode")));
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result77__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
struct sNode* left_108;
struct sNode* right_109;
void* right_value157;
char* name_110;
_Bool __result78__;
void* right_value158;
struct CVALUE* left_value_111;
void* right_value159;
void* right_value160;
char* __dec_obj56;
_Bool __result79__;
void* right_value161;
struct CVALUE* right_value_112;
struct sType* right_type_113;
struct sType* left_type_114;
void* right_value162;
struct sType* left_type2_115;
struct sClass* klass_116;
struct sType* __dec_obj57;
struct sType* field_type_122;
int index_123;
char* __dec_obj58;
char* child_field_name_124;
_Bool __result84__;
struct list$1tuple2$2charphsTypephph* o2_saved_125;
struct tuple2$2charphsTypeph* field_128;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_131;
struct sType* field_type2_132;
void* right_value163;
struct sType* __dec_obj59;
struct list$1tuple2$2charphsTypephph* o2_saved_133;
struct tuple2$2charphsTypeph* field_134;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* field_name_135;
struct sType* field_type2_136;
struct sClass* klass2_137;
struct list$1tuple2$2charphsTypephph* o2_saved_138;
struct tuple2$2charphsTypeph* field2_139;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* field_name2_140;
struct sType* field_type3_141;
void* right_value164;
char* __dec_obj60;
void* right_value165;
struct sType* __dec_obj61;
void* right_value166;
struct sType* __dec_obj62;
_Bool __result91__;
void* right_value167;
void* right_value168;
struct CVALUE* come_value_142;
void* right_value169;
void* right_value170;
void* right_value171;
_Bool __result92__;
void* right_value172;
char* c_value_143;
void* right_value173;
char* __dec_obj63;
void* right_value174;
char* c_value_144;
void* right_value175;
char* __dec_obj64;
void* right_value176;
char* c_value_145;
void* right_value177;
char* __dec_obj65;
void* right_value178;
char* c_value_146;
void* right_value179;
char* __dec_obj66;
void* right_value180;
char* __dec_obj67;
_Bool __result93__;
int right_value_id_147;
void* right_value181;
char* c_value_148;
void* right_value182;
char* __dec_obj68;
void* right_value183;
char* c_value_149;
void* right_value184;
char* __dec_obj69;
void* right_value185;
char* c_value_150;
void* right_value186;
char* __dec_obj70;
void* right_value187;
char* c_value_151;
void* right_value188;
char* __dec_obj71;
_Bool __result94__;
void* right_value189;
char* __dec_obj72;
void* right_value190;
char* __dec_obj73;
void* right_value191;
char* __dec_obj74;
void* right_value192;
char* __dec_obj75;
_Bool __result95__;
void* right_value193;
struct sType* __dec_obj76;
_Bool __result96__;
memset(&left_108, 0, sizeof(struct sNode*));
memset(&right_109, 0, sizeof(struct sNode*));
right_value157 = (void*)0;
memset(&name_110, 0, sizeof(char*));
right_value158 = (void*)0;
memset(&left_value_111, 0, sizeof(struct CVALUE*));
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
memset(&right_value_112, 0, sizeof(struct CVALUE*));
memset(&right_type_113, 0, sizeof(struct sType*));
memset(&left_type_114, 0, sizeof(struct sType*));
right_value162 = (void*)0;
memset(&left_type2_115, 0, sizeof(struct sType*));
memset(&klass_116, 0, sizeof(struct sClass*));
memset(&field_type_122, 0, sizeof(struct sType*));
memset(&index_123, 0, sizeof(int));
memset(&child_field_name_124, 0, sizeof(char*));
memset(&o2_saved_125, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_128, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value163 = (void*)0;
memset(&o2_saved_133, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_134, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&klass2_137, 0, sizeof(struct sClass*));
memset(&o2_saved_138, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_139, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&come_value_142, 0, sizeof(struct CVALUE*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&c_value_143, 0, sizeof(char*));
right_value173 = (void*)0;
right_value174 = (void*)0;
memset(&c_value_144, 0, sizeof(char*));
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&c_value_145, 0, sizeof(char*));
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&c_value_146, 0, sizeof(char*));
right_value179 = (void*)0;
right_value180 = (void*)0;
memset(&right_value_id_147, 0, sizeof(int));
right_value181 = (void*)0;
memset(&c_value_148, 0, sizeof(char*));
right_value182 = (void*)0;
right_value183 = (void*)0;
memset(&c_value_149, 0, sizeof(char*));
right_value184 = (void*)0;
right_value185 = (void*)0;
memset(&c_value_150, 0, sizeof(char*));
right_value186 = (void*)0;
right_value187 = (void*)0;
memset(&c_value_151, 0, sizeof(char*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
    left_108=self->mLeft;
    right_109=self->mRight;
    name_110=(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string(self->mName))));
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(!node_compile(left_108,info)) {
        __result78__ = (_Bool)0;
        name_110 = come_decrement_ref_count2(name_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result78__;
    }
    left_value_111=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value158=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value158,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    if(gComeDebug&&left_value_111->type->mPointerNum>0) {
        __dec_obj56=left_value_111->c_value;
        left_value_111->c_value=(char*)come_increment_ref_count(((char*)(right_value160=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value159=make_type_name_string(left_value_111->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_111->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(!node_compile(right_109,info)) {
        __result79__ = (_Bool)0;
        name_110 = come_decrement_ref_count2(name_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_111,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result79__;
    }
    right_value_112=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value161=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value161,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    right_type_113=right_value_112->type;
    dec_stack_ptr(1,info);
    left_type_114=left_value_111->type;
    left_type2_115=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=solve_generics(left_type_114,left_type_114,info))));
    come_call_finalizer3(right_value162,sType_finalize, 0, 1, 0, 0, (void*)0);
    klass_116=left_type2_115->mClass;
    klass_116=map$2charphsClassphp_operator_load_element(info->classes,klass_116->mName);
    __dec_obj57=field_type_122;
    field_type_122=((void*)0);
    come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    index_123=0;
    __dec_obj58=child_field_name_124;
    child_field_name_124=((void*)0);
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    klass_116=map$2charphsClassphp_operator_load_element(info->classes,klass_116->mName);
    if(klass_116->mFields==((void*)0)) {
        err_msg(info,"%s fields are null",klass_116->mName);
        __result84__ = (_Bool)0;
        name_110 = come_decrement_ref_count2(name_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_111,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_112,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_115,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_122,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_124 = come_decrement_ref_count2(child_field_name_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result84__;
    }
    for(    o2_saved_125=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_116->mFields)),field_128=list$1tuple2$2charphsTypephph_begin((o2_saved_125));    !list$1tuple2$2charphsTypephph_end((o2_saved_125));    field_128=list$1tuple2$2charphsTypephph_next((o2_saved_125))    ){
        multiple_assign_var1=field_128;
        field_name_131=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type2_132=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(string_operator_equals(field_name_131,name_110)) {
            __dec_obj59=field_type_122;
            field_type_122=(struct sType*)come_increment_ref_count(((struct sType*)(right_value163=sType_clone(field_type2_132))));
            come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value163,sType_finalize, 0, 1, 0, 0, (void*)0);
            field_name_131 = come_decrement_ref_count2(field_name_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_132,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_123++;
        field_name_131 = come_decrement_ref_count2(field_name_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_132,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_125,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(index_123==list$1tuple2$2charphsTypephph_length(klass_116->mFields)) {
        index_123=0;
        for(        o2_saved_133=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_116->mFields)),field_134=list$1tuple2$2charphsTypephph_begin((o2_saved_133));        !list$1tuple2$2charphsTypephph_end((o2_saved_133));        field_134=list$1tuple2$2charphsTypephph_next((o2_saved_133))        ){
            multiple_assign_var2=field_134;
            field_name_135=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            field_type2_136=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            klass2_137=field_type2_136->mClass;
            for(            o2_saved_138=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_137->mFields)),field2_139=list$1tuple2$2charphsTypephph_begin((o2_saved_138));            !list$1tuple2$2charphsTypephph_end((o2_saved_138));            field2_139=list$1tuple2$2charphsTypephph_next((o2_saved_138))            ){
                multiple_assign_var3=field2_139;
                field_name2_140=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                field_type3_141=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                if(string_operator_equals(field_name2_140,name_110)) {
                    __dec_obj60=child_field_name_124;
                    child_field_name_124=(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string(field_name_135))));
                    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __dec_obj61=field_type_122;
                    field_type_122=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_clone(field_type3_141))));
                    come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value165,sType_finalize, 0, 1, 0, 0, (void*)0);
                    field_name2_140 = come_decrement_ref_count2(field_name2_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_141,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_140 = come_decrement_ref_count2(field_name2_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_141,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_138,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(child_field_name_124) {
                field_name_135 = come_decrement_ref_count2(field_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_136,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(string_operator_equals(field_name_135,name_110)) {
                __dec_obj62=field_type_122;
                field_type_122=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_clone(field_type2_136))));
                come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value166,sType_finalize, 0, 1, 0, 0, (void*)0);
                field_name_135 = come_decrement_ref_count2(field_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_136,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_123++;
            field_name_135 = come_decrement_ref_count2(field_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_136,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_133,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(index_123==list$1tuple2$2charphsTypephph_length(klass_116->mFields)) {
            err_msg(info,"field not found(%s) in %s(1)",name_110,klass_116->mName);
            __result91__ = (_Bool)0;
            name_110 = come_decrement_ref_count2(name_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_111,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_112,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_115,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_122,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_124 = come_decrement_ref_count2(child_field_name_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result91__;
        }
    }
    come_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value168=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value167=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 224, "CVALUE"))))))));
    come_call_finalizer3(right_value167,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value168,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    check_assign_type(((char*)(right_value170=xsprintf("\%s is assigned to",((char*)(right_value169=string_to_string(name_110)))))),field_type_122,right_type_113,right_value_112,(_Bool)0,(_Bool)1,info);
    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_type_113=((struct sType*)(right_value171=sType_clone(right_value_112->type)));
    come_call_finalizer3(right_value171,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(field_type_122->mHeap&&!right_value_112->type->mHeap) {
        if(string_operator_equals(right_value_112->type->mClass->mName,"void")&&right_value_112->type->mPointerNum==1) {
        }
        else {
            if(!right_value_112->type->mDelegate&&!right_value_112->type->mShare&&!gComeGC) {
                err_msg(info,"require right value as heap object(%s)(1)",name_110);
                printf("right type is %s pointer num %d heap %d\n",right_value_112->type->mClass->mName,right_value_112->type->mPointerNum,right_value_112->type->mHeap);
                __result92__ = (_Bool)0;
                name_110 = come_decrement_ref_count2(name_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_value_111,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_112,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_115,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_122,sType_finalize, 0, 0, 0, 0, (void*)0);
                child_field_name_124 = come_decrement_ref_count2(child_field_name_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_142,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result92__;
            }
        }
    }
    if(field_type_122->mHeap&&right_type_113->mHeap&&field_type_122->mPointerNum>0&&right_type_113->mPointerNum>0) {
        if(left_value_111->type->mPointerNum==1) {
            if(child_field_name_124) {
                c_value_143=(char*)come_increment_ref_count(((char*)(right_value172=xsprintf("%s->%s.%s",left_value_111->c_value,child_field_name_124,name_110))));
                right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                decrement_ref_count_object(field_type_122,c_value_143,info,(_Bool)0);
                std_move(field_type_122,right_type_113,right_value_112,info);
                __dec_obj63=come_value_142->c_value;
                come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value173=xsprintf("%s->%s.%s=%s",left_value_111->c_value,child_field_name_124,name_110,right_value_112->c_value))));
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                c_value_143 = come_decrement_ref_count2(c_value_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_144=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("%s->%s",left_value_111->c_value,name_110))));
                right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                decrement_ref_count_object(field_type_122,c_value_144,info,(_Bool)0);
                std_move(field_type_122,right_type_113,right_value_112,info);
                __dec_obj64=come_value_142->c_value;
                come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("%s->%s=%s",left_value_111->c_value,name_110,right_value_112->c_value))));
                __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                c_value_144 = come_decrement_ref_count2(c_value_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            if(left_value_111->type->mPointerNum==0) {
                if(child_field_name_124) {
                    c_value_145=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("%s.%s.%s",left_value_111->c_value,child_field_name_124,name_110))));
                    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    decrement_ref_count_object(field_type_122,c_value_145,info,(_Bool)0);
                    std_move(field_type_122,right_type_113,right_value_112,info);
                    __dec_obj65=come_value_142->c_value;
                    come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value177=xsprintf("%s.%s.%s=%s",left_value_111->c_value,child_field_name_124,name_110,right_value_112->c_value))));
                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    c_value_145 = come_decrement_ref_count2(c_value_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    c_value_146=(char*)come_increment_ref_count(((char*)(right_value178=xsprintf("%s.%s",left_value_111->c_value,name_110))));
                    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    decrement_ref_count_object(field_type_122,c_value_146,info,(_Bool)0);
                    __dec_obj66=right_value_112->c_value;
                    right_value_112->c_value=(char*)come_increment_ref_count(((char*)(right_value179=increment_ref_count_object(right_value_112->type,right_value_112->c_value,info))));
                    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __dec_obj67=come_value_142->c_value;
                    come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value180=xsprintf("%s.%s=%s",left_value_111->c_value,name_110,right_value_112->c_value))));
                    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    c_value_146 = come_decrement_ref_count2(c_value_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_110,left_value_111->type->mPointerNum);
                __result93__ = (_Bool)0;
                name_110 = come_decrement_ref_count2(name_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_value_111,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_112,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_115,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_122,sType_finalize, 0, 0, 0, 0, (void*)0);
                child_field_name_124 = come_decrement_ref_count2(child_field_name_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_142,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result93__;
            }
        }
        right_value_id_147=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_112->c_value));
        if(right_value_id_147!=-1) {
            remove_object_from_right_values(right_value_id_147,info);
        }
    }
    else {
        if(field_type_122->mHeap&&field_type_122->mPointerNum>0&&right_type_113->mPointerNum>0&&string_operator_equals(right_type_113->mClass->mName,"void")) {
            if(left_value_111->type->mPointerNum==1) {
                if(child_field_name_124) {
                    c_value_148=(char*)come_increment_ref_count(((char*)(right_value181=xsprintf("%s->%s.%s",left_value_111->c_value,child_field_name_124,name_110))));
                    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    decrement_ref_count_object(field_type_122,c_value_148,info,(_Bool)0);
                    __dec_obj68=come_value_142->c_value;
                    come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value182=xsprintf("%s->%s.%s=%s",left_value_111->c_value,child_field_name_124,name_110,right_value_112->c_value))));
                    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    c_value_148 = come_decrement_ref_count2(c_value_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    c_value_149=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("%s->%s",left_value_111->c_value,name_110))));
                    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    decrement_ref_count_object(field_type_122,c_value_149,info,(_Bool)0);
                    __dec_obj69=come_value_142->c_value;
                    come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value184=xsprintf("%s->%s=%s",left_value_111->c_value,name_110,right_value_112->c_value))));
                    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    c_value_149 = come_decrement_ref_count2(c_value_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                if(left_value_111->type->mPointerNum==0) {
                    if(child_field_name_124) {
                        c_value_150=(char*)come_increment_ref_count(((char*)(right_value185=xsprintf("%s.%s.%s",left_value_111->c_value,child_field_name_124,name_110))));
                        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        decrement_ref_count_object(field_type_122,c_value_150,info,(_Bool)0);
                        __dec_obj70=come_value_142->c_value;
                        come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value186=xsprintf("%s.%s.%s=%s",left_value_111->c_value,child_field_name_124,name_110,right_value_112->c_value))));
                        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        c_value_150 = come_decrement_ref_count2(c_value_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        c_value_151=(char*)come_increment_ref_count(((char*)(right_value187=xsprintf("%s.%s",left_value_111->c_value,name_110))));
                        right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        decrement_ref_count_object(field_type_122,c_value_151,info,(_Bool)0);
                        __dec_obj71=come_value_142->c_value;
                        come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value188=xsprintf("%s.%s=%s",left_value_111->c_value,name_110,right_value_112->c_value))));
                        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        c_value_151 = come_decrement_ref_count2(c_value_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_110,left_value_111->type->mPointerNum);
                    __result94__ = (_Bool)0;
                    name_110 = come_decrement_ref_count2(name_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_111,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_112,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type2_115,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_122,sType_finalize, 0, 0, 0, 0, (void*)0);
                    child_field_name_124 = come_decrement_ref_count2(child_field_name_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_142,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    return __result94__;
                }
            }
        }
        else {
            if(left_value_111->type->mPointerNum==1) {
                if(child_field_name_124) {
                    __dec_obj72=come_value_142->c_value;
                    come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("%s->%s.%s=%s",left_value_111->c_value,child_field_name_124,name_110,right_value_112->c_value))));
                    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                else {
                    __dec_obj73=come_value_142->c_value;
                    come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value190=xsprintf("%s->%s=%s",left_value_111->c_value,name_110,right_value_112->c_value))));
                    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
            }
            else {
                if(left_value_111->type->mPointerNum==0) {
                    if(child_field_name_124) {
                        __dec_obj74=come_value_142->c_value;
                        come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value191=xsprintf("%s.%s.%s=%s",left_value_111->c_value,child_field_name_124,name_110,right_value_112->c_value))));
                        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    else {
                        __dec_obj75=come_value_142->c_value;
                        come_value_142->c_value=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("%s.%s=%s",left_value_111->c_value,name_110,right_value_112->c_value))));
                        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_110,left_value_111->type->mPointerNum);
                    __result95__ = (_Bool)0;
                    name_110 = come_decrement_ref_count2(name_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_111,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_112,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type2_115,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_122,sType_finalize, 0, 0, 0, 0, (void*)0);
                    child_field_name_124 = come_decrement_ref_count2(child_field_name_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_142,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    return __result95__;
                }
            }
        }
    }
    __dec_obj76=come_value_142->type;
    come_value_142->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(field_type_122))));
    come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value193,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_142->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_142));
    add_come_last_code(info,"%s;\n",come_value_142->c_value);
    __result96__ = (_Bool)1;
    name_110 = come_decrement_ref_count2(name_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_111,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_112,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_115,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_122,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_124 = come_decrement_ref_count2(child_field_name_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_142,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result96__;
    name_110 = come_decrement_ref_count2(name_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_111,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_112,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_115,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_122,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_124 = come_decrement_ref_count2(child_field_name_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_142,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNodeBase_finalize(struct sNodeBase* self){
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_117;
unsigned int hash_118;
unsigned int it_119;
struct sClass* __result80__;
struct sClass* __result81__;
struct sClass* __result82__;
struct sClass* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_117, 0, sizeof(struct sClass*));
memset(&hash_118, 0, sizeof(unsigned int));
memset(&it_119, 0, sizeof(unsigned int));
        memset(&default_value_117,0,sizeof(struct sClass*));
        hash_118=string_get_hash_key(((char*)key))%self->size;
        it_119=hash_118;
        while((_Bool)1) {
            if(self->item_existance[it_119]) {
                if(string_equals(self->keys[it_119],key)) {
                    __result80__ = __result_obj__ = self->items[it_119];
                    come_call_finalizer3(default_value_117,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    return __result80__;
                }
                it_119++;
                if(it_119>=self->size) {
                    it_119=0;
                }
                else {
                    if(it_119==hash_118) {
                        __result81__ = __result_obj__ = default_value_117;
                        come_call_finalizer3(default_value_117,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result81__;
                    }
                }
            }
            else {
                __result82__ = __result_obj__ = default_value_117;
                come_call_finalizer3(default_value_117,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result82__;
            }
        }
        __result83__ = __result_obj__ = default_value_117;
        come_call_finalizer3(default_value_117,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result83__;
        come_call_finalizer3(default_value_117,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static void sClass_finalize(struct sClass* self){
                        if(self!=((void*)0)&&self->mName!=((void*)0)) {
                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(self!=((void*)0)&&self->mFields!=((void*)0)) {
                            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
                            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
                            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_120;
struct list_item$1tuple2$2charphsTypephph* prev_it_121;
memset(&it_120, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_121, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                it_120=self->head;
                                while(it_120!=((void*)0)) {
                                    prev_it_121=it_120;
                                    it_120=it_120->next;
                                    come_call_finalizer3(prev_it_121,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
                                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                                            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
                                                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                                                    come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct tuple2$2charphsTypeph* result_126;
struct tuple2$2charphsTypeph* __result85__;
struct tuple2$2charphsTypeph* __result86__;
struct tuple2$2charphsTypeph* result_127;
struct tuple2$2charphsTypeph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_126, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_127, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(self==((void*)0)) {
            memset(&result_126,0,sizeof(struct tuple2$2charphsTypeph*));
            __result85__ = __result_obj__ = result_126;
            return __result85__;
        }
        self->it=self->head;
        if(self->it) {
            __result86__ = __result_obj__ = self->it->item;
            return __result86__;
        }
        memset(&result_127,0,sizeof(struct tuple2$2charphsTypeph*));
        __result87__ = __result_obj__ = result_127;
        return __result87__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
        return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct tuple2$2charphsTypeph* result_129;
struct tuple2$2charphsTypeph* __result88__;
struct tuple2$2charphsTypeph* __result89__;
struct tuple2$2charphsTypeph* result_130;
struct tuple2$2charphsTypeph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_129, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_130, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(self==((void*)0)||self->it==((void*)0)) {
            memset(&result_129,0,sizeof(struct tuple2$2charphsTypeph*));
            __result88__ = __result_obj__ = result_129;
            return __result88__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result89__ = __result_obj__ = self->it->item;
            return __result89__;
        }
        memset(&result_130,0,sizeof(struct tuple2$2charphsTypeph*));
        __result90__ = __result_obj__ = result_130;
        return __result90__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
        if(self==((void*)0)) {
            return 0;
        }
        return self->len;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__;
void* right_value194;
void* right_value195;
struct sNode* __dec_obj77;
struct sNullCheckNode* __result97__;
struct sNullCheckNode* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
right_value195 = (void*)0;
    ((struct sNodeBase*)(right_value194=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value194,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj77=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value195=sNode_clone(left))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value195) { right_value195 = come_decrement_ref_count2(right_value195, ((struct sNode*)right_value195)->finalize, ((struct sNode*)right_value195)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mOnlyNullCecker=only_null_checker;
    __result97__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result97__;
    __result98__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result98__;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sNullCheckNode_kind(struct sNullCheckNode* self){
void* __result_obj__;
void* right_value196;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
    __result99__ = __result_obj__ = ((char*)(right_value196=__builtin_string("sNullCheckNode")));
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result99__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
struct sNode* left_152;
void* right_value197;
struct CVALUE* left_value_153;
void* right_value198;
char* method_name_154;
struct sType* obj_type_157;
struct sType* obj_type2_158;
void* right_value199;
void* right_value200;
char* __dec_obj78;
struct sFun* fun_159;
_Bool __result104__;
void* right_value201;
struct sType* type_160;
void* right_value202;
void* right_value203;
struct CVALUE* come_value_161;
void* right_value204;
char* __dec_obj79;
void* right_value205;
struct sType* __dec_obj80;
void* right_value206;
void* right_value207;
struct CVALUE* come_value_162;
void* right_value208;
void* right_value209;
char* __dec_obj81;
void* right_value210;
struct sType* __dec_obj82;
_Bool __result105__;
memset(&left_152, 0, sizeof(struct sNode*));
right_value197 = (void*)0;
memset(&left_value_153, 0, sizeof(struct CVALUE*));
right_value198 = (void*)0;
memset(&method_name_154, 0, sizeof(char*));
memset(&obj_type_157, 0, sizeof(struct sType*));
memset(&obj_type2_158, 0, sizeof(struct sType*));
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&fun_159, 0, sizeof(struct sFun*));
right_value201 = (void*)0;
memset(&type_160, 0, sizeof(struct sType*));
right_value202 = (void*)0;
right_value203 = (void*)0;
memset(&come_value_161, 0, sizeof(struct CVALUE*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
memset(&come_value_162, 0, sizeof(struct CVALUE*));
right_value208 = (void*)0;
right_value209 = (void*)0;
right_value210 = (void*)0;
    left_152=self->mLeft;
    if(!node_compile(left_152,info)) {
        return (_Bool)0;
    }
    left_value_153=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value197=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value197,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    if(!self->mOnlyNullCecker&&left_value_153->type->mNoSolvedGenericsType&&left_value_153->type->mNoSolvedGenericsType->v1&&left_value_153->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_153->type->mNoSolvedGenericsType->v1->mClass->mName,"optional")) {
        method_name_154=(char*)come_increment_ref_count(((char*)(right_value198=create_method_name(left_value_153->type,(_Bool)0,"expect",info,(_Bool)1))));
        right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(map$2charphsFunph_at(info->funcs,method_name_154,((void*)0))==((void*)0)) {
            obj_type_157=left_value_153->type->mNoSolvedGenericsType->v1;
            if(list$1sTypeph_length(obj_type_157->mGenericsTypes)>0) {
                obj_type2_158=left_value_153->type;
                __dec_obj78=method_name_154;
                method_name_154=(char*)come_increment_ref_count(((char*)(right_value200=make_generics_function(obj_type2_158,(char*)come_increment_ref_count(((char*)(right_value199=__builtin_string("expect")))),info,(_Bool)1))));
                __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require expect implementation(%s)",left_value_153->type->mClass->mName);
                exit(1);
            }
        }
        fun_159=map$2charphsFunphp_operator_load_element(info->funcs,method_name_154);
        if(fun_159==((void*)0)) {
            err_msg(info,"function not found(%s)",method_name_154);
            __result104__ = (_Bool)1;
            method_name_154 = come_decrement_ref_count2(method_name_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result104__;
        }
        type_160=(struct sType*)come_increment_ref_count(((struct sType*)(right_value201=solve_generics(fun_159->mResultType,left_value_153->type,info))));
        come_call_finalizer3(right_value201,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value202=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 399, "CVALUE"))))))));
        come_call_finalizer3(right_value202,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value203,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj79=come_value_161->c_value;
        come_value_161->c_value=(char*)come_increment_ref_count(((char*)(right_value204=xsprintf("%s(%s)",method_name_154,left_value_153->c_value))));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj80=come_value_161->type;
        come_value_161->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=sType_clone(type_160))));
        come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value205,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_161->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_161));
        add_come_last_code(info,"%s;\n",come_value_161->c_value);
        method_name_154 = come_decrement_ref_count2(method_name_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_160,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_161,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(!gComeDebug) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_153));
        }
        else {
            if(left_value_153->type->mPointerNum>0) {
                come_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value207=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value206=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 413, "CVALUE"))))))));
                come_call_finalizer3(right_value206,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(right_value207,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj81=come_value_162->c_value;
                come_value_162->c_value=(char*)come_increment_ref_count(((char*)(right_value209=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value208=make_type_name_string(left_value_153->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_153->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
                __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj82=come_value_162->type;
                come_value_162->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=sType_clone(left_value_153->type))));
                come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value210,sType_finalize, 0, 1, 0, 0, (void*)0);
                come_value_162->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_162));
                add_come_last_code(info,"%s;\n",come_value_162->c_value);
                come_call_finalizer3(come_value_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_153));
            }
        }
    }
    __result105__ = (_Bool)1;
    come_call_finalizer3(left_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result105__;
    come_call_finalizer3(left_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_155;
unsigned int it_156;
struct sFun* __result100__;
struct sFun* __result101__;
struct sFun* __result102__;
struct sFun* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_155, 0, sizeof(unsigned int));
memset(&it_156, 0, sizeof(unsigned int));
            hash_155=string_get_hash_key(((char*)key))%self->size;
            it_156=hash_155;
            while((_Bool)1) {
                if(self->item_existance[it_156]) {
                    if(string_equals(self->keys[it_156],key)) {
                        __result100__ = __result_obj__ = self->items[it_156];
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result100__;
                    }
                    it_156++;
                    if(it_156>=self->size) {
                        it_156=0;
                    }
                    else {
                        if(it_156==hash_155) {
                            __result101__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result101__;
                        }
                    }
                }
                else {
                    __result102__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result102__;
                }
            }
            __result103__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result103__;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* right_value211;
void* right_value212;
struct sNode* __dec_obj83;
struct sNullableNode* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value211 = (void*)0;
right_value212 = (void*)0;
    ((struct sNodeBase*)(right_value211=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value211,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj83=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value212=sNode_clone(left))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value212) { right_value212 = come_decrement_ref_count2(right_value212, ((struct sNode*)right_value212)->finalize, ((struct sNode*)right_value212)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result106__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result106__;
    come_call_finalizer3(self,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sNullableNode_kind(struct sNullableNode* self){
void* __result_obj__;
void* right_value213;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value213 = (void*)0;
    __result107__ = __result_obj__ = ((char*)(right_value213=__builtin_string("sNullableNode")));
    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result107__;
}

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info){
struct sNode* left_163;
void* right_value214;
struct CVALUE* left_value_164;
void* right_value229;
struct CVALUE* come_value_165;
_Bool __result116__;
memset(&left_163, 0, sizeof(struct sNode*));
right_value214 = (void*)0;
memset(&left_value_164, 0, sizeof(struct CVALUE*));
right_value229 = (void*)0;
memset(&come_value_165, 0, sizeof(struct CVALUE*));
    left_163=self->mLeft;
    if(!node_compile(left_163,info)) {
        return (_Bool)0;
    }
    left_value_164=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value214=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value214,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    if(left_value_164->type->mPointerNum>0&&left_value_164->type->mNullValue) {
        come_value_165=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value229=CVALUE_clone(left_value_164))));
        come_call_finalizer3(right_value229,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_value_165->type->mNullValue=(_Bool)0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_165));
        add_come_last_code(info,"%s;\n",come_value_165->c_value);
        come_call_finalizer3(come_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_164));
    }
    __result116__ = (_Bool)1;
    come_call_finalizer3(left_value_164,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result116__;
    come_call_finalizer3(left_value_164,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
struct CVALUE* __result108__;
void* right_value215;
struct CVALUE* result_166;
void* right_value216;
char* __dec_obj84;
void* right_value217;
struct sType* __dec_obj85;
void* right_value228;
struct list$1sRightValueObjectp* __dec_obj89;
struct CVALUE* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
memset(&result_166, 0, sizeof(struct CVALUE*));
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value228 = (void*)0;
            if(self==(void*)0) {
                __result108__ = __result_obj__ = (void*)0;
                return __result108__;
            }
            result_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value215=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
            come_call_finalizer3(right_value215,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                __dec_obj84=result_166->c_value;
                result_166->c_value=(char*)come_increment_ref_count(((char*)(right_value216=string_clone(self->c_value))));
                __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                __dec_obj85=result_166->type;
                result_166->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value217=sType_clone(self->type))));
                come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value217,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)) {
                result_166->var=self->var;
            }
            if(self!=((void*)0)&&self->right_values!=((void*)0)) {
                __dec_obj89=result_166->right_values;
                result_166->right_values=(struct list$1sRightValueObjectp*)come_increment_ref_count(((struct list$1sRightValueObjectp*)(right_value228=list$1sRightValueObjectpp_clone(self->right_values))));
                come_call_finalizer3(__dec_obj89,list$1sRightValueObjectp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value228,list$1sRightValueObjectpp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            __result115__ = __result_obj__ = result_166;
            come_call_finalizer3(result_166,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result115__;
            come_call_finalizer3(result_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sRightValueObjectp* list$1sRightValueObjectpp_clone(struct list$1sRightValueObjectp* self){
void* __result_obj__;
struct list$1sRightValueObjectp* __result109__;
void* right_value218;
void* right_value219;
struct list$1sRightValueObjectp* result_167;
struct list_item$1sRightValueObjectp* it_168;
void* right_value227;
struct list$1sRightValueObjectp* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value218 = (void*)0;
right_value219 = (void*)0;
memset(&result_167, 0, sizeof(struct list$1sRightValueObjectp*));
memset(&it_168, 0, sizeof(struct list_item$1sRightValueObjectp*));
right_value227 = (void*)0;
                    if(self==((void*)0)) {
                        __result109__ = __result_obj__ = ((void*)0);
                        return __result109__;
                    }
                    result_167=(struct list$1sRightValueObjectp*)come_increment_ref_count(((struct list$1sRightValueObjectp*)(right_value219=list$1sRightValueObjectp_initialize((struct list$1sRightValueObjectp*)come_increment_ref_count(((struct list$1sRightValueObjectp*)(right_value218=(struct list$1sRightValueObjectp*)come_calloc(1, sizeof(struct list$1sRightValueObjectp)*(1), "./neo-c.h", 135, "list$1sRightValueObjectp"))))))));
                    come_call_finalizer3(right_value218,list$1sRightValueObjectpp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value219,list$1sRightValueObjectpp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_168=self->head;
                    while(it_168!=((void*)0)) {
                        list$1sRightValueObjectp_add(result_167,((struct sRightValueObject*)(right_value227=sRightValueObject_clone(it_168->item))));
                        come_call_finalizer3(right_value227,sRightValueObject_finalize, 0, 1, 0, 0, __result_obj__);
                        it_168=it_168->next;
                    }
                    __result114__ = __result_obj__ = result_167;
                    come_call_finalizer3(result_167,list$1sRightValueObjectpp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result114__;
                    come_call_finalizer3(result_167,list$1sRightValueObjectpp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sRightValueObjectp* list$1sRightValueObjectp_initialize(struct list$1sRightValueObjectp* self){
void* __result_obj__;
struct list$1sRightValueObjectp* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result110__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sRightValueObjectpp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result110__;
                        come_call_finalizer3(self,list$1sRightValueObjectpp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sRightValueObjectp* list$1sRightValueObjectp_add(struct list$1sRightValueObjectp* self, struct sRightValueObject* item){
void* __result_obj__;
void* right_value220;
struct list_item$1sRightValueObjectp* litem_169;
void* right_value221;
struct list_item$1sRightValueObjectp* litem_170;
void* right_value222;
struct list_item$1sRightValueObjectp* litem_171;
struct list$1sRightValueObjectp* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value220 = (void*)0;
memset(&litem_169, 0, sizeof(struct list_item$1sRightValueObjectp*));
right_value221 = (void*)0;
memset(&litem_170, 0, sizeof(struct list_item$1sRightValueObjectp*));
right_value222 = (void*)0;
memset(&litem_171, 0, sizeof(struct list_item$1sRightValueObjectp*));
                            if(self->len==0) {
                                litem_169=(struct list_item$1sRightValueObjectp*)come_increment_ref_count(((struct list_item$1sRightValueObjectp*)(right_value220=(struct list_item$1sRightValueObjectp*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectp)*(1), "./neo-c.h", 149, "list_item$1sRightValueObjectp"))));
                                come_call_finalizer3(right_value220,list_item$1sRightValueObjectpp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_169->prev=((void*)0);
                                litem_169->next=((void*)0);
                                litem_169->item=item;
                                self->tail=litem_169;
                                self->head=litem_169;
                            }
                            else {
                                if(self->len==1) {
                                    litem_170=(struct list_item$1sRightValueObjectp*)come_increment_ref_count(((struct list_item$1sRightValueObjectp*)(right_value221=(struct list_item$1sRightValueObjectp*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectp)*(1), "./neo-c.h", 159, "list_item$1sRightValueObjectp"))));
                                    come_call_finalizer3(right_value221,list_item$1sRightValueObjectpp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_170->prev=self->head;
                                    litem_170->next=((void*)0);
                                    litem_170->item=item;
                                    self->tail=litem_170;
                                    self->head->next=litem_170;
                                }
                                else {
                                    litem_171=(struct list_item$1sRightValueObjectp*)come_increment_ref_count(((struct list_item$1sRightValueObjectp*)(right_value222=(struct list_item$1sRightValueObjectp*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectp)*(1), "./neo-c.h", 169, "list_item$1sRightValueObjectp"))));
                                    come_call_finalizer3(right_value222,list_item$1sRightValueObjectpp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_171->prev=self->tail;
                                    litem_171->next=((void*)0);
                                    litem_171->item=item;
                                    self->tail->next=litem_171;
                                    self->tail=litem_171;
                                }
                            }
                            self->len++;
                            __result111__ = __result_obj__ = self;
                            return __result111__;
}

static struct sRightValueObject* sRightValueObject_clone(struct sRightValueObject* self){
void* __result_obj__;
struct sRightValueObject* __result112__;
void* right_value223;
struct sRightValueObject* result_172;
void* right_value224;
struct sType* __dec_obj86;
void* right_value225;
char* __dec_obj87;
void* right_value226;
char* __dec_obj88;
struct sRightValueObject* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value223 = (void*)0;
memset(&result_172, 0, sizeof(struct sRightValueObject*));
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
                            if(self==(void*)0) {
                                __result112__ = __result_obj__ = (void*)0;
                                return __result112__;
                            }
                            result_172=(struct sRightValueObject*)come_increment_ref_count(((struct sRightValueObject*)(right_value223=(struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "sRightValueObject_clone", 3, "sRightValueObject"))));
                            come_call_finalizer3(right_value223,sRightValueObject_finalize, 0, 1, 0, 0, __result_obj__);
                            if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                __dec_obj86=result_172->mType;
                                result_172->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value224=sType_clone(self->mType))));
                                come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value224,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                            if(self!=((void*)0)&&self->mVarName!=((void*)0)) {
                                __dec_obj87=result_172->mVarName;
                                result_172->mVarName=(char*)come_increment_ref_count(((char*)(right_value225=string_clone(self->mVarName))));
                                __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
                                __dec_obj88=result_172->mFunName;
                                result_172->mFunName=(char*)come_increment_ref_count(((char*)(right_value226=string_clone(self->mFunName))));
                                __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(self!=((void*)0)) {
                                result_172->mFreed=self->mFreed;
                            }
                            if(self!=((void*)0)) {
                                result_172->mID=self->mID;
                            }
                            if(self!=((void*)0)) {
                                result_172->mBlockLevel=self->mBlockLevel;
                            }
                            __result113__ = __result_obj__ = result_172;
                            come_call_finalizer3(result_172,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
                            return __result113__;
                            come_call_finalizer3(result_172,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
                                if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                    come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mVarName!=((void*)0)) {
                                    self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
                                    self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void list$1sRightValueObjectp_finalize(struct list$1sRightValueObjectp* self){
struct list_item$1sRightValueObjectp* it_173;
struct list_item$1sRightValueObjectp* prev_it_174;
memset(&it_173, 0, sizeof(struct list_item$1sRightValueObjectp*));
memset(&prev_it_174, 0, sizeof(struct list_item$1sRightValueObjectp*));
                    it_173=self->head;
                    while(it_173!=((void*)0)) {
                        prev_it_174=it_173;
                        it_173=it_173->next;
                        come_call_finalizer3(prev_it_174,list_item$1sRightValueObjectpp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info){
void* __result_obj__;
void* right_value230;
void* right_value231;
struct sNode* __dec_obj90;
void* right_value232;
struct sNode* __dec_obj91;
void* right_value233;
struct sNode* __dec_obj92;
struct sRangeCheckNode* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
    ((struct sNodeBase*)(right_value230=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value230,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj90=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value231=sNode_clone(left))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value231) { right_value231 = come_decrement_ref_count2(right_value231, ((struct sNode*)right_value231)->finalize, ((struct sNode*)right_value231)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj91=self->mBegin;
    self->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value232=sNode_clone(begin))));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value232) { right_value232 = come_decrement_ref_count2(right_value232, ((struct sNode*)right_value232)->finalize, ((struct sNode*)right_value232)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj92=self->mEnd;
    self->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value233=sNode_clone(end))));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count2(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value233) { right_value233 = come_decrement_ref_count2(right_value233, ((struct sNode*)right_value233)->finalize, ((struct sNode*)right_value233)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result117__ = __result_obj__ = self;
    come_call_finalizer3(self,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result117__;
    come_call_finalizer3(self,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sRangeCheckNode_kind(struct sRangeCheckNode* self){
void* __result_obj__;
void* right_value234;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
    __result118__ = __result_obj__ = ((char*)(right_value234=__builtin_string("sRangeCheckNode")));
    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result118__;
}

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info){
struct sNode* left_175;
void* right_value235;
struct CVALUE* left_value_176;
struct sNode* begin_177;
_Bool __result119__;
void* right_value236;
struct CVALUE* begin_value_178;
struct sNode* end_179;
_Bool __result120__;
void* right_value237;
struct CVALUE* end_value_180;
void* right_value238;
void* right_value239;
struct CVALUE* come_value_181;
void* right_value240;
void* right_value241;
char* __dec_obj93;
void* right_value242;
struct sType* __dec_obj94;
void* right_value243;
void* right_value244;
struct CVALUE* come_value_182;
void* right_value245;
void* right_value246;
char* __dec_obj95;
void* right_value247;
struct sType* __dec_obj96;
_Bool __result121__;
memset(&left_175, 0, sizeof(struct sNode*));
right_value235 = (void*)0;
memset(&left_value_176, 0, sizeof(struct CVALUE*));
memset(&begin_177, 0, sizeof(struct sNode*));
right_value236 = (void*)0;
memset(&begin_value_178, 0, sizeof(struct CVALUE*));
memset(&end_179, 0, sizeof(struct sNode*));
right_value237 = (void*)0;
memset(&end_value_180, 0, sizeof(struct CVALUE*));
right_value238 = (void*)0;
right_value239 = (void*)0;
memset(&come_value_181, 0, sizeof(struct CVALUE*));
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
memset(&come_value_182, 0, sizeof(struct CVALUE*));
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
    left_175=self->mLeft;
    if(!node_compile(left_175,info)) {
        return (_Bool)0;
    }
    left_value_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value235=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value235,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    begin_177=self->mBegin;
    if(!node_compile(begin_177,info)) {
        __result119__ = (_Bool)0;
        come_call_finalizer3(left_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result119__;
    }
    begin_value_178=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value236=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value236,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    end_179=self->mEnd;
    if(!node_compile(end_179,info)) {
        __result120__ = (_Bool)0;
        come_call_finalizer3(left_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(begin_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result120__;
    }
    end_value_180=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value237=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value237,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    if(left_value_176->type->mPointerNum>0) {
        if(!gComeDebug) {
            come_value_181=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value239=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value238=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 520, "CVALUE"))))))));
            come_call_finalizer3(right_value238,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(right_value239,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj93=come_value_181->c_value;
            come_value_181->c_value=(char*)come_increment_ref_count(((char*)(right_value241=xsprintf("(*((%s)%s))",((char*)(right_value240=make_type_name_string(left_value_176->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_176->c_value))));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            left_value_176->type->mPointerNum--;
            __dec_obj94=come_value_181->type;
            come_value_181->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_clone(left_value_176->type))));
            come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value242,sType_finalize, 0, 1, 0, 0, (void*)0);
            come_value_181->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_181));
            add_come_last_code(info,"%s;\n",come_value_181->c_value);
            come_call_finalizer3(come_value_181,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_182=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value244=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value243=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 533, "CVALUE"))))))));
            come_call_finalizer3(right_value243,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(right_value244,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj95=come_value_182->c_value;
            come_value_182->c_value=(char*)come_increment_ref_count(((char*)(right_value246=xsprintf("(*((%s)come_range_check(%s, %s, %s, \"%s\", %d)))",((char*)(right_value245=make_type_name_string(left_value_176->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_176->c_value,begin_value_178->c_value,end_value_180->c_value,info->sname,info->sline))));
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            left_value_176->type->mPointerNum--;
            __dec_obj96=come_value_182->type;
            come_value_182->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value247=sType_clone(left_value_176->type))));
            come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value247,sType_finalize, 0, 1, 0, 0, (void*)0);
            come_value_182->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_182));
            add_come_last_code(info,"%s;\n",come_value_182->c_value);
            come_call_finalizer3(come_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_176));
    }
    __result121__ = (_Bool)1;
    come_call_finalizer3(left_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(begin_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(end_value_180,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result121__;
    come_call_finalizer3(left_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(begin_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(end_value_180,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value248;
void* right_value249;
struct sNode* __dec_obj97;
void* right_value250;
char* __dec_obj98;
struct sLoadFieldNode* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
    ((struct sNodeBase*)(right_value248=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value248,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj97=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value249=sNode_clone(left))));
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value249) { right_value249 = come_decrement_ref_count2(right_value249, ((struct sNode*)right_value249)->finalize, ((struct sNode*)right_value249)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj98=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value250=__builtin_string(name))));
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result122__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result122__;
    come_call_finalizer3(self,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sLoadFieldNode_kind(struct sLoadFieldNode* self){
void* __result_obj__;
void* right_value251;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value251 = (void*)0;
    __result123__ = __result_obj__ = ((char*)(right_value251=__builtin_string("sLoadFieldNode")));
    right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result123__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
struct sNode* left_183;
void* right_value252;
char* name_184;
_Bool __result124__;
void* right_value253;
struct CVALUE* left_value_185;
void* right_value254;
void* right_value255;
char* __dec_obj99;
struct sType* left_type_186;
void* right_value256;
struct sType* left_type2_187;
struct sClass* klass_188;
struct sType* __dec_obj100;
struct sType* field_type_189;
int index_190;
char* __dec_obj101;
char* child_field_name_191;
_Bool __result125__;
struct list$1tuple2$2charphsTypephph* o2_saved_192;
struct tuple2$2charphsTypeph* field_193;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* field_name_194;
struct sType* field_type2_195;
void* right_value257;
struct sType* __dec_obj102;
struct list$1tuple2$2charphsTypephph* o2_saved_196;
struct tuple2$2charphsTypeph* field_197;
struct tuple2$2charphsTypeph* multiple_assign_var5;
char* field_name_198;
struct sType* field_type2_199;
struct sClass* klass2_200;
struct list$1tuple2$2charphsTypephph* o2_saved_201;
struct tuple2$2charphsTypeph* field2_202;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* field_name2_203;
struct sType* field_type3_204;
void* right_value258;
char* __dec_obj103;
void* right_value259;
struct sType* __dec_obj104;
void* right_value260;
struct sType* __dec_obj105;
_Bool __result126__;
void* right_value261;
void* right_value262;
struct CVALUE* come_value_205;
void* right_value263;
char* __dec_obj106;
void* right_value264;
char* __dec_obj107;
void* right_value265;
char* __dec_obj108;
void* right_value266;
char* __dec_obj109;
void* right_value267;
struct sType* __dec_obj110;
_Bool __result127__;
void* right_value268;
struct sType* __dec_obj111;
_Bool __result129__;
memset(&left_183, 0, sizeof(struct sNode*));
right_value252 = (void*)0;
memset(&name_184, 0, sizeof(char*));
right_value253 = (void*)0;
memset(&left_value_185, 0, sizeof(struct CVALUE*));
right_value254 = (void*)0;
right_value255 = (void*)0;
memset(&left_type_186, 0, sizeof(struct sType*));
right_value256 = (void*)0;
memset(&left_type2_187, 0, sizeof(struct sType*));
memset(&klass_188, 0, sizeof(struct sClass*));
memset(&field_type_189, 0, sizeof(struct sType*));
memset(&index_190, 0, sizeof(int));
memset(&child_field_name_191, 0, sizeof(char*));
memset(&o2_saved_192, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_193, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value257 = (void*)0;
memset(&o2_saved_196, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_197, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&klass2_200, 0, sizeof(struct sClass*));
memset(&o2_saved_201, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_202, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value258 = (void*)0;
right_value259 = (void*)0;
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
memset(&come_value_205, 0, sizeof(struct CVALUE*));
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
    left_183=self->mLeft;
    name_184=(char*)come_increment_ref_count(((char*)(right_value252=__builtin_string(self->mName))));
    right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(!node_compile(left_183,info)) {
        __result124__ = (_Bool)0;
        name_184 = come_decrement_ref_count2(name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result124__;
    }
    left_value_185=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value253=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value253,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    if(gComeDebug&&left_value_185->type->mPointerNum>0) {
        __dec_obj99=left_value_185->c_value;
        left_value_185->c_value=(char*)come_increment_ref_count(((char*)(right_value255=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value254=make_type_name_string(left_value_185->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_185->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_186=left_value_185->type;
    left_type2_187=(struct sType*)come_increment_ref_count(((struct sType*)(right_value256=solve_generics(left_type_186,left_type_186,info))));
    come_call_finalizer3(right_value256,sType_finalize, 0, 1, 0, 0, (void*)0);
    klass_188=left_type2_187->mClass;
    klass_188=map$2charphsClassphp_operator_load_element(info->classes,klass_188->mName);
    __dec_obj100=field_type_189;
    field_type_189=((void*)0);
    come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 0, 0, (void*)0);
    index_190=0;
    __dec_obj101=child_field_name_191;
    child_field_name_191=((void*)0);
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    klass_188=map$2charphsClassphp_operator_load_element(info->classes,klass_188->mName);
    if(klass_188==((void*)0)||klass_188->mFields==((void*)0)) {
        err_msg(info,"invalid class %s",klass_188->mName);
        __result125__ = (_Bool)0;
        name_184 = come_decrement_ref_count2(name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_187,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_189,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_191 = come_decrement_ref_count2(child_field_name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result125__;
    }
    for(    o2_saved_192=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_188->mFields)),field_193=list$1tuple2$2charphsTypephph_begin((o2_saved_192));    !list$1tuple2$2charphsTypephph_end((o2_saved_192));    field_193=list$1tuple2$2charphsTypephph_next((o2_saved_192))    ){
        multiple_assign_var4=field_193;
        field_name_194=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        field_type2_195=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
        if(string_operator_equals(field_name_194,name_184)) {
            __dec_obj102=field_type_189;
            field_type_189=(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=sType_clone(field_type2_195))));
            come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value257,sType_finalize, 0, 1, 0, 0, (void*)0);
            field_name_194 = come_decrement_ref_count2(field_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_195,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_190++;
        field_name_194 = come_decrement_ref_count2(field_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_195,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_192,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(index_190==list$1tuple2$2charphsTypephph_length(klass_188->mFields)) {
        index_190=0;
        for(        o2_saved_196=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_188->mFields)),field_197=list$1tuple2$2charphsTypephph_begin((o2_saved_196));        !list$1tuple2$2charphsTypephph_end((o2_saved_196));        field_197=list$1tuple2$2charphsTypephph_next((o2_saved_196))        ){
            multiple_assign_var5=field_197;
            field_name_198=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            field_type2_199=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
            klass2_200=field_type2_199->mClass;
            for(            o2_saved_201=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_200->mFields)),field2_202=list$1tuple2$2charphsTypephph_begin((o2_saved_201));            !list$1tuple2$2charphsTypephph_end((o2_saved_201));            field2_202=list$1tuple2$2charphsTypephph_next((o2_saved_201))            ){
                multiple_assign_var6=field2_202;
                field_name2_203=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                field_type3_204=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                if(string_operator_equals(field_name2_203,name_184)) {
                    __dec_obj103=child_field_name_191;
                    child_field_name_191=(char*)come_increment_ref_count(((char*)(right_value258=__builtin_string(field_name_198))));
                    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __dec_obj104=field_type_189;
                    field_type_189=(struct sType*)come_increment_ref_count(((struct sType*)(right_value259=sType_clone(field_type3_204))));
                    come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value259,sType_finalize, 0, 1, 0, 0, (void*)0);
                    field_name2_203 = come_decrement_ref_count2(field_name2_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_204,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_203 = come_decrement_ref_count2(field_name2_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_204,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_201,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(child_field_name_191) {
                field_name_198 = come_decrement_ref_count2(field_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_199,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(string_operator_equals(field_name_198,name_184)) {
                __dec_obj105=field_type_189;
                field_type_189=(struct sType*)come_increment_ref_count(((struct sType*)(right_value260=sType_clone(field_type2_199))));
                come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value260,sType_finalize, 0, 1, 0, 0, (void*)0);
                field_name_198 = come_decrement_ref_count2(field_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_199,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_190++;
            field_name_198 = come_decrement_ref_count2(field_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_199,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_196,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(index_190==list$1tuple2$2charphsTypephph_length(klass_188->mFields)) {
            err_msg(info,"field not found(%s) in %s(2)",name_184,klass_188->mName);
            __result126__ = (_Bool)0;
            name_184 = come_decrement_ref_count2(name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_187,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_189,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_191 = come_decrement_ref_count2(child_field_name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result126__;
        }
    }
    come_value_205=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value262=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value261=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 645, "CVALUE"))))))));
    come_call_finalizer3(right_value261,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value262,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    if(left_value_185->type->mPointerNum>0) {
        if(child_field_name_191) {
            __dec_obj106=come_value_205->c_value;
            come_value_205->c_value=(char*)come_increment_ref_count(((char*)(right_value263=xsprintf("%s->%s.%s",left_value_185->c_value,child_field_name_191,name_184))));
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            __dec_obj107=come_value_205->c_value;
            come_value_205->c_value=(char*)come_increment_ref_count(((char*)(right_value264=xsprintf("%s->%s",left_value_185->c_value,name_184))));
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
    }
    else {
        if(child_field_name_191) {
            __dec_obj108=come_value_205->c_value;
            come_value_205->c_value=(char*)come_increment_ref_count(((char*)(right_value265=xsprintf("%s.%s.%s",left_value_185->c_value,child_field_name_191,name_184))));
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            __dec_obj109=come_value_205->c_value;
            come_value_205->c_value=(char*)come_increment_ref_count(((char*)(right_value266=xsprintf("%s.%s",left_value_185->c_value,name_184))));
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
    }
    __dec_obj110=come_value_205->type;
    come_value_205->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value267=sType_clone(field_type_189))));
    come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value267,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_205->var=((void*)0);
    if(field_type_189==((void*)0)) {
        err_msg(info,"no field(%s)\n",name_184);
        __result127__ = (_Bool)0;
        name_184 = come_decrement_ref_count2(name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_187,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_189,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_191 = come_decrement_ref_count2(child_field_name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_205,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result127__;
    }
    if(list$1sNodeph_length(come_value_205->type->mArrayNum)==1) {
        __dec_obj111=come_value_205->type->mOriginalLoadVarType->v1;
        come_value_205->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=sType_clone(come_value_205->type))));
        come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value268,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1sNodeph_reset(come_value_205->type->mArrayNum);
        come_value_205->type->mPointerNum++;
        come_value_205->type->mOriginalTypeNamePointerNum=come_value_205->type->mPointerNum;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_205));
    __result129__ = (_Bool)1;
    name_184 = come_decrement_ref_count2(name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_187,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_189,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_191 = come_decrement_ref_count2(child_field_name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_205,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result129__;
    name_184 = come_decrement_ref_count2(name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_187,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_189,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_191 = come_decrement_ref_count2(child_field_name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_205,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
        if(self==((void*)0)) {
            return 0;
        }
        return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_206;
struct list_item$1sNodeph* prev_it_207;
struct list$1sNodeph* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_206, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_207, 0, sizeof(struct list_item$1sNodeph*));
            it_206=self->head;
            while(it_206!=((void*)0)) {
                prev_it_207=it_206;
                it_206=it_206->next;
                come_call_finalizer3(prev_it_207,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result128__ = __result_obj__ = self;
            return __result128__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value269;
void* right_value270;
struct sNode* __dec_obj112;
void* right_value271;
struct sNode* __dec_obj113;
void* right_value272;
struct list$1sNodeph* __dec_obj114;
struct sStoreArrayNode* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value269 = (void*)0;
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
    ((struct sNodeBase*)(right_value269=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value269,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj112=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value270=sNode_clone(left))));
    if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value270) { right_value270 = come_decrement_ref_count2(right_value270, ((struct sNode*)right_value270)->finalize, ((struct sNode*)right_value270)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj113=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value271=sNode_clone(right))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value271) { right_value271 = come_decrement_ref_count2(right_value271, ((struct sNode*)right_value271)->finalize, ((struct sNode*)right_value271)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj114=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value272=list$1sNodephp_clone(array_num))));
    come_call_finalizer3(__dec_obj114,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value272,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __result130__ = __result_obj__ = self;
    come_call_finalizer3(self,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result130__;
    come_call_finalizer3(self,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

char* sStoreArrayNode_kind(struct sStoreArrayNode* self){
void* __result_obj__;
void* right_value273;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value273 = (void*)0;
    __result131__ = __result_obj__ = ((char*)(right_value273=__builtin_string("sStoreArrayNode")));
    right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result131__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
struct sNode* left_208;
struct sNode* right_209;
struct list$1sNodeph* array_num_nodes_210;
void* right_value274;
struct CVALUE* left_value_211;
void* right_value275;
void* right_value276;
char* __dec_obj115;
struct sType* left_type_212;
void* right_value277;
void* right_value278;
struct list$1CVALUEph* array_num_213;
struct list$1sNodeph* o2_saved_216;
struct sNode* it_219;
_Bool __result139__;
void* right_value279;
struct CVALUE* c_value_222;
_Bool __result140__;
void* right_value280;
struct CVALUE* right_value_223;
struct sType* right_type_224;
struct sClass* klass_225;
void* right_value281;
struct sType* type_226;
char* fun_name_227;
_Bool calling_fun_228;
char* __dec_obj116;
char* check_code_232;
struct sType* var_type_233;
void* right_value282;
struct sType* result_type_234;
struct sType* __dec_obj117;
int n_235;
void* right_value283;
struct sType* __dec_obj118;
void* right_value284;
struct sType* __dec_obj119;
int i_236;
void* right_value285;
void* right_value286;
struct CVALUE* come_value_249;
void* right_value287;
void* right_value288;
struct buffer* buf_250;
void* right_value289;
struct sType* result_type2_251;
void* right_value290;
struct list$1CVALUEph* o2_saved_252;
struct CVALUE* it_255;
void* right_value291;
void* right_value292;
int i_258;
struct list$1sNodeph* o2_saved_259;
struct sNode* it_260;
void* right_value293;
struct CVALUE* come_value_261;
void* right_value294;
void* right_value295;
void* right_value296;
char* __dec_obj120;
void* right_value297;
void* right_value298;
struct CVALUE* come_value_262;
int i_263;
void* right_value299;
void* right_value300;
struct buffer* buf_264;
struct list$1CVALUEph* o2_saved_265;
struct CVALUE* it_266;
void* right_value301;
void* right_value302;
char* left_value_code_267;
void* right_value303;
void* right_value304;
char* __dec_obj121;
void* right_value305;
char* __dec_obj122;
_Bool __result151__;
int right_value_id_268;
void* right_value306;
char* __dec_obj123;
void* right_value307;
char* __dec_obj124;
_Bool __result152__;
void* right_value308;
struct sType* result_type_269;
void* right_value309;
void* right_value310;
struct list$1sNodeph* __dec_obj125;
struct sType* __dec_obj126;
void* right_value311;
char* __dec_obj127;
_Bool __result153__;
memset(&left_208, 0, sizeof(struct sNode*));
memset(&right_209, 0, sizeof(struct sNode*));
memset(&array_num_nodes_210, 0, sizeof(struct list$1sNodeph*));
right_value274 = (void*)0;
memset(&left_value_211, 0, sizeof(struct CVALUE*));
right_value275 = (void*)0;
right_value276 = (void*)0;
memset(&left_type_212, 0, sizeof(struct sType*));
right_value277 = (void*)0;
right_value278 = (void*)0;
memset(&array_num_213, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_216, 0, sizeof(struct list$1sNodeph*));
memset(&it_219, 0, sizeof(struct sNode*));
right_value279 = (void*)0;
memset(&c_value_222, 0, sizeof(struct CVALUE*));
right_value280 = (void*)0;
memset(&right_value_223, 0, sizeof(struct CVALUE*));
memset(&right_type_224, 0, sizeof(struct sType*));
memset(&klass_225, 0, sizeof(struct sClass*));
right_value281 = (void*)0;
memset(&type_226, 0, sizeof(struct sType*));
memset(&fun_name_227, 0, sizeof(char*));
memset(&calling_fun_228, 0, sizeof(_Bool));
memset(&check_code_232, 0, sizeof(char*));
memset(&var_type_233, 0, sizeof(struct sType*));
right_value282 = (void*)0;
memset(&result_type_234, 0, sizeof(struct sType*));
memset(&n_235, 0, sizeof(int));
right_value283 = (void*)0;
right_value284 = (void*)0;
memset(&i_236, 0, sizeof(int));
right_value285 = (void*)0;
right_value286 = (void*)0;
memset(&come_value_249, 0, sizeof(struct CVALUE*));
right_value287 = (void*)0;
right_value288 = (void*)0;
memset(&buf_250, 0, sizeof(struct buffer*));
right_value289 = (void*)0;
memset(&result_type2_251, 0, sizeof(struct sType*));
right_value290 = (void*)0;
memset(&o2_saved_252, 0, sizeof(struct list$1CVALUEph*));
memset(&it_255, 0, sizeof(struct CVALUE*));
right_value291 = (void*)0;
right_value292 = (void*)0;
memset(&i_258, 0, sizeof(int));
memset(&o2_saved_259, 0, sizeof(struct list$1sNodeph*));
memset(&it_260, 0, sizeof(struct sNode*));
right_value293 = (void*)0;
memset(&come_value_261, 0, sizeof(struct CVALUE*));
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
memset(&come_value_262, 0, sizeof(struct CVALUE*));
memset(&i_263, 0, sizeof(int));
right_value299 = (void*)0;
right_value300 = (void*)0;
memset(&buf_264, 0, sizeof(struct buffer*));
memset(&o2_saved_265, 0, sizeof(struct list$1CVALUEph*));
memset(&it_266, 0, sizeof(struct CVALUE*));
right_value301 = (void*)0;
right_value302 = (void*)0;
memset(&left_value_code_267, 0, sizeof(char*));
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
memset(&right_value_id_268, 0, sizeof(int));
right_value306 = (void*)0;
right_value307 = (void*)0;
right_value308 = (void*)0;
memset(&result_type_269, 0, sizeof(struct sType*));
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
    left_208=self->mLeft;
    right_209=self->mRight;
    array_num_nodes_210=self->mArrayNum;
    if(!node_compile(left_208,info)) {
        return (_Bool)0;
    }
    left_value_211=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value274=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value274,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    if(gComeDebug&&left_value_211->type->mPointerNum>0) {
        __dec_obj115=left_value_211->c_value;
        left_value_211->c_value=(char*)come_increment_ref_count(((char*)(right_value276=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value275=make_type_name_string(left_value_211->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_211->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_212=left_value_211->type;
    array_num_213=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value278=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value277=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 721, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value277,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value278,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_216=(array_num_nodes_210),it_219=list$1sNodeph_begin((o2_saved_216));    !list$1sNodeph_end((o2_saved_216));    it_219=list$1sNodeph_next((o2_saved_216))    ){
        if(!node_compile(it_219,info)) {
            __result139__ = (_Bool)0;
            come_call_finalizer3(left_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_213,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result139__;
        }
        c_value_222=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value279=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value279,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_213,(struct CVALUE*)come_increment_ref_count(c_value_222));
        come_call_finalizer3(c_value_222,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(!node_compile(right_209,info)) {
        __result140__ = (_Bool)0;
        come_call_finalizer3(left_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(array_num_213,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result140__;
    }
    right_value_223=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value280=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value280,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_type_224=right_value_223->type;
    klass_225=left_value_211->type->mClass;
    type_226=(struct sType*)come_increment_ref_count(((struct sType*)(right_value281=sType_clone(left_value_211->type))));
    come_call_finalizer3(right_value281,sType_finalize, 0, 1, 0, 0, (void*)0);
    fun_name_227="operator_store_element";
    if(self->mQuote) {
        calling_fun_228=(_Bool)0;
    }
    else {
        calling_fun_228=operator_overload_fun2(type_226,fun_name_227,left_value_211,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_213,0), "18field.c", 753, 9)),right_value_223,info);
    }
    if(!calling_fun_228) {
        __dec_obj116=check_code_232;
        check_code_232=((void*)0);
        __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(left_value_211->var&&left_value_211->var->mType&&list$1sNodeph_length(left_value_211->var->mType->mArrayNum)>0) {
            var_type_233=left_value_211->var->mType;
            result_type_234=(struct sType*)come_increment_ref_count(((struct sType*)(right_value282=sType_clone(left_type_212))));
            come_call_finalizer3(right_value282,sType_finalize, 0, 1, 0, 0, (void*)0);
            if(result_type_234->mOriginalLoadVarType->v1) {
                __dec_obj117=result_type_234;
                result_type_234=(struct sType*)come_increment_ref_count(result_type_234->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(list$1sNodeph_length(result_type_234->mArrayNum)>0) {
                n_235=list$1sNodeph_length(result_type_234->mArrayNum)-list$1CVALUEph_length(array_num_213);
                if(n_235==0) {
                    __dec_obj118=result_type_234;
                    result_type_234=(struct sType*)come_increment_ref_count(((struct sType*)(right_value283=sType_clone(left_type_212))));
                    come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value283,sType_finalize, 0, 1, 0, 0, (void*)0);
                    if(left_type_212->mOriginalLoadVarType->v1) {
                        __dec_obj119=result_type_234;
                        result_type_234=(struct sType*)come_increment_ref_count(((struct sType*)(right_value284=sType_clone(left_type_212->mOriginalLoadVarType->v1))));
                        come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value284,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    list$1sNodeph_reset(result_type_234->mArrayNum);
                }
                else {
                    if(n_235>0) {
                        for(                        i_236=0;                        i_236<n_235;                        i_236++                        ){
                            list$1sNodeph_delete(result_type_234->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        if(n_235<0) {
                            list$1sNodeph_reset(result_type_234->mArrayNum);
                            result_type_234->mPointerNum+=n_235;
                            if(result_type_234->mPointerNum<0) {
                                result_type_234->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                if(result_type_234->mPointerNum>0) {
                    result_type_234->mPointerNum-=list$1CVALUEph_length(array_num_213);
                    if(result_type_234->mPointerNum<0) {
                        result_type_234->mPointerNum=0;
                    }
                }
            }
            come_value_249=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value286=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value285=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 801, "CVALUE"))))))));
            come_call_finalizer3(right_value285,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(right_value286,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            buf_250=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value288=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value287=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 803, "buffer"))))))));
            come_call_finalizer3(right_value287,buffer_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(right_value288,buffer_finalize, 0, 1, 0, 0, (void*)0);
            result_type2_251=(struct sType*)come_increment_ref_count(((struct sType*)(right_value289=sType_clone(result_type_234))));
            come_call_finalizer3(right_value289,sType_finalize, 0, 1, 0, 0, (void*)0);
            result_type2_251->mPointerNum++;
            buffer_append_str(buf_250,((char*)(right_value290=xsprintf("come_range_check(&%s",left_value_211->c_value))));
            right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            for(            o2_saved_252=(struct list$1CVALUEph*)come_increment_ref_count((array_num_213)),it_255=list$1CVALUEph_begin((o2_saved_252));            !list$1CVALUEph_end((o2_saved_252));            it_255=list$1CVALUEph_next((o2_saved_252))            ){
                buffer_append_str(buf_250,((char*)(right_value291=xsprintf("[%s]",it_255->c_value))));
                right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_252,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_250,((char*)(right_value292=xsprintf(",%s,%s+(",left_value_211->c_value,left_value_211->c_value))));
            right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            i_258=0;
            for(            o2_saved_259=(struct list$1sNodeph*)come_increment_ref_count((var_type_233->mArrayNum)),it_260=list$1sNodeph_begin((o2_saved_259));            !list$1sNodeph_end((o2_saved_259));            it_260=list$1sNodeph_next((o2_saved_259))            ){
                if(!node_compile(it_260,info)) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                come_value_261=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value293=get_value_from_stack(-1,info))));
                come_call_finalizer3(right_value293,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                dec_stack_ptr(1,info);
                buffer_append_str(buf_250,((char*)(right_value294=xsprintf("%s",come_value_261->c_value))));
                right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(i_258!=list$1sNodeph_length(var_type_233->mArrayNum)-1) {
                    buffer_append_str(buf_250,"*");
                }
                i_258++;
                come_call_finalizer3(come_value_261,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_259,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_250,((char*)(right_value295=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj120=check_code_232;
            check_code_232=(char*)come_increment_ref_count(((char*)(right_value296=buffer_to_string(buf_250))));
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(result_type_234,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_249,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_250,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_251,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_262=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value298=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value297=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 835, "CVALUE"))))))));
        come_call_finalizer3(right_value297,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value298,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        if(list$1sNodeph_length(left_type_212->mArrayNum)>0) {
            for(            i_263=0;            i_263<list$1CVALUEph_length(array_num_213);            i_263++            ){
                list$1sNodeph_delete(left_type_212->mArrayNum,-1,-1);
            }
        }
        else {
            if(left_type_212->mPointerNum>0) {
                left_type_212->mPointerNum-=list$1CVALUEph_length(array_num_213);
                if(left_type_212->mPointerNum<0) {
                    left_type_212->mPointerNum=0;
                }
            }
        }
        buf_264=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value300=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value299=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 856, "buffer"))))))));
        come_call_finalizer3(right_value299,buffer_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value300,buffer_finalize, 0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_264,left_value_211->c_value);
        for(        o2_saved_265=(struct list$1CVALUEph*)come_increment_ref_count((array_num_213)),it_266=list$1CVALUEph_begin((o2_saved_265));        !list$1CVALUEph_end((o2_saved_265));        it_266=list$1CVALUEph_next((o2_saved_265))        ){
            buffer_append_str(buf_264,((char*)(right_value301=xsprintf("[%s]",it_266->c_value))));
            right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_265,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_267=(char*)come_increment_ref_count(((char*)(right_value302=buffer_to_string(buf_264))));
        right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        check_assign_type(((char*)(right_value303=xsprintf("array is assinged to"))),left_type_212,right_type_224,right_value_223,(_Bool)0,(_Bool)1,info);
        right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(left_type_212->mHeap&&right_type_224->mHeap&&left_type_212->mPointerNum>0&&right_type_224->mPointerNum>0) {
            if(left_value_211->type->mPointerNum>=1) {
                decrement_ref_count_object(left_type_212,left_value_code_267,info,(_Bool)0);
                std_move(left_type_212,right_type_224,right_value_223,info);
                __dec_obj121=come_value_262->c_value;
                come_value_262->c_value=(char*)come_increment_ref_count(((char*)(right_value304=xsprintf("%s=%s",left_value_code_267,right_value_223->c_value))));
                __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else {
                if(left_value_211->type->mPointerNum==0) {
                    decrement_ref_count_object(left_type_212,left_value_code_267,info,(_Bool)0);
                    std_move(left_type_212,right_type_224,right_value_223,info);
                    __dec_obj122=come_value_262->c_value;
                    come_value_262->c_value=(char*)come_increment_ref_count(((char*)(right_value305=xsprintf("%s=%s",left_value_code_267,right_value_223->c_value))));
                    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_267,left_value_211->type->mPointerNum);
                    __result151__ = (_Bool)0;
                    check_code_232 = come_decrement_ref_count2(check_code_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(buf_264,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    left_value_code_267 = come_decrement_ref_count2(left_value_code_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_213,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_223,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_226,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result151__;
                }
            }
            right_value_id_268=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_223->c_value));
            if(right_value_id_268!=-1) {
                remove_object_from_right_values(right_value_id_268,info);
            }
        }
        else {
            if(left_value_211->type->mPointerNum>=1) {
                __dec_obj123=come_value_262->c_value;
                come_value_262->c_value=(char*)come_increment_ref_count(((char*)(right_value306=xsprintf("%s=%s",left_value_code_267,right_value_223->c_value))));
                __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else {
                if(left_value_211->type->mPointerNum==0) {
                    __dec_obj124=come_value_262->c_value;
                    come_value_262->c_value=(char*)come_increment_ref_count(((char*)(right_value307=xsprintf("%s=%s",left_value_code_267,right_value_223->c_value))));
                    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_267,left_value_211->type->mPointerNum);
                    __result152__ = (_Bool)0;
                    check_code_232 = come_decrement_ref_count2(check_code_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(buf_264,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    left_value_code_267 = come_decrement_ref_count2(left_value_code_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_213,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_223,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_226,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result152__;
                }
            }
        }
        result_type_269=(struct sType*)come_increment_ref_count(((struct sType*)(right_value308=sType_clone(left_type_212))));
        come_call_finalizer3(right_value308,sType_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj125=result_type_269->mArrayNum;
        result_type_269->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value310=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value309=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 902, "list$1sNodeph"))))))));
        come_call_finalizer3(__dec_obj125,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value309,list$1sNodephp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value310,list$1sNodephp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj126=come_value_262->type;
        come_value_262->type=(struct sType*)come_increment_ref_count(result_type_269);
        come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_262->var=((void*)0);
        if(check_code_232&&gComeDebug) {
            __dec_obj127=come_value_262->c_value;
            come_value_262->c_value=(char*)come_increment_ref_count(((char*)(right_value311=xsprintf("(%s, %s)",check_code_232,come_value_262->c_value))));
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_262));
        add_come_last_code(info,"%s;\n",come_value_262->c_value);
        check_code_232 = come_decrement_ref_count2(check_code_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_264,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_267 = come_decrement_ref_count2(left_value_code_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_269,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result153__ = (_Bool)1;
    come_call_finalizer3(left_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_213,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_223,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_226,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result153__;
    come_call_finalizer3(left_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_213,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_223,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_226,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result132__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result132__;
        come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_214;
struct list_item$1CVALUEph* prev_it_215;
memset(&it_214, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_215, 0, sizeof(struct list_item$1CVALUEph*));
            it_214=self->head;
            while(it_214!=((void*)0)) {
                prev_it_215=it_214;
                it_214=it_214->next;
                come_call_finalizer3(prev_it_215,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_217;
struct sNode* __result133__;
struct sNode* __result134__;
struct sNode* result_218;
struct sNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_217, 0, sizeof(struct sNode*));
memset(&result_218, 0, sizeof(struct sNode*));
        if(self==((void*)0)) {
            memset(&result_217,0,sizeof(struct sNode*));
            __result133__ = __result_obj__ = result_217;
            return __result133__;
        }
        self->it=self->head;
        if(self->it) {
            __result134__ = __result_obj__ = self->it->item;
            return __result134__;
        }
        memset(&result_218,0,sizeof(struct sNode*));
        __result135__ = __result_obj__ = result_218;
        return __result135__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
        return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_220;
struct sNode* __result136__;
struct sNode* __result137__;
struct sNode* result_221;
struct sNode* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_220, 0, sizeof(struct sNode*));
memset(&result_221, 0, sizeof(struct sNode*));
        if(self==((void*)0)||self->it==((void*)0)) {
            memset(&result_220,0,sizeof(struct sNode*));
            __result136__ = __result_obj__ = result_220;
            return __result136__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result137__ = __result_obj__ = self->it->item;
            return __result137__;
        }
        memset(&result_221,0,sizeof(struct sNode*));
        __result138__ = __result_obj__ = result_221;
        return __result138__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
struct list_item$1CVALUEph* it_229;
int i_230;
struct CVALUE* __result141__;
struct CVALUE* default_value_231;
struct CVALUE* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_229, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_230, 0, sizeof(int));
memset(&default_value_231, 0, sizeof(struct CVALUE*));
            if(position<0) {
                position+=self->len;
            }
            it_229=self->head;
            i_230=0;
            while(it_229!=((void*)0)) {
                if(position==i_230) {
                    __result141__ = __result_obj__ = it_229->item;
                    return __result141__;
                }
                it_229=it_229->next;
                i_230++;
            }
            memset(&default_value_231,0,sizeof(struct CVALUE*));
            __result142__ = __result_obj__ = default_value_231;
            come_call_finalizer3(default_value_231,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result142__;
            come_call_finalizer3(default_value_231,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
                    if(self==((void*)0)) {
                        return 0;
                    }
                    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__;
int tmp_237;
struct list$1sNodeph* __result143__;
struct list_item$1sNodeph* it_238;
int i_239;
struct list_item$1sNodeph* prev_it_240;
struct list_item$1sNodeph* it_241;
int i_242;
struct list_item$1sNodeph* prev_it_243;
struct list_item$1sNodeph* it_244;
struct list_item$1sNodeph* head_prev_it_245;
struct list_item$1sNodeph* tail_it_246;
int i_247;
struct list_item$1sNodeph* prev_it_248;
struct list$1sNodeph* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_237, 0, sizeof(int));
memset(&it_238, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_239, 0, sizeof(int));
memset(&prev_it_240, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_241, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_242, 0, sizeof(int));
memset(&prev_it_243, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_244, 0, sizeof(struct list_item$1sNodeph*));
memset(&head_prev_it_245, 0, sizeof(struct list_item$1sNodeph*));
memset(&tail_it_246, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_247, 0, sizeof(int));
memset(&prev_it_248, 0, sizeof(struct list_item$1sNodeph*));
                                if(head<0) {
                                    head+=self->len;
                                }
                                if(tail<0) {
                                    tail+=self->len+1;
                                }
                                if(head>tail) {
                                    tmp_237=tail;
                                    tail=head;
                                    head=tmp_237;
                                }
                                if(head<0) {
                                    head=0;
                                }
                                if(tail>self->len) {
                                    tail=self->len;
                                }
                                if(head==tail) {
                                    __result143__ = __result_obj__ = self;
                                    return __result143__;
                                }
                                if(head==0&&tail==self->len) {
                                    list$1sNodeph_reset(self);
                                }
                                else {
                                    if(head==0) {
                                        it_238=self->head;
                                        i_239=0;
                                        while(it_238!=((void*)0)) {
                                            if(i_239<tail) {
                                                prev_it_240=it_238;
                                                it_238=it_238->next;
                                                i_239++;
                                                come_call_finalizer3(prev_it_240,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                self->len--;
                                            }
                                            else {
                                                if(i_239==tail) {
                                                    self->head=it_238;
                                                    self->head->prev=((void*)0);
                                                    break;
                                                }
                                                else {
                                                    it_238=it_238->next;
                                                    i_239++;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        if(tail==self->len) {
                                            it_241=self->head;
                                            i_242=0;
                                            while(it_241!=((void*)0)) {
                                                if(i_242==head) {
                                                    self->tail=it_241->prev;
                                                    self->tail->next=((void*)0);
                                                }
                                                if(i_242>=head) {
                                                    prev_it_243=it_241;
                                                    it_241=it_241->next;
                                                    i_242++;
                                                    come_call_finalizer3(prev_it_243,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    self->len--;
                                                }
                                                else {
                                                    it_241=it_241->next;
                                                    i_242++;
                                                }
                                            }
                                        }
                                        else {
                                            it_244=self->head;
                                            head_prev_it_245=((void*)0);
                                            tail_it_246=((void*)0);
                                            i_247=0;
                                            while(it_244!=((void*)0)) {
                                                if(i_247==head) {
                                                    head_prev_it_245=it_244->prev;
                                                }
                                                if(i_247==tail) {
                                                    tail_it_246=it_244;
                                                }
                                                if(i_247>=head&&i_247<tail) {
                                                    prev_it_248=it_244;
                                                    it_244=it_244->next;
                                                    i_247++;
                                                    come_call_finalizer3(prev_it_248,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                    self->len--;
                                                }
                                                else {
                                                    it_244=it_244->next;
                                                    i_247++;
                                                }
                                            }
                                            if(head_prev_it_245!=((void*)0)) {
                                                head_prev_it_245->next=tail_it_246;
                                            }
                                            if(tail_it_246!=((void*)0)) {
                                                tail_it_246->prev=head_prev_it_245;
                                            }
                                        }
                                    }
                                }
                                __result144__ = __result_obj__ = self;
                                return __result144__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
struct CVALUE* result_253;
struct CVALUE* __result145__;
struct CVALUE* __result146__;
struct CVALUE* result_254;
struct CVALUE* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_253, 0, sizeof(struct CVALUE*));
memset(&result_254, 0, sizeof(struct CVALUE*));
                if(self==((void*)0)) {
                    memset(&result_253,0,sizeof(struct CVALUE*));
                    __result145__ = __result_obj__ = result_253;
                    return __result145__;
                }
                self->it=self->head;
                if(self->it) {
                    __result146__ = __result_obj__ = self->it->item;
                    return __result146__;
                }
                memset(&result_254,0,sizeof(struct CVALUE*));
                __result147__ = __result_obj__ = result_254;
                return __result147__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
                return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
struct CVALUE* result_256;
struct CVALUE* __result148__;
struct CVALUE* __result149__;
struct CVALUE* result_257;
struct CVALUE* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_256, 0, sizeof(struct CVALUE*));
memset(&result_257, 0, sizeof(struct CVALUE*));
                if(self==((void*)0)||self->it==((void*)0)) {
                    memset(&result_256,0,sizeof(struct CVALUE*));
                    __result148__ = __result_obj__ = result_256;
                    return __result148__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result149__ = __result_obj__ = self->it->item;
                    return __result149__;
                }
                memset(&result_257,0,sizeof(struct CVALUE*));
                __result150__ = __result_obj__ = result_257;
                return __result150__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __result_obj__;
void* right_value312;
void* right_value313;
struct list$1sNodeph* __dec_obj128;
void* right_value314;
struct sNode* __dec_obj129;
struct sLoadArrayNode* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
    ((struct sNodeBase*)(right_value312=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value312,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj128=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value313=list$1sNodephp_clone(array_num))));
    come_call_finalizer3(__dec_obj128,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value313,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    self->mBreakGuard=break_guard;
    __dec_obj129=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value314=sNode_clone(left))));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value314) { right_value314 = come_decrement_ref_count2(right_value314, ((struct sNode*)right_value314)->finalize, ((struct sNode*)right_value314)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result154__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result154__;
    come_call_finalizer3(self,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

char* sLoadArrayNode_kind(struct sLoadArrayNode* self){
void* __result_obj__;
void* right_value315;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
right_value315 = (void*)0;
    __result155__ = __result_obj__ = ((char*)(right_value315=__builtin_string("sLoadArrayNode")));
    right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result155__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
struct sNode* left_270;
struct list$1sNodeph* array_num_nodes_271;
void* right_value316;
struct CVALUE* left_value_272;
void* right_value317;
void* right_value318;
char* __dec_obj130;
void* right_value319;
struct sType* left_type_273;
void* right_value320;
void* right_value321;
struct list$1CVALUEph* array_num_274;
struct list$1sNodeph* o2_saved_275;
struct sNode* it_276;
_Bool __result156__;
void* right_value322;
struct CVALUE* c_value_277;
void* right_value323;
struct sType* type_278;
char* fun_name_279;
_Bool calling_fun_280;
struct sType* var_type_281;
void* right_value324;
struct sType* result_type_282;
struct sType* __dec_obj131;
int n_283;
void* right_value325;
struct sType* __dec_obj132;
void* right_value326;
struct sType* __dec_obj133;
int i_284;
void* right_value327;
void* right_value328;
struct CVALUE* come_value_285;
void* right_value329;
void* right_value330;
struct buffer* buf_286;
void* right_value331;
struct sType* result_type2_287;
void* right_value332;
void* right_value333;
struct list$1CVALUEph* o2_saved_288;
struct CVALUE* it_289;
void* right_value334;
void* right_value335;
int i_290;
struct list$1sNodeph* o2_saved_291;
struct sNode* it_292;
void* right_value336;
struct CVALUE* come_value_293;
void* right_value337;
void* right_value338;
void* right_value339;
char* left_value_code_294;
void* right_value340;
char* __dec_obj134;
void* right_value341;
struct sType* __dec_obj135;
void* right_value342;
void* right_value343;
struct CVALUE* come_value_295;
void* right_value344;
void* right_value345;
struct buffer* buf_296;
struct list$1CVALUEph* o2_saved_297;
struct CVALUE* it_298;
void* right_value346;
void* right_value347;
char* left_value_code_299;
void* right_value348;
char* __dec_obj136;
void* right_value349;
struct sType* result_type_300;
struct sType* __dec_obj137;
int n_301;
void* right_value350;
struct sType* __dec_obj138;
void* right_value351;
struct sType* __dec_obj139;
int i_302;
void* right_value352;
struct sType* __dec_obj140;
_Bool __result157__;
memset(&left_270, 0, sizeof(struct sNode*));
memset(&array_num_nodes_271, 0, sizeof(struct list$1sNodeph*));
right_value316 = (void*)0;
memset(&left_value_272, 0, sizeof(struct CVALUE*));
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value319 = (void*)0;
memset(&left_type_273, 0, sizeof(struct sType*));
right_value320 = (void*)0;
right_value321 = (void*)0;
memset(&array_num_274, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_275, 0, sizeof(struct list$1sNodeph*));
memset(&it_276, 0, sizeof(struct sNode*));
right_value322 = (void*)0;
memset(&c_value_277, 0, sizeof(struct CVALUE*));
right_value323 = (void*)0;
memset(&type_278, 0, sizeof(struct sType*));
memset(&fun_name_279, 0, sizeof(char*));
memset(&calling_fun_280, 0, sizeof(_Bool));
memset(&var_type_281, 0, sizeof(struct sType*));
right_value324 = (void*)0;
memset(&result_type_282, 0, sizeof(struct sType*));
memset(&n_283, 0, sizeof(int));
right_value325 = (void*)0;
right_value326 = (void*)0;
memset(&i_284, 0, sizeof(int));
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&come_value_285, 0, sizeof(struct CVALUE*));
right_value329 = (void*)0;
right_value330 = (void*)0;
memset(&buf_286, 0, sizeof(struct buffer*));
right_value331 = (void*)0;
memset(&result_type2_287, 0, sizeof(struct sType*));
right_value332 = (void*)0;
right_value333 = (void*)0;
memset(&o2_saved_288, 0, sizeof(struct list$1CVALUEph*));
memset(&it_289, 0, sizeof(struct CVALUE*));
right_value334 = (void*)0;
right_value335 = (void*)0;
memset(&i_290, 0, sizeof(int));
memset(&o2_saved_291, 0, sizeof(struct list$1sNodeph*));
memset(&it_292, 0, sizeof(struct sNode*));
right_value336 = (void*)0;
memset(&come_value_293, 0, sizeof(struct CVALUE*));
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
memset(&left_value_code_294, 0, sizeof(char*));
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
right_value343 = (void*)0;
memset(&come_value_295, 0, sizeof(struct CVALUE*));
right_value344 = (void*)0;
right_value345 = (void*)0;
memset(&buf_296, 0, sizeof(struct buffer*));
memset(&o2_saved_297, 0, sizeof(struct list$1CVALUEph*));
memset(&it_298, 0, sizeof(struct CVALUE*));
right_value346 = (void*)0;
right_value347 = (void*)0;
memset(&left_value_code_299, 0, sizeof(char*));
right_value348 = (void*)0;
right_value349 = (void*)0;
memset(&result_type_300, 0, sizeof(struct sType*));
memset(&n_301, 0, sizeof(int));
right_value350 = (void*)0;
right_value351 = (void*)0;
memset(&i_302, 0, sizeof(int));
right_value352 = (void*)0;
    left_270=self->mLeft;
    array_num_nodes_271=self->mArrayNum;
    if(!node_compile(left_270,info)) {
        return (_Bool)0;
    }
    left_value_272=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value316=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value316,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    if(gComeDebug&&left_value_272->type->mPointerNum>0&&!self->mBreakGuard) {
        __dec_obj130=left_value_272->c_value;
        left_value_272->c_value=(char*)come_increment_ref_count(((char*)(right_value318=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value317=make_type_name_string(left_value_272->type,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_272->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value318 = come_decrement_ref_count2(right_value318, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_273=(struct sType*)come_increment_ref_count(((struct sType*)(right_value319=sType_clone(left_value_272->type))));
    come_call_finalizer3(right_value319,sType_finalize, 0, 1, 0, 0, (void*)0);
    array_num_274=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value321=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value320=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 955, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value320,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value321,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_275=(array_num_nodes_271),it_276=list$1sNodeph_begin((o2_saved_275));    !list$1sNodeph_end((o2_saved_275));    it_276=list$1sNodeph_next((o2_saved_275))    ){
        if(!node_compile(it_276,info)) {
            __result156__ = (_Bool)0;
            come_call_finalizer3(left_value_272,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_273,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_274,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result156__;
        }
        c_value_277=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value322=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value322,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_274,(struct CVALUE*)come_increment_ref_count(c_value_277));
        come_call_finalizer3(c_value_277,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_278=(struct sType*)come_increment_ref_count(((struct sType*)(right_value323=sType_clone(left_value_272->type))));
    come_call_finalizer3(right_value323,sType_finalize, 0, 1, 0, 0, (void*)0);
    fun_name_279="operator_load_element";
    if(self->mQuote) {
        calling_fun_280=(_Bool)0;
    }
    else {
        calling_fun_280=operator_overload_fun(type_278,fun_name_279,left_value_272,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_274,0), "18field.c", 976, 10)),self->mBreakGuard,info);
    }
    if(!calling_fun_280) {
        if(gComeDebug&&left_value_272->var&&left_value_272->var->mType&&list$1sNodeph_length(left_value_272->var->mType->mArrayNum)>0) {
            var_type_281=left_value_272->var->mType;
            result_type_282=(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=sType_clone(left_type_273))));
            come_call_finalizer3(right_value324,sType_finalize, 0, 1, 0, 0, (void*)0);
            if(result_type_282->mOriginalLoadVarType->v1) {
                __dec_obj131=result_type_282;
                result_type_282=(struct sType*)come_increment_ref_count(result_type_282->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(list$1sNodeph_length(result_type_282->mArrayNum)>0) {
                n_283=list$1sNodeph_length(result_type_282->mArrayNum)-list$1CVALUEph_length(array_num_274);
                if(n_283==0) {
                    __dec_obj132=result_type_282;
                    result_type_282=(struct sType*)come_increment_ref_count(((struct sType*)(right_value325=sType_clone(left_type_273))));
                    come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value325,sType_finalize, 0, 1, 0, 0, (void*)0);
                    if(left_type_273->mOriginalLoadVarType->v1) {
                        __dec_obj133=result_type_282;
                        result_type_282=(struct sType*)come_increment_ref_count(((struct sType*)(right_value326=sType_clone(left_type_273->mOriginalLoadVarType->v1))));
                        come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value326,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    list$1sNodeph_reset(result_type_282->mArrayNum);
                }
                else {
                    if(n_283>0) {
                        for(                        i_284=0;                        i_284<n_283;                        i_284++                        ){
                            list$1sNodeph_delete(result_type_282->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        if(n_283<0) {
                            list$1sNodeph_reset(result_type_282->mArrayNum);
                            result_type_282->mPointerNum+=n_283;
                            if(result_type_282->mPointerNum<0) {
                                result_type_282->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                if(result_type_282->mPointerNum>0) {
                    result_type_282->mPointerNum-=list$1CVALUEph_length(array_num_274);
                    if(result_type_282->mPointerNum<0) {
                        result_type_282->mPointerNum=0;
                    }
                }
            }
            come_value_285=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value328=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value327=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1023, "CVALUE"))))))));
            come_call_finalizer3(right_value327,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(right_value328,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            buf_286=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value330=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value329=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1025, "buffer"))))))));
            come_call_finalizer3(right_value329,buffer_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(right_value330,buffer_finalize, 0, 1, 0, 0, (void*)0);
            result_type2_287=(struct sType*)come_increment_ref_count(((struct sType*)(right_value331=sType_clone(result_type_282))));
            come_call_finalizer3(right_value331,sType_finalize, 0, 1, 0, 0, (void*)0);
            result_type2_287->mPointerNum++;
            buffer_append_str(buf_286,((char*)(right_value333=xsprintf("*(%s)come_range_check(&%s",((char*)(right_value332=make_type_name_string(result_type2_287,(_Bool)0,(_Bool)0,(_Bool)0,info))),left_value_272->c_value))));
            right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            for(            o2_saved_288=(struct list$1CVALUEph*)come_increment_ref_count((array_num_274)),it_289=list$1CVALUEph_begin((o2_saved_288));            !list$1CVALUEph_end((o2_saved_288));            it_289=list$1CVALUEph_next((o2_saved_288))            ){
                buffer_append_str(buf_286,((char*)(right_value334=xsprintf("[%s]",it_289->c_value))));
                right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_288,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_286,((char*)(right_value335=xsprintf(",%s,%s+(",left_value_272->c_value,left_value_272->c_value))));
            right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            i_290=0;
            for(            o2_saved_291=(struct list$1sNodeph*)come_increment_ref_count((var_type_281->mArrayNum)),it_292=list$1sNodeph_begin((o2_saved_291));            !list$1sNodeph_end((o2_saved_291));            it_292=list$1sNodeph_next((o2_saved_291))            ){
                if(!node_compile(it_292,info)) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                come_value_293=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value336=get_value_from_stack(-1,info))));
                come_call_finalizer3(right_value336,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                dec_stack_ptr(1,info);
                buffer_append_str(buf_286,((char*)(right_value337=xsprintf("%s",come_value_293->c_value))));
                right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(i_290!=list$1sNodeph_length(var_type_281->mArrayNum)-1) {
                    buffer_append_str(buf_286,"*");
                }
                i_290++;
                come_call_finalizer3(come_value_293,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_291,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_286,((char*)(right_value338=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            left_value_code_294=(char*)come_increment_ref_count(((char*)(right_value339=buffer_to_string(buf_286))));
            right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj134=come_value_285->c_value;
            come_value_285->c_value=(char*)come_increment_ref_count(((char*)(right_value340=xsprintf("%s",left_value_code_294))));
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj135=come_value_285->type;
            come_value_285->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value341=sType_clone(result_type_282))));
            come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value341,sType_finalize, 0, 1, 0, 0, (void*)0);
            come_value_285->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_285));
            add_come_last_code(info,"%s;\n",come_value_285->c_value);
            come_call_finalizer3(result_type_282,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_285,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_286,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_287,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_294 = come_decrement_ref_count2(left_value_code_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_295=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value343=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value342=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1069, "CVALUE"))))))));
            come_call_finalizer3(right_value342,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(right_value343,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            buf_296=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value345=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value344=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1071, "buffer"))))))));
            come_call_finalizer3(right_value344,buffer_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(right_value345,buffer_finalize, 0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_296,left_value_272->c_value);
            for(            o2_saved_297=(struct list$1CVALUEph*)come_increment_ref_count((array_num_274)),it_298=list$1CVALUEph_begin((o2_saved_297));            !list$1CVALUEph_end((o2_saved_297));            it_298=list$1CVALUEph_next((o2_saved_297))            ){
                buffer_append_str(buf_296,((char*)(right_value346=xsprintf("[%s]",it_298->c_value))));
                right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_297,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_299=(char*)come_increment_ref_count(((char*)(right_value347=buffer_to_string(buf_296))));
            right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj136=come_value_295->c_value;
            come_value_295->c_value=(char*)come_increment_ref_count(((char*)(right_value348=xsprintf("%s",left_value_code_299))));
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            result_type_300=(struct sType*)come_increment_ref_count(((struct sType*)(right_value349=sType_clone(left_type_273))));
            come_call_finalizer3(right_value349,sType_finalize, 0, 1, 0, 0, (void*)0);
            if(result_type_300->mOriginalLoadVarType->v1) {
                __dec_obj137=result_type_300;
                result_type_300=(struct sType*)come_increment_ref_count(result_type_300->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(list$1sNodeph_length(result_type_300->mArrayNum)>0) {
                n_301=list$1sNodeph_length(result_type_300->mArrayNum)-list$1CVALUEph_length(array_num_274);
                if(n_301==0) {
                    __dec_obj138=result_type_300;
                    result_type_300=(struct sType*)come_increment_ref_count(((struct sType*)(right_value350=sType_clone(left_type_273))));
                    come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value350,sType_finalize, 0, 1, 0, 0, (void*)0);
                    if(left_type_273->mOriginalLoadVarType->v1) {
                        __dec_obj139=result_type_300;
                        result_type_300=(struct sType*)come_increment_ref_count(((struct sType*)(right_value351=sType_clone(left_type_273->mOriginalLoadVarType->v1))));
                        come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value351,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    list$1sNodeph_reset(result_type_300->mArrayNum);
                }
                else {
                    if(n_301>0) {
                        for(                        i_302=0;                        i_302<n_301;                        i_302++                        ){
                            list$1sNodeph_delete(result_type_300->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        if(n_301<0) {
                            list$1sNodeph_reset(result_type_300->mArrayNum);
                            result_type_300->mPointerNum+=n_301;
                            if(result_type_300->mPointerNum<0) {
                                result_type_300->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                if(result_type_300->mPointerNum>0) {
                    result_type_300->mPointerNum-=list$1CVALUEph_length(array_num_274);
                    if(result_type_300->mPointerNum<0) {
                        result_type_300->mPointerNum=0;
                    }
                }
            }
            __dec_obj140=come_value_295->type;
            come_value_295->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value352=sType_clone(result_type_300))));
            come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value352,sType_finalize, 0, 1, 0, 0, (void*)0);
            come_value_295->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_295));
            add_come_last_code(info,"%s;\n",come_value_295->c_value);
            come_call_finalizer3(come_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_296,buffer_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_299 = come_decrement_ref_count2(left_value_code_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_300,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result157__ = (_Bool)1;
    come_call_finalizer3(left_value_272,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_273,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_274,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_278,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result157__;
    come_call_finalizer3(left_value_272,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_273,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_274,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_278,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value353;
void* right_value354;
struct list$1sNodeph* __dec_obj141;
void* right_value355;
struct sNode* __dec_obj142;
struct sLoadRangeArrayNode* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
    ((struct sNodeBase*)(right_value353=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value353,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj141=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value354=list$1sNodephp_clone(array_num))));
    come_call_finalizer3(__dec_obj141,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value354,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj142=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value355=sNode_clone(left))));
    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value355) { right_value355 = come_decrement_ref_count2(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result158__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result158__;
    come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self){
void* __result_obj__;
void* right_value356;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value356 = (void*)0;
    __result159__ = __result_obj__ = ((char*)(right_value356=__builtin_string("sLoadRangeArrayNode")));
    right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result159__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
struct sNode* left_303;
struct list$1sNodeph* array_num_nodes_304;
void* right_value357;
struct CVALUE* left_value_305;
void* right_value358;
struct sType* left_type_306;
void* right_value359;
void* right_value360;
struct list$1CVALUEph* array_num_307;
struct list$1sNodeph* o2_saved_308;
struct sNode* it_309;
_Bool __result160__;
void* right_value361;
struct CVALUE* c_value_310;
void* right_value362;
struct sType* type_311;
char* fun_name_312;
_Bool calling_fun_313;
void* right_value363;
void* right_value364;
struct CVALUE* come_value_314;
void* right_value365;
void* right_value366;
struct buffer* buf_315;
struct list$1CVALUEph* o2_saved_316;
struct CVALUE* it_317;
void* right_value367;
void* right_value368;
char* left_value_code_318;
void* right_value369;
char* __dec_obj143;
void* right_value370;
struct sType* result_type_319;
struct sType* __dec_obj144;
int n_320;
void* right_value371;
struct sType* __dec_obj145;
void* right_value372;
struct sType* __dec_obj146;
int i_321;
void* right_value373;
struct sType* __dec_obj147;
_Bool __result161__;
memset(&left_303, 0, sizeof(struct sNode*));
memset(&array_num_nodes_304, 0, sizeof(struct list$1sNodeph*));
right_value357 = (void*)0;
memset(&left_value_305, 0, sizeof(struct CVALUE*));
right_value358 = (void*)0;
memset(&left_type_306, 0, sizeof(struct sType*));
right_value359 = (void*)0;
right_value360 = (void*)0;
memset(&array_num_307, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_308, 0, sizeof(struct list$1sNodeph*));
memset(&it_309, 0, sizeof(struct sNode*));
right_value361 = (void*)0;
memset(&c_value_310, 0, sizeof(struct CVALUE*));
right_value362 = (void*)0;
memset(&type_311, 0, sizeof(struct sType*));
memset(&fun_name_312, 0, sizeof(char*));
memset(&calling_fun_313, 0, sizeof(_Bool));
right_value363 = (void*)0;
right_value364 = (void*)0;
memset(&come_value_314, 0, sizeof(struct CVALUE*));
right_value365 = (void*)0;
right_value366 = (void*)0;
memset(&buf_315, 0, sizeof(struct buffer*));
memset(&o2_saved_316, 0, sizeof(struct list$1CVALUEph*));
memset(&it_317, 0, sizeof(struct CVALUE*));
right_value367 = (void*)0;
right_value368 = (void*)0;
memset(&left_value_code_318, 0, sizeof(char*));
right_value369 = (void*)0;
right_value370 = (void*)0;
memset(&result_type_319, 0, sizeof(struct sType*));
memset(&n_320, 0, sizeof(int));
right_value371 = (void*)0;
right_value372 = (void*)0;
memset(&i_321, 0, sizeof(int));
right_value373 = (void*)0;
    left_303=self->mLeft;
    array_num_nodes_304=self->mArrayNum;
    if(!node_compile(left_303,info)) {
        return (_Bool)0;
    }
    left_value_305=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value357=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value357,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    left_type_306=(struct sType*)come_increment_ref_count(((struct sType*)(right_value358=sType_clone(left_value_305->type))));
    come_call_finalizer3(right_value358,sType_finalize, 0, 1, 0, 0, (void*)0);
    array_num_307=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value360=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value359=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1167, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value359,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value360,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_308=(array_num_nodes_304),it_309=list$1sNodeph_begin((o2_saved_308));    !list$1sNodeph_end((o2_saved_308));    it_309=list$1sNodeph_next((o2_saved_308))    ){
        if(!node_compile(it_309,info)) {
            __result160__ = (_Bool)0;
            come_call_finalizer3(left_value_305,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_306,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_307,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result160__;
        }
        c_value_310=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value361=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value361,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_307,(struct CVALUE*)come_increment_ref_count(c_value_310));
        come_call_finalizer3(c_value_310,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_311=(struct sType*)come_increment_ref_count(((struct sType*)(right_value362=sType_clone(left_value_305->type))));
    come_call_finalizer3(right_value362,sType_finalize, 0, 1, 0, 0, (void*)0);
    fun_name_312="operator_load_range_element";
    if(self->mQuote) {
        calling_fun_313=(_Bool)0;
    }
    else {
        calling_fun_313=operator_overload_fun2(type_311,fun_name_312,left_value_305,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_307,0), "18field.c", 1188, 11)),((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_307,1), "18field.c", 1188, 12)),info);
    }
    if(!calling_fun_313) {
        come_value_314=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value364=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value363=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1192, "CVALUE"))))))));
        come_call_finalizer3(right_value363,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value364,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        buf_315=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value366=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value365=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1194, "buffer"))))))));
        come_call_finalizer3(right_value365,buffer_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value366,buffer_finalize, 0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_315,left_value_305->c_value);
        for(        o2_saved_316=(struct list$1CVALUEph*)come_increment_ref_count((array_num_307)),it_317=list$1CVALUEph_begin((o2_saved_316));        !list$1CVALUEph_end((o2_saved_316));        it_317=list$1CVALUEph_next((o2_saved_316))        ){
            buffer_append_str(buf_315,((char*)(right_value367=xsprintf("[%s]",it_317->c_value))));
            right_value367 = come_decrement_ref_count2(right_value367, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_316,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_318=(char*)come_increment_ref_count(((char*)(right_value368=buffer_to_string(buf_315))));
        right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj143=come_value_314->c_value;
        come_value_314->c_value=(char*)come_increment_ref_count(((char*)(right_value369=xsprintf("%s",left_value_code_318))));
        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value369 = come_decrement_ref_count2(right_value369, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_319=(struct sType*)come_increment_ref_count(((struct sType*)(right_value370=sType_clone(left_type_306))));
        come_call_finalizer3(right_value370,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(result_type_319->mOriginalLoadVarType->v1) {
            __dec_obj144=result_type_319;
            result_type_319=(struct sType*)come_increment_ref_count(result_type_319->mOriginalLoadVarType->v1);
            come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(list$1sNodeph_length(result_type_319->mArrayNum)>0) {
            n_320=list$1sNodeph_length(result_type_319->mArrayNum)-list$1CVALUEph_length(array_num_307);
            if(n_320==0) {
                __dec_obj145=result_type_319;
                result_type_319=(struct sType*)come_increment_ref_count(((struct sType*)(right_value371=sType_clone(left_type_306))));
                come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value371,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(left_type_306->mOriginalLoadVarType->v1) {
                    __dec_obj146=result_type_319;
                    result_type_319=(struct sType*)come_increment_ref_count(((struct sType*)(right_value372=sType_clone(left_type_306->mOriginalLoadVarType->v1))));
                    come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value372,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1sNodeph_reset(result_type_319->mArrayNum);
            }
            else {
                if(n_320>0) {
                    for(                    i_321=0;                    i_321<n_320;                    i_321++                    ){
                        list$1sNodeph_delete(result_type_319->mArrayNum,-1,-1);
                    }
                }
                else {
                    if(n_320<0) {
                        list$1sNodeph_reset(result_type_319->mArrayNum);
                        result_type_319->mPointerNum+=n_320;
                        if(result_type_319->mPointerNum<0) {
                            result_type_319->mPointerNum=0;
                        }
                    }
                }
            }
        }
        else {
            if(result_type_319->mPointerNum>0) {
                result_type_319->mPointerNum-=list$1CVALUEph_length(array_num_307);
                if(result_type_319->mPointerNum<0) {
                    result_type_319->mPointerNum=0;
                }
            }
        }
        __dec_obj147=come_value_314->type;
        come_value_314->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value373=sType_clone(result_type_319))));
        come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value373,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_314->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_314));
        add_come_last_code(info,"%s;\n",come_value_314->c_value);
        come_call_finalizer3(come_value_314,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_315,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_318 = come_decrement_ref_count2(left_value_code_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_319,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result161__ = (_Bool)1;
    come_call_finalizer3(left_value_305,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_306,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_307,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_311,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result161__;
    come_call_finalizer3(left_value_305,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_306,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_307,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_311,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
struct sNode* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    err_msg(info,"parse_method_call is failed");
    exit(2);
    __result162__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result162__;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* right_value374;
void* right_value375;
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* right_value381;
struct sNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value381 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1268, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStoreFieldNode*)(right_value375=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value374=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1268, "sStoreFieldNode")))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value1->clone=(void*)sStoreFieldNode_clone;
    _inf_value1->compile=(void*)sStoreFieldNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreFieldNode_kind;
    __result165__ = __result_obj__ = ((struct sNode*)(right_value381=_inf_value1));
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(right_value374,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value375,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value381) { right_value381 = come_decrement_ref_count2(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result165__;
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool range_array_323;
char* p_324;
int sline_325;
_Bool no_comma_326;
_Bool no_output_err_327;
_Bool no_output_come_code_328;
void* right_value382;
struct sNode* exp_329;
_Bool quote_330;
void* right_value383;
void* right_value384;
struct list$1sNodeph* array_num_331;
void* right_value385;
struct sNode* node2_332;
void* right_value389;
struct sNode* node3_336;
void* right_value390;
void* right_value391;
struct sNode* _inf_value2;
struct sLoadRangeArrayNode* _inf_obj_value2;
void* right_value396;
struct sNode* __dec_obj158;
_Bool quote_338;
_Bool range_339;
void* right_value397;
void* right_value398;
struct list$1sNodeph* array_num_340;
_Bool range_array2_341;
char* p_342;
int sline_343;
_Bool no_comma_344;
_Bool no_output_err_345;
_Bool no_output_come_code_346;
void* right_value399;
struct sNode* exp_347;
void* right_value400;
struct sNode* node2_348;
_Bool break_guard_349;
void* right_value401;
struct sNode* right_node_350;
void* right_value402;
void* right_value403;
struct sNode* _inf_value3;
struct sStoreArrayNode* _inf_obj_value3;
void* right_value409;
struct sNode* __dec_obj163;
void* right_value410;
void* right_value411;
struct sNode* _inf_value4;
struct sLoadArrayNode* _inf_obj_value4;
void* right_value416;
struct sNode* __dec_obj167;
_Bool no_comma_353;
void* right_value417;
struct sNode* begin_354;
void* right_value418;
struct sNode* end_355;
void* right_value419;
void* right_value420;
struct sNode* _inf_value5;
struct sRangeCheckNode* _inf_obj_value5;
void* right_value426;
struct sNode* __dec_obj172;
void* right_value427;
void* right_value428;
struct sNode* _inf_value6;
struct sNullCheckNode* _inf_obj_value6;
void* right_value432;
struct sNode* __dec_obj175;
void* right_value433;
void* right_value434;
struct sNode* _inf_value7;
struct sNullableNode* _inf_obj_value7;
void* right_value438;
struct sNode* __dec_obj178;
void* right_value439;
void* right_value440;
void* right_value441;
struct sNode* _inf_value8;
struct sNullCheckNode* _inf_obj_value8;
void* right_value445;
struct sNode* __dec_obj181;
void* right_value446;
char* field_name_360;
_Bool parse_method_generics_type_361;
char* p_362;
int sline_363;
void* right_value447;
char* word_364;
void* right_value448;
struct sNode* right_node_365;
void* right_value449;
void* right_value450;
struct sNode* _inf_value9;
struct sStoreFieldNode* _inf_obj_value9;
void* right_value456;
struct sNode* __dec_obj186;
void* right_value457;
void* right_value458;
struct sNode* __dec_obj187;
void* right_value459;
void* right_value460;
struct sNode* __dec_obj188;
void* right_value461;
void* right_value462;
struct sNode* __dec_obj189;
void* right_value463;
void* right_value464;
struct sNode* _inf_value10;
struct sLoadFieldNode* _inf_obj_value10;
void* right_value469;
struct sNode* __dec_obj193;
void* right_value470;
struct sNode* node2_368;
struct sNode* __dec_obj194;
struct sNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&range_array_323, 0, sizeof(_Bool));
memset(&p_324, 0, sizeof(char*));
memset(&sline_325, 0, sizeof(int));
memset(&no_comma_326, 0, sizeof(_Bool));
memset(&no_output_err_327, 0, sizeof(_Bool));
memset(&no_output_come_code_328, 0, sizeof(_Bool));
right_value382 = (void*)0;
memset(&exp_329, 0, sizeof(struct sNode*));
memset(&quote_330, 0, sizeof(_Bool));
right_value383 = (void*)0;
right_value384 = (void*)0;
memset(&array_num_331, 0, sizeof(struct list$1sNodeph*));
right_value385 = (void*)0;
memset(&node2_332, 0, sizeof(struct sNode*));
right_value389 = (void*)0;
memset(&node3_336, 0, sizeof(struct sNode*));
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value396 = (void*)0;
memset(&quote_338, 0, sizeof(_Bool));
memset(&range_339, 0, sizeof(_Bool));
right_value397 = (void*)0;
right_value398 = (void*)0;
memset(&array_num_340, 0, sizeof(struct list$1sNodeph*));
memset(&range_array2_341, 0, sizeof(_Bool));
memset(&p_342, 0, sizeof(char*));
memset(&sline_343, 0, sizeof(int));
memset(&no_comma_344, 0, sizeof(_Bool));
memset(&no_output_err_345, 0, sizeof(_Bool));
memset(&no_output_come_code_346, 0, sizeof(_Bool));
right_value399 = (void*)0;
memset(&exp_347, 0, sizeof(struct sNode*));
right_value400 = (void*)0;
memset(&node2_348, 0, sizeof(struct sNode*));
memset(&break_guard_349, 0, sizeof(_Bool));
right_value401 = (void*)0;
memset(&right_node_350, 0, sizeof(struct sNode*));
right_value402 = (void*)0;
right_value403 = (void*)0;
right_value409 = (void*)0;
right_value410 = (void*)0;
right_value411 = (void*)0;
right_value416 = (void*)0;
memset(&no_comma_353, 0, sizeof(_Bool));
right_value417 = (void*)0;
memset(&begin_354, 0, sizeof(struct sNode*));
right_value418 = (void*)0;
memset(&end_355, 0, sizeof(struct sNode*));
right_value419 = (void*)0;
right_value420 = (void*)0;
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value428 = (void*)0;
right_value432 = (void*)0;
right_value433 = (void*)0;
right_value434 = (void*)0;
right_value438 = (void*)0;
right_value439 = (void*)0;
right_value440 = (void*)0;
right_value441 = (void*)0;
right_value445 = (void*)0;
right_value446 = (void*)0;
memset(&field_name_360, 0, sizeof(char*));
memset(&parse_method_generics_type_361, 0, sizeof(_Bool));
memset(&p_362, 0, sizeof(char*));
memset(&sline_363, 0, sizeof(int));
right_value447 = (void*)0;
memset(&word_364, 0, sizeof(char*));
right_value448 = (void*)0;
memset(&right_node_365, 0, sizeof(struct sNode*));
right_value449 = (void*)0;
right_value450 = (void*)0;
right_value456 = (void*)0;
right_value457 = (void*)0;
right_value458 = (void*)0;
right_value459 = (void*)0;
right_value460 = (void*)0;
right_value461 = (void*)0;
right_value462 = (void*)0;
right_value463 = (void*)0;
right_value464 = (void*)0;
right_value469 = (void*)0;
right_value470 = (void*)0;
memset(&node2_368, 0, sizeof(struct sNode*));
    while((_Bool)1) {
        range_array_323=(_Bool)0;
        {
            p_324=info->p;
            sline_325=info->sline;
            if(*info->p==91) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_326=info->no_comma;
                no_output_err_327=info->no_output_err;
                no_output_come_code_328=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value382=expression_v13(info))));
                if(right_value382) { right_value382 = come_decrement_ref_count2(right_value382, ((struct sNode*)right_value382)->finalize, ((struct sNode*)right_value382)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_comma=no_comma_326;
                info->no_output_err=no_output_err_327;
                info->no_output_come_code=no_output_come_code_328;
                if(*info->p==46&&*(info->p+1)==46) {
                    range_array_323=(_Bool)1;
                }
                if(exp_329) { exp_329 = come_decrement_ref_count2(exp_329, ((struct sNode*)exp_329)->finalize, ((struct sNode*)exp_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            info->p=p_324;
            info->sline=sline_325;
        }
        if(range_array_323&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_330=*info->p==92;
            if(quote_330) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_331=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value384=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value383=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1312, "list$1sNodeph"))))))));
            come_call_finalizer3(right_value383,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value384,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            skip_pointer_attribute(info);
            node2_332=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value385=expression_v13(info))));
            if(right_value385) { right_value385 = come_decrement_ref_count2(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            list$1sNodeph_push_back(array_num_331,(struct sNode*)come_increment_ref_count(node2_332));
            if(*info->p==46&&*(info->p+1)==46) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_336=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value389=expression_v13(info))));
                if(right_value389) { right_value389 = come_decrement_ref_count2(right_value389, ((struct sNode*)right_value389)->finalize, ((struct sNode*)right_value389)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                list$1sNodeph_push_back(array_num_331,(struct sNode*)come_increment_ref_count(node3_336));
                expected_next_character(93,info);
                if(node3_336) { node3_336 = come_decrement_ref_count2(node3_336, ((struct sNode*)node3_336)->finalize, ((struct sNode*)node3_336)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1333, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value391=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value390=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1333, "sLoadRangeArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_331),quote_330,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value2->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value2->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj158=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value396=_inf_value2)));
            if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
            come_call_finalizer3(right_value390,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value391,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value396) { right_value396 = come_decrement_ref_count2(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            come_call_finalizer3(array_num_331,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            if(node2_332) { node2_332 = come_decrement_ref_count2(node2_332, ((struct sNode*)node2_332)->finalize, ((struct sNode*)node2_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(!range_array_323&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
                quote_338=*info->p==92;
                if(quote_338) {
                    info->p++;
                }
                range_339=(_Bool)0;
                array_num_340=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value398=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value397=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1342, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value397,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value398,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                while(1) {
                    range_array2_341=(_Bool)0;
                    {
                        p_342=info->p;
                        sline_343=info->sline;
                        if(*info->p==91) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_344=info->no_comma;
                            no_output_err_345=info->no_output_err;
                            no_output_come_code_346=info->no_output_come_code;
                            info->no_output_err=(_Bool)1;
                            info->no_comma=(_Bool)1;
                            info->no_output_come_code=(_Bool)1;
                            exp_347=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value399=expression_v13(info))));
                            if(right_value399) { right_value399 = come_decrement_ref_count2(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            info->no_comma=no_comma_344;
                            info->no_output_err=no_output_err_345;
                            info->no_output_come_code=no_output_come_code_346;
                            if(*info->p==46&&*(info->p+1)==46) {
                                range_array2_341=(_Bool)1;
                            }
                            if(exp_347) { exp_347 = come_decrement_ref_count2(exp_347, ((struct sNode*)exp_347)->finalize, ((struct sNode*)exp_347)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        info->p=p_342;
                        info->sline=sline_343;
                    }
                    if(range_array2_341) {
                        break;
                    }
                    else {
                        if(*info->p==91) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            skip_pointer_attribute(info);
                            node2_348=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=expression_v13(info))));
                            if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            list$1sNodeph_push_back(array_num_340,(struct sNode*)come_increment_ref_count(node2_348));
                            if(*info->p==93) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                err_msg(info,"require ] character");
                                exit(2);
                            }
                            if(node2_348) { node2_348 = come_decrement_ref_count2(node2_348, ((struct sNode*)node2_348)->finalize, ((struct sNode*)node2_348)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            break;
                        }
                    }
                }
                break_guard_349=(_Bool)0;
                if(*info->p==63&&*(info->p+1)==63) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    break_guard_349=(_Bool)1;
                }
                if(*info->p==61&&*(info->p+1)!=61) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_node_350=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value401=expression_v13(info))));
                    if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    parse_sharp_v5(info);
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1417, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count(((struct sStoreArrayNode*)(right_value403=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value402=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1417, "sStoreArrayNode")))),node,(struct sNode*)come_increment_ref_count(right_node_350),(struct list$1sNodeph*)come_increment_ref_count(array_num_340),quote_338,info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sStoreArrayNode_finalize;
                    _inf_value3->clone=(void*)sStoreArrayNode_clone;
                    _inf_value3->compile=(void*)sStoreArrayNode_compile;
                    _inf_value3->sline=(void*)sNodeBase_sline;
                    _inf_value3->sname=(void*)sNodeBase_sname;
                    _inf_value3->terminated=(void*)sNodeBase_terminated;
                    _inf_value3->kind=(void*)sStoreArrayNode_kind;
                    __dec_obj163=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value409=_inf_value3)));
                    if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer3(right_value402,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value403,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(right_node_350) { right_node_350 = come_decrement_ref_count2(right_node_350, ((struct sNode*)right_node_350)->finalize, ((struct sNode*)right_node_350)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1420, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sLoadArrayNode*)(right_value411=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value410=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1420, "sLoadArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_340),quote_338,break_guard_349,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sLoadArrayNode_finalize;
                    _inf_value4->clone=(void*)sLoadArrayNode_clone;
                    _inf_value4->compile=(void*)sLoadArrayNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sNodeBase_terminated;
                    _inf_value4->kind=(void*)sLoadArrayNode_kind;
                    __dec_obj167=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value416=_inf_value4)));
                    if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer3(right_value410,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value411,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value416) { right_value416 = come_decrement_ref_count2(right_value416, ((struct sNode*)right_value416)->finalize, ((struct sNode*)right_value416)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                come_call_finalizer3(array_num_340,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(*info->p==33&&*(info->p+1)==123) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    no_comma_353=info->no_comma;
                    info->no_comma=(_Bool)1;
                    begin_354=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value417=expression_v13(info))));
                    if(right_value417) { right_value417 = come_decrement_ref_count2(right_value417, ((struct sNode*)right_value417)->finalize, ((struct sNode*)right_value417)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    info->no_comma=no_comma_353;
                    expected_next_character(44,info);
                    end_355=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value418=expression_v13(info))));
                    if(right_value418) { right_value418 = come_decrement_ref_count2(right_value418, ((struct sNode*)right_value418)->finalize, ((struct sNode*)right_value418)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    expected_next_character(125,info);
                    parse_sharp_v5(info);
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1440, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sRangeCheckNode*)(right_value420=sRangeCheckNode_initialize((struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value419=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "18field.c", 1440, "sRangeCheckNode")))),node,begin_354,end_355,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sRangeCheckNode_finalize;
                    _inf_value5->clone=(void*)sRangeCheckNode_clone;
                    _inf_value5->compile=(void*)sRangeCheckNode_compile;
                    _inf_value5->sline=(void*)sNodeBase_sline;
                    _inf_value5->sname=(void*)sNodeBase_sname;
                    _inf_value5->terminated=(void*)sNodeBase_terminated;
                    _inf_value5->kind=(void*)sRangeCheckNode_kind;
                    __dec_obj172=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value426=_inf_value5)));
                    if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer3(right_value419,sRangeCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value420,sRangeCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value426) { right_value426 = come_decrement_ref_count2(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    if(begin_354) { begin_354 = come_decrement_ref_count2(begin_354, ((struct sNode*)begin_354)->finalize, ((struct sNode*)begin_354)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(end_355) { end_355 = come_decrement_ref_count2(end_355, ((struct sNode*)end_355)->finalize, ((struct sNode*)end_355)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(*info->p==33&&*(info->p+1)!=61) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        parse_sharp_v5(info);
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1448, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sNullCheckNode*)(right_value428=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value427=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1448, "sNullCheckNode")))),node,(_Bool)0,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sNullCheckNode_finalize;
                        _inf_value6->clone=(void*)sNullCheckNode_clone;
                        _inf_value6->compile=(void*)sNullCheckNode_compile;
                        _inf_value6->sline=(void*)sNodeBase_sline;
                        _inf_value6->sname=(void*)sNodeBase_sname;
                        _inf_value6->terminated=(void*)sNodeBase_terminated;
                        _inf_value6->kind=(void*)sNullCheckNode_kind;
                        __dec_obj175=node;
                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value432=_inf_value6)));
                        if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); }
                        come_call_finalizer3(right_value427,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value428,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value432) { right_value432 = come_decrement_ref_count2(right_value432, ((struct sNode*)right_value432)->finalize, ((struct sNode*)right_value432)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    else {
                        if(*info->p==63&&*(info->p+1)==63) {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            parse_sharp_v5(info);
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1456, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sNullableNode*)(right_value434=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(right_value433=(struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 1456, "sNullableNode")))),node,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sNullableNode_finalize;
                            _inf_value7->clone=(void*)sNullableNode_clone;
                            _inf_value7->compile=(void*)sNullableNode_compile;
                            _inf_value7->sline=(void*)sNodeBase_sline;
                            _inf_value7->sname=(void*)sNodeBase_sname;
                            _inf_value7->terminated=(void*)sNodeBase_terminated;
                            _inf_value7->kind=(void*)sNullableNode_kind;
                            __dec_obj178=node;
                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value438=_inf_value7)));
                            if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
                            come_call_finalizer3(right_value433,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value434,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value438) { right_value438 = come_decrement_ref_count2(right_value438, ((struct sNode*)right_value438)->finalize, ((struct sNode*)right_value438)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        else {
                            if((*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62)) {
                                if(*info->p==46) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                }
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1468, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sNullCheckNode*)(right_value441=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value439=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1468, "sNullCheckNode")))),((struct sNode*)(right_value440=sNode_clone(node))),(_Bool)1,info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sNullCheckNode_finalize;
                                _inf_value8->clone=(void*)sNullCheckNode_clone;
                                _inf_value8->compile=(void*)sNullCheckNode_compile;
                                _inf_value8->sline=(void*)sNodeBase_sline;
                                _inf_value8->sname=(void*)sNodeBase_sname;
                                _inf_value8->terminated=(void*)sNodeBase_terminated;
                                _inf_value8->kind=(void*)sNullCheckNode_kind;
                                __dec_obj181=node;
                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value445=_inf_value8)));
                                if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); }
                                come_call_finalizer3(right_value439,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value440) { right_value440 = come_decrement_ref_count2(right_value440, ((struct sNode*)right_value440)->finalize, ((struct sNode*)right_value440)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                come_call_finalizer3(right_value441,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value445) { right_value445 = come_decrement_ref_count2(right_value445, ((struct sNode*)right_value445)->finalize, ((struct sNode*)right_value445)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                parse_sharp_v5(info);
                                field_name_360=(char*)come_increment_ref_count(((char*)(right_value446=parse_word(info))));
                                right_value446 = come_decrement_ref_count2(right_value446, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                parse_sharp_v5(info);
                                parse_method_generics_type_361=(_Bool)0;
                                {
                                    p_362=info->p;
                                    sline_363=info->sline;
                                    if(*info->p==60) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        if(xisalpha(*info->p)||*info->p==95) {
                                            word_364=(char*)come_increment_ref_count(((char*)(right_value447=parse_word(info))));
                                            right_value447 = come_decrement_ref_count2(right_value447, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            if(is_type_name(word_364,info)) {
                                                parse_method_generics_type_361=(_Bool)1;
                                            }
                                            word_364 = come_decrement_ref_count2(word_364, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    info->p=p_362;
                                    info->sline=sline_363;
                                }
                                if(*info->p==61&&*(info->p+1)!=61) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    parse_sharp_v5(info);
                                    right_node_365=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value448=expression_v13(info))));
                                    if(right_value448) { right_value448 = come_decrement_ref_count2(right_value448, ((struct sNode*)right_value448)->finalize, ((struct sNode*)right_value448)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1506, "struct sNode");
                                    _inf_obj_value9=come_increment_ref_count(((struct sStoreFieldNode*)(right_value450=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value449=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1506, "sStoreFieldNode")))),node,(struct sNode*)come_increment_ref_count(right_node_365),(char*)come_increment_ref_count(field_name_360),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sStoreFieldNode_finalize;
                                    _inf_value9->clone=(void*)sStoreFieldNode_clone;
                                    _inf_value9->compile=(void*)sStoreFieldNode_compile;
                                    _inf_value9->sline=(void*)sNodeBase_sline;
                                    _inf_value9->sname=(void*)sNodeBase_sname;
                                    _inf_value9->terminated=(void*)sNodeBase_terminated;
                                    _inf_value9->kind=(void*)sStoreFieldNode_kind;
                                    __dec_obj186=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value456=_inf_value9)));
                                    if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); }
                                    come_call_finalizer3(right_value449,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value450,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value456) { right_value456 = come_decrement_ref_count2(right_value456, ((struct sNode*)right_value456)->finalize, ((struct sNode*)right_value456)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    if(right_node_365) { right_node_365 = come_decrement_ref_count2(right_node_365, ((struct sNode*)right_node_365)->finalize, ((struct sNode*)right_node_365)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(*info->p==40||*info->p==123||parse_method_generics_type_361||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40)) {
                                        if(string_operator_equals(field_name_360,"if")) {
                                            __dec_obj187=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value458=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value457=sNode_clone(node)))),info))));
                                            if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value457) { right_value457 = come_decrement_ref_count2(right_value457, ((struct sNode*)right_value457)->finalize, ((struct sNode*)right_value457)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            if(right_value458) { right_value458 = come_decrement_ref_count2(right_value458, ((struct sNode*)right_value458)->finalize, ((struct sNode*)right_value458)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        else {
                                            if(string_operator_equals(field_name_360,"elif")) {
                                                __dec_obj188=node;
                                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value460=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value459=sNode_clone(node)))),info))));
                                                if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value459) { right_value459 = come_decrement_ref_count2(right_value459, ((struct sNode*)right_value459)->finalize, ((struct sNode*)right_value459)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                if(right_value460) { right_value460 = come_decrement_ref_count2(right_value460, ((struct sNode*)right_value460)->finalize, ((struct sNode*)right_value460)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            else {
                                                __dec_obj189=node;
                                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value462=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value461=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_360),info))));
                                                if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value461) { right_value461 = come_decrement_ref_count2(right_value461, ((struct sNode*)right_value461)->finalize, ((struct sNode*)right_value461)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                if(right_value462) { right_value462 = come_decrement_ref_count2(right_value462, ((struct sNode*)right_value462)->finalize, ((struct sNode*)right_value462)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                        }
                                    }
                                    else {
                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1520, "struct sNode");
                                        _inf_obj_value10=come_increment_ref_count(((struct sLoadFieldNode*)(right_value464=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value463=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1520, "sLoadFieldNode")))),node,(char*)come_increment_ref_count(field_name_360),info))));
                                        _inf_value10->_protocol_obj=_inf_obj_value10;
                                        _inf_value10->finalize=(void*)sLoadFieldNode_finalize;
                                        _inf_value10->clone=(void*)sLoadFieldNode_clone;
                                        _inf_value10->compile=(void*)sLoadFieldNode_compile;
                                        _inf_value10->sline=(void*)sNodeBase_sline;
                                        _inf_value10->sname=(void*)sNodeBase_sname;
                                        _inf_value10->terminated=(void*)sNodeBase_terminated;
                                        _inf_value10->kind=(void*)sLoadFieldNode_kind;
                                        __dec_obj193=node;
                                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value469=_inf_value10)));
                                        if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); }
                                        come_call_finalizer3(right_value463,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value464,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value469) { right_value469 = come_decrement_ref_count2(right_value469, ((struct sNode*)right_value469)->finalize, ((struct sNode*)right_value469)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                }
                                field_name_360 = come_decrement_ref_count2(field_name_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                node2_368=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value470=post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info))));
                                if(right_value470) { right_value470 = come_decrement_ref_count2(right_value470, ((struct sNode*)right_value470)->finalize, ((struct sNode*)right_value470)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                if(node2_368==((void*)0)) {
                                    if(node2_368) { node2_368 = come_decrement_ref_count2(node2_368, ((struct sNode*)node2_368)->finalize, ((struct sNode*)node2_368)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    break;
                                }
                                __dec_obj194=node;
                                node=(struct sNode*)come_increment_ref_count(node2_368);
                                if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); }
                                if(node2_368) { node2_368 = come_decrement_ref_count2(node2_368, ((struct sNode*)node2_368)->finalize, ((struct sNode*)node2_368)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                        }
                    }
                }
            }
        }
    }
    __result185__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result185__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* right_value386;
struct list_item$1sNodeph* litem_333;
struct sNode* __dec_obj152;
void* right_value387;
struct list_item$1sNodeph* litem_334;
struct sNode* __dec_obj153;
void* right_value388;
struct list_item$1sNodeph* litem_335;
struct sNode* __dec_obj154;
struct list$1sNodeph* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value386 = (void*)0;
memset(&litem_333, 0, sizeof(struct list_item$1sNodeph*));
right_value387 = (void*)0;
memset(&litem_334, 0, sizeof(struct list_item$1sNodeph*));
right_value388 = (void*)0;
memset(&litem_335, 0, sizeof(struct list_item$1sNodeph*));
                if(self->len==0) {
                    litem_333=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value386=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 219, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value386,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_333->prev=((void*)0);
                    litem_333->next=((void*)0);
                    __dec_obj152=litem_333->item;
                    litem_333->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_333;
                    self->head=litem_333;
                }
                else {
                    if(self->len==1) {
                        litem_334=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value387=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 229, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value387,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_334->prev=self->head;
                        litem_334->next=((void*)0);
                        __dec_obj153=litem_334->item;
                        litem_334->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_334;
                        self->head->next=litem_334;
                    }
                    else {
                        litem_335=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value388=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 239, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value388,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_335->prev=self->tail;
                        litem_335->next=((void*)0);
                        __dec_obj154=litem_335->item;
                        litem_335->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail->next=litem_335;
                        self->tail=litem_335;
                    }
                }
                self->len++;
                __result166__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result166__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                    come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__;
struct sLoadRangeArrayNode* __result167__;
void* right_value392;
struct sLoadRangeArrayNode* result_337;
void* right_value393;
char* __dec_obj155;
void* right_value394;
struct list$1sNodeph* __dec_obj156;
void* right_value395;
struct sNode* __dec_obj157;
struct sLoadRangeArrayNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value392 = (void*)0;
memset(&result_337, 0, sizeof(struct sLoadRangeArrayNode*));
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
                if(self==(void*)0) {
                    __result167__ = __result_obj__ = (void*)0;
                    return __result167__;
                }
                result_337=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value392=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "sLoadRangeArrayNode"))));
                come_call_finalizer3(right_value392,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)) {
                    result_337->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj155=result_337->sname;
                    result_337->sname=(char*)come_increment_ref_count(((char*)(right_value393=string_clone(self->sname))));
                    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value393 = come_decrement_ref_count2(right_value393, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                    __dec_obj156=result_337->mArrayNum;
                    result_337->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value394=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer3(__dec_obj156,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value394,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj157=result_337->mLeft;
                    result_337->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value395=sNode_clone(self->mLeft))));
                    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(self!=((void*)0)) {
                    result_337->mQuote=self->mQuote;
                }
                __result168__ = __result_obj__ = result_337;
                come_call_finalizer3(result_337,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result168__;
                come_call_finalizer3(result_337,sLoadRangeArrayNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__;
struct sStoreArrayNode* __result169__;
void* right_value404;
struct sStoreArrayNode* result_351;
void* right_value405;
char* __dec_obj159;
void* right_value406;
struct sNode* __dec_obj160;
void* right_value407;
struct sNode* __dec_obj161;
void* right_value408;
struct list$1sNodeph* __dec_obj162;
struct sStoreArrayNode* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value404 = (void*)0;
memset(&result_351, 0, sizeof(struct sStoreArrayNode*));
right_value405 = (void*)0;
right_value406 = (void*)0;
right_value407 = (void*)0;
right_value408 = (void*)0;
                        if(self==(void*)0) {
                            __result169__ = __result_obj__ = (void*)0;
                            return __result169__;
                        }
                        result_351=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value404=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "sStoreArrayNode"))));
                        come_call_finalizer3(right_value404,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(self!=((void*)0)) {
                            result_351->sline=self->sline;
                        }
                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                            __dec_obj159=result_351->sname;
                            result_351->sname=(char*)come_increment_ref_count(((char*)(right_value405=string_clone(self->sname))));
                            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value405 = come_decrement_ref_count2(right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                            __dec_obj160=result_351->mLeft;
                            result_351->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value406=sNode_clone(self->mLeft))));
                            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value406) { right_value406 = come_decrement_ref_count2(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                            __dec_obj161=result_351->mRight;
                            result_351->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value407=sNode_clone(self->mRight))));
                            if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                            __dec_obj162=result_351->mArrayNum;
                            result_351->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value408=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer3(__dec_obj162,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value408,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        if(self!=((void*)0)) {
                            result_351->mQuote=self->mQuote;
                        }
                        __result170__ = __result_obj__ = result_351;
                        come_call_finalizer3(result_351,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result170__;
                        come_call_finalizer3(result_351,sStoreArrayNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__;
struct sLoadArrayNode* __result171__;
void* right_value412;
struct sLoadArrayNode* result_352;
void* right_value413;
char* __dec_obj164;
void* right_value414;
struct list$1sNodeph* __dec_obj165;
void* right_value415;
struct sNode* __dec_obj166;
struct sLoadArrayNode* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
right_value412 = (void*)0;
memset(&result_352, 0, sizeof(struct sLoadArrayNode*));
right_value413 = (void*)0;
right_value414 = (void*)0;
right_value415 = (void*)0;
                        if(self==(void*)0) {
                            __result171__ = __result_obj__ = (void*)0;
                            return __result171__;
                        }
                        result_352=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value412=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "sLoadArrayNode"))));
                        come_call_finalizer3(right_value412,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(self!=((void*)0)) {
                            result_352->sline=self->sline;
                        }
                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                            __dec_obj164=result_352->sname;
                            result_352->sname=(char*)come_increment_ref_count(((char*)(right_value413=string_clone(self->sname))));
                            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                            __dec_obj165=result_352->mArrayNum;
                            result_352->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value414=list$1sNodephp_clone(self->mArrayNum))));
                            come_call_finalizer3(__dec_obj165,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value414,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        if(self!=((void*)0)) {
                            result_352->mBreakGuard=self->mBreakGuard;
                        }
                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                            __dec_obj166=result_352->mLeft;
                            result_352->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value415=sNode_clone(self->mLeft))));
                            if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value415) { right_value415 = come_decrement_ref_count2(right_value415, ((struct sNode*)right_value415)->finalize, ((struct sNode*)right_value415)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(self!=((void*)0)) {
                            result_352->mQuote=self->mQuote;
                        }
                        __result172__ = __result_obj__ = result_352;
                        come_call_finalizer3(result_352,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result172__;
                        come_call_finalizer3(result_352,sLoadArrayNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sRangeCheckNode_finalize(struct sRangeCheckNode* self){
                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(self!=((void*)0)&&self->mBegin!=((void*)0)) {
                            if(self->mBegin) { self->mBegin = come_decrement_ref_count2(self->mBegin, ((struct sNode*)self->mBegin)->finalize, ((struct sNode*)self->mBegin)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(self!=((void*)0)&&self->mEnd!=((void*)0)) {
                            if(self->mEnd) { self->mEnd = come_decrement_ref_count2(self->mEnd, ((struct sNode*)self->mEnd)->finalize, ((struct sNode*)self->mEnd)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self){
void* __result_obj__;
struct sRangeCheckNode* __result173__;
void* right_value421;
struct sRangeCheckNode* result_356;
void* right_value422;
char* __dec_obj168;
void* right_value423;
struct sNode* __dec_obj169;
void* right_value424;
struct sNode* __dec_obj170;
void* right_value425;
struct sNode* __dec_obj171;
struct sRangeCheckNode* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
right_value421 = (void*)0;
memset(&result_356, 0, sizeof(struct sRangeCheckNode*));
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value424 = (void*)0;
right_value425 = (void*)0;
                        if(self==(void*)0) {
                            __result173__ = __result_obj__ = (void*)0;
                            return __result173__;
                        }
                        result_356=(struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value421=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "sRangeCheckNode_clone", 3, "sRangeCheckNode"))));
                        come_call_finalizer3(right_value421,sRangeCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(self!=((void*)0)) {
                            result_356->sline=self->sline;
                        }
                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                            __dec_obj168=result_356->sname;
                            result_356->sname=(char*)come_increment_ref_count(((char*)(right_value422=string_clone(self->sname))));
                            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value422 = come_decrement_ref_count2(right_value422, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                            __dec_obj169=result_356->mLeft;
                            result_356->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value423=sNode_clone(self->mLeft))));
                            if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value423) { right_value423 = come_decrement_ref_count2(right_value423, ((struct sNode*)right_value423)->finalize, ((struct sNode*)right_value423)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(self!=((void*)0)&&self->mBegin!=((void*)0)) {
                            __dec_obj170=result_356->mBegin;
                            result_356->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value424=sNode_clone(self->mBegin))));
                            if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value424) { right_value424 = come_decrement_ref_count2(right_value424, ((struct sNode*)right_value424)->finalize, ((struct sNode*)right_value424)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(self!=((void*)0)&&self->mEnd!=((void*)0)) {
                            __dec_obj171=result_356->mEnd;
                            result_356->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value425=sNode_clone(self->mEnd))));
                            if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value425) { right_value425 = come_decrement_ref_count2(right_value425, ((struct sNode*)right_value425)->finalize, ((struct sNode*)right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        __result174__ = __result_obj__ = result_356;
                        come_call_finalizer3(result_356,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result174__;
                        come_call_finalizer3(result_356,sRangeCheckNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNullableNode_finalize(struct sNullableNode* self){
                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self){
void* __result_obj__;
struct sNullableNode* __result177__;
void* right_value435;
struct sNullableNode* result_358;
void* right_value436;
char* __dec_obj176;
void* right_value437;
struct sNode* __dec_obj177;
struct sNullableNode* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
right_value435 = (void*)0;
memset(&result_358, 0, sizeof(struct sNullableNode*));
right_value436 = (void*)0;
right_value437 = (void*)0;
                                if(self==(void*)0) {
                                    __result177__ = __result_obj__ = (void*)0;
                                    return __result177__;
                                }
                                result_358=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(right_value435=(struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "sNullableNode_clone", 3, "sNullableNode"))));
                                come_call_finalizer3(right_value435,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(self!=((void*)0)) {
                                    result_358->sline=self->sline;
                                }
                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                    __dec_obj176=result_358->sname;
                                    result_358->sname=(char*)come_increment_ref_count(((char*)(right_value436=string_clone(self->sname))));
                                    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value436 = come_decrement_ref_count2(right_value436, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                    __dec_obj177=result_358->mLeft;
                                    result_358->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value437=sNode_clone(self->mLeft))));
                                    if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value437) { right_value437 = come_decrement_ref_count2(right_value437, ((struct sNode*)right_value437)->finalize, ((struct sNode*)right_value437)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                __result178__ = __result_obj__ = result_358;
                                come_call_finalizer3(result_358,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result178__;
                                come_call_finalizer3(result_358,sNullableNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__;
struct sNullCheckNode* __result179__;
void* right_value442;
struct sNullCheckNode* result_359;
void* right_value443;
char* __dec_obj179;
void* right_value444;
struct sNode* __dec_obj180;
struct sNullCheckNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
right_value442 = (void*)0;
memset(&result_359, 0, sizeof(struct sNullCheckNode*));
right_value443 = (void*)0;
right_value444 = (void*)0;
                                    if(self==(void*)0) {
                                        __result179__ = __result_obj__ = (void*)0;
                                        return __result179__;
                                    }
                                    result_359=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value442=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "sNullCheckNode"))));
                                    come_call_finalizer3(right_value442,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(self!=((void*)0)) {
                                        result_359->sline=self->sline;
                                    }
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        __dec_obj179=result_359->sname;
                                        result_359->sname=(char*)come_increment_ref_count(((char*)(right_value443=string_clone(self->sname))));
                                        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value443 = come_decrement_ref_count2(right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                        __dec_obj180=result_359->mLeft;
                                        result_359->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value444=sNode_clone(self->mLeft))));
                                        if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value444) { right_value444 = come_decrement_ref_count2(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(self!=((void*)0)) {
                                        result_359->mOnlyNullCecker=self->mOnlyNullCecker;
                                    }
                                    __result180__ = __result_obj__ = result_359;
                                    come_call_finalizer3(result_359,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result180__;
                                    come_call_finalizer3(result_359,sNullCheckNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
                                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__;
struct sStoreFieldNode* __result181__;
void* right_value451;
struct sStoreFieldNode* result_366;
void* right_value452;
char* __dec_obj182;
void* right_value453;
struct sNode* __dec_obj183;
void* right_value454;
struct sNode* __dec_obj184;
void* right_value455;
char* __dec_obj185;
struct sStoreFieldNode* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value451 = (void*)0;
memset(&result_366, 0, sizeof(struct sStoreFieldNode*));
right_value452 = (void*)0;
right_value453 = (void*)0;
right_value454 = (void*)0;
right_value455 = (void*)0;
                                        if(self==(void*)0) {
                                            __result181__ = __result_obj__ = (void*)0;
                                            return __result181__;
                                        }
                                        result_366=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value451=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "sStoreFieldNode"))));
                                        come_call_finalizer3(right_value451,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(self!=((void*)0)) {
                                            result_366->sline=self->sline;
                                        }
                                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                            __dec_obj182=result_366->sname;
                                            result_366->sname=(char*)come_increment_ref_count(((char*)(right_value452=string_clone(self->sname))));
                                            __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value452 = come_decrement_ref_count2(right_value452, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                            __dec_obj183=result_366->mLeft;
                                            result_366->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value453=sNode_clone(self->mLeft))));
                                            if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value453) { right_value453 = come_decrement_ref_count2(right_value453, ((struct sNode*)right_value453)->finalize, ((struct sNode*)right_value453)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                            __dec_obj184=result_366->mRight;
                                            result_366->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value454=sNode_clone(self->mRight))));
                                            if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value454) { right_value454 = come_decrement_ref_count2(right_value454, ((struct sNode*)right_value454)->finalize, ((struct sNode*)right_value454)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                            __dec_obj185=result_366->mName;
                                            result_366->mName=(char*)come_increment_ref_count(((char*)(right_value455=string_clone(self->mName))));
                                            __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value455 = come_decrement_ref_count2(right_value455, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result182__ = __result_obj__ = result_366;
                                        come_call_finalizer3(result_366,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result182__;
                                        come_call_finalizer3(result_366,sStoreFieldNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
                                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__;
struct sLoadFieldNode* __result183__;
void* right_value465;
struct sLoadFieldNode* result_367;
void* right_value466;
char* __dec_obj190;
void* right_value467;
struct sNode* __dec_obj191;
void* right_value468;
char* __dec_obj192;
struct sLoadFieldNode* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value465 = (void*)0;
memset(&result_367, 0, sizeof(struct sLoadFieldNode*));
right_value466 = (void*)0;
right_value467 = (void*)0;
right_value468 = (void*)0;
                                            if(self==(void*)0) {
                                                __result183__ = __result_obj__ = (void*)0;
                                                return __result183__;
                                            }
                                            result_367=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value465=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "sLoadFieldNode"))));
                                            come_call_finalizer3(right_value465,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(self!=((void*)0)) {
                                                result_367->sline=self->sline;
                                            }
                                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                __dec_obj190=result_367->sname;
                                                result_367->sname=(char*)come_increment_ref_count(((char*)(right_value466=string_clone(self->sname))));
                                                __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value466 = come_decrement_ref_count2(right_value466, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                                __dec_obj191=result_367->mLeft;
                                                result_367->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value467=sNode_clone(self->mLeft))));
                                                if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count2(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value467) { right_value467 = come_decrement_ref_count2(right_value467, ((struct sNode*)right_value467)->finalize, ((struct sNode*)right_value467)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                                __dec_obj192=result_367->mName;
                                                result_367->mName=(char*)come_increment_ref_count(((char*)(right_value468=string_clone(self->mName))));
                                                __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value468 = come_decrement_ref_count2(right_value468, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            __result184__ = __result_obj__ = result_367;
                                            come_call_finalizer3(result_367,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result184__;
                                            come_call_finalizer3(result_367,sLoadFieldNode_finalize, 0, 0, 0, 0, (void*)0);
}

