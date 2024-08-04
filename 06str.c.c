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
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result1__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct buffer*));
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
memset(&result_1, 0, sizeof(struct buffer*));
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
memset(&result_2, 0, sizeof(struct buffer*));
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
memset(&result_3, 0, sizeof(struct buffer*));
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
memset(&result_4, 0, sizeof(struct buffer*));
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
memset(&result_5, 0, sizeof(struct buffer*));
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
memset(&result_6, 0, sizeof(struct smart_pointer$1char*));
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
memset(&result_7, 0, sizeof(struct smart_pointer$1char*));
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
memset(&result_8, 0, sizeof(struct smart_pointer$1short*));
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
memset(&result_9, 0, sizeof(struct smart_pointer$1int*));
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
memset(&result_10, 0, sizeof(struct smart_pointer$1long*));
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










struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
char* __dec_obj12;
struct sStrNode* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj12=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result45__ = __result_obj__ = self;
    come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result45__;
}

char* sStrNode_kind(struct sStrNode* self){
void* __result_obj__;
void* __right_value81 = (void*)0;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    __result46__ = __result_obj__ = ((char*)(__right_value81=__builtin_string("sStrNode")));
    __right_value81 = come_decrement_ref_count2(__right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result46__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value82 = (void*)0;
void* __right_value83 = (void*)0;
struct CVALUE* come_value_47;
void* __right_value84 = (void*)0;
char* __dec_obj13;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct sType* __dec_obj14;
_Bool __result48__;
memset(&come_value_47, 0, sizeof(struct CVALUE*));
    come_value_47=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value82=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "CVALUE"))))));
    come_call_finalizer3(__right_value82,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj13=come_value_47->c_value;
    come_value_47->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj14=come_value_47->type;
    come_value_47->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value85=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 22, "sType")))),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value85,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_47->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_47));
    add_come_last_code(info,"%s;\n",come_value_47->c_value);
    __result48__ = (_Bool)1;
    come_call_finalizer3(come_value_47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result48__;
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
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
void* __right_value87 = (void*)0;
struct list_item$1CVALUEph* litem_54;
struct CVALUE* __dec_obj15;
void* __right_value88 = (void*)0;
struct list_item$1CVALUEph* litem_55;
struct CVALUE* __dec_obj16;
void* __right_value89 = (void*)0;
struct list_item$1CVALUEph* litem_56;
struct CVALUE* __dec_obj17;
struct list$1CVALUEph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_54, 0, sizeof(struct list_item$1CVALUEph*));
memset(&litem_55, 0, sizeof(struct list_item$1CVALUEph*));
memset(&litem_56, 0, sizeof(struct list_item$1CVALUEph*));
    if(self->len==0) {
        litem_54=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value87=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 219, "list_item$1CVALUEph"))));
        come_call_finalizer3(__right_value87,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_54->prev=((void*)0);
        litem_54->next=((void*)0);
        __dec_obj15=litem_54->item;
        litem_54->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj15,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_54;
        self->head=litem_54;
    }
    else {
        if(self->len==1) {
            litem_55=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value88=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 229, "list_item$1CVALUEph"))));
            come_call_finalizer3(__right_value88,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_55->prev=self->head;
            litem_55->next=((void*)0);
            __dec_obj16=litem_55->item;
            litem_55->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj16,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_55;
            self->head->next=litem_55;
        }
        else {
            litem_56=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value89=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 239, "list_item$1CVALUEph"))));
            come_call_finalizer3(__right_value89,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_56->prev=self->tail;
            litem_56->next=((void*)0);
            __dec_obj17=litem_56->item;
            litem_56->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj17,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_56;
            self->tail=litem_56;
        }
    }
    self->len++;
    __result47__ = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result47__;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
char* __dec_obj18;
void* __right_value99 = (void*)0;
struct list$1sNodeph* __dec_obj22;
struct sSStringNode* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value90=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value90,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj18=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj22=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(exps));
    come_call_finalizer3(__dec_obj22,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result55__ = __result_obj__ = self;
    come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result55__;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __result_obj__;
void* __right_value100 = (void*)0;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    __result56__ = __result_obj__ = ((char*)(__right_value100=__builtin_string("sSStringNode")));
    __right_value100 = come_decrement_ref_count2(__right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result56__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value101 = (void*)0;
void* __right_value102 = (void*)0;
struct CVALUE* come_value_65;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
struct buffer* buf_66;
struct list$1sNodeph* o2_saved_67;
struct sNode* it_70;
_Bool __result63__;
void* __right_value105 = (void*)0;
struct CVALUE* come_value_73;
void* __right_value106 = (void*)0;
char* method_name_74;
struct sType* obj_type_77;
struct sType* obj_type2_78;
void* __right_value107 = (void*)0;
void* __right_value108 = (void*)0;
char* __dec_obj23;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
struct buffer* buf2_79;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
struct sType* type_80;
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
char* c_value_81;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
struct sType* type2_82;
void* __right_value117 = (void*)0;
char* __dec_obj24;
void* __right_value146 = (void*)0;
struct sType* __dec_obj45;
_Bool __result80__;
memset(&come_value_65, 0, sizeof(struct CVALUE*));
memset(&buf_66, 0, sizeof(struct buffer*));
memset(&o2_saved_67, 0, sizeof(struct list$1sNodeph*));
memset(&it_70, 0, sizeof(struct sNode*));
memset(&come_value_73, 0, sizeof(struct CVALUE*));
memset(&obj_type_77, 0, sizeof(struct sType*));
memset(&obj_type2_78, 0, sizeof(struct sType*));
memset(&buf2_79, 0, sizeof(struct buffer*));
memset(&type_80, 0, sizeof(struct sType*));
memset(&type2_82, 0, sizeof(struct sType*));
    come_value_65=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value101=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 51, "CVALUE"))))));
    come_call_finalizer3(__right_value101,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    buf_66=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value103=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 53, "buffer"))))));
    come_call_finalizer3(__right_value103,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(buf_66,"xsprintf(\"");
    buffer_append_str(buf_66,self->value);
    buffer_append_str(buf_66,"\"");
    if(list$1sNodeph_length(self->exps)>0) {
        for(        o2_saved_67=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_70=list$1sNodeph_begin((o2_saved_67));        !list$1sNodeph_end((o2_saved_67));        it_70=list$1sNodeph_next((o2_saved_67))        ){
            if(!node_compile(it_70,info)) {
                __result63__ = (_Bool)0;
                come_call_finalizer3(o2_saved_67,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_65,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_66,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result63__;
            }
            come_value_73=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            method_name_74=(char*)come_increment_ref_count(create_method_name(come_value_73->type,(_Bool)0,"to_string",info,(_Bool)1));
            if(map$2charphsFunph_at(info->funcs,method_name_74,((void*)0))==((void*)0)) {
                obj_type_77=come_value_73->type->mNoSolvedGenericsType->v1;
                if(obj_type_77&&list$1sTypeph_length(obj_type_77->mGenericsTypes)>0) {
                    obj_type2_78=come_value_73->type;
                    __dec_obj23=method_name_74;
                    method_name_74=(char*)come_increment_ref_count(make_generics_function(obj_type2_78,(char*)come_increment_ref_count(((char*)(__right_value107=__builtin_string("to_string")))),info,(_Bool)1));
                    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __right_value107 = come_decrement_ref_count2(__right_value107, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"require to_string implementation(%s)",come_value_73->type->mClass->mName);
                    exit(1);
                }
            }
            buf2_79=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value109=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 82, "buffer"))))));
            come_call_finalizer3(__right_value109,buffer_finalize, 0, 1, 0, 0, (void*)0);
            buffer_append_str(buf2_79,method_name_74);
            buffer_append_str(buf2_79,"(");
            buffer_append_str(buf2_79,come_value_73->c_value);
            buffer_append_str(buf2_79,")");
            type_80=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value111=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 89, "sType")))),"char*",(_Bool)0,info));
            come_call_finalizer3(__right_value111,sType_finalize, 0, 1, 0, 0, (void*)0);
            type_80->mHeap=(_Bool)1;
            c_value_81=(char*)come_increment_ref_count(append_object_to_right_values(((char*)(__right_value113=buffer_to_string(buf2_79))),(struct sType*)come_increment_ref_count(type_80),info));
            __right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_66,",");
            buffer_append_str(buf_66,c_value_81);
            come_call_finalizer3(come_value_73,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            method_name_74 = come_decrement_ref_count2(method_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_79,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_80,sType_finalize, 0, 0, 0, 0, (void*)0);
            c_value_81 = come_decrement_ref_count2(c_value_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_67,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_66,")");
    type2_82=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value115=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 101, "sType")))),"char*",(_Bool)0,info));
    come_call_finalizer3(__right_value115,sType_finalize, 0, 1, 0, 0, (void*)0);
    type2_82->mHeap=(_Bool)1;
    __dec_obj24=come_value_65->c_value;
    come_value_65->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_66));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj45=come_value_65->type;
    come_value_65->type=(struct sType*)come_increment_ref_count(sType_clone(type2_82));
    come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_65->var=((void*)0);
    append_object_to_right_values2(come_value_65,(struct sType*)come_increment_ref_count(type2_82),info);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_65));
    add_come_last_code(info,"%s;\n",come_value_65->c_value);
    __result80__ = (_Bool)1;
    come_call_finalizer3(come_value_65,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_66,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_82,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result80__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result49__;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1sNodeph* result_57;
struct list_item$1sNodeph* it_58;
void* __right_value98 = (void*)0;
struct list$1sNodeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_57, 0, sizeof(struct list$1sNodeph*));
memset(&it_58, 0, sizeof(struct list_item$1sNodeph*));
    if(self==((void*)0)) {
        __result49__ = __result_obj__ = ((void*)0);
        return __result49__;
    }
    result_57=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value92=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))));
    come_call_finalizer3(__right_value92,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    it_58=self->head;
    while(it_58!=((void*)0)) {
        list$1sNodeph_add(result_57,(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value98=sNode_clone(it_58->item)))));
        if(__right_value98) { __right_value98 = come_decrement_ref_count2(__right_value98, ((struct sNode*)__right_value98)->finalize, ((struct sNode*)__right_value98)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        it_58=it_58->next;
    }
    __result54__ = __result_obj__ = result_57;
    come_call_finalizer3(result_57,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result54__;
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
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* __right_value94 = (void*)0;
struct list_item$1sNodeph* litem_59;
struct sNode* __dec_obj19;
void* __right_value95 = (void*)0;
struct list_item$1sNodeph* litem_60;
struct sNode* __dec_obj20;
void* __right_value96 = (void*)0;
struct list_item$1sNodeph* litem_61;
struct sNode* __dec_obj21;
struct list$1sNodeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_59, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_60, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_61, 0, sizeof(struct list_item$1sNodeph*));
    if(self->len==0) {
        litem_59=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value94=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
        come_call_finalizer3(__right_value94,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_59->prev=((void*)0);
        litem_59->next=((void*)0);
        __dec_obj19=litem_59->item;
        litem_59->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count2(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_59;
        self->head=litem_59;
    }
    else {
        if(self->len==1) {
            litem_60=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value95=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value95,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_60->prev=self->head;
            litem_60->next=((void*)0);
            __dec_obj20=litem_60->item;
            litem_60->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count2(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_60;
            self->head->next=litem_60;
        }
        else {
            litem_61=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value96,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_61->prev=self->tail;
            litem_61->next=((void*)0);
            __dec_obj21=litem_61->item;
            litem_61->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_61;
            self->tail=litem_61;
        }
    }
    self->len++;
    __result51__ = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result51__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
struct sNode* __result52__;
void* __right_value97 = (void*)0;
struct sNode* result_62;
struct sNode* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_62, 0, sizeof(struct sNode*));
    if(self==(void*)0) {
        __result52__ = __result_obj__ = (void*)0;
        return __result52__;
    }
    result_62=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_62->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_62->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_62->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_62->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_62->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_62->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_62->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result_62->kind=self->kind;
    }
    __result53__ = __result_obj__ = result_62;
    if(result_62) { result_62 = come_decrement_ref_count2(result_62, ((struct sNode*)result_62)->finalize, ((struct sNode*)result_62)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result53__;
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
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

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_68;
struct sNode* __result57__;
struct sNode* __result58__;
struct sNode* result_69;
struct sNode* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_68, 0, sizeof(struct sNode*));
memset(&result_69, 0, sizeof(struct sNode*));
    if(self==((void*)0)) {
        memset(&result_68,0,sizeof(struct sNode*));
        __result57__ = __result_obj__ = result_68;
        return __result57__;
    }
    self->it=self->head;
    if(self->it) {
        __result58__ = __result_obj__ = self->it->item;
        return __result58__;
    }
    memset(&result_69,0,sizeof(struct sNode*));
    __result59__ = __result_obj__ = result_69;
    return __result59__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_71;
struct sNode* __result60__;
struct sNode* __result61__;
struct sNode* result_72;
struct sNode* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_71, 0, sizeof(struct sNode*));
memset(&result_72, 0, sizeof(struct sNode*));
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_71,0,sizeof(struct sNode*));
        __result60__ = __result_obj__ = result_71;
        return __result60__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result61__ = __result_obj__ = self->it->item;
        return __result61__;
    }
    memset(&result_72,0,sizeof(struct sNode*));
    __result62__ = __result_obj__ = result_72;
    return __result62__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_75;
