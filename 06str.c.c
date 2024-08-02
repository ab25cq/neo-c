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
struct sStrNode
{
    int sline;
    char* sname;
    char* value;
};
struct sSStringNode
{
    int sline;
    char* sname;
    char* value;
    struct list$1sNodeph* exps;
};
struct sCharNode
{
    int sline;
    char* sname;
    int value;
};
struct sWCharNode
{
    int sline;
    char* sname;
    unsigned int value;
    _Bool quote;
};
struct sWStringNode
{
    int sline;
    char* sname;
    unsigned int* value;
};
struct sRegexNode
{
    int sline;
    char* sname;
    char* str;
    _Bool global;
    _Bool ignore_case;
};
struct sListNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* list_elements;
};
struct sTupleNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* tuple_elements;
};
struct sMapNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* map_key_elements;
    struct list$1sNodeph* map_elements;
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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);

char* sStrNode_kind(struct sStrNode* self);

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
static void CVALUE_finalize(struct CVALUE* self);
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
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info);

char* sSStringNode_kind(struct sSStringNode* self);

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);

char* sCharNode_kind(struct sCharNode* self);

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info);

char* sWCharNode_kind(struct sWCharNode* self);

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info);

char* sWStringNode_kind(struct sWStringNode* self);

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);

char* sRegexNode_kind(struct sRegexNode* self);

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);

char* sListNode_kind(struct sListNode* self);

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);

char* sTupleNode_kind(struct sTupleNode* self);

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);

static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct list$1sRightValueObjectp* list$1sRightValueObjectpp_clone(struct list$1sRightValueObjectp* self);
static struct list$1sRightValueObjectp* list$1sRightValueObjectp_initialize(struct list$1sRightValueObjectp* self);
static struct list$1sRightValueObjectp* list$1sRightValueObjectp_add(struct list$1sRightValueObjectp* self, struct sRightValueObject* item);
static struct sRightValueObject* sRightValueObject_clone(struct sRightValueObject* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectp_finalize(struct list$1sRightValueObjectp* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);

char* sMapNode_kind(struct sMapNode* self);

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);

static void sStrNode_finalize(struct sStrNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self);
static void sCharNode_finalize(struct sCharNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static void sWCharNode_finalize(struct sWCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static void sWStringNode_finalize(struct sWStringNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static void sSStringNode_finalize(struct sSStringNode* self);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static void sMapNode_finalize(struct sMapNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static void sListNode_finalize(struct sListNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info);

static void sTupleNode_finalize(struct sTupleNode* self);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
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










struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value79;
void* right_value80;
char* __dec_obj12;
struct sStrNode* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
right_value80 = (void*)0;
    ((struct sNodeBase*)(right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj12=self->value;
    self->value=(char*)come_increment_ref_count(((char*)(right_value80=__builtin_string(value))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result45__ = __result_obj__ = self;
    come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result45__;
    come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sStrNode_kind(struct sStrNode* self){
void* __result_obj__;
void* right_value81;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value81 = (void*)0;
    __result46__ = __result_obj__ = ((char*)(right_value81=__builtin_string("sStrNode")));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result46__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* right_value82;
void* right_value83;
struct CVALUE* come_value_47;
void* right_value84;
char* __dec_obj13;
void* right_value85;
void* right_value86;
struct sType* __dec_obj14;
_Bool __result48__;
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&come_value_47, 0, sizeof(struct CVALUE*));
right_value84 = (void*)0;
right_value85 = (void*)0;
right_value86 = (void*)0;
    come_value_47=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value83=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value82=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "CVALUE"))))))));
    come_call_finalizer3(right_value82,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value83,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj13=come_value_47->c_value;
    come_value_47->c_value=(char*)come_increment_ref_count(((char*)(right_value84=xsprintf("\"%s\"",self->value))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj14=come_value_47->type;
    come_value_47->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value85=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 22, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value85,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value86,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_47->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_47));
    add_come_last_code(info,"%s;\n",come_value_47->c_value);
    __result48__ = (_Bool)1;
    come_call_finalizer3(come_value_47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result48__;
    come_call_finalizer3(come_value_47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNodeBase_finalize(struct sNodeBase* self){
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_48;
struct list_item$1sTypeph* prev_it_49;
memset(&it_48, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_49, 0, sizeof(struct list_item$1sTypeph*));
                        it_48=self->head;
                        while(it_48!=((void*)0)) {
                            prev_it_49=it_48;
                            it_48=it_48->next;
                            come_call_finalizer3(prev_it_49,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_50;
struct list_item$1sNodeph* prev_it_51;
memset(&it_50, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_51, 0, sizeof(struct list_item$1sNodeph*));
                        it_50=self->head;
                        while(it_50!=((void*)0)) {
                            prev_it_51=it_50;
                            it_50=it_50->next;
                            come_call_finalizer3(prev_it_51,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
                                if(self!=((void*)0)&&self->item!=((void*)0)) {
                                    if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_52;
struct list_item$1charph* prev_it_53;
memset(&it_52, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_53, 0, sizeof(struct list_item$1charph*));
                        it_52=self->head;
                        while(it_52!=((void*)0)) {
                            prev_it_53=it_52;
                            it_52=it_52->next;
                            come_call_finalizer3(prev_it_53,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
                                if(self!=((void*)0)&&self->item!=((void*)0)) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void list$1sRightValueObjectpp_finalize(struct list$1sRightValueObjectp* self){
struct list_item$1sRightValueObjectp* it_54;
struct list_item$1sRightValueObjectp* prev_it_55;
memset(&it_54, 0, sizeof(struct list_item$1sRightValueObjectp*));
memset(&prev_it_55, 0, sizeof(struct list_item$1sRightValueObjectp*));
                it_54=self->head;
                while(it_54!=((void*)0)) {
                    prev_it_55=it_54;
                    it_54=it_54->next;
                    come_call_finalizer3(prev_it_55,list_item$1sRightValueObjectpp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1sRightValueObjectpp_finalize(struct list_item$1sRightValueObjectp* self){
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
void* right_value87;
struct list_item$1CVALUEph* litem_56;
struct CVALUE* __dec_obj15;
void* right_value88;
struct list_item$1CVALUEph* litem_57;
struct CVALUE* __dec_obj16;
void* right_value89;
struct list_item$1CVALUEph* litem_58;
struct CVALUE* __dec_obj17;
struct list$1CVALUEph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&litem_56, 0, sizeof(struct list_item$1CVALUEph*));
right_value88 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1CVALUEph*));
right_value89 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1CVALUEph*));
        if(self->len==0) {
            litem_56=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value87=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 219, "list_item$1CVALUEph"))));
            come_call_finalizer3(right_value87,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_56->prev=((void*)0);
            litem_56->next=((void*)0);
            __dec_obj15=litem_56->item;
            litem_56->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj15,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_56;
            self->head=litem_56;
        }
        else {
            if(self->len==1) {
                litem_57=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value88=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 229, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value88,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_57->prev=self->head;
                litem_57->next=((void*)0);
                __dec_obj16=litem_57->item;
                litem_57->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj16,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_57;
                self->head->next=litem_57;
            }
            else {
                litem_58=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value89=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 239, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value89,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_58->prev=self->tail;
                litem_58->next=((void*)0);
                __dec_obj17=litem_58->item;
                litem_58->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj17,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_58;
                self->tail=litem_58;
            }
        }
        self->len++;
        __result47__ = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result47__;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
                if(self!=((void*)0)&&self->item!=((void*)0)) {
                    come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value90;
void* right_value91;
char* __dec_obj18;
void* right_value99;
struct list$1sNodeph* __dec_obj22;
struct sSStringNode* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
right_value91 = (void*)0;
right_value99 = (void*)0;
    ((struct sNodeBase*)(right_value90=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value90,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj18=self->value;
    self->value=(char*)come_increment_ref_count(((char*)(right_value91=__builtin_string(value))));
    __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj22=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value99=list$1sNodephp_clone(exps))));
    come_call_finalizer3(__dec_obj22,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value99,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    __result55__ = __result_obj__ = self;
    come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result55__;
    come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __result_obj__;
void* right_value100;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
    __result56__ = __result_obj__ = ((char*)(right_value100=__builtin_string("sSStringNode")));
    right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result56__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* right_value101;
void* right_value102;
struct CVALUE* come_value_67;
void* right_value103;
void* right_value104;
struct buffer* buf_68;
struct list$1sNodeph* o2_saved_69;
struct sNode* it_72;
_Bool __result63__;
void* right_value105;
struct CVALUE* come_value_75;
void* right_value106;
char* method_name_76;
struct sType* obj_type_79;
struct sType* obj_type2_80;
void* right_value107;
void* right_value108;
char* __dec_obj23;
void* right_value109;
void* right_value110;
struct buffer* buf2_81;
void* right_value111;
void* right_value112;
struct sType* type_82;
void* right_value113;
void* right_value114;
char* c_value_83;
void* right_value115;
void* right_value116;
struct sType* type2_84;
void* right_value117;
char* __dec_obj24;
void* right_value118;
char* __dec_obj25;
void* right_value147;
struct sType* __dec_obj46;
_Bool __result80__;
right_value101 = (void*)0;
right_value102 = (void*)0;
memset(&come_value_67, 0, sizeof(struct CVALUE*));
right_value103 = (void*)0;
right_value104 = (void*)0;
memset(&buf_68, 0, sizeof(struct buffer*));
memset(&o2_saved_69, 0, sizeof(struct list$1sNodeph*));
memset(&it_72, 0, sizeof(struct sNode*));
right_value105 = (void*)0;
memset(&come_value_75, 0, sizeof(struct CVALUE*));
right_value106 = (void*)0;
memset(&method_name_76, 0, sizeof(char*));
memset(&obj_type_79, 0, sizeof(struct sType*));
memset(&obj_type2_80, 0, sizeof(struct sType*));
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&buf2_81, 0, sizeof(struct buffer*));
right_value111 = (void*)0;
right_value112 = (void*)0;
memset(&type_82, 0, sizeof(struct sType*));
right_value113 = (void*)0;
right_value114 = (void*)0;
memset(&c_value_83, 0, sizeof(char*));
right_value115 = (void*)0;
right_value116 = (void*)0;
memset(&type2_84, 0, sizeof(struct sType*));
right_value117 = (void*)0;
right_value118 = (void*)0;
right_value147 = (void*)0;
    come_value_67=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value102=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value101=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 51, "CVALUE"))))))));
    come_call_finalizer3(right_value101,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value102,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    buf_68=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value104=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value103=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 53, "buffer"))))))));
    come_call_finalizer3(right_value103,buffer_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value104,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(buf_68,"xsprintf(\"");
    buffer_append_str(buf_68,self->value);
    buffer_append_str(buf_68,"\"");
    if(list$1sNodeph_length(self->exps)>0) {
        for(        o2_saved_69=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_72=list$1sNodeph_begin((o2_saved_69));        !list$1sNodeph_end((o2_saved_69));        it_72=list$1sNodeph_next((o2_saved_69))        ){
            if(!node_compile(it_72,info)) {
                __result63__ = (_Bool)0;
                come_call_finalizer3(o2_saved_69,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_67,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_68,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result63__;
            }
            come_value_75=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value105=get_value_from_stack(-1,info))));
            come_call_finalizer3(right_value105,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            dec_stack_ptr(1,info);
            method_name_76=(char*)come_increment_ref_count(((char*)(right_value106=create_method_name(come_value_75->type,(_Bool)0,"to_string",info,(_Bool)1))));
            right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(map$2charphsFunph_at(info->funcs,method_name_76,((void*)0))==((void*)0)) {
                obj_type_79=come_value_75->type->mNoSolvedGenericsType->v1;
                if(obj_type_79&&list$1sTypeph_length(obj_type_79->mGenericsTypes)>0) {
                    obj_type2_80=come_value_75->type;
                    __dec_obj23=method_name_76;
                    method_name_76=(char*)come_increment_ref_count(((char*)(right_value108=make_generics_function(obj_type2_80,(char*)come_increment_ref_count(((char*)(right_value107=__builtin_string("to_string")))),info,(_Bool)1))));
                    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"require to_string implementation(%s)",come_value_75->type->mClass->mName);
                    exit(1);
                }
            }
            buf2_81=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value110=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value109=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 82, "buffer"))))))));
            come_call_finalizer3(right_value109,buffer_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(right_value110,buffer_finalize, 0, 1, 0, 0, (void*)0);
            buffer_append_str(buf2_81,method_name_76);
            buffer_append_str(buf2_81,"(");
            buffer_append_str(buf2_81,come_value_75->c_value);
            buffer_append_str(buf2_81,")");
            type_82=(struct sType*)come_increment_ref_count(((struct sType*)(right_value112=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value111=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 89, "sType")))),"char*",(_Bool)0,info))));
            come_call_finalizer3(right_value111,sType_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(right_value112,sType_finalize, 0, 1, 0, 0, (void*)0);
            type_82->mHeap=(_Bool)1;
            c_value_83=(char*)come_increment_ref_count(((char*)(right_value114=append_object_to_right_values(((char*)(right_value113=buffer_to_string(buf2_81))),(struct sType*)come_increment_ref_count(type_82),info))));
            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_68,",");
            buffer_append_str(buf_68,c_value_83);
            come_call_finalizer3(come_value_75,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            method_name_76 = come_decrement_ref_count2(method_name_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_81,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_82,sType_finalize, 0, 0, 0, 0, (void*)0);
            c_value_83 = come_decrement_ref_count2(c_value_83, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_69,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_68,")");
    type2_84=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value115=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 101, "sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer3(right_value115,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, (void*)0);
    type2_84->mHeap=(_Bool)1;
    __dec_obj24=come_value_67->c_value;
    come_value_67->c_value=(char*)come_increment_ref_count(((char*)(right_value117=buffer_to_string(buf_68))));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj25=come_value_67->c_value;
    come_value_67->c_value=(char*)come_increment_ref_count(((char*)(right_value118=append_object_to_right_values(come_value_67->c_value,(struct sType*)come_increment_ref_count(type2_84),info))));
    __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj46=come_value_67->type;
    come_value_67->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=sType_clone(type2_84))));
    come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value147,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_67->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_67));
    add_come_last_code(info,"%s;\n",come_value_67->c_value);
    __result80__ = (_Bool)1;
    come_call_finalizer3(come_value_67,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_68,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_84,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result80__;
    come_call_finalizer3(come_value_67,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_68,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_84,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result49__;
void* right_value92;
void* right_value93;
struct list$1sNodeph* result_59;
struct list_item$1sNodeph* it_60;
void* right_value98;
struct list$1sNodeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value92 = (void*)0;
right_value93 = (void*)0;
memset(&result_59, 0, sizeof(struct list$1sNodeph*));
memset(&it_60, 0, sizeof(struct list_item$1sNodeph*));
right_value98 = (void*)0;
        if(self==((void*)0)) {
            __result49__ = __result_obj__ = ((void*)0);
            return __result49__;
        }
        result_59=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value93=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value92=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))))));
        come_call_finalizer3(right_value92,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value93,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        it_60=self->head;
        while(it_60!=((void*)0)) {
            list$1sNodeph_add(result_59,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value98=sNode_clone(it_60->item)))));
            if(right_value98) { right_value98 = come_decrement_ref_count2(right_value98, ((struct sNode*)right_value98)->finalize, ((struct sNode*)right_value98)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            it_60=it_60->next;
        }
        __result54__ = __result_obj__ = result_59;
        come_call_finalizer3(result_59,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
        return __result54__;
        come_call_finalizer3(result_59,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result50__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result50__;
            come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* right_value94;
struct list_item$1sNodeph* litem_61;
struct sNode* __dec_obj19;
void* right_value95;
struct list_item$1sNodeph* litem_62;
struct sNode* __dec_obj20;
void* right_value96;
struct list_item$1sNodeph* litem_63;
struct sNode* __dec_obj21;
struct list$1sNodeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value94 = (void*)0;
memset(&litem_61, 0, sizeof(struct list_item$1sNodeph*));
right_value95 = (void*)0;
memset(&litem_62, 0, sizeof(struct list_item$1sNodeph*));
right_value96 = (void*)0;
memset(&litem_63, 0, sizeof(struct list_item$1sNodeph*));
                if(self->len==0) {
                    litem_61=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value94=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
                    come_call_finalizer3(right_value94,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_61->prev=((void*)0);
                    litem_61->next=((void*)0);
                    __dec_obj19=litem_61->item;
                    litem_61->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count2(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0, (void*)0); }
                    self->tail=litem_61;
                    self->head=litem_61;
                }
                else {
                    if(self->len==1) {
                        litem_62=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value95=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value95,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_62->prev=self->head;
                        litem_62->next=((void*)0);
                        __dec_obj20=litem_62->item;
                        litem_62->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count2(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail=litem_62;
                        self->head->next=litem_62;
                    }
                    else {
                        litem_63=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
                        come_call_finalizer3(right_value96,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_63->prev=self->tail;
                        litem_63->next=((void*)0);
                        __dec_obj21=litem_63->item;
                        litem_63->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                        self->tail->next=litem_63;
                        self->tail=litem_63;
                    }
                }
                self->len++;
                __result51__ = __result_obj__ = self;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result51__;
                if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
struct sNode* __result52__;
void* right_value97;
struct sNode* result_64;
struct sNode* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
memset(&result_64, 0, sizeof(struct sNode*));
                if(self==(void*)0) {
                    __result52__ = __result_obj__ = (void*)0;
                    return __result52__;
                }
                result_64=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value97=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                if(right_value97) { right_value97 = come_decrement_ref_count2(right_value97, ((struct sNode*)right_value97)->finalize, ((struct sNode*)right_value97)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                if(self!=((void*)0)&&self->clone!=((void*)0)) {
                    result_64->_protocol_obj=self->clone(self->_protocol_obj);
                }
                if(self!=((void*)0)) {
                    result_64->finalize=self->finalize;
                }
                if(self!=((void*)0)) {
                    result_64->clone=self->clone;
                }
                if(self!=((void*)0)) {
                    result_64->compile=self->compile;
                }
                if(self!=((void*)0)) {
                    result_64->sline=self->sline;
                }
                if(self!=((void*)0)) {
                    result_64->sname=self->sname;
                }
                if(self!=((void*)0)) {
                    result_64->terminated=self->terminated;
                }
                if(self!=((void*)0)) {
                    result_64->kind=self->kind;
                }
                __result53__ = __result_obj__ = result_64;
                if(result_64) { result_64 = come_decrement_ref_count2(result_64, ((struct sNode*)result_64)->finalize, ((struct sNode*)result_64)->_protocol_obj, 0, 1, 0, (void*)0); } 
                return __result53__;
                if(result_64) { result_64 = come_decrement_ref_count2(result_64, ((struct sNode*)result_64)->finalize, ((struct sNode*)result_64)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_65;
struct list_item$1sNodeph* prev_it_66;
memset(&it_65, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_66, 0, sizeof(struct list_item$1sNodeph*));
        it_65=self->head;
        while(it_65!=((void*)0)) {
            prev_it_66=it_65;
            it_65=it_65->next;
            come_call_finalizer3(prev_it_66,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
        if(self==((void*)0)) {
            return 0;
        }
        return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_70;
struct sNode* __result57__;
struct sNode* __result58__;
struct sNode* result_71;
struct sNode* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_70, 0, sizeof(struct sNode*));
memset(&result_71, 0, sizeof(struct sNode*));
            if(self==((void*)0)) {
                memset(&result_70,0,sizeof(struct sNode*));
                __result57__ = __result_obj__ = result_70;
                return __result57__;
            }
            self->it=self->head;
            if(self->it) {
                __result58__ = __result_obj__ = self->it->item;
                return __result58__;
            }
            memset(&result_71,0,sizeof(struct sNode*));
            __result59__ = __result_obj__ = result_71;
            return __result59__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
            return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_73;
struct sNode* __result60__;
struct sNode* __result61__;
struct sNode* result_74;
struct sNode* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_73, 0, sizeof(struct sNode*));
memset(&result_74, 0, sizeof(struct sNode*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_73,0,sizeof(struct sNode*));
                __result60__ = __result_obj__ = result_73;
                return __result60__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result61__ = __result_obj__ = self->it->item;
                return __result61__;
            }
            memset(&result_74,0,sizeof(struct sNode*));
            __result62__ = __result_obj__ = result_74;
            return __result62__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_77;
unsigned int it_78;
struct sFun* __result64__;
struct sFun* __result65__;
struct sFun* __result66__;
struct sFun* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_77, 0, sizeof(unsigned int));
memset(&it_78, 0, sizeof(unsigned int));
                hash_77=string_get_hash_key(((char*)key))%self->size;
                it_78=hash_77;
                while((_Bool)1) {
                    if(self->item_existance[it_78]) {
                        if(string_equals(self->keys[it_78],key)) {
                            __result64__ = __result_obj__ = self->items[it_78];
                            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                            return __result64__;
                        }
                        it_78++;
                        if(it_78>=self->size) {
                            it_78=0;
                        }
                        else {
                            if(it_78==hash_77) {
                                __result65__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                                return __result65__;
                            }
                        }
                    }
                    else {
                        __result66__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                        return __result66__;
                    }
                }
                __result67__ = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result67__;
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

static int list$1sTypeph_length(struct list$1sTypeph* self){
                    if(self==((void*)0)) {
                        return 0;
                    }
                    return self->len;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
struct sType* __result68__;
void* right_value119;
struct sType* result_85;
void* right_value126;
struct list$1sTypeph* __dec_obj29;
void* right_value129;
struct tuple1$1sTypeph* __dec_obj31;
void* right_value130;
struct tuple1$1sTypeph* __dec_obj32;
void* right_value131;
char* __dec_obj33;
void* right_value132;
struct list$1sTypeph* __dec_obj34;
void* right_value133;
struct list$1sNodeph* __dec_obj35;
void* right_value134;
struct list$1sTypeph* __dec_obj36;
void* right_value141;
struct list$1charph* __dec_obj40;
void* right_value142;
struct tuple1$1sTypeph* __dec_obj41;
void* right_value143;
struct sNode* __dec_obj42;
void* right_value144;
struct sNode* __dec_obj43;
void* right_value145;
char* __dec_obj44;
void* right_value146;
char* __dec_obj45;
struct sType* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
memset(&result_85, 0, sizeof(struct sType*));
right_value126 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
        if(self==(void*)0) {
            __result68__ = __result_obj__ = (void*)0;
            return __result68__;
        }
        result_85=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value119,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(self!=((void*)0)) {
            result_85->mClass=self->mClass;
        }
        if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
            __dec_obj29=result_85->mMultipleTypes;
            result_85->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value126=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj29,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value126,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
            __dec_obj31=result_85->mNoSolvedGenericsType;
            result_85->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value129=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value129,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
            __dec_obj32=result_85->mOriginalLoadVarType;
            result_85->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value130=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj32,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value130,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
            __dec_obj33=result_85->mGenericsName;
            result_85->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value131=string_clone(self->mGenericsName))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
            __dec_obj34=result_85->mGenericsTypes;
            result_85->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value132=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj34,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value132,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
            __dec_obj35=result_85->mArrayNum;
            result_85->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value133=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj35,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value133,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_85->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            __dec_obj36=result_85->mParamTypes;
            result_85->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value134=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj36,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value134,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            __dec_obj40=result_85->mParamNames;
            result_85->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value141=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj40,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value141,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            __dec_obj41=result_85->mResultType;
            result_85->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value142=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value142,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_85->mVarArgs=self->mVarArgs;
        }
        if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
            __dec_obj42=result_85->mAlignas;
            result_85->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value143=sNode_clone(self->mAlignas))));
            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value143) { right_value143 = come_decrement_ref_count2(right_value143, ((struct sNode*)right_value143)->finalize, ((struct sNode*)right_value143)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(self!=((void*)0)) {
            result_85->mUnsigned=self->mUnsigned;
        }
        if(self!=((void*)0)) {
            result_85->mShort=self->mShort;
        }
        if(self!=((void*)0)) {
            result_85->mLong=self->mLong;
        }
        if(self!=((void*)0)) {
            result_85->mLongLong=self->mLongLong;
        }
        if(self!=((void*)0)) {
            result_85->mConstant=self->mConstant;
        }
        if(self!=((void*)0)) {
            result_85->mRegister=self->mRegister;
        }
        if(self!=((void*)0)) {
            result_85->mVolatile=self->mVolatile;
        }
        if(self!=((void*)0)) {
            result_85->mStatic=self->mStatic;
        }
        if(self!=((void*)0)) {
            result_85->mUniq=self->mUniq;
        }
        if(self!=((void*)0)) {
            result_85->mRecord=self->mRecord;
        }
        if(self!=((void*)0)) {
            result_85->mExtern=self->mExtern;
        }
        if(self!=((void*)0)) {
            result_85->mRestrict=self->mRestrict;
        }
        if(self!=((void*)0)) {
            result_85->mImmutable=self->mImmutable;
        }
        if(self!=((void*)0)) {
            result_85->mHeap=self->mHeap;
        }
        if(self!=((void*)0)) {
            result_85->mDummyHeap=self->mDummyHeap;
        }
        if(self!=((void*)0)) {
            result_85->mDelegate=self->mDelegate;
        }
        if(self!=((void*)0)) {
            result_85->mShare=self->mShare;
        }
        if(self!=((void*)0)) {
            result_85->mClone=self->mClone;
        }
        if(self!=((void*)0)) {
            result_85->mNoHeap=self->mNoHeap;
        }
        if(self!=((void*)0)) {
            result_85->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(self!=((void*)0)) {
            result_85->mRefference=self->mRefference;
        }
        if(self!=((void*)0)) {
            result_85->mException=self->mException;
        }
        if(self!=((void*)0)) {
            result_85->mPointerNum=self->mPointerNum;
        }
        if(self!=((void*)0)) {
            result_85->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(self!=((void*)0)) {
            result_85->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(self!=((void*)0)) {
            result_85->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
        }
        if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
            __dec_obj43=result_85->mSizeNum;
            result_85->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value144=sNode_clone(self->mSizeNum))));
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value144) { right_value144 = come_decrement_ref_count2(right_value144, ((struct sNode*)right_value144)->finalize, ((struct sNode*)right_value144)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(self!=((void*)0)) {
            result_85->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(self!=((void*)0)) {
            result_85->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
            __dec_obj44=result_85->mOriginalTypeName;
            result_85->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value145=string_clone(self->mOriginalTypeName))));
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_85->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(self!=((void*)0)) {
            result_85->mFunctionParam=self->mFunctionParam;
        }
        if(self!=((void*)0)) {
            result_85->mAllocaValue=self->mAllocaValue;
        }
        if(self!=((void*)0)) {
            result_85->mGenericsStruct=self->mGenericsStruct;
        }
        if(self!=((void*)0)) {
            result_85->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(self!=((void*)0)) {
            result_85->mComeMemCore=self->mComeMemCore;
        }
        if(self!=((void*)0)) {
            result_85->mInline=self->mInline;
        }
        if(self!=((void*)0)) {
            result_85->mNullValue=self->mNullValue;
        }
        if(self!=((void*)0)) {
            result_85->mGuardValue=self->mGuardValue;
        }
        if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
            __dec_obj45=result_85->mAsmName;
            result_85->mAsmName=(char*)come_increment_ref_count(((char*)(right_value146=string_clone(self->mAsmName))));
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_85->mArrayPointerType=self->mArrayPointerType;
        }
        if(self!=((void*)0)) {
            result_85->mLambdaArray=self->mLambdaArray;
        }
        if(self!=((void*)0)) {
            result_85->mNoNumberArray=self->mNoNumberArray;
        }
        __result79__ = __result_obj__ = result_85;
        come_call_finalizer3(result_85,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result79__;
        come_call_finalizer3(result_85,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result69__;
void* right_value120;
void* right_value121;
struct list$1sTypeph* result_86;
struct list_item$1sTypeph* it_87;
void* right_value125;
struct list$1sTypeph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
right_value121 = (void*)0;
memset(&result_86, 0, sizeof(struct list$1sTypeph*));
memset(&it_87, 0, sizeof(struct list_item$1sTypeph*));
right_value125 = (void*)0;
                if(self==((void*)0)) {
                    __result69__ = __result_obj__ = ((void*)0);
                    return __result69__;
                }
                result_86=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value121=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value120=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value120,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value121,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_87=self->head;
                while(it_87!=((void*)0)) {
                    list$1sTypeph_add(result_86,(struct sType*)come_increment_ref_count(((struct sType*)(right_value125=sType_clone(it_87->item)))));
                    come_call_finalizer3(right_value125,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    it_87=it_87->next;
                }
                __result72__ = __result_obj__ = result_86;
                come_call_finalizer3(result_86,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                return __result72__;
                come_call_finalizer3(result_86,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result70__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result70__;
                    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* right_value122;
struct list_item$1sTypeph* litem_88;
struct sType* __dec_obj26;
void* right_value123;
struct list_item$1sTypeph* litem_89;
struct sType* __dec_obj27;
void* right_value124;
struct list_item$1sTypeph* litem_90;
struct sType* __dec_obj28;
struct list$1sTypeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
memset(&litem_88, 0, sizeof(struct list_item$1sTypeph*));
right_value123 = (void*)0;
memset(&litem_89, 0, sizeof(struct list_item$1sTypeph*));
right_value124 = (void*)0;
memset(&litem_90, 0, sizeof(struct list_item$1sTypeph*));
                        if(self->len==0) {
                            litem_88=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value122=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value122,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_88->prev=((void*)0);
                            litem_88->next=((void*)0);
                            __dec_obj26=litem_88->item;
                            litem_88->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer3(__dec_obj26,sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_88;
                            self->head=litem_88;
                        }
                        else {
                            if(self->len==1) {
                                litem_89=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value123=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value123,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_89->prev=self->head;
                                litem_89->next=((void*)0);
                                __dec_obj27=litem_89->item;
                                litem_89->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj27,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_89;
                                self->head->next=litem_89;
                            }
                            else {
                                litem_90=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value124=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value124,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_90->prev=self->tail;
                                litem_90->next=((void*)0);
                                __dec_obj28=litem_90->item;
                                litem_90->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj28,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_90;
                                self->tail=litem_90;
                            }
                        }
                        self->len++;
                        __result71__ = __result_obj__ = self;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                        return __result71__;
                        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_91;
struct list_item$1sTypeph* prev_it_92;
memset(&it_91, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_92, 0, sizeof(struct list_item$1sTypeph*));
                it_91=self->head;
                while(it_91!=((void*)0)) {
                    prev_it_92=it_91;
                    it_91=it_91->next;
                    come_call_finalizer3(prev_it_92,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
struct tuple1$1sTypeph* __result73__;
void* right_value127;
struct tuple1$1sTypeph* result_93;
void* right_value128;
struct sType* __dec_obj30;
struct tuple1$1sTypeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
memset(&result_93, 0, sizeof(struct tuple1$1sTypeph*));
right_value128 = (void*)0;
                if(self==(void*)0) {
                    __result73__ = __result_obj__ = (void*)0;
                    return __result73__;
                }
                result_93=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value127=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value127,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj30=result_93->v1;
                    result_93->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj30,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value128,sType_finalize, 0, 1, 0, 0, __result_obj__);
                }
                __result74__ = __result_obj__ = result_93;
                come_call_finalizer3(result_93,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                return __result74__;
                come_call_finalizer3(result_93,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
                    if(self!=((void*)0)&&self->v1!=((void*)0)) {
                        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result75__;
void* right_value135;
void* right_value136;
struct list$1charph* result_94;
struct list_item$1charph* it_95;
void* right_value140;
struct list$1charph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value135 = (void*)0;
right_value136 = (void*)0;
memset(&result_94, 0, sizeof(struct list$1charph*));
memset(&it_95, 0, sizeof(struct list_item$1charph*));
right_value140 = (void*)0;
                if(self==((void*)0)) {
                    __result75__ = __result_obj__ = ((void*)0);
                    return __result75__;
                }
                result_94=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value136=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value135=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))))));
                come_call_finalizer3(right_value135,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value136,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_95=self->head;
                while(it_95!=((void*)0)) {
                    list$1charph_add(result_94,(char*)come_increment_ref_count(((char*)(right_value140=string_clone(it_95->item)))));
                    right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_95=it_95->next;
                }
                __result78__ = __result_obj__ = result_94;
                come_call_finalizer3(result_94,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result78__;
                come_call_finalizer3(result_94,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result76__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result76__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
void* right_value137;
struct list_item$1charph* litem_96;
char* __dec_obj37;
void* right_value138;
struct list_item$1charph* litem_97;
char* __dec_obj38;
void* right_value139;
struct list_item$1charph* litem_98;
char* __dec_obj39;
struct list$1charph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value137 = (void*)0;
memset(&litem_96, 0, sizeof(struct list_item$1charph*));
right_value138 = (void*)0;
memset(&litem_97, 0, sizeof(struct list_item$1charph*));
right_value139 = (void*)0;
memset(&litem_98, 0, sizeof(struct list_item$1charph*));
                        if(self->len==0) {
                            litem_96=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value137=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
                            come_call_finalizer3(right_value137,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            litem_96->prev=((void*)0);
                            litem_96->next=((void*)0);
                            __dec_obj37=litem_96->item;
                            litem_96->item=(char*)come_increment_ref_count(item);
                            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_96;
                            self->head=litem_96;
                        }
                        else {
                            if(self->len==1) {
                                litem_97=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value138=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
                                come_call_finalizer3(right_value138,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_97->prev=self->head;
                                litem_97->next=((void*)0);
                                __dec_obj38=litem_97->item;
                                litem_97->item=(char*)come_increment_ref_count(item);
                                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_97;
                                self->head->next=litem_97;
                            }
                            else {
                                litem_98=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value139=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
                                come_call_finalizer3(right_value139,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_98->prev=self->tail;
                                litem_98->next=((void*)0);
                                __dec_obj39=litem_98->item;
                                litem_98->item=(char*)come_increment_ref_count(item);
                                __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_98;
                                self->tail=litem_98;
                            }
                        }
                        self->len++;
                        __result77__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result77__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_99;
struct list_item$1charph* prev_it_100;
memset(&it_99, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_100, 0, sizeof(struct list_item$1charph*));
                it_99=self->head;
                while(it_99!=((void*)0)) {
                    prev_it_100=it_99;
                    it_99=it_99->next;
                    come_call_finalizer3(prev_it_100,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__;
void* right_value148;
struct sCharNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
    ((struct sNodeBase*)(right_value148=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value148,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    __result81__ = __result_obj__ = self;
    come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result81__;
    come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sCharNode_kind(struct sCharNode* self){
void* __result_obj__;
void* right_value149;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value149 = (void*)0;
    __result82__ = __result_obj__ = ((char*)(right_value149=__builtin_string("sCharNode")));
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result82__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* right_value150;
void* right_value151;
struct CVALUE* come_value_101;
void* right_value152;
char* __dec_obj47;
void* right_value153;
void* right_value154;
struct sType* __dec_obj48;
_Bool __result83__;
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&come_value_101, 0, sizeof(struct CVALUE*));
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
    come_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value151=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value150=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 133, "CVALUE"))))))));
    come_call_finalizer3(right_value150,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value151,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj47=come_value_101->c_value;
    come_value_101->c_value=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("%d",self->value))));
    __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj48=come_value_101->type;
    come_value_101->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value153=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 136, "sType")))),"char",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value153,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value154,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_101->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_101));
    add_come_last_code(info,"%s;\n",come_value_101->c_value);
    __result83__ = (_Bool)1;
    come_call_finalizer3(come_value_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result83__;
    come_call_finalizer3(come_value_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value155;
struct sWCharNode* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    ((struct sNodeBase*)(right_value155=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value155,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    self->quote=quote;
    __result84__ = __result_obj__ = self;
    come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result84__;
    come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __result_obj__;
void* right_value156;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
    __result85__ = __result_obj__ = ((char*)(right_value156=__builtin_string("sWCharNode")));
    right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result85__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* right_value157;
void* right_value158;
struct CVALUE* come_value_102;
void* right_value159;
char* __dec_obj49;
void* right_value160;
char* __dec_obj50;
void* right_value161;
void* right_value162;
struct sType* __dec_obj51;
_Bool __result86__;
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&come_value_102, 0, sizeof(struct CVALUE*));
right_value159 = (void*)0;
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
    come_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value158=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value157=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 164, "CVALUE"))))))));
    come_call_finalizer3(right_value157,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value158,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    if(self->quote) {
        __dec_obj49=come_value_102->c_value;
        come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("L'\\%o'",self->value))));
        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    else {
        __dec_obj50=come_value_102->c_value;
        come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value160=xsprintf("L'%lc'",self->value))));
        __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    __dec_obj51=come_value_102->type;
    come_value_102->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value161=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 172, "sType")))),"int",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value161,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value162,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_102->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
    add_come_last_code(info,"%s;\n",come_value_102->c_value);
    __result86__ = (_Bool)1;
    come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result86__;
    come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value163;
