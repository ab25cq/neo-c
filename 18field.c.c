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
struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct sRightValueObject* right_value_objects;
    char* c_value_without_right_value_objects;
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
    _Bool mStored;
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
    _Bool inhibits_output_code;
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

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);

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

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);

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

void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info);

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
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result1__;
memset(&__result_obj__, 0, sizeof(void*));
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1899, "buffer"))))));
    come_call_finalizer3(__right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result1__;
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_1;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1906, "buffer"))))));
    come_call_finalizer3(__right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    __result2__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result2__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_2;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
    result_2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1913, "buffer"))))));
    come_call_finalizer3(__right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    __result3__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result3__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_3;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1920, "buffer"))))));
    come_call_finalizer3(__right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    __result4__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result4__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_4;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1927, "buffer"))))));
    come_call_finalizer3(__right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    __result5__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result5__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_5;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1934, "buffer"))))));
    come_call_finalizer3(__right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    __result6__ = __result_obj__ = result_5;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result6__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* __right_value12 = (void*)0;
struct smart_pointer$1char* result_6;
void* __right_value13 = (void*)0;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
    result_6=(struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1950, "smart_pointer$1char"));
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(buffer_clone(self));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_6->p=result_6->memory->buf;
    __result7__ = __result_obj__ = result_6;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* __right_value14 = (void*)0;
struct smart_pointer$1char* result_7;
void* __right_value15 = (void*)0;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
    result_7=(struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1960, "smart_pointer$1char"));
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(buffer_clone(self));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_7->p=(char*)result_7->memory->buf;
    __result8__ = __result_obj__ = result_7;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result8__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* __right_value16 = (void*)0;
struct smart_pointer$1short* result_8;
void* __right_value17 = (void*)0;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
    result_8=(struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1970, "smart_pointer$1short"));
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(buffer_clone(self));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_8->p=(short short*)result_8->memory->buf;
    __result9__ = __result_obj__ = result_8;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result9__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* __right_value18 = (void*)0;
struct smart_pointer$1int* result_9;
void* __right_value19 = (void*)0;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
    result_9=(struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1980, "smart_pointer$1int"));
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(buffer_clone(self));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_9->p=(int*)result_9->memory->buf;
    __result10__ = __result_obj__ = result_9;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result10__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* __right_value20 = (void*)0;
struct smart_pointer$1long* result_10;
void* __right_value21 = (void*)0;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
    result_10=(struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1990, "smart_pointer$1long"));
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(buffer_clone(self));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_10->p=(long*)result_10->memory->buf;
    __result11__ = __result_obj__ = result_10;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result11__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* __right_value22 = (void*)0;
void* __right_value25 = (void*)0;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
    __result13__ = __result_obj__ = ((struct smart_pointer$1char*)(__right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(__right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2161, "smart_pointer$1char")))),self,len)));
    come_call_finalizer3(__right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result13__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
void* __right_value26 = (void*)0;
void* __right_value29 = (void*)0;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
    __result15__ = __result_obj__ = ((struct smart_pointer$1short*)(__right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(__right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2166, "smart_pointer$1short")))),self,len)));
    come_call_finalizer3(__right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result15__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
void* __right_value30 = (void*)0;
void* __right_value33 = (void*)0;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
    __result17__ = __result_obj__ = ((struct smart_pointer$1int*)(__right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(__right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2171, "smart_pointer$1int")))),self,len)));
    come_call_finalizer3(__right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result17__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
void* __right_value34 = (void*)0;
void* __right_value37 = (void*)0;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
    __result19__ = __result_obj__ = ((struct smart_pointer$1long*)(__right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(__right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2176, "smart_pointer$1long")))),self,len)));
    come_call_finalizer3(__right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result19__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
void* __right_value38 = (void*)0;
void* __right_value41 = (void*)0;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
    __result21__ = __result_obj__ = ((struct smart_pointer$1float*)(__right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(__right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2181, "smart_pointer$1float")))),self,len)));
    come_call_finalizer3(__right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result21__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
void* __right_value42 = (void*)0;
void* __right_value45 = (void*)0;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
    __result23__ = __result_obj__ = ((struct smart_pointer$1double*)(__right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(__right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2186, "smart_pointer$1double")))),self,len)));
    come_call_finalizer3(__right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result23__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__;
void* __right_value46 = (void*)0;
void* __right_value50 = (void*)0;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
    __result26__ = __result_obj__ = ((struct list$1char*)(__right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(__right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2191, "list$1char")))),len,self)));
    come_call_finalizer3(__right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result26__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__;
void* __right_value51 = (void*)0;
void* __right_value55 = (void*)0;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
    __result29__ = __result_obj__ = ((struct list$1short*)(__right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(__right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2196, "list$1short")))),len,self)));
    come_call_finalizer3(__right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result29__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__;
void* __right_value56 = (void*)0;
void* __right_value60 = (void*)0;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
    __result32__ = __result_obj__ = ((struct list$1int*)(__right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(__right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2201, "list$1int")))),len,self)));
    come_call_finalizer3(__right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result32__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__;
void* __right_value61 = (void*)0;
void* __right_value65 = (void*)0;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
    __result35__ = __result_obj__ = ((struct list$1long*)(__right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(__right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2206, "list$1long")))),len,self)));
    come_call_finalizer3(__right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result35__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__;
void* __right_value66 = (void*)0;
void* __right_value70 = (void*)0;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
    __result38__ = __result_obj__ = ((struct list$1float*)(__right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(__right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2211, "list$1float")))),len,self)));
    come_call_finalizer3(__right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result38__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__;
void* __right_value71 = (void*)0;
void* __right_value75 = (void*)0;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
    __result41__ = __result_obj__ = ((struct list$1double*)(__right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(__right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2216, "list$1double")))),len,self)));
    come_call_finalizer3(__right_value71,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value75,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value76 = (void*)0;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
    __result42__ = __result_obj__ = ((char*)(__right_value76=xsprintf(msg,self)));
    __right_value76 = come_decrement_ref_count2(__right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* __right_value77 = (void*)0;
char* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    __result43__ = __result_obj__ = ((char*)(__right_value77=xsprintf(msg,self)));
    __right_value77 = come_decrement_ref_count2(__right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result43__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* __right_value78 = (void*)0;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
    __result44__ = __result_obj__ = ((char*)(__right_value78=xsprintf(msg,self)));
    __right_value78 = come_decrement_ref_count2(__right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
struct buffer* __dec_obj6;
struct smart_pointer$1char* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj6=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))));
    come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(self->memory,memory,sizeof(char)*size);
    self->p=(char*)self->memory->buf;
    __result12__ = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result12__;
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj7=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))));
    come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(self->memory,memory,sizeof(short short)*size);
    self->p=(short short*)self->memory->buf;
    __result14__ = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result14__;
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj8=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))));
    come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(self->memory,memory,sizeof(int)*size);
    self->p=(int*)self->memory->buf;
    __result16__ = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result16__;
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj9=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))));
    come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(self->memory,memory,sizeof(long)*size);
    self->p=(long*)self->memory->buf;
    __result18__ = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result18__;
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj10=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))));
    come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(self->memory,memory,sizeof(float)*size);
    self->p=(float*)self->memory->buf;
    __result20__ = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    return __result20__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize(struct smart_pointer$1double* self, void* memory, int size){
void* __result_obj__;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* __dec_obj11;
struct smart_pointer$1double* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj11=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))));
    come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(self->memory,memory,sizeof(double)*size);
    self->p=(double*)self->memory->buf;
    __result22__ = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    return __result22__;
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
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_11=0;    i_11<num_value;    i_11++    ){
        list$1char_push_back(self,values[i_11]);
    }
    __result25__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result25__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__;
void* __right_value47 = (void*)0;
struct list_item$1char* litem_12;
void* __right_value48 = (void*)0;
struct list_item$1char* litem_13;
void* __right_value49 = (void*)0;
struct list_item$1char* litem_14;
struct list$1char* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->len==0) {
        litem_12=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value47=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 219, "list_item$1char"))));
        come_call_finalizer3(__right_value47,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_12->prev=((void*)0);
        litem_12->next=((void*)0);
        litem_12->item=item;
        self->tail=litem_12;
        self->head=litem_12;
    }
    else {
        if(self->len==1) {
            litem_13=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value48=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 229, "list_item$1char"))));
            come_call_finalizer3(__right_value48,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_13->prev=self->head;
            litem_13->next=((void*)0);
            litem_13->item=item;
            self->tail=litem_13;
            self->head->next=litem_13;
        }
        else {
            litem_14=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value49=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./neo-c.h", 239, "list_item$1char"))));
            come_call_finalizer3(__right_value49,list_item$1charp_finalize, 0, 1, 0, 0, __result_obj__);
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
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_17=0;    i_17<num_value;    i_17++    ){
        list$1short_push_back(self,values[i_17]);
    }
    __result28__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result28__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__;
void* __right_value52 = (void*)0;
struct list_item$1short* litem_18;
void* __right_value53 = (void*)0;
struct list_item$1short* litem_19;
void* __right_value54 = (void*)0;
struct list_item$1short* litem_20;
struct list$1short* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->len==0) {
        litem_18=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value52=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 219, "list_item$1short"))));
        come_call_finalizer3(__right_value52,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_18->prev=((void*)0);
        litem_18->next=((void*)0);
        litem_18->item=item;
        self->tail=litem_18;
        self->head=litem_18;
    }
    else {
        if(self->len==1) {
            litem_19=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value53=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 229, "list_item$1short"))));
            come_call_finalizer3(__right_value53,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_19->prev=self->head;
            litem_19->next=((void*)0);
            litem_19->item=item;
            self->tail=litem_19;
            self->head->next=litem_19;
        }
        else {
            litem_20=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value54=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./neo-c.h", 239, "list_item$1short"))));
            come_call_finalizer3(__right_value54,list_item$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
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
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_23=0;    i_23<num_value;    i_23++    ){
        list$1int_push_back(self,values[i_23]);
    }
    __result31__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result31__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__;
void* __right_value57 = (void*)0;
struct list_item$1int* litem_24;
void* __right_value58 = (void*)0;
struct list_item$1int* litem_25;
void* __right_value59 = (void*)0;
struct list_item$1int* litem_26;
struct list$1int* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->len==0) {
        litem_24=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value57=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 219, "list_item$1int"))));
        come_call_finalizer3(__right_value57,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_24->prev=((void*)0);
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail=litem_24;
        self->head=litem_24;
    }
    else {
        if(self->len==1) {
            litem_25=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value58=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 229, "list_item$1int"))));
            come_call_finalizer3(__right_value58,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_25->prev=self->head;
            litem_25->next=((void*)0);
            litem_25->item=item;
            self->tail=litem_25;
            self->head->next=litem_25;
        }
        else {
            litem_26=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value59=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./neo-c.h", 239, "list_item$1int"))));
            come_call_finalizer3(__right_value59,list_item$1intp_finalize, 0, 1, 0, 0, __result_obj__);
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
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_29=0;    i_29<num_value;    i_29++    ){
        list$1long_push_back(self,values[i_29]);
    }
    __result34__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result34__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__;
void* __right_value62 = (void*)0;
struct list_item$1long* litem_30;
void* __right_value63 = (void*)0;
struct list_item$1long* litem_31;
void* __right_value64 = (void*)0;
struct list_item$1long* litem_32;
struct list$1long* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->len==0) {
        litem_30=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value62=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 219, "list_item$1long"))));
        come_call_finalizer3(__right_value62,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_30->prev=((void*)0);
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail=litem_30;
        self->head=litem_30;
    }
    else {
        if(self->len==1) {
            litem_31=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value63=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 229, "list_item$1long"))));
            come_call_finalizer3(__right_value63,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_31->prev=self->head;
            litem_31->next=((void*)0);
            litem_31->item=item;
            self->tail=litem_31;
            self->head->next=litem_31;
        }
        else {
            litem_32=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value64=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./neo-c.h", 239, "list_item$1long"))));
            come_call_finalizer3(__right_value64,list_item$1longp_finalize, 0, 1, 0, 0, __result_obj__);
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
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_35=0;    i_35<num_value;    i_35++    ){
        list$1float_push_back(self,values[i_35]);
    }
    __result37__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    return __result37__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__;