unsigned int it_76;
struct sFun* __result64__;
struct sFun* __result65__;
struct sFun* __result66__;
struct sFun* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
    hash_75=string_get_hash_key(((char*)key))%self->size;
    it_76=hash_75;
    while((_Bool)1) {
        if(self->item_existance[it_76]) {
            if(string_equals(self->keys[it_76],key)) {
                __result64__ = __result_obj__ = self->items[it_76];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result64__;
            }
            it_76++;
            if(it_76>=self->size) {
                it_76=0;
            }
            else {
                if(it_76==hash_75) {
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
void* __right_value118 = (void*)0;
struct sType* result_83;
void* __right_value125 = (void*)0;
struct list$1sTypeph* __dec_obj28;
void* __right_value128 = (void*)0;
struct tuple1$1sTypeph* __dec_obj30;
void* __right_value129 = (void*)0;
struct tuple1$1sTypeph* __dec_obj31;
void* __right_value130 = (void*)0;
char* __dec_obj32;
void* __right_value131 = (void*)0;
struct list$1sTypeph* __dec_obj33;
void* __right_value132 = (void*)0;
struct list$1sNodeph* __dec_obj34;
void* __right_value133 = (void*)0;
struct list$1sTypeph* __dec_obj35;
void* __right_value140 = (void*)0;
struct list$1charph* __dec_obj39;
void* __right_value141 = (void*)0;
struct tuple1$1sTypeph* __dec_obj40;
void* __right_value142 = (void*)0;
struct sNode* __dec_obj41;
void* __right_value143 = (void*)0;
struct sNode* __dec_obj42;
void* __right_value144 = (void*)0;
char* __dec_obj43;
void* __right_value145 = (void*)0;
char* __dec_obj44;
struct sType* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_83, 0, sizeof(struct sType*));
    if(self==(void*)0) {
        __result68__ = __result_obj__ = (void*)0;
        return __result68__;
    }
    result_83=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_83->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
        __dec_obj28=result_83->mMultipleTypes;
        result_83->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mMultipleTypes));
        come_call_finalizer3(__dec_obj28,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj30=result_83->mNoSolvedGenericsType;
        result_83->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj31=result_83->mOriginalLoadVarType;
        result_83->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj32=result_83->mGenericsName;
        result_83->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj33=result_83->mGenericsTypes;
        result_83->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj33,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj34=result_83->mArrayNum;
        result_83->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj34,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_83->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj35=result_83->mParamTypes;
        result_83->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj35,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj39=result_83->mParamNames;
        result_83->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj39,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj40=result_83->mResultType;
        result_83->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj40,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_83->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj41=result_83->mAlignas;
        result_83->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_83->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result_83->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result_83->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result_83->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result_83->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result_83->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result_83->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result_83->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result_83->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result_83->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result_83->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result_83->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result_83->mImmutable=self->mImmutable;
    }
    if(self!=((void*)0)) {
        result_83->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result_83->mDummyHeap=self->mDummyHeap;
    }
    if(self!=((void*)0)) {
        result_83->mDelegate=self->mDelegate;
    }
    if(self!=((void*)0)) {
        result_83->mShare=self->mShare;
    }
    if(self!=((void*)0)) {
        result_83->mClone=self->mClone;
    }
    if(self!=((void*)0)) {
        result_83->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result_83->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result_83->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result_83->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result_83->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result_83->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(self!=((void*)0)) {
        result_83->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result_83->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj42=result_83->mSizeNum;
        result_83->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_83->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_83->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj43=result_83->mOriginalTypeName;
        result_83->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_83->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(self!=((void*)0)) {
        result_83->mFunctionParam=self->mFunctionParam;
    }
    if(self!=((void*)0)) {
        result_83->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result_83->mGenericsStruct=self->mGenericsStruct;
    }
    if(self!=((void*)0)) {
        result_83->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(self!=((void*)0)) {
        result_83->mComeMemCore=self->mComeMemCore;
    }
    if(self!=((void*)0)) {
        result_83->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result_83->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result_83->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj44=result_83->mAsmName;
        result_83->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_83->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)) {
        result_83->mLambdaArray=self->mLambdaArray;
    }
    if(self!=((void*)0)) {
        result_83->mNoNumberArray=self->mNoNumberArray;
    }
    __result79__ = __result_obj__ = result_83;
    come_call_finalizer3(result_83,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result79__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result69__;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
struct list$1sTypeph* result_84;
struct list_item$1sTypeph* it_85;
void* __right_value124 = (void*)0;
struct list$1sTypeph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_84, 0, sizeof(struct list$1sTypeph*));
memset(&it_85, 0, sizeof(struct list_item$1sTypeph*));
    if(self==((void*)0)) {
        __result69__ = __result_obj__ = ((void*)0);
        return __result69__;
    }
    result_84=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value119=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))));
    come_call_finalizer3(__right_value119,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    it_85=self->head;
    while(it_85!=((void*)0)) {
        list$1sTypeph_add(result_84,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value124=sType_clone(it_85->item)))));
        come_call_finalizer3(__right_value124,sType_finalize, 0, 1, 0, 0, __result_obj__);
        it_85=it_85->next;
    }
    __result72__ = __result_obj__ = result_84;
    come_call_finalizer3(result_84,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result72__;
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
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* __right_value121 = (void*)0;
struct list_item$1sTypeph* litem_86;
struct sType* __dec_obj25;
void* __right_value122 = (void*)0;
struct list_item$1sTypeph* litem_87;
struct sType* __dec_obj26;
void* __right_value123 = (void*)0;
struct list_item$1sTypeph* litem_88;
struct sType* __dec_obj27;
struct list$1sTypeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_86, 0, sizeof(struct list_item$1sTypeph*));
memset(&litem_87, 0, sizeof(struct list_item$1sTypeph*));
memset(&litem_88, 0, sizeof(struct list_item$1sTypeph*));
    if(self->len==0) {
        litem_86=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value121=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
        come_call_finalizer3(__right_value121,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_86->prev=((void*)0);
        litem_86->next=((void*)0);
        __dec_obj25=litem_86->item;
        litem_86->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj25,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_86;
        self->head=litem_86;
    }
    else {
        if(self->len==1) {
            litem_87=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value122=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
            come_call_finalizer3(__right_value122,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_87->prev=self->head;
            litem_87->next=((void*)0);
            __dec_obj26=litem_87->item;
            litem_87->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj26,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_87;
            self->head->next=litem_87;
        }
        else {
            litem_88=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value123=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
            come_call_finalizer3(__right_value123,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_88->prev=self->tail;
            litem_88->next=((void*)0);
            __dec_obj27=litem_88->item;
            litem_88->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj27,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_88;
            self->tail=litem_88;
        }
    }
    self->len++;
    __result71__ = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result71__;
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_89;
struct list_item$1sTypeph* prev_it_90;
memset(&it_89, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_90, 0, sizeof(struct list_item$1sTypeph*));
    it_89=self->head;
    while(it_89!=((void*)0)) {
        prev_it_90=it_89;
        it_89=it_89->next;
        come_call_finalizer3(prev_it_90,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
struct tuple1$1sTypeph* __result73__;
void* __right_value126 = (void*)0;
struct tuple1$1sTypeph* result_91;
void* __right_value127 = (void*)0;
struct sType* __dec_obj29;
struct tuple1$1sTypeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_91, 0, sizeof(struct tuple1$1sTypeph*));
    if(self==(void*)0) {
        __result73__ = __result_obj__ = (void*)0;
        return __result73__;
    }
    result_91=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj29=result_91->v1;
        result_91->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj29,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result74__ = __result_obj__ = result_91;
    come_call_finalizer3(result_91,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    return __result74__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result75__;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
struct list$1charph* result_92;
struct list_item$1charph* it_93;
void* __right_value139 = (void*)0;
struct list$1charph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_92, 0, sizeof(struct list$1charph*));
memset(&it_93, 0, sizeof(struct list_item$1charph*));
    if(self==((void*)0)) {
        __result75__ = __result_obj__ = ((void*)0);
        return __result75__;
    }
    result_92=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value134=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))));
    come_call_finalizer3(__right_value134,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    it_93=self->head;
    while(it_93!=((void*)0)) {
        list$1charph_add(result_92,(char*)come_increment_ref_count(((char*)(__right_value139=string_clone(it_93->item)))));
        __right_value139 = come_decrement_ref_count2(__right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        it_93=it_93->next;
    }
    __result78__ = __result_obj__ = result_92;
    come_call_finalizer3(result_92,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result78__;
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
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
void* __right_value136 = (void*)0;
struct list_item$1charph* litem_94;
char* __dec_obj36;
void* __right_value137 = (void*)0;
struct list_item$1charph* litem_95;
char* __dec_obj37;
void* __right_value138 = (void*)0;
struct list_item$1charph* litem_96;
char* __dec_obj38;
struct list$1charph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_94, 0, sizeof(struct list_item$1charph*));
memset(&litem_95, 0, sizeof(struct list_item$1charph*));
memset(&litem_96, 0, sizeof(struct list_item$1charph*));
    if(self->len==0) {
        litem_94=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value136=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
        come_call_finalizer3(__right_value136,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_94->prev=((void*)0);
        litem_94->next=((void*)0);
        __dec_obj36=litem_94->item;
        litem_94->item=(char*)come_increment_ref_count(item);
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_94;
        self->head=litem_94;
    }
    else {
        if(self->len==1) {
            litem_95=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value137=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
            come_call_finalizer3(__right_value137,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_95->prev=self->head;
            litem_95->next=((void*)0);
            __dec_obj37=litem_95->item;
            litem_95->item=(char*)come_increment_ref_count(item);
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_95;
            self->head->next=litem_95;
        }
        else {
            litem_96=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value138=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
            come_call_finalizer3(__right_value138,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_96->prev=self->tail;
            litem_96->next=((void*)0);
            __dec_obj38=litem_96->item;
            litem_96->item=(char*)come_increment_ref_count(item);
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_96;
            self->tail=litem_96;
        }
    }
    self->len++;
    __result77__ = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result77__;
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_97;
struct list_item$1charph* prev_it_98;
memset(&it_97, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_98, 0, sizeof(struct list_item$1charph*));
    it_97=self->head;
    while(it_97!=((void*)0)) {
        prev_it_98=it_97;
        it_97=it_97->next;
        come_call_finalizer3(prev_it_98,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__;
void* __right_value147 = (void*)0;
struct sCharNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value147=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value147,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    __result81__ = __result_obj__ = self;
    come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result81__;
}

char* sCharNode_kind(struct sCharNode* self){
void* __result_obj__;
void* __right_value148 = (void*)0;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    __result82__ = __result_obj__ = ((char*)(__right_value148=__builtin_string("sCharNode")));
    __right_value148 = come_decrement_ref_count2(__right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result82__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct CVALUE* come_value_99;
void* __right_value151 = (void*)0;
char* __dec_obj46;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
struct sType* __dec_obj47;
_Bool __result83__;
memset(&come_value_99, 0, sizeof(struct CVALUE*));
    come_value_99=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value149=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 134, "CVALUE"))))));
    come_call_finalizer3(__right_value149,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj46=come_value_99->c_value;
    come_value_99->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj47=come_value_99->type;
    come_value_99->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value152=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 137, "sType")))),"char",(_Bool)0,info));
    come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value152,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_99->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_99));
    add_come_last_code(info,"%s;\n",come_value_99->c_value);
    __result83__ = (_Bool)1;
    come_call_finalizer3(come_value_99,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result83__;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* __right_value154 = (void*)0;
struct sWCharNode* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value154=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value154,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    self->quote=quote;
    __result84__ = __result_obj__ = self;
    come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result84__;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __result_obj__;
void* __right_value155 = (void*)0;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
    __result85__ = __result_obj__ = ((char*)(__right_value155=__builtin_string("sWCharNode")));
    __right_value155 = come_decrement_ref_count2(__right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result85__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
struct CVALUE* come_value_100;
void* __right_value158 = (void*)0;
char* __dec_obj48;
void* __right_value159 = (void*)0;
char* __dec_obj49;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
struct sType* __dec_obj50;
_Bool __result86__;
memset(&come_value_100, 0, sizeof(struct CVALUE*));
    come_value_100=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value156=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 165, "CVALUE"))))));
    come_call_finalizer3(__right_value156,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    if(self->quote) {
        __dec_obj48=come_value_100->c_value;
        come_value_100->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj49=come_value_100->c_value;
        come_value_100->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj50=come_value_100->type;
    come_value_100->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value160=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 173, "sType")))),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value160,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_100->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_100));
    add_come_last_code(info,"%s;\n",come_value_100->c_value);
    __result86__ = (_Bool)1;
    come_call_finalizer3(come_value_100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result86__;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __result_obj__;
void* __right_value162 = (void*)0;
unsigned int* __dec_obj51;
struct sWStringNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value162=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value162,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj51=self->value;
    self->value=(unsigned int*)come_increment_ref_count(value);
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result87__ = __result_obj__ = self;
    come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result87__;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __result_obj__;
void* __right_value163 = (void*)0;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    __result88__ = __result_obj__ = ((char*)(__right_value163=__builtin_string("sWStringNode")));
    __right_value163 = come_decrement_ref_count2(__right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result88__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
struct CVALUE* come_value_101;
void* __right_value166 = (void*)0;
char* __dec_obj52;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
struct sType* __dec_obj53;
_Bool __result89__;
memset(&come_value_101, 0, sizeof(struct CVALUE*));
    come_value_101=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value164=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 200, "CVALUE"))))));
    come_call_finalizer3(__right_value164,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj52=come_value_101->c_value;
    come_value_101->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj53=come_value_101->type;
    come_value_101->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value167=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 203, "sType")))),"int*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value167,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_101->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_101));
    add_come_last_code(info,"%s;\n",come_value_101->c_value);
    __result89__ = (_Bool)1;
    come_call_finalizer3(come_value_101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result89__;
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
char* __dec_obj54;
struct sRegexNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value169=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value169,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj54=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result90__ = __result_obj__ = self;
    come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result90__;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __result_obj__;
void* __right_value171 = (void*)0;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
    __result91__ = __result_obj__ = ((char*)(__right_value171=__builtin_string("sRegexNode")));
    __right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result91__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct CVALUE* come_value_102;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
char* __dec_obj55;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct sType* __dec_obj56;
_Bool __result92__;
memset(&come_value_102, 0, sizeof(struct CVALUE*));
    come_value_102=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value172=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 232, "CVALUE"))))));
    come_call_finalizer3(__right_value172,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj55=come_value_102->c_value;
    come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("charp_to_regex(\"%s\", %s, 0, %s, 0, 0, 0, 0, 0)",self->str,self->ignore_case?((char*)(__right_value174=__builtin_string("1"))):((char*)(__right_value175=__builtin_string("0"))),self->global?((char*)(__right_value176=__builtin_string("1"))):((char*)(__right_value177=__builtin_string("0")))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value174 = come_decrement_ref_count2(__right_value174, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value175 = come_decrement_ref_count2(__right_value175, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value176 = come_decrement_ref_count2(__right_value176, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value177 = come_decrement_ref_count2(__right_value177, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj56=come_value_102->type;
    come_value_102->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value179=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 235, "sType")))),"come_regex",(_Bool)0,info));
    come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value179,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_102->type->mPointerNum=1;
    come_value_102->type->mHeap=(_Bool)1;
    come_value_102->var=((void*)0);
    append_object_to_right_values2(come_value_102,(struct sType*)come_increment_ref_count(come_value_102->type),info);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
    add_come_last_code(info,"%s;\n",come_value_102->c_value);
    __result92__ = (_Bool)1;
    come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result92__;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__;
void* __right_value181 = (void*)0;
struct list$1sNodeph* __dec_obj57;
struct sListNode* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value181=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value181,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj57=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    come_call_finalizer3(__dec_obj57,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result93__ = __result_obj__ = self;
    come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result93__;
}