unsigned int* __dec_obj52;
struct sWStringNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
    ((struct sNodeBase*)(right_value163=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value163,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj52=self->value;
    self->value=(unsigned int*)come_increment_ref_count(value);
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result87__ = __result_obj__ = self;
    come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result87__;
    come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __result_obj__;
void* right_value164;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
    __result88__ = __result_obj__ = ((char*)(right_value164=__builtin_string("sWStringNode")));
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result88__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* right_value165;
void* right_value166;
struct CVALUE* come_value_103;
void* right_value167;
char* __dec_obj53;
void* right_value168;
void* right_value169;
struct sType* __dec_obj54;
_Bool __result89__;
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&come_value_103, 0, sizeof(struct CVALUE*));
right_value167 = (void*)0;
right_value168 = (void*)0;
right_value169 = (void*)0;
    come_value_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value166=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value165=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 199, "CVALUE"))))))));
    come_call_finalizer3(right_value165,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value166,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj53=come_value_103->c_value;
    come_value_103->c_value=(char*)come_increment_ref_count(((char*)(right_value167=xsprintf("L\"%ls\"",self->value))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj54=come_value_103->type;
    come_value_103->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value169=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value168=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 202, "sType")))),"int*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value168,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value169,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_103->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_103));
    add_come_last_code(info,"%s;\n",come_value_103->c_value);
    __result89__ = (_Bool)1;
    come_call_finalizer3(come_value_103,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result89__;
    come_call_finalizer3(come_value_103,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__;
void* right_value170;
void* right_value171;
char* __dec_obj55;
struct sRegexNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
right_value171 = (void*)0;
    ((struct sNodeBase*)(right_value170=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value170,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj55=self->str;
    self->str=(char*)come_increment_ref_count(((char*)(right_value171=__builtin_string(str))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->global=global;
    self->ignore_case=ignore_case;
    __result90__ = __result_obj__ = self;
    come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result90__;
    come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __result_obj__;
void* right_value172;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value172 = (void*)0;
    __result91__ = __result_obj__ = ((char*)(right_value172=__builtin_string("sRegexNode")));
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result91__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* right_value173;
void* right_value174;
struct CVALUE* come_value_104;
void* right_value175;
void* right_value176;
void* right_value177;
void* right_value178;
void* right_value179;
char* __dec_obj56;
void* right_value180;
void* right_value181;
struct sType* __dec_obj57;
void* right_value182;
char* __dec_obj58;
_Bool __result92__;
right_value173 = (void*)0;
right_value174 = (void*)0;
memset(&come_value_104, 0, sizeof(struct CVALUE*));
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
right_value180 = (void*)0;
right_value181 = (void*)0;
right_value182 = (void*)0;
    come_value_104=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value173=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 231, "CVALUE"))))))));
    come_call_finalizer3(right_value173,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value174,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj56=come_value_104->c_value;
    come_value_104->c_value=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("charp_to_regex(\"%s\", %s, 0, %s, 0, 0, 0, 0, 0)",self->str,self->ignore_case?((char*)(right_value175=__builtin_string("1"))):((char*)(right_value176=__builtin_string("0"))),self->global?((char*)(right_value177=__builtin_string("1"))):((char*)(right_value178=__builtin_string("0")))))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj57=come_value_104->type;
    come_value_104->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value181=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value180=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 234, "sType")))),"come_regex",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value180,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value181,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_104->type->mPointerNum=1;
    come_value_104->type->mHeap=(_Bool)1;
    come_value_104->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_104));
    add_come_last_code(info,"%s;\n",come_value_104->c_value);
    __dec_obj58=come_value_104->c_value;
    come_value_104->c_value=(char*)come_increment_ref_count(((char*)(right_value182=append_object_to_right_values(come_value_104->c_value,(struct sType*)come_increment_ref_count(come_value_104->type),info))));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result92__ = (_Bool)1;
    come_call_finalizer3(come_value_104,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result92__;
    come_call_finalizer3(come_value_104,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__;
void* right_value183;
struct list$1sNodeph* __dec_obj59;
struct sListNode* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
    ((struct sNodeBase*)(right_value183=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value183,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj59=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    come_call_finalizer3(__dec_obj59,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result93__ = __result_obj__ = self;
    come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result93__;
    come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

char* sListNode_kind(struct sListNode* self){
void* __result_obj__;
void* right_value184;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
    __result94__ = __result_obj__ = ((char*)(right_value184=__builtin_string("sListNode")));
    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result94__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNodeph* list_elements_105;
void* right_value185;
void* right_value186;
struct list$1CVALUEph* params_106;
struct sType* __dec_obj60;
struct sType* list_element_type_109;
struct list$1sNodeph* o2_saved_110;
struct sNode* it_111;
_Bool __result96__;
void* right_value187;
struct CVALUE* come_value_112;
void* right_value188;
void* right_value189;
struct sType* __dec_obj61;
void* right_value190;
struct sType* type_values_113;
void* right_value194;
void* right_value195;
char* var_name_118;
void* right_value196;
struct sVar* var__119;
void* right_value197;
void* right_value198;
void* right_value199;
struct buffer* source_120;
int i_121;
struct list$1CVALUEph* o2_saved_122;
struct CVALUE* it_125;
void* right_value200;
void* right_value201;
void* right_value202;
void* right_value203;
void* right_value204;
struct sType* list_type_131;
void* right_value208;
void* right_value209;
struct sType* obj_type_135;
char* fun_name_136;
void* right_value210;
void* right_value211;
void* right_value212;
char* generics_fun_name_137;
struct sFun* fun_138;
void* right_value213;
void* right_value214;
char* __dec_obj68;
_Bool __result107__;
void* right_value215;
struct sType* result_type_139;
struct sType* type_140;
void* right_value216;
void* right_value217;
struct CVALUE* obj_value_141;
void* right_value218;
void* right_value219;
struct buffer* num_string_142;
void* right_value220;
struct sType* type2_143;
void* right_value221;
char* type_name_144;
void* right_value222;
void* right_value223;
char* __dec_obj69;
void* right_value224;
struct sType* type3_145;
void* right_value225;
struct sType* __dec_obj70;
void* right_value226;
char* __dec_obj71;
void* right_value227;
void* right_value228;
struct list$1CVALUEph* come_params_146;
void* right_value229;
void* right_value230;
struct CVALUE* come_value2_150;
void* right_value231;
char* __dec_obj72;
struct sType* __dec_obj73;
void* right_value232;
void* right_value233;
struct CVALUE* come_value3_151;
void* right_value234;
char* __dec_obj74;
struct sType* __dec_obj75;
void* right_value235;
void* right_value236;
struct buffer* buf_152;
int j_153;
struct list$1CVALUEph* o2_saved_154;
struct CVALUE* it_155;
void* right_value237;
void* right_value238;
struct CVALUE* come_value4_156;
void* right_value239;
char* __dec_obj76;
void* right_value240;
void* right_value241;
char* __dec_obj77;
void* right_value242;
struct sType* __dec_obj78;
void* right_value243;
_Bool __result110__;
memset(&list_elements_105, 0, sizeof(struct list$1sNodeph*));
right_value185 = (void*)0;
right_value186 = (void*)0;
memset(&params_106, 0, sizeof(struct list$1CVALUEph*));
memset(&list_element_type_109, 0, sizeof(struct sType*));
memset(&o2_saved_110, 0, sizeof(struct list$1sNodeph*));
memset(&it_111, 0, sizeof(struct sNode*));
right_value187 = (void*)0;
memset(&come_value_112, 0, sizeof(struct CVALUE*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
memset(&type_values_113, 0, sizeof(struct sType*));
right_value194 = (void*)0;
right_value195 = (void*)0;
memset(&var_name_118, 0, sizeof(char*));
right_value196 = (void*)0;
memset(&var__119, 0, sizeof(struct sVar*));
right_value197 = (void*)0;
right_value198 = (void*)0;
right_value199 = (void*)0;
memset(&source_120, 0, sizeof(struct buffer*));
memset(&i_121, 0, sizeof(int));
memset(&o2_saved_122, 0, sizeof(struct list$1CVALUEph*));
memset(&it_125, 0, sizeof(struct CVALUE*));
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
memset(&list_type_131, 0, sizeof(struct sType*));
right_value208 = (void*)0;
right_value209 = (void*)0;
memset(&obj_type_135, 0, sizeof(struct sType*));
memset(&fun_name_136, 0, sizeof(char*));
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&generics_fun_name_137, 0, sizeof(char*));
memset(&fun_138, 0, sizeof(struct sFun*));
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
memset(&result_type_139, 0, sizeof(struct sType*));
memset(&type_140, 0, sizeof(struct sType*));
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&obj_value_141, 0, sizeof(struct CVALUE*));
right_value218 = (void*)0;
right_value219 = (void*)0;
memset(&num_string_142, 0, sizeof(struct buffer*));
right_value220 = (void*)0;
memset(&type2_143, 0, sizeof(struct sType*));
right_value221 = (void*)0;
memset(&type_name_144, 0, sizeof(char*));
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
memset(&type3_145, 0, sizeof(struct sType*));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
memset(&come_params_146, 0, sizeof(struct list$1CVALUEph*));
right_value229 = (void*)0;
right_value230 = (void*)0;
memset(&come_value2_150, 0, sizeof(struct CVALUE*));
right_value231 = (void*)0;
right_value232 = (void*)0;
right_value233 = (void*)0;
memset(&come_value3_151, 0, sizeof(struct CVALUE*));
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
memset(&buf_152, 0, sizeof(struct buffer*));
memset(&j_153, 0, sizeof(int));
memset(&o2_saved_154, 0, sizeof(struct list$1CVALUEph*));
memset(&it_155, 0, sizeof(struct CVALUE*));
right_value237 = (void*)0;
right_value238 = (void*)0;
memset(&come_value4_156, 0, sizeof(struct CVALUE*));
right_value239 = (void*)0;
right_value240 = (void*)0;
right_value241 = (void*)0;
right_value242 = (void*)0;
right_value243 = (void*)0;
    list_elements_105=self->list_elements;
    params_106=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value186=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value185=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 267, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value185,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value186,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj60=list_element_type_109;
    list_element_type_109=((void*)0);
    come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_110=(list_elements_105),it_111=list$1sNodeph_begin((o2_saved_110));    !list$1sNodeph_end((o2_saved_110));    it_111=list$1sNodeph_next((o2_saved_110))    ){
        if(!node_compile(it_111,info)) {
            __result96__ = (_Bool)0;
            come_call_finalizer3(params_106,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_element_type_109,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result96__;
        }
        come_value_112=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value187=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value187,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        dec_stack_ptr(1,info);
        if(list_element_type_109) {
            check_assign_type(((char*)(right_value188=xsprintf("invalid list element type"))),list_element_type_109,come_value_112->type,come_value_112,(_Bool)0,(_Bool)1,info);
            right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(params_106,(struct CVALUE*)come_increment_ref_count(come_value_112));
        __dec_obj61=list_element_type_109;
        list_element_type_109=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_clone(come_value_112->type))));
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value189,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(come_value_112,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_values_113=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(list_element_type_109))));
    come_call_finalizer3(right_value190,sType_finalize, 0, 1, 0, 0, (void*)0);
    list$1sNodeph_push_back(type_values_113->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value194=create_int_node(list$1CVALUEph_length(params_106),info)))));
    if(right_value194) { right_value194 = come_decrement_ref_count2(right_value194, ((struct sNode*)right_value194)->finalize, ((struct sNode*)right_value194)->_protocol_obj, 1, 0, 0, (void*)0); } 
    type_values_113->mHeap=(_Bool)0;
    static int list_value_num_117=0;
    var_name_118=(char*)come_increment_ref_count(((char*)(right_value195=xsprintf("__list_values%d__",++list_value_num_117))));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_variable_to_table(var_name_118,(struct sType*)come_increment_ref_count(((struct sType*)(right_value196=sType_clone(type_values_113)))),info);
    come_call_finalizer3(right_value196,sType_finalize, 0, 1, 0, 0, (void*)0);
    var__119=get_variable_from_table(info->lv_table,var_name_118);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value197=make_define_var(type_values_113,var__119->mCValueName,(_Bool)0,info))));
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_120=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value199=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value198=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 300, "buffer"))))))));
    come_call_finalizer3(right_value198,buffer_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value199,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(source_120,"{");
    i_121=0;
    for(    o2_saved_122=(struct list$1CVALUEph*)come_increment_ref_count((params_106)),it_125=list$1CVALUEph_begin((o2_saved_122));    !list$1CVALUEph_end((o2_saved_122));    it_125=list$1CVALUEph_next((o2_saved_122))    ){
        if(list_element_type_109->mHeap) {
            buffer_append_str(source_120,((char*)(right_value200=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__119->mCValueName,i_121,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_106,i_121), "06str.c", 307, 0))->c_value))));
            right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(source_120,((char*)(right_value201=xsprintf("%s[%d]=%s;\n",var__119->mCValueName,i_121,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_106,i_121), "06str.c", 310, 1))->c_value))));
            right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        i_121++;
    }
    come_call_finalizer3(o2_saved_122,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_120,"}");
    add_come_code(info,"%s",((char*)(right_value202=buffer_to_string(source_120))));
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    list_type_131=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value203=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 319, "sType")))),"list",(_Bool)0,info))));
    come_call_finalizer3(right_value203,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value204,sType_finalize, 0, 1, 0, 0, (void*)0);
    list$1sTypeph_push_back(list_type_131->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=sType_clone(list_element_type_109)))));
    come_call_finalizer3(right_value208,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_135=(struct sType*)come_increment_ref_count(((struct sType*)(right_value209=sType_clone(list_type_131))));
    come_call_finalizer3(right_value209,sType_finalize, 0, 1, 0, 0, (void*)0);
    fun_name_136="initialize_with_values";
    generics_fun_name_137=(char*)come_increment_ref_count(((char*)(right_value212=string_to_string(((char*)(right_value211=make_generics_function(obj_type_135,(char*)come_increment_ref_count(((char*)(right_value210=__builtin_string(fun_name_136)))),info,(_Bool)1)))))));
    right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_138=map$2charphsFunph_at(info->funcs,generics_fun_name_137,((void*)0));
    if(fun_138==((void*)0)) {
        __dec_obj68=generics_fun_name_137;
        generics_fun_name_137=(char*)come_increment_ref_count(((char*)(right_value214=create_method_name(obj_type_135,(_Bool)0,((char*)(right_value213=__builtin_string(fun_name_136))),info,(_Bool)1))));
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_138=map$2charphsFunph_at(info->funcs,generics_fun_name_137,((void*)0));
        if(fun_138==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_137,info->come_fun->mName);
            __result107__ = (_Bool)1;
            come_call_finalizer3(params_106,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_element_type_109,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_values_113,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_118 = come_decrement_ref_count2(var_name_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_120,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_type_131,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_135,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_137 = come_decrement_ref_count2(generics_fun_name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result107__;
        }
    }
    result_type_139=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(fun_138->mResultType))));
    come_call_finalizer3(right_value215,sType_finalize, 0, 1, 0, 0, (void*)0);
    result_type_139->mStatic=(_Bool)0;
    type_140=list_type_131;
    obj_value_141=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value217=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value216=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 345, "CVALUE"))))))));
    come_call_finalizer3(right_value216,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value217,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    num_string_142=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value219=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value218=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 347, "buffer"))))))));
    come_call_finalizer3(right_value218,buffer_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value219,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(num_string_142,"1");
    type2_143=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=solve_generics(type_140,type_140,info))));
    come_call_finalizer3(right_value220,sType_finalize, 0, 1, 0, 0, (void*)0);
    type_name_144=(char*)come_increment_ref_count(((char*)(right_value221=make_type_name_string(type2_143,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj69=obj_value_141->c_value;
    obj_value_141->c_value=(char*)come_increment_ref_count(((char*)(right_value223=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_144,type_name_144,((char*)(right_value222=buffer_to_string(num_string_142))),info->sname,info->sline,type_name_144))));
    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_145=(struct sType*)come_increment_ref_count(((struct sType*)(right_value224=sType_clone(type2_143))));
    come_call_finalizer3(right_value224,sType_finalize, 0, 1, 0, 0, (void*)0);
    type3_145->mPointerNum++;
    type3_145->mHeap=(_Bool)1;
    type2_143->mHeap=(_Bool)1;
    __dec_obj70=obj_value_141->type;
    obj_value_141->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(type2_143))));
    come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value225,sType_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj71=obj_value_141->c_value;
    obj_value_141->c_value=(char*)come_increment_ref_count(((char*)(right_value226=append_object_to_right_values(obj_value_141->c_value,(struct sType*)come_increment_ref_count(type3_145),info))));
    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    obj_value_141->type->mPointerNum++;
    obj_value_141->var=((void*)0);
    come_params_146=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value228=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value227=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 366, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value227,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value228,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_138->mParamTypes,0), "06str.c", 368, 2))->mHeap&&obj_value_141->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_138->mParamTypes,0), "06str.c", 369, 3)),obj_value_141->type,obj_value_141,info);
    }
    list$1CVALUEph_push_back(come_params_146,(struct CVALUE*)come_increment_ref_count(obj_value_141));
    come_value2_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value229=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 373, "CVALUE"))))))));
    come_call_finalizer3(right_value229,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value230,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj72=come_value2_150->c_value;
    come_value2_150->c_value=(char*)come_increment_ref_count(((char*)(right_value231=xsprintf("%d",list$1CVALUEph_length(params_106)))));
    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj73=come_value2_150->type;
    come_value2_150->type=((void*)0);
    come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_150->var=((void*)0);
    list$1CVALUEph_push_back(come_params_146,(struct CVALUE*)come_increment_ref_count(come_value2_150));
    come_value3_151=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value233=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value232=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 381, "CVALUE"))))))));
    come_call_finalizer3(right_value232,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value233,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj74=come_value3_151->c_value;
    come_value3_151->c_value=(char*)come_increment_ref_count(((char*)(right_value234=xsprintf("%s",var__119->mCValueName))));
    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj75=come_value3_151->type;
    come_value3_151->type=((void*)0);
    come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_151->var=((void*)0);
    list$1CVALUEph_push_back(come_params_146,(struct CVALUE*)come_increment_ref_count(come_value3_151));
    buf_152=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value236=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value235=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 389, "buffer"))))))));
    come_call_finalizer3(right_value235,buffer_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value236,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(buf_152,generics_fun_name_137);
    buffer_append_str(buf_152,"(");
    j_153=0;
    for(    o2_saved_154=(struct list$1CVALUEph*)come_increment_ref_count((come_params_146)),it_155=list$1CVALUEph_begin((o2_saved_154));    !list$1CVALUEph_end((o2_saved_154));    it_155=list$1CVALUEph_next((o2_saved_154))    ){
        buffer_append_str(buf_152,it_155->c_value);
        if(j_153!=list$1CVALUEph_length(come_params_146)-1) {
            buffer_append_str(buf_152,",");
        }
        j_153++;
    }
    come_call_finalizer3(o2_saved_154,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_152,")");
    come_value4_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value238=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value237=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 406, "CVALUE"))))))));
    come_call_finalizer3(right_value237,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value238,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj76=come_value4_156->c_value;
    come_value4_156->c_value=(char*)come_increment_ref_count(((char*)(right_value239=buffer_to_string(buf_152))));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(result_type_139->mHeap) {
        __dec_obj77=come_value4_156->c_value;
        come_value4_156->c_value=(char*)come_increment_ref_count(((char*)(right_value241=append_object_to_right_values(((char*)(right_value240=buffer_to_string(buf_152))),(struct sType*)come_increment_ref_count(result_type_139),info))));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    __dec_obj78=come_value4_156->type;
    come_value4_156->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_clone(result_type_139))));
    come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value242,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value4_156->type->mStatic=(_Bool)0;
    come_value4_156->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value243=buffer_to_string(buf_152))));
    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_156));
    __result110__ = (_Bool)1;
    come_call_finalizer3(params_106,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_element_type_109,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_values_113,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_118 = come_decrement_ref_count2(var_name_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_120,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_type_131,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_135,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_137 = come_decrement_ref_count2(generics_fun_name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_139,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_142,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_143,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_144 = come_decrement_ref_count2(type_name_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_145,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_146,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_152,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result110__;
    come_call_finalizer3(params_106,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_element_type_109,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_values_113,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_118 = come_decrement_ref_count2(var_name_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_120,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_type_131,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_135,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_137 = come_decrement_ref_count2(generics_fun_name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_139,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_142,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_143,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_144 = come_decrement_ref_count2(type_name_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_145,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_146,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_152,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_156,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result95__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result95__;
        come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_107;
struct list_item$1CVALUEph* prev_it_108;
memset(&it_107, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_108, 0, sizeof(struct list_item$1CVALUEph*));
            it_107=self->head;
            while(it_107!=((void*)0)) {
                prev_it_108=it_107;
                it_107=it_107->next;
                come_call_finalizer3(prev_it_108,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* right_value191;
struct list_item$1sNodeph* litem_114;
struct sNode* __dec_obj62;
void* right_value192;
struct list_item$1sNodeph* litem_115;
struct sNode* __dec_obj63;
void* right_value193;
struct list_item$1sNodeph* litem_116;
struct sNode* __dec_obj64;
struct list$1sNodeph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value191 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1sNodeph*));
right_value192 = (void*)0;
memset(&litem_115, 0, sizeof(struct list_item$1sNodeph*));
right_value193 = (void*)0;
memset(&litem_116, 0, sizeof(struct list_item$1sNodeph*));
        if(self->len==0) {
            litem_114=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value191=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 219, "list_item$1sNodeph"))));
            come_call_finalizer3(right_value191,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_114->prev=((void*)0);
            litem_114->next=((void*)0);
            __dec_obj62=litem_114->item;
            litem_114->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_114;
            self->head=litem_114;
        }
        else {
            if(self->len==1) {
                litem_115=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value192=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 229, "list_item$1sNodeph"))));
                come_call_finalizer3(right_value192,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_115->prev=self->head;
                litem_115->next=((void*)0);
                __dec_obj63=litem_115->item;
                litem_115->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); }
                self->tail=litem_115;
                self->head->next=litem_115;
            }
            else {
                litem_116=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value193=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 239, "list_item$1sNodeph"))));
                come_call_finalizer3(right_value193,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_116->prev=self->tail;
                litem_116->next=((void*)0);
                __dec_obj64=litem_116->item;
                litem_116->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); }
                self->tail->next=litem_116;
                self->tail=litem_116;
            }
        }
        self->len++;
        __result97__ = __result_obj__ = self;
        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result97__;
        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
        if(self==((void*)0)) {
            return 0;
        }
        return self->len;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