void* __right_value67 = (void*)0;
struct list_item$1float* litem_36;
void* __right_value68 = (void*)0;
struct list_item$1float* litem_37;
void* __right_value69 = (void*)0;
struct list_item$1float* litem_38;
struct list$1float* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->len==0) {
        litem_36=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value67=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 219, "list_item$1float"))));
        come_call_finalizer3(__right_value67,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_36->prev=((void*)0);
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail=litem_36;
        self->head=litem_36;
    }
    else {
        if(self->len==1) {
            litem_37=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value68=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 229, "list_item$1float"))));
            come_call_finalizer3(__right_value68,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_37->prev=self->head;
            litem_37->next=((void*)0);
            litem_37->item=item;
            self->tail=litem_37;
            self->head->next=litem_37;
        }
        else {
            litem_38=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value69=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./neo-c.h", 239, "list_item$1float"))));
            come_call_finalizer3(__right_value69,list_item$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
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
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_41=0;    i_41<num_value;    i_41++    ){
        list$1double_push_back(self,values[i_41]);
    }
    __result40__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    return __result40__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__;
void* __right_value72 = (void*)0;
struct list_item$1double* litem_42;
void* __right_value73 = (void*)0;
struct list_item$1double* litem_43;
void* __right_value74 = (void*)0;
struct list_item$1double* litem_44;
struct list$1double* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->len==0) {
        litem_42=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value72=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 219, "list_item$1double"))));
        come_call_finalizer3(__right_value72,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
        litem_42->prev=((void*)0);
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail=litem_42;
        self->head=litem_42;
    }
    else {
        if(self->len==1) {
            litem_43=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value73=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 229, "list_item$1double"))));
            come_call_finalizer3(__right_value73,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
            litem_43->prev=self->head;
            litem_43->next=((void*)0);
            litem_43->item=item;
            self->tail=litem_43;
            self->head->next=litem_43;
        }
        else {
            litem_44=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value74=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./neo-c.h", 239, "list_item$1double"))));
            come_call_finalizer3(__right_value74,list_item$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
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
    it_45=self->head;
    while(it_45!=((void*)0)) {
        prev_it_46=it_45;
        it_45=it_45->next;
        come_call_finalizer3(prev_it_46,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}










_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __right_value114 = (void*)0;
struct sType* generics_type_47;
struct sType* __dec_obj35;
struct sClass* klass_78;
char* class_name_79;
char* fun_name2_80;
struct sFun* operator_fun_81;
void* __right_value115 = (void*)0;
char* none_generics_name_82;
void* __right_value116 = (void*)0;
struct sType* obj_type_83;
void* __right_value117 = (void*)0;
char* __dec_obj36;
void* __right_value118 = (void*)0;
char* fun_name3_84;
struct sGenericsFun* generics_fun_85;
void* __right_value119 = (void*)0;
_Bool _if_conditional1;
_Bool __result67__;
void* __right_value120 = (void*)0;
char* __dec_obj37;
int i_91;
void* __right_value121 = (void*)0;
char* new_fun_name_92;
void* __right_value122 = (void*)0;
char* __dec_obj38;
_Bool result_93;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct CVALUE* come_value_94;
char* left_value2_95;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
char* __dec_obj39;
void* __right_value128 = (void*)0;
char* __dec_obj40;
char* middle_value2_99;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
char* __dec_obj41;
void* __right_value132 = (void*)0;
char* __dec_obj42;
char* right_value2_100;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
char* __dec_obj43;
void* __right_value136 = (void*)0;
char* __dec_obj44;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
char* __dec_obj45;
void* __right_value142 = (void*)0;
struct sType* result_type1_101;
void* __right_value143 = (void*)0;
struct sType* result_type2_102;
void* __right_value144 = (void*)0;
struct sType* __dec_obj46;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
char* __dec_obj47;
void* __right_value147 = (void*)0;
char* __dec_obj48;
_Bool __result75__;
fun_name2_80 = (void*)0;
memset(&i_91, 0, sizeof(int));
left_value2_95 = (void*)0;
middle_value2_99 = (void*)0;
right_value2_100 = (void*)0;
    generics_type_47=(struct sType*)come_increment_ref_count(sType_clone(type));
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
        none_generics_name_82=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_83=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj36=fun_name2_80;
        fun_name2_80=(char*)come_increment_ref_count(create_method_name(obj_type_83,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_84=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_82,fun_name));
        generics_fun_85=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_84,((void*)0));
        if(generics_fun_85) {
            if((_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(fun_name2_80)))),generics_fun_85,obj_type_83,info))),            (__right_value119 = come_decrement_ref_count2(__right_value119, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
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
        fun_name2_80=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_91=128-1;        i_91>=1;        i_91--        ){
            new_fun_name_92=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_80,i_91));
            operator_fun_81=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_92);
            if(operator_fun_81) {
                __dec_obj38=fun_name2_80;
                fun_name2_80=(char*)come_increment_ref_count(__builtin_string(new_fun_name_92));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        come_value_94=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value123=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61, "CVALUE"))))));
        come_call_finalizer3(__right_value123,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        check_assign_type(((char*)(__right_value126=xsprintf("\%s is assigned to",((char*)(__right_value125=string_to_string(fun_name2_80)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,0), "18field.c", 63, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        __right_value125 = come_decrement_ref_count2(__right_value125, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value126 = come_decrement_ref_count2(__right_value126, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,0), "18field.c", 64, 1))->mHeap&&left_value->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,0), "18field.c", 65, 2)),left_value->type,left_value,info,(_Bool)1);
            __dec_obj39=left_value2_95;
            left_value2_95=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj40=left_value2_95;
            left_value2_95=(char*)come_increment_ref_count(string_clone(left_value->c_value));
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value130=xsprintf("\%s is assigned to",((char*)(__right_value129=string_to_string(fun_name2_80)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,1), "18field.c", 72, 3)),middle_value->type,middle_value,(_Bool)0,(_Bool)1,info);
        __right_value129 = come_decrement_ref_count2(__right_value129, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value130 = come_decrement_ref_count2(__right_value130, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,1), "18field.c", 73, 4))->mHeap&&middle_value->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,1), "18field.c", 74, 5)),middle_value->type,middle_value,info,(_Bool)1);
            __dec_obj41=middle_value2_99;
            middle_value2_99=(char*)come_increment_ref_count(xsprintf("%s",middle_value->c_value));
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj42=middle_value2_99;
            middle_value2_99=(char*)come_increment_ref_count(string_clone(middle_value->c_value));
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value134=xsprintf("\%s is assigned to",((char*)(__right_value133=string_to_string(fun_name2_80)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,2), "18field.c", 81, 6)),right_value->type,right_value,(_Bool)0,(_Bool)1,info);
        __right_value133 = come_decrement_ref_count2(__right_value133, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value134 = come_decrement_ref_count2(__right_value134, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,2), "18field.c", 82, 7))->mHeap&&right_value->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_81->mParamTypes,2), "18field.c", 83, 8)),right_value->type,right_value,info,(_Bool)1);
            __dec_obj43=right_value2_100;
            right_value2_100=(char*)come_increment_ref_count(xsprintf("%s",right_value->c_value));
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj44=right_value2_100;
            right_value2_100=(char*)come_increment_ref_count(string_clone(right_value->c_value));
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj45=come_value_94->c_value;
        come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("\%s(\%s,\%s,\%s)",((char*)(__right_value137=string_to_string(fun_name2_80))),((char*)(__right_value138=string_to_string(left_value2_95))),((char*)(__right_value139=string_to_string(middle_value2_99))),((char*)(__right_value140=string_to_string(right_value2_100)))));
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value137 = come_decrement_ref_count2(__right_value137, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value138 = come_decrement_ref_count2(__right_value138, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value139 = come_decrement_ref_count2(__right_value139, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type1_101=(struct sType*)come_increment_ref_count(sType_clone(operator_fun_81->mResultType));
        result_type2_102=(struct sType*)come_increment_ref_count(solve_generics(result_type1_101,generics_type_47,info));
        __dec_obj46=come_value_94->type;
        come_value_94->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2_102));
        come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_94->var=((void*)0);
        if(result_type2_102->mHeap) {
            append_object_to_right_values2(come_value_94,(struct sType*)come_increment_ref_count(result_type2_102),info);
        }
        if(result_type2_102->mGuardValue&&result_type2_102->mPointerNum>0) {
            __dec_obj47=come_value_94->c_value;
            come_value_94->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value145=make_type_name_string(result_type2_102,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_94->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value145 = come_decrement_ref_count2(__right_value145, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        __dec_obj48=come_value_94->c_value;
        come_value_94->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_94->c_value,come_value_94->type,info));
        __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s;\n",come_value_94->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_94));
        result_93=(_Bool)1;
        come_call_finalizer3(come_value_94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_95 = come_decrement_ref_count2(left_value2_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        middle_value2_99 = come_decrement_ref_count2(middle_value2_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_100 = come_decrement_ref_count2(right_value2_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type1_101,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_102,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result75__ = result_93;
    come_call_finalizer3(generics_type_47,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_80 = come_decrement_ref_count2(fun_name2_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result75__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
struct sType* __result45__;
void* __right_value79 = (void*)0;
struct sType* result_48;
void* __right_value86 = (void*)0;
struct list$1sTypeph* __dec_obj15;
void* __right_value89 = (void*)0;
struct tuple1$1sTypeph* __dec_obj17;
void* __right_value90 = (void*)0;
struct tuple1$1sTypeph* __dec_obj18;
void* __right_value91 = (void*)0;
char* __dec_obj19;
void* __right_value92 = (void*)0;
struct list$1sTypeph* __dec_obj20;
void* __right_value100 = (void*)0;
struct list$1sNodeph* __dec_obj24;
void* __right_value101 = (void*)0;
struct list$1sTypeph* __dec_obj25;
void* __right_value108 = (void*)0;
struct list$1charph* __dec_obj29;
void* __right_value109 = (void*)0;
struct tuple1$1sTypeph* __dec_obj30;
void* __right_value110 = (void*)0;
struct sNode* __dec_obj31;
void* __right_value111 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value112 = (void*)0;
char* __dec_obj33;
void* __right_value113 = (void*)0;
char* __dec_obj34;
struct sType* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result45__ = __result_obj__ = (void*)0;
        return __result45__;
    }
    result_48=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_48->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
        __dec_obj15=result_48->mMultipleTypes;
        result_48->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mMultipleTypes));
        come_call_finalizer3(__dec_obj15,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj17=result_48->mNoSolvedGenericsType;
        result_48->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj17,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj18=result_48->mOriginalLoadVarType;
        result_48->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj19=result_48->mGenericsName;
        result_48->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj20=result_48->mGenericsTypes;
        result_48->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj24=result_48->mArrayNum;
        result_48->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_48->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj25=result_48->mParamTypes;
        result_48->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj29=result_48->mParamNames;
        result_48->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj30=result_48->mResultType;
        result_48->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_48->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj31=result_48->mAlignas;
        result_48->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
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
        result_48->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_48->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_48->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj33=result_48->mOriginalTypeName;
        result_48->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        result_48->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
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
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result46__;
void* __right_value80 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1sTypeph* result_55;
struct list_item$1sTypeph* it_56;
void* __right_value85 = (void*)0;
struct list$1sTypeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==((void*)0)) {
        __result46__ = __result_obj__ = ((void*)0);
        return __result46__;
    }
    result_55=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value80=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))));
    come_call_finalizer3(__right_value80,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    it_56=self->head;
    while(it_56!=((void*)0)) {
        list$1sTypeph_add(result_55,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value85=sType_clone(it_56->item)))));
        come_call_finalizer3(__right_value85,sType_finalize, 0, 1, 0, 0, __result_obj__);
        it_56=it_56->next;
    }
    __result49__ = __result_obj__ = result_55;
    come_call_finalizer3(result_55,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result49__;
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
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_49;
struct list_item$1sTypeph* prev_it_50;
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

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_51;
struct list_item$1sNodeph* prev_it_52;
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

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* __right_value82 = (void*)0;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj12;
void* __right_value83 = (void*)0;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj13;
void* __right_value84 = (void*)0;
struct list_item$1sTypeph* litem_59;
struct sType* __dec_obj14;
struct list$1sTypeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->len==0) {
        litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value82=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
        come_call_finalizer3(__right_value82,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
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
            litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
            come_call_finalizer3(__right_value83,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_58->prev=self->head;
            litem_58->next=((void*)0);
            __dec_obj13=litem_58->item;
            litem_58->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_58;
            self->head->next=litem_58;
        }
        else {
            litem_59=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
            come_call_finalizer3(__right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
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
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_60;
struct list_item$1sTypeph* prev_it_61;
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
void* __right_value87 = (void*)0;
struct tuple1$1sTypeph* result_62;
void* __right_value88 = (void*)0;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result50__ = __result_obj__ = (void*)0;
        return __result50__;
    }
    result_62=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj16=result_62->v1;
        result_62->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result51__ = __result_obj__ = result_62;
    come_call_finalizer3(result_62,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    return __result51__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result52__;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct list$1sNodeph* result_63;
struct list_item$1sNodeph* it_64;
void* __right_value99 = (void*)0;
struct list$1sNodeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==((void*)0)) {
        __result52__ = __result_obj__ = ((void*)0);
        return __result52__;
    }
    result_63=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value93=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))));
    come_call_finalizer3(__right_value93,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    it_64=self->head;
    while(it_64!=((void*)0)) {
        list$1sNodeph_add(result_63,(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value99=sNode_clone(it_64->item)))));
        if(__right_value99) { __right_value99 = come_decrement_ref_count2(__right_value99, ((struct sNode*)__right_value99)->finalize, ((struct sNode*)__right_value99)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        it_64=it_64->next;
    }
    __result57__ = __result_obj__ = result_63;
    come_call_finalizer3(result_63,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result57__;
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
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* __right_value95 = (void*)0;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj21;
void* __right_value96 = (void*)0;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj22;
void* __right_value97 = (void*)0;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->len==0) {
        litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value95=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
        come_call_finalizer3(__right_value95,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
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
            litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value96,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_66->prev=self->head;
            litem_66->next=((void*)0);
            __dec_obj22=litem_66->item;
            litem_66->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_66;
            self->head->next=litem_66;
        }
        else {
            litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
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
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
struct sNode* __result55__;
void* __right_value98 = (void*)0;
struct sNode* result_68;
struct sNode* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result55__ = __result_obj__ = (void*)0;
        return __result55__;
    }
    result_68=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
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
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_69;
struct list_item$1sNodeph* prev_it_70;
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
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1charph* result_71;
struct list_item$1charph* it_72;
void* __right_value107 = (void*)0;
struct list$1charph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==((void*)0)) {
        __result58__ = __result_obj__ = ((void*)0);
        return __result58__;
    }
    result_71=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value102=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))));
    come_call_finalizer3(__right_value102,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    it_72=self->head;
    while(it_72!=((void*)0)) {
        list$1charph_add(result_71,(char*)come_increment_ref_count(((char*)(__right_value107=string_clone(it_72->item)))));
        __right_value107 = come_decrement_ref_count2(__right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        it_72=it_72->next;
    }
    __result61__ = __result_obj__ = result_71;
    come_call_finalizer3(result_71,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result61__;
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
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
void* __right_value104 = (void*)0;
struct list_item$1charph* litem_73;
char* __dec_obj26;
void* __right_value105 = (void*)0;
struct list_item$1charph* litem_74;
char* __dec_obj27;
void* __right_value106 = (void*)0;
struct list_item$1charph* litem_75;
char* __dec_obj28;
struct list$1charph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->len==0) {
        litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value104=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
        come_call_finalizer3(__right_value104,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
            litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value105=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
            come_call_finalizer3(__right_value105,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_74->prev=self->head;
            litem_74->next=((void*)0);
            __dec_obj27=litem_74->item;
            litem_74->item=(char*)come_increment_ref_count(item);
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_74;
            self->head->next=litem_74;
        }
        else {
            litem_75=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
            come_call_finalizer3(__right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_76;
struct list_item$1charph* prev_it_77;
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
default_value_88 = (void*)0;
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
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
struct list_item$1sTypeph* it_96;
int i_97;
struct sType* __result72__;
struct sType* default_value_98;
struct sType* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
default_value_98 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_96=self->head;
    i_97=0;
    while(it_96!=((void*)0)) {
        if(position==i_97) {
            __result72__ = __result_obj__ = it_96->item;
            return __result72__;
        }
        it_96=it_96->next;
        i_97++;
    }
    memset(&default_value_98,0,sizeof(struct sType*));
    __result73__ = __result_obj__ = default_value_98;
    come_call_finalizer3(default_value_98,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result73__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
void* __right_value148 = (void*)0;
struct list_item$1CVALUEph* litem_103;
struct CVALUE* __dec_obj49;
void* __right_value149 = (void*)0;
struct list_item$1CVALUEph* litem_104;
struct CVALUE* __dec_obj50;
void* __right_value150 = (void*)0;
struct list_item$1CVALUEph* litem_105;
struct CVALUE* __dec_obj51;
struct list$1CVALUEph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->len==0) {
        litem_103=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value148=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 219, "list_item$1CVALUEph"))));
        come_call_finalizer3(__right_value148,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_103->prev=((void*)0);
        litem_103->next=((void*)0);
        __dec_obj49=litem_103->item;
        litem_103->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj49,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_103;
        self->head=litem_103;
    }
    else {
        if(self->len==1) {
            litem_104=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value149=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 229, "list_item$1CVALUEph"))));
            come_call_finalizer3(__right_value149,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_104->prev=self->head;
            litem_104->next=((void*)0);
            __dec_obj50=litem_104->item;
            litem_104->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_104;
            self->head->next=litem_104;
        }
        else {
            litem_105=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value150=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 239, "list_item$1CVALUEph"))));
            come_call_finalizer3(__right_value150,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_105->prev=self->tail;
            litem_105->next=((void*)0);
            __dec_obj51=litem_105->item;
            litem_105->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_105;
            self->tail=litem_105;
        }
    }
    self->len++;
    __result74__ = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result74__;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
struct sNode* __dec_obj52;
void* __right_value153 = (void*)0;
struct sNode* __dec_obj53;
void* __right_value154 = (void*)0;
char* __dec_obj54;
struct sStoreFieldNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value151=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value151,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj52=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj53=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj54=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result76__ = __result_obj__ = self;
    come_call_finalizer3(self,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result76__;
}