char* sListNode_kind(struct sListNode* self){
void* __result_obj__;
void* __right_value182 = (void*)0;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
    __result94__ = __result_obj__ = ((char*)(__right_value182=__builtin_string("sListNode")));
    __right_value182 = come_decrement_ref_count2(__right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result94__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNodeph* list_elements_103;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
struct list$1CVALUEph* params_104;
struct sType* list_element_type_107;
struct list$1sNodeph* o2_saved_108;
struct sNode* it_109;
_Bool __result96__;
void* __right_value185 = (void*)0;
struct CVALUE* come_value_110;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
struct sType* __dec_obj58;
void* __right_value188 = (void*)0;
struct sType* type_values_111;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
char* var_name_116;
void* __right_value194 = (void*)0;
struct sVar* var__117;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct buffer* source_118;
int i_119;
struct list$1CVALUEph* o2_saved_120;
struct CVALUE* it_123;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
struct sType* list_type_129;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct sType* obj_type_133;
char* fun_name_134;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
char* generics_fun_name_135;
struct sFun* fun_136;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
char* __dec_obj65;
_Bool __result107__;
void* __right_value213 = (void*)0;
struct sType* result_type_137;
struct sType* type_138;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct CVALUE* obj_value_139;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct buffer* num_string_140;
void* __right_value218 = (void*)0;
struct sType* type2_141;
void* __right_value219 = (void*)0;
char* type_name_142;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
char* __dec_obj66;
void* __right_value222 = (void*)0;
struct sType* type3_143;
void* __right_value223 = (void*)0;
struct sType* __dec_obj67;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct list$1CVALUEph* come_params_144;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
struct CVALUE* come_value2_148;
void* __right_value228 = (void*)0;
char* __dec_obj68;
struct sType* __dec_obj69;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct CVALUE* come_value3_149;
void* __right_value231 = (void*)0;
char* __dec_obj70;
struct sType* __dec_obj71;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct buffer* buf_150;
int j_151;
struct list$1CVALUEph* o2_saved_152;
struct CVALUE* it_153;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct CVALUE* come_value4_154;
void* __right_value236 = (void*)0;
char* __dec_obj72;
void* __right_value237 = (void*)0;
struct sType* __dec_obj73;
_Bool __result110__;
memset(&list_elements_103, 0, sizeof(struct list$1sNodeph*));
memset(&params_104, 0, sizeof(struct list$1CVALUEph*));
memset(&list_element_type_107, 0, sizeof(struct sType*));
memset(&o2_saved_108, 0, sizeof(struct list$1sNodeph*));
memset(&it_109, 0, sizeof(struct sNode*));
memset(&come_value_110, 0, sizeof(struct CVALUE*));
memset(&type_values_111, 0, sizeof(struct sType*));
memset(&var__117, 0, sizeof(struct sVar*));
memset(&source_118, 0, sizeof(struct buffer*));
memset(&o2_saved_120, 0, sizeof(struct list$1CVALUEph*));
memset(&it_123, 0, sizeof(struct CVALUE*));
memset(&list_type_129, 0, sizeof(struct sType*));
memset(&obj_type_133, 0, sizeof(struct sType*));
memset(&fun_136, 0, sizeof(struct sFun*));
memset(&result_type_137, 0, sizeof(struct sType*));
memset(&type_138, 0, sizeof(struct sType*));
memset(&obj_value_139, 0, sizeof(struct CVALUE*));
memset(&num_string_140, 0, sizeof(struct buffer*));
memset(&type2_141, 0, sizeof(struct sType*));
memset(&type3_143, 0, sizeof(struct sType*));
memset(&come_params_144, 0, sizeof(struct list$1CVALUEph*));
memset(&come_value2_148, 0, sizeof(struct CVALUE*));
memset(&come_value3_149, 0, sizeof(struct CVALUE*));
memset(&buf_150, 0, sizeof(struct buffer*));
memset(&o2_saved_152, 0, sizeof(struct list$1CVALUEph*));
memset(&it_153, 0, sizeof(struct CVALUE*));
memset(&come_value4_154, 0, sizeof(struct CVALUE*));
    list_elements_103=self->list_elements;
    params_104=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value183=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 267, "list$1CVALUEph"))))));
    come_call_finalizer3(__right_value183,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    list_element_type_107=((void*)0);
    for(    o2_saved_108=(list_elements_103),it_109=list$1sNodeph_begin((o2_saved_108));    !list$1sNodeph_end((o2_saved_108));    it_109=list$1sNodeph_next((o2_saved_108))    ){
        if(!node_compile(it_109,info)) {
            __result96__ = (_Bool)0;
            come_call_finalizer3(params_104,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_element_type_107,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result96__;
        }
        come_value_110=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(list_element_type_107) {
            check_assign_type(((char*)(__right_value186=xsprintf("invalid list element type"))),list_element_type_107,come_value_110->type,come_value_110,(_Bool)0,(_Bool)1,info);
            __right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(params_104,(struct CVALUE*)come_increment_ref_count(come_value_110));
        __dec_obj58=list_element_type_107;
        list_element_type_107=(struct sType*)come_increment_ref_count(sType_clone(come_value_110->type));
        come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_values_111=(struct sType*)come_increment_ref_count(sType_clone(list_element_type_107));
    list$1sNodeph_push_back(type_values_111->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value192=create_int_node(list$1CVALUEph_length(params_104),info)))));
    if(__right_value192) { __right_value192 = come_decrement_ref_count2(__right_value192, ((struct sNode*)__right_value192)->finalize, ((struct sNode*)__right_value192)->_protocol_obj, 1, 0, 0, (void*)0); } 
    type_values_111->mHeap=(_Bool)0;
    static int list_value_num_115=0;
    var_name_116=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_115));
    add_variable_to_table(var_name_116,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value194=sType_clone(type_values_111)))),info);
    come_call_finalizer3(__right_value194,sType_finalize, 0, 1, 0, 0, (void*)0);
    var__117=get_variable_from_table(info->lv_table,var_name_116);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value195=make_define_var(type_values_111,var__117->mCValueName,(_Bool)0,info))));
    __right_value195 = come_decrement_ref_count2(__right_value195, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_118=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value196=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 300, "buffer"))))));
    come_call_finalizer3(__right_value196,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(source_118,"{");
    i_119=0;
    for(    o2_saved_120=(struct list$1CVALUEph*)come_increment_ref_count((params_104)),it_123=list$1CVALUEph_begin((o2_saved_120));    !list$1CVALUEph_end((o2_saved_120));    it_123=list$1CVALUEph_next((o2_saved_120))    ){
        if(list_element_type_107->mHeap) {
            buffer_append_str(source_118,((char*)(__right_value198=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__117->mCValueName,i_119,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_104,i_119), "06str.c", 307, 0))->c_value))));
            __right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(source_118,((char*)(__right_value199=xsprintf("%s[%d]=%s;\n",var__117->mCValueName,i_119,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_104,i_119), "06str.c", 310, 1))->c_value))));
            __right_value199 = come_decrement_ref_count2(__right_value199, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        i_119++;
    }
    come_call_finalizer3(o2_saved_120,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_118,"}");
    add_come_code(info,"%s",((char*)(__right_value200=buffer_to_string(source_118))));
    __right_value200 = come_decrement_ref_count2(__right_value200, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    list_type_129=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value201=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 319, "sType")))),"list",(_Bool)0,info));
    come_call_finalizer3(__right_value201,sType_finalize, 0, 1, 0, 0, (void*)0);
    list$1sTypeph_push_back(list_type_129->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value206=sType_clone(list_element_type_107)))));
    come_call_finalizer3(__right_value206,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_133=(struct sType*)come_increment_ref_count(sType_clone(list_type_129));
    fun_name_134="initialize_with_values";
    generics_fun_name_135=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value209=make_generics_function(obj_type_133,(char*)come_increment_ref_count(((char*)(__right_value208=__builtin_string(fun_name_134)))),info,(_Bool)1)))));
    __right_value208 = come_decrement_ref_count2(__right_value208, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value209 = come_decrement_ref_count2(__right_value209, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_136=map$2charphsFunph_at(info->funcs,generics_fun_name_135,((void*)0));
    if(fun_136==((void*)0)) {
        __dec_obj65=generics_fun_name_135;
        generics_fun_name_135=(char*)come_increment_ref_count(create_method_name(obj_type_133,(_Bool)0,((char*)(__right_value211=__builtin_string(fun_name_134))),info,(_Bool)1));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value211 = come_decrement_ref_count2(__right_value211, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_136=map$2charphsFunph_at(info->funcs,generics_fun_name_135,((void*)0));
        if(fun_136==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_135,info->come_fun->mName);
            __result107__ = (_Bool)1;
            come_call_finalizer3(params_104,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_element_type_107,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_values_111,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_116 = come_decrement_ref_count2(var_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_118,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_type_129,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_133,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_135 = come_decrement_ref_count2(generics_fun_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result107__;
        }
    }
    result_type_137=(struct sType*)come_increment_ref_count(sType_clone(fun_136->mResultType));
    result_type_137->mStatic=(_Bool)0;
    type_138=list_type_129;
    obj_value_139=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value214=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 345, "CVALUE"))))));
    come_call_finalizer3(__right_value214,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    num_string_140=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value216=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 347, "buffer"))))));
    come_call_finalizer3(__right_value216,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(num_string_140,"1");
    type2_141=(struct sType*)come_increment_ref_count(solve_generics(type_138,type_138,info));
    type_name_142=(char*)come_increment_ref_count(make_type_name_string(type2_141,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj66=obj_value_139->c_value;
    obj_value_139->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_142,type_name_142,((char*)(__right_value220=buffer_to_string(num_string_140))),info->sname,info->sline,type_name_142));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_143=(struct sType*)come_increment_ref_count(sType_clone(type2_141));
    type3_143->mPointerNum++;
    type3_143->mHeap=(_Bool)1;
    type2_141->mHeap=(_Bool)1;
    __dec_obj67=obj_value_139->type;
    obj_value_139->type=(struct sType*)come_increment_ref_count(sType_clone(type2_141));
    come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_139->type->mPointerNum++;
    obj_value_139->var=((void*)0);
    append_object_to_right_values2(obj_value_139,(struct sType*)come_increment_ref_count(type3_143),info);
    come_params_144=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value224=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 367, "list$1CVALUEph"))))));
    come_call_finalizer3(__right_value224,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_136->mParamTypes,0), "06str.c", 369, 2))->mHeap&&obj_value_139->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_136->mParamTypes,0), "06str.c", 370, 3)),obj_value_139->type,obj_value_139,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_144,(struct CVALUE*)come_increment_ref_count(obj_value_139));
    come_value2_148=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value226=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 374, "CVALUE"))))));
    come_call_finalizer3(__right_value226,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj68=come_value2_148->c_value;
    come_value2_148->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEph_length(params_104)));
    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj69=come_value2_148->type;
    come_value2_148->type=((void*)0);
    come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_148->var=((void*)0);
    list$1CVALUEph_push_back(come_params_144,(struct CVALUE*)come_increment_ref_count(come_value2_148));
    come_value3_149=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value229=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 382, "CVALUE"))))));
    come_call_finalizer3(__right_value229,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj70=come_value3_149->c_value;
    come_value3_149->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__117->mCValueName));
    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj71=come_value3_149->type;
    come_value3_149->type=((void*)0);
    come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_149->var=((void*)0);
    list$1CVALUEph_push_back(come_params_144,(struct CVALUE*)come_increment_ref_count(come_value3_149));
    buf_150=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value232=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 390, "buffer"))))));
    come_call_finalizer3(__right_value232,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(buf_150,generics_fun_name_135);
    buffer_append_str(buf_150,"(");
    j_151=0;
    for(    o2_saved_152=(struct list$1CVALUEph*)come_increment_ref_count((come_params_144)),it_153=list$1CVALUEph_begin((o2_saved_152));    !list$1CVALUEph_end((o2_saved_152));    it_153=list$1CVALUEph_next((o2_saved_152))    ){
        buffer_append_str(buf_150,it_153->c_value);
        if(j_151!=list$1CVALUEph_length(come_params_144)-1) {
            buffer_append_str(buf_150,",");
        }
        j_151++;
    }
    come_call_finalizer3(o2_saved_152,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_150,")");
    come_value4_154=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value234=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 407, "CVALUE"))))));
    come_call_finalizer3(__right_value234,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj72=come_value4_154->c_value;
    come_value4_154->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_150));
    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj73=come_value4_154->type;
    come_value4_154->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_137));
    come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_154->type->mStatic=(_Bool)0;
    come_value4_154->var=((void*)0);
    if(result_type_137->mHeap) {
        append_object_to_right_values2(come_value4_154,(struct sType*)come_increment_ref_count(result_type_137),info);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_154));
    add_come_last_code(info,"%s;\n",come_value4_154->c_value);
    __result110__ = (_Bool)1;
    come_call_finalizer3(params_104,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_element_type_107,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_values_111,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_116 = come_decrement_ref_count2(var_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_118,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_type_129,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_133,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_135 = come_decrement_ref_count2(generics_fun_name_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_137,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_139,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_140,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_141,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_142 = come_decrement_ref_count2(type_name_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_143,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_144,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_148,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_149,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_150,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_154,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result110__;
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
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_105;
struct list_item$1CVALUEph* prev_it_106;
memset(&it_105, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_106, 0, sizeof(struct list_item$1CVALUEph*));
    it_105=self->head;
    while(it_105!=((void*)0)) {
        prev_it_106=it_105;
        it_105=it_105->next;
        come_call_finalizer3(prev_it_106,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* __right_value189 = (void*)0;
struct list_item$1sNodeph* litem_112;
struct sNode* __dec_obj59;
void* __right_value190 = (void*)0;
struct list_item$1sNodeph* litem_113;
struct sNode* __dec_obj60;
void* __right_value191 = (void*)0;
struct list_item$1sNodeph* litem_114;
struct sNode* __dec_obj61;
struct list$1sNodeph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_112, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_113, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_114, 0, sizeof(struct list_item$1sNodeph*));
    if(self->len==0) {
        litem_112=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value189=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 219, "list_item$1sNodeph"))));
        come_call_finalizer3(__right_value189,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_112->prev=((void*)0);
        litem_112->next=((void*)0);
        __dec_obj59=litem_112->item;
        litem_112->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_112;
        self->head=litem_112;
    }
    else {
        if(self->len==1) {
            litem_113=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value190=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 229, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value190,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_113->prev=self->head;
            litem_113->next=((void*)0);
            __dec_obj60=litem_113->item;
            litem_113->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_113;
            self->head->next=litem_113;
        }
        else {
            litem_114=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value191=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 239, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value191,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_114->prev=self->tail;
            litem_114->next=((void*)0);
            __dec_obj61=litem_114->item;
            litem_114->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_114;
            self->tail=litem_114;
        }
    }
    self->len++;
    __result97__ = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result97__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
struct CVALUE* result_121;
struct CVALUE* __result98__;
struct CVALUE* __result99__;
struct CVALUE* result_122;
struct CVALUE* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_121, 0, sizeof(struct CVALUE*));
memset(&result_122, 0, sizeof(struct CVALUE*));
    if(self==((void*)0)) {
        memset(&result_121,0,sizeof(struct CVALUE*));
        __result98__ = __result_obj__ = result_121;
        return __result98__;
    }
    self->it=self->head;
    if(self->it) {
        __result99__ = __result_obj__ = self->it->item;
        return __result99__;
    }
    memset(&result_122,0,sizeof(struct CVALUE*));
    __result100__ = __result_obj__ = result_122;
    return __result100__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
struct CVALUE* result_124;
struct CVALUE* __result101__;
struct CVALUE* __result102__;
struct CVALUE* result_125;
struct CVALUE* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(struct CVALUE*));
memset(&result_125, 0, sizeof(struct CVALUE*));
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_124,0,sizeof(struct CVALUE*));
        __result101__ = __result_obj__ = result_124;
        return __result101__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result102__ = __result_obj__ = self->it->item;
        return __result102__;
    }
    memset(&result_125,0,sizeof(struct CVALUE*));
    __result103__ = __result_obj__ = result_125;
    return __result103__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
struct list_item$1CVALUEph* it_126;
int i_127;
struct CVALUE* __result104__;
struct CVALUE* default_value_128;
struct CVALUE* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_126, 0, sizeof(struct list_item$1CVALUEph*));
memset(&default_value_128, 0, sizeof(struct CVALUE*));
    if(position<0) {
        position+=self->len;
    }
    it_126=self->head;
    i_127=0;
    while(it_126!=((void*)0)) {
        if(position==i_127) {
            __result104__ = __result_obj__ = it_126->item;
            return __result104__;
        }
        it_126=it_126->next;
        i_127++;
    }
    memset(&default_value_128,0,sizeof(struct CVALUE*));
    __result105__ = __result_obj__ = default_value_128;
    come_call_finalizer3(default_value_128,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result105__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* __right_value203 = (void*)0;
struct list_item$1sTypeph* litem_130;
struct sType* __dec_obj62;
void* __right_value204 = (void*)0;
struct list_item$1sTypeph* litem_131;
struct sType* __dec_obj63;
void* __right_value205 = (void*)0;
struct list_item$1sTypeph* litem_132;
struct sType* __dec_obj64;
struct list$1sTypeph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_130, 0, sizeof(struct list_item$1sTypeph*));
memset(&litem_131, 0, sizeof(struct list_item$1sTypeph*));
memset(&litem_132, 0, sizeof(struct list_item$1sTypeph*));
    if(self->len==0) {
        litem_130=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value203=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 219, "list_item$1sTypeph"))));
        come_call_finalizer3(__right_value203,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_130->prev=((void*)0);
        litem_130->next=((void*)0);
        __dec_obj62=litem_130->item;
        litem_130->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_130;
        self->head=litem_130;
    }
    else {
        if(self->len==1) {
            litem_131=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value204=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 229, "list_item$1sTypeph"))));
            come_call_finalizer3(__right_value204,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_131->prev=self->head;
            litem_131->next=((void*)0);
            __dec_obj63=litem_131->item;
            litem_131->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_131;
            self->head->next=litem_131;
        }
        else {
            litem_132=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value205=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 239, "list_item$1sTypeph"))));
            come_call_finalizer3(__right_value205,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_132->prev=self->tail;
            litem_132->next=((void*)0);
            __dec_obj64=litem_132->item;
            litem_132->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_132;
            self->tail=litem_132;
        }
    }
    self->len++;
    __result106__ = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result106__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