struct CVALUE* result_123;
struct CVALUE* __result98__;
struct CVALUE* __result99__;
struct CVALUE* result_124;
struct CVALUE* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_123, 0, sizeof(struct CVALUE*));
memset(&result_124, 0, sizeof(struct CVALUE*));
        if(self==((void*)0)) {
            memset(&result_123,0,sizeof(struct CVALUE*));
            __result98__ = __result_obj__ = result_123;
            return __result98__;
        }
        self->it=self->head;
        if(self->it) {
            __result99__ = __result_obj__ = self->it->item;
            return __result99__;
        }
        memset(&result_124,0,sizeof(struct CVALUE*));
        __result100__ = __result_obj__ = result_124;
        return __result100__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
        return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
struct CVALUE* result_126;
struct CVALUE* __result101__;
struct CVALUE* __result102__;
struct CVALUE* result_127;
struct CVALUE* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_126, 0, sizeof(struct CVALUE*));
memset(&result_127, 0, sizeof(struct CVALUE*));
        if(self==((void*)0)||self->it==((void*)0)) {
            memset(&result_126,0,sizeof(struct CVALUE*));
            __result101__ = __result_obj__ = result_126;
            return __result101__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result102__ = __result_obj__ = self->it->item;
            return __result102__;
        }
        memset(&result_127,0,sizeof(struct CVALUE*));
        __result103__ = __result_obj__ = result_127;
        return __result103__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
struct list_item$1CVALUEph* it_128;
int i_129;
struct CVALUE* __result104__;
struct CVALUE* default_value_130;
struct CVALUE* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_128, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_129, 0, sizeof(int));
memset(&default_value_130, 0, sizeof(struct CVALUE*));
                if(position<0) {
                    position+=self->len;
                }
                it_128=self->head;
                i_129=0;
                while(it_128!=((void*)0)) {
                    if(position==i_129) {
                        __result104__ = __result_obj__ = it_128->item;
                        return __result104__;
                    }
                    it_128=it_128->next;
                    i_129++;
                }
                memset(&default_value_130,0,sizeof(struct CVALUE*));
                __result105__ = __result_obj__ = default_value_130;
                come_call_finalizer3(default_value_130,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
                return __result105__;
                come_call_finalizer3(default_value_130,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* right_value205;
struct list_item$1sTypeph* litem_132;
struct sType* __dec_obj65;
void* right_value206;
struct list_item$1sTypeph* litem_133;
struct sType* __dec_obj66;
void* right_value207;
struct list_item$1sTypeph* litem_134;
struct sType* __dec_obj67;
struct list$1sTypeph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
memset(&litem_132, 0, sizeof(struct list_item$1sTypeph*));
right_value206 = (void*)0;
memset(&litem_133, 0, sizeof(struct list_item$1sTypeph*));
right_value207 = (void*)0;
memset(&litem_134, 0, sizeof(struct list_item$1sTypeph*));
        if(self->len==0) {
            litem_132=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value205=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 219, "list_item$1sTypeph"))));
            come_call_finalizer3(right_value205,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_132->prev=((void*)0);
            litem_132->next=((void*)0);
            __dec_obj65=litem_132->item;
            litem_132->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_132;
            self->head=litem_132;
        }
        else {
            if(self->len==1) {
                litem_133=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value206=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 229, "list_item$1sTypeph"))));
                come_call_finalizer3(right_value206,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_133->prev=self->head;
                litem_133->next=((void*)0);
                __dec_obj66=litem_133->item;
                litem_133->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_133;
                self->head->next=litem_133;
            }
            else {
                litem_134=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value207=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 239, "list_item$1sTypeph"))));
                come_call_finalizer3(right_value207,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_134->prev=self->tail;
                litem_134->next=((void*)0);
                __dec_obj67=litem_134->item;
                litem_134->item=(struct sType*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_134;
                self->tail=litem_134;
            }
        }
        self->len++;
        __result106__ = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result106__;
        come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
