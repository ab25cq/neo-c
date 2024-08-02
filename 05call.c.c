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
struct sVarArgTypeName
{
    int sline;
    char* sname;
    struct sType* type;
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

void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info);

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
static void list$1sRightValueObjectpp_finalize(struct list$1sRightValueObjectp* self);
static void list_item$1sRightValueObjectpp_finalize(struct list_item$1sRightValueObjectp* self);
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
static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info);

char* sLambdaCall_kind(struct sLambdaCall* self);

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info);

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info);

char* sVarArgTypeName_kind(struct sVarArgTypeName* self);

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info);

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
static void sVarArgTypeName_finalize(struct sVarArgTypeName* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
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










struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__;
void* right_value79;
struct sNode* __dec_obj12;
void* right_value80;
char* __dec_obj13;
struct sReturnNode* __result45__;
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
    __result45__ = __result_obj__ = self;
    come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result45__;
    come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __result_obj__;
void* right_value81;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    __result46__ = __result_obj__ = ((char*)(right_value81=__builtin_string("sReturnNode")));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result46__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_47;
void* right_value117;
struct sType* result_type_48;
void* right_value118;
struct sType* result_type2_79;
struct sType* result_type3_80;
_Bool __result65__;
void* right_value119;
struct CVALUE* come_value_81;
int right_value_id_84;
void* right_value120;
struct sType* come_value_type_85;
void* right_value121;
struct sType* __dec_obj37;
void* right_value122;
char* var_name_87;
int num_result_stack_88;
void* right_value123;
void* right_value124;
void* right_value125;
struct sFun* come_fun_89;
void* right_value126;
memset(&come_fun_47, 0, sizeof(struct sFun*));
right_value117 = (void*)0;
memset(&result_type_48, 0, sizeof(struct sType*));
right_value118 = (void*)0;
memset(&result_type2_79, 0, sizeof(struct sType*));
memset(&result_type3_80, 0, sizeof(struct sType*));
right_value119 = (void*)0;
memset(&come_value_81, 0, sizeof(struct CVALUE*));
memset(&right_value_id_84, 0, sizeof(int));
right_value120 = (void*)0;
memset(&come_value_type_85, 0, sizeof(struct sType*));
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&var_name_87, 0, sizeof(char*));
memset(&num_result_stack_88, 0, sizeof(int));
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
memset(&come_fun_89, 0, sizeof(struct sFun*));
right_value126 = (void*)0;
    if(self->value) {
        come_fun_47=info->come_fun;
        result_type_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value117=sType_clone(come_fun_47->mResultType))));
        come_call_finalizer3(right_value117,sType_finalize, 0, 1, 0, 0, (void*)0);
        result_type2_79=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=solve_generics(result_type_48,info->generics_type,info))));
        come_call_finalizer3(right_value118,sType_finalize, 0, 1, 0, 0, (void*)0);
        result_type3_80=result_type2_79->mNoSolvedGenericsType->v1;
        if(result_type2_79->mNoSolvedGenericsType->v1) {
            result_type3_80=result_type2_79->mNoSolvedGenericsType->v1;
        }
        else {
            result_type3_80=result_type2_79;
        }
        if(!node_compile(self->value,info)) {
            __result65__ = (_Bool)0;
            come_call_finalizer3(result_type_48,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_79,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result65__;
        }
        come_value_81=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value119=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value119,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        dec_stack_ptr(1,info);
        if(come_value_81->type->mHeap&&come_value_81->var==((void*)0)) {
            right_value_id_84=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_81->c_value));
            if(right_value_id_84!=-1) {
                remove_object_from_right_values(right_value_id_84,info);
            }
        }
        come_value_type_85=(struct sType*)come_increment_ref_count(((struct sType*)(right_value120=solve_generics(come_value_81->type,info->generics_type,info))));
        come_call_finalizer3(right_value120,sType_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj37=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(come_value_81->type))));
        come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value121,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(gComeC) {
            add_come_code(info,"return %s;\n",come_value_81->c_value);
        }
        else {
            if(string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_47->mBlock,info,come_value_81->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
                add_come_code(info,"return %s;\n",come_value_81->c_value);
            }
            else {
                static int num_result_86=0;
                var_name_87=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("__result%d__",++num_result_86))));
                right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                num_result_stack_88=num_result_86;
                if(!info->come_fun->mNoResultType) {
                    check_assign_type("result type",result_type2_79,come_value_81->type,come_value_81,(_Bool)0,(_Bool)1,info);
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value123=make_define_var(result_type2_79,var_name_87,(_Bool)0,info))));
                    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    add_come_code(info,"%s = __result_obj__ = %s;\n",var_name_87,come_value_81->c_value);
                }
                else {
                    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value124=make_define_var(result_type2_79,var_name_87,(_Bool)0,info))));
                    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    add_come_code(info,"%s = %s;\n",var_name_87,come_value_81->c_value);
                }
                add_last_code_to_source(info);
                free_objects_on_return(come_fun_47->mBlock,info,come_value_81->var,(_Bool)0);
                free_right_value_objects(info,(_Bool)0);
                if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                    free_objects(info->gv_table,((void*)0),info);
                    add_come_code(info,((char*)(right_value125=xsprintf("come_heap_final();\n"))));
                    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                add_come_code(info,"return __result%d__;\n",num_result_stack_88);
                var_name_87 = come_decrement_ref_count2(var_name_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(result_type_48,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_79,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_81,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_type_85,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_89=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_89->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(right_value126=xsprintf("come_heap_final();\n"))));
            right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