char* sStoreFieldNode_kind(struct sStoreFieldNode* self){
void* __result_obj__;
void* __right_value155 = (void*)0;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    __result77__ = __result_obj__ = ((char*)(__right_value155=__builtin_string("sStoreFieldNode")));
    __right_value155 = come_decrement_ref_count2(__right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result77__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
struct sNode* left_106;
struct sNode* right_107;
void* __right_value156 = (void*)0;
char* name_108;
_Bool __result78__;
void* __right_value157 = (void*)0;
struct CVALUE* left_value_109;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
char* __dec_obj55;
_Bool __result79__;
void* __right_value160 = (void*)0;
struct CVALUE* right_value_110;
struct sType* right_type_111;
struct sType* left_type_112;
void* __right_value161 = (void*)0;
struct sType* left_type2_113;
struct sClass* klass_114;
struct sType* field_type_120;
int index_121;
char* child_field_name_122;
_Bool child_field_is_pointer_123;
_Bool __result84__;
struct list$1tuple2$2charphsTypephph* o2_saved_124;
struct tuple2$2charphsTypeph* field_127;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_130;
struct sType* field_type2_131;
void* __right_value162 = (void*)0;
struct sType* __dec_obj56;
struct list$1tuple2$2charphsTypephph* o2_saved_132;
struct tuple2$2charphsTypeph* field_133;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* field_name_134;
struct sType* field_type2_135;
struct sClass* klass2_136;
struct list$1tuple2$2charphsTypephph* o2_saved_137;
struct tuple2$2charphsTypeph* field2_138;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* field_name2_139;
struct sType* field_type3_140;
void* __right_value163 = (void*)0;
char* __dec_obj57;
void* __right_value164 = (void*)0;
struct sType* __dec_obj58;
void* __right_value165 = (void*)0;
struct sType* __dec_obj59;
_Bool __result91__;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
struct CVALUE* come_value_141;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
_Bool __result92__;
char* c_value_142;
void* __right_value171 = (void*)0;
char* __dec_obj60;
void* __right_value172 = (void*)0;
char* __dec_obj61;
void* __right_value173 = (void*)0;
char* __dec_obj62;
void* __right_value174 = (void*)0;
char* __dec_obj63;
void* __right_value175 = (void*)0;
char* c_value_143;
void* __right_value176 = (void*)0;
char* __dec_obj64;
char* c_value_144;
void* __right_value177 = (void*)0;
char* __dec_obj65;
void* __right_value178 = (void*)0;
char* __dec_obj66;
void* __right_value179 = (void*)0;
char* __dec_obj67;
void* __right_value180 = (void*)0;
char* __dec_obj68;
void* __right_value181 = (void*)0;
char* c_value_145;
void* __right_value182 = (void*)0;
char* __dec_obj69;
void* __right_value183 = (void*)0;
char* __dec_obj70;
_Bool __result93__;
char* c_value_146;
void* __right_value184 = (void*)0;
char* __dec_obj71;
void* __right_value185 = (void*)0;
char* __dec_obj72;
void* __right_value186 = (void*)0;
char* __dec_obj73;
void* __right_value187 = (void*)0;
char* __dec_obj74;
void* __right_value188 = (void*)0;
char* c_value_147;
void* __right_value189 = (void*)0;
char* __dec_obj75;
char* c_value_148;
void* __right_value190 = (void*)0;
char* __dec_obj76;
void* __right_value191 = (void*)0;
char* __dec_obj77;
void* __right_value192 = (void*)0;
char* __dec_obj78;
void* __right_value193 = (void*)0;
char* __dec_obj79;
void* __right_value194 = (void*)0;
char* c_value_149;
void* __right_value195 = (void*)0;
char* __dec_obj80;
_Bool __result94__;
void* __right_value196 = (void*)0;
char* __dec_obj81;
void* __right_value197 = (void*)0;
char* __dec_obj82;
void* __right_value198 = (void*)0;
char* __dec_obj83;
void* __right_value199 = (void*)0;
char* __dec_obj84;
void* __right_value200 = (void*)0;
char* __dec_obj85;
void* __right_value201 = (void*)0;
char* __dec_obj86;
_Bool __result95__;
void* __right_value202 = (void*)0;
struct sType* __dec_obj87;
_Bool __result96__;
c_value_142 = (void*)0;
c_value_144 = (void*)0;
c_value_146 = (void*)0;
c_value_148 = (void*)0;
    left_106=self->mLeft;
    right_107=self->mRight;
    name_108=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(!node_compile(left_106,info)) {
        __result78__ = (_Bool)0;
        name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result78__;
    }
    left_value_109=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(gComeDebug&&left_value_109->type->mPointerNum>0) {
        __dec_obj55=left_value_109->c_value;
        left_value_109->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value158=make_type_name_string(left_value_109->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_109->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(!node_compile(right_107,info)) {
        __result79__ = (_Bool)0;
        name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result79__;
    }
    right_value_110=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_111=right_value_110->type;
    dec_stack_ptr(1,info);
    left_type_112=left_value_109->type;
    left_type2_113=(struct sType*)come_increment_ref_count(solve_generics(left_type_112,left_type_112,info));
    klass_114=left_type2_113->mClass;
    klass_114=map$2charphsClassphp_operator_load_element(info->classes,klass_114->mName);
    field_type_120=((void*)0);
    index_121=0;
    child_field_name_122=((void*)0);
    child_field_is_pointer_123=(_Bool)0;
    klass_114=map$2charphsClassphp_operator_load_element(info->classes,klass_114->mName);
    if(klass_114->mFields==((void*)0)) {
        err_msg(info,"%s fields are null",klass_114->mName);
        __result84__ = (_Bool)0;
        name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result84__;
    }
    for(    o2_saved_124=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_114->mFields)),field_127=list$1tuple2$2charphsTypephph_begin((o2_saved_124));    !list$1tuple2$2charphsTypephph_end((o2_saved_124));    field_127=list$1tuple2$2charphsTypephph_next((o2_saved_124))    ){
        multiple_assign_var1=field_127;
        field_name_130=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type2_131=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(string_operator_equals(field_name_130,name_108)) {
            __dec_obj56=field_type_120;
            field_type_120=(struct sType*)come_increment_ref_count(sType_clone(field_type2_131));
            come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
            field_name_130 = come_decrement_ref_count2(field_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_131,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_121++;
        field_name_130 = come_decrement_ref_count2(field_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_131,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_124,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(index_121==list$1tuple2$2charphsTypephph_length(klass_114->mFields)) {
        index_121=0;
        for(        o2_saved_132=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_114->mFields)),field_133=list$1tuple2$2charphsTypephph_begin((o2_saved_132));        !list$1tuple2$2charphsTypephph_end((o2_saved_132));        field_133=list$1tuple2$2charphsTypephph_next((o2_saved_132))        ){
            multiple_assign_var2=field_133;
            field_name_134=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            field_type2_135=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            klass2_136=field_type2_135->mClass;
            for(            o2_saved_137=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_136->mFields)),field2_138=list$1tuple2$2charphsTypephph_begin((o2_saved_137));            !list$1tuple2$2charphsTypephph_end((o2_saved_137));            field2_138=list$1tuple2$2charphsTypephph_next((o2_saved_137))            ){
                multiple_assign_var3=field2_138;
                field_name2_139=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                field_type3_140=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                if(string_operator_equals(field_name2_139,name_108)) {
                    __dec_obj57=child_field_name_122;
                    child_field_name_122=(char*)come_increment_ref_count(__builtin_string(field_name_134));
                    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(field_type2_135->mPointerNum>0) {
                        child_field_is_pointer_123=(_Bool)1;
                    }
                    __dec_obj58=field_type_120;
                    field_type_120=(struct sType*)come_increment_ref_count(sType_clone(field_type3_140));
                    come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
                    field_name2_139 = come_decrement_ref_count2(field_name2_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_140,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_139 = come_decrement_ref_count2(field_name2_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_140,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_137,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(child_field_name_122) {
                field_name_134 = come_decrement_ref_count2(field_name_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(string_operator_equals(field_name_134,name_108)) {
                __dec_obj59=field_type_120;
                field_type_120=(struct sType*)come_increment_ref_count(sType_clone(field_type2_135));
                come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
                field_name_134 = come_decrement_ref_count2(field_name_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_121++;
            field_name_134 = come_decrement_ref_count2(field_name_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_135,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_132,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(index_121==list$1tuple2$2charphsTypephph_length(klass_114->mFields)) {
            err_msg(info,"field not found(%s) in %s(1)",name_108,klass_114->mName);
            __result91__ = (_Bool)0;
            name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result91__;
        }
    }
    come_value_141=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value166=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 228, "CVALUE"))))));
    come_call_finalizer3(__right_value166,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    check_assign_type(((char*)(__right_value169=xsprintf("\%s is assigned to",((char*)(__right_value168=string_to_string(name_108)))))),field_type_120,right_type_111,right_value_110,(_Bool)0,(_Bool)1,info);
    __right_value168 = come_decrement_ref_count2(__right_value168, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value169 = come_decrement_ref_count2(__right_value169, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_type_111=((struct sType*)(__right_value170=sType_clone(right_value_110->type)));
    come_call_finalizer3(__right_value170,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(field_type_120->mHeap&&!right_value_110->type->mHeap) {
        if(string_operator_equals(right_value_110->type->mClass->mName,"void")&&right_value_110->type->mPointerNum==1) {
        }
        else {
            if(!right_value_110->type->mDelegate&&!right_value_110->type->mShare&&!gComeGC) {
                err_msg(info,"require right value as heap object(%s)(1)",name_108);
                printf("right type is %s pointer num %d heap %d\n",right_value_110->type->mClass->mName,right_value_110->type->mPointerNum,right_value_110->type->mHeap);
                __result92__ = (_Bool)0;
                name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result92__;
            }
        }
    }
    if(field_type_120->mHeap&&right_type_111->mHeap&&field_type_120->mPointerNum>0&&right_type_111->mPointerNum>0) {
        if(left_value_109->type->mPointerNum==1) {
            if(child_field_name_122) {
                if(child_field_is_pointer_123) {
                    __dec_obj60=c_value_142;
                    c_value_142=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_109->c_value,child_field_name_122,name_108));
                    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj61=c_value_142;
                    c_value_142=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_109->c_value,child_field_name_122,name_108));
                    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_120,c_value_142,info,(_Bool)0);
                std_move(field_type_120,right_type_111,right_value_110,info,(_Bool)0);
                if(child_field_is_pointer_123) {
                    __dec_obj62=come_value_141->c_value;
                    come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value));
                    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj63=come_value_141->c_value;
                    come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value));
                    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                c_value_142 = come_decrement_ref_count2(c_value_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_143=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_109->c_value,name_108));
                decrement_ref_count_object(field_type_120,c_value_143,info,(_Bool)0);
                std_move(field_type_120,right_type_111,right_value_110,info,(_Bool)0);
                __dec_obj64=come_value_141->c_value;
                come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_109->c_value,name_108,right_value_110->c_value));
                __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                c_value_143 = come_decrement_ref_count2(c_value_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            if(left_value_109->type->mPointerNum==0) {
                if(child_field_name_122) {
                    if(child_field_is_pointer_123) {
                        __dec_obj65=c_value_144;
                        c_value_144=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_109->c_value,child_field_name_122,name_108));
                        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        __dec_obj66=c_value_144;
                        c_value_144=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_109->c_value,child_field_name_122,name_108));
                        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    decrement_ref_count_object(field_type_120,c_value_144,info,(_Bool)0);
                    std_move(field_type_120,right_type_111,right_value_110,info,(_Bool)0);
                    if(child_field_is_pointer_123) {
                        __dec_obj67=come_value_141->c_value;
                        come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value));
                        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        __dec_obj68=come_value_141->c_value;
                        come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value));
                        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    c_value_144 = come_decrement_ref_count2(c_value_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    c_value_145=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_109->c_value,name_108));
                    decrement_ref_count_object(field_type_120,c_value_145,info,(_Bool)0);
                    __dec_obj69=right_value_110->c_value;
                    right_value_110->c_value=(char*)come_increment_ref_count(increment_ref_count_object(right_value_110->type,right_value_110->c_value,info));
                    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj70=come_value_141->c_value;
                    come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_109->c_value,name_108,right_value_110->c_value));
                    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                    c_value_145 = come_decrement_ref_count2(c_value_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_108,left_value_109->type->mPointerNum);
                __result93__ = (_Bool)0;
                name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result93__;
            }
        }
    }
    else {
        if(field_type_120->mHeap&&field_type_120->mPointerNum>0&&right_type_111->mPointerNum>0&&string_operator_equals(right_type_111->mClass->mName,"void")) {
            if(left_value_109->type->mPointerNum==1) {
                if(child_field_name_122) {
                    if(child_field_is_pointer_123) {
                        __dec_obj71=c_value_146;
                        c_value_146=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_109->c_value,child_field_name_122,name_108));
                        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        __dec_obj72=c_value_146;
                        c_value_146=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_109->c_value,child_field_name_122,name_108));
                        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    decrement_ref_count_object(field_type_120,c_value_146,info,(_Bool)0);
                    if(child_field_is_pointer_123) {
                        __dec_obj73=come_value_141->c_value;
                        come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value));
                        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        __dec_obj74=come_value_141->c_value;
                        come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value));
                        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    c_value_146 = come_decrement_ref_count2(c_value_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    c_value_147=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_109->c_value,name_108));
                    decrement_ref_count_object(field_type_120,c_value_147,info,(_Bool)0);
                    __dec_obj75=come_value_141->c_value;
                    come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_109->c_value,name_108,right_value_110->c_value));
                    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                    c_value_147 = come_decrement_ref_count2(c_value_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                if(left_value_109->type->mPointerNum==0) {
                    if(child_field_name_122) {
                        if(child_field_is_pointer_123) {
                            __dec_obj76=c_value_148;
                            c_value_148=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_109->c_value,child_field_name_122,name_108));
                            __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj77=c_value_148;
                            c_value_148=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_109->c_value,child_field_name_122,name_108));
                            __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        decrement_ref_count_object(field_type_120,c_value_148,info,(_Bool)0);
                        if(child_field_is_pointer_123) {
                            __dec_obj78=come_value_141->c_value;
                            come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value));
                            __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj79=come_value_141->c_value;
                            come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value));
                            __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        c_value_148 = come_decrement_ref_count2(c_value_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        c_value_149=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_109->c_value,name_108));
                        decrement_ref_count_object(field_type_120,c_value_149,info,(_Bool)0);
                        __dec_obj80=come_value_141->c_value;
                        come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_109->c_value,name_108,right_value_110->c_value));
                        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                        c_value_149 = come_decrement_ref_count2(c_value_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_108,left_value_109->type->mPointerNum);
                    __result94__ = (_Bool)0;
                    name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                    child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    return __result94__;
                }
            }
        }
        else {
            if(left_value_109->type->mPointerNum==1) {
                if(child_field_name_122) {
                    if(child_field_is_pointer_123) {
                        __dec_obj81=come_value_141->c_value;
                        come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value));
                        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        __dec_obj82=come_value_141->c_value;
                        come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value));
                        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                else {
                    __dec_obj83=come_value_141->c_value;
                    come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_109->c_value,name_108,right_value_110->c_value));
                    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                if(left_value_109->type->mPointerNum==0) {
                    if(child_field_name_122) {
                        if(child_field_is_pointer_123) {
                            __dec_obj84=come_value_141->c_value;
                            come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value));
                            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj85=come_value_141->c_value;
                            come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_109->c_value,child_field_name_122,name_108,right_value_110->c_value));
                            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                    }
                    else {
                        __dec_obj86=come_value_141->c_value;
                        come_value_141->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_109->c_value,name_108,right_value_110->c_value));
                        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_108,left_value_109->type->mPointerNum);
                    __result95__ = (_Bool)0;
                    name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
                    child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    return __result95__;
                }
            }
        }
    }
    __dec_obj87=come_value_141->type;
    come_value_141->type=(struct sType*)come_increment_ref_count(sType_clone(field_type_120));
    come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_141->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_141));
    add_come_last_code(info,"%s;\n",come_value_141->c_value);
    __result96__ = (_Bool)1;
    name_108 = come_decrement_ref_count2(name_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_113,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_122 = come_decrement_ref_count2(child_field_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result96__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_115;
unsigned int hash_116;
unsigned int it_117;
struct sClass* __result80__;
struct sClass* __result81__;
struct sClass* __result82__;
struct sClass* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
default_value_115 = (void*)0;
    memset(&default_value_115,0,sizeof(struct sClass*));
    hash_116=string_get_hash_key(((char*)key))%self->size;
    it_117=hash_116;
    while((_Bool)1) {
        if(self->item_existance[it_117]) {
            if(string_equals(self->keys[it_117],key)) {
                __result80__ = __result_obj__ = self->items[it_117];
                come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 0, 0, (void*)0);
                return __result80__;
            }
            it_117++;
            if(it_117>=self->size) {
                it_117=0;
            }
            else {
                if(it_117==hash_116) {
                    __result81__ = __result_obj__ = default_value_115;
                    come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    return __result81__;
                }
            }
        }
        else {
            __result82__ = __result_obj__ = default_value_115;
            come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result82__;
        }
    }
    __result83__ = __result_obj__ = default_value_115;
    come_call_finalizer3(default_value_115,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result83__;
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
struct list_item$1tuple2$2charphsTypephph* it_118;
struct list_item$1tuple2$2charphsTypephph* prev_it_119;
    it_118=self->head;
    while(it_118!=((void*)0)) {
        prev_it_119=it_118;
        it_118=it_118->next;
        come_call_finalizer3(prev_it_119,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct tuple2$2charphsTypeph* result_125;
struct tuple2$2charphsTypeph* __result85__;
struct tuple2$2charphsTypeph* __result86__;
struct tuple2$2charphsTypeph* result_126;
struct tuple2$2charphsTypeph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
result_125 = (void*)0;
result_126 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_125,0,sizeof(struct tuple2$2charphsTypeph*));
        __result85__ = __result_obj__ = result_125;
        return __result85__;
    }
    self->it=self->head;
    if(self->it) {
        __result86__ = __result_obj__ = self->it->item;
        return __result86__;
    }
    memset(&result_126,0,sizeof(struct tuple2$2charphsTypeph*));
    __result87__ = __result_obj__ = result_126;
    return __result87__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct tuple2$2charphsTypeph* result_128;
struct tuple2$2charphsTypeph* __result88__;
struct tuple2$2charphsTypeph* __result89__;
struct tuple2$2charphsTypeph* result_129;
struct tuple2$2charphsTypeph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
result_128 = (void*)0;
result_129 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_128,0,sizeof(struct tuple2$2charphsTypeph*));
        __result88__ = __result_obj__ = result_128;
        return __result88__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result89__ = __result_obj__ = self->it->item;
        return __result89__;
    }
    memset(&result_129,0,sizeof(struct tuple2$2charphsTypeph*));
    __result90__ = __result_obj__ = result_129;
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
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct sNode* __dec_obj88;
struct sNullCheckNode* __result97__;
struct sNullCheckNode* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value203=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value203,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj88=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); }
    self->mOnlyNullCecker=only_null_checker;
    __result97__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result97__;
    __result98__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result98__;
}

