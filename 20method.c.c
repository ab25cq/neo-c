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
struct sCurrentNode
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
struct sMethodCallNode
{
    int sline;
    char* sname;
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    struct buffer* method_block;
    int method_block_sline;
    struct list$1sTypeph* method_generics_types;
};
struct tuple2$2charphvoidp
{
    char* v1;
    void* v2;
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

struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);

char* sCurrentNode_kind(struct sCurrentNode* self);

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
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
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info);

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);

char* sMethodCallNode_kind(struct sMethodCallNode* self);

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2);
static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
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










struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* __right_value79;
struct sCurrentNode* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value79 = (void*)0;
    ((struct sNodeBase*)(__right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result45__ = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result45__;
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__;
void* __right_value80;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value80 = (void*)0;
    __result46__ = __result_obj__ = ((char*)(__right_value80=__builtin_string(self->sname)));
    __right_value80 = come_decrement_ref_count2(__right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result46__;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __result_obj__;
void* __right_value81;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value81 = (void*)0;
    __result47__ = __result_obj__ = ((char*)(__right_value81=__builtin_string("sCurrentNode")));
    __right_value81 = come_decrement_ref_count2(__right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result47__;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __right_value82;
char* class_name_47;
void* __right_value83;
void* __right_value84;
struct sClass* current_stack_48;
struct sVarTable* vtable_57;
struct map$2charphsVarph* o2_saved_58;
char* it_61;
char* key_64;
struct sVar* value_65;
void* __right_value120;
struct sType* type2_69;
void* __right_value121;
void* __right_value122;
void* __right_value123;
struct tuple2$2charphsTypeph* item_94;
void* __right_value124;
struct sType* type3_95;
void* __right_value125;
void* __right_value126;
void* __right_value127;
struct tuple2$2charphsTypeph* item2_98;
void* __right_value134;
void* __right_value135;
struct map$2charphsVarph* o2_saved_152;
char* it_153;
char* key_154;
struct sVar* value_155;
void* __right_value142;
struct sType* type2_156;
void* __right_value143;
void* __right_value144;
struct tuple2$2charphsTypeph* item_157;
void* __right_value145;
void* __right_value146;
struct CVALUE* come_value_158;
void* __right_value147;
char* __dec_obj42;
void* __right_value148;
void* __right_value149;
struct sType* __dec_obj43;
_Bool __result104__;
__right_value82 = (void*)0;
memset(&class_name_47, 0, sizeof(char*));
__right_value83 = (void*)0;
__right_value84 = (void*)0;
memset(&current_stack_48, 0, sizeof(struct sClass*));
memset(&vtable_57, 0, sizeof(struct sVarTable*));
memset(&o2_saved_58, 0, sizeof(struct map$2charphsVarph*));
memset(&value_65, 0, sizeof(struct sVar*));
__right_value120 = (void*)0;
memset(&type2_69, 0, sizeof(struct sType*));
__right_value121 = (void*)0;
__right_value122 = (void*)0;
__right_value123 = (void*)0;
memset(&item_94, 0, sizeof(struct tuple2$2charphsTypeph*));
__right_value124 = (void*)0;
memset(&type3_95, 0, sizeof(struct sType*));
__right_value125 = (void*)0;
__right_value126 = (void*)0;
__right_value127 = (void*)0;
memset(&item2_98, 0, sizeof(struct tuple2$2charphsTypeph*));
__right_value134 = (void*)0;
__right_value135 = (void*)0;
memset(&o2_saved_152, 0, sizeof(struct map$2charphsVarph*));
memset(&value_155, 0, sizeof(struct sVar*));
__right_value142 = (void*)0;
memset(&type2_156, 0, sizeof(struct sType*));
__right_value143 = (void*)0;
__right_value144 = (void*)0;
memset(&item_157, 0, sizeof(struct tuple2$2charphsTypeph*));
__right_value145 = (void*)0;
__right_value146 = (void*)0;
memset(&come_value_158, 0, sizeof(struct CVALUE*));
__right_value147 = (void*)0;
__right_value148 = (void*)0;
__right_value149 = (void*)0;
    info->current_stack_num++;
    class_name_47=(char*)come_increment_ref_count(((char*)(__right_value82=xsprintf("__current_stack%d__",info->current_stack_num))));
    current_stack_48=(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value84=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value83=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "20method.c", 29, "sClass")))),class_name_47,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
    come_call_finalizer3(__right_value83,sClass_finalize, 0, 1, 0, 0, (void*)0);
    vtable_57=info->lv_table;
    while(vtable_57) {
        for(        o2_saved_58=(struct map$2charphsVarph*)come_increment_ref_count((vtable_57->mVars)),it_61=map$2charphsVarph_begin((o2_saved_58));        !map$2charphsVarph_end((o2_saved_58));        it_61=map$2charphsVarph_next((o2_saved_58))        ){
            key_64=it_61;
            value_65=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_57->mVars,key_64), "20method.c", 36, 0));
            type2_69=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value120=sType_clone(value_65->mType))));
            type2_69->mPointerNum++;
            item_94=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value123=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value122=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 42, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(__right_value121=__builtin_string(value_65->mCValueName)))),(struct sType*)come_increment_ref_count(type2_69)))));
            __right_value121 = come_decrement_ref_count2(__right_value121, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(value_65->mCValueName!=((void*)0)) {
                if(strcmp(value_65->mCValueName,"__list_values")==0) {
                }
                else {
                    if(strcmp(value_65->mCValueName,"__map_keys")==0) {
                    }
                    else {
                        if(strcmp(value_65->mCValueName,"__map_element")==0) {
                        }
                        else {
                            if(string_operator_equals(value_65->mType->mClass->mName,"va_list")||string_operator_equals(value_65->mType->mClass->mName,"__builtin_va_list")) {
                            }
                            else {
                                if(list$1sNodeph_length(type2_69->mArrayNum)==1) {
                                    type3_95=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value124=sType_clone(type2_69))));
                                    list$1sNodeph_reset(type3_95->mArrayNum);
                                    type3_95->mPointerNum++;
                                    item2_98=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value127=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value126=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 61, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(__right_value125=__builtin_string(value_65->mCValueName)))),(struct sType*)come_increment_ref_count(type3_95)))));
                                    __right_value125 = come_decrement_ref_count2(__right_value125, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value126 = come_decrement_ref_count2(__right_value126, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_48->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value134=tuple2$2charphsTypephp_clone(item2_98)))));
                                    come_call_finalizer3(__right_value134,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, (void*)0);
                                    come_call_finalizer3(type3_95,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(item2_98,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_48->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value135=tuple2$2charphsTypephp_clone(item_94)))));
                                    come_call_finalizer3(__right_value135,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, (void*)0);
                                }
                            }
                        }
                    }
                }
            }
            come_call_finalizer3(type2_69,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_94,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_58,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_57=vtable_57->mParent;
    }
    output_struct(current_stack_48,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_47),(struct sClass*)come_increment_ref_count(current_stack_48));
    static int num_current_stack_151=0;
    num_current_stack_151++;
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_47,num_current_stack_151);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",num_current_stack_151,class_name_47);
    vtable_57=info->lv_table;
    while(vtable_57) {
        for(        o2_saved_152=(struct map$2charphsVarph*)come_increment_ref_count((vtable_57->mVars)),it_153=map$2charphsVarph_begin((o2_saved_152));        !map$2charphsVarph_end((o2_saved_152));        it_153=map$2charphsVarph_next((o2_saved_152))        ){
            key_154=it_153;
            value_155=((struct sVar*)come_null_check(map$2charphsVarphp_operator_load_element(vtable_57->mVars,key_154), "20method.c", 87, 1));
            type2_156=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value142=sType_clone(value_155->mType))));
            item_157=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value144=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value143=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 91, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(value_155->mCValueName),(struct sType*)come_increment_ref_count(type2_156)))));
            come_call_finalizer3(__right_value143,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, (void*)0);
            if(value_155->mCValueName!=((void*)0)) {
                if(strcmp(value_155->mCValueName,"__list_values")==0) {
                }
                else {
                    if(strcmp(value_155->mCValueName,"__map_keys")==0) {
                    }
                    else {
                        if(strcmp(value_155->mCValueName,"__map_element")==0) {
                        }
                        else {
                            if(string_operator_equals(value_155->mType->mClass->mName,"va_list")||string_operator_equals(value_155->mType->mClass->mName,"__builtin_va_list")) {
                            }
                            else {
                                if(string_operator_equals(type2_156->mClass->mName,"lambda")) {
                                    add_come_code(info,"__current_stack%d__.%s = %s;\n",num_current_stack_151,value_155->mCValueName,value_155->mCValueName);
                                }
                                else {
                                    add_come_code(info,"__current_stack%d__.%s = &%s;\n",num_current_stack_151,value_155->mCValueName,value_155->mCValueName);
                                }
                            }
                        }
                    }
                }
            }
            come_call_finalizer3(type2_156,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_157,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_152,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_57=vtable_57->mParent;
    }
    come_value_158=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value146=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value145=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 120, "CVALUE"))))))));
    come_call_finalizer3(__right_value145,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj42=come_value_158->c_value;
    come_value_158->c_value=(char*)come_increment_ref_count(((char*)(__right_value147=xsprintf("&__current_stack%d__",num_current_stack_151))));
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj43=come_value_158->type;
    come_value_158->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value149=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value148=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 123, "sType")))),class_name_47,(_Bool)0,info))));
    come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value148,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_158->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_158->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_158));
    info->num_current_stack=num_current_stack_151;
    __result104__ = (_Bool)1;
    class_name_47 = come_decrement_ref_count2(class_name_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_48,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result104__;
    class_name_47 = come_decrement_ref_count2(class_name_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_48,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_158,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNodeBase_finalize(struct sNodeBase* self){
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
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
struct list_item$1tuple2$2charphsTypephph* it_49;
struct list_item$1tuple2$2charphsTypephph* prev_it_50;
memset(&it_49, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_50, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                it_49=self->head;
                while(it_49!=((void*)0)) {
                    prev_it_50=it_49;
                    it_49=it_49->next;
                    come_call_finalizer3(prev_it_50,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_51;
struct list_item$1sTypeph* prev_it_52;
memset(&it_51, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_52, 0, sizeof(struct list_item$1sTypeph*));
                                                it_51=self->head;
                                                while(it_51!=((void*)0)) {
                                                    prev_it_52=it_51;
                                                    it_51=it_51->next;
                                                    come_call_finalizer3(prev_it_52,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_53;
struct list_item$1sNodeph* prev_it_54;
memset(&it_53, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_54, 0, sizeof(struct list_item$1sNodeph*));
                                                it_53=self->head;
                                                while(it_53!=((void*)0)) {
                                                    prev_it_54=it_53;
                                                    it_53=it_53->next;
                                                    come_call_finalizer3(prev_it_54,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
                                                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                                                            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_55;
struct list_item$1charph* prev_it_56;
memset(&it_55, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_56, 0, sizeof(struct list_item$1charph*));
                                                it_55=self->head;
                                                while(it_55!=((void*)0)) {
                                                    prev_it_56=it_55;
                                                    it_55=it_55->next;
                                                    come_call_finalizer3(prev_it_56,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
                                                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                                                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
char* result_59;
char* __result48__;
char* __result49__;
char* result_60;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_59, 0, sizeof(char*));
memset(&result_60, 0, sizeof(char*));
            if(self==((void*)0)) {
                memset(&result_59,0,sizeof(char*));
                __result48__ = __result_obj__ = result_59;
                return __result48__;
            }
            self->key_list->it=self->key_list->head;
            if(self->key_list->it) {
                __result49__ = __result_obj__ = self->key_list->it->item;
                return __result49__;
            }
            memset(&result_60,0,sizeof(char*));
            __result50__ = __result_obj__ = result_60;
            return __result50__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
            return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
char* result_62;
char* __result51__;
char* __result52__;
char* result_63;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_62, 0, sizeof(char*));
memset(&result_63, 0, sizeof(char*));
            if(self==((void*)0)||self->key_list->it==((void*)0)) {
                memset(&result_62,0,sizeof(char*));
                __result51__ = __result_obj__ = result_62;
                return __result51__;
            }
            self->key_list->it=self->key_list->it->next;
            if(self->key_list->it) {
                __result52__ = __result_obj__ = self->key_list->it->item;
                return __result52__;
            }
            memset(&result_63,0,sizeof(char*));
            __result53__ = __result_obj__ = result_63;
            return __result53__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_66;
unsigned int hash_67;
unsigned int it_68;
struct sVar* __result54__;
struct sVar* __result55__;
struct sVar* __result56__;
struct sVar* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_66, 0, sizeof(struct sVar*));
                memset(&default_value_66,0,sizeof(struct sVar*));
                hash_67=string_get_hash_key(((char*)key))%self->size;
                it_68=hash_67;
                while((_Bool)1) {
                    if(self->item_existance[it_68]) {
                        if(string_equals(self->keys[it_68],key)) {
                            __result54__ = __result_obj__ = self->items[it_68];
                            come_call_finalizer3(default_value_66,sVar_finalize, 0, 0, 0, 0, (void*)0);
                            return __result54__;
                        }
                        it_68++;
                        if(it_68>=self->size) {
                            it_68=0;
                        }
                        else {
                            if(it_68==hash_67) {
                                __result55__ = __result_obj__ = default_value_66;
                                come_call_finalizer3(default_value_66,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result55__;
                            }
                        }
                    }
                    else {
                        __result56__ = __result_obj__ = default_value_66;
                        come_call_finalizer3(default_value_66,sVar_finalize, 0, 0, 1, 0, (void*)0);
                        return __result56__;
                    }
                }
                __result57__ = __result_obj__ = default_value_66;
                come_call_finalizer3(default_value_66,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result57__;
                come_call_finalizer3(default_value_66,sVar_finalize, 0, 0, 0, 0, (void*)0);
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

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
struct sType* __result58__;
void* __right_value85;
struct sType* result_70;
void* __right_value92;
struct list$1sTypeph* __dec_obj15;
void* __right_value95;
struct tuple1$1sTypeph* __dec_obj17;
void* __right_value96;
struct tuple1$1sTypeph* __dec_obj18;
void* __right_value97;
char* __dec_obj19;
void* __right_value98;
struct list$1sTypeph* __dec_obj20;
void* __right_value106;
struct list$1sNodeph* __dec_obj24;
void* __right_value107;
struct list$1sTypeph* __dec_obj25;
void* __right_value114;
struct list$1charph* __dec_obj29;
void* __right_value115;
struct tuple1$1sTypeph* __dec_obj30;
void* __right_value116;
struct sNode* __dec_obj31;
void* __right_value117;
struct sNode* __dec_obj32;
void* __right_value118;
char* __dec_obj33;
void* __right_value119;
char* __dec_obj34;
struct sType* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value85 = (void*)0;
memset(&result_70, 0, sizeof(struct sType*));
__right_value92 = (void*)0;
__right_value95 = (void*)0;
__right_value96 = (void*)0;
__right_value97 = (void*)0;
__right_value98 = (void*)0;
__right_value106 = (void*)0;
__right_value107 = (void*)0;
__right_value114 = (void*)0;
__right_value115 = (void*)0;
__right_value116 = (void*)0;
__right_value117 = (void*)0;
__right_value118 = (void*)0;
__right_value119 = (void*)0;
                if(self==(void*)0) {
                    __result58__ = __result_obj__ = (void*)0;
                    return __result58__;
                }
                result_70=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value85=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                if(self!=((void*)0)) {
                    result_70->mClass=self->mClass;
                }
                if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
                    __dec_obj15=result_70->mMultipleTypes;
                    result_70->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value92=list$1sTypephp_clone(self->mMultipleTypes))));
                    come_call_finalizer3(__dec_obj15,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                    __dec_obj17=result_70->mNoSolvedGenericsType;
                    result_70->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value95=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                    come_call_finalizer3(__dec_obj17,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
                    __dec_obj18=result_70->mOriginalLoadVarType;
                    result_70->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value96=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                    come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                    __dec_obj19=result_70->mGenericsName;
                    result_70->mGenericsName=(char*)come_increment_ref_count(((char*)(__right_value97=string_clone(self->mGenericsName))));
                    __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                    __dec_obj20=result_70->mGenericsTypes;
                    result_70->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value98=list$1sTypephp_clone(self->mGenericsTypes))));
                    come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                    __dec_obj24=result_70->mArrayNum;
                    result_70->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value106=list$1sNodephp_clone(self->mArrayNum))));
                    come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)) {
                    result_70->mOmitArrayNum=self->mOmitArrayNum;
                }
                if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                    __dec_obj25=result_70->mParamTypes;
                    result_70->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value107=list$1sTypephp_clone(self->mParamTypes))));
                    come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                    __dec_obj29=result_70->mParamNames;
                    result_70->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value114=list$1charphp_clone(self->mParamNames))));
                    come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                    __dec_obj30=result_70->mResultType;
                    result_70->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value115=tuple1$1sTypephp_clone(self->mResultType))));
                    come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)) {
                    result_70->mVarArgs=self->mVarArgs;
                }
                if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
                    __dec_obj31=result_70->mAlignas;
                    result_70->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value116=sNode_clone(self->mAlignas))));
                    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
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
                    __dec_obj32=result_70->mSizeNum;
                    result_70->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value117=sNode_clone(self->mSizeNum))));
                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
                }
                if(self!=((void*)0)) {
                    result_70->mDynamicArrayNum=self->mDynamicArrayNum;
                }
                if(self!=((void*)0)) {
                    result_70->mTypeOfExpression=self->mTypeOfExpression;
                }
                if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                    __dec_obj33=result_70->mOriginalTypeName;
                    result_70->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(__right_value118=string_clone(self->mOriginalTypeName))));
                    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
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
                    __dec_obj34=result_70->mAsmName;
                    result_70->mAsmName=(char*)come_increment_ref_count(((char*)(__right_value119=string_clone(self->mAsmName))));
                    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
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
                __result75__ = __result_obj__ = result_70;
                come_call_finalizer3(result_70,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result75__;
                come_call_finalizer3(result_70,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result59__;
void* __right_value86;
void* __right_value87;
struct list$1sTypeph* result_71;
struct list_item$1sTypeph* it_72;
void* __right_value91;
struct list$1sTypeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value86 = (void*)0;
__right_value87 = (void*)0;
memset(&result_71, 0, sizeof(struct list$1sTypeph*));
memset(&it_72, 0, sizeof(struct list_item$1sTypeph*));
__right_value91 = (void*)0;
                        if(self==((void*)0)) {
                            __result59__ = __result_obj__ = ((void*)0);
                            return __result59__;
                        }
                        result_71=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value87=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value86=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))))));
                        come_call_finalizer3(__right_value86,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        it_72=self->head;
                        while(it_72!=((void*)0)) {
                            list$1sTypeph_add(result_71,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value91=sType_clone(it_72->item)))));
                            come_call_finalizer3(__right_value91,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            it_72=it_72->next;
                        }
                        __result62__ = __result_obj__ = result_71;
                        come_call_finalizer3(result_71,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result62__;
                        come_call_finalizer3(result_71,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result60__ = __result_obj__ = self;
                            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result60__;
                            come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* __right_value88;
struct list_item$1sTypeph* litem_73;
struct sType* __dec_obj12;
void* __right_value89;
struct list_item$1sTypeph* litem_74;
struct sType* __dec_obj13;
void* __right_value90;
struct list_item$1sTypeph* litem_75;
struct sType* __dec_obj14;
struct list$1sTypeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value88 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1sTypeph*));
__right_value89 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1sTypeph*));
__right_value90 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1sTypeph*));
                                if(self->len==0) {
                                    litem_73=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value88=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
                                    come_call_finalizer3(__right_value88,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_73->prev=((void*)0);
                                    litem_73->next=((void*)0);
                                    __dec_obj12=litem_73->item;
                                    litem_73->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj12,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_73;
                                    self->head=litem_73;
                                }
                                else {
                                    if(self->len==1) {
                                        litem_74=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value89=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
                                        come_call_finalizer3(__right_value89,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        litem_74->prev=self->head;
                                        litem_74->next=((void*)0);
                                        __dec_obj13=litem_74->item;
                                        litem_74->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        self->tail=litem_74;
                                        self->head->next=litem_74;
                                    }
                                    else {
                                        litem_75=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value90=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
                                        come_call_finalizer3(__right_value90,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        litem_75->prev=self->tail;
                                        litem_75->next=((void*)0);
                                        __dec_obj14=litem_75->item;
                                        litem_75->item=(struct sType*)come_increment_ref_count(item);
                                        come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        self->tail->next=litem_75;
                                        self->tail=litem_75;
                                    }
                                }
                                self->len++;
                                __result61__ = __result_obj__ = self;
                                come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                                return __result61__;
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
struct tuple1$1sTypeph* __result63__;
void* __right_value93;
struct tuple1$1sTypeph* result_78;
void* __right_value94;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value93 = (void*)0;
memset(&result_78, 0, sizeof(struct tuple1$1sTypeph*));
__right_value94 = (void*)0;
                        if(self==(void*)0) {
                            __result63__ = __result_obj__ = (void*)0;
                            return __result63__;
                        }
                        result_78=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value93=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                        if(self!=((void*)0)&&self->v1!=((void*)0)) {
                            __dec_obj16=result_78->v1;
                            result_78->v1=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value94=sType_clone(self->v1))));
                            come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        __result64__ = __result_obj__ = result_78;
                        come_call_finalizer3(result_78,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                        return __result64__;
                        come_call_finalizer3(result_78,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
                            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result65__;
void* __right_value99;
void* __right_value100;
struct list$1sNodeph* result_79;
struct list_item$1sNodeph* it_80;
void* __right_value105;
struct list$1sNodeph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value99 = (void*)0;
__right_value100 = (void*)0;
memset(&result_79, 0, sizeof(struct list$1sNodeph*));
memset(&it_80, 0, sizeof(struct list_item$1sNodeph*));
__right_value105 = (void*)0;
                        if(self==((void*)0)) {
                            __result65__ = __result_obj__ = ((void*)0);
                            return __result65__;
                        }
                        result_79=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value100=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value99=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))))));
                        come_call_finalizer3(__right_value99,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        it_80=self->head;
                        while(it_80!=((void*)0)) {
                            list$1sNodeph_add(result_79,(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value105=sNode_clone(it_80->item)))));
                            if(__right_value105) { __right_value105 = come_decrement_ref_count2(__right_value105, ((struct sNode*)__right_value105)->finalize, ((struct sNode*)__right_value105)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            it_80=it_80->next;
                        }
                        __result70__ = __result_obj__ = result_79;
                        come_call_finalizer3(result_79,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result70__;
                        come_call_finalizer3(result_79,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result66__ = __result_obj__ = self;
                            come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result66__;
                            come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* __right_value101;
struct list_item$1sNodeph* litem_81;
struct sNode* __dec_obj21;
void* __right_value102;
struct list_item$1sNodeph* litem_82;
struct sNode* __dec_obj22;
void* __right_value103;
struct list_item$1sNodeph* litem_83;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value101 = (void*)0;
memset(&litem_81, 0, sizeof(struct list_item$1sNodeph*));
__right_value102 = (void*)0;
memset(&litem_82, 0, sizeof(struct list_item$1sNodeph*));
__right_value103 = (void*)0;
memset(&litem_83, 0, sizeof(struct list_item$1sNodeph*));
                                if(self->len==0) {
                                    litem_81=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value101=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
                                    come_call_finalizer3(__right_value101,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_81->prev=((void*)0);
                                    litem_81->next=((void*)0);
                                    __dec_obj21=litem_81->item;
                                    litem_81->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_81;
                                    self->head=litem_81;
                                }
                                else {
                                    if(self->len==1) {
                                        litem_82=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value102=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
                                        come_call_finalizer3(__right_value102,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        litem_82->prev=self->head;
                                        litem_82->next=((void*)0);
                                        __dec_obj22=litem_82->item;
                                        litem_82->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail=litem_82;
                                        self->head->next=litem_82;
                                    }
                                    else {
                                        litem_83=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value103=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
                                        come_call_finalizer3(__right_value103,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                        litem_83->prev=self->tail;
                                        litem_83->next=((void*)0);
                                        __dec_obj23=litem_83->item;
                                        litem_83->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                        self->tail->next=litem_83;
                                        self->tail=litem_83;
                                    }
                                }
                                self->len++;
                                __result67__ = __result_obj__ = self;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result67__;
                                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
struct sNode* __result68__;
void* __right_value104;
struct sNode* result_84;
struct sNode* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value104 = (void*)0;
memset(&result_84, 0, sizeof(struct sNode*));
                                if(self==(void*)0) {
                                    __result68__ = __result_obj__ = (void*)0;
                                    return __result68__;
                                }
                                result_84=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value104=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
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
                                __result69__ = __result_obj__ = result_84;
                                if(result_84) { result_84 = come_decrement_ref_count2(result_84, ((struct sNode*)result_84)->finalize, ((struct sNode*)result_84)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                return __result69__;
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
struct list$1charph* __result71__;
void* __right_value108;
void* __right_value109;
struct list$1charph* result_87;
struct list_item$1charph* it_88;
void* __right_value113;
struct list$1charph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value108 = (void*)0;
__right_value109 = (void*)0;
memset(&result_87, 0, sizeof(struct list$1charph*));
memset(&it_88, 0, sizeof(struct list_item$1charph*));
__right_value113 = (void*)0;
                        if(self==((void*)0)) {
                            __result71__ = __result_obj__ = ((void*)0);
                            return __result71__;
                        }
                        result_87=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value109=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value108=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))))));
                        come_call_finalizer3(__right_value108,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        it_88=self->head;
                        while(it_88!=((void*)0)) {
                            list$1charph_add(result_87,(char*)come_increment_ref_count(((char*)(__right_value113=string_clone(it_88->item)))));
                            __right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            it_88=it_88->next;
                        }
                        __result74__ = __result_obj__ = result_87;
                        come_call_finalizer3(result_87,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result74__;
                        come_call_finalizer3(result_87,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->head=((void*)0);
                            self->tail=((void*)0);
                            self->len=0;
                            __result72__ = __result_obj__ = self;
                            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result72__;
                            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
void* __right_value110;
struct list_item$1charph* litem_89;
char* __dec_obj26;
void* __right_value111;
struct list_item$1charph* litem_90;
char* __dec_obj27;
void* __right_value112;
struct list_item$1charph* litem_91;
char* __dec_obj28;
struct list$1charph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value110 = (void*)0;
memset(&litem_89, 0, sizeof(struct list_item$1charph*));
__right_value111 = (void*)0;
memset(&litem_90, 0, sizeof(struct list_item$1charph*));
__right_value112 = (void*)0;
memset(&litem_91, 0, sizeof(struct list_item$1charph*));
                                if(self->len==0) {
                                    litem_89=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value110=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
                                    come_call_finalizer3(__right_value110,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_89->prev=((void*)0);
                                    litem_89->next=((void*)0);
                                    __dec_obj26=litem_89->item;
                                    litem_89->item=(char*)come_increment_ref_count(item);
                                    __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_89;
                                    self->head=litem_89;
                                }
                                else {
                                    if(self->len==1) {
                                        litem_90=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value111=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
                                        come_call_finalizer3(__right_value111,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        litem_90->prev=self->head;
                                        litem_90->next=((void*)0);
                                        __dec_obj27=litem_90->item;
                                        litem_90->item=(char*)come_increment_ref_count(item);
                                        __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail=litem_90;
                                        self->head->next=litem_90;
                                    }
                                    else {
                                        litem_91=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value112=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
                                        come_call_finalizer3(__right_value112,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                        litem_91->prev=self->tail;
                                        litem_91->next=((void*)0);
                                        __dec_obj28=litem_91->item;
                                        litem_91->item=(char*)come_increment_ref_count(item);
                                        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        self->tail->next=litem_91;
                                        self->tail=litem_91;
                                    }
                                }
                                self->len++;
                                __result73__ = __result_obj__ = self;
                                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                return __result73__;
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

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj35;
struct sType* __dec_obj36;
struct tuple2$2charphsTypeph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
                __dec_obj35=self->v1;
                self->v1=(char*)come_increment_ref_count(v1);
                __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj36=self->v2;
                self->v2=(struct sType*)come_increment_ref_count(v2);
                come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
                __result76__ = __result_obj__ = self;
                come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result76__;
                come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
                                    if(self==((void*)0)) {
                                        return 0;
                                    }
                                    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_96;
struct list_item$1sNodeph* prev_it_97;
struct list$1sNodeph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_96, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_97, 0, sizeof(struct list_item$1sNodeph*));
                                        it_96=self->head;
                                        while(it_96!=((void*)0)) {
                                            prev_it_97=it_96;
                                            it_96=it_96->next;
                                            come_call_finalizer3(prev_it_97,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        self->head=((void*)0);
                                        self->tail=((void*)0);
                                        self->len=0;
                                        __result77__ = __result_obj__ = self;
                                        return __result77__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
void* __right_value128;
struct list_item$1tuple2$2charphsTypephph* litem_99;
struct tuple2$2charphsTypeph* __dec_obj37;
void* __right_value129;
struct list_item$1tuple2$2charphsTypephph* litem_100;
struct tuple2$2charphsTypeph* __dec_obj38;
void* __right_value130;
struct list_item$1tuple2$2charphsTypephph* litem_101;
struct tuple2$2charphsTypeph* __dec_obj39;
struct list$1tuple2$2charphsTypephph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value128 = (void*)0;
memset(&litem_99, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
__right_value129 = (void*)0;
memset(&litem_100, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
__right_value130 = (void*)0;
memset(&litem_101, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                        if(self->len==0) {
                                            litem_99=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value128=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 219, "list_item$1tuple2$2charphsTypephph"))));
                                            come_call_finalizer3(__right_value128,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            litem_99->prev=((void*)0);
                                            litem_99->next=((void*)0);
                                            __dec_obj37=litem_99->item;
                                            litem_99->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                            come_call_finalizer3(__dec_obj37,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            self->tail=litem_99;
                                            self->head=litem_99;
                                        }
                                        else {
                                            if(self->len==1) {
                                                litem_100=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value129=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 229, "list_item$1tuple2$2charphsTypephph"))));
                                                come_call_finalizer3(__right_value129,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                litem_100->prev=self->head;
                                                litem_100->next=((void*)0);
                                                __dec_obj38=litem_100->item;
                                                litem_100->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                                come_call_finalizer3(__dec_obj38,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                self->tail=litem_100;
                                                self->head->next=litem_100;
                                            }
                                            else {
                                                litem_101=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value130=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 239, "list_item$1tuple2$2charphsTypephph"))));
                                                come_call_finalizer3(__right_value130,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                litem_101->prev=self->tail;
                                                litem_101->next=((void*)0);
                                                __dec_obj39=litem_101->item;
                                                litem_101->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                                come_call_finalizer3(__dec_obj39,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                                self->tail->next=litem_101;
                                                self->tail=litem_101;
                                            }
                                        }
                                        self->len++;
                                        __result78__ = __result_obj__ = self;
                                        come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result78__;
                                        come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
                                                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(self!=((void*)0)&&self->v2!=((void*)0)) {
                                                        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
struct tuple2$2charphsTypeph* __result79__;
void* __right_value131;
struct tuple2$2charphsTypeph* result_102;
void* __right_value132;
char* __dec_obj40;
void* __right_value133;
struct sType* __dec_obj41;
struct tuple2$2charphsTypeph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value131 = (void*)0;
memset(&result_102, 0, sizeof(struct tuple2$2charphsTypeph*));
__right_value132 = (void*)0;
__right_value133 = (void*)0;
                                        if(self==(void*)0) {
                                            __result79__ = __result_obj__ = (void*)0;
                                            return __result79__;
                                        }
                                        result_102=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value131=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                                        if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                            __dec_obj40=result_102->v1;
                                            result_102->v1=(char*)come_increment_ref_count(((char*)(__right_value132=string_clone(self->v1))));
                                            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        if(self!=((void*)0)&&self->v2!=((void*)0)) {
                                            __dec_obj41=result_102->v2;
                                            result_102->v2=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value133=sType_clone(self->v2))));
                                            come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                        __result80__ = __result_obj__ = result_102;
                                        come_call_finalizer3(result_102,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result80__;
                                        come_call_finalizer3(result_102,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
                                            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                                                come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_103;
int i_104;
            for(            i_103=0;            i_103<self->size;            i_103++            ){
                if(self->item_existance[i_103]) {
                    if(1) {
                        come_call_finalizer3(self->items[i_103],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_104=0;            i_104<self->size;            i_104++            ){
                if(self->item_existance[i_104]) {
                    if(1) {
                        self->keys[i_104] = come_decrement_ref_count2(self->keys[i_104], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_105;
struct list_item$1charp* prev_it_106;
memset(&it_105, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_106, 0, sizeof(struct list_item$1charp*));
                it_105=self->head;
                while(it_105!=((void*)0)) {
                    prev_it_106=it_105;
                    it_105=it_105->next;
                    come_call_finalizer3(prev_it_106,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
unsigned int hash_124;
unsigned int it_125;
_Bool same_key_exist_142;
char* it2_145;
struct map$2charphsClassph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
        if(self->len*10>=self->size) {
            map$2charphsClassph_rehash(self);
        }
        hash_124=string_get_hash_key(key)%self->size;
        it_125=hash_124;
        while((_Bool)1) {
            if(self->item_existance[it_125]) {
                if(string_equals(self->keys[it_125],key)) {
                    if(1) {
                        list$1charp_remove(self->key_list,self->keys[it_125]);
                        self->keys[it_125] = come_decrement_ref_count2(self->keys[it_125], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_125]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_125]);
                        self->keys[it_125]=key;
                    }
                    if(1) {
                        come_call_finalizer3(self->items[it_125],sClass_finalize, 0, 0, 0, 0, (void*)0);
                        self->items[it_125]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_125]=item;
                    }
                    break;
                }
                it_125++;
                if(it_125>=self->size) {
                    it_125=0;
                }
                else {
                    if(it_125==hash_124) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_125]=(_Bool)1;
                if(1) {
                    self->keys[it_125]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_125]=key;
                }
                if(1) {
                    self->items[it_125]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_125]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_142=(_Bool)0;
        for(        it2_145=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_145=list$1charp_next(self->key_list)        ){
            if(string_equals(it2_145,key)) {
                same_key_exist_142=(_Bool)1;
            }
        }
        if(!same_key_exist_142) {
            list$1charp_push_back(self->key_list,key);
        }
        __result102__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result102__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_107;
void* __right_value136;
char** keys_108;
void* __right_value137;
struct sClass** items_109;
void* __right_value138;
_Bool* item_existance_110;
int len_111;
char* it_114;
struct sClass* default_value_117;
struct sClass* it2_118;
unsigned int hash_121;
int n_122;
struct sClass* default_value_123;
__right_value136 = (void*)0;
__right_value137 = (void*)0;
memset(&items_109, 0, sizeof(struct sClass**));
__right_value138 = (void*)0;
memset(&default_value_117, 0, sizeof(struct sClass*));
memset(&it2_118, 0, sizeof(struct sClass*));
memset(&default_value_123, 0, sizeof(struct sClass*));
                size_107=self->size*10;
                keys_108=(char**)come_increment_ref_count(((char**)(__right_value136=(char**)come_calloc(1, sizeof(char*)*(1*(size_107)), "./neo-c.h", 1315, "char*%"))));
                __right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                items_109=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value137=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_107)), "./neo-c.h", 1316, "sClass*%"))));
                come_call_finalizer3(__right_value137,sClass_finalize, 0, 1, 0, 0, (void*)0);
                item_existance_110=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value138=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_107)), "./neo-c.h", 1317, "bool"))));
                __right_value138 = come_decrement_ref_count2(__right_value138, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                len_111=0;
                for(                it_114=map$2charphsClassph_begin(self);                !map$2charphsClassph_end(self);                it_114=map$2charphsClassph_next(self)                ){
                    memset(&default_value_117,0,sizeof(struct sClass*));
                    it2_118=map$2charphsClassph_at(self,it_114,default_value_117);
                    hash_121=string_get_hash_key(it_114)%size_107;
                    n_122=hash_121;
                    while((_Bool)1) {
                        if(item_existance_110[n_122]) {
                            n_122++;
                            if(n_122>=size_107) {
                                n_122=0;
                            }
                            else {
                                if(n_122==hash_121) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_110[n_122]=(_Bool)1;
                            keys_108[n_122]=it_114;
                            items_109[n_122]=map$2charphsClassph_at(self,it_114,default_value_123);
                            len_111++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_108;
                self->items=items_109;
                self->item_existance=item_existance_110;
                self->size=size_107;
                self->len=len_111;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
char* result_112;
char* __result81__;
char* __result82__;
char* result_113;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_112, 0, sizeof(char*));
memset(&result_113, 0, sizeof(char*));
                    if(self==((void*)0)) {
                        memset(&result_112,0,sizeof(char*));
                        __result81__ = __result_obj__ = result_112;
                        return __result81__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result82__ = __result_obj__ = self->key_list->it->item;
                        return __result82__;
                    }
                    memset(&result_113,0,sizeof(char*));
                    __result83__ = __result_obj__ = result_113;
                    return __result83__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
                    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
char* result_115;
char* __result84__;
char* __result85__;
char* result_116;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_115, 0, sizeof(char*));
memset(&result_116, 0, sizeof(char*));
                    if(self==((void*)0)||self->key_list->it==((void*)0)) {
                        memset(&result_115,0,sizeof(char*));
                        __result84__ = __result_obj__ = result_115;
                        return __result84__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result85__ = __result_obj__ = self->key_list->it->item;
                        return __result85__;
                    }
                    memset(&result_116,0,sizeof(char*));
                    __result86__ = __result_obj__ = result_116;
                    return __result86__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_119;
unsigned int it_120;
struct sClass* __result87__;
struct sClass* __result88__;
struct sClass* __result89__;
struct sClass* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
                        hash_119=string_get_hash_key(((char*)key))%self->size;
                        it_120=hash_119;
                        while((_Bool)1) {
                            if(self->item_existance[it_120]) {
                                if(string_equals(self->keys[it_120],key)) {
                                    __result87__ = __result_obj__ = self->items[it_120];
                                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result87__;
                                }
                                it_120++;
                                if(it_120>=self->size) {
                                    it_120=0;
                                }
                                else {
                                    if(it_120==hash_119) {
                                        __result88__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result88__;
                                    }
                                }
                            }
                            else {
                                __result89__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                return __result89__;
                            }
                        }
                        __result90__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result90__;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_126;
struct list_item$1charp* it_127;
struct list$1charp* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_127, 0, sizeof(struct list_item$1charp*));
                            it2_126=0;
                            it_127=self->head;
                            while(it_127!=((void*)0)) {
                                if(string_equals(it_127->item,item)) {
                                    list$1charp_delete(self,it2_126,it2_126+1);
                                    break;
                                }
                                it2_126++;
                                it_127=it_127->next;
                            }
                            __result94__ = __result_obj__ = self;
                            return __result94__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
int tmp_128;
struct list$1charp* __result91__;
struct list_item$1charp* it_131;
int i_132;
struct list_item$1charp* prev_it_133;
struct list_item$1charp* it_134;
int i_135;
struct list_item$1charp* prev_it_136;
struct list_item$1charp* it_137;
struct list_item$1charp* head_prev_it_138;
struct list_item$1charp* tail_it_139;
int i_140;
struct list_item$1charp* prev_it_141;
struct list$1charp* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_131, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_133, 0, sizeof(struct list_item$1charp*));
memset(&it_134, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_136, 0, sizeof(struct list_item$1charp*));
memset(&it_137, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_138, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_139, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_141, 0, sizeof(struct list_item$1charp*));
                                        if(head<0) {
                                            head+=self->len;
                                        }
                                        if(tail<0) {
                                            tail+=self->len+1;
                                        }
                                        if(head>tail) {
                                            tmp_128=tail;
                                            tail=head;
                                            head=tmp_128;
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
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(head==0) {
                                                it_131=self->head;
                                                i_132=0;
                                                while(it_131!=((void*)0)) {
                                                    if(i_132<tail) {
                                                        prev_it_133=it_131;
                                                        it_131=it_131->next;
                                                        i_132++;
                                                        come_call_finalizer3(prev_it_133,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(i_132==tail) {
                                                            self->head=it_131;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_131=it_131->next;
                                                            i_132++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(tail==self->len) {
                                                    it_134=self->head;
                                                    i_135=0;
                                                    while(it_134!=((void*)0)) {
                                                        if(i_135==head) {
                                                            self->tail=it_134->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(i_135>=head) {
                                                            prev_it_136=it_134;
                                                            it_134=it_134->next;
                                                            i_135++;
                                                            come_call_finalizer3(prev_it_136,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_134=it_134->next;
                                                            i_135++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_137=self->head;
                                                    head_prev_it_138=((void*)0);
                                                    tail_it_139=((void*)0);
                                                    i_140=0;
                                                    while(it_137!=((void*)0)) {
                                                        if(i_140==head) {
                                                            head_prev_it_138=it_137->prev;
                                                        }
                                                        if(i_140==tail) {
                                                            tail_it_139=it_137;
                                                        }
                                                        if(i_140>=head&&i_140<tail) {
                                                            prev_it_141=it_137;
                                                            it_137=it_137->next;
                                                            i_140++;
                                                            come_call_finalizer3(prev_it_141,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_137=it_137->next;
                                                            i_140++;
                                                        }
                                                    }
                                                    if(head_prev_it_138!=((void*)0)) {
                                                        head_prev_it_138->next=tail_it_139;
                                                    }
                                                    if(tail_it_139!=((void*)0)) {
                                                        tail_it_139->prev=head_prev_it_138;
                                                    }
                                                }
                                            }
                                        }
                                        __result93__ = __result_obj__ = self;
                                        return __result93__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_129;
struct list_item$1charp* prev_it_130;
struct list$1charp* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_129, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_130, 0, sizeof(struct list_item$1charp*));
                                                it_129=self->head;
                                                while(it_129!=((void*)0)) {
                                                    prev_it_130=it_129;
                                                    it_129=it_129->next;
                                                    come_call_finalizer3(prev_it_130,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result92__ = __result_obj__ = self;
                                                return __result92__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
char* result_143;
char* __result95__;
char* __result96__;
char* result_144;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_143, 0, sizeof(char*));
memset(&result_144, 0, sizeof(char*));
            if(self==((void*)0)) {
                memset(&result_143,0,sizeof(char*));
                __result95__ = __result_obj__ = result_143;
                return __result95__;
            }
            self->it=self->head;
            if(self->it) {
                __result96__ = __result_obj__ = self->it->item;
                return __result96__;
            }
            memset(&result_144,0,sizeof(char*));
            __result97__ = __result_obj__ = result_144;
            return __result97__;
}

static _Bool list$1charp_end(struct list$1charp* self){
            return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
char* result_146;
char* __result98__;
char* __result99__;
char* result_147;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_146, 0, sizeof(char*));
memset(&result_147, 0, sizeof(char*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_146,0,sizeof(char*));
                __result98__ = __result_obj__ = result_146;
                return __result98__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result99__ = __result_obj__ = self->it->item;
                return __result99__;
            }
            memset(&result_147,0,sizeof(char*));
            __result100__ = __result_obj__ = result_147;
            return __result100__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
void* __right_value139;
struct list_item$1charp* litem_148;
void* __right_value140;
struct list_item$1charp* litem_149;
void* __right_value141;
struct list_item$1charp* litem_150;
struct list$1charp* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value139 = (void*)0;
memset(&litem_148, 0, sizeof(struct list_item$1charp*));
__right_value140 = (void*)0;
memset(&litem_149, 0, sizeof(struct list_item$1charp*));
__right_value141 = (void*)0;
memset(&litem_150, 0, sizeof(struct list_item$1charp*));
                if(self->len==0) {
                    litem_148=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value139=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 219, "list_item$1charp"))));
                    come_call_finalizer3(__right_value139,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_148->prev=((void*)0);
                    litem_148->next=((void*)0);
                    litem_148->item=item;
                    self->tail=litem_148;
                    self->head=litem_148;
                }
                else {
                    if(self->len==1) {
                        litem_149=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value140=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 229, "list_item$1charp"))));
                        come_call_finalizer3(__right_value140,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_149->prev=self->head;
                        litem_149->next=((void*)0);
                        litem_149->item=item;
                        self->tail=litem_149;
                        self->head->next=litem_149;
                    }
                    else {
                        litem_150=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value141=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 239, "list_item$1charp"))));
                        come_call_finalizer3(__right_value141,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_150->prev=self->tail;
                        litem_150->next=((void*)0);
                        litem_150->item=item;
                        self->tail->next=litem_150;
                        self->tail=litem_150;
                    }
                }
                self->len++;
                __result101__ = __result_obj__ = self;
                return __result101__;
}

static void CVALUE_finalize(struct CVALUE* self){
        if(self!=((void*)0)&&self->c_value!=((void*)0)) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->type!=((void*)0)) {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
void* __right_value150;
struct list_item$1CVALUEph* litem_159;
struct CVALUE* __dec_obj44;
void* __right_value151;
struct list_item$1CVALUEph* litem_160;
struct CVALUE* __dec_obj45;
void* __right_value152;
struct list_item$1CVALUEph* litem_161;
struct CVALUE* __dec_obj46;
struct list$1CVALUEph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value150 = (void*)0;
memset(&litem_159, 0, sizeof(struct list_item$1CVALUEph*));
__right_value151 = (void*)0;
memset(&litem_160, 0, sizeof(struct list_item$1CVALUEph*));
__right_value152 = (void*)0;
memset(&litem_161, 0, sizeof(struct list_item$1CVALUEph*));
        if(self->len==0) {
            litem_159=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value150=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 219, "list_item$1CVALUEph"))));
            come_call_finalizer3(__right_value150,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_159->prev=((void*)0);
            litem_159->next=((void*)0);
            __dec_obj44=litem_159->item;
            litem_159->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj44,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_159;
            self->head=litem_159;
        }
        else {
            if(self->len==1) {
                litem_160=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value151=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 229, "list_item$1CVALUEph"))));
                come_call_finalizer3(__right_value151,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_160->prev=self->head;
                litem_160->next=((void*)0);
                __dec_obj45=litem_160->item;
                litem_160->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj45,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_160;
                self->head->next=litem_160;
            }
            else {
                litem_161=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value152=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 239, "list_item$1CVALUEph"))));
                come_call_finalizer3(__right_value152,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_161->prev=self->tail;
                litem_161->next=((void*)0);
                __dec_obj46=litem_161->item;
                litem_161->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj46,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_161;
                self->tail=litem_161;
            }
        }
        self->len++;
        __result103__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result103__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
                if(self!=((void*)0)&&self->item!=((void*)0)) {
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
void* __right_value153;
char* none_generics_name_162;
void* __right_value154;
char* fun_name2_163;
void* __right_value155;
char* fun_name3_164;
struct sGenericsFun* generics_fun_165;
void* __right_value156;
_Bool _if_conditional1;
void* __right_value157;
char* __result109__;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value153 = (void*)0;
memset(&none_generics_name_162, 0, sizeof(char*));
__right_value154 = (void*)0;
memset(&fun_name2_163, 0, sizeof(char*));
__right_value155 = (void*)0;
memset(&fun_name3_164, 0, sizeof(char*));
memset(&generics_fun_165, 0, sizeof(struct sGenericsFun*));
__right_value156 = (void*)0;
__right_value157 = (void*)0;
    none_generics_name_162=(char*)come_increment_ref_count(((char*)(__right_value153=get_none_generics_name(type->mClass->mName))));
    fun_name2_163=(char*)come_increment_ref_count(((char*)(__right_value154=create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer))));
    fun_name3_164=(char*)come_increment_ref_count(((char*)(__right_value155=xsprintf("%s_%s",none_generics_name_162,fun_name))));
    generics_fun_165=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_164,((void*)0));
    if(generics_fun_165) {
        if(_if_conditional1=!create_generics_fun((char*)come_increment_ref_count(((char*)(__right_value156=__builtin_string(fun_name2_163)))),generics_fun_165,type,info),        __right_value156 = come_decrement_ref_count2(__right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional1) {
            err_msg(info,"%s not found",fun_name3_164);
            __result109__ = __result_obj__ = ((char*)(__right_value157=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            none_generics_name_162 = come_decrement_ref_count2(none_generics_name_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name2_163 = come_decrement_ref_count2(fun_name2_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name3_164 = come_decrement_ref_count2(fun_name3_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __right_value157 = come_decrement_ref_count2(__right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result109__;
        }
    }
    __result110__ = __result_obj__ = fun_name2_163;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    none_generics_name_162 = come_decrement_ref_count2(none_generics_name_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_163 = come_decrement_ref_count2(fun_name2_163, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    fun_name3_164 = come_decrement_ref_count2(fun_name3_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result110__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    none_generics_name_162 = come_decrement_ref_count2(none_generics_name_162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_163 = come_decrement_ref_count2(fun_name2_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name3_164 = come_decrement_ref_count2(fun_name3_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_166;
unsigned int it_167;
struct sGenericsFun* __result105__;
struct sGenericsFun* __result106__;
struct sGenericsFun* __result107__;
struct sGenericsFun* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
        hash_166=string_get_hash_key(((char*)key))%self->size;
        it_167=hash_166;
        while((_Bool)1) {
            if(self->item_existance[it_167]) {
                if(string_equals(self->keys[it_167],key)) {
                    __result105__ = __result_obj__ = self->items[it_167];
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result105__;
                }
                it_167++;
                if(it_167>=self->size) {
                    it_167=0;
                }
                else {
                    if(it_167==hash_166) {
                        __result106__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result106__;
                    }
                }
            }
            else {
                __result107__ = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result107__;
            }
        }
        __result108__ = __result_obj__ = default_value;
        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
        return __result108__;
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

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* __right_value158;
void* __right_value159;
struct sNode* __dec_obj47;
void* __right_value160;
char* __dec_obj48;
void* __right_value170;
struct list$1tuple2$2charphsNodephph* __dec_obj54;
void* __right_value171;
struct buffer* __dec_obj55;
void* __right_value172;
struct list$1sTypeph* __dec_obj56;
struct sMethodCallNode* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value158 = (void*)0;
__right_value159 = (void*)0;
__right_value160 = (void*)0;
__right_value170 = (void*)0;
__right_value171 = (void*)0;
__right_value172 = (void*)0;
    ((struct sNodeBase*)(__right_value158=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value158,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj47=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value159=sNode_clone(obj))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj48=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(__right_value160=__builtin_string(fun_name))));
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj54=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(__right_value170=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer3(__dec_obj54,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj55=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value171=buffer_clone(method_block))));
    come_call_finalizer3(__dec_obj55,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __dec_obj56=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value172=list$1sTypephp_clone(method_generics_types))));
    come_call_finalizer3(__dec_obj56,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result117__ = __result_obj__ = self;
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result117__;
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
    if(self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

char* sMethodCallNode_kind(struct sMethodCallNode* self){
void* __result_obj__;
void* __right_value173;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value173 = (void*)0;
    __result118__ = __result_obj__ = ((char*)(__right_value173=__builtin_string("sMethodCallNode")));
    __right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result118__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_178;
struct list$1tuple2$2charphsNodephph* params_179;
struct sNode* obj_180;
struct buffer* method_block_181;
int method_block_sline_182;
struct list$1sTypeph* method_generics_types_183;
void* __right_value174;
struct list$1sTypeph* __dec_obj57;
_Bool __result119__;
void* __right_value175;
struct CVALUE* obj_value_184;
void* __right_value176;
void* __right_value177;
char* __dec_obj58;
void* __right_value178;
struct sType* obj_type_185;
struct sClass* klass_186;
_Bool calling_dynamic_method_187;
struct sType* lambda_type_188;
struct list$1tuple2$2charphsTypephph* o2_saved_189;
struct tuple2$2charphsTypeph* it_192;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* field_name_195;
struct sType* field_type_196;
void* __right_value179;
struct sType* result_type_197;
void* __right_value180;
void* __right_value181;
struct list$1CVALUEph* come_params_198;
int i_201;
struct list$1tuple2$2charphsNodephph* o2_saved_202;
struct tuple2$2charphsNodeph* it_205;
struct tuple2$2charphsNodeph* multiple_assign_var2;
char* label_208;
struct sNode* node_209;
_Bool __result133__;
void* __right_value182;
struct CVALUE* come_value_210;
void* __right_value183;
void* __right_value184;
void* __right_value185;
void* __right_value186;
void* __right_value187;
struct buffer* buf_214;
void* __right_value188;
int j_215;
struct list$1CVALUEph* o2_saved_216;
struct CVALUE* it_219;
void* __right_value189;
char* __dec_obj59;
void* __right_value190;
void* __right_value191;
struct CVALUE* come_value2_222;
void* __right_value192;
char* __dec_obj60;
void* __right_value193;
struct sType* result_type2_223;
void* __right_value194;
struct sType* __dec_obj61;
char* generics_fun_name_224;
struct sFun* fun_225;
void* __right_value195;
struct sClass* klass_226;
void* __right_value196;
char* __dec_obj62;
void* __right_value197;
void* __right_value198;
void* __right_value199;
char* __dec_obj63;
int i_232;
void* __right_value200;
char* new_fun_name_233;
void* __right_value201;
char* __dec_obj64;
struct sType* obj_array_type_237;
void* __right_value202;
char* array_method_name_238;
void* __right_value203;
char* __dec_obj65;
void* __right_value204;
void* __right_value205;
char* __dec_obj66;
_Bool __result154__;
void* __right_value206;
void* __right_value207;
char* __dec_obj67;
struct sClass* klass_239;
void* __right_value208;
char* __dec_obj68;
_Bool __result155__;
_Bool __result156__;
_Bool __result157__;
void* __right_value209;
struct sType* result_type_240;
void* __right_value210;
struct sType* result_type2_241;
void* __right_value211;
void* __right_value212;
struct list$1sTypeph* param_types_242;
struct list$1sTypeph* o2_saved_243;
struct sType* it_246;
void* __right_value216;
struct sType* it2_252;
void* __right_value217;
void* __right_value218;
void* __right_value219;
struct list$1CVALUEph* come_params_253;
int i_254;
_Bool first_param_258;
struct list$1tuple2$2charphsNodephph* o2_saved_259;
struct tuple2$2charphsNodeph* it_260;
struct tuple2$2charphsNodeph* multiple_assign_var3;
char* label_261;
struct sNode* node_262;
_Bool __result166__;
void* __right_value223;
struct CVALUE* come_value_263;
int n_264;
struct list$1charph* o2_saved_265;
char* it_268;
void* __right_value224;
void* __right_value225;
void* __right_value226;
int i_273;
struct list$1tuple2$2charphsNodephph* o2_saved_274;
struct tuple2$2charphsNodeph* it_275;
struct tuple2$2charphsNodeph* multiple_assign_var4;
char* label_276;
struct sNode* node_277;
void* __right_value227;
void* __right_value228;
void* __right_value229;
_Bool __result177__;
void* __right_value230;
struct CVALUE* come_value_281;
void* __right_value231;
void* __right_value232;
void* __right_value233;
struct sType* obj_array_type_285;
void* __right_value234;
char* array_method_name_286;
void* __right_value235;
void* __right_value236;
struct buffer* buf_287;
int i_288;
struct list$1sNodeph* o2_saved_289;
struct sNode* it_292;
void* __right_value237;
struct CVALUE* come_value_295;
void* __right_value238;
void* __right_value239;
void* __right_value240;
struct CVALUE* come_value_296;
void* __right_value241;
char* __dec_obj76;
void* __right_value242;
void* __right_value243;
struct sType* __dec_obj77;
void* __right_value247;
void* __right_value248;
void* __right_value249;
void* __right_value250;
void* __right_value251;
struct buffer* buf_300;
int i_301;
struct list$1sNodeph* o2_saved_302;
struct sNode* it_303;
void* __right_value252;
struct CVALUE* come_value_304;
void* __right_value253;
void* __right_value254;
void* __right_value255;
struct CVALUE* come_value_305;
void* __right_value256;
char* __dec_obj82;
void* __right_value257;
void* __right_value258;
struct sType* __dec_obj83;
void* __right_value259;
void* __right_value260;
void* __right_value261;
void* __right_value262;
void* __right_value263;
struct buffer* buf_306;
int i_307;
struct list$1sNodeph* o2_saved_308;
struct sNode* it_309;
void* __right_value264;
struct CVALUE* come_value_310;
void* __right_value265;
void* __right_value266;
void* __right_value267;
struct CVALUE* come_value_311;
void* __right_value268;
char* __dec_obj84;
void* __right_value269;
void* __right_value270;
struct sType* __dec_obj85;
void* __right_value271;
void* __right_value272;
void* __right_value273;
void* __right_value274;
void* __right_value275;
struct buffer* buf_312;
int i_313;
struct list$1sNodeph* o2_saved_314;
struct sNode* it_315;
void* __right_value276;
struct CVALUE* come_value_316;
void* __right_value277;
void* __right_value278;
void* __right_value279;
struct CVALUE* come_value_317;
void* __right_value280;
char* __dec_obj86;
void* __right_value281;
void* __right_value282;
struct sType* __dec_obj87;
void* __right_value283;
void* __right_value284;
void* __right_value285;
void* __right_value286;
char* default_param_318;
char* param_name_319;
struct buffer* source_320;
char* p_321;
char* head_322;
int sline_323;
void* __right_value287;
struct buffer* __dec_obj88;
void* __right_value288;
struct sNode* node_324;
_Bool __result188__;
struct buffer* __dec_obj89;
void* __right_value289;
struct CVALUE* come_value_325;
void* __right_value290;
void* __right_value291;
void* __right_value292;
_Bool __result189__;
void* __right_value293;
void* __right_value294;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value297;
struct sNode* current_stack_frame_node_326;
_Bool __result192__;
void* __right_value298;
struct CVALUE* come_value_328;
void* __right_value299;
void* __right_value300;
struct buffer* method_block2_329;
void* __right_value301;
struct sType* method_block_type_330;
void* __right_value302;
char* class_name_331;
struct sClass* current_stack_frame_struct_332;
_Bool __result193__;
void* __right_value303;
struct sType* result_type_333;
struct list$1sTypeph* param_types_334;
struct list$1charph* param_names_335;
void* __right_value304;
void* __right_value305;
struct buffer* all_alhabet_sname_336;
char* p_337;
void* __right_value306;
void* __right_value307;
void* __right_value308;
int i_338;
struct list$1sTypeph* o2_saved_339;
struct sType* it_340;
struct sType* param_type_341;
void* __right_value309;
char* param_name_342;
void* __right_value310;
void* __right_value311;
void* __right_value312;
char* param_name_343;
void* __right_value313;
void* __right_value314;
void* __right_value315;
char* param_name_344;
void* __right_value316;
void* __right_value317;
void* __right_value318;
struct buffer* source3_345;
char* p_346;
char* head_347;
int sline_348;
struct buffer* __dec_obj91;
void* __right_value319;
struct sNode* node_349;
_Bool __result194__;
void* __right_value320;
void* __right_value321;
char* method_block_name_350;
void* __right_value322;
void* __right_value323;
struct CVALUE* come_value2_351;
struct sFun* fun2_352;
_Bool __result195__;
struct sType* method_block_type2_353;
void* __right_value324;
char* __dec_obj92;
void* __right_value325;
struct sType* __dec_obj93;
struct buffer* __dec_obj94;
void* __right_value326;
void* __right_value327;
struct buffer* buf_354;
int j_355;
struct list$1CVALUEph* o2_saved_356;
struct CVALUE* it_357;
void* __right_value328;
void* __right_value329;
struct CVALUE* come_value2_358;
void* __right_value330;
char* __dec_obj95;
void* __right_value331;
struct sType* __dec_obj96;
void* __right_value332;
char* __dec_obj97;
void* __right_value333;
char* var_name_359;
void* __right_value334;
struct sType* result_type_360;
void* __right_value335;
struct sType* result_type2_361;
struct sType* result_type3_362;
struct list$1sTypeph* __dec_obj98;
_Bool __result196__;
memset(&params_179, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&obj_180, 0, sizeof(struct sNode*));
memset(&method_block_181, 0, sizeof(struct buffer*));
memset(&method_generics_types_183, 0, sizeof(struct list$1sTypeph*));
__right_value174 = (void*)0;
__right_value175 = (void*)0;
memset(&obj_value_184, 0, sizeof(struct CVALUE*));
__right_value176 = (void*)0;
__right_value177 = (void*)0;
__right_value178 = (void*)0;
memset(&obj_type_185, 0, sizeof(struct sType*));
memset(&klass_186, 0, sizeof(struct sClass*));
memset(&lambda_type_188, 0, sizeof(struct sType*));
memset(&o2_saved_189, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_192, 0, sizeof(struct tuple2$2charphsTypeph*));
__right_value179 = (void*)0;
memset(&result_type_197, 0, sizeof(struct sType*));
__right_value180 = (void*)0;
__right_value181 = (void*)0;
memset(&come_params_198, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_202, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_205, 0, sizeof(struct tuple2$2charphsNodeph*));
__right_value182 = (void*)0;
memset(&come_value_210, 0, sizeof(struct CVALUE*));
__right_value183 = (void*)0;
__right_value184 = (void*)0;
__right_value185 = (void*)0;
__right_value186 = (void*)0;
__right_value187 = (void*)0;
memset(&buf_214, 0, sizeof(struct buffer*));
__right_value188 = (void*)0;
memset(&o2_saved_216, 0, sizeof(struct list$1CVALUEph*));
memset(&it_219, 0, sizeof(struct CVALUE*));
__right_value189 = (void*)0;
__right_value190 = (void*)0;
__right_value191 = (void*)0;
memset(&come_value2_222, 0, sizeof(struct CVALUE*));
__right_value192 = (void*)0;
__right_value193 = (void*)0;
memset(&result_type2_223, 0, sizeof(struct sType*));
__right_value194 = (void*)0;
memset(&generics_fun_name_224, 0, sizeof(char*));
memset(&fun_225, 0, sizeof(struct sFun*));
__right_value195 = (void*)0;
memset(&klass_226, 0, sizeof(struct sClass*));
__right_value196 = (void*)0;
__right_value197 = (void*)0;
__right_value198 = (void*)0;
__right_value199 = (void*)0;
__right_value200 = (void*)0;
memset(&new_fun_name_233, 0, sizeof(char*));
__right_value201 = (void*)0;
memset(&obj_array_type_237, 0, sizeof(struct sType*));
__right_value202 = (void*)0;
memset(&array_method_name_238, 0, sizeof(char*));
__right_value203 = (void*)0;
__right_value204 = (void*)0;
__right_value205 = (void*)0;
__right_value206 = (void*)0;
__right_value207 = (void*)0;
memset(&klass_239, 0, sizeof(struct sClass*));
__right_value208 = (void*)0;
__right_value209 = (void*)0;
memset(&result_type_240, 0, sizeof(struct sType*));
__right_value210 = (void*)0;
memset(&result_type2_241, 0, sizeof(struct sType*));
__right_value211 = (void*)0;
__right_value212 = (void*)0;
memset(&param_types_242, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_243, 0, sizeof(struct list$1sTypeph*));
memset(&it_246, 0, sizeof(struct sType*));
__right_value216 = (void*)0;
memset(&it2_252, 0, sizeof(struct sType*));
__right_value217 = (void*)0;
__right_value218 = (void*)0;
__right_value219 = (void*)0;
memset(&come_params_253, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_259, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_260, 0, sizeof(struct tuple2$2charphsNodeph*));
__right_value223 = (void*)0;
memset(&come_value_263, 0, sizeof(struct CVALUE*));
memset(&o2_saved_265, 0, sizeof(struct list$1charph*));
__right_value224 = (void*)0;
__right_value225 = (void*)0;
__right_value226 = (void*)0;
memset(&o2_saved_274, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_275, 0, sizeof(struct tuple2$2charphsNodeph*));
__right_value227 = (void*)0;
__right_value228 = (void*)0;
__right_value229 = (void*)0;
__right_value230 = (void*)0;
memset(&come_value_281, 0, sizeof(struct CVALUE*));
__right_value231 = (void*)0;
__right_value232 = (void*)0;
__right_value233 = (void*)0;
memset(&obj_array_type_285, 0, sizeof(struct sType*));
__right_value234 = (void*)0;
memset(&array_method_name_286, 0, sizeof(char*));
__right_value235 = (void*)0;
__right_value236 = (void*)0;
memset(&buf_287, 0, sizeof(struct buffer*));
memset(&o2_saved_289, 0, sizeof(struct list$1sNodeph*));
memset(&it_292, 0, sizeof(struct sNode*));
__right_value237 = (void*)0;
memset(&come_value_295, 0, sizeof(struct CVALUE*));
__right_value238 = (void*)0;
__right_value239 = (void*)0;
__right_value240 = (void*)0;
memset(&come_value_296, 0, sizeof(struct CVALUE*));
__right_value241 = (void*)0;
__right_value242 = (void*)0;
__right_value243 = (void*)0;
__right_value247 = (void*)0;
__right_value248 = (void*)0;
__right_value249 = (void*)0;
__right_value250 = (void*)0;
__right_value251 = (void*)0;
memset(&buf_300, 0, sizeof(struct buffer*));
memset(&o2_saved_302, 0, sizeof(struct list$1sNodeph*));
memset(&it_303, 0, sizeof(struct sNode*));
__right_value252 = (void*)0;
memset(&come_value_304, 0, sizeof(struct CVALUE*));
__right_value253 = (void*)0;
__right_value254 = (void*)0;
__right_value255 = (void*)0;
memset(&come_value_305, 0, sizeof(struct CVALUE*));
__right_value256 = (void*)0;
__right_value257 = (void*)0;
__right_value258 = (void*)0;
__right_value259 = (void*)0;
__right_value260 = (void*)0;
__right_value261 = (void*)0;
__right_value262 = (void*)0;
__right_value263 = (void*)0;
memset(&buf_306, 0, sizeof(struct buffer*));
memset(&o2_saved_308, 0, sizeof(struct list$1sNodeph*));
memset(&it_309, 0, sizeof(struct sNode*));
__right_value264 = (void*)0;
memset(&come_value_310, 0, sizeof(struct CVALUE*));
__right_value265 = (void*)0;
__right_value266 = (void*)0;
__right_value267 = (void*)0;
memset(&come_value_311, 0, sizeof(struct CVALUE*));
__right_value268 = (void*)0;
__right_value269 = (void*)0;
__right_value270 = (void*)0;
__right_value271 = (void*)0;
__right_value272 = (void*)0;
__right_value273 = (void*)0;
__right_value274 = (void*)0;
__right_value275 = (void*)0;
memset(&buf_312, 0, sizeof(struct buffer*));
memset(&o2_saved_314, 0, sizeof(struct list$1sNodeph*));
memset(&it_315, 0, sizeof(struct sNode*));
__right_value276 = (void*)0;
memset(&come_value_316, 0, sizeof(struct CVALUE*));
__right_value277 = (void*)0;
__right_value278 = (void*)0;
__right_value279 = (void*)0;
memset(&come_value_317, 0, sizeof(struct CVALUE*));
__right_value280 = (void*)0;
__right_value281 = (void*)0;
__right_value282 = (void*)0;
__right_value283 = (void*)0;
__right_value284 = (void*)0;
__right_value285 = (void*)0;
__right_value286 = (void*)0;
memset(&default_param_318, 0, sizeof(char*));
memset(&source_320, 0, sizeof(struct buffer*));
__right_value287 = (void*)0;
__right_value288 = (void*)0;
memset(&node_324, 0, sizeof(struct sNode*));
__right_value289 = (void*)0;
memset(&come_value_325, 0, sizeof(struct CVALUE*));
__right_value290 = (void*)0;
__right_value291 = (void*)0;
__right_value292 = (void*)0;
__right_value293 = (void*)0;
__right_value294 = (void*)0;
__right_value297 = (void*)0;
memset(&current_stack_frame_node_326, 0, sizeof(struct sNode*));
__right_value298 = (void*)0;
memset(&come_value_328, 0, sizeof(struct CVALUE*));
__right_value299 = (void*)0;
__right_value300 = (void*)0;
memset(&method_block2_329, 0, sizeof(struct buffer*));
__right_value301 = (void*)0;
memset(&method_block_type_330, 0, sizeof(struct sType*));
__right_value302 = (void*)0;
memset(&class_name_331, 0, sizeof(char*));
memset(&current_stack_frame_struct_332, 0, sizeof(struct sClass*));
__right_value303 = (void*)0;
memset(&result_type_333, 0, sizeof(struct sType*));
memset(&param_types_334, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_335, 0, sizeof(struct list$1charph*));
__right_value304 = (void*)0;
__right_value305 = (void*)0;
memset(&all_alhabet_sname_336, 0, sizeof(struct buffer*));
__right_value306 = (void*)0;
__right_value307 = (void*)0;
__right_value308 = (void*)0;
memset(&o2_saved_339, 0, sizeof(struct list$1sTypeph*));
memset(&it_340, 0, sizeof(struct sType*));
memset(&param_type_341, 0, sizeof(struct sType*));
__right_value309 = (void*)0;
memset(&param_name_342, 0, sizeof(char*));
__right_value310 = (void*)0;
__right_value311 = (void*)0;
__right_value312 = (void*)0;
memset(&param_name_343, 0, sizeof(char*));
__right_value313 = (void*)0;
__right_value314 = (void*)0;
__right_value315 = (void*)0;
memset(&param_name_344, 0, sizeof(char*));
__right_value316 = (void*)0;
__right_value317 = (void*)0;
__right_value318 = (void*)0;
memset(&source3_345, 0, sizeof(struct buffer*));
__right_value319 = (void*)0;
memset(&node_349, 0, sizeof(struct sNode*));
__right_value320 = (void*)0;
__right_value321 = (void*)0;
memset(&method_block_name_350, 0, sizeof(char*));
__right_value322 = (void*)0;
__right_value323 = (void*)0;
memset(&come_value2_351, 0, sizeof(struct CVALUE*));
memset(&fun2_352, 0, sizeof(struct sFun*));
memset(&method_block_type2_353, 0, sizeof(struct sType*));
__right_value324 = (void*)0;
__right_value325 = (void*)0;
__right_value326 = (void*)0;
__right_value327 = (void*)0;
memset(&buf_354, 0, sizeof(struct buffer*));
memset(&o2_saved_356, 0, sizeof(struct list$1CVALUEph*));
memset(&it_357, 0, sizeof(struct CVALUE*));
__right_value328 = (void*)0;
__right_value329 = (void*)0;
memset(&come_value2_358, 0, sizeof(struct CVALUE*));
__right_value330 = (void*)0;
__right_value331 = (void*)0;
__right_value332 = (void*)0;
__right_value333 = (void*)0;
memset(&var_name_359, 0, sizeof(char*));
__right_value334 = (void*)0;
memset(&result_type_360, 0, sizeof(struct sType*));
__right_value335 = (void*)0;
memset(&result_type2_361, 0, sizeof(struct sType*));
memset(&result_type3_362, 0, sizeof(struct sType*));
    fun_name_178=self->fun_name;
    params_179=self->params;
    obj_180=self->obj;
    method_block_181=self->method_block;
    method_block_sline_182=self->method_block_sline;
    method_generics_types_183=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj57=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value174=list$1sTypephp_clone(self->method_generics_types))));
    come_call_finalizer3(__dec_obj57,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    if(!node_compile(obj_180,info)) {
        __result119__ = (_Bool)0;
        come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        return __result119__;
    }
    obj_value_184=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value175=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    if(gComeDebug&&obj_value_184->type->mPointerNum>0) {
        __dec_obj58=obj_value_184->c_value;
        obj_value_184->c_value=(char*)come_increment_ref_count(((char*)(__right_value177=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value176=make_type_name_string(obj_value_184->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),obj_value_184->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value176 = come_decrement_ref_count2(__right_value176, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    obj_type_185=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value178=sType_clone(obj_value_184->type))));
    klass_186=obj_type_185->mClass;
    calling_dynamic_method_187=(_Bool)0;
    lambda_type_188=((void*)0);
    for(    o2_saved_189=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_186->mFields)),it_192=list$1tuple2$2charphsTypephph_begin((o2_saved_189));    !list$1tuple2$2charphsTypephph_end((o2_saved_189));    it_192=list$1tuple2$2charphsTypephph_next((o2_saved_189))    ){
        multiple_assign_var1=it_192;
        field_name_195=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_196=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(string_operator_equals(field_name_195,fun_name_178)&&string_operator_equals(field_type_196->mClass->mName,"lambda")) {
            calling_dynamic_method_187=(_Bool)1;
            lambda_type_188=field_type_196;
            field_name_195 = come_decrement_ref_count2(field_name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_196,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        field_name_195 = come_decrement_ref_count2(field_name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_196,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_189,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(calling_dynamic_method_187) {
        result_type_197=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value179=sType_clone(lambda_type_188->mResultType->v1))));
        result_type_197->mStatic=(_Bool)0;
        come_params_198=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value181=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value180=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 233, "list$1CVALUEph"))))))));
        come_call_finalizer3(__right_value180,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
        i_201=0;
        for(        o2_saved_202=(params_179),it_205=list$1tuple2$2charphsNodephph_begin((o2_saved_202));        !list$1tuple2$2charphsNodephph_end((o2_saved_202));        it_205=list$1tuple2$2charphsNodephph_next((o2_saved_202))        ){
            multiple_assign_var2=it_205;
            label_208=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            node_209=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
            if(i_201==0) {
                list$1CVALUEph_push_back(come_params_198,(struct CVALUE*)come_increment_ref_count(obj_value_184));
                i_201++;
            }
            else {
                if(!node_compile(node_209,info)) {
                    __result133__ = (_Bool)0;
                    label_208 = come_decrement_ref_count2(label_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_209) { node_209 = come_decrement_ref_count2(node_209, ((struct sNode*)node_209)->finalize, ((struct sNode*)node_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(result_type_197,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_198,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result133__;
                }
                come_value_210=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value182=get_value_from_stack(-1,info))));
                check_assign_type(((char*)(__right_value185=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value183=charp_to_string(fun_name_178))),((char*)(__right_value184=int_to_string(i_201)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_188->mParamTypes,i_201-1), "20method.c", 250, 2)),come_value_210->type,come_value_210,(_Bool)0,(_Bool)1,info);
                __right_value183 = come_decrement_ref_count2(__right_value183, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value184 = come_decrement_ref_count2(__right_value184, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value185 = come_decrement_ref_count2(__right_value185, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_188->mParamTypes,i_201-1), "20method.c", 251, 3))->mHeap&&come_value_210->type->mHeap) {
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_188->mParamTypes,i_201-1), "20method.c", 253, 4)),come_value_210->type,come_value_210,info,(_Bool)1);
                }
                list$1CVALUEph_push_back(come_params_198,(struct CVALUE*)come_increment_ref_count(come_value_210));
                i_201++;
                dec_stack_ptr(1,info);
                come_call_finalizer3(come_value_210,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_208 = come_decrement_ref_count2(label_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_209) { node_209 = come_decrement_ref_count2(node_209, ((struct sNode*)node_209)->finalize, ((struct sNode*)node_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        buf_214=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value187=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value186=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 263, "buffer"))))))));
        come_call_finalizer3(__right_value186,buffer_finalize, 0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_214,((char*)(__right_value188=xsprintf("%s->%s",obj_value_184->c_value,fun_name_178))));
        __right_value188 = come_decrement_ref_count2(__right_value188, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_214,"(");
        j_215=0;
        for(        o2_saved_216=(struct list$1CVALUEph*)come_increment_ref_count((come_params_198)),it_219=list$1CVALUEph_begin((o2_saved_216));        !list$1CVALUEph_end((o2_saved_216));        it_219=list$1CVALUEph_next((o2_saved_216))        ){
            if(j_215==0) {
                __dec_obj59=it_219->c_value;
                it_219->c_value=(char*)come_increment_ref_count(((char*)(__right_value189=xsprintf("%s->_protocol_obj",it_219->c_value))));
                __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            buffer_append_str(buf_214,it_219->c_value);
            if(j_215!=list$1CVALUEph_length(come_params_198)-1) {
                buffer_append_str(buf_214,",");
            }
            j_215++;
        }
        come_call_finalizer3(o2_saved_216,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_214,")");
        come_value2_222=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value191=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value190=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 283, "CVALUE"))))))));
        come_call_finalizer3(__right_value190,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj60=come_value2_222->c_value;
        come_value2_222->c_value=(char*)come_increment_ref_count(((char*)(__right_value192=buffer_to_string(buf_214))));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type2_223=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value193=solve_generics(result_type_197,info->generics_type,info))));
        __dec_obj61=come_value2_222->type;
        come_value2_222->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value194=sType_clone(result_type2_223))));
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_222->type->mStatic=(_Bool)0;
        come_value2_222->var=((void*)0);
        if(result_type2_223->mHeap) {
            append_object_to_right_values2(come_value2_222,(struct sType*)come_increment_ref_count(result_type2_223),info);
        }
        add_come_last_code(info,"%s;\n",come_value2_222->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_222));
        come_call_finalizer3(result_type_197,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_198,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_214,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_222,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_223,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        fun_225=((void*)0);
        if(charp_operator_equals(fun_name_178,"super")) {
            fun_name_178=((char*)(__right_value195=create_non_method_name(obj_type_185,(_Bool)0,info->come_fun->mName,info,(_Bool)1)));
            __right_value195 = come_decrement_ref_count2(__right_value195, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            klass_226=obj_type_185->mClass;
            while(map$2charphsClassphp_operator_load_element(info->classes,klass_226->mParentClassName)) {
                klass_226=map$2charphsClassphp_operator_load_element(info->classes,klass_226->mParentClassName);
                __dec_obj62=generics_fun_name_224;
                generics_fun_name_224=(char*)come_increment_ref_count(((char*)(__right_value196=create_method_name_using_class(klass_226,(_Bool)0,fun_name_178,info,(_Bool)1))));
                __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_225=map$2charphsFunph_at(info->funcs,generics_fun_name_224,((void*)0));
                if(fun_225) {
                    break;
                }
            }
        }
        else {
            __dec_obj63=generics_fun_name_224;
            generics_fun_name_224=(char*)come_increment_ref_count(((char*)(__right_value199=string_to_string(((char*)(__right_value198=make_generics_function(obj_type_185,(char*)come_increment_ref_count(((char*)(__right_value197=__builtin_string(fun_name_178)))),info,(_Bool)1)))))));
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            for(            i_232=128;            i_232>=1;            i_232--            ){
                new_fun_name_233=(char*)come_increment_ref_count(((char*)(__right_value200=xsprintf("%s_v%d",generics_fun_name_224,i_232))));
                fun_225=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_233);
                if(fun_225!=((void*)0)) {
                    __dec_obj64=generics_fun_name_224;
                    generics_fun_name_224=(char*)come_increment_ref_count(((char*)(__right_value201=__builtin_string(new_fun_name_233))));
                    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_233 = come_decrement_ref_count2(new_fun_name_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_233 = come_decrement_ref_count2(new_fun_name_233, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(fun_225==((void*)0)) {
                obj_array_type_237=obj_type_185->mOriginalLoadVarType->v1;
                if(obj_array_type_237&&list$1sNodeph_length(obj_array_type_237->mArrayNum)>0) {
                    array_method_name_238=(char*)come_increment_ref_count(((char*)(__right_value202=create_method_name(obj_array_type_237,(_Bool)0,fun_name_178,info,(_Bool)0))));
                    fun_225=map$2charphsFunph_at(info->funcs,array_method_name_238,((void*)0));
                    if(fun_225) {
                        __dec_obj65=generics_fun_name_224;
                        generics_fun_name_224=(char*)come_increment_ref_count(((char*)(__right_value203=__builtin_string(array_method_name_238))));
                        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        fun_225=map$2charphsFunph_at(info->funcs,generics_fun_name_224,((void*)0));
                        if(fun_225==((void*)0)) {
                            __dec_obj66=generics_fun_name_224;
                            generics_fun_name_224=(char*)come_increment_ref_count(((char*)(__right_value205=create_method_name(obj_type_185,(_Bool)0,((char*)(__right_value204=__builtin_string(fun_name_178))),info,(_Bool)1))));
                            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                            __right_value204 = come_decrement_ref_count2(__right_value204, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            fun_225=map$2charphsFunph_at(info->funcs,generics_fun_name_224,((void*)0));
                            if(fun_225==((void*)0)) {
                                err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_224,info->come_fun->mName);
                                __result154__ = (_Bool)1;
                                array_method_name_238 = come_decrement_ref_count2(array_method_name_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result154__;
                            }
                        }
                    }
                    array_method_name_238 = come_decrement_ref_count2(array_method_name_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    fun_225=map$2charphsFunph_at(info->funcs,generics_fun_name_224,((void*)0));
                    if(fun_225==((void*)0)) {
                        __dec_obj67=generics_fun_name_224;
                        generics_fun_name_224=(char*)come_increment_ref_count(((char*)(__right_value207=create_method_name(obj_type_185,(_Bool)0,((char*)(__right_value206=__builtin_string(fun_name_178))),info,(_Bool)1))));
                        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        fun_225=map$2charphsFunph_at(info->funcs,generics_fun_name_224,((void*)0));
                        if(fun_225==((void*)0)) {
                            klass_239=obj_type_185->mClass;
                            while(map$2charphsClassphp_operator_load_element(info->classes,klass_239->mParentClassName)) {
                                klass_239=map$2charphsClassphp_operator_load_element(info->classes,klass_239->mParentClassName);
                                __dec_obj68=generics_fun_name_224;
                                generics_fun_name_224=(char*)come_increment_ref_count(((char*)(__right_value208=create_method_name_using_class(klass_239,(_Bool)0,fun_name_178,info,(_Bool)1))));
                                __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                                fun_225=map$2charphsFunph_at(info->funcs,generics_fun_name_224,((void*)0));
                                if(fun_225) {
                                    break;
                                }
                            }
                        }
                        if(fun_225==((void*)0)) {
                            err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_224,info->come_fun->mName);
                            __result155__ = (_Bool)1;
                            generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result155__;
                        }
                    }
                }
            }
        }
        if(fun_225==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_224,info->come_fun->mName);
            __result156__ = (_Bool)1;
            generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result156__;
        }
        if(list$1sTypeph_length(fun_225->mParamTypes)==0) {
            err_msg(info,"Method require function parametor");
            __result157__ = (_Bool)1;
            generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result157__;
        }
        result_type_240=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value209=sType_clone(fun_225->mResultType))));
        result_type_240->mStatic=(_Bool)0;
        result_type2_241=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value210=solve_generics(result_type_240,info->generics_type,info))));
        param_types_242=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value212=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value211=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 403, "list$1sTypeph"))))))));
        come_call_finalizer3(__right_value211,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        for(        o2_saved_243=(struct list$1sTypeph*)come_increment_ref_count((fun_225->mParamTypes)),it_246=list$1sTypeph_begin((o2_saved_243));        !list$1sTypeph_end((o2_saved_243));        it_246=list$1sTypeph_next((o2_saved_243))        ){
            if(it_246==((void*)0)) {
                list$1sTypeph_push_back(param_types_242,it_246);
            }
            else {
                it2_252=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value216=solve_generics(it_246,info->generics_type,info))));
                list$1sTypeph_push_back(param_types_242,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value217=sType_clone(it2_252)))));
                come_call_finalizer3(__right_value217,sType_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(it2_252,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(o2_saved_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_params_253=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value219=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value218=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 415, "list$1CVALUEph"))))))));
        come_call_finalizer3(__right_value218,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
        for(        i_254=0;        i_254<list$1sTypeph_length(fun_225->mParamTypes)-(method_block_181?2:0);        i_254++        ){
            list$1CVALUEph_add(come_params_253,((void*)0));
        }
        first_param_258=(_Bool)1;
        for(        o2_saved_259=(params_179),it_260=list$1tuple2$2charphsNodephph_begin((o2_saved_259));        !list$1tuple2$2charphsNodephph_end((o2_saved_259));        it_260=list$1tuple2$2charphsNodephph_next((o2_saved_259))        ){
            multiple_assign_var3=it_260;
            label_261=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            node_262=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
            if(first_param_258) {
                first_param_258=(_Bool)0;
            }
            else {
                if(label_261) {
                    if(!node_compile(node_262,info)) {
                        __result166__ = (_Bool)0;
                        label_261 = come_decrement_ref_count2(label_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_262) { node_262 = come_decrement_ref_count2(node_262, ((struct sNode*)node_262)->finalize, ((struct sNode*)node_262)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_253,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result166__;
                    }
                    come_value_263=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value223=get_value_from_stack(-1,info))));
                    dec_stack_ptr(1,info);
                    n_264=0;
                    for(                    o2_saved_265=(struct list$1charph*)come_increment_ref_count((fun_225->mParamNames)),it_268=list$1charph_begin((o2_saved_265));                    !list$1charph_end((o2_saved_265));                    it_268=list$1charph_next((o2_saved_265))                    ){
                        if(string_operator_equals(label_261,it_268)) {
                            break;
                        }
                        n_264++;
                    }
                    come_call_finalizer3(o2_saved_265,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(list$1sTypephp_operator_load_element(param_types_242,n_264)) {
                        check_assign_type(((char*)(__right_value226=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value224=charp_to_string(fun_name_178))),((char*)(__right_value225=int_to_string(n_264)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_242,n_264), "20method.c", 446, 5)),come_value_263->type,come_value_263,(_Bool)0,(_Bool)1,info);
                        __right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value225 = come_decrement_ref_count2(__right_value225, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value226 = come_decrement_ref_count2(__right_value226, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    if(list$1sTypephp_operator_load_element(param_types_242,n_264)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_242,n_264), "20method.c", 448, 6))->mHeap&&come_value_263->type->mHeap) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_242,n_264), "20method.c", 449, 7)),come_value_263->type,come_value_263,info,(_Bool)1);
                    }
                    list$1CVALUEph_replace(come_params_253,n_264,(struct CVALUE*)come_increment_ref_count(come_value_263));
                    come_call_finalizer3(come_value_263,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            label_261 = come_decrement_ref_count2(label_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_262) { node_262 = come_decrement_ref_count2(node_262, ((struct sNode*)node_262)->finalize, ((struct sNode*)node_262)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        i_273=0;
        for(        o2_saved_274=(params_179),it_275=list$1tuple2$2charphsNodephph_begin((o2_saved_274));        !list$1tuple2$2charphsNodephph_end((o2_saved_274));        it_275=list$1tuple2$2charphsNodephph_next((o2_saved_274))        ){
            multiple_assign_var4=it_275;
            label_276=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_277=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            if(i_273==0) {
                check_assign_type(((char*)(__right_value229=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value227=charp_to_string(fun_name_178))),((char*)(__right_value228=int_to_string(i_273)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_242,i_273), "20method.c", 461, 8)),obj_value_184->type,obj_value_184,(_Bool)0,(_Bool)1,info);
                __right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value228 = come_decrement_ref_count2(__right_value228, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value229 = come_decrement_ref_count2(__right_value229, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_242,i_273), "20method.c", 462, 9))->mHeap&&obj_value_184->type->mHeap) {
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_242,i_273), "20method.c", 463, 10)),obj_value_184->type,obj_value_184,info,(_Bool)1);
                }
                else {
                    if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_242,i_273), "20method.c", 465, 11))->mHeap&&!obj_value_184->type->mHeap&&!gComeGC) {
                        err_msg(info,"require heap parametor(%s)",((char*)come_null_check(list$1charphp_operator_load_element(fun_225->mParamNames,i_273), "20method.c", 466, 12)));
                        exit(2);
                    }
                }
                list$1CVALUEph_replace(come_params_253,i_273,(struct CVALUE*)come_increment_ref_count(obj_value_184));
                i_273++;
            }
            else {
                if(label_276) {
                }
                else {
                    if(!node_compile(node_277,info)) {
                        __result177__ = (_Bool)0;
                        label_276 = come_decrement_ref_count2(label_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_277) { node_277 = come_decrement_ref_count2(node_277, ((struct sNode*)node_277)->finalize, ((struct sNode*)node_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_253,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result177__;
                    }
                    come_value_281=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value230=get_value_from_stack(-1,info))));
                    dec_stack_ptr(1,info);
                    while((_Bool)1) {
                        if(list$1CVALUEphp_operator_load_element(come_params_253,i_273)==((void*)0)) {
                            break;
                        }
                        else {
                            i_273++;
                        }
                    }
                    if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_242,i_273), "20method.c", 492, 13))) {
                        check_assign_type(((char*)(__right_value233=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value231=charp_to_string(fun_name_178))),((char*)(__right_value232=int_to_string(i_273)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_242,i_273), "20method.c", 493, 14)),come_value_281->type,come_value_281,(_Bool)0,(_Bool)1,info);
                        __right_value231 = come_decrement_ref_count2(__right_value231, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value232 = come_decrement_ref_count2(__right_value232, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_242,i_273), "20method.c", 495, 15))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_242,i_273), "20method.c", 495, 16))->mHeap&&come_value_281->type->mHeap) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_242,i_273), "20method.c", 496, 17)),come_value_281->type,come_value_281,info,(_Bool)1);
                    }
                    list$1CVALUEph_replace(come_params_253,i_273,(struct CVALUE*)come_increment_ref_count(come_value_281));
                    i_273++;
                    come_call_finalizer3(come_value_281,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            label_276 = come_decrement_ref_count2(label_276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_277) { node_277 = come_decrement_ref_count2(node_277, ((struct sNode*)node_277)->finalize, ((struct sNode*)node_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        while((_Bool)1) {
            if(list$1CVALUEphp_operator_load_element(come_params_253,i_273)==((void*)0)) {
                break;
            }
            else {
                i_273++;
            }
        }
        obj_array_type_285=obj_type_185->mOriginalLoadVarType->v1;
        if(obj_array_type_285&&list$1sNodeph_length(obj_array_type_285->mArrayNum)>0) {
            array_method_name_286=(char*)come_increment_ref_count(((char*)(__right_value234=create_method_name(obj_array_type_285,(_Bool)0,fun_name_178,info,(_Bool)0))));
            if(string_operator_equals(generics_fun_name_224,array_method_name_286)) {
                if(charp_operator_equals(fun_name_178,"to_pointer")) {
                    buf_287=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value236=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value235=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 518, "buffer"))))))));
                    come_call_finalizer3(__right_value235,buffer_finalize, 0, 1, 0, 0, (void*)0);
                    i_288=0;
                    for(                    o2_saved_289=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_285->mArrayNum)),it_292=list$1sNodeph_begin((o2_saved_289));                    !list$1sNodeph_end((o2_saved_289));                    it_292=list$1sNodeph_next((o2_saved_289))                    ){
                        if(!node_compile(it_292,info)) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        come_value_295=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value237=get_value_from_stack(-1,info))));
                        dec_stack_ptr(1,info);
                        buffer_append_str(buf_287,((char*)(__right_value238=xsprintf("%s",come_value_295->c_value))));
                        __right_value238 = come_decrement_ref_count2(__right_value238, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        if(i_288!=list$1sNodeph_length(obj_array_type_285->mArrayNum)-1) {
                            buffer_append_str(buf_287,"*");
                        }
                        i_288++;
                        come_call_finalizer3(come_value_295,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_289,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_296=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value240=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value239=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 537, "CVALUE"))))))));
                    come_call_finalizer3(__right_value239,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    __dec_obj76=come_value_296->c_value;
                    come_value_296->c_value=(char*)come_increment_ref_count(((char*)(__right_value241=buffer_to_string(buf_287))));
                    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_296->var=((void*)0);
                    __dec_obj77=come_value_296->type;
                    come_value_296->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value243=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value242=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 541, "sType")))),"long",(_Bool)0,info))));
                    come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value242,sType_finalize, 0, 1, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_253,1,(struct CVALUE*)come_increment_ref_count(come_value_296));
                    list$1tuple2$2charphsNodephph_push_back(params_179,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(__right_value249=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(__right_value248=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 544, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(__right_value247=xsprintf("len")))),((void*)0))))));
                    __right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value249,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(buf_287,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_296,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(charp_operator_equals(fun_name_178,"length")) {
                        buf_300=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value251=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value250=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 547, "buffer"))))))));
                        come_call_finalizer3(__right_value250,buffer_finalize, 0, 1, 0, 0, (void*)0);
                        i_301=0;
                        for(                        o2_saved_302=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_285->mArrayNum)),it_303=list$1sNodeph_begin((o2_saved_302));                        !list$1sNodeph_end((o2_saved_302));                        it_303=list$1sNodeph_next((o2_saved_302))                        ){
                            if(!node_compile(it_303,info)) {
                                err_msg(info,"invalid array num");
                                exit(1);
                            }
                            come_value_304=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value252=get_value_from_stack(-1,info))));
                            dec_stack_ptr(1,info);
                            buffer_append_str(buf_300,((char*)(__right_value253=xsprintf("%s",come_value_304->c_value))));
                            __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            if(i_301!=list$1sNodeph_length(obj_array_type_285->mArrayNum)-1) {
                                buffer_append_str(buf_300,"*");
                            }
                            i_301++;
                            come_call_finalizer3(come_value_304,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(o2_saved_302,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_305=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value255=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value254=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 566, "CVALUE"))))))));
                        come_call_finalizer3(__right_value254,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                        __dec_obj82=come_value_305->c_value;
                        come_value_305->c_value=(char*)come_increment_ref_count(((char*)(__right_value256=buffer_to_string(buf_300))));
                        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_value_305->var=((void*)0);
                        __dec_obj83=come_value_305->type;
                        come_value_305->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value258=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value257=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 570, "sType")))),"long",(_Bool)0,info))));
                        come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value257,sType_finalize, 0, 1, 0, 0, (void*)0);
                        list$1CVALUEph_replace(come_params_253,1,(struct CVALUE*)come_increment_ref_count(come_value_305));
                        list$1tuple2$2charphsNodephph_push_back(params_179,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(__right_value261=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(__right_value260=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 573, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(__right_value259=xsprintf("len")))),((void*)0))))));
                        __right_value259 = come_decrement_ref_count2(__right_value259, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value261,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(buf_300,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_value_305,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(charp_operator_equals(fun_name_178,"to_buffer")) {
                            buf_306=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value263=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value262=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 576, "buffer"))))))));
                            come_call_finalizer3(__right_value262,buffer_finalize, 0, 1, 0, 0, (void*)0);
                            i_307=0;
                            for(                            o2_saved_308=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_285->mArrayNum)),it_309=list$1sNodeph_begin((o2_saved_308));                            !list$1sNodeph_end((o2_saved_308));                            it_309=list$1sNodeph_next((o2_saved_308))                            ){
                                if(!node_compile(it_309,info)) {
                                    err_msg(info,"invalid array num");
                                    exit(1);
                                }
                                come_value_310=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value264=get_value_from_stack(-1,info))));
                                dec_stack_ptr(1,info);
                                buffer_append_str(buf_306,((char*)(__right_value265=xsprintf("%s",come_value_310->c_value))));
                                __right_value265 = come_decrement_ref_count2(__right_value265, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                if(i_307!=list$1sNodeph_length(obj_array_type_285->mArrayNum)-1) {
                                    buffer_append_str(buf_306,"*");
                                }
                                i_307++;
                                come_call_finalizer3(come_value_310,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            come_call_finalizer3(o2_saved_308,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_value_311=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value267=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value266=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 595, "CVALUE"))))))));
                            come_call_finalizer3(__right_value266,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            __dec_obj84=come_value_311->c_value;
                            come_value_311->c_value=(char*)come_increment_ref_count(((char*)(__right_value268=buffer_to_string(buf_306))));
                            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                            come_value_311->var=((void*)0);
                            __dec_obj85=come_value_311->type;
                            come_value_311->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value270=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value269=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 599, "sType")))),"long",(_Bool)0,info))));
                            come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(__right_value269,sType_finalize, 0, 1, 0, 0, (void*)0);
                            list$1CVALUEph_replace(come_params_253,1,(struct CVALUE*)come_increment_ref_count(come_value_311));
                            list$1tuple2$2charphsNodephph_push_back(params_179,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(__right_value273=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(__right_value272=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 602, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(__right_value271=xsprintf("len")))),((void*)0))))));
                            __right_value271 = come_decrement_ref_count2(__right_value271, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value272 = come_decrement_ref_count2(__right_value272, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            come_call_finalizer3(__right_value273,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, (void*)0);
                            come_call_finalizer3(buf_306,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_value_311,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(charp_operator_equals(fun_name_178,"to_list")) {
                                buf_312=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value275=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value274=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 605, "buffer"))))))));
                                come_call_finalizer3(__right_value274,buffer_finalize, 0, 1, 0, 0, (void*)0);
                                i_313=0;
                                for(                                o2_saved_314=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_285->mArrayNum)),it_315=list$1sNodeph_begin((o2_saved_314));                                !list$1sNodeph_end((o2_saved_314));                                it_315=list$1sNodeph_next((o2_saved_314))                                ){
                                    if(!node_compile(it_315,info)) {
                                        err_msg(info,"invalid array num");
                                        exit(1);
                                    }
                                    come_value_316=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value276=get_value_from_stack(-1,info))));
                                    dec_stack_ptr(1,info);
                                    buffer_append_str(buf_312,((char*)(__right_value277=xsprintf("%s",come_value_316->c_value))));
                                    __right_value277 = come_decrement_ref_count2(__right_value277, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    if(i_313!=list$1sNodeph_length(obj_array_type_285->mArrayNum)-1) {
                                        buffer_append_str(buf_312,"*");
                                    }
                                    i_313++;
                                    come_call_finalizer3(come_value_316,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                come_call_finalizer3(o2_saved_314,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_value_317=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value279=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value278=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 624, "CVALUE"))))))));
                                come_call_finalizer3(__right_value278,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                                __dec_obj86=come_value_317->c_value;
                                come_value_317->c_value=(char*)come_increment_ref_count(((char*)(__right_value280=buffer_to_string(buf_312))));
                                __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                                come_value_317->var=((void*)0);
                                __dec_obj87=come_value_317->type;
                                come_value_317->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value282=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value281=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 628, "sType")))),"long",(_Bool)0,info))));
                                come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(__right_value281,sType_finalize, 0, 1, 0, 0, (void*)0);
                                list$1CVALUEph_replace(come_params_253,1,(struct CVALUE*)come_increment_ref_count(come_value_317));
                                list$1tuple2$2charphsNodephph_push_back(params_179,(struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(__right_value285=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count(((struct tuple2$2charphvoidp*)(__right_value284=(struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 631, "struct tuple2$2charphvoidp")))),(char*)come_increment_ref_count(((char*)(__right_value283=xsprintf("len")))),((void*)0))))));
                                __right_value283 = come_decrement_ref_count2(__right_value283, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value284 = come_decrement_ref_count2(__right_value284, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                come_call_finalizer3(__right_value285,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, (void*)0);
                                come_call_finalizer3(buf_312,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_value_317,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                }
            }
            array_method_name_286 = come_decrement_ref_count2(array_method_name_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(list$1tuple2$2charphsNodephph_length(params_179)<list$1sTypeph_length(fun_225->mParamTypes)+(method_block_181?-2:0)) {
            for(            ;            i_273<list$1sTypeph_length(fun_225->mParamTypes)+(method_block_181?-2:0);            i_273++            ){
                default_param_318=(char*)come_increment_ref_count(((char*)(__right_value286=string_clone(list$1charphp_operator_load_element(fun_225->mParamDefaultParametors,i_273)))));
                param_name_319=((char*)come_null_check(list$1charphp_operator_load_element(fun_225->mParamNames,i_273), "20method.c", 640, 18));
                if(default_param_318&&string_operator_not_equals(default_param_318,"")&&list$1CVALUEphp_operator_load_element(come_params_253,i_273)==((void*)0)) {
                    source_320=(struct buffer*)come_increment_ref_count(info->source);
                    p_321=info->p;
                    head_322=info->head;
                    sline_323=info->sline;
                    __dec_obj88=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value287=string_to_buffer(default_param_318))));
                    come_call_finalizer3(__dec_obj88,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_324=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value288=expression_v13(info))));
                    if(!node_compile(node_324,info)) {
                        __result188__ = (_Bool)0;
                        come_call_finalizer3(source_320,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_324) { node_324 = come_decrement_ref_count2(node_324, ((struct sNode*)node_324)->finalize, ((struct sNode*)node_324)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_318 = come_decrement_ref_count2(default_param_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_253,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result188__;
                    }
                    __dec_obj89=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_320);
                    come_call_finalizer3(__dec_obj89,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=p_321;
                    info->head=head_322;
                    info->sline=sline_323;
                    come_value_325=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value289=get_value_from_stack(-1,info))));
                    if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_242,i_273), "20method.c", 664, 19))) {
                        check_assign_type(((char*)(__right_value292=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value290=charp_to_string(fun_name_178))),((char*)(__right_value291=int_to_string(i_273)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_242,i_273), "20method.c", 665, 20)),come_value_325->type,come_value_325,(_Bool)0,(_Bool)1,info);
                        __right_value290 = come_decrement_ref_count2(__right_value290, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value291 = come_decrement_ref_count2(__right_value291, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value292 = come_decrement_ref_count2(__right_value292, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_242,i_273), "20method.c", 667, 21))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_242,i_273), "20method.c", 667, 22))->mHeap&&come_value_325->type->mHeap) {
                        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_242,i_273), "20method.c", 668, 23)),come_value_325->type,come_value_325,info,(_Bool)1);
                    }
                    list$1CVALUEph_replace(come_params_253,i_273,(struct CVALUE*)come_increment_ref_count(come_value_325));
                    dec_stack_ptr(1,info);
                    come_call_finalizer3(source_320,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_324) { node_324 = come_decrement_ref_count2(node_324, ((struct sNode*)node_324)->finalize, ((struct sNode*)node_324)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_325,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(list$1CVALUEphp_operator_load_element(come_params_253,i_273)==((void*)0)) {
                        err_msg(info,"require parametor(%s) %d",fun_225->mName,i_273);
                        __result189__ = (_Bool)0;
                        default_param_318 = come_decrement_ref_count2(default_param_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_253,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result189__;
                    }
                }
                default_param_318 = come_decrement_ref_count2(default_param_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(method_block_181) {
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 683, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sCurrentNode*)(__right_value294=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value293=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 683, "sCurrentNode")))),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sCurrentNode_finalize;
            _inf_value1->clone=(void*)sCurrentNode_clone;
            _inf_value1->compile=(void*)sCurrentNode_compile;
            _inf_value1->sline=(void*)sCurrentNode_sline;
            _inf_value1->sname=(void*)sCurrentNode_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sCurrentNode_kind;
            current_stack_frame_node_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value297=_inf_value1)));
            come_call_finalizer3(__right_value293,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value294,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
            if(!node_compile(current_stack_frame_node_326,info)) {
                __result192__ = (_Bool)0;
                if(current_stack_frame_node_326) { current_stack_frame_node_326 = come_decrement_ref_count2(current_stack_frame_node_326, ((struct sNode*)current_stack_frame_node_326)->finalize, ((struct sNode*)current_stack_frame_node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_253,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result192__;
            }
            come_value_328=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value298=get_value_from_stack(-1,info))));
            list$1CVALUEph_push_back(come_params_253,(struct CVALUE*)come_increment_ref_count(come_value_328));
            dec_stack_ptr(1,info);
            method_block2_329=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value300=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value299=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 693, "buffer"))))))));
            come_call_finalizer3(__right_value299,buffer_finalize, 0, 1, 0, 0, (void*)0);
            method_block_type_330=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value301=sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_225->mParamTypes,-1), "20method.c", 694, 24))))));
            class_name_331=(char*)come_increment_ref_count(((char*)(__right_value302=xsprintf("__current_stack%d__",info->current_stack_num))));
            ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(method_block_type_330->mParamTypes,0), "20method.c", 698, 25))->mClass=map$2charphsClassphp_operator_load_element(info->classes,class_name_331);
            current_stack_frame_struct_332=info->current_stack_frame_struct;
            info->current_stack_frame_struct=map$2charphsClassphp_operator_load_element(info->classes,class_name_331);
            info->num_method_block++;
            if(string_operator_not_equals(method_block_type_330->mClass->mName,"lambda")) {
                err_msg(info,"This function does not have method block(%s)",fun_name_178);
                __result193__ = (_Bool)0;
                if(current_stack_frame_node_326) { current_stack_frame_node_326 = come_decrement_ref_count2(current_stack_frame_node_326, ((struct sNode*)current_stack_frame_node_326)->finalize, ((struct sNode*)current_stack_frame_node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_328,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_329,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
                class_name_331 = come_decrement_ref_count2(class_name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_253,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result193__;
            }
            result_type_333=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value303=sType_clone(method_block_type_330->mResultType->v1))));
            result_type_333->mStatic=(_Bool)0;
            param_types_334=method_block_type_330->mParamTypes;
            param_names_335=method_block_type_330->mParamNames;
            all_alhabet_sname_336=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value305=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value304=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 714, "buffer"))))))));
            come_call_finalizer3(__right_value304,buffer_finalize, 0, 1, 0, 0, (void*)0);
            {
                p_337=info->sname;
                while(*p_337) {
                    if(xisalnum(*p_337)) {
                        buffer_append_char(all_alhabet_sname_336,*p_337++);
                    }
                    else {
                        p_337++;
                    }
                }
            }
            buffer_append_str(method_block2_329,((char*)(__right_value308=xsprintf("%s method_block%d_%s(",((char*)(__right_value306=make_type_name_string(result_type_333,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value307=buffer_to_string(all_alhabet_sname_336)))))));
            __right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            i_338=0;
            for(            o2_saved_339=(param_types_334),it_340=list$1sTypeph_begin((o2_saved_339));            !list$1sTypeph_end((o2_saved_339));            it_340=list$1sTypeph_next((o2_saved_339))            ){
                param_type_341=it_340;
                if(i_338==0) {
                    param_name_342=(char*)come_increment_ref_count(((char*)(__right_value309=xsprintf("parent"))));
                    buffer_append_str(method_block2_329,((char*)(__right_value311=xsprintf("%s",((char*)(__right_value310=make_define_var(param_type_341,param_name_342,(_Bool)0,info)))))));
                    __right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    param_name_342 = come_decrement_ref_count2(param_name_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(i_338==1) {
                        param_name_343=(char*)come_increment_ref_count(((char*)(__right_value312=xsprintf("it"))));
                        buffer_append_str(method_block2_329,((char*)(__right_value314=xsprintf("%s",((char*)(__right_value313=make_define_var(param_type_341,param_name_343,(_Bool)0,info)))))));
                        __right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        param_name_343 = come_decrement_ref_count2(param_name_343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        param_name_344=(char*)come_increment_ref_count(((char*)(__right_value315=xsprintf("it%d",i_338))));
                        buffer_append_str(method_block2_329,((char*)(__right_value317=xsprintf("%s",((char*)(__right_value316=make_define_var(param_type_341,param_name_344,(_Bool)0,info)))))));
                        __right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        param_name_344 = come_decrement_ref_count2(param_name_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(i_338!=list$1sTypeph_length(param_types_334)-1) {
                    buffer_append_str(method_block2_329,",");
                }
                i_338++;
            }
            buffer_append_str(method_block2_329,")\n");
            buffer_append_str(method_block2_329,((char*)(__right_value318=buffer_to_string(method_block_181))));
            __right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            source3_345=(struct buffer*)come_increment_ref_count(info->source);
            p_346=info->p;
            head_347=info->head;
            sline_348=info->sline;
            __dec_obj91=info->source;
            info->source=(struct buffer*)come_increment_ref_count(method_block2_329);
            come_call_finalizer3(__dec_obj91,buffer_finalize, 0, 0, 0, 0, (void*)0);
            info->p=info->source->buf;
            info->head=info->source->buf;
            info->sline=method_block_sline_182;
            node_349=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value319=parse_function(info))));
            if(!node_compile(node_349,info)) {
                __result194__ = (_Bool)0;
                if(current_stack_frame_node_326) { current_stack_frame_node_326 = come_decrement_ref_count2(current_stack_frame_node_326, ((struct sNode*)current_stack_frame_node_326)->finalize, ((struct sNode*)current_stack_frame_node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_328,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_329,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
                class_name_331 = come_decrement_ref_count2(class_name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_333,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(all_alhabet_sname_336,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(source3_345,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
                generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_253,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result194__;
            }
            method_block_name_350=(char*)come_increment_ref_count(((char*)(__right_value321=xsprintf("method_block%d_%s",info->num_method_block,((char*)(__right_value320=buffer_to_string(all_alhabet_sname_336)))))));
            __right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_value2_351=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value323=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value322=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 778, "CVALUE"))))))));
            come_call_finalizer3(__right_value322,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            fun2_352=map$2charphsFunph_at(info->funcs,method_block_name_350,((void*)0));
            if(fun2_352==((void*)0)) {
                err_msg(info,"method block function not found(%s)",method_block_name_350);
                __result195__ = (_Bool)1;
                if(current_stack_frame_node_326) { current_stack_frame_node_326 = come_decrement_ref_count2(current_stack_frame_node_326, ((struct sNode*)current_stack_frame_node_326)->finalize, ((struct sNode*)current_stack_frame_node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_328,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block2_329,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
                class_name_331 = come_decrement_ref_count2(class_name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_333,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(all_alhabet_sname_336,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(source3_345,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
                method_block_name_350 = come_decrement_ref_count2(method_block_name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value2_351,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_253,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result195__;
            }
            method_block_type2_353=fun2_352->mLambdaType;
            __dec_obj92=come_value2_351->c_value;
            come_value2_351->c_value=(char*)come_increment_ref_count(((char*)(__right_value324=xsprintf("(void*)%s",method_block_name_350))));
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj93=come_value2_351->type;
            come_value2_351->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value325=sType_clone(method_block_type2_353))));
            come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value2_351->var=((void*)0);
            list$1CVALUEph_push_back(come_params_253,(struct CVALUE*)come_increment_ref_count(come_value2_351));
            __dec_obj94=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_345);
            come_call_finalizer3(__dec_obj94,buffer_finalize, 0, 0, 0, 0, (void*)0);
            info->p=p_346;
            info->head=head_347;
            info->sline=sline_348;
            info->current_stack_frame_struct=current_stack_frame_struct_332;
            if(current_stack_frame_node_326) { current_stack_frame_node_326 = come_decrement_ref_count2(current_stack_frame_node_326, ((struct sNode*)current_stack_frame_node_326)->finalize, ((struct sNode*)current_stack_frame_node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_328,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_329,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_331 = come_decrement_ref_count2(class_name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_333,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_336,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_345,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_349) { node_349 = come_decrement_ref_count2(node_349, ((struct sNode*)node_349)->finalize, ((struct sNode*)node_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
            method_block_name_350 = come_decrement_ref_count2(method_block_name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value2_351,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_354=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value327=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value326=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 803, "buffer"))))))));
        come_call_finalizer3(__right_value326,buffer_finalize, 0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_354,generics_fun_name_224);
        buffer_append_str(buf_354,"(");
        j_355=0;
        for(        o2_saved_356=(struct list$1CVALUEph*)come_increment_ref_count((come_params_253)),it_357=list$1CVALUEph_begin((o2_saved_356));        !list$1CVALUEph_end((o2_saved_356));        it_357=list$1CVALUEph_next((o2_saved_356))        ){
            buffer_append_str(buf_354,it_357->c_value);
            if(j_355!=list$1CVALUEph_length(come_params_253)-1) {
                buffer_append_str(buf_354,",");
            }
            j_355++;
        }
        come_call_finalizer3(o2_saved_356,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_354,")");
        come_value2_358=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value329=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value328=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 822, "CVALUE"))))))));
        come_call_finalizer3(__right_value328,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj95=come_value2_358->c_value;
        come_value2_358->c_value=(char*)come_increment_ref_count(((char*)(__right_value330=buffer_to_string(buf_354))));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj96=come_value2_358->type;
        come_value2_358->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value331=sType_clone(result_type2_241))));
        come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_358->type->mStatic=(_Bool)0;
        come_value2_358->var=((void*)0);
        if(result_type2_241->mHeap) {
            append_object_to_right_values2(come_value2_358,(struct sType*)come_increment_ref_count(result_type2_241),info);
        }
        __dec_obj97=come_value2_358->c_value;
        come_value2_358->c_value=(char*)come_increment_ref_count(((char*)(__right_value332=append_stackframe(come_value2_358->c_value,come_value2_358->type,info))));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s;\n",come_value2_358->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_358));
        if(method_block_181) {
            var_name_359=(char*)come_increment_ref_count(((char*)(__right_value333=xsprintf("__current_stack%d__",info->num_current_stack))));
            result_type_360=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value334=sType_clone(info->come_fun->mResultType))));
            result_type2_361=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value335=solve_generics(result_type_360,info->generics_type,info))));
            result_type3_362=result_type2_361->mNoSolvedGenericsType->v1;
            if(result_type2_361->mNoSolvedGenericsType->v1) {
                result_type3_362=result_type2_361->mNoSolvedGenericsType->v1;
            }
            else {
                result_type3_362=result_type2_361;
            }
            var_name_359 = come_decrement_ref_count2(var_name_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_360,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_361,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        generics_fun_name_224 = come_decrement_ref_count2(generics_fun_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_241,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_242,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_253,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_354,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_358,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(info->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj98=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_183);
    come_call_finalizer3(__dec_obj98,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result196__ = (_Bool)1;
    come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result196__;
    come_call_finalizer3(method_generics_types_183,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result111__;
void* __right_value161;
void* __right_value162;
struct list$1tuple2$2charphsNodephph* result_170;
struct list_item$1tuple2$2charphsNodephph* it_171;
void* __right_value169;
struct list$1tuple2$2charphsNodephph* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value161 = (void*)0;
__right_value162 = (void*)0;
memset(&result_170, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_171, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
__right_value169 = (void*)0;
        if(self==((void*)0)) {
            __result111__ = __result_obj__ = ((void*)0);
            return __result111__;
        }
        result_170=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(__right_value162=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(__right_value161=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 135, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer3(__right_value161,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        it_171=self->head;
        while(it_171!=((void*)0)) {
            list$1tuple2$2charphsNodephph_add(result_170,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(__right_value169=tuple2$2charphsNodephp_clone(it_171->item)))));
            come_call_finalizer3(__right_value169,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            it_171=it_171->next;
        }
        __result116__ = __result_obj__ = result_170;
        come_call_finalizer3(result_170,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result116__;
        come_call_finalizer3(result_170,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result112__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result112__;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_168;
struct list_item$1tuple2$2charphsNodephph* prev_it_169;
memset(&it_168, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_169, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_168=self->head;
                while(it_168!=((void*)0)) {
                    prev_it_169=it_168;
                    it_168=it_168->next;
                    come_call_finalizer3(prev_it_169,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
void* __right_value163;
struct list_item$1tuple2$2charphsNodephph* litem_172;
struct tuple2$2charphsNodeph* __dec_obj49;
void* __right_value164;
struct list_item$1tuple2$2charphsNodephph* litem_173;
struct tuple2$2charphsNodeph* __dec_obj50;
void* __right_value165;
struct list_item$1tuple2$2charphsNodephph* litem_174;
struct tuple2$2charphsNodeph* __dec_obj51;
struct list$1tuple2$2charphsNodephph* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value163 = (void*)0;
memset(&litem_172, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
__right_value164 = (void*)0;
memset(&litem_173, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
__right_value165 = (void*)0;
memset(&litem_174, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(self->len==0) {
                    litem_172=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value163=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 149, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(__right_value163,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_172->prev=((void*)0);
                    litem_172->next=((void*)0);
                    __dec_obj49=litem_172->item;
                    litem_172->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj49,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_172;
                    self->head=litem_172;
                }
                else {
                    if(self->len==1) {
                        litem_173=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value164=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 159, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(__right_value164,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_173->prev=self->head;
                        litem_173->next=((void*)0);
                        __dec_obj50=litem_173->item;
                        litem_173->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj50,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_173;
                        self->head->next=litem_173;
                    }
                    else {
                        litem_174=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value165=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 169, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(__right_value165,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_174->prev=self->tail;
                        litem_174->next=((void*)0);
                        __dec_obj51=litem_174->item;
                        litem_174->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj51,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_174;
                        self->tail=litem_174;
                    }
                }
                self->len++;
                __result113__ = __result_obj__ = self;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result113__;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
                            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                                if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__;
struct tuple2$2charphsNodeph* __result114__;
void* __right_value166;
struct tuple2$2charphsNodeph* result_175;
void* __right_value167;
char* __dec_obj52;
void* __right_value168;
struct sNode* __dec_obj53;
struct tuple2$2charphsNodeph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value166 = (void*)0;
memset(&result_175, 0, sizeof(struct tuple2$2charphsNodeph*));
__right_value167 = (void*)0;
__right_value168 = (void*)0;
                if(self==(void*)0) {
                    __result114__ = __result_obj__ = (void*)0;
                    return __result114__;
                }
                result_175=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(__right_value166=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj52=result_175->v1;
                    result_175->v1=(char*)come_increment_ref_count(((char*)(__right_value167=string_clone(self->v1))));
                    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    __dec_obj53=result_175->v2;
                    result_175->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value168=sNode_clone(self->v2))));
                    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); }
                }
                __result115__ = __result_obj__ = result_175;
                come_call_finalizer3(result_175,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result115__;
                come_call_finalizer3(result_175,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(self!=((void*)0)&&self->v2!=((void*)0)) {
                        if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_176;
struct list_item$1tuple2$2charphsNodephph* prev_it_177;
memset(&it_176, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_177, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
        it_176=self->head;
        while(it_176!=((void*)0)) {
            prev_it_177=it_176;
            it_176=it_176->next;
            come_call_finalizer3(prev_it_177,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct tuple2$2charphsTypeph* result_190;
struct tuple2$2charphsTypeph* __result120__;
struct tuple2$2charphsTypeph* __result121__;
struct tuple2$2charphsTypeph* result_191;
struct tuple2$2charphsTypeph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_190, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_191, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(self==((void*)0)) {
            memset(&result_190,0,sizeof(struct tuple2$2charphsTypeph*));
            __result120__ = __result_obj__ = result_190;
            return __result120__;
        }
        self->it=self->head;
        if(self->it) {
            __result121__ = __result_obj__ = self->it->item;
            return __result121__;
        }
        memset(&result_191,0,sizeof(struct tuple2$2charphsTypeph*));
        __result122__ = __result_obj__ = result_191;
        return __result122__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
        return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct tuple2$2charphsTypeph* result_193;
struct tuple2$2charphsTypeph* __result123__;
struct tuple2$2charphsTypeph* __result124__;
struct tuple2$2charphsTypeph* result_194;
struct tuple2$2charphsTypeph* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_193, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_194, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(self==((void*)0)||self->it==((void*)0)) {
            memset(&result_193,0,sizeof(struct tuple2$2charphsTypeph*));
            __result123__ = __result_obj__ = result_193;
            return __result123__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result124__ = __result_obj__ = self->it->item;
            return __result124__;
        }
        memset(&result_194,0,sizeof(struct tuple2$2charphsTypeph*));
        __result125__ = __result_obj__ = result_194;
        return __result125__;
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
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_199;
struct list_item$1CVALUEph* prev_it_200;
memset(&it_199, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_200, 0, sizeof(struct list_item$1CVALUEph*));
                it_199=self->head;
                while(it_199!=((void*)0)) {
                    prev_it_200=it_199;
                    it_199=it_199->next;
                    come_call_finalizer3(prev_it_200,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct tuple2$2charphsNodeph* result_203;
struct tuple2$2charphsNodeph* __result127__;
struct tuple2$2charphsNodeph* __result128__;
struct tuple2$2charphsNodeph* result_204;
struct tuple2$2charphsNodeph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_203, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_204, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(self==((void*)0)) {
                memset(&result_203,0,sizeof(struct tuple2$2charphsNodeph*));
                __result127__ = __result_obj__ = result_203;
                return __result127__;
            }
            self->it=self->head;
            if(self->it) {
                __result128__ = __result_obj__ = self->it->item;
                return __result128__;
            }
            memset(&result_204,0,sizeof(struct tuple2$2charphsNodeph*));
            __result129__ = __result_obj__ = result_204;
            return __result129__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
            return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct tuple2$2charphsNodeph* result_206;
struct tuple2$2charphsNodeph* __result130__;
struct tuple2$2charphsNodeph* __result131__;
struct tuple2$2charphsNodeph* result_207;
struct tuple2$2charphsNodeph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_206, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_207, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_206,0,sizeof(struct tuple2$2charphsNodeph*));
                __result130__ = __result_obj__ = result_206;
                return __result130__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result131__ = __result_obj__ = self->it->item;
                return __result131__;
            }
            memset(&result_207,0,sizeof(struct tuple2$2charphsNodeph*));
            __result132__ = __result_obj__ = result_207;
            return __result132__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
struct list_item$1sTypeph* it_211;
int i_212;
struct sType* __result134__;
struct sType* default_value_213;
struct sType* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_211, 0, sizeof(struct list_item$1sTypeph*));
memset(&default_value_213, 0, sizeof(struct sType*));
                    if(position<0) {
                        position+=self->len;
                    }
                    it_211=self->head;
                    i_212=0;
                    while(it_211!=((void*)0)) {
                        if(position==i_212) {
                            __result134__ = __result_obj__ = it_211->item;
                            return __result134__;
                        }
                        it_211=it_211->next;
                        i_212++;
                    }
                    memset(&default_value_213,0,sizeof(struct sType*));
                    __result135__ = __result_obj__ = default_value_213;
                    come_call_finalizer3(default_value_213,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result135__;
                    come_call_finalizer3(default_value_213,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
struct CVALUE* result_217;
struct CVALUE* __result136__;
struct CVALUE* __result137__;
struct CVALUE* result_218;
struct CVALUE* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_217, 0, sizeof(struct CVALUE*));
memset(&result_218, 0, sizeof(struct CVALUE*));
            if(self==((void*)0)) {
                memset(&result_217,0,sizeof(struct CVALUE*));
                __result136__ = __result_obj__ = result_217;
                return __result136__;
            }
            self->it=self->head;
            if(self->it) {
                __result137__ = __result_obj__ = self->it->item;
                return __result137__;
            }
            memset(&result_218,0,sizeof(struct CVALUE*));
            __result138__ = __result_obj__ = result_218;
            return __result138__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
            return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
struct CVALUE* result_220;
struct CVALUE* __result139__;
struct CVALUE* __result140__;
struct CVALUE* result_221;
struct CVALUE* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_220, 0, sizeof(struct CVALUE*));
memset(&result_221, 0, sizeof(struct CVALUE*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_220,0,sizeof(struct CVALUE*));
                __result139__ = __result_obj__ = result_220;
                return __result139__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result140__ = __result_obj__ = self->it->item;
                return __result140__;
            }
            memset(&result_221,0,sizeof(struct CVALUE*));
            __result141__ = __result_obj__ = result_221;
            return __result141__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
                if(self==((void*)0)) {
                    return 0;
                }
                return self->len;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_227;
unsigned int hash_228;
unsigned int it_229;
struct sClass* __result142__;
struct sClass* __result143__;
struct sClass* __result144__;
struct sClass* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_227, 0, sizeof(struct sClass*));
                memset(&default_value_227,0,sizeof(struct sClass*));
                hash_228=string_get_hash_key(((char*)key))%self->size;
                it_229=hash_228;
                while((_Bool)1) {
                    if(self->item_existance[it_229]) {
                        if(string_equals(self->keys[it_229],key)) {
                            __result142__ = __result_obj__ = self->items[it_229];
                            come_call_finalizer3(default_value_227,sClass_finalize, 0, 0, 0, 0, (void*)0);
                            return __result142__;
                        }
                        it_229++;
                        if(it_229>=self->size) {
                            it_229=0;
                        }
                        else {
                            if(it_229==hash_228) {
                                __result143__ = __result_obj__ = default_value_227;
                                come_call_finalizer3(default_value_227,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                return __result143__;
                            }
                        }
                    }
                    else {
                        __result144__ = __result_obj__ = default_value_227;
                        come_call_finalizer3(default_value_227,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result144__;
                    }
                }
                __result145__ = __result_obj__ = default_value_227;
                come_call_finalizer3(default_value_227,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result145__;
                come_call_finalizer3(default_value_227,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_230;
unsigned int it_231;
struct sFun* __result146__;
struct sFun* __result147__;
struct sFun* __result148__;
struct sFun* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
                    hash_230=string_get_hash_key(((char*)key))%self->size;
                    it_231=hash_230;
                    while((_Bool)1) {
                        if(self->item_existance[it_231]) {
                            if(string_equals(self->keys[it_231],key)) {
                                __result146__ = __result_obj__ = self->items[it_231];
                                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result146__;
                            }
                            it_231++;
                            if(it_231>=self->size) {
                                it_231=0;
                            }
                            else {
                                if(it_231==hash_230) {
                                    __result147__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result147__;
                                }
                            }
                        }
                        else {
                            __result148__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result148__;
                        }
                    }
                    __result149__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result149__;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
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

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_234;
unsigned int hash_235;
unsigned int it_236;
struct sFun* __result150__;
struct sFun* __result151__;
struct sFun* __result152__;
struct sFun* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_234, 0, sizeof(struct sFun*));
                    memset(&default_value_234,0,sizeof(struct sFun*));
                    hash_235=string_get_hash_key(((char*)key))%self->size;
                    it_236=hash_235;
                    while((_Bool)1) {
                        if(self->item_existance[it_236]) {
                            if(string_equals(self->keys[it_236],key)) {
                                __result150__ = __result_obj__ = self->items[it_236];
                                come_call_finalizer3(default_value_234,sFun_finalize, 0, 0, 0, 0, (void*)0);
                                return __result150__;
                            }
                            it_236++;
                            if(it_236>=self->size) {
                                it_236=0;
                            }
                            else {
                                if(it_236==hash_235) {
                                    __result151__ = __result_obj__ = default_value_234;
                                    come_call_finalizer3(default_value_234,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result151__;
                                }
                            }
                        }
                        else {
                            __result152__ = __result_obj__ = default_value_234;
                            come_call_finalizer3(default_value_234,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result152__;
                        }
                    }
                    __result153__ = __result_obj__ = default_value_234;
                    come_call_finalizer3(default_value_234,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result153__;
                    come_call_finalizer3(default_value_234,sFun_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
            if(self==((void*)0)) {
                return 0;
            }
            return self->len;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
struct sType* result_244;
struct sType* __result158__;
struct sType* __result159__;
struct sType* result_245;
struct sType* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_244, 0, sizeof(struct sType*));
memset(&result_245, 0, sizeof(struct sType*));
            if(self==((void*)0)) {
                memset(&result_244,0,sizeof(struct sType*));
                __result158__ = __result_obj__ = result_244;
                return __result158__;
            }
            self->it=self->head;
            if(self->it) {
                __result159__ = __result_obj__ = self->it->item;
                return __result159__;
            }
            memset(&result_245,0,sizeof(struct sType*));
            __result160__ = __result_obj__ = result_245;
            return __result160__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
            return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
struct sType* result_247;
struct sType* __result161__;
struct sType* __result162__;
struct sType* result_248;
struct sType* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_247, 0, sizeof(struct sType*));
memset(&result_248, 0, sizeof(struct sType*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_247,0,sizeof(struct sType*));
                __result161__ = __result_obj__ = result_247;
                return __result161__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result162__ = __result_obj__ = self->it->item;
                return __result162__;
            }
            memset(&result_248,0,sizeof(struct sType*));
            __result163__ = __result_obj__ = result_248;
            return __result163__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* __right_value213;
struct list_item$1sTypeph* litem_249;
struct sType* __dec_obj69;
void* __right_value214;
struct list_item$1sTypeph* litem_250;
struct sType* __dec_obj70;
void* __right_value215;
struct list_item$1sTypeph* litem_251;
struct sType* __dec_obj71;
struct list$1sTypeph* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value213 = (void*)0;
memset(&litem_249, 0, sizeof(struct list_item$1sTypeph*));
__right_value214 = (void*)0;
memset(&litem_250, 0, sizeof(struct list_item$1sTypeph*));
__right_value215 = (void*)0;
memset(&litem_251, 0, sizeof(struct list_item$1sTypeph*));
                    if(self->len==0) {
                        litem_249=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value213=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 219, "list_item$1sTypeph"))));
                        come_call_finalizer3(__right_value213,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_249->prev=((void*)0);
                        litem_249->next=((void*)0);
                        __dec_obj69=litem_249->item;
                        litem_249->item=(struct sType*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_249;
                        self->head=litem_249;
                    }
                    else {
                        if(self->len==1) {
                            litem_250=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value214=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 229, "list_item$1sTypeph"))));
                            come_call_finalizer3(__right_value214,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_250->prev=self->head;
                            litem_250->next=((void*)0);
                            __dec_obj70=litem_250->item;
                            litem_250->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_250;
                            self->head->next=litem_250;
                        }
                        else {
                            litem_251=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value215=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 239, "list_item$1sTypeph"))));
                            come_call_finalizer3(__right_value215,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_251->prev=self->tail;
                            litem_251->next=((void*)0);
                            __dec_obj71=litem_251->item;
                            litem_251->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_251;
                            self->tail=litem_251;
                        }
                    }
                    self->len++;
                    __result164__ = __result_obj__ = self;
                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result164__;
                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
void* __right_value220;
struct list_item$1CVALUEph* litem_255;
struct CVALUE* __dec_obj72;
void* __right_value221;
struct list_item$1CVALUEph* litem_256;
struct CVALUE* __dec_obj73;
void* __right_value222;
struct list_item$1CVALUEph* litem_257;
struct CVALUE* __dec_obj74;
struct list$1CVALUEph* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value220 = (void*)0;
memset(&litem_255, 0, sizeof(struct list_item$1CVALUEph*));
__right_value221 = (void*)0;
memset(&litem_256, 0, sizeof(struct list_item$1CVALUEph*));
__right_value222 = (void*)0;
memset(&litem_257, 0, sizeof(struct list_item$1CVALUEph*));
                if(self->len==0) {
                    litem_255=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value220=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 149, "list_item$1CVALUEph"))));
                    come_call_finalizer3(__right_value220,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_255->prev=((void*)0);
                    litem_255->next=((void*)0);
                    __dec_obj72=litem_255->item;
                    litem_255->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj72,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_255;
                    self->head=litem_255;
                }
                else {
                    if(self->len==1) {
                        litem_256=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value221=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 159, "list_item$1CVALUEph"))));
                        come_call_finalizer3(__right_value221,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_256->prev=self->head;
                        litem_256->next=((void*)0);
                        __dec_obj73=litem_256->item;
                        litem_256->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj73,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_256;
                        self->head->next=litem_256;
                    }
                    else {
                        litem_257=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value222=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 169, "list_item$1CVALUEph"))));
                        come_call_finalizer3(__right_value222,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_257->prev=self->tail;
                        litem_257->next=((void*)0);
                        __dec_obj74=litem_257->item;
                        litem_257->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj74,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_257;
                        self->tail=litem_257;
                    }
                }
                self->len++;
                __result165__ = __result_obj__ = self;
                come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                return __result165__;
                come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
char* result_266;
char* __result167__;
char* __result168__;
char* result_267;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_266, 0, sizeof(char*));
memset(&result_267, 0, sizeof(char*));
                        if(self==((void*)0)) {
                            memset(&result_266,0,sizeof(char*));
                            __result167__ = __result_obj__ = result_266;
                            return __result167__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result168__ = __result_obj__ = self->it->item;
                            return __result168__;
                        }
                        memset(&result_267,0,sizeof(char*));
                        __result169__ = __result_obj__ = result_267;
                        return __result169__;
}

static _Bool list$1charph_end(struct list$1charph* self){
                        return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
char* result_269;
char* __result170__;
char* __result171__;
char* result_270;
char* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_269, 0, sizeof(char*));
memset(&result_270, 0, sizeof(char*));
                        if(self==((void*)0)||self->it==((void*)0)) {
                            memset(&result_269,0,sizeof(char*));
                            __result170__ = __result_obj__ = result_269;
                            return __result170__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result171__ = __result_obj__ = self->it->item;
                            return __result171__;
                        }
                        memset(&result_270,0,sizeof(char*));
                        __result172__ = __result_obj__ = result_270;
                        return __result172__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
struct list$1CVALUEph* __result173__;
struct list_item$1CVALUEph* it_271;
int i_272;
struct CVALUE* __dec_obj75;
struct list$1CVALUEph* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_271, 0, sizeof(struct list_item$1CVALUEph*));
                        if(position<0) {
                            position+=self->len;
                        }
                        if(position>=self->len) {
                            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            __result173__ = __result_obj__ = self;
                            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                            return __result173__;
                        }
                        it_271=self->head;
                        i_272=0;
                        while(it_271!=((void*)0)) {
                            if(position==i_272) {
                                __dec_obj75=it_271->item;
                                it_271->item=(struct CVALUE*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj75,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                break;
                            }
                            it_271=it_271->next;
                            i_272++;
                        }
                        __result174__ = __result_obj__ = self;
                        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                        return __result174__;
                        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
struct list_item$1charph* it_278;
int i_279;
char* __result175__;
char* default_value_280;
char* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_278, 0, sizeof(struct list_item$1charph*));
memset(&default_value_280, 0, sizeof(char*));
                            if(position<0) {
                                position+=self->len;
                            }
                            it_278=self->head;
                            i_279=0;
                            while(it_278!=((void*)0)) {
                                if(position==i_279) {
                                    __result175__ = __result_obj__ = it_278->item;
                                    return __result175__;
                                }
                                it_278=it_278->next;
                                i_279++;
                            }
                            memset(&default_value_280,0,sizeof(char*));
                            __result176__ = __result_obj__ = default_value_280;
                            default_value_280 = come_decrement_ref_count2(default_value_280, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result176__;
                            default_value_280 = come_decrement_ref_count2(default_value_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
struct list_item$1CVALUEph* it_282;
int i_283;
struct CVALUE* __result178__;
struct CVALUE* default_value_284;
struct CVALUE* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_282, 0, sizeof(struct list_item$1CVALUEph*));
memset(&default_value_284, 0, sizeof(struct CVALUE*));
                            if(position<0) {
                                position+=self->len;
                            }
                            it_282=self->head;
                            i_283=0;
                            while(it_282!=((void*)0)) {
                                if(position==i_283) {
                                    __result178__ = __result_obj__ = it_282->item;
                                    return __result178__;
                                }
                                it_282=it_282->next;
                                i_283++;
                            }
                            memset(&default_value_284,0,sizeof(struct CVALUE*));
                            __result179__ = __result_obj__ = default_value_284;
                            come_call_finalizer3(default_value_284,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                            return __result179__;
                            come_call_finalizer3(default_value_284,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_290;
struct sNode* __result180__;
struct sNode* __result181__;
struct sNode* result_291;
struct sNode* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_290, 0, sizeof(struct sNode*));
memset(&result_291, 0, sizeof(struct sNode*));
                        if(self==((void*)0)) {
                            memset(&result_290,0,sizeof(struct sNode*));
                            __result180__ = __result_obj__ = result_290;
                            return __result180__;
                        }
                        self->it=self->head;
                        if(self->it) {
                            __result181__ = __result_obj__ = self->it->item;
                            return __result181__;
                        }
                        memset(&result_291,0,sizeof(struct sNode*));
                        __result182__ = __result_obj__ = result_291;
                        return __result182__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
                        return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_293;
struct sNode* __result183__;
struct sNode* __result184__;
struct sNode* result_294;
struct sNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_293, 0, sizeof(struct sNode*));
memset(&result_294, 0, sizeof(struct sNode*));
                        if(self==((void*)0)||self->it==((void*)0)) {
                            memset(&result_293,0,sizeof(struct sNode*));
                            __result183__ = __result_obj__ = result_293;
                            return __result183__;
                        }
                        self->it=self->it->next;
                        if(self->it) {
                            __result184__ = __result_obj__ = self->it->item;
                            return __result184__;
                        }
                        memset(&result_294,0,sizeof(struct sNode*));
                        __result185__ = __result_obj__ = result_294;
                        return __result185__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
void* __right_value244;
struct list_item$1tuple2$2charphsNodephph* litem_297;
struct tuple2$2charphsNodeph* __dec_obj78;
void* __right_value245;
struct list_item$1tuple2$2charphsNodephph* litem_298;
struct tuple2$2charphsNodeph* __dec_obj79;
void* __right_value246;
struct list_item$1tuple2$2charphsNodephph* litem_299;
struct tuple2$2charphsNodeph* __dec_obj80;
struct list$1tuple2$2charphsNodephph* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value244 = (void*)0;
memset(&litem_297, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
__right_value245 = (void*)0;
memset(&litem_298, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
__right_value246 = (void*)0;
memset(&litem_299, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                        if(self->len==0) {
                            litem_297=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value244=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 219, "list_item$1tuple2$2charphsNodephph"))));
                            come_call_finalizer3(__right_value244,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_297->prev=((void*)0);
                            litem_297->next=((void*)0);
                            __dec_obj78=litem_297->item;
                            litem_297->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj78,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_297;
                            self->head=litem_297;
                        }
                        else {
                            if(self->len==1) {
                                litem_298=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value245=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 229, "list_item$1tuple2$2charphsNodephph"))));
                                come_call_finalizer3(__right_value245,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_298->prev=self->head;
                                litem_298->next=((void*)0);
                                __dec_obj79=litem_298->item;
                                litem_298->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj79,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_298;
                                self->head->next=litem_298;
                            }
                            else {
                                litem_299=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value246=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 239, "list_item$1tuple2$2charphsNodephph"))));
                                come_call_finalizer3(__right_value246,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_299->prev=self->tail;
                                litem_299->next=((void*)0);
                                __dec_obj80=litem_299->item;
                                litem_299->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj80,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_299;
                                self->tail=litem_299;
                            }
                        }
                        self->len++;
                        __result186__ = __result_obj__ = self;
                        come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result186__;
                        come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__;