struct sType* __result47__;
void* right_value82;
struct sType* result_49;
void* right_value89;
struct list$1sTypeph* __dec_obj17;
void* right_value92;
struct tuple1$1sTypeph* __dec_obj19;
void* right_value93;
struct tuple1$1sTypeph* __dec_obj20;
void* right_value94;
char* __dec_obj21;
void* right_value95;
struct list$1sTypeph* __dec_obj22;
void* right_value103;
struct list$1sNodeph* __dec_obj26;
void* right_value104;
struct list$1sTypeph* __dec_obj27;
void* right_value111;
struct list$1charph* __dec_obj31;
void* right_value112;
struct tuple1$1sTypeph* __dec_obj32;
void* right_value113;
struct sNode* __dec_obj33;
void* right_value114;
struct sNode* __dec_obj34;
void* right_value115;
char* __dec_obj35;
void* right_value116;
char* __dec_obj36;
struct sType* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&result_49, 0, sizeof(struct sType*));
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
            if(self==(void*)0) {
                __result47__ = __result_obj__ = (void*)0;
                return __result47__;
            }
            result_49=(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            come_call_finalizer3(right_value82,sType_finalize, 0, 1, 0, 0, __result_obj__);
            if(self!=((void*)0)) {
                result_49->mClass=self->mClass;
            }
            if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
                __dec_obj17=result_49->mMultipleTypes;
                result_49->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value89=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer3(__dec_obj17,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value89,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                __dec_obj19=result_49->mNoSolvedGenericsType;
                result_49->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value92=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value92,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
                __dec_obj20=result_49->mOriginalLoadVarType;
                result_49->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value93=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer3(__dec_obj20,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value93,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                __dec_obj21=result_49->mGenericsName;
                result_49->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value94=string_clone(self->mGenericsName))));
                __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                __dec_obj22=result_49->mGenericsTypes;
                result_49->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value95=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer3(__dec_obj22,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value95,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                __dec_obj26=result_49->mArrayNum;
                result_49->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value103=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer3(__dec_obj26,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value103,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)) {
                result_49->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                __dec_obj27=result_49->mParamTypes;
                result_49->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value104=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value104,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                __dec_obj31=result_49->mParamNames;
                result_49->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value111=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer3(__dec_obj31,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value111,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                __dec_obj32=result_49->mResultType;
                result_49->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value112=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer3(__dec_obj32,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value112,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)) {
                result_49->mVarArgs=self->mVarArgs;
            }
            if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
                __dec_obj33=result_49->mAlignas;
                result_49->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value113=sNode_clone(self->mAlignas))));
                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value113) { right_value113 = come_decrement_ref_count2(right_value113, ((struct sNode*)right_value113)->finalize, ((struct sNode*)right_value113)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(self!=((void*)0)) {
                result_49->mUnsigned=self->mUnsigned;
            }
            if(self!=((void*)0)) {
                result_49->mShort=self->mShort;
            }
            if(self!=((void*)0)) {
                result_49->mLong=self->mLong;
            }
            if(self!=((void*)0)) {
                result_49->mLongLong=self->mLongLong;
            }
            if(self!=((void*)0)) {
                result_49->mConstant=self->mConstant;
            }
            if(self!=((void*)0)) {
                result_49->mRegister=self->mRegister;
            }
            if(self!=((void*)0)) {
                result_49->mVolatile=self->mVolatile;
            }
            if(self!=((void*)0)) {
                result_49->mStatic=self->mStatic;
            }
            if(self!=((void*)0)) {
                result_49->mUniq=self->mUniq;
            }
            if(self!=((void*)0)) {
                result_49->mRecord=self->mRecord;
            }
            if(self!=((void*)0)) {
                result_49->mExtern=self->mExtern;
            }
            if(self!=((void*)0)) {
                result_49->mRestrict=self->mRestrict;
            }
            if(self!=((void*)0)) {
                result_49->mImmutable=self->mImmutable;
            }
            if(self!=((void*)0)) {
                result_49->mHeap=self->mHeap;
            }
            if(self!=((void*)0)) {
                result_49->mDummyHeap=self->mDummyHeap;
            }
            if(self!=((void*)0)) {
                result_49->mDelegate=self->mDelegate;
            }
            if(self!=((void*)0)) {
                result_49->mShare=self->mShare;
            }
            if(self!=((void*)0)) {
                result_49->mClone=self->mClone;
            }
            if(self!=((void*)0)) {
                result_49->mNoHeap=self->mNoHeap;
            }
            if(self!=((void*)0)) {
                result_49->mNoCallingDestructor=self->mNoCallingDestructor;
            }
            if(self!=((void*)0)) {
                result_49->mRefference=self->mRefference;
            }
            if(self!=((void*)0)) {
                result_49->mException=self->mException;
            }
            if(self!=((void*)0)) {
                result_49->mPointerNum=self->mPointerNum;
            }
            if(self!=((void*)0)) {
                result_49->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            }
            if(self!=((void*)0)) {
                result_49->mNoArrayPointerNum=self->mNoArrayPointerNum;
            }
            if(self!=((void*)0)) {
                result_49->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
            }
            if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
                __dec_obj34=result_49->mSizeNum;
                result_49->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value114=sNode_clone(self->mSizeNum))));
                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value114) { right_value114 = come_decrement_ref_count2(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(self!=((void*)0)) {
                result_49->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(self!=((void*)0)) {
                result_49->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                __dec_obj35=result_49->mOriginalTypeName;
                result_49->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value115=string_clone(self->mOriginalTypeName))));
                __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)) {
                result_49->mOriginalPointerNum=self->mOriginalPointerNum;
            }
            if(self!=((void*)0)) {
                result_49->mFunctionParam=self->mFunctionParam;
            }
            if(self!=((void*)0)) {
                result_49->mAllocaValue=self->mAllocaValue;
            }
            if(self!=((void*)0)) {
                result_49->mGenericsStruct=self->mGenericsStruct;
            }
            if(self!=((void*)0)) {
                result_49->mSolvedGenericsName=self->mSolvedGenericsName;
            }
            if(self!=((void*)0)) {
                result_49->mComeMemCore=self->mComeMemCore;
            }
            if(self!=((void*)0)) {
                result_49->mInline=self->mInline;
            }
            if(self!=((void*)0)) {
                result_49->mNullValue=self->mNullValue;
            }
            if(self!=((void*)0)) {
                result_49->mGuardValue=self->mGuardValue;
            }
            if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
                __dec_obj36=result_49->mAsmName;
                result_49->mAsmName=(char*)come_increment_ref_count(((char*)(right_value116=string_clone(self->mAsmName))));
                __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)) {
                result_49->mArrayPointerType=self->mArrayPointerType;
            }
            if(self!=((void*)0)) {
                result_49->mLambdaArray=self->mLambdaArray;
            }
            if(self!=((void*)0)) {
                result_49->mNoNumberArray=self->mNoNumberArray;
            }
            __result64__ = __result_obj__ = result_49;
            come_call_finalizer3(result_49,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result64__;
            come_call_finalizer3(result_49,sType_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_50;
struct list_item$1sTypeph* prev_it_51;
memset(&it_50, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_51, 0, sizeof(struct list_item$1sTypeph*));
                        it_50=self->head;
                        while(it_50!=((void*)0)) {
                            prev_it_51=it_50;
                            it_50=it_50->next;
                            come_call_finalizer3(prev_it_51,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_52;
struct list_item$1sNodeph* prev_it_53;
memset(&it_52, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_53, 0, sizeof(struct list_item$1sNodeph*));
                        it_52=self->head;
                        while(it_52!=((void*)0)) {
                            prev_it_53=it_52;
                            it_52=it_52->next;
                            come_call_finalizer3(prev_it_53,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
                                if(self!=((void*)0)&&self->item!=((void*)0)) {
                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_54;
struct list_item$1charph* prev_it_55;
memset(&it_54, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_55, 0, sizeof(struct list_item$1charph*));
                        it_54=self->head;
                        while(it_54!=((void*)0)) {
                            prev_it_55=it_54;
                            it_54=it_54->next;
                            come_call_finalizer3(prev_it_55,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
                                if(self!=((void*)0)&&self->item!=((void*)0)) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result48__;
void* right_value83;
void* right_value84;
struct list$1sTypeph* result_56;
struct list_item$1sTypeph* it_57;
void* right_value88;
struct list$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value83 = (void*)0;
right_value84 = (void*)0;
memset(&result_56, 0, sizeof(struct list$1sTypeph*));
memset(&it_57, 0, sizeof(struct list_item$1sTypeph*));
right_value88 = (void*)0;
                    if(self==((void*)0)) {
                        __result48__ = __result_obj__ = ((void*)0);
                        return __result48__;
                    }
                    result_56=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value84=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value83=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))))));
                    come_call_finalizer3(right_value83,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value84,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_57=self->head;
                    while(it_57!=((void*)0)) {
                        list$1sTypeph_add(result_56,(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(it_57->item)))));
                        come_call_finalizer3(right_value88,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        it_57=it_57->next;
                    }
                    __result51__ = __result_obj__ = result_56;
                    come_call_finalizer3(result_56,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result51__;
                    come_call_finalizer3(result_56,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result49__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result49__;
                        come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* right_value85;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj14;
void* right_value86;
struct list_item$1sTypeph* litem_59;
struct sType* __dec_obj15;
void* right_value87;
struct list_item$1sTypeph* litem_60;
struct sType* __dec_obj16;
struct list$1sTypeph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value85 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
right_value86 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1sTypeph*));
right_value87 = (void*)0;
memset(&litem_60, 0, sizeof(struct list_item$1sTypeph*));
                            if(self->len==0) {
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value85,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_58->prev=((void*)0);
                                litem_58->next=((void*)0);
                                __dec_obj14=litem_58->item;
                                litem_58->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_58;
                                self->head=litem_58;
                            }
                            else {
                                if(self->len==1) {
                                    litem_59=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value86,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_59->prev=self->head;
                                    litem_59->next=((void*)0);
                                    __dec_obj15=litem_59->item;
                                    litem_59->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_59;
                                    self->head->next=litem_59;
                                }
                                else {
                                    litem_60=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value87=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
                                    come_call_finalizer3(right_value87,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_60->prev=self->tail;
                                    litem_60->next=((void*)0);
                                    __dec_obj16=litem_60->item;
                                    litem_60->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_60;
                                    self->tail=litem_60;
                                }
                            }
                            self->len++;
                            __result50__ = __result_obj__ = self;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result50__;
                            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
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

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
struct tuple1$1sTypeph* __result52__;
void* right_value90;
struct tuple1$1sTypeph* result_63;
void* right_value91;
struct sType* __dec_obj18;
struct tuple1$1sTypeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
memset(&result_63, 0, sizeof(struct tuple1$1sTypeph*));
right_value91 = (void*)0;
                    if(self==(void*)0) {
                        __result52__ = __result_obj__ = (void*)0;
                        return __result52__;
                    }
                    result_63=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    come_call_finalizer3(right_value90,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        __dec_obj18=result_63->v1;
                        result_63->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj18,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value91,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    __result53__ = __result_obj__ = result_63;
                    come_call_finalizer3(result_63,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                    return __result53__;
                    come_call_finalizer3(result_63,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
                        if(self!=((void*)0)&&self->v1!=((void*)0)) {
                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result54__;
void* right_value96;
void* right_value97;
struct list$1sNodeph* result_64;
struct list_item$1sNodeph* it_65;
void* right_value102;
struct list$1sNodeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
right_value97 = (void*)0;
memset(&result_64, 0, sizeof(struct list$1sNodeph*));
memset(&it_65, 0, sizeof(struct list_item$1sNodeph*));
right_value102 = (void*)0;
                    if(self==((void*)0)) {
                        __result54__ = __result_obj__ = ((void*)0);
                        return __result54__;
                    }
                    result_64=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value97=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value96=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))))));
                    come_call_finalizer3(right_value96,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value97,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_65=self->head;
                    while(it_65!=((void*)0)) {
                        list$1sNodeph_add(result_64,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value102=sNode_clone(it_65->item)))));
                        if(right_value102) { right_value102 = come_decrement_ref_count2(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        it_65=it_65->next;
                    }
                    __result59__ = __result_obj__ = result_64;
                    come_call_finalizer3(result_64,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result59__;
                    come_call_finalizer3(result_64,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result55__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result55__;
                        come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* right_value98;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj23;
void* right_value99;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj24;
void* right_value100;
struct list_item$1sNodeph* litem_68;
struct sNode* __dec_obj25;
struct list$1sNodeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
right_value99 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
right_value100 = (void*)0;
memset(&litem_68, 0, sizeof(struct list_item$1sNodeph*));
                            if(self->len==0) {
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value98,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_66->prev=((void*)0);
                                litem_66->next=((void*)0);
                                __dec_obj23=litem_66->item;
                                litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_66;
                                self->head=litem_66;
                            }
                            else {
                                if(self->len==1) {
                                    litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value99,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_67->prev=self->head;
                                    litem_67->next=((void*)0);
                                    __dec_obj24=litem_67->item;
                                    litem_67->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_67;
                                    self->head->next=litem_67;
                                }
                                else {
                                    litem_68=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value100=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
                                    come_call_finalizer3(right_value100,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_68->prev=self->tail;
                                    litem_68->next=((void*)0);
                                    __dec_obj25=litem_68->item;
                                    litem_68->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail->next=litem_68;
                                    self->tail=litem_68;
                                }
                            }
                            self->len++;
                            __result56__ = __result_obj__ = self;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result56__;
                            if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
struct sNode* __result57__;
void* right_value101;
struct sNode* result_69;
struct sNode* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
memset(&result_69, 0, sizeof(struct sNode*));
                            if(self==(void*)0) {
                                __result57__ = __result_obj__ = (void*)0;
                                return __result57__;
                            }
                            result_69=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value101=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                            if(right_value101) { right_value101 = come_decrement_ref_count2(right_value101, ((struct sNode*)right_value101)->finalize, ((struct sNode*)right_value101)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            if(self!=((void*)0)&&self->clone!=((void*)0)) {
                                result_69->_protocol_obj=self->clone(self->_protocol_obj);
                            }
                            if(self!=((void*)0)) {
                                result_69->finalize=self->finalize;
                            }
                            if(self!=((void*)0)) {
                                result_69->clone=self->clone;
                            }
                            if(self!=((void*)0)) {
                                result_69->compile=self->compile;
                            }
                            if(self!=((void*)0)) {
                                result_69->sline=self->sline;
                            }
                            if(self!=((void*)0)) {
                                result_69->sname=self->sname;
                            }
                            if(self!=((void*)0)) {
                                result_69->terminated=self->terminated;
                            }
                            if(self!=((void*)0)) {
                                result_69->kind=self->kind;
                            }
                            __result58__ = __result_obj__ = result_69;
                            if(result_69) { result_69 = come_decrement_ref_count2(result_69, ((struct sNode*)result_69)->finalize, ((struct sNode*)result_69)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            return __result58__;
                            if(result_69) { result_69 = come_decrement_ref_count2(result_69, ((struct sNode*)result_69)->finalize, ((struct sNode*)result_69)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_70;
struct list_item$1sNodeph* prev_it_71;
memset(&it_70, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_71, 0, sizeof(struct list_item$1sNodeph*));
                    it_70=self->head;
                    while(it_70!=((void*)0)) {
                        prev_it_71=it_70;
                        it_70=it_70->next;
                        come_call_finalizer3(prev_it_71,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result60__;
void* right_value105;
void* right_value106;
struct list$1charph* result_72;
struct list_item$1charph* it_73;
void* right_value110;
struct list$1charph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value105 = (void*)0;
right_value106 = (void*)0;
memset(&result_72, 0, sizeof(struct list$1charph*));
memset(&it_73, 0, sizeof(struct list_item$1charph*));
right_value110 = (void*)0;
                    if(self==((void*)0)) {
                        __result60__ = __result_obj__ = ((void*)0);
                        return __result60__;
                    }
                    result_72=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value106=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value105=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))))));
                    come_call_finalizer3(right_value105,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value106,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_73=self->head;
                    while(it_73!=((void*)0)) {
                        list$1charph_add(result_72,(char*)come_increment_ref_count(((char*)(right_value110=string_clone(it_73->item)))));
                        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        it_73=it_73->next;
                    }
                    __result63__ = __result_obj__ = result_72;
                    come_call_finalizer3(result_72,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result63__;
                    come_call_finalizer3(result_72,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
void* right_value107;
struct list_item$1charph* litem_74;
char* __dec_obj28;
void* right_value108;
struct list_item$1charph* litem_75;
char* __dec_obj29;
void* right_value109;
struct list_item$1charph* litem_76;
char* __dec_obj30;
struct list$1charph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
right_value108 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1charph*));
right_value109 = (void*)0;
memset(&litem_76, 0, sizeof(struct list_item$1charph*));
                            if(self->len==0) {
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
                                come_call_finalizer3(right_value107,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_74->prev=((void*)0);
                                litem_74->next=((void*)0);
                                __dec_obj28=litem_74->item;
                                litem_74->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_74;
                                self->head=litem_74;
                            }
                            else {
                                if(self->len==1) {
                                    litem_75=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
                                    come_call_finalizer3(right_value108,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_75->prev=self->head;
                                    litem_75->next=((void*)0);
                                    __dec_obj29=litem_75->item;
                                    litem_75->item=(char*)come_increment_ref_count(item);
                                    __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_75;
                                    self->head->next=litem_75;
                                }
                                else {
                                    litem_76=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value109=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
                                    come_call_finalizer3(right_value109,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_76->prev=self->tail;
                                    litem_76->next=((void*)0);
                                    __dec_obj30=litem_76->item;
                                    litem_76->item=(char*)come_increment_ref_count(item);
                                    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_76;
                                    self->tail=litem_76;
                                }
                            }
                            self->len++;
                            __result62__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result62__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_77;
struct list_item$1charph* prev_it_78;
memset(&it_77, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_78, 0, sizeof(struct list_item$1charph*));
                    it_77=self->head;
                    while(it_77!=((void*)0)) {
                        prev_it_78=it_77;
                        it_77=it_77->next;
                        come_call_finalizer3(prev_it_78,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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

static void list$1sRightValueObjectpp_finalize(struct list$1sRightValueObjectp* self){
struct list_item$1sRightValueObjectp* it_82;
struct list_item$1sRightValueObjectp* prev_it_83;
memset(&it_82, 0, sizeof(struct list_item$1sRightValueObjectp*));
memset(&prev_it_83, 0, sizeof(struct list_item$1sRightValueObjectp*));
                    it_82=self->head;
                    while(it_82!=((void*)0)) {
                        prev_it_83=it_82;
                        it_82=it_82->next;
                        come_call_finalizer3(prev_it_83,list_item$1sRightValueObjectpp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sRightValueObjectpp_finalize(struct list_item$1sRightValueObjectp* self){
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value127;
struct sLineNode* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
    ((struct sNodeBase*)(right_value127=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value127,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result66__ = __result_obj__ = self;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result66__;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__;
void* right_value128;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
    __result67__ = __result_obj__ = ((char*)(right_value128=__builtin_string("sLineNode")));
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result67__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* right_value129;
void* right_value130;
struct CVALUE* come_value_90;
void* right_value131;
char* __dec_obj38;
void* right_value132;
void* right_value133;
struct sType* __dec_obj39;
_Bool __result69__;
right_value129 = (void*)0;
right_value130 = (void*)0;
memset(&come_value_90, 0, sizeof(struct CVALUE*));
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
    come_value_90=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value130=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value129=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 124, "CVALUE"))))))));
    come_call_finalizer3(right_value129,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value130,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj38=come_value_90->c_value;
    come_value_90->c_value=(char*)come_increment_ref_count(((char*)(right_value131=xsprintf("%d",info->sline))));
    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj39=come_value_90->type;
    come_value_90->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value132=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 127, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value132,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value133,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_90->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_90));
    add_come_last_code(info,"%s;\n",come_value_90->c_value);
    __result69__ = (_Bool)1;
    come_call_finalizer3(come_value_90,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result69__;
    come_call_finalizer3(come_value_90,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
void* right_value134;
struct list_item$1CVALUEph* litem_91;
struct CVALUE* __dec_obj40;
void* right_value135;
struct list_item$1CVALUEph* litem_92;
struct CVALUE* __dec_obj41;
void* right_value136;
struct list_item$1CVALUEph* litem_93;
struct CVALUE* __dec_obj42;
struct list$1CVALUEph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
memset(&litem_91, 0, sizeof(struct list_item$1CVALUEph*));
right_value135 = (void*)0;
memset(&litem_92, 0, sizeof(struct list_item$1CVALUEph*));
right_value136 = (void*)0;
memset(&litem_93, 0, sizeof(struct list_item$1CVALUEph*));
        if(self->len==0) {
            litem_91=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value134=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 219, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value134,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_91->prev=((void*)0);
            litem_91->next=((void*)0);
            __dec_obj40=litem_91->item;
            litem_91->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj40,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_91;
            self->head=litem_91;
        }
        else {
            if(self->len==1) {
                litem_92=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value135=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 229, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value135,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_92->prev=self->head;
                litem_92->next=((void*)0);
                __dec_obj41=litem_92->item;
                litem_92->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj41,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_92;
                self->head->next=litem_92;
            }
            else {
                litem_93=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value136=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 239, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value136,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_93->prev=self->tail;
                litem_93->next=((void*)0);
                __dec_obj42=litem_93->item;
                litem_93->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj42,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_93;
                self->tail=litem_93;
            }
        }
        self->len++;
        __result68__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result68__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
                if(self!=((void*)0)&&self->item!=((void*)0)) {
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value137;
struct sSNameNode* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
    ((struct sNodeBase*)(right_value137=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value137,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result70__ = __result_obj__ = self;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result70__;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__;
void* right_value138;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
    __result71__ = __result_obj__ = ((char*)(right_value138=__builtin_string("sSNameNode")));
    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result71__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* right_value139;
void* right_value140;
struct CVALUE* come_value_94;
void* right_value141;
char* __dec_obj43;
void* right_value142;
void* right_value143;
struct sType* __dec_obj44;
_Bool __result72__;
right_value139 = (void*)0;
right_value140 = (void*)0;
memset(&come_value_94, 0, sizeof(struct CVALUE*));
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
    come_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value140=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value139=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 152, "CVALUE"))))))));
    come_call_finalizer3(right_value139,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value140,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj43=come_value_94->c_value;
    come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value141=xsprintf("\"%s\"",info->sname))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj44=come_value_94->type;
    come_value_94->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value142=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 155, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value142,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value143,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_94->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_94));
    add_come_last_code(info,"%s;\n",come_value_94->c_value);
    __result72__ = (_Bool)1;
    come_call_finalizer3(come_value_94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result72__;
    come_call_finalizer3(come_value_94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value144;
struct sFuncNode* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
    ((struct sNodeBase*)(right_value144=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value144,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result73__ = __result_obj__ = self;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result73__;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__;
void* right_value145;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value145 = (void*)0;
    __result74__ = __result_obj__ = ((char*)(right_value145=__builtin_string("sFuncNode")));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result74__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* right_value146;
void* right_value147;
struct CVALUE* come_value_95;
void* right_value148;
char* __dec_obj45;
void* right_value149;
void* right_value150;
struct sType* __dec_obj46;
_Bool __result75__;
right_value146 = (void*)0;
right_value147 = (void*)0;
memset(&come_value_95, 0, sizeof(struct CVALUE*));
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
    come_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value147=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value146=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 180, "CVALUE"))))))));
    come_call_finalizer3(right_value146,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value147,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj45=come_value_95->c_value;
    come_value_95->c_value=(char*)come_increment_ref_count(((char*)(right_value148=xsprintf("\"%s\"",info->come_fun->mName))));
    __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj46=come_value_95->type;
    come_value_95->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value149=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 183, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value149,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value150,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_95->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_95));
    add_come_last_code(info,"%s;\n",come_value_95->c_value);
    __result75__ = (_Bool)1;
    come_call_finalizer3(come_value_95,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result75__;
    come_call_finalizer3(come_value_95,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value151;
struct sCallerFuncNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
    ((struct sNodeBase*)(right_value151=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value151,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result76__ = __result_obj__ = self;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result76__;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__;
void* right_value152;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
    __result77__ = __result_obj__ = ((char*)(right_value152=__builtin_string("sCallerFuncNode")));
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result77__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* right_value153;
void* right_value154;
struct CVALUE* come_value_96;
void* right_value155;
char* __dec_obj47;
void* right_value156;
char* __dec_obj48;
void* right_value157;
void* right_value158;
struct sType* __dec_obj49;
_Bool __result78__;
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&come_value_96, 0, sizeof(struct CVALUE*));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
    come_value_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value154=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value153=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 209, "CVALUE"))))))));
    come_call_finalizer3(right_value153,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value154,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    if(info->caller_fun) {
        __dec_obj47=come_value_96->c_value;
        come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("\"%s\"",info->caller_fun->mName))));
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    else {
        __dec_obj48=come_value_96->c_value;
        come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value156=xsprintf("\"\""))));
        __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    __dec_obj49=come_value_96->type;
    come_value_96->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value157=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 217, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value157,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value158,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_96->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_96));
    add_come_last_code(info,"%s;\n",come_value_96->c_value);
    __result78__ = (_Bool)1;
    come_call_finalizer3(come_value_96,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result78__;
    come_call_finalizer3(come_value_96,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value159;
struct sCallerLineNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
    ((struct sNodeBase*)(right_value159=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value159,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result79__ = __result_obj__ = self;
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result79__;
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* right_value160;
void* right_value161;
struct CVALUE* come_value_97;
void* right_value162;
char* __dec_obj50;
void* right_value163;
void* right_value164;
struct sType* __dec_obj51;
_Bool __result80__;
right_value160 = (void*)0;
right_value161 = (void*)0;
memset(&come_value_97, 0, sizeof(struct CVALUE*));
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
    come_value_97=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value161=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 238, "CVALUE"))))))));
    come_call_finalizer3(right_value160,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value161,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj50=come_value_97->c_value;
    come_value_97->c_value=(char*)come_increment_ref_count(((char*)(right_value162=xsprintf("%d",info->caller_line))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj51=come_value_97->type;
    come_value_97->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value163=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 241, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value163,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value164,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_97->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_97));
    add_come_last_code(info,"%s;\n",come_value_97->c_value);
    __result80__ = (_Bool)1;
    come_call_finalizer3(come_value_97,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result80__;
    come_call_finalizer3(come_value_97,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__;
void* right_value165;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
    __result81__ = __result_obj__ = ((char*)(right_value165=__builtin_string("sCallerLineNode")));
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result81__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value166;
struct sCallerSNameNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
    ((struct sNodeBase*)(right_value166=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value166,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result82__ = __result_obj__ = self;
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result82__;
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* right_value167;
void* right_value168;
struct CVALUE* come_value_98;
void* right_value169;
char* __dec_obj52;
void* right_value170;
void* right_value171;
struct sType* __dec_obj53;
_Bool __result83__;
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&come_value_98, 0, sizeof(struct CVALUE*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
    come_value_98=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value168=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value167=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 266, "CVALUE"))))))));
    come_call_finalizer3(right_value167,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value168,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj52=come_value_98->c_value;
    come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value169=xsprintf("\"%s\"",info->caller_sname))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj53=come_value_98->type;
    come_value_98->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value170=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 269, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value170,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value171,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_98->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_98));
    add_come_last_code(info,"%s;\n",come_value_98->c_value);
    __result83__ = (_Bool)1;
    come_call_finalizer3(come_value_98,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result83__;
    come_call_finalizer3(come_value_98,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__;
void* right_value172;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value172 = (void*)0;
    __result84__ = __result_obj__ = ((char*)(right_value172=__builtin_string("sCallerSNameNode")));
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result84__;
}

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value173;
char* fun_name3_100;
struct list$1sTypeph* method_generics_types_before_101;
struct list$1sTypeph* __dec_obj54;
struct sGenericsFun* generics_fun_102;
void* right_value174;
_Bool _if_conditional1;
void* right_value175;
char* __result89__;
struct list$1sTypeph* __dec_obj55;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
memset(&fun_name3_100, 0, sizeof(char*));
memset(&method_generics_types_before_101, 0, sizeof(struct list$1sTypeph*));
memset(&generics_fun_102, 0, sizeof(struct sGenericsFun*));
right_value174 = (void*)0;
right_value175 = (void*)0;
    static int num_method_generics_99=0;
    fun_name3_100=(char*)come_increment_ref_count(((char*)(right_value173=xsprintf("%s_method_generics%d",fun_name,num_method_generics_99++))));
    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    method_generics_types_before_101=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj54=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj54,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_102=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name,((void*)0));
    if(generics_fun_102) {
        if(_if_conditional1=!create_method_generics_fun((char*)come_increment_ref_count(((char*)(right_value174=__builtin_string(fun_name3_100)))),generics_fun_102,info),        right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
        _if_conditional1) {
            err_msg(info,"%s not found",fun_name3_100);
            __result89__ = __result_obj__ = ((char*)(right_value175=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
            fun_name3_100 = come_decrement_ref_count2(fun_name3_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_101,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result89__;
        }
    }
    __dec_obj55=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_101);
    come_call_finalizer3(__dec_obj55,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result90__ = __result_obj__ = fun_name3_100;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    fun_name3_100 = come_decrement_ref_count2(fun_name3_100, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_101,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    return __result90__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    fun_name3_100 = come_decrement_ref_count2(fun_name3_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_101,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_103;
unsigned int it_104;
struct sGenericsFun* __result85__;
struct sGenericsFun* __result86__;
struct sGenericsFun* __result87__;
struct sGenericsFun* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_103, 0, sizeof(unsigned int));
memset(&it_104, 0, sizeof(unsigned int));
        hash_103=string_get_hash_key(((char*)key))%self->size;
        it_104=hash_103;
        while((_Bool)1) {
            if(self->item_existance[it_104]) {
                if(string_equals(self->keys[it_104],key)) {
                    __result85__ = __result_obj__ = self->items[it_104];
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result85__;
                }
                it_104++;
                if(it_104>=self->size) {
                    it_104=0;
                }
                else {
                    if(it_104==hash_103) {
                        __result86__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result86__;
                    }
                }
            }
            else {
                __result87__ = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result87__;
            }
        }
        __result88__ = __result_obj__ = default_value;
        come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
        return __result88__;
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

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* right_value176;
void* right_value177;
char* __dec_obj56;
void* right_value187;
struct list$1tuple2$2charphsNodephph* __dec_obj62;
struct list$1sTypeph* __dec_obj63;
struct sFunCallNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value187 = (void*)0;
    ((struct sNodeBase*)(right_value176=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value176,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj56=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value177=__builtin_string(fun_name))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj62=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value187=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer3(__dec_obj62,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value187,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    self->guard_break=guard_break;
    __dec_obj63=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj63,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result97__ = __result_obj__ = self;
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result97__;
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __result_obj__;
void* right_value188;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
    __result98__ = __result_obj__ = ((char*)(right_value188=__builtin_string("sFunCallNode")));
    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result98__;
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
char* fun_name_115;
struct list$1tuple2$2charphsNodephph* params_116;
struct sVar* var__117;
struct sType* lambda_type_118;
_Bool __result99__;
void* right_value189;
struct sType* result_type_119;
void* right_value190;
void* right_value191;
struct list$1CVALUEph* come_params_120;
_Bool __result101__;
int i_123;
struct list$1tuple2$2charphsNodephph* o2_saved_124;
struct tuple2$2charphsNodeph* it_127;
struct tuple2$2charphsNodeph* multiple_assign_var1;
char* label_130;
struct sNode* node_131;
_Bool __result108__;
void* right_value192;
struct CVALUE* come_value_132;
void* right_value193;
void* right_value194;
void* right_value195;
void* right_value196;
void* right_value197;
struct buffer* buf_136;
int j_137;
struct list$1CVALUEph* o2_saved_138;
struct CVALUE* it_141;
void* right_value198;
void* right_value199;
struct CVALUE* come_value_144;
void* right_value200;
char* __dec_obj64;
void* right_value201;
struct sType* __dec_obj65;
void* right_value202;
char* __dec_obj66;
void* right_value203;
void* right_value204;
struct list$1CVALUEph* come_params_145;
struct list$1tuple2$2charphsNodephph* o2_saved_146;
struct tuple2$2charphsNodeph* it_147;
struct tuple2$2charphsNodeph* multiple_assign_var2;
char* label_148;
struct sNode* node_149;
_Bool __result117__;
void* right_value205;
struct CVALUE* come_value_150;
void* right_value206;
void* right_value207;
struct buffer* buf_151;
int j_152;
struct list$1CVALUEph* o2_saved_153;
struct CVALUE* it_154;
void* right_value208;
void* right_value209;
struct CVALUE* come_value_155;
void* right_value210;
char* __dec_obj67;
void* right_value211;
void* right_value212;
struct sType* __dec_obj68;
void* right_value213;
void* right_value214;
struct sType* __dec_obj69;
void* right_value215;
void* right_value216;
struct sType* __dec_obj70;
void* right_value217;
void* right_value218;
struct sType* __dec_obj71;
_Bool __result118__;
void* right_value219;
char* __dec_obj72;
void* right_value220;
char* __dec_obj73;
char* p_156;
int version_157;
char* p2_158;
int i_160;
void* right_value221;
char* new_fun_name_161;
void* right_value222;
char* __dec_obj74;
void* right_value223;
char* new_fun_name_165;
void* right_value224;
char* __dec_obj75;
_Bool __result123__;
int i_166;
void* right_value225;
char* new_fun_name_167;
void* right_value226;
char* __dec_obj76;
struct sFun* fun_168;
void* right_value227;
void* right_value228;
struct list$1CVALUEph* come_params_171;
int i_172;
struct sType* __dec_obj77;
struct sType* result_type_173;
struct list$1tuple2$2charphsNodephph* o2_saved_174;
struct tuple2$2charphsNodeph* it_175;
struct tuple2$2charphsNodeph* multiple_assign_var3;
char* label_176;
struct sNode* node_177;
_Bool __result128__;
void* right_value229;
struct CVALUE* come_value_178;
struct sType* __dec_obj81;
void* right_value233;
void* right_value234;
struct buffer* buf_182;
int j_183;
struct list$1CVALUEph* o2_saved_184;
struct CVALUE* it_185;
void* right_value235;
void* right_value236;
struct CVALUE* come_value_186;
void* right_value237;
char* __dec_obj82;
struct sType* __dec_obj83;
_Bool __result130__;
void* right_value238;
struct sType* result_type_187;
void* right_value239;
void* right_value240;
struct list$1sTypeph* param_types_188;
struct list$1sTypeph* o2_saved_189;
struct sType* it_192;
void* right_value241;
void* right_value242;
struct sType* it2_195;
void* right_value246;
void* right_value247;
struct sType* __dec_obj87;
void* right_value248;
void* right_value249;
struct list$1CVALUEph* come_params_199;
int i_200;
struct list$1tuple2$2charphsNodephph* o2_saved_201;
struct tuple2$2charphsNodeph* it_202;
struct tuple2$2charphsNodeph* multiple_assign_var4;
char* label_203;
struct sNode* node_204;
_Bool __result138__;
void* right_value250;
struct CVALUE* come_value_205;
int n_206;
struct list$1charph* o2_saved_207;
char* it_210;
void* right_value251;
void* right_value252;
void* right_value253;
int i_215;
struct list$1tuple2$2charphsNodephph* o2_saved_216;
struct tuple2$2charphsNodeph* it_217;
struct tuple2$2charphsNodeph* multiple_assign_var5;
char* label_218;
struct sNode* node_219;
_Bool __result147__;
void* right_value254;
struct CVALUE* come_value_220;
_Bool __result150__;
void* right_value255;
struct CVALUE* come_value_224;
void* right_value256;
void* right_value257;
void* right_value258;
void* right_value259;
char* default_param_225;
char* param_name_229;
struct buffer* source_230;
char* p_231;
char* head_232;
int sline_233;
void* right_value260;
struct buffer* __dec_obj89;
void* right_value261;
struct sNode* node_234;
_Bool __result153__;
struct buffer* __dec_obj90;
void* right_value262;
struct CVALUE* come_value_235;
void* right_value263;
void* right_value264;
void* right_value265;
_Bool __result154__;
_Bool __result155__;
void* right_value266;
void* right_value267;
struct buffer* buf_236;
int j_237;
struct list$1CVALUEph* o2_saved_238;
struct CVALUE* it_239;
void* right_value268;
void* right_value269;
struct CVALUE* come_value_240;
void* right_value270;
char* __dec_obj91;
void* right_value271;
struct sType* __dec_obj92;
void* right_value272;
char* __dec_obj93;
void* right_value273;
void* right_value274;
char* __dec_obj94;
_Bool __result156__;
memset(&fun_name_115, 0, sizeof(char*));
memset(&params_116, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&var__117, 0, sizeof(struct sVar*));
memset(&lambda_type_118, 0, sizeof(struct sType*));
right_value189 = (void*)0;
memset(&result_type_119, 0, sizeof(struct sType*));
right_value190 = (void*)0;
right_value191 = (void*)0;
memset(&come_params_120, 0, sizeof(struct list$1CVALUEph*));
memset(&i_123, 0, sizeof(int));
memset(&o2_saved_124, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_127, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value192 = (void*)0;
memset(&come_value_132, 0, sizeof(struct CVALUE*));
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&buf_136, 0, sizeof(struct buffer*));
memset(&j_137, 0, sizeof(int));
memset(&o2_saved_138, 0, sizeof(struct list$1CVALUEph*));
memset(&it_141, 0, sizeof(struct CVALUE*));
right_value198 = (void*)0;
right_value199 = (void*)0;
memset(&come_value_144, 0, sizeof(struct CVALUE*));
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
memset(&come_params_145, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_146, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_147, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value205 = (void*)0;
memset(&come_value_150, 0, sizeof(struct CVALUE*));
right_value206 = (void*)0;
right_value207 = (void*)0;
memset(&buf_151, 0, sizeof(struct buffer*));
memset(&j_152, 0, sizeof(int));
memset(&o2_saved_153, 0, sizeof(struct list$1CVALUEph*));
memset(&it_154, 0, sizeof(struct CVALUE*));
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&come_value_155, 0, sizeof(struct CVALUE*));
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
right_value218 = (void*)0;
right_value219 = (void*)0;
right_value220 = (void*)0;
memset(&p_156, 0, sizeof(char*));
memset(&version_157, 0, sizeof(int));
memset(&p2_158, 0, sizeof(char*));
memset(&i_160, 0, sizeof(int));
right_value221 = (void*)0;
memset(&new_fun_name_161, 0, sizeof(char*));
right_value222 = (void*)0;
right_value223 = (void*)0;
memset(&new_fun_name_165, 0, sizeof(char*));
right_value224 = (void*)0;
memset(&i_166, 0, sizeof(int));
right_value225 = (void*)0;
memset(&new_fun_name_167, 0, sizeof(char*));
right_value226 = (void*)0;
memset(&fun_168, 0, sizeof(struct sFun*));
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&come_params_171, 0, sizeof(struct list$1CVALUEph*));
memset(&i_172, 0, sizeof(int));
memset(&result_type_173, 0, sizeof(struct sType*));
memset(&o2_saved_174, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_175, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value229 = (void*)0;
memset(&come_value_178, 0, sizeof(struct CVALUE*));
right_value233 = (void*)0;
right_value234 = (void*)0;
memset(&buf_182, 0, sizeof(struct buffer*));
memset(&j_183, 0, sizeof(int));
memset(&o2_saved_184, 0, sizeof(struct list$1CVALUEph*));
memset(&it_185, 0, sizeof(struct CVALUE*));
right_value235 = (void*)0;
right_value236 = (void*)0;
memset(&come_value_186, 0, sizeof(struct CVALUE*));
right_value237 = (void*)0;
right_value238 = (void*)0;
memset(&result_type_187, 0, sizeof(struct sType*));
right_value239 = (void*)0;
right_value240 = (void*)0;
memset(&param_types_188, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_189, 0, sizeof(struct list$1sTypeph*));
memset(&it_192, 0, sizeof(struct sType*));
right_value241 = (void*)0;
right_value242 = (void*)0;
memset(&it2_195, 0, sizeof(struct sType*));
right_value246 = (void*)0;
right_value247 = (void*)0;
right_value248 = (void*)0;
right_value249 = (void*)0;
memset(&come_params_199, 0, sizeof(struct list$1CVALUEph*));
memset(&i_200, 0, sizeof(int));
memset(&o2_saved_201, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_202, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value250 = (void*)0;
memset(&come_value_205, 0, sizeof(struct CVALUE*));
memset(&n_206, 0, sizeof(int));
memset(&o2_saved_207, 0, sizeof(struct list$1charph*));
memset(&it_210, 0, sizeof(char*));
right_value251 = (void*)0;
right_value252 = (void*)0;
right_value253 = (void*)0;
memset(&i_215, 0, sizeof(int));
memset(&o2_saved_216, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_217, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value254 = (void*)0;
memset(&come_value_220, 0, sizeof(struct CVALUE*));
right_value255 = (void*)0;
memset(&come_value_224, 0, sizeof(struct CVALUE*));
right_value256 = (void*)0;
right_value257 = (void*)0;
right_value258 = (void*)0;
right_value259 = (void*)0;
memset(&default_param_225, 0, sizeof(char*));
memset(&param_name_229, 0, sizeof(char*));
memset(&source_230, 0, sizeof(struct buffer*));
memset(&p_231, 0, sizeof(char*));
memset(&head_232, 0, sizeof(char*));
memset(&sline_233, 0, sizeof(int));
right_value260 = (void*)0;
right_value261 = (void*)0;
memset(&node_234, 0, sizeof(struct sNode*));
right_value262 = (void*)0;
memset(&come_value_235, 0, sizeof(struct CVALUE*));
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
memset(&buf_236, 0, sizeof(struct buffer*));
memset(&j_237, 0, sizeof(int));
memset(&o2_saved_238, 0, sizeof(struct list$1CVALUEph*));
memset(&it_239, 0, sizeof(struct CVALUE*));
right_value268 = (void*)0;
right_value269 = (void*)0;
memset(&come_value_240, 0, sizeof(struct CVALUE*));
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
    fun_name_115=(char*)come_increment_ref_count(self->fun_name);
    params_116=self->params;
    var__117=get_variable_from_table(info->lv_table,fun_name_115);
    if(var__117==((void*)0)) {
        var__117=get_variable_from_table(info->gv_table,fun_name_115);
    }
    if(var__117) {
        lambda_type_118=var__117->mType;
        if(string_operator_not_equals(lambda_type_118->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name_115);
            __result99__ = (_Bool)0;
            fun_name_115 = come_decrement_ref_count2(fun_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result99__;
        }
        result_type_119=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_clone(lambda_type_118->mResultType->v1))));
        come_call_finalizer3(right_value189,sType_finalize, 0, 1, 0, 0, (void*)0);
        result_type_119->mStatic=(_Bool)0;
        come_params_120=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value191=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value190=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 346, "list$1CVALUEph"))))))));
        come_call_finalizer3(right_value190,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value191,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
        if(list$1sTypeph_length(lambda_type_118->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_116)&&!lambda_type_118->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_115,list$1sTypeph_length(lambda_type_118->mParamTypes),list$1tuple2$2charphsNodephph_length(params_116));
            __result101__ = (_Bool)0;
            come_call_finalizer3(result_type_119,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_120,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_115 = come_decrement_ref_count2(fun_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result101__;
        }
        i_123=0;
        for(        o2_saved_124=(params_116),it_127=list$1tuple2$2charphsNodephph_begin((o2_saved_124));        !list$1tuple2$2charphsNodephph_end((o2_saved_124));        it_127=list$1tuple2$2charphsNodephph_next((o2_saved_124))        ){
            multiple_assign_var1=it_127;
            label_130=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_131=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            if(!node_compile(node_131,info)) {
                __result108__ = (_Bool)0;
                label_130 = come_decrement_ref_count2(label_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_131) { node_131 = come_decrement_ref_count2(node_131, ((struct sNode*)node_131)->finalize, ((struct sNode*)node_131)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(result_type_119,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_120,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_115 = come_decrement_ref_count2(fun_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result108__;
            }
            come_value_132=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value192=get_value_from_stack(-1,info))));
            come_call_finalizer3(right_value192,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            if(lambda_type_118->mVarArgs&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_118->mParamTypes,i_123), "05call.c", 362, 0))==((void*)0)) {
            }
            else {
                check_assign_type(((char*)(right_value195=xsprintf("\%s calling param #\%s",((char*)(right_value193=string_to_string(fun_name_115))),((char*)(right_value194=int_to_string(i_123)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_118->mParamTypes,i_123), "05call.c", 365, 1)),come_value_132->type,come_value_132,(_Bool)0,(_Bool)1,info);
                right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_118->mParamTypes,i_123), "05call.c", 366, 2))->mHeap&&come_value_132->type->mHeap) {
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_118->mParamTypes,i_123), "05call.c", 367, 3)),come_value_132->type,come_value_132,info);
                }
            }
            list$1CVALUEph_push_back(come_params_120,(struct CVALUE*)come_increment_ref_count(come_value_132));
            dec_stack_ptr(1,info);
            i_123++;
            label_130 = come_decrement_ref_count2(label_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_131) { node_131 = come_decrement_ref_count2(node_131, ((struct sNode*)node_131)->finalize, ((struct sNode*)node_131)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_136=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value197=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value196=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 378, "buffer"))))))));
        come_call_finalizer3(right_value196,buffer_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value197,buffer_finalize, 0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_136,var__117->mCValueName);
        buffer_append_str(buf_136,"(");
        j_137=0;
        for(        o2_saved_138=(struct list$1CVALUEph*)come_increment_ref_count((come_params_120)),it_141=list$1CVALUEph_begin((o2_saved_138));        !list$1CVALUEph_end((o2_saved_138));        it_141=list$1CVALUEph_next((o2_saved_138))        ){
            buffer_append_str(buf_136,it_141->c_value);
            if(j_137!=list$1CVALUEph_length(come_params_120)-1) {
                buffer_append_str(buf_136,",");
            }
            j_137++;
        }
        come_call_finalizer3(o2_saved_138,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_136,")");
        come_value_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value199=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value198=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 395, "CVALUE"))))))));
        come_call_finalizer3(right_value198,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value199,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj64=come_value_144->c_value;
        come_value_144->c_value=(char*)come_increment_ref_count(((char*)(right_value200=buffer_to_string(buf_136))));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj65=come_value_144->type;
        come_value_144->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value201=sType_clone(result_type_119))));
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value201,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_144->type->mStatic=(_Bool)0;
        come_value_144->var=((void*)0);
        if(lambda_type_118->mResultType->v1->mHeap) {
            append_object_to_right_values2(come_value_144,(struct sType*)come_increment_ref_count(lambda_type_118->mResultType->v1),info);
        }
        add_come_last_code(info,"%s;\n",come_value_144->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_144));
        come_call_finalizer3(result_type_119,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_120,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_136,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_144,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(list$1sTypeph_length(self->method_generics_types)>0) {
            __dec_obj66=fun_name_115;
            fun_name_115=(char*)come_increment_ref_count(((char*)(right_value202=make_method_generics_function((char*)come_increment_ref_count(fun_name_115),(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types),info))));
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        if(string_operator_equals(fun_name_115,"__builtin_memmove")||string_operator_equals(fun_name_115,"__builtin_memset")||string_operator_equals(fun_name_115,"__builtin_ffs")||string_operator_equals(fun_name_115,"__builtin_ffsl")||string_operator_equals(fun_name_115,"__builtin_ffsll")) {
            come_params_145=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value204=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value203=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 416, "list$1CVALUEph"))))))));
            come_call_finalizer3(right_value203,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(right_value204,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_146=(params_116),it_147=list$1tuple2$2charphsNodephph_begin((o2_saved_146));            !list$1tuple2$2charphsNodephph_end((o2_saved_146));            it_147=list$1tuple2$2charphsNodephph_next((o2_saved_146))            ){
                multiple_assign_var2=it_147;
                label_148=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                node_149=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                if(!node_compile(node_149,info)) {
                    __result117__ = (_Bool)0;
                    label_148 = come_decrement_ref_count2(label_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_149) { node_149 = come_decrement_ref_count2(node_149, ((struct sNode*)node_149)->finalize, ((struct sNode*)node_149)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_params_145,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_115 = come_decrement_ref_count2(fun_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result117__;
                }
                come_value_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value205=get_value_from_stack(-1,info))));
                come_call_finalizer3(right_value205,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                dec_stack_ptr(1,info);
                list$1CVALUEph_push_back(come_params_145,(struct CVALUE*)come_increment_ref_count(come_value_150));
                label_148 = come_decrement_ref_count2(label_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_149) { node_149 = come_decrement_ref_count2(node_149, ((struct sNode*)node_149)->finalize, ((struct sNode*)node_149)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_151=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value207=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value206=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 430, "buffer"))))))));
            come_call_finalizer3(right_value206,buffer_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(right_value207,buffer_finalize, 0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_151,fun_name_115);
            buffer_append_str(buf_151,"(");
            j_152=0;
            for(            o2_saved_153=(struct list$1CVALUEph*)come_increment_ref_count((come_params_145)),it_154=list$1CVALUEph_begin((o2_saved_153));            !list$1CVALUEph_end((o2_saved_153));            it_154=list$1CVALUEph_next((o2_saved_153))            ){
                buffer_append_str(buf_151,it_154->c_value);
                if(j_152!=list$1CVALUEph_length(come_params_145)-1) {
                    buffer_append_str(buf_151,",");
                }
                j_152++;
            }
            come_call_finalizer3(o2_saved_153,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_151,")");
            come_value_155=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value208=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 447, "CVALUE"))))))));
            come_call_finalizer3(right_value208,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(right_value209,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj67=come_value_155->c_value;
            come_value_155->c_value=(char*)come_increment_ref_count(((char*)(right_value210=buffer_to_string(buf_151))));
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(string_operator_equals(fun_name_115,"__builtin_memmove")||string_operator_equals(fun_name_115,"__builtin_memset")) {
                __dec_obj68=come_value_155->type;
                come_value_155->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value212=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value211=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 451, "sType")))),"void",(_Bool)0,info))));
                come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value211,sType_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(right_value212,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            else {
                if(string_operator_equals(fun_name_115,"__builtin_ffs")) {
                    __dec_obj69=come_value_155->type;
                    come_value_155->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value213=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 454, "sType")))),"int",(_Bool)0,info))));
                    come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value213,sType_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(right_value214,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                else {
                    if(string_operator_equals(fun_name_115,"__builtin_ffsl")) {
                        __dec_obj70=come_value_155->type;
                        come_value_155->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value216=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value215=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 457, "sType")))),"int",(_Bool)0,info))));
                        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value215,sType_finalize, 0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(right_value216,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    else {
                        if(string_operator_equals(fun_name_115,"__builtin_ffsll")) {
                            __dec_obj71=come_value_155->type;
                            come_value_155->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value218=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value217=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 460, "sType")))),"int",(_Bool)0,info))));
                            come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value217,sType_finalize, 0, 1, 0, 0, (void*)0);
                            come_call_finalizer3(right_value218,sType_finalize, 0, 1, 0, 0, (void*)0);
                        }
                    }
                }
            }
            come_value_155->var=((void*)0);
            add_come_last_code(info,"%s;\n",come_value_155->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_155));
            __result118__ = (_Bool)1;
            come_call_finalizer3(come_params_145,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_151,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_155,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_115 = come_decrement_ref_count2(fun_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result118__;
            come_call_finalizer3(come_params_145,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_151,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_155,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(string_operator_equals(fun_name_115,"string")) {
                __dec_obj72=fun_name_115;
                fun_name_115=(char*)come_increment_ref_count(((char*)(right_value219=__builtin_string("__builtin_string"))));
                __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else {
                if(string_operator_equals(fun_name_115,"wstring")) {
                    __dec_obj73=fun_name_115;
                    fun_name_115=(char*)come_increment_ref_count(((char*)(right_value220=__builtin_string("__builtin_wstring"))));
                    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                else {
                    if(string_operator_equals(fun_name_115,"inherit")) {
                        p_156=info->come_fun->mName;
                        version_157=0;
                        while(*p_156) {
                            if(*p_156==95&&*(p_156+1)==118&&xisdigit(*(p_156+2))) {
                                p2_158=p_156+2;
                                version_157=0;
                                while(xisdigit(*p2_158)) {
                                    version_157=version_157*10+(*p2_158-48);
                                    p2_158++;
                                }
                                break;
                            }
                            else {
                                p_156++;
                            }
                        }
                        char real_fun_name_159[2048];
                        memset(&real_fun_name_159, 0, sizeof(char)                        *(2048)                        );
                        memcpy(real_fun_name_159,info->come_fun->mName,p_156-info->come_fun->mName);
                        real_fun_name_159[p_156-info->come_fun->mName]=0;
                        for(                        i_160=version_157-1;                        i_160>=1;                        i_160--                        ){
                            new_fun_name_161=(char*)come_increment_ref_count(((char*)(right_value221=xsprintf("%s_v%d",real_fun_name_159,i_160))));
                            right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            if(map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_161)) {
                                __dec_obj74=fun_name_115;
                                fun_name_115=(char*)come_increment_ref_count(((char*)(right_value222=__builtin_string(new_fun_name_161))));
                                __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                new_fun_name_161 = come_decrement_ref_count2(new_fun_name_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_161 = come_decrement_ref_count2(new_fun_name_161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(i_160==0) {
                            new_fun_name_165=(char*)come_increment_ref_count(((char*)(right_value223=xsprintf("%s",real_fun_name_159))));
                            right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            if(map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_165)) {
                                __dec_obj75=fun_name_115;
                                fun_name_115=(char*)come_increment_ref_count(((char*)(right_value224=__builtin_string(new_fun_name_165))));
                                __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            if(string_operator_equals(fun_name_115,info->come_fun->mName)) {
                                err_msg(info,"invalid inherit");
                                __result123__ = (_Bool)0;
                                new_fun_name_165 = come_decrement_ref_count2(new_fun_name_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_115 = come_decrement_ref_count2(fun_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result123__;
                            }
                            new_fun_name_165 = come_decrement_ref_count2(new_fun_name_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        for(                        i_166=128;                        i_166>=1;                        i_166--                        ){
                            new_fun_name_167=(char*)come_increment_ref_count(((char*)(right_value225=xsprintf("%s_v%d",fun_name_115,i_166))));
                            right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            if(map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_167)) {
                                __dec_obj76=fun_name_115;
                                fun_name_115=(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string(new_fun_name_167))));
                                __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                new_fun_name_167 = come_decrement_ref_count2(new_fun_name_167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_167 = come_decrement_ref_count2(new_fun_name_167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
        fun_168=map$2charphsFunph_at(info->funcs,fun_name_115,((void*)0));
        if(string_operator_equals(fun_name_115,"__builtin_va_arg")) {
            come_params_171=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value228=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value227=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 537, "list$1CVALUEph"))))))));
            come_call_finalizer3(right_value227,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(right_value228,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
            i_172=0;
            __dec_obj77=result_type_173;
            result_type_173=((void*)0);
            come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
            for(            o2_saved_174=(params_116),it_175=list$1tuple2$2charphsNodephph_begin((o2_saved_174));            !list$1tuple2$2charphsNodephph_end((o2_saved_174));            it_175=list$1tuple2$2charphsNodephph_next((o2_saved_174))            ){
                multiple_assign_var3=it_175;
                label_176=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_177=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                if(!node_compile(node_177,info)) {
                    __result128__ = (_Bool)0;
                    label_176 = come_decrement_ref_count2(label_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_177) { node_177 = come_decrement_ref_count2(node_177, ((struct sNode*)node_177)->finalize, ((struct sNode*)node_177)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_params_171,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_173,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_115 = come_decrement_ref_count2(fun_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result128__;
                }
                come_value_178=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value229=get_value_from_stack(-1,info))));
                come_call_finalizer3(right_value229,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                dec_stack_ptr(1,info);
                list$1CVALUEph_add(come_params_171,(struct CVALUE*)come_increment_ref_count(come_value_178));
                __dec_obj81=result_type_173;
                result_type_173=(struct sType*)come_increment_ref_count(come_value_178->type);
                come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
                label_176 = come_decrement_ref_count2(label_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_177) { node_177 = come_decrement_ref_count2(node_177, ((struct sNode*)node_177)->finalize, ((struct sNode*)node_177)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_182=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value234=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value233=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 556, "buffer"))))))));
            come_call_finalizer3(right_value233,buffer_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(right_value234,buffer_finalize, 0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_182,fun_name_115);
            buffer_append_str(buf_182,"(");
            j_183=0;
            for(            o2_saved_184=(struct list$1CVALUEph*)come_increment_ref_count((come_params_171)),it_185=list$1CVALUEph_begin((o2_saved_184));            !list$1CVALUEph_end((o2_saved_184));            it_185=list$1CVALUEph_next((o2_saved_184))            ){
                buffer_append_str(buf_182,it_185->c_value);
                if(j_183!=list$1CVALUEph_length(come_params_171)-1) {
                    buffer_append_str(buf_182,",");
                }
                j_183++;
            }
            come_call_finalizer3(o2_saved_184,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_182,")");
            come_value_186=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value236=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value235=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 573, "CVALUE"))))))));
            come_call_finalizer3(right_value235,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(right_value236,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj82=come_value_186->c_value;
            come_value_186->c_value=(char*)come_increment_ref_count(((char*)(right_value237=buffer_to_string(buf_182))));
            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj83=come_value_186->type;
            come_value_186->type=(struct sType*)come_increment_ref_count(result_type_173);
            come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_186->var=((void*)0);
            add_come_last_code(info,"%s;\n",come_value_186->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_186));
            come_call_finalizer3(come_params_171,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_173,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_182,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_186,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(fun_168==((void*)0)) {
                err_msg(info,"function not found(%s) at normal function call(1)\n",fun_name_115);
                __result130__ = (_Bool)1;
                fun_name_115 = come_decrement_ref_count2(fun_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result130__;
            }
            else {
                result_type_187=(struct sType*)come_increment_ref_count(((struct sType*)(right_value238=sType_clone(fun_168->mResultType))));
                come_call_finalizer3(right_value238,sType_finalize, 0, 1, 0, 0, (void*)0);
                result_type_187->mStatic=(_Bool)0;
                param_types_188=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value240=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value239=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 590, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value239,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(right_value240,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
                for(                o2_saved_189=(struct list$1sTypeph*)come_increment_ref_count((fun_168->mParamTypes)),it_192=list$1sTypeph_begin((o2_saved_189));                !list$1sTypeph_end((o2_saved_189));                it_192=list$1sTypeph_next((o2_saved_189))                ){
                    it2_195=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=solve_generics(((struct sType*)(right_value241=sType_clone(it_192))),info->generics_type,info))));
                    come_call_finalizer3(right_value241,sType_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(right_value242,sType_finalize, 0, 1, 0, 0, (void*)0);
                    list$1sTypeph_push_back(param_types_188,(struct sType*)come_increment_ref_count(((struct sType*)(right_value246=sType_clone(it2_195)))));
                    come_call_finalizer3(right_value246,sType_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(it2_195,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_189,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj87=result_type_187;
                result_type_187=(struct sType*)come_increment_ref_count(((struct sType*)(right_value247=solve_generics(result_type_187,info->generics_type,info))));
                come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value247,sType_finalize, 0, 1, 0, 0, (void*)0);
                come_params_199=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value249=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value248=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 598, "list$1CVALUEph"))))))));
                come_call_finalizer3(right_value248,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(right_value249,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
                for(                i_200=0;                i_200<list$1sTypeph_length(fun_168->mParamTypes);                i_200++                ){
                    list$1CVALUEph_add(come_params_199,((void*)0));
                }
                for(                o2_saved_201=(params_116),it_202=list$1tuple2$2charphsNodephph_begin((o2_saved_201));                !list$1tuple2$2charphsNodephph_end((o2_saved_201));                it_202=list$1tuple2$2charphsNodephph_next((o2_saved_201))                ){
                    multiple_assign_var4=it_202;
                    label_203=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                    node_204=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
                    if(fun_168->mVarArgs||string_operator_equals(fun_name_115,"__builtin_va_start")) {
                    }
                    else {
                        if(label_203) {
                            if(!node_compile(node_204,info)) {
                                __result138__ = (_Bool)0;
                                label_203 = come_decrement_ref_count2(label_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_204) { node_204 = come_decrement_ref_count2(node_204, ((struct sNode*)node_204)->finalize, ((struct sNode*)node_204)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(result_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_188,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_199,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                fun_name_115 = come_decrement_ref_count2(fun_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result138__;
                            }
                            come_value_205=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value250=get_value_from_stack(-1,info))));
                            come_call_finalizer3(right_value250,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            dec_stack_ptr(1,info);
                            n_206=0;
                            for(                            o2_saved_207=(struct list$1charph*)come_increment_ref_count((fun_168->mParamNames)),it_210=list$1charph_begin((o2_saved_207));                            !list$1charph_end((o2_saved_207));                            it_210=list$1charph_next((o2_saved_207))                            ){
                                if(string_operator_equals(label_203,it_210)) {
                                    break;
                                }
                                n_206++;
                            }
                            come_call_finalizer3(o2_saved_207,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(list$1sTypephp_operator_load_element(param_types_188,n_206)) {
                                check_assign_type(((char*)(right_value253=xsprintf("\%s param num \%s is assinged to",((char*)(right_value251=string_to_string(fun_name_115))),((char*)(right_value252=int_to_string(n_206)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_188,n_206), "05call.c", 627, 4)),come_value_205->type,come_value_205,(_Bool)0,(_Bool)1,info);
                                right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            if(list$1sTypephp_operator_load_element(param_types_188,n_206)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_188,n_206), "05call.c", 629, 5))->mHeap&&come_value_205->type->mHeap) {
                                std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_188,n_206), "05call.c", 630, 6)),come_value_205->type,come_value_205,info);
                            }
                            list$1CVALUEph_replace(come_params_199,n_206,(struct CVALUE*)come_increment_ref_count(come_value_205));
                            come_call_finalizer3(come_value_205,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    label_203 = come_decrement_ref_count2(label_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_204) { node_204 = come_decrement_ref_count2(node_204, ((struct sNode*)node_204)->finalize, ((struct sNode*)node_204)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                i_215=0;
                for(                o2_saved_216=(params_116),it_217=list$1tuple2$2charphsNodephph_begin((o2_saved_216));                !list$1tuple2$2charphsNodephph_end((o2_saved_216));                it_217=list$1tuple2$2charphsNodephph_next((o2_saved_216))                ){
                    multiple_assign_var5=it_217;
                    label_218=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                    node_219=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
                    if(fun_168->mVarArgs||string_operator_equals(fun_name_115,"__builtin_va_start")) {
                        if(!node_compile(node_219,info)) {
                            __result147__ = (_Bool)0;
                            label_218 = come_decrement_ref_count2(label_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(node_219) { node_219 = come_decrement_ref_count2(node_219, ((struct sNode*)node_219)->finalize, ((struct sNode*)node_219)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(result_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_188,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_199,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_115 = come_decrement_ref_count2(fun_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result147__;
                        }
                        come_value_220=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value254=get_value_from_stack(-1,info))));
                        come_call_finalizer3(right_value254,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                        dec_stack_ptr(1,info);
                        while((_Bool)1) {
                            if(list$1CVALUEphp_operator_load_element(come_params_199,i_215)==((void*)0)) {
                                break;
                            }
                            else {
                                i_215++;
                            }
                        }
                        list$1CVALUEph_replace(come_params_199,i_215,(struct CVALUE*)come_increment_ref_count(come_value_220));
                        i_215++;
                        come_call_finalizer3(come_value_220,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(label_218) {
                        }
                        else {
                            if(!node_compile(node_219,info)) {
                                __result150__ = (_Bool)0;
                                label_218 = come_decrement_ref_count2(label_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_219) { node_219 = come_decrement_ref_count2(node_219, ((struct sNode*)node_219)->finalize, ((struct sNode*)node_219)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(result_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_188,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_199,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                fun_name_115 = come_decrement_ref_count2(fun_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result150__;
                            }
                            come_value_224=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value255=get_value_from_stack(-1,info))));
                            come_call_finalizer3(right_value255,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            dec_stack_ptr(1,info);
                            while((_Bool)1) {
                                if(list$1CVALUEphp_operator_load_element(come_params_199,i_215)==((void*)0)) {
                                    break;
                                }
                                else {
                                    i_215++;
                                }
                            }
                            if(list$1sTypephp_operator_load_element(param_types_188,i_215)) {
                                check_assign_type(((char*)(right_value258=xsprintf("\%s param num \%s is assinged to",((char*)(right_value256=string_to_string(fun_name_115))),((char*)(right_value257=int_to_string(i_215)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_188,i_215), "05call.c", 681, 7)),come_value_224->type,come_value_224,(_Bool)0,(_Bool)1,info);
                                right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            if(list$1sTypephp_operator_load_element(param_types_188,i_215)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_188,i_215), "05call.c", 683, 8))->mHeap&&come_value_224->type->mHeap) {
                                std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_188,i_215), "05call.c", 684, 9)),come_value_224->type,come_value_224,info);
                            }
                            list$1CVALUEph_replace(come_params_199,i_215,(struct CVALUE*)come_increment_ref_count(come_value_224));
                            i_215++;
                            come_call_finalizer3(come_value_224,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    label_218 = come_decrement_ref_count2(label_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_219) { node_219 = come_decrement_ref_count2(node_219, ((struct sNode*)node_219)->finalize, ((struct sNode*)node_219)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                while((_Bool)1) {
                    if(list$1CVALUEphp_operator_load_element(come_params_199,i_215)==((void*)0)) {
                        break;
                    }
                    else {
                        i_215++;
                    }
                }
                if(list$1tuple2$2charphsNodephph_length(params_116)<list$1sTypeph_length(fun_168->mParamTypes)) {
                    for(                    ;                    i_215<list$1sTypeph_length(fun_168->mParamTypes);                    i_215++                    ){
                        default_param_225=(char*)come_increment_ref_count(((char*)(right_value259=string_clone(list$1charphp_operator_load_element(fun_168->mParamDefaultParametors,i_215)))));
                        right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        param_name_229=((char*)come_null_check(list$1charphp_operator_load_element(fun_168->mParamNames,i_215), "05call.c", 705, 10));
                        if(default_param_225&&string_operator_not_equals(default_param_225,"")&&list$1CVALUEphp_operator_load_element(come_params_199,i_215)==((void*)0)) {
                            source_230=(struct buffer*)come_increment_ref_count(info->source);
                            p_231=info->p;
                            head_232=info->head;
                            sline_233=info->sline;
                            __dec_obj89=info->source;
                            info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value260=string_to_buffer(default_param_225))));
                            come_call_finalizer3(__dec_obj89,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value260,buffer_finalize, 0, 1, 0, 0, (void*)0);
                            info->p=info->source->buf;
                            info->head=info->source->buf;
                            node_234=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value261=expression_v13(info))));
                            if(right_value261) { right_value261 = come_decrement_ref_count2(right_value261, ((struct sNode*)right_value261)->finalize, ((struct sNode*)right_value261)->_protocol_obj, 1, 0, 0, (void*)0); } 
                            if(!node_compile(node_234,info)) {
                                __result153__ = (_Bool)0;
                                come_call_finalizer3(source_230,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                if(node_234) { node_234 = come_decrement_ref_count2(node_234, ((struct sNode*)node_234)->finalize, ((struct sNode*)node_234)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                default_param_225 = come_decrement_ref_count2(default_param_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_188,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_199,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                fun_name_115 = come_decrement_ref_count2(fun_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result153__;
                            }
                            __dec_obj90=info->source;
                            info->source=(struct buffer*)come_increment_ref_count(source_230);
                            come_call_finalizer3(__dec_obj90,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            info->p=p_231;
                            info->head=head_232;
                            info->sline=sline_233;
                            come_value_235=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value262=get_value_from_stack(-1,info))));
                            come_call_finalizer3(right_value262,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_188,i_215), "05call.c", 729, 11))) {
                                check_assign_type(((char*)(right_value265=xsprintf("\%s param num \%s is assinged to",((char*)(right_value263=string_to_string(fun_name_115))),((char*)(right_value264=int_to_string(i_215)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_188,i_215), "05call.c", 730, 12)),come_value_235->type,come_value_235,(_Bool)0,(_Bool)1,info);
                                right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_188,i_215), "05call.c", 732, 13))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_188,i_215), "05call.c", 732, 14))->mHeap&&come_value_235->type->mHeap) {
                                std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_188,i_215), "05call.c", 733, 15)),come_value_235->type,come_value_235,info);
                            }
                            list$1CVALUEph_replace(come_params_199,i_215,(struct CVALUE*)come_increment_ref_count(come_value_235));
                            dec_stack_ptr(1,info);
                            come_call_finalizer3(source_230,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            if(node_234) { node_234 = come_decrement_ref_count2(node_234, ((struct sNode*)node_234)->finalize, ((struct sNode*)node_234)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(come_value_235,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(list$1CVALUEphp_operator_load_element(come_params_199,i_215)==((void*)0)) {
                                err_msg(info,"require parametor(%s) %d",fun_168->mName,i_215);
                                __result154__ = (_Bool)0;
                                default_param_225 = come_decrement_ref_count2(default_param_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_188,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_199,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                fun_name_115 = come_decrement_ref_count2(fun_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result154__;
                            }
                        }
                        default_param_225 = come_decrement_ref_count2(default_param_225, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(list$1sTypeph_length(fun_168->mParamTypes)!=list$1CVALUEph_length(come_params_199)&&!fun_168->mVarArgs&&string_operator_not_equals(fun_name_115,"__builtin_va_start")&&string_operator_not_equals(fun_name_115,"__builtin_va_end")) {
                    err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_115,list$1sTypeph_length(fun_168->mParamTypes),list$1tuple2$2charphsNodephph_length(params_116));
                    __result155__ = (_Bool)0;
                    come_call_finalizer3(result_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_188,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_199,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_115 = come_decrement_ref_count2(fun_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result155__;
                }
                buf_236=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value267=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value266=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 753, "buffer"))))))));
                come_call_finalizer3(right_value266,buffer_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(right_value267,buffer_finalize, 0, 1, 0, 0, (void*)0);
                buffer_append_str(buf_236,fun_name_115);
                buffer_append_str(buf_236,"(");
                j_237=0;
                for(                o2_saved_238=(struct list$1CVALUEph*)come_increment_ref_count((come_params_199)),it_239=list$1CVALUEph_begin((o2_saved_238));                !list$1CVALUEph_end((o2_saved_238));                it_239=list$1CVALUEph_next((o2_saved_238))                ){
                    buffer_append_str(buf_236,it_239->c_value);
                    if(j_237!=list$1CVALUEph_length(come_params_199)-1) {
                        buffer_append_str(buf_236,",");
                    }
                    j_237++;
                }
                come_call_finalizer3(o2_saved_238,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                buffer_append_str(buf_236,")");
                come_value_240=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value269=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value268=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 770, "CVALUE"))))))));
                come_call_finalizer3(right_value268,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(right_value269,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj91=come_value_240->c_value;
                come_value_240->c_value=(char*)come_increment_ref_count(((char*)(right_value270=buffer_to_string(buf_236))));
                __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj92=come_value_240->type;
                come_value_240->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value271=sType_clone(result_type_187))));
                come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value271,sType_finalize, 0, 1, 0, 0, (void*)0);
                come_value_240->type->mStatic=(_Bool)0;
                come_value_240->var=((void*)0);
                if(fun_168->mResultType->mHeap) {
                    append_object_to_right_values2(come_value_240,(struct sType*)come_increment_ref_count(result_type_187),info);
                }
                if(string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free")) {
                    if(string_operator_not_equals(fun_name_115,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_115,"null_check")&&string_operator_not_equals(fun_name_115,"come_push_stackframe")&&string_operator_not_equals(fun_name_115,"come_pop_stackframe")) {
                        __dec_obj93=come_value_240->c_value;
                        come_value_240->c_value=(char*)come_increment_ref_count(((char*)(right_value272=append_stackframe(come_value_240->c_value,come_value_240->type,info))));
                        __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                }
                if(!self->guard_break&&result_type_187->mGuardValue&&result_type_187->mPointerNum>0) {
                    __dec_obj94=come_value_240->c_value;
                    come_value_240->c_value=(char*)come_increment_ref_count(((char*)(right_value274=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value273=make_type_name_string(result_type_187,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_240->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
                    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                add_come_last_code(info,"%s;\n",come_value_240->c_value);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_240));
                come_call_finalizer3(result_type_187,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_188,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_199,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_236,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_240,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result156__ = (_Bool)1;
    fun_name_115 = come_decrement_ref_count2(fun_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result156__;
    fun_name_115 = come_decrement_ref_count2(fun_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result91__;
void* right_value178;
void* right_value179;
struct list$1tuple2$2charphsNodephph* result_107;
struct list_item$1tuple2$2charphsNodephph* it_108;
void* right_value186;
struct list$1tuple2$2charphsNodephph* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
right_value179 = (void*)0;
memset(&result_107, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_108, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value186 = (void*)0;
        if(self==((void*)0)) {
            __result91__ = __result_obj__ = ((void*)0);
            return __result91__;
        }
        result_107=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value179=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value178=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 135, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer3(right_value178,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value179,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        it_108=self->head;
        while(it_108!=((void*)0)) {
            list$1tuple2$2charphsNodephph_add(result_107,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value186=tuple2$2charphsNodephp_clone(it_108->item)))));
            come_call_finalizer3(right_value186,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            it_108=it_108->next;
        }
        __result96__ = __result_obj__ = result_107;
        come_call_finalizer3(result_107,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result96__;
        come_call_finalizer3(result_107,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result92__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result92__;
            come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_105;
struct list_item$1tuple2$2charphsNodephph* prev_it_106;
memset(&it_105, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_106, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_105=self->head;
                while(it_105!=((void*)0)) {
                    prev_it_106=it_105;
                    it_105=it_105->next;
                    come_call_finalizer3(prev_it_106,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
void* right_value180;
struct list_item$1tuple2$2charphsNodephph* litem_109;
struct tuple2$2charphsNodeph* __dec_obj57;
void* right_value181;
struct list_item$1tuple2$2charphsNodephph* litem_110;
struct tuple2$2charphsNodeph* __dec_obj58;
void* right_value182;
struct list_item$1tuple2$2charphsNodephph* litem_111;
struct tuple2$2charphsNodeph* __dec_obj59;
struct list$1tuple2$2charphsNodephph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value180 = (void*)0;
memset(&litem_109, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value181 = (void*)0;
memset(&litem_110, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value182 = (void*)0;
memset(&litem_111, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(self->len==0) {
                    litem_109=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value180=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 149, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value180,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_109->prev=((void*)0);
                    litem_109->next=((void*)0);
                    __dec_obj57=litem_109->item;
                    litem_109->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj57,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_109;
                    self->head=litem_109;
                }
                else {
                    if(self->len==1) {
                        litem_110=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value181=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 159, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value181,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_110->prev=self->head;
                        litem_110->next=((void*)0);
                        __dec_obj58=litem_110->item;
                        litem_110->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj58,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_110;
                        self->head->next=litem_110;
                    }
                    else {
                        litem_111=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value182=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 169, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(right_value182,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_111->prev=self->tail;
                        litem_111->next=((void*)0);
                        __dec_obj59=litem_111->item;
                        litem_111->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj59,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_111;
                        self->tail=litem_111;
                    }
                }
                self->len++;
                __result93__ = __result_obj__ = self;
                come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result93__;
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
struct tuple2$2charphsNodeph* __result94__;
void* right_value183;
struct tuple2$2charphsNodeph* result_112;
void* right_value184;
char* __dec_obj60;
void* right_value185;
struct sNode* __dec_obj61;
struct tuple2$2charphsNodeph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
memset(&result_112, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value184 = (void*)0;
right_value185 = (void*)0;
                if(self==(void*)0) {
                    __result94__ = __result_obj__ = (void*)0;
                    return __result94__;
                }
                result_112=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value183=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                come_call_finalizer3(right_value183,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj60=result_112->v1;
                    result_112->v1=(char*)come_increment_ref_count(((char*)(right_value184=string_clone(self->v1))));
                    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    __dec_obj61=result_112->v2;
                    result_112->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value185=sNode_clone(self->v2))));
                    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value185) { right_value185 = come_decrement_ref_count2(right_value185, ((struct sNode*)right_value185)->finalize, ((struct sNode*)right_value185)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result95__ = __result_obj__ = result_112;
                come_call_finalizer3(result_112,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result95__;
                come_call_finalizer3(result_112,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1tuple2$2charphsNodephph* it_113;
struct list_item$1tuple2$2charphsNodephph* prev_it_114;
memset(&it_113, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_114, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
        it_113=self->head;
        while(it_113!=((void*)0)) {
            prev_it_114=it_113;
            it_113=it_113->next;
            come_call_finalizer3(prev_it_114,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result100__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result100__;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_121;
struct list_item$1CVALUEph* prev_it_122;
memset(&it_121, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_122, 0, sizeof(struct list_item$1CVALUEph*));
                it_121=self->head;
                while(it_121!=((void*)0)) {
                    prev_it_122=it_121;
                    it_121=it_121->next;
                    come_call_finalizer3(prev_it_122,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
            if(self==((void*)0)) {
                return 0;
            }
            return self->len;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
            if(self==((void*)0)) {
                return 0;
            }
            return self->len;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct tuple2$2charphsNodeph* result_125;
struct tuple2$2charphsNodeph* __result102__;
struct tuple2$2charphsNodeph* __result103__;
struct tuple2$2charphsNodeph* result_126;
struct tuple2$2charphsNodeph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_125, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_126, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(self==((void*)0)) {
                memset(&result_125,0,sizeof(struct tuple2$2charphsNodeph*));
                __result102__ = __result_obj__ = result_125;
                return __result102__;
            }
            self->it=self->head;
            if(self->it) {
                __result103__ = __result_obj__ = self->it->item;
                return __result103__;
            }
            memset(&result_126,0,sizeof(struct tuple2$2charphsNodeph*));
            __result104__ = __result_obj__ = result_126;
            return __result104__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
            return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct tuple2$2charphsNodeph* result_128;
struct tuple2$2charphsNodeph* __result105__;
struct tuple2$2charphsNodeph* __result106__;
struct tuple2$2charphsNodeph* result_129;
struct tuple2$2charphsNodeph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_128, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_129, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_128,0,sizeof(struct tuple2$2charphsNodeph*));
                __result105__ = __result_obj__ = result_128;
                return __result105__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result106__ = __result_obj__ = self->it->item;
                return __result106__;
            }
            memset(&result_129,0,sizeof(struct tuple2$2charphsNodeph*));
            __result107__ = __result_obj__ = result_129;
            return __result107__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
struct list_item$1sTypeph* it_133;
int i_134;
struct sType* __result109__;
struct sType* default_value_135;
struct sType* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_133, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_134, 0, sizeof(int));
memset(&default_value_135, 0, sizeof(struct sType*));
                if(position<0) {
                    position+=self->len;
                }
                it_133=self->head;
                i_134=0;
                while(it_133!=((void*)0)) {
                    if(position==i_134) {
                        __result109__ = __result_obj__ = it_133->item;
                        return __result109__;
                    }
                    it_133=it_133->next;
                    i_134++;
                }
                memset(&default_value_135,0,sizeof(struct sType*));
                __result110__ = __result_obj__ = default_value_135;
                come_call_finalizer3(default_value_135,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result110__;
                come_call_finalizer3(default_value_135,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
struct CVALUE* result_139;
struct CVALUE* __result111__;
struct CVALUE* __result112__;
struct CVALUE* result_140;
struct CVALUE* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_139, 0, sizeof(struct CVALUE*));
memset(&result_140, 0, sizeof(struct CVALUE*));
            if(self==((void*)0)) {
                memset(&result_139,0,sizeof(struct CVALUE*));
                __result111__ = __result_obj__ = result_139;
                return __result111__;
            }
            self->it=self->head;
            if(self->it) {
                __result112__ = __result_obj__ = self->it->item;
                return __result112__;
            }
            memset(&result_140,0,sizeof(struct CVALUE*));
            __result113__ = __result_obj__ = result_140;
            return __result113__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
            return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
struct CVALUE* result_142;
struct CVALUE* __result114__;
struct CVALUE* __result115__;
struct CVALUE* result_143;
struct CVALUE* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_142, 0, sizeof(struct CVALUE*));
memset(&result_143, 0, sizeof(struct CVALUE*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_142,0,sizeof(struct CVALUE*));
                __result114__ = __result_obj__ = result_142;
                return __result114__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result115__ = __result_obj__ = self->it->item;
                return __result115__;
            }
            memset(&result_143,0,sizeof(struct CVALUE*));
            __result116__ = __result_obj__ = result_143;
            return __result116__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
                if(self==((void*)0)) {
                    return 0;
                }
                return self->len;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_162;
unsigned int hash_163;
unsigned int it_164;
struct sFun* __result119__;
struct sFun* __result120__;
struct sFun* __result121__;
struct sFun* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_162, 0, sizeof(struct sFun*));
memset(&hash_163, 0, sizeof(unsigned int));
memset(&it_164, 0, sizeof(unsigned int));
                                memset(&default_value_162,0,sizeof(struct sFun*));
                                hash_163=string_get_hash_key(((char*)key))%self->size;
                                it_164=hash_163;
                                while((_Bool)1) {
                                    if(self->item_existance[it_164]) {
                                        if(string_equals(self->keys[it_164],key)) {
                                            __result119__ = __result_obj__ = self->items[it_164];
                                            come_call_finalizer3(default_value_162,sFun_finalize, 0, 0, 0, 0, (void*)0);
                                            return __result119__;
                                        }
                                        it_164++;
                                        if(it_164>=self->size) {
                                            it_164=0;
                                        }
                                        else {
                                            if(it_164==hash_163) {
                                                __result120__ = __result_obj__ = default_value_162;
                                                come_call_finalizer3(default_value_162,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result120__;
                                            }
                                        }
                                    }
                                    else {
                                        __result121__ = __result_obj__ = default_value_162;
                                        come_call_finalizer3(default_value_162,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result121__;
                                    }
                                }
                                __result122__ = __result_obj__ = default_value_162;
                                come_call_finalizer3(default_value_162,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result122__;
                                come_call_finalizer3(default_value_162,sFun_finalize, 0, 0, 0, 0, (void*)0);
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

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_169;
unsigned int it_170;
struct sFun* __result124__;
struct sFun* __result125__;
struct sFun* __result126__;
struct sFun* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_169, 0, sizeof(unsigned int));
memset(&it_170, 0, sizeof(unsigned int));
            hash_169=string_get_hash_key(((char*)key))%self->size;
            it_170=hash_169;
            while((_Bool)1) {
                if(self->item_existance[it_170]) {
                    if(string_equals(self->keys[it_170],key)) {
                        __result124__ = __result_obj__ = self->items[it_170];
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result124__;
                    }
                    it_170++;
                    if(it_170>=self->size) {
                        it_170=0;
                    }
                    else {
                        if(it_170==hash_169) {
                            __result125__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result125__;
                        }
                    }
                }
                else {
                    __result126__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result126__;
                }
            }
            __result127__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result127__;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
void* right_value230;
struct list_item$1CVALUEph* litem_179;
struct CVALUE* __dec_obj78;
void* right_value231;
struct list_item$1CVALUEph* litem_180;
struct CVALUE* __dec_obj79;
void* right_value232;
struct list_item$1CVALUEph* litem_181;
struct CVALUE* __dec_obj80;
struct list$1CVALUEph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value230 = (void*)0;
memset(&litem_179, 0, sizeof(struct list_item$1CVALUEph*));
right_value231 = (void*)0;
memset(&litem_180, 0, sizeof(struct list_item$1CVALUEph*));
right_value232 = (void*)0;
memset(&litem_181, 0, sizeof(struct list_item$1CVALUEph*));
                    if(self->len==0) {
                        litem_179=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value230=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 149, "list_item$1CVALUEph"))));
                        come_call_finalizer3(right_value230,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_179->prev=((void*)0);
                        litem_179->next=((void*)0);
                        __dec_obj78=litem_179->item;
                        litem_179->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj78,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_179;
                        self->head=litem_179;
                    }
                    else {
                        if(self->len==1) {
                            litem_180=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value231=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 159, "list_item$1CVALUEph"))));
                            come_call_finalizer3(right_value231,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_180->prev=self->head;
                            litem_180->next=((void*)0);
                            __dec_obj79=litem_180->item;
                            litem_180->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj79,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_180;
                            self->head->next=litem_180;
                        }
                        else {
                            litem_181=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value232=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 169, "list_item$1CVALUEph"))));
                            come_call_finalizer3(right_value232,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_181->prev=self->tail;
                            litem_181->next=((void*)0);
                            __dec_obj80=litem_181->item;
                            litem_181->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj80,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_181;
                            self->tail=litem_181;
                        }
                    }
                    self->len++;
                    __result129__ = __result_obj__ = self;
                    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                    return __result129__;
                    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
struct sType* result_190;
struct sType* __result131__;
struct sType* __result132__;
struct sType* result_191;
struct sType* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_190, 0, sizeof(struct sType*));
memset(&result_191, 0, sizeof(struct sType*));
                    if(self==((void*)0)) {
                        memset(&result_190,0,sizeof(struct sType*));
                        __result131__ = __result_obj__ = result_190;
                        return __result131__;
                    }
                    self->it=self->head;
                    if(self->it) {
                        __result132__ = __result_obj__ = self->it->item;
                        return __result132__;
                    }
                    memset(&result_191,0,sizeof(struct sType*));
                    __result133__ = __result_obj__ = result_191;
                    return __result133__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
                    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
struct sType* result_193;
struct sType* __result134__;
struct sType* __result135__;
struct sType* result_194;
struct sType* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_193, 0, sizeof(struct sType*));
memset(&result_194, 0, sizeof(struct sType*));
                    if(self==((void*)0)||self->it==((void*)0)) {
                        memset(&result_193,0,sizeof(struct sType*));
                        __result134__ = __result_obj__ = result_193;
                        return __result134__;
                    }
                    self->it=self->it->next;
                    if(self->it) {
                        __result135__ = __result_obj__ = self->it->item;
                        return __result135__;
                    }
                    memset(&result_194,0,sizeof(struct sType*));
                    __result136__ = __result_obj__ = result_194;
                    return __result136__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* right_value243;
struct list_item$1sTypeph* litem_196;
struct sType* __dec_obj84;
void* right_value244;
struct list_item$1sTypeph* litem_197;
struct sType* __dec_obj85;
void* right_value245;
struct list_item$1sTypeph* litem_198;
struct sType* __dec_obj86;
struct list$1sTypeph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value243 = (void*)0;
memset(&litem_196, 0, sizeof(struct list_item$1sTypeph*));
right_value244 = (void*)0;
memset(&litem_197, 0, sizeof(struct list_item$1sTypeph*));
right_value245 = (void*)0;
memset(&litem_198, 0, sizeof(struct list_item$1sTypeph*));
                        if(self->len==0) {
                            litem_196=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value243=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 219, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value243,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_196->prev=((void*)0);
                            litem_196->next=((void*)0);
                            __dec_obj84=litem_196->item;
                            litem_196->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_196;
                            self->head=litem_196;
                        }
                        else {
                            if(self->len==1) {
                                litem_197=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value244=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 229, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value244,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_197->prev=self->head;
                                litem_197->next=((void*)0);
                                __dec_obj85=litem_197->item;
                                litem_197->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_197;
                                self->head->next=litem_197;
                            }
                            else {
                                litem_198=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value245=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 239, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value245,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_198->prev=self->tail;
                                litem_198->next=((void*)0);
                                __dec_obj86=litem_198->item;
                                litem_198->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_198;
                                self->tail=litem_198;
                            }
                        }
                        self->len++;
                        __result137__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result137__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
char* result_208;
char* __result139__;
char* __result140__;
char* result_209;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_208, 0, sizeof(char*));
memset(&result_209, 0, sizeof(char*));
                                if(self==((void*)0)) {
                                    memset(&result_208,0,sizeof(char*));
                                    __result139__ = __result_obj__ = result_208;
                                    return __result139__;
                                }
                                self->it=self->head;
                                if(self->it) {
                                    __result140__ = __result_obj__ = self->it->item;
                                    return __result140__;
                                }
                                memset(&result_209,0,sizeof(char*));
                                __result141__ = __result_obj__ = result_209;
                                return __result141__;
}

static _Bool list$1charph_end(struct list$1charph* self){
                                return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
char* result_211;
char* __result142__;
char* __result143__;
char* result_212;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_211, 0, sizeof(char*));
memset(&result_212, 0, sizeof(char*));
                                if(self==((void*)0)||self->it==((void*)0)) {
                                    memset(&result_211,0,sizeof(char*));
                                    __result142__ = __result_obj__ = result_211;
                                    return __result142__;
                                }
                                self->it=self->it->next;
                                if(self->it) {
                                    __result143__ = __result_obj__ = self->it->item;
                                    return __result143__;
                                }
                                memset(&result_212,0,sizeof(char*));
                                __result144__ = __result_obj__ = result_212;
                                return __result144__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
struct list$1CVALUEph* __result145__;
struct list_item$1CVALUEph* it_213;
int i_214;
struct CVALUE* __dec_obj88;
struct list$1CVALUEph* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_213, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_214, 0, sizeof(int));
                                if(position<0) {
                                    position+=self->len;
                                }
                                if(position>=self->len) {
                                    list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                                    __result145__ = __result_obj__ = self;
                                    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result145__;
                                }
                                it_213=self->head;
                                i_214=0;
                                while(it_213!=((void*)0)) {
                                    if(position==i_214) {
                                        __dec_obj88=it_213->item;
                                        it_213->item=(struct CVALUE*)come_increment_ref_count(item);
                                        come_call_finalizer3(__dec_obj88,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        break;
                                    }
                                    it_213=it_213->next;
                                    i_214++;
                                }
                                __result146__ = __result_obj__ = self;
                                come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                                return __result146__;
                                come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
struct list_item$1CVALUEph* it_221;
int i_222;
struct CVALUE* __result148__;
struct CVALUE* default_value_223;
struct CVALUE* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_221, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_222, 0, sizeof(int));
memset(&default_value_223, 0, sizeof(struct CVALUE*));
                                if(position<0) {
                                    position+=self->len;
                                }
                                it_221=self->head;
                                i_222=0;
                                while(it_221!=((void*)0)) {
                                    if(position==i_222) {
                                        __result148__ = __result_obj__ = it_221->item;
                                        return __result148__;
                                    }
                                    it_221=it_221->next;
                                    i_222++;
                                }
                                memset(&default_value_223,0,sizeof(struct CVALUE*));
                                __result149__ = __result_obj__ = default_value_223;
                                come_call_finalizer3(default_value_223,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                                return __result149__;
                                come_call_finalizer3(default_value_223,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
struct list_item$1charph* it_226;
int i_227;
char* __result151__;
char* default_value_228;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_226, 0, sizeof(struct list_item$1charph*));
memset(&i_227, 0, sizeof(int));
memset(&default_value_228, 0, sizeof(char*));
                            if(position<0) {
                                position+=self->len;
                            }
                            it_226=self->head;
                            i_227=0;
                            while(it_226!=((void*)0)) {
                                if(position==i_227) {
                                    __result151__ = __result_obj__ = it_226->item;
                                    return __result151__;
                                }
                                it_226=it_226->next;
                                i_227++;
                            }
                            memset(&default_value_228,0,sizeof(char*));
                            __result152__ = __result_obj__ = default_value_228;
                            default_value_228 = come_decrement_ref_count2(default_value_228, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result152__;
                            default_value_228 = come_decrement_ref_count2(default_value_228, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__;
void* right_value275;
struct sNode* __dec_obj95;
void* right_value276;
struct list$1tuple2$2charphsNodephph* __dec_obj96;
struct sLambdaCall* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value275 = (void*)0;
right_value276 = (void*)0;
    ((struct sNodeBase*)(right_value275=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value275,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj95=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj96=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value276=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer3(__dec_obj96,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value276,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    __result157__ = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result157__;
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __result_obj__;
void* right_value277;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value277 = (void*)0;
    __result158__ = __result_obj__ = ((char*)(right_value277=__builtin_string("sLambdaCall")));
    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result158__;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_241;
struct list$1tuple2$2charphsNodephph* params_242;
_Bool __result159__;
void* right_value278;
struct CVALUE* come_value_243;
struct sType* lambda_type_244;
void* right_value279;
struct sType* result_type_245;
void* right_value280;
void* right_value281;
struct list$1CVALUEph* come_params_246;
_Bool __result160__;
int i_247;
struct list$1tuple2$2charphsNodephph* o2_saved_248;
struct tuple2$2charphsNodeph* it_249;
struct tuple2$2charphsNodeph* multiple_assign_var6;
char* label_250;
struct sNode* node_251;
_Bool __result161__;
void* right_value282;
struct CVALUE* come_value_252;
void* right_value283;
void* right_value284;
void* right_value285;
void* right_value286;
struct buffer* buf_253;
int j_254;
struct list$1CVALUEph* o2_saved_255;
struct CVALUE* it_256;
void* right_value287;
void* right_value288;
struct CVALUE* come_value2_257;
void* right_value289;
char* __dec_obj97;
void* right_value290;
struct sType* __dec_obj98;
_Bool __result162__;
memset(&node_241, 0, sizeof(struct sNode*));
memset(&params_242, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
right_value278 = (void*)0;
memset(&come_value_243, 0, sizeof(struct CVALUE*));
memset(&lambda_type_244, 0, sizeof(struct sType*));
right_value279 = (void*)0;
memset(&result_type_245, 0, sizeof(struct sType*));
right_value280 = (void*)0;
right_value281 = (void*)0;
memset(&come_params_246, 0, sizeof(struct list$1CVALUEph*));
memset(&i_247, 0, sizeof(int));
memset(&o2_saved_248, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_249, 0, sizeof(struct tuple2$2charphsNodeph*));
right_value282 = (void*)0;
memset(&come_value_252, 0, sizeof(struct CVALUE*));
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
memset(&buf_253, 0, sizeof(struct buffer*));
memset(&j_254, 0, sizeof(int));
memset(&o2_saved_255, 0, sizeof(struct list$1CVALUEph*));
memset(&it_256, 0, sizeof(struct CVALUE*));
right_value287 = (void*)0;
right_value288 = (void*)0;
memset(&come_value2_257, 0, sizeof(struct CVALUE*));
right_value289 = (void*)0;
right_value290 = (void*)0;
    node_241=(struct sNode*)come_increment_ref_count(self->node);
    params_242=self->params;
    if(!node_compile(node_241,info)) {
        __result159__ = (_Bool)0;
        if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result159__;
    }
    come_value_243=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value278=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value278,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    lambda_type_244=come_value_243->type;
    result_type_245=(struct sType*)come_increment_ref_count(((struct sType*)(right_value279=sType_clone(lambda_type_244->mResultType->v1))));
    come_call_finalizer3(right_value279,sType_finalize, 0, 1, 0, 0, (void*)0);
    result_type_245->mStatic=(_Bool)0;
    come_params_246=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value281=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value280=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 833, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value280,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value281,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    if(list$1sTypeph_length(lambda_type_244->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_242)&&!lambda_type_244->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sTypeph_length(lambda_type_244->mParamTypes),list$1tuple2$2charphsNodephph_length(params_242));
        __result160__ = (_Bool)0;
        if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_243,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_246,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result160__;
    }
    i_247=0;
    for(    o2_saved_248=(params_242),it_249=list$1tuple2$2charphsNodephph_begin((o2_saved_248));    !list$1tuple2$2charphsNodephph_end((o2_saved_248));    it_249=list$1tuple2$2charphsNodephph_next((o2_saved_248))    ){
        multiple_assign_var6=it_249;
        label_250=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        node_251=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
        if(!node_compile(node_251,info)) {
            __result161__ = (_Bool)0;
            label_250 = come_decrement_ref_count2(label_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_251) { node_251 = come_decrement_ref_count2(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_243,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_246,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result161__;
        }
        come_value_252=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value282=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value282,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        if(lambda_type_244->mVarArgs&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_244->mParamTypes,i_247), "05call.c", 849, 16))==((void*)0)) {
        }
        else {
            check_assign_type(((char*)(right_value284=xsprintf("calling param #\%s",((char*)(right_value283=int_to_string(i_247)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_244->mParamTypes,i_247), "05call.c", 852, 17)),come_value_252->type,come_value_252,(_Bool)0,(_Bool)1,info);
            right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_244->mParamTypes,i_247), "05call.c", 853, 18))->mHeap&&come_value_252->type->mHeap) {
                std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_244->mParamTypes,i_247), "05call.c", 854, 19)),come_value_252->type,come_value_252,info);
            }
        }
        list$1CVALUEph_push_back(come_params_246,(struct CVALUE*)come_increment_ref_count(come_value_252));
        dec_stack_ptr(1,info);
        i_247++;
        label_250 = come_decrement_ref_count2(label_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_251) { node_251 = come_decrement_ref_count2(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_252,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_253=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value286=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value285=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 864, "buffer"))))))));
    come_call_finalizer3(right_value285,buffer_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value286,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(buf_253,"(");
    buffer_append_str(buf_253,come_value_243->c_value);
    buffer_append_str(buf_253,")");
    buffer_append_str(buf_253,"(");
    j_254=0;
    for(    o2_saved_255=(struct list$1CVALUEph*)come_increment_ref_count((come_params_246)),it_256=list$1CVALUEph_begin((o2_saved_255));    !list$1CVALUEph_end((o2_saved_255));    it_256=list$1CVALUEph_next((o2_saved_255))    ){
        buffer_append_str(buf_253,it_256->c_value);
        if(j_254!=list$1CVALUEph_length(come_params_246)-1) {
            buffer_append_str(buf_253,",");
        }
        j_254++;
    }
    come_call_finalizer3(o2_saved_255,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_253,")");
    come_value2_257=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value288=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value287=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 883, "CVALUE"))))))));
    come_call_finalizer3(right_value287,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value288,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj97=come_value2_257->c_value;
    come_value2_257->c_value=(char*)come_increment_ref_count(((char*)(right_value289=buffer_to_string(buf_253))));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(lambda_type_244->mResultType->v1->mHeap) {
        append_object_to_right_values2(come_value2_257,(struct sType*)come_increment_ref_count(lambda_type_244->mResultType->v1),info);
    }
    __dec_obj98=come_value2_257->type;
    come_value2_257->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value290=sType_clone(result_type_245))));
    come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value290,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value2_257->type->mStatic=(_Bool)0;
    come_value2_257->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_257->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_257));
    __result162__ = (_Bool)1;
    if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_243,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_246,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_253,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_257,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result162__;
    if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_243,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_246,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_253,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_257,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value291;
