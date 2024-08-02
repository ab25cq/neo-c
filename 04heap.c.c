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

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info);

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);

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
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info);

int get_right_value_id_from_obj(char* obj);

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);

static void sRightValueObject_finalize(struct sRightValueObject* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self);
static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self);
static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_);

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1sRightValueObjectpp_finalize(struct list$1sRightValueObjectp* self);
static void list_item$1sRightValueObjectpp_finalize(struct list_item$1sRightValueObjectp* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
_Bool create_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);

_Bool existance_free_right_value_objects(struct sInfo* info);

void free_right_value_objects(struct sInfo* info, _Bool comma);

_Bool is_right_values(int right_value_num, struct sInfo* info);

struct sVar* get_variable_from_table(struct sVarTable* table, char* name);

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);

void free_objects_on_break(struct sInfo* info);

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);

_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);

_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);

// uniq global variable
// source head3
int gRightValueNum=0;

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










void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info){
char* __dec_obj12;
void* right_value79;
char* __dec_obj13;
void* right_value80;
char* __dec_obj14;
void* right_value81;
char* __dec_obj15;
void* right_value82;
char* __dec_obj16;
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
    if(gComeGC||gComeC) {
        return;
    }
    if(right_value->var) {
        if(right_value->var->mType->mDelegate) {
            __dec_obj12=right_value->var->mCValueName;
            right_value->var->mCValueName=((void*)0);
            __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            if(right_value->var->mType->mShare) {
                __dec_obj13=right_value->c_value;
                right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value79=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else {
                if(right_value->var->mType->mClone) {
                    __dec_obj14=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value80=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                    __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                else {
                    __dec_obj15=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value81=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
            }
        }
    }
    else {
        if(right_value->type->mDelegate) {
        }
        else {
            __dec_obj16=right_value->c_value;
            right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value82=increment_ref_count_object(right_value->type,right_value->c_value,info))));
            __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
    }
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* right_value118;
struct sType* result_47;
struct sType* __result63__;
struct sType* __result64__;
struct sClass* klass_78;
void* right_value119;
struct sType* result_type_79;
void* right_value120;
void* right_value121;
struct tuple1$1sTypeph* __dec_obj41;
struct list$1sTypeph* o2_saved_82;
struct sType* it_85;
void* right_value122;
struct sType* new_param_type_88;
void* right_value126;
int generics_number_92;
void* right_value127;
struct list$1sNodeph* array_num_93;
_Bool immutable__94;
int pointer_num_95;
_Bool heap_96;
_Bool guard__97;
_Bool no_heap_98;
_Bool no_calling_destructor_99;
_Bool null_value_100;
void* right_value128;
struct sType* __dec_obj45;
struct list$1sNodeph* __dec_obj46;
int generics_number_104;
struct sClass* klass2_105;
int generics_number2_106;
void* right_value129;
struct list$1sNodeph* array_num_107;
_Bool immutable__108;
int pointer_num_109;
_Bool heap_110;
_Bool guard__111;
_Bool no_heap_112;
_Bool no_calling_destructor_113;
_Bool null_value_114;
_Bool record__115;
void* right_value130;
struct sType* __dec_obj47;
struct list$1sNodeph* __dec_obj48;
struct list$1sTypeph* o2_saved_116;
struct sType* it_117;
void* right_value131;
struct sType* type_118;
void* right_value132;
struct list$1sTypeph* o2_saved_119;
struct sType* it_120;
void* right_value133;
struct sType* type_121;
void* right_value134;
void* right_value135;
char* new_name_122;
struct sType* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
memset(&result_47, 0, sizeof(struct sType*));
memset(&klass_78, 0, sizeof(struct sClass*));
right_value119 = (void*)0;
memset(&result_type_79, 0, sizeof(struct sType*));
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&o2_saved_82, 0, sizeof(struct list$1sTypeph*));
memset(&it_85, 0, sizeof(struct sType*));
right_value122 = (void*)0;
memset(&new_param_type_88, 0, sizeof(struct sType*));
right_value126 = (void*)0;
memset(&generics_number_92, 0, sizeof(int));
right_value127 = (void*)0;
memset(&array_num_93, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__94, 0, sizeof(_Bool));
memset(&pointer_num_95, 0, sizeof(int));
memset(&heap_96, 0, sizeof(_Bool));
memset(&guard__97, 0, sizeof(_Bool));
memset(&no_heap_98, 0, sizeof(_Bool));
memset(&no_calling_destructor_99, 0, sizeof(_Bool));
memset(&null_value_100, 0, sizeof(_Bool));
right_value128 = (void*)0;
memset(&generics_number_104, 0, sizeof(int));
memset(&klass2_105, 0, sizeof(struct sClass*));
memset(&generics_number2_106, 0, sizeof(int));
right_value129 = (void*)0;
memset(&array_num_107, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__108, 0, sizeof(_Bool));
memset(&pointer_num_109, 0, sizeof(int));
memset(&heap_110, 0, sizeof(_Bool));
memset(&guard__111, 0, sizeof(_Bool));
memset(&no_heap_112, 0, sizeof(_Bool));
memset(&no_calling_destructor_113, 0, sizeof(_Bool));
memset(&null_value_114, 0, sizeof(_Bool));
memset(&record__115, 0, sizeof(_Bool));
right_value130 = (void*)0;
memset(&o2_saved_116, 0, sizeof(struct list$1sTypeph*));
memset(&it_117, 0, sizeof(struct sType*));
right_value131 = (void*)0;
memset(&type_118, 0, sizeof(struct sType*));
right_value132 = (void*)0;
memset(&o2_saved_119, 0, sizeof(struct list$1sTypeph*));
memset(&it_120, 0, sizeof(struct sType*));
right_value133 = (void*)0;
memset(&type_121, 0, sizeof(struct sType*));
right_value134 = (void*)0;
right_value135 = (void*)0;
memset(&new_name_122, 0, sizeof(char*));
    result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=sType_clone(type))));
    come_call_finalizer3(right_value118,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(generics_type==((void*)0)) {
        __result63__ = __result_obj__ = result_47;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result63__;
    }
    if(list$1sTypeph_length(generics_type->mGenericsTypes)==0) {
        __result64__ = __result_obj__ = result_47;
        come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result64__;
    }
    klass_78=type->mClass;
    if(string_operator_equals(klass_78->mName,"lambda")) {
        result_type_79=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=solve_generics(type->mResultType->v1,generics_type,info))));
        come_call_finalizer3(right_value119,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj41=result_47->mResultType;
        result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value121=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value120=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 46, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_79)))));
        come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value120,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value121,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1sTypeph_reset(result_47->mParamTypes);
        for(        o2_saved_82=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_85=list$1sTypeph_begin((o2_saved_82));        !list$1sTypeph_end((o2_saved_82));        it_85=list$1sTypeph_next((o2_saved_82))        ){
            new_param_type_88=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=solve_generics(it_85,generics_type,info))));
            come_call_finalizer3(right_value122,sType_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sTypeph_push_back(result_47->mParamTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=sType_clone(new_param_type_88)))));
            come_call_finalizer3(right_value126,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(new_param_type_88,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_82,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_79,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(klass_78->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0) {
            generics_number_92=klass_78->mMethodGenericsNum;
            if(generics_number_92>=list$1sTypeph_length(info->method_generics_types)) {
                err_msg(info,"invalid method generics parametor number. %d %d",generics_number_92,list$1sTypeph_length(info->method_generics_types));
                exit(2);
            }
            array_num_93=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value127=list$1sNodephp_clone(type->mArrayNum))));
            come_call_finalizer3(right_value127,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            immutable__94=type->mImmutable;
            pointer_num_95=type->mPointerNum;
            heap_96=type->mHeap;
            guard__97=type->mGuardValue;
            no_heap_98=type->mNoHeap;
            no_calling_destructor_99=type->mNoCallingDestructor;
            null_value_100=type->mNullValue;
            __dec_obj45=result_47;
            result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_92), "04heap.c", 75, 0))))));
            come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value128,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(heap_96) {
                result_47->mHeap=heap_96;
            }
            if(guard__97) {
                result_47->mGuardValue=guard__97;
            }
            if(no_heap_98) {
                result_47->mNoHeap=(_Bool)1;
                result_47->mHeap=(_Bool)0;
            }
            if(no_calling_destructor_99) {
                result_47->mNoCallingDestructor=(_Bool)1;
            }
            if(immutable__94) {
                result_47->mImmutable=immutable__94;
            }
            if(list$1sNodeph_length(array_num_93)>0) {
                __dec_obj46=result_47->mArrayNum;
                result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_93);
                come_call_finalizer3(__dec_obj46,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(null_value_100) {
                result_47->mNullValue=null_value_100;
            }
            if(pointer_num_95>0) {
                result_47->mPointerNum+=pointer_num_95;
            }
            come_call_finalizer3(array_num_93,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(klass_78->mGenerics) {
                generics_number_104=klass_78->mGenericsNum;
                if(generics_number_104>=list$1sTypeph_length(generics_type->mGenericsTypes)) {
                    err_msg(info,"invalid generics parametor number");
                    exit(2);
                }
                klass2_105=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_104), "04heap.c", 114, 1))->mClass;
                generics_number2_106=klass2_105->mGenericsNum;
                if(generics_number_104!=generics_number2_106) {
                    array_num_107=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value129=list$1sNodephp_clone(type->mArrayNum))));
                    come_call_finalizer3(right_value129,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    immutable__108=type->mImmutable;
                    pointer_num_109=type->mPointerNum;
                    heap_110=type->mHeap;
                    guard__111=type->mGuardValue;
                    no_heap_112=type->mNoHeap;
                    no_calling_destructor_113=type->mNoCallingDestructor;
                    null_value_114=type->mNullValue;
                    record__115=type->mRecord;
                    __dec_obj47=result_47;
                    result_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_104), "04heap.c", 131, 2))))));
                    come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value130,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    if(heap_110) {
                        result_47->mHeap=heap_110;
                    }
                    if(guard__111) {
                        result_47->mGuardValue=guard__111;
                    }
                    if(record__115) {
                        result_47->mRecord=record__115;
                    }
                    if(no_heap_112) {
                        result_47->mNoHeap=(_Bool)1;
                        result_47->mHeap=(_Bool)0;
                    }
                    if(no_calling_destructor_113) {
                        result_47->mNoCallingDestructor=(_Bool)1;
                    }
                    if(immutable__108) {
                        result_47->mImmutable=immutable__108;
                    }
                    if(list$1sNodeph_length(array_num_107)>0) {
                        __dec_obj48=result_47->mArrayNum;
                        result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_107);
                        come_call_finalizer3(__dec_obj48,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(null_value_114) {
                        result_47->mNullValue=null_value_114;
                    }
                    if(pointer_num_109>0) {
                        result_47->mPointerNum+=pointer_num_109;
                    }
                    come_call_finalizer3(array_num_107,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                list$1sTypeph_reset(result_47->mGenericsTypes);
                for(                o2_saved_116=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_117=list$1sTypeph_begin((o2_saved_116));                !list$1sTypeph_end((o2_saved_116));                it_117=list$1sTypeph_next((o2_saved_116))                ){
                    type_118=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=solve_generics(it_117,generics_type,info))));
                    come_call_finalizer3(right_value131,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1sTypeph_push_back(result_47->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(type_118)))));
                    come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(type_118,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_116,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                list$1sTypeph_reset(result_47->mMultipleTypes);
                for(                o2_saved_119=(struct list$1sTypeph*)come_increment_ref_count((type->mMultipleTypes)),it_120=list$1sTypeph_begin((o2_saved_119));                !list$1sTypeph_end((o2_saved_119));                it_120=list$1sTypeph_next((o2_saved_119))                ){
                    type_121=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=solve_generics(it_120,generics_type,info))));
                    come_call_finalizer3(right_value133,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1sTypeph_push_back(result_47->mMultipleTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_clone(type_121)))));
                    come_call_finalizer3(right_value134,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(type_121,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_119,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                if(!output_generics_struct(result_47,generics_type,info)) {
                    new_name_122=(char*)come_increment_ref_count(((char*)(right_value135=create_generics_name(type,info))));
                    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    printf("output generics is failed(%s)",new_name_122);
                    exit(1);
                    new_name_122 = come_decrement_ref_count2(new_name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    __result76__ = __result_obj__ = result_47;
    come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result76__;
    come_call_finalizer3(result_47,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
struct sType* __result45__;
void* right_value83;
struct sType* result_48;
void* right_value90;
struct list$1sTypeph* __dec_obj20;
void* right_value93;
struct tuple1$1sTypeph* __dec_obj22;
void* right_value94;
struct tuple1$1sTypeph* __dec_obj23;
void* right_value95;
char* __dec_obj24;
void* right_value96;
struct list$1sTypeph* __dec_obj25;
void* right_value104;
struct list$1sNodeph* __dec_obj29;
void* right_value105;
struct list$1sTypeph* __dec_obj30;
void* right_value112;
struct list$1charph* __dec_obj34;
void* right_value113;
struct tuple1$1sTypeph* __dec_obj35;
void* right_value114;
struct sNode* __dec_obj36;
void* right_value115;
struct sNode* __dec_obj37;
void* right_value116;
char* __dec_obj38;
void* right_value117;
char* __dec_obj39;
struct sType* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
memset(&result_48, 0, sizeof(struct sType*));
right_value90 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
        if(self==(void*)0) {
            __result45__ = __result_obj__ = (void*)0;
            return __result45__;
        }
        result_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value83,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(self!=((void*)0)) {
            result_48->mClass=self->mClass;
        }
        if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
            __dec_obj20=result_48->mMultipleTypes;
            result_48->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value90=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value90,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
            __dec_obj22=result_48->mNoSolvedGenericsType;
            result_48->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value93=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj22,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value93,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
            __dec_obj23=result_48->mOriginalLoadVarType;
            result_48->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value94=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj23,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value94,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
            __dec_obj24=result_48->mGenericsName;
            result_48->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value95=string_clone(self->mGenericsName))));
            __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
            __dec_obj25=result_48->mGenericsTypes;
            result_48->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value96=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value96,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
            __dec_obj29=result_48->mArrayNum;
            result_48->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value104=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj29,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value104,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_48->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            __dec_obj30=result_48->mParamTypes;
            result_48->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value105=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj30,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value105,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            __dec_obj34=result_48->mParamNames;
            result_48->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value112=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj34,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value112,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            __dec_obj35=result_48->mResultType;
            result_48->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value113=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj35,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value113,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_48->mVarArgs=self->mVarArgs;
        }
        if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
            __dec_obj36=result_48->mAlignas;
            result_48->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value114=sNode_clone(self->mAlignas))));
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value114) { right_value114 = come_decrement_ref_count2(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
            __dec_obj37=result_48->mSizeNum;
            result_48->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value115=sNode_clone(self->mSizeNum))));
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value115) { right_value115 = come_decrement_ref_count2(right_value115, ((struct sNode*)right_value115)->finalize, ((struct sNode*)right_value115)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(self!=((void*)0)) {
            result_48->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(self!=((void*)0)) {
            result_48->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
            __dec_obj38=result_48->mOriginalTypeName;
            result_48->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value116=string_clone(self->mOriginalTypeName))));
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
            __dec_obj39=result_48->mAsmName;
            result_48->mAsmName=(char*)come_increment_ref_count(((char*)(right_value117=string_clone(self->mAsmName))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value84;
void* right_value85;
struct list$1sTypeph* result_55;
struct list_item$1sTypeph* it_56;
void* right_value89;
struct list$1sTypeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
right_value85 = (void*)0;
memset(&result_55, 0, sizeof(struct list$1sTypeph*));
memset(&it_56, 0, sizeof(struct list_item$1sTypeph*));
right_value89 = (void*)0;
                if(self==((void*)0)) {
                    __result46__ = __result_obj__ = ((void*)0);
                    return __result46__;
                }
                result_55=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value85=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value84=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value84,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value85,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_56=self->head;
                while(it_56!=((void*)0)) {
                    list$1sTypeph_add(result_55,(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=sType_clone(it_56->item)))));
                    come_call_finalizer3(right_value89,sType_finalize, 0, 1, 0, 0, __result_obj__);
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
void* right_value86;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj17;
void* right_value87;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj18;
void* right_value88;
struct list_item$1sTypeph* litem_59;
struct sType* __dec_obj19;
struct list$1sTypeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value87 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
right_value88 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1sTypeph*));
                        if(self->len==0) {
                            litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value86,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_57->prev=((void*)0);
                            litem_57->next=((void*)0);
                            __dec_obj17=litem_57->item;
                            litem_57->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_57;
                            self->head=litem_57;
                        }
                        else {
                            if(self->len==1) {
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value87=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value87,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_58->prev=self->head;
                                litem_58->next=((void*)0);
                                __dec_obj18=litem_58->item;
                                litem_58->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj18,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_58;
                                self->head->next=litem_58;
                            }
                            else {
                                litem_59=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value88=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value88,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_59->prev=self->tail;
                                litem_59->next=((void*)0);
                                __dec_obj19=litem_59->item;
                                litem_59->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
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
void* right_value91;
struct tuple1$1sTypeph* result_62;
void* right_value92;
struct sType* __dec_obj21;
struct tuple1$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
memset(&result_62, 0, sizeof(struct tuple1$1sTypeph*));
right_value92 = (void*)0;
                if(self==(void*)0) {
                    __result50__ = __result_obj__ = (void*)0;
                    return __result50__;
                }
                result_62=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value91,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj21=result_62->v1;
                    result_62->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj21,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value92,sType_finalize, 0, 1, 0, 0, __result_obj__);
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
void* right_value97;
void* right_value98;
struct list$1sNodeph* result_63;
struct list_item$1sNodeph* it_64;
void* right_value103;
struct list$1sNodeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
right_value98 = (void*)0;
memset(&result_63, 0, sizeof(struct list$1sNodeph*));
memset(&it_64, 0, sizeof(struct list_item$1sNodeph*));
right_value103 = (void*)0;
                if(self==((void*)0)) {
                    __result52__ = __result_obj__ = ((void*)0);
                    return __result52__;
                }
                result_63=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value98=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value97=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value97,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value98,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_64=self->head;
                while(it_64!=((void*)0)) {
                    list$1sNodeph_add(result_63,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value103=sNode_clone(it_64->item)))));
                    if(right_value103) { right_value103 = come_decrement_ref_count2(right_value103, ((struct sNode*)right_value103)->finalize, ((struct sNode*)right_value103)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
void* right_value99;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj26;
void* right_value100;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj27;
void* right_value101;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj28;
struct list$1sNodeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value100 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
right_value101 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
                        if(self->len==0) {
                            litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value99,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_65->prev=((void*)0);
                            litem_65->next=((void*)0);
                            __dec_obj26=litem_65->item;
                            litem_65->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_65;
                            self->head=litem_65;
                        }
                        else {
                            if(self->len==1) {
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value100=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value100,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_66->prev=self->head;
                                litem_66->next=((void*)0);
                                __dec_obj27=litem_66->item;
                                litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_66;
                                self->head->next=litem_66;
                            }
                            else {
                                litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value101=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value101,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_67->prev=self->tail;
                                litem_67->next=((void*)0);
                                __dec_obj28=litem_67->item;
                                litem_67->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
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
void* right_value102;
struct sNode* result_68;
struct sNode* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
memset(&result_68, 0, sizeof(struct sNode*));
                        if(self==(void*)0) {
                            __result55__ = __result_obj__ = (void*)0;
                            return __result55__;
                        }
                        result_68=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value102=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value102) { right_value102 = come_decrement_ref_count2(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
void* right_value106;
void* right_value107;
struct list$1charph* result_71;
struct list_item$1charph* it_72;
void* right_value111;
struct list$1charph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&result_71, 0, sizeof(struct list$1charph*));
memset(&it_72, 0, sizeof(struct list_item$1charph*));
right_value111 = (void*)0;
                if(self==((void*)0)) {
                    __result58__ = __result_obj__ = ((void*)0);
                    return __result58__;
                }
                result_71=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value107=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value106=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))))));
                come_call_finalizer3(right_value106,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value107,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_72=self->head;
                while(it_72!=((void*)0)) {
                    list$1charph_add(result_71,(char*)come_increment_ref_count(((char*)(right_value111=string_clone(it_72->item)))));
                    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value108;
struct list_item$1charph* litem_73;
char* __dec_obj31;
void* right_value109;
struct list_item$1charph* litem_74;
char* __dec_obj32;
void* right_value110;
struct list_item$1charph* litem_75;
char* __dec_obj33;
struct list$1charph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value109 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
right_value110 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1charph*));
                        if(self->len==0) {
                            litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
                            come_call_finalizer3(right_value108,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_73->prev=((void*)0);
                            litem_73->next=((void*)0);
                            __dec_obj31=litem_73->item;
                            litem_73->item=(char*)come_increment_ref_count(item);
                            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_73;
                            self->head=litem_73;
                        }
                        else {
                            if(self->len==1) {
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value109=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
                                come_call_finalizer3(right_value109,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_74->prev=self->head;
                                litem_74->next=((void*)0);
                                __dec_obj32=litem_74->item;
                                litem_74->item=(char*)come_increment_ref_count(item);
                                __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_74;
                                self->head->next=litem_74;
                            }
                            else {
                                litem_75=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value110=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
                                come_call_finalizer3(right_value110,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_75->prev=self->tail;
                                litem_75->next=((void*)0);
                                __dec_obj33=litem_75->item;
                                litem_75->item=(char*)come_increment_ref_count(item);
                                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
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

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
struct sType* __dec_obj40;
struct tuple1$1sTypeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj40=self->v1;
            self->v1=(struct sType*)come_increment_ref_count(v1);
            come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 0, 0, (void*)0);
            __result65__ = __result_obj__ = self;
            come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result65__;
            come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_80;
struct list_item$1sTypeph* prev_it_81;
struct list$1sTypeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_80, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_81, 0, sizeof(struct list_item$1sTypeph*));
            it_80=self->head;
            while(it_80!=((void*)0)) {
                prev_it_81=it_80;
                it_80=it_80->next;
                come_call_finalizer3(prev_it_81,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result66__ = __result_obj__ = self;
            return __result66__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
struct sType* result_83;
struct sType* __result67__;
struct sType* __result68__;
struct sType* result_84;
struct sType* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_83, 0, sizeof(struct sType*));
memset(&result_84, 0, sizeof(struct sType*));
            if(self==((void*)0)) {
                memset(&result_83,0,sizeof(struct sType*));
                __result67__ = __result_obj__ = result_83;
                return __result67__;
            }
            self->it=self->head;
            if(self->it) {
                __result68__ = __result_obj__ = self->it->item;
                return __result68__;
            }
            memset(&result_84,0,sizeof(struct sType*));
            __result69__ = __result_obj__ = result_84;
            return __result69__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
            return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
struct sType* result_86;
struct sType* __result70__;
struct sType* __result71__;
struct sType* result_87;
struct sType* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_86, 0, sizeof(struct sType*));
memset(&result_87, 0, sizeof(struct sType*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_86,0,sizeof(struct sType*));
                __result70__ = __result_obj__ = result_86;
                return __result70__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result71__ = __result_obj__ = self->it->item;
                return __result71__;
            }
            memset(&result_87,0,sizeof(struct sType*));
            __result72__ = __result_obj__ = result_87;
            return __result72__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* right_value123;
struct list_item$1sTypeph* litem_89;
struct sType* __dec_obj42;
void* right_value124;
struct list_item$1sTypeph* litem_90;
struct sType* __dec_obj43;
void* right_value125;
struct list_item$1sTypeph* litem_91;
struct sType* __dec_obj44;
struct list$1sTypeph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&litem_89, 0, sizeof(struct list_item$1sTypeph*));
right_value124 = (void*)0;
memset(&litem_90, 0, sizeof(struct list_item$1sTypeph*));
right_value125 = (void*)0;
memset(&litem_91, 0, sizeof(struct list_item$1sTypeph*));
                if(self->len==0) {
                    litem_89=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value123=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 219, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value123,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_89->prev=((void*)0);
                    litem_89->next=((void*)0);
                    __dec_obj42=litem_89->item;
                    litem_89->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_89;
                    self->head=litem_89;
                }
                else {
                    if(self->len==1) {
                        litem_90=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value124=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 229, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value124,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_90->prev=self->head;
                        litem_90->next=((void*)0);
                        __dec_obj43=litem_90->item;
                        litem_90->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_90;
                        self->head->next=litem_90;
                    }
                    else {
                        litem_91=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value125=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 239, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value125,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_91->prev=self->tail;
                        litem_91->next=((void*)0);
                        __dec_obj44=litem_91->item;
                        litem_91->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_91;
                        self->tail=litem_91;
                    }
                }
                self->len++;
                __result73__ = __result_obj__ = self;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result73__;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
struct list_item$1sTypeph* it_101;
int i_102;
struct sType* __result74__;
struct sType* default_value_103;
struct sType* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_101, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_102, 0, sizeof(int));
memset(&default_value_103, 0, sizeof(struct sType*));
                if(position<0) {
                    position+=self->len;
                }
                it_101=self->head;
                i_102=0;
                while(it_101!=((void*)0)) {
                    if(position==i_102) {
                        __result74__ = __result_obj__ = it_101->item;
                        return __result74__;
                    }
                    it_101=it_101->next;
                    i_102++;
                }
                memset(&default_value_103,0,sizeof(struct sType*));
                __result75__ = __result_obj__ = default_value_103;
                come_call_finalizer3(default_value_103,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result75__;
                come_call_finalizer3(default_value_103,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
                if(self==((void*)0)) {
                    return 0;
                }
                return self->len;
}

struct sType* solve_method_generics(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value136;
struct sType* result_123;
struct sClass* klass_124;
int generics_number_125;
void* right_value137;
struct list$1sNodeph* array_num_126;
_Bool immutable__127;
int pointer_num_128;
_Bool heap_129;
_Bool guard__130;
_Bool no_heap_131;
_Bool no_calling_destructor_132;
_Bool null_value_133;
void* right_value138;
struct sType* __dec_obj49;
struct list$1sNodeph* __dec_obj50;
struct sType* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
memset(&result_123, 0, sizeof(struct sType*));
memset(&klass_124, 0, sizeof(struct sClass*));
memset(&generics_number_125, 0, sizeof(int));
right_value137 = (void*)0;
memset(&array_num_126, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__127, 0, sizeof(_Bool));
memset(&pointer_num_128, 0, sizeof(int));
memset(&heap_129, 0, sizeof(_Bool));
memset(&guard__130, 0, sizeof(_Bool));
memset(&no_heap_131, 0, sizeof(_Bool));
memset(&no_calling_destructor_132, 0, sizeof(_Bool));
memset(&null_value_133, 0, sizeof(_Bool));
right_value138 = (void*)0;
    result_123=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(type))));
    come_call_finalizer3(right_value136,sType_finalize, 0, 1, 0, 0, __result_obj__);
    klass_124=type->mClass;
    if(klass_124->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0) {
        generics_number_125=klass_124->mMethodGenericsNum;
        if(generics_number_125>=list$1sTypeph_length(info->method_generics_types)) {
            err_msg(info,"invalid method generics parametor number. %d %d",generics_number_125,list$1sTypeph_length(info->method_generics_types));
            exit(2);
        }
        array_num_126=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value137=list$1sNodephp_clone(type->mArrayNum))));
        come_call_finalizer3(right_value137,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        immutable__127=type->mImmutable;
        pointer_num_128=type->mPointerNum;
        heap_129=type->mHeap;
        guard__130=type->mGuardValue;
        no_heap_131=type->mNoHeap;
        no_calling_destructor_132=type->mNoCallingDestructor;
        null_value_133=type->mNullValue;
        __dec_obj49=result_123;
        result_123=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_125), "04heap.c", 213, 3))))));
        come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value138,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(heap_129) {
            result_123->mHeap=heap_129;
        }
        if(guard__130) {
            result_123->mGuardValue=guard__130;
        }
        if(no_heap_131) {
            result_123->mNoHeap=(_Bool)1;
            result_123->mHeap=(_Bool)0;
        }
        if(no_calling_destructor_132) {
            result_123->mNoCallingDestructor=(_Bool)1;
        }
        if(immutable__127) {
            result_123->mImmutable=immutable__127;
        }
        if(list$1sNodeph_length(array_num_126)>0) {
            __dec_obj50=result_123->mArrayNum;
            result_123->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_126);
            come_call_finalizer3(__dec_obj50,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(null_value_133) {
            result_123->mNullValue=null_value_133;
        }
        if(pointer_num_128>0) {
            result_123->mPointerNum+=pointer_num_128;
        }
        come_call_finalizer3(array_num_126,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result77__ = __result_obj__ = result_123;
    come_call_finalizer3(result_123,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result77__;
    come_call_finalizer3(result_123,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value139;
struct sType* result_134;
void* right_value140;
struct sType* __dec_obj51;
struct sType* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
memset(&result_134, 0, sizeof(struct sType*));
right_value140 = (void*)0;
    result_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_clone(type))));
    come_call_finalizer3(right_value139,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(generics_type) {
        __dec_obj51=result_134;
        result_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=solve_generics(result_134,generics_type,info))));
        come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value140,sType_finalize, 0, 1, 0, 0, __result_obj__);
    }
    __result78__ = __result_obj__ = result_134;
    come_call_finalizer3(result_134,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result78__;
    come_call_finalizer3(result_134,sType_finalize, 0, 0, 0, 0, (void*)0);
}