char* sNullCheckNode_kind(struct sNullCheckNode* self){
void* __result_obj__;
void* __right_value205 = (void*)0;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
    __result99__ = __result_obj__ = ((char*)(__right_value205=__builtin_string("sNullCheckNode")));
    __right_value205 = come_decrement_ref_count2(__right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result99__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
struct sNode* left_150;
void* __right_value206 = (void*)0;
struct CVALUE* left_value_151;
void* __right_value207 = (void*)0;
char* method_name_152;
struct sType* obj_type_155;
struct sType* obj_type2_156;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
char* __dec_obj89;
struct sFun* fun_157;
_Bool __result104__;
void* __right_value210 = (void*)0;
struct sType* type_158;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct CVALUE* come_value_159;
void* __right_value213 = (void*)0;
char* __dec_obj90;
void* __right_value214 = (void*)0;
struct sType* __dec_obj91;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct CVALUE* come_value_160;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
char* __dec_obj92;
void* __right_value219 = (void*)0;
struct sType* __dec_obj93;
_Bool __result105__;
    left_150=self->mLeft;
    if(!node_compile(left_150,info)) {
        return (_Bool)0;
    }
    left_value_151=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(!self->mOnlyNullCecker&&left_value_151->type->mNoSolvedGenericsType&&left_value_151->type->mNoSolvedGenericsType->v1&&left_value_151->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_151->type->mNoSolvedGenericsType->v1->mClass->mName,"optional")) {
        method_name_152=(char*)come_increment_ref_count(create_method_name(left_value_151->type,(_Bool)0,"expect",info,(_Bool)1));
        if(map$2charphsFunph_at(info->funcs,method_name_152,((void*)0))==((void*)0)) {
            obj_type_155=left_value_151->type->mNoSolvedGenericsType->v1;
            if(list$1sTypeph_length(obj_type_155->mGenericsTypes)>0) {
                obj_type2_156=left_value_151->type;
                __dec_obj89=method_name_152;
                method_name_152=(char*)come_increment_ref_count(make_generics_function(obj_type2_156,(char*)come_increment_ref_count(((char*)(__right_value208=__builtin_string("expect")))),info,(_Bool)1));
                __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value208 = come_decrement_ref_count2(__right_value208, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require expect implementation(%s)",left_value_151->type->mClass->mName);
                exit(1);
            }
        }
        fun_157=map$2charphsFunphp_operator_load_element(info->funcs,method_name_152);
        if(fun_157==((void*)0)) {
            err_msg(info,"function not found(%s)",method_name_152);
            __result104__ = (_Bool)1;
            method_name_152 = come_decrement_ref_count2(method_name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result104__;
        }
        type_158=(struct sType*)come_increment_ref_count(solve_generics(fun_157->mResultType,left_value_151->type,info));
        come_value_159=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value211=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 459, "CVALUE"))))));
        come_call_finalizer3(__right_value211,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj90=come_value_159->c_value;
        come_value_159->c_value=(char*)come_increment_ref_count(xsprintf("%s(%s)",method_name_152,left_value_151->c_value));
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj91=come_value_159->type;
        come_value_159->type=(struct sType*)come_increment_ref_count(sType_clone(type_158));
        come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_159->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_159));
        add_come_last_code(info,"%s;\n",come_value_159->c_value);
        method_name_152 = come_decrement_ref_count2(method_name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_158,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_159,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(!gComeDebug) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_151));
        }
        else {
            if(left_value_151->type->mPointerNum>0) {
                come_value_160=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value215=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 473, "CVALUE"))))));
                come_call_finalizer3(__right_value215,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj92=come_value_160->c_value;
                come_value_160->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value217=make_type_name_string(left_value_151->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_151->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
                __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value217 = come_decrement_ref_count2(__right_value217, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj93=come_value_160->type;
                come_value_160->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_151->type));
                come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_160->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_160));
                add_come_last_code(info,"%s;\n",come_value_160->c_value);
                come_call_finalizer3(come_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_151));
            }
        }
    }
    __result105__ = (_Bool)1;
    come_call_finalizer3(left_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result105__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_153;
unsigned int it_154;
struct sFun* __result100__;
struct sFun* __result101__;
struct sFun* __result102__;
struct sFun* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
    hash_153=string_get_hash_key(((char*)key))%self->size;
    it_154=hash_153;
    while((_Bool)1) {
        if(self->item_existance[it_154]) {
            if(string_equals(self->keys[it_154],key)) {
                __result100__ = __result_obj__ = self->items[it_154];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result100__;
            }
            it_154++;
            if(it_154>=self->size) {
                it_154=0;
            }
            else {
                if(it_154==hash_153) {
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
}

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct sNode* __dec_obj94;
struct sNullableNode* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value220=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value220,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj94=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); }
    __result106__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result106__;
}

char* sNullableNode_kind(struct sNullableNode* self){
void* __result_obj__;
void* __right_value222 = (void*)0;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
    __result107__ = __result_obj__ = ((char*)(__right_value222=__builtin_string("sNullableNode")));
    __right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result107__;
}

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info){
struct sNode* left_161;
void* __right_value223 = (void*)0;
struct CVALUE* left_value_162;
void* __right_value228 = (void*)0;
struct CVALUE* come_value_163;
_Bool __result110__;
    left_161=self->mLeft;
    if(!node_compile(left_161,info)) {
        return (_Bool)0;
    }
    left_value_162=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(left_value_162->type->mPointerNum>0&&left_value_162->type->mNullValue) {
        come_value_163=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(left_value_162));
        come_value_163->type->mNullValue=(_Bool)0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_163));
        add_come_last_code(info,"%s;\n",come_value_163->c_value);
        come_call_finalizer3(come_value_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_162));
    }
    __result110__ = (_Bool)1;
    come_call_finalizer3(left_value_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result110__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
struct CVALUE* __result108__;
void* __right_value224 = (void*)0;
struct CVALUE* result_164;
void* __right_value225 = (void*)0;
char* __dec_obj95;
void* __right_value226 = (void*)0;
struct sType* __dec_obj96;
void* __right_value227 = (void*)0;
char* __dec_obj97;
struct CVALUE* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result108__ = __result_obj__ = (void*)0;
        return __result108__;
    }
    result_164=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj95=result_164->c_value;
        result_164->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj96=result_164->type;
        result_164->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_164->var=self->var;
    }
    if(self!=((void*)0)) {
        result_164->right_value_objects=self->right_value_objects;
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj97=result_164->c_value_without_right_value_objects;
        result_164->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result109__ = __result_obj__ = result_164;
    come_call_finalizer3(result_164,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result109__;
}

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info){
void* __result_obj__;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct sNode* __dec_obj98;
void* __right_value231 = (void*)0;
struct sNode* __dec_obj99;
void* __right_value232 = (void*)0;
struct sNode* __dec_obj100;
struct sRangeCheckNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value229=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value229,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj98=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count2(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj99=self->mBegin;
    self->mBegin=(struct sNode*)come_increment_ref_count(sNode_clone(begin));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj100=self->mEnd;
    self->mEnd=(struct sNode*)come_increment_ref_count(sNode_clone(end));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
    __result111__ = __result_obj__ = self;
    come_call_finalizer3(self,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result111__;
}

char* sRangeCheckNode_kind(struct sRangeCheckNode* self){
void* __result_obj__;
void* __right_value233 = (void*)0;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
    __result112__ = __result_obj__ = ((char*)(__right_value233=__builtin_string("sRangeCheckNode")));
    __right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result112__;
}

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info){
struct sNode* left_165;
void* __right_value234 = (void*)0;
struct CVALUE* left_value_166;
struct sNode* begin_167;
_Bool __result113__;
void* __right_value235 = (void*)0;
struct CVALUE* begin_value_168;
struct sNode* end_169;
_Bool __result114__;
void* __right_value236 = (void*)0;
struct CVALUE* end_value_170;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct CVALUE* come_value_171;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
char* __dec_obj101;
void* __right_value241 = (void*)0;
struct sType* __dec_obj102;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct CVALUE* come_value_172;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
char* __dec_obj103;
void* __right_value246 = (void*)0;
struct sType* __dec_obj104;
_Bool __result115__;
    left_165=self->mLeft;
    if(!node_compile(left_165,info)) {
        return (_Bool)0;
    }
    left_value_166=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    begin_167=self->mBegin;
    if(!node_compile(begin_167,info)) {
        __result113__ = (_Bool)0;
        come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result113__;
    }
    begin_value_168=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    end_169=self->mEnd;
    if(!node_compile(end_169,info)) {
        __result114__ = (_Bool)0;
        come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(begin_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result114__;
    }
    end_value_170=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(left_value_166->type->mPointerNum>0) {
        if(!gComeDebug) {
            come_value_171=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value237=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 580, "CVALUE"))))));
            come_call_finalizer3(__right_value237,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj101=come_value_171->c_value;
            come_value_171->c_value=(char*)come_increment_ref_count(xsprintf("(*((%s)%s))",((char*)(__right_value239=make_type_name_string(left_value_166->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_166->c_value));
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value239 = come_decrement_ref_count2(__right_value239, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            left_value_166->type->mPointerNum--;
            __dec_obj102=come_value_171->type;
            come_value_171->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_166->type));
            come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_171->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_171));
            add_come_last_code(info,"%s;\n",come_value_171->c_value);
            come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_172=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value242=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 593, "CVALUE"))))));
            come_call_finalizer3(__right_value242,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj103=come_value_172->c_value;
            come_value_172->c_value=(char*)come_increment_ref_count(xsprintf("(*((%s)come_range_check(%s, %s, %s, \"%s\", %d)))",((char*)(__right_value244=make_type_name_string(left_value_166->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_166->c_value,begin_value_168->c_value,end_value_170->c_value,info->sname,info->sline));
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value244 = come_decrement_ref_count2(__right_value244, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            left_value_166->type->mPointerNum--;
            __dec_obj104=come_value_172->type;
            come_value_172->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_166->type));
            come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_172->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_172));
            add_come_last_code(info,"%s;\n",come_value_172->c_value);
            come_call_finalizer3(come_value_172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_166));
    }
    __result115__ = (_Bool)1;
    come_call_finalizer3(left_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(begin_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(end_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result115__;
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct sNode* __dec_obj105;
void* __right_value249 = (void*)0;
char* __dec_obj106;
struct sLoadFieldNode* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value247=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value247,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj105=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj106=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result116__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result116__;
}

char* sLoadFieldNode_kind(struct sLoadFieldNode* self){
void* __result_obj__;
void* __right_value250 = (void*)0;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
    __result117__ = __result_obj__ = ((char*)(__right_value250=__builtin_string("sLoadFieldNode")));
    __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result117__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
struct sNode* left_173;
void* __right_value251 = (void*)0;
char* name_174;
_Bool __result118__;
void* __right_value252 = (void*)0;
struct CVALUE* left_value_175;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
char* __dec_obj107;
struct sType* left_type_176;
void* __right_value255 = (void*)0;
struct sType* left_type2_177;
struct sClass* klass_178;
struct sType* field_type_179;
int index_180;
_Bool child_field_is_pointer_181;
char* child_field_name_182;
_Bool __result119__;
struct list$1tuple2$2charphsTypephph* o2_saved_183;
struct tuple2$2charphsTypeph* field_184;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* field_name_185;
struct sType* field_type2_186;
void* __right_value256 = (void*)0;
struct sType* __dec_obj108;
struct list$1tuple2$2charphsTypephph* o2_saved_187;
struct tuple2$2charphsTypeph* field_188;
struct tuple2$2charphsTypeph* multiple_assign_var5;
char* field_name_189;
struct sType* field_type2_190;
struct sClass* klass2_191;
struct list$1tuple2$2charphsTypephph* o2_saved_192;
struct tuple2$2charphsTypeph* field2_193;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* field_name2_194;
struct sType* field_type3_195;
void* __right_value257 = (void*)0;
char* __dec_obj109;
void* __right_value258 = (void*)0;
struct sType* __dec_obj110;
void* __right_value259 = (void*)0;
struct sType* __dec_obj111;
_Bool __result120__;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct CVALUE* come_value_196;
void* __right_value262 = (void*)0;
char* __dec_obj112;
void* __right_value263 = (void*)0;
char* __dec_obj113;
void* __right_value264 = (void*)0;
char* __dec_obj114;
void* __right_value265 = (void*)0;
char* __dec_obj115;
void* __right_value266 = (void*)0;
char* __dec_obj116;
void* __right_value267 = (void*)0;
char* __dec_obj117;
void* __right_value268 = (void*)0;
struct sType* __dec_obj118;
_Bool __result121__;
void* __right_value269 = (void*)0;
struct sType* __dec_obj119;
_Bool __result123__;
    left_173=self->mLeft;
    name_174=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(!node_compile(left_173,info)) {
        __result118__ = (_Bool)0;
        name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result118__;
    }
    left_value_175=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(gComeDebug&&left_value_175->type->mPointerNum>0) {
        __dec_obj107=left_value_175->c_value;
        left_value_175->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value253=make_type_name_string(left_value_175->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_175->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_176=left_value_175->type;
    left_type2_177=(struct sType*)come_increment_ref_count(solve_generics(left_type_176,left_type_176,info));
    klass_178=left_type2_177->mClass;
    klass_178=map$2charphsClassphp_operator_load_element(info->classes,klass_178->mName);
    field_type_179=((void*)0);
    index_180=0;
    child_field_is_pointer_181=(_Bool)0;
    child_field_name_182=((void*)0);
    klass_178=map$2charphsClassphp_operator_load_element(info->classes,klass_178->mName);
    if(klass_178==((void*)0)||klass_178->mFields==((void*)0)) {
        err_msg(info,"invalid class %s",klass_178->mName);
        __result119__ = (_Bool)0;
        name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_182 = come_decrement_ref_count2(child_field_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result119__;
    }
    for(    o2_saved_183=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_178->mFields)),field_184=list$1tuple2$2charphsTypephph_begin((o2_saved_183));    !list$1tuple2$2charphsTypephph_end((o2_saved_183));    field_184=list$1tuple2$2charphsTypephph_next((o2_saved_183))    ){
        multiple_assign_var4=field_184;
        field_name_185=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        field_type2_186=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
        if(string_operator_equals(field_name_185,name_174)) {
            __dec_obj108=field_type_179;
            field_type_179=(struct sType*)come_increment_ref_count(sType_clone(field_type2_186));
            come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
            field_name_185 = come_decrement_ref_count2(field_name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_186,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_180++;
        field_name_185 = come_decrement_ref_count2(field_name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type2_186,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_183,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(index_180==list$1tuple2$2charphsTypephph_length(klass_178->mFields)) {
        index_180=0;
        for(        o2_saved_187=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_178->mFields)),field_188=list$1tuple2$2charphsTypephph_begin((o2_saved_187));        !list$1tuple2$2charphsTypephph_end((o2_saved_187));        field_188=list$1tuple2$2charphsTypephph_next((o2_saved_187))        ){
            multiple_assign_var5=field_188;
            field_name_189=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            field_type2_190=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
            klass2_191=field_type2_190->mClass;
            for(            o2_saved_192=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_191->mFields)),field2_193=list$1tuple2$2charphsTypephph_begin((o2_saved_192));            !list$1tuple2$2charphsTypephph_end((o2_saved_192));            field2_193=list$1tuple2$2charphsTypephph_next((o2_saved_192))            ){
                multiple_assign_var6=field2_193;
                field_name2_194=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                field_type3_195=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                if(string_operator_equals(field_name2_194,name_174)) {
                    __dec_obj109=child_field_name_182;
                    child_field_name_182=(char*)come_increment_ref_count(__builtin_string(field_name_189));
                    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(field_type2_190->mPointerNum>0) {
                        child_field_is_pointer_181=(_Bool)1;
                    }
                    __dec_obj110=field_type_179;
                    field_type_179=(struct sType*)come_increment_ref_count(sType_clone(field_type3_195));
                    come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
                    field_name2_194 = come_decrement_ref_count2(field_name2_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type3_195,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                field_name2_194 = come_decrement_ref_count2(field_name2_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type3_195,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_192,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(child_field_name_182) {
                field_name_189 = come_decrement_ref_count2(field_name_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_190,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(string_operator_equals(field_name_189,name_174)) {
                __dec_obj111=field_type_179;
                field_type_179=(struct sType*)come_increment_ref_count(sType_clone(field_type2_190));
                come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
                field_name_189 = come_decrement_ref_count2(field_name_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type2_190,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_180++;
            field_name_189 = come_decrement_ref_count2(field_name_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type2_190,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_187,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(index_180==list$1tuple2$2charphsTypephph_length(klass_178->mFields)) {
            err_msg(info,"field not found(%s) in %s(2)",name_174,klass_178->mName);
            __result120__ = (_Bool)0;
            name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
            child_field_name_182 = come_decrement_ref_count2(child_field_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result120__;
        }
    }
    come_value_196=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value260=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 709, "CVALUE"))))));
    come_call_finalizer3(__right_value260,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    if(left_value_175->type->mPointerNum>0) {
        if(child_field_name_182) {
            if(child_field_is_pointer_181) {
                __dec_obj112=come_value_196->c_value;
                come_value_196->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_175->c_value,child_field_name_182,name_174));
                __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj113=come_value_196->c_value;
                come_value_196->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_175->c_value,child_field_name_182,name_174));
                __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            __dec_obj114=come_value_196->c_value;
            come_value_196->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_175->c_value,name_174));
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    else {
        if(child_field_name_182) {
            if(child_field_is_pointer_181) {
                __dec_obj115=come_value_196->c_value;
                come_value_196->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_175->c_value,child_field_name_182,name_174));
                __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj116=come_value_196->c_value;
                come_value_196->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_175->c_value,child_field_name_182,name_174));
                __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            __dec_obj117=come_value_196->c_value;
            come_value_196->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_175->c_value,name_174));
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    __dec_obj118=come_value_196->type;
    come_value_196->type=(struct sType*)come_increment_ref_count(sType_clone(field_type_179));
    come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_196->var=((void*)0);
    if(field_type_179==((void*)0)) {
        err_msg(info,"no field(%s)\n",name_174);
        __result121__ = (_Bool)0;
        name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
        child_field_name_182 = come_decrement_ref_count2(child_field_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result121__;
    }
    if(list$1sNodeph_length(come_value_196->type->mArrayNum)==1) {
        __dec_obj119=come_value_196->type->mOriginalLoadVarType->v1;
        come_value_196->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(sType_clone(come_value_196->type));
        come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1sNodeph_reset(come_value_196->type->mArrayNum);
        come_value_196->type->mPointerNum++;
        come_value_196->type->mOriginalTypeNamePointerNum=come_value_196->type->mPointerNum;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_196));
    __result123__ = (_Bool)1;
    name_174 = come_decrement_ref_count2(name_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type2_177,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(field_type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
    child_field_name_182 = come_decrement_ref_count2(child_field_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result123__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_197;
struct list_item$1sNodeph* prev_it_198;
struct list$1sNodeph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    it_197=self->head;
    while(it_197!=((void*)0)) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer3(prev_it_198,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result122__ = __result_obj__ = self;
    return __result122__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct sNode* __dec_obj120;
void* __right_value272 = (void*)0;
struct sNode* __dec_obj121;
void* __right_value273 = (void*)0;
struct list$1sNodeph* __dec_obj122;
struct sStoreArrayNode* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value270=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value270,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj120=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj121=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj122=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(array_num));
    come_call_finalizer3(__dec_obj122,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mQuote=quote;
    __result124__ = __result_obj__ = self;
    come_call_finalizer3(self,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result124__;
}

char* sStoreArrayNode_kind(struct sStoreArrayNode* self){
void* __result_obj__;
void* __right_value274 = (void*)0;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    __result125__ = __result_obj__ = ((char*)(__right_value274=__builtin_string("sStoreArrayNode")));
    __right_value274 = come_decrement_ref_count2(__right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result125__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
struct sNode* left_199;
struct sNode* right_200;
struct list$1sNodeph* array_num_nodes_201;
void* __right_value275 = (void*)0;
struct CVALUE* left_value_202;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
char* __dec_obj123;
struct sType* left_type_203;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1CVALUEph* array_num_204;
struct list$1sNodeph* o2_saved_207;
struct sNode* it_210;
_Bool __result133__;
void* __right_value280 = (void*)0;
struct CVALUE* c_value_213;
_Bool __result134__;
void* __right_value281 = (void*)0;
struct CVALUE* right_value_214;
struct sType* right_type_215;
struct sClass* klass_216;
void* __right_value282 = (void*)0;
struct sType* type_217;
char* fun_name_218;
_Bool calling_fun_219;
char* check_code_223;
struct sType* var_type_224;
void* __right_value283 = (void*)0;
struct sType* result_type_225;
struct sType* __dec_obj124;
int n_226;
void* __right_value284 = (void*)0;
struct sType* __dec_obj125;
void* __right_value285 = (void*)0;
struct sType* __dec_obj126;
int i_227;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct CVALUE* come_value_240;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct buffer* buf_241;
void* __right_value290 = (void*)0;
struct sType* result_type2_242;
void* __right_value291 = (void*)0;
struct list$1CVALUEph* o2_saved_243;
struct CVALUE* it_246;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
int i_249;
struct list$1sNodeph* o2_saved_250;
struct sNode* it_251;
void* __right_value294 = (void*)0;
struct CVALUE* come_value_252;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
char* __dec_obj127;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct CVALUE* come_value_253;
int i_254;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct buffer* buf_255;
struct list$1CVALUEph* o2_saved_256;
struct CVALUE* it_257;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
char* left_value_code_258;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
char* __dec_obj128;
void* __right_value306 = (void*)0;
char* __dec_obj129;
_Bool __result145__;
void* __right_value307 = (void*)0;
char* __dec_obj130;
void* __right_value308 = (void*)0;
char* __dec_obj131;
_Bool __result146__;
void* __right_value309 = (void*)0;
struct sType* result_type_259;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct list$1sNodeph* __dec_obj132;
struct sType* __dec_obj133;
void* __right_value312 = (void*)0;
char* __dec_obj134;
_Bool __result147__;
memset(&calling_fun_219, 0, sizeof(_Bool));
    left_199=self->mLeft;
    right_200=self->mRight;
    array_num_nodes_201=self->mArrayNum;
    if(!node_compile(left_199,info)) {
        return (_Bool)0;
    }
    left_value_202=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(gComeDebug&&left_value_202->type->mPointerNum>0) {
        __dec_obj123=left_value_202->c_value;
        left_value_202->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value276=make_type_name_string(left_value_202->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_202->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value276 = come_decrement_ref_count2(__right_value276, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_203=left_value_202->type;
    array_num_204=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value278=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 795, "list$1CVALUEph"))))));
    come_call_finalizer3(__right_value278,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_207=(array_num_nodes_201),it_210=list$1sNodeph_begin((o2_saved_207));    !list$1sNodeph_end((o2_saved_207));    it_210=list$1sNodeph_next((o2_saved_207))    ){
        if(!node_compile(it_210,info)) {
            __result133__ = (_Bool)0;
            come_call_finalizer3(left_value_202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_204,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result133__;
        }
        c_value_213=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_204,(struct CVALUE*)come_increment_ref_count(c_value_213));
        come_call_finalizer3(c_value_213,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(!node_compile(right_200,info)) {
        __result134__ = (_Bool)0;
        come_call_finalizer3(left_value_202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(array_num_204,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result134__;
    }
    right_value_214=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_type_215=right_value_214->type;
    klass_216=left_value_202->type->mClass;
    type_217=(struct sType*)come_increment_ref_count(sType_clone(left_value_202->type));
    fun_name_218="operator_store_element";
    if(self->mQuote) {
        calling_fun_219=(_Bool)0;
    }
    else {
        calling_fun_219=operator_overload_fun2(type_217,fun_name_218,left_value_202,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_204,0), "18field.c", 827, 9)),right_value_214,info);
    }
    if(!calling_fun_219) {
        check_code_223=((void*)0);
        if(left_value_202->var&&left_value_202->var->mType&&list$1sNodeph_length(left_value_202->var->mType->mArrayNum)>0) {
            var_type_224=left_value_202->var->mType;
            result_type_225=(struct sType*)come_increment_ref_count(sType_clone(left_type_203));
            if(result_type_225->mOriginalLoadVarType->v1) {
                __dec_obj124=result_type_225;
                result_type_225=(struct sType*)come_increment_ref_count(result_type_225->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(list$1sNodeph_length(result_type_225->mArrayNum)>0) {
                n_226=list$1sNodeph_length(result_type_225->mArrayNum)-list$1CVALUEph_length(array_num_204);
                if(n_226==0) {
                    __dec_obj125=result_type_225;
                    result_type_225=(struct sType*)come_increment_ref_count(sType_clone(left_type_203));
                    come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(left_type_203->mOriginalLoadVarType->v1) {
                        __dec_obj126=result_type_225;
                        result_type_225=(struct sType*)come_increment_ref_count(sType_clone(left_type_203->mOriginalLoadVarType->v1));
                        come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    list$1sNodeph_reset(result_type_225->mArrayNum);
                }
                else {
                    if(n_226>0) {
                        for(                        i_227=0;                        i_227<n_226;                        i_227++                        ){
                            list$1sNodeph_delete(result_type_225->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        if(n_226<0) {
                            list$1sNodeph_reset(result_type_225->mArrayNum);
                            result_type_225->mPointerNum+=n_226;
                            if(result_type_225->mPointerNum<0) {
                                result_type_225->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                if(result_type_225->mPointerNum>0) {
                    result_type_225->mPointerNum-=list$1CVALUEph_length(array_num_204);
                    if(result_type_225->mPointerNum<0) {
                        result_type_225->mPointerNum=0;
                    }
                }
            }
            come_value_240=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value286=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 875, "CVALUE"))))));
            come_call_finalizer3(__right_value286,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            buf_241=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value288=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 877, "buffer"))))));
            come_call_finalizer3(__right_value288,buffer_finalize, 0, 1, 0, 0, (void*)0);
            result_type2_242=(struct sType*)come_increment_ref_count(sType_clone(result_type_225));
            result_type2_242->mPointerNum++;
            buffer_append_str(buf_241,((char*)(__right_value291=xsprintf("come_range_check(&%s",left_value_202->c_value))));
            __right_value291 = come_decrement_ref_count2(__right_value291, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            for(            o2_saved_243=(struct list$1CVALUEph*)come_increment_ref_count((array_num_204)),it_246=list$1CVALUEph_begin((o2_saved_243));            !list$1CVALUEph_end((o2_saved_243));            it_246=list$1CVALUEph_next((o2_saved_243))            ){
                buffer_append_str(buf_241,((char*)(__right_value292=xsprintf("[%s]",it_246->c_value))));
                __right_value292 = come_decrement_ref_count2(__right_value292, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_243,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_241,((char*)(__right_value293=xsprintf(",%s,%s+(",left_value_202->c_value,left_value_202->c_value))));
            __right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            i_249=0;
            for(            o2_saved_250=(struct list$1sNodeph*)come_increment_ref_count((var_type_224->mArrayNum)),it_251=list$1sNodeph_begin((o2_saved_250));            !list$1sNodeph_end((o2_saved_250));            it_251=list$1sNodeph_next((o2_saved_250))            ){
                if(!node_compile(it_251,info)) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                come_value_252=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                buffer_append_str(buf_241,((char*)(__right_value295=xsprintf("%s",come_value_252->c_value))));
                __right_value295 = come_decrement_ref_count2(__right_value295, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(i_249!=list$1sNodeph_length(var_type_224->mArrayNum)-1) {
                    buffer_append_str(buf_241,"*");
                }
                i_249++;
                come_call_finalizer3(come_value_252,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_250,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_241,((char*)(__right_value296=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            __right_value296 = come_decrement_ref_count2(__right_value296, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj127=check_code_223;
            check_code_223=(char*)come_increment_ref_count(buffer_to_string(buf_241));
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(result_type_225,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_240,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_241,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_242,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_253=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value298=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 909, "CVALUE"))))));
        come_call_finalizer3(__right_value298,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        if(list$1sNodeph_length(left_type_203->mArrayNum)>0) {
            for(            i_254=0;            i_254<list$1CVALUEph_length(array_num_204);            i_254++            ){
                list$1sNodeph_delete(left_type_203->mArrayNum,-1,-1);
            }
        }
        else {
            if(left_type_203->mPointerNum>0) {
                left_type_203->mPointerNum-=list$1CVALUEph_length(array_num_204);
                if(left_type_203->mPointerNum<0) {
                    left_type_203->mPointerNum=0;
                }
            }
        }
        buf_255=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value300=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 930, "buffer"))))));
        come_call_finalizer3(__right_value300,buffer_finalize, 0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_255,left_value_202->c_value);
        for(        o2_saved_256=(struct list$1CVALUEph*)come_increment_ref_count((array_num_204)),it_257=list$1CVALUEph_begin((o2_saved_256));        !list$1CVALUEph_end((o2_saved_256));        it_257=list$1CVALUEph_next((o2_saved_256))        ){
            buffer_append_str(buf_255,((char*)(__right_value302=xsprintf("[%s]",it_257->c_value))));
            __right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_256,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_258=(char*)come_increment_ref_count(buffer_to_string(buf_255));
        check_assign_type(((char*)(__right_value304=xsprintf("array is assinged to"))),left_type_203,right_type_215,right_value_214,(_Bool)0,(_Bool)1,info);
        __right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(left_type_203->mHeap&&right_type_215->mHeap&&left_type_203->mPointerNum>0&&right_type_215->mPointerNum>0) {
            if(left_value_202->type->mPointerNum>=1) {
                decrement_ref_count_object(left_type_203,left_value_code_258,info,(_Bool)0);
                std_move(left_type_203,right_type_215,right_value_214,info,(_Bool)0);
                __dec_obj128=come_value_253->c_value;
                come_value_253->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_258,right_value_214->c_value));
                __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                if(left_value_202->type->mPointerNum==0) {
                    decrement_ref_count_object(left_type_203,left_value_code_258,info,(_Bool)0);
                    std_move(left_type_203,right_type_215,right_value_214,info,(_Bool)0);
                    __dec_obj129=come_value_253->c_value;
                    come_value_253->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_258,right_value_214->c_value));
                    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_258,left_value_202->type->mPointerNum);
                    __result145__ = (_Bool)0;
                    check_code_223 = come_decrement_ref_count2(check_code_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_253,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(buf_255,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    left_value_code_258 = come_decrement_ref_count2(left_value_code_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_204,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_214,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_217,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result145__;
                }
            }
        }
        else {
            if(left_value_202->type->mPointerNum>=1) {
                __dec_obj130=come_value_253->c_value;
                come_value_253->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_258,right_value_214->c_value));
                __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                if(left_value_202->type->mPointerNum==0) {
                    __dec_obj131=come_value_253->c_value;
                    come_value_253->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_258,right_value_214->c_value));
                    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_258,left_value_202->type->mPointerNum);
                    __result146__ = (_Bool)0;
                    check_code_223 = come_decrement_ref_count2(check_code_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_253,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(buf_255,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    left_value_code_258 = come_decrement_ref_count2(left_value_code_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_value_202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(array_num_204,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_214,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_217,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result146__;
                }
            }
        }
        result_type_259=(struct sType*)come_increment_ref_count(sType_clone(left_type_203));
        __dec_obj132=result_type_259->mArrayNum;
        result_type_259->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value310=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 978, "list$1sNodeph"))))));
        come_call_finalizer3(__dec_obj132,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value310,list$1sNodephp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj133=come_value_253->type;
        come_value_253->type=(struct sType*)come_increment_ref_count(result_type_259);
        come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_253->var=((void*)0);
        if(check_code_223&&gComeDebug) {
            __dec_obj134=come_value_253->c_value;
            come_value_253->c_value=(char*)come_increment_ref_count(xsprintf("(%s, %s)",check_code_223,come_value_253->c_value));
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_253));
        add_come_last_code(info,"%s;\n",come_value_253->c_value);
        check_code_223 = come_decrement_ref_count2(check_code_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_253,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_255,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_258 = come_decrement_ref_count2(left_value_code_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_259,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result147__ = (_Bool)1;
    come_call_finalizer3(left_value_202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_204,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_214,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_217,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result147__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result126__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result126__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_205;
struct list_item$1CVALUEph* prev_it_206;
    it_205=self->head;
    while(it_205!=((void*)0)) {
        prev_it_206=it_205;
        it_205=it_205->next;
        come_call_finalizer3(prev_it_206,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_208;
struct sNode* __result127__;
struct sNode* __result128__;
struct sNode* result_209;
struct sNode* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
result_208 = (void*)0;
result_209 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_208,0,sizeof(struct sNode*));
        __result127__ = __result_obj__ = result_208;
        return __result127__;
    }
    self->it=self->head;
    if(self->it) {
        __result128__ = __result_obj__ = self->it->item;
        return __result128__;
    }
    memset(&result_209,0,sizeof(struct sNode*));
    __result129__ = __result_obj__ = result_209;
    return __result129__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_211;
struct sNode* __result130__;
struct sNode* __result131__;
struct sNode* result_212;
struct sNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
result_211 = (void*)0;
result_212 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_211,0,sizeof(struct sNode*));
        __result130__ = __result_obj__ = result_211;
        return __result130__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result131__ = __result_obj__ = self->it->item;
        return __result131__;
    }
    memset(&result_212,0,sizeof(struct sNode*));
    __result132__ = __result_obj__ = result_212;
    return __result132__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
struct list_item$1CVALUEph* it_220;
int i_221;
struct CVALUE* __result135__;
struct CVALUE* default_value_222;
struct CVALUE* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
default_value_222 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_220=self->head;
    i_221=0;
    while(it_220!=((void*)0)) {
        if(position==i_221) {
            __result135__ = __result_obj__ = it_220->item;
            return __result135__;
        }
        it_220=it_220->next;
        i_221++;
    }
    memset(&default_value_222,0,sizeof(struct CVALUE*));
    __result136__ = __result_obj__ = default_value_222;
    come_call_finalizer3(default_value_222,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result136__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__;
int tmp_228;
struct list$1sNodeph* __result137__;
struct list_item$1sNodeph* it_229;
int i_230;
struct list_item$1sNodeph* prev_it_231;
struct list_item$1sNodeph* it_232;
int i_233;
struct list_item$1sNodeph* prev_it_234;
struct list_item$1sNodeph* it_235;
struct list_item$1sNodeph* head_prev_it_236;
struct list_item$1sNodeph* tail_it_237;
int i_238;
struct list_item$1sNodeph* prev_it_239;
struct list$1sNodeph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_228=tail;
        tail=head;
        head=tmp_228;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head==tail) {
        __result137__ = __result_obj__ = self;
        return __result137__;
    }
    if(head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else {
        if(head==0) {
            it_229=self->head;
            i_230=0;
            while(it_229!=((void*)0)) {
                if(i_230<tail) {
                    prev_it_231=it_229;
                    it_229=it_229->next;
                    i_230++;
                    come_call_finalizer3(prev_it_231,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_230==tail) {
                        self->head=it_229;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_229=it_229->next;
                        i_230++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_232=self->head;
                i_233=0;
                while(it_232!=((void*)0)) {
                    if(i_233==head) {
                        self->tail=it_232->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_233>=head) {
                        prev_it_234=it_232;
                        it_232=it_232->next;
                        i_233++;
                        come_call_finalizer3(prev_it_234,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_232=it_232->next;
                        i_233++;
                    }
                }
            }
            else {
                it_235=self->head;
                head_prev_it_236=((void*)0);
                tail_it_237=((void*)0);
                i_238=0;
                while(it_235!=((void*)0)) {
                    if(i_238==head) {
                        head_prev_it_236=it_235->prev;
                    }
                    if(i_238==tail) {
                        tail_it_237=it_235;
                    }
                    if(i_238>=head&&i_238<tail) {
                        prev_it_239=it_235;
                        it_235=it_235->next;
                        i_238++;
                        come_call_finalizer3(prev_it_239,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_235=it_235->next;
                        i_238++;
                    }
                }
                if(head_prev_it_236!=((void*)0)) {
                    head_prev_it_236->next=tail_it_237;
                }
                if(tail_it_237!=((void*)0)) {
                    tail_it_237->prev=head_prev_it_236;
                }
            }
        }
    }
    __result138__ = __result_obj__ = self;
    return __result138__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
struct CVALUE* result_244;
struct CVALUE* __result139__;
struct CVALUE* __result140__;
struct CVALUE* result_245;
struct CVALUE* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
result_244 = (void*)0;
result_245 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_244,0,sizeof(struct CVALUE*));
        __result139__ = __result_obj__ = result_244;
        return __result139__;
    }
    self->it=self->head;
    if(self->it) {
        __result140__ = __result_obj__ = self->it->item;
        return __result140__;
    }
    memset(&result_245,0,sizeof(struct CVALUE*));
    __result141__ = __result_obj__ = result_245;
    return __result141__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
struct CVALUE* result_247;
struct CVALUE* __result142__;
struct CVALUE* __result143__;
struct CVALUE* result_248;
struct CVALUE* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
result_247 = (void*)0;
result_248 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_247,0,sizeof(struct CVALUE*));
        __result142__ = __result_obj__ = result_247;
        return __result142__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result143__ = __result_obj__ = self->it->item;
        return __result143__;
    }
    memset(&result_248,0,sizeof(struct CVALUE*));
    __result144__ = __result_obj__ = result_248;
    return __result144__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __result_obj__;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct list$1sNodeph* __dec_obj135;
void* __right_value315 = (void*)0;
struct sNode* __dec_obj136;
struct sLoadArrayNode* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value313=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value313,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj135=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(array_num));
    come_call_finalizer3(__dec_obj135,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mBreakGuard=break_guard;
    __dec_obj136=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); }
    self->mQuote=quote;
    __result148__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result148__;
}

