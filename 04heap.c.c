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
    struct list$1sRightValueObjectp* right_value_objects;
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

static int list$1sRightValueObjectp_length(struct list$1sRightValueObjectp* self);
static struct sRightValueObject* list$1sRightValueObjectp_begin(struct list$1sRightValueObjectp* self);
static _Bool list$1sRightValueObjectp_end(struct list$1sRightValueObjectp* self);
static struct sRightValueObject* list$1sRightValueObjectp_next(struct list$1sRightValueObjectp* self);
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
static void list$1sRightValueObjectpp_finalize(struct list$1sRightValueObjectp* self);
static void list_item$1sRightValueObjectpp_finalize(struct list_item$1sRightValueObjectp* self);
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

static struct list$1sRightValueObjectp* list$1sRightValueObjectp_add(struct list$1sRightValueObjectp* self, struct sRightValueObject* item);
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
struct list$1sRightValueObjectp* o2_saved_47;
struct sRightValueObject* it_50;
struct list$1sRightValueObjectph* o2_saved_53;
struct sRightValueObject* it2_56;
char* __dec_obj12;
void* right_value79;
char* __dec_obj13;
void* right_value80;
char* __dec_obj14;
void* right_value81;
char* __dec_obj15;
void* right_value82;
char* __dec_obj16;
memset(&o2_saved_47, 0, sizeof(struct list$1sRightValueObjectp*));
memset(&it_50, 0, sizeof(struct sRightValueObject*));
memset(&o2_saved_53, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it2_56, 0, sizeof(struct sRightValueObject*));
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
    if(gComeGC||gComeC) {
        return;
    }
    if(list$1sRightValueObjectp_length(right_value->right_value_objects)>0) {
        for(        o2_saved_47=(struct list$1sRightValueObjectp*)come_increment_ref_count((right_value->right_value_objects)),it_50=list$1sRightValueObjectp_begin((o2_saved_47));        !list$1sRightValueObjectp_end((o2_saved_47));        it_50=list$1sRightValueObjectp_next((o2_saved_47))        ){
            for(            o2_saved_53=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it2_56=list$1sRightValueObjectph_begin((o2_saved_53));            !list$1sRightValueObjectph_end((o2_saved_53));            it2_56=list$1sRightValueObjectph_next((o2_saved_53))            ){
                if(it_50->mID==it2_56->mID) {
                }
            }
            come_call_finalizer3(o2_saved_53,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_47,list$1sRightValueObjectpp_finalize, 0, 0, 0, 0, (void*)0);
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

static int list$1sRightValueObjectp_length(struct list$1sRightValueObjectp* self){
        if(self==((void*)0)) {
            return 0;
        }
        return self->len;
}

static struct sRightValueObject* list$1sRightValueObjectp_begin(struct list$1sRightValueObjectp* self){
void* __result_obj__;
struct sRightValueObject* result_48;
struct sRightValueObject* __result45__;
struct sRightValueObject* __result46__;
struct sRightValueObject* result_49;
struct sRightValueObject* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_48, 0, sizeof(struct sRightValueObject*));
memset(&result_49, 0, sizeof(struct sRightValueObject*));
            if(self==((void*)0)) {
                memset(&result_48,0,sizeof(struct sRightValueObject*));
                __result45__ = __result_obj__ = result_48;
                return __result45__;
            }
            self->it=self->head;
            if(self->it) {
                __result46__ = __result_obj__ = self->it->item;
                return __result46__;
            }
            memset(&result_49,0,sizeof(struct sRightValueObject*));
            __result47__ = __result_obj__ = result_49;
            return __result47__;
}

static _Bool list$1sRightValueObjectp_end(struct list$1sRightValueObjectp* self){
            return self==((void*)0)||self->it==((void*)0);
}

static struct sRightValueObject* list$1sRightValueObjectp_next(struct list$1sRightValueObjectp* self){
void* __result_obj__;
struct sRightValueObject* result_51;
struct sRightValueObject* __result48__;
struct sRightValueObject* __result49__;
struct sRightValueObject* result_52;
struct sRightValueObject* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_51, 0, sizeof(struct sRightValueObject*));
memset(&result_52, 0, sizeof(struct sRightValueObject*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_51,0,sizeof(struct sRightValueObject*));
                __result48__ = __result_obj__ = result_51;
                return __result48__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result49__ = __result_obj__ = self->it->item;
                return __result49__;
            }
            memset(&result_52,0,sizeof(struct sRightValueObject*));
            __result50__ = __result_obj__ = result_52;
            return __result50__;
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct sRightValueObject* result_54;
struct sRightValueObject* __result51__;
struct sRightValueObject* __result52__;
struct sRightValueObject* result_55;
struct sRightValueObject* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_54, 0, sizeof(struct sRightValueObject*));
memset(&result_55, 0, sizeof(struct sRightValueObject*));
                if(self==((void*)0)) {
                    memset(&result_54,0,sizeof(struct sRightValueObject*));
                    __result51__ = __result_obj__ = result_54;
                    return __result51__;
                }
                self->it=self->head;
                if(self->it) {
                    __result52__ = __result_obj__ = self->it->item;
                    return __result52__;
                }
                memset(&result_55,0,sizeof(struct sRightValueObject*));
                __result53__ = __result_obj__ = result_55;
                return __result53__;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
                return self==((void*)0)||self->it==((void*)0);
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct sRightValueObject* result_57;
struct sRightValueObject* __result54__;
struct sRightValueObject* __result55__;
struct sRightValueObject* result_58;
struct sRightValueObject* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_57, 0, sizeof(struct sRightValueObject*));
memset(&result_58, 0, sizeof(struct sRightValueObject*));
                if(self==((void*)0)||self->it==((void*)0)) {
                    memset(&result_57,0,sizeof(struct sRightValueObject*));
                    __result54__ = __result_obj__ = result_57;
                    return __result54__;
                }
                self->it=self->it->next;
                if(self->it) {
                    __result55__ = __result_obj__ = self->it->item;
                    return __result55__;
                }
                memset(&result_58,0,sizeof(struct sRightValueObject*));
                __result56__ = __result_obj__ = result_58;
                return __result56__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_59;