struct list_item$1sTypeph* it_145;
int i_146;
struct sType* __result108__;
struct sType* default_value_147;
struct sType* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_145, 0, sizeof(struct list_item$1sTypeph*));
memset(&default_value_147, 0, sizeof(struct sType*));
    if(position<0) {
        position+=self->len;
    }
    it_145=self->head;
    i_146=0;
    while(it_145!=((void*)0)) {
        if(position==i_146) {
            __result108__ = __result_obj__ = it_145->item;
            return __result108__;
        }
        it_145=it_145->next;
        i_146++;
    }
    memset(&default_value_147,0,sizeof(struct sType*));
    __result109__ = __result_obj__ = default_value_147;
    come_call_finalizer3(default_value_147,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result109__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__;
void* __right_value238 = (void*)0;
struct list$1sNodeph* __dec_obj74;
struct sTupleNode* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value238=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value238,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj74=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj74,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result111__ = __result_obj__ = self;
    come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result111__;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __result_obj__;
void* __right_value239 = (void*)0;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
    __result112__ = __result_obj__ = ((char*)(__right_value239=__builtin_string("sTupleNode")));
    __right_value239 = come_decrement_ref_count2(__right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result112__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_155;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct list$1sTypeph* tuple_types_156;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct list$1CVALUEph* tuple_values_157;
struct list$1sNodeph* o2_saved_158;
struct sNode* it_159;
_Bool __result113__;
void* __right_value244 = (void*)0;
struct CVALUE* come_value_160;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct sType* type_162;
struct list$1sTypeph* o2_saved_163;
struct sType* it_166;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct CVALUE* obj_value_169;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct buffer* num_string_170;
void* __right_value259 = (void*)0;
struct sType* type2_171;
void* __right_value260 = (void*)0;
char* type_name_172;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
char* __dec_obj78;
void* __right_value263 = (void*)0;
struct sType* type3_173;
void* __right_value264 = (void*)0;
struct sType* __dec_obj79;
void* __right_value265 = (void*)0;
struct sType* obj_type_174;
char* fun_name_175;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
char* generics_fun_name_176;
struct sFun* fun_177;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
char* __dec_obj80;
_Bool __result122__;
void* __right_value271 = (void*)0;
struct sType* result_type_178;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct list$1CVALUEph* come_params_179;
int i_180;
struct list$1CVALUEph* o2_saved_181;
struct CVALUE* it_182;
void* __right_value274 = (void*)0;
struct CVALUE* come_value_183;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct buffer* buf_184;
int j_185;
struct list$1CVALUEph* o2_saved_186;
struct CVALUE* it_187;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct CVALUE* come_value2_188;
void* __right_value279 = (void*)0;
char* __dec_obj81;
void* __right_value280 = (void*)0;
struct sType* __dec_obj82;
_Bool __result123__;
memset(&tuple_elements_155, 0, sizeof(struct list$1sNodeph*));
memset(&tuple_types_156, 0, sizeof(struct list$1sTypeph*));
memset(&tuple_values_157, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_158, 0, sizeof(struct list$1sNodeph*));
memset(&it_159, 0, sizeof(struct sNode*));
memset(&come_value_160, 0, sizeof(struct CVALUE*));
memset(&type_162, 0, sizeof(struct sType*));
memset(&o2_saved_163, 0, sizeof(struct list$1sTypeph*));
memset(&it_166, 0, sizeof(struct sType*));
memset(&obj_value_169, 0, sizeof(struct CVALUE*));
memset(&num_string_170, 0, sizeof(struct buffer*));
memset(&type2_171, 0, sizeof(struct sType*));
memset(&type3_173, 0, sizeof(struct sType*));
memset(&obj_type_174, 0, sizeof(struct sType*));
memset(&fun_177, 0, sizeof(struct sFun*));
memset(&result_type_178, 0, sizeof(struct sType*));
memset(&come_params_179, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_181, 0, sizeof(struct list$1CVALUEph*));
memset(&it_182, 0, sizeof(struct CVALUE*));
memset(&come_value_183, 0, sizeof(struct CVALUE*));
memset(&buf_184, 0, sizeof(struct buffer*));
memset(&o2_saved_186, 0, sizeof(struct list$1CVALUEph*));
memset(&it_187, 0, sizeof(struct CVALUE*));
memset(&come_value2_188, 0, sizeof(struct CVALUE*));
    tuple_elements_155=self->tuple_elements;
    tuple_types_156=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value240=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 444, "list$1sTypeph"))))));
    come_call_finalizer3(__right_value240,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
    tuple_values_157=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value242=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 445, "list$1CVALUEph"))))));
    come_call_finalizer3(__right_value242,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_158=(tuple_elements_155),it_159=list$1sNodeph_begin((o2_saved_158));    !list$1sNodeph_end((o2_saved_158));    it_159=list$1sNodeph_next((o2_saved_158))    ){
        if(!node_compile(it_159,info)) {
            __result113__ = (_Bool)0;
            come_call_finalizer3(tuple_types_156,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_157,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result113__;
        }
        come_value_160=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_157,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value249=CVALUE_clone(come_value_160)))));
        come_call_finalizer3(__right_value249,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        list$1sTypeph_push_back(tuple_types_156,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value250=sType_clone(come_value_160->type)))));
        come_call_finalizer3(__right_value250,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(come_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_162=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value251=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 459, "sType")))),((char*)(__right_value252=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_156)))),(_Bool)0,info));
    come_call_finalizer3(__right_value251,sType_finalize, 0, 1, 0, 0, (void*)0);
    __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_163=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_156)),it_166=list$1sTypeph_begin((o2_saved_163));    !list$1sTypeph_end((o2_saved_163));    it_166=list$1sTypeph_next((o2_saved_163))    ){
        list$1sTypeph_push_back(type_162->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value254=sType_clone(it_166)))));
        come_call_finalizer3(__right_value254,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_163,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_169=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value255=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 465, "CVALUE"))))));
    come_call_finalizer3(__right_value255,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    num_string_170=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value257=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 467, "buffer"))))));
    come_call_finalizer3(__right_value257,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(num_string_170,"1");
    type2_171=(struct sType*)come_increment_ref_count(solve_generics(type_162,type_162,info));
    type_name_172=(char*)come_increment_ref_count(make_type_name_string(type2_171,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj78=obj_value_169->c_value;
    obj_value_169->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_172,type_name_172,((char*)(__right_value261=buffer_to_string(num_string_170))),info->sname,info->sline,type_name_172));
    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_173=(struct sType*)come_increment_ref_count(sType_clone(type2_171));
    type3_173->mPointerNum++;
    type3_173->mHeap=(_Bool)1;
    type2_171->mHeap=(_Bool)1;
    __dec_obj79=obj_value_169->type;
    obj_value_169->type=(struct sType*)come_increment_ref_count(sType_clone(type2_171));
    come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_169->type->mPointerNum++;
    obj_value_169->var=((void*)0);
    append_object_to_right_values2(obj_value_169,(struct sType*)come_increment_ref_count(type3_173),info);
    obj_type_174=(struct sType*)come_increment_ref_count(sType_clone(type2_171));
    fun_name_175="initialize";
    generics_fun_name_176=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value267=make_generics_function(obj_type_174,(char*)come_increment_ref_count(((char*)(__right_value266=__builtin_string(fun_name_175)))),info,(_Bool)1)))));
    __right_value266 = come_decrement_ref_count2(__right_value266, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value267 = come_decrement_ref_count2(__right_value267, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_177=map$2charphsFunph_at(info->funcs,generics_fun_name_176,((void*)0));
    if(fun_177==((void*)0)) {
        __dec_obj80=generics_fun_name_176;
        generics_fun_name_176=(char*)come_increment_ref_count(create_method_name(obj_type_174,(_Bool)0,((char*)(__right_value269=__builtin_string(fun_name_175))),info,(_Bool)1));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value269 = come_decrement_ref_count2(__right_value269, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_177=map$2charphsFunph_at(info->funcs,generics_fun_name_176,((void*)0));
        if(fun_177==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_176,info->come_fun->mName);
            __result122__ = (_Bool)1;
            come_call_finalizer3(tuple_types_156,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_157,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_162,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_170,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_171,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_name_172 = come_decrement_ref_count2(type_name_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type3_173,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_174,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result122__;
        }
    }
    result_type_178=(struct sType*)come_increment_ref_count(sType_clone(fun_177->mResultType));
    result_type_178->mStatic=(_Bool)0;
    come_params_179=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value272=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 508, "list$1CVALUEph"))))));
    come_call_finalizer3(__right_value272,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_177->mParamTypes,0), "06str.c", 510, 4))->mHeap&&obj_value_169->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_177->mParamTypes,0), "06str.c", 511, 5)),obj_value_169->type,obj_value_169,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_179,(struct CVALUE*)come_increment_ref_count(obj_value_169));
    i_180=1;
    for(    o2_saved_181=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_157)),it_182=list$1CVALUEph_begin((o2_saved_181));    !list$1CVALUEph_end((o2_saved_181));    it_182=list$1CVALUEph_next((o2_saved_181))    ){
        come_value_183=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_182));
        if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_177->mParamTypes,i_180), "06str.c", 519, 6))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_177->mParamTypes,i_180), "06str.c", 519, 7))->mHeap&&come_value_183->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_177->mParamTypes,i_180), "06str.c", 520, 8)),come_value_183->type,come_value_183,info,(_Bool)1);
        }
        list$1CVALUEph_push_back(come_params_179,(struct CVALUE*)come_increment_ref_count(come_value_183));
        i_180++;
        come_call_finalizer3(come_value_183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_181,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_184=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value275=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 527, "buffer"))))));
    come_call_finalizer3(__right_value275,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(buf_184,generics_fun_name_176);
    buffer_append_str(buf_184,"(");
    j_185=0;
    for(    o2_saved_186=(struct list$1CVALUEph*)come_increment_ref_count((come_params_179)),it_187=list$1CVALUEph_begin((o2_saved_186));    !list$1CVALUEph_end((o2_saved_186));    it_187=list$1CVALUEph_next((o2_saved_186))    ){
        buffer_append_str(buf_184,it_187->c_value);
        if(j_185!=list$1CVALUEph_length(come_params_179)-1) {
            buffer_append_str(buf_184,",");
        }
        j_185++;
    }
    come_call_finalizer3(o2_saved_186,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_184,")");
    come_value2_188=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value277=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 544, "CVALUE"))))));
    come_call_finalizer3(__right_value277,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj81=come_value2_188->c_value;
    come_value2_188->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_184));
    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj82=come_value2_188->type;
    come_value2_188->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_178));
    come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_188->type->mStatic=(_Bool)0;
    come_value2_188->var=((void*)0);
    if(result_type_178->mHeap) {
        append_object_to_right_values2(come_value2_188,(struct sType*)come_increment_ref_count(result_type_178),info);
    }
    add_come_last_code(info,"%s;\n",come_value2_188->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_188));
    __result123__ = (_Bool)1;
    come_call_finalizer3(tuple_types_156,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_157,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_162,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_170,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_171,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_172 = come_decrement_ref_count2(type_name_172, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_173,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_174,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_176 = come_decrement_ref_count2(generics_fun_name_176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_178,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_179,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_184,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result123__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
struct CVALUE* __result114__;
void* __right_value245 = (void*)0;
struct CVALUE* result_161;
void* __right_value246 = (void*)0;
char* __dec_obj75;
void* __right_value247 = (void*)0;
struct sType* __dec_obj76;
void* __right_value248 = (void*)0;
char* __dec_obj77;
struct CVALUE* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_161, 0, sizeof(struct CVALUE*));
    if(self==(void*)0) {
        __result114__ = __result_obj__ = (void*)0;
        return __result114__;
    }
    result_161=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj75=result_161->c_value;
        result_161->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj76=result_161->type;
        result_161->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_161->var=self->var;
    }
    if(self!=((void*)0)) {
        result_161->right_value_objects=self->right_value_objects;
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj77=result_161->c_value_without_right_value_objects;
        result_161->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result115__ = __result_obj__ = result_161;
    come_call_finalizer3(result_161,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result115__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
struct sType* result_164;
struct sType* __result116__;
struct sType* __result117__;
struct sType* result_165;
struct sType* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_164, 0, sizeof(struct sType*));
memset(&result_165, 0, sizeof(struct sType*));
    if(self==((void*)0)) {
        memset(&result_164,0,sizeof(struct sType*));
        __result116__ = __result_obj__ = result_164;
        return __result116__;
    }
    self->it=self->head;
    if(self->it) {
        __result117__ = __result_obj__ = self->it->item;
        return __result117__;
    }
    memset(&result_165,0,sizeof(struct sType*));
    __result118__ = __result_obj__ = result_165;
    return __result118__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
struct sType* result_167;
struct sType* __result119__;
struct sType* __result120__;
struct sType* result_168;
struct sType* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_167, 0, sizeof(struct sType*));
memset(&result_168, 0, sizeof(struct sType*));
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_167,0,sizeof(struct sType*));
        __result119__ = __result_obj__ = result_167;
        return __result119__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result120__ = __result_obj__ = self->it->item;
        return __result120__;
    }
    memset(&result_168,0,sizeof(struct sType*));
    __result121__ = __result_obj__ = result_168;
    return __result121__;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__;
