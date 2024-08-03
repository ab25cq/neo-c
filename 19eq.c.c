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
struct sPlusPlusNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    _Bool mQuote;
};
struct sMinusMinusNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    _Bool mQuote;
};
struct sPlusEqualNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sMinusEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sMultEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sDivEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sModEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sLShifEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sRShiftEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sXorEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sOrEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sAndEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sExpEqualNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
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

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

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

struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, _Bool quote, struct sInfo* info);

char* sPlusPlusNode_kind(struct sPlusPlusNode* self);

_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
static struct sNode* sNode_clone(struct sNode* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, _Bool quote, struct sInfo* info);

char* sMinusMinusNode_kind(struct sMinusMinusNode* self);

_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info);

struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sPlusEqualNode_kind(struct sPlusEqualNode* self);

_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info);

struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sMinusEqualNode_kind(struct sMinusEqualNode* self);

_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info);

struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sMultEqualNode_kind(struct sMultEqualNode* self);

_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info);

struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sDivEqualNode_kind(struct sDivEqualNode* self);

_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info);

struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sModEqualNode_kind(struct sModEqualNode* self);

_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info);

struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sLShifEqualNode_kind(struct sLShifEqualNode* self);

_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info);

struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sRShiftEqualNode_kind(struct sRShiftEqualNode* self);

_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info);

struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sXorEqualNode_kind(struct sXorEqualNode* self);

_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info);

struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sOrEqualNode_kind(struct sOrEqualNode* self);

_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info);

struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sAndEqualNode_kind(struct sAndEqualNode* self);

_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info);

struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sExpEqualNode_kind(struct sExpEqualNode* self);

_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo* info);

struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);

static void sPlusPlusNode_finalize(struct sPlusPlusNode* self);
static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self);
static void sMinusMinusNode_finalize(struct sMinusMinusNode* self);
static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self);
static void sPlusEqualNode_finalize(struct sPlusEqualNode* self);
static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self);
static void sMinusEqualNode_finalize(struct sMinusEqualNode* self);
static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self);
static void sMultEqualNode_finalize(struct sMultEqualNode* self);
static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self);
static void sDivEqualNode_finalize(struct sDivEqualNode* self);
static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self);
static void sModEqualNode_finalize(struct sModEqualNode* self);
static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self);
static void sLShifEqualNode_finalize(struct sLShifEqualNode* self);
static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self);
static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self);
static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self);
static void sXorEqualNode_finalize(struct sXorEqualNode* self);
static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self);
static void sAndEqualNode_finalize(struct sAndEqualNode* self);
static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self);
static void sOrEqualNode_finalize(struct sOrEqualNode* self);
static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self);
static void sExpEqualNode_finalize(struct sExpEqualNode* self);
static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self);
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
void* __right_value0;
void* __right_value1;
struct buffer* result_0;
struct buffer* __result1__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value0 = (void*)0;
__right_value1 = (void*)0;
memset(&result_0, 0, sizeof(struct buffer*));
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1899, "buffer"))))))));
    come_call_finalizer3(__right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result1__;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
void* __right_value2;
void* __right_value3;
struct buffer* result_1;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value2 = (void*)0;
__right_value3 = (void*)0;
memset(&result_1, 0, sizeof(struct buffer*));
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1906, "buffer"))))))));
    come_call_finalizer3(__right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    __result2__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
void* __right_value4;
void* __right_value5;
struct buffer* result_2;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value4 = (void*)0;
__right_value5 = (void*)0;
memset(&result_2, 0, sizeof(struct buffer*));
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1913, "buffer"))))))));
    come_call_finalizer3(__right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    __result3__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
void* __right_value6;
void* __right_value7;
struct buffer* result_3;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value6 = (void*)0;
__right_value7 = (void*)0;
memset(&result_3, 0, sizeof(struct buffer*));
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1920, "buffer"))))))));
    come_call_finalizer3(__right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    __result4__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
void* __right_value8;
void* __right_value9;
struct buffer* result_4;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value8 = (void*)0;
__right_value9 = (void*)0;
memset(&result_4, 0, sizeof(struct buffer*));
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1927, "buffer"))))))));
    come_call_finalizer3(__right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    __result5__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
void* __right_value10;
void* __right_value11;
struct buffer* result_5;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value10 = (void*)0;
__right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct buffer*));
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1934, "buffer"))))))));
    come_call_finalizer3(__right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    __result6__ = __result_obj__ = result_5;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* __right_value12;
struct smart_pointer$1char* result_6;
void* __right_value13;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value12 = (void*)0;
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
__right_value13 = (void*)0;
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(__right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1950, "smart_pointer$1char"))));
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value13=buffer_clone(self))));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_6->p=result_6->memory->buf;
    __result7__ = __result_obj__ = result_6;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* __right_value14;
struct smart_pointer$1char* result_7;
void* __right_value15;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value14 = (void*)0;
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
__right_value15 = (void*)0;
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(__right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 1960, "smart_pointer$1char"))));
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value15=buffer_clone(self))));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_7->p=(char*)result_7->memory->buf;
    __result8__ = __result_obj__ = result_7;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result8__;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* __right_value16;
struct smart_pointer$1short* result_8;
void* __right_value17;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value16 = (void*)0;
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
__right_value17 = (void*)0;
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(__right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 1970, "smart_pointer$1short"))));
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value17=buffer_clone(self))));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_8->p=(short short*)result_8->memory->buf;
    __result9__ = __result_obj__ = result_8;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result9__;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* __right_value18;
struct smart_pointer$1int* result_9;
void* __right_value19;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value18 = (void*)0;
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
__right_value19 = (void*)0;
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(__right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 1980, "smart_pointer$1int"))));
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value19=buffer_clone(self))));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_9->p=(int*)result_9->memory->buf;
    __result10__ = __result_obj__ = result_9;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* __right_value20;
struct smart_pointer$1long* result_10;
void* __right_value21;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value20 = (void*)0;
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
__right_value21 = (void*)0;
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(__right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 1990, "smart_pointer$1long"))));
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value21=buffer_clone(self))));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_10->p=(long*)result_10->memory->buf;
    __result11__ = __result_obj__ = result_10;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result11__;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* __right_value22;
void* __right_value25;
struct smart_pointer$1char* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value22 = (void*)0;
__right_value25 = (void*)0;
    __result13__ = __result_obj__ = ((struct smart_pointer$1char*)(__right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(__right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2161, "smart_pointer$1char")))),self,len)));
    come_call_finalizer3(__right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result13__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
void* __right_value26;
void* __right_value29;
struct smart_pointer$1short* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value26 = (void*)0;
__right_value29 = (void*)0;
    __result15__ = __result_obj__ = ((struct smart_pointer$1short*)(__right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(__right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2166, "smart_pointer$1short")))),self,len)));
    come_call_finalizer3(__right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result15__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
void* __right_value30;
void* __right_value33;
struct smart_pointer$1int* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value30 = (void*)0;
__right_value33 = (void*)0;
    __result17__ = __result_obj__ = ((struct smart_pointer$1int*)(__right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(__right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2171, "smart_pointer$1int")))),self,len)));
    come_call_finalizer3(__right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result17__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
void* __right_value34;
void* __right_value37;
struct smart_pointer$1long* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value34 = (void*)0;
__right_value37 = (void*)0;
    __result19__ = __result_obj__ = ((struct smart_pointer$1long*)(__right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(__right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2176, "smart_pointer$1long")))),self,len)));
    come_call_finalizer3(__right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result19__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
void* __right_value38;
void* __right_value41;
struct smart_pointer$1float* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value38 = (void*)0;
__right_value41 = (void*)0;
    __result21__ = __result_obj__ = ((struct smart_pointer$1float*)(__right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(__right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2181, "smart_pointer$1float")))),self,len)));
    come_call_finalizer3(__right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result21__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
void* __right_value42;
void* __right_value45;
struct smart_pointer$1double* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value42 = (void*)0;
__right_value45 = (void*)0;
    __result23__ = __result_obj__ = ((struct smart_pointer$1double*)(__right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(__right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2186, "smart_pointer$1double")))),self,len)));
    come_call_finalizer3(__right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result23__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__;
void* __right_value46;
void* __right_value50;
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value46 = (void*)0;
__right_value50 = (void*)0;
    __result26__ = __result_obj__ = ((struct list$1char*)(__right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(__right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2191, "list$1char")))),len,self)));
    come_call_finalizer3(__right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result26__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__;
void* __right_value51;
void* __right_value55;
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value51 = (void*)0;
__right_value55 = (void*)0;
    __result29__ = __result_obj__ = ((struct list$1short*)(__right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(__right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2196, "list$1short")))),len,self)));
    come_call_finalizer3(__right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result29__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__;
void* __right_value56;
void* __right_value60;
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value56 = (void*)0;
__right_value60 = (void*)0;
    __result32__ = __result_obj__ = ((struct list$1int*)(__right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(__right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2201, "list$1int")))),len,self)));
    come_call_finalizer3(__right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result32__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__;
void* __right_value61;
void* __right_value65;
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value61 = (void*)0;
__right_value65 = (void*)0;
    __result35__ = __result_obj__ = ((struct list$1long*)(__right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(__right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2206, "list$1long")))),len,self)));
    come_call_finalizer3(__right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result35__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__;
void* __right_value66;
void* __right_value70;
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value66 = (void*)0;
__right_value70 = (void*)0;
    __result38__ = __result_obj__ = ((struct list$1float*)(__right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(__right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2211, "list$1float")))),len,self)));
    come_call_finalizer3(__right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result38__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__;
void* __right_value71;
void* __right_value75;
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value71 = (void*)0;
__right_value75 = (void*)0;
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
void* __right_value76;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value76 = (void*)0;
    __result42__ = __result_obj__ = ((char*)(__right_value76=xsprintf(msg,self)));
    __right_value76 = come_decrement_ref_count2(__right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* __right_value77;
char* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value77 = (void*)0;
    __result43__ = __result_obj__ = ((char*)(__right_value77=xsprintf(msg,self)));
    __right_value77 = come_decrement_ref_count2(__right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result43__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* __right_value78;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value78 = (void*)0;
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
void* __right_value23;
void* __right_value24;
struct buffer* __dec_obj6;
struct smart_pointer$1char* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value23 = (void*)0;
__right_value24 = (void*)0;
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(char)*size);
        self->p=(char*)self->memory->buf;
        __result12__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result12__;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* __right_value27;
void* __right_value28;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value27 = (void*)0;
__right_value28 = (void*)0;
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(short short)*size);
        self->p=(short short*)self->memory->buf;
        __result14__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result14__;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* __right_value31;
void* __right_value32;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value31 = (void*)0;
__right_value32 = (void*)0;
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(int)*size);
        self->p=(int*)self->memory->buf;
        __result16__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result16__;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* __right_value35;
void* __right_value36;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value35 = (void*)0;
__right_value36 = (void*)0;
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append(self->memory,memory,sizeof(long)*size);
        self->p=(long*)self->memory->buf;
        __result18__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result18__;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* __right_value39;
void* __right_value40;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value39 = (void*)0;
__right_value40 = (void*)0;
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value39,buffer_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value43;
void* __right_value44;
struct buffer* __dec_obj11;
struct smart_pointer$1double* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value43 = (void*)0;
__right_value44 = (void*)0;
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2002, "buffer"))))))));
        come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value43,buffer_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value47;
struct list_item$1char* litem_12;
void* __right_value48;
struct list_item$1char* litem_13;
void* __right_value49;
struct list_item$1char* litem_14;
struct list$1char* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value47 = (void*)0;
memset(&litem_12, 0, sizeof(struct list_item$1char*));
__right_value48 = (void*)0;
memset(&litem_13, 0, sizeof(struct list_item$1char*));
__right_value49 = (void*)0;
memset(&litem_14, 0, sizeof(struct list_item$1char*));
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
void* __right_value52;
struct list_item$1short* litem_18;
void* __right_value53;
struct list_item$1short* litem_19;
void* __right_value54;
struct list_item$1short* litem_20;
struct list$1short* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value52 = (void*)0;
memset(&litem_18, 0, sizeof(struct list_item$1short*));
__right_value53 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1short*));
__right_value54 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1short*));
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
void* __right_value57;
struct list_item$1int* litem_24;
void* __right_value58;
struct list_item$1int* litem_25;
void* __right_value59;
struct list_item$1int* litem_26;
struct list$1int* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value57 = (void*)0;
memset(&litem_24, 0, sizeof(struct list_item$1int*));
__right_value58 = (void*)0;
memset(&litem_25, 0, sizeof(struct list_item$1int*));
__right_value59 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1int*));
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
void* __right_value62;
struct list_item$1long* litem_30;
void* __right_value63;
struct list_item$1long* litem_31;
void* __right_value64;
struct list_item$1long* litem_32;
struct list$1long* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value62 = (void*)0;
memset(&litem_30, 0, sizeof(struct list_item$1long*));
__right_value63 = (void*)0;
memset(&litem_31, 0, sizeof(struct list_item$1long*));
__right_value64 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1long*));
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
void* __right_value67;
struct list_item$1float* litem_36;
void* __right_value68;
struct list_item$1float* litem_37;
void* __right_value69;
struct list_item$1float* litem_38;
struct list$1float* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value67 = (void*)0;
memset(&litem_36, 0, sizeof(struct list_item$1float*));
__right_value68 = (void*)0;
memset(&litem_37, 0, sizeof(struct list_item$1float*));
__right_value69 = (void*)0;
memset(&litem_38, 0, sizeof(struct list_item$1float*));
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
void* __right_value72;
struct list_item$1double* litem_42;
void* __right_value73;
struct list_item$1double* litem_43;
void* __right_value74;
struct list_item$1double* litem_44;
struct list$1double* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value72 = (void*)0;
memset(&litem_42, 0, sizeof(struct list_item$1double*));
__right_value73 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1double*));
__right_value74 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1double*));
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
memset(&it_45, 0, sizeof(struct list_item$1double*));
memset(&prev_it_46, 0, sizeof(struct list_item$1double*));
            it_45=self->head;
            while(it_45!=((void*)0)) {
                prev_it_46=it_45;
                it_45=it_45->next;
                come_call_finalizer3(prev_it_46,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
            }
}










struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* __right_value79;
void* __right_value81;
struct sNode* __dec_obj12;
struct sPlusPlusNode* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value79 = (void*)0;
__right_value81 = (void*)0;
    ((struct sNodeBase*)(__right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj12=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value81=sNode_clone(left))));
    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count2(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0, (void*)0); }
    self->mQuote=quote;
    __result47__ = __result_obj__ = self;
    come_call_finalizer3(self,sPlusPlusNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result47__;
    come_call_finalizer3(self,sPlusPlusNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sPlusPlusNode_kind(struct sPlusPlusNode* self){
void* __result_obj__;
void* __right_value82;
char* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value82 = (void*)0;
    __result48__ = __result_obj__ = ((char*)(__right_value82=__builtin_string("sPlusPlusNode")));
    __right_value82 = come_decrement_ref_count2(__right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result48__;
}

_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info){
struct sNode* left_48;
void* __right_value83;
struct CVALUE* left_value_49;
struct sType* type_50;
char* fun_name_51;
_Bool calling_fun_52;
void* __right_value84;
void* __right_value85;
struct CVALUE* come_value_53;
void* __right_value86;
char* __dec_obj13;
void* __right_value121;
struct sType* __dec_obj37;
_Bool __result66__;
memset(&left_48, 0, sizeof(struct sNode*));
__right_value83 = (void*)0;
memset(&left_value_49, 0, sizeof(struct CVALUE*));
memset(&type_50, 0, sizeof(struct sType*));
memset(&calling_fun_52, 0, sizeof(_Bool));
__right_value84 = (void*)0;
__right_value85 = (void*)0;
memset(&come_value_53, 0, sizeof(struct CVALUE*));
__right_value86 = (void*)0;
__right_value121 = (void*)0;
    left_48=self->mLeft;
    if(!node_compile(left_48,info)) {
        return (_Bool)0;
    }
    left_value_49=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value83=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    type_50=(struct sType*)come_increment_ref_count(left_value_49->type);
    fun_name_51="operator_plus_plus";
    if(self->mQuote) {
        calling_fun_52=(_Bool)0;
    }
    else {
        calling_fun_52=operator_overload_fun_self(type_50,fun_name_51,left_value_49,info);
    }
    if(!calling_fun_52) {
        come_value_53=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value85=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value84=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 42, "CVALUE"))))))));
        come_call_finalizer3(__right_value84,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj13=come_value_53->c_value;
        come_value_53->c_value=(char*)come_increment_ref_count(((char*)(__right_value86=xsprintf("%s++",left_value_49->c_value))));
        __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj37=come_value_53->type;
        come_value_53->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value121=sType_clone(left_value_49->type))));
        come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_53->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_53));
        add_come_last_code(info,"%s;\n",come_value_53->c_value);
        come_call_finalizer3(come_value_53,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result66__ = (_Bool)1;
    come_call_finalizer3(left_value_49,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_50,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result66__;
    come_call_finalizer3(left_value_49,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_50,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNodeBase_finalize(struct sNodeBase* self){
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
struct sNode* __result45__;
void* __right_value80;
struct sNode* result_47;
struct sNode* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value80 = (void*)0;
memset(&result_47, 0, sizeof(struct sNode*));
        if(self==(void*)0) {
            __result45__ = __result_obj__ = (void*)0;
            return __result45__;
        }
        result_47=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value80=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
        if(self!=((void*)0)&&self->clone!=((void*)0)) {
            result_47->_protocol_obj=self->clone(self->_protocol_obj);
        }
        if(self!=((void*)0)) {
            result_47->finalize=self->finalize;
        }
        if(self!=((void*)0)) {
            result_47->clone=self->clone;
        }
        if(self!=((void*)0)) {
            result_47->compile=self->compile;
        }
        if(self!=((void*)0)) {
            result_47->sline=self->sline;
        }
        if(self!=((void*)0)) {
            result_47->sname=self->sname;
        }
        if(self!=((void*)0)) {
            result_47->terminated=self->terminated;
        }
        if(self!=((void*)0)) {
            result_47->kind=self->kind;
        }
        __result46__ = __result_obj__ = result_47;
        if(result_47) { result_47 = come_decrement_ref_count2(result_47, ((struct sNode*)result_47)->finalize, ((struct sNode*)result_47)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result46__;
        if(result_47) { result_47 = come_decrement_ref_count2(result_47, ((struct sNode*)result_47)->finalize, ((struct sNode*)result_47)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void CVALUE_finalize(struct CVALUE* self){
            if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
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

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_54;
struct list_item$1sTypeph* prev_it_55;
memset(&it_54, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_55, 0, sizeof(struct list_item$1sTypeph*));
                            it_54=self->head;
                            while(it_54!=((void*)0)) {
                                prev_it_55=it_54;
                                it_54=it_54->next;
                                come_call_finalizer3(prev_it_55,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_56;
struct list_item$1sNodeph* prev_it_57;
memset(&it_56, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_57, 0, sizeof(struct list_item$1sNodeph*));
                            it_56=self->head;
                            while(it_56!=((void*)0)) {
                                prev_it_57=it_56;
                                it_56=it_56->next;
                                come_call_finalizer3(prev_it_57,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
                                    if(self!=((void*)0)&&self->item!=((void*)0)) {
                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_58;
struct list_item$1charph* prev_it_59;
memset(&it_58, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_59, 0, sizeof(struct list_item$1charph*));
                            it_58=self->head;
                            while(it_58!=((void*)0)) {
                                prev_it_59=it_58;
                                it_58=it_58->next;
                                come_call_finalizer3(prev_it_59,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
                                    if(self!=((void*)0)&&self->item!=((void*)0)) {
                                        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
struct sType* __result49__;
void* __right_value87;
struct sType* result_60;
void* __right_value94;
struct list$1sTypeph* __dec_obj17;
void* __right_value97;
struct tuple1$1sTypeph* __dec_obj19;
void* __right_value98;
struct tuple1$1sTypeph* __dec_obj20;
void* __right_value99;
char* __dec_obj21;
void* __right_value100;
struct list$1sTypeph* __dec_obj22;
void* __right_value107;
struct list$1sNodeph* __dec_obj26;
void* __right_value108;
struct list$1sTypeph* __dec_obj27;
void* __right_value115;
struct list$1charph* __dec_obj31;
void* __right_value116;
struct tuple1$1sTypeph* __dec_obj32;
void* __right_value117;
struct sNode* __dec_obj33;
void* __right_value118;
struct sNode* __dec_obj34;
void* __right_value119;
char* __dec_obj35;
void* __right_value120;
char* __dec_obj36;
struct sType* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value87 = (void*)0;
memset(&result_60, 0, sizeof(struct sType*));
__right_value94 = (void*)0;
__right_value97 = (void*)0;
__right_value98 = (void*)0;
__right_value99 = (void*)0;
__right_value100 = (void*)0;
__right_value107 = (void*)0;
__right_value108 = (void*)0;
__right_value115 = (void*)0;
__right_value116 = (void*)0;
__right_value117 = (void*)0;
__right_value118 = (void*)0;
__right_value119 = (void*)0;
__right_value120 = (void*)0;
            if(self==(void*)0) {
                __result49__ = __result_obj__ = (void*)0;
                return __result49__;
            }
            result_60=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value87=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            if(self!=((void*)0)) {
                result_60->mClass=self->mClass;
            }
            if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
                __dec_obj17=result_60->mMultipleTypes;
                result_60->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value94=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer3(__dec_obj17,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                __dec_obj19=result_60->mNoSolvedGenericsType;
                result_60->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value97=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
                __dec_obj20=result_60->mOriginalLoadVarType;
                result_60->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value98=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer3(__dec_obj20,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                __dec_obj21=result_60->mGenericsName;
                result_60->mGenericsName=(char*)come_increment_ref_count(((char*)(__right_value99=string_clone(self->mGenericsName))));
                __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                __dec_obj22=result_60->mGenericsTypes;
                result_60->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value100=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer3(__dec_obj22,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                __dec_obj26=result_60->mArrayNum;
                result_60->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value107=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer3(__dec_obj26,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)) {
                result_60->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                __dec_obj27=result_60->mParamTypes;
                result_60->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value108=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                __dec_obj31=result_60->mParamNames;
                result_60->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value115=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer3(__dec_obj31,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                __dec_obj32=result_60->mResultType;
                result_60->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value116=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer3(__dec_obj32,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)) {
                result_60->mVarArgs=self->mVarArgs;
            }
            if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
                __dec_obj33=result_60->mAlignas;
                result_60->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value117=sNode_clone(self->mAlignas))));
                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
            }
            if(self!=((void*)0)) {
                result_60->mUnsigned=self->mUnsigned;
            }
            if(self!=((void*)0)) {
                result_60->mShort=self->mShort;
            }
            if(self!=((void*)0)) {
                result_60->mLong=self->mLong;
            }
            if(self!=((void*)0)) {
                result_60->mLongLong=self->mLongLong;
            }
            if(self!=((void*)0)) {
                result_60->mConstant=self->mConstant;
            }
            if(self!=((void*)0)) {
                result_60->mRegister=self->mRegister;
            }
            if(self!=((void*)0)) {
                result_60->mVolatile=self->mVolatile;
            }
            if(self!=((void*)0)) {
                result_60->mStatic=self->mStatic;
            }
            if(self!=((void*)0)) {
                result_60->mUniq=self->mUniq;
            }
            if(self!=((void*)0)) {
                result_60->mRecord=self->mRecord;
            }
            if(self!=((void*)0)) {
                result_60->mExtern=self->mExtern;
            }
            if(self!=((void*)0)) {
                result_60->mRestrict=self->mRestrict;
            }
            if(self!=((void*)0)) {
                result_60->mImmutable=self->mImmutable;
            }
            if(self!=((void*)0)) {
                result_60->mHeap=self->mHeap;
            }
            if(self!=((void*)0)) {
                result_60->mDummyHeap=self->mDummyHeap;
            }
            if(self!=((void*)0)) {
                result_60->mDelegate=self->mDelegate;
            }
            if(self!=((void*)0)) {
                result_60->mShare=self->mShare;
            }
            if(self!=((void*)0)) {
                result_60->mClone=self->mClone;
            }
            if(self!=((void*)0)) {
                result_60->mNoHeap=self->mNoHeap;
            }
            if(self!=((void*)0)) {
                result_60->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(self!=((void*)0)) {
                result_60->mRefference=self->mRefference;
            }
            if(self!=((void*)0)) {
                result_60->mException=self->mException;
            }
            if(self!=((void*)0)) {
                result_60->mPointerNum=self->mPointerNum;
            }
            if(self!=((void*)0)) {
                result_60->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(self!=((void*)0)) {
                result_60->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(self!=((void*)0)) {
                result_60->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
            }
            if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
                __dec_obj34=result_60->mSizeNum;
                result_60->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value118=sNode_clone(self->mSizeNum))));
                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
            }
            if(self!=((void*)0)) {
                result_60->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(self!=((void*)0)) {
                result_60->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                __dec_obj35=result_60->mOriginalTypeName;
                result_60->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(__right_value119=string_clone(self->mOriginalTypeName))));
                __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(self!=((void*)0)) {
                result_60->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(self!=((void*)0)) {
                result_60->mFunctionParam=self->mFunctionParam;
            }
            if(self!=((void*)0)) {
                result_60->mAllocaValue=self->mAllocaValue;
            }
            if(self!=((void*)0)) {
                result_60->mGenericsStruct=self->mGenericsStruct;
            }
            if(self!=((void*)0)) {
                result_60->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(self!=((void*)0)) {
                result_60->mComeMemCore=self->mComeMemCore;
            }
            if(self!=((void*)0)) {
                result_60->mInline=self->mInline;
            }
            if(self!=((void*)0)) {
                result_60->mNullValue=self->mNullValue;
            }
            if(self!=((void*)0)) {
                result_60->mGuardValue=self->mGuardValue;
            }
            if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
                __dec_obj36=result_60->mAsmName;
                result_60->mAsmName=(char*)come_increment_ref_count(((char*)(__right_value120=string_clone(self->mAsmName))));
                __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(self!=((void*)0)) {
                result_60->mArrayPointerType=self->mArrayPointerType;
            }
            if(self!=((void*)0)) {
                result_60->mLambdaArray=self->mLambdaArray;
            }
            if(self!=((void*)0)) {
                result_60->mNoNumberArray=self->mNoNumberArray;
            }
            __result64__ = __result_obj__ = result_60;
            come_call_finalizer3(result_60,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result64__;
            come_call_finalizer3(result_60,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result50__;
void* __right_value88;
void* __right_value89;
struct list$1sTypeph* result_61;
struct list_item$1sTypeph* it_62;
void* __right_value93;
struct list$1sTypeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value88 = (void*)0;
__right_value89 = (void*)0;
memset(&result_61, 0, sizeof(struct list$1sTypeph*));
memset(&it_62, 0, sizeof(struct list_item$1sTypeph*));
__right_value93 = (void*)0;
                    if(self==((void*)0)) {
                        __result50__ = __result_obj__ = ((void*)0);
                        return __result50__;
                    }
                    result_61=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value89=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value88=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))))));
                    come_call_finalizer3(__right_value88,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_62=self->head;
                    while(it_62!=((void*)0)) {
                        list$1sTypeph_add(result_61,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value93=sType_clone(it_62->item)))));
                        come_call_finalizer3(__right_value93,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        it_62=it_62->next;
                    }
                    __result53__ = __result_obj__ = result_61;
                    come_call_finalizer3(result_61,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result53__;
                    come_call_finalizer3(result_61,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result51__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result51__;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* __right_value90;
struct list_item$1sTypeph* litem_63;
struct sType* __dec_obj14;
void* __right_value91;
struct list_item$1sTypeph* litem_64;
struct sType* __dec_obj15;
void* __right_value92;
struct list_item$1sTypeph* litem_65;
struct sType* __dec_obj16;
struct list$1sTypeph* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value90 = (void*)0;
memset(&litem_63, 0, sizeof(struct list_item$1sTypeph*));
__right_value91 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1sTypeph*));
__right_value92 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sTypeph*));
                            if(self->len==0) {
                                litem_63=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value90=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
                                come_call_finalizer3(__right_value90,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_63->prev=((void*)0);
                                litem_63->next=((void*)0);
                                __dec_obj14=litem_63->item;
                                litem_63->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_63;
                                self->head=litem_63;
                            }
                            else {
                                if(self->len==1) {
                                    litem_64=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value91=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
                                    come_call_finalizer3(__right_value91,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_64->prev=self->head;
                                    litem_64->next=((void*)0);
                                    __dec_obj15=litem_64->item;
                                    litem_64->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_64;
                                    self->head->next=litem_64;
                                }
                                else {
                                    litem_65=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value92=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
                                    come_call_finalizer3(__right_value92,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_65->prev=self->tail;
                                    litem_65->next=((void*)0);
                                    __dec_obj16=litem_65->item;
                                    litem_65->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_65;
                                    self->tail=litem_65;
                                }
                            }
                            self->len++;
                            __result52__ = __result_obj__ = self;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result52__;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_66;
struct list_item$1sTypeph* prev_it_67;
memset(&it_66, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_67, 0, sizeof(struct list_item$1sTypeph*));
                    it_66=self->head;
                    while(it_66!=((void*)0)) {
                        prev_it_67=it_66;
                        it_66=it_66->next;
                        come_call_finalizer3(prev_it_67,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
struct tuple1$1sTypeph* __result54__;
void* __right_value95;
struct tuple1$1sTypeph* result_68;
void* __right_value96;
struct sType* __dec_obj18;
struct tuple1$1sTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value95 = (void*)0;
memset(&result_68, 0, sizeof(struct tuple1$1sTypeph*));
__right_value96 = (void*)0;
                    if(self==(void*)0) {
                        __result54__ = __result_obj__ = (void*)0;
                        return __result54__;
                    }
                    result_68=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value95=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        __dec_obj18=result_68->v1;
                        result_68->v1=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value96=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj18,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    __result55__ = __result_obj__ = result_68;
                    come_call_finalizer3(result_68,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result55__;
                    come_call_finalizer3(result_68,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
                        if(self!=((void*)0)&&self->v1!=((void*)0)) {
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result56__;
void* __right_value101;
void* __right_value102;
struct list$1sNodeph* result_69;
struct list_item$1sNodeph* it_70;
void* __right_value106;
struct list$1sNodeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value101 = (void*)0;
__right_value102 = (void*)0;
memset(&result_69, 0, sizeof(struct list$1sNodeph*));
memset(&it_70, 0, sizeof(struct list_item$1sNodeph*));
__right_value106 = (void*)0;
                    if(self==((void*)0)) {
                        __result56__ = __result_obj__ = ((void*)0);
                        return __result56__;
                    }
                    result_69=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value102=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value101=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))))));
                    come_call_finalizer3(__right_value101,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_70=self->head;
                    while(it_70!=((void*)0)) {
                        list$1sNodeph_add(result_69,(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value106=sNode_clone(it_70->item)))));
                        if(__right_value106) { __right_value106 = come_decrement_ref_count2(__right_value106, ((struct sNode*)__right_value106)->finalize, ((struct sNode*)__right_value106)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_70=it_70->next;
                    }
                    __result59__ = __result_obj__ = result_69;
                    come_call_finalizer3(result_69,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result59__;
                    come_call_finalizer3(result_69,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result57__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result57__;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* __right_value103;
struct list_item$1sNodeph* litem_71;
struct sNode* __dec_obj23;
void* __right_value104;
struct list_item$1sNodeph* litem_72;
struct sNode* __dec_obj24;
void* __right_value105;
struct list_item$1sNodeph* litem_73;
struct sNode* __dec_obj25;
struct list$1sNodeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value103 = (void*)0;
memset(&litem_71, 0, sizeof(struct list_item$1sNodeph*));
__right_value104 = (void*)0;
memset(&litem_72, 0, sizeof(struct list_item$1sNodeph*));
__right_value105 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1sNodeph*));
                            if(self->len==0) {
                                litem_71=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value103=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
                                come_call_finalizer3(__right_value103,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_71->prev=((void*)0);
                                litem_71->next=((void*)0);
                                __dec_obj23=litem_71->item;
                                litem_71->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_71;
                                self->head=litem_71;
                            }
                            else {
                                if(self->len==1) {
                                    litem_72=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value104=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
                                    come_call_finalizer3(__right_value104,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_72->prev=self->head;
                                    litem_72->next=((void*)0);
                                    __dec_obj24=litem_72->item;
                                    litem_72->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_72;
                                    self->head->next=litem_72;
                                }
                                else {
                                    litem_73=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value105=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
                                    come_call_finalizer3(__right_value105,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_73->prev=self->tail;
                                    litem_73->next=((void*)0);
                                    __dec_obj25=litem_73->item;
                                    litem_73->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail->next=litem_73;
                                    self->tail=litem_73;
                                }
                            }
                            self->len++;
                            __result58__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result58__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_74;
struct list_item$1sNodeph* prev_it_75;
memset(&it_74, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_75, 0, sizeof(struct list_item$1sNodeph*));
                    it_74=self->head;
                    while(it_74!=((void*)0)) {
                        prev_it_75=it_74;
                        it_74=it_74->next;
                        come_call_finalizer3(prev_it_75,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result60__;
void* __right_value109;
void* __right_value110;
struct list$1charph* result_76;
struct list_item$1charph* it_77;
void* __right_value114;
struct list$1charph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value109 = (void*)0;
__right_value110 = (void*)0;
memset(&result_76, 0, sizeof(struct list$1charph*));
memset(&it_77, 0, sizeof(struct list_item$1charph*));
__right_value114 = (void*)0;
                    if(self==((void*)0)) {
                        __result60__ = __result_obj__ = ((void*)0);
                        return __result60__;
                    }
                    result_76=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value110=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value109=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))))));
                    come_call_finalizer3(__right_value109,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_77=self->head;
                    while(it_77!=((void*)0)) {
                        list$1charph_add(result_76,(char*)come_increment_ref_count(((char*)(__right_value114=string_clone(it_77->item)))));
                        __right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_77=it_77->next;
                    }
                    __result63__ = __result_obj__ = result_76;
                    come_call_finalizer3(result_76,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result63__;
                    come_call_finalizer3(result_76,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result61__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result61__;
                        come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
void* __right_value111;
struct list_item$1charph* litem_78;
char* __dec_obj28;
void* __right_value112;
struct list_item$1charph* litem_79;
char* __dec_obj29;
void* __right_value113;
struct list_item$1charph* litem_80;
char* __dec_obj30;
struct list$1charph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value111 = (void*)0;
memset(&litem_78, 0, sizeof(struct list_item$1charph*));
__right_value112 = (void*)0;
memset(&litem_79, 0, sizeof(struct list_item$1charph*));
__right_value113 = (void*)0;
memset(&litem_80, 0, sizeof(struct list_item$1charph*));
                            if(self->len==0) {
                                litem_78=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value111=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
                                come_call_finalizer3(__right_value111,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_78->prev=((void*)0);
                                litem_78->next=((void*)0);
                                __dec_obj28=litem_78->item;
                                litem_78->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_78;
                                self->head=litem_78;
                            }
                            else {
                                if(self->len==1) {
                                    litem_79=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value112=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
                                    come_call_finalizer3(__right_value112,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_79->prev=self->head;
                                    litem_79->next=((void*)0);
                                    __dec_obj29=litem_79->item;
                                    litem_79->item=(char*)come_increment_ref_count(item);
                                    __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_79;
                                    self->head->next=litem_79;
                                }
                                else {
                                    litem_80=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value113=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
                                    come_call_finalizer3(__right_value113,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_80->prev=self->tail;
                                    litem_80->next=((void*)0);
                                    __dec_obj30=litem_80->item;
                                    litem_80->item=(char*)come_increment_ref_count(item);
                                    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_80;
                                    self->tail=litem_80;
                                }
                            }
                            self->len++;
                            __result62__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result62__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_81;
struct list_item$1charph* prev_it_82;
memset(&it_81, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_82, 0, sizeof(struct list_item$1charph*));
                    it_81=self->head;
                    while(it_81!=((void*)0)) {
                        prev_it_82=it_81;
                        it_81=it_81->next;
                        come_call_finalizer3(prev_it_82,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
void* __right_value122;
struct list_item$1CVALUEph* litem_83;
struct CVALUE* __dec_obj38;
void* __right_value123;
struct list_item$1CVALUEph* litem_84;
struct CVALUE* __dec_obj39;
void* __right_value124;
struct list_item$1CVALUEph* litem_85;
struct CVALUE* __dec_obj40;
struct list$1CVALUEph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value122 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1CVALUEph*));
__right_value123 = (void*)0;
memset(&litem_84, 0, sizeof(struct list_item$1CVALUEph*));
__right_value124 = (void*)0;
memset(&litem_85, 0, sizeof(struct list_item$1CVALUEph*));
            if(self->len==0) {
                litem_83=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value122=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 219, "list_item$1CVALUEph"))));
                come_call_finalizer3(__right_value122,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_83->prev=((void*)0);
                litem_83->next=((void*)0);
                __dec_obj38=litem_83->item;
                litem_83->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj38,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_83;
                self->head=litem_83;
            }
            else {
                if(self->len==1) {
                    litem_84=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value123=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 229, "list_item$1CVALUEph"))));
                    come_call_finalizer3(__right_value123,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_84->prev=self->head;
                    litem_84->next=((void*)0);
                    __dec_obj39=litem_84->item;
                    litem_84->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj39,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_84;
                    self->head->next=litem_84;
                }
                else {
                    litem_85=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value124=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 239, "list_item$1CVALUEph"))));
                    come_call_finalizer3(__right_value124,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_85->prev=self->tail;
                    litem_85->next=((void*)0);
                    __dec_obj40=litem_85->item;
                    litem_85->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj40,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_85;
                    self->tail=litem_85;
                }
            }
            self->len++;
            __result65__ = __result_obj__ = self;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result65__;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
                    if(self!=((void*)0)&&self->item!=((void*)0)) {
                        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* __right_value125;
void* __right_value126;
struct sNode* __dec_obj41;
struct sMinusMinusNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value125 = (void*)0;
__right_value126 = (void*)0;
    ((struct sNodeBase*)(__right_value125=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value125,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj41=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value126=sNode_clone(left))));
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); }
    self->mQuote=quote;
    __result67__ = __result_obj__ = self;
    come_call_finalizer3(self,sMinusMinusNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result67__;
    come_call_finalizer3(self,sMinusMinusNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sMinusMinusNode_kind(struct sMinusMinusNode* self){
void* __result_obj__;
void* __right_value127;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value127 = (void*)0;
    __result68__ = __result_obj__ = ((char*)(__right_value127=__builtin_string("sMinusMinusNode")));
    __right_value127 = come_decrement_ref_count2(__right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result68__;
}

_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info){
struct sNode* left_86;
void* __right_value128;
struct CVALUE* left_value_87;
struct sType* type_88;
char* fun_name_89;
_Bool calling_fun_90;
void* __right_value129;
void* __right_value130;
struct CVALUE* come_value_91;
void* __right_value131;
char* __dec_obj42;
void* __right_value132;
struct sType* __dec_obj43;
_Bool __result69__;
memset(&left_86, 0, sizeof(struct sNode*));
__right_value128 = (void*)0;
memset(&left_value_87, 0, sizeof(struct CVALUE*));
memset(&type_88, 0, sizeof(struct sType*));
memset(&calling_fun_90, 0, sizeof(_Bool));
__right_value129 = (void*)0;
__right_value130 = (void*)0;
memset(&come_value_91, 0, sizeof(struct CVALUE*));
__right_value131 = (void*)0;
__right_value132 = (void*)0;
    left_86=self->mLeft;
    if(!node_compile(left_86,info)) {
        return (_Bool)0;
    }
    left_value_87=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value128=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    type_88=(struct sType*)come_increment_ref_count(left_value_87->type);
    fun_name_89="operator_minus_minus";
    if(self->mQuote) {
        calling_fun_90=(_Bool)0;
    }
    else {
        calling_fun_90=operator_overload_fun_self(type_88,fun_name_89,left_value_87,info);
    }
    if(!calling_fun_90) {
        come_value_91=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value130=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value129=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 96, "CVALUE"))))))));
        come_call_finalizer3(__right_value129,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj42=come_value_91->c_value;
        come_value_91->c_value=(char*)come_increment_ref_count(((char*)(__right_value131=xsprintf("%s--",left_value_87->c_value))));
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj43=come_value_91->type;
        come_value_91->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value132=sType_clone(left_value_87->type))));
        come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_91->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_91));
        add_come_last_code(info,"%s;\n",come_value_91->c_value);
        come_call_finalizer3(come_value_91,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result69__ = (_Bool)1;
    come_call_finalizer3(left_value_87,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_88,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result69__;
    come_call_finalizer3(left_value_87,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_88,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* __right_value133;
void* __right_value134;
struct sNode* __dec_obj44;
void* __right_value135;
struct sNode* __dec_obj45;
struct sPlusEqualNode* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value133 = (void*)0;
__right_value134 = (void*)0;
__right_value135 = (void*)0;
    ((struct sNodeBase*)(__right_value133=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value133,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj44=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value134=sNode_clone(left))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj45=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value135=sNode_clone(right))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); }
    self->mQuote=quote;
    __result70__ = __result_obj__ = self;
    come_call_finalizer3(self,sPlusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result70__;
    come_call_finalizer3(self,sPlusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sPlusEqualNode_kind(struct sPlusEqualNode* self){
void* __result_obj__;
void* __right_value136;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value136 = (void*)0;
    __result71__ = __result_obj__ = ((char*)(__right_value136=__builtin_string("sPlusEqualNode")));
    __right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result71__;
}

_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info){
struct sNode* left_92;
void* __right_value137;
struct CVALUE* left_value_93;
struct sNode* right_94;
_Bool __result72__;
void* __right_value138;
struct CVALUE* right_value_95;
struct sType* type_96;
char* fun_name_97;
_Bool calling_fun_98;
void* __right_value139;
void* __right_value140;
struct CVALUE* come_value_99;
void* __right_value141;
char* __dec_obj46;
void* __right_value142;
struct sType* __dec_obj47;
_Bool __result73__;
memset(&left_92, 0, sizeof(struct sNode*));
__right_value137 = (void*)0;
memset(&left_value_93, 0, sizeof(struct CVALUE*));
memset(&right_94, 0, sizeof(struct sNode*));
__right_value138 = (void*)0;
memset(&right_value_95, 0, sizeof(struct CVALUE*));
memset(&type_96, 0, sizeof(struct sType*));
memset(&calling_fun_98, 0, sizeof(_Bool));
__right_value139 = (void*)0;
__right_value140 = (void*)0;
memset(&come_value_99, 0, sizeof(struct CVALUE*));
__right_value141 = (void*)0;
__right_value142 = (void*)0;
    left_92=self->mLeft;
    if(!node_compile(left_92,info)) {
        return (_Bool)0;
    }
    left_value_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value137=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    right_94=self->mRight;
    if(!node_compile(right_94,info)) {
        __result72__ = (_Bool)0;
        come_call_finalizer3(left_value_93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result72__;
    }
    right_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value138=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    type_96=(struct sType*)come_increment_ref_count(left_value_93->type);
    fun_name_97="operator_plus_equal";
    if(self->mQuote) {
        calling_fun_98=(_Bool)0;
    }
    else {
        calling_fun_98=operator_overload_fun(type_96,fun_name_97,left_value_93,right_value_95,(_Bool)0,info);
    }
    if(!calling_fun_98) {
        come_value_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value140=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value139=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 159, "CVALUE"))))))));
        come_call_finalizer3(__right_value139,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj46=come_value_99->c_value;
        come_value_99->c_value=(char*)come_increment_ref_count(((char*)(__right_value141=xsprintf("%s+=%s",left_value_93->c_value,right_value_95->c_value))));
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj47=come_value_99->type;
        come_value_99->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value142=sType_clone(left_value_93->type))));
        come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_99->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_99));
        add_come_last_code(info,"%s;\n",come_value_99->c_value);
        come_call_finalizer3(come_value_99,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result73__ = (_Bool)1;
    come_call_finalizer3(left_value_93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_95,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_96,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result73__;
    come_call_finalizer3(left_value_93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_95,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_96,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* __right_value143;
void* __right_value144;
struct sNode* __dec_obj48;
void* __right_value145;
struct sNode* __dec_obj49;
struct sMinusEqualNode* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value143 = (void*)0;
__right_value144 = (void*)0;
__right_value145 = (void*)0;
    ((struct sNodeBase*)(__right_value143=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value143,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj48=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value144=sNode_clone(left))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj49=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value145=sNode_clone(right))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); }
    __result74__ = __result_obj__ = self;
    come_call_finalizer3(self,sMinusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result74__;
    come_call_finalizer3(self,sMinusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sMinusEqualNode_kind(struct sMinusEqualNode* self){
void* __result_obj__;
void* __right_value146;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value146 = (void*)0;
    __result75__ = __result_obj__ = ((char*)(__right_value146=__builtin_string("sPlusEqualNode")));
    __right_value146 = come_decrement_ref_count2(__right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result75__;
}

_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info){
struct sNode* left_100;
void* __right_value147;
struct CVALUE* left_value_101;
struct sNode* right_102;
_Bool __result76__;
void* __right_value148;
struct CVALUE* right_value_103;
struct sType* type_104;
char* fun_name_105;
_Bool calling_fun_106;
void* __right_value149;
void* __right_value150;
struct CVALUE* come_value_107;
void* __right_value151;
char* __dec_obj50;
void* __right_value152;
struct sType* __dec_obj51;
_Bool __result77__;
memset(&left_100, 0, sizeof(struct sNode*));
__right_value147 = (void*)0;
memset(&left_value_101, 0, sizeof(struct CVALUE*));
memset(&right_102, 0, sizeof(struct sNode*));
__right_value148 = (void*)0;
memset(&right_value_103, 0, sizeof(struct CVALUE*));
memset(&type_104, 0, sizeof(struct sType*));
memset(&calling_fun_106, 0, sizeof(_Bool));
__right_value149 = (void*)0;
__right_value150 = (void*)0;
memset(&come_value_107, 0, sizeof(struct CVALUE*));
__right_value151 = (void*)0;
__right_value152 = (void*)0;
    left_100=self->mLeft;
    if(!node_compile(left_100,info)) {
        return (_Bool)0;
    }
    left_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value147=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    right_102=self->mRight;
    if(!node_compile(right_102,info)) {
        __result76__ = (_Bool)0;
        come_call_finalizer3(left_value_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result76__;
    }
    right_value_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value148=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    type_104=(struct sType*)come_increment_ref_count(left_value_101->type);
    fun_name_105="operator_minus_equal";
    if(self->mQuote) {
        calling_fun_106=(_Bool)0;
    }
    else {
        calling_fun_106=operator_overload_fun(type_104,fun_name_105,left_value_101,right_value_103,(_Bool)0,info);
    }
    if(!calling_fun_106) {
        come_value_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value150=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value149=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 223, "CVALUE"))))))));
        come_call_finalizer3(__right_value149,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj50=come_value_107->c_value;
        come_value_107->c_value=(char*)come_increment_ref_count(((char*)(__right_value151=xsprintf("%s-=%s",left_value_101->c_value,right_value_103->c_value))));
        __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj51=come_value_107->type;
        come_value_107->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value152=sType_clone(left_value_101->type))));
        come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_107->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_107));
        add_come_last_code(info,"%s;\n",come_value_107->c_value);
        come_call_finalizer3(come_value_107,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result77__ = (_Bool)1;
    come_call_finalizer3(left_value_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_103,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_104,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result77__;
    come_call_finalizer3(left_value_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_103,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_104,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* __right_value153;
void* __right_value154;
struct sNode* __dec_obj52;
void* __right_value155;
struct sNode* __dec_obj53;
struct sMultEqualNode* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value153 = (void*)0;
__right_value154 = (void*)0;
__right_value155 = (void*)0;
    ((struct sNodeBase*)(__right_value153=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value153,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj52=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value154=sNode_clone(left))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj53=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value155=sNode_clone(right))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); }
    __result78__ = __result_obj__ = self;
    come_call_finalizer3(self,sMultEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result78__;
    come_call_finalizer3(self,sMultEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sMultEqualNode_kind(struct sMultEqualNode* self){
void* __result_obj__;
void* __right_value156;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value156 = (void*)0;
    __result79__ = __result_obj__ = ((char*)(__right_value156=__builtin_string("sMultEqualNode")));
    __right_value156 = come_decrement_ref_count2(__right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result79__;
}

_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info){
struct sNode* left_108;
void* __right_value157;
struct CVALUE* left_value_109;
struct sNode* right_110;
_Bool __result80__;
void* __right_value158;
struct CVALUE* right_value_111;
struct sType* type_112;
char* fun_name_113;
_Bool calling_fun_114;
void* __right_value159;
void* __right_value160;
struct CVALUE* come_value_115;
void* __right_value161;
char* __dec_obj54;
void* __right_value162;
struct sType* __dec_obj55;
_Bool __result81__;
memset(&left_108, 0, sizeof(struct sNode*));
__right_value157 = (void*)0;
memset(&left_value_109, 0, sizeof(struct CVALUE*));
memset(&right_110, 0, sizeof(struct sNode*));
__right_value158 = (void*)0;
memset(&right_value_111, 0, sizeof(struct CVALUE*));
memset(&type_112, 0, sizeof(struct sType*));
memset(&calling_fun_114, 0, sizeof(_Bool));
__right_value159 = (void*)0;
__right_value160 = (void*)0;
memset(&come_value_115, 0, sizeof(struct CVALUE*));
__right_value161 = (void*)0;
__right_value162 = (void*)0;
    left_108=self->mLeft;
    if(!node_compile(left_108,info)) {
        return (_Bool)0;
    }
    left_value_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value157=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    right_110=self->mRight;
    if(!node_compile(right_110,info)) {
        __result80__ = (_Bool)0;
        come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result80__;
    }
    right_value_111=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value158=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    type_112=(struct sType*)come_increment_ref_count(left_value_109->type);
    fun_name_113="operator_mult_equal";
    if(self->mQuote) {
        calling_fun_114=(_Bool)0;
    }
    else {
        calling_fun_114=operator_overload_fun(type_112,fun_name_113,left_value_109,right_value_111,(_Bool)0,info);
    }
    if(!calling_fun_114) {
        come_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value160=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value159=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 287, "CVALUE"))))))));
        come_call_finalizer3(__right_value159,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj54=come_value_115->c_value;
        come_value_115->c_value=(char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("%s*=%s",left_value_109->c_value,right_value_111->c_value))));
        __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj55=come_value_115->type;
        come_value_115->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value162=sType_clone(left_value_109->type))));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_115->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_115));
        add_come_last_code(info,"%s;\n",come_value_115->c_value);
        come_call_finalizer3(come_value_115,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result81__ = (_Bool)1;
    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_111,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_112,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result81__;
    come_call_finalizer3(left_value_109,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_111,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_112,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* __right_value163;
void* __right_value164;
struct sNode* __dec_obj56;
void* __right_value165;
struct sNode* __dec_obj57;
struct sDivEqualNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value163 = (void*)0;
__right_value164 = (void*)0;
__right_value165 = (void*)0;
    ((struct sNodeBase*)(__right_value163=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value163,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj56=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value164=sNode_clone(left))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj57=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value165=sNode_clone(right))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
    __result82__ = __result_obj__ = self;
    come_call_finalizer3(self,sDivEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result82__;
    come_call_finalizer3(self,sDivEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sDivEqualNode_kind(struct sDivEqualNode* self){
void* __result_obj__;
void* __right_value166;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value166 = (void*)0;
    __result83__ = __result_obj__ = ((char*)(__right_value166=__builtin_string("sDivEqualNode")));
    __right_value166 = come_decrement_ref_count2(__right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result83__;
}

_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info){
struct sNode* left_116;
void* __right_value167;
struct CVALUE* left_value_117;
struct sNode* right_118;
_Bool __result84__;
void* __right_value168;
struct CVALUE* right_value_119;
struct sType* type_120;
char* fun_name_121;
_Bool calling_fun_122;
void* __right_value169;
void* __right_value170;
struct CVALUE* come_value_123;
void* __right_value171;
char* __dec_obj58;
void* __right_value172;
struct sType* __dec_obj59;
_Bool __result85__;
memset(&left_116, 0, sizeof(struct sNode*));
__right_value167 = (void*)0;
memset(&left_value_117, 0, sizeof(struct CVALUE*));
memset(&right_118, 0, sizeof(struct sNode*));
__right_value168 = (void*)0;
memset(&right_value_119, 0, sizeof(struct CVALUE*));
memset(&type_120, 0, sizeof(struct sType*));
memset(&calling_fun_122, 0, sizeof(_Bool));
__right_value169 = (void*)0;
__right_value170 = (void*)0;
memset(&come_value_123, 0, sizeof(struct CVALUE*));
__right_value171 = (void*)0;
__right_value172 = (void*)0;
    left_116=self->mLeft;
    if(!node_compile(left_116,info)) {
        return (_Bool)0;
    }
    left_value_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value167=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    right_118=self->mRight;
    if(!node_compile(right_118,info)) {
        __result84__ = (_Bool)0;
        come_call_finalizer3(left_value_117,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result84__;
    }
    right_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value168=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    type_120=(struct sType*)come_increment_ref_count(left_value_117->type);
    fun_name_121="operator_div_equal";
    if(self->mQuote) {
        calling_fun_122=(_Bool)0;
    }
    else {
        calling_fun_122=operator_overload_fun(type_120,fun_name_121,left_value_117,right_value_119,(_Bool)0,info);
    }
    if(!calling_fun_122) {
        come_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value170=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value169=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 351, "CVALUE"))))))));
        come_call_finalizer3(__right_value169,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj58=come_value_123->c_value;
        come_value_123->c_value=(char*)come_increment_ref_count(((char*)(__right_value171=xsprintf("%s/=%s",left_value_117->c_value,right_value_119->c_value))));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj59=come_value_123->type;
        come_value_123->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value172=sType_clone(left_value_117->type))));
        come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_123->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_123));
        add_come_last_code(info,"%s;\n",come_value_123->c_value);
        come_call_finalizer3(come_value_123,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result85__ = (_Bool)1;
    come_call_finalizer3(left_value_117,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result85__;
    come_call_finalizer3(left_value_117,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_120,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* __right_value173;
void* __right_value174;
struct sNode* __dec_obj60;
void* __right_value175;
struct sNode* __dec_obj61;
struct sModEqualNode* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value173 = (void*)0;
__right_value174 = (void*)0;
__right_value175 = (void*)0;
    ((struct sNodeBase*)(__right_value173=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value173,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj60=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value174=sNode_clone(left))));
    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj61=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value175=sNode_clone(right))));
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
    __result86__ = __result_obj__ = self;
    come_call_finalizer3(self,sModEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result86__;
    come_call_finalizer3(self,sModEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sModEqualNode_kind(struct sModEqualNode* self){
void* __result_obj__;
void* __right_value176;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value176 = (void*)0;
    __result87__ = __result_obj__ = ((char*)(__right_value176=__builtin_string("sModEqualNode")));
    __right_value176 = come_decrement_ref_count2(__right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result87__;
}

_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info){
struct sNode* left_124;
void* __right_value177;
struct CVALUE* left_value_125;
struct sNode* right_126;
_Bool __result88__;
void* __right_value178;
struct CVALUE* right_value_127;
struct sType* type_128;
char* fun_name_129;
_Bool calling_fun_130;
void* __right_value179;
void* __right_value180;
struct CVALUE* come_value_131;
void* __right_value181;
char* __dec_obj62;
void* __right_value182;
struct sType* __dec_obj63;
_Bool __result89__;
memset(&left_124, 0, sizeof(struct sNode*));
__right_value177 = (void*)0;
memset(&left_value_125, 0, sizeof(struct CVALUE*));
memset(&right_126, 0, sizeof(struct sNode*));
__right_value178 = (void*)0;
memset(&right_value_127, 0, sizeof(struct CVALUE*));
memset(&type_128, 0, sizeof(struct sType*));
memset(&calling_fun_130, 0, sizeof(_Bool));
__right_value179 = (void*)0;
__right_value180 = (void*)0;
memset(&come_value_131, 0, sizeof(struct CVALUE*));
__right_value181 = (void*)0;
__right_value182 = (void*)0;
    left_124=self->mLeft;
    if(!node_compile(left_124,info)) {
        return (_Bool)0;
    }
    left_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value177=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    right_126=self->mRight;
    if(!node_compile(right_126,info)) {
        __result88__ = (_Bool)0;
        come_call_finalizer3(left_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result88__;
    }
    right_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value178=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    type_128=(struct sType*)come_increment_ref_count(left_value_125->type);
    fun_name_129="operator_mod_equal";
    if(self->mQuote) {
        calling_fun_130=(_Bool)0;
    }
    else {
        calling_fun_130=operator_overload_fun(type_128,fun_name_129,left_value_125,right_value_127,(_Bool)0,info);
    }
    if(!calling_fun_130) {
        come_value_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value180=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value179=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 415, "CVALUE"))))))));
        come_call_finalizer3(__right_value179,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj62=come_value_131->c_value;
        come_value_131->c_value=(char*)come_increment_ref_count(((char*)(__right_value181=xsprintf("%s%%=%s",left_value_125->c_value,right_value_127->c_value))));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj63=come_value_131->type;
        come_value_131->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value182=sType_clone(left_value_125->type))));
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_131->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_131));
        add_come_last_code(info,"%s;\n",come_value_131->c_value);
        come_call_finalizer3(come_value_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result89__ = (_Bool)1;
    come_call_finalizer3(left_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_128,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result89__;
    come_call_finalizer3(left_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_127,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_128,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* __right_value183;
void* __right_value184;
struct sNode* __dec_obj64;
void* __right_value185;
struct sNode* __dec_obj65;
struct sLShifEqualNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value183 = (void*)0;
__right_value184 = (void*)0;
__right_value185 = (void*)0;
    ((struct sNodeBase*)(__right_value183=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value183,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj64=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value184=sNode_clone(left))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj65=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value185=sNode_clone(right))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
    __result90__ = __result_obj__ = self;
    come_call_finalizer3(self,sLShifEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result90__;
    come_call_finalizer3(self,sLShifEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sLShifEqualNode_kind(struct sLShifEqualNode* self){
void* __result_obj__;
void* __right_value186;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value186 = (void*)0;
    __result91__ = __result_obj__ = ((char*)(__right_value186=__builtin_string("sLShifEqualNode")));
    __right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result91__;
}

_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info){
struct sNode* left_132;
void* __right_value187;
struct CVALUE* left_value_133;
struct sNode* right_134;
_Bool __result92__;
void* __right_value188;
struct CVALUE* right_value_135;
struct sType* type_136;
char* fun_name_137;
_Bool calling_fun_138;
void* __right_value189;
void* __right_value190;
struct CVALUE* come_value_139;
void* __right_value191;
char* __dec_obj66;
void* __right_value192;
struct sType* __dec_obj67;
_Bool __result93__;
memset(&left_132, 0, sizeof(struct sNode*));
__right_value187 = (void*)0;
memset(&left_value_133, 0, sizeof(struct CVALUE*));
memset(&right_134, 0, sizeof(struct sNode*));
__right_value188 = (void*)0;
memset(&right_value_135, 0, sizeof(struct CVALUE*));
memset(&type_136, 0, sizeof(struct sType*));
memset(&calling_fun_138, 0, sizeof(_Bool));
__right_value189 = (void*)0;
__right_value190 = (void*)0;
memset(&come_value_139, 0, sizeof(struct CVALUE*));
__right_value191 = (void*)0;
__right_value192 = (void*)0;
    left_132=self->mLeft;
    if(!node_compile(left_132,info)) {
        return (_Bool)0;
    }
    left_value_133=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value187=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    right_134=self->mRight;
    if(!node_compile(right_134,info)) {
        __result92__ = (_Bool)0;
        come_call_finalizer3(left_value_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result92__;
    }
    right_value_135=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value188=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    type_136=(struct sType*)come_increment_ref_count(left_value_133->type);
    fun_name_137="operator_lshift_equal";
    if(self->mQuote) {
        calling_fun_138=(_Bool)0;
    }
    else {
        calling_fun_138=operator_overload_fun(type_136,fun_name_137,left_value_133,right_value_135,(_Bool)0,info);
    }
    if(!calling_fun_138) {
        come_value_139=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value190=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value189=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 479, "CVALUE"))))))));
        come_call_finalizer3(__right_value189,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj66=come_value_139->c_value;
        come_value_139->c_value=(char*)come_increment_ref_count(((char*)(__right_value191=xsprintf("%s<<=%s",left_value_133->c_value,right_value_135->c_value))));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj67=come_value_139->type;
        come_value_139->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value192=sType_clone(left_value_133->type))));
        come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_139->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_139));
        add_come_last_code(info,"%s;\n",come_value_139->c_value);
        come_call_finalizer3(come_value_139,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result93__ = (_Bool)1;
    come_call_finalizer3(left_value_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_136,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result93__;
    come_call_finalizer3(left_value_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_136,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* __right_value193;
void* __right_value194;
struct sNode* __dec_obj68;
void* __right_value195;
struct sNode* __dec_obj69;
struct sRShiftEqualNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value193 = (void*)0;
__right_value194 = (void*)0;
__right_value195 = (void*)0;
    ((struct sNodeBase*)(__right_value193=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value193,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj68=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value194=sNode_clone(left))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj69=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value195=sNode_clone(right))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); }
    __result94__ = __result_obj__ = self;
    come_call_finalizer3(self,sRShiftEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result94__;
    come_call_finalizer3(self,sRShiftEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sRShiftEqualNode_kind(struct sRShiftEqualNode* self){
void* __result_obj__;
void* __right_value196;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value196 = (void*)0;
    __result95__ = __result_obj__ = ((char*)(__right_value196=__builtin_string("sRShiftEqualNode")));
    __right_value196 = come_decrement_ref_count2(__right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result95__;
}

_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info){
struct sNode* left_140;
void* __right_value197;
struct CVALUE* left_value_141;
struct sNode* right_142;
_Bool __result96__;
void* __right_value198;
struct CVALUE* right_value_143;
struct sType* type_144;
char* fun_name_145;
_Bool calling_fun_146;
void* __right_value199;
void* __right_value200;
struct CVALUE* come_value_147;
void* __right_value201;
char* __dec_obj70;
void* __right_value202;
struct sType* __dec_obj71;
_Bool __result97__;
memset(&left_140, 0, sizeof(struct sNode*));
__right_value197 = (void*)0;
memset(&left_value_141, 0, sizeof(struct CVALUE*));
memset(&right_142, 0, sizeof(struct sNode*));
__right_value198 = (void*)0;
memset(&right_value_143, 0, sizeof(struct CVALUE*));
memset(&type_144, 0, sizeof(struct sType*));
memset(&calling_fun_146, 0, sizeof(_Bool));
__right_value199 = (void*)0;
__right_value200 = (void*)0;
memset(&come_value_147, 0, sizeof(struct CVALUE*));
__right_value201 = (void*)0;
__right_value202 = (void*)0;
    left_140=self->mLeft;
    if(!node_compile(left_140,info)) {
        return (_Bool)0;
    }
    left_value_141=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value197=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    right_142=self->mRight;
    if(!node_compile(right_142,info)) {
        __result96__ = (_Bool)0;
        come_call_finalizer3(left_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result96__;
    }
    right_value_143=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value198=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    type_144=(struct sType*)come_increment_ref_count(left_value_141->type);
    fun_name_145="operator_rshift_equal";
    if(self->mQuote) {
        calling_fun_146=(_Bool)0;
    }
    else {
        calling_fun_146=operator_overload_fun(type_144,fun_name_145,left_value_141,right_value_143,(_Bool)0,info);
    }
    if(!calling_fun_146) {
        come_value_147=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value200=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value199=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 543, "CVALUE"))))))));
        come_call_finalizer3(__right_value199,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj70=come_value_147->c_value;
        come_value_147->c_value=(char*)come_increment_ref_count(((char*)(__right_value201=xsprintf("%s>>=%s",left_value_141->c_value,right_value_143->c_value))));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj71=come_value_147->type;
        come_value_147->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value202=sType_clone(left_value_141->type))));
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_147->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_147));
        add_come_last_code(info,"%s;\n",come_value_147->c_value);
        come_call_finalizer3(come_value_147,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result97__ = (_Bool)1;
    come_call_finalizer3(left_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_143,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_144,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result97__;
    come_call_finalizer3(left_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_143,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_144,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* __right_value203;
void* __right_value204;
struct sNode* __dec_obj72;
void* __right_value205;
struct sNode* __dec_obj73;
struct sXorEqualNode* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value203 = (void*)0;
__right_value204 = (void*)0;
__right_value205 = (void*)0;
    ((struct sNodeBase*)(__right_value203=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value203,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj72=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value204=sNode_clone(left))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj73=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value205=sNode_clone(right))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); }
    __result98__ = __result_obj__ = self;
    come_call_finalizer3(self,sXorEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result98__;
    come_call_finalizer3(self,sXorEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sXorEqualNode_kind(struct sXorEqualNode* self){
void* __result_obj__;
void* __right_value206;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value206 = (void*)0;
    __result99__ = __result_obj__ = ((char*)(__right_value206=__builtin_string("sXorEqualNode")));
    __right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result99__;
}

_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info){
struct sNode* left_148;
void* __right_value207;
struct CVALUE* left_value_149;
struct sNode* right_150;
_Bool __result100__;
void* __right_value208;
struct CVALUE* right_value_151;
struct sType* type_152;
char* fun_name_153;
_Bool calling_fun_154;
void* __right_value209;
void* __right_value210;
struct CVALUE* come_value_155;
void* __right_value211;
char* __dec_obj74;
void* __right_value212;
struct sType* __dec_obj75;
_Bool __result101__;
memset(&left_148, 0, sizeof(struct sNode*));
__right_value207 = (void*)0;
memset(&left_value_149, 0, sizeof(struct CVALUE*));
memset(&right_150, 0, sizeof(struct sNode*));
__right_value208 = (void*)0;
memset(&right_value_151, 0, sizeof(struct CVALUE*));
memset(&type_152, 0, sizeof(struct sType*));
memset(&calling_fun_154, 0, sizeof(_Bool));
__right_value209 = (void*)0;
__right_value210 = (void*)0;
memset(&come_value_155, 0, sizeof(struct CVALUE*));
__right_value211 = (void*)0;
__right_value212 = (void*)0;
    left_148=self->mLeft;
    if(!node_compile(left_148,info)) {
        return (_Bool)0;
    }
    left_value_149=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value207=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    right_150=self->mRight;
    if(!node_compile(right_150,info)) {
        __result100__ = (_Bool)0;
        come_call_finalizer3(left_value_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result100__;
    }
    right_value_151=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value208=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    type_152=(struct sType*)come_increment_ref_count(left_value_149->type);
    fun_name_153="operator_xor_equal";
    if(self->mQuote) {
        calling_fun_154=(_Bool)0;
    }
    else {
        calling_fun_154=operator_overload_fun(type_152,fun_name_153,left_value_149,right_value_151,(_Bool)0,info);
    }
    if(!calling_fun_154) {
        come_value_155=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value210=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value209=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 607, "CVALUE"))))))));
        come_call_finalizer3(__right_value209,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj74=come_value_155->c_value;
        come_value_155->c_value=(char*)come_increment_ref_count(((char*)(__right_value211=xsprintf("%s^=%s",left_value_149->c_value,right_value_151->c_value))));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj75=come_value_155->type;
        come_value_155->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value212=sType_clone(left_value_149->type))));
        come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_155->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_155));
        add_come_last_code(info,"%s;\n",come_value_155->c_value);
        come_call_finalizer3(come_value_155,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result101__ = (_Bool)1;
    come_call_finalizer3(left_value_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_152,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result101__;
    come_call_finalizer3(left_value_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_152,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* __right_value213;
void* __right_value214;
struct sNode* __dec_obj76;
void* __right_value215;
struct sNode* __dec_obj77;
struct sOrEqualNode* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value213 = (void*)0;
__right_value214 = (void*)0;
__right_value215 = (void*)0;
    ((struct sNodeBase*)(__right_value213=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value213,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj76=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value214=sNode_clone(left))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj77=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value215=sNode_clone(right))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    __result102__ = __result_obj__ = self;
    come_call_finalizer3(self,sOrEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result102__;
    come_call_finalizer3(self,sOrEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sOrEqualNode_kind(struct sOrEqualNode* self){
void* __result_obj__;
void* __right_value216;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value216 = (void*)0;
    __result103__ = __result_obj__ = ((char*)(__right_value216=__builtin_string("sOrEqualNode")));
    __right_value216 = come_decrement_ref_count2(__right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result103__;
}

_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info){
struct sNode* left_156;
void* __right_value217;
struct CVALUE* left_value_157;
struct sNode* right_158;
_Bool __result104__;
void* __right_value218;
struct CVALUE* right_value_159;
struct sType* type_160;
char* fun_name_161;
_Bool calling_fun_162;
void* __right_value219;
void* __right_value220;
struct CVALUE* come_value_163;
void* __right_value221;
char* __dec_obj78;
void* __right_value222;
struct sType* __dec_obj79;
_Bool __result105__;
memset(&left_156, 0, sizeof(struct sNode*));
__right_value217 = (void*)0;
memset(&left_value_157, 0, sizeof(struct CVALUE*));
memset(&right_158, 0, sizeof(struct sNode*));
__right_value218 = (void*)0;
memset(&right_value_159, 0, sizeof(struct CVALUE*));
memset(&type_160, 0, sizeof(struct sType*));
memset(&calling_fun_162, 0, sizeof(_Bool));
__right_value219 = (void*)0;
__right_value220 = (void*)0;
memset(&come_value_163, 0, sizeof(struct CVALUE*));
__right_value221 = (void*)0;
__right_value222 = (void*)0;
    left_156=self->mLeft;
    if(!node_compile(left_156,info)) {
        return (_Bool)0;
    }
    left_value_157=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value217=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    right_158=self->mRight;
    if(!node_compile(right_158,info)) {
        __result104__ = (_Bool)0;
        come_call_finalizer3(left_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result104__;
    }
    right_value_159=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value218=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    type_160=(struct sType*)come_increment_ref_count(left_value_157->type);
    fun_name_161="operator_or_equal";
    if(self->mQuote) {
        calling_fun_162=(_Bool)0;
    }
    else {
        calling_fun_162=operator_overload_fun(type_160,fun_name_161,left_value_157,right_value_159,(_Bool)0,info);
    }
    if(!calling_fun_162) {
        come_value_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value220=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value219=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 671, "CVALUE"))))))));
        come_call_finalizer3(__right_value219,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj78=come_value_163->c_value;
        come_value_163->c_value=(char*)come_increment_ref_count(((char*)(__right_value221=xsprintf("%s|=%s",left_value_157->c_value,right_value_159->c_value))));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj79=come_value_163->type;
        come_value_163->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value222=sType_clone(left_value_157->type))));
        come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_163->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_163));
        add_come_last_code(info,"%s;\n",come_value_163->c_value);
        come_call_finalizer3(come_value_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result105__ = (_Bool)1;
    come_call_finalizer3(left_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_159,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_160,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result105__;
    come_call_finalizer3(left_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_159,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_160,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* __right_value223;
void* __right_value224;
struct sNode* __dec_obj80;
void* __right_value225;
struct sNode* __dec_obj81;
struct sAndEqualNode* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value223 = (void*)0;
__right_value224 = (void*)0;
__right_value225 = (void*)0;
    ((struct sNodeBase*)(__right_value223=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value223,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj80=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value224=sNode_clone(left))));
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj81=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value225=sNode_clone(right))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); }
    __result106__ = __result_obj__ = self;
    come_call_finalizer3(self,sAndEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result106__;
    come_call_finalizer3(self,sAndEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sAndEqualNode_kind(struct sAndEqualNode* self){
void* __result_obj__;
void* __right_value226;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value226 = (void*)0;
    __result107__ = __result_obj__ = ((char*)(__right_value226=__builtin_string("sAndEqualNode")));
    __right_value226 = come_decrement_ref_count2(__right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result107__;
}

_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info){
struct sNode* left_164;
void* __right_value227;
struct CVALUE* left_value_165;
struct sNode* right_166;
_Bool __result108__;
void* __right_value228;
struct CVALUE* right_value_167;
struct sType* type_168;
char* fun_name_169;
_Bool calling_fun_170;
void* __right_value229;
void* __right_value230;
struct CVALUE* come_value_171;
void* __right_value231;
char* __dec_obj82;
void* __right_value232;
struct sType* __dec_obj83;
_Bool __result109__;
memset(&left_164, 0, sizeof(struct sNode*));
__right_value227 = (void*)0;
memset(&left_value_165, 0, sizeof(struct CVALUE*));
memset(&right_166, 0, sizeof(struct sNode*));
__right_value228 = (void*)0;
memset(&right_value_167, 0, sizeof(struct CVALUE*));
memset(&type_168, 0, sizeof(struct sType*));
memset(&calling_fun_170, 0, sizeof(_Bool));
__right_value229 = (void*)0;
__right_value230 = (void*)0;
memset(&come_value_171, 0, sizeof(struct CVALUE*));
__right_value231 = (void*)0;
__right_value232 = (void*)0;
    left_164=self->mLeft;
    if(!node_compile(left_164,info)) {
        return (_Bool)0;
    }
    left_value_165=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value227=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    right_166=self->mRight;
    if(!node_compile(right_166,info)) {
        __result108__ = (_Bool)0;
        come_call_finalizer3(left_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result108__;
    }
    right_value_167=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value228=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    type_168=(struct sType*)come_increment_ref_count(left_value_165->type);
    fun_name_169="operator_and_equal";
    if(self->mQuote) {
        calling_fun_170=(_Bool)0;
    }
    else {
        calling_fun_170=operator_overload_fun(type_168,fun_name_169,left_value_165,right_value_167,(_Bool)0,info);
    }
    if(!calling_fun_170) {
        come_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value230=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value229=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 735, "CVALUE"))))))));
        come_call_finalizer3(__right_value229,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj82=come_value_171->c_value;
        come_value_171->c_value=(char*)come_increment_ref_count(((char*)(__right_value231=xsprintf("%s&=%s",left_value_165->c_value,right_value_167->c_value))));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj83=come_value_171->type;
        come_value_171->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value232=sType_clone(left_value_165->type))));
        come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_171->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_171));
        add_come_last_code(info,"%s;\n",come_value_171->c_value);
        come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result109__ = (_Bool)1;
    come_call_finalizer3(left_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_168,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result109__;
    come_call_finalizer3(left_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_168,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* __right_value233;
void* __right_value234;
struct sNode* __dec_obj84;
void* __right_value235;
struct sNode* __dec_obj85;
struct sExpEqualNode* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value233 = (void*)0;
__right_value234 = (void*)0;
__right_value235 = (void*)0;
    ((struct sNodeBase*)(__right_value233=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value233,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj84=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value234=sNode_clone(left))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj85=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value235=sNode_clone(right))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); }
    __result110__ = __result_obj__ = self;
    come_call_finalizer3(self,sExpEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result110__;
    come_call_finalizer3(self,sExpEqualNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sExpEqualNode_kind(struct sExpEqualNode* self){
void* __result_obj__;
void* __right_value236;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value236 = (void*)0;
    __result111__ = __result_obj__ = ((char*)(__right_value236=__builtin_string("sExpEqualNode")));
    __right_value236 = come_decrement_ref_count2(__right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result111__;
}

_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo* info){
struct sNode* left_172;
void* __right_value237;
struct CVALUE* left_value_173;
struct sNode* right_174;
_Bool __result112__;
void* __right_value238;
struct CVALUE* right_value_175;
struct sType* type_176;
char* fun_name_177;
_Bool calling_fun_178;
void* __right_value239;
void* __right_value240;
struct CVALUE* come_value_179;
void* __right_value241;
char* __dec_obj86;
void* __right_value242;
struct sType* __dec_obj87;
_Bool __result113__;
memset(&left_172, 0, sizeof(struct sNode*));
__right_value237 = (void*)0;
memset(&left_value_173, 0, sizeof(struct CVALUE*));
memset(&right_174, 0, sizeof(struct sNode*));
__right_value238 = (void*)0;
memset(&right_value_175, 0, sizeof(struct CVALUE*));
memset(&type_176, 0, sizeof(struct sType*));
memset(&calling_fun_178, 0, sizeof(_Bool));
__right_value239 = (void*)0;
__right_value240 = (void*)0;
memset(&come_value_179, 0, sizeof(struct CVALUE*));
__right_value241 = (void*)0;
__right_value242 = (void*)0;
    left_172=self->mLeft;
    if(!node_compile(left_172,info)) {
        return (_Bool)0;
    }
    left_value_173=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value237=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    right_174=self->mRight;
    if(!node_compile(right_174,info)) {
        __result112__ = (_Bool)0;
        come_call_finalizer3(left_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result112__;
    }
    right_value_175=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value238=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    type_176=(struct sType*)come_increment_ref_count(left_value_173->type);
    fun_name_177="operator_exp_equal";
    if(self->mQuote) {
        calling_fun_178=(_Bool)0;
    }
    else {
        calling_fun_178=operator_overload_fun(type_176,fun_name_177,left_value_173,right_value_175,(_Bool)0,info);
    }
    if(!calling_fun_178) {
        come_value_179=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value240=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value239=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 799, "CVALUE"))))))));
        come_call_finalizer3(__right_value239,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj86=come_value_179->c_value;
        come_value_179->c_value=(char*)come_increment_ref_count(((char*)(__right_value241=xsprintf("%s=%s",left_value_173->c_value,right_value_175->c_value))));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj87=come_value_179->type;
        come_value_179->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value242=sType_clone(left_value_173->type))));
        come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_179->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_179));
        add_come_last_code(info,"%s;\n",come_value_179->c_value);
        come_call_finalizer3(come_value_179,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result113__ = (_Bool)1;
    come_call_finalizer3(left_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_176,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result113__;
    come_call_finalizer3(left_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_176,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool quote_180;
void* __right_value243;
void* __right_value244;
struct sNode* _inf_value1;
struct sPlusPlusNode* _inf_obj_value1;
void* __right_value248;
struct sNode* __result116__;
_Bool quote_182;
void* __right_value249;
void* __right_value250;
struct sNode* _inf_value2;
struct sMinusMinusNode* _inf_obj_value2;
void* __right_value254;
struct sNode* __result119__;
_Bool quote_184;
void* __right_value255;
struct sNode* right_node_185;
void* __right_value256;
void* __right_value257;
struct sNode* _inf_value3;
struct sPlusEqualNode* _inf_obj_value3;
void* __right_value262;
struct sNode* __result122__;
_Bool quote_187;
void* __right_value263;
struct sNode* right_node_188;
void* __right_value264;
void* __right_value265;
struct sNode* _inf_value4;
struct sMinusEqualNode* _inf_obj_value4;
void* __right_value270;
struct sNode* __result125__;
_Bool quote_190;
void* __right_value271;
struct sNode* right_node_191;
void* __right_value272;
void* __right_value273;
struct sNode* _inf_value5;
struct sMultEqualNode* _inf_obj_value5;
void* __right_value278;
struct sNode* __result128__;
_Bool quote_193;
void* __right_value279;
struct sNode* right_node_194;
void* __right_value280;
void* __right_value281;
struct sNode* _inf_value6;
struct sDivEqualNode* _inf_obj_value6;
void* __right_value286;
struct sNode* __result131__;
_Bool quote_196;
void* __right_value287;
struct sNode* right_node_197;
void* __right_value288;
void* __right_value289;
struct sNode* _inf_value7;
struct sModEqualNode* _inf_obj_value7;
void* __right_value294;
struct sNode* __result134__;
_Bool quote_199;
void* __right_value295;
struct sNode* right_node_200;
void* __right_value296;
void* __right_value297;
struct sNode* _inf_value8;
struct sLShifEqualNode* _inf_obj_value8;
void* __right_value302;
struct sNode* __result137__;
_Bool quote_202;
void* __right_value303;
struct sNode* right_node_203;
void* __right_value304;
void* __right_value305;
struct sNode* _inf_value9;
struct sRShiftEqualNode* _inf_obj_value9;
void* __right_value310;
struct sNode* __result140__;
_Bool quote_205;
void* __right_value311;
struct sNode* right_node_206;
void* __right_value312;
void* __right_value313;
struct sNode* _inf_value10;
struct sXorEqualNode* _inf_obj_value10;
void* __right_value318;
struct sNode* __result143__;
_Bool quote_208;
void* __right_value319;
struct sNode* right_node_209;
void* __right_value320;
void* __right_value321;
struct sNode* _inf_value11;
struct sAndEqualNode* _inf_obj_value11;
void* __right_value326;
struct sNode* __result146__;
_Bool quote_211;
void* __right_value327;
struct sNode* right_node_212;
void* __right_value328;
void* __right_value329;
struct sNode* _inf_value12;
struct sOrEqualNode* _inf_obj_value12;
void* __right_value334;
struct sNode* __result149__;
_Bool quote_214;
void* __right_value335;
struct sNode* right_node_215;
void* __right_value336;
void* __right_value337;
struct sNode* _inf_value13;
struct sExpEqualNode* _inf_obj_value13;
void* __right_value342;
struct sNode* __result152__;
void* __right_value343;
struct sNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&quote_180, 0, sizeof(_Bool));
__right_value243 = (void*)0;
__right_value244 = (void*)0;
__right_value248 = (void*)0;
memset(&quote_182, 0, sizeof(_Bool));
__right_value249 = (void*)0;
__right_value250 = (void*)0;
__right_value254 = (void*)0;
memset(&quote_184, 0, sizeof(_Bool));
__right_value255 = (void*)0;
memset(&right_node_185, 0, sizeof(struct sNode*));
__right_value256 = (void*)0;
__right_value257 = (void*)0;
__right_value262 = (void*)0;
memset(&quote_187, 0, sizeof(_Bool));
__right_value263 = (void*)0;
memset(&right_node_188, 0, sizeof(struct sNode*));
__right_value264 = (void*)0;
__right_value265 = (void*)0;
__right_value270 = (void*)0;
memset(&quote_190, 0, sizeof(_Bool));
__right_value271 = (void*)0;
memset(&right_node_191, 0, sizeof(struct sNode*));
__right_value272 = (void*)0;
__right_value273 = (void*)0;
__right_value278 = (void*)0;
memset(&quote_193, 0, sizeof(_Bool));
__right_value279 = (void*)0;
memset(&right_node_194, 0, sizeof(struct sNode*));
__right_value280 = (void*)0;
__right_value281 = (void*)0;
__right_value286 = (void*)0;
memset(&quote_196, 0, sizeof(_Bool));
__right_value287 = (void*)0;
memset(&right_node_197, 0, sizeof(struct sNode*));
__right_value288 = (void*)0;
__right_value289 = (void*)0;
__right_value294 = (void*)0;
memset(&quote_199, 0, sizeof(_Bool));
__right_value295 = (void*)0;
memset(&right_node_200, 0, sizeof(struct sNode*));
__right_value296 = (void*)0;
__right_value297 = (void*)0;
__right_value302 = (void*)0;
memset(&quote_202, 0, sizeof(_Bool));
__right_value303 = (void*)0;
memset(&right_node_203, 0, sizeof(struct sNode*));
__right_value304 = (void*)0;
__right_value305 = (void*)0;
__right_value310 = (void*)0;
memset(&quote_205, 0, sizeof(_Bool));
__right_value311 = (void*)0;
memset(&right_node_206, 0, sizeof(struct sNode*));
__right_value312 = (void*)0;
__right_value313 = (void*)0;
__right_value318 = (void*)0;
memset(&quote_208, 0, sizeof(_Bool));
__right_value319 = (void*)0;
memset(&right_node_209, 0, sizeof(struct sNode*));
__right_value320 = (void*)0;
__right_value321 = (void*)0;
__right_value326 = (void*)0;
memset(&quote_211, 0, sizeof(_Bool));
__right_value327 = (void*)0;
memset(&right_node_212, 0, sizeof(struct sNode*));
__right_value328 = (void*)0;
__right_value329 = (void*)0;
__right_value334 = (void*)0;
memset(&quote_214, 0, sizeof(_Bool));
__right_value335 = (void*)0;
memset(&right_node_215, 0, sizeof(struct sNode*));
__right_value336 = (void*)0;
__right_value337 = (void*)0;
__right_value342 = (void*)0;
__right_value343 = (void*)0;
    if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==43&&*(info->p+2)==43)||(*info->p==43&&*(info->p+1)==43))) {
        if(*info->p==92) {
            info->p+=3;
            skip_spaces_and_lf(info);
            quote_180=(_Bool)1;
        }
        else {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_180=(_Bool)0;
        }
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 829, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sPlusPlusNode*)(__right_value244=sPlusPlusNode_initialize((struct sPlusPlusNode*)come_increment_ref_count(((struct sPlusPlusNode*)(__right_value243=(struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1), "19eq.c", 829, "sPlusPlusNode")))),(struct sNode*)come_increment_ref_count(node),quote_180,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sPlusPlusNode_finalize;
        _inf_value1->clone=(void*)sPlusPlusNode_clone;
        _inf_value1->compile=(void*)sPlusPlusNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sPlusPlusNode_kind;
        __result116__ = __result_obj__ = ((struct sNode*)(__right_value248=_inf_value1));
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(__right_value243,sPlusPlusNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value244,sPlusPlusNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value248) { __right_value248 = come_decrement_ref_count2(__right_value248, ((struct sNode*)__right_value248)->finalize, ((struct sNode*)__right_value248)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result116__;
    }
    else {
        if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==45&&*(info->p+2)==45)||(*info->p==45&&*(info->p+1)==45))) {
            if(*info->p==92) {
                info->p+=3;
                skip_spaces_and_lf(info);
                quote_182=(_Bool)1;
            }
            else {
                info->p+=2;
                skip_spaces_and_lf(info);
                quote_182=(_Bool)0;
            }
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 844, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sMinusMinusNode*)(__right_value250=sMinusMinusNode_initialize((struct sMinusMinusNode*)come_increment_ref_count(((struct sMinusMinusNode*)(__right_value249=(struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1), "19eq.c", 844, "sMinusMinusNode")))),(struct sNode*)come_increment_ref_count(node),quote_182,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sMinusMinusNode_finalize;
            _inf_value2->clone=(void*)sMinusMinusNode_clone;
            _inf_value2->compile=(void*)sMinusMinusNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sMinusMinusNode_kind;
            __result119__ = __result_obj__ = ((struct sNode*)(__right_value254=_inf_value2));
            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
            come_call_finalizer3(__right_value249,sMinusMinusNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value250,sMinusMinusNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value254) { __right_value254 = come_decrement_ref_count2(__right_value254, ((struct sNode*)__right_value254)->finalize, ((struct sNode*)__right_value254)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result119__;
        }
        else {
            if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==43&&*(info->p+2)==61)||(*info->p==43&&*(info->p+1)==61))) {
                if(*info->p==92) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    quote_184=(_Bool)1;
                }
                else {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    quote_184=(_Bool)0;
                }
                right_node_185=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value255=expression_v13(info))));
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 862, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sPlusEqualNode*)(__right_value257=sPlusEqualNode_initialize((struct sPlusEqualNode*)come_increment_ref_count(((struct sPlusEqualNode*)(__right_value256=(struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1), "19eq.c", 862, "sPlusEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_185),quote_184,info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sPlusEqualNode_finalize;
                _inf_value3->clone=(void*)sPlusEqualNode_clone;
                _inf_value3->compile=(void*)sPlusEqualNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sNodeBase_terminated;
                _inf_value3->kind=(void*)sPlusEqualNode_kind;
                __result122__ = __result_obj__ = ((struct sNode*)(__right_value262=_inf_value3));
                if(right_node_185) { right_node_185 = come_decrement_ref_count2(right_node_185, ((struct sNode*)right_node_185)->finalize, ((struct sNode*)right_node_185)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                come_call_finalizer3(__right_value256,sPlusEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value257,sPlusEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value262) { __right_value262 = come_decrement_ref_count2(__right_value262, ((struct sNode*)__right_value262)->finalize, ((struct sNode*)__right_value262)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result122__;
                if(right_node_185) { right_node_185 = come_decrement_ref_count2(right_node_185, ((struct sNode*)right_node_185)->finalize, ((struct sNode*)right_node_185)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==45&&*(info->p+2)==61)||(*info->p==45&&*(info->p+1)==61))) {
                    if(*info->p==92) {
                        info->p+=3;
                        skip_spaces_and_lf(info);
                        quote_187=(_Bool)1;
                    }
                    else {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        quote_187=(_Bool)0;
                    }
                    right_node_188=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value263=expression_v13(info))));
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 880, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sMinusEqualNode*)(__right_value265=sMinusEqualNode_initialize((struct sMinusEqualNode*)come_increment_ref_count(((struct sMinusEqualNode*)(__right_value264=(struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1), "19eq.c", 880, "sMinusEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_188),quote_187,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sMinusEqualNode_finalize;
                    _inf_value4->clone=(void*)sMinusEqualNode_clone;
                    _inf_value4->compile=(void*)sMinusEqualNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sNodeBase_terminated;
                    _inf_value4->kind=(void*)sMinusEqualNode_kind;
                    __result125__ = __result_obj__ = ((struct sNode*)(__right_value270=_inf_value4));
                    if(right_node_188) { right_node_188 = come_decrement_ref_count2(right_node_188, ((struct sNode*)right_node_188)->finalize, ((struct sNode*)right_node_188)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    come_call_finalizer3(__right_value264,sMinusEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(__right_value265,sMinusEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(__right_value270) { __right_value270 = come_decrement_ref_count2(__right_value270, ((struct sNode*)__right_value270)->finalize, ((struct sNode*)__right_value270)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result125__;
                    if(right_node_188) { right_node_188 = come_decrement_ref_count2(right_node_188, ((struct sNode*)right_node_188)->finalize, ((struct sNode*)right_node_188)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==42&&*(info->p+2)==61)||(*info->p==42&&*(info->p+1)==61))) {
                        if(*info->p==92) {
                            info->p+=3;
                            skip_spaces_and_lf(info);
                            quote_190=(_Bool)1;
                        }
                        else {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            quote_190=(_Bool)0;
                        }
                        right_node_191=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value271=expression_v13(info))));
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 898, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sMultEqualNode*)(__right_value273=sMultEqualNode_initialize((struct sMultEqualNode*)come_increment_ref_count(((struct sMultEqualNode*)(__right_value272=(struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1), "19eq.c", 898, "sMultEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_191),quote_190,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sMultEqualNode_finalize;
                        _inf_value5->clone=(void*)sMultEqualNode_clone;
                        _inf_value5->compile=(void*)sMultEqualNode_compile;
                        _inf_value5->sline=(void*)sNodeBase_sline;
                        _inf_value5->sname=(void*)sNodeBase_sname;
                        _inf_value5->terminated=(void*)sNodeBase_terminated;
                        _inf_value5->kind=(void*)sMultEqualNode_kind;
                        __result128__ = __result_obj__ = ((struct sNode*)(__right_value278=_inf_value5));
                        if(right_node_191) { right_node_191 = come_decrement_ref_count2(right_node_191, ((struct sNode*)right_node_191)->finalize, ((struct sNode*)right_node_191)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        come_call_finalizer3(__right_value272,sMultEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(__right_value273,sMultEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(__right_value278) { __right_value278 = come_decrement_ref_count2(__right_value278, ((struct sNode*)__right_value278)->finalize, ((struct sNode*)__right_value278)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result128__;
                        if(right_node_191) { right_node_191 = come_decrement_ref_count2(right_node_191, ((struct sNode*)right_node_191)->finalize, ((struct sNode*)right_node_191)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==47&&*(info->p+2)==61)||(*info->p==47&&*(info->p+1)==61))) {
                            if(*info->p==92) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                quote_193=(_Bool)1;
                            }
                            else {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                                quote_193=(_Bool)0;
                            }
                            right_node_194=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value279=expression_v13(info))));
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 916, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sDivEqualNode*)(__right_value281=sDivEqualNode_initialize((struct sDivEqualNode*)come_increment_ref_count(((struct sDivEqualNode*)(__right_value280=(struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1), "19eq.c", 916, "sDivEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_194),quote_193,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sDivEqualNode_finalize;
                            _inf_value6->clone=(void*)sDivEqualNode_clone;
                            _inf_value6->compile=(void*)sDivEqualNode_compile;
                            _inf_value6->sline=(void*)sNodeBase_sline;
                            _inf_value6->sname=(void*)sNodeBase_sname;
                            _inf_value6->terminated=(void*)sNodeBase_terminated;
                            _inf_value6->kind=(void*)sDivEqualNode_kind;
                            __result131__ = __result_obj__ = ((struct sNode*)(__right_value286=_inf_value6));
                            if(right_node_194) { right_node_194 = come_decrement_ref_count2(right_node_194, ((struct sNode*)right_node_194)->finalize, ((struct sNode*)right_node_194)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            come_call_finalizer3(__right_value280,sDivEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(__right_value281,sDivEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value286) { __right_value286 = come_decrement_ref_count2(__right_value286, ((struct sNode*)__right_value286)->finalize, ((struct sNode*)__right_value286)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result131__;
                            if(right_node_194) { right_node_194 = come_decrement_ref_count2(right_node_194, ((struct sNode*)right_node_194)->finalize, ((struct sNode*)right_node_194)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==37&&*(info->p+2)==61)||(*info->p==37&&*(info->p+1)==61))) {
                                if(*info->p==92) {
                                    info->p+=3;
                                    skip_spaces_and_lf(info);
                                    quote_196=(_Bool)1;
                                }
                                else {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                    quote_196=(_Bool)0;
                                }
                                right_node_197=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value287=expression_v13(info))));
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 935, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sModEqualNode*)(__right_value289=sModEqualNode_initialize((struct sModEqualNode*)come_increment_ref_count(((struct sModEqualNode*)(__right_value288=(struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1), "19eq.c", 935, "sModEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_197),quote_196,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sModEqualNode_finalize;
                                _inf_value7->clone=(void*)sModEqualNode_clone;
                                _inf_value7->compile=(void*)sModEqualNode_compile;
                                _inf_value7->sline=(void*)sNodeBase_sline;
                                _inf_value7->sname=(void*)sNodeBase_sname;
                                _inf_value7->terminated=(void*)sNodeBase_terminated;
                                _inf_value7->kind=(void*)sModEqualNode_kind;
                                __result134__ = __result_obj__ = ((struct sNode*)(__right_value294=_inf_value7));
                                if(right_node_197) { right_node_197 = come_decrement_ref_count2(right_node_197, ((struct sNode*)right_node_197)->finalize, ((struct sNode*)right_node_197)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                come_call_finalizer3(__right_value288,sModEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(__right_value289,sModEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(__right_value294) { __right_value294 = come_decrement_ref_count2(__right_value294, ((struct sNode*)__right_value294)->finalize, ((struct sNode*)__right_value294)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result134__;
                                if(right_node_197) { right_node_197 = come_decrement_ref_count2(right_node_197, ((struct sNode*)right_node_197)->finalize, ((struct sNode*)right_node_197)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)==61)||(*info->p==60&&*(info->p+1)==60&&*(info->p+2)==61))) {
                                    if(*info->p==92) {
                                        info->p+=4;
                                        skip_spaces_and_lf(info);
                                        quote_199=(_Bool)1;
                                    }
                                    else {
                                        info->p+=3;
                                        skip_spaces_and_lf(info);
                                        quote_199=(_Bool)0;
                                    }
                                    right_node_200=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value295=expression_v13(info))));
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 953, "struct sNode");
                                    _inf_obj_value8=come_increment_ref_count(((struct sLShifEqualNode*)(__right_value297=sLShifEqualNode_initialize((struct sLShifEqualNode*)come_increment_ref_count(((struct sLShifEqualNode*)(__right_value296=(struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1), "19eq.c", 953, "sLShifEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_200),quote_199,info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sLShifEqualNode_finalize;
                                    _inf_value8->clone=(void*)sLShifEqualNode_clone;
                                    _inf_value8->compile=(void*)sLShifEqualNode_compile;
                                    _inf_value8->sline=(void*)sNodeBase_sline;
                                    _inf_value8->sname=(void*)sNodeBase_sname;
                                    _inf_value8->terminated=(void*)sNodeBase_terminated;
                                    _inf_value8->kind=(void*)sLShifEqualNode_kind;
                                    __result137__ = __result_obj__ = ((struct sNode*)(__right_value302=_inf_value8));
                                    if(right_node_200) { right_node_200 = come_decrement_ref_count2(right_node_200, ((struct sNode*)right_node_200)->finalize, ((struct sNode*)right_node_200)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                    come_call_finalizer3(__right_value296,sLShifEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(__right_value297,sLShifEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(__right_value302) { __right_value302 = come_decrement_ref_count2(__right_value302, ((struct sNode*)__right_value302)->finalize, ((struct sNode*)__right_value302)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result137__;
                                    if(right_node_200) { right_node_200 = come_decrement_ref_count2(right_node_200, ((struct sNode*)right_node_200)->finalize, ((struct sNode*)right_node_200)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)==61)||(*info->p==62&&*(info->p+1)==62&&*(info->p+2)==61))) {
                                        if(*info->p==92) {
                                            info->p+=4;
                                            skip_spaces_and_lf(info);
                                            quote_202=(_Bool)1;
                                        }
                                        else {
                                            info->p+=3;
                                            skip_spaces_and_lf(info);
                                            quote_202=(_Bool)0;
                                        }
                                        right_node_203=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value303=expression_v13(info))));
                                        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 971, "struct sNode");
                                        _inf_obj_value9=come_increment_ref_count(((struct sRShiftEqualNode*)(__right_value305=sRShiftEqualNode_initialize((struct sRShiftEqualNode*)come_increment_ref_count(((struct sRShiftEqualNode*)(__right_value304=(struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1), "19eq.c", 971, "sRShiftEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_203),quote_202,info))));
                                        _inf_value9->_protocol_obj=_inf_obj_value9;
                                        _inf_value9->finalize=(void*)sRShiftEqualNode_finalize;
                                        _inf_value9->clone=(void*)sRShiftEqualNode_clone;
                                        _inf_value9->compile=(void*)sRShiftEqualNode_compile;
                                        _inf_value9->sline=(void*)sNodeBase_sline;
                                        _inf_value9->sname=(void*)sNodeBase_sname;
                                        _inf_value9->terminated=(void*)sNodeBase_terminated;
                                        _inf_value9->kind=(void*)sRShiftEqualNode_kind;
                                        __result140__ = __result_obj__ = ((struct sNode*)(__right_value310=_inf_value9));
                                        if(right_node_203) { right_node_203 = come_decrement_ref_count2(right_node_203, ((struct sNode*)right_node_203)->finalize, ((struct sNode*)right_node_203)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                        come_call_finalizer3(__right_value304,sRShiftEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(__right_value305,sRShiftEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(__right_value310) { __right_value310 = come_decrement_ref_count2(__right_value310, ((struct sNode*)__right_value310)->finalize, ((struct sNode*)__right_value310)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result140__;
                                        if(right_node_203) { right_node_203 = come_decrement_ref_count2(right_node_203, ((struct sNode*)right_node_203)->finalize, ((struct sNode*)right_node_203)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==94&&*(info->p+2)==61)||(*info->p==94&&*(info->p+1)==61))) {
                                            if(*info->p==92) {
                                                info->p+=3;
                                                skip_spaces_and_lf(info);
                                                quote_205=(_Bool)1;
                                            }
                                            else {
                                                info->p+=2;
                                                skip_spaces_and_lf(info);
                                                quote_205=(_Bool)0;
                                            }
                                            right_node_206=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value311=expression_v13(info))));
                                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 989, "struct sNode");
                                            _inf_obj_value10=come_increment_ref_count(((struct sXorEqualNode*)(__right_value313=sXorEqualNode_initialize((struct sXorEqualNode*)come_increment_ref_count(((struct sXorEqualNode*)(__right_value312=(struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1), "19eq.c", 989, "sXorEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_206),quote_205,info))));
                                            _inf_value10->_protocol_obj=_inf_obj_value10;
                                            _inf_value10->finalize=(void*)sXorEqualNode_finalize;
                                            _inf_value10->clone=(void*)sXorEqualNode_clone;
                                            _inf_value10->compile=(void*)sXorEqualNode_compile;
                                            _inf_value10->sline=(void*)sNodeBase_sline;
                                            _inf_value10->sname=(void*)sNodeBase_sname;
                                            _inf_value10->terminated=(void*)sNodeBase_terminated;
                                            _inf_value10->kind=(void*)sXorEqualNode_kind;
                                            __result143__ = __result_obj__ = ((struct sNode*)(__right_value318=_inf_value10));
                                            if(right_node_206) { right_node_206 = come_decrement_ref_count2(right_node_206, ((struct sNode*)right_node_206)->finalize, ((struct sNode*)right_node_206)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                            come_call_finalizer3(__right_value312,sXorEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(__right_value313,sXorEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(__right_value318) { __right_value318 = come_decrement_ref_count2(__right_value318, ((struct sNode*)__right_value318)->finalize, ((struct sNode*)__right_value318)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result143__;
                                            if(right_node_206) { right_node_206 = come_decrement_ref_count2(right_node_206, ((struct sNode*)right_node_206)->finalize, ((struct sNode*)right_node_206)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==38&&*(info->p+2)==61)||(*info->p==38&&*(info->p+1)==61))) {
                                                if(*info->p==92) {
                                                    info->p+=3;
                                                    skip_spaces_and_lf(info);
                                                    quote_208=(_Bool)1;
                                                }
                                                else {
                                                    info->p+=2;
                                                    skip_spaces_and_lf(info);
                                                    quote_208=(_Bool)0;
                                                }
                                                right_node_209=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value319=expression_v13(info))));
                                                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1006, "struct sNode");
                                                _inf_obj_value11=come_increment_ref_count(((struct sAndEqualNode*)(__right_value321=sAndEqualNode_initialize((struct sAndEqualNode*)come_increment_ref_count(((struct sAndEqualNode*)(__right_value320=(struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1), "19eq.c", 1006, "sAndEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_209),quote_208,info))));
                                                _inf_value11->_protocol_obj=_inf_obj_value11;
                                                _inf_value11->finalize=(void*)sAndEqualNode_finalize;
                                                _inf_value11->clone=(void*)sAndEqualNode_clone;
                                                _inf_value11->compile=(void*)sAndEqualNode_compile;
                                                _inf_value11->sline=(void*)sNodeBase_sline;
                                                _inf_value11->sname=(void*)sNodeBase_sname;
                                                _inf_value11->terminated=(void*)sNodeBase_terminated;
                                                _inf_value11->kind=(void*)sAndEqualNode_kind;
                                                __result146__ = __result_obj__ = ((struct sNode*)(__right_value326=_inf_value11));
                                                if(right_node_209) { right_node_209 = come_decrement_ref_count2(right_node_209, ((struct sNode*)right_node_209)->finalize, ((struct sNode*)right_node_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                come_call_finalizer3(__right_value320,sAndEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer3(__right_value321,sAndEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(__right_value326) { __right_value326 = come_decrement_ref_count2(__right_value326, ((struct sNode*)__right_value326)->finalize, ((struct sNode*)__right_value326)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                return __result146__;
                                                if(right_node_209) { right_node_209 = come_decrement_ref_count2(right_node_209, ((struct sNode*)right_node_209)->finalize, ((struct sNode*)right_node_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(!node->terminated(node->_protocol_obj)&&((*info->p==92&&*(info->p+1)==124&&*(info->p+2)==61)||(*info->p==124&&*(info->p+1)==61))) {
                                                    if(*info->p==92) {
                                                        info->p+=3;
                                                        skip_spaces_and_lf(info);
                                                        quote_211=(_Bool)1;
                                                    }
                                                    else {
                                                        info->p+=2;
                                                        skip_spaces_and_lf(info);
                                                        quote_211=(_Bool)0;
                                                    }
                                                    right_node_212=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value327=expression_v13(info))));
                                                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1023, "struct sNode");
                                                    _inf_obj_value12=come_increment_ref_count(((struct sOrEqualNode*)(__right_value329=sOrEqualNode_initialize((struct sOrEqualNode*)come_increment_ref_count(((struct sOrEqualNode*)(__right_value328=(struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1), "19eq.c", 1023, "sOrEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_212),quote_211,info))));
                                                    _inf_value12->_protocol_obj=_inf_obj_value12;
                                                    _inf_value12->finalize=(void*)sOrEqualNode_finalize;
                                                    _inf_value12->clone=(void*)sOrEqualNode_clone;
                                                    _inf_value12->compile=(void*)sOrEqualNode_compile;
                                                    _inf_value12->sline=(void*)sNodeBase_sline;
                                                    _inf_value12->sname=(void*)sNodeBase_sname;
                                                    _inf_value12->terminated=(void*)sNodeBase_terminated;
                                                    _inf_value12->kind=(void*)sOrEqualNode_kind;
                                                    __result149__ = __result_obj__ = ((struct sNode*)(__right_value334=_inf_value12));
                                                    if(right_node_212) { right_node_212 = come_decrement_ref_count2(right_node_212, ((struct sNode*)right_node_212)->finalize, ((struct sNode*)right_node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    come_call_finalizer3(__right_value328,sOrEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer3(__right_value329,sOrEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(__right_value334) { __right_value334 = come_decrement_ref_count2(__right_value334, ((struct sNode*)__right_value334)->finalize, ((struct sNode*)__right_value334)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result149__;
                                                    if(right_node_212) { right_node_212 = come_decrement_ref_count2(right_node_212, ((struct sNode*)right_node_212)->finalize, ((struct sNode*)right_node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    if((*info->p==92&&*(info->p+1)==61&&*(info->p+2)!=61)||(*info->p==61&&*(info->p+1)!=61)) {
                                                        if(*info->p==92) {
                                                            info->p+=2;
                                                            skip_spaces_and_lf(info);
                                                            quote_214=(_Bool)1;
                                                        }
                                                        else {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            quote_214=(_Bool)0;
                                                        }
                                                        right_node_215=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value335=expression_v13(info))));
                                                        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1040, "struct sNode");
                                                        _inf_obj_value13=come_increment_ref_count(((struct sExpEqualNode*)(__right_value337=sExpEqualNode_initialize((struct sExpEqualNode*)come_increment_ref_count(((struct sExpEqualNode*)(__right_value336=(struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1), "19eq.c", 1040, "sExpEqualNode")))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_215),quote_214,info))));
                                                        _inf_value13->_protocol_obj=_inf_obj_value13;
                                                        _inf_value13->finalize=(void*)sExpEqualNode_finalize;
                                                        _inf_value13->clone=(void*)sExpEqualNode_clone;
                                                        _inf_value13->compile=(void*)sExpEqualNode_compile;
                                                        _inf_value13->sline=(void*)sNodeBase_sline;
                                                        _inf_value13->sname=(void*)sNodeBase_sname;
                                                        _inf_value13->terminated=(void*)sNodeBase_terminated;
                                                        _inf_value13->kind=(void*)sExpEqualNode_kind;
                                                        __result152__ = __result_obj__ = ((struct sNode*)(__right_value342=_inf_value13));
                                                        if(right_node_215) { right_node_215 = come_decrement_ref_count2(right_node_215, ((struct sNode*)right_node_215)->finalize, ((struct sNode*)right_node_215)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                        come_call_finalizer3(__right_value336,sExpEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(__right_value337,sExpEqualNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(__right_value342) { __right_value342 = come_decrement_ref_count2(__right_value342, ((struct sNode*)__right_value342)->finalize, ((struct sNode*)__right_value342)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result152__;
                                                        if(right_node_215) { right_node_215 = come_decrement_ref_count2(right_node_215, ((struct sNode*)right_node_215)->finalize, ((struct sNode*)right_node_215)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    __result153__ = __result_obj__ = ((struct sNode*)(__right_value343=post_position_operator((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(__right_value343) { __right_value343 = come_decrement_ref_count2(__right_value343, ((struct sNode*)__right_value343)->finalize, ((struct sNode*)__right_value343)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result153__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sPlusPlusNode_finalize(struct sPlusPlusNode* self){
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
}

static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self){
void* __result_obj__;
struct sPlusPlusNode* __result114__;
void* __right_value245;
struct sPlusPlusNode* result_181;
void* __right_value246;
char* __dec_obj88;
void* __right_value247;
struct sNode* __dec_obj89;
struct sPlusPlusNode* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value245 = (void*)0;
memset(&result_181, 0, sizeof(struct sPlusPlusNode*));
__right_value246 = (void*)0;
__right_value247 = (void*)0;
            if(self==(void*)0) {
                __result114__ = __result_obj__ = (void*)0;
                return __result114__;
            }
            result_181=(struct sPlusPlusNode*)come_increment_ref_count(((struct sPlusPlusNode*)(__right_value245=(struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1), "sPlusPlusNode_clone", 3, "sPlusPlusNode"))));
            if(self!=((void*)0)) {
                result_181->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj88=result_181->sname;
                result_181->sname=(char*)come_increment_ref_count(((char*)(__right_value246=string_clone(self->sname))));
                __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                __dec_obj89=result_181->mLeft;
                result_181->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value247=sNode_clone(self->mLeft))));
                if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); }
            }
            if(self!=((void*)0)) {
                result_181->mQuote=self->mQuote;
            }
            __result115__ = __result_obj__ = result_181;
            come_call_finalizer3(result_181,sPlusPlusNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result115__;
            come_call_finalizer3(result_181,sPlusPlusNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMinusMinusNode_finalize(struct sMinusMinusNode* self){
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
}

static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self){
void* __result_obj__;
struct sMinusMinusNode* __result117__;
void* __right_value251;
struct sMinusMinusNode* result_183;
void* __right_value252;
char* __dec_obj90;
void* __right_value253;
struct sNode* __dec_obj91;
struct sMinusMinusNode* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value251 = (void*)0;
memset(&result_183, 0, sizeof(struct sMinusMinusNode*));
__right_value252 = (void*)0;
__right_value253 = (void*)0;
                if(self==(void*)0) {
                    __result117__ = __result_obj__ = (void*)0;
                    return __result117__;
                }
                result_183=(struct sMinusMinusNode*)come_increment_ref_count(((struct sMinusMinusNode*)(__right_value251=(struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1), "sMinusMinusNode_clone", 3, "sMinusMinusNode"))));
                if(self!=((void*)0)) {
                    result_183->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj90=result_183->sname;
                    result_183->sname=(char*)come_increment_ref_count(((char*)(__right_value252=string_clone(self->sname))));
                    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj91=result_183->mLeft;
                    result_183->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value253=sNode_clone(self->mLeft))));
                    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); }
                }
                if(self!=((void*)0)) {
                    result_183->mQuote=self->mQuote;
                }
                __result118__ = __result_obj__ = result_183;
                come_call_finalizer3(result_183,sMinusMinusNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result118__;
                come_call_finalizer3(result_183,sMinusMinusNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sPlusEqualNode_finalize(struct sPlusEqualNode* self){
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self){
void* __result_obj__;
struct sPlusEqualNode* __result120__;
void* __right_value258;
struct sPlusEqualNode* result_186;
void* __right_value259;
char* __dec_obj92;
void* __right_value260;
struct sNode* __dec_obj93;
void* __right_value261;
struct sNode* __dec_obj94;
struct sPlusEqualNode* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value258 = (void*)0;
memset(&result_186, 0, sizeof(struct sPlusEqualNode*));
__right_value259 = (void*)0;
__right_value260 = (void*)0;
__right_value261 = (void*)0;
                    if(self==(void*)0) {
                        __result120__ = __result_obj__ = (void*)0;
                        return __result120__;
                    }
                    result_186=(struct sPlusEqualNode*)come_increment_ref_count(((struct sPlusEqualNode*)(__right_value258=(struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1), "sPlusEqualNode_clone", 3, "sPlusEqualNode"))));
                    if(self!=((void*)0)) {
                        result_186->sline=self->sline;
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        __dec_obj92=result_186->sname;
                        result_186->sname=(char*)come_increment_ref_count(((char*)(__right_value259=string_clone(self->sname))));
                        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                        __dec_obj93=result_186->mLeft;
                        result_186->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value260=sNode_clone(self->mLeft))));
                        if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); }
                    }
                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                        __dec_obj94=result_186->mRight;
                        result_186->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value261=sNode_clone(self->mRight))));
                        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); }
                    }
                    if(self!=((void*)0)) {
                        result_186->mQuote=self->mQuote;
                    }
                    __result121__ = __result_obj__ = result_186;
                    come_call_finalizer3(result_186,sPlusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result121__;
                    come_call_finalizer3(result_186,sPlusEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMinusEqualNode_finalize(struct sMinusEqualNode* self){
                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self){
void* __result_obj__;
struct sMinusEqualNode* __result123__;
void* __right_value266;
struct sMinusEqualNode* result_189;
void* __right_value267;
char* __dec_obj95;
void* __right_value268;
struct sNode* __dec_obj96;
void* __right_value269;
struct sNode* __dec_obj97;
struct sMinusEqualNode* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value266 = (void*)0;
memset(&result_189, 0, sizeof(struct sMinusEqualNode*));
__right_value267 = (void*)0;
__right_value268 = (void*)0;
__right_value269 = (void*)0;
                        if(self==(void*)0) {
                            __result123__ = __result_obj__ = (void*)0;
                            return __result123__;
                        }
                        result_189=(struct sMinusEqualNode*)come_increment_ref_count(((struct sMinusEqualNode*)(__right_value266=(struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1), "sMinusEqualNode_clone", 3, "sMinusEqualNode"))));
                        if(self!=((void*)0)) {
                            result_189->sline=self->sline;
                        }
                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                            __dec_obj95=result_189->sname;
                            result_189->sname=(char*)come_increment_ref_count(((char*)(__right_value267=string_clone(self->sname))));
                            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        if(self!=((void*)0)) {
                            result_189->mQuote=self->mQuote;
                        }
                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                            __dec_obj96=result_189->mLeft;
                            result_189->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value268=sNode_clone(self->mLeft))));
                            if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0, (void*)0); }
                        }
                        if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                            __dec_obj97=result_189->mRight;
                            result_189->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value269=sNode_clone(self->mRight))));
                            if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0, (void*)0); }
                        }
                        __result124__ = __result_obj__ = result_189;
                        come_call_finalizer3(result_189,sMinusEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result124__;
                        come_call_finalizer3(result_189,sMinusEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMultEqualNode_finalize(struct sMultEqualNode* self){
                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self){
void* __result_obj__;
struct sMultEqualNode* __result126__;
void* __right_value274;
struct sMultEqualNode* result_192;
void* __right_value275;
char* __dec_obj98;
void* __right_value276;
struct sNode* __dec_obj99;
void* __right_value277;
struct sNode* __dec_obj100;
struct sMultEqualNode* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value274 = (void*)0;
memset(&result_192, 0, sizeof(struct sMultEqualNode*));
__right_value275 = (void*)0;
__right_value276 = (void*)0;
__right_value277 = (void*)0;
                            if(self==(void*)0) {
                                __result126__ = __result_obj__ = (void*)0;
                                return __result126__;
                            }
                            result_192=(struct sMultEqualNode*)come_increment_ref_count(((struct sMultEqualNode*)(__right_value274=(struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1), "sMultEqualNode_clone", 3, "sMultEqualNode"))));
                            if(self!=((void*)0)) {
                                result_192->sline=self->sline;
                            }
                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                __dec_obj98=result_192->sname;
                                result_192->sname=(char*)come_increment_ref_count(((char*)(__right_value275=string_clone(self->sname))));
                                __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            if(self!=((void*)0)) {
                                result_192->mQuote=self->mQuote;
                            }
                            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                __dec_obj99=result_192->mLeft;
                                result_192->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value276=sNode_clone(self->mLeft))));
                                if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); }
                            }
                            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                __dec_obj100=result_192->mRight;
                                result_192->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value277=sNode_clone(self->mRight))));
                                if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
                            }
                            __result127__ = __result_obj__ = result_192;
                            come_call_finalizer3(result_192,sMultEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result127__;
                            come_call_finalizer3(result_192,sMultEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDivEqualNode_finalize(struct sDivEqualNode* self){
                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self){
void* __result_obj__;
struct sDivEqualNode* __result129__;
void* __right_value282;
struct sDivEqualNode* result_195;
void* __right_value283;
char* __dec_obj101;
void* __right_value284;
struct sNode* __dec_obj102;
void* __right_value285;
struct sNode* __dec_obj103;
struct sDivEqualNode* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value282 = (void*)0;
memset(&result_195, 0, sizeof(struct sDivEqualNode*));
__right_value283 = (void*)0;
__right_value284 = (void*)0;
__right_value285 = (void*)0;
                                if(self==(void*)0) {
                                    __result129__ = __result_obj__ = (void*)0;
                                    return __result129__;
                                }
                                result_195=(struct sDivEqualNode*)come_increment_ref_count(((struct sDivEqualNode*)(__right_value282=(struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1), "sDivEqualNode_clone", 3, "sDivEqualNode"))));
                                if(self!=((void*)0)) {
                                    result_195->sline=self->sline;
                                }
                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                    __dec_obj101=result_195->sname;
                                    result_195->sname=(char*)come_increment_ref_count(((char*)(__right_value283=string_clone(self->sname))));
                                    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                                }
                                if(self!=((void*)0)) {
                                    result_195->mQuote=self->mQuote;
                                }
                                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                    __dec_obj102=result_195->mLeft;
                                    result_195->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value284=sNode_clone(self->mLeft))));
                                    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); }
                                }
                                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                    __dec_obj103=result_195->mRight;
                                    result_195->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value285=sNode_clone(self->mRight))));
                                    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); }
                                }
                                __result130__ = __result_obj__ = result_195;
                                come_call_finalizer3(result_195,sDivEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result130__;
                                come_call_finalizer3(result_195,sDivEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sModEqualNode_finalize(struct sModEqualNode* self){
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self){
void* __result_obj__;
struct sModEqualNode* __result132__;
void* __right_value290;
struct sModEqualNode* result_198;
void* __right_value291;
char* __dec_obj104;
void* __right_value292;
struct sNode* __dec_obj105;
void* __right_value293;
struct sNode* __dec_obj106;
struct sModEqualNode* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value290 = (void*)0;
memset(&result_198, 0, sizeof(struct sModEqualNode*));
__right_value291 = (void*)0;
__right_value292 = (void*)0;
__right_value293 = (void*)0;
                                    if(self==(void*)0) {
                                        __result132__ = __result_obj__ = (void*)0;
                                        return __result132__;
                                    }
                                    result_198=(struct sModEqualNode*)come_increment_ref_count(((struct sModEqualNode*)(__right_value290=(struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1), "sModEqualNode_clone", 3, "sModEqualNode"))));
                                    if(self!=((void*)0)) {
                                        result_198->sline=self->sline;
                                    }
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        __dec_obj104=result_198->sname;
                                        result_198->sname=(char*)come_increment_ref_count(((char*)(__right_value291=string_clone(self->sname))));
                                        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    }
                                    if(self!=((void*)0)) {
                                        result_198->mQuote=self->mQuote;
                                    }
                                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                        __dec_obj105=result_198->mLeft;
                                        result_198->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value292=sNode_clone(self->mLeft))));
                                        if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
                                    }
                                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                        __dec_obj106=result_198->mRight;
                                        result_198->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value293=sNode_clone(self->mRight))));
                                        if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); }
                                    }
                                    __result133__ = __result_obj__ = result_198;
                                    come_call_finalizer3(result_198,sModEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result133__;
                                    come_call_finalizer3(result_198,sModEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLShifEqualNode_finalize(struct sLShifEqualNode* self){
                                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
}

static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self){
void* __result_obj__;
struct sLShifEqualNode* __result135__;
void* __right_value298;
struct sLShifEqualNode* result_201;
void* __right_value299;
char* __dec_obj107;
void* __right_value300;
struct sNode* __dec_obj108;
void* __right_value301;
struct sNode* __dec_obj109;
struct sLShifEqualNode* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value298 = (void*)0;
memset(&result_201, 0, sizeof(struct sLShifEqualNode*));
__right_value299 = (void*)0;
__right_value300 = (void*)0;
__right_value301 = (void*)0;
                                        if(self==(void*)0) {
                                            __result135__ = __result_obj__ = (void*)0;
                                            return __result135__;
                                        }
                                        result_201=(struct sLShifEqualNode*)come_increment_ref_count(((struct sLShifEqualNode*)(__right_value298=(struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1), "sLShifEqualNode_clone", 3, "sLShifEqualNode"))));
                                        if(self!=((void*)0)) {
                                            result_201->sline=self->sline;
                                        }
                                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                            __dec_obj107=result_201->sname;
                                            result_201->sname=(char*)come_increment_ref_count(((char*)(__right_value299=string_clone(self->sname))));
                                            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        if(self!=((void*)0)) {
                                            result_201->mQuote=self->mQuote;
                                        }
                                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                            __dec_obj108=result_201->mLeft;
                                            result_201->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value300=sNode_clone(self->mLeft))));
                                            if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); }
                                        }
                                        if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                            __dec_obj109=result_201->mRight;
                                            result_201->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value301=sNode_clone(self->mRight))));
                                            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
                                        }
                                        __result136__ = __result_obj__ = result_201;
                                        come_call_finalizer3(result_201,sLShifEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result136__;
                                        come_call_finalizer3(result_201,sLShifEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self){
                                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
}

static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self){
void* __result_obj__;
struct sRShiftEqualNode* __result138__;
void* __right_value306;
struct sRShiftEqualNode* result_204;
void* __right_value307;
char* __dec_obj110;
void* __right_value308;
struct sNode* __dec_obj111;
void* __right_value309;
struct sNode* __dec_obj112;
struct sRShiftEqualNode* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value306 = (void*)0;
memset(&result_204, 0, sizeof(struct sRShiftEqualNode*));
__right_value307 = (void*)0;
__right_value308 = (void*)0;
__right_value309 = (void*)0;
                                            if(self==(void*)0) {
                                                __result138__ = __result_obj__ = (void*)0;
                                                return __result138__;
                                            }
                                            result_204=(struct sRShiftEqualNode*)come_increment_ref_count(((struct sRShiftEqualNode*)(__right_value306=(struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1), "sRShiftEqualNode_clone", 3, "sRShiftEqualNode"))));
                                            if(self!=((void*)0)) {
                                                result_204->sline=self->sline;
                                            }
                                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                __dec_obj110=result_204->sname;
                                                result_204->sname=(char*)come_increment_ref_count(((char*)(__right_value307=string_clone(self->sname))));
                                                __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            }
                                            if(self!=((void*)0)) {
                                                result_204->mQuote=self->mQuote;
                                            }
                                            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                                __dec_obj111=result_204->mLeft;
                                                result_204->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value308=sNode_clone(self->mLeft))));
                                                if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
                                            }
                                            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                                __dec_obj112=result_204->mRight;
                                                result_204->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value309=sNode_clone(self->mRight))));
                                                if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); }
                                            }
                                            __result139__ = __result_obj__ = result_204;
                                            come_call_finalizer3(result_204,sRShiftEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result139__;
                                            come_call_finalizer3(result_204,sRShiftEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sXorEqualNode_finalize(struct sXorEqualNode* self){
                                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
}

static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self){
void* __result_obj__;
struct sXorEqualNode* __result141__;
void* __right_value314;
struct sXorEqualNode* result_207;
void* __right_value315;
char* __dec_obj113;
void* __right_value316;
struct sNode* __dec_obj114;
void* __right_value317;
struct sNode* __dec_obj115;
struct sXorEqualNode* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value314 = (void*)0;
memset(&result_207, 0, sizeof(struct sXorEqualNode*));
__right_value315 = (void*)0;
__right_value316 = (void*)0;
__right_value317 = (void*)0;
                                                if(self==(void*)0) {
                                                    __result141__ = __result_obj__ = (void*)0;
                                                    return __result141__;
                                                }
                                                result_207=(struct sXorEqualNode*)come_increment_ref_count(((struct sXorEqualNode*)(__right_value314=(struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1), "sXorEqualNode_clone", 3, "sXorEqualNode"))));
                                                if(self!=((void*)0)) {
                                                    result_207->sline=self->sline;
                                                }
                                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                    __dec_obj113=result_207->sname;
                                                    result_207->sname=(char*)come_increment_ref_count(((char*)(__right_value315=string_clone(self->sname))));
                                                    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                }
                                                if(self!=((void*)0)) {
                                                    result_207->mQuote=self->mQuote;
                                                }
                                                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                                    __dec_obj114=result_207->mLeft;
                                                    result_207->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value316=sNode_clone(self->mLeft))));
                                                    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
                                                }
                                                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                                    __dec_obj115=result_207->mRight;
                                                    result_207->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value317=sNode_clone(self->mRight))));
                                                    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); }
                                                }
                                                __result142__ = __result_obj__ = result_207;
                                                come_call_finalizer3(result_207,sXorEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result142__;
                                                come_call_finalizer3(result_207,sXorEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sAndEqualNode_finalize(struct sAndEqualNode* self){
                                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
}

static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self){
void* __result_obj__;
struct sAndEqualNode* __result144__;
void* __right_value322;
struct sAndEqualNode* result_210;
void* __right_value323;
char* __dec_obj116;
void* __right_value324;
struct sNode* __dec_obj117;
void* __right_value325;
struct sNode* __dec_obj118;
struct sAndEqualNode* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value322 = (void*)0;
memset(&result_210, 0, sizeof(struct sAndEqualNode*));
__right_value323 = (void*)0;
__right_value324 = (void*)0;
__right_value325 = (void*)0;
                                                    if(self==(void*)0) {
                                                        __result144__ = __result_obj__ = (void*)0;
                                                        return __result144__;
                                                    }
                                                    result_210=(struct sAndEqualNode*)come_increment_ref_count(((struct sAndEqualNode*)(__right_value322=(struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1), "sAndEqualNode_clone", 3, "sAndEqualNode"))));
                                                    if(self!=((void*)0)) {
                                                        result_210->sline=self->sline;
                                                    }
                                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                        __dec_obj116=result_210->sname;
                                                        result_210->sname=(char*)come_increment_ref_count(((char*)(__right_value323=string_clone(self->sname))));
                                                        __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_210->mQuote=self->mQuote;
                                                    }
                                                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                                        __dec_obj117=result_210->mLeft;
                                                        result_210->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value324=sNode_clone(self->mLeft))));
                                                        if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); }
                                                    }
                                                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                                        __dec_obj118=result_210->mRight;
                                                        result_210->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value325=sNode_clone(self->mRight))));
                                                        if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count2(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0, (void*)0); }
                                                    }
                                                    __result145__ = __result_obj__ = result_210;
                                                    come_call_finalizer3(result_210,sAndEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                                    return __result145__;
                                                    come_call_finalizer3(result_210,sAndEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sOrEqualNode_finalize(struct sOrEqualNode* self){
                                                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
}

static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self){
void* __result_obj__;
struct sOrEqualNode* __result147__;
void* __right_value330;
struct sOrEqualNode* result_213;
void* __right_value331;
char* __dec_obj119;
void* __right_value332;
struct sNode* __dec_obj120;
void* __right_value333;
struct sNode* __dec_obj121;
struct sOrEqualNode* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value330 = (void*)0;
memset(&result_213, 0, sizeof(struct sOrEqualNode*));
__right_value331 = (void*)0;
__right_value332 = (void*)0;
__right_value333 = (void*)0;
                                                        if(self==(void*)0) {
                                                            __result147__ = __result_obj__ = (void*)0;
                                                            return __result147__;
                                                        }
                                                        result_213=(struct sOrEqualNode*)come_increment_ref_count(((struct sOrEqualNode*)(__right_value330=(struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1), "sOrEqualNode_clone", 3, "sOrEqualNode"))));
                                                        if(self!=((void*)0)) {
                                                            result_213->sline=self->sline;
                                                        }
                                                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                            __dec_obj119=result_213->sname;
                                                            result_213->sname=(char*)come_increment_ref_count(((char*)(__right_value331=string_clone(self->sname))));
                                                            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        }
                                                        if(self!=((void*)0)) {
                                                            result_213->mQuote=self->mQuote;
                                                        }
                                                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                                            __dec_obj120=result_213->mLeft;
                                                            result_213->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value332=sNode_clone(self->mLeft))));
                                                            if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); }
                                                        }
                                                        if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                                            __dec_obj121=result_213->mRight;
                                                            result_213->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value333=sNode_clone(self->mRight))));
                                                            if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); }
                                                        }
                                                        __result148__ = __result_obj__ = result_213;
                                                        come_call_finalizer3(result_213,sOrEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result148__;
                                                        come_call_finalizer3(result_213,sOrEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sExpEqualNode_finalize(struct sExpEqualNode* self){
                                                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
                                                            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
}

static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self){
void* __result_obj__;
struct sExpEqualNode* __result150__;
void* __right_value338;
struct sExpEqualNode* result_216;
void* __right_value339;
char* __dec_obj122;
void* __right_value340;
struct sNode* __dec_obj123;
void* __right_value341;
struct sNode* __dec_obj124;
struct sExpEqualNode* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value338 = (void*)0;
memset(&result_216, 0, sizeof(struct sExpEqualNode*));
__right_value339 = (void*)0;
__right_value340 = (void*)0;
__right_value341 = (void*)0;
                                                            if(self==(void*)0) {
                                                                __result150__ = __result_obj__ = (void*)0;
                                                                return __result150__;
                                                            }
                                                            result_216=(struct sExpEqualNode*)come_increment_ref_count(((struct sExpEqualNode*)(__right_value338=(struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1), "sExpEqualNode_clone", 3, "sExpEqualNode"))));
                                                            if(self!=((void*)0)) {
                                                                result_216->sline=self->sline;
                                                            }
                                                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                                __dec_obj122=result_216->sname;
                                                                result_216->sname=(char*)come_increment_ref_count(((char*)(__right_value339=string_clone(self->sname))));
                                                                __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            }
                                                            if(self!=((void*)0)) {
                                                                result_216->mQuote=self->mQuote;
                                                            }
                                                            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                                                __dec_obj123=result_216->mLeft;
                                                                result_216->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value340=sNode_clone(self->mLeft))));
                                                                if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); }
                                                            }
                                                            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                                                __dec_obj124=result_216->mRight;
                                                                result_216->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value341=sNode_clone(self->mRight))));
                                                                if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); }
                                                            }
                                                            __result151__ = __result_obj__ = result_216;
                                                            come_call_finalizer3(result_216,sExpEqualNode_finalize, 0, 0, 1, 0, (void*)0);
                                                            return __result151__;
                                                            come_call_finalizer3(result_216,sExpEqualNode_finalize, 0, 0, 0, 0, (void*)0);
}