struct sType* __dec_obj99;
struct sVarArgTypeName* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value291 = (void*)0;
    ((struct sNodeBase*)(right_value291=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value291,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj99=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result163__ = __result_obj__ = self;
    come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result163__;
    come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __result_obj__;
void* right_value292;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
right_value292 = (void*)0;
    __result164__ = __result_obj__ = ((char*)(right_value292=__builtin_string("sVarArgTypeName")));
    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result164__;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_258;
void* right_value293;
void* right_value294;
struct CVALUE* come_value_259;
void* right_value295;
char* __dec_obj100;
struct sType* __dec_obj101;
_Bool __result165__;
memset(&type_258, 0, sizeof(struct sType*));
right_value293 = (void*)0;
right_value294 = (void*)0;
memset(&come_value_259, 0, sizeof(struct CVALUE*));
right_value295 = (void*)0;
    type_258=(struct sType*)come_increment_ref_count(self->type);
    come_value_259=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value294=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value293=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 920, "CVALUE"))))))));
    come_call_finalizer3(right_value293,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value294,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj100=come_value_259->c_value;
    come_value_259->c_value=(char*)come_increment_ref_count(((char*)(right_value295=make_type_name_string(type_258,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj101=come_value_259->type;
    come_value_259->type=(struct sType*)come_increment_ref_count(type_258);
    come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_259->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_259));
    __result165__ = (_Bool)1;
    come_call_finalizer3(type_258,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_259,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result165__;
    come_call_finalizer3(type_258,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_259,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info){
void* __result_obj__;
void* right_value296;
void* right_value297;
struct list$1sTypeph* method_generics_types_260;
void* right_value298;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* type_261;
char* name_262;
_Bool err_263;
void* right_value299;
void* right_value300;
void* right_value301;
struct list$1tuple2$2charphsNodephph* params_264;
_Bool _va_arg_265;
char* p_266;
int sline_267;
_Bool err_flag_268;
void* right_value302;
char* label_269;
void* right_value303;
char* __dec_obj102;
char* __dec_obj103;
_Bool no_comma_270;
_Bool in_fun_param_271;
void* right_value304;
struct sNode* node_272;
void* right_value305;
struct sNode* __dec_obj104;
void* right_value309;
void* right_value310;
_Bool guard_break_276;
void* right_value311;
void* right_value312;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* right_value318;
struct sNode* node_277;
void* right_value319;
struct sNode* __dec_obj114;
struct sNode* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value296 = (void*)0;
right_value297 = (void*)0;
memset(&method_generics_types_260, 0, sizeof(struct list$1sTypeph*));
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value301 = (void*)0;
memset(&params_264, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&_va_arg_265, 0, sizeof(_Bool));
memset(&p_266, 0, sizeof(char*));
memset(&sline_267, 0, sizeof(int));
memset(&err_flag_268, 0, sizeof(_Bool));
right_value302 = (void*)0;
memset(&label_269, 0, sizeof(char*));
right_value303 = (void*)0;
memset(&no_comma_270, 0, sizeof(_Bool));
memset(&in_fun_param_271, 0, sizeof(_Bool));
right_value304 = (void*)0;
memset(&node_272, 0, sizeof(struct sNode*));
right_value305 = (void*)0;
right_value309 = (void*)0;
right_value310 = (void*)0;
memset(&guard_break_276, 0, sizeof(_Bool));
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value318 = (void*)0;
memset(&node_277, 0, sizeof(struct sNode*));
right_value319 = (void*)0;
    method_generics_types_260=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value297=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value296=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 934, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value296,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value297,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    if(*info->p==60) {
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
                        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value298=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        type_261=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                        name_262=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                        err_263=multiple_assign_var7->v3;
                        come_call_finalizer3(right_value298,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(!err_263) {
                            err_msg(info,"invalid method generics paramtor type");
                            exit(2);
                        }
                        list$1sTypeph_push_back(method_generics_types_260,(struct sType*)come_increment_ref_count(((struct sType*)(right_value299=sType_clone(type_261)))));
                        come_call_finalizer3(right_value299,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(type_261,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_262 = come_decrement_ref_count2(name_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_264=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value301=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value300=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 972, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer3(right_value300,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value301,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    _va_arg_265=info->va_arg;
    if(charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_266=info->p;
        sline_267=info->sline;
        err_flag_268=(_Bool)0;
        label_269=(char*)come_increment_ref_count(((char*)(right_value302=__builtin_string(""))));
        right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(xisalpha(*info->p)||*info->p==95) {
            __dec_obj102=label_269;
            label_269=(char*)come_increment_ref_count(((char*)(right_value303=parse_word(info))));
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            err_flag_268=(_Bool)1;
        }
        if(err_flag_268==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj103=label_269;
            label_269=((void*)0);
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_266;
            info->sline=sline_267;
        }
        no_comma_270=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_271=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_272=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value304=expression_v13(info))));
        if(right_value304) { right_value304 = come_decrement_ref_count2(right_value304, ((struct sNode*)right_value304)->finalize, ((struct sNode*)right_value304)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj104=node_272;
        node_272=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value305=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_272),info))));
        if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value305) { right_value305 = come_decrement_ref_count2(right_value305, ((struct sNode*)right_value305)->finalize, ((struct sNode*)right_value305)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        info->no_comma=no_comma_270;
        info->in_fun_param=in_fun_param_271;
        list$1tuple2$2charphsNodephph_push_back(params_264,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value310=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value309=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1020, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_269),(struct sNode*)come_increment_ref_count(node_272))))));
        come_call_finalizer3(right_value309,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value310,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_269 = come_decrement_ref_count2(label_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
        }
        label_269 = come_decrement_ref_count2(label_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->va_arg=_va_arg_265;
    guard_break_276=(_Bool)0;
    if(*info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_276=(_Bool)1;
    }
    parse_sharp_v5(info);
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1047, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sFunCallNode*)(right_value312=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value311=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1047, "sFunCallNode")))),fun_name,params_264,guard_break_276,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_260),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sFunCallNode_finalize;
    _inf_value1->clone=(void*)sFunCallNode_clone;
    _inf_value1->compile=(void*)sFunCallNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sFunCallNode_kind;
    node_277=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=_inf_value1)));
    come_call_finalizer3(right_value311,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value312,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value318) { right_value318 = come_decrement_ref_count2(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj114=node_277;
    node_277=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value319=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_277),info))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value319) { right_value319 = come_decrement_ref_count2(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result170__ = __result_obj__ = node_277;
    come_call_finalizer3(method_generics_types_260,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_264,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_277) { node_277 = come_decrement_ref_count2(node_277, ((struct sNode*)node_277)->finalize, ((struct sNode*)node_277)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result170__;
    come_call_finalizer3(method_generics_types_260,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_264,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_277) { node_277 = come_decrement_ref_count2(node_277, ((struct sNode*)node_277)->finalize, ((struct sNode*)node_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
                            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
void* right_value306;
struct list_item$1tuple2$2charphsNodephph* litem_273;
struct tuple2$2charphsNodeph* __dec_obj105;
void* right_value307;
struct list_item$1tuple2$2charphsNodephph* litem_274;
struct tuple2$2charphsNodeph* __dec_obj106;
void* right_value308;
struct list_item$1tuple2$2charphsNodephph* litem_275;
struct tuple2$2charphsNodeph* __dec_obj107;
struct list$1tuple2$2charphsNodephph* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value306 = (void*)0;
memset(&litem_273, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value307 = (void*)0;
memset(&litem_274, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
right_value308 = (void*)0;
memset(&litem_275, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
            if(self->len==0) {
                litem_273=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value306=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 219, "list_item$1tuple2$2charphsNodephph"))));
                come_call_finalizer3(right_value306,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_273->prev=((void*)0);
                litem_273->next=((void*)0);
                __dec_obj105=litem_273->item;
                litem_273->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj105,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_273;
                self->head=litem_273;
            }
            else {
                if(self->len==1) {
                    litem_274=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value307=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 229, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value307,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_274->prev=self->head;
                    litem_274->next=((void*)0);
                    __dec_obj106=litem_274->item;
                    litem_274->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj106,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_274;
                    self->head->next=litem_274;
                }
                else {
                    litem_275=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value308=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 239, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(right_value308,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_275->prev=self->tail;
                    litem_275->next=((void*)0);
                    __dec_obj107=litem_275->item;
                    litem_275->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj107,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_275;
                    self->tail=litem_275;
                }
            }
            self->len++;
            __result166__ = __result_obj__ = self;
            come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result166__;
            come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__;
char* __dec_obj108;
struct sNode* __dec_obj109;
struct tuple2$2charphsNodeph* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj108=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj109=self->v2;
            self->v2=(struct sNode*)come_increment_ref_count(v2);
            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
            __result167__ = __result_obj__ = self;
            come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result167__;
            come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->params!=((void*)0)) {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
            come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__;
struct sFunCallNode* __result168__;
void* right_value313;
struct sFunCallNode* result_278;
void* right_value314;
char* __dec_obj110;
void* right_value315;
char* __dec_obj111;
void* right_value316;
struct list$1tuple2$2charphsNodephph* __dec_obj112;
void* right_value317;
struct list$1sTypeph* __dec_obj113;
struct sFunCallNode* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
right_value313 = (void*)0;
memset(&result_278, 0, sizeof(struct sFunCallNode*));
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
        if(self==(void*)0) {
            __result168__ = __result_obj__ = (void*)0;
            return __result168__;
        }
        result_278=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(right_value313=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"))));
        come_call_finalizer3(right_value313,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(self!=((void*)0)) {
            result_278->sline=self->sline;
        }
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            __dec_obj110=result_278->sname;
            result_278->sname=(char*)come_increment_ref_count(((char*)(right_value314=string_clone(self->sname))));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
            __dec_obj111=result_278->fun_name;
            result_278->fun_name=(char*)come_increment_ref_count(((char*)(right_value315=string_clone(self->fun_name))));
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->params!=((void*)0)) {
            __dec_obj112=result_278->params;
            result_278->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value316=list$1tuple2$2charphsNodephphp_clone(self->params))));
            come_call_finalizer3(__dec_obj112,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value316,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_278->guard_break=self->guard_break;
        }
        if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
            __dec_obj113=result_278->method_generics_types;
            result_278->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value317=list$1sTypephp_clone(self->method_generics_types))));
            come_call_finalizer3(__dec_obj113,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value317,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __result169__ = __result_obj__ = result_278;
        come_call_finalizer3(result_278,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
        return __result169__;
        come_call_finalizer3(result_278,sFunCallNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__;
struct sNode* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    err_msg(info,"invalid character(%c)(1)\n",*info->p);
    stackframe();
    exit(3);
    __result171__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result171__;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __result_obj__;
void* right_value320;
void* right_value321;
void* right_value322;
struct sNode* _inf_value2;
struct sReturnNode* _inf_obj_value2;
void* right_value327;
struct sNode* __result174__;
char* head_280;
void* right_value328;
struct sNode* value_281;
char* tail_282;
void* right_value329;
struct sNode* __dec_obj118;
void* right_value330;
void* right_value331;
void* right_value332;
struct sNode* _inf_value3;
struct sReturnNode* _inf_obj_value3;
void* right_value337;
struct sNode* __result177__;
char* head_285;
int head_sline_286;
void* right_value338;
char* buf_287;
_Bool is_type_name__288;
_Bool define_function_pointer_flag_289;
void* right_value339;
_Bool lambda_flag_290;
void* right_value340;
void* right_value341;
char* word2_291;
_Bool fun_name_with_type_name_292;
void* right_value342;
char* word2_293;
_Bool call_method_generics_fun_call_294;
void* right_value343;
char* __dec_obj122;
int nest_298;
void* right_value344;
char* __dec_obj123;
void* right_value345;
struct sNode* __result182__;
void* right_value346;
struct sNode* node_299;
struct sNode* __result183__;
void* right_value347;
void* right_value348;
struct sNode* _inf_value4;
struct sFuncNode* _inf_obj_value4;
void* right_value351;
struct sNode* __result186__;
void* right_value352;
void* right_value353;
struct sNode* _inf_value5;
struct sLineNode* _inf_obj_value5;
void* right_value356;
struct sNode* __result189__;
void* right_value357;
void* right_value358;
struct sNode* _inf_value6;
struct sSNameNode* _inf_obj_value6;
void* right_value361;
struct sNode* __result192__;
void* right_value362;
void* right_value363;
struct sNode* _inf_value7;
struct sCallerFuncNode* _inf_obj_value7;
void* right_value366;
struct sNode* __result195__;
void* right_value367;
void* right_value368;
struct sNode* _inf_value8;
struct sCallerLineNode* _inf_obj_value8;
void* right_value371;
struct sNode* __result198__;
void* right_value372;
void* right_value373;
struct sNode* _inf_value9;
struct sCallerSNameNode* _inf_obj_value9;
void* right_value376;
struct sNode* __result201__;
void* right_value377;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_306;
char* name_307;
_Bool err_308;
void* right_value378;
void* right_value379;
struct sNode* _inf_value10;
struct sVarArgTypeName* _inf_obj_value10;
void* right_value383;
struct sNode* __result204__;
void* right_value384;
struct sNode* node_310;
struct sNode* __result205__;
void* right_value385;
void* right_value386;
struct buffer* fun_name_311;
void* right_value387;
void* right_value388;
struct sType* type_312;
void* right_value389;
struct sClass* klass_316;
void* right_value390;
void* right_value391;
struct sType* __dec_obj132;
void* right_value392;
char* buf2_322;
void* right_value393;
void* right_value394;
struct sNode* node_323;
struct sNode* __result214__;
void* right_value395;
void* right_value396;
struct buffer* fun_name_324;
void* right_value397;
char* buf2_325;
void* right_value398;
void* right_value399;
struct sNode* node_326;
struct sNode* __result215__;
void* right_value400;
struct sNode* node_327;
struct sNode* __result216__;
void* right_value401;
struct sNode* node_328;
struct sNode* __result217__;
void* right_value402;
struct sNode* node_329;
struct sNode* __result218__;
void* right_value403;
struct sNode* node_330;
struct sNode* __result219__;
struct sNode* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
right_value320 = (void*)0;
right_value321 = (void*)0;
right_value322 = (void*)0;
right_value327 = (void*)0;
memset(&head_280, 0, sizeof(char*));
right_value328 = (void*)0;
memset(&value_281, 0, sizeof(struct sNode*));
memset(&tail_282, 0, sizeof(char*));
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value337 = (void*)0;
memset(&head_285, 0, sizeof(char*));
memset(&head_sline_286, 0, sizeof(int));
right_value338 = (void*)0;
memset(&buf_287, 0, sizeof(char*));
memset(&is_type_name__288, 0, sizeof(_Bool));
memset(&define_function_pointer_flag_289, 0, sizeof(_Bool));
right_value339 = (void*)0;
memset(&lambda_flag_290, 0, sizeof(_Bool));
right_value340 = (void*)0;
right_value341 = (void*)0;
memset(&word2_291, 0, sizeof(char*));
memset(&fun_name_with_type_name_292, 0, sizeof(_Bool));
right_value342 = (void*)0;
memset(&word2_293, 0, sizeof(char*));
memset(&call_method_generics_fun_call_294, 0, sizeof(_Bool));
right_value343 = (void*)0;
memset(&nest_298, 0, sizeof(int));
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
memset(&node_299, 0, sizeof(struct sNode*));
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value366 = (void*)0;
right_value367 = (void*)0;
right_value368 = (void*)0;
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
memset(&node_310, 0, sizeof(struct sNode*));
right_value385 = (void*)0;
right_value386 = (void*)0;
memset(&fun_name_311, 0, sizeof(struct buffer*));
right_value387 = (void*)0;
right_value388 = (void*)0;
memset(&type_312, 0, sizeof(struct sType*));
right_value389 = (void*)0;
memset(&klass_316, 0, sizeof(struct sClass*));
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
memset(&buf2_322, 0, sizeof(char*));
right_value393 = (void*)0;
right_value394 = (void*)0;
memset(&node_323, 0, sizeof(struct sNode*));
right_value395 = (void*)0;
right_value396 = (void*)0;
memset(&fun_name_324, 0, sizeof(struct buffer*));
right_value397 = (void*)0;
memset(&buf2_325, 0, sizeof(char*));
right_value398 = (void*)0;
right_value399 = (void*)0;
memset(&node_326, 0, sizeof(struct sNode*));
right_value400 = (void*)0;
memset(&node_327, 0, sizeof(struct sNode*));
right_value401 = (void*)0;
memset(&node_328, 0, sizeof(struct sNode*));
right_value402 = (void*)0;
memset(&node_329, 0, sizeof(struct sNode*));
right_value403 = (void*)0;
memset(&node_330, 0, sizeof(struct sNode*));
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(*info->p==59) {
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1076, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sReturnNode*)(right_value322=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value320=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1076, "sReturnNode")))),((void*)0),(char*)come_increment_ref_count(((char*)(right_value321=__builtin_string("0")))),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sReturnNode_finalize;
            _inf_value2->clone=(void*)sReturnNode_clone;
            _inf_value2->compile=(void*)sReturnNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sReturnNode_kind;
            __result174__ = __result_obj__ = ((struct sNode*)(right_value327=_inf_value2));
            come_call_finalizer3(right_value320,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value322,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value327) { right_value327 = come_decrement_ref_count2(right_value327, ((struct sNode*)right_value327)->finalize, ((struct sNode*)right_value327)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result174__;
        }
        else {
            head_280=info->p;
            value_281=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value328=expression_v13(info))));
            if(right_value328) { right_value328 = come_decrement_ref_count2(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            tail_282=info->p;
            __dec_obj118=value_281;
            value_281=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value329=post_position_operator_v99((struct sNode*)come_increment_ref_count(value_281),info))));
            if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count2(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value329) { right_value329 = come_decrement_ref_count2(right_value329, ((struct sNode*)right_value329)->finalize, ((struct sNode*)right_value329)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            char buf_283[tail_282-head_280+1];
            memset(&buf_283, 0, sizeof(char)            *(tail_282-head_280+1)            );
            memcpy(buf_283,head_280,tail_282-head_280);
            buf_283[tail_282-head_280]=0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1088, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sReturnNode*)(right_value332=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value330=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1088, "sReturnNode")))),(struct sNode*)come_increment_ref_count(value_281),(char*)come_increment_ref_count(((char*)(right_value331=__builtin_string(buf_283)))),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sReturnNode_finalize;
            _inf_value3->clone=(void*)sReturnNode_clone;
            _inf_value3->compile=(void*)sReturnNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sReturnNode_kind;
            __result177__ = __result_obj__ = ((struct sNode*)(right_value337=_inf_value3));
            if(value_281) { value_281 = come_decrement_ref_count2(value_281, ((struct sNode*)value_281)->finalize, ((struct sNode*)value_281)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value330,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value332,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value337) { right_value337 = come_decrement_ref_count2(right_value337, ((struct sNode*)right_value337)->finalize, ((struct sNode*)right_value337)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result177__;
            if(value_281) { value_281 = come_decrement_ref_count2(value_281, ((struct sNode*)value_281)->finalize, ((struct sNode*)value_281)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        if((xisalpha(*info->p)||*info->p==95)&&!(*info->p==76&&*(info->p+1)==34||(*info->p==115||*info->p==83)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39))) {
            head_285=info->p;
            head_sline_286=info->sline;
            buf_287=(char*)come_increment_ref_count(((char*)(right_value338=backtrace_parse_word(info))));
            right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            is_type_name__288=is_type_name(buf_287,info);
            define_function_pointer_flag_289=(_Bool)0;
            if(string_operator_not_equals(buf_287,"if")&&string_operator_not_equals(buf_287,"while")&&string_operator_not_equals(buf_287,"for")&&string_operator_not_equals(buf_287,"switch")&&string_operator_not_equals(buf_287,"return")&&string_operator_not_equals(buf_287,"sizeof")&&string_operator_not_equals(buf_287,"isheap")&&string_operator_not_equals(buf_287,"guard")&&string_operator_not_equals(buf_287,"ispointer")&&string_operator_not_equals(buf_287,"__typeof__")&&string_operator_not_equals(buf_287,"dynamic_typeof")&&string_operator_not_equals(buf_287,"typeof")&&string_operator_not_equals(buf_287,"gc_inc")&&string_operator_not_equals(buf_287,"gc_dec")&&string_operator_not_equals(buf_287,"case")&&string_operator_not_equals(buf_287,"_Alignof")&&string_operator_not_equals(buf_287,"_Alignas")&&string_operator_not_equals(buf_287,"__alignof__")&&*info->p==40&&*(info->p+1)!=42) {
                ((struct tuple3$3sTypephcharphbool*)(right_value339=backtrace_parse_type((_Bool)0,info)));
                come_call_finalizer3(right_value339,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(*info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        define_function_pointer_flag_289=(_Bool)1;
                    }
                }
                info->p=head_285;
                info->sline=head_sline_286;
            }
            lambda_flag_290=(_Bool)0;
            if(string_operator_not_equals(buf_287,"if")&&string_operator_not_equals(buf_287,"while")&&string_operator_not_equals(buf_287,"for")&&string_operator_not_equals(buf_287,"switch")&&string_operator_not_equals(buf_287,"return")&&string_operator_not_equals(buf_287,"sizeof")&&string_operator_not_equals(buf_287,"_Alignof")&&string_operator_not_equals(buf_287,"__alignof__")&&string_operator_not_equals(buf_287,"_Alignas")&&string_operator_not_equals(buf_287,"isheap")&&string_operator_not_equals(buf_287,"guard")&&string_operator_not_equals(buf_287,"ispointer")&&string_operator_not_equals(buf_287,"__typeof__")&&string_operator_not_equals(buf_287,"dynamic_typeof")&&string_operator_not_equals(buf_287,"typeof")&&string_operator_not_equals(buf_287,"gc_inc")&&string_operator_not_equals(buf_287,"gc_dec")&&string_operator_not_equals(buf_287,"case")&&is_type_name__288) {
                info->p=head_285;
                info->sline=head_sline_286;
                ((struct tuple3$3sTypephcharphbool*)(right_value340=backtrace_parse_type((_Bool)0,info)));
                come_call_finalizer3(right_value340,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                word2_291=(char*)come_increment_ref_count(((char*)(right_value341=backtrace_parse_word(info))));
                right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(string_operator_equals(word2_291,"lambda")) {
                    lambda_flag_290=(_Bool)1;
                }
                info->p=head_285;
                info->sline=head_sline_286;
                word2_291 = come_decrement_ref_count2(word2_291, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            fun_name_with_type_name_292=(_Bool)0;
            if(string_operator_not_equals(buf_287,"if")&&string_operator_not_equals(buf_287,"while")&&string_operator_not_equals(buf_287,"for")&&string_operator_not_equals(buf_287,"switch")&&string_operator_not_equals(buf_287,"return")&&string_operator_not_equals(buf_287,"sizeof")&&string_operator_not_equals(buf_287,"_Alignof")&&string_operator_not_equals(buf_287,"__alignof__")&&string_operator_not_equals(buf_287,"_Alignas")&&string_operator_not_equals(buf_287,"isheap")&&string_operator_not_equals(buf_287,"guard")&&string_operator_not_equals(buf_287,"ispointer")&&string_operator_not_equals(buf_287,"dynamic_typeof")&&string_operator_not_equals(buf_287,"__typeof__")&&string_operator_not_equals(buf_287,"typeof")&&string_operator_not_equals(buf_287,"gc_inc")&&string_operator_not_equals(buf_287,"gc_dec")&&string_operator_not_equals(buf_287,"case")) {
                info->p=head_285;
                info->sline=head_sline_286;
                info->no_output_err=(_Bool)1;
                if(xisalpha(*info->p)||*info->p==95) {
                    word2_293=(char*)come_increment_ref_count(((char*)(right_value342=parse_word(info))));
                    right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    word2_293 = come_decrement_ref_count2(word2_293, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                while(*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(*info->p==58&&*(info->p+1)==58) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    if(xisalpha(*info->p)||*info->p==95) {
                        fun_name_with_type_name_292=(_Bool)1;
                    }
                }
                info->no_output_err=(_Bool)0;
                info->p=head_285;
                info->sline=head_sline_286;
            }
            call_method_generics_fun_call_294=(_Bool)0;
            {
                info->p=head_285;
                info->sline=head_sline_286;
                if(xisalpha(*info->p)||*info->p==95) {
                    __dec_obj122=buf_287;
                    buf_287=(char*)come_increment_ref_count(((char*)(right_value343=parse_word(info))));
                    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(!is_type_name(buf_287,info)&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,buf_287)==((void*)0)&&map$2charphsVarphp_operator_load_element(info->gv_table->mVars,buf_287)==((void*)0)&&*info->p==60) {
                    nest_298=0;
                    while(*info->p) {
                        if(*info->p==60) {
                            info->p++;
                            nest_298++;
                        }
                        else {
                            if(*info->p==62) {
                                info->p++;
                                nest_298--;
                                if(nest_298==0) {
                                    break;
                                }
                            }
                            else {
                                if(*info->p==10||*info->p==59) {
                                    break;
                                }
                                else {
                                    info->p++;
                                }
                            }
                        }
                    }
                    if(*info->p==40) {
                        call_method_generics_fun_call_294=(_Bool)1;
                    }
                }
                info->p=head_285;
                info->sline=head_sline_286;
            }
            parse_sharp_v5(info);
            __dec_obj123=buf_287;
            buf_287=(char*)come_increment_ref_count(((char*)(right_value344=parse_word(info))));
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(lambda_flag_290) {
                info->p=head_285;
                info->sline=head_sline_286;
                __result182__ = __result_obj__ = ((struct sNode*)(right_value345=parse_function(info)));
                buf_287 = come_decrement_ref_count2(buf_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value345) { right_value345 = come_decrement_ref_count2(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result182__;
            }
            else {
                if((string_operator_equals(buf_287,"string")||string_operator_equals(buf_287,"wstring"))&&*info->p==40) {
                    node_299=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value346=parse_function_call(buf_287,info))));
                    if(right_value346) { right_value346 = come_decrement_ref_count2(right_value346, ((struct sNode*)right_value346)->finalize, ((struct sNode*)right_value346)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    __result183__ = __result_obj__ = node_299;
                    if(node_299) { node_299 = come_decrement_ref_count2(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    buf_287 = come_decrement_ref_count2(buf_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result183__;
                    if(node_299) { node_299 = come_decrement_ref_count2(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(string_operator_equals(buf_287,"__func__")) {
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1230, "struct sNode");
                        _inf_obj_value4=come_increment_ref_count(((struct sFuncNode*)(right_value348=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(right_value347=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 1230, "sFuncNode")))),info))));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sFuncNode_finalize;
                        _inf_value4->clone=(void*)sFuncNode_clone;
                        _inf_value4->compile=(void*)sFuncNode_compile;
                        _inf_value4->sline=(void*)sNodeBase_sline;
                        _inf_value4->sname=(void*)sNodeBase_sname;
                        _inf_value4->terminated=(void*)sNodeBase_terminated;
                        _inf_value4->kind=(void*)sFuncNode_kind;
                        __result186__ = __result_obj__ = ((struct sNode*)(right_value351=_inf_value4));
                        buf_287 = come_decrement_ref_count2(buf_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value347,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value348,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value351) { right_value351 = come_decrement_ref_count2(right_value351, ((struct sNode*)right_value351)->finalize, ((struct sNode*)right_value351)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result186__;
                    }
                    else {
                        if(string_operator_equals(buf_287,"__line__")) {
                            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1233, "struct sNode");
                            _inf_obj_value5=come_increment_ref_count(((struct sLineNode*)(right_value353=sLineNode_initialize((struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(right_value352=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 1233, "sLineNode")))),info))));
                            _inf_value5->_protocol_obj=_inf_obj_value5;
                            _inf_value5->finalize=(void*)sLineNode_finalize;
                            _inf_value5->clone=(void*)sLineNode_clone;
                            _inf_value5->compile=(void*)sLineNode_compile;
                            _inf_value5->sline=(void*)sNodeBase_sline;
                            _inf_value5->sname=(void*)sNodeBase_sname;
                            _inf_value5->terminated=(void*)sNodeBase_terminated;
                            _inf_value5->kind=(void*)sLineNode_kind;
                            __result189__ = __result_obj__ = ((struct sNode*)(right_value356=_inf_value5));
                            buf_287 = come_decrement_ref_count2(buf_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value352,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value353,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value356) { right_value356 = come_decrement_ref_count2(right_value356, ((struct sNode*)right_value356)->finalize, ((struct sNode*)right_value356)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result189__;
                        }
                        else {
                            if(string_operator_equals(buf_287,"__sname__")) {
                                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1236, "struct sNode");
                                _inf_obj_value6=come_increment_ref_count(((struct sSNameNode*)(right_value358=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(right_value357=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 1236, "sSNameNode")))),info))));
                                _inf_value6->_protocol_obj=_inf_obj_value6;
                                _inf_value6->finalize=(void*)sSNameNode_finalize;
                                _inf_value6->clone=(void*)sSNameNode_clone;
                                _inf_value6->compile=(void*)sSNameNode_compile;
                                _inf_value6->sline=(void*)sNodeBase_sline;
                                _inf_value6->sname=(void*)sNodeBase_sname;
                                _inf_value6->terminated=(void*)sNodeBase_terminated;
                                _inf_value6->kind=(void*)sSNameNode_kind;
                                __result192__ = __result_obj__ = ((struct sNode*)(right_value361=_inf_value6));
                                buf_287 = come_decrement_ref_count2(buf_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value357,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value358,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value361) { right_value361 = come_decrement_ref_count2(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result192__;
                            }
                            else {
                                if(string_operator_equals(buf_287,"__caller_func__")) {
                                    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1239, "struct sNode");
                                    _inf_obj_value7=come_increment_ref_count(((struct sCallerFuncNode*)(right_value363=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(right_value362=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 1239, "sCallerFuncNode")))),info))));
                                    _inf_value7->_protocol_obj=_inf_obj_value7;
                                    _inf_value7->finalize=(void*)sCallerFuncNode_finalize;
                                    _inf_value7->clone=(void*)sCallerFuncNode_clone;
                                    _inf_value7->compile=(void*)sCallerFuncNode_compile;
                                    _inf_value7->sline=(void*)sNodeBase_sline;
                                    _inf_value7->sname=(void*)sNodeBase_sname;
                                    _inf_value7->terminated=(void*)sNodeBase_terminated;
                                    _inf_value7->kind=(void*)sCallerFuncNode_kind;
                                    __result195__ = __result_obj__ = ((struct sNode*)(right_value366=_inf_value7));
                                    buf_287 = come_decrement_ref_count2(buf_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value362,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value363,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value366) { right_value366 = come_decrement_ref_count2(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result195__;
                                }
                                else {
                                    if(string_operator_equals(buf_287,"__caller_line__")) {
                                        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1242, "struct sNode");
                                        _inf_obj_value8=come_increment_ref_count(((struct sCallerLineNode*)(right_value368=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(right_value367=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 1242, "sCallerLineNode")))),info))));
                                        _inf_value8->_protocol_obj=_inf_obj_value8;
                                        _inf_value8->finalize=(void*)sCallerLineNode_finalize;
                                        _inf_value8->clone=(void*)sCallerLineNode_clone;
                                        _inf_value8->compile=(void*)sCallerLineNode_compile;
                                        _inf_value8->sline=(void*)sNodeBase_sline;
                                        _inf_value8->sname=(void*)sNodeBase_sname;
                                        _inf_value8->terminated=(void*)sNodeBase_terminated;
                                        _inf_value8->kind=(void*)sCallerLineNode_kind;
                                        __result198__ = __result_obj__ = ((struct sNode*)(right_value371=_inf_value8));
                                        buf_287 = come_decrement_ref_count2(buf_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value367,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value368,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value371) { right_value371 = come_decrement_ref_count2(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result198__;
                                    }
                                    else {
                                        if(string_operator_equals(buf_287,"__caller_sname__")) {
                                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1245, "struct sNode");
                                            _inf_obj_value9=come_increment_ref_count(((struct sCallerSNameNode*)(right_value373=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(right_value372=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 1245, "sCallerSNameNode")))),info))));
                                            _inf_value9->_protocol_obj=_inf_obj_value9;
                                            _inf_value9->finalize=(void*)sCallerSNameNode_finalize;
                                            _inf_value9->clone=(void*)sCallerSNameNode_clone;
                                            _inf_value9->compile=(void*)sCallerSNameNode_compile;
                                            _inf_value9->sline=(void*)sNodeBase_sline;
                                            _inf_value9->sname=(void*)sNodeBase_sname;
                                            _inf_value9->terminated=(void*)sNodeBase_terminated;
                                            _inf_value9->kind=(void*)sCallerSNameNode_kind;
                                            __result201__ = __result_obj__ = ((struct sNode*)(right_value376=_inf_value9));
                                            buf_287 = come_decrement_ref_count2(buf_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value372,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value373,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(right_value376) { right_value376 = come_decrement_ref_count2(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result201__;
                                        }
                                        else {
                                            if(info->va_arg&&is_type_name(buf_287,info)) {
                                                info->p=head_285;
                                                info->sline=head_sline_286;
                                                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value377=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                                type_306=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                                                name_307=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                                err_308=multiple_assign_var8->v3;
                                                come_call_finalizer3(right_value377,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1253, "struct sNode");
                                                _inf_obj_value10=come_increment_ref_count(((struct sVarArgTypeName*)(right_value379=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(right_value378=(struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 1253, "sVarArgTypeName")))),(struct sType*)come_increment_ref_count(type_306),info))));
                                                _inf_value10->_protocol_obj=_inf_obj_value10;
                                                _inf_value10->finalize=(void*)sVarArgTypeName_finalize;
                                                _inf_value10->clone=(void*)sVarArgTypeName_clone;
                                                _inf_value10->compile=(void*)sVarArgTypeName_compile;
                                                _inf_value10->sline=(void*)sNodeBase_sline;
                                                _inf_value10->sname=(void*)sNodeBase_sname;
                                                _inf_value10->terminated=(void*)sNodeBase_terminated;
                                                _inf_value10->kind=(void*)sVarArgTypeName_kind;
                                                __result204__ = __result_obj__ = ((struct sNode*)(right_value383=_inf_value10));
                                                come_call_finalizer3(type_306,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                name_307 = come_decrement_ref_count2(name_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                buf_287 = come_decrement_ref_count2(buf_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                come_call_finalizer3(right_value378,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer3(right_value379,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(right_value383) { right_value383 = come_decrement_ref_count2(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                return __result204__;
                                                come_call_finalizer3(type_306,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                name_307 = come_decrement_ref_count2(name_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            else {
                                                if((string_operator_equals(buf_287,"sizeof")||string_operator_equals(buf_287,"_Alignof")||string_operator_equals(buf_287,"_Alignas")||string_operator_equals(buf_287,"__alignof__"))&&*info->p==40) {
                                                    node_310=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value384=string_node_v21(buf_287,head_285,head_sline_286,info))));
                                                    if(right_value384) { right_value384 = come_decrement_ref_count2(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    __result205__ = __result_obj__ = node_310;
                                                    if(node_310) { node_310 = come_decrement_ref_count2(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    buf_287 = come_decrement_ref_count2(buf_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    return __result205__;
                                                    if(node_310) { node_310 = come_decrement_ref_count2(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    if(fun_name_with_type_name_292) {
                                                        fun_name_311=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value386=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value385=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1261, "buffer"))))))));
                                                        come_call_finalizer3(right_value385,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value386,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                        buffer_append_str(fun_name_311,buf_287);
                                                        type_312=(struct sType*)come_increment_ref_count(((struct sType*)(right_value388=sType_clone(map$2charphsTypephp_operator_load_element(info->types,((char*)(right_value387=buffer_to_string(fun_name_311))))))));
                                                        right_value387 = come_decrement_ref_count2(right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(right_value388,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(type_312==((void*)0)) {
                                                            klass_316=map$2charphsClassphp_operator_load_element(info->classes,((char*)(right_value389=buffer_to_string(fun_name_311))));
                                                            right_value389 = come_decrement_ref_count2(right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            if(klass_316) {
                                                                __dec_obj132=type_312;
                                                                type_312=(struct sType*)come_increment_ref_count(((struct sType*)(right_value391=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value390=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1271, "sType")))),buf_287,(_Bool)0,info))));
                                                                come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(right_value390,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer3(right_value391,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                            }
                                                            else {
                                                                err_msg(info,"null type(%s)",buf_287);
                                                                exit(2);
                                                            }
                                                        }
                                                        while(*info->p==42) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            if(type_312->mClass->mStruct==(_Bool)0) {
                                                                buffer_append_str(fun_name_311,"p");
                                                            }
                                                        }
                                                        expected_next_character(58,info);
                                                        expected_next_character(58,info);
                                                        buffer_append_str(fun_name_311,"_");
                                                        buf2_322=(char*)come_increment_ref_count(((char*)(right_value392=parse_word(info))));
                                                        right_value392 = come_decrement_ref_count2(right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        buffer_append_str(fun_name_311,buf2_322);
                                                        node_323=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=parse_function_call(((char*)(right_value393=buffer_to_string(fun_name_311))),info))));
                                                        right_value393 = come_decrement_ref_count2(right_value393, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        __result214__ = __result_obj__ = node_323;
                                                        come_call_finalizer3(fun_name_311,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(type_312,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        buf2_322 = come_decrement_ref_count2(buf2_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        if(node_323) { node_323 = come_decrement_ref_count2(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                        buf_287 = come_decrement_ref_count2(buf_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        return __result214__;
                                                        come_call_finalizer3(fun_name_311,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(type_312,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        buf2_322 = come_decrement_ref_count2(buf2_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        if(node_323) { node_323 = come_decrement_ref_count2(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    else {
                                                        if(*info->p==58&&*(info->p+1)==58) {
                                                            info->p+=2;
                                                            skip_spaces_and_lf(info);
                                                            fun_name_324=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value396=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value395=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1305, "buffer"))))))));
                                                            come_call_finalizer3(right_value395,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                            come_call_finalizer3(right_value396,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                            buffer_append_str(fun_name_324,buf_287);
                                                            buffer_append_str(fun_name_324,"_");
                                                            buf2_325=(char*)come_increment_ref_count(((char*)(right_value397=parse_word(info))));
                                                            right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            buffer_append_str(fun_name_324,buf2_325);
                                                            node_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value399=parse_function_call(((char*)(right_value398=buffer_to_string(fun_name_324))),info))));
                                                            right_value398 = come_decrement_ref_count2(right_value398, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            if(right_value399) { right_value399 = come_decrement_ref_count2(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            __result215__ = __result_obj__ = node_326;
                                                            come_call_finalizer3(fun_name_324,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                            buf2_325 = come_decrement_ref_count2(buf2_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            if(node_326) { node_326 = come_decrement_ref_count2(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                            buf_287 = come_decrement_ref_count2(buf_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            return __result215__;
                                                            come_call_finalizer3(fun_name_324,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                            buf2_325 = come_decrement_ref_count2(buf2_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            if(node_326) { node_326 = come_decrement_ref_count2(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        else {
                                                            if(call_method_generics_fun_call_294) {
                                                                node_327=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=parse_function_call(buf_287,info))));
                                                                if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                __result216__ = __result_obj__ = node_327;
                                                                if(node_327) { node_327 = come_decrement_ref_count2(node_327, ((struct sNode*)node_327)->finalize, ((struct sNode*)node_327)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                buf_287 = come_decrement_ref_count2(buf_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                return __result216__;
                                                                if(node_327) { node_327 = come_decrement_ref_count2(node_327, ((struct sNode*)node_327)->finalize, ((struct sNode*)node_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                if(string_operator_not_equals(buf_287,"if")&&string_operator_not_equals(buf_287,"while")&&string_operator_not_equals(buf_287,"for")&&string_operator_not_equals(buf_287,"switch")&&string_operator_not_equals(buf_287,"return")&&string_operator_not_equals(buf_287,"sizeof")&&string_operator_not_equals(buf_287,"isheap")&&string_operator_not_equals(buf_287,"ispointer")&&string_operator_not_equals(buf_287,"guard")&&string_operator_not_equals(buf_287,"__typeof__")&&string_operator_not_equals(buf_287,"dynamic_typeof")&&string_operator_not_equals(buf_287,"typeof")&&string_operator_not_equals(buf_287,"gc_inc")&&string_operator_not_equals(buf_287,"gc_dec")&&string_operator_not_equals(buf_287,"case")&&string_operator_not_equals(buf_287,"_Alignof")&&string_operator_not_equals(buf_287,"__alignof__")&&string_operator_not_equals(buf_287,"_Alignas")&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__288)) {
                                                                    node_328=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value401=parse_function_call(buf_287,info))));
                                                                    if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    __result217__ = __result_obj__ = node_328;
                                                                    if(node_328) { node_328 = come_decrement_ref_count2(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                    buf_287 = come_decrement_ref_count2(buf_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    return __result217__;
                                                                    if(node_328) { node_328 = come_decrement_ref_count2(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                }
                                                                else {
                                                                    node_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=string_node_v21(buf_287,head_285,head_sline_286,info))));
                                                                    if(right_value402) { right_value402 = come_decrement_ref_count2(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    __result218__ = __result_obj__ = node_329;
                                                                    if(node_329) { node_329 = come_decrement_ref_count2(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                    buf_287 = come_decrement_ref_count2(buf_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    return __result218__;
                                                                    if(node_329) { node_329 = come_decrement_ref_count2(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
            }
            buf_287 = come_decrement_ref_count2(buf_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            node_330=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value403=expression_node_v96(info))));
            if(right_value403) { right_value403 = come_decrement_ref_count2(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __result219__ = __result_obj__ = node_330;
            if(node_330) { node_330 = come_decrement_ref_count2(node_330, ((struct sNode*)node_330)->finalize, ((struct sNode*)node_330)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result219__;
            if(node_330) { node_330 = come_decrement_ref_count2(node_330, ((struct sNode*)node_330)->finalize, ((struct sNode*)node_330)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    __result220__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result220__;
}

static void sReturnNode_finalize(struct sReturnNode* self){
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)&&self->value!=((void*)0)) {
                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(self!=((void*)0)&&self->value_source!=((void*)0)) {
                    self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__;
struct sReturnNode* __result175__;
void* right_value333;
struct sReturnNode* result_284;
void* right_value334;
char* __dec_obj119;
void* right_value335;
struct sNode* __dec_obj120;
void* right_value336;
char* __dec_obj121;
struct sReturnNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value333 = (void*)0;
memset(&result_284, 0, sizeof(struct sReturnNode*));
right_value334 = (void*)0;
right_value335 = (void*)0;
right_value336 = (void*)0;
                if(self==(void*)0) {
                    __result175__ = __result_obj__ = (void*)0;
                    return __result175__;
                }
                result_284=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(right_value333=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"))));
                come_call_finalizer3(right_value333,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)) {
                    result_284->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj119=result_284->sname;
                    result_284->sname=(char*)come_increment_ref_count(((char*)(right_value334=string_clone(self->sname))));
                    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(self!=((void*)0)&&self->value!=((void*)0)) {
                    __dec_obj120=result_284->value;
                    result_284->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value335=sNode_clone(self->value))));
                    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value335) { right_value335 = come_decrement_ref_count2(right_value335, ((struct sNode*)right_value335)->finalize, ((struct sNode*)right_value335)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(self!=((void*)0)&&self->value_source!=((void*)0)) {
                    __dec_obj121=result_284->value_source;
                    result_284->value_source=(char*)come_increment_ref_count(((char*)(right_value336=string_clone(self->value_source))));
                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result176__ = __result_obj__ = result_284;
                come_call_finalizer3(result_284,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result176__;
                come_call_finalizer3(result_284,sReturnNode_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_295;
unsigned int hash_296;
unsigned int it_297;
struct sVar* __result178__;
struct sVar* __result179__;
struct sVar* __result180__;
struct sVar* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_295, 0, sizeof(struct sVar*));
memset(&hash_296, 0, sizeof(unsigned int));
memset(&it_297, 0, sizeof(unsigned int));
                    memset(&default_value_295,0,sizeof(struct sVar*));
                    hash_296=string_get_hash_key(((char*)key))%self->size;
                    it_297=hash_296;
                    while((_Bool)1) {
                        if(self->item_existance[it_297]) {
                            if(string_equals(self->keys[it_297],key)) {
                                __result178__ = __result_obj__ = self->items[it_297];
                                come_call_finalizer3(default_value_295,sVar_finalize, 0, 0, 0, 0, (void*)0);
                                return __result178__;
                            }
                            it_297++;
                            if(it_297>=self->size) {
                                it_297=0;
                            }
                            else {
                                if(it_297==hash_296) {
                                    __result179__ = __result_obj__ = default_value_295;
                                    come_call_finalizer3(default_value_295,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result179__;
                                }
                            }
                        }
                        else {
                            __result180__ = __result_obj__ = default_value_295;
                            come_call_finalizer3(default_value_295,sVar_finalize, 0, 0, 1, 0, (void*)0);
                            return __result180__;
                        }
                    }
                    __result181__ = __result_obj__ = default_value_295;
                    come_call_finalizer3(default_value_295,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result181__;
                    come_call_finalizer3(default_value_295,sVar_finalize, 0, 0, 0, 0, (void*)0);
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

static void sFuncNode_finalize(struct sFuncNode* self){
                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__;
struct sFuncNode* __result184__;
void* right_value349;
struct sFuncNode* result_300;
void* right_value350;
char* __dec_obj124;
struct sFuncNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
right_value349 = (void*)0;
memset(&result_300, 0, sizeof(struct sFuncNode*));
right_value350 = (void*)0;
                            if(self==(void*)0) {
                                __result184__ = __result_obj__ = (void*)0;
                                return __result184__;
                            }
                            result_300=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(right_value349=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"))));
                            come_call_finalizer3(right_value349,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(self!=((void*)0)) {
                                result_300->sline=self->sline;
                            }
                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                __dec_obj124=result_300->sname;
                                result_300->sname=(char*)come_increment_ref_count(((char*)(right_value350=string_clone(self->sname))));
                                __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value350 = come_decrement_ref_count2(right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result185__ = __result_obj__ = result_300;
                            come_call_finalizer3(result_300,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result185__;
                            come_call_finalizer3(result_300,sFuncNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLineNode_finalize(struct sLineNode* self){
                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__;
struct sLineNode* __result187__;
void* right_value354;
struct sLineNode* result_301;
void* right_value355;
char* __dec_obj125;
struct sLineNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value354 = (void*)0;
memset(&result_301, 0, sizeof(struct sLineNode*));
right_value355 = (void*)0;
                                if(self==(void*)0) {
                                    __result187__ = __result_obj__ = (void*)0;
                                    return __result187__;
                                }
                                result_301=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(right_value354=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"))));
                                come_call_finalizer3(right_value354,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(self!=((void*)0)) {
                                    result_301->sline=self->sline;
                                }
                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                    __dec_obj125=result_301->sname;
                                    result_301->sname=(char*)come_increment_ref_count(((char*)(right_value355=string_clone(self->sname))));
                                    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value355 = come_decrement_ref_count2(right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result188__ = __result_obj__ = result_301;
                                come_call_finalizer3(result_301,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result188__;
                                come_call_finalizer3(result_301,sLineNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sSNameNode_finalize(struct sSNameNode* self){
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__;
struct sSNameNode* __result190__;
void* right_value359;
struct sSNameNode* result_302;
void* right_value360;
char* __dec_obj126;
struct sSNameNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value359 = (void*)0;
memset(&result_302, 0, sizeof(struct sSNameNode*));
right_value360 = (void*)0;
                                    if(self==(void*)0) {
                                        __result190__ = __result_obj__ = (void*)0;
                                        return __result190__;
                                    }
                                    result_302=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(right_value359=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"))));
                                    come_call_finalizer3(right_value359,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(self!=((void*)0)) {
                                        result_302->sline=self->sline;
                                    }
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        __dec_obj126=result_302->sname;
                                        result_302->sname=(char*)come_increment_ref_count(((char*)(right_value360=string_clone(self->sname))));
                                        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value360 = come_decrement_ref_count2(right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result191__ = __result_obj__ = result_302;
                                    come_call_finalizer3(result_302,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result191__;
                                    come_call_finalizer3(result_302,sSNameNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
                                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__;
struct sCallerFuncNode* __result193__;
void* right_value364;
struct sCallerFuncNode* result_303;
void* right_value365;
char* __dec_obj127;
struct sCallerFuncNode* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
right_value364 = (void*)0;
memset(&result_303, 0, sizeof(struct sCallerFuncNode*));
right_value365 = (void*)0;
                                        if(self==(void*)0) {
                                            __result193__ = __result_obj__ = (void*)0;
                                            return __result193__;
                                        }
                                        result_303=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(right_value364=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"))));
                                        come_call_finalizer3(right_value364,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(self!=((void*)0)) {
                                            result_303->sline=self->sline;
                                        }
                                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                            __dec_obj127=result_303->sname;
                                            result_303->sname=(char*)come_increment_ref_count(((char*)(right_value365=string_clone(self->sname))));
                                            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result194__ = __result_obj__ = result_303;
                                        come_call_finalizer3(result_303,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result194__;
                                        come_call_finalizer3(result_303,sCallerFuncNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
                                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__;
struct sCallerLineNode* __result196__;
void* right_value369;
struct sCallerLineNode* result_304;
void* right_value370;
char* __dec_obj128;
struct sCallerLineNode* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
right_value369 = (void*)0;
memset(&result_304, 0, sizeof(struct sCallerLineNode*));
right_value370 = (void*)0;
                                            if(self==(void*)0) {
                                                __result196__ = __result_obj__ = (void*)0;
                                                return __result196__;
                                            }
                                            result_304=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(right_value369=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"))));
                                            come_call_finalizer3(right_value369,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(self!=((void*)0)) {
                                                result_304->sline=self->sline;
                                            }
                                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                __dec_obj128=result_304->sname;
                                                result_304->sname=(char*)come_increment_ref_count(((char*)(right_value370=string_clone(self->sname))));
                                                __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value370 = come_decrement_ref_count2(right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            __result197__ = __result_obj__ = result_304;
                                            come_call_finalizer3(result_304,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result197__;
                                            come_call_finalizer3(result_304,sCallerLineNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
                                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__;
struct sCallerSNameNode* __result199__;
void* right_value374;
struct sCallerSNameNode* result_305;
void* right_value375;
char* __dec_obj129;
struct sCallerSNameNode* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
right_value374 = (void*)0;
memset(&result_305, 0, sizeof(struct sCallerSNameNode*));
right_value375 = (void*)0;
                                                if(self==(void*)0) {
                                                    __result199__ = __result_obj__ = (void*)0;
                                                    return __result199__;
                                                }
                                                result_305=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(right_value374=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"))));
                                                come_call_finalizer3(right_value374,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(self!=((void*)0)) {
                                                    result_305->sline=self->sline;
                                                }
                                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                    __dec_obj129=result_305->sname;
                                                    result_305->sname=(char*)come_increment_ref_count(((char*)(right_value375=string_clone(self->sname))));
                                                    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                __result200__ = __result_obj__ = result_305;
                                                come_call_finalizer3(result_305,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result200__;
                                                come_call_finalizer3(result_305,sCallerSNameNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
                                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
                                                    if(self!=((void*)0)&&self->type!=((void*)0)) {
                                                        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
void* __result_obj__;
struct sVarArgTypeName* __result202__;
void* right_value380;
struct sVarArgTypeName* result_309;
void* right_value381;
char* __dec_obj130;
void* right_value382;
struct sType* __dec_obj131;
struct sVarArgTypeName* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
right_value380 = (void*)0;
memset(&result_309, 0, sizeof(struct sVarArgTypeName*));
right_value381 = (void*)0;
right_value382 = (void*)0;
                                                    if(self==(void*)0) {
                                                        __result202__ = __result_obj__ = (void*)0;
                                                        return __result202__;
                                                    }
                                                    result_309=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(right_value380=(struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "sVarArgTypeName"))));
                                                    come_call_finalizer3(right_value380,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(self!=((void*)0)) {
                                                        result_309->sline=self->sline;
                                                    }
                                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                        __dec_obj130=result_309->sname;
                                                        result_309->sname=(char*)come_increment_ref_count(((char*)(right_value381=string_clone(self->sname))));
                                                        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value381 = come_decrement_ref_count2(right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    if(self!=((void*)0)&&self->type!=((void*)0)) {
                                                        __dec_obj131=result_309->type;
                                                        result_309->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value382=sType_clone(self->type))));
                                                        come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(right_value382,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                    }
                                                    __result203__ = __result_obj__ = result_309;
                                                    come_call_finalizer3(result_309,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
                                                    return __result203__;
                                                    come_call_finalizer3(result_309,sVarArgTypeName_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_313;
unsigned int hash_314;
unsigned int it_315;
struct sType* __result206__;
struct sType* __result207__;
struct sType* __result208__;
struct sType* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_313, 0, sizeof(struct sType*));
memset(&hash_314, 0, sizeof(unsigned int));
memset(&it_315, 0, sizeof(unsigned int));
                                                            memset(&default_value_313,0,sizeof(struct sType*));
                                                            hash_314=string_get_hash_key(((char*)key))%self->size;
                                                            it_315=hash_314;
                                                            while((_Bool)1) {
                                                                if(self->item_existance[it_315]) {
                                                                    if(string_equals(self->keys[it_315],key)) {
                                                                        __result206__ = __result_obj__ = self->items[it_315];
                                                                        come_call_finalizer3(default_value_313,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                        return __result206__;
                                                                    }
                                                                    it_315++;
                                                                    if(it_315>=self->size) {
                                                                        it_315=0;
                                                                    }
                                                                    else {
                                                                        if(it_315==hash_314) {
                                                                            __result207__ = __result_obj__ = default_value_313;
                                                                            come_call_finalizer3(default_value_313,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                                            return __result207__;
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    __result208__ = __result_obj__ = default_value_313;
                                                                    come_call_finalizer3(default_value_313,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                                    return __result208__;
                                                                }
                                                            }
                                                            __result209__ = __result_obj__ = default_value_313;
                                                            come_call_finalizer3(default_value_313,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                            return __result209__;
                                                            come_call_finalizer3(default_value_313,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_317;
unsigned int hash_318;
unsigned int it_319;
struct sClass* __result210__;
struct sClass* __result211__;
struct sClass* __result212__;
struct sClass* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_317, 0, sizeof(struct sClass*));
memset(&hash_318, 0, sizeof(unsigned int));
memset(&it_319, 0, sizeof(unsigned int));
                                                                memset(&default_value_317,0,sizeof(struct sClass*));
                                                                hash_318=string_get_hash_key(((char*)key))%self->size;
                                                                it_319=hash_318;
                                                                while((_Bool)1) {
                                                                    if(self->item_existance[it_319]) {
                                                                        if(string_equals(self->keys[it_319],key)) {
                                                                            __result210__ = __result_obj__ = self->items[it_319];
                                                                            come_call_finalizer3(default_value_317,sClass_finalize, 0, 0, 0, 0, (void*)0);
                                                                            return __result210__;
                                                                        }
                                                                        it_319++;
                                                                        if(it_319>=self->size) {
                                                                            it_319=0;
                                                                        }
                                                                        else {
                                                                            if(it_319==hash_318) {
                                                                                __result211__ = __result_obj__ = default_value_317;
                                                                                come_call_finalizer3(default_value_317,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                                return __result211__;
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        __result212__ = __result_obj__ = default_value_317;
                                                                        come_call_finalizer3(default_value_317,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result212__;
                                                                    }
                                                                }
                                                                __result213__ = __result_obj__ = default_value_317;
                                                                come_call_finalizer3(default_value_317,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                return __result213__;
                                                                come_call_finalizer3(default_value_317,sClass_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1tuple2$2charphsTypephph* it_320;
struct list_item$1tuple2$2charphsTypephph* prev_it_321;
memset(&it_320, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_321, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                                        it_320=self->head;
                                                                                        while(it_320!=((void*)0)) {
                                                                                            prev_it_321=it_320;
                                                                                            it_320=it_320->next;
                                                                                            come_call_finalizer3(prev_it_321,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
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

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__;
void* right_value404;
struct sNode* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
right_value404 = (void*)0;
    __result221__ = __result_obj__ = ((struct sNode*)(right_value404=expression_node_v99(info)));
    if(right_value404) { right_value404 = come_decrement_ref_count2(right_value404, ((struct sNode*)right_value404)->finalize, ((struct sNode*)right_value404)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result221__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value405;
void* right_value406;
struct sNode* __dec_obj133;
struct sNode* __result222__;
void* right_value407;
void* right_value408;
struct sNode* __dec_obj134;
struct sNode* __result223__;
struct sNode* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
right_value405 = (void*)0;
right_value406 = (void*)0;
right_value407 = (void*)0;
right_value408 = (void*)0;
    if(parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj133=node;
        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value406=parse_or_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value405=sNode_clone(node)))),info))));
        if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value405) { right_value405 = come_decrement_ref_count2(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(right_value406) { right_value406 = come_decrement_ref_count2(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __result222__ = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result222__;
    }
    else {
        if(parsecmp("and",info)) {
            info->p+=strlen("and");
            skip_spaces_and_lf(info);
            __dec_obj134=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value408=parse_and_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value407=sNode_clone(node)))),info))));
            if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            if(right_value408) { right_value408 = come_decrement_ref_count2(right_value408, ((struct sNode*)right_value408)->finalize, ((struct sNode*)right_value408)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __result223__ = __result_obj__ = node;
            if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result223__;
        }
    }
    __result224__ = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result224__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__;
void* right_value409;
struct sNode* node_331;
void* right_value410;
struct sNode* __dec_obj135;
struct sNode* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
right_value409 = (void*)0;
memset(&node_331, 0, sizeof(struct sNode*));
right_value410 = (void*)0;
    node_331=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value409=expression_v13(info))));
    if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj135=node_331;
    node_331=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value410=post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_331),info))));
    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value410) { right_value410 = come_decrement_ref_count2(right_value410, ((struct sNode*)right_value410)->finalize, ((struct sNode*)right_value410)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result225__ = __result_obj__ = node_331;
    if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result225__;
    if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
char* struct_name_332;
void* right_value411;
void* right_value412;
struct buffer* buf_333;
void* right_value413;
char* __dec_obj136;
int i_334;
void* right_value414;
char* __dec_obj137;
void* right_value415;
char* __dec_obj138;
int i_335;
void* right_value416;
void* right_value417;
char* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&struct_name_332, 0, sizeof(char*));
right_value411 = (void*)0;
right_value412 = (void*)0;
memset(&buf_333, 0, sizeof(struct buffer*));
right_value413 = (void*)0;
memset(&i_334, 0, sizeof(int));
right_value414 = (void*)0;
right_value415 = (void*)0;
memset(&i_335, 0, sizeof(int));
right_value416 = (void*)0;
right_value417 = (void*)0;
    buf_333=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value412=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value411=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1387, "buffer"))))))));
    come_call_finalizer3(right_value411,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value412,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj136=struct_name_332;
        struct_name_332=(char*)come_increment_ref_count(((char*)(right_value413=__builtin_string(obj_type->mOriginalTypeName))));
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(!obj_type->mClass->mStruct) {
            for(            i_334=0;            i_334<obj_type->mOriginalTypeNamePointerNum;            i_334++            ){
                buffer_append_str(buf_333,"p");
            }
        }
    }
    else {
        if(obj_type->mClass->mStruct) {
            __dec_obj137=struct_name_332;
            struct_name_332=(char*)come_increment_ref_count(((char*)(right_value414=__builtin_string(obj_type->mClass->mName))));
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value414 = come_decrement_ref_count2(right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj138=struct_name_332;
            struct_name_332=(char*)come_increment_ref_count(((char*)(right_value415=create_generics_name(obj_type,info))));
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_335=0;            i_335<obj_type->mPointerNum;            i_335++            ){
                buffer_append_str(buf_333,"p");
            }
        }
    }
    if(obj_type->mArrayPointerType) {
        buffer_append_str(buf_333,"a");
    }
    if(!array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_333,"pa");
    }
    __result226__ = __result_obj__ = ((char*)(right_value417=xsprintf("%s%s_%s",struct_name_332,((char*)(right_value416=buffer_to_string(buf_333))),fun_name)));
    struct_name_332 = come_decrement_ref_count2(struct_name_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_333,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value416 = come_decrement_ref_count2(right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value417 = come_decrement_ref_count2(right_value417, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result226__;
    struct_name_332 = come_decrement_ref_count2(struct_name_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_333,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
        if(self==((void*)0)) {
            return 0;
        }
        return self->len;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
char* struct_name_336;
void* right_value418;
void* right_value419;
struct buffer* buf_337;
void* right_value420;
char* __dec_obj139;
int i_338;
void* right_value421;
char* __dec_obj140;
void* right_value422;
char* __dec_obj141;
int i_339;
void* right_value423;
int len_341;
void* right_value424;
char* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&struct_name_336, 0, sizeof(char*));
right_value418 = (void*)0;
right_value419 = (void*)0;
memset(&buf_337, 0, sizeof(struct buffer*));
right_value420 = (void*)0;
memset(&i_338, 0, sizeof(int));
right_value421 = (void*)0;
right_value422 = (void*)0;
memset(&i_339, 0, sizeof(int));
right_value423 = (void*)0;
memset(&len_341, 0, sizeof(int));
right_value424 = (void*)0;
    buf_337=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value419=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value418=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1422, "buffer"))))))));
    come_call_finalizer3(right_value418,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value419,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj139=struct_name_336;
        struct_name_336=(char*)come_increment_ref_count(((char*)(right_value420=__builtin_string(obj_type->mOriginalTypeName))));
        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value420 = come_decrement_ref_count2(right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(!obj_type->mClass->mStruct) {
            for(            i_338=0;            i_338<obj_type->mOriginalTypeNamePointerNum;            i_338++            ){
                buffer_append_str(buf_337,"p");
            }
        }
    }
    else {
        if(obj_type->mClass->mStruct) {
            __dec_obj140=struct_name_336;
            struct_name_336=(char*)come_increment_ref_count(((char*)(right_value421=__builtin_string(obj_type->mClass->mName))));
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value421 = come_decrement_ref_count2(right_value421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj141=struct_name_336;
            struct_name_336=(char*)come_increment_ref_count(((char*)(right_value422=create_generics_name(obj_type,info))));
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value422 = come_decrement_ref_count2(right_value422, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_339=0;            i_339<obj_type->mPointerNum;            i_339++            ){
                buffer_append_str(buf_337,"p");
            }
        }
    }
    if(obj_type->mArrayPointerType) {
        buffer_append_str(buf_337,"a");
    }
    if(!array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_337,"pa");
    }
    char none_method_name_340[charp_length(fun_name)+1];
    memset(&none_method_name_340, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_341=string_length(struct_name_336)+string_length(((char*)(right_value423=buffer_to_string(buf_337))));
    right_value423 = come_decrement_ref_count2(right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(none_method_name_340,fun_name+len_341+1,charp_length(fun_name)-len_341-1);
    none_method_name_340[charp_length(fun_name)-len_341-1]=0;
    __result227__ = __result_obj__ = ((char*)(right_value424=__builtin_string(none_method_name_340)));
    struct_name_336 = come_decrement_ref_count2(struct_name_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_337,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value424 = come_decrement_ref_count2(right_value424, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result227__;
    struct_name_336 = come_decrement_ref_count2(struct_name_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_337,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
void* right_value425;
char* struct_name_342;
void* right_value426;
char* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
right_value425 = (void*)0;
memset(&struct_name_342, 0, sizeof(char*));
right_value426 = (void*)0;
    struct_name_342=(char*)come_increment_ref_count(((char*)(right_value425=__builtin_string(obj_class->mName))));
    right_value425 = come_decrement_ref_count2(right_value425, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result228__ = __result_obj__ = ((char*)(right_value426=xsprintf("%s_%s",struct_name_342,fun_name)));
    struct_name_342 = come_decrement_ref_count2(struct_name_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value426 = come_decrement_ref_count2(right_value426, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result228__;
    struct_name_342 = come_decrement_ref_count2(struct_name_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
struct sNode* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    __result229__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result229__;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value427;
void* right_value428;
struct list$1tuple2$2charphsNodephph* params_343;
char* p_344;
int sline_345;
_Bool err_flag_346;
void* right_value429;
char* label_347;
void* right_value430;
char* __dec_obj142;
char* __dec_obj143;
_Bool no_comma_348;
_Bool in_fun_param_349;
void* right_value431;
struct sNode* node_350;
void* right_value432;
struct sNode* __dec_obj144;
void* right_value433;
void* right_value434;
void* right_value435;
void* right_value436;
struct sNode* _inf_value11;
struct sLambdaCall* _inf_obj_value11;
void* right_value441;
struct sNode* __result232__;
struct sNode* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
right_value427 = (void*)0;
right_value428 = (void*)0;
memset(&params_343, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&p_344, 0, sizeof(char*));
memset(&sline_345, 0, sizeof(int));
memset(&err_flag_346, 0, sizeof(_Bool));
right_value429 = (void*)0;
memset(&label_347, 0, sizeof(char*));
right_value430 = (void*)0;
memset(&no_comma_348, 0, sizeof(_Bool));
memset(&in_fun_param_349, 0, sizeof(_Bool));
right_value431 = (void*)0;
memset(&node_350, 0, sizeof(struct sNode*));
right_value432 = (void*)0;
right_value433 = (void*)0;
right_value434 = (void*)0;
right_value435 = (void*)0;
right_value436 = (void*)0;
right_value441 = (void*)0;
    parse_sharp_v5(info);
    if(!node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_343=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value428=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value427=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1486, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer3(right_value427,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value428,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        while((_Bool)1) {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_344=info->p;
            sline_345=info->sline;
            err_flag_346=(_Bool)0;
            label_347=(char*)come_increment_ref_count(((char*)(right_value429=__builtin_string(""))));
            right_value429 = come_decrement_ref_count2(right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(xisalpha(*info->p)||*info->p==95) {
                __dec_obj142=label_347;
                label_347=(char*)come_increment_ref_count(((char*)(right_value430=parse_word(info))));
                __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value430 = come_decrement_ref_count2(right_value430, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                err_flag_346=(_Bool)1;
            }
            if(err_flag_346==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj143=label_347;
                label_347=((void*)0);
                __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_344;
                info->sline=sline_345;
            }
            no_comma_348=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_349=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_350=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value431=expression_v13(info))));
            if(right_value431) { right_value431 = come_decrement_ref_count2(right_value431, ((struct sNode*)right_value431)->finalize, ((struct sNode*)right_value431)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            __dec_obj144=node_350;
            node_350=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value432=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_350),info))));
            if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value432) { right_value432 = come_decrement_ref_count2(right_value432, ((struct sNode*)right_value432)->finalize, ((struct sNode*)right_value432)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            info->no_comma=no_comma_348;
            info->in_fun_param=in_fun_param_349;
            list$1tuple2$2charphsNodephph_push_back(params_343,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value434=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value433=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1529, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_347),(struct sNode*)come_increment_ref_count(node_350))))));
            come_call_finalizer3(right_value433,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value434,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                if(*info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    label_347 = come_decrement_ref_count2(label_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_350) { node_350 = come_decrement_ref_count2(node_350, ((struct sNode*)node_350)->finalize, ((struct sNode*)node_350)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            label_347 = come_decrement_ref_count2(label_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_350) { node_350 = come_decrement_ref_count2(node_350, ((struct sNode*)node_350)->finalize, ((struct sNode*)node_350)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        parse_sharp_v5(info);
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1547, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sLambdaCall*)(right_value436=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(right_value435=(struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 1547, "sLambdaCall")))),(struct sNode*)come_increment_ref_count(node),params_343,info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sLambdaCall_finalize;
        _inf_value11->clone=(void*)sLambdaCall_clone;
        _inf_value11->compile=(void*)sLambdaCall_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sLambdaCall_kind;
        __result232__ = __result_obj__ = ((struct sNode*)(right_value441=_inf_value11));
        come_call_finalizer3(params_343,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(right_value435,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value436,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value441) { right_value441 = come_decrement_ref_count2(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result232__;
        come_call_finalizer3(params_343,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result233__ = __result_obj__ = (struct sNode*)((void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result233__;
    }
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->node!=((void*)0)) {
                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(self!=((void*)0)&&self->params!=((void*)0)) {
                come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
void* __result_obj__;
struct sLambdaCall* __result230__;
void* right_value437;
struct sLambdaCall* result_351;
void* right_value438;
char* __dec_obj145;
void* right_value439;
struct sNode* __dec_obj146;
void* right_value440;
struct list$1tuple2$2charphsNodephph* __dec_obj147;
struct sLambdaCall* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
right_value437 = (void*)0;
memset(&result_351, 0, sizeof(struct sLambdaCall*));
right_value438 = (void*)0;
right_value439 = (void*)0;
right_value440 = (void*)0;
            if(self==(void*)0) {
                __result230__ = __result_obj__ = (void*)0;
                return __result230__;
            }
            result_351=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(right_value437=(struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "sLambdaCall"))));
            come_call_finalizer3(right_value437,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
            if(self!=((void*)0)) {
                result_351->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj145=result_351->sname;
                result_351->sname=(char*)come_increment_ref_count(((char*)(right_value438=string_clone(self->sname))));
                __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value438 = come_decrement_ref_count2(right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)&&self->node!=((void*)0)) {
                __dec_obj146=result_351->node;
                result_351->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value439=sNode_clone(self->node))));
                if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value439) { right_value439 = come_decrement_ref_count2(right_value439, ((struct sNode*)right_value439)->finalize, ((struct sNode*)right_value439)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(self!=((void*)0)&&self->params!=((void*)0)) {
                __dec_obj147=result_351->params;
                result_351->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value440=list$1tuple2$2charphsNodephphp_clone(self->params))));
                come_call_finalizer3(__dec_obj147,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value440,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            __result231__ = __result_obj__ = result_351;
            come_call_finalizer3(result_351,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
            return __result231__;
            come_call_finalizer3(result_351,sLambdaCall_finalize, 0, 0, 0, 0, (void*)0);
}