struct list_item$1sRightValueObjectph* prev_it_60;
memset(&it_59, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_60, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_59=self->head;
                while(it_59!=((void*)0)) {
                    prev_it_60=it_59;
                    it_59=it_59->next;
                    come_call_finalizer3(prev_it_60,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_61;
struct list_item$1sTypeph* prev_it_62;
memset(&it_61, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_62, 0, sizeof(struct list_item$1sTypeph*));
                                                it_61=self->head;
                                                while(it_61!=((void*)0)) {
                                                    prev_it_62=it_61;
                                                    it_61=it_61->next;
                                                    come_call_finalizer3(prev_it_62,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_63;
struct list_item$1sNodeph* prev_it_64;
memset(&it_63, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_64, 0, sizeof(struct list_item$1sNodeph*));
                                                it_63=self->head;
                                                while(it_63!=((void*)0)) {
                                                    prev_it_64=it_63;
                                                    it_63=it_63->next;
                                                    come_call_finalizer3(prev_it_64,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
                                                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                                                            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_65;
struct list_item$1charph* prev_it_66;
memset(&it_65, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_66, 0, sizeof(struct list_item$1charph*));
                                                it_65=self->head;
                                                while(it_65!=((void*)0)) {
                                                    prev_it_66=it_65;
                                                    it_65=it_65->next;
                                                    come_call_finalizer3(prev_it_66,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
                                                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                                                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static void list$1sRightValueObjectpp_finalize(struct list$1sRightValueObjectp* self){
struct list_item$1sRightValueObjectp* it_67;
struct list_item$1sRightValueObjectp* prev_it_68;
memset(&it_67, 0, sizeof(struct list_item$1sRightValueObjectp*));
memset(&prev_it_68, 0, sizeof(struct list_item$1sRightValueObjectp*));
            it_67=self->head;
            while(it_67!=((void*)0)) {
                prev_it_68=it_67;
                it_67=it_67->next;
                come_call_finalizer3(prev_it_68,list_item$1sRightValueObjectpp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void list_item$1sRightValueObjectpp_finalize(struct list_item$1sRightValueObjectp* self){
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* right_value118;
struct sType* result_69;
struct sType* __result75__;
struct sType* __result76__;
struct sClass* klass_94;
void* right_value119;
struct sType* result_type_95;
void* right_value120;
void* right_value121;
struct tuple1$1sTypeph* __dec_obj41;
struct list$1sTypeph* o2_saved_98;
struct sType* it_101;
void* right_value122;
struct sType* new_param_type_104;
void* right_value126;
int generics_number_108;
void* right_value127;
struct list$1sNodeph* array_num_109;
_Bool immutable__110;
int pointer_num_111;
_Bool heap_112;
_Bool guard__113;
_Bool no_heap_114;
_Bool no_calling_destructor_115;
_Bool null_value_116;
void* right_value128;
struct sType* __dec_obj45;
struct list$1sNodeph* __dec_obj46;
int generics_number_120;
struct sClass* klass2_121;
int generics_number2_122;
void* right_value129;
struct list$1sNodeph* array_num_123;
_Bool immutable__124;
int pointer_num_125;
_Bool heap_126;
_Bool guard__127;
_Bool no_heap_128;
_Bool no_calling_destructor_129;
_Bool null_value_130;
_Bool record__131;
void* right_value130;
struct sType* __dec_obj47;
struct list$1sNodeph* __dec_obj48;
struct list$1sTypeph* o2_saved_132;
struct sType* it_133;
void* right_value131;
struct sType* type_134;
void* right_value132;
struct list$1sTypeph* o2_saved_135;
struct sType* it_136;
void* right_value133;
struct sType* type_137;
void* right_value134;
void* right_value135;
char* new_name_138;
struct sType* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
memset(&result_69, 0, sizeof(struct sType*));
memset(&klass_94, 0, sizeof(struct sClass*));
right_value119 = (void*)0;
memset(&result_type_95, 0, sizeof(struct sType*));
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&o2_saved_98, 0, sizeof(struct list$1sTypeph*));
memset(&it_101, 0, sizeof(struct sType*));
right_value122 = (void*)0;
memset(&new_param_type_104, 0, sizeof(struct sType*));
right_value126 = (void*)0;
memset(&generics_number_108, 0, sizeof(int));
right_value127 = (void*)0;
memset(&array_num_109, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__110, 0, sizeof(_Bool));
memset(&pointer_num_111, 0, sizeof(int));
memset(&heap_112, 0, sizeof(_Bool));
memset(&guard__113, 0, sizeof(_Bool));
memset(&no_heap_114, 0, sizeof(_Bool));
memset(&no_calling_destructor_115, 0, sizeof(_Bool));
memset(&null_value_116, 0, sizeof(_Bool));
right_value128 = (void*)0;
memset(&generics_number_120, 0, sizeof(int));
memset(&klass2_121, 0, sizeof(struct sClass*));
memset(&generics_number2_122, 0, sizeof(int));
right_value129 = (void*)0;
memset(&array_num_123, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__124, 0, sizeof(_Bool));
memset(&pointer_num_125, 0, sizeof(int));
memset(&heap_126, 0, sizeof(_Bool));
memset(&guard__127, 0, sizeof(_Bool));
memset(&no_heap_128, 0, sizeof(_Bool));
memset(&no_calling_destructor_129, 0, sizeof(_Bool));
memset(&null_value_130, 0, sizeof(_Bool));
memset(&record__131, 0, sizeof(_Bool));
right_value130 = (void*)0;
memset(&o2_saved_132, 0, sizeof(struct list$1sTypeph*));
memset(&it_133, 0, sizeof(struct sType*));
right_value131 = (void*)0;
memset(&type_134, 0, sizeof(struct sType*));
right_value132 = (void*)0;
memset(&o2_saved_135, 0, sizeof(struct list$1sTypeph*));
memset(&it_136, 0, sizeof(struct sType*));
right_value133 = (void*)0;
memset(&type_137, 0, sizeof(struct sType*));
right_value134 = (void*)0;
right_value135 = (void*)0;
memset(&new_name_138, 0, sizeof(char*));
    result_69=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=sType_clone(type))));
    come_call_finalizer3(right_value118,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(generics_type==((void*)0)) {
        __result75__ = __result_obj__ = result_69;
        come_call_finalizer3(result_69,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result75__;
    }
    if(list$1sTypeph_length(generics_type->mGenericsTypes)==0) {
        __result76__ = __result_obj__ = result_69;
        come_call_finalizer3(result_69,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result76__;
    }
    klass_94=type->mClass;
    if(string_operator_equals(klass_94->mName,"lambda")) {
        result_type_95=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=solve_generics(type->mResultType->v1,generics_type,info))));
        come_call_finalizer3(right_value119,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj41=result_69->mResultType;
        result_69->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value121=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value120=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 55, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_95)))));
        come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value120,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value121,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1sTypeph_reset(result_69->mParamTypes);
        for(        o2_saved_98=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_101=list$1sTypeph_begin((o2_saved_98));        !list$1sTypeph_end((o2_saved_98));        it_101=list$1sTypeph_next((o2_saved_98))        ){
            new_param_type_104=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=solve_generics(it_101,generics_type,info))));
            come_call_finalizer3(right_value122,sType_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sTypeph_push_back(result_69->mParamTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=sType_clone(new_param_type_104)))));
            come_call_finalizer3(right_value126,sType_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(new_param_type_104,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_98,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_95,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(klass_94->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0) {
            generics_number_108=klass_94->mMethodGenericsNum;
            if(generics_number_108>=list$1sTypeph_length(info->method_generics_types)) {
                err_msg(info,"invalid method generics parametor number. %d %d",generics_number_108,list$1sTypeph_length(info->method_generics_types));
                exit(2);
            }
            array_num_109=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value127=list$1sNodephp_clone(type->mArrayNum))));
            come_call_finalizer3(right_value127,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            immutable__110=type->mImmutable;
            pointer_num_111=type->mPointerNum;
            heap_112=type->mHeap;
            guard__113=type->mGuardValue;
            no_heap_114=type->mNoHeap;
            no_calling_destructor_115=type->mNoCallingDestructor;
            null_value_116=type->mNullValue;
            __dec_obj45=result_69;
            result_69=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_108), "04heap.c", 84, 0))))));
            come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value128,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(heap_112) {
                result_69->mHeap=heap_112;
            }
            if(guard__113) {
                result_69->mGuardValue=guard__113;
            }
            if(no_heap_114) {
                result_69->mNoHeap=(_Bool)1;
                result_69->mHeap=(_Bool)0;
            }
            if(no_calling_destructor_115) {
                result_69->mNoCallingDestructor=(_Bool)1;
            }
            if(immutable__110) {
                result_69->mImmutable=immutable__110;
            }
            if(list$1sNodeph_length(array_num_109)>0) {
                __dec_obj46=result_69->mArrayNum;
                result_69->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_109);
                come_call_finalizer3(__dec_obj46,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(null_value_116) {
                result_69->mNullValue=null_value_116;
            }
            if(pointer_num_111>0) {
                result_69->mPointerNum+=pointer_num_111;
            }
            come_call_finalizer3(array_num_109,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(klass_94->mGenerics) {
                generics_number_120=klass_94->mGenericsNum;
                if(generics_number_120>=list$1sTypeph_length(generics_type->mGenericsTypes)) {
                    err_msg(info,"invalid generics parametor number");
                    exit(2);
                }
                klass2_121=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_120), "04heap.c", 123, 1))->mClass;
                generics_number2_122=klass2_121->mGenericsNum;
                if(generics_number_120!=generics_number2_122) {
                    array_num_123=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value129=list$1sNodephp_clone(type->mArrayNum))));
                    come_call_finalizer3(right_value129,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    immutable__124=type->mImmutable;
                    pointer_num_125=type->mPointerNum;
                    heap_126=type->mHeap;
                    guard__127=type->mGuardValue;
                    no_heap_128=type->mNoHeap;
                    no_calling_destructor_129=type->mNoCallingDestructor;
                    null_value_130=type->mNullValue;
                    record__131=type->mRecord;
                    __dec_obj47=result_69;
                    result_69=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_120), "04heap.c", 140, 2))))));
                    come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value130,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    if(heap_126) {
                        result_69->mHeap=heap_126;
                    }
                    if(guard__127) {
                        result_69->mGuardValue=guard__127;
                    }
                    if(record__131) {
                        result_69->mRecord=record__131;
                    }
                    if(no_heap_128) {
                        result_69->mNoHeap=(_Bool)1;
                        result_69->mHeap=(_Bool)0;
                    }
                    if(no_calling_destructor_129) {
                        result_69->mNoCallingDestructor=(_Bool)1;
                    }
                    if(immutable__124) {
                        result_69->mImmutable=immutable__124;
                    }
                    if(list$1sNodeph_length(array_num_123)>0) {
                        __dec_obj48=result_69->mArrayNum;
                        result_69->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_123);
                        come_call_finalizer3(__dec_obj48,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(null_value_130) {
                        result_69->mNullValue=null_value_130;
                    }
                    if(pointer_num_125>0) {
                        result_69->mPointerNum+=pointer_num_125;
                    }
                    come_call_finalizer3(array_num_123,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                list$1sTypeph_reset(result_69->mGenericsTypes);
                for(                o2_saved_132=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_133=list$1sTypeph_begin((o2_saved_132));                !list$1sTypeph_end((o2_saved_132));                it_133=list$1sTypeph_next((o2_saved_132))                ){
                    type_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=solve_generics(it_133,generics_type,info))));
                    come_call_finalizer3(right_value131,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1sTypeph_push_back(result_69->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(type_134)))));
                    come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(type_134,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_132,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                list$1sTypeph_reset(result_69->mMultipleTypes);
                for(                o2_saved_135=(struct list$1sTypeph*)come_increment_ref_count((type->mMultipleTypes)),it_136=list$1sTypeph_begin((o2_saved_135));                !list$1sTypeph_end((o2_saved_135));                it_136=list$1sTypeph_next((o2_saved_135))                ){
                    type_137=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=solve_generics(it_136,generics_type,info))));
                    come_call_finalizer3(right_value133,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1sTypeph_push_back(result_69->mMultipleTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_clone(type_137)))));
                    come_call_finalizer3(right_value134,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(type_137,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_135,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                if(!output_generics_struct(result_69,generics_type,info)) {
                    new_name_138=(char*)come_increment_ref_count(((char*)(right_value135=create_generics_name(type,info))));
                    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    printf("output generics is failed(%s)",new_name_138);
                    exit(1);
                    new_name_138 = come_decrement_ref_count2(new_name_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    __result88__ = __result_obj__ = result_69;
    come_call_finalizer3(result_69,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result88__;
    come_call_finalizer3(result_69,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
struct sType* __result57__;
void* right_value83;
struct sType* result_70;
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
struct sType* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
memset(&result_70, 0, sizeof(struct sType*));
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
            __result57__ = __result_obj__ = (void*)0;
            return __result57__;
        }
        result_70=(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value83,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(self!=((void*)0)) {
            result_70->mClass=self->mClass;
        }
        if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
            __dec_obj20=result_70->mMultipleTypes;
            result_70->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value90=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value90,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
            __dec_obj22=result_70->mNoSolvedGenericsType;
            result_70->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value93=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj22,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value93,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
            __dec_obj23=result_70->mOriginalLoadVarType;
            result_70->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value94=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj23,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value94,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
            __dec_obj24=result_70->mGenericsName;
            result_70->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value95=string_clone(self->mGenericsName))));
            __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
            __dec_obj25=result_70->mGenericsTypes;
            result_70->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value96=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value96,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
            __dec_obj29=result_70->mArrayNum;
            result_70->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value104=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj29,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value104,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_70->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            __dec_obj30=result_70->mParamTypes;
            result_70->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value105=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj30,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value105,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            __dec_obj34=result_70->mParamNames;
            result_70->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value112=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj34,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value112,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            __dec_obj35=result_70->mResultType;
            result_70->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value113=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj35,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value113,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_70->mVarArgs=self->mVarArgs;
        }
        if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
            __dec_obj36=result_70->mAlignas;
            result_70->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value114=sNode_clone(self->mAlignas))));
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value114) { right_value114 = come_decrement_ref_count2(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(self!=((void*)0)) {
            result_70->mUnsigned=self->mUnsigned;
        }
        if(self!=((void*)0)) {
            result_70->mShort=self->mShort;
        }
        if(self!=((void*)0)) {
            result_70->mLong=self->mLong;
        }
        if(self!=((void*)0)) {
            result_70->mLongLong=self->mLongLong;
        }
        if(self!=((void*)0)) {
            result_70->mConstant=self->mConstant;
        }
        if(self!=((void*)0)) {
            result_70->mRegister=self->mRegister;
        }
        if(self!=((void*)0)) {
            result_70->mVolatile=self->mVolatile;
        }
        if(self!=((void*)0)) {
            result_70->mStatic=self->mStatic;
        }
        if(self!=((void*)0)) {
            result_70->mUniq=self->mUniq;
        }
        if(self!=((void*)0)) {
            result_70->mRecord=self->mRecord;
        }
        if(self!=((void*)0)) {
            result_70->mExtern=self->mExtern;
        }
        if(self!=((void*)0)) {
            result_70->mRestrict=self->mRestrict;
        }
        if(self!=((void*)0)) {
            result_70->mImmutable=self->mImmutable;
        }
        if(self!=((void*)0)) {
            result_70->mHeap=self->mHeap;
        }
        if(self!=((void*)0)) {
            result_70->mDummyHeap=self->mDummyHeap;
        }
        if(self!=((void*)0)) {
            result_70->mDelegate=self->mDelegate;
        }
        if(self!=((void*)0)) {
            result_70->mShare=self->mShare;
        }
        if(self!=((void*)0)) {
            result_70->mClone=self->mClone;
        }
        if(self!=((void*)0)) {
            result_70->mNoHeap=self->mNoHeap;
        }
        if(self!=((void*)0)) {
            result_70->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(self!=((void*)0)) {
            result_70->mRefference=self->mRefference;
        }
        if(self!=((void*)0)) {
            result_70->mException=self->mException;
        }
        if(self!=((void*)0)) {
            result_70->mPointerNum=self->mPointerNum;
        }
        if(self!=((void*)0)) {
            result_70->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(self!=((void*)0)) {
            result_70->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(self!=((void*)0)) {
            result_70->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
        }
        if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
            __dec_obj37=result_70->mSizeNum;
            result_70->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value115=sNode_clone(self->mSizeNum))));
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value115) { right_value115 = come_decrement_ref_count2(right_value115, ((struct sNode*)right_value115)->finalize, ((struct sNode*)right_value115)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(self!=((void*)0)) {
            result_70->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(self!=((void*)0)) {
            result_70->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
            __dec_obj38=result_70->mOriginalTypeName;
            result_70->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value116=string_clone(self->mOriginalTypeName))));
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_70->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(self!=((void*)0)) {
            result_70->mFunctionParam=self->mFunctionParam;
        }
        if(self!=((void*)0)) {
            result_70->mAllocaValue=self->mAllocaValue;
        }
        if(self!=((void*)0)) {
            result_70->mGenericsStruct=self->mGenericsStruct;
        }
        if(self!=((void*)0)) {
            result_70->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(self!=((void*)0)) {
            result_70->mComeMemCore=self->mComeMemCore;
        }
        if(self!=((void*)0)) {
            result_70->mInline=self->mInline;
        }
        if(self!=((void*)0)) {
            result_70->mNullValue=self->mNullValue;
        }
        if(self!=((void*)0)) {
            result_70->mGuardValue=self->mGuardValue;
        }
        if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
            __dec_obj39=result_70->mAsmName;
            result_70->mAsmName=(char*)come_increment_ref_count(((char*)(right_value117=string_clone(self->mAsmName))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_70->mArrayPointerType=self->mArrayPointerType;
        }
        if(self!=((void*)0)) {
            result_70->mLambdaArray=self->mLambdaArray;
        }
        if(self!=((void*)0)) {
            result_70->mNoNumberArray=self->mNoNumberArray;
        }
        __result74__ = __result_obj__ = result_70;
        come_call_finalizer3(result_70,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result74__;
        come_call_finalizer3(result_70,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result58__;
void* right_value84;
void* right_value85;
struct list$1sTypeph* result_71;
struct list_item$1sTypeph* it_72;
void* right_value89;
struct list$1sTypeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
right_value85 = (void*)0;
memset(&result_71, 0, sizeof(struct list$1sTypeph*));
memset(&it_72, 0, sizeof(struct list_item$1sTypeph*));
right_value89 = (void*)0;
                if(self==((void*)0)) {
                    __result58__ = __result_obj__ = ((void*)0);
                    return __result58__;
                }
                result_71=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value85=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value84=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value84,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value85,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_72=self->head;
                while(it_72!=((void*)0)) {
                    list$1sTypeph_add(result_71,(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=sType_clone(it_72->item)))));
                    come_call_finalizer3(right_value89,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    it_72=it_72->next;
                }
                __result61__ = __result_obj__ = result_71;
                come_call_finalizer3(result_71,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result61__;
                come_call_finalizer3(result_71,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result59__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result59__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* right_value86;
struct list_item$1sTypeph* litem_73;
struct sType* __dec_obj17;
void* right_value87;
struct list_item$1sTypeph* litem_74;
struct sType* __dec_obj18;
void* right_value88;
struct list_item$1sTypeph* litem_75;
struct sType* __dec_obj19;
struct list$1sTypeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1sTypeph*));
right_value87 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1sTypeph*));
right_value88 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1sTypeph*));
                        if(self->len==0) {
                            litem_73=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value86,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_73->prev=((void*)0);
                            litem_73->next=((void*)0);
                            __dec_obj17=litem_73->item;
                            litem_73->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_73;
                            self->head=litem_73;
                        }
                        else {
                            if(self->len==1) {
                                litem_74=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value87=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value87,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_74->prev=self->head;
                                litem_74->next=((void*)0);
                                __dec_obj18=litem_74->item;
                                litem_74->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj18,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_74;
                                self->head->next=litem_74;
                            }
                            else {
                                litem_75=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value88=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value88,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_75->prev=self->tail;
                                litem_75->next=((void*)0);
                                __dec_obj19=litem_75->item;
                                litem_75->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_75;
                                self->tail=litem_75;
                            }
                        }
                        self->len++;
                        __result60__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result60__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_76;
struct list_item$1sTypeph* prev_it_77;
memset(&it_76, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_77, 0, sizeof(struct list_item$1sTypeph*));
                it_76=self->head;
                while(it_76!=((void*)0)) {
                    prev_it_77=it_76;
                    it_76=it_76->next;
                    come_call_finalizer3(prev_it_77,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
struct tuple1$1sTypeph* __result62__;
void* right_value91;
struct tuple1$1sTypeph* result_78;
void* right_value92;
struct sType* __dec_obj21;
struct tuple1$1sTypeph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
memset(&result_78, 0, sizeof(struct tuple1$1sTypeph*));
right_value92 = (void*)0;
                if(self==(void*)0) {
                    __result62__ = __result_obj__ = (void*)0;
                    return __result62__;
                }
                result_78=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value91=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value91,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj21=result_78->v1;
                    result_78->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj21,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value92,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result63__ = __result_obj__ = result_78;
                come_call_finalizer3(result_78,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result63__;
                come_call_finalizer3(result_78,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result64__;
void* right_value97;
void* right_value98;
struct list$1sNodeph* result_79;
struct list_item$1sNodeph* it_80;
void* right_value103;
struct list$1sNodeph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
right_value98 = (void*)0;
memset(&result_79, 0, sizeof(struct list$1sNodeph*));
memset(&it_80, 0, sizeof(struct list_item$1sNodeph*));
right_value103 = (void*)0;
                if(self==((void*)0)) {
                    __result64__ = __result_obj__ = ((void*)0);
                    return __result64__;
                }
                result_79=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value98=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value97=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value97,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value98,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_80=self->head;
                while(it_80!=((void*)0)) {
                    list$1sNodeph_add(result_79,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value103=sNode_clone(it_80->item)))));
                    if(right_value103) { right_value103 = come_decrement_ref_count2(right_value103, ((struct sNode*)right_value103)->finalize, ((struct sNode*)right_value103)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_80=it_80->next;
                }
                __result69__ = __result_obj__ = result_79;
                come_call_finalizer3(result_79,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result69__;
                come_call_finalizer3(result_79,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result65__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result65__;
                    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* right_value99;
struct list_item$1sNodeph* litem_81;
struct sNode* __dec_obj26;
void* right_value100;
struct list_item$1sNodeph* litem_82;
struct sNode* __dec_obj27;
void* right_value101;
struct list_item$1sNodeph* litem_83;
struct sNode* __dec_obj28;
struct list$1sNodeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1sNodeph*));
right_value100 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1sNodeph*));
right_value101 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1sNodeph*));
                        if(self->len==0) {
                            litem_81=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value99,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_81->prev=((void*)0);
                            litem_81->next=((void*)0);
                            __dec_obj26=litem_81->item;
                            litem_81->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_81;
                            self->head=litem_81;
                        }
                        else {
                            if(self->len==1) {
                                litem_82=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value100=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value100,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_82->prev=self->head;
                                litem_82->next=((void*)0);
                                __dec_obj27=litem_82->item;
                                litem_82->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_82;
                                self->head->next=litem_82;
                            }
                            else {
                                litem_83=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value101=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value101,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_83->prev=self->tail;
                                litem_83->next=((void*)0);
                                __dec_obj28=litem_83->item;
                                litem_83->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count2(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_83;
                                self->tail=litem_83;
                            }
                        }
                        self->len++;
                        __result66__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result66__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
struct sNode* __result67__;
void* right_value102;
struct sNode* result_84;
struct sNode* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
memset(&result_84, 0, sizeof(struct sNode*));
                        if(self==(void*)0) {
                            __result67__ = __result_obj__ = (void*)0;
                            return __result67__;
                        }
                        result_84=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value102=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value102) { right_value102 = come_decrement_ref_count2(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(self!=((void*)0)&&self->clone!=((void*)0)) {
                            result_84->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(self!=((void*)0)) {
                            result_84->finalize=self->finalize;
                        }
                        if(self!=((void*)0)) {
                            result_84->clone=self->clone;
                        }
                        if(self!=((void*)0)) {
                            result_84->compile=self->compile;
                        }
                        if(self!=((void*)0)) {
                            result_84->sline=self->sline;
                        }
                        if(self!=((void*)0)) {
                            result_84->sname=self->sname;
                        }
                        if(self!=((void*)0)) {
                            result_84->terminated=self->terminated;
                        }
                        if(self!=((void*)0)) {
                            result_84->kind=self->kind;
                        }
                        __result68__ = __result_obj__ = result_84;
                        if(result_84) { result_84 = come_decrement_ref_count2(result_84, ((struct sNode*)result_84)->finalize, ((struct sNode*)result_84)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result68__;
                        if(result_84) { result_84 = come_decrement_ref_count2(result_84, ((struct sNode*)result_84)->finalize, ((struct sNode*)result_84)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_85;
struct list_item$1sNodeph* prev_it_86;
memset(&it_85, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_86, 0, sizeof(struct list_item$1sNodeph*));
                it_85=self->head;
                while(it_85!=((void*)0)) {
                    prev_it_86=it_85;
                    it_85=it_85->next;
                    come_call_finalizer3(prev_it_86,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result70__;
void* right_value106;
void* right_value107;
struct list$1charph* result_87;
struct list_item$1charph* it_88;
void* right_value111;
struct list$1charph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&result_87, 0, sizeof(struct list$1charph*));
memset(&it_88, 0, sizeof(struct list_item$1charph*));
right_value111 = (void*)0;
                if(self==((void*)0)) {
                    __result70__ = __result_obj__ = ((void*)0);
                    return __result70__;
                }
                result_87=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value107=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value106=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))))));
                come_call_finalizer3(right_value106,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value107,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_88=self->head;
                while(it_88!=((void*)0)) {
                    list$1charph_add(result_87,(char*)come_increment_ref_count(((char*)(right_value111=string_clone(it_88->item)))));
                    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_88=it_88->next;
                }
                __result73__ = __result_obj__ = result_87;
                come_call_finalizer3(result_87,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result73__;
                come_call_finalizer3(result_87,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result71__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result71__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
void* right_value108;
struct list_item$1charph* litem_89;
char* __dec_obj31;
void* right_value109;
struct list_item$1charph* litem_90;
char* __dec_obj32;
void* right_value110;
struct list_item$1charph* litem_91;
char* __dec_obj33;
struct list$1charph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
memset(&litem_89, 0, sizeof(struct list_item$1charph*));
right_value109 = (void*)0;
memset(&litem_90, 0, sizeof(struct list_item$1charph*));
right_value110 = (void*)0;
memset(&litem_91, 0, sizeof(struct list_item$1charph*));
                        if(self->len==0) {
                            litem_89=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
                            come_call_finalizer3(right_value108,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_89->prev=((void*)0);
                            litem_89->next=((void*)0);
                            __dec_obj31=litem_89->item;
                            litem_89->item=(char*)come_increment_ref_count(item);
                            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_89;
                            self->head=litem_89;
                        }
                        else {
                            if(self->len==1) {
                                litem_90=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value109=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
                                come_call_finalizer3(right_value109,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_90->prev=self->head;
                                litem_90->next=((void*)0);
                                __dec_obj32=litem_90->item;
                                litem_90->item=(char*)come_increment_ref_count(item);
                                __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_90;
                                self->head->next=litem_90;
                            }
                            else {
                                litem_91=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value110=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
                                come_call_finalizer3(right_value110,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_91->prev=self->tail;
                                litem_91->next=((void*)0);
                                __dec_obj33=litem_91->item;
                                litem_91->item=(char*)come_increment_ref_count(item);
                                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_91;
                                self->tail=litem_91;
                            }
                        }
                        self->len++;
                        __result72__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result72__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_92;
struct list_item$1charph* prev_it_93;
memset(&it_92, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_93, 0, sizeof(struct list_item$1charph*));
                it_92=self->head;
                while(it_92!=((void*)0)) {
                    prev_it_93=it_92;
                    it_92=it_92->next;
                    come_call_finalizer3(prev_it_93,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct tuple1$1sTypeph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj40=self->v1;
            self->v1=(struct sType*)come_increment_ref_count(v1);
            come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 0, 0, (void*)0);
            __result77__ = __result_obj__ = self;
            come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result77__;
            come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_96;
struct list_item$1sTypeph* prev_it_97;
struct list$1sTypeph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_96, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_97, 0, sizeof(struct list_item$1sTypeph*));
            it_96=self->head;
            while(it_96!=((void*)0)) {
                prev_it_97=it_96;
                it_96=it_96->next;
                come_call_finalizer3(prev_it_97,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result78__ = __result_obj__ = self;
            return __result78__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
struct sType* result_99;
struct sType* __result79__;
struct sType* __result80__;
struct sType* result_100;
struct sType* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_99, 0, sizeof(struct sType*));
memset(&result_100, 0, sizeof(struct sType*));
            if(self==((void*)0)) {
                memset(&result_99,0,sizeof(struct sType*));
                __result79__ = __result_obj__ = result_99;
                return __result79__;
            }
            self->it=self->head;
            if(self->it) {
                __result80__ = __result_obj__ = self->it->item;
                return __result80__;
            }
            memset(&result_100,0,sizeof(struct sType*));
            __result81__ = __result_obj__ = result_100;
            return __result81__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
            return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
struct sType* result_102;
struct sType* __result82__;
struct sType* __result83__;
struct sType* result_103;
struct sType* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_102, 0, sizeof(struct sType*));
memset(&result_103, 0, sizeof(struct sType*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_102,0,sizeof(struct sType*));
                __result82__ = __result_obj__ = result_102;
                return __result82__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result83__ = __result_obj__ = self->it->item;
                return __result83__;
            }
            memset(&result_103,0,sizeof(struct sType*));
            __result84__ = __result_obj__ = result_103;
            return __result84__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* right_value123;
struct list_item$1sTypeph* litem_105;
struct sType* __dec_obj42;
void* right_value124;
struct list_item$1sTypeph* litem_106;
struct sType* __dec_obj43;
void* right_value125;
struct list_item$1sTypeph* litem_107;
struct sType* __dec_obj44;
struct list$1sTypeph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
memset(&litem_105, 0, sizeof(struct list_item$1sTypeph*));
right_value124 = (void*)0;
memset(&litem_106, 0, sizeof(struct list_item$1sTypeph*));
right_value125 = (void*)0;
memset(&litem_107, 0, sizeof(struct list_item$1sTypeph*));
                if(self->len==0) {
                    litem_105=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value123=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 219, "list_item$1sTypeph"))));
                    come_call_finalizer3(right_value123,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_105->prev=((void*)0);
                    litem_105->next=((void*)0);
                    __dec_obj42=litem_105->item;
                    litem_105->item=(struct sType*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_105;
                    self->head=litem_105;
                }
                else {
                    if(self->len==1) {
                        litem_106=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value124=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 229, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value124,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_106->prev=self->head;
                        litem_106->next=((void*)0);
                        __dec_obj43=litem_106->item;
                        litem_106->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_106;
                        self->head->next=litem_106;
                    }
                    else {
                        litem_107=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value125=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 239, "list_item$1sTypeph"))));
                        come_call_finalizer3(right_value125,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_107->prev=self->tail;
                        litem_107->next=((void*)0);
                        __dec_obj44=litem_107->item;
                        litem_107->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_107;
                        self->tail=litem_107;
                    }
                }
                self->len++;
                __result85__ = __result_obj__ = self;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result85__;
                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
struct list_item$1sTypeph* it_117;
int i_118;
struct sType* __result86__;
struct sType* default_value_119;
struct sType* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_117, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_118, 0, sizeof(int));
memset(&default_value_119, 0, sizeof(struct sType*));
                if(position<0) {
                    position+=self->len;
                }
                it_117=self->head;
                i_118=0;
                while(it_117!=((void*)0)) {
                    if(position==i_118) {
                        __result86__ = __result_obj__ = it_117->item;
                        return __result86__;
                    }
                    it_117=it_117->next;
                    i_118++;
                }
                memset(&default_value_119,0,sizeof(struct sType*));
                __result87__ = __result_obj__ = default_value_119;
                come_call_finalizer3(default_value_119,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result87__;
                come_call_finalizer3(default_value_119,sType_finalize, 0, 0, 0, 0, (void*)0);
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
struct sType* result_139;
struct sClass* klass_140;
int generics_number_141;
void* right_value137;
struct list$1sNodeph* array_num_142;
_Bool immutable__143;
int pointer_num_144;
_Bool heap_145;
_Bool guard__146;
_Bool no_heap_147;
_Bool no_calling_destructor_148;
_Bool null_value_149;
void* right_value138;
struct sType* __dec_obj49;
struct list$1sNodeph* __dec_obj50;
struct sType* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
memset(&result_139, 0, sizeof(struct sType*));
memset(&klass_140, 0, sizeof(struct sClass*));
memset(&generics_number_141, 0, sizeof(int));
right_value137 = (void*)0;
memset(&array_num_142, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__143, 0, sizeof(_Bool));
memset(&pointer_num_144, 0, sizeof(int));
memset(&heap_145, 0, sizeof(_Bool));
memset(&guard__146, 0, sizeof(_Bool));
memset(&no_heap_147, 0, sizeof(_Bool));
memset(&no_calling_destructor_148, 0, sizeof(_Bool));
memset(&null_value_149, 0, sizeof(_Bool));
right_value138 = (void*)0;
    result_139=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(type))));
    come_call_finalizer3(right_value136,sType_finalize, 0, 1, 0, 0, __result_obj__);
    klass_140=type->mClass;
    if(klass_140->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0) {
        generics_number_141=klass_140->mMethodGenericsNum;
        if(generics_number_141>=list$1sTypeph_length(info->method_generics_types)) {
            err_msg(info,"invalid method generics parametor number. %d %d",generics_number_141,list$1sTypeph_length(info->method_generics_types));
            exit(2);
        }
        array_num_142=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value137=list$1sNodephp_clone(type->mArrayNum))));
        come_call_finalizer3(right_value137,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        immutable__143=type->mImmutable;
        pointer_num_144=type->mPointerNum;
        heap_145=type->mHeap;
        guard__146=type->mGuardValue;
        no_heap_147=type->mNoHeap;
        no_calling_destructor_148=type->mNoCallingDestructor;
        null_value_149=type->mNullValue;
        __dec_obj49=result_139;
        result_139=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_141), "04heap.c", 222, 3))))));
        come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value138,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(heap_145) {
            result_139->mHeap=heap_145;
        }
        if(guard__146) {
            result_139->mGuardValue=guard__146;
        }
        if(no_heap_147) {
            result_139->mNoHeap=(_Bool)1;
            result_139->mHeap=(_Bool)0;
        }
        if(no_calling_destructor_148) {
            result_139->mNoCallingDestructor=(_Bool)1;
        }
        if(immutable__143) {
            result_139->mImmutable=immutable__143;
        }
        if(list$1sNodeph_length(array_num_142)>0) {
            __dec_obj50=result_139->mArrayNum;
            result_139->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_142);
            come_call_finalizer3(__dec_obj50,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(null_value_149) {
            result_139->mNullValue=null_value_149;
        }
        if(pointer_num_144>0) {
            result_139->mPointerNum+=pointer_num_144;
        }
        come_call_finalizer3(array_num_142,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result89__ = __result_obj__ = result_139;
    come_call_finalizer3(result_139,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result89__;
    come_call_finalizer3(result_139,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value139;
struct sType* result_150;
void* right_value140;
struct sType* __dec_obj51;
struct sType* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value139 = (void*)0;
memset(&result_150, 0, sizeof(struct sType*));
right_value140 = (void*)0;
    result_150=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_clone(type))));
    come_call_finalizer3(right_value139,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(generics_type) {
        __dec_obj51=result_150;
        result_150=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=solve_generics(result_150,generics_type,info))));
        come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value140,sType_finalize, 0, 1, 0, 0, __result_obj__);
    }
    __result90__ = __result_obj__ = result_150;
    come_call_finalizer3(result_150,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result90__;
    come_call_finalizer3(result_150,sType_finalize, 0, 0, 0, 0, (void*)0);
}