struct list_item$1sTypeph* it_147;
int i_148;
struct sType* __result108__;
struct sType* default_value_149;
struct sType* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_147, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_148, 0, sizeof(int));
memset(&default_value_149, 0, sizeof(struct sType*));
        if(position<0) {
            position+=self->len;
        }
        it_147=self->head;
        i_148=0;
        while(it_147!=((void*)0)) {
            if(position==i_148) {
                __result108__ = __result_obj__ = it_147->item;
                return __result108__;
            }
            it_147=it_147->next;
            i_148++;
        }
        memset(&default_value_149,0,sizeof(struct sType*));
        __result109__ = __result_obj__ = default_value_149;
        come_call_finalizer3(default_value_149,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result109__;
        come_call_finalizer3(default_value_149,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__;
void* right_value244;
struct list$1sNodeph* __dec_obj79;
struct sTupleNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
    ((struct sNodeBase*)(right_value244=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value244,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj79=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj79,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result111__ = __result_obj__ = self;
    come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result111__;
    come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __result_obj__;
void* right_value245;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
    __result112__ = __result_obj__ = ((char*)(right_value245=__builtin_string("sTupleNode")));
    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result112__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_157;
void* right_value246;
void* right_value247;
struct list$1sTypeph* tuple_types_158;
void* right_value248;
void* right_value249;
struct list$1CVALUEph* tuple_values_159;
struct list$1sNodeph* o2_saved_160;
struct sNode* it_161;
_Bool __result113__;
void* right_value250;
struct CVALUE* come_value_162;
void* right_value265;
void* right_value266;
void* right_value267;
void* right_value268;
void* right_value269;
struct sType* type_172;
struct list$1sTypeph* o2_saved_173;
struct sType* it_176;
void* right_value270;
void* right_value271;
void* right_value272;
struct CVALUE* obj_value_179;
void* right_value273;
void* right_value274;
struct buffer* num_string_180;
void* right_value275;
struct sType* type2_181;
void* right_value276;
char* type_name_182;
void* right_value277;
void* right_value278;
char* __dec_obj86;
void* right_value279;
struct sType* type3_183;
void* right_value280;
struct sType* __dec_obj87;
void* right_value281;
char* __dec_obj88;
void* right_value282;
struct sType* obj_type_184;
char* fun_name_185;
void* right_value283;
void* right_value284;
void* right_value285;
char* generics_fun_name_186;
struct sFun* fun_187;
void* right_value286;
void* right_value287;
char* __dec_obj89;
_Bool __result128__;
void* right_value288;
struct sType* result_type_188;
void* right_value289;
void* right_value290;
struct list$1CVALUEph* come_params_189;
int i_190;
struct list$1CVALUEph* o2_saved_191;
struct CVALUE* it_192;
void* right_value291;
struct CVALUE* come_value_193;
void* right_value292;
void* right_value293;
struct buffer* buf_194;
int j_195;
struct list$1CVALUEph* o2_saved_196;
struct CVALUE* it_197;
void* right_value294;
void* right_value295;
struct CVALUE* come_value2_198;
void* right_value296;
char* __dec_obj90;
void* right_value297;
void* right_value298;
char* __dec_obj91;
void* right_value299;
struct sType* __dec_obj92;
void* right_value300;
_Bool __result129__;
memset(&tuple_elements_157, 0, sizeof(struct list$1sNodeph*));
right_value246 = (void*)0;
right_value247 = (void*)0;
memset(&tuple_types_158, 0, sizeof(struct list$1sTypeph*));
right_value248 = (void*)0;
right_value249 = (void*)0;
memset(&tuple_values_159, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_160, 0, sizeof(struct list$1sNodeph*));
memset(&it_161, 0, sizeof(struct sNode*));
right_value250 = (void*)0;
memset(&come_value_162, 0, sizeof(struct CVALUE*));
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
right_value269 = (void*)0;
memset(&type_172, 0, sizeof(struct sType*));
memset(&o2_saved_173, 0, sizeof(struct list$1sTypeph*));
memset(&it_176, 0, sizeof(struct sType*));
right_value270 = (void*)0;
right_value271 = (void*)0;
right_value272 = (void*)0;
memset(&obj_value_179, 0, sizeof(struct CVALUE*));
right_value273 = (void*)0;
right_value274 = (void*)0;
memset(&num_string_180, 0, sizeof(struct buffer*));
right_value275 = (void*)0;
memset(&type2_181, 0, sizeof(struct sType*));
right_value276 = (void*)0;
memset(&type_name_182, 0, sizeof(char*));
right_value277 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
memset(&type3_183, 0, sizeof(struct sType*));
right_value280 = (void*)0;
right_value281 = (void*)0;
right_value282 = (void*)0;
memset(&obj_type_184, 0, sizeof(struct sType*));
memset(&fun_name_185, 0, sizeof(char*));
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&generics_fun_name_186, 0, sizeof(char*));
memset(&fun_187, 0, sizeof(struct sFun*));
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
memset(&result_type_188, 0, sizeof(struct sType*));
right_value289 = (void*)0;
right_value290 = (void*)0;
memset(&come_params_189, 0, sizeof(struct list$1CVALUEph*));
memset(&i_190, 0, sizeof(int));
memset(&o2_saved_191, 0, sizeof(struct list$1CVALUEph*));
memset(&it_192, 0, sizeof(struct CVALUE*));
right_value291 = (void*)0;
memset(&come_value_193, 0, sizeof(struct CVALUE*));
right_value292 = (void*)0;
right_value293 = (void*)0;
memset(&buf_194, 0, sizeof(struct buffer*));
memset(&j_195, 0, sizeof(int));
memset(&o2_saved_196, 0, sizeof(struct list$1CVALUEph*));
memset(&it_197, 0, sizeof(struct CVALUE*));
right_value294 = (void*)0;
right_value295 = (void*)0;
memset(&come_value2_198, 0, sizeof(struct CVALUE*));
right_value296 = (void*)0;
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
    tuple_elements_157=self->tuple_elements;
    tuple_types_158=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value247=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value246=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 443, "list$1sTypeph"))))))));
    come_call_finalizer3(right_value246,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value247,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
    tuple_values_159=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value249=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value248=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 444, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value248,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value249,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_160=(tuple_elements_157),it_161=list$1sNodeph_begin((o2_saved_160));    !list$1sNodeph_end((o2_saved_160));    it_161=list$1sNodeph_next((o2_saved_160))    ){
        if(!node_compile(it_161,info)) {
            __result113__ = (_Bool)0;
            come_call_finalizer3(tuple_types_158,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_159,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result113__;
        }
        come_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value250=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value250,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_159,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value265=CVALUE_clone(come_value_162)))));
        come_call_finalizer3(right_value265,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        list$1sTypeph_push_back(tuple_types_158,(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=sType_clone(come_value_162->type)))));
        come_call_finalizer3(right_value266,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(come_value_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_172=(struct sType*)come_increment_ref_count(((struct sType*)(right_value269=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value267=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 458, "sType")))),((char*)(right_value268=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_158)))),(_Bool)0,info))));
    come_call_finalizer3(right_value267,sType_finalize, 0, 1, 0, 0, (void*)0);
    right_value268 = come_decrement_ref_count2(right_value268, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value269,sType_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_173=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_158)),it_176=list$1sTypeph_begin((o2_saved_173));    !list$1sTypeph_end((o2_saved_173));    it_176=list$1sTypeph_next((o2_saved_173))    ){
        list$1sTypeph_push_back(type_172->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value270=sType_clone(it_176)))));
        come_call_finalizer3(right_value270,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_173,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_179=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value272=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value271=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 464, "CVALUE"))))))));
    come_call_finalizer3(right_value271,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value272,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    num_string_180=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value274=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value273=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 466, "buffer"))))))));
    come_call_finalizer3(right_value273,buffer_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value274,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(num_string_180,"1");
    type2_181=(struct sType*)come_increment_ref_count(((struct sType*)(right_value275=solve_generics(type_172,type_172,info))));
    come_call_finalizer3(right_value275,sType_finalize, 0, 1, 0, 0, (void*)0);
    type_name_182=(char*)come_increment_ref_count(((char*)(right_value276=make_type_name_string(type2_181,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj86=obj_value_179->c_value;
    obj_value_179->c_value=(char*)come_increment_ref_count(((char*)(right_value278=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_182,type_name_182,((char*)(right_value277=buffer_to_string(num_string_180))),info->sname,info->sline,type_name_182))));
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value278 = come_decrement_ref_count2(right_value278, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_183=(struct sType*)come_increment_ref_count(((struct sType*)(right_value279=sType_clone(type2_181))));
    come_call_finalizer3(right_value279,sType_finalize, 0, 1, 0, 0, (void*)0);
    type3_183->mPointerNum++;
    type3_183->mHeap=(_Bool)1;
    type2_181->mHeap=(_Bool)1;
    __dec_obj87=obj_value_179->type;
    obj_value_179->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value280=sType_clone(type2_181))));
    come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value280,sType_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj88=obj_value_179->c_value;
    obj_value_179->c_value=(char*)come_increment_ref_count(((char*)(right_value281=append_object_to_right_values(obj_value_179->c_value,(struct sType*)come_increment_ref_count(type3_183),info))));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    obj_value_179->type->mPointerNum++;
    obj_value_179->var=((void*)0);
    obj_type_184=(struct sType*)come_increment_ref_count(((struct sType*)(right_value282=sType_clone(type2_181))));
    come_call_finalizer3(right_value282,sType_finalize, 0, 1, 0, 0, (void*)0);
    fun_name_185="initialize";
    generics_fun_name_186=(char*)come_increment_ref_count(((char*)(right_value285=string_to_string(((char*)(right_value284=make_generics_function(obj_type_184,(char*)come_increment_ref_count(((char*)(right_value283=__builtin_string(fun_name_185)))),info,(_Bool)1)))))));
    right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_187=map$2charphsFunph_at(info->funcs,generics_fun_name_186,((void*)0));
    if(fun_187==((void*)0)) {
        __dec_obj89=generics_fun_name_186;
        generics_fun_name_186=(char*)come_increment_ref_count(((char*)(right_value287=create_method_name(obj_type_184,(_Bool)0,((char*)(right_value286=__builtin_string(fun_name_185))),info,(_Bool)1))));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_187=map$2charphsFunph_at(info->funcs,generics_fun_name_186,((void*)0));
        if(fun_187==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_186,info->come_fun->mName);
            __result128__ = (_Bool)1;
            come_call_finalizer3(tuple_types_158,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_159,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_172,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_179,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_180,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_181,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_182 = come_decrement_ref_count2(type_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_183,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_184,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_186 = come_decrement_ref_count2(generics_fun_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result128__;
        }
    }
    result_type_188=(struct sType*)come_increment_ref_count(((struct sType*)(right_value288=sType_clone(fun_187->mResultType))));
    come_call_finalizer3(right_value288,sType_finalize, 0, 1, 0, 0, (void*)0);
    result_type_188->mStatic=(_Bool)0;
    come_params_189=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value290=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value289=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 506, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value289,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value290,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_187->mParamTypes,0), "06str.c", 508, 4))->mHeap&&obj_value_179->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_187->mParamTypes,0), "06str.c", 509, 5)),obj_value_179->type,obj_value_179,info);
    }
    list$1CVALUEph_push_back(come_params_189,(struct CVALUE*)come_increment_ref_count(obj_value_179));
    i_190=1;
    for(    o2_saved_191=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_159)),it_192=list$1CVALUEph_begin((o2_saved_191));    !list$1CVALUEph_end((o2_saved_191));    it_192=list$1CVALUEph_next((o2_saved_191))    ){
        come_value_193=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value291=CVALUE_clone(it_192))));
        come_call_finalizer3(right_value291,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_187->mParamTypes,i_190), "06str.c", 517, 6))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_187->mParamTypes,i_190), "06str.c", 517, 7))->mHeap&&come_value_193->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_187->mParamTypes,i_190), "06str.c", 518, 8)),come_value_193->type,come_value_193,info);
        }
        list$1CVALUEph_push_back(come_params_189,(struct CVALUE*)come_increment_ref_count(come_value_193));
        i_190++;
        come_call_finalizer3(come_value_193,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_191,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_194=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value293=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value292=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 525, "buffer"))))))));
    come_call_finalizer3(right_value292,buffer_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value293,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(buf_194,generics_fun_name_186);
    buffer_append_str(buf_194,"(");
    j_195=0;
    for(    o2_saved_196=(struct list$1CVALUEph*)come_increment_ref_count((come_params_189)),it_197=list$1CVALUEph_begin((o2_saved_196));    !list$1CVALUEph_end((o2_saved_196));    it_197=list$1CVALUEph_next((o2_saved_196))    ){
        buffer_append_str(buf_194,it_197->c_value);
        if(j_195!=list$1CVALUEph_length(come_params_189)-1) {
            buffer_append_str(buf_194,",");
        }
        j_195++;
    }
    come_call_finalizer3(o2_saved_196,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_194,")");
    come_value2_198=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value295=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value294=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 542, "CVALUE"))))))));
    come_call_finalizer3(right_value294,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value295,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj90=come_value2_198->c_value;
    come_value2_198->c_value=(char*)come_increment_ref_count(((char*)(right_value296=buffer_to_string(buf_194))));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(result_type_188->mHeap) {
        __dec_obj91=come_value2_198->c_value;
        come_value2_198->c_value=(char*)come_increment_ref_count(((char*)(right_value298=append_object_to_right_values(((char*)(right_value297=buffer_to_string(buf_194))),(struct sType*)come_increment_ref_count(result_type_188),info))));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    __dec_obj92=come_value2_198->type;
    come_value2_198->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value299=sType_clone(result_type_188))));
    come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value299,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value2_198->type->mStatic=(_Bool)0;
    come_value2_198->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value300=buffer_to_string(buf_194))));
    right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_198));
    __result129__ = (_Bool)1;
    come_call_finalizer3(tuple_types_158,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_159,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_172,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_179,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_180,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_181,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_182 = come_decrement_ref_count2(type_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_183,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_184,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_186 = come_decrement_ref_count2(generics_fun_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_188,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_189,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_194,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_198,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result129__;
    come_call_finalizer3(tuple_types_158,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_159,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_172,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_179,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_180,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_181,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_182 = come_decrement_ref_count2(type_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_183,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_184,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_186 = come_decrement_ref_count2(generics_fun_name_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_188,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_189,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_194,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_198,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
struct CVALUE* __result114__;
void* right_value251;
struct CVALUE* result_163;
void* right_value252;
char* __dec_obj80;
void* right_value253;
struct sType* __dec_obj81;
void* right_value264;
struct list$1sRightValueObjectp* __dec_obj85;
struct CVALUE* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value251 = (void*)0;
memset(&result_163, 0, sizeof(struct CVALUE*));
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value264 = (void*)0;
            if(self==(void*)0) {
                __result114__ = __result_obj__ = (void*)0;
                return __result114__;
            }
            result_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value251=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"))));
            come_call_finalizer3(right_value251,CVALUE_finalize, 0, 1, 0, 0, __result_obj__);
            if(self!=((void*)0)&&self->c_value!=((void*)0)) {
                __dec_obj80=result_163->c_value;
                result_163->c_value=(char*)come_increment_ref_count(((char*)(right_value252=string_clone(self->c_value))));
                __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                __dec_obj81=result_163->type;
                result_163->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=sType_clone(self->type))));
                come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value253,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            if(self!=((void*)0)) {
                result_163->var=self->var;
            }
            if(self!=((void*)0)&&self->right_values!=((void*)0)) {
                __dec_obj85=result_163->right_values;
                result_163->right_values=(struct list$1sRightValueObjectp*)come_increment_ref_count(((struct list$1sRightValueObjectp*)(right_value264=list$1sRightValueObjectpp_clone(self->right_values))));
                come_call_finalizer3(__dec_obj85,list$1sRightValueObjectp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value264,list$1sRightValueObjectpp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            __result121__ = __result_obj__ = result_163;
            come_call_finalizer3(result_163,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result121__;
            come_call_finalizer3(result_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sRightValueObjectp* list$1sRightValueObjectpp_clone(struct list$1sRightValueObjectp* self){
void* __result_obj__;
struct list$1sRightValueObjectp* __result115__;
void* right_value254;
void* right_value255;
struct list$1sRightValueObjectp* result_164;
struct list_item$1sRightValueObjectp* it_165;
void* right_value263;
struct list$1sRightValueObjectp* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value254 = (void*)0;
right_value255 = (void*)0;
memset(&result_164, 0, sizeof(struct list$1sRightValueObjectp*));
memset(&it_165, 0, sizeof(struct list_item$1sRightValueObjectp*));
right_value263 = (void*)0;
                    if(self==((void*)0)) {
                        __result115__ = __result_obj__ = ((void*)0);
                        return __result115__;
                    }
                    result_164=(struct list$1sRightValueObjectp*)come_increment_ref_count(((struct list$1sRightValueObjectp*)(right_value255=list$1sRightValueObjectp_initialize((struct list$1sRightValueObjectp*)come_increment_ref_count(((struct list$1sRightValueObjectp*)(right_value254=(struct list$1sRightValueObjectp*)come_calloc(1, sizeof(struct list$1sRightValueObjectp)*(1), "./neo-c.h", 135, "list$1sRightValueObjectp"))))))));
                    come_call_finalizer3(right_value254,list$1sRightValueObjectpp_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value255,list$1sRightValueObjectpp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_165=self->head;
                    while(it_165!=((void*)0)) {
                        list$1sRightValueObjectp_add(result_164,((struct sRightValueObject*)(right_value263=sRightValueObject_clone(it_165->item))));
                        come_call_finalizer3(right_value263,sRightValueObject_finalize, 0, 1, 0, 0, __result_obj__);
                        it_165=it_165->next;
                    }
                    __result120__ = __result_obj__ = result_164;
                    come_call_finalizer3(result_164,list$1sRightValueObjectpp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result120__;
                    come_call_finalizer3(result_164,list$1sRightValueObjectpp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sRightValueObjectp* list$1sRightValueObjectp_initialize(struct list$1sRightValueObjectp* self){
void* __result_obj__;
struct list$1sRightValueObjectp* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result116__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1sRightValueObjectpp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result116__;
                        come_call_finalizer3(self,list$1sRightValueObjectpp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sRightValueObjectp* list$1sRightValueObjectp_add(struct list$1sRightValueObjectp* self, struct sRightValueObject* item){
void* __result_obj__;
void* right_value256;
struct list_item$1sRightValueObjectp* litem_166;
void* right_value257;
struct list_item$1sRightValueObjectp* litem_167;
void* right_value258;
struct list_item$1sRightValueObjectp* litem_168;
struct list$1sRightValueObjectp* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value256 = (void*)0;
memset(&litem_166, 0, sizeof(struct list_item$1sRightValueObjectp*));
right_value257 = (void*)0;
memset(&litem_167, 0, sizeof(struct list_item$1sRightValueObjectp*));
right_value258 = (void*)0;
memset(&litem_168, 0, sizeof(struct list_item$1sRightValueObjectp*));
                            if(self->len==0) {
                                litem_166=(struct list_item$1sRightValueObjectp*)come_increment_ref_count(((struct list_item$1sRightValueObjectp*)(right_value256=(struct list_item$1sRightValueObjectp*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectp)*(1), "./neo-c.h", 149, "list_item$1sRightValueObjectp"))));
                                come_call_finalizer3(right_value256,list_item$1sRightValueObjectpp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_166->prev=((void*)0);
                                litem_166->next=((void*)0);
                                litem_166->item=item;
                                self->tail=litem_166;
                                self->head=litem_166;
                            }
                            else {
                                if(self->len==1) {
                                    litem_167=(struct list_item$1sRightValueObjectp*)come_increment_ref_count(((struct list_item$1sRightValueObjectp*)(right_value257=(struct list_item$1sRightValueObjectp*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectp)*(1), "./neo-c.h", 159, "list_item$1sRightValueObjectp"))));
                                    come_call_finalizer3(right_value257,list_item$1sRightValueObjectpp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_167->prev=self->head;
                                    litem_167->next=((void*)0);
                                    litem_167->item=item;
                                    self->tail=litem_167;
                                    self->head->next=litem_167;
                                }
                                else {
                                    litem_168=(struct list_item$1sRightValueObjectp*)come_increment_ref_count(((struct list_item$1sRightValueObjectp*)(right_value258=(struct list_item$1sRightValueObjectp*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectp)*(1), "./neo-c.h", 169, "list_item$1sRightValueObjectp"))));
                                    come_call_finalizer3(right_value258,list_item$1sRightValueObjectpp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_168->prev=self->tail;
                                    litem_168->next=((void*)0);
                                    litem_168->item=item;
                                    self->tail->next=litem_168;
                                    self->tail=litem_168;
                                }
                            }
                            self->len++;
                            __result117__ = __result_obj__ = self;
                            return __result117__;
}

static struct sRightValueObject* sRightValueObject_clone(struct sRightValueObject* self){
void* __result_obj__;
struct sRightValueObject* __result118__;
void* right_value259;
struct sRightValueObject* result_169;
void* right_value260;
struct sType* __dec_obj82;
void* right_value261;
char* __dec_obj83;
void* right_value262;
char* __dec_obj84;
struct sRightValueObject* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value259 = (void*)0;
memset(&result_169, 0, sizeof(struct sRightValueObject*));
right_value260 = (void*)0;
right_value261 = (void*)0;
right_value262 = (void*)0;
                            if(self==(void*)0) {
                                __result118__ = __result_obj__ = (void*)0;
                                return __result118__;
                            }
                            result_169=(struct sRightValueObject*)come_increment_ref_count(((struct sRightValueObject*)(right_value259=(struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "sRightValueObject_clone", 3, "sRightValueObject"))));
                            come_call_finalizer3(right_value259,sRightValueObject_finalize, 0, 1, 0, 0, __result_obj__);
                            if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                __dec_obj82=result_169->mType;
                                result_169->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value260=sType_clone(self->mType))));
                                come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value260,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            }
                            if(self!=((void*)0)&&self->mVarName!=((void*)0)) {
                                __dec_obj83=result_169->mVarName;
                                result_169->mVarName=(char*)come_increment_ref_count(((char*)(right_value261=string_clone(self->mVarName))));
                                __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
                                __dec_obj84=result_169->mFunName;
                                result_169->mFunName=(char*)come_increment_ref_count(((char*)(right_value262=string_clone(self->mFunName))));
                                __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(self!=((void*)0)) {
                                result_169->mFreed=self->mFreed;
                            }
                            if(self!=((void*)0)) {
                                result_169->mID=self->mID;
                            }
                            if(self!=((void*)0)) {
                                result_169->mBlockLevel=self->mBlockLevel;
                            }
                            __result119__ = __result_obj__ = result_169;
                            come_call_finalizer3(result_169,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
                            return __result119__;
                            come_call_finalizer3(result_169,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sRightValueObjectp* it_170;
struct list_item$1sRightValueObjectp* prev_it_171;
memset(&it_170, 0, sizeof(struct list_item$1sRightValueObjectp*));
memset(&prev_it_171, 0, sizeof(struct list_item$1sRightValueObjectp*));
                    it_170=self->head;
                    while(it_170!=((void*)0)) {
                        prev_it_171=it_170;
                        it_170=it_170->next;
                        come_call_finalizer3(prev_it_171,list_item$1sRightValueObjectpp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
struct sType* result_174;
struct sType* __result122__;
struct sType* __result123__;
struct sType* result_175;
struct sType* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_174, 0, sizeof(struct sType*));
memset(&result_175, 0, sizeof(struct sType*));
        if(self==((void*)0)) {
            memset(&result_174,0,sizeof(struct sType*));
            __result122__ = __result_obj__ = result_174;
            return __result122__;
        }
        self->it=self->head;
        if(self->it) {
            __result123__ = __result_obj__ = self->it->item;
            return __result123__;
        }
        memset(&result_175,0,sizeof(struct sType*));
        __result124__ = __result_obj__ = result_175;
        return __result124__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
        return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
struct sType* result_177;
struct sType* __result125__;
struct sType* __result126__;
struct sType* result_178;
struct sType* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_177, 0, sizeof(struct sType*));
memset(&result_178, 0, sizeof(struct sType*));
        if(self==((void*)0)||self->it==((void*)0)) {
            memset(&result_177,0,sizeof(struct sType*));
            __result125__ = __result_obj__ = result_177;
            return __result125__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result126__ = __result_obj__ = self->it->item;
            return __result126__;
        }
        memset(&result_178,0,sizeof(struct sType*));
        __result127__ = __result_obj__ = result_178;
        return __result127__;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__;
void* right_value301;
struct list$1sNodeph* __dec_obj93;
struct list$1sNodeph* __dec_obj94;
struct sMapNode* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value301 = (void*)0;
    ((struct sNodeBase*)(right_value301=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value301,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj93=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer3(__dec_obj93,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj94=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    come_call_finalizer3(__dec_obj94,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result130__ = __result_obj__ = self;
    come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result130__;
    come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

char* sMapNode_kind(struct sMapNode* self){
void* __result_obj__;
void* right_value302;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value302 = (void*)0;
    __result131__ = __result_obj__ = ((char*)(right_value302=__builtin_string("sMapNode")));
    right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result131__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNodeph* map_key_elements_199;
struct list$1sNodeph* map_elements_200;
void* right_value303;
void* right_value304;
struct list$1CVALUEph* key_params_201;
void* right_value305;
void* right_value306;
struct list$1CVALUEph* element_params_202;
struct sType* __dec_obj95;
struct sType* map_key_type_203;
struct sType* __dec_obj96;
struct sType* map_element_type_204;
int i_205;
struct sNode* key_elements_206;
struct sNode* elements_210;
_Bool __result134__;
void* right_value307;
struct CVALUE* come_value_211;
void* right_value308;
_Bool __result135__;
void* right_value309;
struct CVALUE* come_value2_212;
void* right_value310;
void* right_value311;
struct sType* __dec_obj97;
void* right_value312;
struct sType* __dec_obj98;
void* right_value313;
struct sType* key_type_values_214;
void* right_value314;
void* right_value315;
char* var_name_215;
void* right_value316;
struct sVar* var__216;
void* right_value317;
void* right_value318;
struct sType* element_type_values_217;
void* right_value319;
void* right_value320;
char* var_name2_218;
void* right_value321;
struct sVar* var2__219;
void* right_value322;
void* right_value323;
void* right_value324;
struct buffer* source_220;
int i_221;
struct CVALUE* key_param_222;
struct CVALUE* element_param_223;
void* right_value325;
void* right_value326;
void* right_value327;
void* right_value328;
void* right_value329;
void* right_value330;
void* right_value331;
struct sType* map_type_224;
void* right_value332;
void* right_value333;
void* right_value334;
struct sType* obj_type_225;
char* fun_name_226;
void* right_value335;
void* right_value336;
void* right_value337;
char* generics_fun_name_227;
struct sFun* fun_228;
void* right_value338;
void* right_value339;
char* __dec_obj99;
_Bool __result136__;
void* right_value340;
struct sType* result_type_229;
struct sType* type_230;
void* right_value341;
void* right_value342;
struct CVALUE* obj_value_231;
void* right_value343;
void* right_value344;
struct buffer* num_string_232;
void* right_value345;
struct sType* type2_233;
void* right_value346;
char* type_name_234;
void* right_value347;
void* right_value348;
char* __dec_obj100;
void* right_value349;
struct sType* type3_235;
void* right_value350;
struct sType* __dec_obj101;
void* right_value351;
char* __dec_obj102;
void* right_value352;
void* right_value353;
struct list$1CVALUEph* come_params_236;
void* right_value354;
void* right_value355;
struct CVALUE* come_value2_237;
void* right_value356;
char* __dec_obj103;
struct sType* __dec_obj104;
void* right_value357;
void* right_value358;
struct CVALUE* come_value3_238;
void* right_value359;
char* __dec_obj105;
struct sType* __dec_obj106;
void* right_value360;
void* right_value361;
struct CVALUE* come_value4_239;
void* right_value362;
char* __dec_obj107;
struct sType* __dec_obj108;
void* right_value363;
void* right_value364;
struct buffer* buf_240;
int j_241;
struct list$1CVALUEph* o2_saved_242;
struct CVALUE* it_243;
void* right_value365;
void* right_value366;
struct CVALUE* come_value5_244;
void* right_value367;
char* __dec_obj109;
void* right_value368;
void* right_value369;
char* __dec_obj110;
void* right_value370;
struct sType* __dec_obj111;
void* right_value371;
_Bool __result137__;
memset(&map_key_elements_199, 0, sizeof(struct list$1sNodeph*));
memset(&map_elements_200, 0, sizeof(struct list$1sNodeph*));
right_value303 = (void*)0;
right_value304 = (void*)0;
memset(&key_params_201, 0, sizeof(struct list$1CVALUEph*));
right_value305 = (void*)0;
right_value306 = (void*)0;
memset(&element_params_202, 0, sizeof(struct list$1CVALUEph*));
memset(&map_key_type_203, 0, sizeof(struct sType*));
memset(&map_element_type_204, 0, sizeof(struct sType*));
memset(&i_205, 0, sizeof(int));
memset(&key_elements_206, 0, sizeof(struct sNode*));
memset(&elements_210, 0, sizeof(struct sNode*));
right_value307 = (void*)0;
memset(&come_value_211, 0, sizeof(struct CVALUE*));
right_value308 = (void*)0;
right_value309 = (void*)0;
memset(&come_value2_212, 0, sizeof(struct CVALUE*));
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value312 = (void*)0;
right_value313 = (void*)0;
memset(&key_type_values_214, 0, sizeof(struct sType*));
right_value314 = (void*)0;
right_value315 = (void*)0;
memset(&var_name_215, 0, sizeof(char*));
right_value316 = (void*)0;
memset(&var__216, 0, sizeof(struct sVar*));
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&element_type_values_217, 0, sizeof(struct sType*));
right_value319 = (void*)0;
right_value320 = (void*)0;
memset(&var_name2_218, 0, sizeof(char*));
right_value321 = (void*)0;
memset(&var2__219, 0, sizeof(struct sVar*));
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
memset(&source_220, 0, sizeof(struct buffer*));
memset(&i_221, 0, sizeof(int));
memset(&key_param_222, 0, sizeof(struct CVALUE*));
memset(&element_param_223, 0, sizeof(struct CVALUE*));
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
memset(&map_type_224, 0, sizeof(struct sType*));
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
memset(&obj_type_225, 0, sizeof(struct sType*));
memset(&fun_name_226, 0, sizeof(char*));
right_value335 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
memset(&generics_fun_name_227, 0, sizeof(char*));
memset(&fun_228, 0, sizeof(struct sFun*));
right_value338 = (void*)0;
right_value339 = (void*)0;
right_value340 = (void*)0;
memset(&result_type_229, 0, sizeof(struct sType*));
memset(&type_230, 0, sizeof(struct sType*));
right_value341 = (void*)0;
right_value342 = (void*)0;
memset(&obj_value_231, 0, sizeof(struct CVALUE*));
right_value343 = (void*)0;
right_value344 = (void*)0;
memset(&num_string_232, 0, sizeof(struct buffer*));
right_value345 = (void*)0;
memset(&type2_233, 0, sizeof(struct sType*));
right_value346 = (void*)0;
memset(&type_name_234, 0, sizeof(char*));
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
memset(&type3_235, 0, sizeof(struct sType*));
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
memset(&come_params_236, 0, sizeof(struct list$1CVALUEph*));
right_value354 = (void*)0;
right_value355 = (void*)0;
memset(&come_value2_237, 0, sizeof(struct CVALUE*));
right_value356 = (void*)0;
right_value357 = (void*)0;
right_value358 = (void*)0;
memset(&come_value3_238, 0, sizeof(struct CVALUE*));
right_value359 = (void*)0;
right_value360 = (void*)0;
right_value361 = (void*)0;
memset(&come_value4_239, 0, sizeof(struct CVALUE*));
right_value362 = (void*)0;
right_value363 = (void*)0;
right_value364 = (void*)0;
memset(&buf_240, 0, sizeof(struct buffer*));
memset(&j_241, 0, sizeof(int));
memset(&o2_saved_242, 0, sizeof(struct list$1CVALUEph*));
memset(&it_243, 0, sizeof(struct CVALUE*));
right_value365 = (void*)0;
right_value366 = (void*)0;
memset(&come_value5_244, 0, sizeof(struct CVALUE*));
right_value367 = (void*)0;
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value371 = (void*)0;
    map_key_elements_199=self->map_key_elements;
    map_elements_200=self->map_elements;
    key_params_201=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value304=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value303=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 582, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value303,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value304,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    element_params_202=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value306=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value305=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 583, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value305,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value306,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj95=map_key_type_203;
    map_key_type_203=((void*)0);
    come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj96=map_element_type_204;
    map_element_type_204=((void*)0);
    come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
    for(    i_205=0;    i_205<list$1sNodeph_length(map_key_elements_199);    i_205++    ){
        key_elements_206=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(map_key_elements_199,i_205), "06str.c", 588, 9));
        elements_210=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(map_elements_200,i_205), "06str.c", 589, 10));
        if(!node_compile(key_elements_206,info)) {
            __result134__ = (_Bool)0;
            come_call_finalizer3(key_params_201,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_202,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_203,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_204,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result134__;
        }
        come_value_211=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value307=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value307,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        dec_stack_ptr(1,info);
        if(map_key_type_203) {
            check_assign_type(((char*)(right_value308=xsprintf("invalid map key type"))),map_key_type_203,come_value_211->type,come_value_211,(_Bool)0,(_Bool)1,info);
            right_value308 = come_decrement_ref_count2(right_value308, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(key_params_201,(struct CVALUE*)come_increment_ref_count(come_value_211));
        if(!node_compile(elements_210,info)) {
            __result135__ = (_Bool)0;
            come_call_finalizer3(come_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(key_params_201,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_202,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_203,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_204,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result135__;
        }
        come_value2_212=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value309=get_value_from_stack(-1,info))));
        come_call_finalizer3(right_value309,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        dec_stack_ptr(1,info);
        if(map_element_type_204) {
            check_assign_type(((char*)(right_value310=xsprintf("invalid map element type"))),map_element_type_204,come_value2_212->type,come_value2_212,(_Bool)0,(_Bool)1,info);
            right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(element_params_202,(struct CVALUE*)come_increment_ref_count(come_value2_212));
        __dec_obj97=map_key_type_203;
        map_key_type_203=(struct sType*)come_increment_ref_count(((struct sType*)(right_value311=sType_clone(come_value_211->type))));
        come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value311,sType_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj98=map_element_type_204;
        map_element_type_204=(struct sType*)come_increment_ref_count(((struct sType*)(right_value312=sType_clone(come_value2_212->type))));
        come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value312,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(come_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_212,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    static int map_value_num_213=0;
    key_type_values_214=(struct sType*)come_increment_ref_count(((struct sType*)(right_value313=sType_clone(map_key_type_203))));
    come_call_finalizer3(right_value313,sType_finalize, 0, 1, 0, 0, (void*)0);
    list$1sNodeph_push_back(key_type_values_214->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value314=create_int_node(list$1CVALUEph_length(key_params_201),info)))));
    if(right_value314) { right_value314 = come_decrement_ref_count2(right_value314, ((struct sNode*)right_value314)->finalize, ((struct sNode*)right_value314)->_protocol_obj, 1, 0, 0, (void*)0); } 
    key_type_values_214->mHeap=(_Bool)0;
    var_name_215=(char*)come_increment_ref_count(((char*)(right_value315=xsprintf("__map_keys%d__",++map_value_num_213))));
    right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_variable_to_table(var_name_215,(struct sType*)come_increment_ref_count(((struct sType*)(right_value316=sType_clone(key_type_values_214)))),info);
    come_call_finalizer3(right_value316,sType_finalize, 0, 1, 0, 0, (void*)0);
    var__216=get_variable_from_table(info->lv_table,var_name_215);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value317=make_define_var(key_type_values_214,var__216->mCValueName,(_Bool)0,info))));
    right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    element_type_values_217=(struct sType*)come_increment_ref_count(((struct sType*)(right_value318=sType_clone(map_element_type_204))));
    come_call_finalizer3(right_value318,sType_finalize, 0, 1, 0, 0, (void*)0);
    list$1sNodeph_push_back(element_type_values_217->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value319=create_int_node(list$1CVALUEph_length(element_params_202),info)))));
    if(right_value319) { right_value319 = come_decrement_ref_count2(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0, 0, (void*)0); } 
    element_type_values_217->mHeap=(_Bool)0;
    var_name2_218=(char*)come_increment_ref_count(((char*)(right_value320=xsprintf("__map_element%d__",map_value_num_213))));
    right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_variable_to_table(var_name2_218,(struct sType*)come_increment_ref_count(((struct sType*)(right_value321=sType_clone(element_type_values_217)))),info);
    come_call_finalizer3(right_value321,sType_finalize, 0, 1, 0, 0, (void*)0);
    var2__219=get_variable_from_table(info->lv_table,var_name2_218);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value322=make_define_var(element_type_values_217,var2__219->mCValueName,(_Bool)0,info))));
    right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_220=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value324=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value323=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 647, "buffer"))))))));
    come_call_finalizer3(right_value323,buffer_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value324,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(source_220,"{");
    for(    i_221=0;    i_221<list$1CVALUEph_length(key_params_201);    i_221++    ){
        key_param_222=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(key_params_201,i_221), "06str.c", 652, 11));
        element_param_223=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(element_params_202,i_221), "06str.c", 653, 12));
        if(map_key_type_203->mHeap) {
            buffer_append_str(source_220,((char*)(right_value325=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__216->mCValueName,i_221,key_param_222->c_value))));
            right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(source_220,((char*)(right_value326=xsprintf("%s[%d]=%s;\n",var__216->mCValueName,i_221,key_param_222->c_value))));
            right_value326 = come_decrement_ref_count2(right_value326, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        if(map_element_type_204->mHeap) {
            buffer_append_str(source_220,((char*)(right_value327=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var2__219->mCValueName,i_221,element_param_223->c_value))));
            right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(source_220,((char*)(right_value328=xsprintf("%s[%d]=%s;\n",var2__219->mCValueName,i_221,element_param_223->c_value))));
            right_value328 = come_decrement_ref_count2(right_value328, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
    }
    buffer_append_str(source_220,"}");
    add_come_code(info,"%s",((char*)(right_value329=buffer_to_string(source_220))));
    right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    map_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value331=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value330=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 674, "sType")))),"map",(_Bool)0,info))));
    come_call_finalizer3(right_value330,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value331,sType_finalize, 0, 1, 0, 0, (void*)0);
    list$1sTypeph_push_back(map_type_224->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value332=sType_clone(map_key_type_203)))));
    come_call_finalizer3(right_value332,sType_finalize, 0, 1, 0, 0, (void*)0);
    list$1sTypeph_push_back(map_type_224->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value333=sType_clone(map_element_type_204)))));
    come_call_finalizer3(right_value333,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_225=(struct sType*)come_increment_ref_count(((struct sType*)(right_value334=sType_clone(map_type_224))));
    come_call_finalizer3(right_value334,sType_finalize, 0, 1, 0, 0, (void*)0);
    fun_name_226="initialize_with_values";
    generics_fun_name_227=(char*)come_increment_ref_count(((char*)(right_value337=string_to_string(((char*)(right_value336=make_generics_function(obj_type_225,(char*)come_increment_ref_count(((char*)(right_value335=__builtin_string(fun_name_226)))),info,(_Bool)1)))))));
    right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value336 = come_decrement_ref_count2(right_value336, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_228=map$2charphsFunph_at(info->funcs,generics_fun_name_227,((void*)0));
    if(fun_228==((void*)0)) {
        __dec_obj99=generics_fun_name_227;
        generics_fun_name_227=(char*)come_increment_ref_count(((char*)(right_value339=create_method_name(obj_type_225,(_Bool)0,((char*)(right_value338=__builtin_string(fun_name_226))),info,(_Bool)1))));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value338 = come_decrement_ref_count2(right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_228=map$2charphsFunph_at(info->funcs,generics_fun_name_227,((void*)0));
        if(fun_228==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_227,info->come_fun->mName);
            __result136__ = (_Bool)1;
            come_call_finalizer3(key_params_201,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_202,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_203,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_204,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(key_type_values_214,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_215 = come_decrement_ref_count2(var_name_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_values_217,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name2_218 = come_decrement_ref_count2(var_name2_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_220,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_type_224,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_225,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_227 = come_decrement_ref_count2(generics_fun_name_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result136__;
        }
    }
    result_type_229=(struct sType*)come_increment_ref_count(((struct sType*)(right_value340=sType_clone(fun_228->mResultType))));
    come_call_finalizer3(right_value340,sType_finalize, 0, 1, 0, 0, (void*)0);
    result_type_229->mStatic=(_Bool)0;
    type_230=map_type_224;
    obj_value_231=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value342=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value341=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 701, "CVALUE"))))))));
    come_call_finalizer3(right_value341,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value342,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    num_string_232=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value344=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value343=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 703, "buffer"))))))));
    come_call_finalizer3(right_value343,buffer_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value344,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(num_string_232,"1");
    type2_233=(struct sType*)come_increment_ref_count(((struct sType*)(right_value345=solve_generics(type_230,type_230,info))));
    come_call_finalizer3(right_value345,sType_finalize, 0, 1, 0, 0, (void*)0);
    type_name_234=(char*)come_increment_ref_count(((char*)(right_value346=make_type_name_string(type2_233,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value346 = come_decrement_ref_count2(right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj100=obj_value_231->c_value;
    obj_value_231->c_value=(char*)come_increment_ref_count(((char*)(right_value348=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_234,type_name_234,((char*)(right_value347=buffer_to_string(num_string_232))),info->sname,info->sline,type_name_234))));
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_value348 = come_decrement_ref_count2(right_value348, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_235=(struct sType*)come_increment_ref_count(((struct sType*)(right_value349=sType_clone(type2_233))));
    come_call_finalizer3(right_value349,sType_finalize, 0, 1, 0, 0, (void*)0);
    type3_235->mPointerNum++;
    type3_235->mHeap=(_Bool)1;
    type2_233->mHeap=(_Bool)1;
    __dec_obj101=obj_value_231->type;
    obj_value_231->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value350=sType_clone(type2_233))));
    come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value350,sType_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj102=obj_value_231->c_value;
    obj_value_231->c_value=(char*)come_increment_ref_count(((char*)(right_value351=append_object_to_right_values(obj_value_231->c_value,(struct sType*)come_increment_ref_count(type3_235),info))));
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    obj_value_231->type->mPointerNum++;
    obj_value_231->var=((void*)0);
    come_params_236=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value353=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value352=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 722, "list$1CVALUEph"))))))));
    come_call_finalizer3(right_value352,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value353,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_228->mParamTypes,0), "06str.c", 724, 13))->mHeap&&obj_value_231->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_228->mParamTypes,0), "06str.c", 725, 14)),obj_value_231->type,obj_value_231,info);
    }
    list$1CVALUEph_push_back(come_params_236,(struct CVALUE*)come_increment_ref_count(obj_value_231));
    come_value2_237=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value355=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value354=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 729, "CVALUE"))))))));
    come_call_finalizer3(right_value354,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value355,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj103=come_value2_237->c_value;
    come_value2_237->c_value=(char*)come_increment_ref_count(((char*)(right_value356=xsprintf("%d",list$1CVALUEph_length(key_params_201)))));
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj104=come_value2_237->type;
    come_value2_237->type=((void*)0);
    come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_237->var=((void*)0);
    list$1CVALUEph_push_back(come_params_236,(struct CVALUE*)come_increment_ref_count(come_value2_237));
    come_value3_238=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value358=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value357=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 737, "CVALUE"))))))));
    come_call_finalizer3(right_value357,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value358,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj105=come_value3_238->c_value;
    come_value3_238->c_value=(char*)come_increment_ref_count(((char*)(right_value359=xsprintf("%s",var__216->mCValueName))));
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value359 = come_decrement_ref_count2(right_value359, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj106=come_value3_238->type;
    come_value3_238->type=((void*)0);
    come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_238->var=((void*)0);
    list$1CVALUEph_push_back(come_params_236,(struct CVALUE*)come_increment_ref_count(come_value3_238));
    come_value4_239=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value361=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value360=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 745, "CVALUE"))))))));
    come_call_finalizer3(right_value360,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value361,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj107=come_value4_239->c_value;
    come_value4_239->c_value=(char*)come_increment_ref_count(((char*)(right_value362=xsprintf("%s",var2__219->mCValueName))));
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj108=come_value4_239->type;
    come_value4_239->type=((void*)0);
    come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_239->var=((void*)0);
    list$1CVALUEph_push_back(come_params_236,(struct CVALUE*)come_increment_ref_count(come_value4_239));
    buf_240=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value364=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value363=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 753, "buffer"))))))));
    come_call_finalizer3(right_value363,buffer_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value364,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(buf_240,generics_fun_name_227);
    buffer_append_str(buf_240,"(");
    j_241=0;
    for(    o2_saved_242=(struct list$1CVALUEph*)come_increment_ref_count((come_params_236)),it_243=list$1CVALUEph_begin((o2_saved_242));    !list$1CVALUEph_end((o2_saved_242));    it_243=list$1CVALUEph_next((o2_saved_242))    ){
        buffer_append_str(buf_240,it_243->c_value);
        if(j_241!=list$1CVALUEph_length(come_params_236)-1) {
            buffer_append_str(buf_240,",");
        }
        j_241++;
    }
    come_call_finalizer3(o2_saved_242,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_240,")");
    come_value5_244=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value366=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value365=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 770, "CVALUE"))))))));
    come_call_finalizer3(right_value365,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value366,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj109=come_value5_244->c_value;
    come_value5_244->c_value=(char*)come_increment_ref_count(((char*)(right_value367=buffer_to_string(buf_240))));
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value367 = come_decrement_ref_count2(right_value367, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(result_type_229->mHeap) {
        __dec_obj110=come_value5_244->c_value;
        come_value5_244->c_value=(char*)come_increment_ref_count(((char*)(right_value369=append_object_to_right_values(((char*)(right_value368=buffer_to_string(buf_240))),(struct sType*)come_increment_ref_count(result_type_229),info))));
        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value369 = come_decrement_ref_count2(right_value369, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    __dec_obj111=come_value5_244->type;
    come_value5_244->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value370=sType_clone(result_type_229))));
    come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value370,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value5_244->type->mStatic=(_Bool)0;
    come_value5_244->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value371=buffer_to_string(buf_240))));
    right_value371 = come_decrement_ref_count2(right_value371, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_244));
    __result137__ = (_Bool)1;
    come_call_finalizer3(key_params_201,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_params_202,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_key_type_203,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_element_type_204,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(key_type_values_214,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_215 = come_decrement_ref_count2(var_name_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_values_217,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name2_218 = come_decrement_ref_count2(var_name2_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_220,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_type_224,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_225,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_227 = come_decrement_ref_count2(generics_fun_name_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_229,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_231,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_232,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_233,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_234 = come_decrement_ref_count2(type_name_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_235,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_236,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_237,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_238,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_239,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_240,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value5_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result137__;
    come_call_finalizer3(key_params_201,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_params_202,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_key_type_203,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_element_type_204,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(key_type_values_214,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_215 = come_decrement_ref_count2(var_name_215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_values_217,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name2_218 = come_decrement_ref_count2(var_name2_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_220,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_type_224,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_225,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_227 = come_decrement_ref_count2(generics_fun_name_227, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_229,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_231,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_232,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_233,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_234 = come_decrement_ref_count2(type_name_234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_235,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_236,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_237,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_238,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_239,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_240,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value5_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
struct list_item$1sNodeph* it_207;
int i_208;
struct sNode* __result132__;
struct sNode* default_value_209;
struct sNode* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_207, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_208, 0, sizeof(int));
memset(&default_value_209, 0, sizeof(struct sNode*));
            if(position<0) {
                position+=self->len;
            }
            it_207=self->head;
            i_208=0;
            while(it_207!=((void*)0)) {
                if(position==i_208) {
                    __result132__ = __result_obj__ = it_207->item;
                    return __result132__;
                }
                it_207=it_207->next;
                i_208++;
            }
            memset(&default_value_209,0,sizeof(struct sNode*));
            __result133__ = __result_obj__ = default_value_209;
            if(default_value_209) { default_value_209 = come_decrement_ref_count2(default_value_209, ((struct sNode*)default_value_209)->finalize, ((struct sNode*)default_value_209)->_protocol_obj, 0, 1, 0, (void*)0); } 
            return __result133__;
            if(default_value_209) { default_value_209 = come_decrement_ref_count2(default_value_209, ((struct sNode*)default_value_209)->finalize, ((struct sNode*)default_value_209)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* expression_node_v96(struct sInfo* info){
void* __result_obj__;
int sline_245;
void* right_value372;
void* right_value373;
struct list$1sNodeph* exps_246;
void* right_value374;
void* right_value375;
struct buffer* value_247;
char* head_of_last_line_248;
int len_249;
void* right_value376;
struct sNode* exp_250;
int sline2_251;
void* right_value377;
void* right_value378;
void* right_value379;
struct sNode* _inf_value1;
struct sSStringNode* _inf_obj_value1;
void* right_value384;
struct sNode* __result140__;
int sline_253;
void* right_value385;
void* right_value386;
struct buffer* value_254;
char* p_255;
int sline_256;
int sline2_257;
void* right_value387;
void* right_value388;
void* right_value389;
struct sNode* _inf_value2;
struct sStrNode* _inf_obj_value2;
void* right_value393;
struct sNode* __result143__;
int sline_259;
void* right_value394;
void* right_value395;
struct buffer* buf_260;
_Bool global_261;
_Bool ignore_case_262;
void* right_value396;
void* right_value397;
void* right_value398;
struct sNode* _inf_value3;
struct sRegexNode* _inf_obj_value3;
void* right_value402;
struct sNode* __result146__;
int c_264;
int n_265;
int n_266;
unsigned long long int n_269;
void* right_value403;
void* right_value404;
struct sNode* _inf_value4;
struct sCharNode* _inf_obj_value4;
void* right_value407;
struct sNode* __result149__;
unsigned int c_271;
_Bool quote_272;
int n_273;
int n_274;
unsigned long long int n_277;
unsigned char p2_278;
int size_279;
void* right_value408;
void* right_value409;
struct sNode* _inf_value5;
struct sWCharNode* _inf_obj_value5;
void* right_value412;
struct sNode* __result152__;
int sline_282;
void* right_value413;
void* right_value414;
struct buffer* value_283;
char* p_284;
int sline_285;
int len_286;
int n_287;
unsigned long int lont_290;
int n_291;
int sline2_292;
int len_293;
void* right_value415;
unsigned int* wstr_294;
char* str_295;
void* right_value416;
void* right_value417;
struct sNode* _inf_value6;
struct sWStringNode* _inf_obj_value6;
void* right_value421;
struct sNode* __result155__;
int sline_297;
void* right_value422;
void* right_value423;
struct list$1sNodeph* exps_298;
void* right_value424;
void* right_value425;
struct buffer* value_299;
char* p_300;
int sline_301;
void* right_value426;
struct sNode* exp_302;
char* p_303;
int len_304;
void* right_value427;
struct sNode* exp_305;
int sline2_306;
void* right_value428;
void* right_value429;
void* right_value430;
struct sNode* _inf_value7;
struct sSStringNode* _inf_obj_value7;
void* right_value435;
struct sNode* __result158__;
char* p_308;
_Bool no_comma_309;
void* right_value436;
struct sNode* node_310;
char* p2_311;
void* right_value437;
void* right_value438;
struct buffer* first_element_source_312;
void* right_value439;
void* right_value440;
struct list$1sNodeph* list_elements_313;
void* right_value441;
void* right_value442;
struct list$1sNodeph* map_keys_314;
void* right_value443;
void* right_value444;
struct list$1sNodeph* map_elements_315;
_Bool no_comma_316;
void* right_value445;
struct sNode* node2_317;
void* right_value446;
void* right_value447;
struct sNode* _inf_value8;
struct sMapNode* _inf_obj_value8;
void* right_value452;
struct sNode* __result161__;
_Bool no_comma_319;
void* right_value453;
struct sNode* node2_320;
void* right_value454;
struct sNode* node3_321;
void* right_value455;
void* right_value456;
struct sNode* _inf_value9;
struct sMapNode* _inf_obj_value9;
void* right_value461;
struct sNode* __result164__;
_Bool no_comma_323;
void* right_value462;
struct sNode* node2_324;
void* right_value463;
void* right_value464;
struct sNode* _inf_value10;
struct sListNode* _inf_obj_value10;
void* right_value468;
struct sNode* __result167__;
void* right_value469;
struct sNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&sline_245, 0, sizeof(int));
right_value372 = (void*)0;
right_value373 = (void*)0;
memset(&exps_246, 0, sizeof(struct list$1sNodeph*));
right_value374 = (void*)0;
right_value375 = (void*)0;
memset(&value_247, 0, sizeof(struct buffer*));
memset(&head_of_last_line_248, 0, sizeof(char*));
memset(&len_249, 0, sizeof(int));
right_value376 = (void*)0;
memset(&exp_250, 0, sizeof(struct sNode*));
memset(&sline2_251, 0, sizeof(int));
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value384 = (void*)0;
memset(&sline_253, 0, sizeof(int));
right_value385 = (void*)0;
right_value386 = (void*)0;
memset(&value_254, 0, sizeof(struct buffer*));
memset(&p_255, 0, sizeof(char*));
memset(&sline_256, 0, sizeof(int));
memset(&sline2_257, 0, sizeof(int));
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value393 = (void*)0;
memset(&sline_259, 0, sizeof(int));
right_value394 = (void*)0;
right_value395 = (void*)0;
memset(&buf_260, 0, sizeof(struct buffer*));
memset(&global_261, 0, sizeof(_Bool));
memset(&ignore_case_262, 0, sizeof(_Bool));
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value398 = (void*)0;
right_value402 = (void*)0;
memset(&c_264, 0, sizeof(int));
memset(&n_265, 0, sizeof(int));
memset(&n_266, 0, sizeof(int));
memset(&n_269, 0, sizeof(unsigned long long int));
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value407 = (void*)0;
memset(&c_271, 0, sizeof(unsigned int));
memset(&quote_272, 0, sizeof(_Bool));
memset(&n_273, 0, sizeof(int));
memset(&n_274, 0, sizeof(int));
memset(&n_277, 0, sizeof(unsigned long long int));
memset(&p2_278, 0, sizeof(unsigned char));
memset(&size_279, 0, sizeof(int));
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value412 = (void*)0;
memset(&sline_282, 0, sizeof(int));
right_value413 = (void*)0;
right_value414 = (void*)0;
memset(&value_283, 0, sizeof(struct buffer*));
memset(&p_284, 0, sizeof(char*));
memset(&sline_285, 0, sizeof(int));
memset(&len_286, 0, sizeof(int));
memset(&n_287, 0, sizeof(int));
memset(&lont_290, 0, sizeof(unsigned long int));
memset(&n_291, 0, sizeof(int));
memset(&sline2_292, 0, sizeof(int));
memset(&len_293, 0, sizeof(int));
right_value415 = (void*)0;
memset(&wstr_294, 0, sizeof(unsigned int*));
memset(&str_295, 0, sizeof(char*));
right_value416 = (void*)0;
right_value417 = (void*)0;
right_value421 = (void*)0;
memset(&sline_297, 0, sizeof(int));
right_value422 = (void*)0;
right_value423 = (void*)0;
memset(&exps_298, 0, sizeof(struct list$1sNodeph*));
right_value424 = (void*)0;
right_value425 = (void*)0;
memset(&value_299, 0, sizeof(struct buffer*));
memset(&p_300, 0, sizeof(char*));
memset(&sline_301, 0, sizeof(int));
right_value426 = (void*)0;
memset(&exp_302, 0, sizeof(struct sNode*));
memset(&p_303, 0, sizeof(char*));
memset(&len_304, 0, sizeof(int));
right_value427 = (void*)0;
memset(&exp_305, 0, sizeof(struct sNode*));
memset(&sline2_306, 0, sizeof(int));
right_value428 = (void*)0;
right_value429 = (void*)0;
right_value430 = (void*)0;
right_value435 = (void*)0;
memset(&p_308, 0, sizeof(char*));
memset(&no_comma_309, 0, sizeof(_Bool));
right_value436 = (void*)0;
memset(&node_310, 0, sizeof(struct sNode*));
memset(&p2_311, 0, sizeof(char*));
right_value437 = (void*)0;
right_value438 = (void*)0;
memset(&first_element_source_312, 0, sizeof(struct buffer*));
right_value439 = (void*)0;
right_value440 = (void*)0;
memset(&list_elements_313, 0, sizeof(struct list$1sNodeph*));
right_value441 = (void*)0;
right_value442 = (void*)0;
memset(&map_keys_314, 0, sizeof(struct list$1sNodeph*));
right_value443 = (void*)0;
right_value444 = (void*)0;
memset(&map_elements_315, 0, sizeof(struct list$1sNodeph*));
memset(&no_comma_316, 0, sizeof(_Bool));
right_value445 = (void*)0;
memset(&node2_317, 0, sizeof(struct sNode*));
right_value446 = (void*)0;
right_value447 = (void*)0;
right_value452 = (void*)0;
memset(&no_comma_319, 0, sizeof(_Bool));
right_value453 = (void*)0;
memset(&node2_320, 0, sizeof(struct sNode*));
right_value454 = (void*)0;
memset(&node3_321, 0, sizeof(struct sNode*));
right_value455 = (void*)0;
right_value456 = (void*)0;
right_value461 = (void*)0;
memset(&no_comma_323, 0, sizeof(_Bool));
right_value462 = (void*)0;
memset(&node2_324, 0, sizeof(struct sNode*));
right_value463 = (void*)0;
right_value464 = (void*)0;
right_value468 = (void*)0;
right_value469 = (void*)0;
    if(*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        info->p+=4;
        info->sline++;
        sline_245=info->sline;
        exps_246=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value373=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value372=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 799, "list$1sNodeph"))))))));
        come_call_finalizer3(right_value372,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value373,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        value_247=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value375=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value374=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 800, "buffer"))))))));
        come_call_finalizer3(right_value374,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value375,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        head_of_last_line_248=((void*)0);
        while(1) {
            if(*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(head_of_last_line_248) {
                    buffer_trim(value_247,info->p-head_of_last_line_248);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else {
                if(*info->p==37) {
                    buffer_append_char(value_247,37);
                    buffer_append_char(value_247,37);
                    info->p++;
                }
                else {
                    if(*info->p==34) {
                        buffer_append_char(value_247,92);
                        buffer_append_char(value_247,34);
                        info->p++;
                    }
                    else {
                        if(*info->p==92) {
                            buffer_append_char(value_247,92);
                            info->p++;
                            if(xisdigit(*info->p)) {
                                len_249=0;
                                while(xisdigit(*info->p)&&len_249<3) {
                                    buffer_append_char(value_247,*info->p);
                                    info->p++;
                                    len_249++;
                                }
                            }
                            else {
                                if(*info->p==120||*info->p==88) {
                                    buffer_append_char(value_247,*info->p);
                                    info->p++;
                                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                                        buffer_append_char(value_247,*info->p);
                                        info->p++;
                                    }
                                }
                                else {
                                    if(*info->p==123) {
                                        info->p++;
                                        exp_250=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value376=expression_v13(info))));
                                        if(right_value376) { right_value376 = come_decrement_ref_count2(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        list$1sNodeph_add(exps_246,(struct sNode*)come_increment_ref_count(exp_250));
                                        if(*info->p==125) {
                                            info->p++;
                                        }
                                        buffer_append_str(value_247,"%s");
                                        if(exp_250) { exp_250 = come_decrement_ref_count2(exp_250, ((struct sNode*)exp_250)->finalize, ((struct sNode*)exp_250)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        switch (*info->p) {
                                            case 48:
                                            buffer_append_char(value_247,*info->p);
                                            info->p++;
                                            break;
                                            case 110:
                                            buffer_append_char(value_247,*info->p);
                                            info->p++;
                                            break;
                                            case 116:
                                            buffer_append_char(value_247,*info->p);
                                            info->p++;
                                            break;
                                            case 114:
                                            buffer_append_char(value_247,*info->p);
                                            info->p++;
                                            break;
                                            case 118:
                                            buffer_append_char(value_247,*info->p);
                                            info->p++;
                                            break;
                                            case 102:
                                            buffer_append_char(value_247,*info->p);
                                            info->p++;
                                            break;
                                            case 97:
                                            buffer_append_char(value_247,*info->p);
                                            info->p++;
                                            break;
                                            case 98:
                                            buffer_append_char(value_247,*info->p);
                                            info->p++;
                                            break;
                                            case 92:
                                            buffer_append_char(value_247,*info->p);
                                            info->p++;
                                            break;
                                            default:
                                            buffer_append_char(value_247,*info->p);
                                            info->p++;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            if(*info->p==0) {
                                sline2_251=info->sline;
                                info->sline=sline_245;
                                err_msg(info,"close \" to make embbeded string value");
                                exit(2);
                            }
                            else {
                                if(*info->p==10) {
                                    buffer_append_char(value_247,92);
                                    buffer_append_char(value_247,110);
                                    info->p++;
                                    info->sline++;
                                    head_of_last_line_248=info->p;
                                }
                                else {
                                    buffer_append_char(value_247,*info->p);
                                    info->p++;
                                }
                            }
                        }
                    }
                }
            }
        }
        skip_spaces_and_lf(info);
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 949, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sSStringNode*)(right_value379=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value377=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 949, "sSStringNode")))),(char*)come_increment_ref_count(((char*)(right_value378=buffer_to_string(value_247)))),(struct list$1sNodeph*)come_increment_ref_count(exps_246),sline_245,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sSStringNode_finalize;
        _inf_value1->clone=(void*)sSStringNode_clone;
        _inf_value1->compile=(void*)sSStringNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sSStringNode_kind;
        __result140__ = __result_obj__ = ((struct sNode*)(right_value384=_inf_value1));
        come_call_finalizer3(exps_246,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_247,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value377,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        right_value378 = come_decrement_ref_count2(right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value379,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value384) { right_value384 = come_decrement_ref_count2(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result140__;
        come_call_finalizer3(exps_246,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_247,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(*info->p==34) {
            info->p++;
            sline_253=info->sline;
            value_254=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value386=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value385=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 957, "buffer"))))))));
            come_call_finalizer3(right_value385,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value386,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            while(1) {
                if(*info->p==34) {
                    info->p++;
                    p_255=info->p;
                    sline_256=info->sline;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    if(*info->p==34) {
                        info->p++;
                    }
                    else {
                        info->p=p_255;
                        info->sline=sline_256;
                        break;
                    }
                }
                else {
                    if(*info->p==92) {
                        buffer_append_char(value_254,92);
                        info->p++;
                        if(*info->p==34) {
                            buffer_append_char(value_254,34);
                            info->p++;
                        }
                        else {
                            buffer_append_char(value_254,*info->p);
                            info->p++;
                        }
                    }
                    else {
                        if(*info->p==0) {
                            sline2_257=info->sline;
                            info->sline=sline_253;
                            err_msg(info,"close \" to make c string value");
                            info->sline=sline2_257;
                            exit(2);
                        }
                        else {
                            if(*info->p==10) {
                                info->sline++;
                            }
                            buffer_append_char(value_254,*info->p);
                            info->p++;
                        }
                    }
                }
            }
            skip_spaces_and_lf(info);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1009, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStrNode*)(right_value389=sStrNode_initialize((struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value387=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1009, "sStrNode")))),(char*)come_increment_ref_count(((char*)(right_value388=buffer_to_string(value_254)))),sline_253,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStrNode_finalize;
            _inf_value2->clone=(void*)sStrNode_clone;
            _inf_value2->compile=(void*)sStrNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sStrNode_kind;
            __result143__ = __result_obj__ = ((struct sNode*)(right_value393=_inf_value2));
            come_call_finalizer3(value_254,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value387,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value389,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result143__;
            come_call_finalizer3(value_254,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(*info->p==47) {
                info->p++;
                sline_259=info->sline;
                buf_260=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value395=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value394=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1016, "buffer"))))))));
                come_call_finalizer3(right_value394,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value395,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                while((_Bool)1) {
                    if(*info->p==92&&*(info->p+1)==47) {
                        info->p++;
                        buffer_append_char(buf_260,*info->p);
                        info->p++;
                    }
                    else {
                        if(*info->p==47) {
                            info->p++;
                            break;
                        }
                        else {
                            if(*info->p==0) {
                                err_msg(info,"require closing / for regex");
                                exit(5);
                            }
                            else {
                                buffer_append_char(buf_260,*info->p);
                                info->p++;
                            }
                        }
                    }
                }
                global_261=(_Bool)0;
                ignore_case_262=(_Bool)0;
                while(*info->p==103||*info->p==105) {
                    if(*info->p==103) {
                        info->p++;
                        global_261=(_Bool)1;
                    }
                    else {
                        if(*info->p==105) {
                            info->p++;
                            ignore_case_262=(_Bool)1;
                        }
                        else {
                            break;
                        }
                    }
                }
                skip_spaces_and_lf(info);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1055, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sRegexNode*)(right_value398=sRegexNode_initialize((struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value396=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "06str.c", 1055, "sRegexNode")))),(char*)come_increment_ref_count(((char*)(right_value397=buffer_to_string(buf_260)))),global_261,ignore_case_262,sline_259,info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sRegexNode_finalize;
                _inf_value3->clone=(void*)sRegexNode_clone;
                _inf_value3->compile=(void*)sRegexNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sNodeBase_terminated;
                _inf_value3->kind=(void*)sRegexNode_kind;
                __result146__ = __result_obj__ = ((struct sNode*)(right_value402=_inf_value3));
                come_call_finalizer3(buf_260,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value396,sRegexNode_finalize, 0, 1, 0, 0, __result_obj__);
                right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value398,sRegexNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value402) { right_value402 = come_decrement_ref_count2(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result146__;
                come_call_finalizer3(buf_260,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(*info->p==39) {
                    info->p++;
                    if(*info->p==92) {
                        info->p++;
                        if(xisdigit(*info->p)) {
                            n_265=0;
                            while(xisdigit(*info->p)) {
                                n_265=n_265*8+*info->p-48;
                                info->p++;
                            }
                            c_264=n_265;
                        }
                        else {
                            switch (*info->p) {
                                case 110:
                                c_264=10;
                                info->p++;
                                break;
                                case 116:
                                c_264=9;
                                info->p++;
                                break;
                                case 114:
                                c_264=13;
                                info->p++;
                                break;
                                case 97:
                                c_264=7;
                                info->p++;
                                break;
                                case 102:
                                c_264=12;
                                info->p++;
                                break;
                                case 118:
                                c_264=11;
                                info->p++;
                                break;
                                case 98:
                                c_264=8;
                                info->p++;
                                break;
                                case 92:
                                c_264=92;
                                info->p++;
                                break;
                                case 48:
                                c_264=0;
                                info->p++;
                                if(xisdigit(*info->p)) {
                                    n_266=0;
                                    while(xisdigit(*info->p)) {
                                        n_266=n_266*8+*info->p-48;
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    c_264=n_266;
                                }
                                break;
                                case 120:
                                case 88:
                                {
                                    info->p++;
                                    char buf_267[128];
                                    memset(&buf_267, 0, sizeof(char)                                    *(128)                                    );
                                    strncpy(buf_267,"0x",128);
                                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                                        char buf2_268[2];
                                        memset(&buf2_268, 0, sizeof(char)                                        *(2)                                        );
                                        buf2_268[0]=*info->p;
                                        buf2_268[1]=0;
                                        info->p++;
                                        strncat(buf_267,buf2_268,128);
                                    }
                                    n_269=strtoll(buf_267,((void*)0),0);
                                    c_264=n_269;
                                }
                                break;
                                default:
                                c_264=*info->p;
                                info->p++;
                                break;
                            }
                        }
                    }
                    else {
                        c_264=*info->p;
                        info->p++;
                    }
                    if(*info->p!=39) {
                        err_msg(info,"close \' to make character value");
                    }
                    else {
                        info->p++;
                        skip_spaces_and_lf(info);
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1172, "struct sNode");
                        _inf_obj_value4=come_increment_ref_count(((struct sCharNode*)(right_value404=sCharNode_initialize((struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value403=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 1172, "sCharNode")))),c_264,info))));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sCharNode_finalize;
                        _inf_value4->clone=(void*)sCharNode_clone;
                        _inf_value4->compile=(void*)sCharNode_compile;
                        _inf_value4->sline=(void*)sNodeBase_sline;
                        _inf_value4->sname=(void*)sNodeBase_sname;
                        _inf_value4->terminated=(void*)sNodeBase_terminated;
                        _inf_value4->kind=(void*)sCharNode_kind;
                        __result149__ = __result_obj__ = ((struct sNode*)(right_value407=_inf_value4));
                        come_call_finalizer3(right_value403,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value404,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result149__;
                    }
                }
                else {
                    if(*info->p==76&&*(info->p+1)==39) {
                        info->p+=2;
                        if(*info->p==92) {
                            quote_272=(_Bool)1;
                            info->p++;
                            if(xisdigit(*info->p)) {
                                n_273=0;
                                while(xisdigit(*info->p)) {
                                    n_273=n_273*8+*info->p-48;
                                    info->p++;
                                }
                                c_271=n_273;
                            }
                            else {
                                switch (*info->p) {
                                    case 110:
                                    c_271=10;
                                    info->p++;
                                    break;
                                    case 116:
                                    c_271=9;
                                    info->p++;
                                    break;
                                    case 114:
                                    c_271=13;
                                    info->p++;
                                    break;
                                    case 97:
                                    c_271=7;
                                    info->p++;
                                    break;
                                    case 92:
                                    c_271=92;
                                    info->p++;
                                    break;
                                    case 48:
                                    c_271=0;
                                    info->p++;
                                    if(xisdigit(*info->p)) {
                                        n_274=0;
                                        while(xisdigit(*info->p)) {
                                            n_274=n_274*8+*info->p-48;
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                        }
                                        c_271=n_274;
                                    }
                                    break;
                                    case 120:
                                    case 88:
                                    {
                                        info->p++;
                                        char buf_275[128];
                                        memset(&buf_275, 0, sizeof(char)                                        *(128)                                        );
                                        strncpy(buf_275,"0x",128);
                                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                                            char buf2_276[2];
                                            memset(&buf2_276, 0, sizeof(char)                                            *(2)                                            );
                                            buf2_276[0]=*info->p;
                                            buf2_276[1]=0;
                                            info->p++;
                                            strncat(buf_275,buf2_276,128);
                                        }
                                        n_277=strtoll(buf_275,((void*)0),0);
                                        c_271=n_277;
                                    }
                                    break;
                                    default:
                                    c_271=*info->p;
                                    info->p++;
                                    break;
                                }
                            }
                        }
                        else {
                            quote_272=(_Bool)0;
                            p2_278=*(unsigned char*)info->p;
                            if(p2_278>127) {
                                char str_280[4+1];
                                memset(&str_280, 0, sizeof(char)                                *(4+1)                                );
                                size_279=((p2_278&128)>>7)+((p2_278&64)>>6)+((p2_278&32)>>5)+((p2_278&16)>>4);
                                if(size_279>4) {
                                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                                    info->err_num++;
                                }
                                else {
                                    memcpy(str_280,info->p,size_279);
                                    str_280[size_279]=0;
                                    if(mbtowc(&c_271,str_280,size_279)<0) {
                                        perror("mbtowc");
                                        err_msg(info,"invalid utf-8 character. mbtowc");
                                        info->err_num++;
                                    }
                                    else {
                                        info->p+=size_279;
                                    }
                                }
                            }
                            else {
                                c_271=*info->p;
                                info->p++;
                            }
                        }
                        if(*info->p!=39) {
                            err_msg(info,"close \' to make character value");
                            info->err_num++;
                        }
                        else {
                            info->p++;
                            skip_spaces_and_lf(info);
                            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1311, "struct sNode");
                            _inf_obj_value5=come_increment_ref_count(((struct sWCharNode*)(right_value409=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value408=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 1311, "sWCharNode")))),c_271,quote_272,info))));
                            _inf_value5->_protocol_obj=_inf_obj_value5;
                            _inf_value5->finalize=(void*)sWCharNode_finalize;
                            _inf_value5->clone=(void*)sWCharNode_clone;
                            _inf_value5->compile=(void*)sWCharNode_compile;
                            _inf_value5->sline=(void*)sNodeBase_sline;
                            _inf_value5->sname=(void*)sNodeBase_sname;
                            _inf_value5->terminated=(void*)sNodeBase_terminated;
                            _inf_value5->kind=(void*)sWCharNode_kind;
                            __result152__ = __result_obj__ = ((struct sNode*)(right_value412=_inf_value5));
                            come_call_finalizer3(right_value408,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value409,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value412) { right_value412 = come_decrement_ref_count2(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result152__;
                        }
                    }
                    else {
                        if(*info->p==76&&*(info->p+1)==34) {
                            info->p+=2;
                            sline_282=info->sline;
                            value_283=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value414=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value413=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1320, "buffer"))))))));
                            come_call_finalizer3(right_value413,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value414,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            while(1) {
                                if(*info->p==34) {
                                    info->p++;
                                    p_284=info->p;
                                    sline_285=info->sline;
                                    skip_spaces_and_lf(info);
                                    if(*info->p==34) {
                                        info->p++;
                                    }
                                    else {
                                        info->p=p_284;
                                        info->sline=sline_285;
                                        break;
                                    }
                                }
                                else {
                                    if(*info->p==92) {
                                        info->p++;
                                        if(xisdigit(*info->p)) {
                                            len_286=0;
                                            n_287=0;
                                            while(xisdigit(*info->p)&&len_286<3) {
                                                n_287=n_287*8+*info->p-48;
                                                info->p++;
                                                len_286++;
                                            }
                                            buffer_append_char(value_283,n_287);
                                        }
                                        else {
                                            if(*info->p==120||*info->p==88) {
                                                info->p++;
                                                char buf_288[128];
                                                memset(&buf_288, 0, sizeof(char)                                                *(128)                                                );
                                                strncpy(buf_288,"0x",128);
                                                while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                                                    char buf2_289[2];
                                                    memset(&buf2_289, 0, sizeof(char)                                                    *(2)                                                    );
                                                    buf2_289[0]=*info->p;
                                                    buf2_289[1]=0;
                                                    info->p++;
                                                    strncat(buf_288,buf2_289,128);
                                                }
                                                n_291=strtoll(buf_288,((void*)0),0);
                                                buffer_append_char(value_283,(char)n_291);
                                            }
                                            else {
                                                switch (*info->p) {
                                                    case 48:
                                                    buffer_append_char(value_283,0);
                                                    info->p++;
                                                    break;
                                                    case 110:
                                                    buffer_append_char(value_283,10);
                                                    info->p++;
                                                    break;
                                                    case 116:
                                                    buffer_append_char(value_283,9);
                                                    info->p++;
                                                    break;
                                                    case 114:
                                                    buffer_append_char(value_283,13);
                                                    info->p++;
                                                    break;
                                                    case 118:
                                                    buffer_append_char(value_283,11);
                                                    info->p++;
                                                    break;
                                                    case 102:
                                                    buffer_append_char(value_283,12);
                                                    info->p++;
                                                    break;
                                                    case 97:
                                                    buffer_append_char(value_283,7);
                                                    info->p++;
                                                    break;
                                                    case 98:
                                                    buffer_append_char(value_283,8);
                                                    info->p++;
                                                    break;
                                                    case 92:
                                                    buffer_append_char(value_283,92);
                                                    info->p++;
                                                    break;
                                                    default:
                                                    buffer_append_char(value_283,*info->p);
                                                    info->p++;
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        if(*info->p==0) {
                                            sline2_292=info->sline;
                                            info->sline=sline_282;
                                            err_msg(info,"close \" to make c string value");
                                            exit(2);
                                        }
                                        else {
                                            if(*info->p==10) {
                                                info->sline++;
                                            }
                                            buffer_append_char(value_283,*info->p);
                                            info->p++;
                                        }
                                    }
                                }
                            }
                            skip_spaces_and_lf(info);
                            len_293=value_283->len;
                            wstr_294=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value415=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_293+1)), "06str.c", 1443, "int"))));
                            right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            str_295=value_283->buf;
                            if(mbstowcs(wstr_294,str_295,len_293+1)<0) {
                                perror("mbstowcs");
                                exit(1);
                            }
                            wstr_294[len_293]=0;
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1454, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sWStringNode*)(right_value417=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value416=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 1454, "sWStringNode")))),(unsigned int*)come_increment_ref_count(wstr_294),sline_282,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sWStringNode_finalize;
                            _inf_value6->clone=(void*)sWStringNode_clone;
                            _inf_value6->compile=(void*)sWStringNode_compile;
                            _inf_value6->sline=(void*)sNodeBase_sline;
                            _inf_value6->sname=(void*)sNodeBase_sname;
                            _inf_value6->terminated=(void*)sNodeBase_terminated;
                            _inf_value6->kind=(void*)sWStringNode_kind;
                            __result155__ = __result_obj__ = ((struct sNode*)(right_value421=_inf_value6));
                            come_call_finalizer3(value_283,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            wstr_294 = come_decrement_ref_count2(wstr_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(right_value416,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value417,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value421) { right_value421 = come_decrement_ref_count2(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result155__;
                            come_call_finalizer3(value_283,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            wstr_294 = come_decrement_ref_count2(wstr_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if((*info->p==115||*info->p==83)&&*(info->p+1)==34) {
                                info->p+=2;
                                sline_297=info->sline;
                                exps_298=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value423=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value422=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1462, "list$1sNodeph"))))))));
                                come_call_finalizer3(right_value422,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value423,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                value_299=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value425=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value424=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1463, "buffer"))))))));
                                come_call_finalizer3(right_value424,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value425,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                while(1) {
                                    if(*info->p==34) {
                                        info->p++;
                                        p_300=info->p;
                                        sline_301=info->sline;
                                        skip_spaces_and_lf(info);
                                        if(*info->p==34) {
                                            info->p++;
                                        }
                                        else {
                                            info->p=p_300;
                                            info->sline=sline_301;
                                            break;
                                        }
                                    }
                                    else {
                                        if(*info->p==37) {
                                            buffer_append_char(value_299,37);
                                            buffer_append_char(value_299,37);
                                            info->p++;
                                        }
                                        else {
                                            if(*info->p==36) {
                                                info->p++;
                                                exp_302=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value426=expression_v13(info))));
                                                if(right_value426) { right_value426 = come_decrement_ref_count2(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                list$1sNodeph_add(exps_298,(struct sNode*)come_increment_ref_count(exp_302));
                                                buffer_append_str(value_299,"%s");
                                                p_303=info->p-1;
                                                while(*p_303==32||*p_303==9) {
                                                    p_303--;
                                                }
                                                info->p=p_303+1;
                                                if(exp_302) { exp_302 = come_decrement_ref_count2(exp_302, ((struct sNode*)exp_302)->finalize, ((struct sNode*)exp_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(*info->p==92) {
                                                    buffer_append_char(value_299,92);
                                                    info->p++;
                                                    if(xisdigit(*info->p)) {
                                                        len_304=0;
                                                        while(xisdigit(*info->p)&&len_304<3) {
                                                            buffer_append_char(value_299,*info->p);
                                                            info->p++;
                                                            len_304++;
                                                        }
                                                    }
                                                    else {
                                                        if(*info->p==120||*info->p==88) {
                                                            buffer_append_char(value_299,*info->p);
                                                            info->p++;
                                                            while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                                                                buffer_append_char(value_299,*info->p);
                                                                info->p++;
                                                            }
                                                        }
                                                        else {
                                                            if(*info->p==123) {
                                                                info->p++;
                                                                exp_305=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value427=expression_v13(info))));
                                                                if(right_value427) { right_value427 = come_decrement_ref_count2(right_value427, ((struct sNode*)right_value427)->finalize, ((struct sNode*)right_value427)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                list$1sNodeph_add(exps_298,(struct sNode*)come_increment_ref_count(exp_305));
                                                                if(*info->p==125) {
                                                                    info->p++;
                                                                }
                                                                buffer_append_str(value_299,"%s");
                                                                if(exp_305) { exp_305 = come_decrement_ref_count2(exp_305, ((struct sNode*)exp_305)->finalize, ((struct sNode*)exp_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                switch (*info->p) {
                                                                    case 48:
                                                                    buffer_append_char(value_299,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 110:
                                                                    buffer_append_char(value_299,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 116:
                                                                    buffer_append_char(value_299,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 114:
                                                                    buffer_append_char(value_299,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 118:
                                                                    buffer_append_char(value_299,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 102:
                                                                    buffer_append_char(value_299,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 97:
                                                                    buffer_append_char(value_299,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 98:
                                                                    buffer_append_char(value_299,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 92:
                                                                    buffer_append_char(value_299,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    default:
                                                                    buffer_append_char(value_299,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(*info->p==0) {
                                                        sline2_306=info->sline;
                                                        info->sline=sline_297;
                                                        err_msg(info,"close \" to make embbeded string value");
                                                        exit(2);
                                                    }
                                                    else {
                                                        if(*info->p==10) {
                                                            info->sline++;
                                                        }
                                                        buffer_append_char(value_299,*info->p);
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                skip_spaces_and_lf(info);
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1608, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sSStringNode*)(right_value430=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value428=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1608, "sSStringNode")))),(char*)come_increment_ref_count(((char*)(right_value429=buffer_to_string(value_299)))),(struct list$1sNodeph*)come_increment_ref_count(exps_298),sline_297,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sSStringNode_finalize;
                                _inf_value7->clone=(void*)sSStringNode_clone;
                                _inf_value7->compile=(void*)sSStringNode_compile;
                                _inf_value7->sline=(void*)sNodeBase_sline;
                                _inf_value7->sname=(void*)sNodeBase_sname;
                                _inf_value7->terminated=(void*)sNodeBase_terminated;
                                _inf_value7->kind=(void*)sSStringNode_kind;
                                __result158__ = __result_obj__ = ((struct sNode*)(right_value435=_inf_value7));
                                come_call_finalizer3(exps_298,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(value_299,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(right_value428,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                                right_value429 = come_decrement_ref_count2(right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value430,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value435) { right_value435 = come_decrement_ref_count2(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result158__;
                                come_call_finalizer3(exps_298,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(value_299,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                if(*info->p==91) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    p_308=info->p;
                                    no_comma_309=info->no_comma;
                                    info->no_comma=(_Bool)1;
                                    node_310=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value436=expression_v13(info))));
                                    if(right_value436) { right_value436 = come_decrement_ref_count2(right_value436, ((struct sNode*)right_value436)->finalize, ((struct sNode*)right_value436)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    info->no_comma=no_comma_309;
                                    p2_311=info->p;
                                    first_element_source_312=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value438=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value437=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1625, "buffer"))))))));
                                    come_call_finalizer3(right_value437,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value438,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    buffer_append(first_element_source_312,p_308,p2_311-p_308);
                                    buffer_append_char(first_element_source_312,0);
                                    list_elements_313=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value440=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value439=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1630, "list$1sNodeph"))))))));
                                    come_call_finalizer3(right_value439,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value440,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    map_keys_314=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value442=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value441=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1632, "list$1sNodeph"))))))));
                                    come_call_finalizer3(right_value441,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value442,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    map_elements_315=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value444=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value443=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1633, "list$1sNodeph"))))))));
                                    come_call_finalizer3(right_value443,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value444,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(*info->p==58) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        list$1sNodeph_push_back(map_keys_314,(struct sNode*)come_increment_ref_count(node_310));
                                        no_comma_316=info->no_comma;
                                        info->no_comma=(_Bool)1;
                                        node2_317=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value445=expression_v13(info))));
                                        if(right_value445) { right_value445 = come_decrement_ref_count2(right_value445, ((struct sNode*)right_value445)->finalize, ((struct sNode*)right_value445)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        info->no_comma=no_comma_316;
                                        list$1sNodeph_push_back(map_elements_315,(struct sNode*)come_increment_ref_count(node2_317));
                                        if(*info->p==93) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1655, "struct sNode");
                                            _inf_obj_value8=come_increment_ref_count(((struct sMapNode*)(right_value447=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value446=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1655, "sMapNode")))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_314),(struct list$1sNodeph*)come_increment_ref_count(map_elements_315),info))));
                                            _inf_value8->_protocol_obj=_inf_obj_value8;
                                            _inf_value8->finalize=(void*)sMapNode_finalize;
                                            _inf_value8->clone=(void*)sMapNode_clone;
                                            _inf_value8->compile=(void*)sMapNode_compile;
                                            _inf_value8->sline=(void*)sNodeBase_sline;
                                            _inf_value8->sname=(void*)sNodeBase_sname;
                                            _inf_value8->terminated=(void*)sNodeBase_terminated;
                                            _inf_value8->kind=(void*)sMapNode_kind;
                                            __result161__ = __result_obj__ = ((struct sNode*)(right_value452=_inf_value8));
                                            if(node2_317) { node2_317 = come_decrement_ref_count2(node2_317, ((struct sNode*)node2_317)->finalize, ((struct sNode*)node2_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node_310) { node_310 = come_decrement_ref_count2(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer3(first_element_source_312,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(list_elements_313,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(map_keys_314,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(map_elements_315,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value446,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value447,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(right_value452) { right_value452 = come_decrement_ref_count2(right_value452, ((struct sNode*)right_value452)->finalize, ((struct sNode*)right_value452)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result161__;
                                        }
                                        else {
                                            expected_next_character(44,info);
                                            while((_Bool)1) {
                                                no_comma_319=info->no_comma;
                                                info->no_comma=(_Bool)1;
                                                node2_320=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value453=expression_v13(info))));
                                                if(right_value453) { right_value453 = come_decrement_ref_count2(right_value453, ((struct sNode*)right_value453)->finalize, ((struct sNode*)right_value453)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                info->no_comma=no_comma_319;
                                                list$1sNodeph_push_back(map_keys_314,(struct sNode*)come_increment_ref_count(node2_320));
                                                expected_next_character(58,info);
                                                no_comma_319=info->no_comma;
                                                info->no_comma=(_Bool)1;
                                                node3_321=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value454=expression_v13(info))));
                                                if(right_value454) { right_value454 = come_decrement_ref_count2(right_value454, ((struct sNode*)right_value454)->finalize, ((struct sNode*)right_value454)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                info->no_comma=no_comma_319;
                                                list$1sNodeph_push_back(map_elements_315,(struct sNode*)come_increment_ref_count(node3_321));
                                                if(*info->p==0) {
                                                    err_msg(info,"invalid source end");
                                                    exit(2);
                                                }
                                                else {
                                                    if(*info->p==44) {
                                                        info->p++;
                                                        skip_spaces_and_lf(info);
                                                    }
                                                    else {
                                                        if(*info->p==93) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            if(node2_320) { node2_320 = come_decrement_ref_count2(node2_320, ((struct sNode*)node2_320)->finalize, ((struct sNode*)node2_320)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            if(node3_321) { node3_321 = come_decrement_ref_count2(node3_321, ((struct sNode*)node3_321)->finalize, ((struct sNode*)node3_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            break;
                                                        }
                                                        else {
                                                            err_msg(info,"invalid character(%c)(3)",*info->p);
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                if(node2_320) { node2_320 = come_decrement_ref_count2(node2_320, ((struct sNode*)node2_320)->finalize, ((struct sNode*)node2_320)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                if(node3_321) { node3_321 = come_decrement_ref_count2(node3_321, ((struct sNode*)node3_321)->finalize, ((struct sNode*)node3_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1700, "struct sNode");
                                            _inf_obj_value9=come_increment_ref_count(((struct sMapNode*)(right_value456=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value455=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1700, "sMapNode")))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_314),(struct list$1sNodeph*)come_increment_ref_count(map_elements_315),info))));
                                            _inf_value9->_protocol_obj=_inf_obj_value9;
                                            _inf_value9->finalize=(void*)sMapNode_finalize;
                                            _inf_value9->clone=(void*)sMapNode_clone;
                                            _inf_value9->compile=(void*)sMapNode_compile;
                                            _inf_value9->sline=(void*)sNodeBase_sline;
                                            _inf_value9->sname=(void*)sNodeBase_sname;
                                            _inf_value9->terminated=(void*)sNodeBase_terminated;
                                            _inf_value9->kind=(void*)sMapNode_kind;
                                            __result164__ = __result_obj__ = ((struct sNode*)(right_value461=_inf_value9));
                                            if(node2_317) { node2_317 = come_decrement_ref_count2(node2_317, ((struct sNode*)node2_317)->finalize, ((struct sNode*)node2_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node_310) { node_310 = come_decrement_ref_count2(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer3(first_element_source_312,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(list_elements_313,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(map_keys_314,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(map_elements_315,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(right_value455,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(right_value456,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(right_value461) { right_value461 = come_decrement_ref_count2(right_value461, ((struct sNode*)right_value461)->finalize, ((struct sNode*)right_value461)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result164__;
                                        }
                                        if(node2_317) { node2_317 = come_decrement_ref_count2(node2_317, ((struct sNode*)node2_317)->finalize, ((struct sNode*)node2_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(*info->p==93) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            list$1sNodeph_push_back(list_elements_313,(struct sNode*)come_increment_ref_count(node_310));
                                        }
                                        else {
                                            if(*info->p==44) {
                                                info->p++;
                                                skip_spaces_and_lf(info);
                                                list$1sNodeph_push_back(list_elements_313,(struct sNode*)come_increment_ref_count(node_310));
                                                while((_Bool)1) {
                                                    no_comma_323=info->no_comma;
                                                    info->no_comma=(_Bool)1;
                                                    node2_324=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value462=expression_v13(info))));
                                                    if(right_value462) { right_value462 = come_decrement_ref_count2(right_value462, ((struct sNode*)right_value462)->finalize, ((struct sNode*)right_value462)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    info->no_comma=no_comma_323;
                                                    list$1sNodeph_push_back(list_elements_313,(struct sNode*)come_increment_ref_count(node2_324));
                                                    if(*info->p==0) {
                                                        err_msg(info,"invalid source end");
                                                        exit(2);
                                                    }
                                                    else {
                                                        if(*info->p==44) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                        }
                                                        else {
                                                            if(*info->p==93) {
                                                                info->p++;
                                                                skip_spaces_and_lf(info);
                                                                if(node2_324) { node2_324 = come_decrement_ref_count2(node2_324, ((struct sNode*)node2_324)->finalize, ((struct sNode*)node2_324)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                break;
                                                            }
                                                            else {
                                                                err_msg(info,"invalid character(%c)(4)",*info->p);
                                                                exit(2);
                                                            }
                                                        }
                                                    }
                                                    if(node2_324) { node2_324 = come_decrement_ref_count2(node2_324, ((struct sNode*)node2_324)->finalize, ((struct sNode*)node2_324)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                            }
                                            else {
                                                err_msg(info,"invalid character(%c)(5)",*info->p);
                                                exit(2);
                                            }
                                        }
                                    }
                                    if(list$1sNodeph_length(list_elements_313)>0) {
                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1751, "struct sNode");
                                        _inf_obj_value10=come_increment_ref_count(((struct sListNode*)(right_value464=sListNode_initialize((struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value463=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 1751, "sListNode")))),(struct list$1sNodeph*)come_increment_ref_count(list_elements_313),info))));
                                        _inf_value10->_protocol_obj=_inf_obj_value10;
                                        _inf_value10->finalize=(void*)sListNode_finalize;
                                        _inf_value10->clone=(void*)sListNode_clone;
                                        _inf_value10->compile=(void*)sListNode_compile;
                                        _inf_value10->sline=(void*)sNodeBase_sline;
                                        _inf_value10->sname=(void*)sNodeBase_sname;
                                        _inf_value10->terminated=(void*)sNodeBase_terminated;
                                        _inf_value10->kind=(void*)sListNode_kind;
                                        __result167__ = __result_obj__ = ((struct sNode*)(right_value468=_inf_value10));
                                        if(node_310) { node_310 = come_decrement_ref_count2(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(first_element_source_312,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(list_elements_313,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(map_keys_314,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(map_elements_315,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value463,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value464,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value468) { right_value468 = come_decrement_ref_count2(right_value468, ((struct sNode*)right_value468)->finalize, ((struct sNode*)right_value468)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result167__;
                                    }
                                    else {
                                    }
                                    if(node_310) { node_310 = come_decrement_ref_count2(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(first_element_source_312,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(list_elements_313,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(map_keys_314,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(map_elements_315,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    ((struct sNode*)(right_value469=expression_node_v1(info)));
                                    if(right_value469) { right_value469 = come_decrement_ref_count2(right_value469, ((struct sNode*)right_value469)->finalize, ((struct sNode*)right_value469)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __result168__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result168__;
}

static void sStrNode_finalize(struct sStrNode* self){
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)&&self->value!=((void*)0)) {
                    self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__;
struct sStrNode* __result141__;
void* right_value390;
struct sStrNode* result_258;
void* right_value391;
char* __dec_obj115;
void* right_value392;
char* __dec_obj116;
struct sStrNode* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value390 = (void*)0;
memset(&result_258, 0, sizeof(struct sStrNode*));
right_value391 = (void*)0;
right_value392 = (void*)0;
                if(self==(void*)0) {
                    __result141__ = __result_obj__ = (void*)0;
                    return __result141__;
                }
                result_258=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value390=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "sStrNode"))));
                come_call_finalizer3(right_value390,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)) {
                    result_258->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj115=result_258->sname;
                    result_258->sname=(char*)come_increment_ref_count(((char*)(right_value391=string_clone(self->sname))));
                    __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value391 = come_decrement_ref_count2(right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(self!=((void*)0)&&self->value!=((void*)0)) {
                    __dec_obj116=result_258->value;
                    result_258->value=(char*)come_increment_ref_count(((char*)(right_value392=string_clone(self->value))));
                    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value392 = come_decrement_ref_count2(right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result142__ = __result_obj__ = result_258;
                come_call_finalizer3(result_258,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result142__;
                come_call_finalizer3(result_258,sStrNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sRegexNode_finalize(struct sRegexNode* self){
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(self!=((void*)0)&&self->str!=((void*)0)) {
                        self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self){
void* __result_obj__;
struct sRegexNode* __result144__;
void* right_value399;
struct sRegexNode* result_263;
void* right_value400;
char* __dec_obj117;
void* right_value401;
char* __dec_obj118;
struct sRegexNode* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value399 = (void*)0;
memset(&result_263, 0, sizeof(struct sRegexNode*));
right_value400 = (void*)0;
right_value401 = (void*)0;
                    if(self==(void*)0) {
                        __result144__ = __result_obj__ = (void*)0;
                        return __result144__;
                    }
                    result_263=(struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value399=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "sRegexNode_clone", 3, "sRegexNode"))));
                    come_call_finalizer3(right_value399,sRegexNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(self!=((void*)0)) {
                        result_263->sline=self->sline;
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        __dec_obj117=result_263->sname;
                        result_263->sname=(char*)come_increment_ref_count(((char*)(right_value400=string_clone(self->sname))));
                        __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value400 = come_decrement_ref_count2(right_value400, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(self!=((void*)0)&&self->str!=((void*)0)) {
                        __dec_obj118=result_263->str;
                        result_263->str=(char*)come_increment_ref_count(((char*)(right_value401=string_clone(self->str))));
                        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value401 = come_decrement_ref_count2(right_value401, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(self!=((void*)0)) {
                        result_263->global=self->global;
                    }
                    if(self!=((void*)0)) {
                        result_263->ignore_case=self->ignore_case;
                    }
                    __result145__ = __result_obj__ = result_263;
                    come_call_finalizer3(result_263,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result145__;
                    come_call_finalizer3(result_263,sRegexNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sCharNode_finalize(struct sCharNode* self){
                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__;
struct sCharNode* __result147__;
void* right_value405;
struct sCharNode* result_270;
void* right_value406;
char* __dec_obj119;
struct sCharNode* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value405 = (void*)0;
memset(&result_270, 0, sizeof(struct sCharNode*));
right_value406 = (void*)0;
                            if(self==(void*)0) {
                                __result147__ = __result_obj__ = (void*)0;
                                return __result147__;
                            }
                            result_270=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value405=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "sCharNode"))));
                            come_call_finalizer3(right_value405,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(self!=((void*)0)) {
                                result_270->sline=self->sline;
                            }
                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                __dec_obj119=result_270->sname;
                                result_270->sname=(char*)come_increment_ref_count(((char*)(right_value406=string_clone(self->sname))));
                                __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value406 = come_decrement_ref_count2(right_value406, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(self!=((void*)0)) {
                                result_270->value=self->value;
                            }
                            __result148__ = __result_obj__ = result_270;
                            come_call_finalizer3(result_270,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result148__;
                            come_call_finalizer3(result_270,sCharNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sWCharNode_finalize(struct sWCharNode* self){
                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__;
struct sWCharNode* __result150__;
void* right_value410;
struct sWCharNode* result_281;
void* right_value411;
char* __dec_obj120;
struct sWCharNode* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value410 = (void*)0;
memset(&result_281, 0, sizeof(struct sWCharNode*));
right_value411 = (void*)0;
                                if(self==(void*)0) {
                                    __result150__ = __result_obj__ = (void*)0;
                                    return __result150__;
                                }
                                result_281=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value410=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "sWCharNode"))));
                                come_call_finalizer3(right_value410,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(self!=((void*)0)) {
                                    result_281->sline=self->sline;
                                }
                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                    __dec_obj120=result_281->sname;
                                    result_281->sname=(char*)come_increment_ref_count(((char*)(right_value411=string_clone(self->sname))));
                                    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(self!=((void*)0)) {
                                    result_281->value=self->value;
                                }
                                if(self!=((void*)0)) {
                                    result_281->quote=self->quote;
                                }
                                __result151__ = __result_obj__ = result_281;
                                come_call_finalizer3(result_281,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result151__;
                                come_call_finalizer3(result_281,sWCharNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sWStringNode_finalize(struct sWStringNode* self){
                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->value!=((void*)0)) {
                                    self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__;
struct sWStringNode* __result153__;
void* right_value418;
struct sWStringNode* result_296;
void* right_value419;
char* __dec_obj121;
void* right_value420;
unsigned int* __dec_obj122;
struct sWStringNode* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value418 = (void*)0;
memset(&result_296, 0, sizeof(struct sWStringNode*));
right_value419 = (void*)0;
right_value420 = (void*)0;
                                if(self==(void*)0) {
                                    __result153__ = __result_obj__ = (void*)0;
                                    return __result153__;
                                }
                                result_296=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value418=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "sWStringNode"))));
                                come_call_finalizer3(right_value418,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(self!=((void*)0)) {
                                    result_296->sline=self->sline;
                                }
                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                    __dec_obj121=result_296->sname;
                                    result_296->sname=(char*)come_increment_ref_count(((char*)(right_value419=string_clone(self->sname))));
                                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value419 = come_decrement_ref_count2(right_value419, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(self!=((void*)0)&&self->value!=((void*)0)) {
                                    __dec_obj122=result_296->value;
                                    result_296->value=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value420=(unsigned int*)come_memdup(self->value, "sWStringNode_clone", 6, "unsigned int*"))));
                                    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value420 = come_decrement_ref_count2(right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result154__ = __result_obj__ = result_296;
                                come_call_finalizer3(result_296,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result154__;
                                come_call_finalizer3(result_296,sWStringNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sSStringNode_finalize(struct sSStringNode* self){
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->value!=((void*)0)) {
                                        self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->exps!=((void*)0)) {
                                        come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__;
struct sSStringNode* __result156__;
void* right_value431;
struct sSStringNode* result_307;
void* right_value432;
char* __dec_obj123;
void* right_value433;
char* __dec_obj124;
void* right_value434;
struct list$1sNodeph* __dec_obj125;
struct sSStringNode* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value431 = (void*)0;
memset(&result_307, 0, sizeof(struct sSStringNode*));
right_value432 = (void*)0;
right_value433 = (void*)0;
right_value434 = (void*)0;
                                    if(self==(void*)0) {
                                        __result156__ = __result_obj__ = (void*)0;
                                        return __result156__;
                                    }
                                    result_307=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value431=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "sSStringNode"))));
                                    come_call_finalizer3(right_value431,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(self!=((void*)0)) {
                                        result_307->sline=self->sline;
                                    }
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        __dec_obj123=result_307->sname;
                                        result_307->sname=(char*)come_increment_ref_count(((char*)(right_value432=string_clone(self->sname))));
                                        __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value432 = come_decrement_ref_count2(right_value432, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)&&self->value!=((void*)0)) {
                                        __dec_obj124=result_307->value;
                                        result_307->value=(char*)come_increment_ref_count(((char*)(right_value433=string_clone(self->value))));
                                        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value433 = come_decrement_ref_count2(right_value433, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)&&self->exps!=((void*)0)) {
                                        __dec_obj125=result_307->exps;
                                        result_307->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value434=list$1sNodephp_clone(self->exps))));
                                        come_call_finalizer3(__dec_obj125,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(right_value434,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    }
                                    __result157__ = __result_obj__ = result_307;
                                    come_call_finalizer3(result_307,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result157__;
                                    come_call_finalizer3(result_307,sSStringNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMapNode_finalize(struct sMapNode* self){
                                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
                                                if(self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
                                                    come_call_finalizer3(self->map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                if(self!=((void*)0)&&self->map_elements!=((void*)0)) {
                                                    come_call_finalizer3(self->map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__;
struct sMapNode* __result162__;
void* right_value457;
struct sMapNode* result_322;
void* right_value458;
char* __dec_obj129;
void* right_value459;
struct list$1sNodeph* __dec_obj130;
void* right_value460;
struct list$1sNodeph* __dec_obj131;
struct sMapNode* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value457 = (void*)0;
memset(&result_322, 0, sizeof(struct sMapNode*));
right_value458 = (void*)0;
right_value459 = (void*)0;
right_value460 = (void*)0;
                                                if(self==(void*)0) {
                                                    __result162__ = __result_obj__ = (void*)0;
                                                    return __result162__;
                                                }
                                                result_322=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value457=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "sMapNode"))));
                                                come_call_finalizer3(right_value457,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(self!=((void*)0)) {
                                                    result_322->sline=self->sline;
                                                }
                                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                    __dec_obj129=result_322->sname;
                                                    result_322->sname=(char*)come_increment_ref_count(((char*)(right_value458=string_clone(self->sname))));
                                                    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value458 = come_decrement_ref_count2(right_value458, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                if(self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
                                                    __dec_obj130=result_322->map_key_elements;
                                                    result_322->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value459=list$1sNodephp_clone(self->map_key_elements))));
                                                    come_call_finalizer3(__dec_obj130,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(right_value459,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                }
                                                if(self!=((void*)0)&&self->map_elements!=((void*)0)) {
                                                    __dec_obj131=result_322->map_elements;
                                                    result_322->map_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value460=list$1sNodephp_clone(self->map_elements))));
                                                    come_call_finalizer3(__dec_obj131,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                                    come_call_finalizer3(right_value460,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                }
                                                __result163__ = __result_obj__ = result_322;
                                                come_call_finalizer3(result_322,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result163__;
                                                come_call_finalizer3(result_322,sMapNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sListNode_finalize(struct sListNode* self){
                                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(self!=((void*)0)&&self->list_elements!=((void*)0)) {
                                                come_call_finalizer3(self->list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__;
struct sListNode* __result165__;
void* right_value465;
struct sListNode* result_325;
void* right_value466;
char* __dec_obj132;
void* right_value467;
struct list$1sNodeph* __dec_obj133;
struct sListNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value465 = (void*)0;
memset(&result_325, 0, sizeof(struct sListNode*));
right_value466 = (void*)0;
right_value467 = (void*)0;
                                            if(self==(void*)0) {
                                                __result165__ = __result_obj__ = (void*)0;
                                                return __result165__;
                                            }
                                            result_325=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value465=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "sListNode"))));
                                            come_call_finalizer3(right_value465,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(self!=((void*)0)) {
                                                result_325->sline=self->sline;
                                            }
                                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                __dec_obj132=result_325->sname;
                                                result_325->sname=(char*)come_increment_ref_count(((char*)(right_value466=string_clone(self->sname))));
                                                __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value466 = come_decrement_ref_count2(right_value466, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            if(self!=((void*)0)&&self->list_elements!=((void*)0)) {
                                                __dec_obj133=result_325->list_elements;
                                                result_325->list_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value467=list$1sNodephp_clone(self->list_elements))));
                                                come_call_finalizer3(__dec_obj133,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                                come_call_finalizer3(right_value467,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            }
                                            __result166__ = __result_obj__ = result_325;
                                            come_call_finalizer3(result_325,sListNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result166__;
                                            come_call_finalizer3(result_325,sListNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_tuple(struct sInfo* info){
void* __result_obj__;
void* right_value470;
void* right_value471;
struct list$1sNodeph* tuple_elements_326;
char* p_327;
_Bool no_comma_328;
void* right_value472;
struct sNode* node_329;
void* right_value473;
struct sNode* __dec_obj134;
void* right_value474;
void* right_value475;
struct sNode* _inf_value11;
struct sTupleNode* _inf_obj_value11;
void* right_value479;
struct sNode* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value470 = (void*)0;
right_value471 = (void*)0;
memset(&tuple_elements_326, 0, sizeof(struct list$1sNodeph*));
memset(&p_327, 0, sizeof(char*));
memset(&no_comma_328, 0, sizeof(_Bool));
right_value472 = (void*)0;
memset(&node_329, 0, sizeof(struct sNode*));
right_value473 = (void*)0;
right_value474 = (void*)0;
right_value475 = (void*)0;
right_value479 = (void*)0;
    tuple_elements_326=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value471=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value470=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1765, "list$1sNodeph"))))))));
    come_call_finalizer3(right_value470,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value471,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    while((_Bool)1) {
        p_327=info->p;
        no_comma_328=info->no_comma;
        info->no_comma=(_Bool)1;
        node_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value472=expression_v13(info))));
        if(right_value472) { right_value472 = come_decrement_ref_count2(right_value472, ((struct sNode*)right_value472)->finalize, ((struct sNode*)right_value472)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj134=node_329;
        node_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value473=post_position_operator_v99((struct sNode*)come_increment_ref_count(node_329),info))));
        if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); }
        if(right_value473) { right_value473 = come_decrement_ref_count2(right_value473, ((struct sNode*)right_value473)->finalize, ((struct sNode*)right_value473)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        info->no_comma=no_comma_328;
        list$1sNodeph_push_back(tuple_elements_326,(struct sNode*)come_increment_ref_count(node_329));
        if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                if(node_329) { node_329 = come_decrement_ref_count2(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            else {
                err_msg(info,"invalid character(%c) in tuple expression",*info->p);
                exit(2);
            }
        }
        if(node_329) { node_329 = come_decrement_ref_count2(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1794, "struct sNode");
    _inf_obj_value11=come_increment_ref_count(((struct sTupleNode*)(right_value475=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value474=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 1794, "sTupleNode")))),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_326),info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sTupleNode_finalize;
    _inf_value11->clone=(void*)sTupleNode_clone;
    _inf_value11->compile=(void*)sTupleNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sNodeBase_terminated;
    _inf_value11->kind=(void*)sTupleNode_kind;
    __result171__ = __result_obj__ = ((struct sNode*)(right_value479=_inf_value11));
    come_call_finalizer3(tuple_elements_326,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value474,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value475,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value479) { right_value479 = come_decrement_ref_count2(right_value479, ((struct sNode*)right_value479)->finalize, ((struct sNode*)right_value479)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result171__;
    come_call_finalizer3(tuple_elements_326,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static void sTupleNode_finalize(struct sTupleNode* self){
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
            come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__;
struct sTupleNode* __result169__;
void* right_value476;
struct sTupleNode* result_330;
void* right_value477;
char* __dec_obj135;
void* right_value478;
struct list$1sNodeph* __dec_obj136;
struct sTupleNode* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value476 = (void*)0;
memset(&result_330, 0, sizeof(struct sTupleNode*));
right_value477 = (void*)0;
right_value478 = (void*)0;
        if(self==(void*)0) {
            __result169__ = __result_obj__ = (void*)0;
            return __result169__;
        }
        result_330=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value476=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "sTupleNode"))));
        come_call_finalizer3(right_value476,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(self!=((void*)0)) {
            result_330->sline=self->sline;
        }
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            __dec_obj135=result_330->sname;
            result_330->sname=(char*)come_increment_ref_count(((char*)(right_value477=string_clone(self->sname))));
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value477 = come_decrement_ref_count2(right_value477, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
            __dec_obj136=result_330->tuple_elements;
            result_330->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value478=list$1sNodephp_clone(self->tuple_elements))));
            come_call_finalizer3(__dec_obj136,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value478,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __result170__ = __result_obj__ = result_330;
        come_call_finalizer3(result_330,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
        return __result170__;
        come_call_finalizer3(result_330,sTupleNode_finalize, 0, 0, 0, 0, (void*)0);
}

