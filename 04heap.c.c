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

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self);
static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self);
static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);

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

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info);

void remove_object_from_right_values(int right_value_num, struct sInfo* info);

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
void* __result_obj__=(void*)0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result1__;
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1899, "buffer"))))));
    come_call_finalizer3(__right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result1__;
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_1;
struct buffer* __result2__;
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1906, "buffer"))))));
    come_call_finalizer3(__right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    __result2__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result2__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_2;
struct buffer* __result3__;
    result_2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1913, "buffer"))))));
    come_call_finalizer3(__right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    __result3__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result3__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_3;
struct buffer* __result4__;
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1920, "buffer"))))));
    come_call_finalizer3(__right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    __result4__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result4__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_4;
struct buffer* __result5__;
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1927, "buffer"))))));
    come_call_finalizer3(__right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    __result5__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result5__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_5;
struct buffer* __result6__;
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1934, "buffer"))))));
    come_call_finalizer3(__right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    __result6__ = __result_obj__ = result_5;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result6__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
struct smart_pointer$1char* result_6;
void* __right_value13 = (void*)0;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result7__;
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
void* __result_obj__=(void*)0;
void* __right_value14 = (void*)0;
struct smart_pointer$1char* result_7;
void* __right_value15 = (void*)0;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result8__;
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
void* __result_obj__=(void*)0;
void* __right_value16 = (void*)0;
struct smart_pointer$1short* result_8;
void* __right_value17 = (void*)0;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result9__;
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
void* __result_obj__=(void*)0;
void* __right_value18 = (void*)0;
struct smart_pointer$1int* result_9;
void* __right_value19 = (void*)0;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result10__;
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
void* __result_obj__=(void*)0;
void* __right_value20 = (void*)0;
struct smart_pointer$1long* result_10;
void* __right_value21 = (void*)0;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result11__;
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
void* __result_obj__=(void*)0;
void* __right_value22 = (void*)0;
void* __right_value25 = (void*)0;
struct smart_pointer$1char* __result13__;
    __result13__ = __result_obj__ = ((struct smart_pointer$1char*)(__right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(__right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2161, "smart_pointer$1char")))),self,len)));
    come_call_finalizer3(__right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result13__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value26 = (void*)0;
void* __right_value29 = (void*)0;
struct smart_pointer$1short* __result15__;
    __result15__ = __result_obj__ = ((struct smart_pointer$1short*)(__right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(__right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2166, "smart_pointer$1short")))),self,len)));
    come_call_finalizer3(__right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result15__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value30 = (void*)0;
void* __right_value33 = (void*)0;
struct smart_pointer$1int* __result17__;
    __result17__ = __result_obj__ = ((struct smart_pointer$1int*)(__right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(__right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2171, "smart_pointer$1int")))),self,len)));
    come_call_finalizer3(__right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result17__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value34 = (void*)0;
void* __right_value37 = (void*)0;
struct smart_pointer$1long* __result19__;
    __result19__ = __result_obj__ = ((struct smart_pointer$1long*)(__right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(__right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2176, "smart_pointer$1long")))),self,len)));
    come_call_finalizer3(__right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result19__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value38 = (void*)0;
void* __right_value41 = (void*)0;
struct smart_pointer$1float* __result21__;
    __result21__ = __result_obj__ = ((struct smart_pointer$1float*)(__right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(__right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2181, "smart_pointer$1float")))),self,len)));
    come_call_finalizer3(__right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result21__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value42 = (void*)0;
void* __right_value45 = (void*)0;
struct smart_pointer$1double* __result23__;
    __result23__ = __result_obj__ = ((struct smart_pointer$1double*)(__right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(__right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2186, "smart_pointer$1double")))),self,len)));
    come_call_finalizer3(__right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result23__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value50 = (void*)0;
struct list$1char* __result26__;
    __result26__ = __result_obj__ = ((struct list$1char*)(__right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(__right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2191, "list$1char")))),len,self)));
    come_call_finalizer3(__right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result26__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value51 = (void*)0;
void* __right_value55 = (void*)0;
struct list$1short* __result29__;
    __result29__ = __result_obj__ = ((struct list$1short*)(__right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(__right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2196, "list$1short")))),len,self)));
    come_call_finalizer3(__right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result29__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value56 = (void*)0;
void* __right_value60 = (void*)0;
struct list$1int* __result32__;
    __result32__ = __result_obj__ = ((struct list$1int*)(__right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(__right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2201, "list$1int")))),len,self)));
    come_call_finalizer3(__right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result32__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value65 = (void*)0;
struct list$1long* __result35__;
    __result35__ = __result_obj__ = ((struct list$1long*)(__right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(__right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2206, "list$1long")))),len,self)));
    come_call_finalizer3(__right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result35__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value66 = (void*)0;
void* __right_value70 = (void*)0;
struct list$1float* __result38__;
    __result38__ = __result_obj__ = ((struct list$1float*)(__right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(__right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2211, "list$1float")))),len,self)));
    come_call_finalizer3(__right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result38__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value71 = (void*)0;
void* __right_value75 = (void*)0;
struct list$1double* __result41__;
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
void* __result_obj__=(void*)0;
void* __right_value76 = (void*)0;
char* __result42__;
    __result42__ = __result_obj__ = ((char*)(__right_value76=xsprintf(msg,self)));
    __right_value76 = come_decrement_ref_count2(__right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
char* __result43__;
    __result43__ = __result_obj__ = ((char*)(__right_value77=xsprintf(msg,self)));
    __right_value77 = come_decrement_ref_count2(__right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result43__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value78 = (void*)0;
char* __result44__;
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
void* __result_obj__=(void*)0;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
struct buffer* __dec_obj6;
struct smart_pointer$1char* __result12__;
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
void* __result_obj__=(void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result14__;
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
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result16__;
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
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result18__;
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
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result20__;
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
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* __dec_obj11;
struct smart_pointer$1double* __result22__;
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
void* __result_obj__=(void*)0;
int i_11;
struct list$1char* __result25__;
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
void* __result_obj__=(void*)0;
void* __right_value47 = (void*)0;
struct list_item$1char* litem_12;
void* __right_value48 = (void*)0;
struct list_item$1char* litem_13;
void* __right_value49 = (void*)0;
struct list_item$1char* litem_14;
struct list$1char* __result24__;
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
void* __result_obj__=(void*)0;
int i_17;
struct list$1short* __result28__;
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
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
struct list_item$1short* litem_18;
void* __right_value53 = (void*)0;
struct list_item$1short* litem_19;
void* __right_value54 = (void*)0;
struct list_item$1short* litem_20;
struct list$1short* __result27__;
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
void* __result_obj__=(void*)0;
int i_23;
struct list$1int* __result31__;
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
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
struct list_item$1int* litem_24;
void* __right_value58 = (void*)0;
struct list_item$1int* litem_25;
void* __right_value59 = (void*)0;
struct list_item$1int* litem_26;
struct list$1int* __result30__;
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
void* __result_obj__=(void*)0;
int i_29;
struct list$1long* __result34__;
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
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
struct list_item$1long* litem_30;
void* __right_value63 = (void*)0;
struct list_item$1long* litem_31;
void* __right_value64 = (void*)0;
struct list_item$1long* litem_32;
struct list$1long* __result33__;
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
void* __result_obj__=(void*)0;
int i_35;
struct list$1float* __result37__;
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
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
struct list_item$1float* litem_36;
void* __right_value68 = (void*)0;
struct list_item$1float* litem_37;
void* __right_value69 = (void*)0;
struct list_item$1float* litem_38;
struct list$1float* __result36__;
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
void* __result_obj__=(void*)0;
int i_41;
struct list$1double* __result40__;
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
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
struct list_item$1double* litem_42;
void* __right_value73 = (void*)0;
struct list_item$1double* litem_43;
void* __right_value74 = (void*)0;
struct list_item$1double* litem_44;
struct list$1double* __result39__;
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










void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects){
struct sRightValueObject* it_47;
struct list$1sRightValueObjectph* o2_saved_48;
struct sRightValueObject* it2_51;
char* __dec_obj12;
char* __dec_obj13;
void* __right_value79 = (void*)0;
char* __dec_obj14;
char* __dec_obj15;
void* __right_value80 = (void*)0;
char* __dec_obj16;
char* __dec_obj17;
void* __right_value81 = (void*)0;
char* __dec_obj18;
char* __dec_obj19;
void* __right_value82 = (void*)0;
char* __dec_obj20;
    if(gComeGC||gComeC) {
        return;
    }
    if(!no_delete_from_right_value_objects&&right_value->right_value_objects) {
        it_47=right_value->right_value_objects;
        for(        o2_saved_48=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it2_51=list$1sRightValueObjectph_begin((o2_saved_48));        !list$1sRightValueObjectph_end((o2_saved_48));        it2_51=list$1sRightValueObjectph_next((o2_saved_48))        ){
            if(it_47->mID==it2_51->mID) {
                it2_51->mStored=(_Bool)1;
                break;
            }
        }
        come_call_finalizer3(o2_saved_48,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(right_value->var) {
        if(right_value->var->mType->mDelegate) {
            __dec_obj12=right_value->var->mCValueName;
            right_value->var->mCValueName=((void*)0);
            __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            if(right_value->var->mType->mShare) {
                if(!no_delete_from_right_value_objects&&right_value->c_value_without_right_value_objects) {
                    __dec_obj13=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(right_value->c_value_without_right_value_objects);
                    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                __dec_obj14=right_value->c_value;
                right_value->c_value=(char*)come_increment_ref_count(increment_ref_count_object(right_value->type,right_value->c_value,info));
                __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                if(right_value->var->mType->mClone) {
                    if(!no_delete_from_right_value_objects&&right_value->c_value_without_right_value_objects) {
                        __dec_obj15=right_value->c_value;
                        right_value->c_value=(char*)come_increment_ref_count(right_value->c_value_without_right_value_objects);
                        __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    __dec_obj16=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(increment_ref_count_object(right_value->type,right_value->c_value,info));
                    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    if(!no_delete_from_right_value_objects&&right_value->c_value_without_right_value_objects) {
                        __dec_obj17=right_value->c_value;
                        right_value->c_value=(char*)come_increment_ref_count(right_value->c_value_without_right_value_objects);
                        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    __dec_obj18=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(increment_ref_count_object(right_value->type,right_value->c_value,info));
                    __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
        }
    }
    else {
        if(right_value->type->mDelegate) {
        }
        else {
            if(!no_delete_from_right_value_objects&&right_value->c_value_without_right_value_objects) {
                __dec_obj19=right_value->c_value;
                right_value->c_value=(char*)come_increment_ref_count(right_value->c_value_without_right_value_objects);
                __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            __dec_obj20=right_value->c_value;
            right_value->c_value=(char*)come_increment_ref_count(increment_ref_count_object(right_value->type,right_value->c_value,info));
            __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct sRightValueObject* result_49;
struct sRightValueObject* __result45__;
struct sRightValueObject* __result46__;
struct sRightValueObject* result_50;
struct sRightValueObject* __result47__;
result_49 = (void*)0;
result_50 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_49,0,sizeof(struct sRightValueObject*));
        __result45__ = __result_obj__ = result_49;
        return __result45__;
    }
    self->it=self->head;
    if(self->it) {
        __result46__ = __result_obj__ = self->it->item;
        return __result46__;
    }
    memset(&result_50,0,sizeof(struct sRightValueObject*));
    __result47__ = __result_obj__ = result_50;
    return __result47__;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct sRightValueObject* result_52;
struct sRightValueObject* __result48__;
struct sRightValueObject* __result49__;
struct sRightValueObject* result_53;
struct sRightValueObject* __result50__;
result_52 = (void*)0;
result_53 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_52,0,sizeof(struct sRightValueObject*));
        __result48__ = __result_obj__ = result_52;
        return __result48__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result49__ = __result_obj__ = self->it->item;
        return __result49__;
    }
    memset(&result_53,0,sizeof(struct sRightValueObject*));
    __result50__ = __result_obj__ = result_53;
    return __result50__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_54;
struct list_item$1sRightValueObjectph* prev_it_55;
    it_54=self->head;
    while(it_54!=((void*)0)) {
        prev_it_55=it_54;
        it_54=it_54->next;
        come_call_finalizer3(prev_it_55,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    }
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
struct list_item$1sTypeph* it_56;
struct list_item$1sTypeph* prev_it_57;
    it_56=self->head;
    while(it_56!=((void*)0)) {
        prev_it_57=it_56;
        it_56=it_56->next;
        come_call_finalizer3(prev_it_57,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_58;
struct list_item$1sNodeph* prev_it_59;
    it_58=self->head;
    while(it_58!=((void*)0)) {
        prev_it_59=it_58;
        it_58=it_58->next;
        come_call_finalizer3(prev_it_59,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_60;
struct list_item$1charph* prev_it_61;
    it_60=self->head;
    while(it_60!=((void*)0)) {
        prev_it_61=it_60;
        it_60=it_60->next;
        come_call_finalizer3(prev_it_61,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value118 = (void*)0;
struct sType* result_62;
struct sType* __result69__;
struct sType* __result70__;
struct sClass* klass_87;
void* __right_value119 = (void*)0;
struct sType* result_type_88;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct tuple1$1sTypeph* __dec_obj45;
struct list$1sTypeph* o2_saved_91;
struct sType* it_94;
void* __right_value122 = (void*)0;
struct sType* new_param_type_97;
void* __right_value126 = (void*)0;
int generics_number_101;
void* __right_value127 = (void*)0;
struct list$1sNodeph* array_num_102;
_Bool immutable__103;
int pointer_num_104;
_Bool heap_105;
_Bool guard__106;
_Bool no_heap_107;
_Bool no_calling_destructor_108;
_Bool null_value_109;
void* __right_value128 = (void*)0;
struct sType* __dec_obj49;
struct list$1sNodeph* __dec_obj50;
int generics_number_113;
struct sClass* klass2_114;
int generics_number2_115;
void* __right_value129 = (void*)0;
struct list$1sNodeph* array_num_116;
_Bool immutable__117;
int pointer_num_118;
_Bool heap_119;
_Bool guard__120;
_Bool no_heap_121;
_Bool no_calling_destructor_122;
_Bool null_value_123;
_Bool record__124;
void* __right_value130 = (void*)0;
struct sType* __dec_obj51;
struct list$1sNodeph* __dec_obj52;
struct list$1sTypeph* o2_saved_125;
struct sType* it_126;
void* __right_value131 = (void*)0;
struct sType* type_127;
void* __right_value132 = (void*)0;
struct list$1sTypeph* o2_saved_128;
struct sType* it_129;
void* __right_value133 = (void*)0;
struct sType* type_130;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
char* new_name_131;
struct sType* __result82__;
    result_62=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(generics_type==((void*)0)) {
        __result69__ = __result_obj__ = result_62;
        come_call_finalizer3(result_62,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result69__;
    }
    if(list$1sTypeph_length(generics_type->mGenericsTypes)==0) {
        __result70__ = __result_obj__ = result_62;
        come_call_finalizer3(result_62,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result70__;
    }
    klass_87=type->mClass;
    if(string_operator_equals(klass_87->mName,"lambda")) {
        result_type_88=(struct sType*)come_increment_ref_count(solve_generics(type->mResultType->v1,generics_type,info));
        __dec_obj45=result_62->mResultType;
        result_62->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value120=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 67, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_88)));
        come_call_finalizer3(__dec_obj45,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value120,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1sTypeph_reset(result_62->mParamTypes);
        for(        o2_saved_91=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_94=list$1sTypeph_begin((o2_saved_91));        !list$1sTypeph_end((o2_saved_91));        it_94=list$1sTypeph_next((o2_saved_91))        ){
            new_param_type_97=(struct sType*)come_increment_ref_count(solve_generics(it_94,generics_type,info));
            list$1sTypeph_push_back(result_62->mParamTypes,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value126=sType_clone(new_param_type_97)))));
            come_call_finalizer3(__right_value126,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(new_param_type_97,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_91,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_88,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(klass_87->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0) {
            generics_number_101=klass_87->mMethodGenericsNum;
            if(generics_number_101>=list$1sTypeph_length(info->method_generics_types)) {
                err_msg(info,"invalid method generics parametor number. %d %d",generics_number_101,list$1sTypeph_length(info->method_generics_types));
                exit(2);
            }
            array_num_102=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(type->mArrayNum));
            immutable__103=type->mImmutable;
            pointer_num_104=type->mPointerNum;
            heap_105=type->mHeap;
            guard__106=type->mGuardValue;
            no_heap_107=type->mNoHeap;
            no_calling_destructor_108=type->mNoCallingDestructor;
            null_value_109=type->mNullValue;
            __dec_obj49=result_62;
            result_62=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_101), "04heap.c", 96, 0))));
            come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(heap_105) {
                result_62->mHeap=heap_105;
            }
            if(guard__106) {
                result_62->mGuardValue=guard__106;
            }
            if(no_heap_107) {
                result_62->mNoHeap=(_Bool)1;
                result_62->mHeap=(_Bool)0;
            }
            if(no_calling_destructor_108) {
                result_62->mNoCallingDestructor=(_Bool)1;
            }
            if(immutable__103) {
                result_62->mImmutable=immutable__103;
            }
            if(list$1sNodeph_length(array_num_102)>0) {
                __dec_obj50=result_62->mArrayNum;
                result_62->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_102);
                come_call_finalizer3(__dec_obj50,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(null_value_109) {
                result_62->mNullValue=null_value_109;
            }
            if(pointer_num_104>0) {
                result_62->mPointerNum+=pointer_num_104;
            }
            come_call_finalizer3(array_num_102,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(klass_87->mGenerics) {
                generics_number_113=klass_87->mGenericsNum;
                if(generics_number_113>=list$1sTypeph_length(generics_type->mGenericsTypes)) {
                    err_msg(info,"invalid generics parametor number");
                    exit(2);
                }
                klass2_114=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_113), "04heap.c", 135, 1))->mClass;
                generics_number2_115=klass2_114->mGenericsNum;
                if(generics_number_113!=generics_number2_115) {
                    array_num_116=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(type->mArrayNum));
                    immutable__117=type->mImmutable;
                    pointer_num_118=type->mPointerNum;
                    heap_119=type->mHeap;
                    guard__120=type->mGuardValue;
                    no_heap_121=type->mNoHeap;
                    no_calling_destructor_122=type->mNoCallingDestructor;
                    null_value_123=type->mNullValue;
                    record__124=type->mRecord;
                    __dec_obj51=result_62;
                    result_62=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_113), "04heap.c", 152, 2))));
                    come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(heap_119) {
                        result_62->mHeap=heap_119;
                    }
                    if(guard__120) {
                        result_62->mGuardValue=guard__120;
                    }
                    if(record__124) {
                        result_62->mRecord=record__124;
                    }
                    if(no_heap_121) {
                        result_62->mNoHeap=(_Bool)1;
                        result_62->mHeap=(_Bool)0;
                    }
                    if(no_calling_destructor_122) {
                        result_62->mNoCallingDestructor=(_Bool)1;
                    }
                    if(immutable__117) {
                        result_62->mImmutable=immutable__117;
                    }
                    if(list$1sNodeph_length(array_num_116)>0) {
                        __dec_obj52=result_62->mArrayNum;
                        result_62->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_116);
                        come_call_finalizer3(__dec_obj52,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(null_value_123) {
                        result_62->mNullValue=null_value_123;
                    }
                    if(pointer_num_118>0) {
                        result_62->mPointerNum+=pointer_num_118;
                    }
                    come_call_finalizer3(array_num_116,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                list$1sTypeph_reset(result_62->mGenericsTypes);
                for(                o2_saved_125=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_126=list$1sTypeph_begin((o2_saved_125));                !list$1sTypeph_end((o2_saved_125));                it_126=list$1sTypeph_next((o2_saved_125))                ){
                    type_127=(struct sType*)come_increment_ref_count(solve_generics(it_126,generics_type,info));
                    list$1sTypeph_push_back(result_62->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value132=sType_clone(type_127)))));
                    come_call_finalizer3(__right_value132,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(type_127,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_125,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                list$1sTypeph_reset(result_62->mMultipleTypes);
                for(                o2_saved_128=(struct list$1sTypeph*)come_increment_ref_count((type->mMultipleTypes)),it_129=list$1sTypeph_begin((o2_saved_128));                !list$1sTypeph_end((o2_saved_128));                it_129=list$1sTypeph_next((o2_saved_128))                ){
                    type_130=(struct sType*)come_increment_ref_count(solve_generics(it_129,generics_type,info));
                    list$1sTypeph_push_back(result_62->mMultipleTypes,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value134=sType_clone(type_130)))));
                    come_call_finalizer3(__right_value134,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(type_130,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_128,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                if(!output_generics_struct(result_62,generics_type,info)) {
                    new_name_131=(char*)come_increment_ref_count(create_generics_name(type,info));
                    printf("output generics is failed(%s)",new_name_131);
                    exit(1);
                    new_name_131 = come_decrement_ref_count2(new_name_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    __result82__ = __result_obj__ = result_62;
    come_call_finalizer3(result_62,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result82__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result51__;
void* __right_value83 = (void*)0;
struct sType* result_63;
void* __right_value90 = (void*)0;
struct list$1sTypeph* __dec_obj24;
void* __right_value93 = (void*)0;
struct tuple1$1sTypeph* __dec_obj26;
void* __right_value94 = (void*)0;
struct tuple1$1sTypeph* __dec_obj27;
void* __right_value95 = (void*)0;
char* __dec_obj28;
void* __right_value96 = (void*)0;
struct list$1sTypeph* __dec_obj29;
void* __right_value104 = (void*)0;
struct list$1sNodeph* __dec_obj33;
void* __right_value105 = (void*)0;
struct list$1sTypeph* __dec_obj34;
void* __right_value112 = (void*)0;
struct list$1charph* __dec_obj38;
void* __right_value113 = (void*)0;
struct tuple1$1sTypeph* __dec_obj39;
void* __right_value114 = (void*)0;
struct sNode* __dec_obj40;
void* __right_value115 = (void*)0;
struct sNode* __dec_obj41;
void* __right_value116 = (void*)0;
char* __dec_obj42;
void* __right_value117 = (void*)0;
char* __dec_obj43;
struct sType* __result68__;
    if(self==(void*)0) {
        __result51__ = __result_obj__ = (void*)0;
        return __result51__;
    }
    result_63=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_63->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
        __dec_obj24=result_63->mMultipleTypes;
        result_63->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mMultipleTypes));
        come_call_finalizer3(__dec_obj24,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj26=result_63->mNoSolvedGenericsType;
        result_63->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj26,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj27=result_63->mOriginalLoadVarType;
        result_63->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj27,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj28=result_63->mGenericsName;
        result_63->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj29=result_63->mGenericsTypes;
        result_63->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj29,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj33=result_63->mArrayNum;
        result_63->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj33,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_63->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj34=result_63->mParamTypes;
        result_63->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj34,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj38=result_63->mParamNames;
        result_63->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj38,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj39=result_63->mResultType;
        result_63->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj39,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_63->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj40=result_63->mAlignas;
        result_63->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_63->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result_63->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result_63->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result_63->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result_63->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result_63->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result_63->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result_63->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result_63->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result_63->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result_63->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result_63->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result_63->mImmutable=self->mImmutable;
    }
    if(self!=((void*)0)) {
        result_63->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result_63->mDummyHeap=self->mDummyHeap;
    }
    if(self!=((void*)0)) {
        result_63->mDelegate=self->mDelegate;
    }
    if(self!=((void*)0)) {
        result_63->mShare=self->mShare;
    }
    if(self!=((void*)0)) {
        result_63->mClone=self->mClone;
    }
    if(self!=((void*)0)) {
        result_63->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result_63->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result_63->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result_63->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result_63->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result_63->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(self!=((void*)0)) {
        result_63->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result_63->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj41=result_63->mSizeNum;
        result_63->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_63->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_63->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj42=result_63->mOriginalTypeName;
        result_63->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_63->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(self!=((void*)0)) {
        result_63->mFunctionParam=self->mFunctionParam;
    }
    if(self!=((void*)0)) {
        result_63->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result_63->mGenericsStruct=self->mGenericsStruct;
    }
    if(self!=((void*)0)) {
        result_63->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(self!=((void*)0)) {
        result_63->mComeMemCore=self->mComeMemCore;
    }
    if(self!=((void*)0)) {
        result_63->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result_63->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result_63->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj43=result_63->mAsmName;
        result_63->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_63->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)) {
        result_63->mLambdaArray=self->mLambdaArray;
    }
    if(self!=((void*)0)) {
        result_63->mNoNumberArray=self->mNoNumberArray;
    }
    __result68__ = __result_obj__ = result_63;
    come_call_finalizer3(result_63,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result68__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result52__;
void* __right_value84 = (void*)0;
void* __right_value85 = (void*)0;
struct list$1sTypeph* result_64;
struct list_item$1sTypeph* it_65;
void* __right_value89 = (void*)0;
struct list$1sTypeph* __result55__;
    if(self==((void*)0)) {
        __result52__ = __result_obj__ = ((void*)0);
        return __result52__;
    }
    result_64=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value84=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))));
    come_call_finalizer3(__right_value84,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    it_65=self->head;
    while(it_65!=((void*)0)) {
        list$1sTypeph_add(result_64,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value89=sType_clone(it_65->item)))));
        come_call_finalizer3(__right_value89,sType_finalize, 0, 1, 0, 0, __result_obj__);
        it_65=it_65->next;
    }
    __result55__ = __result_obj__ = result_64;
    come_call_finalizer3(result_64,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result55__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result53__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result53__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result53__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value86 = (void*)0;
struct list_item$1sTypeph* litem_66;
struct sType* __dec_obj21;
void* __right_value87 = (void*)0;
struct list_item$1sTypeph* litem_67;
struct sType* __dec_obj22;
void* __right_value88 = (void*)0;
struct list_item$1sTypeph* litem_68;
struct sType* __dec_obj23;
struct list$1sTypeph* __result54__;
    if(self->len==0) {
        litem_66=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
        come_call_finalizer3(__right_value86,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_66->prev=((void*)0);
        litem_66->next=((void*)0);
        __dec_obj21=litem_66->item;
        litem_66->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj21,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_66;
        self->head=litem_66;
    }
    else {
        if(self->len==1) {
            litem_67=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value87=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
            come_call_finalizer3(__right_value87,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_67->prev=self->head;
            litem_67->next=((void*)0);
            __dec_obj22=litem_67->item;
            litem_67->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj22,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_67;
            self->head->next=litem_67;
        }
        else {
            litem_68=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value88=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
            come_call_finalizer3(__right_value88,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_68->prev=self->tail;
            litem_68->next=((void*)0);
            __dec_obj23=litem_68->item;
            litem_68->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj23,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_68;
            self->tail=litem_68;
        }
    }
    self->len++;
    __result54__ = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result54__;
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_69;
struct list_item$1sTypeph* prev_it_70;
    it_69=self->head;
    while(it_69!=((void*)0)) {
        prev_it_70=it_69;
        it_69=it_69->next;
        come_call_finalizer3(prev_it_70,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result56__;
void* __right_value91 = (void*)0;
struct tuple1$1sTypeph* result_71;
void* __right_value92 = (void*)0;
struct sType* __dec_obj25;
struct tuple1$1sTypeph* __result57__;
    if(self==(void*)0) {
        __result56__ = __result_obj__ = (void*)0;
        return __result56__;
    }
    result_71=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj25=result_71->v1;
        result_71->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj25,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result57__ = __result_obj__ = result_71;
    come_call_finalizer3(result_71,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    return __result57__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result58__;
void* __right_value97 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1sNodeph* result_72;
struct list_item$1sNodeph* it_73;
void* __right_value103 = (void*)0;
struct list$1sNodeph* __result63__;
    if(self==((void*)0)) {
        __result58__ = __result_obj__ = ((void*)0);
        return __result58__;
    }
    result_72=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value97=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))));
    come_call_finalizer3(__right_value97,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    it_73=self->head;
    while(it_73!=((void*)0)) {
        list$1sNodeph_add(result_72,(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value103=sNode_clone(it_73->item)))));
        if(__right_value103) { __right_value103 = come_decrement_ref_count2(__right_value103, ((struct sNode*)__right_value103)->finalize, ((struct sNode*)__right_value103)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        it_73=it_73->next;
    }
    __result63__ = __result_obj__ = result_72;
    come_call_finalizer3(result_72,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result63__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result59__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result59__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result59__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
struct list_item$1sNodeph* litem_74;
struct sNode* __dec_obj30;
void* __right_value100 = (void*)0;
struct list_item$1sNodeph* litem_75;
struct sNode* __dec_obj31;
void* __right_value101 = (void*)0;
struct list_item$1sNodeph* litem_76;
struct sNode* __dec_obj32;
struct list$1sNodeph* __result60__;
    if(self->len==0) {
        litem_74=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
        come_call_finalizer3(__right_value99,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_74->prev=((void*)0);
        litem_74->next=((void*)0);
        __dec_obj30=litem_74->item;
        litem_74->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_74;
        self->head=litem_74;
    }
    else {
        if(self->len==1) {
            litem_75=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value100=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value100,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_75->prev=self->head;
            litem_75->next=((void*)0);
            __dec_obj31=litem_75->item;
            litem_75->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_75;
            self->head->next=litem_75;
        }
        else {
            litem_76=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value101=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value101,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_76->prev=self->tail;
            litem_76->next=((void*)0);
            __dec_obj32=litem_76->item;
            litem_76->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_76;
            self->tail=litem_76;
        }
    }
    self->len++;
    __result60__ = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result60__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result61__;
void* __right_value102 = (void*)0;
struct sNode* result_77;
struct sNode* __result62__;
    if(self==(void*)0) {
        __result61__ = __result_obj__ = (void*)0;
        return __result61__;
    }
    result_77=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_77->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_77->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_77->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_77->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_77->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_77->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_77->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result_77->kind=self->kind;
    }
    __result62__ = __result_obj__ = result_77;
    if(result_77) { result_77 = come_decrement_ref_count2(result_77, ((struct sNode*)result_77)->finalize, ((struct sNode*)result_77)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result62__;
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_78;
struct list_item$1sNodeph* prev_it_79;
    it_78=self->head;
    while(it_78!=((void*)0)) {
        prev_it_79=it_78;
        it_78=it_78->next;
        come_call_finalizer3(prev_it_79,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result64__;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
struct list$1charph* result_80;
struct list_item$1charph* it_81;
void* __right_value111 = (void*)0;
struct list$1charph* __result67__;
    if(self==((void*)0)) {
        __result64__ = __result_obj__ = ((void*)0);
        return __result64__;
    }
    result_80=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value106=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))));
    come_call_finalizer3(__right_value106,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    it_81=self->head;
    while(it_81!=((void*)0)) {
        list$1charph_add(result_80,(char*)come_increment_ref_count(((char*)(__right_value111=string_clone(it_81->item)))));
        __right_value111 = come_decrement_ref_count2(__right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        it_81=it_81->next;
    }
    __result67__ = __result_obj__ = result_80;
    come_call_finalizer3(result_80,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result67__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result65__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result65__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result65__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value108 = (void*)0;
struct list_item$1charph* litem_82;
char* __dec_obj35;
void* __right_value109 = (void*)0;
struct list_item$1charph* litem_83;
char* __dec_obj36;
void* __right_value110 = (void*)0;
struct list_item$1charph* litem_84;
char* __dec_obj37;
struct list$1charph* __result66__;
    if(self->len==0) {
        litem_82=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
        come_call_finalizer3(__right_value108,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_82->prev=((void*)0);
        litem_82->next=((void*)0);
        __dec_obj35=litem_82->item;
        litem_82->item=(char*)come_increment_ref_count(item);
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_82;
        self->head=litem_82;
    }
    else {
        if(self->len==1) {
            litem_83=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value109=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
            come_call_finalizer3(__right_value109,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_83->prev=self->head;
            litem_83->next=((void*)0);
            __dec_obj36=litem_83->item;
            litem_83->item=(char*)come_increment_ref_count(item);
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_83;
            self->head->next=litem_83;
        }
        else {
            litem_84=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value110=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
            come_call_finalizer3(__right_value110,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_84->prev=self->tail;
            litem_84->next=((void*)0);
            __dec_obj37=litem_84->item;
            litem_84->item=(char*)come_increment_ref_count(item);
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_84;
            self->tail=litem_84;
        }
    }
    self->len++;
    __result66__ = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result66__;
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_85;
struct list_item$1charph* prev_it_86;
    it_85=self->head;
    while(it_85!=((void*)0)) {
        prev_it_86=it_85;
        it_85=it_85->next;
        come_call_finalizer3(prev_it_86,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj44;
struct tuple1$1sTypeph* __result71__;
    __dec_obj44=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result71__ = __result_obj__ = self;
    come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result71__;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_89;
struct list_item$1sTypeph* prev_it_90;
struct list$1sTypeph* __result72__;
    it_89=self->head;
    while(it_89!=((void*)0)) {
        prev_it_90=it_89;
        it_89=it_89->next;
        come_call_finalizer3(prev_it_90,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result72__ = __result_obj__ = self;
    return __result72__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_92;
struct sType* __result73__;
struct sType* __result74__;
struct sType* result_93;
struct sType* __result75__;
result_92 = (void*)0;
result_93 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_92,0,sizeof(struct sType*));
        __result73__ = __result_obj__ = result_92;
        return __result73__;
    }
    self->it=self->head;
    if(self->it) {
        __result74__ = __result_obj__ = self->it->item;
        return __result74__;
    }
    memset(&result_93,0,sizeof(struct sType*));
    __result75__ = __result_obj__ = result_93;
    return __result75__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_95;
struct sType* __result76__;
struct sType* __result77__;
struct sType* result_96;
struct sType* __result78__;
result_95 = (void*)0;
result_96 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_95,0,sizeof(struct sType*));
        __result76__ = __result_obj__ = result_95;
        return __result76__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result77__ = __result_obj__ = self->it->item;
        return __result77__;
    }
    memset(&result_96,0,sizeof(struct sType*));
    __result78__ = __result_obj__ = result_96;
    return __result78__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value123 = (void*)0;
struct list_item$1sTypeph* litem_98;
struct sType* __dec_obj46;
void* __right_value124 = (void*)0;
struct list_item$1sTypeph* litem_99;
struct sType* __dec_obj47;
void* __right_value125 = (void*)0;
struct list_item$1sTypeph* litem_100;
struct sType* __dec_obj48;
struct list$1sTypeph* __result79__;
    if(self->len==0) {
        litem_98=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value123=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 219, "list_item$1sTypeph"))));
        come_call_finalizer3(__right_value123,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_98->prev=((void*)0);
        litem_98->next=((void*)0);
        __dec_obj46=litem_98->item;
        litem_98->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_98;
        self->head=litem_98;
    }
    else {
        if(self->len==1) {
            litem_99=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value124=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 229, "list_item$1sTypeph"))));
            come_call_finalizer3(__right_value124,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_99->prev=self->head;
            litem_99->next=((void*)0);
            __dec_obj47=litem_99->item;
            litem_99->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_99;
            self->head->next=litem_99;
        }
        else {
            litem_100=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value125=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 239, "list_item$1sTypeph"))));
            come_call_finalizer3(__right_value125,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_100->prev=self->tail;
            litem_100->next=((void*)0);
            __dec_obj48=litem_100->item;
            litem_100->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_100;
            self->tail=litem_100;
        }
    }
    self->len++;
    __result79__ = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result79__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_110;
int i_111;
struct sType* __result80__;
struct sType* default_value_112;
struct sType* __result81__;
default_value_112 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_110=self->head;
    i_111=0;
    while(it_110!=((void*)0)) {
        if(position==i_111) {
            __result80__ = __result_obj__ = it_110->item;
            return __result80__;
        }
        it_110=it_110->next;
        i_111++;
    }
    memset(&default_value_112,0,sizeof(struct sType*));
    __result81__ = __result_obj__ = default_value_112;
    come_call_finalizer3(default_value_112,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result81__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sType* solve_method_generics(struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct sType* result_132;
struct sClass* klass_133;
int generics_number_134;
void* __right_value137 = (void*)0;
struct list$1sNodeph* array_num_135;
_Bool immutable__136;
int pointer_num_137;
_Bool heap_138;
_Bool guard__139;
_Bool no_heap_140;
_Bool no_calling_destructor_141;
_Bool null_value_142;
void* __right_value138 = (void*)0;
struct sType* __dec_obj53;
struct list$1sNodeph* __dec_obj54;
struct sType* __result83__;
    result_132=(struct sType*)come_increment_ref_count(sType_clone(type));
    klass_133=type->mClass;
    if(klass_133->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0) {
        generics_number_134=klass_133->mMethodGenericsNum;
        if(generics_number_134>=list$1sTypeph_length(info->method_generics_types)) {
            err_msg(info,"invalid method generics parametor number. %d %d",generics_number_134,list$1sTypeph_length(info->method_generics_types));
            exit(2);
        }
        array_num_135=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(type->mArrayNum));
        immutable__136=type->mImmutable;
        pointer_num_137=type->mPointerNum;
        heap_138=type->mHeap;
        guard__139=type->mGuardValue;
        no_heap_140=type->mNoHeap;
        no_calling_destructor_141=type->mNoCallingDestructor;
        null_value_142=type->mNullValue;
        __dec_obj53=result_132;
        result_132=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_134), "04heap.c", 234, 3))));
        come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(heap_138) {
            result_132->mHeap=heap_138;
        }
        if(guard__139) {
            result_132->mGuardValue=guard__139;
        }
        if(no_heap_140) {
            result_132->mNoHeap=(_Bool)1;
            result_132->mHeap=(_Bool)0;
        }
        if(no_calling_destructor_141) {
            result_132->mNoCallingDestructor=(_Bool)1;
        }
        if(immutable__136) {
            result_132->mImmutable=immutable__136;
        }
        if(list$1sNodeph_length(array_num_135)>0) {
            __dec_obj54=result_132->mArrayNum;
            result_132->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_135);
            come_call_finalizer3(__dec_obj54,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(null_value_142) {
            result_132->mNullValue=null_value_142;
        }
        if(pointer_num_137>0) {
            result_132->mPointerNum+=pointer_num_137;
        }
        come_call_finalizer3(array_num_135,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result83__ = __result_obj__ = result_132;
    come_call_finalizer3(result_132,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result83__;
}

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
struct sType* result_143;
void* __right_value140 = (void*)0;
struct sType* __dec_obj55;
struct sType* __result84__;
    result_143=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(generics_type) {
        __dec_obj55=result_143;
        result_143=(struct sType*)come_increment_ref_count(solve_generics(result_143,generics_type,info));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result84__ = __result_obj__ = result_143;
    come_call_finalizer3(result_143,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result84__;
}

int get_right_value_id_from_obj(char* obj){
char* p_144;
int n_145;
int __result85__;
int __result86__;
    p_144=obj;
    if(*p_144==40) {
        p_144++;
        while(*p_144!=41) {
            p_144++;
        }
        p_144++;
        if(*p_144==40) {
            p_144++;
            if(strcmp(p_144,"__right_value")==0) {
                p_144+=strlen("__right_value");
                if(xisdigit(*p_144)) {
                    n_145=0;
                    while(xisdigit(*p_144)) {
                        n_145=n_145*10+*p_144-48;
                        p_144++;
                    }
                    __result85__ = n_145;
                    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result85__;
                }
            }
        }
    }
    __result86__ = -1;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result86__;
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
char* __result87__;
void* __right_value142 = (void*)0;
char* __result88__;
void* __right_value143 = (void*)0;
struct sRightValueObject* new_value_146;
struct sType* __dec_obj56;
void* __right_value144 = (void*)0;
char* __dec_obj57;
void* __right_value145 = (void*)0;
char* __dec_obj58;
void* __right_value149 = (void*)0;
char* buf_150;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
char* __result90__;
    if(gComeGC||gComeC) {
        __result87__ = __result_obj__ = ((char*)(__right_value141=__builtin_string(obj)));
        come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
        __right_value141 = come_decrement_ref_count2(__right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result87__;
    }
    if(info->no_output_come_code) {
        __result88__ = __result_obj__ = ((char*)(__right_value142=__builtin_string("")));
        come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
        __right_value142 = come_decrement_ref_count2(__right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result88__;
    }
    new_value_146=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 317, "sRightValueObject"));
    __dec_obj56=new_value_146->mType;
    new_value_146->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
    new_value_146->mFreed=(_Bool)0;
    new_value_146->mID=gRightValueNum;
    __dec_obj57=new_value_146->mVarName;
    new_value_146->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",gRightValueNum++));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj58=new_value_146->mFunName;
    new_value_146->mFunName=(char*)come_increment_ref_count(string_clone(info->come_fun->mName));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    new_value_146->mBlockLevel=info->block_level;
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_146));
    buf_150=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",gRightValueNum-1));
    add_come_code_at_function_head(info,buf_150);
    __result90__ = __result_obj__ = ((char*)(__right_value151=xsprintf("((%s)(%s=%s))",((char*)(__right_value150=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_146->mVarName,obj)));
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(new_value_146,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    buf_150 = come_decrement_ref_count2(buf_150, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value150 = come_decrement_ref_count2(__right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value151 = come_decrement_ref_count2(__right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result90__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__=(void*)0;
void* __right_value146 = (void*)0;
struct list_item$1sRightValueObjectph* litem_147;
struct sRightValueObject* __dec_obj59;
void* __right_value147 = (void*)0;
struct list_item$1sRightValueObjectph* litem_148;
struct sRightValueObject* __dec_obj60;
void* __right_value148 = (void*)0;
struct list_item$1sRightValueObjectph* litem_149;
struct sRightValueObject* __dec_obj61;
struct list$1sRightValueObjectph* __result89__;
    if(self->len==0) {
        litem_147=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(__right_value146=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./neo-c.h", 219, "list_item$1sRightValueObjectph"))));
        come_call_finalizer3(__right_value146,list_item$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        __dec_obj59=litem_147->item;
        litem_147->item=(struct sRightValueObject*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_147;
        self->head=litem_147;
    }
    else {
        if(self->len==1) {
            litem_148=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(__right_value147=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./neo-c.h", 229, "list_item$1sRightValueObjectph"))));
            come_call_finalizer3(__right_value147,list_item$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_148->prev=self->head;
            litem_148->next=((void*)0);
            __dec_obj60=litem_148->item;
            litem_148->item=(struct sRightValueObject*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj60,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_148;
            self->head->next=litem_148;
        }
        else {
            litem_149=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(__right_value148=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./neo-c.h", 239, "list_item$1sRightValueObjectph"))));
            come_call_finalizer3(__right_value148,list_item$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_149->prev=self->tail;
            litem_149->next=((void*)0);
            __dec_obj61=litem_149->item;
            litem_149->item=(struct sRightValueObject*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj61,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_149;
            self->tail=litem_149;
        }
    }
    self->len++;
    __result89__ = __result_obj__ = self;
    come_call_finalizer3(item,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
    return __result89__;
}

void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info){
void* __right_value152 = (void*)0;
struct sRightValueObject* new_value_151;
struct sType* __dec_obj62;
void* __right_value153 = (void*)0;
char* __dec_obj63;
void* __right_value154 = (void*)0;
char* __dec_obj64;
void* __right_value155 = (void*)0;
char* buf_152;
void* __right_value156 = (void*)0;
char* __dec_obj65;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
char* __dec_obj66;
    if(gComeGC||gComeC) {
        come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
        return;
    }
    if(info->no_output_come_code) {
        come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
        return;
    }
    new_value_151=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 341, "sRightValueObject"));
    __dec_obj62=new_value_151->mType;
    new_value_151->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
    new_value_151->mFreed=(_Bool)0;
    new_value_151->mID=gRightValueNum;
    __dec_obj63=new_value_151->mVarName;
    new_value_151->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",gRightValueNum++));
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj64=new_value_151->mFunName;
    new_value_151->mFunName=(char*)come_increment_ref_count(string_clone(info->come_fun->mName));
    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    new_value_151->mBlockLevel=info->block_level;
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_151));
    buf_152=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",gRightValueNum-1));
    add_come_code_at_function_head(info,buf_152);
    __dec_obj65=come_value->c_value_without_right_value_objects;
    come_value->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(come_value->c_value));
    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj66=come_value->c_value;
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("((%s)(%s=%s))",((char*)(__right_value157=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_151->mVarName,come_value->c_value));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value157 = come_decrement_ref_count2(__right_value157, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value->right_value_objects=new_value_151;
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(new_value_151,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    buf_152 = come_decrement_ref_count2(buf_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
int i_153;
struct list$1sRightValueObjectph* o2_saved_154;
struct sRightValueObject* it_155;
    if(gComeGC||gComeC) {
        return;
    }
    i_153=0;
    for(    o2_saved_154=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_155=list$1sRightValueObjectph_begin((o2_saved_154));    !list$1sRightValueObjectph_end((o2_saved_154));    it_155=list$1sRightValueObjectph_next((o2_saved_154))    ){
        if(it_155->mID==right_value_num) {
            break;
        }
        i_153++;
    }
    come_call_finalizer3(o2_saved_154,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1sRightValueObjectph_delete(info->right_value_objects,i_153,i_153+1);
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_156;
struct list$1sRightValueObjectph* __result91__;
struct list_item$1sRightValueObjectph* it_159;
int i_160;
struct list_item$1sRightValueObjectph* prev_it_161;
struct list_item$1sRightValueObjectph* it_162;
int i_163;
struct list_item$1sRightValueObjectph* prev_it_164;
struct list_item$1sRightValueObjectph* it_165;
struct list_item$1sRightValueObjectph* head_prev_it_166;
struct list_item$1sRightValueObjectph* tail_it_167;
int i_168;
struct list_item$1sRightValueObjectph* prev_it_169;
struct list$1sRightValueObjectph* __result93__;
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_156=tail;
        tail=head;
        head=tmp_156;
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
            it_159=self->head;
            i_160=0;
            while(it_159!=((void*)0)) {
                if(i_160<tail) {
                    prev_it_161=it_159;
                    it_159=it_159->next;
                    i_160++;
                    come_call_finalizer3(prev_it_161,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_160==tail) {
                        self->head=it_159;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_159=it_159->next;
                        i_160++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_162=self->head;
                i_163=0;
                while(it_162!=((void*)0)) {
                    if(i_163==head) {
                        self->tail=it_162->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_163>=head) {
                        prev_it_164=it_162;
                        it_162=it_162->next;
                        i_163++;
                        come_call_finalizer3(prev_it_164,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_162=it_162->next;
                        i_163++;
                    }
                }
            }
            else {
                it_165=self->head;
                head_prev_it_166=((void*)0);
                tail_it_167=((void*)0);
                i_168=0;
                while(it_165!=((void*)0)) {
                    if(i_168==head) {
                        head_prev_it_166=it_165->prev;
                    }
                    if(i_168==tail) {
                        tail_it_167=it_165;
                    }
                    if(i_168>=head&&i_168<tail) {
                        prev_it_169=it_165;
                        it_165=it_165->next;
                        i_168++;
                        come_call_finalizer3(prev_it_169,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_165=it_165->next;
                        i_168++;
                    }
                }
                if(head_prev_it_166!=((void*)0)) {
                    head_prev_it_166->next=tail_it_167;
                }
                if(tail_it_167!=((void*)0)) {
                    tail_it_167->prev=head_prev_it_166;
                }
            }
        }
    }
    __result93__ = __result_obj__ = self;
    return __result93__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list_item$1sRightValueObjectph* it_157;
struct list_item$1sRightValueObjectph* prev_it_158;
struct list$1sRightValueObjectph* __result92__;
    it_157=self->head;
    while(it_157!=((void*)0)) {
        prev_it_158=it_157;
        it_157=it_157->next;
        come_call_finalizer3(prev_it_158,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result92__ = __result_obj__ = self;
    return __result92__;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value159 = (void*)0;
char* __result94__;
struct sClass* klass_170;
void* __right_value160 = (void*)0;
char* type_name_171;
void* __right_value161 = (void*)0;
char* __result95__;
    if(gComeGC||gComeC) {
        __result94__ = __result_obj__ = ((char*)(__right_value159=__builtin_string(obj)));
        __right_value159 = come_decrement_ref_count2(__right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result94__;
    }
    klass_170=type->mClass;
    type_name_171=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __result95__ = __result_obj__ = ((char*)(__right_value161=xsprintf("(%s)come_increment_ref_count(%s)",type_name_171,obj)));
    type_name_171 = come_decrement_ref_count2(type_name_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value161 = come_decrement_ref_count2(__right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result95__;
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_){
struct list$1CVALUEph* stack_saved_172;
struct list$1sRightValueObjectph* right_value_objects_173;
struct sClass* klass_174;
void* __right_value162 = (void*)0;
char* name_176;
void* __right_value163 = (void*)0;
_Bool no_decrement_177;
_Bool no_free_178;
void* __right_value164 = (void*)0;
char* c_value_179;
struct sClass* klass_180;
char* class_name_181;
char* fun_name_182;
void* __right_value165 = (void*)0;
struct sType* type2_183;
void* __right_value166 = (void*)0;
char* fun_name2_184;
struct sFun* finalizer_185;
void* __right_value167 = (void*)0;
char* none_generics_name_189;
void* __right_value168 = (void*)0;
char* generics_fun_name_190;
struct sGenericsFun* generics_fun_191;
int i_195;
void* __right_value169 = (void*)0;
char* new_fun_name_196;
void* __right_value170 = (void*)0;
char* __dec_obj67;
void* __right_value171 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_197;
char* new_fun_name_198;
char* __dec_obj68;
void* __right_value172 = (void*)0;
char* type_name_199;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
char* type_name_200;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj69;
struct list$1CVALUEph* __dec_obj70;
memset(&i_195, 0, sizeof(int));
    if(gComeGC||gComeC) {
        return;
    }
    stack_saved_172=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_173=info->right_value_objects;
    klass_174=type->mClass;
    static int dec_num_175=0;
    name_176=(char*)come_increment_ref_count(xsprintf("__dec_obj%d",++dec_num_175));
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value163=make_define_var(type,name_176,(_Bool)0,info))));
    __right_value163 = come_decrement_ref_count2(__right_value163, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_come_code(info,"%s=%s;\n",name_176,obj);
    obj=name_176;
    no_decrement_177=(_Bool)0;
    no_free_178=(_Bool)0;
    if(type->mPointerNum>0) {
        c_value_179=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_180=type->mClass;
        class_name_181=klass_180->mName;
        fun_name_182="finalize";
        type2_183=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_183->mHeap=(_Bool)0;
        fun_name2_184=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_182,info,(_Bool)1));
        if(type->mNoSolvedGenericsType->v1) {
            type=type->mNoSolvedGenericsType->v1;
        }
        finalizer_185=((void*)0);
        if(list$1sTypeph_length(type->mGenericsTypes)>0) {
            finalizer_185=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_184);
            if(finalizer_185==((void*)0)) {
                none_generics_name_189=(char*)come_increment_ref_count(get_none_generics_name(type2_183->mClass->mName));
                generics_fun_name_190=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_189,fun_name_182));
                generics_fun_191=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_190);
                if(generics_fun_191) {
                    if(!create_generics_fun((char*)come_increment_ref_count(fun_name2_184),generics_fun_191,type,info)) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_185=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_184);
                }
                none_generics_name_189 = come_decrement_ref_count2(none_generics_name_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_190 = come_decrement_ref_count2(generics_fun_name_190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_195=128-1;            i_195>=1;            i_195--            ){
                new_fun_name_196=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_184,i_195));
                finalizer_185=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_196);
                if(finalizer_185) {
                    __dec_obj67=fun_name2_184;
                    fun_name2_184=(char*)come_increment_ref_count(__builtin_string(new_fun_name_196));
                    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_196 = come_decrement_ref_count2(new_fun_name_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_196 = come_decrement_ref_count2(new_fun_name_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(finalizer_185==((void*)0)) {
                finalizer_185=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_184);
            }
        }
        if(finalizer_185==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
            multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value171=create_finalizer_automatically(type,fun_name_182,info)));
            fun_197=multiple_assign_var1->v1;
            new_fun_name_198=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            come_call_finalizer3(__right_value171,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj68=fun_name2_184;
            fun_name2_184=(char*)come_increment_ref_count(new_fun_name_198);
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_185=fun_197;
            new_fun_name_198 = come_decrement_ref_count2(new_fun_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(finalizer_185!=((void*)0)) {
            if(klass_180->mProtocol&&type->mPointerNum==1) {
                type_name_199=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(c_value_179) {
                    add_come_last_code2(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_184,c_value_179,type_name_199,c_value_179,type_name_199,c_value_179,type->mAllocaValue,no_decrement_177,no_free_178,force_delete_);
                }
                type_name_199 = come_decrement_ref_count2(type_name_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(c_value_179) {
                    add_come_last_code2(info,((char*)(__right_value173=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_179,fun_name2_184,type->mAllocaValue,no_decrement_177,no_free_178,force_delete_))));
                    __right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
            }
        }
        else {
            if(klass_180->mProtocol&&type->mPointerNum==1) {
                type_name_200=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                add_come_last_code2(info,((char*)(__right_value175=xsprintf("if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0, (void*)0); }\n",name_176,name_176,name_176,type_name_200,name_176,type_name_200,name_176))));
                __right_value175 = come_decrement_ref_count2(__right_value175, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                type_name_200 = come_decrement_ref_count2(type_name_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_last_code2(info,((char*)(__right_value176=xsprintf("%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, 0,0,0, (void*)0);\n",name_176,name_176))));
                __right_value176 = come_decrement_ref_count2(__right_value176, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
        }
        c_value_179 = come_decrement_ref_count2(c_value_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_183,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name2_184 = come_decrement_ref_count2(fun_name2_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj69=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_173);
    come_call_finalizer3(__dec_obj69,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj70=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_172);
    come_call_finalizer3(__dec_obj70,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_172,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    name_176 = come_decrement_ref_count2(name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_186;
unsigned int hash_187;
unsigned int it_188;
struct sFun* __result96__;
struct sFun* __result97__;
struct sFun* __result98__;
struct sFun* __result99__;
default_value_186 = (void*)0;
    memset(&default_value_186,0,sizeof(struct sFun*));
    hash_187=string_get_hash_key(((char*)key))%self->size;
    it_188=hash_187;
    while((_Bool)1) {
        if(self->item_existance[it_188]) {
            if(string_equals(self->keys[it_188],key)) {
                __result96__ = __result_obj__ = self->items[it_188];
                come_call_finalizer3(default_value_186,sFun_finalize, 0, 0, 0, 0, (void*)0);
                return __result96__;
            }
            it_188++;
            if(it_188>=self->size) {
                it_188=0;
            }
            else {
                if(it_188==hash_187) {
                    __result97__ = __result_obj__ = default_value_186;
                    come_call_finalizer3(default_value_186,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result97__;
                }
            }
        }
        else {
            __result98__ = __result_obj__ = default_value_186;
            come_call_finalizer3(default_value_186,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result98__;
        }
    }
    __result99__ = __result_obj__ = default_value_186;
    come_call_finalizer3(default_value_186,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result99__;
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
void* __result_obj__=(void*)0;
struct sGenericsFun* default_value_192;
unsigned int hash_193;
unsigned int it_194;
struct sGenericsFun* __result100__;
struct sGenericsFun* __result101__;
struct sGenericsFun* __result102__;
struct sGenericsFun* __result103__;
default_value_192 = (void*)0;
    memset(&default_value_192,0,sizeof(struct sGenericsFun*));
    hash_193=string_get_hash_key(((char*)key))%self->size;
    it_194=hash_193;
    while((_Bool)1) {
        if(self->item_existance[it_194]) {
            if(string_equals(self->keys[it_194],key)) {
                __result100__ = __result_obj__ = self->items[it_194];
                come_call_finalizer3(default_value_192,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                return __result100__;
            }
            it_194++;
            if(it_194>=self->size) {
                it_194=0;
            }
            else {
                if(it_194==hash_193) {
                    __result101__ = __result_obj__ = default_value_192;
                    come_call_finalizer3(default_value_192,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result101__;
                }
            }
        }
        else {
            __result102__ = __result_obj__ = default_value_192;
            come_call_finalizer3(default_value_192,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result102__;
        }
    }
    __result103__ = __result_obj__ = default_value_192;
    come_call_finalizer3(default_value_192,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result103__;
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
struct list_item$1sRightValueObjectph* it_201;
struct list_item$1sRightValueObjectph* prev_it_202;
    it_201=self->head;
    while(it_201!=((void*)0)) {
        prev_it_202=it_201;
        it_201=it_201->next;
        come_call_finalizer3(prev_it_202,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_203;
struct list_item$1CVALUEph* prev_it_204;
    it_203=self->head;
    while(it_203!=((void*)0)) {
        prev_it_204=it_203;
        it_203=it_203->next;
        come_call_finalizer3(prev_it_204,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
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
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
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

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
struct list$1CVALUEph* stack_saved_207;
struct list$1sRightValueObjectph* right_value_objects_208;
struct sType* type_before_209;
void* __right_value177 = (void*)0;
char* c_value_210;
struct sClass* klass_211;
char* class_name_212;
char* fun_name_213;
void* __right_value178 = (void*)0;
struct sType* type2_214;
void* __right_value179 = (void*)0;
char* fun_name2_215;
struct sFun* finalizer_216;
void* __right_value180 = (void*)0;
char* none_generics_name_217;
void* __right_value181 = (void*)0;
char* generics_fun_name_218;
struct sGenericsFun* generics_fun_219;
int i_220;
void* __right_value182 = (void*)0;
char* new_fun_name_221;
void* __right_value183 = (void*)0;
char* __dec_obj71;
void* __right_value184 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun_222;
char* new_fun_name_223;
char* __dec_obj72;
void* __right_value185 = (void*)0;
char* type_name_224;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_225;
struct tuple2$2charphsTypeph* it_228;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_231;
struct sType* field_type_232;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
char* obj_233;
struct list$1tuple2$2charphsTypephph* o2_saved_236;
struct tuple2$2charphsTypeph* it_237;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* name_238;
struct sType* field_type_239;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
char* obj_240;
void* __right_value194 = (void*)0;
char* type_name_241;
void* __right_value195 = (void*)0;
char* c_value_242;
struct sClass* klass_243;
char* class_name_244;
char* fun_name_245;
void* __right_value196 = (void*)0;
struct sType* type2_246;
void* __right_value197 = (void*)0;
char* fun_name2_247;
struct sFun* finalizer_248;
void* __right_value198 = (void*)0;
char* none_generics_name_249;
void* __right_value199 = (void*)0;
char* generics_fun_name_250;
struct sGenericsFun* generics_fun_251;
int i_252;
void* __right_value200 = (void*)0;
char* new_fun_name_253;
void* __right_value201 = (void*)0;
char* __dec_obj73;
void* __right_value202 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5;
struct sFun* fun_254;
char* new_fun_name_255;
char* __dec_obj74;
void* __right_value203 = (void*)0;
char* type_name_256;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_257;
struct tuple2$2charphsTypeph* it_258;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* name_259;
struct sType* field_type_260;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
char* obj_261;
struct list$1tuple2$2charphsTypephph* o2_saved_262;
struct tuple2$2charphsTypeph* it_263;
struct tuple2$2charphsTypeph* multiple_assign_var7;
char* name_264;
struct sType* field_type_265;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
char* obj_266;
void* __right_value212 = (void*)0;
char* type_name_267;
struct list$1sRightValueObjectph* __dec_obj75;
struct list$1CVALUEph* __dec_obj76;
memset(&i_220, 0, sizeof(int));
memset(&i_252, 0, sizeof(int));
    if(gComeGC||gComeC) {
        return;
    }
    stack_saved_207=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_208=info->right_value_objects;
    type_before_209=type;
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(type->mPointerNum>0||type->mClass->mProtocol||list$1sTypeph_length(type->mGenericsTypes)>0||(info->come_fun->mCloner&&ret_value)) {
        if(force_delete_) {
            c_value_210=(char*)come_increment_ref_count(__builtin_string(obj));
            klass_211=type->mClass;
            class_name_212=klass_211->mName;
            fun_name_213="force_finalize";
            type2_214=(struct sType*)come_increment_ref_count(sType_clone(type));
            type2_214->mHeap=(_Bool)0;
            fun_name2_215=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_213,info,(_Bool)1));
            finalizer_216=((void*)0);
            if(list$1sTypeph_length(type->mGenericsTypes)>0) {
                finalizer_216=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_215);
                if(finalizer_216==((void*)0)) {
                    none_generics_name_217=(char*)come_increment_ref_count(get_none_generics_name(type2_214->mClass->mName));
                    generics_fun_name_218=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_217,fun_name_213));
                    generics_fun_219=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_218);
                    if(generics_fun_219) {
                        if(!create_generics_fun((char*)come_increment_ref_count(fun_name2_215),generics_fun_219,type,info)) {
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            exit(2);
                        }
                        finalizer_216=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_215);
                    }
                    none_generics_name_217 = come_decrement_ref_count2(none_generics_name_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_218 = come_decrement_ref_count2(generics_fun_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                for(                i_220=128-1;                i_220>=1;                i_220--                ){
                    new_fun_name_221=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_215,i_220));
                    finalizer_216=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_221);
                    if(finalizer_216) {
                        __dec_obj71=fun_name2_215;
                        fun_name2_215=(char*)come_increment_ref_count(__builtin_string(new_fun_name_221));
                        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                        new_fun_name_221 = come_decrement_ref_count2(new_fun_name_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_221 = come_decrement_ref_count2(new_fun_name_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(finalizer_216==((void*)0)) {
                    finalizer_216=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_215);
                }
            }
            if(finalizer_216==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(__right_value184=create_force_finalizer_automatically(type,fun_name_213,info)));
                fun_222=multiple_assign_var2->v1;
                new_fun_name_223=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(__right_value184,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj72=fun_name2_215;
                fun_name2_215=(char*)come_increment_ref_count(new_fun_name_223);
                __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                finalizer_216=fun_222;
                new_fun_name_223 = come_decrement_ref_count2(new_fun_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(finalizer_216!=((void*)0)) {
                if(klass_211->mProtocol&&type->mPointerNum==1) {
                    type_name_224=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                    if(c_value_210) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s),\n",fun_name2_215,c_value_210,type_name_224,c_value_210,type_name_224,c_value_210,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s);\n",fun_name2_215,c_value_210,type_name_224,c_value_210,type_name_224,c_value_210,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_215,c_value_210,type_name_224,c_value_210,type_name_224,c_value_210,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_215,c_value_210,type_name_224,c_value_210,type_name_224,c_value_210,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_224 = come_decrement_ref_count2(type_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(c_value_210) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,((char*)(__right_value186=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s),\n",c_value_210,fun_name2_215,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__"))));
                                __right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(__right_value187=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s);\n",c_value_210,fun_name2_215,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__"))));
                                __right_value187 = come_decrement_ref_count2(__right_value187, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,((char*)(__right_value188=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0),\n",c_value_210,fun_name2_215,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __right_value188 = come_decrement_ref_count2(__right_value188, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(__right_value189=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_210,fun_name2_215,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __right_value189 = come_decrement_ref_count2(__right_value189, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                    }
                }
            }
            else {
                if(klass_211->mStruct&&type->mPointerNum==0) {
                    for(                    o2_saved_225=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_211->mFields)),it_228=list$1tuple2$2charphsTypephph_begin((o2_saved_225));                    !list$1tuple2$2charphsTypephph_end((o2_saved_225));                    it_228=list$1tuple2$2charphsTypephph_next((o2_saved_225))                    ){
                        multiple_assign_var3=it_228;
                        name_231=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                        field_type_232=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                        if(field_type_232->mHeap&&field_type_232->mPointerNum>0) {
                            obj_233=(char*)come_increment_ref_count(xsprintf("(((%s)%s).%s)",((char*)(__right_value190=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_210,name_231));
                            __right_value190 = come_decrement_ref_count2(__right_value190, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            free_object(field_type_232,obj_233,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_233 = come_decrement_ref_count2(obj_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_231 = come_decrement_ref_count2(name_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(field_type_232,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_225,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(klass_211->mStruct&&type->mPointerNum==1) {
                        for(                        o2_saved_236=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_211->mFields)),it_237=list$1tuple2$2charphsTypephph_begin((o2_saved_236));                        !list$1tuple2$2charphsTypephph_end((o2_saved_236));                        it_237=list$1tuple2$2charphsTypephph_next((o2_saved_236))                        ){
                            multiple_assign_var4=it_237;
                            name_238=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                            field_type_239=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                            if(field_type_239->mHeap&&field_type_239->mPointerNum>0) {
                                obj_240=(char*)come_increment_ref_count(xsprintf("(((%s)%s)->%s)",((char*)(__right_value192=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_210,name_238));
                                __right_value192 = come_decrement_ref_count2(__right_value192, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                free_object(field_type_239,obj_240,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_240 = come_decrement_ref_count2(obj_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_238 = come_decrement_ref_count2(name_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(field_type_239,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(o2_saved_236,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                if(!type->mAllocaValue) {
                    if(klass_211->mProtocol&&type->mPointerNum==1) {
                        if(c_value_210) {
                            type_name_241=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"((%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, %s):0),\n",c_value_210,c_value_210,c_value_210,type_name_241,c_value_210,type_name_241,c_value_210,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %s); } \n",c_value_210,c_value_210,c_value_210,type_name_241,c_value_210,type_name_241,c_value_210,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"((%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0),\n",c_value_210,c_value_210,c_value_210,type_name_241,c_value_210,type_name_241,c_value_210,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_210,c_value_210,c_value_210,type_name_241,c_value_210,type_name_241,c_value_210,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_241 = come_decrement_ref_count2(type_name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(c_value_210) {
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"(%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s)),\n",c_value_210,c_value_210,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s);\n",c_value_210,c_value_210,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"(%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0)),\n",c_value_210,c_value_210,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_210,c_value_210,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_210 = come_decrement_ref_count2(c_value_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_214,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name2_215 = come_decrement_ref_count2(fun_name2_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            c_value_242=(char*)come_increment_ref_count(__builtin_string(obj));
            klass_243=type->mClass;
            class_name_244=klass_243->mName;
            fun_name_245="finalize";
            type2_246=(struct sType*)come_increment_ref_count(sType_clone(type));
            type2_246->mHeap=(_Bool)0;
            fun_name2_247=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_245,info,(_Bool)1));
            finalizer_248=((void*)0);
            if(list$1sTypeph_length(type->mGenericsTypes)>0) {
                finalizer_248=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_247);
                if(finalizer_248==((void*)0)) {
                    none_generics_name_249=(char*)come_increment_ref_count(get_none_generics_name(type2_246->mClass->mName));
                    generics_fun_name_250=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_249,fun_name_245));
                    generics_fun_251=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_250);
                    if(generics_fun_251) {
                        if(!create_generics_fun((char*)come_increment_ref_count(fun_name2_247),generics_fun_251,type,info)) {
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            exit(2);
                        }
                        finalizer_248=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_247);
                    }
                    none_generics_name_249 = come_decrement_ref_count2(none_generics_name_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_250 = come_decrement_ref_count2(generics_fun_name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                for(                i_252=128-1;                i_252>=1;                i_252--                ){
                    new_fun_name_253=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_247,i_252));
                    finalizer_248=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_253);
                    if(finalizer_248) {
                        __dec_obj73=fun_name2_247;
                        fun_name2_247=(char*)come_increment_ref_count(__builtin_string(new_fun_name_253));
                        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                        new_fun_name_253 = come_decrement_ref_count2(new_fun_name_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_253 = come_decrement_ref_count2(new_fun_name_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(finalizer_248==((void*)0)) {
                    finalizer_248=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_247);
                }
            }
            if(finalizer_248==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
                multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value202=create_finalizer_automatically(type,fun_name_245,info)));
                fun_254=multiple_assign_var5->v1;
                new_fun_name_255=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer3(__right_value202,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj74=fun_name2_247;
                fun_name2_247=(char*)come_increment_ref_count(new_fun_name_255);
                __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                finalizer_248=fun_254;
                new_fun_name_255 = come_decrement_ref_count2(new_fun_name_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(finalizer_248!=((void*)0)) {
                if(klass_243->mProtocol&&type->mPointerNum==1) {
                    type_name_256=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                    if(c_value_242) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s),\n",fun_name2_247,c_value_242,type_name_256,c_value_242,type_name_256,c_value_242,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s);\n",fun_name2_247,c_value_242,type_name_256,c_value_242,type_name_256,c_value_242,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_247,c_value_242,type_name_256,c_value_242,type_name_256,c_value_242,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_247,c_value_242,type_name_256,c_value_242,type_name_256,c_value_242,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_256 = come_decrement_ref_count2(type_name_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(c_value_242) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,((char*)(__right_value204=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s),\n",c_value_242,fun_name2_247,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__"))));
                                __right_value204 = come_decrement_ref_count2(__right_value204, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(__right_value205=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s);\n",c_value_242,fun_name2_247,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__"))));
                                __right_value205 = come_decrement_ref_count2(__right_value205, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,((char*)(__right_value206=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0),\n",c_value_242,fun_name2_247,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(__right_value207=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_242,fun_name2_247,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __right_value207 = come_decrement_ref_count2(__right_value207, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                    }
                }
            }
            else {
                if(klass_243->mStruct&&type->mPointerNum==0) {
                    for(                    o2_saved_257=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_243->mFields)),it_258=list$1tuple2$2charphsTypephph_begin((o2_saved_257));                    !list$1tuple2$2charphsTypephph_end((o2_saved_257));                    it_258=list$1tuple2$2charphsTypephph_next((o2_saved_257))                    ){
                        multiple_assign_var6=it_258;
                        name_259=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                        field_type_260=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                        if(field_type_260->mHeap&&field_type_260->mPointerNum>0) {
                            obj_261=(char*)come_increment_ref_count(xsprintf("(((%s)%s).%s)",((char*)(__right_value208=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_242,name_259));
                            __right_value208 = come_decrement_ref_count2(__right_value208, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            free_object(field_type_260,obj_261,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_261 = come_decrement_ref_count2(obj_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_259 = come_decrement_ref_count2(name_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(field_type_260,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_257,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(klass_243->mStruct&&type->mPointerNum==1) {
                        for(                        o2_saved_262=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_243->mFields)),it_263=list$1tuple2$2charphsTypephph_begin((o2_saved_262));                        !list$1tuple2$2charphsTypephph_end((o2_saved_262));                        it_263=list$1tuple2$2charphsTypephph_next((o2_saved_262))                        ){
                            multiple_assign_var7=it_263;
                            name_264=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                            field_type_265=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
                            if(field_type_265->mHeap&&field_type_265->mPointerNum>0) {
                                obj_266=(char*)come_increment_ref_count(xsprintf("(((%s)%s)->%s)",((char*)(__right_value210=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_242,name_264));
                                __right_value210 = come_decrement_ref_count2(__right_value210, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                free_object(field_type_265,obj_266,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_266 = come_decrement_ref_count2(obj_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_264 = come_decrement_ref_count2(name_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(field_type_265,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(o2_saved_262,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                if(!type->mAllocaValue) {
                    if(klass_243->mProtocol&&type->mPointerNum==1) {
                        if(c_value_242) {
                            type_name_267=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"((%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, %s):0),\n",c_value_242,c_value_242,c_value_242,type_name_267,c_value_242,type_name_267,c_value_242,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %s); } \n",c_value_242,c_value_242,c_value_242,type_name_267,c_value_242,type_name_267,c_value_242,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"((%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0),\n",c_value_242,c_value_242,c_value_242,type_name_267,c_value_242,type_name_267,c_value_242,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_242,c_value_242,c_value_242,type_name_267,c_value_242,type_name_267,c_value_242,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_267 = come_decrement_ref_count2(type_name_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(c_value_242) {
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"(%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s)),\n",c_value_242,c_value_242,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s);\n",c_value_242,c_value_242,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"(%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0)),\n",no_decrement,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_242,c_value_242,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_242 = come_decrement_ref_count2(c_value_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_246,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name2_247 = come_decrement_ref_count2(fun_name2_247, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __dec_obj75=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_208);
    come_call_finalizer3(__dec_obj75,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj76=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_207);
    come_call_finalizer3(__dec_obj76,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_207,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_226;
struct tuple2$2charphsTypeph* __result104__;
struct tuple2$2charphsTypeph* __result105__;
struct tuple2$2charphsTypeph* result_227;
struct tuple2$2charphsTypeph* __result106__;
result_226 = (void*)0;
result_227 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_226,0,sizeof(struct tuple2$2charphsTypeph*));
        __result104__ = __result_obj__ = result_226;
        return __result104__;
    }
    self->it=self->head;
    if(self->it) {
        __result105__ = __result_obj__ = self->it->item;
        return __result105__;
    }
    memset(&result_227,0,sizeof(struct tuple2$2charphsTypeph*));
    __result106__ = __result_obj__ = result_227;
    return __result106__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_229;
struct tuple2$2charphsTypeph* __result107__;
struct tuple2$2charphsTypeph* __result108__;
struct tuple2$2charphsTypeph* result_230;
struct tuple2$2charphsTypeph* __result109__;
result_229 = (void*)0;
result_230 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_229,0,sizeof(struct tuple2$2charphsTypeph*));
        __result107__ = __result_obj__ = result_229;
        return __result107__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result108__ = __result_obj__ = self->it->item;
        return __result108__;
    }
    memset(&result_230,0,sizeof(struct tuple2$2charphsTypeph*));
    __result109__ = __result_obj__ = result_230;
    return __result109__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_234;
struct list_item$1tuple2$2charphsTypephph* prev_it_235;
    it_234=self->head;
    while(it_234!=((void*)0)) {
        prev_it_235=it_234;
        it_234=it_234->next;
        come_call_finalizer3(prev_it_235,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __result_obj__=(void*)0;
void* __right_value213 = (void*)0;
struct sType* type2_268;
char* result_269;
struct sType* result_type_270;
struct list$1CVALUEph* stack_saved_271;
struct list$1sRightValueObjectph* right_value_objects_272;
void* __right_value214 = (void*)0;
char* c_value_273;
struct sClass* klass_274;
char* class_name_275;
char* fun_name_276;
struct sFun* cloner_277;
char* fun_name2_278;
void* __right_value215 = (void*)0;
char* none_generics_name_279;
void* __right_value216 = (void*)0;
struct sType* obj_type_280;
void* __right_value217 = (void*)0;
char* __dec_obj77;
void* __right_value218 = (void*)0;
char* fun_name3_281;
struct sGenericsFun* generics_fun_282;
void* __right_value219 = (void*)0;
_Bool _if_conditional1;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct tuple2$2sTypephcharph* __result115__;
void* __right_value225 = (void*)0;
char* __dec_obj80;
int i_285;
void* __right_value226 = (void*)0;
char* new_fun_name_286;
void* __right_value227 = (void*)0;
char* __dec_obj81;
void* __right_value228 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var8;
struct sFun* fun_287;
char* new_fun_name_288;
char* __dec_obj82;
struct sType* __dec_obj83;
void* __right_value229 = (void*)0;
struct sType* __dec_obj84;
void* __right_value230 = (void*)0;
char* __dec_obj85;
void* __right_value231 = (void*)0;
char* __dec_obj86;
void* __right_value232 = (void*)0;
struct sType* __dec_obj87;
void* __right_value233 = (void*)0;
char* type_name_289;
void* __right_value234 = (void*)0;
char* __dec_obj88;
void* __right_value235 = (void*)0;
char* __dec_obj89;
struct list$1sRightValueObjectph* __dec_obj90;
struct list$1CVALUEph* __dec_obj91;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct tuple2$2sTypephcharph* __result116__;
fun_name2_278 = (void*)0;
memset(&i_285, 0, sizeof(int));
    type2_268=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_269=((void*)0);
    result_type_270=((void*)0);
    stack_saved_271=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_272=info->right_value_objects;
    c_value_273=(char*)come_increment_ref_count(__builtin_string(obj));
    klass_274=type->mClass;
    class_name_275=klass_274->mName;
    fun_name_276="clone";
    cloner_277=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_279=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_280=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj77=fun_name2_278;
        fun_name2_278=(char*)come_increment_ref_count(create_method_name(obj_type_280,(_Bool)0,fun_name_276,info,(_Bool)1));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_281=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_279,fun_name_276));
        generics_fun_282=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_281,((void*)0));
        if(generics_fun_282) {
            if((_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(((char*)(__right_value219=__builtin_string(fun_name2_278)))),generics_fun_282,obj_type_280,info))),            (__right_value219 = come_decrement_ref_count2(__right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
            _if_conditional1) {
                __result115__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value224=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(__right_value223=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 903, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(((struct sType*)(__right_value221=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value220=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 903, "sType")))),"void",(_Bool)0,info)))),(char*)come_increment_ref_count(((char*)(__right_value222=__builtin_string("")))))));
                none_generics_name_279 = come_decrement_ref_count2(none_generics_name_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_280,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_281 = come_decrement_ref_count2(fun_name3_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_268,sType_finalize, 0, 0, 0, 0, (void*)0);
                result_269 = come_decrement_ref_count2(result_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_270,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_271,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                c_value_273 = come_decrement_ref_count2(c_value_273, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_278 = come_decrement_ref_count2(fun_name2_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value220,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value221,sType_finalize, 0, 1, 0, 0, __result_obj__);
                __right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __right_value223 = come_decrement_ref_count2(__right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value224,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                return __result115__;
            }
        }
        cloner_277=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_278);
        none_generics_name_279 = come_decrement_ref_count2(none_generics_name_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_280,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_281 = come_decrement_ref_count2(fun_name3_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj80=fun_name2_278;
        fun_name2_278=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_276,info,(_Bool)1));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_285=128-1;        i_285>=1;        i_285--        ){
            new_fun_name_286=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_278,i_285));
            cloner_277=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_286);
            if(cloner_277) {
                __dec_obj81=fun_name2_278;
                fun_name2_278=(char*)come_increment_ref_count(__builtin_string(new_fun_name_286));
                __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_286 = come_decrement_ref_count2(new_fun_name_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_286 = come_decrement_ref_count2(new_fun_name_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(cloner_277==((void*)0)) {
            cloner_277=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_278);
        }
    }
    if(cloner_277==((void*)0)&&!type->mClass->mNumber) {
        multiple_assign_var8=((struct tuple2$2sFunpcharph*)(__right_value228=create_cloner_automatically(type,fun_name_276,info)));
        fun_287=multiple_assign_var8->v1;
        new_fun_name_288=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer3(__right_value228,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj82=fun_name2_278;
        fun_name2_278=(char*)come_increment_ref_count(new_fun_name_288);
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_277=fun_287;
        new_fun_name_288 = come_decrement_ref_count2(new_fun_name_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(cloner_277!=((void*)0)) {
        __dec_obj83=result_type_270;
        result_type_270=(struct sType*)come_increment_ref_count(cloner_277->mResultType);
        come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj84=result_type_270;
        result_type_270=(struct sType*)come_increment_ref_count(solve_generics(result_type_270,type,info));
        come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj85=result_269;
        result_269=(char*)come_increment_ref_count(xsprintf("%s(%s)",fun_name2_278,c_value_273));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(gComeDebug) {
            __dec_obj86=result_269;
            result_269=(char*)come_increment_ref_count(append_stackframe(result_269,result_type_270,info));
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    else {
        __dec_obj87=result_type_270;
        result_type_270=(struct sType*)come_increment_ref_count(sType_clone(type));
        come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
        type2_268->mHeap=(_Bool)1;
        type_name_289=(char*)come_increment_ref_count(make_type_name_string(type2_268,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj88=result_269;
        result_269=(char*)come_increment_ref_count(xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_289,c_value_273,info->sname,info->sline,type_name_289));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(gComeDebug) {
            __dec_obj89=result_269;
            result_269=(char*)come_increment_ref_count(append_stackframe(result_269,result_type_270,info));
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        type_name_289 = come_decrement_ref_count2(type_name_289, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj90=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_272);
    come_call_finalizer3(__dec_obj90,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj91=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_271);
    come_call_finalizer3(__dec_obj91,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result116__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value237=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(__right_value236=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 960, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_270),(char*)come_increment_ref_count(result_269))));
    come_call_finalizer3(type2_268,sType_finalize, 0, 0, 0, 0, (void*)0);
    result_269 = come_decrement_ref_count2(result_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_270,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_271,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    c_value_273 = come_decrement_ref_count2(c_value_273, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_278 = come_decrement_ref_count2(fun_name2_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value236 = come_decrement_ref_count2(__right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value237,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result116__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_283;
unsigned int it_284;
struct sGenericsFun* __result110__;
struct sGenericsFun* __result111__;
struct sGenericsFun* __result112__;
struct sGenericsFun* __result113__;
    hash_283=string_get_hash_key(((char*)key))%self->size;
    it_284=hash_283;
    while((_Bool)1) {
        if(self->item_existance[it_284]) {
            if(string_equals(self->keys[it_284],key)) {
                __result110__ = __result_obj__ = self->items[it_284];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result110__;
            }
            it_284++;
            if(it_284>=self->size) {
                it_284=0;
            }
            else {
                if(it_284==hash_283) {
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
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__=(void*)0;
struct sType* __dec_obj78;
char* __dec_obj79;
struct tuple2$2sTypephcharph* __result114__;
    __dec_obj78=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj79=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result114__ = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result114__;
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
char* result_290;
struct list$1CVALUEph* stack_saved_291;
struct list$1sRightValueObjectph* right_value_objects_292;
struct sClass* klass_293;
char* class_name_294;
char* fun_name_295;
void* __right_value238 = (void*)0;
struct sType* type2_296;
struct sFun* cloner_297;
char* fun_name2_298;
void* __right_value239 = (void*)0;
char* none_generics_name_299;
void* __right_value240 = (void*)0;
struct sType* obj_type_300;
void* __right_value241 = (void*)0;
char* __dec_obj92;
void* __right_value242 = (void*)0;
char* fun_name3_301;
struct sGenericsFun* generics_fun_302;
void* __right_value243 = (void*)0;
_Bool _if_conditional2;
_Bool __result117__;
void* __right_value244 = (void*)0;
char* __dec_obj93;
int i_303;
void* __right_value245 = (void*)0;
char* new_fun_name_304;
void* __right_value246 = (void*)0;
char* __dec_obj94;
void* __right_value247 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var9;
struct sFun* fun_305;
char* new_fun_name_306;
char* __dec_obj95;
struct list$1sRightValueObjectph* __dec_obj96;
struct list$1CVALUEph* __dec_obj97;
_Bool __result118__;
fun_name2_298 = (void*)0;
memset(&i_303, 0, sizeof(int));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_290=((void*)0);
    stack_saved_291=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_292=info->right_value_objects;
    klass_293=type->mClass;
    class_name_294=klass_293->mName;
    fun_name_295="equals";
    type2_296=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_296->mHeap=(_Bool)0;
    cloner_297=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_299=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_300=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj92=fun_name2_298;
        fun_name2_298=(char*)come_increment_ref_count(create_method_name(obj_type_300,(_Bool)0,fun_name_295,info,(_Bool)1));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_301=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_299,fun_name_295));
        generics_fun_302=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_301,((void*)0));
        if(generics_fun_302) {
            if((_if_conditional2=(!create_generics_fun((char*)come_increment_ref_count(((char*)(__right_value243=__builtin_string(fun_name2_298)))),generics_fun_302,obj_type_300,info))),            (__right_value243 = come_decrement_ref_count2(__right_value243, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _if_conditional2) {
                __result117__ = (_Bool)0;
                none_generics_name_299 = come_decrement_ref_count2(none_generics_name_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_300,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_301 = come_decrement_ref_count2(fun_name3_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_290 = come_decrement_ref_count2(result_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_291,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_296,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_298 = come_decrement_ref_count2(fun_name2_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result117__;
            }
        }
        cloner_297=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_298);
        none_generics_name_299 = come_decrement_ref_count2(none_generics_name_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_300,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_301 = come_decrement_ref_count2(fun_name3_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj93=fun_name2_298;
        fun_name2_298=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_295,info,(_Bool)1));
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_303=128-1;        i_303>=1;        i_303--        ){
            new_fun_name_304=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_298,i_303));
            cloner_297=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_304);
            if(cloner_297) {
                __dec_obj94=fun_name2_298;
                fun_name2_298=(char*)come_increment_ref_count(__builtin_string(new_fun_name_304));
                __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_304 = come_decrement_ref_count2(new_fun_name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_304 = come_decrement_ref_count2(new_fun_name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(cloner_297==((void*)0)) {
            cloner_297=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_298);
        }
    }
    if(cloner_297==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var9=((struct tuple2$2sFunpcharph*)(__right_value247=create_equals_automatically(type,fun_name_295,info)));
        fun_305=multiple_assign_var9->v1;
        new_fun_name_306=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        come_call_finalizer3(__right_value247,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj95=fun_name2_298;
        fun_name2_298=(char*)come_increment_ref_count(new_fun_name_306);
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_297=fun_305;
        new_fun_name_306 = come_decrement_ref_count2(new_fun_name_306, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj96=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_292);
    come_call_finalizer3(__dec_obj96,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj97=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_291);
    come_call_finalizer3(__dec_obj97,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result118__ = (_Bool)1;
    result_290 = come_decrement_ref_count2(result_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_291,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_296,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_298 = come_decrement_ref_count2(fun_name2_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result118__;
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
char* result_307;
struct list$1CVALUEph* stack_saved_308;
struct list$1sRightValueObjectph* right_value_objects_309;
struct sClass* klass_310;
char* class_name_311;
char* fun_name_312;
void* __right_value248 = (void*)0;
struct sType* type2_313;
struct sFun* cloner_314;
char* fun_name2_315;
void* __right_value249 = (void*)0;
char* none_generics_name_316;
void* __right_value250 = (void*)0;
struct sType* obj_type_317;
void* __right_value251 = (void*)0;
char* __dec_obj98;
void* __right_value252 = (void*)0;
char* fun_name3_318;
struct sGenericsFun* generics_fun_319;
void* __right_value253 = (void*)0;
_Bool _if_conditional3;
_Bool __result119__;
void* __right_value254 = (void*)0;
char* __dec_obj99;
int i_320;
void* __right_value255 = (void*)0;
char* new_fun_name_321;
void* __right_value256 = (void*)0;
char* __dec_obj100;
void* __right_value257 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var10;
struct sFun* fun_322;
char* new_fun_name_323;
char* __dec_obj101;
struct list$1sRightValueObjectph* __dec_obj102;
struct list$1CVALUEph* __dec_obj103;
_Bool __result120__;
fun_name2_315 = (void*)0;
memset(&i_320, 0, sizeof(int));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_307=((void*)0);
    stack_saved_308=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_309=info->right_value_objects;
    klass_310=type->mClass;
    class_name_311=klass_310->mName;
    fun_name_312="operator_equals";
    type2_313=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_313->mHeap=(_Bool)0;
    cloner_314=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_316=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_317=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj98=fun_name2_315;
        fun_name2_315=(char*)come_increment_ref_count(create_method_name(obj_type_317,(_Bool)0,fun_name_312,info,(_Bool)1));
        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_318=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_316,fun_name_312));
        generics_fun_319=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_318,((void*)0));
        if(generics_fun_319) {
            if((_if_conditional3=(!create_generics_fun((char*)come_increment_ref_count(((char*)(__right_value253=__builtin_string(fun_name2_315)))),generics_fun_319,obj_type_317,info))),            (__right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _if_conditional3) {
                __result119__ = (_Bool)0;
                none_generics_name_316 = come_decrement_ref_count2(none_generics_name_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_317,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_318 = come_decrement_ref_count2(fun_name3_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_307 = come_decrement_ref_count2(result_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_308,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_313,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_315 = come_decrement_ref_count2(fun_name2_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result119__;
            }
        }
        cloner_314=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_315);
        none_generics_name_316 = come_decrement_ref_count2(none_generics_name_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_317,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_318 = come_decrement_ref_count2(fun_name3_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj99=fun_name2_315;
        fun_name2_315=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_312,info,(_Bool)1));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_320=128-1;        i_320>=1;        i_320--        ){
            new_fun_name_321=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_315,i_320));
            cloner_314=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_321);
            if(cloner_314) {
                __dec_obj100=fun_name2_315;
                fun_name2_315=(char*)come_increment_ref_count(__builtin_string(new_fun_name_321));
                __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_321 = come_decrement_ref_count2(new_fun_name_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_321 = come_decrement_ref_count2(new_fun_name_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(cloner_314==((void*)0)) {
            cloner_314=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_315);
        }
    }
    if(cloner_314==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var10=((struct tuple2$2sFunpcharph*)(__right_value257=create_operator_equals_automatically(type,fun_name_312,info)));
        fun_322=multiple_assign_var10->v1;
        new_fun_name_323=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        come_call_finalizer3(__right_value257,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj101=fun_name2_315;
        fun_name2_315=(char*)come_increment_ref_count(new_fun_name_323);
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_314=fun_322;
        new_fun_name_323 = come_decrement_ref_count2(new_fun_name_323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj102=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_309);
    come_call_finalizer3(__dec_obj102,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj103=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_308);
    come_call_finalizer3(__dec_obj103,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result120__ = (_Bool)1;
    result_307 = come_decrement_ref_count2(result_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_308,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_313,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_315 = come_decrement_ref_count2(fun_name2_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result120__;
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
char* result_324;
struct list$1CVALUEph* stack_saved_325;
struct list$1sRightValueObjectph* right_value_objects_326;
struct sClass* klass_327;
char* class_name_328;
char* fun_name_329;
void* __right_value258 = (void*)0;
struct sType* type2_330;
struct sFun* cloner_331;
char* fun_name2_332;
void* __right_value259 = (void*)0;
char* none_generics_name_333;
void* __right_value260 = (void*)0;
struct sType* obj_type_334;
void* __right_value261 = (void*)0;
char* __dec_obj104;
void* __right_value262 = (void*)0;
char* fun_name3_335;
struct sGenericsFun* generics_fun_336;
void* __right_value263 = (void*)0;
_Bool _if_conditional4;
_Bool __result121__;
void* __right_value264 = (void*)0;
char* __dec_obj105;
int i_337;
void* __right_value265 = (void*)0;
char* new_fun_name_338;
void* __right_value266 = (void*)0;
char* __dec_obj106;
void* __right_value267 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var11;
struct sFun* fun_339;
char* new_fun_name_340;
char* __dec_obj107;
struct list$1sRightValueObjectph* __dec_obj108;
struct list$1CVALUEph* __dec_obj109;
_Bool __result122__;
fun_name2_332 = (void*)0;
memset(&i_337, 0, sizeof(int));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_324=((void*)0);
    stack_saved_325=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_326=info->right_value_objects;
    klass_327=type->mClass;
    class_name_328=klass_327->mName;
    fun_name_329="operator_not_equals";
    type2_330=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_330->mHeap=(_Bool)0;
    cloner_331=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_333=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_334=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj104=fun_name2_332;
        fun_name2_332=(char*)come_increment_ref_count(create_method_name(obj_type_334,(_Bool)0,fun_name_329,info,(_Bool)1));
        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_335=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_333,fun_name_329));
        generics_fun_336=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_335,((void*)0));
        if(generics_fun_336) {
            if((_if_conditional4=(!create_generics_fun((char*)come_increment_ref_count(((char*)(__right_value263=__builtin_string(fun_name2_332)))),generics_fun_336,obj_type_334,info))),            (__right_value263 = come_decrement_ref_count2(__right_value263, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _if_conditional4) {
                __result121__ = (_Bool)0;
                none_generics_name_333 = come_decrement_ref_count2(none_generics_name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_334,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_335 = come_decrement_ref_count2(fun_name3_335, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_324 = come_decrement_ref_count2(result_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_325,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_330,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_332 = come_decrement_ref_count2(fun_name2_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result121__;
            }
        }
        cloner_331=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_332);
        none_generics_name_333 = come_decrement_ref_count2(none_generics_name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_334,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_335 = come_decrement_ref_count2(fun_name3_335, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj105=fun_name2_332;
        fun_name2_332=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_329,info,(_Bool)1));
        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_337=128-1;        i_337>=1;        i_337--        ){
            new_fun_name_338=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_332,i_337));
            cloner_331=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_338);
            if(cloner_331) {
                __dec_obj106=fun_name2_332;
                fun_name2_332=(char*)come_increment_ref_count(__builtin_string(new_fun_name_338));
                __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_338 = come_decrement_ref_count2(new_fun_name_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_338 = come_decrement_ref_count2(new_fun_name_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(cloner_331==((void*)0)) {
            cloner_331=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_332);
        }
    }
    if(cloner_331==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var11=((struct tuple2$2sFunpcharph*)(__right_value267=create_operator_not_equals_automatically(type,fun_name_329,info)));
        fun_339=multiple_assign_var11->v1;
        new_fun_name_340=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        come_call_finalizer3(__right_value267,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj107=fun_name2_332;
        fun_name2_332=(char*)come_increment_ref_count(new_fun_name_340);
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_331=fun_339;
        new_fun_name_340 = come_decrement_ref_count2(new_fun_name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj108=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_326);
    come_call_finalizer3(__dec_obj108,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj109=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_325);
    come_call_finalizer3(__dec_obj109,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result122__ = (_Bool)1;
    result_324 = come_decrement_ref_count2(result_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_325,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_330,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_332 = come_decrement_ref_count2(fun_name2_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result122__;
}

_Bool existance_free_right_value_objects(struct sInfo* info){
struct list$1sRightValueObjectph* right_value_objects_341;
struct list$1sRightValueObjectph* o2_saved_342;
struct sRightValueObject* it_343;
    if(gComeGC||gComeC) {
        return (_Bool)0;
    }
    right_value_objects_341=info->right_value_objects;
    for(    o2_saved_342=(right_value_objects_341),it_343=list$1sRightValueObjectph_begin((o2_saved_342));    !list$1sRightValueObjectph_end((o2_saved_342));    it_343=list$1sRightValueObjectph_next((o2_saved_342))    ){
        if(it_343&&!it_343->mFreed) {
            if(string_operator_equals(it_343->mFunName,info->come_fun->mName)&&it_343->mBlockLevel==info->block_level) {
                return (_Bool)1;
            }
        }
    }
    return (_Bool)0;
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
_Bool free_right_value_344;
struct list$1sRightValueObjectph* right_value_objects_345;
int n_346;
struct list$1sRightValueObjectph* o2_saved_347;
struct sRightValueObject* it_348;
void* __right_value268 = (void*)0;
struct sType* type_349;
void* __right_value269 = (void*)0;
struct sType* __dec_obj110;
    if(gComeGC||gComeC) {
        return;
    }
    free_right_value_344=(_Bool)0;
    right_value_objects_345=info->right_value_objects;
    n_346=0;
    for(    o2_saved_347=(right_value_objects_345),it_348=list$1sRightValueObjectph_begin((o2_saved_347));    !list$1sRightValueObjectph_end((o2_saved_347));    it_348=list$1sRightValueObjectph_next((o2_saved_347))    ){
        if(it_348&&!it_348->mFreed) {
            if(string_operator_equals(it_348->mFunName,info->come_fun->mName)&&it_348->mBlockLevel==info->block_level&&!it_348->mStored) {
                type_349=(struct sType*)come_increment_ref_count(sType_clone(it_348->mType));
                __dec_obj110=type_349;
                type_349=(struct sType*)come_increment_ref_count(solve_type(type_349,info->generics_type,info->method_generics_types,info));
                come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
                free_object(type_349,it_348->mVarName,(_Bool)1,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                it_348->mFreed=(_Bool)1;
                free_right_value_344=(_Bool)1;
                come_call_finalizer3(type_349,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        n_346++;
    }
}

_Bool is_right_values(int right_value_num, struct sInfo* info){
struct list$1sRightValueObjectph* o2_saved_350;
struct sRightValueObject* it_351;
_Bool __result123__;
    if(gComeGC||gComeC) {
        return (_Bool)0;
    }
    for(    o2_saved_350=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_351=list$1sRightValueObjectph_begin((o2_saved_350));    !list$1sRightValueObjectph_end((o2_saved_350));    it_351=list$1sRightValueObjectph_next((o2_saved_350))    ){
        if(it_351->mID==right_value_num) {
            __result123__ = (_Bool)1;
            come_call_finalizer3(o2_saved_350,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result123__;
        }
    }
    come_call_finalizer3(o2_saved_350,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)0;
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__=(void*)0;
struct sVarTable* it_352;
struct sVar* var__353;
struct sVar* __result128__;
struct sVar* __result129__;
    it_352=table;
    while(it_352) {
        var__353=map$2charphsVarphp_operator_load_element(it_352->mVars,name);
        if(var__353) {
            __result128__ = __result_obj__ = var__353;
            return __result128__;
        }
        it_352=it_352->mParent;
    }
    __result129__ = __result_obj__ = ((void*)0);
    return __result129__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_354;
unsigned int hash_355;
unsigned int it_356;
struct sVar* __result124__;
struct sVar* __result125__;
struct sVar* __result126__;
struct sVar* __result127__;
default_value_354 = (void*)0;
    memset(&default_value_354,0,sizeof(struct sVar*));
    hash_355=string_get_hash_key(((char*)key))%self->size;
    it_356=hash_355;
    while((_Bool)1) {
        if(self->item_existance[it_356]) {
            if(string_equals(self->keys[it_356],key)) {
                __result124__ = __result_obj__ = self->items[it_356];
                come_call_finalizer3(default_value_354,sVar_finalize, 0, 0, 0, 0, (void*)0);
                return __result124__;
            }
            it_356++;
            if(it_356>=self->size) {
                it_356=0;
            }
            else {
                if(it_356==hash_355) {
                    __result125__ = __result_obj__ = default_value_354;
                    come_call_finalizer3(default_value_354,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result125__;
                }
            }
        }
        else {
            __result126__ = __result_obj__ = default_value_354;
            come_call_finalizer3(default_value_354,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result126__;
        }
    }
    __result127__ = __result_obj__ = default_value_354;
    come_call_finalizer3(default_value_354,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result127__;
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
struct map$2charphsVarph* o2_saved_357;
char* it_360;
struct sVar* p_363;
struct sType* type_364;
struct sClass* klass_365;
void* __right_value270 = (void*)0;
char* c_value_366;
void* __right_value271 = (void*)0;
struct sType* type2_367;
    if(gComeGC||gComeC) {
        return;
    }
    for(    o2_saved_357=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_360=map$2charphsVarph_begin((o2_saved_357));    !map$2charphsVarph_end((o2_saved_357));    it_360=map$2charphsVarph_next((o2_saved_357))    ){
        p_363=map$2charphsVarphp_operator_load_element(table->mVars,it_360);
        type_364=p_363->mType;
        klass_365=type_364->mClass;
        if(ret_value!=((void*)0)&&p_363->mCValueName!=((void*)0)&&string_operator_equals(p_363->mCValueName,ret_value->mCValueName)&&type_364->mHeap) {
            free_object(p_363->mType,p_363->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
        }
        else {
            if(type_364->mHeap&&p_363->mCValueName) {
                if(type_364->mFunctionParam) {
                    free_object(p_363->mType,p_363->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                else {
                    free_object(p_363->mType,p_363->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
            }
            else {
                if(klass_365->mStruct&&p_363->mCValueName&&type_364->mAllocaValue&&!type_364->mNoCallingDestructor) {
                    c_value_366=(char*)come_increment_ref_count(xsprintf("(&%s)",p_363->mCValueName));
                    type2_367=(struct sType*)come_increment_ref_count(sType_clone(type_364));
                    type2_367->mPointerNum++;
                    free_object(type2_367,c_value_366,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    c_value_366 = come_decrement_ref_count2(c_value_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type2_367,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    come_call_finalizer3(o2_saved_357,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_358;
char* __result130__;
char* __result131__;
char* result_359;
char* __result132__;
result_358 = (void*)0;
result_359 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_358,0,sizeof(char*));
        __result130__ = __result_obj__ = result_358;
        return __result130__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result131__ = __result_obj__ = self->key_list->it->item;
        return __result131__;
    }
    memset(&result_359,0,sizeof(char*));
    __result132__ = __result_obj__ = result_359;
    return __result132__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_361;
char* __result133__;
char* __result134__;
char* result_362;
char* __result135__;
result_361 = (void*)0;
result_362 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_361,0,sizeof(char*));
        __result133__ = __result_obj__ = result_361;
        return __result133__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result134__ = __result_obj__ = self->key_list->it->item;
        return __result134__;
    }
    memset(&result_362,0,sizeof(char*));
    __result135__ = __result_obj__ = result_362;
    return __result135__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_368;
int i_369;
    for(    i_368=0;    i_368<self->size;    i_368++    ){
        if(self->item_existance[i_368]) {
            if(1) {
                come_call_finalizer3(self->items[i_368],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_369=0;    i_369<self->size;    i_369++    ){
        if(self->item_existance[i_369]) {
            if(1) {
                self->keys[i_369] = come_decrement_ref_count2(self->keys[i_369], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_370;
struct list_item$1charp* prev_it_371;
    it_370=self->head;
    while(it_370!=((void*)0)) {
        prev_it_371=it_370;
        it_370=it_370->next;
        come_call_finalizer3(prev_it_371,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_372;
    if(gComeGC||gComeC) {
        return;
    }
    it_372=info->lv_table;
    if(it_372==info->come_fun->mBlock->mVarTable) {
        free_objects(it_372,ret_value,info);
    }
    else {
        while(it_372!=info->come_fun->mBlock->mVarTable) {
            free_objects(it_372,ret_value,info);
            it_372=it_372->mParent;
        }
        free_objects(it_372,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
struct sVar* ret_value_373;
struct sVarTable* current_loop_vtable_374;
struct sVarTable* it_375;
    if(gComeGC||gComeC) {
        return;
    }
    ret_value_373=((void*)0);
    current_loop_vtable_374=info->current_loop_vtable;
    if(current_loop_vtable_374!=((void*)0)) {
        it_375=info->lv_table;
        while(it_375!=current_loop_vtable_374) {
            free_objects(it_375,ret_value_373,info);
            it_375=it_375->mParent;
        }
        free_objects(it_375,ret_value_373,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
char* __result136__;
void* __right_value277 = (void*)0;
char* var_name_377;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
char* __result137__;
void* __right_value286 = (void*)0;
char* __result138__;
    if(string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0) {
        if(gComeDebug||type->mRecord) {
            __result136__ = __result_obj__ = ((char*)(__right_value276=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(__right_value272=string_to_string(info->sname))),((char*)(__right_value273=int_to_string(info->sline))),((char*)(__right_value274=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value275=charp_to_string(c_value))))));
            __right_value272 = come_decrement_ref_count2(__right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value273 = come_decrement_ref_count2(__right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value274 = come_decrement_ref_count2(__right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value275 = come_decrement_ref_count2(__right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value276 = come_decrement_ref_count2(__right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result136__;
        }
    }
    else {
        if(gComeDebug||type->mRecord) {
            static int n_376=0;
            ++n_376;
            var_name_377=(char*)come_increment_ref_count(xsprintf("__exception_result_var_b%d",n_376));
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value278=make_define_var(type,var_name_377,(_Bool)0,info))));
            __right_value278 = come_decrement_ref_count2(__right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __result137__ = __result_obj__ = ((char*)(__right_value285=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(__right_value279=string_to_string(info->sname))),((char*)(__right_value280=int_to_string(info->sline))),((char*)(__right_value281=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value282=string_to_string(var_name_377))),((char*)(__right_value283=charp_to_string(c_value))),((char*)(__right_value284=string_to_string(var_name_377))))));
            var_name_377 = come_decrement_ref_count2(var_name_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __right_value279 = come_decrement_ref_count2(__right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value280 = come_decrement_ref_count2(__right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value281 = come_decrement_ref_count2(__right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value282 = come_decrement_ref_count2(__right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value283 = come_decrement_ref_count2(__right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value284 = come_decrement_ref_count2(__right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value285 = come_decrement_ref_count2(__right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result137__;
            var_name_377 = come_decrement_ref_count2(var_name_377, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result138__ = __result_obj__ = ((char*)(__right_value286=__builtin_string(c_value)));
    __right_value286 = come_decrement_ref_count2(__right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result138__;
}

_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2charphsVarph* o2_saved_378;
char* it_379;
struct sVar* p_380;
struct sType* type_381;
struct sClass* klass_382;
_Bool __result139__;
_Bool __result140__;
_Bool __result141__;
_Bool __result142__;
    if(gComeGC||gComeC) {
        return (_Bool)1;
    }
    for(    o2_saved_378=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_379=map$2charphsVarph_begin((o2_saved_378));    !map$2charphsVarph_end((o2_saved_378));    it_379=map$2charphsVarph_next((o2_saved_378))    ){
        p_380=map$2charphsVarphp_operator_load_element(table->mVars,it_379);
        type_381=p_380->mType;
        klass_382=type_381->mClass;
        if(ret_value!=((void*)0)&&p_380->mCValueName!=((void*)0)&&string_operator_equals(p_380->mCValueName,ret_value->mCValueName)&&type_381->mHeap) {
            __result139__ = (_Bool)1;
            come_call_finalizer3(o2_saved_378,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result139__;
        }
        else {
            if(type_381->mHeap&&p_380->mCValueName) {
                if(type_381->mFunctionParam) {
                    __result140__ = (_Bool)1;
                    come_call_finalizer3(o2_saved_378,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result140__;
                }
                else {
                    __result141__ = (_Bool)1;
                    come_call_finalizer3(o2_saved_378,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result141__;
                }
            }
            else {
                if(klass_382->mStruct&&p_380->mCValueName&&type_381->mAllocaValue&&!type_381->mNoCallingDestructor) {
                    __result142__ = (_Bool)1;
                    come_call_finalizer3(o2_saved_378,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result142__;
                }
            }
        }
    }
    come_call_finalizer3(o2_saved_378,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)0;
}

_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_383;
    if(gComeGC||gComeC) {
        return (_Bool)0;
    }
    it_383=info->lv_table;
    if(it_383==info->come_fun->mBlock->mVarTable) {
        if(existance_free_objects(it_383,ret_value,info)) {
            return (_Bool)1;
        }
    }
    else {
        while(it_383!=info->come_fun->mBlock->mVarTable) {
            if(existance_free_objects(it_383,ret_value,info)) {
                return (_Bool)1;
            }
            it_383=it_383->mParent;
        }
        if(existance_free_objects(it_383,ret_value,info)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

