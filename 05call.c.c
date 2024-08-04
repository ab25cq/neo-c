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
static void CVALUE_finalize(struct CVALUE* self);
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
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result1__;
memset(&__result_obj__, 0, sizeof(void*));
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
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_1;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
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
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_2;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
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
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_3;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
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
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_4;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
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
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_5;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
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
void* __right_value12 = (void*)0;
struct smart_pointer$1char* result_6;
void* __right_value13 = (void*)0;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
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
void* __right_value14 = (void*)0;
struct smart_pointer$1char* result_7;
void* __right_value15 = (void*)0;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
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
void* __right_value16 = (void*)0;
struct smart_pointer$1short* result_8;
void* __right_value17 = (void*)0;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
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
void* __right_value18 = (void*)0;
struct smart_pointer$1int* result_9;
void* __right_value19 = (void*)0;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
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
void* __right_value20 = (void*)0;
struct smart_pointer$1long* result_10;
void* __right_value21 = (void*)0;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
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
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
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
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
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
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
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
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
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
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* __dec_obj11;
struct smart_pointer$1double* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
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
void* __right_value47 = (void*)0;
struct list_item$1char* litem_12;
void* __right_value48 = (void*)0;
struct list_item$1char* litem_13;
void* __right_value49 = (void*)0;
struct list_item$1char* litem_14;
struct list$1char* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1char*));
memset(&litem_13, 0, sizeof(struct list_item$1char*));
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
void* __right_value52 = (void*)0;
struct list_item$1short* litem_18;
void* __right_value53 = (void*)0;
struct list_item$1short* litem_19;
void* __right_value54 = (void*)0;
struct list_item$1short* litem_20;
struct list$1short* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_18, 0, sizeof(struct list_item$1short*));
memset(&litem_19, 0, sizeof(struct list_item$1short*));
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
void* __right_value57 = (void*)0;
struct list_item$1int* litem_24;
void* __right_value58 = (void*)0;
struct list_item$1int* litem_25;
void* __right_value59 = (void*)0;
struct list_item$1int* litem_26;
struct list$1int* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_24, 0, sizeof(struct list_item$1int*));
memset(&litem_25, 0, sizeof(struct list_item$1int*));
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
void* __right_value62 = (void*)0;
struct list_item$1long* litem_30;
void* __right_value63 = (void*)0;
struct list_item$1long* litem_31;
void* __right_value64 = (void*)0;
struct list_item$1long* litem_32;
struct list$1long* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_30, 0, sizeof(struct list_item$1long*));
memset(&litem_31, 0, sizeof(struct list_item$1long*));
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
void* __right_value67 = (void*)0;
struct list_item$1float* litem_36;
void* __right_value68 = (void*)0;
struct list_item$1float* litem_37;
void* __right_value69 = (void*)0;
struct list_item$1float* litem_38;
struct list$1float* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_36, 0, sizeof(struct list_item$1float*));
memset(&litem_37, 0, sizeof(struct list_item$1float*));
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
void* __right_value72 = (void*)0;
struct list_item$1double* litem_42;
void* __right_value73 = (void*)0;
struct list_item$1double* litem_43;
void* __right_value74 = (void*)0;
struct list_item$1double* litem_44;
struct list$1double* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_42, 0, sizeof(struct list_item$1double*));
memset(&litem_43, 0, sizeof(struct list_item$1double*));
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










struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__;
void* __right_value79 = (void*)0;
struct sNode* __dec_obj12;
void* __right_value80 = (void*)0;
char* __dec_obj13;
struct sReturnNode* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj12=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count2(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj13=self->value_source;
    self->value_source=(char*)come_increment_ref_count(((char*)(__right_value80=string_clone(value_source))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value81 = (void*)0;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    __result46__ = __result_obj__ = ((char*)(__right_value81=__builtin_string("sReturnNode")));
    __right_value81 = come_decrement_ref_count2(__right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result46__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_47;
void* __right_value117 = (void*)0;
struct sType* result_type_48;
void* __right_value118 = (void*)0;
struct sType* result_type2_79;
struct sType* result_type3_80;
_Bool __result65__;
void* __right_value119 = (void*)0;
struct CVALUE* come_value_81;
int right_value_id_82;
void* __right_value120 = (void*)0;
struct sType* come_value_type_83;
void* __right_value121 = (void*)0;
struct sType* __dec_obj37;
void* __right_value122 = (void*)0;
char* var_name_85;
int num_result_stack_86;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct sFun* come_fun_87;
void* __right_value126 = (void*)0;
memset(&come_fun_47, 0, sizeof(struct sFun*));
memset(&result_type_48, 0, sizeof(struct sType*));
memset(&result_type2_79, 0, sizeof(struct sType*));
memset(&result_type3_80, 0, sizeof(struct sType*));
memset(&come_value_81, 0, sizeof(struct CVALUE*));
memset(&come_value_type_83, 0, sizeof(struct sType*));
memset(&var_name_85, 0, sizeof(char*));
memset(&come_fun_87, 0, sizeof(struct sFun*));
    if(self->value) {
        come_fun_47=info->come_fun;
        result_type_48=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value117=sType_clone(come_fun_47->mResultType))));
        result_type2_79=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value118=solve_generics(result_type_48,info->generics_type,info))));
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
        come_value_81=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value119=get_value_from_stack(-1,info))));
        dec_stack_ptr(1,info);
        if(come_value_81->type->mHeap&&come_value_81->var==((void*)0)) {
            right_value_id_82=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_81->c_value));
            if(right_value_id_82!=-1) {
                remove_object_from_right_values(right_value_id_82,info);
            }
        }
        come_value_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value120=solve_generics(come_value_81->type,info->generics_type,info))));
        __dec_obj37=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value121=sType_clone(come_value_81->type))));
        come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(gComeC) {
            add_come_code(info,"return %s;\n",come_value_81->c_value);
        }
        else {
            if(string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_47->mBlock,info,come_value_81->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
                add_come_code(info,"return %s;\n",come_value_81->c_value);
            }
            else {
                static int num_result_84=0;
                var_name_85=(char*)come_increment_ref_count(((char*)(__right_value122=xsprintf("__result%d__",++num_result_84))));
                num_result_stack_86=num_result_84;
                if(!info->come_fun->mNoResultType) {
                    check_assign_type("result type",result_type2_79,come_value_81->type,come_value_81,(_Bool)0,(_Bool)1,info);
                    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value123=make_define_var(result_type2_79,var_name_85,(_Bool)0,info))));
                    __right_value123 = come_decrement_ref_count2(__right_value123, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    add_come_code(info,"%s = __result_obj__ = %s;\n",var_name_85,come_value_81->c_value);
                }
                else {
                    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value124=make_define_var(result_type2_79,var_name_85,(_Bool)0,info))));
                    __right_value124 = come_decrement_ref_count2(__right_value124, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    add_come_code(info,"%s = %s;\n",var_name_85,come_value_81->c_value);
                }
                add_last_code_to_source(info);
                free_objects_on_return(come_fun_47->mBlock,info,come_value_81->var,(_Bool)0);
                free_right_value_objects(info,(_Bool)0);
                if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                    free_objects(info->gv_table,((void*)0),info);
                    add_come_code(info,((char*)(__right_value125=xsprintf("come_heap_final();\n"))));
                    __right_value125 = come_decrement_ref_count2(__right_value125, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                add_come_code(info,"return __result%d__;\n",num_result_stack_86);
                var_name_85 = come_decrement_ref_count2(var_name_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(result_type_48,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_79,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_81,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_87=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_87->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value126=xsprintf("come_heap_final();\n"))));
            __right_value126 = come_decrement_ref_count2(__right_value126, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
void* __right_value82 = (void*)0;
struct sType* result_49;
void* __right_value89 = (void*)0;
struct list$1sTypeph* __dec_obj17;
void* __right_value92 = (void*)0;
struct tuple1$1sTypeph* __dec_obj19;
void* __right_value93 = (void*)0;
struct tuple1$1sTypeph* __dec_obj20;
void* __right_value94 = (void*)0;
char* __dec_obj21;
void* __right_value95 = (void*)0;
struct list$1sTypeph* __dec_obj22;
void* __right_value103 = (void*)0;
struct list$1sNodeph* __dec_obj26;
void* __right_value104 = (void*)0;
struct list$1sTypeph* __dec_obj27;
void* __right_value111 = (void*)0;
struct list$1charph* __dec_obj31;
void* __right_value112 = (void*)0;
struct tuple1$1sTypeph* __dec_obj32;
void* __right_value113 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value114 = (void*)0;
struct sNode* __dec_obj34;
void* __right_value115 = (void*)0;
char* __dec_obj35;
void* __right_value116 = (void*)0;
char* __dec_obj36;
struct sType* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_49, 0, sizeof(struct sType*));
            if(self==(void*)0) {
                __result47__ = __result_obj__ = (void*)0;
                return __result47__;
            }
            result_49=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value82=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
            if(self!=((void*)0)) {
                result_49->mClass=self->mClass;
            }
            if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
                __dec_obj17=result_49->mMultipleTypes;
                result_49->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value89=list$1sTypephp_clone(self->mMultipleTypes))));
                come_call_finalizer3(__dec_obj17,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                __dec_obj19=result_49->mNoSolvedGenericsType;
                result_49->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value92=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
                __dec_obj20=result_49->mOriginalLoadVarType;
                result_49->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value93=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                come_call_finalizer3(__dec_obj20,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                __dec_obj21=result_49->mGenericsName;
                result_49->mGenericsName=(char*)come_increment_ref_count(((char*)(__right_value94=string_clone(self->mGenericsName))));
                __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                __dec_obj22=result_49->mGenericsTypes;
                result_49->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value95=list$1sTypephp_clone(self->mGenericsTypes))));
                come_call_finalizer3(__dec_obj22,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                __dec_obj26=result_49->mArrayNum;
                result_49->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value103=list$1sNodephp_clone(self->mArrayNum))));
                come_call_finalizer3(__dec_obj26,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)) {
                result_49->mOmitArrayNum=self->mOmitArrayNum;
            }
            if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                __dec_obj27=result_49->mParamTypes;
                result_49->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value104=list$1sTypephp_clone(self->mParamTypes))));
                come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                __dec_obj31=result_49->mParamNames;
                result_49->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value111=list$1charphp_clone(self->mParamNames))));
                come_call_finalizer3(__dec_obj31,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                __dec_obj32=result_49->mResultType;
                result_49->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value112=tuple1$1sTypephp_clone(self->mResultType))));
                come_call_finalizer3(__dec_obj32,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)) {
                result_49->mVarArgs=self->mVarArgs;
            }
            if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
                __dec_obj33=result_49->mAlignas;
                result_49->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value113=sNode_clone(self->mAlignas))));
                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
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
                result_49->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value114=sNode_clone(self->mSizeNum))));
                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); }
            }
            if(self!=((void*)0)) {
                result_49->mDynamicArrayNum=self->mDynamicArrayNum;
            }
            if(self!=((void*)0)) {
                result_49->mTypeOfExpression=self->mTypeOfExpression;
            }
            if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                __dec_obj35=result_49->mOriginalTypeName;
                result_49->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(__right_value115=string_clone(self->mOriginalTypeName))));
                __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
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
                result_49->mAsmName=(char*)come_increment_ref_count(((char*)(__right_value116=string_clone(self->mAsmName))));
                __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
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

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result48__;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct list$1sTypeph* result_56;
struct list_item$1sTypeph* it_57;
void* __right_value88 = (void*)0;
struct list$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_56, 0, sizeof(struct list$1sTypeph*));
memset(&it_57, 0, sizeof(struct list_item$1sTypeph*));
                    if(self==((void*)0)) {
                        __result48__ = __result_obj__ = ((void*)0);
                        return __result48__;
                    }
                    result_56=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value84=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value83=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))))));
                    come_call_finalizer3(__right_value83,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_57=self->head;
                    while(it_57!=((void*)0)) {
                        list$1sTypeph_add(result_56,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value88=sType_clone(it_57->item)))));
                        come_call_finalizer3(__right_value88,sType_finalize, 0, 1, 0, 0, __result_obj__);
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

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* __right_value85 = (void*)0;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj14;
void* __right_value86 = (void*)0;
struct list_item$1sTypeph* litem_59;
struct sType* __dec_obj15;
void* __right_value87 = (void*)0;
struct list_item$1sTypeph* litem_60;
struct sType* __dec_obj16;
struct list$1sTypeph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
memset(&litem_59, 0, sizeof(struct list_item$1sTypeph*));
memset(&litem_60, 0, sizeof(struct list_item$1sTypeph*));
                            if(self->len==0) {
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
                                come_call_finalizer3(__right_value85,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
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
                                    litem_59=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
                                    come_call_finalizer3(__right_value86,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_59->prev=self->head;
                                    litem_59->next=((void*)0);
                                    __dec_obj15=litem_59->item;
                                    litem_59->item=(struct sType*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_59;
                                    self->head->next=litem_59;
                                }
                                else {
                                    litem_60=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value87=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
                                    come_call_finalizer3(__right_value87,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value90 = (void*)0;
struct tuple1$1sTypeph* result_63;
void* __right_value91 = (void*)0;
struct sType* __dec_obj18;
struct tuple1$1sTypeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_63, 0, sizeof(struct tuple1$1sTypeph*));
                    if(self==(void*)0) {
                        __result52__ = __result_obj__ = (void*)0;
                        return __result52__;
                    }
                    result_63=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value90=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        __dec_obj18=result_63->v1;
                        result_63->v1=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value91=sType_clone(self->v1))));
                        come_call_finalizer3(__dec_obj18,sType_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value96 = (void*)0;
void* __right_value97 = (void*)0;
struct list$1sNodeph* result_64;
struct list_item$1sNodeph* it_65;
void* __right_value102 = (void*)0;
struct list$1sNodeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_64, 0, sizeof(struct list$1sNodeph*));
memset(&it_65, 0, sizeof(struct list_item$1sNodeph*));
                    if(self==((void*)0)) {
                        __result54__ = __result_obj__ = ((void*)0);
                        return __result54__;
                    }
                    result_64=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value97=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value96=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))))));
                    come_call_finalizer3(__right_value96,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_65=self->head;
                    while(it_65!=((void*)0)) {
                        list$1sNodeph_add(result_64,(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value102=sNode_clone(it_65->item)))));
                        if(__right_value102) { __right_value102 = come_decrement_ref_count2(__right_value102, ((struct sNode*)__right_value102)->finalize, ((struct sNode*)__right_value102)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
void* __right_value98 = (void*)0;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj23;
void* __right_value99 = (void*)0;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj24;
void* __right_value100 = (void*)0;
struct list_item$1sNodeph* litem_68;
struct sNode* __dec_obj25;
struct list$1sNodeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_68, 0, sizeof(struct list_item$1sNodeph*));
                            if(self->len==0) {
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
                                come_call_finalizer3(__right_value98,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
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
                                    litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
                                    come_call_finalizer3(__right_value99,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_67->prev=self->head;
                                    litem_67->next=((void*)0);
                                    __dec_obj24=litem_67->item;
                                    litem_67->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
                                    self->tail=litem_67;
                                    self->head->next=litem_67;
                                }
                                else {
                                    litem_68=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value100=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
                                    come_call_finalizer3(__right_value100,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
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
void* __right_value101 = (void*)0;
struct sNode* result_69;
struct sNode* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_69, 0, sizeof(struct sNode*));
                            if(self==(void*)0) {
                                __result57__ = __result_obj__ = (void*)0;
                                return __result57__;
                            }
                            result_69=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value101=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
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
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
struct list$1charph* result_72;
struct list_item$1charph* it_73;
void* __right_value110 = (void*)0;
struct list$1charph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_72, 0, sizeof(struct list$1charph*));
memset(&it_73, 0, sizeof(struct list_item$1charph*));
                    if(self==((void*)0)) {
                        __result60__ = __result_obj__ = ((void*)0);
                        return __result60__;
                    }
                    result_72=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value106=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value105=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))))));
                    come_call_finalizer3(__right_value105,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_73=self->head;
                    while(it_73!=((void*)0)) {
                        list$1charph_add(result_72,(char*)come_increment_ref_count(((char*)(__right_value110=string_clone(it_73->item)))));
                        __right_value110 = come_decrement_ref_count2(__right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* __right_value107 = (void*)0;
struct list_item$1charph* litem_74;
char* __dec_obj28;
void* __right_value108 = (void*)0;
struct list_item$1charph* litem_75;
char* __dec_obj29;
void* __right_value109 = (void*)0;
struct list_item$1charph* litem_76;
char* __dec_obj30;
struct list$1charph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
memset(&litem_75, 0, sizeof(struct list_item$1charph*));
memset(&litem_76, 0, sizeof(struct list_item$1charph*));
                            if(self->len==0) {
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
                                come_call_finalizer3(__right_value107,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
                                    litem_75=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
                                    come_call_finalizer3(__right_value108,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_75->prev=self->head;
                                    litem_75->next=((void*)0);
                                    __dec_obj29=litem_75->item;
                                    litem_75->item=(char*)come_increment_ref_count(item);
                                    __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_75;
                                    self->head->next=litem_75;
                                }
                                else {
                                    litem_76=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value109=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
                                    come_call_finalizer3(__right_value109,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__;
void* __right_value127 = (void*)0;
struct sLineNode* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value127=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value127,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result66__ = __result_obj__ = self;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result66__;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__;
void* __right_value128 = (void*)0;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
    __result67__ = __result_obj__ = ((char*)(__right_value128=__builtin_string("sLineNode")));
    __right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result67__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct CVALUE* come_value_88;
void* __right_value131 = (void*)0;
char* __dec_obj38;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
struct sType* __dec_obj39;
_Bool __result69__;
memset(&come_value_88, 0, sizeof(struct CVALUE*));
    come_value_88=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value130=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value129=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 124, "CVALUE"))))))));
    come_call_finalizer3(__right_value129,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj38=come_value_88->c_value;
    come_value_88->c_value=(char*)come_increment_ref_count(((char*)(__right_value131=xsprintf("%d",info->sline))));
    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj39=come_value_88->type;
    come_value_88->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value133=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value132=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 127, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value132,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_88->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_88));
    add_come_last_code(info,"%s;\n",come_value_88->c_value);
    __result69__ = (_Bool)1;
    come_call_finalizer3(come_value_88,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result69__;
    come_call_finalizer3(come_value_88,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
void* __right_value134 = (void*)0;
struct list_item$1CVALUEph* litem_89;
struct CVALUE* __dec_obj40;
void* __right_value135 = (void*)0;
struct list_item$1CVALUEph* litem_90;
struct CVALUE* __dec_obj41;
void* __right_value136 = (void*)0;
struct list_item$1CVALUEph* litem_91;
struct CVALUE* __dec_obj42;
struct list$1CVALUEph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_89, 0, sizeof(struct list_item$1CVALUEph*));
memset(&litem_90, 0, sizeof(struct list_item$1CVALUEph*));
memset(&litem_91, 0, sizeof(struct list_item$1CVALUEph*));
        if(self->len==0) {
            litem_89=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value134=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 219, "list_item$1CVALUEph"))));
            come_call_finalizer3(__right_value134,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_89->prev=((void*)0);
            litem_89->next=((void*)0);
            __dec_obj40=litem_89->item;
            litem_89->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj40,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_89;
            self->head=litem_89;
        }
        else {
            if(self->len==1) {
                litem_90=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value135=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 229, "list_item$1CVALUEph"))));
                come_call_finalizer3(__right_value135,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_90->prev=self->head;
                litem_90->next=((void*)0);
                __dec_obj41=litem_90->item;
                litem_90->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj41,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_90;
                self->head->next=litem_90;
            }
            else {
                litem_91=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value136=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 239, "list_item$1CVALUEph"))));
                come_call_finalizer3(__right_value136,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_91->prev=self->tail;
                litem_91->next=((void*)0);
                __dec_obj42=litem_91->item;
                litem_91->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj42,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_91;
                self->tail=litem_91;
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
void* __right_value137 = (void*)0;
struct sSNameNode* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value137=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value137,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result70__ = __result_obj__ = self;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result70__;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__;
void* __right_value138 = (void*)0;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
    __result71__ = __result_obj__ = ((char*)(__right_value138=__builtin_string("sSNameNode")));
    __right_value138 = come_decrement_ref_count2(__right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result71__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
struct CVALUE* come_value_92;
void* __right_value141 = (void*)0;
char* __dec_obj43;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct sType* __dec_obj44;
_Bool __result72__;
memset(&come_value_92, 0, sizeof(struct CVALUE*));
    come_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value140=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value139=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 152, "CVALUE"))))))));
    come_call_finalizer3(__right_value139,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj43=come_value_92->c_value;
    come_value_92->c_value=(char*)come_increment_ref_count(((char*)(__right_value141=xsprintf("\"%s\"",info->sname))));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj44=come_value_92->type;
    come_value_92->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value143=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value142=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 155, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value142,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_92->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_92));
    add_come_last_code(info,"%s;\n",come_value_92->c_value);
    __result72__ = (_Bool)1;
    come_call_finalizer3(come_value_92,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result72__;
    come_call_finalizer3(come_value_92,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* __right_value144 = (void*)0;
struct sFuncNode* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value144=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value144,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result73__ = __result_obj__ = self;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result73__;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__;
void* __right_value145 = (void*)0;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
    __result74__ = __result_obj__ = ((char*)(__right_value145=__builtin_string("sFuncNode")));
    __right_value145 = come_decrement_ref_count2(__right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result74__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
struct CVALUE* come_value_93;
void* __right_value148 = (void*)0;
char* __dec_obj45;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct sType* __dec_obj46;
_Bool __result75__;
memset(&come_value_93, 0, sizeof(struct CVALUE*));
    come_value_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value147=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value146=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 180, "CVALUE"))))))));
    come_call_finalizer3(__right_value146,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj45=come_value_93->c_value;
    come_value_93->c_value=(char*)come_increment_ref_count(((char*)(__right_value148=xsprintf("\"%s\"",info->come_fun->mName))));
    __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj46=come_value_93->type;
    come_value_93->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value150=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value149=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 183, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value149,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_93->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_93));
    add_come_last_code(info,"%s;\n",come_value_93->c_value);
    __result75__ = (_Bool)1;
    come_call_finalizer3(come_value_93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result75__;
    come_call_finalizer3(come_value_93,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__;
void* __right_value151 = (void*)0;
struct sCallerFuncNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value151=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value151,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result76__ = __result_obj__ = self;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result76__;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__;
void* __right_value152 = (void*)0;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    __result77__ = __result_obj__ = ((char*)(__right_value152=__builtin_string("sCallerFuncNode")));
    __right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result77__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct CVALUE* come_value_94;
void* __right_value155 = (void*)0;
char* __dec_obj47;
void* __right_value156 = (void*)0;
char* __dec_obj48;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
struct sType* __dec_obj49;
_Bool __result78__;
memset(&come_value_94, 0, sizeof(struct CVALUE*));
    come_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value154=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value153=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 209, "CVALUE"))))))));
    come_call_finalizer3(__right_value153,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    if(info->caller_fun) {
        __dec_obj47=come_value_94->c_value;
        come_value_94->c_value=(char*)come_increment_ref_count(((char*)(__right_value155=xsprintf("\"%s\"",info->caller_fun->mName))));
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj48=come_value_94->c_value;
        come_value_94->c_value=(char*)come_increment_ref_count(((char*)(__right_value156=xsprintf("\"\""))));
        __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj49=come_value_94->type;
    come_value_94->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value158=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value157=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 217, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value157,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_94->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_94));
    add_come_last_code(info,"%s;\n",come_value_94->c_value);
    __result78__ = (_Bool)1;
    come_call_finalizer3(come_value_94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result78__;
    come_call_finalizer3(come_value_94,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__;
void* __right_value159 = (void*)0;
struct sCallerLineNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value159=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value159,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result79__ = __result_obj__ = self;
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result79__;
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
struct CVALUE* come_value_95;
void* __right_value162 = (void*)0;
char* __dec_obj50;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct sType* __dec_obj51;
_Bool __result80__;
memset(&come_value_95, 0, sizeof(struct CVALUE*));
    come_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value161=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value160=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 238, "CVALUE"))))))));
    come_call_finalizer3(__right_value160,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj50=come_value_95->c_value;
    come_value_95->c_value=(char*)come_increment_ref_count(((char*)(__right_value162=xsprintf("%d",info->caller_line))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj51=come_value_95->type;
    come_value_95->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value164=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value163=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 241, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value163,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_95->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_95));
    add_come_last_code(info,"%s;\n",come_value_95->c_value);
    __result80__ = (_Bool)1;
    come_call_finalizer3(come_value_95,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result80__;
    come_call_finalizer3(come_value_95,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__;
void* __right_value165 = (void*)0;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    __result81__ = __result_obj__ = ((char*)(__right_value165=__builtin_string("sCallerLineNode")));
    __right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result81__;
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__;
void* __right_value166 = (void*)0;
struct sCallerSNameNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value166=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value166,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result82__ = __result_obj__ = self;
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result82__;
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
struct CVALUE* come_value_96;
void* __right_value169 = (void*)0;
char* __dec_obj52;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
struct sType* __dec_obj53;
_Bool __result83__;
memset(&come_value_96, 0, sizeof(struct CVALUE*));
    come_value_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value168=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value167=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 266, "CVALUE"))))))));
    come_call_finalizer3(__right_value167,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj52=come_value_96->c_value;
    come_value_96->c_value=(char*)come_increment_ref_count(((char*)(__right_value169=xsprintf("\"%s\"",info->caller_sname))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj53=come_value_96->type;
    come_value_96->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value171=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value170=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 269, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value170,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_96->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_96));
    add_come_last_code(info,"%s;\n",come_value_96->c_value);
    __result83__ = (_Bool)1;
    come_call_finalizer3(come_value_96,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result83__;
    come_call_finalizer3(come_value_96,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__;
void* __right_value172 = (void*)0;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
    __result84__ = __result_obj__ = ((char*)(__right_value172=__builtin_string("sCallerSNameNode")));
    __right_value172 = come_decrement_ref_count2(__right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result84__;
}

char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__;
void* __right_value173 = (void*)0;
char* fun_name3_98;
struct list$1sTypeph* method_generics_types_before_99;
struct list$1sTypeph* __dec_obj54;
struct sGenericsFun* generics_fun_100;
void* __right_value174 = (void*)0;
_Bool _if_conditional1;
void* __right_value175 = (void*)0;
char* __result89__;
struct list$1sTypeph* __dec_obj55;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&fun_name3_98, 0, sizeof(char*));
memset(&method_generics_types_before_99, 0, sizeof(struct list$1sTypeph*));
memset(&generics_fun_100, 0, sizeof(struct sGenericsFun*));
    static int num_method_generics_97=0;
    fun_name3_98=(char*)come_increment_ref_count(((char*)(__right_value173=xsprintf("%s_method_generics%d",fun_name,num_method_generics_97++))));
    method_generics_types_before_99=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj54=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj54,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_100=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name,((void*)0));
    if(generics_fun_100) {
        if((_if_conditional1=(!create_method_generics_fun((char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(fun_name3_98)))),generics_fun_100,info))),        (come_decrement_ref_count2(__right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
        _if_conditional1) {
            err_msg(info,"%s not found",fun_name3_98);
            __result89__ = __result_obj__ = ((char*)(__right_value175=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
            fun_name3_98 = come_decrement_ref_count2(fun_name3_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_99,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            __right_value175 = come_decrement_ref_count2(__right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result89__;
        }
    }
    __dec_obj55=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_99);
    come_call_finalizer3(__dec_obj55,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result90__ = __result_obj__ = fun_name3_98;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    fun_name3_98 = come_decrement_ref_count2(fun_name3_98, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_99,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    return __result90__;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    fun_name3_98 = come_decrement_ref_count2(fun_name3_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_99,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_101;
unsigned int it_102;
struct sGenericsFun* __result85__;
struct sGenericsFun* __result86__;
struct sGenericsFun* __result87__;
struct sGenericsFun* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
        hash_101=string_get_hash_key(((char*)key))%self->size;
        it_102=hash_101;
        while((_Bool)1) {
            if(self->item_existance[it_102]) {
                if(string_equals(self->keys[it_102],key)) {
                    __result85__ = __result_obj__ = self->items[it_102];
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result85__;
                }
                it_102++;
                if(it_102>=self->size) {
                    it_102=0;
                }
                else {
                    if(it_102==hash_101) {
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
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
char* __dec_obj56;
void* __right_value187 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj62;
struct list$1sTypeph* __dec_obj63;
struct sFunCallNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value176=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value176,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj56=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(__right_value177=__builtin_string(fun_name))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj62=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(__right_value187=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer3(__dec_obj62,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value188 = (void*)0;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
    __result98__ = __result_obj__ = ((char*)(__right_value188=__builtin_string("sFunCallNode")));
    __right_value188 = come_decrement_ref_count2(__right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result98__;
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
char* fun_name_113;
struct list$1tuple2$2charphsNodephph* params_114;
struct sVar* var__115;
struct sType* lambda_type_116;
_Bool __result99__;
void* __right_value189 = (void*)0;
struct sType* result_type_117;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct list$1CVALUEph* come_params_118;
_Bool __result101__;
int i_121;
struct list$1tuple2$2charphsNodephph* o2_saved_122;
struct tuple2$2charphsNodeph* it_125;
struct tuple2$2charphsNodeph* multiple_assign_var1;
char* label_128;
struct sNode* node_129;
_Bool __result108__;
void* __right_value192 = (void*)0;
struct CVALUE* come_value_130;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct buffer* buf_134;
int j_135;
struct list$1CVALUEph* o2_saved_136;
struct CVALUE* it_139;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct CVALUE* come_value_142;
void* __right_value200 = (void*)0;
char* __dec_obj64;
void* __right_value201 = (void*)0;
struct sType* __dec_obj65;
void* __right_value202 = (void*)0;
char* __dec_obj66;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct list$1CVALUEph* come_params_143;
struct list$1tuple2$2charphsNodephph* o2_saved_144;
struct tuple2$2charphsNodeph* it_145;
struct tuple2$2charphsNodeph* multiple_assign_var2;
char* label_146;
struct sNode* node_147;
_Bool __result117__;
void* __right_value205 = (void*)0;
struct CVALUE* come_value_148;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct buffer* buf_149;
int j_150;
struct list$1CVALUEph* o2_saved_151;
struct CVALUE* it_152;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct CVALUE* come_value_153;
void* __right_value210 = (void*)0;
char* __dec_obj67;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct sType* __dec_obj68;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct sType* __dec_obj69;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct sType* __dec_obj70;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct sType* __dec_obj71;
_Bool __result118__;
void* __right_value219 = (void*)0;
char* __dec_obj72;
void* __right_value220 = (void*)0;
char* __dec_obj73;
char* p_154;
int version_155;
char* p2_156;
int i_158;
void* __right_value221 = (void*)0;
char* new_fun_name_159;
void* __right_value222 = (void*)0;
char* __dec_obj74;
void* __right_value223 = (void*)0;
char* new_fun_name_163;
void* __right_value224 = (void*)0;
char* __dec_obj75;
_Bool __result123__;
int i_164;
void* __right_value225 = (void*)0;
char* new_fun_name_165;
void* __right_value226 = (void*)0;
char* __dec_obj76;
struct sFun* fun_166;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
struct list$1CVALUEph* come_params_169;
int i_170;
struct sType* result_type_171;
struct list$1tuple2$2charphsNodephph* o2_saved_172;
struct tuple2$2charphsNodeph* it_173;
struct tuple2$2charphsNodeph* multiple_assign_var3;
char* label_174;
struct sNode* node_175;
_Bool __result128__;
void* __right_value229 = (void*)0;
struct CVALUE* come_value_176;
struct sType* __dec_obj80;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct buffer* buf_180;
int j_181;
struct list$1CVALUEph* o2_saved_182;
struct CVALUE* it_183;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct CVALUE* come_value_184;
void* __right_value237 = (void*)0;
char* __dec_obj81;
struct sType* __dec_obj82;
_Bool __result130__;
void* __right_value238 = (void*)0;
struct sType* result_type_185;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct list$1sTypeph* param_types_186;
struct list$1sTypeph* o2_saved_187;
struct sType* it_190;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct sType* it2_193;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
struct sType* __dec_obj86;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct list$1CVALUEph* come_params_197;
int i_198;
struct list$1tuple2$2charphsNodephph* o2_saved_199;
struct tuple2$2charphsNodeph* it_200;
struct tuple2$2charphsNodeph* multiple_assign_var4;
char* label_201;
struct sNode* node_202;
_Bool __result138__;
void* __right_value250 = (void*)0;
struct CVALUE* come_value_203;
int n_204;
struct list$1charph* o2_saved_205;
char* it_208;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
int i_213;
struct list$1tuple2$2charphsNodephph* o2_saved_214;
struct tuple2$2charphsNodeph* it_215;
struct tuple2$2charphsNodeph* multiple_assign_var5;
char* label_216;
struct sNode* node_217;
_Bool __result147__;
void* __right_value254 = (void*)0;
struct CVALUE* come_value_218;
_Bool __result150__;
void* __right_value255 = (void*)0;
struct CVALUE* come_value_222;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
char* default_param_223;
char* param_name_227;
struct buffer* source_228;
char* p_229;
char* head_230;
int sline_231;
void* __right_value260 = (void*)0;
struct buffer* __dec_obj88;
void* __right_value261 = (void*)0;
struct sNode* node_232;
_Bool __result153__;
struct buffer* __dec_obj89;
void* __right_value262 = (void*)0;
struct CVALUE* come_value_233;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
_Bool __result154__;
_Bool __result155__;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct buffer* buf_234;
int j_235;
struct list$1CVALUEph* o2_saved_236;
struct CVALUE* it_237;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct CVALUE* come_value_238;
void* __right_value270 = (void*)0;
char* __dec_obj90;
void* __right_value271 = (void*)0;
struct sType* __dec_obj91;
void* __right_value272 = (void*)0;
char* __dec_obj92;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
char* __dec_obj93;
_Bool __result156__;
memset(&fun_name_113, 0, sizeof(char*));
memset(&params_114, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&var__115, 0, sizeof(struct sVar*));
memset(&lambda_type_116, 0, sizeof(struct sType*));
memset(&result_type_117, 0, sizeof(struct sType*));
memset(&come_params_118, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_122, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_125, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&come_value_130, 0, sizeof(struct CVALUE*));
memset(&buf_134, 0, sizeof(struct buffer*));
memset(&o2_saved_136, 0, sizeof(struct list$1CVALUEph*));
memset(&it_139, 0, sizeof(struct CVALUE*));
memset(&come_value_142, 0, sizeof(struct CVALUE*));
memset(&come_params_143, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_144, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_145, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&come_value_148, 0, sizeof(struct CVALUE*));
memset(&buf_149, 0, sizeof(struct buffer*));
memset(&o2_saved_151, 0, sizeof(struct list$1CVALUEph*));
memset(&it_152, 0, sizeof(struct CVALUE*));
memset(&come_value_153, 0, sizeof(struct CVALUE*));
memset(&i_158, 0, sizeof(int));
memset(&new_fun_name_159, 0, sizeof(char*));
memset(&new_fun_name_163, 0, sizeof(char*));
memset(&new_fun_name_165, 0, sizeof(char*));
memset(&fun_166, 0, sizeof(struct sFun*));
memset(&come_params_169, 0, sizeof(struct list$1CVALUEph*));
memset(&result_type_171, 0, sizeof(struct sType*));
memset(&o2_saved_172, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_173, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&come_value_176, 0, sizeof(struct CVALUE*));
memset(&buf_180, 0, sizeof(struct buffer*));
memset(&o2_saved_182, 0, sizeof(struct list$1CVALUEph*));
memset(&it_183, 0, sizeof(struct CVALUE*));
memset(&come_value_184, 0, sizeof(struct CVALUE*));
memset(&result_type_185, 0, sizeof(struct sType*));
memset(&param_types_186, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_187, 0, sizeof(struct list$1sTypeph*));
memset(&it_190, 0, sizeof(struct sType*));
memset(&it2_193, 0, sizeof(struct sType*));
memset(&come_params_197, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_199, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_200, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&come_value_203, 0, sizeof(struct CVALUE*));
memset(&o2_saved_205, 0, sizeof(struct list$1charph*));
memset(&o2_saved_214, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_215, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&come_value_218, 0, sizeof(struct CVALUE*));
memset(&come_value_222, 0, sizeof(struct CVALUE*));
memset(&default_param_223, 0, sizeof(char*));
memset(&source_228, 0, sizeof(struct buffer*));
memset(&node_232, 0, sizeof(struct sNode*));
memset(&come_value_233, 0, sizeof(struct CVALUE*));
memset(&buf_234, 0, sizeof(struct buffer*));
memset(&o2_saved_236, 0, sizeof(struct list$1CVALUEph*));
memset(&it_237, 0, sizeof(struct CVALUE*));
memset(&come_value_238, 0, sizeof(struct CVALUE*));
    fun_name_113=(char*)come_increment_ref_count(self->fun_name);
    params_114=self->params;
    var__115=get_variable_from_table(info->lv_table,fun_name_113);
    if(var__115==((void*)0)) {
        var__115=get_variable_from_table(info->gv_table,fun_name_113);
    }
    if(var__115) {
        lambda_type_116=var__115->mType;
        if(string_operator_not_equals(lambda_type_116->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name_113);
            __result99__ = (_Bool)0;
            fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result99__;
        }
        result_type_117=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value189=sType_clone(lambda_type_116->mResultType->v1))));
        result_type_117->mStatic=(_Bool)0;
        come_params_118=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value191=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value190=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 346, "list$1CVALUEph"))))))));
        come_call_finalizer3(__right_value190,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
        if(list$1sTypeph_length(lambda_type_116->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_114)&&!lambda_type_116->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_113,list$1sTypeph_length(lambda_type_116->mParamTypes),list$1tuple2$2charphsNodephph_length(params_114));
            __result101__ = (_Bool)0;
            come_call_finalizer3(result_type_117,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_118,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result101__;
        }
        i_121=0;
        for(        o2_saved_122=(params_114),it_125=list$1tuple2$2charphsNodephph_begin((o2_saved_122));        !list$1tuple2$2charphsNodephph_end((o2_saved_122));        it_125=list$1tuple2$2charphsNodephph_next((o2_saved_122))        ){
            multiple_assign_var1=it_125;
            label_128=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_129=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            if(!node_compile(node_129,info)) {
                __result108__ = (_Bool)0;
                label_128 = come_decrement_ref_count2(label_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_129) { node_129 = come_decrement_ref_count2(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(result_type_117,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_118,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result108__;
            }
            come_value_130=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value192=get_value_from_stack(-1,info))));
            if(lambda_type_116->mVarArgs&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_116->mParamTypes,i_121), "05call.c", 362, 0))==((void*)0)) {
            }
            else {
                check_assign_type(((char*)(__right_value195=xsprintf("\%s calling param #\%s",((char*)(__right_value193=string_to_string(fun_name_113))),((char*)(__right_value194=int_to_string(i_121)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_116->mParamTypes,i_121), "05call.c", 365, 1)),come_value_130->type,come_value_130,(_Bool)0,(_Bool)1,info);
                __right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value194 = come_decrement_ref_count2(__right_value194, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value195 = come_decrement_ref_count2(__right_value195, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_116->mParamTypes,i_121), "05call.c", 366, 2))->mHeap&&come_value_130->type->mHeap) {
                    std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_116->mParamTypes,i_121), "05call.c", 367, 3)),come_value_130->type,come_value_130,info,(_Bool)1);
                }
            }
            list$1CVALUEph_push_back(come_params_118,(struct CVALUE*)come_increment_ref_count(come_value_130));
            dec_stack_ptr(1,info);
            i_121++;
            label_128 = come_decrement_ref_count2(label_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_129) { node_129 = come_decrement_ref_count2(node_129, ((struct sNode*)node_129)->finalize, ((struct sNode*)node_129)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_130,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_134=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value197=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value196=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 378, "buffer"))))))));
        come_call_finalizer3(__right_value196,buffer_finalize, 0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_134,var__115->mCValueName);
        buffer_append_str(buf_134,"(");
        j_135=0;
        for(        o2_saved_136=(struct list$1CVALUEph*)come_increment_ref_count((come_params_118)),it_139=list$1CVALUEph_begin((o2_saved_136));        !list$1CVALUEph_end((o2_saved_136));        it_139=list$1CVALUEph_next((o2_saved_136))        ){
            buffer_append_str(buf_134,it_139->c_value);
            if(j_135!=list$1CVALUEph_length(come_params_118)-1) {
                buffer_append_str(buf_134,",");
            }
            j_135++;
        }
        come_call_finalizer3(o2_saved_136,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_134,")");
        come_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value199=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value198=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 395, "CVALUE"))))))));
        come_call_finalizer3(__right_value198,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj64=come_value_142->c_value;
        come_value_142->c_value=(char*)come_increment_ref_count(((char*)(__right_value200=buffer_to_string(buf_134))));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj65=come_value_142->type;
        come_value_142->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value201=sType_clone(result_type_117))));
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_142->type->mStatic=(_Bool)0;
        come_value_142->var=((void*)0);
        if(lambda_type_116->mResultType->v1->mHeap) {
            append_object_to_right_values2(come_value_142,(struct sType*)come_increment_ref_count(lambda_type_116->mResultType->v1),info);
        }
        add_come_last_code(info,"%s;\n",come_value_142->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_142));
        come_call_finalizer3(result_type_117,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_118,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_134,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_142,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(list$1sTypeph_length(self->method_generics_types)>0) {
            __dec_obj66=fun_name_113;
            fun_name_113=(char*)come_increment_ref_count(((char*)(__right_value202=make_method_generics_function((char*)come_increment_ref_count(fun_name_113),(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types),info))));
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(string_operator_equals(fun_name_113,"__builtin_memmove")||string_operator_equals(fun_name_113,"__builtin_memset")||string_operator_equals(fun_name_113,"__builtin_ffs")||string_operator_equals(fun_name_113,"__builtin_ffsl")||string_operator_equals(fun_name_113,"__builtin_ffsll")) {
            come_params_143=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value204=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value203=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 416, "list$1CVALUEph"))))))));
            come_call_finalizer3(__right_value203,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_144=(params_114),it_145=list$1tuple2$2charphsNodephph_begin((o2_saved_144));            !list$1tuple2$2charphsNodephph_end((o2_saved_144));            it_145=list$1tuple2$2charphsNodephph_next((o2_saved_144))            ){
                multiple_assign_var2=it_145;
                label_146=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                node_147=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                if(!node_compile(node_147,info)) {
                    __result117__ = (_Bool)0;
                    label_146 = come_decrement_ref_count2(label_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_147) { node_147 = come_decrement_ref_count2(node_147, ((struct sNode*)node_147)->finalize, ((struct sNode*)node_147)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_params_143,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result117__;
                }
                come_value_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value205=get_value_from_stack(-1,info))));
                dec_stack_ptr(1,info);
                list$1CVALUEph_push_back(come_params_143,(struct CVALUE*)come_increment_ref_count(come_value_148));
                label_146 = come_decrement_ref_count2(label_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_147) { node_147 = come_decrement_ref_count2(node_147, ((struct sNode*)node_147)->finalize, ((struct sNode*)node_147)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_148,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_149=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value207=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value206=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 430, "buffer"))))))));
            come_call_finalizer3(__right_value206,buffer_finalize, 0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_149,fun_name_113);
            buffer_append_str(buf_149,"(");
            j_150=0;
            for(            o2_saved_151=(struct list$1CVALUEph*)come_increment_ref_count((come_params_143)),it_152=list$1CVALUEph_begin((o2_saved_151));            !list$1CVALUEph_end((o2_saved_151));            it_152=list$1CVALUEph_next((o2_saved_151))            ){
                buffer_append_str(buf_149,it_152->c_value);
                if(j_150!=list$1CVALUEph_length(come_params_143)-1) {
                    buffer_append_str(buf_149,",");
                }
                j_150++;
            }
            come_call_finalizer3(o2_saved_151,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_149,")");
            come_value_153=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value209=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value208=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 447, "CVALUE"))))))));
            come_call_finalizer3(__right_value208,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj67=come_value_153->c_value;
            come_value_153->c_value=(char*)come_increment_ref_count(((char*)(__right_value210=buffer_to_string(buf_149))));
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(string_operator_equals(fun_name_113,"__builtin_memmove")||string_operator_equals(fun_name_113,"__builtin_memset")) {
                __dec_obj68=come_value_153->type;
                come_value_153->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value212=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value211=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 451, "sType")))),"void",(_Bool)0,info))));
                come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value211,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            else {
                if(string_operator_equals(fun_name_113,"__builtin_ffs")) {
                    __dec_obj69=come_value_153->type;
                    come_value_153->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value214=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value213=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 454, "sType")))),"int",(_Bool)0,info))));
                    come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value213,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                else {
                    if(string_operator_equals(fun_name_113,"__builtin_ffsl")) {
                        __dec_obj70=come_value_153->type;
                        come_value_153->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value216=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value215=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 457, "sType")))),"int",(_Bool)0,info))));
                        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value215,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    else {
                        if(string_operator_equals(fun_name_113,"__builtin_ffsll")) {
                            __dec_obj71=come_value_153->type;
                            come_value_153->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value218=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value217=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 460, "sType")))),"int",(_Bool)0,info))));
                            come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(__right_value217,sType_finalize, 0, 1, 0, 0, (void*)0);
                        }
                    }
                }
            }
            come_value_153->var=((void*)0);
            add_come_last_code(info,"%s;\n",come_value_153->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_153));
            __result118__ = (_Bool)1;
            come_call_finalizer3(come_params_143,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_149,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result118__;
            come_call_finalizer3(come_params_143,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_149,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(string_operator_equals(fun_name_113,"string")) {
                __dec_obj72=fun_name_113;
                fun_name_113=(char*)come_increment_ref_count(((char*)(__right_value219=__builtin_string("__builtin_string"))));
                __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                if(string_operator_equals(fun_name_113,"wstring")) {
                    __dec_obj73=fun_name_113;
                    fun_name_113=(char*)come_increment_ref_count(((char*)(__right_value220=__builtin_string("__builtin_wstring"))));
                    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    if(string_operator_equals(fun_name_113,"inherit")) {
                        p_154=info->come_fun->mName;
                        version_155=0;
                        while(*p_154) {
                            if(*p_154==95&&*(p_154+1)==118&&xisdigit(*(p_154+2))) {
                                p2_156=p_154+2;
                                version_155=0;
                                while(xisdigit(*p2_156)) {
                                    version_155=version_155*10+(*p2_156-48);
                                    p2_156++;
                                }
                                break;
                            }
                            else {
                                p_154++;
                            }
                        }
                        char real_fun_name_157[2048];
                        memset(&real_fun_name_157, 0, sizeof(char)                        *(2048)                        );
                        memcpy(real_fun_name_157,info->come_fun->mName,p_154-info->come_fun->mName);
                        real_fun_name_157[p_154-info->come_fun->mName]=0;
                        for(                        i_158=version_155-1;                        i_158>=1;                        i_158--                        ){
                            new_fun_name_159=(char*)come_increment_ref_count(((char*)(__right_value221=xsprintf("%s_v%d",real_fun_name_157,i_158))));
                            if(map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_159)) {
                                __dec_obj74=fun_name_113;
                                fun_name_113=(char*)come_increment_ref_count(((char*)(__right_value222=__builtin_string(new_fun_name_159))));
                                __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                                new_fun_name_159 = come_decrement_ref_count2(new_fun_name_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_159 = come_decrement_ref_count2(new_fun_name_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(i_158==0) {
                            new_fun_name_163=(char*)come_increment_ref_count(((char*)(__right_value223=xsprintf("%s",real_fun_name_157))));
                            if(map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_163)) {
                                __dec_obj75=fun_name_113;
                                fun_name_113=(char*)come_increment_ref_count(((char*)(__right_value224=__builtin_string(new_fun_name_163))));
                                __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            if(string_operator_equals(fun_name_113,info->come_fun->mName)) {
                                err_msg(info,"invalid inherit");
                                __result123__ = (_Bool)0;
                                new_fun_name_163 = come_decrement_ref_count2(new_fun_name_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result123__;
                            }
                            new_fun_name_163 = come_decrement_ref_count2(new_fun_name_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        for(                        i_164=128;                        i_164>=1;                        i_164--                        ){
                            new_fun_name_165=(char*)come_increment_ref_count(((char*)(__right_value225=xsprintf("%s_v%d",fun_name_113,i_164))));
                            if(map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_165)) {
                                __dec_obj76=fun_name_113;
                                fun_name_113=(char*)come_increment_ref_count(((char*)(__right_value226=__builtin_string(new_fun_name_165))));
                                __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                                new_fun_name_165 = come_decrement_ref_count2(new_fun_name_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                break;
                            }
                            new_fun_name_165 = come_decrement_ref_count2(new_fun_name_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
        fun_166=map$2charphsFunph_at(info->funcs,fun_name_113,((void*)0));
        if(string_operator_equals(fun_name_113,"__builtin_va_arg")) {
            come_params_169=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value228=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value227=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 537, "list$1CVALUEph"))))))));
            come_call_finalizer3(__right_value227,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
            i_170=0;
            result_type_171=((void*)0);
            for(            o2_saved_172=(params_114),it_173=list$1tuple2$2charphsNodephph_begin((o2_saved_172));            !list$1tuple2$2charphsNodephph_end((o2_saved_172));            it_173=list$1tuple2$2charphsNodephph_next((o2_saved_172))            ){
                multiple_assign_var3=it_173;
                label_174=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_175=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                if(!node_compile(node_175,info)) {
                    __result128__ = (_Bool)0;
                    label_174 = come_decrement_ref_count2(label_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_175) { node_175 = come_decrement_ref_count2(node_175, ((struct sNode*)node_175)->finalize, ((struct sNode*)node_175)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_params_169,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_171,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result128__;
                }
                come_value_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value229=get_value_from_stack(-1,info))));
                dec_stack_ptr(1,info);
                list$1CVALUEph_add(come_params_169,(struct CVALUE*)come_increment_ref_count(come_value_176));
                __dec_obj80=result_type_171;
                result_type_171=(struct sType*)come_increment_ref_count(come_value_176->type);
                come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
                label_174 = come_decrement_ref_count2(label_174, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_175) { node_175 = come_decrement_ref_count2(node_175, ((struct sNode*)node_175)->finalize, ((struct sNode*)node_175)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            buf_180=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value234=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value233=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 556, "buffer"))))))));
            come_call_finalizer3(__right_value233,buffer_finalize, 0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_180,fun_name_113);
            buffer_append_str(buf_180,"(");
            j_181=0;
            for(            o2_saved_182=(struct list$1CVALUEph*)come_increment_ref_count((come_params_169)),it_183=list$1CVALUEph_begin((o2_saved_182));            !list$1CVALUEph_end((o2_saved_182));            it_183=list$1CVALUEph_next((o2_saved_182))            ){
                buffer_append_str(buf_180,it_183->c_value);
                if(j_181!=list$1CVALUEph_length(come_params_169)-1) {
                    buffer_append_str(buf_180,",");
                }
                j_181++;
            }
            come_call_finalizer3(o2_saved_182,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_180,")");
            come_value_184=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value236=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value235=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 573, "CVALUE"))))))));
            come_call_finalizer3(__right_value235,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj81=come_value_184->c_value;
            come_value_184->c_value=(char*)come_increment_ref_count(((char*)(__right_value237=buffer_to_string(buf_180))));
            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj82=come_value_184->type;
            come_value_184->type=(struct sType*)come_increment_ref_count(result_type_171);
            come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_184->var=((void*)0);
            add_come_last_code(info,"%s;\n",come_value_184->c_value);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_184));
            come_call_finalizer3(come_params_169,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_171,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_180,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(fun_166==((void*)0)) {
                err_msg(info,"function not found(%s) at normal function call(1)\n",fun_name_113);
                __result130__ = (_Bool)1;
                fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result130__;
            }
            else {
                result_type_185=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value238=sType_clone(fun_166->mResultType))));
                result_type_185->mStatic=(_Bool)0;
                param_types_186=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value240=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value239=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 590, "list$1sTypeph"))))))));
                come_call_finalizer3(__right_value239,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
                for(                o2_saved_187=(struct list$1sTypeph*)come_increment_ref_count((fun_166->mParamTypes)),it_190=list$1sTypeph_begin((o2_saved_187));                !list$1sTypeph_end((o2_saved_187));                it_190=list$1sTypeph_next((o2_saved_187))                ){
                    it2_193=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value242=solve_generics(((struct sType*)(__right_value241=sType_clone(it_190))),info->generics_type,info))));
                    come_call_finalizer3(__right_value241,sType_finalize, 0, 1, 0, 0, (void*)0);
                    list$1sTypeph_push_back(param_types_186,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value246=sType_clone(it2_193)))));
                    come_call_finalizer3(__right_value246,sType_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(it2_193,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_187,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj86=result_type_185;
                result_type_185=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value247=solve_generics(result_type_185,info->generics_type,info))));
                come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_params_197=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value249=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value248=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 598, "list$1CVALUEph"))))))));
                come_call_finalizer3(__right_value248,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
                for(                i_198=0;                i_198<list$1sTypeph_length(fun_166->mParamTypes);                i_198++                ){
                    list$1CVALUEph_add(come_params_197,((void*)0));
                }
                for(                o2_saved_199=(params_114),it_200=list$1tuple2$2charphsNodephph_begin((o2_saved_199));                !list$1tuple2$2charphsNodephph_end((o2_saved_199));                it_200=list$1tuple2$2charphsNodephph_next((o2_saved_199))                ){
                    multiple_assign_var4=it_200;
                    label_201=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                    node_202=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
                    if(fun_166->mVarArgs||string_operator_equals(fun_name_113,"__builtin_va_start")) {
                    }
                    else {
                        if(label_201) {
                            if(!node_compile(node_202,info)) {
                                __result138__ = (_Bool)0;
                                label_201 = come_decrement_ref_count2(label_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_202) { node_202 = come_decrement_ref_count2(node_202, ((struct sNode*)node_202)->finalize, ((struct sNode*)node_202)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(result_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_186,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_197,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result138__;
                            }
                            come_value_203=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value250=get_value_from_stack(-1,info))));
                            dec_stack_ptr(1,info);
                            n_204=0;
                            for(                            o2_saved_205=(struct list$1charph*)come_increment_ref_count((fun_166->mParamNames)),it_208=list$1charph_begin((o2_saved_205));                            !list$1charph_end((o2_saved_205));                            it_208=list$1charph_next((o2_saved_205))                            ){
                                if(string_operator_equals(label_201,it_208)) {
                                    break;
                                }
                                n_204++;
                            }
                            come_call_finalizer3(o2_saved_205,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(list$1sTypephp_operator_load_element(param_types_186,n_204)) {
                                check_assign_type(((char*)(__right_value253=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value251=string_to_string(fun_name_113))),((char*)(__right_value252=int_to_string(n_204)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_186,n_204), "05call.c", 627, 4)),come_value_203->type,come_value_203,(_Bool)0,(_Bool)1,info);
                                __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            if(list$1sTypephp_operator_load_element(param_types_186,n_204)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_186,n_204), "05call.c", 629, 5))->mHeap&&come_value_203->type->mHeap) {
                                std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_186,n_204), "05call.c", 630, 6)),come_value_203->type,come_value_203,info,(_Bool)1);
                            }
                            list$1CVALUEph_replace(come_params_197,n_204,(struct CVALUE*)come_increment_ref_count(come_value_203));
                            come_call_finalizer3(come_value_203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    label_201 = come_decrement_ref_count2(label_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_202) { node_202 = come_decrement_ref_count2(node_202, ((struct sNode*)node_202)->finalize, ((struct sNode*)node_202)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                i_213=0;
                for(                o2_saved_214=(params_114),it_215=list$1tuple2$2charphsNodephph_begin((o2_saved_214));                !list$1tuple2$2charphsNodephph_end((o2_saved_214));                it_215=list$1tuple2$2charphsNodephph_next((o2_saved_214))                ){
                    multiple_assign_var5=it_215;
                    label_216=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                    node_217=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
                    if(fun_166->mVarArgs||string_operator_equals(fun_name_113,"__builtin_va_start")) {
                        if(!node_compile(node_217,info)) {
                            __result147__ = (_Bool)0;
                            label_216 = come_decrement_ref_count2(label_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(node_217) { node_217 = come_decrement_ref_count2(node_217, ((struct sNode*)node_217)->finalize, ((struct sNode*)node_217)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(result_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_186,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_197,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            return __result147__;
                        }
                        come_value_218=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value254=get_value_from_stack(-1,info))));
                        dec_stack_ptr(1,info);
                        while((_Bool)1) {
                            if(list$1CVALUEphp_operator_load_element(come_params_197,i_213)==((void*)0)) {
                                break;
                            }
                            else {
                                i_213++;
                            }
                        }
                        list$1CVALUEph_replace(come_params_197,i_213,(struct CVALUE*)come_increment_ref_count(come_value_218));
                        i_213++;
                        come_call_finalizer3(come_value_218,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(label_216) {
                        }
                        else {
                            if(!node_compile(node_217,info)) {
                                __result150__ = (_Bool)0;
                                label_216 = come_decrement_ref_count2(label_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_217) { node_217 = come_decrement_ref_count2(node_217, ((struct sNode*)node_217)->finalize, ((struct sNode*)node_217)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(result_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_186,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_197,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result150__;
                            }
                            come_value_222=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value255=get_value_from_stack(-1,info))));
                            dec_stack_ptr(1,info);
                            while((_Bool)1) {
                                if(list$1CVALUEphp_operator_load_element(come_params_197,i_213)==((void*)0)) {
                                    break;
                                }
                                else {
                                    i_213++;
                                }
                            }
                            if(list$1sTypephp_operator_load_element(param_types_186,i_213)) {
                                check_assign_type(((char*)(__right_value258=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value256=string_to_string(fun_name_113))),((char*)(__right_value257=int_to_string(i_213)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_186,i_213), "05call.c", 681, 7)),come_value_222->type,come_value_222,(_Bool)0,(_Bool)1,info);
                                __right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value258 = come_decrement_ref_count2(__right_value258, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            if(list$1sTypephp_operator_load_element(param_types_186,i_213)&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_186,i_213), "05call.c", 683, 8))->mHeap&&come_value_222->type->mHeap) {
                                std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_186,i_213), "05call.c", 684, 9)),come_value_222->type,come_value_222,info,(_Bool)1);
                            }
                            list$1CVALUEph_replace(come_params_197,i_213,(struct CVALUE*)come_increment_ref_count(come_value_222));
                            i_213++;
                            come_call_finalizer3(come_value_222,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    label_216 = come_decrement_ref_count2(label_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_217) { node_217 = come_decrement_ref_count2(node_217, ((struct sNode*)node_217)->finalize, ((struct sNode*)node_217)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                while((_Bool)1) {
                    if(list$1CVALUEphp_operator_load_element(come_params_197,i_213)==((void*)0)) {
                        break;
                    }
                    else {
                        i_213++;
                    }
                }
                if(list$1tuple2$2charphsNodephph_length(params_114)<list$1sTypeph_length(fun_166->mParamTypes)) {
                    for(                    ;                    i_213<list$1sTypeph_length(fun_166->mParamTypes);                    i_213++                    ){
                        default_param_223=(char*)come_increment_ref_count(((char*)(__right_value259=string_clone(list$1charphp_operator_load_element(fun_166->mParamDefaultParametors,i_213)))));
                        param_name_227=((char*)come_null_check(list$1charphp_operator_load_element(fun_166->mParamNames,i_213), "05call.c", 705, 10));
                        if(default_param_223&&string_operator_not_equals(default_param_223,"")&&list$1CVALUEphp_operator_load_element(come_params_197,i_213)==((void*)0)) {
                            source_228=(struct buffer*)come_increment_ref_count(info->source);
                            p_229=info->p;
                            head_230=info->head;
                            sline_231=info->sline;
                            __dec_obj88=info->source;
                            info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value260=string_to_buffer(default_param_223))));
                            come_call_finalizer3(__dec_obj88,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            info->p=info->source->buf;
                            info->head=info->source->buf;
                            node_232=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value261=expression_v13(info))));
                            if(!node_compile(node_232,info)) {
                                __result153__ = (_Bool)0;
                                come_call_finalizer3(source_228,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                if(node_232) { node_232 = come_decrement_ref_count2(node_232, ((struct sNode*)node_232)->finalize, ((struct sNode*)node_232)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                default_param_223 = come_decrement_ref_count2(default_param_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_186,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_197,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result153__;
                            }
                            __dec_obj89=info->source;
                            info->source=(struct buffer*)come_increment_ref_count(source_228);
                            come_call_finalizer3(__dec_obj89,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            info->p=p_229;
                            info->head=head_230;
                            info->sline=sline_231;
                            come_value_233=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value262=get_value_from_stack(-1,info))));
                            if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_186,i_213), "05call.c", 729, 11))) {
                                check_assign_type(((char*)(__right_value265=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value263=string_to_string(fun_name_113))),((char*)(__right_value264=int_to_string(i_213)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_186,i_213), "05call.c", 730, 12)),come_value_233->type,come_value_233,(_Bool)0,(_Bool)1,info);
                                __right_value263 = come_decrement_ref_count2(__right_value263, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value264 = come_decrement_ref_count2(__right_value264, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value265 = come_decrement_ref_count2(__right_value265, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_186,i_213), "05call.c", 732, 13))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_186,i_213), "05call.c", 732, 14))->mHeap&&come_value_233->type->mHeap) {
                                std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_186,i_213), "05call.c", 733, 15)),come_value_233->type,come_value_233,info,(_Bool)1);
                            }
                            list$1CVALUEph_replace(come_params_197,i_213,(struct CVALUE*)come_increment_ref_count(come_value_233));
                            dec_stack_ptr(1,info);
                            come_call_finalizer3(source_228,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            if(node_232) { node_232 = come_decrement_ref_count2(node_232, ((struct sNode*)node_232)->finalize, ((struct sNode*)node_232)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(come_value_233,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(list$1CVALUEphp_operator_load_element(come_params_197,i_213)==((void*)0)) {
                                err_msg(info,"require parametor(%s) %d",fun_166->mName,i_213);
                                __result154__ = (_Bool)0;
                                default_param_223 = come_decrement_ref_count2(default_param_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_186,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_197,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                return __result154__;
                            }
                        }
                        default_param_223 = come_decrement_ref_count2(default_param_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(list$1sTypeph_length(fun_166->mParamTypes)!=list$1CVALUEph_length(come_params_197)&&!fun_166->mVarArgs&&string_operator_not_equals(fun_name_113,"__builtin_va_start")&&string_operator_not_equals(fun_name_113,"__builtin_va_end")) {
                    err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_113,list$1sTypeph_length(fun_166->mParamTypes),list$1tuple2$2charphsNodephph_length(params_114));
                    __result155__ = (_Bool)0;
                    come_call_finalizer3(result_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_186,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_197,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result155__;
                }
                buf_234=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value267=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value266=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 753, "buffer"))))))));
                come_call_finalizer3(__right_value266,buffer_finalize, 0, 1, 0, 0, (void*)0);
                buffer_append_str(buf_234,fun_name_113);
                buffer_append_str(buf_234,"(");
                j_235=0;
                for(                o2_saved_236=(struct list$1CVALUEph*)come_increment_ref_count((come_params_197)),it_237=list$1CVALUEph_begin((o2_saved_236));                !list$1CVALUEph_end((o2_saved_236));                it_237=list$1CVALUEph_next((o2_saved_236))                ){
                    buffer_append_str(buf_234,it_237->c_value);
                    if(j_235!=list$1CVALUEph_length(come_params_197)-1) {
                        buffer_append_str(buf_234,",");
                    }
                    j_235++;
                }
                come_call_finalizer3(o2_saved_236,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                buffer_append_str(buf_234,")");
                come_value_238=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value269=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value268=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 770, "CVALUE"))))))));
                come_call_finalizer3(__right_value268,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj90=come_value_238->c_value;
                come_value_238->c_value=(char*)come_increment_ref_count(((char*)(__right_value270=buffer_to_string(buf_234))));
                __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj91=come_value_238->type;
                come_value_238->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value271=sType_clone(result_type_185))));
                come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_238->type->mStatic=(_Bool)0;
                come_value_238->var=((void*)0);
                if(fun_166->mResultType->mHeap) {
                    append_object_to_right_values2(come_value_238,(struct sType*)come_increment_ref_count(result_type_185),info);
                }
                if(string_operator_not_equals(info->come_fun_name,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_calloc")&&string_operator_not_equals(info->come_fun_name,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun_name,"come_free")) {
                    if(string_operator_not_equals(fun_name_113,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_113,"null_check")&&string_operator_not_equals(fun_name_113,"come_push_stackframe")&&string_operator_not_equals(fun_name_113,"come_pop_stackframe")) {
                        __dec_obj92=come_value_238->c_value;
                        come_value_238->c_value=(char*)come_increment_ref_count(((char*)(__right_value272=append_stackframe(come_value_238->c_value,come_value_238->type,info))));
                        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(!self->guard_break&&result_type_185->mGuardValue&&result_type_185->mPointerNum>0) {
                    __dec_obj93=come_value_238->c_value;
                    come_value_238->c_value=(char*)come_increment_ref_count(((char*)(__right_value274=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value273=make_type_name_string(result_type_185,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_238->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
                    __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __right_value273 = come_decrement_ref_count2(__right_value273, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                add_come_last_code(info,"%s;\n",come_value_238->c_value);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_238));
                come_call_finalizer3(result_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_186,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_197,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_234,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_238,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result156__ = (_Bool)1;
    fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result156__;
    fun_name_113 = come_decrement_ref_count2(fun_name_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsNodephph* __result91__;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_105;
struct list_item$1tuple2$2charphsNodephph* it_106;
void* __right_value186 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_105, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_106, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
        if(self==((void*)0)) {
            __result91__ = __result_obj__ = ((void*)0);
            return __result91__;
        }
        result_105=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(__right_value179=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(__right_value178=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 135, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer3(__right_value178,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        it_106=self->head;
        while(it_106!=((void*)0)) {
            list$1tuple2$2charphsNodephph_add(result_105,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(__right_value186=tuple2$2charphsNodephp_clone(it_106->item)))));
            come_call_finalizer3(__right_value186,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            it_106=it_106->next;
        }
        __result96__ = __result_obj__ = result_105;
        come_call_finalizer3(result_105,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result96__;
        come_call_finalizer3(result_105,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1tuple2$2charphsNodephph* it_103;
struct list_item$1tuple2$2charphsNodephph* prev_it_104;
memset(&it_103, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_104, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_103=self->head;
                while(it_103!=((void*)0)) {
                    prev_it_104=it_103;
                    it_103=it_103->next;
                    come_call_finalizer3(prev_it_104,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__;
void* __right_value180 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_107;
struct tuple2$2charphsNodeph* __dec_obj57;
void* __right_value181 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_108;
struct tuple2$2charphsNodeph* __dec_obj58;
void* __right_value182 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_109;
struct tuple2$2charphsNodeph* __dec_obj59;
struct list$1tuple2$2charphsNodephph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_107, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&litem_108, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&litem_109, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(self->len==0) {
                    litem_107=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value180=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 149, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(__right_value180,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_107->prev=((void*)0);
                    litem_107->next=((void*)0);
                    __dec_obj57=litem_107->item;
                    litem_107->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj57,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_107;
                    self->head=litem_107;
                }
                else {
                    if(self->len==1) {
                        litem_108=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value181=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 159, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(__right_value181,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_108->prev=self->head;
                        litem_108->next=((void*)0);
                        __dec_obj58=litem_108->item;
                        litem_108->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj58,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_108;
                        self->head->next=litem_108;
                    }
                    else {
                        litem_109=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value182=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 169, "list_item$1tuple2$2charphsNodephph"))));
                        come_call_finalizer3(__right_value182,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_109->prev=self->tail;
                        litem_109->next=((void*)0);
                        __dec_obj59=litem_109->item;
                        litem_109->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj59,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail->next=litem_109;
                        self->tail=litem_109;
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
void* __right_value183 = (void*)0;
struct tuple2$2charphsNodeph* result_110;
void* __right_value184 = (void*)0;
char* __dec_obj60;
void* __right_value185 = (void*)0;
struct sNode* __dec_obj61;
struct tuple2$2charphsNodeph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_110, 0, sizeof(struct tuple2$2charphsNodeph*));
                if(self==(void*)0) {
                    __result94__ = __result_obj__ = (void*)0;
                    return __result94__;
                }
                result_110=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(__right_value183=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"))));
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj60=result_110->v1;
                    result_110->v1=(char*)come_increment_ref_count(((char*)(__right_value184=string_clone(self->v1))));
                    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                if(self!=((void*)0)&&self->v2!=((void*)0)) {
                    __dec_obj61=result_110->v2;
                    result_110->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value185=sNode_clone(self->v2))));
                    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
                }
                __result95__ = __result_obj__ = result_110;
                come_call_finalizer3(result_110,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result95__;
                come_call_finalizer3(result_110,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1tuple2$2charphsNodephph* it_111;
struct list_item$1tuple2$2charphsNodephph* prev_it_112;
memset(&it_111, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_112, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
        it_111=self->head;
        while(it_111!=((void*)0)) {
            prev_it_112=it_111;
            it_111=it_111->next;
            come_call_finalizer3(prev_it_112,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1CVALUEph* it_119;
struct list_item$1CVALUEph* prev_it_120;
memset(&it_119, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_120, 0, sizeof(struct list_item$1CVALUEph*));
                it_119=self->head;
                while(it_119!=((void*)0)) {
                    prev_it_120=it_119;
                    it_119=it_119->next;
                    come_call_finalizer3(prev_it_120,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct tuple2$2charphsNodeph* result_123;
struct tuple2$2charphsNodeph* __result102__;
struct tuple2$2charphsNodeph* __result103__;
struct tuple2$2charphsNodeph* result_124;
struct tuple2$2charphsNodeph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_123, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_124, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(self==((void*)0)) {
                memset(&result_123,0,sizeof(struct tuple2$2charphsNodeph*));
                __result102__ = __result_obj__ = result_123;
                return __result102__;
            }
            self->it=self->head;
            if(self->it) {
                __result103__ = __result_obj__ = self->it->item;
                return __result103__;
            }
            memset(&result_124,0,sizeof(struct tuple2$2charphsNodeph*));
            __result104__ = __result_obj__ = result_124;
            return __result104__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
            return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__;
struct tuple2$2charphsNodeph* result_126;
struct tuple2$2charphsNodeph* __result105__;
struct tuple2$2charphsNodeph* __result106__;
struct tuple2$2charphsNodeph* result_127;
struct tuple2$2charphsNodeph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_126, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_127, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_126,0,sizeof(struct tuple2$2charphsNodeph*));
                __result105__ = __result_obj__ = result_126;
                return __result105__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result106__ = __result_obj__ = self->it->item;
                return __result106__;
            }
            memset(&result_127,0,sizeof(struct tuple2$2charphsNodeph*));
            __result107__ = __result_obj__ = result_127;
            return __result107__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
struct list_item$1sTypeph* it_131;
int i_132;
struct sType* __result109__;
struct sType* default_value_133;
struct sType* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_131, 0, sizeof(struct list_item$1sTypeph*));
memset(&default_value_133, 0, sizeof(struct sType*));
                if(position<0) {
                    position+=self->len;
                }
                it_131=self->head;
                i_132=0;
                while(it_131!=((void*)0)) {
                    if(position==i_132) {
                        __result109__ = __result_obj__ = it_131->item;
                        return __result109__;
                    }
                    it_131=it_131->next;
                    i_132++;
                }
                memset(&default_value_133,0,sizeof(struct sType*));
                __result110__ = __result_obj__ = default_value_133;
                come_call_finalizer3(default_value_133,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result110__;
                come_call_finalizer3(default_value_133,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
struct CVALUE* result_137;
struct CVALUE* __result111__;
struct CVALUE* __result112__;
struct CVALUE* result_138;
struct CVALUE* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_137, 0, sizeof(struct CVALUE*));
memset(&result_138, 0, sizeof(struct CVALUE*));
            if(self==((void*)0)) {
                memset(&result_137,0,sizeof(struct CVALUE*));
                __result111__ = __result_obj__ = result_137;
                return __result111__;
            }
            self->it=self->head;
            if(self->it) {
                __result112__ = __result_obj__ = self->it->item;
                return __result112__;
            }
            memset(&result_138,0,sizeof(struct CVALUE*));
            __result113__ = __result_obj__ = result_138;
            return __result113__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
            return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
struct CVALUE* result_140;
struct CVALUE* __result114__;
struct CVALUE* __result115__;
struct CVALUE* result_141;
struct CVALUE* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_140, 0, sizeof(struct CVALUE*));
memset(&result_141, 0, sizeof(struct CVALUE*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_140,0,sizeof(struct CVALUE*));
                __result114__ = __result_obj__ = result_140;
                return __result114__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result115__ = __result_obj__ = self->it->item;
                return __result115__;
            }
            memset(&result_141,0,sizeof(struct CVALUE*));
            __result116__ = __result_obj__ = result_141;
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
struct sFun* default_value_160;
unsigned int hash_161;
unsigned int it_162;
struct sFun* __result119__;
struct sFun* __result120__;
struct sFun* __result121__;
struct sFun* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_160, 0, sizeof(struct sFun*));
                                memset(&default_value_160,0,sizeof(struct sFun*));
                                hash_161=string_get_hash_key(((char*)key))%self->size;
                                it_162=hash_161;
                                while((_Bool)1) {
                                    if(self->item_existance[it_162]) {
                                        if(string_equals(self->keys[it_162],key)) {
                                            __result119__ = __result_obj__ = self->items[it_162];
                                            come_call_finalizer3(default_value_160,sFun_finalize, 0, 0, 0, 0, (void*)0);
                                            return __result119__;
                                        }
                                        it_162++;
                                        if(it_162>=self->size) {
                                            it_162=0;
                                        }
                                        else {
                                            if(it_162==hash_161) {
                                                __result120__ = __result_obj__ = default_value_160;
                                                come_call_finalizer3(default_value_160,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result120__;
                                            }
                                        }
                                    }
                                    else {
                                        __result121__ = __result_obj__ = default_value_160;
                                        come_call_finalizer3(default_value_160,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result121__;
                                    }
                                }
                                __result122__ = __result_obj__ = default_value_160;
                                come_call_finalizer3(default_value_160,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result122__;
                                come_call_finalizer3(default_value_160,sFun_finalize, 0, 0, 0, 0, (void*)0);
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
unsigned int hash_167;
unsigned int it_168;
struct sFun* __result124__;
struct sFun* __result125__;
struct sFun* __result126__;
struct sFun* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
            hash_167=string_get_hash_key(((char*)key))%self->size;
            it_168=hash_167;
            while((_Bool)1) {
                if(self->item_existance[it_168]) {
                    if(string_equals(self->keys[it_168],key)) {
                        __result124__ = __result_obj__ = self->items[it_168];
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result124__;
                    }
                    it_168++;
                    if(it_168>=self->size) {
                        it_168=0;
                    }
                    else {
                        if(it_168==hash_167) {
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
void* __right_value230 = (void*)0;
struct list_item$1CVALUEph* litem_177;
struct CVALUE* __dec_obj77;
void* __right_value231 = (void*)0;
struct list_item$1CVALUEph* litem_178;
struct CVALUE* __dec_obj78;
void* __right_value232 = (void*)0;
struct list_item$1CVALUEph* litem_179;
struct CVALUE* __dec_obj79;
struct list$1CVALUEph* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_177, 0, sizeof(struct list_item$1CVALUEph*));
memset(&litem_178, 0, sizeof(struct list_item$1CVALUEph*));
memset(&litem_179, 0, sizeof(struct list_item$1CVALUEph*));
                    if(self->len==0) {
                        litem_177=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value230=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 149, "list_item$1CVALUEph"))));
                        come_call_finalizer3(__right_value230,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_177->prev=((void*)0);
                        litem_177->next=((void*)0);
                        __dec_obj77=litem_177->item;
                        litem_177->item=(struct CVALUE*)come_increment_ref_count(item);
                        come_call_finalizer3(__dec_obj77,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        self->tail=litem_177;
                        self->head=litem_177;
                    }
                    else {
                        if(self->len==1) {
                            litem_178=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value231=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 159, "list_item$1CVALUEph"))));
                            come_call_finalizer3(__right_value231,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_178->prev=self->head;
                            litem_178->next=((void*)0);
                            __dec_obj78=litem_178->item;
                            litem_178->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj78,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_178;
                            self->head->next=litem_178;
                        }
                        else {
                            litem_179=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value232=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 169, "list_item$1CVALUEph"))));
                            come_call_finalizer3(__right_value232,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_179->prev=self->tail;
                            litem_179->next=((void*)0);
                            __dec_obj79=litem_179->item;
                            litem_179->item=(struct CVALUE*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj79,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail->next=litem_179;
                            self->tail=litem_179;
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
struct sType* result_188;
struct sType* __result131__;
struct sType* __result132__;
struct sType* result_189;
struct sType* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_188, 0, sizeof(struct sType*));
memset(&result_189, 0, sizeof(struct sType*));
                    if(self==((void*)0)) {
                        memset(&result_188,0,sizeof(struct sType*));
                        __result131__ = __result_obj__ = result_188;
                        return __result131__;
                    }
                    self->it=self->head;
                    if(self->it) {
                        __result132__ = __result_obj__ = self->it->item;
                        return __result132__;
                    }
                    memset(&result_189,0,sizeof(struct sType*));
                    __result133__ = __result_obj__ = result_189;
                    return __result133__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
                    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
struct sType* result_191;
struct sType* __result134__;
struct sType* __result135__;
struct sType* result_192;
struct sType* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_191, 0, sizeof(struct sType*));
memset(&result_192, 0, sizeof(struct sType*));
                    if(self==((void*)0)||self->it==((void*)0)) {
                        memset(&result_191,0,sizeof(struct sType*));
                        __result134__ = __result_obj__ = result_191;
                        return __result134__;
                    }
                    self->it=self->it->next;
                    if(self->it) {
                        __result135__ = __result_obj__ = self->it->item;
                        return __result135__;
                    }
                    memset(&result_192,0,sizeof(struct sType*));
                    __result136__ = __result_obj__ = result_192;
                    return __result136__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* __right_value243 = (void*)0;
struct list_item$1sTypeph* litem_194;
struct sType* __dec_obj83;
void* __right_value244 = (void*)0;
struct list_item$1sTypeph* litem_195;
struct sType* __dec_obj84;
void* __right_value245 = (void*)0;
struct list_item$1sTypeph* litem_196;
struct sType* __dec_obj85;
struct list$1sTypeph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_194, 0, sizeof(struct list_item$1sTypeph*));
memset(&litem_195, 0, sizeof(struct list_item$1sTypeph*));
memset(&litem_196, 0, sizeof(struct list_item$1sTypeph*));
                        if(self->len==0) {
                            litem_194=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value243=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 219, "list_item$1sTypeph"))));
                            come_call_finalizer3(__right_value243,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_194->prev=((void*)0);
                            litem_194->next=((void*)0);
                            __dec_obj83=litem_194->item;
                            litem_194->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_194;
                            self->head=litem_194;
                        }
                        else {
                            if(self->len==1) {
                                litem_195=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value244=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 229, "list_item$1sTypeph"))));
                                come_call_finalizer3(__right_value244,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_195->prev=self->head;
                                litem_195->next=((void*)0);
                                __dec_obj84=litem_195->item;
                                litem_195->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_195;
                                self->head->next=litem_195;
                            }
                            else {
                                litem_196=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value245=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 239, "list_item$1sTypeph"))));
                                come_call_finalizer3(__right_value245,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_196->prev=self->tail;
                                litem_196->next=((void*)0);
                                __dec_obj85=litem_196->item;
                                litem_196->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_196;
                                self->tail=litem_196;
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
char* result_206;
char* __result139__;
char* __result140__;
char* result_207;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_206, 0, sizeof(char*));
memset(&result_207, 0, sizeof(char*));
                                if(self==((void*)0)) {
                                    memset(&result_206,0,sizeof(char*));
                                    __result139__ = __result_obj__ = result_206;
                                    return __result139__;
                                }
                                self->it=self->head;
                                if(self->it) {
                                    __result140__ = __result_obj__ = self->it->item;
                                    return __result140__;
                                }
                                memset(&result_207,0,sizeof(char*));
                                __result141__ = __result_obj__ = result_207;
                                return __result141__;
}

static _Bool list$1charph_end(struct list$1charph* self){
                                return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
char* result_209;
char* __result142__;
char* __result143__;
char* result_210;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_209, 0, sizeof(char*));
memset(&result_210, 0, sizeof(char*));
                                if(self==((void*)0)||self->it==((void*)0)) {
                                    memset(&result_209,0,sizeof(char*));
                                    __result142__ = __result_obj__ = result_209;
                                    return __result142__;
                                }
                                self->it=self->it->next;
                                if(self->it) {
                                    __result143__ = __result_obj__ = self->it->item;
                                    return __result143__;
                                }
                                memset(&result_210,0,sizeof(char*));
                                __result144__ = __result_obj__ = result_210;
                                return __result144__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__;
struct list$1CVALUEph* __result145__;
struct list_item$1CVALUEph* it_211;
int i_212;
struct CVALUE* __dec_obj87;
struct list$1CVALUEph* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_211, 0, sizeof(struct list_item$1CVALUEph*));
                                if(position<0) {
                                    position+=self->len;
                                }
                                if(position>=self->len) {
                                    list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                                    __result145__ = __result_obj__ = self;
                                    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result145__;
                                }
                                it_211=self->head;
                                i_212=0;
                                while(it_211!=((void*)0)) {
                                    if(position==i_212) {
                                        __dec_obj87=it_211->item;
                                        it_211->item=(struct CVALUE*)come_increment_ref_count(item);
                                        come_call_finalizer3(__dec_obj87,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        break;
                                    }
                                    it_211=it_211->next;
                                    i_212++;
                                }
                                __result146__ = __result_obj__ = self;
                                come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                                return __result146__;
                                come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
struct list_item$1CVALUEph* it_219;
int i_220;
struct CVALUE* __result148__;
struct CVALUE* default_value_221;
struct CVALUE* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_219, 0, sizeof(struct list_item$1CVALUEph*));
memset(&default_value_221, 0, sizeof(struct CVALUE*));
                                if(position<0) {
                                    position+=self->len;
                                }
                                it_219=self->head;
                                i_220=0;
                                while(it_219!=((void*)0)) {
                                    if(position==i_220) {
                                        __result148__ = __result_obj__ = it_219->item;
                                        return __result148__;
                                    }
                                    it_219=it_219->next;
                                    i_220++;
                                }
                                memset(&default_value_221,0,sizeof(struct CVALUE*));
                                __result149__ = __result_obj__ = default_value_221;
                                come_call_finalizer3(default_value_221,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                                return __result149__;
                                come_call_finalizer3(default_value_221,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
struct list_item$1charph* it_224;
int i_225;
char* __result151__;
char* default_value_226;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_224, 0, sizeof(struct list_item$1charph*));
memset(&default_value_226, 0, sizeof(char*));
                            if(position<0) {
                                position+=self->len;
                            }
                            it_224=self->head;
                            i_225=0;
                            while(it_224!=((void*)0)) {
                                if(position==i_225) {
                                    __result151__ = __result_obj__ = it_224->item;
                                    return __result151__;
                                }
                                it_224=it_224->next;
                                i_225++;
                            }
                            memset(&default_value_226,0,sizeof(char*));
                            __result152__ = __result_obj__ = default_value_226;
                            default_value_226 = come_decrement_ref_count2(default_value_226, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result152__;
                            default_value_226 = come_decrement_ref_count2(default_value_226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__;
void* __right_value275 = (void*)0;
struct sNode* __dec_obj94;
void* __right_value276 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj95;
struct sLambdaCall* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value275=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value275,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj94=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj95=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(__right_value276=list$1tuple2$2charphsNodephphp_clone(params))));
    come_call_finalizer3(__dec_obj95,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result157__ = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result157__;
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __result_obj__;
void* __right_value277 = (void*)0;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
    __result158__ = __result_obj__ = ((char*)(__right_value277=__builtin_string("sLambdaCall")));
    __right_value277 = come_decrement_ref_count2(__right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result158__;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_239;
struct list$1tuple2$2charphsNodephph* params_240;
_Bool __result159__;
void* __right_value278 = (void*)0;
struct CVALUE* come_value_241;
struct sType* lambda_type_242;
void* __right_value279 = (void*)0;
struct sType* result_type_243;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct list$1CVALUEph* come_params_244;
_Bool __result160__;
int i_245;
struct list$1tuple2$2charphsNodephph* o2_saved_246;
struct tuple2$2charphsNodeph* it_247;
struct tuple2$2charphsNodeph* multiple_assign_var6;
char* label_248;
struct sNode* node_249;
_Bool __result161__;
void* __right_value282 = (void*)0;
struct CVALUE* come_value_250;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct buffer* buf_251;
int j_252;
struct list$1CVALUEph* o2_saved_253;
struct CVALUE* it_254;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct CVALUE* come_value2_255;
void* __right_value289 = (void*)0;
char* __dec_obj96;
void* __right_value290 = (void*)0;
struct sType* __dec_obj97;
_Bool __result162__;
memset(&node_239, 0, sizeof(struct sNode*));
memset(&params_240, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&come_value_241, 0, sizeof(struct CVALUE*));
memset(&lambda_type_242, 0, sizeof(struct sType*));
memset(&result_type_243, 0, sizeof(struct sType*));
memset(&come_params_244, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_246, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_247, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&come_value_250, 0, sizeof(struct CVALUE*));
memset(&buf_251, 0, sizeof(struct buffer*));
memset(&o2_saved_253, 0, sizeof(struct list$1CVALUEph*));
memset(&it_254, 0, sizeof(struct CVALUE*));
memset(&come_value2_255, 0, sizeof(struct CVALUE*));
    node_239=(struct sNode*)come_increment_ref_count(self->node);
    params_240=self->params;
    if(!node_compile(node_239,info)) {
        __result159__ = (_Bool)0;
        if(node_239) { node_239 = come_decrement_ref_count2(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result159__;
    }
    come_value_241=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value278=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    lambda_type_242=come_value_241->type;
    result_type_243=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value279=sType_clone(lambda_type_242->mResultType->v1))));
    result_type_243->mStatic=(_Bool)0;
    come_params_244=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value281=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value280=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 833, "list$1CVALUEph"))))))));
    come_call_finalizer3(__right_value280,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    if(list$1sTypeph_length(lambda_type_242->mParamTypes)!=list$1tuple2$2charphsNodephph_length(params_240)&&!lambda_type_242->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1sTypeph_length(lambda_type_242->mParamTypes),list$1tuple2$2charphsNodephph_length(params_240));
        __result160__ = (_Bool)0;
        if(node_239) { node_239 = come_decrement_ref_count2(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_241,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_243,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_244,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result160__;
    }
    i_245=0;
    for(    o2_saved_246=(params_240),it_247=list$1tuple2$2charphsNodephph_begin((o2_saved_246));    !list$1tuple2$2charphsNodephph_end((o2_saved_246));    it_247=list$1tuple2$2charphsNodephph_next((o2_saved_246))    ){
        multiple_assign_var6=it_247;
        label_248=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        node_249=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
        if(!node_compile(node_249,info)) {
            __result161__ = (_Bool)0;
            label_248 = come_decrement_ref_count2(label_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_249) { node_249 = come_decrement_ref_count2(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_239) { node_239 = come_decrement_ref_count2(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_241,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_243,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_244,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result161__;
        }
        come_value_250=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value282=get_value_from_stack(-1,info))));
        if(lambda_type_242->mVarArgs&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_242->mParamTypes,i_245), "05call.c", 849, 16))==((void*)0)) {
        }
        else {
            check_assign_type(((char*)(__right_value284=xsprintf("calling param #\%s",((char*)(__right_value283=int_to_string(i_245)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_242->mParamTypes,i_245), "05call.c", 852, 17)),come_value_250->type,come_value_250,(_Bool)0,(_Bool)1,info);
            __right_value283 = come_decrement_ref_count2(__right_value283, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value284 = come_decrement_ref_count2(__right_value284, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_242->mParamTypes,i_245), "05call.c", 853, 18))->mHeap&&come_value_250->type->mHeap) {
                std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(lambda_type_242->mParamTypes,i_245), "05call.c", 854, 19)),come_value_250->type,come_value_250,info,(_Bool)1);
            }
        }
        list$1CVALUEph_push_back(come_params_244,(struct CVALUE*)come_increment_ref_count(come_value_250));
        dec_stack_ptr(1,info);
        i_245++;
        label_248 = come_decrement_ref_count2(label_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_249) { node_249 = come_decrement_ref_count2(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_250,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_251=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value286=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value285=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 864, "buffer"))))))));
    come_call_finalizer3(__right_value285,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(buf_251,"(");
    buffer_append_str(buf_251,come_value_241->c_value);
    buffer_append_str(buf_251,")");
    buffer_append_str(buf_251,"(");
    j_252=0;
    for(    o2_saved_253=(struct list$1CVALUEph*)come_increment_ref_count((come_params_244)),it_254=list$1CVALUEph_begin((o2_saved_253));    !list$1CVALUEph_end((o2_saved_253));    it_254=list$1CVALUEph_next((o2_saved_253))    ){
        buffer_append_str(buf_251,it_254->c_value);
        if(j_252!=list$1CVALUEph_length(come_params_244)-1) {
            buffer_append_str(buf_251,",");
        }
        j_252++;
    }
    come_call_finalizer3(o2_saved_253,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_251,")");
    come_value2_255=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value288=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value287=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 883, "CVALUE"))))))));
    come_call_finalizer3(__right_value287,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj96=come_value2_255->c_value;
    come_value2_255->c_value=(char*)come_increment_ref_count(((char*)(__right_value289=buffer_to_string(buf_251))));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(lambda_type_242->mResultType->v1->mHeap) {
        append_object_to_right_values2(come_value2_255,(struct sType*)come_increment_ref_count(lambda_type_242->mResultType->v1),info);
    }
    __dec_obj97=come_value2_255->type;
    come_value2_255->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value290=sType_clone(result_type_243))));
    come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_255->type->mStatic=(_Bool)0;
    come_value2_255->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_255->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_255));
    __result162__ = (_Bool)1;
    if(node_239) { node_239 = come_decrement_ref_count2(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_241,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_243,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_244,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_251,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_255,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result162__;
    if(node_239) { node_239 = come_decrement_ref_count2(node_239, ((struct sNode*)node_239)->finalize, ((struct sNode*)node_239)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_241,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_243,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_244,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_251,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_255,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* __right_value291 = (void*)0;
struct sType* __dec_obj98;
struct sVarArgTypeName* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value291=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value291,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj98=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result163__ = __result_obj__ = self;
    come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result163__;
    come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __result_obj__;
void* __right_value292 = (void*)0;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
    __result164__ = __result_obj__ = ((char*)(__right_value292=__builtin_string("sVarArgTypeName")));
    __right_value292 = come_decrement_ref_count2(__right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result164__;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_256;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct CVALUE* come_value_257;
void* __right_value295 = (void*)0;
char* __dec_obj99;
struct sType* __dec_obj100;
_Bool __result165__;
memset(&type_256, 0, sizeof(struct sType*));
memset(&come_value_257, 0, sizeof(struct CVALUE*));
    type_256=(struct sType*)come_increment_ref_count(self->type);
    come_value_257=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value294=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value293=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 920, "CVALUE"))))))));
    come_call_finalizer3(__right_value293,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj99=come_value_257->c_value;
    come_value_257->c_value=(char*)come_increment_ref_count(((char*)(__right_value295=make_type_name_string(type_256,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj100=come_value_257->type;
    come_value_257->type=(struct sType*)come_increment_ref_count(type_256);
    come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_257->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_257));
    __result165__ = (_Bool)1;
    come_call_finalizer3(type_256,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_257,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result165__;
    come_call_finalizer3(type_256,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_257,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info){
void* __result_obj__;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1sTypeph* method_generics_types_258;
void* __right_value298 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* type_259;
char* name_260;
_Bool err_261;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_262;
_Bool _va_arg_263;
char* p_264;
int sline_265;
_Bool err_flag_266;
void* __right_value302 = (void*)0;
char* label_267;
void* __right_value303 = (void*)0;
char* __dec_obj101;
char* __dec_obj102;
_Bool no_comma_268;
_Bool in_fun_param_269;
void* __right_value304 = (void*)0;
struct sNode* node_270;
void* __right_value305 = (void*)0;
struct sNode* __dec_obj103;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
_Bool guard_break_274;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct sNode* _inf_value1;
struct sFunCallNode* _inf_obj_value1;
void* __right_value318 = (void*)0;
struct sNode* node_275;
void* __right_value319 = (void*)0;
struct sNode* __dec_obj113;
struct sNode* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&method_generics_types_258, 0, sizeof(struct list$1sTypeph*));
memset(&params_262, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&label_267, 0, sizeof(char*));
memset(&node_270, 0, sizeof(struct sNode*));
memset(&node_275, 0, sizeof(struct sNode*));
    method_generics_types_258=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value297=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value296=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05call.c", 934, "list$1sTypeph"))))))));
    come_call_finalizer3(__right_value296,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
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
                        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value298=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        type_259=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                        name_260=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                        err_261=multiple_assign_var7->v3;
                        come_call_finalizer3(__right_value298,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(!err_261) {
                            err_msg(info,"invalid method generics paramtor type");
                            exit(2);
                        }
                        list$1sTypeph_push_back(method_generics_types_258,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value299=sType_clone(type_259)))));
                        come_call_finalizer3(__right_value299,sType_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(type_259,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_260 = come_decrement_ref_count2(name_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_262=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(__right_value301=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(__right_value300=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 972, "list$1tuple2$2charphsNodephph"))))))));
    come_call_finalizer3(__right_value300,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
    _va_arg_263=info->va_arg;
    if(charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_264=info->p;
        sline_265=info->sline;
        err_flag_266=(_Bool)0;
        label_267=(char*)come_increment_ref_count(((char*)(__right_value302=__builtin_string(""))));
        if(xisalpha(*info->p)||*info->p==95) {
            __dec_obj101=label_267;
            label_267=(char*)come_increment_ref_count(((char*)(__right_value303=parse_word(info))));
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_266=(_Bool)1;
        }
        if(err_flag_266==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj102=label_267;
            label_267=((void*)0);
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_264;
            info->sline=sline_265;
        }
        no_comma_268=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_269=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value304=expression_v13(info))));
        __dec_obj103=node_270;
        node_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value305=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_270),info))));
        if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); }
        info->no_comma=no_comma_268;
        info->in_fun_param=in_fun_param_269;
        list$1tuple2$2charphsNodephph_push_back(params_262,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(__right_value310=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(__right_value309=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1020, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_267),(struct sNode*)come_increment_ref_count(node_270))))));
        come_call_finalizer3(__right_value309,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value310,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_267 = come_decrement_ref_count2(label_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_270) { node_270 = come_decrement_ref_count2(node_270, ((struct sNode*)node_270)->finalize, ((struct sNode*)node_270)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
        }
        label_267 = come_decrement_ref_count2(label_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_270) { node_270 = come_decrement_ref_count2(node_270, ((struct sNode*)node_270)->finalize, ((struct sNode*)node_270)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->va_arg=_va_arg_263;
    guard_break_274=(_Bool)0;
    if(*info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_274=(_Bool)1;
    }
    parse_sharp_v5(info);
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1047, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sFunCallNode*)(__right_value312=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value311=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1047, "sFunCallNode")))),fun_name,params_262,guard_break_274,(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_258),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sFunCallNode_finalize;
    _inf_value1->clone=(void*)sFunCallNode_clone;
    _inf_value1->compile=(void*)sFunCallNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sFunCallNode_kind;
    node_275=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value318=_inf_value1)));
    come_call_finalizer3(__right_value311,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value312,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj113=node_275;
    node_275=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value319=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_275),info))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
    __result170__ = __result_obj__ = node_275;
    come_call_finalizer3(method_generics_types_258,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_262,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_275) { node_275 = come_decrement_ref_count2(node_275, ((struct sNode*)node_275)->finalize, ((struct sNode*)node_275)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result170__;
    come_call_finalizer3(method_generics_types_258,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_262,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_275) { node_275 = come_decrement_ref_count2(node_275, ((struct sNode*)node_275)->finalize, ((struct sNode*)node_275)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
void* __right_value306 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_271;
struct tuple2$2charphsNodeph* __dec_obj104;
void* __right_value307 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_272;
struct tuple2$2charphsNodeph* __dec_obj105;
void* __right_value308 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_273;
struct tuple2$2charphsNodeph* __dec_obj106;
struct list$1tuple2$2charphsNodephph* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_271, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&litem_272, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&litem_273, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
            if(self->len==0) {
                litem_271=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value306=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 219, "list_item$1tuple2$2charphsNodephph"))));
                come_call_finalizer3(__right_value306,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_271->prev=((void*)0);
                litem_271->next=((void*)0);
                __dec_obj104=litem_271->item;
                litem_271->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj104,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_271;
                self->head=litem_271;
            }
            else {
                if(self->len==1) {
                    litem_272=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value307=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 229, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(__right_value307,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_272->prev=self->head;
                    litem_272->next=((void*)0);
                    __dec_obj105=litem_272->item;
                    litem_272->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj105,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_272;
                    self->head->next=litem_272;
                }
                else {
                    litem_273=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value308=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./neo-c.h", 239, "list_item$1tuple2$2charphsNodephph"))));
                    come_call_finalizer3(__right_value308,list_item$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_273->prev=self->tail;
                    litem_273->next=((void*)0);
                    __dec_obj106=litem_273->item;
                    litem_273->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj106,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_273;
                    self->tail=litem_273;
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
char* __dec_obj107;
struct sNode* __dec_obj108;
struct tuple2$2charphsNodeph* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj107=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj108=self->v2;
            self->v2=(struct sNode*)come_increment_ref_count(v2);
            if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); }
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
void* __right_value313 = (void*)0;
struct sFunCallNode* result_276;
void* __right_value314 = (void*)0;
char* __dec_obj109;
void* __right_value315 = (void*)0;
char* __dec_obj110;
void* __right_value316 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj111;
void* __right_value317 = (void*)0;
struct list$1sTypeph* __dec_obj112;
struct sFunCallNode* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_276, 0, sizeof(struct sFunCallNode*));
        if(self==(void*)0) {
            __result168__ = __result_obj__ = (void*)0;
            return __result168__;
        }
        result_276=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value313=(struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "sFunCallNode"))));
        if(self!=((void*)0)) {
            result_276->sline=self->sline;
        }
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            __dec_obj109=result_276->sname;
            result_276->sname=(char*)come_increment_ref_count(((char*)(__right_value314=string_clone(self->sname))));
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(self!=((void*)0)&&self->fun_name!=((void*)0)) {
            __dec_obj110=result_276->fun_name;
            result_276->fun_name=(char*)come_increment_ref_count(((char*)(__right_value315=string_clone(self->fun_name))));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(self!=((void*)0)&&self->params!=((void*)0)) {
            __dec_obj111=result_276->params;
            result_276->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(__right_value316=list$1tuple2$2charphsNodephphp_clone(self->params))));
            come_call_finalizer3(__dec_obj111,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)) {
            result_276->guard_break=self->guard_break;
        }
        if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
            __dec_obj112=result_276->method_generics_types;
            result_276->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value317=list$1sTypephp_clone(self->method_generics_types))));
            come_call_finalizer3(__dec_obj112,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        __result169__ = __result_obj__ = result_276;
        come_call_finalizer3(result_276,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
        return __result169__;
        come_call_finalizer3(result_276,sFunCallNode_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct sNode* _inf_value2;
struct sReturnNode* _inf_obj_value2;
void* __right_value327 = (void*)0;
struct sNode* __result174__;
char* head_278;
void* __right_value328 = (void*)0;
struct sNode* value_279;
char* tail_280;
void* __right_value329 = (void*)0;
struct sNode* __dec_obj117;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sNode* _inf_value3;
struct sReturnNode* _inf_obj_value3;
void* __right_value337 = (void*)0;
struct sNode* __result177__;
char* head_283;
int head_sline_284;
void* __right_value338 = (void*)0;
char* buf_285;
_Bool is_type_name__286;
_Bool define_function_pointer_flag_287;
void* __right_value339 = (void*)0;
_Bool lambda_flag_288;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
char* word2_289;
_Bool fun_name_with_type_name_290;
void* __right_value342 = (void*)0;
char* word2_291;
_Bool call_method_generics_fun_call_292;
void* __right_value343 = (void*)0;
char* __dec_obj121;
int nest_296;
void* __right_value344 = (void*)0;
char* __dec_obj122;
void* __right_value345 = (void*)0;
struct sNode* __result182__;
void* __right_value346 = (void*)0;
struct sNode* node_297;
struct sNode* __result183__;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct sNode* _inf_value4;
struct sFuncNode* _inf_obj_value4;
void* __right_value351 = (void*)0;
struct sNode* __result186__;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sNode* _inf_value5;
struct sLineNode* _inf_obj_value5;
void* __right_value356 = (void*)0;
struct sNode* __result189__;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct sNode* _inf_value6;
struct sSNameNode* _inf_obj_value6;
void* __right_value361 = (void*)0;
struct sNode* __result192__;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sNode* _inf_value7;
struct sCallerFuncNode* _inf_obj_value7;
void* __right_value366 = (void*)0;
struct sNode* __result195__;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct sNode* _inf_value8;
struct sCallerLineNode* _inf_obj_value8;
void* __right_value371 = (void*)0;
struct sNode* __result198__;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct sNode* _inf_value9;
struct sCallerSNameNode* _inf_obj_value9;
void* __right_value376 = (void*)0;
struct sNode* __result201__;
void* __right_value377 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_304;
char* name_305;
_Bool err_306;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sNode* _inf_value10;
struct sVarArgTypeName* _inf_obj_value10;
void* __right_value383 = (void*)0;
struct sNode* __result204__;
void* __right_value384 = (void*)0;
struct sNode* node_308;
struct sNode* __result205__;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct buffer* fun_name_309;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct sType* type_310;
void* __right_value389 = (void*)0;
struct sClass* klass_314;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct sType* __dec_obj131;
void* __right_value392 = (void*)0;
char* buf2_320;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sNode* node_321;
struct sNode* __result214__;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct buffer* fun_name_322;
void* __right_value397 = (void*)0;
char* buf2_323;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct sNode* node_324;
struct sNode* __result215__;
void* __right_value400 = (void*)0;
struct sNode* node_325;
struct sNode* __result216__;
void* __right_value401 = (void*)0;
struct sNode* node_326;
struct sNode* __result217__;
void* __right_value402 = (void*)0;
struct sNode* node_327;
struct sNode* __result218__;
void* __right_value403 = (void*)0;
struct sNode* node_328;
struct sNode* __result219__;
struct sNode* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value_279, 0, sizeof(struct sNode*));
memset(&buf_285, 0, sizeof(char*));
memset(&word2_289, 0, sizeof(char*));
memset(&word2_291, 0, sizeof(char*));
memset(&node_297, 0, sizeof(struct sNode*));
memset(&node_308, 0, sizeof(struct sNode*));
memset(&fun_name_309, 0, sizeof(struct buffer*));
memset(&type_310, 0, sizeof(struct sType*));
memset(&klass_314, 0, sizeof(struct sClass*));
memset(&buf2_320, 0, sizeof(char*));
memset(&node_321, 0, sizeof(struct sNode*));
memset(&fun_name_322, 0, sizeof(struct buffer*));
memset(&buf2_323, 0, sizeof(char*));
memset(&node_324, 0, sizeof(struct sNode*));
memset(&node_325, 0, sizeof(struct sNode*));
memset(&node_326, 0, sizeof(struct sNode*));
memset(&node_327, 0, sizeof(struct sNode*));
memset(&node_328, 0, sizeof(struct sNode*));
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(*info->p==59) {
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1076, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sReturnNode*)(__right_value322=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value320=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1076, "sReturnNode")))),((void*)0),(char*)come_increment_ref_count(((char*)(__right_value321=__builtin_string("0")))),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sReturnNode_finalize;
            _inf_value2->clone=(void*)sReturnNode_clone;
            _inf_value2->compile=(void*)sReturnNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sReturnNode_kind;
            __result174__ = __result_obj__ = ((struct sNode*)(__right_value327=_inf_value2));
            come_call_finalizer3(__right_value320,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            __right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value322,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value327) { __right_value327 = come_decrement_ref_count2(__right_value327, ((struct sNode*)__right_value327)->finalize, ((struct sNode*)__right_value327)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result174__;
        }
        else {
            head_278=info->p;
            value_279=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value328=expression_v13(info))));
            tail_280=info->p;
            __dec_obj117=value_279;
            value_279=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value329=post_position_operator_v99((struct sNode*)come_increment_ref_count(value_279),info))));
            if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); }
            char buf_281[tail_280-head_278+1];
            memset(&buf_281, 0, sizeof(char)            *(tail_280-head_278+1)            );
            memcpy(buf_281,head_278,tail_280-head_278);
            buf_281[tail_280-head_278]=0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1088, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sReturnNode*)(__right_value332=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value330=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1088, "sReturnNode")))),(struct sNode*)come_increment_ref_count(value_279),(char*)come_increment_ref_count(((char*)(__right_value331=__builtin_string(buf_281)))),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sReturnNode_finalize;
            _inf_value3->clone=(void*)sReturnNode_clone;
            _inf_value3->compile=(void*)sReturnNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sReturnNode_kind;
            __result177__ = __result_obj__ = ((struct sNode*)(__right_value337=_inf_value3));
            if(value_279) { value_279 = come_decrement_ref_count2(value_279, ((struct sNode*)value_279)->finalize, ((struct sNode*)value_279)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value330,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            __right_value331 = come_decrement_ref_count2(__right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value332,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value337) { __right_value337 = come_decrement_ref_count2(__right_value337, ((struct sNode*)__right_value337)->finalize, ((struct sNode*)__right_value337)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result177__;
            if(value_279) { value_279 = come_decrement_ref_count2(value_279, ((struct sNode*)value_279)->finalize, ((struct sNode*)value_279)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        if((xisalpha(*info->p)||*info->p==95)&&!(*info->p==76&&*(info->p+1)==34||(*info->p==115||*info->p==83)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39))) {
            head_283=info->p;
            head_sline_284=info->sline;
            buf_285=(char*)come_increment_ref_count(((char*)(__right_value338=backtrace_parse_word(info))));
            is_type_name__286=is_type_name(buf_285,info);
            define_function_pointer_flag_287=(_Bool)0;
            if(string_operator_not_equals(buf_285,"if")&&string_operator_not_equals(buf_285,"while")&&string_operator_not_equals(buf_285,"for")&&string_operator_not_equals(buf_285,"switch")&&string_operator_not_equals(buf_285,"return")&&string_operator_not_equals(buf_285,"sizeof")&&string_operator_not_equals(buf_285,"isheap")&&string_operator_not_equals(buf_285,"guard")&&string_operator_not_equals(buf_285,"ispointer")&&string_operator_not_equals(buf_285,"__typeof__")&&string_operator_not_equals(buf_285,"dynamic_typeof")&&string_operator_not_equals(buf_285,"typeof")&&string_operator_not_equals(buf_285,"gc_inc")&&string_operator_not_equals(buf_285,"gc_dec")&&string_operator_not_equals(buf_285,"case")&&string_operator_not_equals(buf_285,"_Alignof")&&string_operator_not_equals(buf_285,"_Alignas")&&string_operator_not_equals(buf_285,"__alignof__")&&*info->p==40&&*(info->p+1)!=42) {
                ((struct tuple3$3sTypephcharphbool*)(__right_value339=backtrace_parse_type((_Bool)0,info)));
                come_call_finalizer3(__right_value339,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(*info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        define_function_pointer_flag_287=(_Bool)1;
                    }
                }
                info->p=head_283;
                info->sline=head_sline_284;
            }
            lambda_flag_288=(_Bool)0;
            if(string_operator_not_equals(buf_285,"if")&&string_operator_not_equals(buf_285,"while")&&string_operator_not_equals(buf_285,"for")&&string_operator_not_equals(buf_285,"switch")&&string_operator_not_equals(buf_285,"return")&&string_operator_not_equals(buf_285,"sizeof")&&string_operator_not_equals(buf_285,"_Alignof")&&string_operator_not_equals(buf_285,"__alignof__")&&string_operator_not_equals(buf_285,"_Alignas")&&string_operator_not_equals(buf_285,"isheap")&&string_operator_not_equals(buf_285,"guard")&&string_operator_not_equals(buf_285,"ispointer")&&string_operator_not_equals(buf_285,"__typeof__")&&string_operator_not_equals(buf_285,"dynamic_typeof")&&string_operator_not_equals(buf_285,"typeof")&&string_operator_not_equals(buf_285,"gc_inc")&&string_operator_not_equals(buf_285,"gc_dec")&&string_operator_not_equals(buf_285,"case")&&is_type_name__286) {
                info->p=head_283;
                info->sline=head_sline_284;
                ((struct tuple3$3sTypephcharphbool*)(__right_value340=backtrace_parse_type((_Bool)0,info)));
                come_call_finalizer3(__right_value340,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                word2_289=(char*)come_increment_ref_count(((char*)(__right_value341=backtrace_parse_word(info))));
                if(string_operator_equals(word2_289,"lambda")) {
                    lambda_flag_288=(_Bool)1;
                }
                info->p=head_283;
                info->sline=head_sline_284;
                word2_289 = come_decrement_ref_count2(word2_289, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            fun_name_with_type_name_290=(_Bool)0;
            if(string_operator_not_equals(buf_285,"if")&&string_operator_not_equals(buf_285,"while")&&string_operator_not_equals(buf_285,"for")&&string_operator_not_equals(buf_285,"switch")&&string_operator_not_equals(buf_285,"return")&&string_operator_not_equals(buf_285,"sizeof")&&string_operator_not_equals(buf_285,"_Alignof")&&string_operator_not_equals(buf_285,"__alignof__")&&string_operator_not_equals(buf_285,"_Alignas")&&string_operator_not_equals(buf_285,"isheap")&&string_operator_not_equals(buf_285,"guard")&&string_operator_not_equals(buf_285,"ispointer")&&string_operator_not_equals(buf_285,"dynamic_typeof")&&string_operator_not_equals(buf_285,"__typeof__")&&string_operator_not_equals(buf_285,"typeof")&&string_operator_not_equals(buf_285,"gc_inc")&&string_operator_not_equals(buf_285,"gc_dec")&&string_operator_not_equals(buf_285,"case")) {
                info->p=head_283;
                info->sline=head_sline_284;
                info->no_output_err=(_Bool)1;
                if(xisalpha(*info->p)||*info->p==95) {
                    word2_291=(char*)come_increment_ref_count(((char*)(__right_value342=parse_word(info))));
                    word2_291 = come_decrement_ref_count2(word2_291, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                while(*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(*info->p==58&&*(info->p+1)==58) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    if(xisalpha(*info->p)||*info->p==95) {
                        fun_name_with_type_name_290=(_Bool)1;
                    }
                }
                info->no_output_err=(_Bool)0;
                info->p=head_283;
                info->sline=head_sline_284;
            }
            call_method_generics_fun_call_292=(_Bool)0;
            {
                info->p=head_283;
                info->sline=head_sline_284;
                if(xisalpha(*info->p)||*info->p==95) {
                    __dec_obj121=buf_285;
                    buf_285=(char*)come_increment_ref_count(((char*)(__right_value343=parse_word(info))));
                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                if(!is_type_name(buf_285,info)&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,buf_285)==((void*)0)&&map$2charphsVarphp_operator_load_element(info->gv_table->mVars,buf_285)==((void*)0)&&*info->p==60) {
                    nest_296=0;
                    while(*info->p) {
                        if(*info->p==60) {
                            info->p++;
                            nest_296++;
                        }
                        else {
                            if(*info->p==62) {
                                info->p++;
                                nest_296--;
                                if(nest_296==0) {
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
                        call_method_generics_fun_call_292=(_Bool)1;
                    }
                }
                info->p=head_283;
                info->sline=head_sline_284;
            }
            parse_sharp_v5(info);
            __dec_obj122=buf_285;
            buf_285=(char*)come_increment_ref_count(((char*)(__right_value344=parse_word(info))));
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(lambda_flag_288) {
                info->p=head_283;
                info->sline=head_sline_284;
                __result182__ = __result_obj__ = ((struct sNode*)(__right_value345=parse_function(info)));
                buf_285 = come_decrement_ref_count2(buf_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(__right_value345) { __right_value345 = come_decrement_ref_count2(__right_value345, ((struct sNode*)__right_value345)->finalize, ((struct sNode*)__right_value345)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result182__;
            }
            else {
                if((string_operator_equals(buf_285,"string")||string_operator_equals(buf_285,"wstring"))&&*info->p==40) {
                    node_297=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value346=parse_function_call(buf_285,info))));
                    __result183__ = __result_obj__ = node_297;
                    if(node_297) { node_297 = come_decrement_ref_count2(node_297, ((struct sNode*)node_297)->finalize, ((struct sNode*)node_297)->_protocol_obj, 0, 1, 0, (void*)0); } 
                    buf_285 = come_decrement_ref_count2(buf_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result183__;
                    if(node_297) { node_297 = come_decrement_ref_count2(node_297, ((struct sNode*)node_297)->finalize, ((struct sNode*)node_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(string_operator_equals(buf_285,"__func__")) {
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1230, "struct sNode");
                        _inf_obj_value4=come_increment_ref_count(((struct sFuncNode*)(__right_value348=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value347=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 1230, "sFuncNode")))),info))));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sFuncNode_finalize;
                        _inf_value4->clone=(void*)sFuncNode_clone;
                        _inf_value4->compile=(void*)sFuncNode_compile;
                        _inf_value4->sline=(void*)sNodeBase_sline;
                        _inf_value4->sname=(void*)sNodeBase_sname;
                        _inf_value4->terminated=(void*)sNodeBase_terminated;
                        _inf_value4->kind=(void*)sFuncNode_kind;
                        __result186__ = __result_obj__ = ((struct sNode*)(__right_value351=_inf_value4));
                        buf_285 = come_decrement_ref_count2(buf_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value347,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(__right_value348,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(__right_value351) { __right_value351 = come_decrement_ref_count2(__right_value351, ((struct sNode*)__right_value351)->finalize, ((struct sNode*)__right_value351)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result186__;
                    }
                    else {
                        if(string_operator_equals(buf_285,"__line__")) {
                            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1233, "struct sNode");
                            _inf_obj_value5=come_increment_ref_count(((struct sLineNode*)(__right_value353=sLineNode_initialize((struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value352=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 1233, "sLineNode")))),info))));
                            _inf_value5->_protocol_obj=_inf_obj_value5;
                            _inf_value5->finalize=(void*)sLineNode_finalize;
                            _inf_value5->clone=(void*)sLineNode_clone;
                            _inf_value5->compile=(void*)sLineNode_compile;
                            _inf_value5->sline=(void*)sNodeBase_sline;
                            _inf_value5->sname=(void*)sNodeBase_sname;
                            _inf_value5->terminated=(void*)sNodeBase_terminated;
                            _inf_value5->kind=(void*)sLineNode_kind;
                            __result189__ = __result_obj__ = ((struct sNode*)(__right_value356=_inf_value5));
                            buf_285 = come_decrement_ref_count2(buf_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(__right_value352,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(__right_value353,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value356) { __right_value356 = come_decrement_ref_count2(__right_value356, ((struct sNode*)__right_value356)->finalize, ((struct sNode*)__right_value356)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result189__;
                        }
                        else {
                            if(string_operator_equals(buf_285,"__sname__")) {
                                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1236, "struct sNode");
                                _inf_obj_value6=come_increment_ref_count(((struct sSNameNode*)(__right_value358=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value357=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 1236, "sSNameNode")))),info))));
                                _inf_value6->_protocol_obj=_inf_obj_value6;
                                _inf_value6->finalize=(void*)sSNameNode_finalize;
                                _inf_value6->clone=(void*)sSNameNode_clone;
                                _inf_value6->compile=(void*)sSNameNode_compile;
                                _inf_value6->sline=(void*)sNodeBase_sline;
                                _inf_value6->sname=(void*)sNodeBase_sname;
                                _inf_value6->terminated=(void*)sNodeBase_terminated;
                                _inf_value6->kind=(void*)sSNameNode_kind;
                                __result192__ = __result_obj__ = ((struct sNode*)(__right_value361=_inf_value6));
                                buf_285 = come_decrement_ref_count2(buf_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(__right_value357,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(__right_value358,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(__right_value361) { __right_value361 = come_decrement_ref_count2(__right_value361, ((struct sNode*)__right_value361)->finalize, ((struct sNode*)__right_value361)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result192__;
                            }
                            else {
                                if(string_operator_equals(buf_285,"__caller_func__")) {
                                    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1239, "struct sNode");
                                    _inf_obj_value7=come_increment_ref_count(((struct sCallerFuncNode*)(__right_value363=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value362=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 1239, "sCallerFuncNode")))),info))));
                                    _inf_value7->_protocol_obj=_inf_obj_value7;
                                    _inf_value7->finalize=(void*)sCallerFuncNode_finalize;
                                    _inf_value7->clone=(void*)sCallerFuncNode_clone;
                                    _inf_value7->compile=(void*)sCallerFuncNode_compile;
                                    _inf_value7->sline=(void*)sNodeBase_sline;
                                    _inf_value7->sname=(void*)sNodeBase_sname;
                                    _inf_value7->terminated=(void*)sNodeBase_terminated;
                                    _inf_value7->kind=(void*)sCallerFuncNode_kind;
                                    __result195__ = __result_obj__ = ((struct sNode*)(__right_value366=_inf_value7));
                                    buf_285 = come_decrement_ref_count2(buf_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(__right_value362,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(__right_value363,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(__right_value366) { __right_value366 = come_decrement_ref_count2(__right_value366, ((struct sNode*)__right_value366)->finalize, ((struct sNode*)__right_value366)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result195__;
                                }
                                else {
                                    if(string_operator_equals(buf_285,"__caller_line__")) {
                                        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1242, "struct sNode");
                                        _inf_obj_value8=come_increment_ref_count(((struct sCallerLineNode*)(__right_value368=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value367=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 1242, "sCallerLineNode")))),info))));
                                        _inf_value8->_protocol_obj=_inf_obj_value8;
                                        _inf_value8->finalize=(void*)sCallerLineNode_finalize;
                                        _inf_value8->clone=(void*)sCallerLineNode_clone;
                                        _inf_value8->compile=(void*)sCallerLineNode_compile;
                                        _inf_value8->sline=(void*)sNodeBase_sline;
                                        _inf_value8->sname=(void*)sNodeBase_sname;
                                        _inf_value8->terminated=(void*)sNodeBase_terminated;
                                        _inf_value8->kind=(void*)sCallerLineNode_kind;
                                        __result198__ = __result_obj__ = ((struct sNode*)(__right_value371=_inf_value8));
                                        buf_285 = come_decrement_ref_count2(buf_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value367,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(__right_value368,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(__right_value371) { __right_value371 = come_decrement_ref_count2(__right_value371, ((struct sNode*)__right_value371)->finalize, ((struct sNode*)__right_value371)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result198__;
                                    }
                                    else {
                                        if(string_operator_equals(buf_285,"__caller_sname__")) {
                                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1245, "struct sNode");
                                            _inf_obj_value9=come_increment_ref_count(((struct sCallerSNameNode*)(__right_value373=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value372=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 1245, "sCallerSNameNode")))),info))));
                                            _inf_value9->_protocol_obj=_inf_obj_value9;
                                            _inf_value9->finalize=(void*)sCallerSNameNode_finalize;
                                            _inf_value9->clone=(void*)sCallerSNameNode_clone;
                                            _inf_value9->compile=(void*)sCallerSNameNode_compile;
                                            _inf_value9->sline=(void*)sNodeBase_sline;
                                            _inf_value9->sname=(void*)sNodeBase_sname;
                                            _inf_value9->terminated=(void*)sNodeBase_terminated;
                                            _inf_value9->kind=(void*)sCallerSNameNode_kind;
                                            __result201__ = __result_obj__ = ((struct sNode*)(__right_value376=_inf_value9));
                                            buf_285 = come_decrement_ref_count2(buf_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(__right_value372,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(__right_value373,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(__right_value376) { __right_value376 = come_decrement_ref_count2(__right_value376, ((struct sNode*)__right_value376)->finalize, ((struct sNode*)__right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result201__;
                                        }
                                        else {
                                            if(info->va_arg&&is_type_name(buf_285,info)) {
                                                info->p=head_283;
                                                info->sline=head_sline_284;
                                                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value377=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                                type_304=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                                                name_305=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                                err_306=multiple_assign_var8->v3;
                                                come_call_finalizer3(__right_value377,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1253, "struct sNode");
                                                _inf_obj_value10=come_increment_ref_count(((struct sVarArgTypeName*)(__right_value379=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value378=(struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 1253, "sVarArgTypeName")))),(struct sType*)come_increment_ref_count(type_304),info))));
                                                _inf_value10->_protocol_obj=_inf_obj_value10;
                                                _inf_value10->finalize=(void*)sVarArgTypeName_finalize;
                                                _inf_value10->clone=(void*)sVarArgTypeName_clone;
                                                _inf_value10->compile=(void*)sVarArgTypeName_compile;
                                                _inf_value10->sline=(void*)sNodeBase_sline;
                                                _inf_value10->sname=(void*)sNodeBase_sname;
                                                _inf_value10->terminated=(void*)sNodeBase_terminated;
                                                _inf_value10->kind=(void*)sVarArgTypeName_kind;
                                                __result204__ = __result_obj__ = ((struct sNode*)(__right_value383=_inf_value10));
                                                come_call_finalizer3(type_304,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                name_305 = come_decrement_ref_count2(name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                buf_285 = come_decrement_ref_count2(buf_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                come_call_finalizer3(__right_value378,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer3(__right_value379,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(__right_value383) { __right_value383 = come_decrement_ref_count2(__right_value383, ((struct sNode*)__right_value383)->finalize, ((struct sNode*)__right_value383)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                return __result204__;
                                                come_call_finalizer3(type_304,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                name_305 = come_decrement_ref_count2(name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            else {
                                                if((string_operator_equals(buf_285,"sizeof")||string_operator_equals(buf_285,"_Alignof")||string_operator_equals(buf_285,"_Alignas")||string_operator_equals(buf_285,"__alignof__"))&&*info->p==40) {
                                                    node_308=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value384=string_node_v21(buf_285,head_283,head_sline_284,info))));
                                                    __result205__ = __result_obj__ = node_308;
                                                    if(node_308) { node_308 = come_decrement_ref_count2(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    buf_285 = come_decrement_ref_count2(buf_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    return __result205__;
                                                    if(node_308) { node_308 = come_decrement_ref_count2(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    if(fun_name_with_type_name_290) {
                                                        fun_name_309=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value386=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value385=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1261, "buffer"))))))));
                                                        come_call_finalizer3(__right_value385,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                        buffer_append_str(fun_name_309,buf_285);
                                                        type_310=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value388=sType_clone(map$2charphsTypephp_operator_load_element(info->types,((char*)(__right_value387=buffer_to_string(fun_name_309))))))));
                                                        __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        if(type_310==((void*)0)) {
                                                            klass_314=map$2charphsClassphp_operator_load_element(info->classes,((char*)(__right_value389=buffer_to_string(fun_name_309))));
                                                            __right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            if(klass_314) {
                                                                __dec_obj131=type_310;
                                                                type_310=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value391=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value390=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1271, "sType")))),buf_285,(_Bool)0,info))));
                                                                come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(__right_value390,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                            }
                                                            else {
                                                                err_msg(info,"null type(%s)",buf_285);
                                                                exit(2);
                                                            }
                                                        }
                                                        while(*info->p==42) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            if(type_310->mClass->mStruct==(_Bool)0) {
                                                                buffer_append_str(fun_name_309,"p");
                                                            }
                                                        }
                                                        expected_next_character(58,info);
                                                        expected_next_character(58,info);
                                                        buffer_append_str(fun_name_309,"_");
                                                        buf2_320=(char*)come_increment_ref_count(((char*)(__right_value392=parse_word(info))));
                                                        buffer_append_str(fun_name_309,buf2_320);
                                                        node_321=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value394=parse_function_call(((char*)(__right_value393=buffer_to_string(fun_name_309))),info))));
                                                        __right_value393 = come_decrement_ref_count2(__right_value393, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        __result214__ = __result_obj__ = node_321;
                                                        come_call_finalizer3(fun_name_309,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(type_310,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        buf2_320 = come_decrement_ref_count2(buf2_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        if(node_321) { node_321 = come_decrement_ref_count2(node_321, ((struct sNode*)node_321)->finalize, ((struct sNode*)node_321)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                        buf_285 = come_decrement_ref_count2(buf_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        return __result214__;
                                                        come_call_finalizer3(fun_name_309,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                        come_call_finalizer3(type_310,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        buf2_320 = come_decrement_ref_count2(buf2_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        if(node_321) { node_321 = come_decrement_ref_count2(node_321, ((struct sNode*)node_321)->finalize, ((struct sNode*)node_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    else {
                                                        if(*info->p==58&&*(info->p+1)==58) {
                                                            info->p+=2;
                                                            skip_spaces_and_lf(info);
                                                            fun_name_322=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value396=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value395=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1305, "buffer"))))))));
                                                            come_call_finalizer3(__right_value395,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                                            buffer_append_str(fun_name_322,buf_285);
                                                            buffer_append_str(fun_name_322,"_");
                                                            buf2_323=(char*)come_increment_ref_count(((char*)(__right_value397=parse_word(info))));
                                                            buffer_append_str(fun_name_322,buf2_323);
                                                            node_324=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value399=parse_function_call(((char*)(__right_value398=buffer_to_string(fun_name_322))),info))));
                                                            __right_value398 = come_decrement_ref_count2(__right_value398, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            __result215__ = __result_obj__ = node_324;
                                                            come_call_finalizer3(fun_name_322,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                            buf2_323 = come_decrement_ref_count2(buf2_323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            if(node_324) { node_324 = come_decrement_ref_count2(node_324, ((struct sNode*)node_324)->finalize, ((struct sNode*)node_324)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                            buf_285 = come_decrement_ref_count2(buf_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            return __result215__;
                                                            come_call_finalizer3(fun_name_322,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                            buf2_323 = come_decrement_ref_count2(buf2_323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            if(node_324) { node_324 = come_decrement_ref_count2(node_324, ((struct sNode*)node_324)->finalize, ((struct sNode*)node_324)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        else {
                                                            if(call_method_generics_fun_call_292) {
                                                                node_325=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value400=parse_function_call(buf_285,info))));
                                                                __result216__ = __result_obj__ = node_325;
                                                                if(node_325) { node_325 = come_decrement_ref_count2(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                buf_285 = come_decrement_ref_count2(buf_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                return __result216__;
                                                                if(node_325) { node_325 = come_decrement_ref_count2(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                if(string_operator_not_equals(buf_285,"if")&&string_operator_not_equals(buf_285,"while")&&string_operator_not_equals(buf_285,"for")&&string_operator_not_equals(buf_285,"switch")&&string_operator_not_equals(buf_285,"return")&&string_operator_not_equals(buf_285,"sizeof")&&string_operator_not_equals(buf_285,"isheap")&&string_operator_not_equals(buf_285,"ispointer")&&string_operator_not_equals(buf_285,"guard")&&string_operator_not_equals(buf_285,"__typeof__")&&string_operator_not_equals(buf_285,"dynamic_typeof")&&string_operator_not_equals(buf_285,"typeof")&&string_operator_not_equals(buf_285,"gc_inc")&&string_operator_not_equals(buf_285,"gc_dec")&&string_operator_not_equals(buf_285,"case")&&string_operator_not_equals(buf_285,"_Alignof")&&string_operator_not_equals(buf_285,"__alignof__")&&string_operator_not_equals(buf_285,"_Alignas")&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__286)) {
                                                                    node_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value401=parse_function_call(buf_285,info))));
                                                                    __result217__ = __result_obj__ = node_326;
                                                                    if(node_326) { node_326 = come_decrement_ref_count2(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                    buf_285 = come_decrement_ref_count2(buf_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    return __result217__;
                                                                    if(node_326) { node_326 = come_decrement_ref_count2(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                }
                                                                else {
                                                                    node_327=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value402=string_node_v21(buf_285,head_283,head_sline_284,info))));
                                                                    __result218__ = __result_obj__ = node_327;
                                                                    if(node_327) { node_327 = come_decrement_ref_count2(node_327, ((struct sNode*)node_327)->finalize, ((struct sNode*)node_327)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                    buf_285 = come_decrement_ref_count2(buf_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    return __result218__;
                                                                    if(node_327) { node_327 = come_decrement_ref_count2(node_327, ((struct sNode*)node_327)->finalize, ((struct sNode*)node_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
            buf_285 = come_decrement_ref_count2(buf_285, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            node_328=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value403=expression_node_v96(info))));
            __result219__ = __result_obj__ = node_328;
            if(node_328) { node_328 = come_decrement_ref_count2(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result219__;
            if(node_328) { node_328 = come_decrement_ref_count2(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
void* __right_value333 = (void*)0;
struct sReturnNode* result_282;
void* __right_value334 = (void*)0;
char* __dec_obj118;
void* __right_value335 = (void*)0;
struct sNode* __dec_obj119;
void* __right_value336 = (void*)0;
char* __dec_obj120;
struct sReturnNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_282, 0, sizeof(struct sReturnNode*));
                if(self==(void*)0) {
                    __result175__ = __result_obj__ = (void*)0;
                    return __result175__;
                }
                result_282=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value333=(struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "sReturnNode"))));
                if(self!=((void*)0)) {
                    result_282->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj118=result_282->sname;
                    result_282->sname=(char*)come_increment_ref_count(((char*)(__right_value334=string_clone(self->sname))));
                    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                if(self!=((void*)0)&&self->value!=((void*)0)) {
                    __dec_obj119=result_282->value;
                    result_282->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value335=sNode_clone(self->value))));
                    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); }
                }
                if(self!=((void*)0)&&self->value_source!=((void*)0)) {
                    __dec_obj120=result_282->value_source;
                    result_282->value_source=(char*)come_increment_ref_count(((char*)(__right_value336=string_clone(self->value_source))));
                    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                __result176__ = __result_obj__ = result_282;
                come_call_finalizer3(result_282,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result176__;
                come_call_finalizer3(result_282,sReturnNode_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__;
struct sVar* default_value_293;
unsigned int hash_294;
unsigned int it_295;
struct sVar* __result178__;
struct sVar* __result179__;
struct sVar* __result180__;
struct sVar* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_293, 0, sizeof(struct sVar*));
                    memset(&default_value_293,0,sizeof(struct sVar*));
                    hash_294=string_get_hash_key(((char*)key))%self->size;
                    it_295=hash_294;
                    while((_Bool)1) {
                        if(self->item_existance[it_295]) {
                            if(string_equals(self->keys[it_295],key)) {
                                __result178__ = __result_obj__ = self->items[it_295];
                                come_call_finalizer3(default_value_293,sVar_finalize, 0, 0, 0, 0, (void*)0);
                                return __result178__;
                            }
                            it_295++;
                            if(it_295>=self->size) {
                                it_295=0;
                            }
                            else {
                                if(it_295==hash_294) {
                                    __result179__ = __result_obj__ = default_value_293;
                                    come_call_finalizer3(default_value_293,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result179__;
                                }
                            }
                        }
                        else {
                            __result180__ = __result_obj__ = default_value_293;
                            come_call_finalizer3(default_value_293,sVar_finalize, 0, 0, 1, 0, (void*)0);
                            return __result180__;
                        }
                    }
                    __result181__ = __result_obj__ = default_value_293;
                    come_call_finalizer3(default_value_293,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result181__;
                    come_call_finalizer3(default_value_293,sVar_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value349 = (void*)0;
struct sFuncNode* result_298;
void* __right_value350 = (void*)0;
char* __dec_obj123;
struct sFuncNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_298, 0, sizeof(struct sFuncNode*));
                            if(self==(void*)0) {
                                __result184__ = __result_obj__ = (void*)0;
                                return __result184__;
                            }
                            result_298=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value349=(struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "sFuncNode"))));
                            if(self!=((void*)0)) {
                                result_298->sline=self->sline;
                            }
                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                __dec_obj123=result_298->sname;
                                result_298->sname=(char*)come_increment_ref_count(((char*)(__right_value350=string_clone(self->sname))));
                                __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            __result185__ = __result_obj__ = result_298;
                            come_call_finalizer3(result_298,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result185__;
                            come_call_finalizer3(result_298,sFuncNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLineNode_finalize(struct sLineNode* self){
                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__;
struct sLineNode* __result187__;
void* __right_value354 = (void*)0;
struct sLineNode* result_299;
void* __right_value355 = (void*)0;
char* __dec_obj124;
struct sLineNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_299, 0, sizeof(struct sLineNode*));
                                if(self==(void*)0) {
                                    __result187__ = __result_obj__ = (void*)0;
                                    return __result187__;
                                }
                                result_299=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value354=(struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "sLineNode"))));
                                if(self!=((void*)0)) {
                                    result_299->sline=self->sline;
                                }
                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                    __dec_obj124=result_299->sname;
                                    result_299->sname=(char*)come_increment_ref_count(((char*)(__right_value355=string_clone(self->sname))));
                                    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                                }
                                __result188__ = __result_obj__ = result_299;
                                come_call_finalizer3(result_299,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result188__;
                                come_call_finalizer3(result_299,sLineNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sSNameNode_finalize(struct sSNameNode* self){
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__;
struct sSNameNode* __result190__;
void* __right_value359 = (void*)0;
struct sSNameNode* result_300;
void* __right_value360 = (void*)0;
char* __dec_obj125;
struct sSNameNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_300, 0, sizeof(struct sSNameNode*));
                                    if(self==(void*)0) {
                                        __result190__ = __result_obj__ = (void*)0;
                                        return __result190__;
                                    }
                                    result_300=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value359=(struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "sSNameNode"))));
                                    if(self!=((void*)0)) {
                                        result_300->sline=self->sline;
                                    }
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        __dec_obj125=result_300->sname;
                                        result_300->sname=(char*)come_increment_ref_count(((char*)(__right_value360=string_clone(self->sname))));
                                        __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    }
                                    __result191__ = __result_obj__ = result_300;
                                    come_call_finalizer3(result_300,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result191__;
                                    come_call_finalizer3(result_300,sSNameNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
                                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__;
struct sCallerFuncNode* __result193__;
void* __right_value364 = (void*)0;
struct sCallerFuncNode* result_301;
void* __right_value365 = (void*)0;
char* __dec_obj126;
struct sCallerFuncNode* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_301, 0, sizeof(struct sCallerFuncNode*));
                                        if(self==(void*)0) {
                                            __result193__ = __result_obj__ = (void*)0;
                                            return __result193__;
                                        }
                                        result_301=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value364=(struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "sCallerFuncNode"))));
                                        if(self!=((void*)0)) {
                                            result_301->sline=self->sline;
                                        }
                                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                            __dec_obj126=result_301->sname;
                                            result_301->sname=(char*)come_increment_ref_count(((char*)(__right_value365=string_clone(self->sname))));
                                            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        __result194__ = __result_obj__ = result_301;
                                        come_call_finalizer3(result_301,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result194__;
                                        come_call_finalizer3(result_301,sCallerFuncNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
                                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__;
struct sCallerLineNode* __result196__;
void* __right_value369 = (void*)0;
struct sCallerLineNode* result_302;
void* __right_value370 = (void*)0;
char* __dec_obj127;
struct sCallerLineNode* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_302, 0, sizeof(struct sCallerLineNode*));
                                            if(self==(void*)0) {
                                                __result196__ = __result_obj__ = (void*)0;
                                                return __result196__;
                                            }
                                            result_302=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value369=(struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "sCallerLineNode"))));
                                            if(self!=((void*)0)) {
                                                result_302->sline=self->sline;
                                            }
                                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                __dec_obj127=result_302->sname;
                                                result_302->sname=(char*)come_increment_ref_count(((char*)(__right_value370=string_clone(self->sname))));
                                                __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            }
                                            __result197__ = __result_obj__ = result_302;
                                            come_call_finalizer3(result_302,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result197__;
                                            come_call_finalizer3(result_302,sCallerLineNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
                                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__;
struct sCallerSNameNode* __result199__;
void* __right_value374 = (void*)0;
struct sCallerSNameNode* result_303;
void* __right_value375 = (void*)0;
char* __dec_obj128;
struct sCallerSNameNode* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_303, 0, sizeof(struct sCallerSNameNode*));
                                                if(self==(void*)0) {
                                                    __result199__ = __result_obj__ = (void*)0;
                                                    return __result199__;
                                                }
                                                result_303=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value374=(struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "sCallerSNameNode"))));
                                                if(self!=((void*)0)) {
                                                    result_303->sline=self->sline;
                                                }
                                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                    __dec_obj128=result_303->sname;
                                                    result_303->sname=(char*)come_increment_ref_count(((char*)(__right_value375=string_clone(self->sname))));
                                                    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                }
                                                __result200__ = __result_obj__ = result_303;
                                                come_call_finalizer3(result_303,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result200__;
                                                come_call_finalizer3(result_303,sCallerSNameNode_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value380 = (void*)0;
struct sVarArgTypeName* result_307;
void* __right_value381 = (void*)0;
char* __dec_obj129;
void* __right_value382 = (void*)0;
struct sType* __dec_obj130;
struct sVarArgTypeName* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_307, 0, sizeof(struct sVarArgTypeName*));
                                                    if(self==(void*)0) {
                                                        __result202__ = __result_obj__ = (void*)0;
                                                        return __result202__;
                                                    }
                                                    result_307=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value380=(struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "sVarArgTypeName"))));
                                                    if(self!=((void*)0)) {
                                                        result_307->sline=self->sline;
                                                    }
                                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                        __dec_obj129=result_307->sname;
                                                        result_307->sname=(char*)come_increment_ref_count(((char*)(__right_value381=string_clone(self->sname))));
                                                        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    }
                                                    if(self!=((void*)0)&&self->type!=((void*)0)) {
                                                        __dec_obj130=result_307->type;
                                                        result_307->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value382=sType_clone(self->type))));
                                                        come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    }
                                                    __result203__ = __result_obj__ = result_307;
                                                    come_call_finalizer3(result_307,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
                                                    return __result203__;
                                                    come_call_finalizer3(result_307,sVarArgTypeName_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
struct sType* default_value_311;
unsigned int hash_312;
unsigned int it_313;
struct sType* __result206__;
struct sType* __result207__;
struct sType* __result208__;
struct sType* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_311, 0, sizeof(struct sType*));
                                                            memset(&default_value_311,0,sizeof(struct sType*));
                                                            hash_312=string_get_hash_key(((char*)key))%self->size;
                                                            it_313=hash_312;
                                                            while((_Bool)1) {
                                                                if(self->item_existance[it_313]) {
                                                                    if(string_equals(self->keys[it_313],key)) {
                                                                        __result206__ = __result_obj__ = self->items[it_313];
                                                                        come_call_finalizer3(default_value_311,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                        return __result206__;
                                                                    }
                                                                    it_313++;
                                                                    if(it_313>=self->size) {
                                                                        it_313=0;
                                                                    }
                                                                    else {
                                                                        if(it_313==hash_312) {
                                                                            __result207__ = __result_obj__ = default_value_311;
                                                                            come_call_finalizer3(default_value_311,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                                            return __result207__;
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    __result208__ = __result_obj__ = default_value_311;
                                                                    come_call_finalizer3(default_value_311,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                                    return __result208__;
                                                                }
                                                            }
                                                            __result209__ = __result_obj__ = default_value_311;
                                                            come_call_finalizer3(default_value_311,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                            return __result209__;
                                                            come_call_finalizer3(default_value_311,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_315;
unsigned int hash_316;
unsigned int it_317;
struct sClass* __result210__;
struct sClass* __result211__;
struct sClass* __result212__;
struct sClass* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_315, 0, sizeof(struct sClass*));
                                                                memset(&default_value_315,0,sizeof(struct sClass*));
                                                                hash_316=string_get_hash_key(((char*)key))%self->size;
                                                                it_317=hash_316;
                                                                while((_Bool)1) {
                                                                    if(self->item_existance[it_317]) {
                                                                        if(string_equals(self->keys[it_317],key)) {
                                                                            __result210__ = __result_obj__ = self->items[it_317];
                                                                            come_call_finalizer3(default_value_315,sClass_finalize, 0, 0, 0, 0, (void*)0);
                                                                            return __result210__;
                                                                        }
                                                                        it_317++;
                                                                        if(it_317>=self->size) {
                                                                            it_317=0;
                                                                        }
                                                                        else {
                                                                            if(it_317==hash_316) {
                                                                                __result211__ = __result_obj__ = default_value_315;
                                                                                come_call_finalizer3(default_value_315,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                                return __result211__;
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        __result212__ = __result_obj__ = default_value_315;
                                                                        come_call_finalizer3(default_value_315,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                        return __result212__;
                                                                    }
                                                                }
                                                                __result213__ = __result_obj__ = default_value_315;
                                                                come_call_finalizer3(default_value_315,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                                                return __result213__;
                                                                come_call_finalizer3(default_value_315,sClass_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1tuple2$2charphsTypephph* it_318;
struct list_item$1tuple2$2charphsTypephph* prev_it_319;
memset(&it_318, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_319, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                                        it_318=self->head;
                                                                                        while(it_318!=((void*)0)) {
                                                                                            prev_it_319=it_318;
                                                                                            it_318=it_318->next;
                                                                                            come_call_finalizer3(prev_it_319,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value404 = (void*)0;
struct sNode* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
    __result221__ = __result_obj__ = ((struct sNode*)(__right_value404=expression_node_v99(info)));
    if(__right_value404) { __right_value404 = come_decrement_ref_count2(__right_value404, ((struct sNode*)__right_value404)->finalize, ((struct sNode*)__right_value404)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result221__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct sNode* __dec_obj132;
struct sNode* __result222__;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct sNode* __dec_obj133;
struct sNode* __result223__;
struct sNode* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
    if(parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj132=node;
        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value406=parse_or_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value405=sNode_clone(node)))),info))));
        if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); }
        if(__right_value405) { __right_value405 = come_decrement_ref_count2(__right_value405, ((struct sNode*)__right_value405)->finalize, ((struct sNode*)__right_value405)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __result222__ = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result222__;
    }
    else {
        if(parsecmp("and",info)) {
            info->p+=strlen("and");
            skip_spaces_and_lf(info);
            __dec_obj133=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value408=parse_and_statment((struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value407=sNode_clone(node)))),info))));
            if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); }
            if(__right_value407) { __right_value407 = come_decrement_ref_count2(__right_value407, ((struct sNode*)__right_value407)->finalize, ((struct sNode*)__right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
void* __right_value409 = (void*)0;
struct sNode* node_329;
void* __right_value410 = (void*)0;
struct sNode* __dec_obj134;
struct sNode* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_329, 0, sizeof(struct sNode*));
    node_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value409=expression_v13(info))));
    __dec_obj134=node_329;
    node_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value410=post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_329),info))));
    if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); }
    __result225__ = __result_obj__ = node_329;
    if(node_329) { node_329 = come_decrement_ref_count2(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result225__;
    if(node_329) { node_329 = come_decrement_ref_count2(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
char* struct_name_330;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct buffer* buf_331;
void* __right_value413 = (void*)0;
char* __dec_obj135;
int i_332;
void* __right_value414 = (void*)0;
char* __dec_obj136;
void* __right_value415 = (void*)0;
char* __dec_obj137;
int i_333;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
char* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&struct_name_330, 0, sizeof(char*));
memset(&buf_331, 0, sizeof(struct buffer*));
    buf_331=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value412=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value411=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1387, "buffer"))))))));
    come_call_finalizer3(__right_value411,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj135=struct_name_330;
        struct_name_330=(char*)come_increment_ref_count(((char*)(__right_value413=__builtin_string(obj_type->mOriginalTypeName))));
        __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(!obj_type->mClass->mStruct) {
            for(            i_332=0;            i_332<obj_type->mOriginalTypeNamePointerNum;            i_332++            ){
                buffer_append_str(buf_331,"p");
            }
        }
    }
    else {
        if(obj_type->mClass->mStruct) {
            __dec_obj136=struct_name_330;
            struct_name_330=(char*)come_increment_ref_count(((char*)(__right_value414=__builtin_string(obj_type->mClass->mName))));
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj137=struct_name_330;
            struct_name_330=(char*)come_increment_ref_count(((char*)(__right_value415=create_generics_name(obj_type,info))));
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
            for(            i_333=0;            i_333<obj_type->mPointerNum;            i_333++            ){
                buffer_append_str(buf_331,"p");
            }
        }
    }
    if(obj_type->mArrayPointerType) {
        buffer_append_str(buf_331,"a");
    }
    if(!array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_331,"pa");
    }
    __result226__ = __result_obj__ = ((char*)(__right_value417=xsprintf("%s%s_%s",struct_name_330,((char*)(__right_value416=buffer_to_string(buf_331))),fun_name)));
    struct_name_330 = come_decrement_ref_count2(struct_name_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_331,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result226__;
    struct_name_330 = come_decrement_ref_count2(struct_name_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_331,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
        if(self==((void*)0)) {
            return 0;
        }
        return self->len;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
char* struct_name_334;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct buffer* buf_335;
void* __right_value420 = (void*)0;
char* __dec_obj138;
int i_336;
void* __right_value421 = (void*)0;
char* __dec_obj139;
void* __right_value422 = (void*)0;
char* __dec_obj140;
int i_337;
void* __right_value423 = (void*)0;
int len_339;
void* __right_value424 = (void*)0;
char* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&struct_name_334, 0, sizeof(char*));
memset(&buf_335, 0, sizeof(struct buffer*));
    buf_335=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value419=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value418=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1422, "buffer"))))))));
    come_call_finalizer3(__right_value418,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj138=struct_name_334;
        struct_name_334=(char*)come_increment_ref_count(((char*)(__right_value420=__builtin_string(obj_type->mOriginalTypeName))));
        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(!obj_type->mClass->mStruct) {
            for(            i_336=0;            i_336<obj_type->mOriginalTypeNamePointerNum;            i_336++            ){
                buffer_append_str(buf_335,"p");
            }
        }
    }
    else {
        if(obj_type->mClass->mStruct) {
            __dec_obj139=struct_name_334;
            struct_name_334=(char*)come_increment_ref_count(((char*)(__right_value421=__builtin_string(obj_type->mClass->mName))));
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj140=struct_name_334;
            struct_name_334=(char*)come_increment_ref_count(((char*)(__right_value422=create_generics_name(obj_type,info))));
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
            for(            i_337=0;            i_337<obj_type->mPointerNum;            i_337++            ){
                buffer_append_str(buf_335,"p");
            }
        }
    }
    if(obj_type->mArrayPointerType) {
        buffer_append_str(buf_335,"a");
    }
    if(!array_equal_pointer&&list$1sNodeph_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_335,"pa");
    }
    char none_method_name_338[charp_length(fun_name)+1];
    memset(&none_method_name_338, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_339=string_length(struct_name_334)+string_length(((char*)(__right_value423=buffer_to_string(buf_335))));
    __right_value423 = come_decrement_ref_count2(__right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(none_method_name_338,fun_name+len_339+1,charp_length(fun_name)-len_339-1);
    none_method_name_338[charp_length(fun_name)-len_339-1]=0;
    __result227__ = __result_obj__ = ((char*)(__right_value424=__builtin_string(none_method_name_338)));
    struct_name_334 = come_decrement_ref_count2(struct_name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_335,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result227__;
    struct_name_334 = come_decrement_ref_count2(struct_name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_335,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__;
void* __right_value425 = (void*)0;
char* struct_name_340;
void* __right_value426 = (void*)0;
char* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&struct_name_340, 0, sizeof(char*));
    struct_name_340=(char*)come_increment_ref_count(((char*)(__right_value425=__builtin_string(obj_class->mName))));
    __result228__ = __result_obj__ = ((char*)(__right_value426=xsprintf("%s_%s",struct_name_340,fun_name)));
    struct_name_340 = come_decrement_ref_count2(struct_name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result228__;
    struct_name_340 = come_decrement_ref_count2(struct_name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_341;
char* p_342;
int sline_343;
_Bool err_flag_344;
void* __right_value429 = (void*)0;
char* label_345;
void* __right_value430 = (void*)0;
char* __dec_obj141;
char* __dec_obj142;
_Bool no_comma_346;
_Bool in_fun_param_347;
void* __right_value431 = (void*)0;
struct sNode* node_348;
void* __right_value432 = (void*)0;
struct sNode* __dec_obj143;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct sNode* _inf_value11;
struct sLambdaCall* _inf_obj_value11;
void* __right_value441 = (void*)0;
struct sNode* __result232__;
struct sNode* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&params_341, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&label_345, 0, sizeof(char*));
memset(&node_348, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    if(!node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_341=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(__right_value428=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(__right_value427=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1486, "list$1tuple2$2charphsNodephph"))))))));
        come_call_finalizer3(__right_value427,list$1tuple2$2charphsNodephphp_finalize, 0, 1, 0, 0, __result_obj__);
        while((_Bool)1) {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_342=info->p;
            sline_343=info->sline;
            err_flag_344=(_Bool)0;
            label_345=(char*)come_increment_ref_count(((char*)(__right_value429=__builtin_string(""))));
            if(xisalpha(*info->p)||*info->p==95) {
                __dec_obj141=label_345;
                label_345=(char*)come_increment_ref_count(((char*)(__right_value430=parse_word(info))));
                __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_344=(_Bool)1;
            }
            if(err_flag_344==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj142=label_345;
                label_345=((void*)0);
                __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_342;
                info->sline=sline_343;
            }
            no_comma_346=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_347=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_348=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value431=expression_v13(info))));
            __dec_obj143=node_348;
            node_348=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value432=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_348),info))));
            if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); }
            info->no_comma=no_comma_346;
            info->in_fun_param=in_fun_param_347;
            list$1tuple2$2charphsNodephph_push_back(params_341,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(__right_value434=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(__right_value433=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1529, "struct tuple2$2charphsNodeph")))),(char*)come_increment_ref_count(label_345),(struct sNode*)come_increment_ref_count(node_348))))));
            come_call_finalizer3(__right_value433,tuple2$2charphsNodeph_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value434,tuple2$2charphsNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                if(*info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    label_345 = come_decrement_ref_count2(label_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_348) { node_348 = come_decrement_ref_count2(node_348, ((struct sNode*)node_348)->finalize, ((struct sNode*)node_348)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            label_345 = come_decrement_ref_count2(label_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_348) { node_348 = come_decrement_ref_count2(node_348, ((struct sNode*)node_348)->finalize, ((struct sNode*)node_348)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        parse_sharp_v5(info);
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1547, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sLambdaCall*)(__right_value436=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value435=(struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 1547, "sLambdaCall")))),(struct sNode*)come_increment_ref_count(node),params_341,info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sLambdaCall_finalize;
        _inf_value11->clone=(void*)sLambdaCall_clone;
        _inf_value11->compile=(void*)sLambdaCall_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sLambdaCall_kind;
        __result232__ = __result_obj__ = ((struct sNode*)(__right_value441=_inf_value11));
        come_call_finalizer3(params_341,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(__right_value435,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value436,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value441) { __right_value441 = come_decrement_ref_count2(__right_value441, ((struct sNode*)__right_value441)->finalize, ((struct sNode*)__right_value441)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result232__;
        come_call_finalizer3(params_341,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value437 = (void*)0;
struct sLambdaCall* result_349;
void* __right_value438 = (void*)0;
char* __dec_obj144;
void* __right_value439 = (void*)0;
struct sNode* __dec_obj145;
void* __right_value440 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj146;
struct sLambdaCall* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_349, 0, sizeof(struct sLambdaCall*));
            if(self==(void*)0) {
                __result230__ = __result_obj__ = (void*)0;
                return __result230__;
            }
            result_349=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value437=(struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "sLambdaCall"))));
            if(self!=((void*)0)) {
                result_349->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj144=result_349->sname;
                result_349->sname=(char*)come_increment_ref_count(((char*)(__right_value438=string_clone(self->sname))));
                __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(self!=((void*)0)&&self->node!=((void*)0)) {
                __dec_obj145=result_349->node;
                result_349->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value439=sNode_clone(self->node))));
                if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); }
            }
            if(self!=((void*)0)&&self->params!=((void*)0)) {
                __dec_obj146=result_349->params;
                result_349->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(__right_value440=list$1tuple2$2charphsNodephphp_clone(self->params))));
                come_call_finalizer3(__dec_obj146,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
            }
            __result231__ = __result_obj__ = result_349;
            come_call_finalizer3(result_349,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
            return __result231__;
            come_call_finalizer3(result_349,sLambdaCall_finalize, 0, 0, 0, 0, (void*)0);
}