int get_right_value_id_from_obj(char* obj){
char* p_135;
int n_136;
int __result79__;
int __result80__;
memset(&p_135, 0, sizeof(char*));
memset(&n_136, 0, sizeof(int));
    p_135=obj;
    if(*p_135==40) {
        p_135++;
        while(*p_135!=41) {
            p_135++;
        }
        p_135++;
        if(*p_135==40) {
            p_135++;
            if(strcmp(p_135,"right_value")==0) {
                p_135+=strlen("right_value");
                if(xisdigit(*p_135)) {
                    n_136=0;
                    while(xisdigit(*p_135)) {
                        n_136=n_136*10+*p_135-48;
                        p_135++;
                    }
                    __result79__ = n_136;
                    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result79__;
                }
            }
        }
    }
    __result80__ = -1;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result80__;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value141;
char* __result81__;
void* right_value142;
char* __result82__;
void* right_value143;
struct sRightValueObject* new_value_137;
struct sType* __dec_obj52;
void* right_value144;
char* __dec_obj53;
void* right_value145;
char* __dec_obj54;
void* right_value149;
char* buf_141;
void* right_value150;
void* right_value151;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
memset(&new_value_137, 0, sizeof(struct sRightValueObject*));
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value149 = (void*)0;
memset(&buf_141, 0, sizeof(char*));
right_value150 = (void*)0;
right_value151 = (void*)0;
    if(gComeGC||gComeC) {
        __result81__ = __result_obj__ = ((char*)(right_value141=__builtin_string(obj)));
        come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result81__;
    }
    if(info->no_output_come_code) {
        __result82__ = __result_obj__ = ((char*)(right_value142=__builtin_string("")));
        come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result82__;
    }
    new_value_137=(struct sRightValueObject*)come_increment_ref_count(((struct sRightValueObject*)(right_value143=(struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 296, "sRightValueObject"))));
    come_call_finalizer3(right_value143,sRightValueObject_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj52=new_value_137->mType;
    new_value_137->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
    new_value_137->mFreed=(_Bool)0;
    new_value_137->mID=gRightValueNum;
    __dec_obj53=new_value_137->mVarName;
    new_value_137->mVarName=(char*)come_increment_ref_count(((char*)(right_value144=xsprintf("right_value%d",gRightValueNum++))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj54=new_value_137->mFunName;
    new_value_137->mFunName=(char*)come_increment_ref_count(((char*)(right_value145=string_clone(info->come_fun->mName))));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    new_value_137->mBlockLevel=info->block_level;
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_137));
    buf_141=(char*)come_increment_ref_count(((char*)(right_value149=xsprintf("void* right_value%d;\n",gRightValueNum-1))));
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,buf_141);
    add_come_code_at_function_head2(info,"right_value%d = (void*)0;\n",gRightValueNum-1);
    __result84__ = __result_obj__ = ((char*)(right_value151=xsprintf("((%s)(%s=%s))",((char*)(right_value150=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info))),new_value_137->mVarName,obj)));
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(new_value_137,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    buf_141 = come_decrement_ref_count2(buf_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result84__;
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(new_value_137,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    buf_141 = come_decrement_ref_count2(buf_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__;
void* right_value146;
struct list_item$1sRightValueObjectph* litem_138;
struct sRightValueObject* __dec_obj55;
void* right_value147;
struct list_item$1sRightValueObjectph* litem_139;
struct sRightValueObject* __dec_obj56;
void* right_value148;
struct list_item$1sRightValueObjectph* litem_140;
struct sRightValueObject* __dec_obj57;
struct list$1sRightValueObjectph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
memset(&litem_138, 0, sizeof(struct list_item$1sRightValueObjectph*));
right_value147 = (void*)0;
memset(&litem_139, 0, sizeof(struct list_item$1sRightValueObjectph*));
right_value148 = (void*)0;
memset(&litem_140, 0, sizeof(struct list_item$1sRightValueObjectph*));
        if(self->len==0) {
            litem_138=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value146=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./neo-c.h", 219, "list_item$1sRightValueObjectph"))));
            come_call_finalizer3(right_value146,list_item$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_138->prev=((void*)0);
            litem_138->next=((void*)0);
            __dec_obj55=litem_138->item;
            litem_138->item=(struct sRightValueObject*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj55,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_138;
            self->head=litem_138;
        }
        else {
            if(self->len==1) {
                litem_139=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value147=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./neo-c.h", 229, "list_item$1sRightValueObjectph"))));
                come_call_finalizer3(right_value147,list_item$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_139->prev=self->head;
                litem_139->next=((void*)0);
                __dec_obj56=litem_139->item;
                litem_139->item=(struct sRightValueObject*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj56,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_139;
                self->head->next=litem_139;
            }
            else {
                litem_140=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value148=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./neo-c.h", 239, "list_item$1sRightValueObjectph"))));
                come_call_finalizer3(right_value148,list_item$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_140->prev=self->tail;
                litem_140->next=((void*)0);
                __dec_obj57=litem_140->item;
                litem_140->item=(struct sRightValueObject*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj57,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_140;
                self->tail=litem_140;
            }
        }
        self->len++;
        __result83__ = __result_obj__ = self;
        come_call_finalizer3(item,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        return __result83__;
        come_call_finalizer3(item,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
                if(self!=((void*)0)&&self->item!=((void*)0)) {
                    come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                }
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
int i_142;
struct list$1sRightValueObjectph* o2_saved_143;
struct sRightValueObject* it_146;
memset(&i_142, 0, sizeof(int));
memset(&o2_saved_143, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_146, 0, sizeof(struct sRightValueObject*));
    if(gComeGC||gComeC) {
        return;
    }
    i_142=0;
    for(    o2_saved_143=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_146=list$1sRightValueObjectph_begin((o2_saved_143));    !list$1sRightValueObjectph_end((o2_saved_143));    it_146=list$1sRightValueObjectph_next((o2_saved_143))    ){
        if(it_146->mID==right_value_num) {
            break;
        }
        i_142++;
    }
    come_call_finalizer3(o2_saved_143,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1sRightValueObjectph_delete(info->right_value_objects,i_142,i_142+1);
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct sRightValueObject* result_144;
struct sRightValueObject* __result85__;
struct sRightValueObject* __result86__;
struct sRightValueObject* result_145;
struct sRightValueObject* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_144, 0, sizeof(struct sRightValueObject*));
memset(&result_145, 0, sizeof(struct sRightValueObject*));
        if(self==((void*)0)) {
            memset(&result_144,0,sizeof(struct sRightValueObject*));
            __result85__ = __result_obj__ = result_144;
            return __result85__;
        }
        self->it=self->head;
        if(self->it) {
            __result86__ = __result_obj__ = self->it->item;
            return __result86__;
        }
        memset(&result_145,0,sizeof(struct sRightValueObject*));
        __result87__ = __result_obj__ = result_145;
        return __result87__;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
        return self==((void*)0)||self->it==((void*)0);
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct sRightValueObject* result_147;
struct sRightValueObject* __result88__;
struct sRightValueObject* __result89__;
struct sRightValueObject* result_148;
struct sRightValueObject* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_147, 0, sizeof(struct sRightValueObject*));
memset(&result_148, 0, sizeof(struct sRightValueObject*));
        if(self==((void*)0)||self->it==((void*)0)) {
            memset(&result_147,0,sizeof(struct sRightValueObject*));
            __result88__ = __result_obj__ = result_147;
            return __result88__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result89__ = __result_obj__ = self->it->item;
            return __result89__;
        }
        memset(&result_148,0,sizeof(struct sRightValueObject*));
        __result90__ = __result_obj__ = result_148;
        return __result90__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_149;
struct list_item$1sRightValueObjectph* prev_it_150;
memset(&it_149, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_150, 0, sizeof(struct list_item$1sRightValueObjectph*));
        it_149=self->head;
        while(it_149!=((void*)0)) {
            prev_it_150=it_149;
            it_149=it_149->next;
            come_call_finalizer3(prev_it_150,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__;
int tmp_151;
struct list$1sRightValueObjectph* __result91__;
struct list_item$1sRightValueObjectph* it_154;
int i_155;
struct list_item$1sRightValueObjectph* prev_it_156;
struct list_item$1sRightValueObjectph* it_157;
int i_158;
struct list_item$1sRightValueObjectph* prev_it_159;
struct list_item$1sRightValueObjectph* it_160;
struct list_item$1sRightValueObjectph* head_prev_it_161;
struct list_item$1sRightValueObjectph* tail_it_162;
int i_163;
struct list_item$1sRightValueObjectph* prev_it_164;
struct list$1sRightValueObjectph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_151, 0, sizeof(int));
memset(&it_154, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_155, 0, sizeof(int));
memset(&prev_it_156, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_157, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_158, 0, sizeof(int));
memset(&prev_it_159, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_160, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&head_prev_it_161, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&tail_it_162, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_163, 0, sizeof(int));
memset(&prev_it_164, 0, sizeof(struct list_item$1sRightValueObjectph*));
        if(head<0) {
            head+=self->len;
        }
        if(tail<0) {
            tail+=self->len+1;
        }
        if(head>tail) {
            tmp_151=tail;
            tail=head;
            head=tmp_151;
        }
        if(head<0) {
            head=0;
        }
        if(tail>self->len) {
            tail=self->len;
        }
        if(head==tail) {
            __result91__ = __result_obj__ = self;
            return __result91__;
        }
        if(head==0&&tail==self->len) {
            list$1sRightValueObjectph_reset(self);
        }
        else {
            if(head==0) {
                it_154=self->head;
                i_155=0;
                while(it_154!=((void*)0)) {
                    if(i_155<tail) {
                        prev_it_156=it_154;
                        it_154=it_154->next;
                        i_155++;
                        come_call_finalizer3(prev_it_156,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        if(i_155==tail) {
                            self->head=it_154;
                            self->head->prev=((void*)0);
                            break;
                        }
                        else {
                            it_154=it_154->next;
                            i_155++;
                        }
                    }
                }
            }
            else {
                if(tail==self->len) {
                    it_157=self->head;
                    i_158=0;
                    while(it_157!=((void*)0)) {
                        if(i_158==head) {
                            self->tail=it_157->prev;
                            self->tail->next=((void*)0);
                        }
                        if(i_158>=head) {
                            prev_it_159=it_157;
                            it_157=it_157->next;
                            i_158++;
                            come_call_finalizer3(prev_it_159,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                            self->len--;
                        }
                        else {
                            it_157=it_157->next;
                            i_158++;
                        }
                    }
                }
                else {
                    it_160=self->head;
                    head_prev_it_161=((void*)0);
                    tail_it_162=((void*)0);
                    i_163=0;
                    while(it_160!=((void*)0)) {
                        if(i_163==head) {
                            head_prev_it_161=it_160->prev;
                        }
                        if(i_163==tail) {
                            tail_it_162=it_160;
                        }
                        if(i_163>=head&&i_163<tail) {
                            prev_it_164=it_160;
                            it_160=it_160->next;
                            i_163++;
                            come_call_finalizer3(prev_it_164,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                            self->len--;
                        }
                        else {
                            it_160=it_160->next;
                            i_163++;
                        }
                    }
                    if(head_prev_it_161!=((void*)0)) {
                        head_prev_it_161->next=tail_it_162;
                    }
                    if(tail_it_162!=((void*)0)) {
                        tail_it_162->prev=head_prev_it_161;
                    }
                }
            }
        }
        __result93__ = __result_obj__ = self;
        return __result93__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_152;
struct list_item$1sRightValueObjectph* prev_it_153;
struct list$1sRightValueObjectph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_152, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_153, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_152=self->head;
                while(it_152!=((void*)0)) {
                    prev_it_153=it_152;
                    it_152=it_152->next;
                    come_call_finalizer3(prev_it_153,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result92__ = __result_obj__ = self;
                return __result92__;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
void* right_value152;
char* __result94__;
struct sClass* klass_165;
void* right_value153;
char* type_name_166;
void* right_value154;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
memset(&klass_165, 0, sizeof(struct sClass*));
right_value153 = (void*)0;
memset(&type_name_166, 0, sizeof(char*));
right_value154 = (void*)0;
    if(gComeGC||gComeC) {
        __result94__ = __result_obj__ = ((char*)(right_value152=__builtin_string(obj)));
        right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result94__;
    }
    klass_165=type->mClass;
    type_name_166=(char*)come_increment_ref_count(((char*)(right_value153=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result95__ = __result_obj__ = ((char*)(right_value154=xsprintf("(%s)come_increment_ref_count(%s)",type_name_166,obj)));
    type_name_166 = come_decrement_ref_count2(type_name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result95__;
    type_name_166 = come_decrement_ref_count2(type_name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_){
struct list$1CVALUEph* stack_saved_167;
struct list$1sRightValueObjectph* right_value_objects_168;
struct sClass* klass_169;
void* right_value155;
char* name_171;
void* right_value156;
_Bool no_decrement_172;
_Bool no_free_173;
void* right_value157;
char* c_value_174;
struct sClass* klass_175;
char* class_name_176;
char* fun_name_177;
void* right_value158;
struct sType* type2_178;
void* right_value159;
char* fun_name2_179;
struct sFun* finalizer_180;
void* right_value160;
char* none_generics_name_184;
void* right_value161;
char* generics_fun_name_185;
struct sGenericsFun* generics_fun_186;
int i_190;
void* right_value162;
char* new_fun_name_191;
void* right_value163;
char* __dec_obj58;
void* right_value164;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_192;
char* new_fun_name_193;
char* __dec_obj59;
void* right_value165;
char* type_name_194;
void* right_value166;
void* right_value167;
char* type_name_195;
void* right_value168;
void* right_value169;
struct list$1sRightValueObjectph* __dec_obj60;
struct list$1CVALUEph* __dec_obj61;
memset(&stack_saved_167, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_168, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_169, 0, sizeof(struct sClass*));
right_value155 = (void*)0;
memset(&name_171, 0, sizeof(char*));
right_value156 = (void*)0;
memset(&no_decrement_172, 0, sizeof(_Bool));
memset(&no_free_173, 0, sizeof(_Bool));
right_value157 = (void*)0;
memset(&c_value_174, 0, sizeof(char*));
memset(&klass_175, 0, sizeof(struct sClass*));
memset(&class_name_176, 0, sizeof(char*));
memset(&fun_name_177, 0, sizeof(char*));
right_value158 = (void*)0;
memset(&type2_178, 0, sizeof(struct sType*));
right_value159 = (void*)0;
memset(&fun_name2_179, 0, sizeof(char*));
memset(&finalizer_180, 0, sizeof(struct sFun*));
right_value160 = (void*)0;
memset(&none_generics_name_184, 0, sizeof(char*));
right_value161 = (void*)0;
memset(&generics_fun_name_185, 0, sizeof(char*));
memset(&generics_fun_186, 0, sizeof(struct sGenericsFun*));
memset(&i_190, 0, sizeof(int));
right_value162 = (void*)0;
memset(&new_fun_name_191, 0, sizeof(char*));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
memset(&type_name_194, 0, sizeof(char*));
right_value166 = (void*)0;
right_value167 = (void*)0;
memset(&type_name_195, 0, sizeof(char*));
right_value168 = (void*)0;
right_value169 = (void*)0;
    if(gComeGC||gComeC) {
        return;
    }
    stack_saved_167=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_168=info->right_value_objects;
    klass_169=type->mClass;
    static int dec_num_170=0;
    name_171=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("__dec_obj%d",++dec_num_170))));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value156=make_define_var(type,name_171,(_Bool)0,info))));
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_come_code(info,"%s=%s;\n",name_171,obj);
    obj=name_171;
    no_decrement_172=(_Bool)0;
    no_free_173=(_Bool)0;
    if(type->mPointerNum>0) {
        c_value_174=(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string(obj))));
        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        klass_175=type->mClass;
        class_name_176=klass_175->mName;
        fun_name_177="finalize";
        type2_178=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_clone(type))));
        come_call_finalizer3(right_value158,sType_finalize, 0, 1, 0, 0, (void*)0);
        type2_178->mHeap=(_Bool)0;
        fun_name2_179=(char*)come_increment_ref_count(((char*)(right_value159=create_method_name(type,(_Bool)0,fun_name_177,info,(_Bool)1))));
        right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(type->mNoSolvedGenericsType->v1) {
            type=type->mNoSolvedGenericsType->v1;
        }
        finalizer_180=((void*)0);
        if(list$1sTypeph_length(type->mGenericsTypes)>0) {
            finalizer_180=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_179);
            if(finalizer_180==((void*)0)) {
                none_generics_name_184=(char*)come_increment_ref_count(((char*)(right_value160=get_none_generics_name(type2_178->mClass->mName))));
                right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                generics_fun_name_185=(char*)come_increment_ref_count(((char*)(right_value161=xsprintf("%s_%s",none_generics_name_184,fun_name_177))));
                right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                generics_fun_186=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_185);
                if(generics_fun_186) {
                    if(!create_generics_fun((char*)come_increment_ref_count(fun_name2_179),generics_fun_186,type,info)) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_180=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_179);
                }
                none_generics_name_184 = come_decrement_ref_count2(none_generics_name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_185 = come_decrement_ref_count2(generics_fun_name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_190=128-1;            i_190>=1;            i_190--            ){
                new_fun_name_191=(char*)come_increment_ref_count(((char*)(right_value162=xsprintf("%s_v%d",fun_name2_179,i_190))));
                right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                finalizer_180=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_191);
                if(finalizer_180) {
                    __dec_obj58=fun_name2_179;
                    fun_name2_179=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(new_fun_name_191))));
                    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    new_fun_name_191 = come_decrement_ref_count2(new_fun_name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_191 = come_decrement_ref_count2(new_fun_name_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(finalizer_180==((void*)0)) {
                finalizer_180=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_179);
            }
        }
        if(finalizer_180==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
            multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value164=create_finalizer_automatically(type,fun_name_177,info)));
            fun_192=multiple_assign_var1->v1;
            new_fun_name_193=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            come_call_finalizer3(right_value164,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj59=fun_name2_179;
            fun_name2_179=(char*)come_increment_ref_count(new_fun_name_193);
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_180=fun_192;
            new_fun_name_193 = come_decrement_ref_count2(new_fun_name_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(finalizer_180!=((void*)0)) {
            if(klass_175->mProtocol&&type->mPointerNum==1) {
                type_name_194=(char*)come_increment_ref_count(((char*)(right_value165=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(c_value_174) {
                    add_come_last_code2(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_179,c_value_174,type_name_194,c_value_174,type_name_194,c_value_174,type->mAllocaValue,no_decrement_172,no_free_173,force_delete_);
                }
                type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(c_value_174) {
                    add_come_last_code2(info,((char*)(right_value166=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_174,fun_name2_179,type->mAllocaValue,no_decrement_172,no_free_173,force_delete_))));
                    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
            }
        }
        else {
            if(klass_175->mProtocol&&type->mPointerNum==1) {
                type_name_195=(char*)come_increment_ref_count(((char*)(right_value167=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_last_code2(info,((char*)(right_value168=xsprintf("if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0, (void*)0); }\n",name_171,name_171,name_171,type_name_195,name_171,type_name_195,name_171))));
                right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                type_name_195 = come_decrement_ref_count2(type_name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_last_code2(info,((char*)(right_value169=xsprintf("%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, 0,0,0, (void*)0);\n",name_171,name_171))));
                right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
        }
        c_value_174 = come_decrement_ref_count2(c_value_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_178,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name2_179 = come_decrement_ref_count2(fun_name2_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj60=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_168);
    come_call_finalizer3(__dec_obj60,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj61=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_167);
    come_call_finalizer3(__dec_obj61,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_167,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    name_171 = come_decrement_ref_count2(name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_181;
unsigned int hash_182;
unsigned int it_183;
struct sFun* __result96__;
struct sFun* __result97__;
struct sFun* __result98__;
struct sFun* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_181, 0, sizeof(struct sFun*));
memset(&hash_182, 0, sizeof(unsigned int));
memset(&it_183, 0, sizeof(unsigned int));
                memset(&default_value_181,0,sizeof(struct sFun*));
                hash_182=string_get_hash_key(((char*)key))%self->size;
                it_183=hash_182;
                while((_Bool)1) {
                    if(self->item_existance[it_183]) {
                        if(string_equals(self->keys[it_183],key)) {
                            __result96__ = __result_obj__ = self->items[it_183];
                            come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            return __result96__;
                        }
                        it_183++;
                        if(it_183>=self->size) {
                            it_183=0;
                        }
                        else {
                            if(it_183==hash_182) {
                                __result97__ = __result_obj__ = default_value_181;
                                come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result97__;
                            }
                        }
                    }
                    else {
                        __result98__ = __result_obj__ = default_value_181;
                        come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result98__;
                    }
                }
                __result99__ = __result_obj__ = default_value_181;
                come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result99__;
                come_call_finalizer3(default_value_181,sFun_finalize, 0, 0, 0, 0, (void*)0);
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

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__;
struct sGenericsFun* default_value_187;
unsigned int hash_188;
unsigned int it_189;
struct sGenericsFun* __result100__;
struct sGenericsFun* __result101__;
struct sGenericsFun* __result102__;
struct sGenericsFun* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_187, 0, sizeof(struct sGenericsFun*));
memset(&hash_188, 0, sizeof(unsigned int));
memset(&it_189, 0, sizeof(unsigned int));
                    memset(&default_value_187,0,sizeof(struct sGenericsFun*));
                    hash_188=string_get_hash_key(((char*)key))%self->size;
                    it_189=hash_188;
                    while((_Bool)1) {
                        if(self->item_existance[it_189]) {
                            if(string_equals(self->keys[it_189],key)) {
                                __result100__ = __result_obj__ = self->items[it_189];
                                come_call_finalizer3(default_value_187,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                                return __result100__;
                            }
                            it_189++;
                            if(it_189>=self->size) {
                                it_189=0;
                            }
                            else {
                                if(it_189==hash_188) {
                                    __result101__ = __result_obj__ = default_value_187;
                                    come_call_finalizer3(default_value_187,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result101__;
                                }
                            }
                        }
                        else {
                            __result102__ = __result_obj__ = default_value_187;
                            come_call_finalizer3(default_value_187,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result102__;
                        }
                    }
                    __result103__ = __result_obj__ = default_value_187;
                    come_call_finalizer3(default_value_187,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result103__;
                    come_call_finalizer3(default_value_187,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
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

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_196;
struct list_item$1sRightValueObjectph* prev_it_197;
memset(&it_196, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_197, 0, sizeof(struct list_item$1sRightValueObjectph*));
        it_196=self->head;
        while(it_196!=((void*)0)) {
            prev_it_197=it_196;
            it_196=it_196->next;
            come_call_finalizer3(prev_it_197,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_198;
struct list_item$1CVALUEph* prev_it_199;
memset(&it_198, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_199, 0, sizeof(struct list_item$1CVALUEph*));
        it_198=self->head;
        while(it_198!=((void*)0)) {
            prev_it_199=it_198;
            it_198=it_198->next;
            come_call_finalizer3(prev_it_199,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
                if(self!=((void*)0)&&self->item!=((void*)0)) {
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sRightValueObjectp* it_200;
struct list_item$1sRightValueObjectp* prev_it_201;
memset(&it_200, 0, sizeof(struct list_item$1sRightValueObjectp*));
memset(&prev_it_201, 0, sizeof(struct list_item$1sRightValueObjectp*));
                                it_200=self->head;
                                while(it_200!=((void*)0)) {
                                    prev_it_201=it_200;
                                    it_200=it_200->next;
                                    come_call_finalizer3(prev_it_201,list_item$1sRightValueObjectpp_finalize, 0, 0, 0, 0, (void*)0);
                                }
}

static void list_item$1sRightValueObjectpp_finalize(struct list_item$1sRightValueObjectp* self){
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_202;
struct list_item$1CVALUEph* prev_it_203;
memset(&it_202, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_203, 0, sizeof(struct list_item$1CVALUEph*));
        it_202=self->head;
        while(it_202!=((void*)0)) {
            prev_it_203=it_202;
            it_202=it_202->next;
            come_call_finalizer3(prev_it_203,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
struct list$1CVALUEph* stack_saved_204;
struct list$1sRightValueObjectph* right_value_objects_205;
struct sType* type_before_206;
void* right_value170;
char* c_value_207;
struct sClass* klass_208;
char* class_name_209;
char* fun_name_210;
void* right_value171;
struct sType* type2_211;
void* right_value172;
char* fun_name2_212;
struct sFun* finalizer_213;
void* right_value173;
char* none_generics_name_214;
void* right_value174;
char* generics_fun_name_215;
struct sGenericsFun* generics_fun_216;
int i_217;
void* right_value175;
char* new_fun_name_218;
void* right_value176;
char* __dec_obj62;
void* right_value177;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun_219;
char* new_fun_name_220;
char* __dec_obj63;
void* right_value178;
char* type_name_221;
void* right_value179;
void* right_value180;
void* right_value181;
void* right_value182;
struct list$1tuple2$2charphsTypephph* o2_saved_222;
struct tuple2$2charphsTypeph* it_225;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_228;
struct sType* field_type_229;
void* right_value183;
void* right_value184;
char* obj_230;
struct list$1tuple2$2charphsTypephph* o2_saved_233;
struct tuple2$2charphsTypeph* it_234;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* name_235;
struct sType* field_type_236;
void* right_value185;
void* right_value186;
char* obj_237;
void* right_value187;
char* type_name_238;
void* right_value188;
char* c_value_239;
struct sClass* klass_240;
char* class_name_241;
char* fun_name_242;
void* right_value189;
struct sType* type2_243;
void* right_value190;
char* fun_name2_244;
struct sFun* finalizer_245;
void* right_value191;
char* none_generics_name_246;
void* right_value192;
char* generics_fun_name_247;
struct sGenericsFun* generics_fun_248;
int i_249;
void* right_value193;
char* new_fun_name_250;
void* right_value194;
char* __dec_obj64;
void* right_value195;
struct tuple2$2sFunpcharph* multiple_assign_var5;
struct sFun* fun_251;
char* new_fun_name_252;
char* __dec_obj65;
void* right_value196;
char* type_name_253;
void* right_value197;
void* right_value198;
void* right_value199;
void* right_value200;
struct list$1tuple2$2charphsTypephph* o2_saved_254;
struct tuple2$2charphsTypeph* it_255;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* name_256;
struct sType* field_type_257;
void* right_value201;
void* right_value202;
char* obj_258;
struct list$1tuple2$2charphsTypephph* o2_saved_259;
struct tuple2$2charphsTypeph* it_260;
struct tuple2$2charphsTypeph* multiple_assign_var7;
char* name_261;
struct sType* field_type_262;
void* right_value203;
void* right_value204;
char* obj_263;
void* right_value205;
char* type_name_264;
struct list$1sRightValueObjectph* __dec_obj66;
struct list$1CVALUEph* __dec_obj67;
memset(&stack_saved_204, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_205, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&type_before_206, 0, sizeof(struct sType*));
right_value170 = (void*)0;
memset(&c_value_207, 0, sizeof(char*));
memset(&klass_208, 0, sizeof(struct sClass*));
memset(&class_name_209, 0, sizeof(char*));
memset(&fun_name_210, 0, sizeof(char*));
right_value171 = (void*)0;
memset(&type2_211, 0, sizeof(struct sType*));
right_value172 = (void*)0;
memset(&fun_name2_212, 0, sizeof(char*));
memset(&finalizer_213, 0, sizeof(struct sFun*));
right_value173 = (void*)0;
memset(&none_generics_name_214, 0, sizeof(char*));
right_value174 = (void*)0;
memset(&generics_fun_name_215, 0, sizeof(char*));
memset(&generics_fun_216, 0, sizeof(struct sGenericsFun*));
memset(&i_217, 0, sizeof(int));
right_value175 = (void*)0;
memset(&new_fun_name_218, 0, sizeof(char*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&type_name_221, 0, sizeof(char*));
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
memset(&o2_saved_222, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_225, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value183 = (void*)0;
right_value184 = (void*)0;
memset(&obj_230, 0, sizeof(char*));
memset(&o2_saved_233, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_234, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value185 = (void*)0;
right_value186 = (void*)0;
memset(&obj_237, 0, sizeof(char*));
right_value187 = (void*)0;
memset(&type_name_238, 0, sizeof(char*));
right_value188 = (void*)0;
memset(&c_value_239, 0, sizeof(char*));
memset(&klass_240, 0, sizeof(struct sClass*));
memset(&class_name_241, 0, sizeof(char*));
memset(&fun_name_242, 0, sizeof(char*));
right_value189 = (void*)0;
memset(&type2_243, 0, sizeof(struct sType*));
right_value190 = (void*)0;
memset(&fun_name2_244, 0, sizeof(char*));
memset(&finalizer_245, 0, sizeof(struct sFun*));
right_value191 = (void*)0;
memset(&none_generics_name_246, 0, sizeof(char*));
right_value192 = (void*)0;
memset(&generics_fun_name_247, 0, sizeof(char*));
memset(&generics_fun_248, 0, sizeof(struct sGenericsFun*));
memset(&i_249, 0, sizeof(int));
right_value193 = (void*)0;
memset(&new_fun_name_250, 0, sizeof(char*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
memset(&type_name_253, 0, sizeof(char*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
right_value200 = (void*)0;
memset(&o2_saved_254, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_255, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&obj_258, 0, sizeof(char*));
memset(&o2_saved_259, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_260, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value203 = (void*)0;
right_value204 = (void*)0;
memset(&obj_263, 0, sizeof(char*));
right_value205 = (void*)0;
memset(&type_name_264, 0, sizeof(char*));
    if(gComeGC||gComeC) {
        return;
    }
    stack_saved_204=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_205=info->right_value_objects;
    type_before_206=type;
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(type->mPointerNum>0||type->mClass->mProtocol||list$1sTypeph_length(type->mGenericsTypes)>0||(info->come_fun->mCloner&&ret_value)) {
        if(force_delete_) {
            c_value_207=(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(obj))));
            right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            klass_208=type->mClass;
            class_name_209=klass_208->mName;
            fun_name_210="force_finalize";
            type2_211=(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=sType_clone(type))));
            come_call_finalizer3(right_value171,sType_finalize, 0, 1, 0, 0, (void*)0);
            type2_211->mHeap=(_Bool)0;
            fun_name2_212=(char*)come_increment_ref_count(((char*)(right_value172=create_method_name(type,(_Bool)0,fun_name_210,info,(_Bool)1))));
            right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            finalizer_213=((void*)0);
            if(list$1sTypeph_length(type->mGenericsTypes)>0) {
                finalizer_213=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_212);
                if(finalizer_213==((void*)0)) {
                    none_generics_name_214=(char*)come_increment_ref_count(((char*)(right_value173=get_none_generics_name(type2_211->mClass->mName))));
                    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    generics_fun_name_215=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("%s_%s",none_generics_name_214,fun_name_210))));
                    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    generics_fun_216=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_215);
                    if(generics_fun_216) {
                        if(!create_generics_fun((char*)come_increment_ref_count(fun_name2_212),generics_fun_216,type,info)) {
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            exit(2);
                        }
                        finalizer_213=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_212);
                    }
                    none_generics_name_214 = come_decrement_ref_count2(none_generics_name_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_215 = come_decrement_ref_count2(generics_fun_name_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                for(                i_217=128-1;                i_217>=1;                i_217--                ){
                    new_fun_name_218=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("%s_v%d",fun_name2_212,i_217))));
                    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    finalizer_213=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_218);
                    if(finalizer_213) {
                        __dec_obj62=fun_name2_212;
                        fun_name2_212=(char*)come_increment_ref_count(((char*)(right_value176=__builtin_string(new_fun_name_218))));
                        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        new_fun_name_218 = come_decrement_ref_count2(new_fun_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_218 = come_decrement_ref_count2(new_fun_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(finalizer_213==((void*)0)) {
                    finalizer_213=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_212);
                }
            }
            if(finalizer_213==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value177=create_force_finalizer_automatically(type,fun_name_210,info)));
                fun_219=multiple_assign_var2->v1;
                new_fun_name_220=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(right_value177,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj63=fun_name2_212;
                fun_name2_212=(char*)come_increment_ref_count(new_fun_name_220);
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                finalizer_213=fun_219;
                new_fun_name_220 = come_decrement_ref_count2(new_fun_name_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(finalizer_213!=((void*)0)) {
                if(klass_208->mProtocol&&type->mPointerNum==1) {
                    type_name_221=(char*)come_increment_ref_count(((char*)(right_value178=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    if(c_value_207) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s),\n",fun_name2_212,c_value_207,type_name_221,c_value_207,type_name_221,c_value_207,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s);\n",fun_name2_212,c_value_207,type_name_221,c_value_207,type_name_221,c_value_207,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_212,c_value_207,type_name_221,c_value_207,type_name_221,c_value_207,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_212,c_value_207,type_name_221,c_value_207,type_name_221,c_value_207,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_221 = come_decrement_ref_count2(type_name_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(c_value_207) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,((char*)(right_value179=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s),\n",c_value_207,fun_name2_212,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__"))));
                                right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(right_value180=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s);\n",c_value_207,fun_name2_212,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__"))));
                                right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,((char*)(right_value181=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0),\n",c_value_207,fun_name2_212,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(right_value182=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_207,fun_name2_212,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                    }
                }
            }
            else {
                if(klass_208->mStruct&&type->mPointerNum==0) {
                    for(                    o2_saved_222=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_208->mFields)),it_225=list$1tuple2$2charphsTypephph_begin((o2_saved_222));                    !list$1tuple2$2charphsTypephph_end((o2_saved_222));                    it_225=list$1tuple2$2charphsTypephph_next((o2_saved_222))                    ){
                        multiple_assign_var3=it_225;
                        name_228=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                        field_type_229=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                        if(field_type_229->mHeap&&field_type_229->mPointerNum>0) {
                            obj_230=(char*)come_increment_ref_count(((char*)(right_value184=xsprintf("(((%s)%s).%s)",((char*)(right_value183=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_207,name_228))));
                            right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            free_object(field_type_229,obj_230,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_230 = come_decrement_ref_count2(obj_230, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_228 = come_decrement_ref_count2(name_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(field_type_229,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_222,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(klass_208->mStruct&&type->mPointerNum==1) {
                        for(                        o2_saved_233=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_208->mFields)),it_234=list$1tuple2$2charphsTypephph_begin((o2_saved_233));                        !list$1tuple2$2charphsTypephph_end((o2_saved_233));                        it_234=list$1tuple2$2charphsTypephph_next((o2_saved_233))                        ){
                            multiple_assign_var4=it_234;
                            name_235=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                            field_type_236=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                            if(field_type_236->mHeap&&field_type_236->mPointerNum>0) {
                                obj_237=(char*)come_increment_ref_count(((char*)(right_value186=xsprintf("(((%s)%s)->%s)",((char*)(right_value185=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_207,name_235))));
                                right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                free_object(field_type_236,obj_237,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_237 = come_decrement_ref_count2(obj_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_235 = come_decrement_ref_count2(name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(field_type_236,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(o2_saved_233,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                if(!type->mAllocaValue) {
                    if(klass_208->mProtocol&&type->mPointerNum==1) {
                        if(c_value_207) {
                            type_name_238=(char*)come_increment_ref_count(((char*)(right_value187=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, %s):0,\n",c_value_207,c_value_207,c_value_207,type_name_238,c_value_207,type_name_238,c_value_207,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %s); } \n",c_value_207,c_value_207,c_value_207,type_name_238,c_value_207,type_name_238,c_value_207,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0,\n",c_value_207,c_value_207,c_value_207,type_name_238,c_value_207,type_name_238,c_value_207,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_207,c_value_207,c_value_207,type_name_238,c_value_207,type_name_238,c_value_207,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_238 = come_decrement_ref_count2(type_name_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(c_value_207) {
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s),\n",c_value_207,c_value_207,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s);\n",c_value_207,c_value_207,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0),\n",c_value_207,c_value_207,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_207,c_value_207,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_207 = come_decrement_ref_count2(c_value_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_211,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name2_212 = come_decrement_ref_count2(fun_name2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            c_value_239=(char*)come_increment_ref_count(((char*)(right_value188=__builtin_string(obj))));
            right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            klass_240=type->mClass;
            class_name_241=klass_240->mName;
            fun_name_242="finalize";
            type2_243=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_clone(type))));
            come_call_finalizer3(right_value189,sType_finalize, 0, 1, 0, 0, (void*)0);
            type2_243->mHeap=(_Bool)0;
            fun_name2_244=(char*)come_increment_ref_count(((char*)(right_value190=create_method_name(type,(_Bool)0,fun_name_242,info,(_Bool)1))));
            right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            finalizer_245=((void*)0);
            if(list$1sTypeph_length(type->mGenericsTypes)>0) {
                finalizer_245=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_244);
                if(finalizer_245==((void*)0)) {
                    none_generics_name_246=(char*)come_increment_ref_count(((char*)(right_value191=get_none_generics_name(type2_243->mClass->mName))));
                    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    generics_fun_name_247=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("%s_%s",none_generics_name_246,fun_name_242))));
                    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    generics_fun_248=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_247);
                    if(generics_fun_248) {
                        if(!create_generics_fun((char*)come_increment_ref_count(fun_name2_244),generics_fun_248,type,info)) {
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            exit(2);
                        }
                        finalizer_245=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_244);
                    }
                    none_generics_name_246 = come_decrement_ref_count2(none_generics_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_247 = come_decrement_ref_count2(generics_fun_name_247, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                for(                i_249=128-1;                i_249>=1;                i_249--                ){
                    new_fun_name_250=(char*)come_increment_ref_count(((char*)(right_value193=xsprintf("%s_v%d",fun_name2_244,i_249))));
                    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    finalizer_245=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_250);
                    if(finalizer_245) {
                        __dec_obj64=fun_name2_244;
                        fun_name2_244=(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string(new_fun_name_250))));
                        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        new_fun_name_250 = come_decrement_ref_count2(new_fun_name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_250 = come_decrement_ref_count2(new_fun_name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(finalizer_245==((void*)0)) {
                    finalizer_245=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_244);
                }
            }
            if(finalizer_245==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
                multiple_assign_var5=((struct tuple2$2sFunpcharph*)(right_value195=create_finalizer_automatically(type,fun_name_242,info)));
                fun_251=multiple_assign_var5->v1;
                new_fun_name_252=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer3(right_value195,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj65=fun_name2_244;
                fun_name2_244=(char*)come_increment_ref_count(new_fun_name_252);
                __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                finalizer_245=fun_251;
                new_fun_name_252 = come_decrement_ref_count2(new_fun_name_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(finalizer_245!=((void*)0)) {
                if(klass_240->mProtocol&&type->mPointerNum==1) {
                    type_name_253=(char*)come_increment_ref_count(((char*)(right_value196=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    if(c_value_239) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s),\n",fun_name2_244,c_value_239,type_name_253,c_value_239,type_name_253,c_value_239,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s);\n",fun_name2_244,c_value_239,type_name_253,c_value_239,type_name_253,c_value_239,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_244,c_value_239,type_name_253,c_value_239,type_name_253,c_value_239,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_244,c_value_239,type_name_253,c_value_239,type_name_253,c_value_239,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_253 = come_decrement_ref_count2(type_name_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(c_value_239) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,((char*)(right_value197=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s),\n",c_value_239,fun_name2_244,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__"))));
                                right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(right_value198=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s);\n",c_value_239,fun_name2_244,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__"))));
                                right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,((char*)(right_value199=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0),\n",c_value_239,fun_name2_244,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(right_value200=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_239,fun_name2_244,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                    }
                }
            }
            else {
                if(klass_240->mStruct&&type->mPointerNum==0) {
                    for(                    o2_saved_254=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_240->mFields)),it_255=list$1tuple2$2charphsTypephph_begin((o2_saved_254));                    !list$1tuple2$2charphsTypephph_end((o2_saved_254));                    it_255=list$1tuple2$2charphsTypephph_next((o2_saved_254))                    ){
                        multiple_assign_var6=it_255;
                        name_256=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                        field_type_257=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                        if(field_type_257->mHeap&&field_type_257->mPointerNum>0) {
                            obj_258=(char*)come_increment_ref_count(((char*)(right_value202=xsprintf("(((%s)%s).%s)",((char*)(right_value201=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_239,name_256))));
                            right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            free_object(field_type_257,obj_258,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_258 = come_decrement_ref_count2(obj_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_256 = come_decrement_ref_count2(name_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(field_type_257,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_254,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(klass_240->mStruct&&type->mPointerNum==1) {
                        for(                        o2_saved_259=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_240->mFields)),it_260=list$1tuple2$2charphsTypephph_begin((o2_saved_259));                        !list$1tuple2$2charphsTypephph_end((o2_saved_259));                        it_260=list$1tuple2$2charphsTypephph_next((o2_saved_259))                        ){
                            multiple_assign_var7=it_260;
                            name_261=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                            field_type_262=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
                            if(field_type_262->mHeap&&field_type_262->mPointerNum>0) {
                                obj_263=(char*)come_increment_ref_count(((char*)(right_value204=xsprintf("(((%s)%s)->%s)",((char*)(right_value203=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_239,name_261))));
                                right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                free_object(field_type_262,obj_263,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_263 = come_decrement_ref_count2(obj_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_261 = come_decrement_ref_count2(name_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(field_type_262,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(o2_saved_259,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                if(!type->mAllocaValue) {
                    if(klass_240->mProtocol&&type->mPointerNum==1) {
                        if(c_value_239) {
                            type_name_264=(char*)come_increment_ref_count(((char*)(right_value205=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, %s):0,\n",c_value_239,c_value_239,c_value_239,type_name_264,c_value_239,type_name_264,c_value_239,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %s); } \n",c_value_239,c_value_239,c_value_239,type_name_264,c_value_239,type_name_264,c_value_239,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0,\n",c_value_239,c_value_239,c_value_239,type_name_264,c_value_239,type_name_264,c_value_239,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_239,c_value_239,c_value_239,type_name_264,c_value_239,type_name_264,c_value_239,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_264 = come_decrement_ref_count2(type_name_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(c_value_239) {
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s),\n",c_value_239,c_value_239,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s);\n",c_value_239,c_value_239,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0),\n",c_value_239,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_239,c_value_239,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_239 = come_decrement_ref_count2(c_value_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_243,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name2_244 = come_decrement_ref_count2(fun_name2_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __dec_obj66=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_205);
    come_call_finalizer3(__dec_obj66,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj67=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_204);
    come_call_finalizer3(__dec_obj67,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_204,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct tuple2$2charphsTypeph* result_223;
struct tuple2$2charphsTypeph* __result104__;
struct tuple2$2charphsTypeph* __result105__;
struct tuple2$2charphsTypeph* result_224;
struct tuple2$2charphsTypeph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_223, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_224, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(self==((void*)0)) {
                            memset(&result_223,0,sizeof(struct tuple2$2charphsTypeph*));
                            __result104__ = __result_obj__ = result_223;
                            return __result104__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result105__ = __result_obj__ = self->it->item;
                            return __result105__;
                        }
                        memset(&result_224,0,sizeof(struct tuple2$2charphsTypeph*));
                        __result106__ = __result_obj__ = result_224;
                        return __result106__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
                        return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct tuple2$2charphsTypeph* result_226;
struct tuple2$2charphsTypeph* __result107__;
struct tuple2$2charphsTypeph* __result108__;
struct tuple2$2charphsTypeph* result_227;
struct tuple2$2charphsTypeph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_226, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_227, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(self==((void*)0)||self->it==((void*)0)) {
                            memset(&result_226,0,sizeof(struct tuple2$2charphsTypeph*));
                            __result107__ = __result_obj__ = result_226;
                            return __result107__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result108__ = __result_obj__ = self->it->item;
                            return __result108__;
                        }
                        memset(&result_227,0,sizeof(struct tuple2$2charphsTypeph*));
                        __result109__ = __result_obj__ = result_227;
                        return __result109__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_231;
struct list_item$1tuple2$2charphsTypephph* prev_it_232;
memset(&it_231, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_232, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        it_231=self->head;
                        while(it_231!=((void*)0)) {
                            prev_it_232=it_231;
                            it_231=it_231->next;
                            come_call_finalizer3(prev_it_232,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
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

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
void* right_value206;
struct sType* type2_265;
char* __dec_obj68;
char* result_266;
struct sType* __dec_obj69;
struct sType* result_type_267;
struct list$1CVALUEph* stack_saved_268;
struct list$1sRightValueObjectph* right_value_objects_269;
void* right_value207;
char* c_value_270;
struct sClass* klass_271;
char* class_name_272;
char* fun_name_273;
struct sFun* cloner_274;
char* fun_name2_275;
void* right_value208;
char* none_generics_name_276;
void* right_value209;
struct sType* obj_type_277;
void* right_value210;
char* __dec_obj70;
void* right_value211;
char* fun_name3_278;
struct sGenericsFun* generics_fun_279;
void* right_value212;
_Bool _if_conditional1;
void* right_value213;
void* right_value214;
void* right_value215;
void* right_value216;
void* right_value217;
struct tuple2$2sTypephcharph* __result115__;
void* right_value218;
char* __dec_obj73;
int i_282;
void* right_value219;
char* new_fun_name_283;
void* right_value220;
char* __dec_obj74;
void* right_value221;
struct tuple2$2sFunpcharph* multiple_assign_var8;
struct sFun* fun_284;
char* new_fun_name_285;
char* __dec_obj75;
struct sType* __dec_obj76;
void* right_value222;
struct sType* __dec_obj77;
void* right_value223;
char* __dec_obj78;
void* right_value224;
char* __dec_obj79;
void* right_value225;
struct sType* __dec_obj80;
void* right_value226;
char* type_name_286;
void* right_value227;
char* __dec_obj81;
void* right_value228;
char* __dec_obj82;
struct list$1sRightValueObjectph* __dec_obj83;
struct list$1CVALUEph* __dec_obj84;
void* right_value229;
void* right_value230;
struct tuple2$2sTypephcharph* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
memset(&type2_265, 0, sizeof(struct sType*));
memset(&result_266, 0, sizeof(char*));
memset(&result_type_267, 0, sizeof(struct sType*));
memset(&stack_saved_268, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_269, 0, sizeof(struct list$1sRightValueObjectph*));
right_value207 = (void*)0;
memset(&c_value_270, 0, sizeof(char*));
memset(&klass_271, 0, sizeof(struct sClass*));
memset(&class_name_272, 0, sizeof(char*));
memset(&fun_name_273, 0, sizeof(char*));
memset(&cloner_274, 0, sizeof(struct sFun*));
memset(&fun_name2_275, 0, sizeof(char*));
right_value208 = (void*)0;
memset(&none_generics_name_276, 0, sizeof(char*));
right_value209 = (void*)0;
memset(&obj_type_277, 0, sizeof(struct sType*));
right_value210 = (void*)0;
right_value211 = (void*)0;
memset(&fun_name3_278, 0, sizeof(char*));
memset(&generics_fun_279, 0, sizeof(struct sGenericsFun*));
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
memset(&i_282, 0, sizeof(int));
right_value219 = (void*)0;
memset(&new_fun_name_283, 0, sizeof(char*));
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
memset(&type_name_286, 0, sizeof(char*));
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
right_value230 = (void*)0;
    type2_265=(struct sType*)come_increment_ref_count(((struct sType*)(right_value206=sType_clone(type))));
    come_call_finalizer3(right_value206,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    __dec_obj68=result_266;
    result_266=((void*)0);
    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj69=result_type_267;
    result_type_267=((void*)0);
    come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
    stack_saved_268=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_269=info->right_value_objects;
    c_value_270=(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string(obj))));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    klass_271=type->mClass;
    class_name_272=klass_271->mName;
    fun_name_273="clone";
    cloner_274=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_276=(char*)come_increment_ref_count(((char*)(right_value208=get_none_generics_name(type->mClass->mName))));
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_277=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj70=fun_name2_275;
        fun_name2_275=(char*)come_increment_ref_count(((char*)(right_value210=create_method_name(obj_type_277,(_Bool)0,fun_name_273,info,(_Bool)1))));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_278=(char*)come_increment_ref_count(((char*)(right_value211=xsprintf("%s_%s",none_generics_name_276,fun_name_273))));
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_279=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_278,((void*)0));
        if(generics_fun_279) {
            if(_if_conditional1=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value212=__builtin_string(fun_name2_275)))),generics_fun_279,obj_type_277,info),            right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional1) {
                __result115__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value217=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value216=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 856, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value213=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 856, "sType")))),"void",(_Bool)0,info)))),(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string("")))))));
                none_generics_name_276 = come_decrement_ref_count2(none_generics_name_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_277,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_278 = come_decrement_ref_count2(fun_name3_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_265,sType_finalize, 0, 0, 0, 0, (void*)0);
                result_266 = come_decrement_ref_count2(result_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_268,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                c_value_270 = come_decrement_ref_count2(c_value_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_275 = come_decrement_ref_count2(fun_name2_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value213,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value214,sType_finalize, 0, 1, 0, 0, __result_obj__);
                right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value217,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                return __result115__;
            }
        }
        cloner_274=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_275);
        none_generics_name_276 = come_decrement_ref_count2(none_generics_name_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_277,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_278 = come_decrement_ref_count2(fun_name3_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj73=fun_name2_275;
        fun_name2_275=(char*)come_increment_ref_count(((char*)(right_value218=create_method_name(type,(_Bool)0,fun_name_273,info,(_Bool)1))));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_282=128-1;        i_282>=1;        i_282--        ){
            new_fun_name_283=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("%s_v%d",fun_name2_275,i_282))));
            right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_274=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_283);
            if(cloner_274) {
                __dec_obj74=fun_name2_275;
                fun_name2_275=(char*)come_increment_ref_count(((char*)(right_value220=__builtin_string(new_fun_name_283))));
                __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_283 = come_decrement_ref_count2(new_fun_name_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_283 = come_decrement_ref_count2(new_fun_name_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(cloner_274==((void*)0)) {
            cloner_274=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_275);
        }
    }
    if(cloner_274==((void*)0)&&!type->mClass->mNumber) {
        multiple_assign_var8=((struct tuple2$2sFunpcharph*)(right_value221=create_cloner_automatically(type,fun_name_273,info)));
        fun_284=multiple_assign_var8->v1;
        new_fun_name_285=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer3(right_value221,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj75=fun_name2_275;
        fun_name2_275=(char*)come_increment_ref_count(new_fun_name_285);
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_274=fun_284;
        new_fun_name_285 = come_decrement_ref_count2(new_fun_name_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(cloner_274!=((void*)0)) {
        __dec_obj76=result_type_267;
        result_type_267=(struct sType*)come_increment_ref_count(cloner_274->mResultType);
        come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj77=result_type_267;
        result_type_267=(struct sType*)come_increment_ref_count(((struct sType*)(right_value222=solve_generics(result_type_267,type,info))));
        come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value222,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj78=result_266;
        result_266=(char*)come_increment_ref_count(((char*)(right_value223=xsprintf("%s(%s)",fun_name2_275,c_value_270))));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(gComeDebug) {
            __dec_obj79=result_266;
            result_266=(char*)come_increment_ref_count(((char*)(right_value224=append_stackframe(result_266,result_type_267,info))));
            __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    else {
        __dec_obj80=result_type_267;
        result_type_267=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(type))));
        come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value225,sType_finalize, 0, 1, 0, 0, __result_obj__);
        type2_265->mHeap=(_Bool)1;
        type_name_286=(char*)come_increment_ref_count(((char*)(right_value226=make_type_name_string(type2_265,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj81=result_266;
        result_266=(char*)come_increment_ref_count(((char*)(right_value227=xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_286,c_value_270,info->sname,info->sline,type_name_286))));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(gComeDebug) {
            __dec_obj82=result_266;
            result_266=(char*)come_increment_ref_count(((char*)(right_value228=append_stackframe(result_266,result_type_267,info))));
            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        type_name_286 = come_decrement_ref_count2(type_name_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj83=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_269);
    come_call_finalizer3(__dec_obj83,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj84=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_268);
    come_call_finalizer3(__dec_obj84,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result116__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value230=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value229=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 913, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_267),(char*)come_increment_ref_count(result_266))));
    come_call_finalizer3(type2_265,sType_finalize, 0, 0, 0, 0, (void*)0);
    result_266 = come_decrement_ref_count2(result_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_268,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    c_value_270 = come_decrement_ref_count2(c_value_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_275 = come_decrement_ref_count2(fun_name2_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value230,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result116__;
    come_call_finalizer3(type2_265,sType_finalize, 0, 0, 0, 0, (void*)0);
    result_266 = come_decrement_ref_count2(result_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_267,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_268,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    c_value_270 = come_decrement_ref_count2(c_value_270, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_275 = come_decrement_ref_count2(fun_name2_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_280;
unsigned int it_281;
struct sGenericsFun* __result110__;
struct sGenericsFun* __result111__;
struct sGenericsFun* __result112__;
struct sGenericsFun* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_280, 0, sizeof(unsigned int));
memset(&it_281, 0, sizeof(unsigned int));
            hash_280=string_get_hash_key(((char*)key))%self->size;
            it_281=hash_280;
            while((_Bool)1) {
                if(self->item_existance[it_281]) {
                    if(string_equals(self->keys[it_281],key)) {
                        __result110__ = __result_obj__ = self->items[it_281];
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result110__;
                    }
                    it_281++;
                    if(it_281>=self->size) {
                        it_281=0;
                    }
                    else {
                        if(it_281==hash_280) {
                            __result111__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result111__;
                        }
                    }
                }
                else {
                    __result112__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result112__;
                }
            }
            __result113__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result113__;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj71;
char* __dec_obj72;
struct tuple2$2sTypephcharph* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj71=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(v1);
                    come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj72=self->v2;
                    self->v2=(char*)come_increment_ref_count(v2);
                    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __result114__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result114__;
                    come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
                        if(self!=((void*)0)&&self->v1!=((void*)0)) {
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        if(self!=((void*)0)&&self->v2!=((void*)0)) {
                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
char* __dec_obj85;
char* result_287;
struct list$1CVALUEph* stack_saved_288;
struct list$1sRightValueObjectph* right_value_objects_289;
struct sClass* klass_290;
char* class_name_291;
char* fun_name_292;
void* right_value231;
struct sType* type2_293;
struct sFun* cloner_294;
char* fun_name2_295;
void* right_value232;
char* none_generics_name_296;
void* right_value233;
struct sType* obj_type_297;
void* right_value234;
char* __dec_obj86;
void* right_value235;
char* fun_name3_298;
struct sGenericsFun* generics_fun_299;
void* right_value236;
_Bool _if_conditional2;
_Bool __result117__;
void* right_value237;
char* __dec_obj87;
int i_300;
void* right_value238;
char* new_fun_name_301;
void* right_value239;
char* __dec_obj88;
void* right_value240;
struct tuple2$2sFunpcharph* multiple_assign_var9;
struct sFun* fun_302;
char* new_fun_name_303;
char* __dec_obj89;
struct list$1sRightValueObjectph* __dec_obj90;
struct list$1CVALUEph* __dec_obj91;
_Bool __result118__;
memset(&result_287, 0, sizeof(char*));
memset(&stack_saved_288, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_289, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_290, 0, sizeof(struct sClass*));
memset(&class_name_291, 0, sizeof(char*));
memset(&fun_name_292, 0, sizeof(char*));
right_value231 = (void*)0;
memset(&type2_293, 0, sizeof(struct sType*));
memset(&cloner_294, 0, sizeof(struct sFun*));
memset(&fun_name2_295, 0, sizeof(char*));
right_value232 = (void*)0;
memset(&none_generics_name_296, 0, sizeof(char*));
right_value233 = (void*)0;
memset(&obj_type_297, 0, sizeof(struct sType*));
right_value234 = (void*)0;
right_value235 = (void*)0;
memset(&fun_name3_298, 0, sizeof(char*));
memset(&generics_fun_299, 0, sizeof(struct sGenericsFun*));
right_value236 = (void*)0;
right_value237 = (void*)0;
memset(&i_300, 0, sizeof(int));
right_value238 = (void*)0;
memset(&new_fun_name_301, 0, sizeof(char*));
right_value239 = (void*)0;
right_value240 = (void*)0;
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    __dec_obj85=result_287;
    result_287=((void*)0);
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    stack_saved_288=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_289=info->right_value_objects;
    klass_290=type->mClass;
    class_name_291=klass_290->mName;
    fun_name_292="equals";
    type2_293=(struct sType*)come_increment_ref_count(((struct sType*)(right_value231=sType_clone(type))));
    come_call_finalizer3(right_value231,sType_finalize, 0, 1, 0, 0, (void*)0);
    type2_293->mHeap=(_Bool)0;
    cloner_294=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_296=(char*)come_increment_ref_count(((char*)(right_value232=get_none_generics_name(type->mClass->mName))));
        right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        obj_type_297=(struct sType*)come_increment_ref_count(((struct sType*)(right_value233=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value233,sType_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj86=fun_name2_295;
        fun_name2_295=(char*)come_increment_ref_count(((char*)(right_value234=create_method_name(obj_type_297,(_Bool)0,fun_name_292,info,(_Bool)1))));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_name3_298=(char*)come_increment_ref_count(((char*)(right_value235=xsprintf("%s_%s",none_generics_name_296,fun_name_292))));
        right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        generics_fun_299=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_298,((void*)0));
        if(generics_fun_299) {
            if(_if_conditional2=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value236=__builtin_string(fun_name2_295)))),generics_fun_299,obj_type_297,info),            right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, (void*)0),
            _if_conditional2) {
                __result117__ = (_Bool)0;
                none_generics_name_296 = come_decrement_ref_count2(none_generics_name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_297,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_298 = come_decrement_ref_count2(fun_name3_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_287 = come_decrement_ref_count2(result_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_288,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_293,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_295 = come_decrement_ref_count2(fun_name2_295, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result117__;
            }
        }
        cloner_294=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_295);
        none_generics_name_296 = come_decrement_ref_count2(none_generics_name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_297,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_298 = come_decrement_ref_count2(fun_name3_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj87=fun_name2_295;
        fun_name2_295=(char*)come_increment_ref_count(((char*)(right_value237=create_method_name(type,(_Bool)0,fun_name_292,info,(_Bool)1))));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        for(        i_300=128-1;        i_300>=1;        i_300--        ){
            new_fun_name_301=(char*)come_increment_ref_count(((char*)(right_value238=xsprintf("%s_v%d",fun_name2_295,i_300))));
            right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            cloner_294=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_301);
            if(cloner_294) {
                __dec_obj88=fun_name2_295;
                fun_name2_295=(char*)come_increment_ref_count(((char*)(right_value239=__builtin_string(new_fun_name_301))));
                __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                new_fun_name_301 = come_decrement_ref_count2(new_fun_name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_301 = come_decrement_ref_count2(new_fun_name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(cloner_294==((void*)0)) {
            cloner_294=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_295);
        }
    }
    if(cloner_294==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var9=((struct tuple2$2sFunpcharph*)(right_value240=create_equals_automatically(type,fun_name_292,info)));
        fun_302=multiple_assign_var9->v1;
        new_fun_name_303=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        come_call_finalizer3(right_value240,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj89=fun_name2_295;
        fun_name2_295=(char*)come_increment_ref_count(new_fun_name_303);
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_294=fun_302;
        new_fun_name_303 = come_decrement_ref_count2(new_fun_name_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj90=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_289);
    come_call_finalizer3(__dec_obj90,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj91=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_288);
    come_call_finalizer3(__dec_obj91,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result118__ = (_Bool)1;
    result_287 = come_decrement_ref_count2(result_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_288,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_293,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_295 = come_decrement_ref_count2(fun_name2_295, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result118__;
    result_287 = come_decrement_ref_count2(result_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_288,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_293,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_295 = come_decrement_ref_count2(fun_name2_295, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
char* __dec_obj92;
char* result_304;
struct list$1CVALUEph* stack_saved_305;
struct list$1sRightValueObjectph* right_value_objects_306;
struct sClass* klass_307;
char* class_name_308;
char* fun_name_309;
void* right_value241;
struct sType* type2_310;
struct sFun* cloner_311;
char* fun_name2_312;
void* right_value242;
char* none_generics_name_313;
void* right_value243;
struct sType* obj_type_314;
void* right_value244;
char* __dec_obj93;
void* right_value245;
char* fun_name3_315;
struct sGenericsFun* generics_fun_316;
void* right_value246;
_Bool _if_conditional3;
_Bool __result119__;
void* right_value247;
char* __dec_obj94;
int i_317;
void* right_value248;
char* new_fun_name_318;
void* right_value249;
char* __dec_obj95;
void* right_value250;
struct tuple2$2sFunpcharph* multiple_assign_var10;
struct sFun* fun_319;
char* new_fun_name_320;
char* __dec_obj96;
struct list$1sRightValueObjectph* __dec_obj97;
struct list$1CVALUEph* __dec_obj98;
_Bool __result120__;
memset(&result_304, 0, sizeof(char*));
memset(&stack_saved_305, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_306, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_307, 0, sizeof(struct sClass*));
memset(&class_name_308, 0, sizeof(char*));
memset(&fun_name_309, 0, sizeof(char*));
right_value241 = (void*)0;
memset(&type2_310, 0, sizeof(struct sType*));
memset(&cloner_311, 0, sizeof(struct sFun*));
memset(&fun_name2_312, 0, sizeof(char*));
right_value242 = (void*)0;
memset(&none_generics_name_313, 0, sizeof(char*));
right_value243 = (void*)0;
memset(&obj_type_314, 0, sizeof(struct sType*));
right_value244 = (void*)0;
right_value245 = (void*)0;
memset(&fun_name3_315, 0, sizeof(char*));
memset(&generics_fun_316, 0, sizeof(struct sGenericsFun*));
right_value246 = (void*)0;
right_value247 = (void*)0;
memset(&i_317, 0, sizeof(int));
right_value248 = (void*)0;
memset(&new_fun_name_318, 0, sizeof(char*));
right_value249 = (void*)0;
right_value250 = (void*)0;
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    __dec_obj92=result_304;
    result_304=((void*)0);
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    stack_saved_305=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_306=info->right_value_objects;
    klass_307=type->mClass;
    class_name_308=klass_307->mName;
    fun_name_309="operator_equals";
    type2_310=(struct sType*)come_increment_ref_count(((struct sType*)(right_value241=sType_clone(type))));
    come_call_finalizer3(right_value241,sType_finalize, 0, 1, 0, 0, (void*)0);
    type2_310->mHeap=(_Bool)0;
    cloner_311=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_313=(char*)come_increment_ref_count(((char*)(right_value242=get_none_generics_name(type->mClass->mName))));
        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        obj_type_314=(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value243,sType_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj93=fun_name2_312;
        fun_name2_312=(char*)come_increment_ref_count(((char*)(right_value244=create_method_name(obj_type_314,(_Bool)0,fun_name_309,info,(_Bool)1))));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_name3_315=(char*)come_increment_ref_count(((char*)(right_value245=xsprintf("%s_%s",none_generics_name_313,fun_name_309))));
        right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        generics_fun_316=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_315,((void*)0));
        if(generics_fun_316) {
            if(_if_conditional3=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(fun_name2_312)))),generics_fun_316,obj_type_314,info),            right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, (void*)0),
            _if_conditional3) {
                __result119__ = (_Bool)0;
                none_generics_name_313 = come_decrement_ref_count2(none_generics_name_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_315 = come_decrement_ref_count2(fun_name3_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_304 = come_decrement_ref_count2(result_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_305,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_310,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_312 = come_decrement_ref_count2(fun_name2_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result119__;
            }
        }
        cloner_311=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_312);
        none_generics_name_313 = come_decrement_ref_count2(none_generics_name_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_315 = come_decrement_ref_count2(fun_name3_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj94=fun_name2_312;
        fun_name2_312=(char*)come_increment_ref_count(((char*)(right_value247=create_method_name(type,(_Bool)0,fun_name_309,info,(_Bool)1))));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        for(        i_317=128-1;        i_317>=1;        i_317--        ){
            new_fun_name_318=(char*)come_increment_ref_count(((char*)(right_value248=xsprintf("%s_v%d",fun_name2_312,i_317))));
            right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            cloner_311=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_318);
            if(cloner_311) {
                __dec_obj95=fun_name2_312;
                fun_name2_312=(char*)come_increment_ref_count(((char*)(right_value249=__builtin_string(new_fun_name_318))));
                __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                new_fun_name_318 = come_decrement_ref_count2(new_fun_name_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_318 = come_decrement_ref_count2(new_fun_name_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(cloner_311==((void*)0)) {
            cloner_311=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_312);
        }
    }
    if(cloner_311==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var10=((struct tuple2$2sFunpcharph*)(right_value250=create_operator_equals_automatically(type,fun_name_309,info)));
        fun_319=multiple_assign_var10->v1;
        new_fun_name_320=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        come_call_finalizer3(right_value250,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj96=fun_name2_312;
        fun_name2_312=(char*)come_increment_ref_count(new_fun_name_320);
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_311=fun_319;
        new_fun_name_320 = come_decrement_ref_count2(new_fun_name_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj97=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_306);
    come_call_finalizer3(__dec_obj97,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj98=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_305);
    come_call_finalizer3(__dec_obj98,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result120__ = (_Bool)1;
    result_304 = come_decrement_ref_count2(result_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_305,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_310,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_312 = come_decrement_ref_count2(fun_name2_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result120__;
    result_304 = come_decrement_ref_count2(result_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_305,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_310,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_312 = come_decrement_ref_count2(fun_name2_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
char* __dec_obj99;
char* result_321;
struct list$1CVALUEph* stack_saved_322;
struct list$1sRightValueObjectph* right_value_objects_323;
struct sClass* klass_324;
char* class_name_325;
char* fun_name_326;
void* right_value251;
struct sType* type2_327;
struct sFun* cloner_328;
char* fun_name2_329;
void* right_value252;
char* none_generics_name_330;
void* right_value253;
struct sType* obj_type_331;
void* right_value254;
char* __dec_obj100;
void* right_value255;
char* fun_name3_332;
struct sGenericsFun* generics_fun_333;
void* right_value256;
_Bool _if_conditional4;
_Bool __result121__;
void* right_value257;
char* __dec_obj101;
int i_334;
void* right_value258;
char* new_fun_name_335;
void* right_value259;
char* __dec_obj102;
void* right_value260;
struct tuple2$2sFunpcharph* multiple_assign_var11;
struct sFun* fun_336;
char* new_fun_name_337;
char* __dec_obj103;
struct list$1sRightValueObjectph* __dec_obj104;
struct list$1CVALUEph* __dec_obj105;
_Bool __result122__;
memset(&result_321, 0, sizeof(char*));
memset(&stack_saved_322, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_323, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_324, 0, sizeof(struct sClass*));
memset(&class_name_325, 0, sizeof(char*));
memset(&fun_name_326, 0, sizeof(char*));
right_value251 = (void*)0;
memset(&type2_327, 0, sizeof(struct sType*));
memset(&cloner_328, 0, sizeof(struct sFun*));
memset(&fun_name2_329, 0, sizeof(char*));
right_value252 = (void*)0;
memset(&none_generics_name_330, 0, sizeof(char*));
right_value253 = (void*)0;
memset(&obj_type_331, 0, sizeof(struct sType*));
right_value254 = (void*)0;
right_value255 = (void*)0;
memset(&fun_name3_332, 0, sizeof(char*));
memset(&generics_fun_333, 0, sizeof(struct sGenericsFun*));
right_value256 = (void*)0;
right_value257 = (void*)0;
memset(&i_334, 0, sizeof(int));
right_value258 = (void*)0;
memset(&new_fun_name_335, 0, sizeof(char*));
right_value259 = (void*)0;
right_value260 = (void*)0;
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    __dec_obj99=result_321;
    result_321=((void*)0);
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    stack_saved_322=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_323=info->right_value_objects;
    klass_324=type->mClass;
    class_name_325=klass_324->mName;
    fun_name_326="operator_not_equals";
    type2_327=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_clone(type))));
    come_call_finalizer3(right_value251,sType_finalize, 0, 1, 0, 0, (void*)0);
    type2_327->mHeap=(_Bool)0;
    cloner_328=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_330=(char*)come_increment_ref_count(((char*)(right_value252=get_none_generics_name(type->mClass->mName))));
        right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        obj_type_331=(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value253,sType_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj100=fun_name2_329;
        fun_name2_329=(char*)come_increment_ref_count(((char*)(right_value254=create_method_name(obj_type_331,(_Bool)0,fun_name_326,info,(_Bool)1))));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_name3_332=(char*)come_increment_ref_count(((char*)(right_value255=xsprintf("%s_%s",none_generics_name_330,fun_name_326))));
        right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        generics_fun_333=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_332,((void*)0));
        if(generics_fun_333) {
            if(_if_conditional4=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value256=__builtin_string(fun_name2_329)))),generics_fun_333,obj_type_331,info),            right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, (void*)0),
            _if_conditional4) {
                __result121__ = (_Bool)0;
                none_generics_name_330 = come_decrement_ref_count2(none_generics_name_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_331,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_332 = come_decrement_ref_count2(fun_name3_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_321 = come_decrement_ref_count2(result_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_322,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_327,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_329 = come_decrement_ref_count2(fun_name2_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result121__;
            }
        }
        cloner_328=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_329);
        none_generics_name_330 = come_decrement_ref_count2(none_generics_name_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_331,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_332 = come_decrement_ref_count2(fun_name3_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj101=fun_name2_329;
        fun_name2_329=(char*)come_increment_ref_count(((char*)(right_value257=create_method_name(type,(_Bool)0,fun_name_326,info,(_Bool)1))));
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        for(        i_334=128-1;        i_334>=1;        i_334--        ){
            new_fun_name_335=(char*)come_increment_ref_count(((char*)(right_value258=xsprintf("%s_v%d",fun_name2_329,i_334))));
            right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            cloner_328=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_335);
            if(cloner_328) {
                __dec_obj102=fun_name2_329;
                fun_name2_329=(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string(new_fun_name_335))));
                __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                new_fun_name_335 = come_decrement_ref_count2(new_fun_name_335, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_335 = come_decrement_ref_count2(new_fun_name_335, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(cloner_328==((void*)0)) {
            cloner_328=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_329);
        }
    }
    if(cloner_328==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var11=((struct tuple2$2sFunpcharph*)(right_value260=create_operator_not_equals_automatically(type,fun_name_326,info)));
        fun_336=multiple_assign_var11->v1;
        new_fun_name_337=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        come_call_finalizer3(right_value260,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj103=fun_name2_329;
        fun_name2_329=(char*)come_increment_ref_count(new_fun_name_337);
        __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_328=fun_336;
        new_fun_name_337 = come_decrement_ref_count2(new_fun_name_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj104=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_323);
    come_call_finalizer3(__dec_obj104,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj105=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_322);
    come_call_finalizer3(__dec_obj105,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result122__ = (_Bool)1;
    result_321 = come_decrement_ref_count2(result_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_322,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_327,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_329 = come_decrement_ref_count2(fun_name2_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result122__;
    result_321 = come_decrement_ref_count2(result_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_322,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_327,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_329 = come_decrement_ref_count2(fun_name2_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool existance_free_right_value_objects(struct sInfo* info){
struct list$1sRightValueObjectph* right_value_objects_338;
struct list$1sRightValueObjectph* o2_saved_339;
struct sRightValueObject* it_340;
memset(&right_value_objects_338, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&o2_saved_339, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_340, 0, sizeof(struct sRightValueObject*));
    if(gComeGC||gComeC) {
        return (_Bool)0;
    }
    right_value_objects_338=info->right_value_objects;
    for(    o2_saved_339=(right_value_objects_338),it_340=list$1sRightValueObjectph_begin((o2_saved_339));    !list$1sRightValueObjectph_end((o2_saved_339));    it_340=list$1sRightValueObjectph_next((o2_saved_339))    ){
        if(it_340&&!it_340->mFreed) {
            if(string_operator_equals(it_340->mFunName,info->come_fun->mName)&&it_340->mBlockLevel==info->block_level) {
                return (_Bool)1;
            }
        }
    }
    return (_Bool)0;
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
_Bool free_right_value_341;
struct list$1sRightValueObjectph* right_value_objects_342;
int n_343;
struct list$1sRightValueObjectph* o2_saved_344;
struct sRightValueObject* it_345;
void* right_value261;
struct sType* type_346;
void* right_value262;
struct sType* __dec_obj106;
memset(&free_right_value_341, 0, sizeof(_Bool));
memset(&right_value_objects_342, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&n_343, 0, sizeof(int));
memset(&o2_saved_344, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_345, 0, sizeof(struct sRightValueObject*));
right_value261 = (void*)0;
memset(&type_346, 0, sizeof(struct sType*));
right_value262 = (void*)0;
    if(gComeGC||gComeC) {
        return;
    }
    free_right_value_341=(_Bool)0;
    right_value_objects_342=info->right_value_objects;
    n_343=0;
    for(    o2_saved_344=(right_value_objects_342),it_345=list$1sRightValueObjectph_begin((o2_saved_344));    !list$1sRightValueObjectph_end((o2_saved_344));    it_345=list$1sRightValueObjectph_next((o2_saved_344))    ){
        if(it_345&&!it_345->mFreed) {
            if(string_operator_equals(it_345->mFunName,info->come_fun->mName)&&it_345->mBlockLevel==info->block_level) {
                type_346=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_clone(it_345->mType))));
                come_call_finalizer3(right_value261,sType_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj106=type_346;
                type_346=(struct sType*)come_increment_ref_count(((struct sType*)(right_value262=solve_type(type_346,info->generics_type,info->method_generics_types,info))));
                come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value262,sType_finalize, 0, 1, 0, 0, (void*)0);
                free_object(type_346,it_345->mVarName,(_Bool)1,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                it_345->mFreed=(_Bool)1;
                free_right_value_341=(_Bool)1;
                come_call_finalizer3(type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        n_343++;
    }
}

_Bool is_right_values(int right_value_num, struct sInfo* info){
struct list$1sRightValueObjectph* o2_saved_347;
struct sRightValueObject* it_348;
_Bool __result123__;
memset(&o2_saved_347, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_348, 0, sizeof(struct sRightValueObject*));
    if(gComeGC||gComeC) {
        return (_Bool)0;
    }
    for(    o2_saved_347=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_348=list$1sRightValueObjectph_begin((o2_saved_347));    !list$1sRightValueObjectph_end((o2_saved_347));    it_348=list$1sRightValueObjectph_next((o2_saved_347))    ){
        if(it_348->mID==right_value_num) {
            __result123__ = (_Bool)1;
            come_call_finalizer3(o2_saved_347,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result123__;
        }
    }
    come_call_finalizer3(o2_saved_347,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)0;
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__;
struct sVarTable* it_349;
struct sVar* var__350;
struct sVar* __result128__;
struct sVar* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_349, 0, sizeof(struct sVarTable*));
memset(&var__350, 0, sizeof(struct sVar*));
    it_349=table;
    while(it_349) {
        var__350=map$2charphsVarphp_operator_load_element(it_349->mVars,name);
        if(var__350) {
            __result128__ = __result_obj__ = var__350;
            return __result128__;
        }
        it_349=it_349->mParent;
    }
    __result129__ = __result_obj__ = ((void*)0);
    return __result129__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_351;
unsigned int hash_352;
unsigned int it_353;
struct sVar* __result124__;
struct sVar* __result125__;
struct sVar* __result126__;
struct sVar* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_351, 0, sizeof(struct sVar*));
memset(&hash_352, 0, sizeof(unsigned int));
memset(&it_353, 0, sizeof(unsigned int));
            memset(&default_value_351,0,sizeof(struct sVar*));
            hash_352=string_get_hash_key(((char*)key))%self->size;
            it_353=hash_352;
            while((_Bool)1) {
                if(self->item_existance[it_353]) {
                    if(string_equals(self->keys[it_353],key)) {
                        __result124__ = __result_obj__ = self->items[it_353];
                        come_call_finalizer3(default_value_351,sVar_finalize, 0, 0, 0, 0, (void*)0);
                        return __result124__;
                    }
                    it_353++;
                    if(it_353>=self->size) {
                        it_353=0;
                    }
                    else {
                        if(it_353==hash_352) {
                            __result125__ = __result_obj__ = default_value_351;
                            come_call_finalizer3(default_value_351,sVar_finalize, 0, 0, 1, 0, (void*)0);
                            return __result125__;
                        }
                    }
                }
                else {
                    __result126__ = __result_obj__ = default_value_351;
                    come_call_finalizer3(default_value_351,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result126__;
                }
            }
            __result127__ = __result_obj__ = default_value_351;
            come_call_finalizer3(default_value_351,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result127__;
            come_call_finalizer3(default_value_351,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
                            if(self!=((void*)0)&&self->mName!=((void*)0)) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
                                self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
                                self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2charphsVarph* o2_saved_354;
char* it_357;
struct sVar* p_360;
struct sType* type_361;
struct sClass* klass_362;
void* right_value263;
char* c_value_363;
void* right_value264;
struct sType* type2_364;
memset(&o2_saved_354, 0, sizeof(struct map$2charphsVarph*));
memset(&it_357, 0, sizeof(char*));
memset(&p_360, 0, sizeof(struct sVar*));
memset(&type_361, 0, sizeof(struct sType*));
memset(&klass_362, 0, sizeof(struct sClass*));
right_value263 = (void*)0;
memset(&c_value_363, 0, sizeof(char*));
right_value264 = (void*)0;
memset(&type2_364, 0, sizeof(struct sType*));
    if(gComeGC||gComeC) {
        return;
    }
    for(    o2_saved_354=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_357=map$2charphsVarph_begin((o2_saved_354));    !map$2charphsVarph_end((o2_saved_354));    it_357=map$2charphsVarph_next((o2_saved_354))    ){
        p_360=map$2charphsVarphp_operator_load_element(table->mVars,it_357);
        type_361=p_360->mType;
        klass_362=type_361->mClass;
        if(ret_value!=((void*)0)&&p_360->mCValueName!=((void*)0)&&string_operator_equals(p_360->mCValueName,ret_value->mCValueName)&&type_361->mHeap) {
            free_object(p_360->mType,p_360->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
        }
        else {
            if(type_361->mHeap&&p_360->mCValueName) {
                if(type_361->mFunctionParam) {
                    free_object(p_360->mType,p_360->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                else {
                    free_object(p_360->mType,p_360->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
            }
            else {
                if(klass_362->mStruct&&p_360->mCValueName&&type_361->mAllocaValue&&!type_361->mNoCallingDestructor) {
                    c_value_363=(char*)come_increment_ref_count(((char*)(right_value263=xsprintf("(&%s)",p_360->mCValueName))));
                    right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    type2_364=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_clone(type_361))));
                    come_call_finalizer3(right_value264,sType_finalize, 0, 1, 0, 0, (void*)0);
                    type2_364->mPointerNum++;
                    free_object(type2_364,c_value_363,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    c_value_363 = come_decrement_ref_count2(c_value_363, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type2_364,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    come_call_finalizer3(o2_saved_354,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
char* result_355;
char* __result130__;
char* __result131__;
char* result_356;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_355, 0, sizeof(char*));
memset(&result_356, 0, sizeof(char*));
        if(self==((void*)0)) {
            memset(&result_355,0,sizeof(char*));
            __result130__ = __result_obj__ = result_355;
            return __result130__;
        }
        self->key_list->it=self->key_list->head;
        if(self->key_list->it) {
            __result131__ = __result_obj__ = self->key_list->it->item;
            return __result131__;
        }
        memset(&result_356,0,sizeof(char*));
        __result132__ = __result_obj__ = result_356;
        return __result132__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
        return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
char* result_358;
char* __result133__;
char* __result134__;
char* result_359;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_358, 0, sizeof(char*));
memset(&result_359, 0, sizeof(char*));
        if(self==((void*)0)||self->key_list->it==((void*)0)) {
            memset(&result_358,0,sizeof(char*));
            __result133__ = __result_obj__ = result_358;
            return __result133__;
        }
        self->key_list->it=self->key_list->it->next;
        if(self->key_list->it) {
            __result134__ = __result_obj__ = self->key_list->it->item;
            return __result134__;
        }
        memset(&result_359,0,sizeof(char*));
        __result135__ = __result_obj__ = result_359;
        return __result135__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_365;
int i_366;
memset(&i_365, 0, sizeof(int));
memset(&i_366, 0, sizeof(int));
        for(        i_365=0;        i_365<self->size;        i_365++        ){
            if(self->item_existance[i_365]) {
                if(1) {
                    come_call_finalizer3(self->items[i_365],sVar_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->items);
        for(        i_366=0;        i_366<self->size;        i_366++        ){
            if(self->item_existance[i_366]) {
                if(1) {
                    self->keys[i_366] = come_decrement_ref_count2(self->keys[i_366], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->keys);
        come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_367;
struct list_item$1charp* prev_it_368;
memset(&it_367, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_368, 0, sizeof(struct list_item$1charp*));
            it_367=self->head;
            while(it_367!=((void*)0)) {
                prev_it_368=it_367;
                it_367=it_367->next;
                come_call_finalizer3(prev_it_368,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_369;
memset(&it_369, 0, sizeof(struct sVarTable*));
    if(gComeGC||gComeC) {
        return;
    }
    it_369=info->lv_table;
    if(it_369==info->come_fun->mBlock->mVarTable) {
        free_objects(it_369,ret_value,info);
    }
    else {
        while(it_369!=info->come_fun->mBlock->mVarTable) {
            free_objects(it_369,ret_value,info);
            it_369=it_369->mParent;
        }
        free_objects(it_369,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
struct sVar* ret_value_370;
struct sVarTable* current_loop_vtable_371;
struct sVarTable* it_372;
memset(&ret_value_370, 0, sizeof(struct sVar*));
memset(&current_loop_vtable_371, 0, sizeof(struct sVarTable*));
memset(&it_372, 0, sizeof(struct sVarTable*));
    if(gComeGC||gComeC) {
        return;
    }
    ret_value_370=((void*)0);
    current_loop_vtable_371=info->current_loop_vtable;
    if(current_loop_vtable_371!=((void*)0)) {
        it_372=info->lv_table;
        while(it_372!=current_loop_vtable_371) {
            free_objects(it_372,ret_value_370,info);
            it_372=it_372->mParent;
        }
        free_objects(it_372,ret_value_370,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value265;
void* right_value266;
void* right_value267;
void* right_value268;
void* right_value269;
char* __result136__;
void* right_value270;
char* var_name_374;
void* right_value271;
void* right_value272;
void* right_value273;
void* right_value274;
void* right_value275;
void* right_value276;
void* right_value277;
void* right_value278;
char* __result137__;
void* right_value279;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&var_name_374, 0, sizeof(char*));
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
    if(string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0) {
        if(gComeDebug||type->mRecord) {
            __result136__ = __result_obj__ = ((char*)(right_value269=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(right_value265=string_to_string(info->sname))),((char*)(right_value266=int_to_string(info->sline))),((char*)(right_value267=int_to_string(gComeDebugStackFrameID++))),((char*)(right_value268=charp_to_string(c_value))))));
            right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result136__;
        }
    }
    else {
        if(gComeDebug||type->mRecord) {
            static int n_373=0;
            ++n_373;
            var_name_374=(char*)come_increment_ref_count(((char*)(right_value270=xsprintf("__exception_result_var_b%d",n_373))));
            right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value271=make_define_var(type,var_name_374,(_Bool)0,info))));
            right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __result137__ = __result_obj__ = ((char*)(right_value278=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(right_value272=string_to_string(info->sname))),((char*)(right_value273=int_to_string(info->sline))),((char*)(right_value274=int_to_string(gComeDebugStackFrameID++))),((char*)(right_value275=string_to_string(var_name_374))),((char*)(right_value276=charp_to_string(c_value))),((char*)(right_value277=string_to_string(var_name_374))))));
            var_name_374 = come_decrement_ref_count2(var_name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result137__;
            var_name_374 = come_decrement_ref_count2(var_name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result138__ = __result_obj__ = ((char*)(right_value279=__builtin_string(c_value)));
    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result138__;
}

_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2charphsVarph* o2_saved_375;
char* it_376;
struct sVar* p_377;
struct sType* type_378;
struct sClass* klass_379;
_Bool __result139__;
_Bool __result140__;
_Bool __result141__;
_Bool __result142__;
memset(&o2_saved_375, 0, sizeof(struct map$2charphsVarph*));
memset(&it_376, 0, sizeof(char*));
memset(&p_377, 0, sizeof(struct sVar*));
memset(&type_378, 0, sizeof(struct sType*));
memset(&klass_379, 0, sizeof(struct sClass*));
    if(gComeGC||gComeC) {
        return (_Bool)1;
    }
    for(    o2_saved_375=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_376=map$2charphsVarph_begin((o2_saved_375));    !map$2charphsVarph_end((o2_saved_375));    it_376=map$2charphsVarph_next((o2_saved_375))    ){
        p_377=map$2charphsVarphp_operator_load_element(table->mVars,it_376);
        type_378=p_377->mType;
        klass_379=type_378->mClass;
        if(ret_value!=((void*)0)&&p_377->mCValueName!=((void*)0)&&string_operator_equals(p_377->mCValueName,ret_value->mCValueName)&&type_378->mHeap) {
            __result139__ = (_Bool)1;
            come_call_finalizer3(o2_saved_375,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result139__;
        }
        else {
            if(type_378->mHeap&&p_377->mCValueName) {
                if(type_378->mFunctionParam) {
                    __result140__ = (_Bool)1;
                    come_call_finalizer3(o2_saved_375,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result140__;
                }
                else {
                    __result141__ = (_Bool)1;
                    come_call_finalizer3(o2_saved_375,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result141__;
                }
            }
            else {
                if(klass_379->mStruct&&p_377->mCValueName&&type_378->mAllocaValue&&!type_378->mNoCallingDestructor) {
                    __result142__ = (_Bool)1;
                    come_call_finalizer3(o2_saved_375,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result142__;
                }
            }
        }
    }
    come_call_finalizer3(o2_saved_375,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)0;
}

_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_380;
memset(&it_380, 0, sizeof(struct sVarTable*));
    if(gComeGC||gComeC) {
        return (_Bool)0;
    }
    it_380=info->lv_table;
    if(it_380==info->come_fun->mBlock->mVarTable) {
        if(existance_free_objects(it_380,ret_value,info)) {
            return (_Bool)1;
        }
    }
    else {
        while(it_380!=info->come_fun->mBlock->mVarTable) {
            if(existance_free_objects(it_380,ret_value,info)) {
                return (_Bool)1;
            }
            it_380=it_380->mParent;
        }
        if(existance_free_objects(it_380,ret_value,info)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