char* __dec_obj81;
struct tuple2$2charphvoidp* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
                        __dec_obj81=self->v1;
                        self->v1=(char*)come_increment_ref_count(v1);
                        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->v2=v2;
                        __result187__ = __result_obj__ = self;
                        come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result187__;
                        come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
                        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
                            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
            if(self==((void*)0)) {
                return 0;
            }
            return self->len;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__;
void* __right_value336;
void* __right_value337;
struct list$1tuple2$2charphsNodephph* params_363;
void* __right_value338;
void* __right_value339;
void* __right_value340;
_Bool parse_method_generics_type_364;
char* p_365;
int sline_366;
void* __right_value341;
char* word_367;
void* __right_value342;
void* __right_value343;
struct list$1sTypeph* method_generics_types_368;
void* __right_value344;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_369;
char* name_370;
_Bool err_371;
void* __right_value345;
char* p_372;
int sline_373;
_Bool err_flag_374;
void* __right_value346;
char* label_375;
void* __right_value347;
char* __dec_obj101;
char* __dec_obj102;
_Bool no_comma_376;
_Bool in_fun_param_377;
void* __right_value348;
struct sNode* node_378;
void* __right_value349;
struct sNode* __dec_obj103;
void* __right_value350;
void* __right_value351;
struct buffer* method_block_379;
int method_block_sline_380;
char* head_381;
void* __right_value352;
char* tail_382;
void* __right_value353;
void* __right_value354;
struct buffer* __dec_obj104;
int len_383;
void* __right_value355;
char* mem_384;
void* __right_value356;
void* __right_value357;
void* __right_value358;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value366;
struct sNode* node_385;
void* __right_value367;
struct sNode* __dec_obj111;
struct sNode* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value336 = (void*)0;
__right_value337 = (void*)0;
memset(&params_363, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
__right_value338 = (void*)0;
__right_value339 = (void*)0;
__right_value340 = (void*)0;
__right_value341 = (void*)0;
memset(&word_367, 0, sizeof(char*));
__right_value342 = (void*)0;
__right_value343 = (void*)0;
memset(&method_generics_types_368, 0, sizeof(struct list$1sTypeph*));
__right_value344 = (void*)0;
__right_value345 = (void*)0;
__right_value346 = (void*)0;
memset(&label_375, 0, sizeof(char*));
__right_value347 = (void*)0;
__right_value348 = (void*)0;
memset(&node_378, 0, sizeof(struct sNode*));
__right_value349 = (void*)0;
__right_value350 = (void*)0;
__right_value351 = (void*)0;
memset(&method_block_379, 0, sizeof(struct buffer*));
__right_value352 = (void*)0;
__right_value353 = (void*)0;
__right_value354 = (void*)0;
__right_value355 = (void*)0;
memset(&mem_384, 0, sizeof(char*));
__right_value356 = (void*)0;
__right_value357 = (void*)0;
__right_value358 = (void*)0;
__right_value366 = (void*)0;
memset(&node_385, 0, sizeof(struct sNode*));
__right_value367 = (void*)0;
    params_363=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(__right_value337=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(__right_value336=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 865, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer3(__right_value336,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    list$1tuple2$2charphsNodephph_push_back(params_363,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(__right_value340=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(__right_value339=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 866, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value338=sNode_clone(obj)))))))));
    if(__right_value338) { __right_value338 = come_decrement_ref_count2(__right_value338, ((struct sNode*)__right_value338)->finalize, ((struct sNode*)__right_value338)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer3(__right_value339,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value340,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    if(*info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_364=(_Bool)0;
    {
        p_365=info->p;
        sline_366=info->sline;
        if(*info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(xisalpha(*info->p)||*info->p==95) {
                word_367=(char*)come_increment_ref_count(((char*)(__right_value341=parse_word(info))));
                if(is_type_name(word_367,info)) {
                    parse_method_generics_type_364=(_Bool)1;
                }
                word_367 = come_decrement_ref_count2(word_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_365;
        info->sline=sline_366;
    }
    method_generics_types_368=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value343=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value342=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 896, "list$1sTypeph"))))))));
    come_call_finalizer3(__right_value342,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    if(parse_method_generics_type_364&&*info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(*info->p==0) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else {
                if(*info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    if(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value344=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        type_369=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                        name_370=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                        err_371=multiple_assign_var5->v3;
                        come_call_finalizer3(__right_value344,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(!err_371) {
                            err_msg(info,"invalid method generics paramtor type");
                            exit(2);
                        }
                        list$1sTypeph_push_back(method_generics_types_368,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value345=sType_clone(type_369)))));
                        come_call_finalizer3(__right_value345,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(type_369,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_370 = come_decrement_ref_count2(name_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    if(*info->p!=123) {
        expected_next_character(40,info);
        while((_Bool)1) {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_372=info->p;
            sline_373=info->sline;
            err_flag_374=(_Bool)0;
            label_375=(char*)come_increment_ref_count(((char*)(__right_value346=__builtin_string(""))));
            if(xisalpha(*info->p)||*info->p==95) {
                __dec_obj101=label_375;
                label_375=(char*)come_increment_ref_count(((char*)(__right_value347=parse_word(info))));
                __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_374=(_Bool)1;
            }
            if(err_flag_374==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj102=label_375;
                label_375=((void*)0);
                __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_372;
                info->sline=sline_373;
            }
            no_comma_376=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_377=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_378=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value348=expression_v13(info))));
            __dec_obj103=node_378;
            node_378=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value349=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_378),info))));
            if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); }
            info->in_fun_param=in_fun_param_377;
            info->no_comma=no_comma_376;
            list$1tuple2$2charphsNodephph_push_back(params_363,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(__right_value351=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(__right_value350=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 972, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_375),(struct sNode*)come_increment_ref_count(node_378))))));
            come_call_finalizer3(__right_value350,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value351,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            if(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                if(*info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    label_375 = come_decrement_ref_count2(label_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_378) { node_378 = come_decrement_ref_count2(node_378, ((struct sNode*)node_378)->finalize, ((struct sNode*)node_378)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            label_375 = come_decrement_ref_count2(label_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_378) { node_378 = come_decrement_ref_count2(node_378, ((struct sNode*)node_378)->finalize, ((struct sNode*)node_378)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    method_block_379=((void*)0);
    method_block_sline_380=0;
    if(*info->p==123) {
        head_381=info->p;
        method_block_sline_380=info->sline;
        ((char*)(__right_value352=skip_block(info)));
        __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_382=info->p;
        __dec_obj104=method_block_379;
        method_block_379=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value354=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value353=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 996, "buffer"))))))));
        come_call_finalizer3(__dec_obj104,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value353,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        len_383=tail_382-head_381;
        mem_384=(char*)come_increment_ref_count(((char*)(__right_value355=(char*)come_calloc(1, sizeof(char)*(1*(len_383+1)), "20method.c", 999, "char"))));
        memcpy(mem_384,head_381,len_383);
        mem_384[len_383]=0;
        buffer_append_str(method_block_379,mem_384);
        buffer_append_str(method_block_379,"\n");
        mem_384 = come_decrement_ref_count2(mem_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    if(*info->p==60) {
    }
    parse_sharp_v5(info);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1014, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sMethodCallNode*)(__right_value358=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value356=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1014, "sMethodCallNode")))),fun_name,(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value357=sNode_clone(obj)))),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_363),method_block_379,method_block_sline_380,method_generics_types_368,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_385=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value366=_inf_value2)));
    come_call_finalizer3(__right_value356,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value357) { __right_value357 = come_decrement_ref_count2(__right_value357, ((struct sNode*)__right_value357)->finalize, ((struct sNode*)__right_value357)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer3(__right_value358,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj111=node_385;
    node_385=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value367=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_385),info))));
    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
    __result200__ = __result_obj__ = node_385;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(params_363,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_368,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_379,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_385) { node_385 = come_decrement_ref_count2(node_385, ((struct sNode*)node_385)->finalize, ((struct sNode*)node_385)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result200__;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(params_363,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_368,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_379,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_385) { node_385 = come_decrement_ref_count2(node_385, ((struct sNode*)node_385)->finalize, ((struct sNode*)node_385)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj99;
struct sNode* __dec_obj100;
struct tuple2$2charphsNodeph* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
        __dec_obj99=self->v1;
        self->v1=(char*)come_increment_ref_count(v1);
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj100=self->v2;
        self->v2=(struct sNode*)come_increment_ref_count(v2);
        if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
        __result197__ = __result_obj__ = self;
        come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result197__;
        come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
                            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->obj!=((void*)0)) {
            if(self->obj) { self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->params!=((void*)0)) {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->method_block!=((void*)0)) {
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
            come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__;
struct sMethodCallNode* __result198__;
void* __right_value359;
struct sMethodCallNode* result_386;
void* __right_value360;
char* __dec_obj105;
void* __right_value361;
struct sNode* __dec_obj106;
void* __right_value362;
char* __dec_obj107;
void* __right_value363;
struct list$1tuple2$2charphsNodephph* __dec_obj108;
void* __right_value364;
struct buffer* __dec_obj109;
void* __right_value365;
struct list$1sTypeph* __dec_obj110;
struct sMethodCallNode* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value359 = (void*)0;
memset(&result_386, 0, sizeof(struct sMethodCallNode*));
__right_value360 = (void*)0;
__right_value361 = (void*)0;
__right_value362 = (void*)0;
__right_value363 = (void*)0;
__right_value364 = (void*)0;
__right_value365 = (void*)0;
        if(self==(void*)0) {
            __result198__ = __result_obj__ = (void*)0;
            return __result198__;
        }
        result_386=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value359=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "sMethodCallNode"))));
        if(self!=((void*)0)) {
            result_386->sline=self->sline;
        }
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            __dec_obj105=result_386->sname;
            result_386->sname=(char*)come_increment_ref_count(((char*)(__right_value360=string_clone(self->sname))));
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(self!=((void*)0)&&self->obj!=((void*)0)) {
            __dec_obj106=result_386->obj;
            result_386->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value361=sNode_clone(self->obj))));
            if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); }
        }
        if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
            __dec_obj107=result_386->fun_name;
            result_386->fun_name=(char*)come_increment_ref_count(((char*)(__right_value362=string_clone(self->fun_name))));
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(self!=((void*)0)&&self->params!=((void*)0)) {
            __dec_obj108=result_386->params;
            result_386->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(__right_value363=list$1tuple2$2charphsNodephphp_clone(self->params))));
            come_call_finalizer3(__dec_obj108,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->method_block!=((void*)0)) {
            __dec_obj109=result_386->method_block;
            result_386->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value364=buffer_clone(self->method_block))));
            come_call_finalizer3(__dec_obj109,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)) {
            result_386->method_block_sline=self->method_block_sline;
        }
        if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
            __dec_obj110=result_386->method_generics_types;
            result_386->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value365=list$1sTypephp_clone(self->method_generics_types))));
            come_call_finalizer3(__dec_obj110,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        __result199__ = __result_obj__ = result_386;
        come_call_finalizer3(result_386,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
        return __result199__;
        come_call_finalizer3(result_386,sMethodCallNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
void* __right_value368;
void* __right_value369;
struct sNode* _inf_value3;
struct sCurrentNode* _inf_obj_value3;
void* __right_value372;
struct sNode* __result203__;
void* __right_value373;
struct sNode* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value368 = (void*)0;
__right_value369 = (void*)0;
__right_value372 = (void*)0;
__right_value373 = (void*)0;
    if(charp_operator_equals(buf,"__current__")) {
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1024, "struct sNode");
        _inf_obj_value3=come_increment_ref_count(((struct sCurrentNode*)(__right_value369=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value368=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1024, "sCurrentNode")))),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode_finalize;
        _inf_value3->clone=(void*)sCurrentNode_clone;
        _inf_value3->compile=(void*)sCurrentNode_compile;
        _inf_value3->sline=(void*)sCurrentNode_sline;
        _inf_value3->sname=(void*)sCurrentNode_sname;
        _inf_value3->terminated=(void*)sNodeBase_terminated;
        _inf_value3->kind=(void*)sCurrentNode_kind;
        __result203__ = __result_obj__ = ((struct sNode*)(__right_value372=_inf_value3));
        come_call_finalizer3(__right_value368,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value369,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value372) { __right_value372 = come_decrement_ref_count2(__right_value372, ((struct sNode*)__right_value372)->finalize, ((struct sNode*)__right_value372)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result203__;
    }
    __result204__ = __result_obj__ = ((struct sNode*)(__right_value373=string_node_v17(buf,head,head_sline,info)));
    if(__right_value373) { __right_value373 = come_decrement_ref_count2(__right_value373, ((struct sNode*)__right_value373)->finalize, ((struct sNode*)__right_value373)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result204__;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__;
struct sCurrentNode* __result201__;
void* __right_value370;
struct sCurrentNode* result_387;
void* __right_value371;
char* __dec_obj112;
struct sCurrentNode* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
__right_value370 = (void*)0;
memset(&result_387, 0, sizeof(struct sCurrentNode*));
__right_value371 = (void*)0;
            if(self==(void*)0) {
                __result201__ = __result_obj__ = (void*)0;
                return __result201__;
            }
            result_387=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value370=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "sCurrentNode"))));
            if(self!=((void*)0)) {
                result_387->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj112=result_387->sname;
                result_387->sname=(char*)come_increment_ref_count(((char*)(__right_value371=string_clone(self->sname))));
                __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            __result202__ = __result_obj__ = result_387;
            come_call_finalizer3(result_387,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result202__;
            come_call_finalizer3(result_387,sCurrentNode_finalize, 0, 0, 0, 0, (void*)0);
}