char* sLoadArrayNode_kind(struct sLoadArrayNode* self){
void* __result_obj__;
void* __right_value316 = (void*)0;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    __result149__ = __result_obj__ = ((char*)(__right_value316=__builtin_string("sLoadArrayNode")));
    __right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result149__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
struct sNode* left_260;
struct list$1sNodeph* array_num_nodes_261;
void* __right_value317 = (void*)0;
struct CVALUE* left_value_262;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
char* __dec_obj137;
void* __right_value320 = (void*)0;
struct sType* left_type_263;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct list$1CVALUEph* array_num_264;
struct list$1sNodeph* o2_saved_265;
struct sNode* it_266;
_Bool __result150__;
void* __right_value323 = (void*)0;
struct CVALUE* c_value_267;
void* __right_value324 = (void*)0;
struct sType* type_268;
char* fun_name_269;
_Bool calling_fun_270;
struct sType* var_type_271;
void* __right_value325 = (void*)0;
struct sType* result_type_272;
struct sType* __dec_obj138;
int n_273;
void* __right_value326 = (void*)0;
struct sType* __dec_obj139;
void* __right_value327 = (void*)0;
struct sType* __dec_obj140;
int i_274;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct CVALUE* come_value_275;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct buffer* buf_276;
void* __right_value332 = (void*)0;
struct sType* result_type2_277;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct list$1CVALUEph* o2_saved_278;
struct CVALUE* it_279;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
int i_280;
struct list$1sNodeph* o2_saved_281;
struct sNode* it_282;
void* __right_value337 = (void*)0;
struct CVALUE* come_value_283;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
char* left_value_code_284;
void* __right_value341 = (void*)0;
char* __dec_obj141;
void* __right_value342 = (void*)0;
struct sType* __dec_obj142;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct CVALUE* come_value_285;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct buffer* buf_286;
struct list$1CVALUEph* o2_saved_287;
struct CVALUE* it_288;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
char* left_value_code_289;
void* __right_value349 = (void*)0;
char* __dec_obj143;
void* __right_value350 = (void*)0;
struct sType* result_type_290;
struct sType* __dec_obj144;
int n_291;
void* __right_value351 = (void*)0;
struct sType* __dec_obj145;
void* __right_value352 = (void*)0;
struct sType* __dec_obj146;
int i_292;
void* __right_value353 = (void*)0;
struct sType* __dec_obj147;
_Bool __result151__;
memset(&calling_fun_270, 0, sizeof(_Bool));
    left_260=self->mLeft;
    array_num_nodes_261=self->mArrayNum;
    if(!node_compile(left_260,info)) {
        return (_Bool)0;
    }
    left_value_262=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(gComeDebug&&left_value_262->type->mPointerNum>0&&!self->mBreakGuard) {
        __dec_obj137=left_value_262->c_value;
        left_value_262->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value318=make_type_name_string(left_value_262->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_262->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_263=(struct sType*)come_increment_ref_count(sType_clone(left_value_262->type));
    array_num_264=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value321=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1031, "list$1CVALUEph"))))));
    come_call_finalizer3(__right_value321,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_265=(array_num_nodes_261),it_266=list$1sNodeph_begin((o2_saved_265));    !list$1sNodeph_end((o2_saved_265));    it_266=list$1sNodeph_next((o2_saved_265))    ){
        if(!node_compile(it_266,info)) {
            __result150__ = (_Bool)0;
            come_call_finalizer3(left_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_263,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_264,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result150__;
        }
        c_value_267=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_264,(struct CVALUE*)come_increment_ref_count(c_value_267));
        come_call_finalizer3(c_value_267,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_268=(struct sType*)come_increment_ref_count(sType_clone(left_value_262->type));
    fun_name_269="operator_load_element";
    if(self->mQuote) {
        calling_fun_270=(_Bool)0;
    }
    else {
        calling_fun_270=operator_overload_fun(type_268,fun_name_269,left_value_262,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_264,0), "18field.c", 1052, 10)),self->mBreakGuard,info);
    }
    if(!calling_fun_270) {
        if(gComeDebug&&left_value_262->var&&left_value_262->var->mType&&list$1sNodeph_length(left_value_262->var->mType->mArrayNum)>0) {
            var_type_271=left_value_262->var->mType;
            result_type_272=(struct sType*)come_increment_ref_count(sType_clone(left_type_263));
            if(result_type_272->mOriginalLoadVarType->v1) {
                __dec_obj138=result_type_272;
                result_type_272=(struct sType*)come_increment_ref_count(result_type_272->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(list$1sNodeph_length(result_type_272->mArrayNum)>0) {
                n_273=list$1sNodeph_length(result_type_272->mArrayNum)-list$1CVALUEph_length(array_num_264);
                if(n_273==0) {
                    __dec_obj139=result_type_272;
                    result_type_272=(struct sType*)come_increment_ref_count(sType_clone(left_type_263));
                    come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(left_type_263->mOriginalLoadVarType->v1) {
                        __dec_obj140=result_type_272;
                        result_type_272=(struct sType*)come_increment_ref_count(sType_clone(left_type_263->mOriginalLoadVarType->v1));
                        come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    list$1sNodeph_reset(result_type_272->mArrayNum);
                }
                else {
                    if(n_273>0) {
                        for(                        i_274=0;                        i_274<n_273;                        i_274++                        ){
                            list$1sNodeph_delete(result_type_272->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        if(n_273<0) {
                            list$1sNodeph_reset(result_type_272->mArrayNum);
                            result_type_272->mPointerNum+=n_273;
                            if(result_type_272->mPointerNum<0) {
                                result_type_272->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                if(result_type_272->mPointerNum>0) {
                    result_type_272->mPointerNum-=list$1CVALUEph_length(array_num_264);
                    if(result_type_272->mPointerNum<0) {
                        result_type_272->mPointerNum=0;
                    }
                }
            }
            come_value_275=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value328=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1099, "CVALUE"))))));
            come_call_finalizer3(__right_value328,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            buf_276=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value330=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1101, "buffer"))))));
            come_call_finalizer3(__right_value330,buffer_finalize, 0, 1, 0, 0, (void*)0);
            result_type2_277=(struct sType*)come_increment_ref_count(sType_clone(result_type_272));
            result_type2_277->mPointerNum++;
            buffer_append_str(buf_276,((char*)(__right_value334=xsprintf("*(%s)come_range_check(&%s",((char*)(__right_value333=make_type_name_string(result_type2_277,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_262->c_value))));
            __right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value334 = come_decrement_ref_count2(__right_value334, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            for(            o2_saved_278=(struct list$1CVALUEph*)come_increment_ref_count((array_num_264)),it_279=list$1CVALUEph_begin((o2_saved_278));            !list$1CVALUEph_end((o2_saved_278));            it_279=list$1CVALUEph_next((o2_saved_278))            ){
                buffer_append_str(buf_276,((char*)(__right_value335=xsprintf("[%s]",it_279->c_value))));
                __right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_278,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_276,((char*)(__right_value336=xsprintf(",%s,%s+(",left_value_262->c_value,left_value_262->c_value))));
            __right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            i_280=0;
            for(            o2_saved_281=(struct list$1sNodeph*)come_increment_ref_count((var_type_271->mArrayNum)),it_282=list$1sNodeph_begin((o2_saved_281));            !list$1sNodeph_end((o2_saved_281));            it_282=list$1sNodeph_next((o2_saved_281))            ){
                if(!node_compile(it_282,info)) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                come_value_283=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                buffer_append_str(buf_276,((char*)(__right_value338=xsprintf("%s",come_value_283->c_value))));
                __right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(i_280!=list$1sNodeph_length(var_type_271->mArrayNum)-1) {
                    buffer_append_str(buf_276,"*");
                }
                i_280++;
                come_call_finalizer3(come_value_283,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_281,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_276,((char*)(__right_value339=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            __right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            left_value_code_284=(char*)come_increment_ref_count(buffer_to_string(buf_276));
            __dec_obj141=come_value_275->c_value;
            come_value_275->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_284));
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj142=come_value_275->type;
            come_value_275->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_272));
            come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_275->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_275));
            add_come_last_code(info,"%s;\n",come_value_275->c_value);
            come_call_finalizer3(result_type_272,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_276,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_277,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_284 = come_decrement_ref_count2(left_value_code_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_285=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value343=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1145, "CVALUE"))))));
            come_call_finalizer3(__right_value343,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            buf_286=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value345=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1147, "buffer"))))));
            come_call_finalizer3(__right_value345,buffer_finalize, 0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_286,left_value_262->c_value);
            for(            o2_saved_287=(struct list$1CVALUEph*)come_increment_ref_count((array_num_264)),it_288=list$1CVALUEph_begin((o2_saved_287));            !list$1CVALUEph_end((o2_saved_287));            it_288=list$1CVALUEph_next((o2_saved_287))            ){
                buffer_append_str(buf_286,((char*)(__right_value347=xsprintf("[%s]",it_288->c_value))));
                __right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_287,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_289=(char*)come_increment_ref_count(buffer_to_string(buf_286));
            __dec_obj143=come_value_285->c_value;
            come_value_285->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_289));
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
            result_type_290=(struct sType*)come_increment_ref_count(sType_clone(left_type_263));
            if(result_type_290->mOriginalLoadVarType->v1) {
                __dec_obj144=result_type_290;
                result_type_290=(struct sType*)come_increment_ref_count(result_type_290->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(list$1sNodeph_length(result_type_290->mArrayNum)>0) {
                n_291=list$1sNodeph_length(result_type_290->mArrayNum)-list$1CVALUEph_length(array_num_264);
                if(n_291==0) {
                    __dec_obj145=result_type_290;
                    result_type_290=(struct sType*)come_increment_ref_count(sType_clone(left_type_263));
                    come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(left_type_263->mOriginalLoadVarType->v1) {
                        __dec_obj146=result_type_290;
                        result_type_290=(struct sType*)come_increment_ref_count(sType_clone(left_type_263->mOriginalLoadVarType->v1));
                        come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    list$1sNodeph_reset(result_type_290->mArrayNum);
                }
                else {
                    if(n_291>0) {
                        for(                        i_292=0;                        i_292<n_291;                        i_292++                        ){
                            list$1sNodeph_delete(result_type_290->mArrayNum,-1,-1);
                        }
                    }
                    else {
                        if(n_291<0) {
                            list$1sNodeph_reset(result_type_290->mArrayNum);
                            result_type_290->mPointerNum+=n_291;
                            if(result_type_290->mPointerNum<0) {
                                result_type_290->mPointerNum=0;
                            }
                        }
                    }
                }
            }
            else {
                if(result_type_290->mPointerNum>0) {
                    result_type_290->mPointerNum-=list$1CVALUEph_length(array_num_264);
                    if(result_type_290->mPointerNum<0) {
                        result_type_290->mPointerNum=0;
                    }
                }
            }
            __dec_obj147=come_value_285->type;
            come_value_285->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_290));
            come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_285->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_285));
            add_come_last_code(info,"%s;\n",come_value_285->c_value);
            come_call_finalizer3(come_value_285,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_286,buffer_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_289 = come_decrement_ref_count2(left_value_code_289, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_290,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result151__ = (_Bool)1;
    come_call_finalizer3(left_value_262,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_263,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_264,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_268,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result151__;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct list$1sNodeph* __dec_obj148;
void* __right_value356 = (void*)0;
struct sNode* __dec_obj149;
struct sLoadRangeArrayNode* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value354=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value354,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj148=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(array_num));
    come_call_finalizer3(__dec_obj148,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj149=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
    self->mQuote=quote;
    __result152__ = __result_obj__ = self;
    come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result152__;
}

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self){
void* __result_obj__;
void* __right_value357 = (void*)0;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
    __result153__ = __result_obj__ = ((char*)(__right_value357=__builtin_string("sLoadRangeArrayNode")));
    __right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result153__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
struct sNode* left_293;
struct list$1sNodeph* array_num_nodes_294;
void* __right_value358 = (void*)0;
struct CVALUE* left_value_295;
void* __right_value359 = (void*)0;
struct sType* left_type_296;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct list$1CVALUEph* array_num_297;
struct list$1sNodeph* o2_saved_298;
struct sNode* it_299;
_Bool __result154__;
void* __right_value362 = (void*)0;
struct CVALUE* c_value_300;
void* __right_value363 = (void*)0;
struct sType* type_301;
char* fun_name_302;
_Bool calling_fun_303;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct CVALUE* come_value_304;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct buffer* buf_305;
struct list$1CVALUEph* o2_saved_306;
struct CVALUE* it_307;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
char* left_value_code_308;
void* __right_value370 = (void*)0;
char* __dec_obj150;
void* __right_value371 = (void*)0;
struct sType* result_type_309;
struct sType* __dec_obj151;
int n_310;
void* __right_value372 = (void*)0;
struct sType* __dec_obj152;
void* __right_value373 = (void*)0;
struct sType* __dec_obj153;
int i_311;
void* __right_value374 = (void*)0;
struct sType* __dec_obj154;
_Bool __result155__;
memset(&calling_fun_303, 0, sizeof(_Bool));
    left_293=self->mLeft;
    array_num_nodes_294=self->mArrayNum;
    if(!node_compile(left_293,info)) {
        return (_Bool)0;
    }
    left_value_295=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_296=(struct sType*)come_increment_ref_count(sType_clone(left_value_295->type));
    array_num_297=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value360=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1243, "list$1CVALUEph"))))));
    come_call_finalizer3(__right_value360,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_298=(array_num_nodes_294),it_299=list$1sNodeph_begin((o2_saved_298));    !list$1sNodeph_end((o2_saved_298));    it_299=list$1sNodeph_next((o2_saved_298))    ){
        if(!node_compile(it_299,info)) {
            __result154__ = (_Bool)0;
            come_call_finalizer3(left_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_296,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(array_num_297,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result154__;
        }
        c_value_300=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_297,(struct CVALUE*)come_increment_ref_count(c_value_300));
        come_call_finalizer3(c_value_300,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_301=(struct sType*)come_increment_ref_count(sType_clone(left_value_295->type));
    fun_name_302="operator_load_range_element";
    if(self->mQuote) {
        calling_fun_303=(_Bool)0;
    }
    else {
        calling_fun_303=operator_overload_fun2(type_301,fun_name_302,left_value_295,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_297,0), "18field.c", 1264, 11)),((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_297,1), "18field.c", 1264, 12)),info);
    }
    if(!calling_fun_303) {
        come_value_304=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value364=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1268, "CVALUE"))))));
        come_call_finalizer3(__right_value364,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        buf_305=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value366=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1270, "buffer"))))));
        come_call_finalizer3(__right_value366,buffer_finalize, 0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_305,left_value_295->c_value);
        for(        o2_saved_306=(struct list$1CVALUEph*)come_increment_ref_count((array_num_297)),it_307=list$1CVALUEph_begin((o2_saved_306));        !list$1CVALUEph_end((o2_saved_306));        it_307=list$1CVALUEph_next((o2_saved_306))        ){
            buffer_append_str(buf_305,((char*)(__right_value368=xsprintf("[%s]",it_307->c_value))));
            __right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_306,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_308=(char*)come_increment_ref_count(buffer_to_string(buf_305));
        __dec_obj150=come_value_304->c_value;
        come_value_304->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_308));
        __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type_309=(struct sType*)come_increment_ref_count(sType_clone(left_type_296));
        if(result_type_309->mOriginalLoadVarType->v1) {
            __dec_obj151=result_type_309;
            result_type_309=(struct sType*)come_increment_ref_count(result_type_309->mOriginalLoadVarType->v1);
            come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(list$1sNodeph_length(result_type_309->mArrayNum)>0) {
            n_310=list$1sNodeph_length(result_type_309->mArrayNum)-list$1CVALUEph_length(array_num_297);
            if(n_310==0) {
                __dec_obj152=result_type_309;
                result_type_309=(struct sType*)come_increment_ref_count(sType_clone(left_type_296));
                come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(left_type_296->mOriginalLoadVarType->v1) {
                    __dec_obj153=result_type_309;
                    result_type_309=(struct sType*)come_increment_ref_count(sType_clone(left_type_296->mOriginalLoadVarType->v1));
                    come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                list$1sNodeph_reset(result_type_309->mArrayNum);
            }
            else {
                if(n_310>0) {
                    for(                    i_311=0;                    i_311<n_310;                    i_311++                    ){
                        list$1sNodeph_delete(result_type_309->mArrayNum,-1,-1);
                    }
                }
                else {
                    if(n_310<0) {
                        list$1sNodeph_reset(result_type_309->mArrayNum);
                        result_type_309->mPointerNum+=n_310;
                        if(result_type_309->mPointerNum<0) {
                            result_type_309->mPointerNum=0;
                        }
                    }
                }
            }
        }
        else {
            if(result_type_309->mPointerNum>0) {
                result_type_309->mPointerNum-=list$1CVALUEph_length(array_num_297);
                if(result_type_309->mPointerNum<0) {
                    result_type_309->mPointerNum=0;
                }
            }
        }
        __dec_obj154=come_value_304->type;
        come_value_304->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_309));
        come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_304->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_304));
        add_come_last_code(info,"%s;\n",come_value_304->c_value);
        come_call_finalizer3(come_value_304,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_305,buffer_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_308 = come_decrement_ref_count2(left_value_code_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_309,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result155__ = (_Bool)1;
    come_call_finalizer3(left_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_296,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(array_num_297,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_301,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result155__;
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
struct sNode* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    err_msg(info,"parse_method_call is failed");
    exit(2);
    __result156__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result156__;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* __right_value382 = (void*)0;
struct sNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1344, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStoreFieldNode*)(__right_value376=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value375=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1344, "sStoreFieldNode")))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value1->clone=(void*)sStoreFieldNode_clone;
    _inf_value1->compile=(void*)sStoreFieldNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreFieldNode_kind;
    __result159__ = __result_obj__ = ((struct sNode*)(__right_value382=_inf_value1));
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__right_value375,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value376,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value382) { __right_value382 = come_decrement_ref_count2(__right_value382, ((struct sNode*)__right_value382)->finalize, ((struct sNode*)__right_value382)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result159__;
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool range_array_313;
char* p_314;
int sline_315;
_Bool no_comma_316;
_Bool no_output_err_317;
_Bool no_output_come_code_318;
void* __right_value383 = (void*)0;
struct sNode* exp_319;
_Bool quote_320;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct list$1sNodeph* array_num_321;
void* __right_value386 = (void*)0;
struct sNode* node2_322;
void* __right_value390 = (void*)0;
struct sNode* node3_326;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct sNode* _inf_value2;
struct sLoadRangeArrayNode* _inf_obj_value2;
void* __right_value397 = (void*)0;
struct sNode* __dec_obj165;
_Bool quote_328;
_Bool range_329;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct list$1sNodeph* array_num_330;
_Bool range_array2_331;
char* p_332;
int sline_333;
_Bool no_comma_334;
_Bool no_output_err_335;
_Bool no_output_come_code_336;
void* __right_value400 = (void*)0;
struct sNode* exp_337;
void* __right_value401 = (void*)0;
struct sNode* node2_338;
_Bool break_guard_339;
void* __right_value402 = (void*)0;
struct sNode* right_node_340;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct sNode* _inf_value3;
struct sStoreArrayNode* _inf_obj_value3;
void* __right_value410 = (void*)0;
struct sNode* __dec_obj170;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct sNode* _inf_value4;
struct sLoadArrayNode* _inf_obj_value4;
void* __right_value417 = (void*)0;
struct sNode* __dec_obj174;
_Bool no_comma_343;
void* __right_value418 = (void*)0;
struct sNode* begin_344;
void* __right_value419 = (void*)0;
struct sNode* end_345;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sNode* _inf_value5;
struct sRangeCheckNode* _inf_obj_value5;
void* __right_value427 = (void*)0;
struct sNode* __dec_obj179;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct sNode* _inf_value6;
struct sNullCheckNode* _inf_obj_value6;
void* __right_value433 = (void*)0;
struct sNode* __dec_obj182;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct sNode* _inf_value7;
struct sNullableNode* _inf_obj_value7;
void* __right_value439 = (void*)0;
struct sNode* __dec_obj185;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct sNode* _inf_value8;
struct sNullCheckNode* _inf_obj_value8;
void* __right_value446 = (void*)0;
struct sNode* __dec_obj188;
void* __right_value447 = (void*)0;
char* field_name_350;
_Bool parse_method_generics_type_351;
char* p_352;
int sline_353;
void* __right_value448 = (void*)0;
char* word_354;
void* __right_value449 = (void*)0;
struct sNode* right_node_355;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct sNode* _inf_value9;
struct sStoreFieldNode* _inf_obj_value9;
void* __right_value457 = (void*)0;
struct sNode* __dec_obj193;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct sNode* __dec_obj194;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct sNode* __dec_obj195;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct sNode* __dec_obj196;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct sNode* _inf_value10;
struct sLoadFieldNode* _inf_obj_value10;
void* __right_value470 = (void*)0;
struct sNode* __dec_obj200;
void* __right_value471 = (void*)0;
struct sNode* node2_358;
struct sNode* __dec_obj201;
struct sNode* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
    while((_Bool)1) {
        range_array_313=(_Bool)0;
        {
            p_314=info->p;
            sline_315=info->sline;
            if(*info->p==91) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_316=info->no_comma;
                no_output_err_317=info->no_output_err;
                no_output_come_code_318=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_319=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_316;
                info->no_output_err=no_output_err_317;
                info->no_output_come_code=no_output_come_code_318;
                if(*info->p==46&&*(info->p+1)==46) {
                    range_array_313=(_Bool)1;
                }
                if(exp_319) { exp_319 = come_decrement_ref_count2(exp_319, ((struct sNode*)exp_319)->finalize, ((struct sNode*)exp_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            info->p=p_314;
            info->sline=sline_315;
        }
        if(range_array_313&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_320=*info->p==92;
            if(quote_320) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_321=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value384=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1388, "list$1sNodeph"))))));
            come_call_finalizer3(__right_value384,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            skip_pointer_attribute(info);
            node2_322=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNodeph_push_back(array_num_321,(struct sNode*)come_increment_ref_count(node2_322));
            if(*info->p==46&&*(info->p+1)==46) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_326=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodeph_push_back(array_num_321,(struct sNode*)come_increment_ref_count(node3_326));
                expected_next_character(93,info);
                if(node3_326) { node3_326 = come_decrement_ref_count2(node3_326, ((struct sNode*)node3_326)->finalize, ((struct sNode*)node3_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1409, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sLoadRangeArrayNode*)(__right_value392=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(__right_value391=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1409, "sLoadRangeArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_321),quote_320,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value2->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value2->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj165=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value2);
            if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
            come_call_finalizer3(__right_value391,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value392,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(array_num_321,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            if(node2_322) { node2_322 = come_decrement_ref_count2(node2_322, ((struct sNode*)node2_322)->finalize, ((struct sNode*)node2_322)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(!range_array_313&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
                quote_328=*info->p==92;
                if(quote_328) {
                    info->p++;
                }
                range_329=(_Bool)0;
                array_num_330=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value398=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1418, "list$1sNodeph"))))));
                come_call_finalizer3(__right_value398,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                while(1) {
                    range_array2_331=(_Bool)0;
                    {
                        p_332=info->p;
                        sline_333=info->sline;
                        if(*info->p==91) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_334=info->no_comma;
                            no_output_err_335=info->no_output_err;
                            no_output_come_code_336=info->no_output_come_code;
                            info->no_output_err=(_Bool)1;
                            info->no_comma=(_Bool)1;
                            info->no_output_come_code=(_Bool)1;
                            exp_337=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            info->no_comma=no_comma_334;
                            info->no_output_err=no_output_err_335;
                            info->no_output_come_code=no_output_come_code_336;
                            if(*info->p==46&&*(info->p+1)==46) {
                                range_array2_331=(_Bool)1;
                            }
                            if(exp_337) { exp_337 = come_decrement_ref_count2(exp_337, ((struct sNode*)exp_337)->finalize, ((struct sNode*)exp_337)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        info->p=p_332;
                        info->sline=sline_333;
                    }
                    if(range_array2_331) {
                        break;
                    }
                    else {
                        if(*info->p==91) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            skip_pointer_attribute(info);
                            node2_338=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            list$1sNodeph_push_back(array_num_330,(struct sNode*)come_increment_ref_count(node2_338));
                            if(*info->p==93) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                err_msg(info,"require ] character");
                                exit(2);
                            }
                            if(node2_338) { node2_338 = come_decrement_ref_count2(node2_338, ((struct sNode*)node2_338)->finalize, ((struct sNode*)node2_338)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            break;
                        }
                    }
                }
                break_guard_339=(_Bool)0;
                if(*info->p==63&&*(info->p+1)==63) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    break_guard_339=(_Bool)1;
                }
                if(!info->no_assign&&*info->p==61&&*(info->p+1)!=61) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_node_340=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    parse_sharp_v5(info);
                    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1493, "struct sNode");
                    _inf_obj_value3=come_increment_ref_count(((struct sStoreArrayNode*)(__right_value404=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(__right_value403=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1493, "sStoreArrayNode")))),node,(struct sNode*)come_increment_ref_count(right_node_340),(struct list$1sNodeph*)come_increment_ref_count(array_num_330),quote_328,info))));
                    _inf_value3->_protocol_obj=_inf_obj_value3;
                    _inf_value3->finalize=(void*)sStoreArrayNode_finalize;
                    _inf_value3->clone=(void*)sStoreArrayNode_clone;
                    _inf_value3->compile=(void*)sStoreArrayNode_compile;
                    _inf_value3->sline=(void*)sNodeBase_sline;
                    _inf_value3->sname=(void*)sNodeBase_sname;
                    _inf_value3->terminated=(void*)sNodeBase_terminated;
                    _inf_value3->kind=(void*)sStoreArrayNode_kind;
                    __dec_obj170=node;
                    node=(struct sNode*)come_increment_ref_count(_inf_value3);
                    if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer3(__right_value403,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(__right_value404,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_node_340) { right_node_340 = come_decrement_ref_count2(right_node_340, ((struct sNode*)right_node_340)->finalize, ((struct sNode*)right_node_340)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1496, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sLoadArrayNode*)(__right_value412=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(__right_value411=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1496, "sLoadArrayNode")))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_330),quote_328,break_guard_339,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sLoadArrayNode_finalize;
                    _inf_value4->clone=(void*)sLoadArrayNode_clone;
                    _inf_value4->compile=(void*)sLoadArrayNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sNodeBase_terminated;
                    _inf_value4->kind=(void*)sLoadArrayNode_kind;
                    __dec_obj174=node;
                    node=(struct sNode*)come_increment_ref_count(_inf_value4);
                    if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer3(__right_value411,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(__right_value412,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer3(array_num_330,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(*info->p==33&&*(info->p+1)==123) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    no_comma_343=info->no_comma;
                    info->no_comma=(_Bool)1;
                    begin_344=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_343;
                    expected_next_character(44,info);
                    end_345=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    expected_next_character(125,info);
                    parse_sharp_v5(info);
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1516, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sRangeCheckNode*)(__right_value421=sRangeCheckNode_initialize((struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(__right_value420=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "18field.c", 1516, "sRangeCheckNode")))),node,begin_344,end_345,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sRangeCheckNode_finalize;
                    _inf_value5->clone=(void*)sRangeCheckNode_clone;
                    _inf_value5->compile=(void*)sRangeCheckNode_compile;
                    _inf_value5->sline=(void*)sNodeBase_sline;
                    _inf_value5->sname=(void*)sNodeBase_sname;
                    _inf_value5->terminated=(void*)sNodeBase_terminated;
                    _inf_value5->kind=(void*)sRangeCheckNode_kind;
                    __dec_obj179=node;
                    node=(struct sNode*)come_increment_ref_count(_inf_value5);
                    if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); }
                    come_call_finalizer3(__right_value420,sRangeCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(__right_value421,sRangeCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(begin_344) { begin_344 = come_decrement_ref_count2(begin_344, ((struct sNode*)begin_344)->finalize, ((struct sNode*)begin_344)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(end_345) { end_345 = come_decrement_ref_count2(end_345, ((struct sNode*)end_345)->finalize, ((struct sNode*)end_345)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(*info->p==33&&*(info->p+1)!=61) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        parse_sharp_v5(info);
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1524, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sNullCheckNode*)(__right_value429=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(__right_value428=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1524, "sNullCheckNode")))),node,(_Bool)0,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sNullCheckNode_finalize;
                        _inf_value6->clone=(void*)sNullCheckNode_clone;
                        _inf_value6->compile=(void*)sNullCheckNode_compile;
                        _inf_value6->sline=(void*)sNodeBase_sline;
                        _inf_value6->sname=(void*)sNodeBase_sname;
                        _inf_value6->terminated=(void*)sNodeBase_terminated;
                        _inf_value6->kind=(void*)sNullCheckNode_kind;
                        __dec_obj182=node;
                        node=(struct sNode*)come_increment_ref_count(_inf_value6);
                        if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); }
                        come_call_finalizer3(__right_value428,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(__right_value429,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        if(*info->p==63&&*(info->p+1)==63) {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            parse_sharp_v5(info);
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1532, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sNullableNode*)(__right_value435=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(__right_value434=(struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 1532, "sNullableNode")))),node,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sNullableNode_finalize;
                            _inf_value7->clone=(void*)sNullableNode_clone;
                            _inf_value7->compile=(void*)sNullableNode_compile;
                            _inf_value7->sline=(void*)sNodeBase_sline;
                            _inf_value7->sname=(void*)sNodeBase_sname;
                            _inf_value7->terminated=(void*)sNodeBase_terminated;
                            _inf_value7->kind=(void*)sNullableNode_kind;
                            __dec_obj185=node;
                            node=(struct sNode*)come_increment_ref_count(_inf_value7);
                            if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); }
                            come_call_finalizer3(__right_value434,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(__right_value435,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
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
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1544, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sNullCheckNode*)(__right_value442=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(__right_value440=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1544, "sNullCheckNode")))),((struct sNode*)(__right_value441=sNode_clone(node))),(_Bool)1,info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sNullCheckNode_finalize;
                                _inf_value8->clone=(void*)sNullCheckNode_clone;
                                _inf_value8->compile=(void*)sNullCheckNode_compile;
                                _inf_value8->sline=(void*)sNodeBase_sline;
                                _inf_value8->sname=(void*)sNodeBase_sname;
                                _inf_value8->terminated=(void*)sNodeBase_terminated;
                                _inf_value8->kind=(void*)sNullCheckNode_kind;
                                __dec_obj188=node;
                                node=(struct sNode*)come_increment_ref_count(_inf_value8);
                                if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); }
                                come_call_finalizer3(__right_value440,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(__right_value441) { __right_value441 = come_decrement_ref_count2(__right_value441, ((struct sNode*)__right_value441)->finalize, ((struct sNode*)__right_value441)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                come_call_finalizer3(__right_value442,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                                parse_sharp_v5(info);
                                field_name_350=(char*)come_increment_ref_count(parse_word(info));
                                parse_sharp_v5(info);
                                parse_method_generics_type_351=(_Bool)0;
                                {
                                    p_352=info->p;
                                    sline_353=info->sline;
                                    if(*info->p==60) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        if(xisalpha(*info->p)||*info->p==95) {
                                            word_354=(char*)come_increment_ref_count(parse_word(info));
                                            if(is_type_name(word_354,info)) {
                                                parse_method_generics_type_351=(_Bool)1;
                                            }
                                            word_354 = come_decrement_ref_count2(word_354, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    info->p=p_352;
                                    info->sline=sline_353;
                                }
                                if(!info->no_assign&&*info->p==61&&*(info->p+1)!=61) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    parse_sharp_v5(info);
                                    right_node_355=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1582, "struct sNode");
                                    _inf_obj_value9=come_increment_ref_count(((struct sStoreFieldNode*)(__right_value451=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value450=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1582, "sStoreFieldNode")))),node,(struct sNode*)come_increment_ref_count(right_node_355),(char*)come_increment_ref_count(field_name_350),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sStoreFieldNode_finalize;
                                    _inf_value9->clone=(void*)sStoreFieldNode_clone;
                                    _inf_value9->compile=(void*)sStoreFieldNode_compile;
                                    _inf_value9->sline=(void*)sNodeBase_sline;
                                    _inf_value9->sname=(void*)sNodeBase_sname;
                                    _inf_value9->terminated=(void*)sNodeBase_terminated;
                                    _inf_value9->kind=(void*)sStoreFieldNode_kind;
                                    __dec_obj193=node;
                                    node=(struct sNode*)come_increment_ref_count(_inf_value9);
                                    if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); }
                                    come_call_finalizer3(__right_value450,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(__right_value451,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_node_355) { right_node_355 = come_decrement_ref_count2(right_node_355, ((struct sNode*)right_node_355)->finalize, ((struct sNode*)right_node_355)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(!gComeC&&(*info->p==40||*info->p==123||parse_method_generics_type_351||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40))) {
                                        if(string_operator_equals(field_name_350,"if")) {
                                            __dec_obj194=node;
                                            node=(struct sNode*)come_increment_ref_count(parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value458=sNode_clone(node)))),info));
                                            if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(__right_value458) { __right_value458 = come_decrement_ref_count2(__right_value458, ((struct sNode*)__right_value458)->finalize, ((struct sNode*)__right_value458)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        else {
                                            if(string_operator_equals(field_name_350,"elif")) {
                                                __dec_obj195=node;
                                                node=(struct sNode*)come_increment_ref_count(parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value460=sNode_clone(node)))),info));
                                                if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count2(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(__right_value460) { __right_value460 = come_decrement_ref_count2(__right_value460, ((struct sNode*)__right_value460)->finalize, ((struct sNode*)__right_value460)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            else {
                                                __dec_obj196=node;
                                                node=(struct sNode*)come_increment_ref_count(parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value462=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_350),info));
                                                if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(__right_value462) { __right_value462 = come_decrement_ref_count2(__right_value462, ((struct sNode*)__right_value462)->finalize, ((struct sNode*)__right_value462)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                        }
                                    }
                                    else {
                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1596, "struct sNode");
                                        _inf_obj_value10=come_increment_ref_count(((struct sLoadFieldNode*)(__right_value465=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value464=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1596, "sLoadFieldNode")))),node,(char*)come_increment_ref_count(field_name_350),info))));
                                        _inf_value10->_protocol_obj=_inf_obj_value10;
                                        _inf_value10->finalize=(void*)sLoadFieldNode_finalize;
                                        _inf_value10->clone=(void*)sLoadFieldNode_clone;
                                        _inf_value10->compile=(void*)sLoadFieldNode_compile;
                                        _inf_value10->sline=(void*)sNodeBase_sline;
                                        _inf_value10->sname=(void*)sNodeBase_sname;
                                        _inf_value10->terminated=(void*)sNodeBase_terminated;
                                        _inf_value10->kind=(void*)sLoadFieldNode_kind;
                                        __dec_obj200=node;
                                        node=(struct sNode*)come_increment_ref_count(_inf_value10);
                                        if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0, (void*)0); }
                                        come_call_finalizer3(__right_value464,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(__right_value465,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                }
                                field_name_350 = come_decrement_ref_count2(field_name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                node2_358=(struct sNode*)come_increment_ref_count(post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info));
                                if(node2_358==((void*)0)) {
                                    if(node2_358) { node2_358 = come_decrement_ref_count2(node2_358, ((struct sNode*)node2_358)->finalize, ((struct sNode*)node2_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    break;
                                }
                                __dec_obj201=node;
                                node=(struct sNode*)come_increment_ref_count(node2_358);
                                if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count2(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0,0, (void*)0); }
                                if(node2_358) { node2_358 = come_decrement_ref_count2(node2_358, ((struct sNode*)node2_358)->finalize, ((struct sNode*)node2_358)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                        }
                    }
                }
            }
        }
    }
    __result179__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result179__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* __right_value387 = (void*)0;