int get_right_value_id_from_obj(char* obj){
char* p_151;
int n_152;
int __result91__;
int __result92__;
memset(&p_151, 0, sizeof(char*));
memset(&n_152, 0, sizeof(int));
    p_151=obj;
    if(*p_151==40) {
        p_151++;
        while(*p_151!=41) {
            p_151++;
        }
        p_151++;
        if(*p_151==40) {
            p_151++;
            if(strcmp(p_151,"right_value")==0) {
                p_151+=strlen("right_value");
                if(xisdigit(*p_151)) {
                    n_152=0;
                    while(xisdigit(*p_151)) {
                        n_152=n_152*10+*p_151-48;
                        p_151++;
                    }
                    __result91__ = n_152;
                    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result91__;
                }
            }
        }
    }
    __result92__ = -1;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result92__;
    obj = come_decrement_ref_count2(obj, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value141;
char* __result93__;
void* right_value142;
char* __result94__;
void* right_value143;
struct sRightValueObject* new_value_153;
struct sType* __dec_obj52;
void* right_value144;
char* __dec_obj53;
void* right_value145;
char* __dec_obj54;
void* right_value149;
char* buf_157;
void* right_value150;
void* right_value151;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
memset(&new_value_153, 0, sizeof(struct sRightValueObject*));
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value149 = (void*)0;
memset(&buf_157, 0, sizeof(char*));
right_value150 = (void*)0;
right_value151 = (void*)0;
    if(gComeGC||gComeC) {
        __result93__ = __result_obj__ = ((char*)(right_value141=__builtin_string(obj)));
        come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result93__;
    }
    if(info->no_output_come_code) {
        __result94__ = __result_obj__ = ((char*)(right_value142=__builtin_string("")));
        come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result94__;
    }
    new_value_153=(struct sRightValueObject*)come_increment_ref_count(((struct sRightValueObject*)(right_value143=(struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 305, "sRightValueObject"))));
    come_call_finalizer3(right_value143,sRightValueObject_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj52=new_value_153->mType;
    new_value_153->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
    new_value_153->mFreed=(_Bool)0;
    new_value_153->mID=gRightValueNum;
    __dec_obj53=new_value_153->mVarName;
    new_value_153->mVarName=(char*)come_increment_ref_count(((char*)(right_value144=xsprintf("right_value%d",gRightValueNum++))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj54=new_value_153->mFunName;
    new_value_153->mFunName=(char*)come_increment_ref_count(((char*)(right_value145=string_clone(info->come_fun->mName))));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    new_value_153->mBlockLevel=info->block_level;
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_153));
    buf_157=(char*)come_increment_ref_count(((char*)(right_value149=xsprintf("void* right_value%d;\n",gRightValueNum-1))));
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,buf_157);
    add_come_code_at_function_head2(info,"right_value%d = (void*)0;\n",gRightValueNum-1);
    __result96__ = __result_obj__ = ((char*)(right_value151=xsprintf("((%s)(%s=%s))",((char*)(right_value150=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info))),new_value_153->mVarName,obj)));
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(new_value_153,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    buf_157 = come_decrement_ref_count2(buf_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result96__;
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(new_value_153,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    buf_157 = come_decrement_ref_count2(buf_157, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__;
void* right_value146;
struct list_item$1sRightValueObjectph* litem_154;
struct sRightValueObject* __dec_obj55;
void* right_value147;
struct list_item$1sRightValueObjectph* litem_155;
struct sRightValueObject* __dec_obj56;
void* right_value148;
struct list_item$1sRightValueObjectph* litem_156;
struct sRightValueObject* __dec_obj57;
struct list$1sRightValueObjectph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
memset(&litem_154, 0, sizeof(struct list_item$1sRightValueObjectph*));
right_value147 = (void*)0;
memset(&litem_155, 0, sizeof(struct list_item$1sRightValueObjectph*));
right_value148 = (void*)0;
memset(&litem_156, 0, sizeof(struct list_item$1sRightValueObjectph*));
        if(self->len==0) {
            litem_154=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value146=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./neo-c.h", 219, "list_item$1sRightValueObjectph"))));
            come_call_finalizer3(right_value146,list_item$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_154->prev=((void*)0);
            litem_154->next=((void*)0);
            __dec_obj55=litem_154->item;
            litem_154->item=(struct sRightValueObject*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj55,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_154;
            self->head=litem_154;
        }
        else {
            if(self->len==1) {
                litem_155=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value147=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./neo-c.h", 229, "list_item$1sRightValueObjectph"))));
                come_call_finalizer3(right_value147,list_item$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_155->prev=self->head;
                litem_155->next=((void*)0);
                __dec_obj56=litem_155->item;
                litem_155->item=(struct sRightValueObject*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj56,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_155;
                self->head->next=litem_155;
            }
            else {
                litem_156=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value148=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./neo-c.h", 239, "list_item$1sRightValueObjectph"))));
                come_call_finalizer3(right_value148,list_item$1sRightValueObjectphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_156->prev=self->tail;
                litem_156->next=((void*)0);
                __dec_obj57=litem_156->item;
                litem_156->item=(struct sRightValueObject*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj57,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_156;
                self->tail=litem_156;
            }
        }
        self->len++;
        __result95__ = __result_obj__ = self;
        come_call_finalizer3(item,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        return __result95__;
        come_call_finalizer3(item,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
}

void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info){
void* right_value152;
struct sRightValueObject* new_value_158;
struct sType* __dec_obj58;
void* right_value153;
char* __dec_obj59;
void* right_value154;
char* __dec_obj60;
void* right_value155;
char* buf_159;
void* right_value156;
void* right_value157;
char* __dec_obj61;
right_value152 = (void*)0;
memset(&new_value_158, 0, sizeof(struct sRightValueObject*));
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
memset(&buf_159, 0, sizeof(char*));
right_value156 = (void*)0;
right_value157 = (void*)0;
    if(gComeGC||gComeC) {
        come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
        return;
    }
    if(info->no_output_come_code) {
        come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
        return;
    }
    new_value_158=(struct sRightValueObject*)come_increment_ref_count(((struct sRightValueObject*)(right_value152=(struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 330, "sRightValueObject"))));
    come_call_finalizer3(right_value152,sRightValueObject_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj58=new_value_158->mType;
    new_value_158->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
    new_value_158->mFreed=(_Bool)0;
    new_value_158->mID=gRightValueNum;
    __dec_obj59=new_value_158->mVarName;
    new_value_158->mVarName=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("right_value%d",gRightValueNum++))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj60=new_value_158->mFunName;
    new_value_158->mFunName=(char*)come_increment_ref_count(((char*)(right_value154=string_clone(info->come_fun->mName))));
    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    new_value_158->mBlockLevel=info->block_level;
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_158));
    buf_159=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("void* right_value%d;\n",gRightValueNum-1))));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_come_code_at_function_head(info,buf_159);
    add_come_code_at_function_head2(info,"right_value%d = (void*)0;\n",gRightValueNum-1);
    __dec_obj61=come_value->c_value;
    come_value->c_value=(char*)come_increment_ref_count(((char*)(right_value157=xsprintf("((%s)(%s=%s))",((char*)(right_value156=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info))),new_value_158->mVarName,come_value->c_value))));
    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    list$1sRightValueObjectp_add(come_value->right_value_objects,new_value_158);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(new_value_158,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    buf_159 = come_decrement_ref_count2(buf_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sRightValueObjectp* list$1sRightValueObjectp_add(struct list$1sRightValueObjectp* self, struct sRightValueObject* item){
void* __result_obj__;
void* right_value158;
struct list_item$1sRightValueObjectp* litem_160;
void* right_value159;
struct list_item$1sRightValueObjectp* litem_161;
void* right_value160;
struct list_item$1sRightValueObjectp* litem_162;
struct list$1sRightValueObjectp* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value158 = (void*)0;
memset(&litem_160, 0, sizeof(struct list_item$1sRightValueObjectp*));
right_value159 = (void*)0;
memset(&litem_161, 0, sizeof(struct list_item$1sRightValueObjectp*));
right_value160 = (void*)0;
memset(&litem_162, 0, sizeof(struct list_item$1sRightValueObjectp*));
        if(self->len==0) {
            litem_160=(struct list_item$1sRightValueObjectp*)come_increment_ref_count(((struct list_item$1sRightValueObjectp*)(right_value158=(struct list_item$1sRightValueObjectp*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectp)*(1), "./neo-c.h", 149, "list_item$1sRightValueObjectp"))));
            come_call_finalizer3(right_value158,list_item$1sRightValueObjectpp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_160->prev=((void*)0);
            litem_160->next=((void*)0);
            litem_160->item=item;
            self->tail=litem_160;
            self->head=litem_160;
        }
        else {
            if(self->len==1) {
                litem_161=(struct list_item$1sRightValueObjectp*)come_increment_ref_count(((struct list_item$1sRightValueObjectp*)(right_value159=(struct list_item$1sRightValueObjectp*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectp)*(1), "./neo-c.h", 159, "list_item$1sRightValueObjectp"))));
                come_call_finalizer3(right_value159,list_item$1sRightValueObjectpp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_161->prev=self->head;
                litem_161->next=((void*)0);
                litem_161->item=item;
                self->tail=litem_161;
                self->head->next=litem_161;
            }
            else {
                litem_162=(struct list_item$1sRightValueObjectp*)come_increment_ref_count(((struct list_item$1sRightValueObjectp*)(right_value160=(struct list_item$1sRightValueObjectp*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectp)*(1), "./neo-c.h", 169, "list_item$1sRightValueObjectp"))));
                come_call_finalizer3(right_value160,list_item$1sRightValueObjectpp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_162->prev=self->tail;
                litem_162->next=((void*)0);
                litem_162->item=item;
                self->tail->next=litem_162;
                self->tail=litem_162;
            }
        }
        self->len++;
        __result97__ = __result_obj__ = self;
        return __result97__;
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
int i_163;
struct list$1sRightValueObjectph* o2_saved_164;
struct sRightValueObject* it_165;
memset(&i_163, 0, sizeof(int));
memset(&o2_saved_164, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_165, 0, sizeof(struct sRightValueObject*));
    if(gComeGC||gComeC) {
        return;
    }
    i_163=0;
    for(    o2_saved_164=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_165=list$1sRightValueObjectph_begin((o2_saved_164));    !list$1sRightValueObjectph_end((o2_saved_164));    it_165=list$1sRightValueObjectph_next((o2_saved_164))    ){
        if(it_165->mID==right_value_num) {
            break;
        }
        i_163++;
    }
    come_call_finalizer3(o2_saved_164,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1sRightValueObjectph_delete(info->right_value_objects,i_163,i_163+1);
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__;
int tmp_166;
struct list$1sRightValueObjectph* __result98__;
struct list_item$1sRightValueObjectph* it_169;
int i_170;
struct list_item$1sRightValueObjectph* prev_it_171;
struct list_item$1sRightValueObjectph* it_172;
int i_173;
struct list_item$1sRightValueObjectph* prev_it_174;
struct list_item$1sRightValueObjectph* it_175;
struct list_item$1sRightValueObjectph* head_prev_it_176;
struct list_item$1sRightValueObjectph* tail_it_177;
int i_178;
struct list_item$1sRightValueObjectph* prev_it_179;
struct list$1sRightValueObjectph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tmp_166, 0, sizeof(int));
memset(&it_169, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_170, 0, sizeof(int));
memset(&prev_it_171, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_172, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_173, 0, sizeof(int));
memset(&prev_it_174, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_175, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&head_prev_it_176, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&tail_it_177, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_178, 0, sizeof(int));
memset(&prev_it_179, 0, sizeof(struct list_item$1sRightValueObjectph*));
        if(head<0) {
            head+=self->len;
        }
        if(tail<0) {
            tail+=self->len+1;
        }
        if(head>tail) {
            tmp_166=tail;
            tail=head;
            head=tmp_166;
        }
        if(head<0) {
            head=0;
        }
        if(tail>self->len) {
            tail=self->len;
        }
        if(head==tail) {
            __result98__ = __result_obj__ = self;
            return __result98__;
        }
        if(head==0&&tail==self->len) {
            list$1sRightValueObjectph_reset(self);
        }
        else {
            if(head==0) {
                it_169=self->head;
                i_170=0;
                while(it_169!=((void*)0)) {
                    if(i_170<tail) {
                        prev_it_171=it_169;
                        it_169=it_169->next;
                        i_170++;
                        come_call_finalizer3(prev_it_171,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        if(i_170==tail) {
                            self->head=it_169;
                            self->head->prev=((void*)0);
                            break;
                        }
                        else {
                            it_169=it_169->next;
                            i_170++;
                        }
                    }
                }
            }
            else {
                if(tail==self->len) {
                    it_172=self->head;
                    i_173=0;
                    while(it_172!=((void*)0)) {
                        if(i_173==head) {
                            self->tail=it_172->prev;
                            self->tail->next=((void*)0);
                        }
                        if(i_173>=head) {
                            prev_it_174=it_172;
                            it_172=it_172->next;
                            i_173++;
                            come_call_finalizer3(prev_it_174,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                            self->len--;
                        }
                        else {
                            it_172=it_172->next;
                            i_173++;
                        }
                    }
                }
                else {
                    it_175=self->head;
                    head_prev_it_176=((void*)0);
                    tail_it_177=((void*)0);
                    i_178=0;
                    while(it_175!=((void*)0)) {
                        if(i_178==head) {
                            head_prev_it_176=it_175->prev;
                        }
                        if(i_178==tail) {
                            tail_it_177=it_175;
                        }
                        if(i_178>=head&&i_178<tail) {
                            prev_it_179=it_175;
                            it_175=it_175->next;
                            i_178++;
                            come_call_finalizer3(prev_it_179,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                            self->len--;
                        }
                        else {
                            it_175=it_175->next;
                            i_178++;
                        }
                    }
                    if(head_prev_it_176!=((void*)0)) {
                        head_prev_it_176->next=tail_it_177;
                    }
                    if(tail_it_177!=((void*)0)) {
                        tail_it_177->prev=head_prev_it_176;
                    }
                }
            }
        }
        __result100__ = __result_obj__ = self;
        return __result100__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list_item$1sRightValueObjectph* it_167;
struct list_item$1sRightValueObjectph* prev_it_168;
struct list$1sRightValueObjectph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_167, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_168, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_167=self->head;
                while(it_167!=((void*)0)) {
                    prev_it_168=it_167;
                    it_167=it_167->next;
                    come_call_finalizer3(prev_it_168,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result99__ = __result_obj__ = self;
                return __result99__;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__;
void* right_value161;
char* __result101__;
struct sClass* klass_180;
void* right_value162;
char* type_name_181;
void* right_value163;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
memset(&klass_180, 0, sizeof(struct sClass*));
right_value162 = (void*)0;
memset(&type_name_181, 0, sizeof(char*));
right_value163 = (void*)0;
    if(gComeGC||gComeC) {
        __result101__ = __result_obj__ = ((char*)(right_value161=__builtin_string(obj)));
        right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result101__;
    }
    klass_180=type->mClass;
    type_name_181=(char*)come_increment_ref_count(((char*)(right_value162=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result102__ = __result_obj__ = ((char*)(right_value163=xsprintf("(%s)come_increment_ref_count(%s)",type_name_181,obj)));
    type_name_181 = come_decrement_ref_count2(type_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result102__;
    type_name_181 = come_decrement_ref_count2(type_name_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_){
struct list$1CVALUEph* stack_saved_182;
struct list$1sRightValueObjectph* right_value_objects_183;
struct sClass* klass_184;
void* right_value164;
char* name_186;
void* right_value165;
_Bool no_decrement_187;
_Bool no_free_188;
void* right_value166;
char* c_value_189;
struct sClass* klass_190;
char* class_name_191;
char* fun_name_192;
void* right_value167;
struct sType* type2_193;
void* right_value168;
char* fun_name2_194;
struct sFun* finalizer_195;
void* right_value169;
char* none_generics_name_199;
void* right_value170;
char* generics_fun_name_200;
struct sGenericsFun* generics_fun_201;
int i_205;
void* right_value171;
char* new_fun_name_206;
void* right_value172;
char* __dec_obj62;
void* right_value173;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_207;
char* new_fun_name_208;
char* __dec_obj63;
void* right_value174;
char* type_name_209;
void* right_value175;
void* right_value176;
char* type_name_210;
void* right_value177;
void* right_value178;
struct list$1sRightValueObjectph* __dec_obj64;
struct list$1CVALUEph* __dec_obj65;
memset(&stack_saved_182, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_183, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_184, 0, sizeof(struct sClass*));
right_value164 = (void*)0;
memset(&name_186, 0, sizeof(char*));
right_value165 = (void*)0;
memset(&no_decrement_187, 0, sizeof(_Bool));
memset(&no_free_188, 0, sizeof(_Bool));
right_value166 = (void*)0;
memset(&c_value_189, 0, sizeof(char*));
memset(&klass_190, 0, sizeof(struct sClass*));
memset(&class_name_191, 0, sizeof(char*));
memset(&fun_name_192, 0, sizeof(char*));
right_value167 = (void*)0;
memset(&type2_193, 0, sizeof(struct sType*));
right_value168 = (void*)0;
memset(&fun_name2_194, 0, sizeof(char*));
memset(&finalizer_195, 0, sizeof(struct sFun*));
right_value169 = (void*)0;
memset(&none_generics_name_199, 0, sizeof(char*));
right_value170 = (void*)0;
memset(&generics_fun_name_200, 0, sizeof(char*));
memset(&generics_fun_201, 0, sizeof(struct sGenericsFun*));
memset(&i_205, 0, sizeof(int));
right_value171 = (void*)0;
memset(&new_fun_name_206, 0, sizeof(char*));
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
memset(&type_name_209, 0, sizeof(char*));
right_value175 = (void*)0;
right_value176 = (void*)0;
memset(&type_name_210, 0, sizeof(char*));
right_value177 = (void*)0;
right_value178 = (void*)0;
    if(gComeGC||gComeC) {
        return;
    }
    stack_saved_182=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_183=info->right_value_objects;
    klass_184=type->mClass;
    static int dec_num_185=0;
    name_186=(char*)come_increment_ref_count(((char*)(right_value164=xsprintf("__dec_obj%d",++dec_num_185))));
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value165=make_define_var(type,name_186,(_Bool)0,info))));
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_come_code(info,"%s=%s;\n",name_186,obj);
    obj=name_186;
    no_decrement_187=(_Bool)0;
    no_free_188=(_Bool)0;
    if(type->mPointerNum>0) {
        c_value_189=(char*)come_increment_ref_count(((char*)(right_value166=__builtin_string(obj))));
        right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        klass_190=type->mClass;
        class_name_191=klass_190->mName;
        fun_name_192="finalize";
        type2_193=(struct sType*)come_increment_ref_count(((struct sType*)(right_value167=sType_clone(type))));
        come_call_finalizer3(right_value167,sType_finalize, 0, 1, 0, 0, (void*)0);
        type2_193->mHeap=(_Bool)0;
        fun_name2_194=(char*)come_increment_ref_count(((char*)(right_value168=create_method_name(type,(_Bool)0,fun_name_192,info,(_Bool)1))));
        right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(type->mNoSolvedGenericsType->v1) {
            type=type->mNoSolvedGenericsType->v1;
        }
        finalizer_195=((void*)0);
        if(list$1sTypeph_length(type->mGenericsTypes)>0) {
            finalizer_195=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_194);
            if(finalizer_195==((void*)0)) {
                none_generics_name_199=(char*)come_increment_ref_count(((char*)(right_value169=get_none_generics_name(type2_193->mClass->mName))));
                right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                generics_fun_name_200=(char*)come_increment_ref_count(((char*)(right_value170=xsprintf("%s_%s",none_generics_name_199,fun_name_192))));
                right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                generics_fun_201=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_200);
                if(generics_fun_201) {
                    if(!create_generics_fun((char*)come_increment_ref_count(fun_name2_194),generics_fun_201,type,info)) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_195=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_194);
                }
                none_generics_name_199 = come_decrement_ref_count2(none_generics_name_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_200 = come_decrement_ref_count2(generics_fun_name_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_205=128-1;            i_205>=1;            i_205--            ){
                new_fun_name_206=(char*)come_increment_ref_count(((char*)(right_value171=xsprintf("%s_v%d",fun_name2_194,i_205))));
                right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                finalizer_195=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_206);
                if(finalizer_195) {
                    __dec_obj62=fun_name2_194;
                    fun_name2_194=(char*)come_increment_ref_count(((char*)(right_value172=__builtin_string(new_fun_name_206))));
                    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    new_fun_name_206 = come_decrement_ref_count2(new_fun_name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_206 = come_decrement_ref_count2(new_fun_name_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(finalizer_195==((void*)0)) {
                finalizer_195=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_194);
            }
        }
        if(finalizer_195==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
            multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value173=create_finalizer_automatically(type,fun_name_192,info)));
            fun_207=multiple_assign_var1->v1;
            new_fun_name_208=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            come_call_finalizer3(right_value173,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj63=fun_name2_194;
            fun_name2_194=(char*)come_increment_ref_count(new_fun_name_208);
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_195=fun_207;
            new_fun_name_208 = come_decrement_ref_count2(new_fun_name_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(finalizer_195!=((void*)0)) {
            if(klass_190->mProtocol&&type->mPointerNum==1) {
                type_name_209=(char*)come_increment_ref_count(((char*)(right_value174=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(c_value_189) {
                    add_come_last_code2(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_194,c_value_189,type_name_209,c_value_189,type_name_209,c_value_189,type->mAllocaValue,no_decrement_187,no_free_188,force_delete_);
                }
                type_name_209 = come_decrement_ref_count2(type_name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(c_value_189) {
                    add_come_last_code2(info,((char*)(right_value175=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_189,fun_name2_194,type->mAllocaValue,no_decrement_187,no_free_188,force_delete_))));
                    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
            }
        }
        else {
            if(klass_190->mProtocol&&type->mPointerNum==1) {
                type_name_210=(char*)come_increment_ref_count(((char*)(right_value176=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_last_code2(info,((char*)(right_value177=xsprintf("if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0, (void*)0); }\n",name_186,name_186,name_186,type_name_210,name_186,type_name_210,name_186))));
                right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                type_name_210 = come_decrement_ref_count2(type_name_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_last_code2(info,((char*)(right_value178=xsprintf("%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, 0,0,0, (void*)0);\n",name_186,name_186))));
                right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
        }
        c_value_189 = come_decrement_ref_count2(c_value_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_193,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name2_194 = come_decrement_ref_count2(fun_name2_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj64=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_183);
    come_call_finalizer3(__dec_obj64,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj65=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_182);
    come_call_finalizer3(__dec_obj65,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_182,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    name_186 = come_decrement_ref_count2(name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_196;
unsigned int hash_197;
unsigned int it_198;
struct sFun* __result103__;
struct sFun* __result104__;
struct sFun* __result105__;
struct sFun* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_196, 0, sizeof(struct sFun*));
memset(&hash_197, 0, sizeof(unsigned int));
memset(&it_198, 0, sizeof(unsigned int));
                memset(&default_value_196,0,sizeof(struct sFun*));
                hash_197=string_get_hash_key(((char*)key))%self->size;
                it_198=hash_197;
                while((_Bool)1) {
                    if(self->item_existance[it_198]) {
                        if(string_equals(self->keys[it_198],key)) {
                            __result103__ = __result_obj__ = self->items[it_198];
                            come_call_finalizer3(default_value_196,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            return __result103__;
                        }
                        it_198++;
                        if(it_198>=self->size) {
                            it_198=0;
                        }
                        else {
                            if(it_198==hash_197) {
                                __result104__ = __result_obj__ = default_value_196;
                                come_call_finalizer3(default_value_196,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result104__;
                            }
                        }
                    }
                    else {
                        __result105__ = __result_obj__ = default_value_196;
                        come_call_finalizer3(default_value_196,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result105__;
                    }
                }
                __result106__ = __result_obj__ = default_value_196;
                come_call_finalizer3(default_value_196,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result106__;
                come_call_finalizer3(default_value_196,sFun_finalize, 0, 0, 0, 0, (void*)0);
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
struct sGenericsFun* default_value_202;
unsigned int hash_203;
unsigned int it_204;
struct sGenericsFun* __result107__;
struct sGenericsFun* __result108__;
struct sGenericsFun* __result109__;
struct sGenericsFun* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_202, 0, sizeof(struct sGenericsFun*));
memset(&hash_203, 0, sizeof(unsigned int));
memset(&it_204, 0, sizeof(unsigned int));
                    memset(&default_value_202,0,sizeof(struct sGenericsFun*));
                    hash_203=string_get_hash_key(((char*)key))%self->size;
                    it_204=hash_203;
                    while((_Bool)1) {
                        if(self->item_existance[it_204]) {
                            if(string_equals(self->keys[it_204],key)) {
                                __result107__ = __result_obj__ = self->items[it_204];
                                come_call_finalizer3(default_value_202,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                                return __result107__;
                            }
                            it_204++;
                            if(it_204>=self->size) {
                                it_204=0;
                            }
                            else {
                                if(it_204==hash_203) {
                                    __result108__ = __result_obj__ = default_value_202;
                                    come_call_finalizer3(default_value_202,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result108__;
                                }
                            }
                        }
                        else {
                            __result109__ = __result_obj__ = default_value_202;
                            come_call_finalizer3(default_value_202,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result109__;
                        }
                    }
                    __result110__ = __result_obj__ = default_value_202;
                    come_call_finalizer3(default_value_202,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result110__;
                    come_call_finalizer3(default_value_202,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sRightValueObjectph* it_211;
struct list_item$1sRightValueObjectph* prev_it_212;
memset(&it_211, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_212, 0, sizeof(struct list_item$1sRightValueObjectph*));
        it_211=self->head;
        while(it_211!=((void*)0)) {
            prev_it_212=it_211;
            it_211=it_211->next;
            come_call_finalizer3(prev_it_212,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_213;
struct list_item$1CVALUEph* prev_it_214;
memset(&it_213, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_214, 0, sizeof(struct list_item$1CVALUEph*));
        it_213=self->head;
        while(it_213!=((void*)0)) {
            prev_it_214=it_213;
            it_213=it_213->next;
            come_call_finalizer3(prev_it_214,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
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
                        if(self!=((void*)0)&&self->right_value_objects!=((void*)0)) {
                            come_call_finalizer3(self->right_value_objects,list$1sRightValueObjectpp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_215;
struct list_item$1CVALUEph* prev_it_216;
memset(&it_215, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_216, 0, sizeof(struct list_item$1CVALUEph*));
        it_215=self->head;
        while(it_215!=((void*)0)) {
            prev_it_216=it_215;
            it_215=it_215->next;
            come_call_finalizer3(prev_it_216,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
struct list$1CVALUEph* stack_saved_217;
struct list$1sRightValueObjectph* right_value_objects_218;
struct sType* type_before_219;
void* right_value179;
char* c_value_220;
struct sClass* klass_221;
char* class_name_222;
char* fun_name_223;
void* right_value180;
struct sType* type2_224;
void* right_value181;
char* fun_name2_225;
struct sFun* finalizer_226;
void* right_value182;
char* none_generics_name_227;
void* right_value183;
char* generics_fun_name_228;
struct sGenericsFun* generics_fun_229;
int i_230;
void* right_value184;
char* new_fun_name_231;
void* right_value185;
char* __dec_obj66;
void* right_value186;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun_232;
char* new_fun_name_233;
char* __dec_obj67;
void* right_value187;
char* type_name_234;
void* right_value188;
void* right_value189;
void* right_value190;
void* right_value191;
struct list$1tuple2$2charphsTypephph* o2_saved_235;
struct tuple2$2charphsTypeph* it_238;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_241;
struct sType* field_type_242;
void* right_value192;
void* right_value193;
char* obj_243;
struct list$1tuple2$2charphsTypephph* o2_saved_246;
struct tuple2$2charphsTypeph* it_247;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* name_248;
struct sType* field_type_249;
void* right_value194;
void* right_value195;
char* obj_250;
void* right_value196;
char* type_name_251;
void* right_value197;
char* c_value_252;
struct sClass* klass_253;
char* class_name_254;
char* fun_name_255;
void* right_value198;
struct sType* type2_256;
void* right_value199;
char* fun_name2_257;
struct sFun* finalizer_258;
void* right_value200;
char* none_generics_name_259;
void* right_value201;
char* generics_fun_name_260;
struct sGenericsFun* generics_fun_261;
int i_262;
void* right_value202;
char* new_fun_name_263;
void* right_value203;
char* __dec_obj68;
void* right_value204;
struct tuple2$2sFunpcharph* multiple_assign_var5;
struct sFun* fun_264;
char* new_fun_name_265;
char* __dec_obj69;
void* right_value205;
char* type_name_266;
void* right_value206;
void* right_value207;
void* right_value208;
void* right_value209;
struct list$1tuple2$2charphsTypephph* o2_saved_267;
struct tuple2$2charphsTypeph* it_268;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* name_269;
struct sType* field_type_270;
void* right_value210;
void* right_value211;
char* obj_271;
struct list$1tuple2$2charphsTypephph* o2_saved_272;
struct tuple2$2charphsTypeph* it_273;
struct tuple2$2charphsTypeph* multiple_assign_var7;
char* name_274;
struct sType* field_type_275;
void* right_value212;
void* right_value213;
char* obj_276;
void* right_value214;
char* type_name_277;
struct list$1sRightValueObjectph* __dec_obj70;
struct list$1CVALUEph* __dec_obj71;
memset(&stack_saved_217, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_218, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&type_before_219, 0, sizeof(struct sType*));
right_value179 = (void*)0;
memset(&c_value_220, 0, sizeof(char*));
memset(&klass_221, 0, sizeof(struct sClass*));
memset(&class_name_222, 0, sizeof(char*));
memset(&fun_name_223, 0, sizeof(char*));
right_value180 = (void*)0;
memset(&type2_224, 0, sizeof(struct sType*));
right_value181 = (void*)0;
memset(&fun_name2_225, 0, sizeof(char*));
memset(&finalizer_226, 0, sizeof(struct sFun*));
right_value182 = (void*)0;
memset(&none_generics_name_227, 0, sizeof(char*));
right_value183 = (void*)0;
memset(&generics_fun_name_228, 0, sizeof(char*));
memset(&generics_fun_229, 0, sizeof(struct sGenericsFun*));
memset(&i_230, 0, sizeof(int));
right_value184 = (void*)0;
memset(&new_fun_name_231, 0, sizeof(char*));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
memset(&type_name_234, 0, sizeof(char*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
memset(&o2_saved_235, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_238, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&obj_243, 0, sizeof(char*));
memset(&o2_saved_246, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_247, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value194 = (void*)0;
right_value195 = (void*)0;
memset(&obj_250, 0, sizeof(char*));
right_value196 = (void*)0;
memset(&type_name_251, 0, sizeof(char*));
right_value197 = (void*)0;
memset(&c_value_252, 0, sizeof(char*));
memset(&klass_253, 0, sizeof(struct sClass*));
memset(&class_name_254, 0, sizeof(char*));
memset(&fun_name_255, 0, sizeof(char*));
right_value198 = (void*)0;
memset(&type2_256, 0, sizeof(struct sType*));
right_value199 = (void*)0;
memset(&fun_name2_257, 0, sizeof(char*));
memset(&finalizer_258, 0, sizeof(struct sFun*));
right_value200 = (void*)0;
memset(&none_generics_name_259, 0, sizeof(char*));
right_value201 = (void*)0;
memset(&generics_fun_name_260, 0, sizeof(char*));
memset(&generics_fun_261, 0, sizeof(struct sGenericsFun*));
memset(&i_262, 0, sizeof(int));
right_value202 = (void*)0;
memset(&new_fun_name_263, 0, sizeof(char*));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
memset(&type_name_266, 0, sizeof(char*));
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&o2_saved_267, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_268, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value210 = (void*)0;
right_value211 = (void*)0;
memset(&obj_271, 0, sizeof(char*));
memset(&o2_saved_272, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_273, 0, sizeof(struct tuple2$2charphsTypeph*));
right_value212 = (void*)0;
right_value213 = (void*)0;
memset(&obj_276, 0, sizeof(char*));
right_value214 = (void*)0;
memset(&type_name_277, 0, sizeof(char*));
    if(gComeGC||gComeC) {
        return;
    }
    stack_saved_217=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_218=info->right_value_objects;
    type_before_219=type;
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(type->mPointerNum>0||type->mClass->mProtocol||list$1sTypeph_length(type->mGenericsTypes)>0||(info->come_fun->mCloner&&ret_value)) {
        if(force_delete_) {
            c_value_220=(char*)come_increment_ref_count(((char*)(right_value179=__builtin_string(obj))));
            right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            klass_221=type->mClass;
            class_name_222=klass_221->mName;
            fun_name_223="force_finalize";
            type2_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=sType_clone(type))));
            come_call_finalizer3(right_value180,sType_finalize, 0, 1, 0, 0, (void*)0);
            type2_224->mHeap=(_Bool)0;
            fun_name2_225=(char*)come_increment_ref_count(((char*)(right_value181=create_method_name(type,(_Bool)0,fun_name_223,info,(_Bool)1))));
            right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            finalizer_226=((void*)0);
            if(list$1sTypeph_length(type->mGenericsTypes)>0) {
                finalizer_226=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_225);
                if(finalizer_226==((void*)0)) {
                    none_generics_name_227=(char*)come_increment_ref_count(((char*)(right_value182=get_none_generics_name(type2_224->mClass->mName))));
                    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    generics_fun_name_228=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("%s_%s",none_generics_name_227,fun_name_223))));
                    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    generics_fun_229=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_228);
                    if(generics_fun_229) {
                        if(!create_generics_fun((char*)come_increment_ref_count(fun_name2_225),generics_fun_229,type,info)) {
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            exit(2);
                        }
                        finalizer_226=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_225);
                    }
                    none_generics_name_227 = come_decrement_ref_count2(none_generics_name_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_228 = come_decrement_ref_count2(generics_fun_name_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                for(                i_230=128-1;                i_230>=1;                i_230--                ){
                    new_fun_name_231=(char*)come_increment_ref_count(((char*)(right_value184=xsprintf("%s_v%d",fun_name2_225,i_230))));
                    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    finalizer_226=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_231);
                    if(finalizer_226) {
                        __dec_obj66=fun_name2_225;
                        fun_name2_225=(char*)come_increment_ref_count(((char*)(right_value185=__builtin_string(new_fun_name_231))));
                        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        new_fun_name_231 = come_decrement_ref_count2(new_fun_name_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_231 = come_decrement_ref_count2(new_fun_name_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(finalizer_226==((void*)0)) {
                    finalizer_226=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_225);
                }
            }
            if(finalizer_226==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value186=create_force_finalizer_automatically(type,fun_name_223,info)));
                fun_232=multiple_assign_var2->v1;
                new_fun_name_233=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(right_value186,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj67=fun_name2_225;
                fun_name2_225=(char*)come_increment_ref_count(new_fun_name_233);
                __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                finalizer_226=fun_232;
                new_fun_name_233 = come_decrement_ref_count2(new_fun_name_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(finalizer_226!=((void*)0)) {
                if(klass_221->mProtocol&&type->mPointerNum==1) {
                    type_name_234=(char*)come_increment_ref_count(((char*)(right_value187=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    if(c_value_220) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s),\n",fun_name2_225,c_value_220,type_name_234,c_value_220,type_name_234,c_value_220,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s);\n",fun_name2_225,c_value_220,type_name_234,c_value_220,type_name_234,c_value_220,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_225,c_value_220,type_name_234,c_value_220,type_name_234,c_value_220,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_225,c_value_220,type_name_234,c_value_220,type_name_234,c_value_220,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_234 = come_decrement_ref_count2(type_name_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(c_value_220) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,((char*)(right_value188=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s),\n",c_value_220,fun_name2_225,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__"))));
                                right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(right_value189=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s);\n",c_value_220,fun_name2_225,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__"))));
                                right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,((char*)(right_value190=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0),\n",c_value_220,fun_name2_225,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(right_value191=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_220,fun_name2_225,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                    }
                }
            }
            else {
                if(klass_221->mStruct&&type->mPointerNum==0) {
                    for(                    o2_saved_235=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_221->mFields)),it_238=list$1tuple2$2charphsTypephph_begin((o2_saved_235));                    !list$1tuple2$2charphsTypephph_end((o2_saved_235));                    it_238=list$1tuple2$2charphsTypephph_next((o2_saved_235))                    ){
                        multiple_assign_var3=it_238;
                        name_241=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                        field_type_242=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                        if(field_type_242->mHeap&&field_type_242->mPointerNum>0) {
                            obj_243=(char*)come_increment_ref_count(((char*)(right_value193=xsprintf("(((%s)%s).%s)",((char*)(right_value192=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_220,name_241))));
                            right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            free_object(field_type_242,obj_243,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_243 = come_decrement_ref_count2(obj_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_241 = come_decrement_ref_count2(name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(field_type_242,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_235,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(klass_221->mStruct&&type->mPointerNum==1) {
                        for(                        o2_saved_246=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_221->mFields)),it_247=list$1tuple2$2charphsTypephph_begin((o2_saved_246));                        !list$1tuple2$2charphsTypephph_end((o2_saved_246));                        it_247=list$1tuple2$2charphsTypephph_next((o2_saved_246))                        ){
                            multiple_assign_var4=it_247;
                            name_248=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                            field_type_249=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                            if(field_type_249->mHeap&&field_type_249->mPointerNum>0) {
                                obj_250=(char*)come_increment_ref_count(((char*)(right_value195=xsprintf("(((%s)%s)->%s)",((char*)(right_value194=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_220,name_248))));
                                right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                free_object(field_type_249,obj_250,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_250 = come_decrement_ref_count2(obj_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_248 = come_decrement_ref_count2(name_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(field_type_249,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(o2_saved_246,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                if(!type->mAllocaValue) {
                    if(klass_221->mProtocol&&type->mPointerNum==1) {
                        if(c_value_220) {
                            type_name_251=(char*)come_increment_ref_count(((char*)(right_value196=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, %s):0,\n",c_value_220,c_value_220,c_value_220,type_name_251,c_value_220,type_name_251,c_value_220,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %s); } \n",c_value_220,c_value_220,c_value_220,type_name_251,c_value_220,type_name_251,c_value_220,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0,\n",c_value_220,c_value_220,c_value_220,type_name_251,c_value_220,type_name_251,c_value_220,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_220,c_value_220,c_value_220,type_name_251,c_value_220,type_name_251,c_value_220,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_251 = come_decrement_ref_count2(type_name_251, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(c_value_220) {
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s),\n",c_value_220,c_value_220,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s);\n",c_value_220,c_value_220,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0),\n",c_value_220,c_value_220,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_220,c_value_220,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_220 = come_decrement_ref_count2(c_value_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_224,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name2_225 = come_decrement_ref_count2(fun_name2_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            c_value_252=(char*)come_increment_ref_count(((char*)(right_value197=__builtin_string(obj))));
            right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            klass_253=type->mClass;
            class_name_254=klass_253->mName;
            fun_name_255="finalize";
            type2_256=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(type))));
            come_call_finalizer3(right_value198,sType_finalize, 0, 1, 0, 0, (void*)0);
            type2_256->mHeap=(_Bool)0;
            fun_name2_257=(char*)come_increment_ref_count(((char*)(right_value199=create_method_name(type,(_Bool)0,fun_name_255,info,(_Bool)1))));
            right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            finalizer_258=((void*)0);
            if(list$1sTypeph_length(type->mGenericsTypes)>0) {
                finalizer_258=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_257);
                if(finalizer_258==((void*)0)) {
                    none_generics_name_259=(char*)come_increment_ref_count(((char*)(right_value200=get_none_generics_name(type2_256->mClass->mName))));
                    right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    generics_fun_name_260=(char*)come_increment_ref_count(((char*)(right_value201=xsprintf("%s_%s",none_generics_name_259,fun_name_255))));
                    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    generics_fun_261=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_260);
                    if(generics_fun_261) {
                        if(!create_generics_fun((char*)come_increment_ref_count(fun_name2_257),generics_fun_261,type,info)) {
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            exit(2);
                        }
                        finalizer_258=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_257);
                    }
                    none_generics_name_259 = come_decrement_ref_count2(none_generics_name_259, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_260 = come_decrement_ref_count2(generics_fun_name_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                for(                i_262=128-1;                i_262>=1;                i_262--                ){
                    new_fun_name_263=(char*)come_increment_ref_count(((char*)(right_value202=xsprintf("%s_v%d",fun_name2_257,i_262))));
                    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    finalizer_258=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_263);
                    if(finalizer_258) {
                        __dec_obj68=fun_name2_257;
                        fun_name2_257=(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string(new_fun_name_263))));
                        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        new_fun_name_263 = come_decrement_ref_count2(new_fun_name_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_263 = come_decrement_ref_count2(new_fun_name_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(finalizer_258==((void*)0)) {
                    finalizer_258=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_257);
                }
            }
            if(finalizer_258==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
                multiple_assign_var5=((struct tuple2$2sFunpcharph*)(right_value204=create_finalizer_automatically(type,fun_name_255,info)));
                fun_264=multiple_assign_var5->v1;
                new_fun_name_265=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                come_call_finalizer3(right_value204,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj69=fun_name2_257;
                fun_name2_257=(char*)come_increment_ref_count(new_fun_name_265);
                __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
                finalizer_258=fun_264;
                new_fun_name_265 = come_decrement_ref_count2(new_fun_name_265, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(finalizer_258!=((void*)0)) {
                if(klass_253->mProtocol&&type->mPointerNum==1) {
                    type_name_266=(char*)come_increment_ref_count(((char*)(right_value205=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    if(c_value_252) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s),\n",fun_name2_257,c_value_252,type_name_266,c_value_252,type_name_266,c_value_252,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s);\n",fun_name2_257,c_value_252,type_name_266,c_value_252,type_name_266,c_value_252,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_257,c_value_252,type_name_266,c_value_252,type_name_266,c_value_252,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_257,c_value_252,type_name_266,c_value_252,type_name_266,c_value_252,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_266 = come_decrement_ref_count2(type_name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(c_value_252) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,((char*)(right_value206=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s),\n",c_value_252,fun_name2_257,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__"))));
                                right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(right_value207=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s);\n",c_value_252,fun_name2_257,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__"))));
                                right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,((char*)(right_value208=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0),\n",c_value_252,fun_name2_257,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(right_value209=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_252,fun_name2_257,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                    }
                }
            }
            else {
                if(klass_253->mStruct&&type->mPointerNum==0) {
                    for(                    o2_saved_267=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_253->mFields)),it_268=list$1tuple2$2charphsTypephph_begin((o2_saved_267));                    !list$1tuple2$2charphsTypephph_end((o2_saved_267));                    it_268=list$1tuple2$2charphsTypephph_next((o2_saved_267))                    ){
                        multiple_assign_var6=it_268;
                        name_269=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                        field_type_270=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                        if(field_type_270->mHeap&&field_type_270->mPointerNum>0) {
                            obj_271=(char*)come_increment_ref_count(((char*)(right_value211=xsprintf("(((%s)%s).%s)",((char*)(right_value210=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_252,name_269))));
                            right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            free_object(field_type_270,obj_271,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_271 = come_decrement_ref_count2(obj_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_269 = come_decrement_ref_count2(name_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(field_type_270,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_267,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(klass_253->mStruct&&type->mPointerNum==1) {
                        for(                        o2_saved_272=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_253->mFields)),it_273=list$1tuple2$2charphsTypephph_begin((o2_saved_272));                        !list$1tuple2$2charphsTypephph_end((o2_saved_272));                        it_273=list$1tuple2$2charphsTypephph_next((o2_saved_272))                        ){
                            multiple_assign_var7=it_273;
                            name_274=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                            field_type_275=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
                            if(field_type_275->mHeap&&field_type_275->mPointerNum>0) {
                                obj_276=(char*)come_increment_ref_count(((char*)(right_value213=xsprintf("(((%s)%s)->%s)",((char*)(right_value212=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))),c_value_252,name_274))));
                                right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                free_object(field_type_275,obj_276,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_276 = come_decrement_ref_count2(obj_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_274 = come_decrement_ref_count2(name_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(field_type_275,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(o2_saved_272,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                if(!type->mAllocaValue) {
                    if(klass_253->mProtocol&&type->mPointerNum==1) {
                        if(c_value_252) {
                            type_name_277=(char*)come_increment_ref_count(((char*)(right_value214=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))));
                            right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, %s):0,\n",c_value_252,c_value_252,c_value_252,type_name_277,c_value_252,type_name_277,c_value_252,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %s); } \n",c_value_252,c_value_252,c_value_252,type_name_277,c_value_252,type_name_277,c_value_252,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"(%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0,\n",c_value_252,c_value_252,c_value_252,type_name_277,c_value_252,type_name_277,c_value_252,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_252,c_value_252,c_value_252,type_name_277,c_value_252,type_name_277,c_value_252,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_277 = come_decrement_ref_count2(type_name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(c_value_252) {
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s),\n",c_value_252,c_value_252,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s);\n",c_value_252,c_value_252,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0),\n",c_value_252,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_252,c_value_252,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_252 = come_decrement_ref_count2(c_value_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_256,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name2_257 = come_decrement_ref_count2(fun_name2_257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __dec_obj70=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_218);
    come_call_finalizer3(__dec_obj70,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj71=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_217);
    come_call_finalizer3(__dec_obj71,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_217,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct tuple2$2charphsTypeph* result_236;
struct tuple2$2charphsTypeph* __result111__;
struct tuple2$2charphsTypeph* __result112__;
struct tuple2$2charphsTypeph* result_237;
struct tuple2$2charphsTypeph* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_236, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_237, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(self==((void*)0)) {
                            memset(&result_236,0,sizeof(struct tuple2$2charphsTypeph*));
                            __result111__ = __result_obj__ = result_236;
                            return __result111__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result112__ = __result_obj__ = self->it->item;
                            return __result112__;
                        }
                        memset(&result_237,0,sizeof(struct tuple2$2charphsTypeph*));
                        __result113__ = __result_obj__ = result_237;
                        return __result113__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
                        return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct tuple2$2charphsTypeph* result_239;
struct tuple2$2charphsTypeph* __result114__;
struct tuple2$2charphsTypeph* __result115__;
struct tuple2$2charphsTypeph* result_240;
struct tuple2$2charphsTypeph* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_239, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_240, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(self==((void*)0)||self->it==((void*)0)) {
                            memset(&result_239,0,sizeof(struct tuple2$2charphsTypeph*));
                            __result114__ = __result_obj__ = result_239;
                            return __result114__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result115__ = __result_obj__ = self->it->item;
                            return __result115__;
                        }
                        memset(&result_240,0,sizeof(struct tuple2$2charphsTypeph*));
                        __result116__ = __result_obj__ = result_240;
                        return __result116__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_244;
struct list_item$1tuple2$2charphsTypephph* prev_it_245;
memset(&it_244, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_245, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        it_244=self->head;
                        while(it_244!=((void*)0)) {
                            prev_it_245=it_244;
                            it_244=it_244->next;
                            come_call_finalizer3(prev_it_245,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
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
void* right_value215;
struct sType* type2_278;
char* __dec_obj72;
char* result_279;
struct sType* __dec_obj73;
struct sType* result_type_280;
struct list$1CVALUEph* stack_saved_281;
struct list$1sRightValueObjectph* right_value_objects_282;
void* right_value216;
char* c_value_283;
struct sClass* klass_284;
char* class_name_285;
char* fun_name_286;
struct sFun* cloner_287;
char* fun_name2_288;
void* right_value217;
char* none_generics_name_289;
void* right_value218;
struct sType* obj_type_290;
void* right_value219;
char* __dec_obj74;
void* right_value220;
char* fun_name3_291;
struct sGenericsFun* generics_fun_292;
void* right_value221;
_Bool _if_conditional1;
void* right_value222;
void* right_value223;
void* right_value224;
void* right_value225;
void* right_value226;
struct tuple2$2sTypephcharph* __result122__;
void* right_value227;
char* __dec_obj77;
int i_295;
void* right_value228;
char* new_fun_name_296;
void* right_value229;
char* __dec_obj78;
void* right_value230;
struct tuple2$2sFunpcharph* multiple_assign_var8;
struct sFun* fun_297;
char* new_fun_name_298;
char* __dec_obj79;
struct sType* __dec_obj80;
void* right_value231;
struct sType* __dec_obj81;
void* right_value232;
char* __dec_obj82;
void* right_value233;
char* __dec_obj83;
void* right_value234;
struct sType* __dec_obj84;
void* right_value235;
char* type_name_299;
void* right_value236;
char* __dec_obj85;
void* right_value237;
char* __dec_obj86;
struct list$1sRightValueObjectph* __dec_obj87;
struct list$1CVALUEph* __dec_obj88;
void* right_value238;
void* right_value239;
struct tuple2$2sTypephcharph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
memset(&type2_278, 0, sizeof(struct sType*));
memset(&result_279, 0, sizeof(char*));
memset(&result_type_280, 0, sizeof(struct sType*));
memset(&stack_saved_281, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_282, 0, sizeof(struct list$1sRightValueObjectph*));
right_value216 = (void*)0;
memset(&c_value_283, 0, sizeof(char*));
memset(&klass_284, 0, sizeof(struct sClass*));
memset(&class_name_285, 0, sizeof(char*));
memset(&fun_name_286, 0, sizeof(char*));
memset(&cloner_287, 0, sizeof(struct sFun*));
memset(&fun_name2_288, 0, sizeof(char*));
right_value217 = (void*)0;
memset(&none_generics_name_289, 0, sizeof(char*));
right_value218 = (void*)0;
memset(&obj_type_290, 0, sizeof(struct sType*));
right_value219 = (void*)0;
right_value220 = (void*)0;
memset(&fun_name3_291, 0, sizeof(char*));
memset(&generics_fun_292, 0, sizeof(struct sGenericsFun*));
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&i_295, 0, sizeof(int));
right_value228 = (void*)0;
memset(&new_fun_name_296, 0, sizeof(char*));
right_value229 = (void*)0;
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
memset(&type_name_299, 0, sizeof(char*));
right_value236 = (void*)0;
right_value237 = (void*)0;
right_value238 = (void*)0;
right_value239 = (void*)0;
    type2_278=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(type))));
    come_call_finalizer3(right_value215,sType_finalize, 0, 1, 0, 0, __result_obj__);
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    __dec_obj72=result_279;
    result_279=((void*)0);
    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj73=result_type_280;
    result_type_280=((void*)0);
    come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
    stack_saved_281=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_282=info->right_value_objects;
    c_value_283=(char*)come_increment_ref_count(((char*)(right_value216=__builtin_string(obj))));
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    klass_284=type->mClass;
    class_name_285=klass_284->mName;
    fun_name_286="clone";
    cloner_287=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_289=(char*)come_increment_ref_count(((char*)(right_value217=get_none_generics_name(type->mClass->mName))));
        right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_290=(struct sType*)come_increment_ref_count(((struct sType*)(right_value218=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value218,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj74=fun_name2_288;
        fun_name2_288=(char*)come_increment_ref_count(((char*)(right_value219=create_method_name(obj_type_290,(_Bool)0,fun_name_286,info,(_Bool)1))));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_291=(char*)come_increment_ref_count(((char*)(right_value220=xsprintf("%s_%s",none_generics_name_289,fun_name_286))));
        right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_292=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_291,((void*)0));
        if(generics_fun_292) {
            if(_if_conditional1=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value221=__builtin_string(fun_name2_288)))),generics_fun_292,obj_type_290,info),            right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional1) {
                __result122__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value226=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value225=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 891, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value222=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 891, "sType")))),"void",(_Bool)0,info)))),(char*)come_increment_ref_count(((char*)(right_value224=__builtin_string("")))))));
                none_generics_name_289 = come_decrement_ref_count2(none_generics_name_289, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_290,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_291 = come_decrement_ref_count2(fun_name3_291, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_278,sType_finalize, 0, 0, 0, 0, (void*)0);
                result_279 = come_decrement_ref_count2(result_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_280,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_281,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                c_value_283 = come_decrement_ref_count2(c_value_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_288 = come_decrement_ref_count2(fun_name2_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value222,sType_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value223,sType_finalize, 0, 1, 0, 0, __result_obj__);
                right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value226,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                return __result122__;
            }
        }
        cloner_287=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_288);
        none_generics_name_289 = come_decrement_ref_count2(none_generics_name_289, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_290,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_291 = come_decrement_ref_count2(fun_name3_291, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj77=fun_name2_288;
        fun_name2_288=(char*)come_increment_ref_count(((char*)(right_value227=create_method_name(type,(_Bool)0,fun_name_286,info,(_Bool)1))));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_295=128-1;        i_295>=1;        i_295--        ){
            new_fun_name_296=(char*)come_increment_ref_count(((char*)(right_value228=xsprintf("%s_v%d",fun_name2_288,i_295))));
            right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            cloner_287=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_296);
            if(cloner_287) {
                __dec_obj78=fun_name2_288;
                fun_name2_288=(char*)come_increment_ref_count(((char*)(right_value229=__builtin_string(new_fun_name_296))));
                __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_296 = come_decrement_ref_count2(new_fun_name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_296 = come_decrement_ref_count2(new_fun_name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(cloner_287==((void*)0)) {
            cloner_287=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_288);
        }
    }
    if(cloner_287==((void*)0)&&!type->mClass->mNumber) {
        multiple_assign_var8=((struct tuple2$2sFunpcharph*)(right_value230=create_cloner_automatically(type,fun_name_286,info)));
        fun_297=multiple_assign_var8->v1;
        new_fun_name_298=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer3(right_value230,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj79=fun_name2_288;
        fun_name2_288=(char*)come_increment_ref_count(new_fun_name_298);
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_287=fun_297;
        new_fun_name_298 = come_decrement_ref_count2(new_fun_name_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(cloner_287!=((void*)0)) {
        __dec_obj80=result_type_280;
        result_type_280=(struct sType*)come_increment_ref_count(cloner_287->mResultType);
        come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj81=result_type_280;
        result_type_280=(struct sType*)come_increment_ref_count(((struct sType*)(right_value231=solve_generics(result_type_280,type,info))));
        come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value231,sType_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj82=result_279;
        result_279=(char*)come_increment_ref_count(((char*)(right_value232=xsprintf("%s(%s)",fun_name2_288,c_value_283))));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(gComeDebug) {
            __dec_obj83=result_279;
            result_279=(char*)come_increment_ref_count(((char*)(right_value233=append_stackframe(result_279,result_type_280,info))));
            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
    }
    else {
        __dec_obj84=result_type_280;
        result_type_280=(struct sType*)come_increment_ref_count(((struct sType*)(right_value234=sType_clone(type))));
        come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value234,sType_finalize, 0, 1, 0, 0, __result_obj__);
        type2_278->mHeap=(_Bool)1;
        type_name_299=(char*)come_increment_ref_count(((char*)(right_value235=make_type_name_string(type2_278,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj85=result_279;
        result_279=(char*)come_increment_ref_count(((char*)(right_value236=xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_299,c_value_283,info->sname,info->sline,type_name_299))));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(gComeDebug) {
            __dec_obj86=result_279;
            result_279=(char*)come_increment_ref_count(((char*)(right_value237=append_stackframe(result_279,result_type_280,info))));
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        type_name_299 = come_decrement_ref_count2(type_name_299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj87=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_282);
    come_call_finalizer3(__dec_obj87,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj88=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_281);
    come_call_finalizer3(__dec_obj88,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result123__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value239=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value238=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 948, "struct tuple2$2sTypephcharph")))),(struct sType*)come_increment_ref_count(result_type_280),(char*)come_increment_ref_count(result_279))));
    come_call_finalizer3(type2_278,sType_finalize, 0, 0, 0, 0, (void*)0);
    result_279 = come_decrement_ref_count2(result_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_280,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_281,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    c_value_283 = come_decrement_ref_count2(c_value_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_288 = come_decrement_ref_count2(fun_name2_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value239,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result123__;
    come_call_finalizer3(type2_278,sType_finalize, 0, 0, 0, 0, (void*)0);
    result_279 = come_decrement_ref_count2(result_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_280,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_281,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    c_value_283 = come_decrement_ref_count2(c_value_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_288 = come_decrement_ref_count2(fun_name2_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_293;
unsigned int it_294;
struct sGenericsFun* __result117__;
struct sGenericsFun* __result118__;
struct sGenericsFun* __result119__;
struct sGenericsFun* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_293, 0, sizeof(unsigned int));
memset(&it_294, 0, sizeof(unsigned int));
            hash_293=string_get_hash_key(((char*)key))%self->size;
            it_294=hash_293;
            while((_Bool)1) {
                if(self->item_existance[it_294]) {
                    if(string_equals(self->keys[it_294],key)) {
                        __result117__ = __result_obj__ = self->items[it_294];
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result117__;
                    }
                    it_294++;
                    if(it_294>=self->size) {
                        it_294=0;
                    }
                    else {
                        if(it_294==hash_293) {
                            __result118__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result118__;
                        }
                    }
                }
                else {
                    __result119__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result119__;
                }
            }
            __result120__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result120__;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
struct sType* __dec_obj75;
char* __dec_obj76;
struct tuple2$2sTypephcharph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
                    __dec_obj75=self->v1;
                    self->v1=(struct sType*)come_increment_ref_count(v1);
                    come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj76=self->v2;
                    self->v2=(char*)come_increment_ref_count(v2);
                    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __result121__ = __result_obj__ = self;
                    come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
                    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
                    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result121__;
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
char* __dec_obj89;
char* result_300;
struct list$1CVALUEph* stack_saved_301;
struct list$1sRightValueObjectph* right_value_objects_302;
struct sClass* klass_303;
char* class_name_304;
char* fun_name_305;
void* right_value240;
struct sType* type2_306;
struct sFun* cloner_307;
char* fun_name2_308;
void* right_value241;
char* none_generics_name_309;
void* right_value242;
struct sType* obj_type_310;
void* right_value243;
char* __dec_obj90;
void* right_value244;
char* fun_name3_311;
struct sGenericsFun* generics_fun_312;
void* right_value245;
_Bool _if_conditional2;
_Bool __result124__;
void* right_value246;
char* __dec_obj91;
int i_313;
void* right_value247;
char* new_fun_name_314;
void* right_value248;
char* __dec_obj92;
void* right_value249;
struct tuple2$2sFunpcharph* multiple_assign_var9;
struct sFun* fun_315;
char* new_fun_name_316;
char* __dec_obj93;
struct list$1sRightValueObjectph* __dec_obj94;
struct list$1CVALUEph* __dec_obj95;
_Bool __result125__;
memset(&result_300, 0, sizeof(char*));
memset(&stack_saved_301, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_302, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_303, 0, sizeof(struct sClass*));
memset(&class_name_304, 0, sizeof(char*));
memset(&fun_name_305, 0, sizeof(char*));
right_value240 = (void*)0;
memset(&type2_306, 0, sizeof(struct sType*));
memset(&cloner_307, 0, sizeof(struct sFun*));
memset(&fun_name2_308, 0, sizeof(char*));
right_value241 = (void*)0;
memset(&none_generics_name_309, 0, sizeof(char*));
right_value242 = (void*)0;
memset(&obj_type_310, 0, sizeof(struct sType*));
right_value243 = (void*)0;
right_value244 = (void*)0;
memset(&fun_name3_311, 0, sizeof(char*));
memset(&generics_fun_312, 0, sizeof(struct sGenericsFun*));
right_value245 = (void*)0;
right_value246 = (void*)0;
memset(&i_313, 0, sizeof(int));
right_value247 = (void*)0;
memset(&new_fun_name_314, 0, sizeof(char*));
right_value248 = (void*)0;
right_value249 = (void*)0;
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    __dec_obj89=result_300;
    result_300=((void*)0);
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    stack_saved_301=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_302=info->right_value_objects;
    klass_303=type->mClass;
    class_name_304=klass_303->mName;
    fun_name_305="equals";
    type2_306=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_clone(type))));
    come_call_finalizer3(right_value240,sType_finalize, 0, 1, 0, 0, (void*)0);
    type2_306->mHeap=(_Bool)0;
    cloner_307=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_309=(char*)come_increment_ref_count(((char*)(right_value241=get_none_generics_name(type->mClass->mName))));
        right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        obj_type_310=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value242,sType_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj90=fun_name2_308;
        fun_name2_308=(char*)come_increment_ref_count(((char*)(right_value243=create_method_name(obj_type_310,(_Bool)0,fun_name_305,info,(_Bool)1))));
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_name3_311=(char*)come_increment_ref_count(((char*)(right_value244=xsprintf("%s_%s",none_generics_name_309,fun_name_305))));
        right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        generics_fun_312=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_311,((void*)0));
        if(generics_fun_312) {
            if(_if_conditional2=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value245=__builtin_string(fun_name2_308)))),generics_fun_312,obj_type_310,info),            right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, (void*)0),
            _if_conditional2) {
                __result124__ = (_Bool)0;
                none_generics_name_309 = come_decrement_ref_count2(none_generics_name_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_310,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_311 = come_decrement_ref_count2(fun_name3_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_300 = come_decrement_ref_count2(result_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_301,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_306,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_308 = come_decrement_ref_count2(fun_name2_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result124__;
            }
        }
        cloner_307=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_308);
        none_generics_name_309 = come_decrement_ref_count2(none_generics_name_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_310,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_311 = come_decrement_ref_count2(fun_name3_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj91=fun_name2_308;
        fun_name2_308=(char*)come_increment_ref_count(((char*)(right_value246=create_method_name(type,(_Bool)0,fun_name_305,info,(_Bool)1))));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        for(        i_313=128-1;        i_313>=1;        i_313--        ){
            new_fun_name_314=(char*)come_increment_ref_count(((char*)(right_value247=xsprintf("%s_v%d",fun_name2_308,i_313))));
            right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            cloner_307=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_314);
            if(cloner_307) {
                __dec_obj92=fun_name2_308;
                fun_name2_308=(char*)come_increment_ref_count(((char*)(right_value248=__builtin_string(new_fun_name_314))));
                __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                new_fun_name_314 = come_decrement_ref_count2(new_fun_name_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_314 = come_decrement_ref_count2(new_fun_name_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(cloner_307==((void*)0)) {
            cloner_307=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_308);
        }
    }
    if(cloner_307==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var9=((struct tuple2$2sFunpcharph*)(right_value249=create_equals_automatically(type,fun_name_305,info)));
        fun_315=multiple_assign_var9->v1;
        new_fun_name_316=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        come_call_finalizer3(right_value249,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj93=fun_name2_308;
        fun_name2_308=(char*)come_increment_ref_count(new_fun_name_316);
        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_307=fun_315;
        new_fun_name_316 = come_decrement_ref_count2(new_fun_name_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj94=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_302);
    come_call_finalizer3(__dec_obj94,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj95=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_301);
    come_call_finalizer3(__dec_obj95,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result125__ = (_Bool)1;
    result_300 = come_decrement_ref_count2(result_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_301,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_306,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_308 = come_decrement_ref_count2(fun_name2_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result125__;
    result_300 = come_decrement_ref_count2(result_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_301,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_306,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_308 = come_decrement_ref_count2(fun_name2_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
char* __dec_obj96;
char* result_317;
struct list$1CVALUEph* stack_saved_318;
struct list$1sRightValueObjectph* right_value_objects_319;
struct sClass* klass_320;
char* class_name_321;
char* fun_name_322;
void* right_value250;
struct sType* type2_323;
struct sFun* cloner_324;
char* fun_name2_325;
void* right_value251;
char* none_generics_name_326;
void* right_value252;
struct sType* obj_type_327;
void* right_value253;
char* __dec_obj97;
void* right_value254;
char* fun_name3_328;
struct sGenericsFun* generics_fun_329;
void* right_value255;
_Bool _if_conditional3;
_Bool __result126__;
void* right_value256;
char* __dec_obj98;
int i_330;
void* right_value257;
char* new_fun_name_331;
void* right_value258;
char* __dec_obj99;
void* right_value259;
struct tuple2$2sFunpcharph* multiple_assign_var10;
struct sFun* fun_332;
char* new_fun_name_333;
char* __dec_obj100;
struct list$1sRightValueObjectph* __dec_obj101;
struct list$1CVALUEph* __dec_obj102;
_Bool __result127__;
memset(&result_317, 0, sizeof(char*));
memset(&stack_saved_318, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_319, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_320, 0, sizeof(struct sClass*));
memset(&class_name_321, 0, sizeof(char*));
memset(&fun_name_322, 0, sizeof(char*));
right_value250 = (void*)0;
memset(&type2_323, 0, sizeof(struct sType*));
memset(&cloner_324, 0, sizeof(struct sFun*));
memset(&fun_name2_325, 0, sizeof(char*));
right_value251 = (void*)0;
memset(&none_generics_name_326, 0, sizeof(char*));
right_value252 = (void*)0;
memset(&obj_type_327, 0, sizeof(struct sType*));
right_value253 = (void*)0;
right_value254 = (void*)0;
memset(&fun_name3_328, 0, sizeof(char*));
memset(&generics_fun_329, 0, sizeof(struct sGenericsFun*));
right_value255 = (void*)0;
right_value256 = (void*)0;
memset(&i_330, 0, sizeof(int));
right_value257 = (void*)0;
memset(&new_fun_name_331, 0, sizeof(char*));
right_value258 = (void*)0;
right_value259 = (void*)0;
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    __dec_obj96=result_317;
    result_317=((void*)0);
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    stack_saved_318=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_319=info->right_value_objects;
    klass_320=type->mClass;
    class_name_321=klass_320->mName;
    fun_name_322="operator_equals";
    type2_323=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=sType_clone(type))));
    come_call_finalizer3(right_value250,sType_finalize, 0, 1, 0, 0, (void*)0);
    type2_323->mHeap=(_Bool)0;
    cloner_324=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_326=(char*)come_increment_ref_count(((char*)(right_value251=get_none_generics_name(type->mClass->mName))));
        right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        obj_type_327=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value252,sType_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj97=fun_name2_325;
        fun_name2_325=(char*)come_increment_ref_count(((char*)(right_value253=create_method_name(obj_type_327,(_Bool)0,fun_name_322,info,(_Bool)1))));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_name3_328=(char*)come_increment_ref_count(((char*)(right_value254=xsprintf("%s_%s",none_generics_name_326,fun_name_322))));
        right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        generics_fun_329=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_328,((void*)0));
        if(generics_fun_329) {
            if(_if_conditional3=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value255=__builtin_string(fun_name2_325)))),generics_fun_329,obj_type_327,info),            right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, (void*)0),
            _if_conditional3) {
                __result126__ = (_Bool)0;
                none_generics_name_326 = come_decrement_ref_count2(none_generics_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_327,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_328 = come_decrement_ref_count2(fun_name3_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_317 = come_decrement_ref_count2(result_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_318,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_323,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_325 = come_decrement_ref_count2(fun_name2_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result126__;
            }
        }
        cloner_324=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_325);
        none_generics_name_326 = come_decrement_ref_count2(none_generics_name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_327,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_328 = come_decrement_ref_count2(fun_name3_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj98=fun_name2_325;
        fun_name2_325=(char*)come_increment_ref_count(((char*)(right_value256=create_method_name(type,(_Bool)0,fun_name_322,info,(_Bool)1))));
        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        for(        i_330=128-1;        i_330>=1;        i_330--        ){
            new_fun_name_331=(char*)come_increment_ref_count(((char*)(right_value257=xsprintf("%s_v%d",fun_name2_325,i_330))));
            right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            cloner_324=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_331);
            if(cloner_324) {
                __dec_obj99=fun_name2_325;
                fun_name2_325=(char*)come_increment_ref_count(((char*)(right_value258=__builtin_string(new_fun_name_331))));
                __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                new_fun_name_331 = come_decrement_ref_count2(new_fun_name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_331 = come_decrement_ref_count2(new_fun_name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(cloner_324==((void*)0)) {
            cloner_324=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_325);
        }
    }
    if(cloner_324==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var10=((struct tuple2$2sFunpcharph*)(right_value259=create_operator_equals_automatically(type,fun_name_322,info)));
        fun_332=multiple_assign_var10->v1;
        new_fun_name_333=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        come_call_finalizer3(right_value259,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj100=fun_name2_325;
        fun_name2_325=(char*)come_increment_ref_count(new_fun_name_333);
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_324=fun_332;
        new_fun_name_333 = come_decrement_ref_count2(new_fun_name_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj101=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_319);
    come_call_finalizer3(__dec_obj101,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj102=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_318);
    come_call_finalizer3(__dec_obj102,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result127__ = (_Bool)1;
    result_317 = come_decrement_ref_count2(result_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_318,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_323,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_325 = come_decrement_ref_count2(fun_name2_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result127__;
    result_317 = come_decrement_ref_count2(result_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_318,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_323,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_325 = come_decrement_ref_count2(fun_name2_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
char* __dec_obj103;
char* result_334;
struct list$1CVALUEph* stack_saved_335;
struct list$1sRightValueObjectph* right_value_objects_336;
struct sClass* klass_337;
char* class_name_338;
char* fun_name_339;
void* right_value260;
struct sType* type2_340;
struct sFun* cloner_341;
char* fun_name2_342;
void* right_value261;
char* none_generics_name_343;
void* right_value262;
struct sType* obj_type_344;
void* right_value263;
char* __dec_obj104;
void* right_value264;
char* fun_name3_345;
struct sGenericsFun* generics_fun_346;
void* right_value265;
_Bool _if_conditional4;
_Bool __result128__;
void* right_value266;
char* __dec_obj105;
int i_347;
void* right_value267;
char* new_fun_name_348;
void* right_value268;
char* __dec_obj106;
void* right_value269;
struct tuple2$2sFunpcharph* multiple_assign_var11;
struct sFun* fun_349;
char* new_fun_name_350;
char* __dec_obj107;
struct list$1sRightValueObjectph* __dec_obj108;
struct list$1CVALUEph* __dec_obj109;
_Bool __result129__;
memset(&result_334, 0, sizeof(char*));
memset(&stack_saved_335, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_336, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_337, 0, sizeof(struct sClass*));
memset(&class_name_338, 0, sizeof(char*));
memset(&fun_name_339, 0, sizeof(char*));
right_value260 = (void*)0;
memset(&type2_340, 0, sizeof(struct sType*));
memset(&cloner_341, 0, sizeof(struct sFun*));
memset(&fun_name2_342, 0, sizeof(char*));
right_value261 = (void*)0;
memset(&none_generics_name_343, 0, sizeof(char*));
right_value262 = (void*)0;
memset(&obj_type_344, 0, sizeof(struct sType*));
right_value263 = (void*)0;
right_value264 = (void*)0;
memset(&fun_name3_345, 0, sizeof(char*));
memset(&generics_fun_346, 0, sizeof(struct sGenericsFun*));
right_value265 = (void*)0;
right_value266 = (void*)0;
memset(&i_347, 0, sizeof(int));
right_value267 = (void*)0;
memset(&new_fun_name_348, 0, sizeof(char*));
right_value268 = (void*)0;
right_value269 = (void*)0;
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    __dec_obj103=result_334;
    result_334=((void*)0);
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    stack_saved_335=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_336=info->right_value_objects;
    klass_337=type->mClass;
    class_name_338=klass_337->mName;
    fun_name_339="operator_not_equals";
    type2_340=(struct sType*)come_increment_ref_count(((struct sType*)(right_value260=sType_clone(type))));
    come_call_finalizer3(right_value260,sType_finalize, 0, 1, 0, 0, (void*)0);
    type2_340->mHeap=(_Bool)0;
    cloner_341=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_343=(char*)come_increment_ref_count(((char*)(right_value261=get_none_generics_name(type->mClass->mName))));
        right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        obj_type_344=(struct sType*)come_increment_ref_count(((struct sType*)(right_value262=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value262,sType_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj104=fun_name2_342;
        fun_name2_342=(char*)come_increment_ref_count(((char*)(right_value263=create_method_name(obj_type_344,(_Bool)0,fun_name_339,info,(_Bool)1))));
        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_name3_345=(char*)come_increment_ref_count(((char*)(right_value264=xsprintf("%s_%s",none_generics_name_343,fun_name_339))));
        right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        generics_fun_346=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_345,((void*)0));
        if(generics_fun_346) {
            if(_if_conditional4=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value265=__builtin_string(fun_name2_342)))),generics_fun_346,obj_type_344,info),            right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, (void*)0),
            _if_conditional4) {
                __result128__ = (_Bool)0;
                none_generics_name_343 = come_decrement_ref_count2(none_generics_name_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_344,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_345 = come_decrement_ref_count2(fun_name3_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_334 = come_decrement_ref_count2(result_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_335,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_340,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_342 = come_decrement_ref_count2(fun_name2_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result128__;
            }
        }
        cloner_341=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_342);
        none_generics_name_343 = come_decrement_ref_count2(none_generics_name_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_344,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_345 = come_decrement_ref_count2(fun_name3_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj105=fun_name2_342;
        fun_name2_342=(char*)come_increment_ref_count(((char*)(right_value266=create_method_name(type,(_Bool)0,fun_name_339,info,(_Bool)1))));
        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        for(        i_347=128-1;        i_347>=1;        i_347--        ){
            new_fun_name_348=(char*)come_increment_ref_count(((char*)(right_value267=xsprintf("%s_v%d",fun_name2_342,i_347))));
            right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            cloner_341=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_348);
            if(cloner_341) {
                __dec_obj106=fun_name2_342;
                fun_name2_342=(char*)come_increment_ref_count(((char*)(right_value268=__builtin_string(new_fun_name_348))));
                __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                new_fun_name_348 = come_decrement_ref_count2(new_fun_name_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_348 = come_decrement_ref_count2(new_fun_name_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(cloner_341==((void*)0)) {
            cloner_341=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_342);
        }
    }
    if(cloner_341==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var11=((struct tuple2$2sFunpcharph*)(right_value269=create_operator_not_equals_automatically(type,fun_name_339,info)));
        fun_349=multiple_assign_var11->v1;
        new_fun_name_350=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        come_call_finalizer3(right_value269,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj107=fun_name2_342;
        fun_name2_342=(char*)come_increment_ref_count(new_fun_name_350);
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_341=fun_349;
        new_fun_name_350 = come_decrement_ref_count2(new_fun_name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj108=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_336);
    come_call_finalizer3(__dec_obj108,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj109=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_335);
    come_call_finalizer3(__dec_obj109,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result129__ = (_Bool)1;
    result_334 = come_decrement_ref_count2(result_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_335,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_340,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_342 = come_decrement_ref_count2(fun_name2_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result129__;
    result_334 = come_decrement_ref_count2(result_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_335,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_340,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_342 = come_decrement_ref_count2(fun_name2_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool existance_free_right_value_objects(struct sInfo* info){
struct list$1sRightValueObjectph* right_value_objects_351;
struct list$1sRightValueObjectph* o2_saved_352;
struct sRightValueObject* it_353;
memset(&right_value_objects_351, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&o2_saved_352, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_353, 0, sizeof(struct sRightValueObject*));
    if(gComeGC||gComeC) {
        return (_Bool)0;
    }
    right_value_objects_351=info->right_value_objects;
    for(    o2_saved_352=(right_value_objects_351),it_353=list$1sRightValueObjectph_begin((o2_saved_352));    !list$1sRightValueObjectph_end((o2_saved_352));    it_353=list$1sRightValueObjectph_next((o2_saved_352))    ){
        if(it_353&&!it_353->mFreed) {
            if(string_operator_equals(it_353->mFunName,info->come_fun->mName)&&it_353->mBlockLevel==info->block_level) {
                return (_Bool)1;
            }
        }
    }
    return (_Bool)0;
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
_Bool free_right_value_354;
struct list$1sRightValueObjectph* right_value_objects_355;
int n_356;
struct list$1sRightValueObjectph* o2_saved_357;
struct sRightValueObject* it_358;
void* right_value270;
struct sType* type_359;
void* right_value271;
struct sType* __dec_obj110;
memset(&free_right_value_354, 0, sizeof(_Bool));
memset(&right_value_objects_355, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&n_356, 0, sizeof(int));
memset(&o2_saved_357, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_358, 0, sizeof(struct sRightValueObject*));
right_value270 = (void*)0;
memset(&type_359, 0, sizeof(struct sType*));
right_value271 = (void*)0;
    if(gComeGC||gComeC) {
        return;
    }
    free_right_value_354=(_Bool)0;
    right_value_objects_355=info->right_value_objects;
    n_356=0;
    for(    o2_saved_357=(right_value_objects_355),it_358=list$1sRightValueObjectph_begin((o2_saved_357));    !list$1sRightValueObjectph_end((o2_saved_357));    it_358=list$1sRightValueObjectph_next((o2_saved_357))    ){
        if(it_358&&!it_358->mFreed) {
            if(string_operator_equals(it_358->mFunName,info->come_fun->mName)&&it_358->mBlockLevel==info->block_level&&!it_358->mStored) {
                type_359=(struct sType*)come_increment_ref_count(((struct sType*)(right_value270=sType_clone(it_358->mType))));
                come_call_finalizer3(right_value270,sType_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj110=type_359;
                type_359=(struct sType*)come_increment_ref_count(((struct sType*)(right_value271=solve_type(type_359,info->generics_type,info->method_generics_types,info))));
                come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value271,sType_finalize, 0, 1, 0, 0, (void*)0);
                free_object(type_359,it_358->mVarName,(_Bool)1,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                it_358->mFreed=(_Bool)1;
                free_right_value_354=(_Bool)1;
                come_call_finalizer3(type_359,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        n_356++;
    }
}

_Bool is_right_values(int right_value_num, struct sInfo* info){
struct list$1sRightValueObjectph* o2_saved_360;
struct sRightValueObject* it_361;
_Bool __result130__;
memset(&o2_saved_360, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_361, 0, sizeof(struct sRightValueObject*));
    if(gComeGC||gComeC) {
        return (_Bool)0;
    }
    for(    o2_saved_360=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_361=list$1sRightValueObjectph_begin((o2_saved_360));    !list$1sRightValueObjectph_end((o2_saved_360));    it_361=list$1sRightValueObjectph_next((o2_saved_360))    ){
        if(it_361->mID==right_value_num) {
            __result130__ = (_Bool)1;
            come_call_finalizer3(o2_saved_360,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result130__;
        }
    }
    come_call_finalizer3(o2_saved_360,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)0;
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__;
struct sVarTable* it_362;
struct sVar* var__363;
struct sVar* __result135__;
struct sVar* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_362, 0, sizeof(struct sVarTable*));
memset(&var__363, 0, sizeof(struct sVar*));
    it_362=table;
    while(it_362) {
        var__363=map$2charphsVarphp_operator_load_element(it_362->mVars,name);
        if(var__363) {
            __result135__ = __result_obj__ = var__363;
            return __result135__;
        }
        it_362=it_362->mParent;
    }
    __result136__ = __result_obj__ = ((void*)0);
    return __result136__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_364;
unsigned int hash_365;
unsigned int it_366;
struct sVar* __result131__;
struct sVar* __result132__;
struct sVar* __result133__;
struct sVar* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_364, 0, sizeof(struct sVar*));
memset(&hash_365, 0, sizeof(unsigned int));
memset(&it_366, 0, sizeof(unsigned int));
            memset(&default_value_364,0,sizeof(struct sVar*));
            hash_365=string_get_hash_key(((char*)key))%self->size;
            it_366=hash_365;
            while((_Bool)1) {
                if(self->item_existance[it_366]) {
                    if(string_equals(self->keys[it_366],key)) {
                        __result131__ = __result_obj__ = self->items[it_366];
                        come_call_finalizer3(default_value_364,sVar_finalize, 0, 0, 0, 0, (void*)0);
                        return __result131__;
                    }
                    it_366++;
                    if(it_366>=self->size) {
                        it_366=0;
                    }
                    else {
                        if(it_366==hash_365) {
                            __result132__ = __result_obj__ = default_value_364;
                            come_call_finalizer3(default_value_364,sVar_finalize, 0, 0, 1, 0, (void*)0);
                            return __result132__;
                        }
                    }
                }
                else {
                    __result133__ = __result_obj__ = default_value_364;
                    come_call_finalizer3(default_value_364,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result133__;
                }
            }
            __result134__ = __result_obj__ = default_value_364;
            come_call_finalizer3(default_value_364,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result134__;
            come_call_finalizer3(default_value_364,sVar_finalize, 0, 0, 0, 0, (void*)0);
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
struct map$2charphsVarph* o2_saved_367;
char* it_370;
struct sVar* p_373;
struct sType* type_374;
struct sClass* klass_375;
void* right_value272;
char* c_value_376;
void* right_value273;
struct sType* type2_377;
memset(&o2_saved_367, 0, sizeof(struct map$2charphsVarph*));
memset(&it_370, 0, sizeof(char*));
memset(&p_373, 0, sizeof(struct sVar*));
memset(&type_374, 0, sizeof(struct sType*));
memset(&klass_375, 0, sizeof(struct sClass*));
right_value272 = (void*)0;
memset(&c_value_376, 0, sizeof(char*));
right_value273 = (void*)0;
memset(&type2_377, 0, sizeof(struct sType*));
    if(gComeGC||gComeC) {
        return;
    }
    for(    o2_saved_367=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_370=map$2charphsVarph_begin((o2_saved_367));    !map$2charphsVarph_end((o2_saved_367));    it_370=map$2charphsVarph_next((o2_saved_367))    ){
        p_373=map$2charphsVarphp_operator_load_element(table->mVars,it_370);
        type_374=p_373->mType;
        klass_375=type_374->mClass;
        if(ret_value!=((void*)0)&&p_373->mCValueName!=((void*)0)&&string_operator_equals(p_373->mCValueName,ret_value->mCValueName)&&type_374->mHeap) {
            free_object(p_373->mType,p_373->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
        }
        else {
            if(type_374->mHeap&&p_373->mCValueName) {
                if(type_374->mFunctionParam) {
                    free_object(p_373->mType,p_373->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                else {
                    free_object(p_373->mType,p_373->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
            }
            else {
                if(klass_375->mStruct&&p_373->mCValueName&&type_374->mAllocaValue&&!type_374->mNoCallingDestructor) {
                    c_value_376=(char*)come_increment_ref_count(((char*)(right_value272=xsprintf("(&%s)",p_373->mCValueName))));
                    right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    type2_377=(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=sType_clone(type_374))));
                    come_call_finalizer3(right_value273,sType_finalize, 0, 1, 0, 0, (void*)0);
                    type2_377->mPointerNum++;
                    free_object(type2_377,c_value_376,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    c_value_376 = come_decrement_ref_count2(c_value_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type2_377,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    come_call_finalizer3(o2_saved_367,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
char* result_368;
char* __result137__;
char* __result138__;
char* result_369;
char* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_368, 0, sizeof(char*));
memset(&result_369, 0, sizeof(char*));
        if(self==((void*)0)) {
            memset(&result_368,0,sizeof(char*));
            __result137__ = __result_obj__ = result_368;
            return __result137__;
        }
        self->key_list->it=self->key_list->head;
        if(self->key_list->it) {
            __result138__ = __result_obj__ = self->key_list->it->item;
            return __result138__;
        }
        memset(&result_369,0,sizeof(char*));
        __result139__ = __result_obj__ = result_369;
        return __result139__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
        return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
char* result_371;
char* __result140__;
char* __result141__;
char* result_372;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_371, 0, sizeof(char*));
memset(&result_372, 0, sizeof(char*));
        if(self==((void*)0)||self->key_list->it==((void*)0)) {
            memset(&result_371,0,sizeof(char*));
            __result140__ = __result_obj__ = result_371;
            return __result140__;
        }
        self->key_list->it=self->key_list->it->next;
        if(self->key_list->it) {
            __result141__ = __result_obj__ = self->key_list->it->item;
            return __result141__;
        }
        memset(&result_372,0,sizeof(char*));
        __result142__ = __result_obj__ = result_372;
        return __result142__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_378;
int i_379;
memset(&i_378, 0, sizeof(int));
memset(&i_379, 0, sizeof(int));
        for(        i_378=0;        i_378<self->size;        i_378++        ){
            if(self->item_existance[i_378]) {
                if(1) {
                    come_call_finalizer3(self->items[i_378],sVar_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->items);
        for(        i_379=0;        i_379<self->size;        i_379++        ){
            if(self->item_existance[i_379]) {
                if(1) {
                    self->keys[i_379] = come_decrement_ref_count2(self->keys[i_379], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        come_free((char*)self->keys);
        come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_380;
struct list_item$1charp* prev_it_381;
memset(&it_380, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_381, 0, sizeof(struct list_item$1charp*));
            it_380=self->head;
            while(it_380!=((void*)0)) {
                prev_it_381=it_380;
                it_380=it_380->next;
                come_call_finalizer3(prev_it_381,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_382;
memset(&it_382, 0, sizeof(struct sVarTable*));
    if(gComeGC||gComeC) {
        return;
    }
    it_382=info->lv_table;
    if(it_382==info->come_fun->mBlock->mVarTable) {
        free_objects(it_382,ret_value,info);
    }
    else {
        while(it_382!=info->come_fun->mBlock->mVarTable) {
            free_objects(it_382,ret_value,info);
            it_382=it_382->mParent;
        }
        free_objects(it_382,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
struct sVar* ret_value_383;
struct sVarTable* current_loop_vtable_384;
struct sVarTable* it_385;
memset(&ret_value_383, 0, sizeof(struct sVar*));
memset(&current_loop_vtable_384, 0, sizeof(struct sVarTable*));
memset(&it_385, 0, sizeof(struct sVarTable*));
    if(gComeGC||gComeC) {
        return;
    }
    ret_value_383=((void*)0);
    current_loop_vtable_384=info->current_loop_vtable;
    if(current_loop_vtable_384!=((void*)0)) {
        it_385=info->lv_table;
        while(it_385!=current_loop_vtable_384) {
            free_objects(it_385,ret_value_383,info);
            it_385=it_385->mParent;
        }
        free_objects(it_385,ret_value_383,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value274;
void* right_value275;
void* right_value276;
void* right_value277;
void* right_value278;
char* __result143__;
void* right_value279;
char* var_name_387;
void* right_value280;
void* right_value281;
void* right_value282;
void* right_value283;
void* right_value284;
void* right_value285;
void* right_value286;
void* right_value287;
char* __result144__;
void* right_value288;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
memset(&var_name_387, 0, sizeof(char*));
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
    if(string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0) {
        if(gComeDebug||type->mRecord) {
            __result143__ = __result_obj__ = ((char*)(right_value278=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(right_value274=string_to_string(info->sname))),((char*)(right_value275=int_to_string(info->sline))),((char*)(right_value276=int_to_string(gComeDebugStackFrameID++))),((char*)(right_value277=charp_to_string(c_value))))));
            right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result143__;
        }
    }
    else {
        if(gComeDebug||type->mRecord) {
            static int n_386=0;
            ++n_386;
            var_name_387=(char*)come_increment_ref_count(((char*)(right_value279=xsprintf("__exception_result_var_b%d",n_386))));
            right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            add_come_code_at_function_head(info,"%s;\n",((char*)(right_value280=make_define_var(type,var_name_387,(_Bool)0,info))));
            right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __result144__ = __result_obj__ = ((char*)(right_value287=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(right_value281=string_to_string(info->sname))),((char*)(right_value282=int_to_string(info->sline))),((char*)(right_value283=int_to_string(gComeDebugStackFrameID++))),((char*)(right_value284=string_to_string(var_name_387))),((char*)(right_value285=charp_to_string(c_value))),((char*)(right_value286=string_to_string(var_name_387))))));
            var_name_387 = come_decrement_ref_count2(var_name_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result144__;
            var_name_387 = come_decrement_ref_count2(var_name_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result145__ = __result_obj__ = ((char*)(right_value288=__builtin_string(c_value)));
    right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result145__;
}

_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2charphsVarph* o2_saved_388;
char* it_389;
struct sVar* p_390;
struct sType* type_391;
struct sClass* klass_392;
_Bool __result146__;
_Bool __result147__;
_Bool __result148__;
_Bool __result149__;
memset(&o2_saved_388, 0, sizeof(struct map$2charphsVarph*));
memset(&it_389, 0, sizeof(char*));
memset(&p_390, 0, sizeof(struct sVar*));
memset(&type_391, 0, sizeof(struct sType*));
memset(&klass_392, 0, sizeof(struct sClass*));
    if(gComeGC||gComeC) {
        return (_Bool)1;
    }
    for(    o2_saved_388=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_389=map$2charphsVarph_begin((o2_saved_388));    !map$2charphsVarph_end((o2_saved_388));    it_389=map$2charphsVarph_next((o2_saved_388))    ){
        p_390=map$2charphsVarphp_operator_load_element(table->mVars,it_389);
        type_391=p_390->mType;
        klass_392=type_391->mClass;
        if(ret_value!=((void*)0)&&p_390->mCValueName!=((void*)0)&&string_operator_equals(p_390->mCValueName,ret_value->mCValueName)&&type_391->mHeap) {
            __result146__ = (_Bool)1;
            come_call_finalizer3(o2_saved_388,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result146__;
        }
        else {
            if(type_391->mHeap&&p_390->mCValueName) {
                if(type_391->mFunctionParam) {
                    __result147__ = (_Bool)1;
                    come_call_finalizer3(o2_saved_388,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result147__;
                }
                else {
                    __result148__ = (_Bool)1;
                    come_call_finalizer3(o2_saved_388,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result148__;
                }
            }
            else {
                if(klass_392->mStruct&&p_390->mCValueName&&type_391->mAllocaValue&&!type_391->mNoCallingDestructor) {
                    __result149__ = (_Bool)1;
                    come_call_finalizer3(o2_saved_388,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result149__;
                }
            }
        }
    }
    come_call_finalizer3(o2_saved_388,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)0;
}

_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_393;
memset(&it_393, 0, sizeof(struct sVarTable*));
    if(gComeGC||gComeC) {
        return (_Bool)0;
    }
    it_393=info->lv_table;
    if(it_393==info->come_fun->mBlock->mVarTable) {
        if(existance_free_objects(it_393,ret_value,info)) {
            return (_Bool)1;
        }
    }
    else {
        while(it_393!=info->come_fun->mBlock->mVarTable) {
            if(existance_free_objects(it_393,ret_value,info)) {
                return (_Bool)1;
            }
            it_393=it_393->mParent;
        }
        if(existance_free_objects(it_393,ret_value,info)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