void* __right_value281 = (void*)0;
struct list$1sNodeph* __dec_obj83;
struct list$1sNodeph* __dec_obj84;
struct sMapNode* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value281=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value281,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj83=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer3(__dec_obj83,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj84=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    come_call_finalizer3(__dec_obj84,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result124__ = __result_obj__ = self;
    come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result124__;
}

char* sMapNode_kind(struct sMapNode* self){
void* __result_obj__;
void* __right_value282 = (void*)0;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    __result125__ = __result_obj__ = ((char*)(__right_value282=__builtin_string("sMapNode")));
    __right_value282 = come_decrement_ref_count2(__right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result125__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNodeph* map_key_elements_189;
struct list$1sNodeph* map_elements_190;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1CVALUEph* key_params_191;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct list$1CVALUEph* element_params_192;
struct sType* map_key_type_193;
struct sType* map_element_type_194;
int i_195;
struct sNode* key_elements_196;
struct sNode* elements_200;
_Bool __result128__;
void* __right_value287 = (void*)0;
struct CVALUE* come_value_201;
void* __right_value288 = (void*)0;
_Bool __result129__;
void* __right_value289 = (void*)0;
struct CVALUE* come_value2_202;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct sType* __dec_obj85;
void* __right_value292 = (void*)0;
struct sType* __dec_obj86;
void* __right_value293 = (void*)0;
struct sType* key_type_values_204;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
char* var_name_205;
void* __right_value296 = (void*)0;
struct sVar* var__206;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct sType* element_type_values_207;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
char* var_name2_208;
void* __right_value301 = (void*)0;
struct sVar* var2__209;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct buffer* source_210;
int i_211;
struct CVALUE* key_param_212;
struct CVALUE* element_param_213;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct sType* map_type_214;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sType* obj_type_215;
char* fun_name_216;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
char* generics_fun_name_217;
struct sFun* fun_218;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
char* __dec_obj87;
_Bool __result130__;
void* __right_value320 = (void*)0;
struct sType* result_type_219;
struct sType* type_220;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct CVALUE* obj_value_221;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct buffer* num_string_222;
void* __right_value325 = (void*)0;
struct sType* type2_223;
void* __right_value326 = (void*)0;
char* type_name_224;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
char* __dec_obj88;
void* __right_value329 = (void*)0;
struct sType* type3_225;
void* __right_value330 = (void*)0;
struct sType* __dec_obj89;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct list$1CVALUEph* come_params_226;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct CVALUE* come_value2_227;
void* __right_value335 = (void*)0;
char* __dec_obj90;
struct sType* __dec_obj91;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct CVALUE* come_value3_228;
void* __right_value338 = (void*)0;
char* __dec_obj92;
struct sType* __dec_obj93;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct CVALUE* come_value4_229;
void* __right_value341 = (void*)0;
char* __dec_obj94;
struct sType* __dec_obj95;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct buffer* buf_230;
int j_231;
struct list$1CVALUEph* o2_saved_232;
struct CVALUE* it_233;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct CVALUE* come_value5_234;
void* __right_value346 = (void*)0;
char* __dec_obj96;
void* __right_value347 = (void*)0;
struct sType* __dec_obj97;
_Bool __result131__;
memset(&map_key_elements_189, 0, sizeof(struct list$1sNodeph*));
memset(&map_elements_190, 0, sizeof(struct list$1sNodeph*));
memset(&key_params_191, 0, sizeof(struct list$1CVALUEph*));
memset(&element_params_192, 0, sizeof(struct list$1CVALUEph*));
memset(&map_key_type_193, 0, sizeof(struct sType*));
memset(&map_element_type_194, 0, sizeof(struct sType*));
memset(&key_elements_196, 0, sizeof(struct sNode*));
memset(&elements_200, 0, sizeof(struct sNode*));
memset(&come_value_201, 0, sizeof(struct CVALUE*));
memset(&come_value2_202, 0, sizeof(struct CVALUE*));
memset(&key_type_values_204, 0, sizeof(struct sType*));
memset(&var__206, 0, sizeof(struct sVar*));
memset(&element_type_values_207, 0, sizeof(struct sType*));
memset(&var2__209, 0, sizeof(struct sVar*));
memset(&source_210, 0, sizeof(struct buffer*));
memset(&key_param_212, 0, sizeof(struct CVALUE*));
memset(&element_param_213, 0, sizeof(struct CVALUE*));
memset(&map_type_214, 0, sizeof(struct sType*));
memset(&obj_type_215, 0, sizeof(struct sType*));
memset(&fun_218, 0, sizeof(struct sFun*));
memset(&result_type_219, 0, sizeof(struct sType*));
memset(&type_220, 0, sizeof(struct sType*));
memset(&obj_value_221, 0, sizeof(struct CVALUE*));
memset(&num_string_222, 0, sizeof(struct buffer*));
memset(&type2_223, 0, sizeof(struct sType*));
memset(&type3_225, 0, sizeof(struct sType*));
memset(&come_params_226, 0, sizeof(struct list$1CVALUEph*));
memset(&come_value2_227, 0, sizeof(struct CVALUE*));
memset(&come_value3_228, 0, sizeof(struct CVALUE*));
memset(&come_value4_229, 0, sizeof(struct CVALUE*));
memset(&buf_230, 0, sizeof(struct buffer*));
memset(&o2_saved_232, 0, sizeof(struct list$1CVALUEph*));
memset(&it_233, 0, sizeof(struct CVALUE*));
memset(&come_value5_234, 0, sizeof(struct CVALUE*));
    map_key_elements_189=self->map_key_elements;
    map_elements_190=self->map_elements;
    key_params_191=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value283=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 584, "list$1CVALUEph"))))));
    come_call_finalizer3(__right_value283,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    element_params_192=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value285=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 585, "list$1CVALUEph"))))));
    come_call_finalizer3(__right_value285,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    map_key_type_193=((void*)0);
    map_element_type_194=((void*)0);
    for(    i_195=0;    i_195<list$1sNodeph_length(map_key_elements_189);    i_195++    ){
        key_elements_196=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(map_key_elements_189,i_195), "06str.c", 590, 9));
        elements_200=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(map_elements_190,i_195), "06str.c", 591, 10));
        if(!node_compile(key_elements_196,info)) {
            __result128__ = (_Bool)0;
            come_call_finalizer3(key_params_191,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_192,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_194,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result128__;
        }
        come_value_201=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(map_key_type_193) {
            check_assign_type(((char*)(__right_value288=xsprintf("invalid map key type"))),map_key_type_193,come_value_201->type,come_value_201,(_Bool)0,(_Bool)1,info);
            __right_value288 = come_decrement_ref_count2(__right_value288, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(key_params_191,(struct CVALUE*)come_increment_ref_count(come_value_201));
        if(!node_compile(elements_200,info)) {
            __result129__ = (_Bool)0;
            come_call_finalizer3(come_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(key_params_191,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_192,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_194,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result129__;
        }
        come_value2_202=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(map_element_type_194) {
            check_assign_type(((char*)(__right_value290=xsprintf("invalid map element type"))),map_element_type_194,come_value2_202->type,come_value2_202,(_Bool)0,(_Bool)1,info);
            __right_value290 = come_decrement_ref_count2(__right_value290, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(element_params_192,(struct CVALUE*)come_increment_ref_count(come_value2_202));
        __dec_obj85=map_key_type_193;
        map_key_type_193=(struct sType*)come_increment_ref_count(sType_clone(come_value_201->type));
        come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj86=map_element_type_194;
        map_element_type_194=(struct sType*)come_increment_ref_count(sType_clone(come_value2_202->type));
        come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_202,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    static int map_value_num_203=0;
    key_type_values_204=(struct sType*)come_increment_ref_count(sType_clone(map_key_type_193));
    list$1sNodeph_push_back(key_type_values_204->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value294=create_int_node(list$1CVALUEph_length(key_params_191),info)))));
    if(__right_value294) { __right_value294 = come_decrement_ref_count2(__right_value294, ((struct sNode*)__right_value294)->finalize, ((struct sNode*)__right_value294)->_protocol_obj, 1, 0, 0, (void*)0); } 
    key_type_values_204->mHeap=(_Bool)0;
    var_name_205=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_203));
    add_variable_to_table(var_name_205,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value296=sType_clone(key_type_values_204)))),info);
    come_call_finalizer3(__right_value296,sType_finalize, 0, 1, 0, 0, (void*)0);
    var__206=get_variable_from_table(info->lv_table,var_name_205);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value297=make_define_var(key_type_values_204,var__206->mCValueName,(_Bool)0,info))));
    __right_value297 = come_decrement_ref_count2(__right_value297, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    element_type_values_207=(struct sType*)come_increment_ref_count(sType_clone(map_element_type_194));
    list$1sNodeph_push_back(element_type_values_207->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value299=create_int_node(list$1CVALUEph_length(element_params_192),info)))));
    if(__right_value299) { __right_value299 = come_decrement_ref_count2(__right_value299, ((struct sNode*)__right_value299)->finalize, ((struct sNode*)__right_value299)->_protocol_obj, 1, 0, 0, (void*)0); } 
    element_type_values_207->mHeap=(_Bool)0;
    var_name2_208=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_203));
    add_variable_to_table(var_name2_208,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value301=sType_clone(element_type_values_207)))),info);
    come_call_finalizer3(__right_value301,sType_finalize, 0, 1, 0, 0, (void*)0);
    var2__209=get_variable_from_table(info->lv_table,var_name2_208);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value302=make_define_var(element_type_values_207,var2__209->mCValueName,(_Bool)0,info))));
    __right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_210=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value303=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 649, "buffer"))))));
    come_call_finalizer3(__right_value303,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(source_210,"{");
    for(    i_211=0;    i_211<list$1CVALUEph_length(key_params_191);    i_211++    ){
        key_param_212=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(key_params_191,i_211), "06str.c", 654, 11));
        element_param_213=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(element_params_192,i_211), "06str.c", 655, 12));
        if(map_key_type_193->mHeap) {
            buffer_append_str(source_210,((char*)(__right_value305=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__206->mCValueName,i_211,key_param_212->c_value))));
            __right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(source_210,((char*)(__right_value306=xsprintf("%s[%d]=%s;\n",var__206->mCValueName,i_211,key_param_212->c_value))));
            __right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        if(map_element_type_194->mHeap) {
            buffer_append_str(source_210,((char*)(__right_value307=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var2__209->mCValueName,i_211,element_param_213->c_value))));
            __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(source_210,((char*)(__right_value308=xsprintf("%s[%d]=%s;\n",var2__209->mCValueName,i_211,element_param_213->c_value))));
            __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
    }
    buffer_append_str(source_210,"}");
    add_come_code(info,"%s",((char*)(__right_value309=buffer_to_string(source_210))));
    __right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    map_type_214=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value310=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 676, "sType")))),"map",(_Bool)0,info));
    come_call_finalizer3(__right_value310,sType_finalize, 0, 1, 0, 0, (void*)0);
    list$1sTypeph_push_back(map_type_214->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value312=sType_clone(map_key_type_193)))));
    come_call_finalizer3(__right_value312,sType_finalize, 0, 1, 0, 0, (void*)0);
    list$1sTypeph_push_back(map_type_214->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value313=sType_clone(map_element_type_194)))));
    come_call_finalizer3(__right_value313,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_215=(struct sType*)come_increment_ref_count(sType_clone(map_type_214));
    fun_name_216="initialize_with_values";
    generics_fun_name_217=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value316=make_generics_function(obj_type_215,(char*)come_increment_ref_count(((char*)(__right_value315=__builtin_string(fun_name_216)))),info,(_Bool)1)))));
    __right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_218=map$2charphsFunph_at(info->funcs,generics_fun_name_217,((void*)0));
    if(fun_218==((void*)0)) {
        __dec_obj87=generics_fun_name_217;
        generics_fun_name_217=(char*)come_increment_ref_count(create_method_name(obj_type_215,(_Bool)0,((char*)(__right_value318=__builtin_string(fun_name_216))),info,(_Bool)1));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_218=map$2charphsFunph_at(info->funcs,generics_fun_name_217,((void*)0));
        if(fun_218==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_217,info->come_fun->mName);
            __result130__ = (_Bool)1;
            come_call_finalizer3(key_params_191,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_params_192,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_key_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_element_type_194,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(key_type_values_204,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_205 = come_decrement_ref_count2(var_name_205, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_values_207,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name2_208 = come_decrement_ref_count2(var_name2_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source_210,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_215,sType_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_217 = come_decrement_ref_count2(generics_fun_name_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result130__;
        }
    }
    result_type_219=(struct sType*)come_increment_ref_count(sType_clone(fun_218->mResultType));
    result_type_219->mStatic=(_Bool)0;
    type_220=map_type_214;
    obj_value_221=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value321=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 703, "CVALUE"))))));
    come_call_finalizer3(__right_value321,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    num_string_222=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value323=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 705, "buffer"))))));
    come_call_finalizer3(__right_value323,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(num_string_222,"1");
    type2_223=(struct sType*)come_increment_ref_count(solve_generics(type_220,type_220,info));
    type_name_224=(char*)come_increment_ref_count(make_type_name_string(type2_223,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj88=obj_value_221->c_value;
    obj_value_221->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_224,type_name_224,((char*)(__right_value327=buffer_to_string(num_string_222))),info->sname,info->sline,type_name_224));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_225=(struct sType*)come_increment_ref_count(sType_clone(type2_223));
    type3_225->mPointerNum++;
    type3_225->mHeap=(_Bool)1;
    type2_223->mHeap=(_Bool)1;
    __dec_obj89=obj_value_221->type;
    obj_value_221->type=(struct sType*)come_increment_ref_count(sType_clone(type2_223));
    come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_221->type->mPointerNum++;
    obj_value_221->var=((void*)0);
    append_object_to_right_values2(obj_value_221,(struct sType*)come_increment_ref_count(type3_225),info);
    come_params_226=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value331=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 725, "list$1CVALUEph"))))));
    come_call_finalizer3(__right_value331,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
    if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_218->mParamTypes,0), "06str.c", 727, 13))->mHeap&&obj_value_221->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_218->mParamTypes,0), "06str.c", 728, 14)),obj_value_221->type,obj_value_221,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_226,(struct CVALUE*)come_increment_ref_count(obj_value_221));
    come_value2_227=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value333=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 732, "CVALUE"))))));
    come_call_finalizer3(__right_value333,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj90=come_value2_227->c_value;
    come_value2_227->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEph_length(key_params_191)));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj91=come_value2_227->type;
    come_value2_227->type=((void*)0);
    come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_227->var=((void*)0);
    list$1CVALUEph_push_back(come_params_226,(struct CVALUE*)come_increment_ref_count(come_value2_227));
    come_value3_228=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value336=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 740, "CVALUE"))))));
    come_call_finalizer3(__right_value336,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj92=come_value3_228->c_value;
    come_value3_228->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__206->mCValueName));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj93=come_value3_228->type;
    come_value3_228->type=((void*)0);
    come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_228->var=((void*)0);
    list$1CVALUEph_push_back(come_params_226,(struct CVALUE*)come_increment_ref_count(come_value3_228));
    come_value4_229=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value339=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 748, "CVALUE"))))));
    come_call_finalizer3(__right_value339,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj94=come_value4_229->c_value;
    come_value4_229->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__209->mCValueName));
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj95=come_value4_229->type;
    come_value4_229->type=((void*)0);
    come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_229->var=((void*)0);
    list$1CVALUEph_push_back(come_params_226,(struct CVALUE*)come_increment_ref_count(come_value4_229));
    buf_230=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value342=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 756, "buffer"))))));
    come_call_finalizer3(__right_value342,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(buf_230,generics_fun_name_217);
    buffer_append_str(buf_230,"(");
    j_231=0;
    for(    o2_saved_232=(struct list$1CVALUEph*)come_increment_ref_count((come_params_226)),it_233=list$1CVALUEph_begin((o2_saved_232));    !list$1CVALUEph_end((o2_saved_232));    it_233=list$1CVALUEph_next((o2_saved_232))    ){
        buffer_append_str(buf_230,it_233->c_value);
        if(j_231!=list$1CVALUEph_length(come_params_226)-1) {
            buffer_append_str(buf_230,",");
        }
        j_231++;
    }
    come_call_finalizer3(o2_saved_232,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_230,")");
    come_value5_234=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value344=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 773, "CVALUE"))))));
    come_call_finalizer3(__right_value344,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj96=come_value5_234->c_value;
    come_value5_234->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_230));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj97=come_value5_234->type;
    come_value5_234->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_219));
    come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value5_234->type->mStatic=(_Bool)0;
    come_value5_234->var=((void*)0);
    if(result_type_219->mHeap) {
        append_object_to_right_values2(come_value5_234,(struct sType*)come_increment_ref_count(result_type_219),info);
    }
    add_come_last_code(info,"%s;\n",come_value5_234->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_234));
    __result131__ = (_Bool)1;
    come_call_finalizer3(key_params_191,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_params_192,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_key_type_193,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_element_type_194,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(key_type_values_204,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_205 = come_decrement_ref_count2(var_name_205, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_values_207,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name2_208 = come_decrement_ref_count2(var_name2_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_210,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_215,sType_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_name_217 = come_decrement_ref_count2(generics_fun_name_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_219,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_221,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_222,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_223,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_224 = come_decrement_ref_count2(type_name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_225,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_226,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_227,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_228,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_229,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_230,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value5_234,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result131__;
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
struct list_item$1sNodeph* it_197;
int i_198;
struct sNode* __result126__;
struct sNode* default_value_199;
struct sNode* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_197, 0, sizeof(struct list_item$1sNodeph*));
memset(&default_value_199, 0, sizeof(struct sNode*));
    if(position<0) {
        position+=self->len;
    }
    it_197=self->head;
    i_198=0;
    while(it_197!=((void*)0)) {
        if(position==i_198) {
            __result126__ = __result_obj__ = it_197->item;
            return __result126__;
        }
        it_197=it_197->next;
        i_198++;
    }
    memset(&default_value_199,0,sizeof(struct sNode*));
    __result127__ = __result_obj__ = default_value_199;
    if(default_value_199) { default_value_199 = come_decrement_ref_count2(default_value_199, ((struct sNode*)default_value_199)->finalize, ((struct sNode*)default_value_199)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result127__;
}

struct sNode* expression_node_v96(struct sInfo* info){
void* __result_obj__;
int sline_235;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct list$1sNodeph* exps_236;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct buffer* value_237;
char* head_of_last_line_238;
int len_239;
void* __right_value352 = (void*)0;
struct sNode* exp_240;
int sline2_241;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct sNode* _inf_value1;
struct sSStringNode* _inf_obj_value1;
void* __right_value360 = (void*)0;
struct sNode* __result134__;
int sline_243;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct buffer* value_244;
char* p_245;
int sline_246;
int sline2_247;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct sNode* _inf_value2;
struct sStrNode* _inf_obj_value2;
void* __right_value369 = (void*)0;
struct sNode* __result137__;
int sline_249;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct buffer* buf_250;
_Bool global_251;
_Bool ignore_case_252;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sNode* _inf_value3;
struct sRegexNode* _inf_obj_value3;
void* __right_value378 = (void*)0;
struct sNode* __result140__;
int c_254;
int n_255;
int n_256;
unsigned long long int n_259;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sNode* _inf_value4;
struct sCharNode* _inf_obj_value4;
void* __right_value383 = (void*)0;
struct sNode* __result143__;
unsigned int c_261;
_Bool quote_262;
int n_263;
int n_264;
unsigned long long int n_267;
unsigned char p2_268;
int size_269;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct sNode* _inf_value5;
struct sWCharNode* _inf_obj_value5;
void* __right_value388 = (void*)0;
struct sNode* __result146__;
int sline_272;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct buffer* value_273;
char* p_274;
int sline_275;
int len_276;
int n_277;
unsigned long int lont_280;
int n_281;
int sline2_282;
int len_283;
void* __right_value391 = (void*)0;
unsigned int* wstr_284;
char* str_285;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct sNode* _inf_value6;
struct sWStringNode* _inf_obj_value6;
void* __right_value397 = (void*)0;
struct sNode* __result149__;
int sline_287;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct list$1sNodeph* exps_288;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct buffer* value_289;
char* p_290;
int sline_291;
void* __right_value402 = (void*)0;
struct sNode* exp_292;
char* p_293;
int len_294;
void* __right_value403 = (void*)0;
struct sNode* exp_295;
int sline2_296;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct sNode* _inf_value7;
struct sSStringNode* _inf_obj_value7;
void* __right_value411 = (void*)0;
struct sNode* __result152__;
char* p_298;
_Bool no_comma_299;
void* __right_value412 = (void*)0;
struct sNode* node_300;
char* p2_301;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct buffer* first_element_source_302;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct list$1sNodeph* list_elements_303;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct list$1sNodeph* map_keys_304;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct list$1sNodeph* map_elements_305;
_Bool no_comma_306;
void* __right_value421 = (void*)0;
struct sNode* node2_307;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sNode* _inf_value8;
struct sMapNode* _inf_obj_value8;
void* __right_value428 = (void*)0;
struct sNode* __result155__;
_Bool no_comma_309;
void* __right_value429 = (void*)0;
struct sNode* node2_310;
void* __right_value430 = (void*)0;
struct sNode* node3_311;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct sNode* _inf_value9;
struct sMapNode* _inf_obj_value9;
void* __right_value437 = (void*)0;
struct sNode* __result158__;
_Bool no_comma_313;
void* __right_value438 = (void*)0;
struct sNode* node2_314;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct sNode* _inf_value10;
struct sListNode* _inf_obj_value10;
void* __right_value444 = (void*)0;
struct sNode* __result161__;
void* __right_value445 = (void*)0;
struct sNode* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exps_236, 0, sizeof(struct list$1sNodeph*));
memset(&value_237, 0, sizeof(struct buffer*));
memset(&exp_240, 0, sizeof(struct sNode*));
memset(&value_244, 0, sizeof(struct buffer*));
memset(&buf_250, 0, sizeof(struct buffer*));
memset(&c_254, 0, sizeof(int));
memset(&c_261, 0, sizeof(unsigned int));
memset(&quote_262, 0, sizeof(_Bool));
memset(&size_269, 0, sizeof(int));
memset(&value_273, 0, sizeof(struct buffer*));
memset(&lont_280, 0, sizeof(unsigned long int));
memset(&exps_288, 0, sizeof(struct list$1sNodeph*));
memset(&value_289, 0, sizeof(struct buffer*));
memset(&exp_292, 0, sizeof(struct sNode*));
memset(&exp_295, 0, sizeof(struct sNode*));
memset(&node_300, 0, sizeof(struct sNode*));
memset(&first_element_source_302, 0, sizeof(struct buffer*));
memset(&list_elements_303, 0, sizeof(struct list$1sNodeph*));
memset(&map_keys_304, 0, sizeof(struct list$1sNodeph*));
memset(&map_elements_305, 0, sizeof(struct list$1sNodeph*));
memset(&node2_307, 0, sizeof(struct sNode*));
memset(&node2_310, 0, sizeof(struct sNode*));
memset(&node3_311, 0, sizeof(struct sNode*));
memset(&node2_314, 0, sizeof(struct sNode*));
    if(*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        info->p+=4;
        info->sline++;
        sline_235=info->sline;
        exps_236=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value348=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 801, "list$1sNodeph"))))));
        come_call_finalizer3(__right_value348,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        value_237=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value350=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 802, "buffer"))))));
        come_call_finalizer3(__right_value350,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        head_of_last_line_238=((void*)0);
        while(1) {
            if(*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(head_of_last_line_238) {
                    buffer_trim(value_237,info->p-head_of_last_line_238);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else {
                if(*info->p==37) {
                    buffer_append_char(value_237,37);
                    buffer_append_char(value_237,37);
                    info->p++;
                }
                else {
                    if(*info->p==34) {
                        buffer_append_char(value_237,92);
                        buffer_append_char(value_237,34);
                        info->p++;
                    }
                    else {
                        if(*info->p==92) {
                            buffer_append_char(value_237,92);
                            info->p++;
                            if(xisdigit(*info->p)) {
                                len_239=0;
                                while(xisdigit(*info->p)&&len_239<3) {
                                    buffer_append_char(value_237,*info->p);
                                    info->p++;
                                    len_239++;
                                }
                            }
                            else {
                                if(*info->p==120||*info->p==88) {
                                    buffer_append_char(value_237,*info->p);
                                    info->p++;
                                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                                        buffer_append_char(value_237,*info->p);
                                        info->p++;
                                    }
                                }
                                else {
                                    if(*info->p==123) {
                                        info->p++;
                                        exp_240=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                        list$1sNodeph_add(exps_236,(struct sNode*)come_increment_ref_count(exp_240));
                                        if(*info->p==125) {
                                            info->p++;
                                        }
                                        buffer_append_str(value_237,"%s");
                                        if(exp_240) { exp_240 = come_decrement_ref_count2(exp_240, ((struct sNode*)exp_240)->finalize, ((struct sNode*)exp_240)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        switch (*info->p) {
                                            case 48:
                                            buffer_append_char(value_237,*info->p);
                                            info->p++;
                                            break;
                                            case 110:
                                            buffer_append_char(value_237,*info->p);
                                            info->p++;
                                            break;
                                            case 116:
                                            buffer_append_char(value_237,*info->p);
                                            info->p++;
                                            break;
                                            case 114:
                                            buffer_append_char(value_237,*info->p);
                                            info->p++;
                                            break;
                                            case 118:
                                            buffer_append_char(value_237,*info->p);
                                            info->p++;
                                            break;
                                            case 102:
                                            buffer_append_char(value_237,*info->p);
                                            info->p++;
                                            break;
                                            case 97:
                                            buffer_append_char(value_237,*info->p);
                                            info->p++;
                                            break;
                                            case 98:
                                            buffer_append_char(value_237,*info->p);
                                            info->p++;
                                            break;
                                            case 92:
                                            buffer_append_char(value_237,*info->p);
                                            info->p++;
                                            break;
                                            default:
                                            buffer_append_char(value_237,*info->p);
                                            info->p++;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            if(*info->p==0) {
                                sline2_241=info->sline;
                                info->sline=sline_235;
                                err_msg(info,"close \" to make embbeded string value");
                                exit(2);
                            }
                            else {
                                if(*info->p==10) {
                                    buffer_append_char(value_237,92);
                                    buffer_append_char(value_237,110);
                                    info->p++;
                                    info->sline++;
                                    head_of_last_line_238=info->p;
                                }
                                else {
                                    buffer_append_char(value_237,*info->p);
                                    info->p++;
                                }
                            }
                        }
                    }
                }
            }
        }
        skip_spaces_and_lf(info);
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 951, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sSStringNode*)(__right_value355=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value353=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 951, "sSStringNode")))),(char*)come_increment_ref_count(((char*)(__right_value354=buffer_to_string(value_237)))),(struct list$1sNodeph*)come_increment_ref_count(exps_236),sline_235,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sSStringNode_finalize;
        _inf_value1->clone=(void*)sSStringNode_clone;
        _inf_value1->compile=(void*)sSStringNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sSStringNode_kind;
        __result134__ = __result_obj__ = ((struct sNode*)(__right_value360=_inf_value1));
        come_call_finalizer3(exps_236,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_237,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value353,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value355,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value360) { __right_value360 = come_decrement_ref_count2(__right_value360, ((struct sNode*)__right_value360)->finalize, ((struct sNode*)__right_value360)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result134__;
        come_call_finalizer3(exps_236,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_237,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(*info->p==34) {
            info->p++;
            sline_243=info->sline;
            value_244=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value361=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 959, "buffer"))))));
            come_call_finalizer3(__right_value361,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            while(1) {
                if(*info->p==34) {
                    info->p++;
                    p_245=info->p;
                    sline_246=info->sline;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    if(*info->p==34) {
                        info->p++;
                    }
                    else {
                        info->p=p_245;
                        info->sline=sline_246;
                        break;
                    }
                }
                else {
                    if(*info->p==92) {
                        buffer_append_char(value_244,92);
                        info->p++;
                        if(*info->p==34) {
                            buffer_append_char(value_244,34);
                            info->p++;
                        }
                        else {
                            buffer_append_char(value_244,*info->p);
                            info->p++;
                        }
                    }
                    else {
                        if(*info->p==0) {
                            sline2_247=info->sline;
                            info->sline=sline_243;
                            err_msg(info,"close \" to make c string value");
                            info->sline=sline2_247;
                            exit(2);
                        }
                        else {
                            if(*info->p==10) {
                                info->sline++;
                            }
                            buffer_append_char(value_244,*info->p);
                            info->p++;
                        }
                    }
                }
            }
            skip_spaces_and_lf(info);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1011, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStrNode*)(__right_value365=sStrNode_initialize((struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value363=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1011, "sStrNode")))),(char*)come_increment_ref_count(((char*)(__right_value364=buffer_to_string(value_244)))),sline_243,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStrNode_finalize;
            _inf_value2->clone=(void*)sStrNode_clone;
            _inf_value2->compile=(void*)sStrNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sStrNode_kind;
            __result137__ = __result_obj__ = ((struct sNode*)(__right_value369=_inf_value2));
            come_call_finalizer3(value_244,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value363,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
            __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value365,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value369) { __right_value369 = come_decrement_ref_count2(__right_value369, ((struct sNode*)__right_value369)->finalize, ((struct sNode*)__right_value369)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result137__;
            come_call_finalizer3(value_244,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(*info->p==47) {
                info->p++;
                sline_249=info->sline;
                buf_250=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value370=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1018, "buffer"))))));
                come_call_finalizer3(__right_value370,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                while((_Bool)1) {
                    if(*info->p==92&&*(info->p+1)==47) {
                        info->p++;
                        buffer_append_char(buf_250,*info->p);
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
                                buffer_append_char(buf_250,*info->p);
                                info->p++;
                            }
                        }
                    }
                }
                global_251=(_Bool)0;
                ignore_case_252=(_Bool)0;
                while(*info->p==103||*info->p==105) {
                    if(*info->p==103) {
                        info->p++;
                        global_251=(_Bool)1;
                    }
                    else {
                        if(*info->p==105) {
                            info->p++;
                            ignore_case_252=(_Bool)1;
                        }
                        else {
                            break;
                        }
                    }
                }
                skip_spaces_and_lf(info);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1057, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sRegexNode*)(__right_value374=sRegexNode_initialize((struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(__right_value372=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "06str.c", 1057, "sRegexNode")))),(char*)come_increment_ref_count(((char*)(__right_value373=buffer_to_string(buf_250)))),global_251,ignore_case_252,sline_249,info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sRegexNode_finalize;
                _inf_value3->clone=(void*)sRegexNode_clone;
                _inf_value3->compile=(void*)sRegexNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sNodeBase_terminated;
                _inf_value3->kind=(void*)sRegexNode_kind;
                __result140__ = __result_obj__ = ((struct sNode*)(__right_value378=_inf_value3));
                come_call_finalizer3(buf_250,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value372,sRegexNode_finalize, 0, 1, 0, 0, __result_obj__);
                __right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value374,sRegexNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value378) { __right_value378 = come_decrement_ref_count2(__right_value378, ((struct sNode*)__right_value378)->finalize, ((struct sNode*)__right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result140__;
                come_call_finalizer3(buf_250,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(*info->p==39) {
                    info->p++;
                    if(*info->p==92) {
                        info->p++;
                        if(xisdigit(*info->p)) {
                            n_255=0;
                            while(xisdigit(*info->p)) {
                                n_255=n_255*8+*info->p-48;
                                info->p++;
                            }
                            c_254=n_255;
                        }
                        else {
                            switch (*info->p) {
                                case 110:
                                c_254=10;
                                info->p++;
                                break;
                                case 116:
                                c_254=9;
                                info->p++;
                                break;
                                case 114:
                                c_254=13;
                                info->p++;
                                break;
                                case 97:
                                c_254=7;
                                info->p++;
                                break;
                                case 102:
                                c_254=12;
                                info->p++;
                                break;
                                case 118:
                                c_254=11;
                                info->p++;
                                break;
                                case 98:
                                c_254=8;
                                info->p++;
                                break;
                                case 92:
                                c_254=92;
                                info->p++;
                                break;
                                case 48:
                                c_254=0;
                                info->p++;
                                if(xisdigit(*info->p)) {
                                    n_256=0;
                                    while(xisdigit(*info->p)) {
                                        n_256=n_256*8+*info->p-48;
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    c_254=n_256;
                                }
                                break;
                                case 120:
                                case 88:
                                {
                                    info->p++;
                                    char buf_257[128];
                                    memset(&buf_257, 0, sizeof(char)                                    *(128)                                    );
                                    strncpy(buf_257,"0x",128);
                                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                                        char buf2_258[2];
                                        memset(&buf2_258, 0, sizeof(char)                                        *(2)                                        );
                                        buf2_258[0]=*info->p;
                                        buf2_258[1]=0;
                                        info->p++;
                                        strncat(buf_257,buf2_258,128);
                                    }
                                    n_259=strtoll(buf_257,((void*)0),0);
                                    c_254=n_259;
                                }
                                break;
                                default:
                                c_254=*info->p;
                                info->p++;
                                break;
                            }
                        }
                    }
                    else {
                        c_254=*info->p;
                        info->p++;
                    }
                    if(*info->p!=39) {
                        err_msg(info,"close \' to make character value");
                    }
                    else {
                        info->p++;
                        skip_spaces_and_lf(info);
                        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1174, "struct sNode");
                        _inf_obj_value4=come_increment_ref_count(((struct sCharNode*)(__right_value380=sCharNode_initialize((struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value379=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 1174, "sCharNode")))),c_254,info))));
                        _inf_value4->_protocol_obj=_inf_obj_value4;
                        _inf_value4->finalize=(void*)sCharNode_finalize;
                        _inf_value4->clone=(void*)sCharNode_clone;
                        _inf_value4->compile=(void*)sCharNode_compile;
                        _inf_value4->sline=(void*)sNodeBase_sline;
                        _inf_value4->sname=(void*)sNodeBase_sname;
                        _inf_value4->terminated=(void*)sNodeBase_terminated;
                        _inf_value4->kind=(void*)sCharNode_kind;
                        __result143__ = __result_obj__ = ((struct sNode*)(__right_value383=_inf_value4));
                        come_call_finalizer3(__right_value379,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(__right_value380,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(__right_value383) { __right_value383 = come_decrement_ref_count2(__right_value383, ((struct sNode*)__right_value383)->finalize, ((struct sNode*)__right_value383)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result143__;
                    }
                }
                else {
                    if(*info->p==76&&*(info->p+1)==39) {
                        info->p+=2;
                        if(*info->p==92) {
                            quote_262=(_Bool)1;
                            info->p++;
                            if(xisdigit(*info->p)) {
                                n_263=0;
                                while(xisdigit(*info->p)) {
                                    n_263=n_263*8+*info->p-48;
                                    info->p++;
                                }
                                c_261=n_263;
                            }
                            else {
                                switch (*info->p) {
                                    case 110:
                                    c_261=10;
                                    info->p++;
                                    break;
                                    case 116:
                                    c_261=9;
                                    info->p++;
                                    break;
                                    case 114:
                                    c_261=13;
                                    info->p++;
                                    break;
                                    case 97:
                                    c_261=7;
                                    info->p++;
                                    break;
                                    case 92:
                                    c_261=92;
                                    info->p++;
                                    break;
                                    case 48:
                                    c_261=0;
                                    info->p++;
                                    if(xisdigit(*info->p)) {
                                        n_264=0;
                                        while(xisdigit(*info->p)) {
                                            n_264=n_264*8+*info->p-48;
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                        }
                                        c_261=n_264;
                                    }
                                    break;
                                    case 120:
                                    case 88:
                                    {
                                        info->p++;
                                        char buf_265[128];
                                        memset(&buf_265, 0, sizeof(char)                                        *(128)                                        );
                                        strncpy(buf_265,"0x",128);
                                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                                            char buf2_266[2];
                                            memset(&buf2_266, 0, sizeof(char)                                            *(2)                                            );
                                            buf2_266[0]=*info->p;
                                            buf2_266[1]=0;
                                            info->p++;
                                            strncat(buf_265,buf2_266,128);
                                        }
                                        n_267=strtoll(buf_265,((void*)0),0);
                                        c_261=n_267;
                                    }
                                    break;
                                    default:
                                    c_261=*info->p;
                                    info->p++;
                                    break;
                                }
                            }
                        }
                        else {
                            quote_262=(_Bool)0;
                            p2_268=*(unsigned char*)info->p;
                            if(p2_268>127) {
                                char str_270[4+1];
                                memset(&str_270, 0, sizeof(char)                                *(4+1)                                );
                                size_269=((p2_268&128)>>7)+((p2_268&64)>>6)+((p2_268&32)>>5)+((p2_268&16)>>4);
                                if(size_269>4) {
                                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                                    info->err_num++;
                                }
                                else {
                                    memcpy(str_270,info->p,size_269);
                                    str_270[size_269]=0;
                                    if(mbtowc(&c_261,str_270,size_269)<0) {
                                        perror("mbtowc");
                                        err_msg(info,"invalid utf-8 character. mbtowc");
                                        info->err_num++;
                                    }
                                    else {
                                        info->p+=size_269;
                                    }
                                }
                            }
                            else {
                                c_261=*info->p;
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
                            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1313, "struct sNode");
                            _inf_obj_value5=come_increment_ref_count(((struct sWCharNode*)(__right_value385=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value384=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 1313, "sWCharNode")))),c_261,quote_262,info))));
                            _inf_value5->_protocol_obj=_inf_obj_value5;
                            _inf_value5->finalize=(void*)sWCharNode_finalize;
                            _inf_value5->clone=(void*)sWCharNode_clone;
                            _inf_value5->compile=(void*)sWCharNode_compile;
                            _inf_value5->sline=(void*)sNodeBase_sline;
                            _inf_value5->sname=(void*)sNodeBase_sname;
                            _inf_value5->terminated=(void*)sNodeBase_terminated;
                            _inf_value5->kind=(void*)sWCharNode_kind;
                            __result146__ = __result_obj__ = ((struct sNode*)(__right_value388=_inf_value5));
                            come_call_finalizer3(__right_value384,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(__right_value385,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value388) { __right_value388 = come_decrement_ref_count2(__right_value388, ((struct sNode*)__right_value388)->finalize, ((struct sNode*)__right_value388)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result146__;
                        }
                    }
                    else {
                        if(*info->p==76&&*(info->p+1)==34) {
                            info->p+=2;
                            sline_272=info->sline;
                            value_273=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value389=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1322, "buffer"))))));
                            come_call_finalizer3(__right_value389,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            while(1) {
                                if(*info->p==34) {
                                    info->p++;
                                    p_274=info->p;
                                    sline_275=info->sline;
                                    skip_spaces_and_lf(info);
                                    if(*info->p==34) {
                                        info->p++;
                                    }
                                    else {
                                        info->p=p_274;
                                        info->sline=sline_275;
                                        break;
                                    }
                                }
                                else {
                                    if(*info->p==92) {
                                        info->p++;
                                        if(xisdigit(*info->p)) {
                                            len_276=0;
                                            n_277=0;
                                            while(xisdigit(*info->p)&&len_276<3) {
                                                n_277=n_277*8+*info->p-48;
                                                info->p++;
                                                len_276++;
                                            }
                                            buffer_append_char(value_273,n_277);
                                        }
                                        else {
                                            if(*info->p==120||*info->p==88) {
                                                info->p++;
                                                char buf_278[128];
                                                memset(&buf_278, 0, sizeof(char)                                                *(128)                                                );
                                                strncpy(buf_278,"0x",128);
                                                while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                                                    char buf2_279[2];
                                                    memset(&buf2_279, 0, sizeof(char)                                                    *(2)                                                    );
                                                    buf2_279[0]=*info->p;
                                                    buf2_279[1]=0;
                                                    info->p++;
                                                    strncat(buf_278,buf2_279,128);
                                                }
                                                n_281=strtoll(buf_278,((void*)0),0);
                                                buffer_append_char(value_273,(char)n_281);
                                            }
                                            else {
                                                switch (*info->p) {
                                                    case 48:
                                                    buffer_append_char(value_273,0);
                                                    info->p++;
                                                    break;
                                                    case 110:
                                                    buffer_append_char(value_273,10);
                                                    info->p++;
                                                    break;
                                                    case 116:
                                                    buffer_append_char(value_273,9);
                                                    info->p++;
                                                    break;
                                                    case 114:
                                                    buffer_append_char(value_273,13);
                                                    info->p++;
                                                    break;
                                                    case 118:
                                                    buffer_append_char(value_273,11);
                                                    info->p++;
                                                    break;
                                                    case 102:
                                                    buffer_append_char(value_273,12);
                                                    info->p++;
                                                    break;
                                                    case 97:
                                                    buffer_append_char(value_273,7);
                                                    info->p++;
                                                    break;
                                                    case 98:
                                                    buffer_append_char(value_273,8);
                                                    info->p++;
                                                    break;
                                                    case 92:
                                                    buffer_append_char(value_273,92);
                                                    info->p++;
                                                    break;
                                                    default:
                                                    buffer_append_char(value_273,*info->p);
                                                    info->p++;
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        if(*info->p==0) {
                                            sline2_282=info->sline;
                                            info->sline=sline_272;
                                            err_msg(info,"close \" to make c string value");
                                            exit(2);
                                        }
                                        else {
                                            if(*info->p==10) {
                                                info->sline++;
                                            }
                                            buffer_append_char(value_273,*info->p);
                                            info->p++;
                                        }
                                    }
                                }
                            }
                            skip_spaces_and_lf(info);
                            len_283=value_273->len;
                            wstr_284=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_283+1)), "06str.c", 1445, "int"));
                            str_285=value_273->buf;
                            if(mbstowcs(wstr_284,str_285,len_283+1)<0) {
                                perror("mbstowcs");
                                exit(1);
                            }
                            wstr_284[len_283]=0;
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1456, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sWStringNode*)(__right_value393=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value392=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 1456, "sWStringNode")))),(unsigned int*)come_increment_ref_count(wstr_284),sline_272,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sWStringNode_finalize;
                            _inf_value6->clone=(void*)sWStringNode_clone;
                            _inf_value6->compile=(void*)sWStringNode_compile;
                            _inf_value6->sline=(void*)sNodeBase_sline;
                            _inf_value6->sname=(void*)sNodeBase_sname;
                            _inf_value6->terminated=(void*)sNodeBase_terminated;
                            _inf_value6->kind=(void*)sWStringNode_kind;
                            __result149__ = __result_obj__ = ((struct sNode*)(__right_value397=_inf_value6));
                            come_call_finalizer3(value_273,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            wstr_284 = come_decrement_ref_count2(wstr_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(__right_value392,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(__right_value393,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value397) { __right_value397 = come_decrement_ref_count2(__right_value397, ((struct sNode*)__right_value397)->finalize, ((struct sNode*)__right_value397)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result149__;
                            come_call_finalizer3(value_273,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            wstr_284 = come_decrement_ref_count2(wstr_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if((*info->p==115||*info->p==83)&&*(info->p+1)==34) {
                                info->p+=2;
                                sline_287=info->sline;
                                exps_288=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value398=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1464, "list$1sNodeph"))))));
                                come_call_finalizer3(__right_value398,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                value_289=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value400=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1465, "buffer"))))));
                                come_call_finalizer3(__right_value400,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                while(1) {
                                    if(*info->p==34) {
                                        info->p++;
                                        p_290=info->p;
                                        sline_291=info->sline;
                                        skip_spaces_and_lf(info);
                                        if(*info->p==34) {
                                            info->p++;
                                        }
                                        else {
                                            info->p=p_290;
                                            info->sline=sline_291;
                                            break;
                                        }
                                    }
                                    else {
                                        if(*info->p==37) {
                                            buffer_append_char(value_289,37);
                                            buffer_append_char(value_289,37);
                                            info->p++;
                                        }
                                        else {
                                            if(*info->p==36) {
                                                info->p++;
                                                exp_292=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                list$1sNodeph_add(exps_288,(struct sNode*)come_increment_ref_count(exp_292));
                                                buffer_append_str(value_289,"%s");
                                                p_293=info->p-1;
                                                while(*p_293==32||*p_293==9) {
                                                    p_293--;
                                                }
                                                info->p=p_293+1;
                                                if(exp_292) { exp_292 = come_decrement_ref_count2(exp_292, ((struct sNode*)exp_292)->finalize, ((struct sNode*)exp_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(*info->p==92) {
                                                    buffer_append_char(value_289,92);
                                                    info->p++;
                                                    if(xisdigit(*info->p)) {
                                                        len_294=0;
                                                        while(xisdigit(*info->p)&&len_294<3) {
                                                            buffer_append_char(value_289,*info->p);
                                                            info->p++;
                                                            len_294++;
                                                        }
                                                    }
                                                    else {
                                                        if(*info->p==120||*info->p==88) {
                                                            buffer_append_char(value_289,*info->p);
                                                            info->p++;
                                                            while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                                                                buffer_append_char(value_289,*info->p);
                                                                info->p++;
                                                            }
                                                        }
                                                        else {
                                                            if(*info->p==123) {
                                                                info->p++;
                                                                exp_295=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                                list$1sNodeph_add(exps_288,(struct sNode*)come_increment_ref_count(exp_295));
                                                                if(*info->p==125) {
                                                                    info->p++;
                                                                }
                                                                buffer_append_str(value_289,"%s");
                                                                if(exp_295) { exp_295 = come_decrement_ref_count2(exp_295, ((struct sNode*)exp_295)->finalize, ((struct sNode*)exp_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            else {
                                                                switch (*info->p) {
                                                                    case 48:
                                                                    buffer_append_char(value_289,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 110:
                                                                    buffer_append_char(value_289,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 116:
                                                                    buffer_append_char(value_289,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 114:
                                                                    buffer_append_char(value_289,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 118:
                                                                    buffer_append_char(value_289,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 102:
                                                                    buffer_append_char(value_289,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 97:
                                                                    buffer_append_char(value_289,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 98:
                                                                    buffer_append_char(value_289,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 92:
                                                                    buffer_append_char(value_289,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    default:
                                                                    buffer_append_char(value_289,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(*info->p==0) {
                                                        sline2_296=info->sline;
                                                        info->sline=sline_287;
                                                        err_msg(info,"close \" to make embbeded string value");
                                                        exit(2);
                                                    }
                                                    else {
                                                        if(*info->p==10) {
                                                            info->sline++;
                                                        }
                                                        buffer_append_char(value_289,*info->p);
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                skip_spaces_and_lf(info);
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1610, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sSStringNode*)(__right_value406=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value404=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1610, "sSStringNode")))),(char*)come_increment_ref_count(((char*)(__right_value405=buffer_to_string(value_289)))),(struct list$1sNodeph*)come_increment_ref_count(exps_288),sline_287,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sSStringNode_finalize;
                                _inf_value7->clone=(void*)sSStringNode_clone;
                                _inf_value7->compile=(void*)sSStringNode_compile;
                                _inf_value7->sline=(void*)sNodeBase_sline;
                                _inf_value7->sname=(void*)sNodeBase_sname;
                                _inf_value7->terminated=(void*)sNodeBase_terminated;
                                _inf_value7->kind=(void*)sSStringNode_kind;
                                __result152__ = __result_obj__ = ((struct sNode*)(__right_value411=_inf_value7));
                                come_call_finalizer3(exps_288,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(value_289,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(__right_value404,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                                __right_value405 = come_decrement_ref_count2(__right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(__right_value406,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(__right_value411) { __right_value411 = come_decrement_ref_count2(__right_value411, ((struct sNode*)__right_value411)->finalize, ((struct sNode*)__right_value411)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result152__;
                                come_call_finalizer3(exps_288,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(value_289,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                if(*info->p==91) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    p_298=info->p;
                                    no_comma_299=info->no_comma;
                                    info->no_comma=(_Bool)1;
                                    node_300=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                    info->no_comma=no_comma_299;
                                    p2_301=info->p;
                                    first_element_source_302=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value413=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1627, "buffer"))))));
                                    come_call_finalizer3(__right_value413,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                                    buffer_append(first_element_source_302,p_298,p2_301-p_298);
                                    buffer_append_char(first_element_source_302,0);
                                    list_elements_303=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value415=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1632, "list$1sNodeph"))))));
                                    come_call_finalizer3(__right_value415,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    map_keys_304=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value417=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1634, "list$1sNodeph"))))));
                                    come_call_finalizer3(__right_value417,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    map_elements_305=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value419=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1635, "list$1sNodeph"))))));
                                    come_call_finalizer3(__right_value419,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(*info->p==58) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        list$1sNodeph_push_back(map_keys_304,(struct sNode*)come_increment_ref_count(node_300));
                                        no_comma_306=info->no_comma;
                                        info->no_comma=(_Bool)1;
                                        node2_307=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                        info->no_comma=no_comma_306;
                                        list$1sNodeph_push_back(map_elements_305,(struct sNode*)come_increment_ref_count(node2_307));
                                        if(*info->p==93) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1657, "struct sNode");
                                            _inf_obj_value8=come_increment_ref_count(((struct sMapNode*)(__right_value423=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value422=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1657, "sMapNode")))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_304),(struct list$1sNodeph*)come_increment_ref_count(map_elements_305),info))));
                                            _inf_value8->_protocol_obj=_inf_obj_value8;
                                            _inf_value8->finalize=(void*)sMapNode_finalize;
                                            _inf_value8->clone=(void*)sMapNode_clone;
                                            _inf_value8->compile=(void*)sMapNode_compile;
                                            _inf_value8->sline=(void*)sNodeBase_sline;
                                            _inf_value8->sname=(void*)sNodeBase_sname;
                                            _inf_value8->terminated=(void*)sNodeBase_terminated;
                                            _inf_value8->kind=(void*)sMapNode_kind;
                                            __result155__ = __result_obj__ = ((struct sNode*)(__right_value428=_inf_value8));
                                            if(node2_307) { node2_307 = come_decrement_ref_count2(node2_307, ((struct sNode*)node2_307)->finalize, ((struct sNode*)node2_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer3(first_element_source_302,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(list_elements_303,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(map_keys_304,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(map_elements_305,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(__right_value422,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(__right_value423,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(__right_value428) { __right_value428 = come_decrement_ref_count2(__right_value428, ((struct sNode*)__right_value428)->finalize, ((struct sNode*)__right_value428)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result155__;
                                        }
                                        else {
                                            expected_next_character(44,info);
                                            while((_Bool)1) {
                                                no_comma_309=info->no_comma;
                                                info->no_comma=(_Bool)1;
                                                node2_310=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                info->no_comma=no_comma_309;
                                                list$1sNodeph_push_back(map_keys_304,(struct sNode*)come_increment_ref_count(node2_310));
                                                expected_next_character(58,info);
                                                no_comma_309=info->no_comma;
                                                info->no_comma=(_Bool)1;
                                                node3_311=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                info->no_comma=no_comma_309;
                                                list$1sNodeph_push_back(map_elements_305,(struct sNode*)come_increment_ref_count(node3_311));
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
                                                            if(node2_310) { node2_310 = come_decrement_ref_count2(node2_310, ((struct sNode*)node2_310)->finalize, ((struct sNode*)node2_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            if(node3_311) { node3_311 = come_decrement_ref_count2(node3_311, ((struct sNode*)node3_311)->finalize, ((struct sNode*)node3_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            break;
                                                        }
                                                        else {
                                                            err_msg(info,"invalid character(%c)(3)",*info->p);
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                if(node2_310) { node2_310 = come_decrement_ref_count2(node2_310, ((struct sNode*)node2_310)->finalize, ((struct sNode*)node2_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                if(node3_311) { node3_311 = come_decrement_ref_count2(node3_311, ((struct sNode*)node3_311)->finalize, ((struct sNode*)node3_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1702, "struct sNode");
                                            _inf_obj_value9=come_increment_ref_count(((struct sMapNode*)(__right_value432=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value431=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 1702, "sMapNode")))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_304),(struct list$1sNodeph*)come_increment_ref_count(map_elements_305),info))));
                                            _inf_value9->_protocol_obj=_inf_obj_value9;
                                            _inf_value9->finalize=(void*)sMapNode_finalize;
                                            _inf_value9->clone=(void*)sMapNode_clone;
                                            _inf_value9->compile=(void*)sMapNode_compile;
                                            _inf_value9->sline=(void*)sNodeBase_sline;
                                            _inf_value9->sname=(void*)sNodeBase_sname;
                                            _inf_value9->terminated=(void*)sNodeBase_terminated;
                                            _inf_value9->kind=(void*)sMapNode_kind;
                                            __result158__ = __result_obj__ = ((struct sNode*)(__right_value437=_inf_value9));
                                            if(node2_307) { node2_307 = come_decrement_ref_count2(node2_307, ((struct sNode*)node2_307)->finalize, ((struct sNode*)node2_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer3(first_element_source_302,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(list_elements_303,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(map_keys_304,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(map_elements_305,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            come_call_finalizer3(__right_value431,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(__right_value432,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(__right_value437) { __right_value437 = come_decrement_ref_count2(__right_value437, ((struct sNode*)__right_value437)->finalize, ((struct sNode*)__right_value437)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result158__;
                                        }
                                        if(node2_307) { node2_307 = come_decrement_ref_count2(node2_307, ((struct sNode*)node2_307)->finalize, ((struct sNode*)node2_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(*info->p==93) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            list$1sNodeph_push_back(list_elements_303,(struct sNode*)come_increment_ref_count(node_300));
                                        }
                                        else {
                                            if(*info->p==44) {
                                                info->p++;
                                                skip_spaces_and_lf(info);
                                                list$1sNodeph_push_back(list_elements_303,(struct sNode*)come_increment_ref_count(node_300));
                                                while((_Bool)1) {
                                                    no_comma_313=info->no_comma;
                                                    info->no_comma=(_Bool)1;
                                                    node2_314=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                    info->no_comma=no_comma_313;
                                                    list$1sNodeph_push_back(list_elements_303,(struct sNode*)come_increment_ref_count(node2_314));
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
                                                                if(node2_314) { node2_314 = come_decrement_ref_count2(node2_314, ((struct sNode*)node2_314)->finalize, ((struct sNode*)node2_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                break;
                                                            }
                                                            else {
                                                                err_msg(info,"invalid character(%c)(4)",*info->p);
                                                                exit(2);
                                                            }
                                                        }
                                                    }
                                                    if(node2_314) { node2_314 = come_decrement_ref_count2(node2_314, ((struct sNode*)node2_314)->finalize, ((struct sNode*)node2_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                            }
                                            else {
                                                err_msg(info,"invalid character(%c)(5)",*info->p);
                                                exit(2);
                                            }
                                        }
                                    }
                                    if(list$1sNodeph_length(list_elements_303)>0) {
                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1753, "struct sNode");
                                        _inf_obj_value10=come_increment_ref_count(((struct sListNode*)(__right_value440=sListNode_initialize((struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value439=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 1753, "sListNode")))),(struct list$1sNodeph*)come_increment_ref_count(list_elements_303),info))));
                                        _inf_value10->_protocol_obj=_inf_obj_value10;
                                        _inf_value10->finalize=(void*)sListNode_finalize;
                                        _inf_value10->clone=(void*)sListNode_clone;
                                        _inf_value10->compile=(void*)sListNode_compile;
                                        _inf_value10->sline=(void*)sNodeBase_sline;
                                        _inf_value10->sname=(void*)sNodeBase_sname;
                                        _inf_value10->terminated=(void*)sNodeBase_terminated;
                                        _inf_value10->kind=(void*)sListNode_kind;
                                        __result161__ = __result_obj__ = ((struct sNode*)(__right_value444=_inf_value10));
                                        if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(first_element_source_302,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(list_elements_303,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(map_keys_304,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(map_elements_305,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value439,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(__right_value440,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(__right_value444) { __right_value444 = come_decrement_ref_count2(__right_value444, ((struct sNode*)__right_value444)->finalize, ((struct sNode*)__right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result161__;
                                    }
                                    else {
                                    }
                                    if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(first_element_source_302,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(list_elements_303,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(map_keys_304,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(map_elements_305,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    ((struct sNode*)(__right_value445=expression_node_v1(info)));
                                    if(__right_value445) { __right_value445 = come_decrement_ref_count2(__right_value445, ((struct sNode*)__right_value445)->finalize, ((struct sNode*)__right_value445)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __result162__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result162__;
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
struct sStrNode* __result135__;
void* __right_value366 = (void*)0;
struct sStrNode* result_248;
void* __right_value367 = (void*)0;
char* __dec_obj101;
void* __right_value368 = (void*)0;
char* __dec_obj102;
struct sStrNode* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_248, 0, sizeof(struct sStrNode*));
    if(self==(void*)0) {
        __result135__ = __result_obj__ = (void*)0;
        return __result135__;
    }
    result_248=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "sStrNode"));
    if(self!=((void*)0)) {
        result_248->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj101=result_248->sname;
        result_248->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj102=result_248->value;
        result_248->value=(char*)come_increment_ref_count(string_clone(self->value));
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result136__ = __result_obj__ = result_248;
    come_call_finalizer3(result_248,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result136__;
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
struct sRegexNode* __result138__;
void* __right_value375 = (void*)0;
struct sRegexNode* result_253;
void* __right_value376 = (void*)0;
char* __dec_obj103;
void* __right_value377 = (void*)0;
char* __dec_obj104;
struct sRegexNode* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_253, 0, sizeof(struct sRegexNode*));
    if(self==(void*)0) {
        __result138__ = __result_obj__ = (void*)0;
        return __result138__;
    }
    result_253=(struct sRegexNode*)come_increment_ref_count((struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "sRegexNode_clone", 3, "sRegexNode"));
    if(self!=((void*)0)) {
        result_253->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj103=result_253->sname;
        result_253->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->str!=((void*)0)) {
        __dec_obj104=result_253->str;
        result_253->str=(char*)come_increment_ref_count(string_clone(self->str));
        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_253->global=self->global;
    }
    if(self!=((void*)0)) {
        result_253->ignore_case=self->ignore_case;
    }
    __result139__ = __result_obj__ = result_253;
    come_call_finalizer3(result_253,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result139__;
}

static void sCharNode_finalize(struct sCharNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__;
struct sCharNode* __result141__;
void* __right_value381 = (void*)0;
struct sCharNode* result_260;
void* __right_value382 = (void*)0;
char* __dec_obj105;
struct sCharNode* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_260, 0, sizeof(struct sCharNode*));
    if(self==(void*)0) {
        __result141__ = __result_obj__ = (void*)0;
        return __result141__;
    }
    result_260=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "sCharNode"));
    if(self!=((void*)0)) {
        result_260->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj105=result_260->sname;
        result_260->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_260->value=self->value;
    }
    __result142__ = __result_obj__ = result_260;
    come_call_finalizer3(result_260,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result142__;
}

static void sWCharNode_finalize(struct sWCharNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__;
struct sWCharNode* __result144__;
void* __right_value386 = (void*)0;
struct sWCharNode* result_271;
void* __right_value387 = (void*)0;
char* __dec_obj106;
struct sWCharNode* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_271, 0, sizeof(struct sWCharNode*));
    if(self==(void*)0) {
        __result144__ = __result_obj__ = (void*)0;
        return __result144__;
    }
    result_271=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "sWCharNode"));
    if(self!=((void*)0)) {
        result_271->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj106=result_271->sname;
        result_271->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_271->value=self->value;
    }
    if(self!=((void*)0)) {
        result_271->quote=self->quote;
    }
    __result145__ = __result_obj__ = result_271;
    come_call_finalizer3(result_271,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result145__;
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
struct sWStringNode* __result147__;
void* __right_value394 = (void*)0;
struct sWStringNode* result_286;
void* __right_value395 = (void*)0;
char* __dec_obj107;
void* __right_value396 = (void*)0;
unsigned int* __dec_obj108;
struct sWStringNode* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_286, 0, sizeof(struct sWStringNode*));
    if(self==(void*)0) {
        __result147__ = __result_obj__ = (void*)0;
        return __result147__;
    }
    result_286=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "sWStringNode"));
    if(self!=((void*)0)) {
        result_286->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj107=result_286->sname;
        result_286->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj108=result_286->value;
        result_286->value=(unsigned int*)come_increment_ref_count((unsigned int*)come_memdup(self->value, "sWStringNode_clone", 6, "unsigned int*"));
        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result148__ = __result_obj__ = result_286;
    come_call_finalizer3(result_286,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result148__;
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
struct sSStringNode* __result150__;
void* __right_value407 = (void*)0;
struct sSStringNode* result_297;
void* __right_value408 = (void*)0;
char* __dec_obj109;
void* __right_value409 = (void*)0;
char* __dec_obj110;
void* __right_value410 = (void*)0;
struct list$1sNodeph* __dec_obj111;
struct sSStringNode* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_297, 0, sizeof(struct sSStringNode*));
    if(self==(void*)0) {
        __result150__ = __result_obj__ = (void*)0;
        return __result150__;
    }
    result_297=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "sSStringNode"));
    if(self!=((void*)0)) {
        result_297->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj109=result_297->sname;
        result_297->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj110=result_297->value;
        result_297->value=(char*)come_increment_ref_count(string_clone(self->value));
        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj111=result_297->exps;
        result_297->exps=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->exps));
        come_call_finalizer3(__dec_obj111,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result151__ = __result_obj__ = result_297;
    come_call_finalizer3(result_297,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result151__;
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
struct sMapNode* __result156__;
void* __right_value433 = (void*)0;
struct sMapNode* result_312;
void* __right_value434 = (void*)0;
char* __dec_obj115;
void* __right_value435 = (void*)0;
struct list$1sNodeph* __dec_obj116;
void* __right_value436 = (void*)0;
struct list$1sNodeph* __dec_obj117;
struct sMapNode* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_312, 0, sizeof(struct sMapNode*));
    if(self==(void*)0) {
        __result156__ = __result_obj__ = (void*)0;
        return __result156__;
    }
    result_312=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "sMapNode"));
    if(self!=((void*)0)) {
        result_312->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj115=result_312->sname;
        result_312->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj116=result_312->map_key_elements;
        result_312->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->map_key_elements));
        come_call_finalizer3(__dec_obj116,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj117=result_312->map_elements;
        result_312->map_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->map_elements));
        come_call_finalizer3(__dec_obj117,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result157__ = __result_obj__ = result_312;
    come_call_finalizer3(result_312,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result157__;
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
struct sListNode* __result159__;
void* __right_value441 = (void*)0;
struct sListNode* result_315;
void* __right_value442 = (void*)0;
char* __dec_obj118;
void* __right_value443 = (void*)0;
struct list$1sNodeph* __dec_obj119;
struct sListNode* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_315, 0, sizeof(struct sListNode*));
    if(self==(void*)0) {
        __result159__ = __result_obj__ = (void*)0;
        return __result159__;
    }
    result_315=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "sListNode"));
    if(self!=((void*)0)) {
        result_315->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj118=result_315->sname;
        result_315->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj119=result_315->list_elements;
        result_315->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->list_elements));
        come_call_finalizer3(__dec_obj119,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result160__ = __result_obj__ = result_315;
    come_call_finalizer3(result_315,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result160__;
}

struct sNode* parse_tuple(struct sInfo* info){
void* __result_obj__;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct list$1sNodeph* tuple_elements_316;
char* p_317;
_Bool no_comma_318;
void* __right_value448 = (void*)0;
struct sNode* node_319;
void* __right_value449 = (void*)0;
struct sNode* __dec_obj120;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct sNode* _inf_value11;
struct sTupleNode* _inf_obj_value11;
void* __right_value455 = (void*)0;
struct sNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&tuple_elements_316, 0, sizeof(struct list$1sNodeph*));
memset(&node_319, 0, sizeof(struct sNode*));
    tuple_elements_316=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value446=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1767, "list$1sNodeph"))))));
    come_call_finalizer3(__right_value446,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    while((_Bool)1) {
        p_317=info->p;
        no_comma_318=info->no_comma;
        info->no_comma=(_Bool)1;
        node_319=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj120=node_319;
        node_319=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_319),info));
        if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); }
        info->no_comma=no_comma_318;
        list$1sNodeph_push_back(tuple_elements_316,(struct sNode*)come_increment_ref_count(node_319));
        if(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                if(node_319) { node_319 = come_decrement_ref_count2(node_319, ((struct sNode*)node_319)->finalize, ((struct sNode*)node_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            else {
                err_msg(info,"invalid character(%c) in tuple expression",*info->p);
                exit(2);
            }
        }
        if(node_319) { node_319 = come_decrement_ref_count2(node_319, ((struct sNode*)node_319)->finalize, ((struct sNode*)node_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1796, "struct sNode");
    _inf_obj_value11=come_increment_ref_count(((struct sTupleNode*)(__right_value451=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value450=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 1796, "sTupleNode")))),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_316),info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sTupleNode_finalize;
    _inf_value11->clone=(void*)sTupleNode_clone;
    _inf_value11->compile=(void*)sTupleNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sNodeBase_terminated;
    _inf_value11->kind=(void*)sTupleNode_kind;
    __result165__ = __result_obj__ = ((struct sNode*)(__right_value455=_inf_value11));
    come_call_finalizer3(tuple_elements_316,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value450,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value451,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value455) { __right_value455 = come_decrement_ref_count2(__right_value455, ((struct sNode*)__right_value455)->finalize, ((struct sNode*)__right_value455)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result165__;
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
struct sTupleNode* __result163__;
void* __right_value452 = (void*)0;
struct sTupleNode* result_320;
void* __right_value453 = (void*)0;
char* __dec_obj121;
void* __right_value454 = (void*)0;
struct list$1sNodeph* __dec_obj122;
struct sTupleNode* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_320, 0, sizeof(struct sTupleNode*));
    if(self==(void*)0) {
        __result163__ = __result_obj__ = (void*)0;
        return __result163__;
    }
    result_320=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "sTupleNode"));
    if(self!=((void*)0)) {
        result_320->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj121=result_320->sname;
        result_320->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj122=result_320->tuple_elements;
        result_320->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->tuple_elements));
        come_call_finalizer3(__dec_obj122,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result164__ = __result_obj__ = result_320;
    come_call_finalizer3(result_320,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result164__;
}