struct list_item$1sNodeph* litem_323;
struct sNode* __dec_obj159;
void* __right_value388 = (void*)0;
struct list_item$1sNodeph* litem_324;
struct sNode* __dec_obj160;
void* __right_value389 = (void*)0;
struct list_item$1sNodeph* litem_325;
struct sNode* __dec_obj161;
struct list$1sNodeph* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->len==0) {
        litem_323=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value387=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 219, "list_item$1sNodeph"))));
        come_call_finalizer3(__right_value387,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_323->prev=((void*)0);
        litem_323->next=((void*)0);
        __dec_obj159=litem_323->item;
        litem_323->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_323;
        self->head=litem_323;
    }
    else {
        if(self->len==1) {
            litem_324=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value388=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 229, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value388,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_324->prev=self->head;
            litem_324->next=((void*)0);
            __dec_obj160=litem_324->item;
            litem_324->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_324;
            self->head->next=litem_324;
        }
        else {
            litem_325=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value389=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 239, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value389,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_325->prev=self->tail;
            litem_325->next=((void*)0);
            __dec_obj161=litem_325->item;
            litem_325->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_325;
            self->tail=litem_325;
        }
    }
    self->len++;
    __result160__ = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result160__;
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
struct sLoadRangeArrayNode* __result161__;
void* __right_value393 = (void*)0;
struct sLoadRangeArrayNode* result_327;
void* __right_value394 = (void*)0;
char* __dec_obj162;
void* __right_value395 = (void*)0;
struct list$1sNodeph* __dec_obj163;
void* __right_value396 = (void*)0;
struct sNode* __dec_obj164;
struct sLoadRangeArrayNode* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result161__ = __result_obj__ = (void*)0;
        return __result161__;
    }
    result_327=(struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "sLoadRangeArrayNode"));
    if(self!=((void*)0)) {
        result_327->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj162=result_327->sname;
        result_327->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj163=result_327->mArrayNum;
        result_327->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj163,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj164=result_327->mLeft;
        result_327->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_327->mQuote=self->mQuote;
    }
    __result162__ = __result_obj__ = result_327;
    come_call_finalizer3(result_327,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result162__;
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
struct sStoreArrayNode* __result163__;
void* __right_value405 = (void*)0;
struct sStoreArrayNode* result_341;
void* __right_value406 = (void*)0;
char* __dec_obj166;
void* __right_value407 = (void*)0;
struct sNode* __dec_obj167;
void* __right_value408 = (void*)0;
struct sNode* __dec_obj168;
void* __right_value409 = (void*)0;
struct list$1sNodeph* __dec_obj169;
struct sStoreArrayNode* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result163__ = __result_obj__ = (void*)0;
        return __result163__;
    }
    result_341=(struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "sStoreArrayNode"));
    if(self!=((void*)0)) {
        result_341->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj166=result_341->sname;
        result_341->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj167=result_341->mLeft;
        result_341->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj168=result_341->mRight;
        result_341->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj169=result_341->mArrayNum;
        result_341->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj169,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_341->mQuote=self->mQuote;
    }
    __result164__ = __result_obj__ = result_341;
    come_call_finalizer3(result_341,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result164__;
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
struct sLoadArrayNode* __result165__;
void* __right_value413 = (void*)0;
struct sLoadArrayNode* result_342;
void* __right_value414 = (void*)0;
char* __dec_obj171;
void* __right_value415 = (void*)0;
struct list$1sNodeph* __dec_obj172;
void* __right_value416 = (void*)0;
struct sNode* __dec_obj173;
struct sLoadArrayNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result165__ = __result_obj__ = (void*)0;
        return __result165__;
    }
    result_342=(struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "sLoadArrayNode"));
    if(self!=((void*)0)) {
        result_342->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj171=result_342->sname;
        result_342->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj172=result_342->mArrayNum;
        result_342->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj172,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_342->mBreakGuard=self->mBreakGuard;
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj173=result_342->mLeft;
        result_342->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_342->mQuote=self->mQuote;
    }
    __result166__ = __result_obj__ = result_342;
    come_call_finalizer3(result_342,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result166__;
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
struct sRangeCheckNode* __result167__;
void* __right_value422 = (void*)0;
struct sRangeCheckNode* result_346;
void* __right_value423 = (void*)0;
char* __dec_obj175;
void* __right_value424 = (void*)0;
struct sNode* __dec_obj176;
void* __right_value425 = (void*)0;
struct sNode* __dec_obj177;
void* __right_value426 = (void*)0;
struct sNode* __dec_obj178;
struct sRangeCheckNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result167__ = __result_obj__ = (void*)0;
        return __result167__;
    }
    result_346=(struct sRangeCheckNode*)come_increment_ref_count((struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "sRangeCheckNode_clone", 3, "sRangeCheckNode"));
    if(self!=((void*)0)) {
        result_346->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj175=result_346->sname;
        result_346->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj176=result_346->mLeft;
        result_346->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mBegin!=((void*)0)) {
        __dec_obj177=result_346->mBegin;
        result_346->mBegin=(struct sNode*)come_increment_ref_count(sNode_clone(self->mBegin));
        if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mEnd!=((void*)0)) {
        __dec_obj178=result_346->mEnd;
        result_346->mEnd=(struct sNode*)come_increment_ref_count(sNode_clone(self->mEnd));
        if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result168__ = __result_obj__ = result_346;
    come_call_finalizer3(result_346,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result168__;
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
struct sNullableNode* __result171__;
void* __right_value436 = (void*)0;
struct sNullableNode* result_348;
void* __right_value437 = (void*)0;
char* __dec_obj183;
void* __right_value438 = (void*)0;
struct sNode* __dec_obj184;
struct sNullableNode* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result171__ = __result_obj__ = (void*)0;
        return __result171__;
    }
    result_348=(struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "sNullableNode_clone", 3, "sNullableNode"));
    if(self!=((void*)0)) {
        result_348->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj183=result_348->sname;
        result_348->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj184=result_348->mLeft;
        result_348->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result172__ = __result_obj__ = result_348;
    come_call_finalizer3(result_348,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result172__;
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
struct sNullCheckNode* __result173__;
void* __right_value443 = (void*)0;
struct sNullCheckNode* result_349;
void* __right_value444 = (void*)0;
char* __dec_obj186;
void* __right_value445 = (void*)0;
struct sNode* __dec_obj187;
struct sNullCheckNode* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result173__ = __result_obj__ = (void*)0;
        return __result173__;
    }
    result_349=(struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "sNullCheckNode"));
    if(self!=((void*)0)) {
        result_349->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj186=result_349->sname;
        result_349->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj187=result_349->mLeft;
        result_349->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_349->mOnlyNullCecker=self->mOnlyNullCecker;
    }
    __result174__ = __result_obj__ = result_349;
    come_call_finalizer3(result_349,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result174__;
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
struct sStoreFieldNode* __result175__;
void* __right_value452 = (void*)0;
struct sStoreFieldNode* result_356;
void* __right_value453 = (void*)0;
char* __dec_obj189;
void* __right_value454 = (void*)0;
struct sNode* __dec_obj190;
void* __right_value455 = (void*)0;
struct sNode* __dec_obj191;
void* __right_value456 = (void*)0;
char* __dec_obj192;
struct sStoreFieldNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result175__ = __result_obj__ = (void*)0;
        return __result175__;
    }
    result_356=(struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "sStoreFieldNode"));
    if(self!=((void*)0)) {
        result_356->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj189=result_356->sname;
        result_356->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj190=result_356->mLeft;
        result_356->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count2(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj191=result_356->mRight;
        result_356->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count2(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj192=result_356->mName;
        result_356->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result176__ = __result_obj__ = result_356;
    come_call_finalizer3(result_356,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result176__;
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
struct sLoadFieldNode* __result177__;
void* __right_value466 = (void*)0;
struct sLoadFieldNode* result_357;
void* __right_value467 = (void*)0;
char* __dec_obj197;
void* __right_value468 = (void*)0;
struct sNode* __dec_obj198;
void* __right_value469 = (void*)0;
char* __dec_obj199;
struct sLoadFieldNode* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result177__ = __result_obj__ = (void*)0;
        return __result177__;
    }
    result_357=(struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "sLoadFieldNode"));
    if(self!=((void*)0)) {
        result_357->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj197=result_357->sname;
        result_357->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj198=result_357->mLeft;
        result_357->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count2(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj199=result_357->mName;
        result_357->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result178__ = __result_obj__ = result_357;
    come_call_finalizer3(result_357,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result178__;
}

