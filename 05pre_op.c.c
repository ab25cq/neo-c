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
struct sRefferenceNode
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sDerefferenceNode
{
    int sline;
    char* sname;
    struct sNode* value;
    _Bool mQuote;
};
struct sLogicalDenial
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sReverseNode
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sMinusNode2
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sPlusPlusNode2
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sMinusMinusNode2
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sNormalBlock
{
    int sline;
    char* sname;
    struct sBlock* mBlock;
};
struct sComplement
{
    int sline;
    char* sname;
    struct sNode* value;
};
struct sParenNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
};
struct sCastNode
{
    int sline;
    char* sname;
    struct sType* mType;
    struct sNode* mLeft;
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

_Bool strmemcmp(char* p, char* p2);

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);

void transpile_toplevel(_Bool block, struct sInfo* info);

void skip_pointer_attribute(struct sInfo* info);

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

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

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
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info);

char* sRefferenceNode_kind(struct sRefferenceNode* self);

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info);

char* sDerefferenceNode_kind(struct sDerefferenceNode* self);

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info);

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info);

char* sLogicalDenial_kind(struct sLogicalDenial* self);

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info);

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info);

char* sReverseNode_kind(struct sReverseNode* self);

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info);

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info);

char* sMinusNode2_kind(struct sMinusNode2* self);

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info);

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info);

char* sPlusPlusNode2_kind(struct sPlusPlusNode2* self);

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info);

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info);

char* sMinusMinusNode2_kind(struct sMinusMinusNode2* self);

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info);

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, struct sInfo* info);

_Bool sNormalBlock_terminated(struct sNormalBlock* self);

char* sNormalBlock_kind(struct sNormalBlock* self);

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info);

static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info);

char* sComplement_kind(struct sComplement* self);

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info);

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info);

char* sParenNode_kind(struct sParenNode* self);

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info);

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info);

char* sCastNode_kind(struct sCastNode* self);

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

static void sNormalBlock_finalize(struct sNormalBlock* self);
static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);

struct sNode* pre_position_operator(struct sInfo* info);

static void sLogicalDenial_finalize(struct sLogicalDenial* self);
static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self);
static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self);
static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self);
static void sMinusNode2_finalize(struct sMinusNode2* self);
static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self);
static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self);
static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self);
static void sComplement_finalize(struct sComplement* self);
static struct sComplement* sComplement_clone(struct sComplement* self);
static void sDerefferenceNode_finalize(struct sDerefferenceNode* self);
static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self);
static void sRefferenceNode_finalize(struct sRefferenceNode* self);
static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self);
static void sReverseNode_finalize(struct sReverseNode* self);
static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void sCastNode_finalize(struct sCastNode* self);
static struct sCastNode* sCastNode_clone(struct sCastNode* self);
static void sParenNode_finalize(struct sParenNode* self);
static struct sParenNode* sParenNode_clone(struct sParenNode* self);
struct sNode* expression_node_v98(struct sInfo* info);

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










_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info){
void* __right_value114 = (void*)0;
struct sType* generics_type_47;
struct sType* __dec_obj35;
struct sClass* klass_78;
char* class_name_79;
struct sFun* operator_fun_80;
char* fun_name2_81;
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
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_91;
char* fun_name_92;
void* __right_value121 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun2_93;
char* fun_name2_94;
void* __right_value122 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var3;
struct sFun* fun_95;
char* fun_name_96;
void* __right_value123 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var4;
struct sFun* fun2_97;
char* fun_name2_98;
void* __right_value124 = (void*)0;
char* __dec_obj37;
int i_99;
void* __right_value125 = (void*)0;
char* new_fun_name_100;
void* __right_value126 = (void*)0;
char* __dec_obj38;
_Bool result_101;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
struct CVALUE* come_value_102;
char* left_value2_103;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
char* __dec_obj39;
void* __right_value132 = (void*)0;
char* __dec_obj40;
void* __right_value133 = (void*)0;
char* __dec_obj41;
void* __right_value134 = (void*)0;
struct sType* type2_107;
void* __right_value135 = (void*)0;
struct sType* type3_108;
void* __right_value136 = (void*)0;
struct sType* __dec_obj42;
void* __right_value137 = (void*)0;
char* __dec_obj43;
_Bool __result75__;
memset(&generics_type_47, 0, sizeof(struct sType*));
memset(&klass_78, 0, sizeof(struct sClass*));
memset(&operator_fun_80, 0, sizeof(struct sFun*));
memset(&fun_name2_81, 0, sizeof(char*));
memset(&none_generics_name_82, 0, sizeof(char*));
memset(&obj_type_83, 0, sizeof(struct sType*));
memset(&fun_name3_84, 0, sizeof(char*));
memset(&generics_fun_85, 0, sizeof(struct sGenericsFun*));
memset(&i_99, 0, sizeof(int));
memset(&new_fun_name_100, 0, sizeof(char*));
memset(&come_value_102, 0, sizeof(struct CVALUE*));
memset(&left_value2_103, 0, sizeof(char*));
memset(&type2_107, 0, sizeof(struct sType*));
memset(&type3_108, 0, sizeof(struct sType*));
    generics_type_47=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value114=sType_clone(type))));
    if(generics_type_47->mNoSolvedGenericsType->v1) {
        __dec_obj35=generics_type_47;
        generics_type_47=(struct sType*)come_increment_ref_count(generics_type_47->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    klass_78=type->mClass;
    class_name_79=klass_78->mName;
    operator_fun_80=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_82=(char*)come_increment_ref_count(((char*)(__right_value115=get_none_generics_name(type->mClass->mName))));
        obj_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value116=solve_generics(type,info->generics_type,info))));
        __dec_obj36=fun_name2_81;
        fun_name2_81=(char*)come_increment_ref_count(((char*)(__right_value117=create_method_name(obj_type_83,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_84=(char*)come_increment_ref_count(((char*)(__right_value118=xsprintf("%s_%s",none_generics_name_82,fun_name))));
        generics_fun_85=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_84,((void*)0));
        if(generics_fun_85) {
            if((_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(((char*)(__right_value119=__builtin_string(fun_name2_81)))),generics_fun_85,obj_type_83,info))),            (come_decrement_ref_count2(__right_value119, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _if_conditional1) {
                __result67__ = (_Bool)0;
                none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(generics_type_47,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_81 = come_decrement_ref_count2(fun_name2_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result67__;
            }
            operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_81);
        }
        else {
            if(charp_operator_equals(fun_name,"operator_equals")) {
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value120=create_equals_automatically(obj_type_83,"equals",info)));
                fun_91=multiple_assign_var1->v1;
                fun_name_92=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                come_call_finalizer3(__right_value120,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(__right_value121=create_operator_equals_automatically(obj_type_83,"operator_equals",info)));
                fun2_93=multiple_assign_var2->v1;
                fun_name2_94=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(__right_value121,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                operator_fun_80=fun2_93;
                fun_name_92 = come_decrement_ref_count2(fun_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_94 = come_decrement_ref_count2(fun_name2_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(charp_operator_equals(fun_name,"operator_not_equals")) {
                    multiple_assign_var3=((struct tuple2$2sFunpcharph*)(__right_value122=create_equals_automatically(obj_type_83,"not_equals",info)));
                    fun_95=multiple_assign_var3->v1;
                    fun_name_96=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    come_call_finalizer3(__right_value122,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    multiple_assign_var4=((struct tuple2$2sFunpcharph*)(__right_value123=create_operator_not_equals_automatically(obj_type_83,"operator_not_equals",info)));
                    fun2_97=multiple_assign_var4->v1;
                    fun_name2_98=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    come_call_finalizer3(__right_value123,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    operator_fun_80=fun2_97;
                    fun_name_96 = come_decrement_ref_count2(fun_name_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_98 = come_decrement_ref_count2(fun_name2_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_81);
                }
            }
        }
        none_generics_name_82 = come_decrement_ref_count2(none_generics_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_83,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_84 = come_decrement_ref_count2(fun_name3_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj37=fun_name2_81;
        fun_name2_81=(char*)come_increment_ref_count(((char*)(__right_value124=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_99=128-1;        i_99>=1;        i_99--        ){
            new_fun_name_100=(char*)come_increment_ref_count(((char*)(__right_value125=xsprintf("%s_v%d",fun_name2_81,i_99))));
            operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_100);
            if(operator_fun_80) {
                __dec_obj38=fun_name2_81;
                fun_name2_81=(char*)come_increment_ref_count(((char*)(__right_value126=__builtin_string(new_fun_name_100))));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_100 = come_decrement_ref_count2(new_fun_name_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_100 = come_decrement_ref_count2(new_fun_name_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(operator_fun_80==((void*)0)) {
            operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_81);
        }
    }
    result_101=(_Bool)0;
    if(operator_fun_80) {
        come_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value128=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value127=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 77, "CVALUE"))))))));
        come_call_finalizer3(__right_value127,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        check_assign_type(((char*)(__right_value130=xsprintf("\%s is assigned to",((char*)(__right_value129=string_to_string(fun_name2_81)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,0), "05pre_op.c", 79, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        __right_value129 = come_decrement_ref_count2(__right_value129, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value130 = come_decrement_ref_count2(__right_value130, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,0), "05pre_op.c", 80, 1))->mHeap&&left_value->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,0), "05pre_op.c", 81, 2)),left_value->type,left_value,info,(_Bool)1);
            __dec_obj39=left_value2_103;
            left_value2_103=(char*)come_increment_ref_count(((char*)(__right_value131=xsprintf("%s",left_value->c_value))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj40=left_value2_103;
            left_value2_103=(char*)come_increment_ref_count(((char*)(__right_value132=string_clone(left_value->c_value))));
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj41=come_value_102->c_value;
        come_value_102->c_value=(char*)come_increment_ref_count(((char*)(__right_value133=xsprintf("%s(%s)",fun_name2_81,left_value2_103))));
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        type2_107=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value134=sType_clone(operator_fun_80->mResultType))));
        type3_108=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value135=solve_generics(type2_107,generics_type_47,info))));
        __dec_obj42=come_value_102->type;
        come_value_102->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value136=sType_clone(type3_108))));
        come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_102->var=((void*)0);
        if(type3_108->mHeap) {
            append_object_to_right_values2(come_value_102,(struct sType*)come_increment_ref_count(type3_108),info);
        }
        __dec_obj43=come_value_102->c_value;
        come_value_102->c_value=(char*)come_increment_ref_count(((char*)(__right_value137=append_stackframe(come_value_102->c_value,come_value_102->type,info))));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s;\n",come_value_102->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
        result_101=(_Bool)1;
        come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_103 = come_decrement_ref_count2(left_value2_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_107,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_108,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result75__ = result_101;
    come_call_finalizer3(generics_type_47,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_81 = come_decrement_ref_count2(fun_name2_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result75__;
    come_call_finalizer3(generics_type_47,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_81 = come_decrement_ref_count2(fun_name2_81, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
memset(&result_48, 0, sizeof(struct sType*));
        if(self==(void*)0) {
            __result45__ = __result_obj__ = (void*)0;
            return __result45__;
        }
        result_48=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value79=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        if(self!=((void*)0)) {
            result_48->mClass=self->mClass;
        }
        if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
            __dec_obj15=result_48->mMultipleTypes;
            result_48->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value86=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj15,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
            __dec_obj17=result_48->mNoSolvedGenericsType;
            result_48->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value89=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj17,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
            __dec_obj18=result_48->mOriginalLoadVarType;
            result_48->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value90=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
            __dec_obj19=result_48->mGenericsName;
            result_48->mGenericsName=(char*)come_increment_ref_count(((char*)(__right_value91=string_clone(self->mGenericsName))));
            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
            __dec_obj20=result_48->mGenericsTypes;
            result_48->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value92=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
            __dec_obj24=result_48->mArrayNum;
            result_48->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value100=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)) {
            result_48->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            __dec_obj25=result_48->mParamTypes;
            result_48->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value101=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            __dec_obj29=result_48->mParamNames;
            result_48->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value108=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            __dec_obj30=result_48->mResultType;
            result_48->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value109=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)) {
            result_48->mVarArgs=self->mVarArgs;
        }
        if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
            __dec_obj31=result_48->mAlignas;
            result_48->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value110=sNode_clone(self->mAlignas))));
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
            result_48->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value111=sNode_clone(self->mSizeNum))));
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
            result_48->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(__right_value112=string_clone(self->mOriginalTypeName))));
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
            result_48->mAsmName=(char*)come_increment_ref_count(((char*)(__right_value113=string_clone(self->mAsmName))));
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
        come_call_finalizer3(result_48,sType_finalize, 0, 0, 0, 0, (void*)0);
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
memset(&result_55, 0, sizeof(struct list$1sTypeph*));
memset(&it_56, 0, sizeof(struct list_item$1sTypeph*));
                if(self==((void*)0)) {
                    __result46__ = __result_obj__ = ((void*)0);
                    return __result46__;
                }
                result_55=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value81=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value80=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))))));
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
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
memset(&litem_59, 0, sizeof(struct list_item$1sTypeph*));
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
void* __right_value87 = (void*)0;
struct tuple1$1sTypeph* result_62;
void* __right_value88 = (void*)0;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_62, 0, sizeof(struct tuple1$1sTypeph*));
                if(self==(void*)0) {
                    __result50__ = __result_obj__ = (void*)0;
                    return __result50__;
                }
                result_62=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value87=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj16=result_62->v1;
                    result_62->v1=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value88=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct list$1sNodeph* result_63;
struct list_item$1sNodeph* it_64;
void* __right_value99 = (void*)0;
struct list$1sNodeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_63, 0, sizeof(struct list$1sNodeph*));
memset(&it_64, 0, sizeof(struct list_item$1sNodeph*));
                if(self==((void*)0)) {
                    __result52__ = __result_obj__ = ((void*)0);
                    return __result52__;
                }
                result_63=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value94=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value93=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))))));
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
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
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
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
struct sNode* __result55__;
void* __right_value98 = (void*)0;
struct sNode* result_68;
struct sNode* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_68, 0, sizeof(struct sNode*));
                        if(self==(void*)0) {
                            __result55__ = __result_obj__ = (void*)0;
                            return __result55__;
                        }
                        result_68=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value98=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
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
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1charph* result_71;
struct list_item$1charph* it_72;
void* __right_value107 = (void*)0;
struct list$1charph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_71, 0, sizeof(struct list$1charph*));
memset(&it_72, 0, sizeof(struct list_item$1charph*));
                if(self==((void*)0)) {
                    __result58__ = __result_obj__ = ((void*)0);
                    return __result58__;
                }
                result_71=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value103=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value102=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))))));
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
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
memset(&litem_75, 0, sizeof(struct list_item$1charph*));
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
memset(&default_value_88, 0, sizeof(struct sFun*));
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
                come_call_finalizer3(default_value_88,sFun_finalize, 0, 0, 0, 0, (void*)0);
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

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
                    if(self!=((void*)0)&&self->v2!=((void*)0)) {
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
struct list_item$1sTypeph* it_104;
int i_105;
struct sType* __result72__;
struct sType* default_value_106;
struct sType* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_104, 0, sizeof(struct list_item$1sTypeph*));
memset(&default_value_106, 0, sizeof(struct sType*));
            if(position<0) {
                position+=self->len;
            }
            it_104=self->head;
            i_105=0;
            while(it_104!=((void*)0)) {
                if(position==i_105) {
                    __result72__ = __result_obj__ = it_104->item;
                    return __result72__;
                }
                it_104=it_104->next;
                i_105++;
            }
            memset(&default_value_106,0,sizeof(struct sType*));
            __result73__ = __result_obj__ = default_value_106;
            come_call_finalizer3(default_value_106,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result73__;
            come_call_finalizer3(default_value_106,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
void* __right_value138 = (void*)0;
struct list_item$1CVALUEph* litem_109;
struct CVALUE* __dec_obj44;
void* __right_value139 = (void*)0;
struct list_item$1CVALUEph* litem_110;
struct CVALUE* __dec_obj45;
void* __right_value140 = (void*)0;
struct list_item$1CVALUEph* litem_111;
struct CVALUE* __dec_obj46;
struct list$1CVALUEph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_109, 0, sizeof(struct list_item$1CVALUEph*));
memset(&litem_110, 0, sizeof(struct list_item$1CVALUEph*));
memset(&litem_111, 0, sizeof(struct list_item$1CVALUEph*));
            if(self->len==0) {
                litem_109=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value138=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 219, "list_item$1CVALUEph"))));
                come_call_finalizer3(__right_value138,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_109->prev=((void*)0);
                litem_109->next=((void*)0);
                __dec_obj44=litem_109->item;
                litem_109->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj44,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_109;
                self->head=litem_109;
            }
            else {
                if(self->len==1) {
                    litem_110=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value139=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 229, "list_item$1CVALUEph"))));
                    come_call_finalizer3(__right_value139,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_110->prev=self->head;
                    litem_110->next=((void*)0);
                    __dec_obj45=litem_110->item;
                    litem_110->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj45,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_110;
                    self->head->next=litem_110;
                }
                else {
                    litem_111=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value140=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 239, "list_item$1CVALUEph"))));
                    come_call_finalizer3(__right_value140,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_111->prev=self->tail;
                    litem_111->next=((void*)0);
                    __dec_obj46=litem_111->item;
                    litem_111->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj46,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_111;
                    self->tail=litem_111;
                }
            }
            self->len++;
            __result74__ = __result_obj__ = self;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result74__;
            come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
                    if(self!=((void*)0)&&self->item!=((void*)0)) {
                        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
void* __right_value141 = (void*)0;
struct sNode* __dec_obj47;
struct sRefferenceNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value141=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value141,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj47=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); }
    __result76__ = __result_obj__ = self;
    come_call_finalizer3(self,sRefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result76__;
    come_call_finalizer3(self,sRefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sRefferenceNode_kind(struct sRefferenceNode* self){
void* __result_obj__;
void* __right_value142 = (void*)0;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    __result77__ = __result_obj__ = ((char*)(__right_value142=__builtin_string("sRefferenceNode")));
    __right_value142 = come_decrement_ref_count2(__right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result77__;
}

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info){
struct sNode* value_112;
void* __right_value143 = (void*)0;
struct CVALUE* left_value_113;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
struct CVALUE* come_value_114;
void* __right_value146 = (void*)0;
char* __dec_obj48;
void* __right_value147 = (void*)0;
struct sType* __dec_obj49;
_Bool __result78__;
memset(&value_112, 0, sizeof(struct sNode*));
memset(&left_value_113, 0, sizeof(struct CVALUE*));
memset(&come_value_114, 0, sizeof(struct CVALUE*));
    value_112=self->value;
    if(!node_compile(value_112,info)) {
        return (_Bool)0;
    }
    left_value_113=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value143=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    come_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value145=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value144=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 138, "CVALUE"))))))));
    come_call_finalizer3(__right_value144,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj48=come_value_114->c_value;
    come_value_114->c_value=(char*)come_increment_ref_count(((char*)(__right_value146=xsprintf("&%s",left_value_113->c_value))));
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj49=come_value_114->type;
    come_value_114->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value147=sType_clone(left_value_113->type))));
    come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_114->type->mPointerNum++;
    come_value_114->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_114->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_114));
    __result78__ = (_Bool)1;
    come_call_finalizer3(left_value_113,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_114,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result78__;
    come_call_finalizer3(left_value_113,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_114,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNodeBase_finalize(struct sNodeBase* self){
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* __right_value148 = (void*)0;
struct sNode* __dec_obj50;
struct sDerefferenceNode* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value148=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value148,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj50=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); }
    self->mQuote=quote;
    __result79__ = __result_obj__ = self;
    come_call_finalizer3(self,sDerefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result79__;
    come_call_finalizer3(self,sDerefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sDerefferenceNode_kind(struct sDerefferenceNode* self){
void* __result_obj__;
void* __right_value149 = (void*)0;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    __result80__ = __result_obj__ = ((char*)(__right_value149=__builtin_string("sDerefferenceNode")));
    __right_value149 = come_decrement_ref_count2(__right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result80__;
}

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info){
struct sNode* value_115;
void* __right_value150 = (void*)0;
struct CVALUE* left_value_116;
void* __right_value151 = (void*)0;
_Bool _if_conditional2;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
char* __dec_obj51;
char* p_117;
char* p2_118;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
struct buffer* buf_119;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
struct buffer* buf2_120;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
char* __dec_obj52;
struct sType* type_121;
char* fun_name_122;
_Bool calling_fun_123;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
struct CVALUE* come_value_124;
void* __right_value164 = (void*)0;
char* __dec_obj53;
void* __right_value165 = (void*)0;
struct sType* __dec_obj54;
_Bool __result81__;
memset(&value_115, 0, sizeof(struct sNode*));
memset(&left_value_116, 0, sizeof(struct CVALUE*));
memset(&buf_119, 0, sizeof(struct buffer*));
memset(&buf2_120, 0, sizeof(struct buffer*));
memset(&type_121, 0, sizeof(struct sType*));
memset(&calling_fun_123, 0, sizeof(_Bool));
memset(&come_value_124, 0, sizeof(struct CVALUE*));
    value_115=self->value;
    if(!node_compile(value_115,info)) {
        return (_Bool)0;
    }
    left_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value150=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    if(gComeDebug) {
        if((_if_conditional2=(string_operator_not_equals(((char*)(__right_value151=value_115->kind(value_115->_protocol_obj))),"sExpEqualNode"))),        (come_decrement_ref_count2(__right_value151, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional2) {
            __dec_obj51=left_value_116->c_value;
            left_value_116->c_value=(char*)come_increment_ref_count(((char*)(__right_value153=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value152=make_type_name_string(left_value_116->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_116->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            p_117=left_value_116->c_value;
            p2_118=((void*)0);
            while(*p_117) {
                if(*p_117==61) {
                    p2_118=p_117;
                    break;
                }
                else {
                    p_117++;
                }
            }
            if(p2_118==((void*)0)) {
                err_msg(info,"unexpected error in debugging to dereffrence and to assign");
                exit(2);
            }
            p_117=left_value_116->c_value;
            buf_119=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value155=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value154=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05pre_op.c", 203, "buffer"))))))));
            come_call_finalizer3(__right_value154,buffer_finalize, 0, 1, 0, 0, (void*)0);
            buffer_append(buf_119,p_117,p2_118-p_117);
            buf2_120=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value157=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value156=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05pre_op.c", 206, "buffer"))))))));
            come_call_finalizer3(__right_value156,buffer_finalize, 0, 1, 0, 0, (void*)0);
            buffer_append(buf2_120,p2_118,p_117+strlen(p_117)-p2_118);
            __dec_obj52=left_value_116->c_value;
            left_value_116->c_value=(char*)come_increment_ref_count(((char*)(__right_value161=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))%s",((char*)(__right_value158=make_type_name_string(left_value_116->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),((char*)(__right_value159=buffer_to_string(buf_119))),info->sname,info->sline,gComeDebugStackFrameID++,((char*)(__right_value160=buffer_to_string(buf2_120)))))));
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value159 = come_decrement_ref_count2(__right_value159, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value160 = come_decrement_ref_count2(__right_value160, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(buf_119,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_120,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    type_121=(struct sType*)come_increment_ref_count(left_value_116->type);
    fun_name_122="operator_derefference";
    if(self->mQuote) {
        calling_fun_123=(_Bool)0;
    }
    else {
        calling_fun_123=operator_overload_fun_self(type_121,fun_name_122,left_value_116,info);
    }
    if(!calling_fun_123) {
        come_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value163=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value162=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 226, "CVALUE"))))))));
        come_call_finalizer3(__right_value162,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj53=come_value_124->c_value;
        come_value_124->c_value=(char*)come_increment_ref_count(((char*)(__right_value164=xsprintf("*%s",left_value_116->c_value))));
        __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj54=come_value_124->type;
        come_value_124->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value165=sType_clone(left_value_116->type))));
        come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_124->type->mPointerNum--;
        come_value_124->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_124->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
        come_call_finalizer3(come_value_124,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result81__ = (_Bool)1;
    come_call_finalizer3(left_value_116,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_121,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result81__;
    come_call_finalizer3(left_value_116,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_121,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
void* __right_value166 = (void*)0;
struct sNode* __dec_obj55;
struct sLogicalDenial* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value166=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value166,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj55=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
    __result82__ = __result_obj__ = self;
    come_call_finalizer3(self,sLogicalDenial_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result82__;
    come_call_finalizer3(self,sLogicalDenial_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sLogicalDenial_kind(struct sLogicalDenial* self){
void* __result_obj__;
void* __right_value167 = (void*)0;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
    __result83__ = __result_obj__ = ((char*)(__right_value167=__builtin_string("sLogicalDenial")));
    __right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result83__;
}

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info){
void* __right_value168 = (void*)0;
struct CVALUE* come_value_125;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
struct CVALUE* come_value2_126;
void* __right_value171 = (void*)0;
char* __dec_obj56;
void* __right_value172 = (void*)0;
struct sType* __dec_obj57;
_Bool __result84__;
memset(&come_value_125, 0, sizeof(struct CVALUE*));
memset(&come_value2_126, 0, sizeof(struct CVALUE*));
    if(!node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value168=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    come_value2_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value170=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value169=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 265, "CVALUE"))))))));
    come_call_finalizer3(__right_value169,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj56=come_value2_126->c_value;
    come_value2_126->c_value=(char*)come_increment_ref_count(((char*)(__right_value171=xsprintf("!%s",come_value_125->c_value))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj57=come_value2_126->type;
    come_value2_126->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value172=sType_clone(come_value_125->type))));
    come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_126->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_126));
    add_come_last_code(info,"%s;\n",come_value2_126->c_value);
    __result84__ = (_Bool)1;
    come_call_finalizer3(come_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result84__;
    come_call_finalizer3(come_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
void* __right_value173 = (void*)0;
struct sNode* __dec_obj58;
struct sReverseNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value173=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value173,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj58=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
    __result85__ = __result_obj__ = self;
    come_call_finalizer3(self,sReverseNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result85__;
    come_call_finalizer3(self,sReverseNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sReverseNode_kind(struct sReverseNode* self){
void* __result_obj__;
void* __right_value174 = (void*)0;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    __result86__ = __result_obj__ = ((char*)(__right_value174=__builtin_string("sReverseNode")));
    __right_value174 = come_decrement_ref_count2(__right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result86__;
}

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info){
struct sNode* value_127;
void* __right_value175 = (void*)0;
struct CVALUE* left_value_128;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
struct CVALUE* come_value_129;
void* __right_value178 = (void*)0;
char* __dec_obj59;
void* __right_value179 = (void*)0;
struct sType* __dec_obj60;
_Bool __result87__;
memset(&value_127, 0, sizeof(struct sNode*));
memset(&left_value_128, 0, sizeof(struct CVALUE*));
memset(&come_value_129, 0, sizeof(struct CVALUE*));
    value_127=self->value;
    if(!node_compile(value_127,info)) {
        return (_Bool)0;
    }
    left_value_128=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value175=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    come_value_129=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value177=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value176=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 304, "CVALUE"))))))));
    come_call_finalizer3(__right_value176,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj59=come_value_129->c_value;
    come_value_129->c_value=(char*)come_increment_ref_count(((char*)(__right_value178=xsprintf("!%s",left_value_128->c_value))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj60=come_value_129->type;
    come_value_129->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value179=sType_clone(left_value_128->type))));
    come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_129->type->mPointerNum--;
    come_value_129->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_129->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_129));
    __result87__ = (_Bool)1;
    come_call_finalizer3(left_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result87__;
    come_call_finalizer3(left_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
void* __right_value180 = (void*)0;
struct sNode* __dec_obj61;
struct sMinusNode2* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value180=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value180,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj61=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
    __result88__ = __result_obj__ = self;
    come_call_finalizer3(self,sMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result88__;
    come_call_finalizer3(self,sMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sMinusNode2_kind(struct sMinusNode2* self){
void* __result_obj__;
void* __right_value181 = (void*)0;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
    __result89__ = __result_obj__ = ((char*)(__right_value181=__builtin_string("sMinusNode2")));
    __right_value181 = come_decrement_ref_count2(__right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result89__;
}

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info){
void* __right_value182 = (void*)0;
struct CVALUE* come_value_130;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
struct CVALUE* come_value2_131;
void* __right_value185 = (void*)0;
char* __dec_obj62;
void* __right_value186 = (void*)0;
struct sType* __dec_obj63;
_Bool __result90__;
memset(&come_value_130, 0, sizeof(struct CVALUE*));
memset(&come_value2_131, 0, sizeof(struct CVALUE*));
    if(!node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_130=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value182=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    come_value2_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value184=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value183=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 342, "CVALUE"))))))));
    come_call_finalizer3(__right_value183,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj62=come_value2_131->c_value;
    come_value2_131->c_value=(char*)come_increment_ref_count(((char*)(__right_value185=xsprintf("-%s",come_value_130->c_value))));
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj63=come_value2_131->type;
    come_value2_131->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value186=sType_clone(come_value_130->type))));
    come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_131->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_131));
    add_come_last_code(info,"%s;\n",come_value2_131->c_value);
    __result90__ = (_Bool)1;
    come_call_finalizer3(come_value_130,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result90__;
    come_call_finalizer3(come_value_130,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
void* __right_value187 = (void*)0;
struct sNode* __dec_obj64;
struct sPlusPlusNode2* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value187=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value187,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj64=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); }
    __result91__ = __result_obj__ = self;
    come_call_finalizer3(self,sPlusPlusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result91__;
    come_call_finalizer3(self,sPlusPlusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sPlusPlusNode2_kind(struct sPlusPlusNode2* self){
void* __result_obj__;
void* __right_value188 = (void*)0;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
    __result92__ = __result_obj__ = ((char*)(__right_value188=__builtin_string("sPlusPlusNode2")));
    __right_value188 = come_decrement_ref_count2(__right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result92__;
}

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info){
void* __right_value189 = (void*)0;
struct CVALUE* come_value_132;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct CVALUE* come_value2_133;
void* __right_value192 = (void*)0;
char* __dec_obj65;
void* __right_value193 = (void*)0;
struct sType* __dec_obj66;
_Bool __result93__;
memset(&come_value_132, 0, sizeof(struct CVALUE*));
memset(&come_value2_133, 0, sizeof(struct CVALUE*));
    if(!node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_132=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value189=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    come_value2_133=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value191=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value190=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 379, "CVALUE"))))))));
    come_call_finalizer3(__right_value190,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj65=come_value2_133->c_value;
    come_value2_133->c_value=(char*)come_increment_ref_count(((char*)(__right_value192=xsprintf("++%s",come_value_132->c_value))));
    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj66=come_value2_133->type;
    come_value2_133->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value193=sType_clone(come_value_132->type))));
    come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_133->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_133));
    add_come_last_code(info,"%s;\n",come_value2_133->c_value);
    __result93__ = (_Bool)1;
    come_call_finalizer3(come_value_132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result93__;
    come_call_finalizer3(come_value_132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
void* __right_value194 = (void*)0;
struct sNode* __dec_obj67;
struct sMinusMinusNode2* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value194=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value194,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj67=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); }
    __result94__ = __result_obj__ = self;
    come_call_finalizer3(self,sMinusMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result94__;
    come_call_finalizer3(self,sMinusMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sMinusMinusNode2_kind(struct sMinusMinusNode2* self){
void* __result_obj__;
void* __right_value195 = (void*)0;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    __result95__ = __result_obj__ = ((char*)(__right_value195=__builtin_string("sMinusMinusNode2")));
    __right_value195 = come_decrement_ref_count2(__right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result95__;
}

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info){
void* __right_value196 = (void*)0;
struct CVALUE* come_value_134;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct CVALUE* come_value2_135;
void* __right_value199 = (void*)0;
char* __dec_obj68;
void* __right_value200 = (void*)0;
struct sType* __dec_obj69;
_Bool __result96__;
memset(&come_value_134, 0, sizeof(struct CVALUE*));
memset(&come_value2_135, 0, sizeof(struct CVALUE*));
    if(!node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value196=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    come_value2_135=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value198=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value197=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 416, "CVALUE"))))))));
    come_call_finalizer3(__right_value197,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj68=come_value2_135->c_value;
    come_value2_135->c_value=(char*)come_increment_ref_count(((char*)(__right_value199=xsprintf("--%s",come_value_134->c_value))));
    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj69=come_value2_135->type;
    come_value2_135->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value200=sType_clone(come_value_134->type))));
    come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_135->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_135));
    add_come_last_code(info,"%s;\n",come_value2_135->c_value);
    __result96__ = (_Bool)1;
    come_call_finalizer3(come_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result96__;
    come_call_finalizer3(come_value_134,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, struct sInfo* info){
void* __result_obj__;
void* __right_value201 = (void*)0;
void* __right_value222 = (void*)0;
struct sBlock* __dec_obj75;
struct sNormalBlock* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value201=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value201,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj75=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(__right_value222=sBlock_clone(block))));
    come_call_finalizer3(__dec_obj75,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    __result127__ = __result_obj__ = self;
    come_call_finalizer3(self,sNormalBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result127__;
    come_call_finalizer3(self,sNormalBlock_finalize, 0, 0, 1, 0, (void*)0);
}

_Bool sNormalBlock_terminated(struct sNormalBlock* self){
    return (_Bool)1;
}

char* sNormalBlock_kind(struct sNormalBlock* self){
void* __result_obj__;
void* __right_value223 = (void*)0;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    __result128__ = __result_obj__ = ((char*)(__right_value223=__builtin_string("sNormalBlock")));
    __right_value223 = come_decrement_ref_count2(__right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result128__;
}

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info){
struct sBlock* block_193;
memset(&block_193, 0, sizeof(struct sBlock*));
    block_193=self->mBlock;
    add_come_code(info,"{\n");
    transpile_block(block_193,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    return (_Bool)1;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
struct sBlock* __result97__;
void* __right_value202 = (void*)0;
struct sBlock* result_136;
void* __right_value203 = (void*)0;
struct list$1sNodeph* __dec_obj70;
void* __right_value221 = (void*)0;
struct sVarTable* __dec_obj74;
struct sBlock* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_136, 0, sizeof(struct sBlock*));
        if(self==(void*)0) {
            __result97__ = __result_obj__ = (void*)0;
            return __result97__;
        }
        result_136=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(__right_value202=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"))));
        if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
            __dec_obj70=result_136->mNodes;
            result_136->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value203=list$1sNodephp_clone(self->mNodes))));
            come_call_finalizer3(__dec_obj70,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
            __dec_obj74=result_136->mVarTable;
            result_136->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(__right_value221=sVarTable_clone(self->mVarTable))));
            come_call_finalizer3(__dec_obj74,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
        __result126__ = __result_obj__ = result_136;
        come_call_finalizer3(result_136,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result126__;
        come_call_finalizer3(result_136,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
struct sVarTable* __result98__;
void* __right_value204 = (void*)0;
struct sVarTable* result_137;
void* __right_value220 = (void*)0;
struct map$2charphsVarph* __dec_obj73;
struct sVarTable* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_137, 0, sizeof(struct sVarTable*));
                if(self==(void*)0) {
                    __result98__ = __result_obj__ = (void*)0;
                    return __result98__;
                }
                result_137=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(__right_value204=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"))));
                if(self!=((void*)0)&&self->mVars!=((void*)0)) {
                    __dec_obj73=result_137->mVars;
                    result_137->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(__right_value220=map$2charphsVarphp_clone(self->mVars))));
                    come_call_finalizer3(__dec_obj73,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)) {
                    result_137->mGlobal=self->mGlobal;
                }
                if(self!=((void*)0)) {
                    result_137->mParent=self->mParent;
                }
                if(self!=((void*)0)) {
                    result_137->mID=self->mID;
                }
                __result125__ = __result_obj__ = result_137;
                come_call_finalizer3(result_137,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
                return __result125__;
                come_call_finalizer3(result_137,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
struct map$2charphsVarph* __result99__;
void* __right_value205 = (void*)0;
void* __right_value211 = (void*)0;
struct map$2charphsVarph* result_143;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
struct list$1charp* __dec_obj72;
char* it_146;
struct sVar* default_value_149;
struct sVar* it2_152;
struct map$2charphsVarph* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_143, 0, sizeof(struct map$2charphsVarph*));
memset(&default_value_149, 0, sizeof(struct sVar*));
memset(&it2_152, 0, sizeof(struct sVar*));
                        if(self==((void*)0)) {
                            __result99__ = __result_obj__ = ((void*)0);
                            return __result99__;
                        }
                        result_143=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(__right_value211=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(__right_value205=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./neo-c.h", 1158, "map$2charphsVarph"))))))));
                        come_call_finalizer3(__right_value205,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
                        __dec_obj72=result_143->key_list;
                        result_143->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value213=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value212=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1160, "list$1charp"))))))));
                        come_call_finalizer3(__dec_obj72,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value212,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        for(                        it_146=map$2charphsVarph_begin(self);                        !map$2charphsVarph_end(self);                        it_146=map$2charphsVarph_next(self)                        ){
                            memset(&default_value_149,0,sizeof(struct sVar*));
                            it2_152=map$2charphsVarph_at(self,it_146,default_value_149);
                            map$2charphsVarph_insert2(result_143,it_146,it2_152);
                        }
                        __result124__ = __result_obj__ = result_143;
                        come_call_finalizer3(result_143,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result124__;
                        come_call_finalizer3(result_143,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
int i_138;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
struct list$1charp* __dec_obj71;
struct map$2charphsVarph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
                            self->keys=(char**)come_increment_ref_count(((char**)(__right_value206=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1064, "char*%"))));
                            __right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value207=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./neo-c.h", 1065, "sVar*%"))));
                            come_call_finalizer3(__right_value207,sVar_finalize, 0, 1, 0, 0, __result_obj__);
                            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value208=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1066, "bool"))));
                            __right_value208 = come_decrement_ref_count2(__right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_138=0;                            i_138<128;                            i_138++                            ){
                                self->item_existance[i_138]=(_Bool)0;
                            }
                            self->size=128;
                            self->len=0;
                            __dec_obj71=self->key_list;
                            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value210=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value209=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1076, "list$1charp"))))))));
                            come_call_finalizer3(__dec_obj71,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(__right_value209,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                            self->it=0;
                            __result101__ = __result_obj__ = self;
                            come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result101__;
                            come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
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

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
                                self->head=((void*)0);
                                self->tail=((void*)0);
                                self->len=0;
                                __result100__ = __result_obj__ = self;
                                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
                                return __result100__;
                                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_139;
struct list_item$1charp* prev_it_140;
memset(&it_139, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_140, 0, sizeof(struct list_item$1charp*));
                                    it_139=self->head;
                                    while(it_139!=((void*)0)) {
                                        prev_it_140=it_139;
                                        it_139=it_139->next;
                                        come_call_finalizer3(prev_it_140,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_141;
int i_142;
                                for(                                i_141=0;                                i_141<self->size;                                i_141++                                ){
                                    if(self->item_existance[i_141]) {
                                        if(1) {
                                            come_call_finalizer3(self->items[i_141],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                come_free((char*)self->items);
                                for(                                i_142=0;                                i_142<self->size;                                i_142++                                ){
                                    if(self->item_existance[i_142]) {
                                        if(1) {
                                            self->keys[i_142] = come_decrement_ref_count2(self->keys[i_142], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                }
                                come_free((char*)self->keys);
                                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
char* result_144;
char* __result102__;
char* __result103__;
char* result_145;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_144, 0, sizeof(char*));
memset(&result_145, 0, sizeof(char*));
                            if(self==((void*)0)) {
                                memset(&result_144,0,sizeof(char*));
                                __result102__ = __result_obj__ = result_144;
                                return __result102__;
                            }
                            self->key_list->it=self->key_list->head;
                            if(self->key_list->it) {
                                __result103__ = __result_obj__ = self->key_list->it->item;
                                return __result103__;
                            }
                            memset(&result_145,0,sizeof(char*));
                            __result104__ = __result_obj__ = result_145;
                            return __result104__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
                            return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
char* result_147;
char* __result105__;
char* __result106__;
char* result_148;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_147, 0, sizeof(char*));
memset(&result_148, 0, sizeof(char*));
                            if(self==((void*)0)||self->key_list->it==((void*)0)) {
                                memset(&result_147,0,sizeof(char*));
                                __result105__ = __result_obj__ = result_147;
                                return __result105__;
                            }
                            self->key_list->it=self->key_list->it->next;
                            if(self->key_list->it) {
                                __result106__ = __result_obj__ = self->key_list->it->item;
                                return __result106__;
                            }
                            memset(&result_148,0,sizeof(char*));
                            __result107__ = __result_obj__ = result_148;
                            return __result107__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
unsigned int hash_150;
unsigned int it_151;
struct sVar* __result108__;
struct sVar* __result109__;
struct sVar* __result110__;
struct sVar* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
                                hash_150=string_get_hash_key(((char*)key))%self->size;
                                it_151=hash_150;
                                while((_Bool)1) {
                                    if(self->item_existance[it_151]) {
                                        if(string_equals(self->keys[it_151],key)) {
                                            __result108__ = __result_obj__ = self->items[it_151];
                                            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result108__;
                                        }
                                        it_151++;
                                        if(it_151>=self->size) {
                                            it_151=0;
                                        }
                                        else {
                                            if(it_151==hash_150) {
                                                __result109__ = __result_obj__ = default_value;
                                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result109__;
                                            }
                                        }
                                    }
                                    else {
                                        __result110__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result110__;
                                    }
                                }
                                __result111__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result111__;
                                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
unsigned int hash_164;
int it_165;
_Bool same_key_exist_182;
char* it2_185;
struct map$2charphsVarph* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
                                if(self->len*2>=self->size) {
                                    map$2charphsVarph_rehash(self);
                                }
                                hash_164=string_get_hash_key(key)%self->size;
                                it_165=hash_164;
                                while((_Bool)1) {
                                    if(self->item_existance[it_165]) {
                                        if(string_equals(self->keys[it_165],key)) {
                                            if(1) {
                                                self->keys[it_165] = come_decrement_ref_count2(self->keys[it_165], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                list$1charp_remove(self->key_list,self->keys[it_165]);
                                                self->keys[it_165]=(char*)come_increment_ref_count(key);
                                            }
                                            else {
                                                list$1charp_remove(self->key_list,self->keys[it_165]);
                                                self->keys[it_165]=key;
                                            }
                                            if(1) {
                                                come_call_finalizer3(self->items[it_165],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                                self->items[it_165]=(struct sVar*)come_increment_ref_count(item);
                                            }
                                            else {
                                                self->items[it_165]=item;
                                            }
                                            break;
                                        }
                                        it_165++;
                                        if(it_165>=self->size) {
                                            it_165=0;
                                        }
                                        else {
                                            if(it_165==hash_164) {
                                                printf("unexpected error in map.insert\n");
                                                stackframe();
                                                exit(2);
                                            }
                                        }
                                    }
                                    else {
                                        self->item_existance[it_165]=(_Bool)1;
                                        if(1) {
                                            self->keys[it_165]=(char*)come_increment_ref_count(key);
                                        }
                                        else {
                                            self->keys[it_165]=key;
                                        }
                                        if(1) {
                                            self->items[it_165]=(struct sVar*)come_increment_ref_count(item);
                                        }
                                        else {
                                            self->items[it_165]=item;
                                        }
                                        self->len++;
                                        break;
                                    }
                                }
                                same_key_exist_182=(_Bool)0;
                                for(                                it2_185=list$1charp_begin(self->key_list);                                !list$1charp_end(self->key_list);                                it2_185=list$1charp_next(self->key_list)                                ){
                                    if(string_equals(it2_185,key)) {
                                        same_key_exist_182=(_Bool)1;
                                    }
                                }
                                if(!same_key_exist_182) {
                                    list$1charp_push_back(self->key_list,key);
                                }
                                __result123__ = __result_obj__ = self;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
                                return __result123__;
                                key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_153;
void* __right_value214 = (void*)0;
char** keys_154;
void* __right_value215 = (void*)0;
struct sVar** items_155;
void* __right_value216 = (void*)0;
_Bool* item_existance_156;
int len_157;
char* it_158;
struct sVar* default_value_159;
struct sVar* it2_160;
unsigned int hash_161;
int n_162;
struct sVar* default_value_163;
memset(&items_155, 0, sizeof(struct sVar**));
memset(&default_value_159, 0, sizeof(struct sVar*));
memset(&it2_160, 0, sizeof(struct sVar*));
memset(&default_value_163, 0, sizeof(struct sVar*));
                                        size_153=self->size*10;
                                        keys_154=(char**)come_increment_ref_count(((char**)(__right_value214=(char**)come_calloc(1, sizeof(char*)*(1*(size_153)), "./neo-c.h", 1315, "char*%"))));
                                        __right_value214 = come_decrement_ref_count2(__right_value214, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        items_155=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value215=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_153)), "./neo-c.h", 1316, "sVar*%"))));
                                        come_call_finalizer3(__right_value215,sVar_finalize, 0, 1, 0, 0, (void*)0);
                                        item_existance_156=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value216=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_153)), "./neo-c.h", 1317, "bool"))));
                                        __right_value216 = come_decrement_ref_count2(__right_value216, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        len_157=0;
                                        for(                                        it_158=map$2charphsVarph_begin(self);                                        !map$2charphsVarph_end(self);                                        it_158=map$2charphsVarph_next(self)                                        ){
                                            memset(&default_value_159,0,sizeof(struct sVar*));
                                            it2_160=map$2charphsVarph_at(self,it_158,default_value_159);
                                            hash_161=string_get_hash_key(it_158)%size_153;
                                            n_162=hash_161;
                                            while((_Bool)1) {
                                                if(item_existance_156[n_162]) {
                                                    n_162++;
                                                    if(n_162>=size_153) {
                                                        n_162=0;
                                                    }
                                                    else {
                                                        if(n_162==hash_161) {
                                                            printf("unexpected error in map.rehash(1)\n");
                                                            stackframe();
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                else {
                                                    item_existance_156[n_162]=(_Bool)1;
                                                    keys_154[n_162]=it_158;
                                                    items_155[n_162]=map$2charphsVarph_at(self,it_158,default_value_163);
                                                    len_157++;
                                                    break;
                                                }
                                            }
                                        }
                                        come_free((char*)self->items);
                                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        come_free((char*)self->keys);
                                        self->keys=keys_154;
                                        self->items=items_155;
                                        self->item_existance=item_existance_156;
                                        self->size=size_153;
                                        self->len=len_157;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_166;
struct list_item$1charp* it_167;
struct list$1charp* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_167, 0, sizeof(struct list_item$1charp*));
                                                    it2_166=0;
                                                    it_167=self->head;
                                                    while(it_167!=((void*)0)) {
                                                        if(string_equals(it_167->item,item)) {
                                                            list$1charp_delete(self,it2_166,it2_166+1);
                                                            break;
                                                        }
                                                        it2_166++;
                                                        it_167=it_167->next;
                                                    }
                                                    __result115__ = __result_obj__ = self;
                                                    return __result115__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
int tmp_168;
struct list$1charp* __result112__;
struct list_item$1charp* it_171;
int i_172;
struct list_item$1charp* prev_it_173;
struct list_item$1charp* it_174;
int i_175;
struct list_item$1charp* prev_it_176;
struct list_item$1charp* it_177;
struct list_item$1charp* head_prev_it_178;
struct list_item$1charp* tail_it_179;
int i_180;
struct list_item$1charp* prev_it_181;
struct list$1charp* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_171, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_173, 0, sizeof(struct list_item$1charp*));
memset(&it_174, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_176, 0, sizeof(struct list_item$1charp*));
memset(&it_177, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_178, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_179, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_181, 0, sizeof(struct list_item$1charp*));
                                                                if(head<0) {
                                                                    head+=self->len;
                                                                }
                                                                if(tail<0) {
                                                                    tail+=self->len+1;
                                                                }
                                                                if(head>tail) {
                                                                    tmp_168=tail;
                                                                    tail=head;
                                                                    head=tmp_168;
                                                                }
                                                                if(head<0) {
                                                                    head=0;
                                                                }
                                                                if(tail>self->len) {
                                                                    tail=self->len;
                                                                }
                                                                if(head==tail) {
                                                                    __result112__ = __result_obj__ = self;
                                                                    return __result112__;
                                                                }
                                                                if(head==0&&tail==self->len) {
                                                                    list$1charp_reset(self);
                                                                }
                                                                else {
                                                                    if(head==0) {
                                                                        it_171=self->head;
                                                                        i_172=0;
                                                                        while(it_171!=((void*)0)) {
                                                                            if(i_172<tail) {
                                                                                prev_it_173=it_171;
                                                                                it_171=it_171->next;
                                                                                i_172++;
                                                                                come_call_finalizer3(prev_it_173,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                self->len--;
                                                                            }
                                                                            else {
                                                                                if(i_172==tail) {
                                                                                    self->head=it_171;
                                                                                    self->head->prev=((void*)0);
                                                                                    break;
                                                                                }
                                                                                else {
                                                                                    it_171=it_171->next;
                                                                                    i_172++;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(tail==self->len) {
                                                                            it_174=self->head;
                                                                            i_175=0;
                                                                            while(it_174!=((void*)0)) {
                                                                                if(i_175==head) {
                                                                                    self->tail=it_174->prev;
                                                                                    self->tail->next=((void*)0);
                                                                                }
                                                                                if(i_175>=head) {
                                                                                    prev_it_176=it_174;
                                                                                    it_174=it_174->next;
                                                                                    i_175++;
                                                                                    come_call_finalizer3(prev_it_176,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    it_174=it_174->next;
                                                                                    i_175++;
                                                                                }
                                                                            }
                                                                        }
                                                                        else {
                                                                            it_177=self->head;
                                                                            head_prev_it_178=((void*)0);
                                                                            tail_it_179=((void*)0);
                                                                            i_180=0;
                                                                            while(it_177!=((void*)0)) {
                                                                                if(i_180==head) {
                                                                                    head_prev_it_178=it_177->prev;
                                                                                }
                                                                                if(i_180==tail) {
                                                                                    tail_it_179=it_177;
                                                                                }
                                                                                if(i_180>=head&&i_180<tail) {
                                                                                    prev_it_181=it_177;
                                                                                    it_177=it_177->next;
                                                                                    i_180++;
                                                                                    come_call_finalizer3(prev_it_181,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    self->len--;
                                                                                }
                                                                                else {
                                                                                    it_177=it_177->next;
                                                                                    i_180++;
                                                                                }
                                                                            }
                                                                            if(head_prev_it_178!=((void*)0)) {
                                                                                head_prev_it_178->next=tail_it_179;
                                                                            }
                                                                            if(tail_it_179!=((void*)0)) {
                                                                                tail_it_179->prev=head_prev_it_178;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                __result114__ = __result_obj__ = self;
                                                                return __result114__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_169;
struct list_item$1charp* prev_it_170;
struct list$1charp* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_169, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_170, 0, sizeof(struct list_item$1charp*));
                                                                        it_169=self->head;
                                                                        while(it_169!=((void*)0)) {
                                                                            prev_it_170=it_169;
                                                                            it_169=it_169->next;
                                                                            come_call_finalizer3(prev_it_170,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        self->head=((void*)0);
                                                                        self->tail=((void*)0);
                                                                        self->len=0;
                                                                        __result113__ = __result_obj__ = self;
                                                                        return __result113__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
char* result_183;
char* __result116__;
char* __result117__;
char* result_184;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_183, 0, sizeof(char*));
memset(&result_184, 0, sizeof(char*));
                                    if(self==((void*)0)) {
                                        memset(&result_183,0,sizeof(char*));
                                        __result116__ = __result_obj__ = result_183;
                                        return __result116__;
                                    }
                                    self->it=self->head;
                                    if(self->it) {
                                        __result117__ = __result_obj__ = self->it->item;
                                        return __result117__;
                                    }
                                    memset(&result_184,0,sizeof(char*));
                                    __result118__ = __result_obj__ = result_184;
                                    return __result118__;
}

static _Bool list$1charp_end(struct list$1charp* self){
                                    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
char* result_186;
char* __result119__;
char* __result120__;
char* result_187;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_186, 0, sizeof(char*));
memset(&result_187, 0, sizeof(char*));
                                    if(self==((void*)0)||self->it==((void*)0)) {
                                        memset(&result_186,0,sizeof(char*));
                                        __result119__ = __result_obj__ = result_186;
                                        return __result119__;
                                    }
                                    self->it=self->it->next;
                                    if(self->it) {
                                        __result120__ = __result_obj__ = self->it->item;
                                        return __result120__;
                                    }
                                    memset(&result_187,0,sizeof(char*));
                                    __result121__ = __result_obj__ = result_187;
                                    return __result121__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
void* __right_value217 = (void*)0;
struct list_item$1charp* litem_188;
void* __right_value218 = (void*)0;
struct list_item$1charp* litem_189;
void* __right_value219 = (void*)0;
struct list_item$1charp* litem_190;
struct list$1charp* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_188, 0, sizeof(struct list_item$1charp*));
memset(&litem_189, 0, sizeof(struct list_item$1charp*));
memset(&litem_190, 0, sizeof(struct list_item$1charp*));
                                        if(self->len==0) {
                                            litem_188=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value217=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 219, "list_item$1charp"))));
                                            come_call_finalizer3(__right_value217,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                            litem_188->prev=((void*)0);
                                            litem_188->next=((void*)0);
                                            litem_188->item=item;
                                            self->tail=litem_188;
                                            self->head=litem_188;
                                        }
                                        else {
                                            if(self->len==1) {
                                                litem_189=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value218=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 229, "list_item$1charp"))));
                                                come_call_finalizer3(__right_value218,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                litem_189->prev=self->head;
                                                litem_189->next=((void*)0);
                                                litem_189->item=item;
                                                self->tail=litem_189;
                                                self->head->next=litem_189;
                                            }
                                            else {
                                                litem_190=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value219=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 239, "list_item$1charp"))));
                                                come_call_finalizer3(__right_value219,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                                                litem_190->prev=self->tail;
                                                litem_190->next=((void*)0);
                                                litem_190->item=item;
                                                self->tail->next=litem_190;
                                                self->tail=litem_190;
                                            }
                                        }
                                        self->len++;
                                        __result122__ = __result_obj__ = self;
                                        return __result122__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_191;
int i_192;
                        for(                        i_191=0;                        i_191<self->size;                        i_191++                        ){
                            if(self->item_existance[i_191]) {
                                if(1) {
                                    come_call_finalizer3(self->items[i_191],sVar_finalize, 0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                        come_free((char*)self->items);
                        for(                        i_192=0;                        i_192<self->size;                        i_192++                        ){
                            if(self->item_existance[i_192]) {
                                if(1) {
                                    self->keys[i_192] = come_decrement_ref_count2(self->keys[i_192], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                        come_free((char*)self->keys);
                        come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
void* __right_value224 = (void*)0;
struct sNode* __dec_obj76;
struct sComplement* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value224=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value224,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj76=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
    __result129__ = __result_obj__ = self;
    come_call_finalizer3(self,sComplement_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result129__;
    come_call_finalizer3(self,sComplement_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sComplement_kind(struct sComplement* self){
void* __result_obj__;
void* __right_value225 = (void*)0;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
    __result130__ = __result_obj__ = ((char*)(__right_value225=__builtin_string("sComplement")));
    __right_value225 = come_decrement_ref_count2(__right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result130__;
}

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info){
void* __right_value226 = (void*)0;
struct CVALUE* come_value_194;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
struct CVALUE* come_value2_195;
void* __right_value229 = (void*)0;
char* __dec_obj77;
void* __right_value230 = (void*)0;
struct sType* __dec_obj78;
_Bool __result131__;
memset(&come_value_194, 0, sizeof(struct CVALUE*));
memset(&come_value2_195, 0, sizeof(struct CVALUE*));
    if(!node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_194=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value226=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    come_value2_195=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value228=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value227=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 488, "CVALUE"))))))));
    come_call_finalizer3(__right_value227,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj77=come_value2_195->c_value;
    come_value2_195->c_value=(char*)come_increment_ref_count(((char*)(__right_value229=xsprintf("~%s",come_value_194->c_value))));
    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj78=come_value2_195->type;
    come_value2_195->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value230=sType_clone(come_value_194->type))));
    come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_195->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_195));
    add_come_last_code(info,"%s;\n",come_value2_195->c_value);
    __result131__ = (_Bool)1;
    come_call_finalizer3(come_value_194,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result131__;
    come_call_finalizer3(come_value_194,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct sNode* __dec_obj79;
struct sParenNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value231=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value231,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj79=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value232=sNode_clone(left))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); }
    __result132__ = __result_obj__ = self;
    come_call_finalizer3(self,sParenNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result132__;
    come_call_finalizer3(self,sParenNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sParenNode_kind(struct sParenNode* self){
void* __result_obj__;
void* __right_value233 = (void*)0;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    __result133__ = __result_obj__ = ((char*)(__right_value233=__builtin_string("sParenNode")));
    __right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result133__;
}

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info){
struct sNode* left_196;
void* __right_value234 = (void*)0;
struct CVALUE* left_value_197;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct CVALUE* come_value_198;
void* __right_value237 = (void*)0;
char* __dec_obj80;
void* __right_value238 = (void*)0;
struct sType* __dec_obj81;
_Bool __result134__;
memset(&left_196, 0, sizeof(struct sNode*));
memset(&left_value_197, 0, sizeof(struct CVALUE*));
memset(&come_value_198, 0, sizeof(struct CVALUE*));
    left_196=self->mLeft;
    if(!node_compile(left_196,info)) {
        return (_Bool)0;
    }
    left_value_197=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value234=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    come_value_198=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value236=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value235=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 527, "CVALUE"))))))));
    come_call_finalizer3(__right_value235,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj80=come_value_198->c_value;
    come_value_198->c_value=(char*)come_increment_ref_count(((char*)(__right_value237=xsprintf("(%s)",left_value_197->c_value))));
    __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj81=come_value_198->type;
    come_value_198->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value238=sType_clone(left_value_197->type))));
    come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_198->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_198->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_198));
    __result134__ = (_Bool)1;
    come_call_finalizer3(left_value_197,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_198,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result134__;
    come_call_finalizer3(left_value_197,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_198,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info){
void* __result_obj__;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct sType* __dec_obj82;
void* __right_value241 = (void*)0;
struct sNode* __dec_obj83;
struct sCastNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value239=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value239,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj82=self->mType;
    self->mType=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value240=sType_clone(type))));
    come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj83=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value241=sNode_clone(left))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); }
    __result135__ = __result_obj__ = self;
    come_call_finalizer3(self,sCastNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result135__;
    come_call_finalizer3(self,sCastNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sCastNode_kind(struct sCastNode* self){
void* __result_obj__;
void* __right_value242 = (void*)0;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
    __result136__ = __result_obj__ = ((char*)(__right_value242=__builtin_string("sCastNode")));
    __right_value242 = come_decrement_ref_count2(__right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result136__;
}

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info){
struct sType* type_199;
struct sNode* left_200;
void* __right_value243 = (void*)0;
struct CVALUE* left_value_201;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct sType* type2_202;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
struct CVALUE* come_value_203;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
char* __dec_obj84;
void* __right_value250 = (void*)0;
struct sType* __dec_obj85;
_Bool __result137__;
memset(&type_199, 0, sizeof(struct sType*));
memset(&left_200, 0, sizeof(struct sNode*));
memset(&left_value_201, 0, sizeof(struct CVALUE*));
memset(&type2_202, 0, sizeof(struct sType*));
memset(&come_value_203, 0, sizeof(struct CVALUE*));
    type_199=self->mType;
    left_200=self->mLeft;
    if(!node_compile(left_200,info)) {
        return (_Bool)0;
    }
    left_value_201=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value243=get_value_from_stack(-1,info))));
    dec_stack_ptr(1,info);
    type2_202=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value245=solve_generics(((struct sType*)(__right_value244=sType_clone(type_199))),info->generics_type,info))));
    come_call_finalizer3(__right_value244,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_203=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value247=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value246=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 570, "CVALUE"))))))));
    come_call_finalizer3(__right_value246,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    cast_type(type2_202,left_value_201->type,left_value_201,info);
    __dec_obj84=come_value_203->c_value;
    come_value_203->c_value=(char*)come_increment_ref_count(((char*)(__right_value249=xsprintf("(%s)%s",((char*)(__right_value248=make_type_name_string(type2_202,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_201->c_value))));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj85=come_value_203->type;
    come_value_203->type=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value250=sType_clone(type2_202))));
    come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_203->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_203->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_203));
    __result137__ = (_Bool)1;
    come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_202,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result137__;
    come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_202,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* parse_normal_block(struct sInfo* info){
void* __result_obj__;
void* __right_value251 = (void*)0;
struct sBlock* block_204;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct sNode* _inf_value1;
struct sNormalBlock* _inf_obj_value1;
void* __right_value257 = (void*)0;
struct sNode* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&block_204, 0, sizeof(struct sBlock*));
    block_204=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(__right_value251=parse_block(info,(_Bool)0,(_Bool)0))));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 590, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNormalBlock*)(__right_value253=sNormalBlock_initialize((struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(__right_value252=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "05pre_op.c", 590, "sNormalBlock")))),block_204,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNormalBlock_finalize;
    _inf_value1->clone=(void*)sNormalBlock_clone;
    _inf_value1->compile=(void*)sNormalBlock_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNormalBlock_terminated;
    _inf_value1->kind=(void*)sNormalBlock_kind;
    __result140__ = __result_obj__ = ((struct sNode*)(__right_value257=_inf_value1));
    come_call_finalizer3(block_204,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value252,sNormalBlock_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value253,sNormalBlock_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value257) { __right_value257 = come_decrement_ref_count2(__right_value257, ((struct sNode*)__right_value257)->finalize, ((struct sNode*)__right_value257)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result140__;
    come_call_finalizer3(block_204,sBlock_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNormalBlock_finalize(struct sNormalBlock* self){
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
}

static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self){
void* __result_obj__;
struct sNormalBlock* __result138__;
void* __right_value254 = (void*)0;
struct sNormalBlock* result_205;
void* __right_value255 = (void*)0;
char* __dec_obj86;
void* __right_value256 = (void*)0;
struct sBlock* __dec_obj87;
struct sNormalBlock* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_205, 0, sizeof(struct sNormalBlock*));
        if(self==(void*)0) {
            __result138__ = __result_obj__ = (void*)0;
            return __result138__;
        }
        result_205=(struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(__right_value254=(struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "sNormalBlock_clone", 3, "sNormalBlock"))));
        if(self!=((void*)0)) {
            result_205->sline=self->sline;
        }
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            __dec_obj86=result_205->sname;
            result_205->sname=(char*)come_increment_ref_count(((char*)(__right_value255=string_clone(self->sname))));
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
            __dec_obj87=result_205->mBlock;
            result_205->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(__right_value256=sBlock_clone(self->mBlock))));
            come_call_finalizer3(__dec_obj87,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        __result139__ = __result_obj__ = result_205;
        come_call_finalizer3(result_205,sNormalBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result139__;
        come_call_finalizer3(result_205,sNormalBlock_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct sNode* _inf_value2;
struct sLogicalDenial* _inf_obj_value2;
void* __right_value264 = (void*)0;
struct sNode* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 595, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sLogicalDenial*)(__right_value260=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(__right_value258=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05pre_op.c", 595, "sLogicalDenial")))),(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value259=sNode_clone(node)))),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLogicalDenial_finalize;
    _inf_value2->clone=(void*)sLogicalDenial_clone;
    _inf_value2->compile=(void*)sLogicalDenial_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLogicalDenial_kind;
    __result143__ = __result_obj__ = ((struct sNode*)(__right_value264=_inf_value2));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(__right_value258,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value259) { __right_value259 = come_decrement_ref_count2(__right_value259, ((struct sNode*)__right_value259)->finalize, ((struct sNode*)__right_value259)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    come_call_finalizer3(__right_value260,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value264) { __right_value264 = come_decrement_ref_count2(__right_value264, ((struct sNode*)__right_value264)->finalize, ((struct sNode*)__right_value264)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result143__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

struct sNode* pre_position_operator(struct sInfo* info){
void* __result_obj__;
_Bool refference_207;
char* p_208;
int sline_209;
void* __right_value265 = (void*)0;
struct sNode* __result144__;
void* __right_value266 = (void*)0;
struct sNode* __result145__;
void* __right_value267 = (void*)0;
struct sNode* node_210;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct sNode* _inf_value3;
struct sLogicalDenial* _inf_obj_value3;
void* __right_value273 = (void*)0;
struct sNode* __result148__;
void* __right_value274 = (void*)0;
struct sNode* node_212;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct sNode* _inf_value4;
struct sMinusMinusNode2* _inf_obj_value4;
void* __right_value280 = (void*)0;
struct sNode* __result151__;
void* __right_value281 = (void*)0;
struct sNode* node_214;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct sNode* _inf_value5;
struct sMinusNode2* _inf_obj_value5;
void* __right_value287 = (void*)0;
struct sNode* __result154__;
void* __right_value288 = (void*)0;
struct sNode* node_216;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct sNode* _inf_value6;
struct sPlusPlusNode2* _inf_obj_value6;
void* __right_value294 = (void*)0;
struct sNode* __result157__;
void* __right_value295 = (void*)0;
struct sNode* node_218;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct sNode* _inf_value7;
struct sComplement* _inf_obj_value7;
void* __right_value301 = (void*)0;
struct sNode* __result160__;
_Bool quote_220;
_Bool no_assign_221;
void* __right_value302 = (void*)0;
struct sNode* value_222;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sNode* _inf_value8;
struct sDerefferenceNode* _inf_obj_value8;
void* __right_value308 = (void*)0;
struct sNode* __result163__;
void* __right_value309 = (void*)0;
struct sNode* value_224;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct sNode* _inf_value9;
struct sRefferenceNode* _inf_obj_value9;
void* __right_value315 = (void*)0;
struct sNode* __result166__;
void* __right_value316 = (void*)0;
struct sNode* value_226;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct sNode* _inf_value10;
struct sReverseNode* _inf_obj_value10;
void* __right_value322 = (void*)0;
struct sNode* __result169__;
_Bool cast_expression_flag_228;
char* p_229;
int sline_230;
void* __right_value323 = (void*)0;
char* word_231;
void* __right_value324 = (void*)0;
char* __dec_obj106;
_Bool tuple_expression_flag_232;
char* p_233;
int sline_234;
_Bool no_comma_235;
_Bool no_output_err_236;
_Bool no_output_come_code_237;
void* __right_value325 = (void*)0;
struct sNode* node_238;
struct sNode* node2_239;
void* __right_value326 = (void*)0;
struct sNode* node_240;
struct sNode* __result170__;
void* __right_value327 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_241;
char* name_242;
_Bool err_243;
void* __right_value328 = (void*)0;
struct sNode* node_244;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct sNode* _inf_value11;
struct sCastNode* _inf_obj_value11;
void* __right_value335 = (void*)0;
struct sNode* __result173__;
struct sNode* node_246;
_Bool no_comma_247;
void* __right_value336 = (void*)0;
struct sNode* __dec_obj110;
void* __right_value337 = (void*)0;
struct sNode* __dec_obj111;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sNode* _inf_value12;
struct sParenNode* _inf_obj_value12;
void* __right_value343 = (void*)0;
struct sNode* __dec_obj114;
struct sNode* __result176__;
struct sNode* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_210, 0, sizeof(struct sNode*));
memset(&node_212, 0, sizeof(struct sNode*));
memset(&node_214, 0, sizeof(struct sNode*));
memset(&node_216, 0, sizeof(struct sNode*));
memset(&node_218, 0, sizeof(struct sNode*));
memset(&quote_220, 0, sizeof(_Bool));
memset(&value_222, 0, sizeof(struct sNode*));
memset(&value_224, 0, sizeof(struct sNode*));
memset(&value_226, 0, sizeof(struct sNode*));
memset(&word_231, 0, sizeof(char*));
memset(&node_238, 0, sizeof(struct sNode*));
memset(&node2_239, 0, sizeof(struct sNode*));
memset(&node_240, 0, sizeof(struct sNode*));
memset(&node_244, 0, sizeof(struct sNode*));
memset(&node_246, 0, sizeof(struct sNode*));
    skip_spaces_and_lf(info);
    refference_207=(_Bool)0;
    {
        p_208=info->p;
        sline_209=info->sline;
        if(*info->p==38&&*(info->p+1)!=38) {
            info->p++;
            skip_spaces_and_lf(info);
            if(*info->p==34) {
                refference_207=(_Bool)1;
            }
            else {
                if(xisalpha(*info->p)||*info->p==95) {
                    refference_207=(_Bool)1;
                }
                else {
                    if(*info->p==40||*info->p==42) {
                        while(*info->p==40||*info->p==42) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(xisalpha(*info->p)||*info->p==95) {
                            refference_207=(_Bool)1;
                        }
                    }
                }
            }
        }
        info->p=p_208;
        info->sline=sline_209;
    }
    parse_sharp_v5(info);
    if(*info->p==123) {
        if(info->array_initializer) {
            __result144__ = __result_obj__ = ((struct sNode*)(__right_value265=parse_array_initializer(info)));
            if(__right_value265) { __right_value265 = come_decrement_ref_count2(__right_value265, ((struct sNode*)__right_value265)->finalize, ((struct sNode*)__right_value265)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result144__;
        }
        else {
            __result145__ = __result_obj__ = ((struct sNode*)(__right_value266=parse_normal_block(info)));
            if(__right_value266) { __right_value266 = come_decrement_ref_count2(__right_value266, ((struct sNode*)__right_value266)->finalize, ((struct sNode*)__right_value266)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result145__;
        }
    }
    else {
        if(*info->p==33) {
            info->p++;
            skip_spaces_and_lf(info);
            node_210=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value267=expression_node_v99(info))));
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 649, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sLogicalDenial*)(__right_value269=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(__right_value268=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05pre_op.c", 649, "sLogicalDenial")))),(struct sNode*)come_increment_ref_count(node_210),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sLogicalDenial_finalize;
            _inf_value3->clone=(void*)sLogicalDenial_clone;
            _inf_value3->compile=(void*)sLogicalDenial_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sLogicalDenial_kind;
            __result148__ = __result_obj__ = ((struct sNode*)(__right_value273=_inf_value3));
            if(node_210) { node_210 = come_decrement_ref_count2(node_210, ((struct sNode*)node_210)->finalize, ((struct sNode*)node_210)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value268,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value269,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value273) { __right_value273 = come_decrement_ref_count2(__right_value273, ((struct sNode*)__right_value273)->finalize, ((struct sNode*)__right_value273)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result148__;
            if(node_210) { node_210 = come_decrement_ref_count2(node_210, ((struct sNode*)node_210)->finalize, ((struct sNode*)node_210)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(*info->p==45&&*(info->p+1)==45) {
                info->p+=2;
                skip_spaces_and_lf(info);
                node_212=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value274=expression_node_v99(info))));
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 657, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sMinusMinusNode2*)(__right_value276=sMinusMinusNode2_initialize((struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(__right_value275=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "05pre_op.c", 657, "sMinusMinusNode2")))),(struct sNode*)come_increment_ref_count(node_212),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sMinusMinusNode2_finalize;
                _inf_value4->clone=(void*)sMinusMinusNode2_clone;
                _inf_value4->compile=(void*)sMinusMinusNode2_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sNodeBase_terminated;
                _inf_value4->kind=(void*)sMinusMinusNode2_kind;
                __result151__ = __result_obj__ = ((struct sNode*)(__right_value280=_inf_value4));
                if(node_212) { node_212 = come_decrement_ref_count2(node_212, ((struct sNode*)node_212)->finalize, ((struct sNode*)node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(__right_value275,sMinusMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value276,sMinusMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value280) { __right_value280 = come_decrement_ref_count2(__right_value280, ((struct sNode*)__right_value280)->finalize, ((struct sNode*)__right_value280)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result151__;
                if(node_212) { node_212 = come_decrement_ref_count2(node_212, ((struct sNode*)node_212)->finalize, ((struct sNode*)node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(*info->p==45&&!xisdigit(*(info->p+1))) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_214=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value281=expression_node_v99(info))));
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 665, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sMinusNode2*)(__right_value283=sMinusNode2_initialize((struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(__right_value282=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "05pre_op.c", 665, "sMinusNode2")))),(struct sNode*)come_increment_ref_count(node_214),info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sMinusNode2_finalize;
                    _inf_value5->clone=(void*)sMinusNode2_clone;
                    _inf_value5->compile=(void*)sMinusNode2_compile;
                    _inf_value5->sline=(void*)sNodeBase_sline;
                    _inf_value5->sname=(void*)sNodeBase_sname;
                    _inf_value5->terminated=(void*)sNodeBase_terminated;
                    _inf_value5->kind=(void*)sMinusNode2_kind;
                    __result154__ = __result_obj__ = ((struct sNode*)(__right_value287=_inf_value5));
                    if(node_214) { node_214 = come_decrement_ref_count2(node_214, ((struct sNode*)node_214)->finalize, ((struct sNode*)node_214)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value282,sMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(__right_value283,sMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                    if(__right_value287) { __right_value287 = come_decrement_ref_count2(__right_value287, ((struct sNode*)__right_value287)->finalize, ((struct sNode*)__right_value287)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result154__;
                    if(node_214) { node_214 = come_decrement_ref_count2(node_214, ((struct sNode*)node_214)->finalize, ((struct sNode*)node_214)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(*info->p==43&&*(info->p+1)==43) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        node_216=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value288=expression_node_v99(info))));
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 673, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sPlusPlusNode2*)(__right_value290=sPlusPlusNode2_initialize((struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(__right_value289=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "05pre_op.c", 673, "sPlusPlusNode2")))),(struct sNode*)come_increment_ref_count(node_216),info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sPlusPlusNode2_finalize;
                        _inf_value6->clone=(void*)sPlusPlusNode2_clone;
                        _inf_value6->compile=(void*)sPlusPlusNode2_compile;
                        _inf_value6->sline=(void*)sNodeBase_sline;
                        _inf_value6->sname=(void*)sNodeBase_sname;
                        _inf_value6->terminated=(void*)sNodeBase_terminated;
                        _inf_value6->kind=(void*)sPlusPlusNode2_kind;
                        __result157__ = __result_obj__ = ((struct sNode*)(__right_value294=_inf_value6));
                        if(node_216) { node_216 = come_decrement_ref_count2(node_216, ((struct sNode*)node_216)->finalize, ((struct sNode*)node_216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(__right_value289,sPlusPlusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(__right_value290,sPlusPlusNode2_finalize, 0, 1, 0, 0, __result_obj__);
                        if(__right_value294) { __right_value294 = come_decrement_ref_count2(__right_value294, ((struct sNode*)__right_value294)->finalize, ((struct sNode*)__right_value294)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result157__;
                        if(node_216) { node_216 = come_decrement_ref_count2(node_216, ((struct sNode*)node_216)->finalize, ((struct sNode*)node_216)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(*info->p==126) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            node_218=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value295=expression_node_v99(info))));
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 681, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sComplement*)(__right_value297=sComplement_initialize((struct sComplement*)come_increment_ref_count(((struct sComplement*)(__right_value296=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "05pre_op.c", 681, "sComplement")))),(struct sNode*)come_increment_ref_count(node_218),info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sComplement_finalize;
                            _inf_value7->clone=(void*)sComplement_clone;
                            _inf_value7->compile=(void*)sComplement_compile;
                            _inf_value7->sline=(void*)sNodeBase_sline;
                            _inf_value7->sname=(void*)sNodeBase_sname;
                            _inf_value7->terminated=(void*)sNodeBase_terminated;
                            _inf_value7->kind=(void*)sComplement_kind;
                            __result160__ = __result_obj__ = ((struct sNode*)(__right_value301=_inf_value7));
                            if(node_218) { node_218 = come_decrement_ref_count2(node_218, ((struct sNode*)node_218)->finalize, ((struct sNode*)node_218)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(__right_value296,sComplement_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(__right_value297,sComplement_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value301) { __right_value301 = come_decrement_ref_count2(__right_value301, ((struct sNode*)__right_value301)->finalize, ((struct sNode*)__right_value301)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result160__;
                            if(node_218) { node_218 = come_decrement_ref_count2(node_218, ((struct sNode*)node_218)->finalize, ((struct sNode*)node_218)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if((*info->p==92&&*(info->p+1)==42)||*info->p==42) {
                                if(*info->p==92) {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                    quote_220=(_Bool)1;
                                }
                                else {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    quote_220=(_Bool)0;
                                }
                                no_assign_221=info->no_assign;
                                info->no_assign=(_Bool)1;
                                value_222=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value302=expression_node_v99(info))));
                                info->no_assign=no_assign_221;
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 702, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sDerefferenceNode*)(__right_value304=sDerefferenceNode_initialize((struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(__right_value303=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "05pre_op.c", 701, "sDerefferenceNode")))),(struct sNode*)come_increment_ref_count(value_222),quote_220,info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sDerefferenceNode_finalize;
                                _inf_value8->clone=(void*)sDerefferenceNode_clone;
                                _inf_value8->compile=(void*)sDerefferenceNode_compile;
                                _inf_value8->sline=(void*)sNodeBase_sline;
                                _inf_value8->sname=(void*)sNodeBase_sname;
                                _inf_value8->terminated=(void*)sNodeBase_terminated;
                                _inf_value8->kind=(void*)sDerefferenceNode_kind;
                                __result163__ = __result_obj__ = ((struct sNode*)(__right_value308=_inf_value8));
                                if(value_222) { value_222 = come_decrement_ref_count2(value_222, ((struct sNode*)value_222)->finalize, ((struct sNode*)value_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(__right_value303,sDerefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(__right_value304,sDerefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(__right_value308) { __right_value308 = come_decrement_ref_count2(__right_value308, ((struct sNode*)__right_value308)->finalize, ((struct sNode*)__right_value308)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result163__;
                                if(value_222) { value_222 = come_decrement_ref_count2(value_222, ((struct sNode*)value_222)->finalize, ((struct sNode*)value_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(*info->p==38&&refference_207) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    value_224=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value309=expression_node_v99(info))));
                                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 709, "struct sNode");
                                    _inf_obj_value9=come_increment_ref_count(((struct sRefferenceNode*)(__right_value311=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(__right_value310=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "05pre_op.c", 709, "sRefferenceNode")))),(struct sNode*)come_increment_ref_count(value_224),info))));
                                    _inf_value9->_protocol_obj=_inf_obj_value9;
                                    _inf_value9->finalize=(void*)sRefferenceNode_finalize;
                                    _inf_value9->clone=(void*)sRefferenceNode_clone;
                                    _inf_value9->compile=(void*)sRefferenceNode_compile;
                                    _inf_value9->sline=(void*)sNodeBase_sline;
                                    _inf_value9->sname=(void*)sNodeBase_sname;
                                    _inf_value9->terminated=(void*)sNodeBase_terminated;
                                    _inf_value9->kind=(void*)sRefferenceNode_kind;
                                    __result166__ = __result_obj__ = ((struct sNode*)(__right_value315=_inf_value9));
                                    if(value_224) { value_224 = come_decrement_ref_count2(value_224, ((struct sNode*)value_224)->finalize, ((struct sNode*)value_224)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(__right_value310,sRefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(__right_value311,sRefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(__right_value315) { __right_value315 = come_decrement_ref_count2(__right_value315, ((struct sNode*)__right_value315)->finalize, ((struct sNode*)__right_value315)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result166__;
                                    if(value_224) { value_224 = come_decrement_ref_count2(value_224, ((struct sNode*)value_224)->finalize, ((struct sNode*)value_224)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(*info->p==33) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        value_226=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value316=expression_node_v99(info))));
                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 717, "struct sNode");
                                        _inf_obj_value10=come_increment_ref_count(((struct sReverseNode*)(__right_value318=sReverseNode_initialize((struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(__right_value317=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "05pre_op.c", 717, "sReverseNode")))),(struct sNode*)come_increment_ref_count(value_226),info))));
                                        _inf_value10->_protocol_obj=_inf_obj_value10;
                                        _inf_value10->finalize=(void*)sReverseNode_finalize;
                                        _inf_value10->clone=(void*)sReverseNode_clone;
                                        _inf_value10->compile=(void*)sReverseNode_compile;
                                        _inf_value10->sline=(void*)sNodeBase_sline;
                                        _inf_value10->sname=(void*)sNodeBase_sname;
                                        _inf_value10->terminated=(void*)sNodeBase_terminated;
                                        _inf_value10->kind=(void*)sReverseNode_kind;
                                        __result169__ = __result_obj__ = ((struct sNode*)(__right_value322=_inf_value10));
                                        if(value_226) { value_226 = come_decrement_ref_count2(value_226, ((struct sNode*)value_226)->finalize, ((struct sNode*)value_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(__right_value317,sReverseNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(__right_value318,sReverseNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(__right_value322) { __right_value322 = come_decrement_ref_count2(__right_value322, ((struct sNode*)__right_value322)->finalize, ((struct sNode*)__right_value322)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result169__;
                                        if(value_226) { value_226 = come_decrement_ref_count2(value_226, ((struct sNode*)value_226)->finalize, ((struct sNode*)value_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(*info->p==40) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            cast_expression_flag_228=(_Bool)0;
                                            {
                                                p_229=info->p;
                                                sline_230=info->sline;
                                                parse_sharp_v5(info);
                                                word_231=(char*)come_increment_ref_count(((char*)(__right_value323=__builtin_string(""))));
                                                if(xisalpha(*info->p)||*info->p==95) {
                                                    __dec_obj106=word_231;
                                                    word_231=(char*)come_increment_ref_count(((char*)(__right_value324=parse_word(info))));
                                                    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                }
                                                parse_sharp_v5(info);
                                                if(is_type_name(word_231,info)) {
                                                    cast_expression_flag_228=(_Bool)1;
                                                }
                                                parse_sharp_v5(info);
                                                info->p=p_229;
                                                info->sline=sline_230;
                                                word_231 = come_decrement_ref_count2(word_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            tuple_expression_flag_232=(_Bool)0;
                                            if(!gComeC) {
                                                p_233=info->p;
                                                sline_234=info->sline;
                                                parse_sharp_v5(info);
                                                no_comma_235=info->no_comma;
                                                info->no_comma=(_Bool)1;
                                                no_output_err_236=info->no_output_err;
                                                info->no_output_err=(_Bool)1;
                                                no_output_come_code_237=info->no_output_come_code;
                                                info->no_output_come_code=(_Bool)1;
                                                node_238=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value325=expression_v13(info))));
                                                node2_239=(struct sNode*)come_increment_ref_count(node_238);
                                                parse_sharp_v5(info);
                                                info->no_comma=no_comma_235;
                                                info->no_output_err=no_output_err_236;
                                                info->no_output_come_code=no_output_come_code_237;
                                                if(*info->p==44) {
                                                    tuple_expression_flag_232=(_Bool)1;
                                                }
                                                parse_sharp_v5(info);
                                                info->p=p_233;
                                                info->sline=sline_234;
                                                if(node_238) { node_238 = come_decrement_ref_count2(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                if(node2_239) { node2_239 = come_decrement_ref_count2(node2_239, ((struct sNode*)node2_239)->finalize, ((struct sNode*)node2_239)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(!gComeC&&tuple_expression_flag_232) {
                                                parse_sharp_v5(info);
                                                node_240=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value326=parse_tuple(info))));
                                                parse_sharp_v5(info);
                                                __result170__ = __result_obj__ = node_240;
                                                if(node_240) { node_240 = come_decrement_ref_count2(node_240, ((struct sNode*)node_240)->finalize, ((struct sNode*)node_240)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                return __result170__;
                                                if(node_240) { node_240 = come_decrement_ref_count2(node_240, ((struct sNode*)node_240)->finalize, ((struct sNode*)node_240)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(cast_expression_flag_228) {
                                                    parse_sharp_v5(info);
                                                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value327=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                    type_241=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                                    name_242=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                                    err_243=multiple_assign_var5->v3;
                                                    come_call_finalizer3(__right_value327,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(!err_243) {
                                                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                                        exit(2);
                                                    }
                                                    parse_sharp_v5(info);
                                                    expected_next_character(41,info);
                                                    parse_sharp_v5(info);
                                                    node_244=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value328=expression_node_v99(info))));
                                                    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 807, "struct sNode");
                                                    _inf_obj_value11=come_increment_ref_count(((struct sCastNode*)(__right_value330=sCastNode_initialize((struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(__right_value329=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "05pre_op.c", 807, "sCastNode")))),type_241,node_244,info))));
                                                    _inf_value11->_protocol_obj=_inf_obj_value11;
                                                    _inf_value11->finalize=(void*)sCastNode_finalize;
                                                    _inf_value11->clone=(void*)sCastNode_clone;
                                                    _inf_value11->compile=(void*)sCastNode_compile;
                                                    _inf_value11->sline=(void*)sNodeBase_sline;
                                                    _inf_value11->sname=(void*)sNodeBase_sname;
                                                    _inf_value11->terminated=(void*)sNodeBase_terminated;
                                                    _inf_value11->kind=(void*)sCastNode_kind;
                                                    __result173__ = __result_obj__ = ((struct sNode*)(__right_value335=_inf_value11));
                                                    come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    name_242 = come_decrement_ref_count2(name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    if(node_244) { node_244 = come_decrement_ref_count2(node_244, ((struct sNode*)node_244)->finalize, ((struct sNode*)node_244)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    come_call_finalizer3(__right_value329,sCastNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer3(__right_value330,sCastNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(__right_value335) { __right_value335 = come_decrement_ref_count2(__right_value335, ((struct sNode*)__right_value335)->finalize, ((struct sNode*)__right_value335)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result173__;
                                                    come_call_finalizer3(type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    name_242 = come_decrement_ref_count2(name_242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    if(node_244) { node_244 = come_decrement_ref_count2(node_244, ((struct sNode*)node_244)->finalize, ((struct sNode*)node_244)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    if(gComeC&&info->in_fun_param) {
                                                        no_comma_247=info->no_comma;
                                                        info->no_comma=(_Bool)0;
                                                        parse_sharp_v5(info);
                                                        __dec_obj110=node_246;
                                                        node_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value336=expression_v13(info))));
                                                        if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); }
                                                        parse_sharp_v5(info);
                                                        info->no_comma=no_comma_247;
                                                    }
                                                    else {
                                                        parse_sharp_v5(info);
                                                        __dec_obj111=node_246;
                                                        node_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value337=expression_v13(info))));
                                                        if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
                                                        parse_sharp_v5(info);
                                                    }
                                                    expected_next_character(41,info);
                                                    parse_sharp_v5(info);
                                                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 828, "struct sNode");
                                                    _inf_obj_value12=come_increment_ref_count(((struct sParenNode*)(__right_value339=sParenNode_initialize((struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(__right_value338=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "05pre_op.c", 828, "sParenNode")))),node_246,info))));
                                                    _inf_value12->_protocol_obj=_inf_obj_value12;
                                                    _inf_value12->finalize=(void*)sParenNode_finalize;
                                                    _inf_value12->clone=(void*)sParenNode_clone;
                                                    _inf_value12->compile=(void*)sParenNode_compile;
                                                    _inf_value12->sline=(void*)sNodeBase_sline;
                                                    _inf_value12->sname=(void*)sNodeBase_sname;
                                                    _inf_value12->terminated=(void*)sNodeBase_terminated;
                                                    _inf_value12->kind=(void*)sParenNode_kind;
                                                    __dec_obj114=node_246;
                                                    node_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value343=_inf_value12)));
                                                    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
                                                    come_call_finalizer3(__right_value338,sParenNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer3(__right_value339,sParenNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    __result176__ = __result_obj__ = node_246;
                                                    if(node_246) { node_246 = come_decrement_ref_count2(node_246, ((struct sNode*)node_246)->finalize, ((struct sNode*)node_246)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result176__;
                                                    if(node_246) { node_246 = come_decrement_ref_count2(node_246, ((struct sNode*)node_246)->finalize, ((struct sNode*)node_246)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                            }
                                        }
                                        else {
                                            __result177__ = __result_obj__ = (struct sNode*)((void*)0);
                                            return __result177__;
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

static void sLogicalDenial_finalize(struct sLogicalDenial* self){
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)&&self->value!=((void*)0)) {
                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
}

static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self){
void* __result_obj__;
struct sLogicalDenial* __result146__;
void* __right_value270 = (void*)0;
struct sLogicalDenial* result_211;
void* __right_value271 = (void*)0;
char* __dec_obj90;
void* __right_value272 = (void*)0;
struct sNode* __dec_obj91;
struct sLogicalDenial* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_211, 0, sizeof(struct sLogicalDenial*));
                if(self==(void*)0) {
                    __result146__ = __result_obj__ = (void*)0;
                    return __result146__;
                }
                result_211=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(__right_value270=(struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "sLogicalDenial_clone", 3, "sLogicalDenial"))));
                if(self!=((void*)0)) {
                    result_211->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj90=result_211->sname;
                    result_211->sname=(char*)come_increment_ref_count(((char*)(__right_value271=string_clone(self->sname))));
                    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                if(self!=((void*)0)&&self->value!=((void*)0)) {
                    __dec_obj91=result_211->value;
                    result_211->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value272=sNode_clone(self->value))));
                    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); }
                }
                __result147__ = __result_obj__ = result_211;
                come_call_finalizer3(result_211,sLogicalDenial_finalize, 0, 0, 1, 0, (void*)0);
                return __result147__;
                come_call_finalizer3(result_211,sLogicalDenial_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self){
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(self!=((void*)0)&&self->value!=((void*)0)) {
                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self){
void* __result_obj__;
struct sMinusMinusNode2* __result149__;
void* __right_value277 = (void*)0;
struct sMinusMinusNode2* result_213;
void* __right_value278 = (void*)0;
char* __dec_obj92;
void* __right_value279 = (void*)0;
struct sNode* __dec_obj93;
struct sMinusMinusNode2* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_213, 0, sizeof(struct sMinusMinusNode2*));
                    if(self==(void*)0) {
                        __result149__ = __result_obj__ = (void*)0;
                        return __result149__;
                    }
                    result_213=(struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(__right_value277=(struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "sMinusMinusNode2_clone", 3, "sMinusMinusNode2"))));
                    if(self!=((void*)0)) {
                        result_213->sline=self->sline;
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        __dec_obj92=result_213->sname;
                        result_213->sname=(char*)come_increment_ref_count(((char*)(__right_value278=string_clone(self->sname))));
                        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    if(self!=((void*)0)&&self->value!=((void*)0)) {
                        __dec_obj93=result_213->value;
                        result_213->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value279=sNode_clone(self->value))));
                        if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); }
                    }
                    __result150__ = __result_obj__ = result_213;
                    come_call_finalizer3(result_213,sMinusMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
                    return __result150__;
                    come_call_finalizer3(result_213,sMinusMinusNode2_finalize, 0, 0, 0, 0, (void*)0);
}

static void sMinusNode2_finalize(struct sMinusNode2* self){
                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(self!=((void*)0)&&self->value!=((void*)0)) {
                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self){
void* __result_obj__;
struct sMinusNode2* __result152__;
void* __right_value284 = (void*)0;
struct sMinusNode2* result_215;
void* __right_value285 = (void*)0;
char* __dec_obj94;
void* __right_value286 = (void*)0;
struct sNode* __dec_obj95;
struct sMinusNode2* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_215, 0, sizeof(struct sMinusNode2*));
                        if(self==(void*)0) {
                            __result152__ = __result_obj__ = (void*)0;
                            return __result152__;
                        }
                        result_215=(struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(__right_value284=(struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "sMinusNode2_clone", 3, "sMinusNode2"))));
                        if(self!=((void*)0)) {
                            result_215->sline=self->sline;
                        }
                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                            __dec_obj94=result_215->sname;
                            result_215->sname=(char*)come_increment_ref_count(((char*)(__right_value285=string_clone(self->sname))));
                            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        if(self!=((void*)0)&&self->value!=((void*)0)) {
                            __dec_obj95=result_215->value;
                            result_215->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value286=sNode_clone(self->value))));
                            if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); }
                        }
                        __result153__ = __result_obj__ = result_215;
                        come_call_finalizer3(result_215,sMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
                        return __result153__;
                        come_call_finalizer3(result_215,sMinusNode2_finalize, 0, 0, 0, 0, (void*)0);
}

static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self){
                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->value!=((void*)0)) {
                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self){
void* __result_obj__;
struct sPlusPlusNode2* __result155__;
void* __right_value291 = (void*)0;
struct sPlusPlusNode2* result_217;
void* __right_value292 = (void*)0;
char* __dec_obj96;
void* __right_value293 = (void*)0;
struct sNode* __dec_obj97;
struct sPlusPlusNode2* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_217, 0, sizeof(struct sPlusPlusNode2*));
                            if(self==(void*)0) {
                                __result155__ = __result_obj__ = (void*)0;
                                return __result155__;
                            }
                            result_217=(struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(__right_value291=(struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "sPlusPlusNode2_clone", 3, "sPlusPlusNode2"))));
                            if(self!=((void*)0)) {
                                result_217->sline=self->sline;
                            }
                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                __dec_obj96=result_217->sname;
                                result_217->sname=(char*)come_increment_ref_count(((char*)(__right_value292=string_clone(self->sname))));
                                __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->value!=((void*)0)) {
                                __dec_obj97=result_217->value;
                                result_217->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value293=sNode_clone(self->value))));
                                if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0, (void*)0); }
                            }
                            __result156__ = __result_obj__ = result_217;
                            come_call_finalizer3(result_217,sPlusPlusNode2_finalize, 0, 0, 1, 0, (void*)0);
                            return __result156__;
                            come_call_finalizer3(result_217,sPlusPlusNode2_finalize, 0, 0, 0, 0, (void*)0);
}

static void sComplement_finalize(struct sComplement* self){
                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->value!=((void*)0)) {
                                    if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sComplement* sComplement_clone(struct sComplement* self){
void* __result_obj__;
struct sComplement* __result158__;
void* __right_value298 = (void*)0;
struct sComplement* result_219;
void* __right_value299 = (void*)0;
char* __dec_obj98;
void* __right_value300 = (void*)0;
struct sNode* __dec_obj99;
struct sComplement* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_219, 0, sizeof(struct sComplement*));
                                if(self==(void*)0) {
                                    __result158__ = __result_obj__ = (void*)0;
                                    return __result158__;
                                }
                                result_219=(struct sComplement*)come_increment_ref_count(((struct sComplement*)(__right_value298=(struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "sComplement_clone", 3, "sComplement"))));
                                if(self!=((void*)0)) {
                                    result_219->sline=self->sline;
                                }
                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                    __dec_obj98=result_219->sname;
                                    result_219->sname=(char*)come_increment_ref_count(((char*)(__right_value299=string_clone(self->sname))));
                                    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->value!=((void*)0)) {
                                    __dec_obj99=result_219->value;
                                    result_219->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value300=sNode_clone(self->value))));
                                    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); }
                                }
                                __result159__ = __result_obj__ = result_219;
                                come_call_finalizer3(result_219,sComplement_finalize, 0, 0, 1, 0, (void*)0);
                                return __result159__;
                                come_call_finalizer3(result_219,sComplement_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self){
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->value!=((void*)0)) {
                                        if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self){
void* __result_obj__;
struct sDerefferenceNode* __result161__;
void* __right_value305 = (void*)0;
struct sDerefferenceNode* result_223;
void* __right_value306 = (void*)0;
char* __dec_obj100;
void* __right_value307 = (void*)0;
struct sNode* __dec_obj101;
struct sDerefferenceNode* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_223, 0, sizeof(struct sDerefferenceNode*));
                                    if(self==(void*)0) {
                                        __result161__ = __result_obj__ = (void*)0;
                                        return __result161__;
                                    }
                                    result_223=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(__right_value305=(struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "sDerefferenceNode_clone", 3, "sDerefferenceNode"))));
                                    if(self!=((void*)0)) {
                                        result_223->sline=self->sline;
                                    }
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        __dec_obj100=result_223->sname;
                                        result_223->sname=(char*)come_increment_ref_count(((char*)(__right_value306=string_clone(self->sname))));
                                        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->value!=((void*)0)) {
                                        __dec_obj101=result_223->value;
                                        result_223->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value307=sNode_clone(self->value))));
                                        if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0, (void*)0); }
                                    }
                                    if(self!=((void*)0)) {
                                        result_223->mQuote=self->mQuote;
                                    }
                                    __result162__ = __result_obj__ = result_223;
                                    come_call_finalizer3(result_223,sDerefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result162__;
                                    come_call_finalizer3(result_223,sDerefferenceNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sRefferenceNode_finalize(struct sRefferenceNode* self){
                                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(self!=((void*)0)&&self->value!=((void*)0)) {
                                            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
}

static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self){
void* __result_obj__;
struct sRefferenceNode* __result164__;
void* __right_value312 = (void*)0;
struct sRefferenceNode* result_225;
void* __right_value313 = (void*)0;
char* __dec_obj102;
void* __right_value314 = (void*)0;
struct sNode* __dec_obj103;
struct sRefferenceNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_225, 0, sizeof(struct sRefferenceNode*));
                                        if(self==(void*)0) {
                                            __result164__ = __result_obj__ = (void*)0;
                                            return __result164__;
                                        }
                                        result_225=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(__right_value312=(struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "sRefferenceNode_clone", 3, "sRefferenceNode"))));
                                        if(self!=((void*)0)) {
                                            result_225->sline=self->sline;
                                        }
                                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                            __dec_obj102=result_225->sname;
                                            result_225->sname=(char*)come_increment_ref_count(((char*)(__right_value313=string_clone(self->sname))));
                                            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        if(self!=((void*)0)&&self->value!=((void*)0)) {
                                            __dec_obj103=result_225->value;
                                            result_225->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value314=sNode_clone(self->value))));
                                            if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); }
                                        }
                                        __result165__ = __result_obj__ = result_225;
                                        come_call_finalizer3(result_225,sRefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result165__;
                                        come_call_finalizer3(result_225,sRefferenceNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sReverseNode_finalize(struct sReverseNode* self){
                                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(self!=((void*)0)&&self->value!=((void*)0)) {
                                                if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
}

static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self){
void* __result_obj__;
struct sReverseNode* __result167__;
void* __right_value319 = (void*)0;
struct sReverseNode* result_227;
void* __right_value320 = (void*)0;
char* __dec_obj104;
void* __right_value321 = (void*)0;
struct sNode* __dec_obj105;
struct sReverseNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_227, 0, sizeof(struct sReverseNode*));
                                            if(self==(void*)0) {
                                                __result167__ = __result_obj__ = (void*)0;
                                                return __result167__;
                                            }
                                            result_227=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(__right_value319=(struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "sReverseNode_clone", 3, "sReverseNode"))));
                                            if(self!=((void*)0)) {
                                                result_227->sline=self->sline;
                                            }
                                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                __dec_obj104=result_227->sname;
                                                result_227->sname=(char*)come_increment_ref_count(((char*)(__right_value320=string_clone(self->sname))));
                                                __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            }
                                            if(self!=((void*)0)&&self->value!=((void*)0)) {
                                                __dec_obj105=result_227->value;
                                                result_227->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value321=sNode_clone(self->value))));
                                                if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
                                            }
                                            __result168__ = __result_obj__ = result_227;
                                            come_call_finalizer3(result_227,sReverseNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result168__;
                                            come_call_finalizer3(result_227,sReverseNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
                                                        if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                                            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(self!=((void*)0)&&self->v2!=((void*)0)) {
                                                            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static void sCastNode_finalize(struct sCastNode* self){
                                                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                                            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
}

static struct sCastNode* sCastNode_clone(struct sCastNode* self){
void* __result_obj__;
struct sCastNode* __result171__;
void* __right_value331 = (void*)0;
struct sCastNode* result_245;
void* __right_value332 = (void*)0;
char* __dec_obj107;
void* __right_value333 = (void*)0;
struct sType* __dec_obj108;
void* __right_value334 = (void*)0;
struct sNode* __dec_obj109;
struct sCastNode* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_245, 0, sizeof(struct sCastNode*));
                                                        if(self==(void*)0) {
                                                            __result171__ = __result_obj__ = (void*)0;
                                                            return __result171__;
                                                        }
                                                        result_245=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(__right_value331=(struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "sCastNode_clone", 3, "sCastNode"))));
                                                        if(self!=((void*)0)) {
                                                            result_245->sline=self->sline;
                                                        }
                                                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                            __dec_obj107=result_245->sname;
                                                            result_245->sname=(char*)come_increment_ref_count(((char*)(__right_value332=string_clone(self->sname))));
                                                            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        }
                                                        if(self!=((void*)0)&&self->mType!=((void*)0)) {
                                                            __dec_obj108=result_245->mType;
                                                            result_245->mType=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value333=sType_clone(self->mType))));
                                                            come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                                            __dec_obj109=result_245->mLeft;
                                                            result_245->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value334=sNode_clone(self->mLeft))));
                                                            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
                                                        }
                                                        __result172__ = __result_obj__ = result_245;
                                                        come_call_finalizer3(result_245,sCastNode_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result172__;
                                                        come_call_finalizer3(result_245,sCastNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sParenNode_finalize(struct sParenNode* self){
                                                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
                                                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
}

static struct sParenNode* sParenNode_clone(struct sParenNode* self){
void* __result_obj__;
struct sParenNode* __result174__;
void* __right_value340 = (void*)0;
struct sParenNode* result_248;
void* __right_value341 = (void*)0;
char* __dec_obj112;
void* __right_value342 = (void*)0;
struct sNode* __dec_obj113;
struct sParenNode* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_248, 0, sizeof(struct sParenNode*));
                                                        if(self==(void*)0) {
                                                            __result174__ = __result_obj__ = (void*)0;
                                                            return __result174__;
                                                        }
                                                        result_248=(struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(__right_value340=(struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "sParenNode_clone", 3, "sParenNode"))));
                                                        if(self!=((void*)0)) {
                                                            result_248->sline=self->sline;
                                                        }
                                                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                            __dec_obj112=result_248->sname;
                                                            result_248->sname=(char*)come_increment_ref_count(((char*)(__right_value341=string_clone(self->sname))));
                                                            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        }
                                                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                                            __dec_obj113=result_248->mLeft;
                                                            result_248->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value342=sNode_clone(self->mLeft))));
                                                            if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
                                                        }
                                                        __result175__ = __result_obj__ = result_248;
                                                        come_call_finalizer3(result_248,sParenNode_finalize, 0, 0, 1, 0, (void*)0);
                                                        return __result175__;
                                                        come_call_finalizer3(result_248,sParenNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __result_obj__;
void* __right_value344 = (void*)0;
struct sNode* node_249;
void* __right_value345 = (void*)0;
struct sNode* __result178__;
struct sNode* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_249, 0, sizeof(struct sNode*));
    node_249=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value344=pre_position_operator(info))));
    if(node_249==((void*)0)) {
        __result178__ = __result_obj__ = ((struct sNode*)(__right_value345=expression_node_v97(info)));
        if(node_249) { node_249 = come_decrement_ref_count2(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(__right_value345) { __right_value345 = come_decrement_ref_count2(__right_value345, ((struct sNode*)__right_value345)->finalize, ((struct sNode*)__right_value345)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result178__;
    }
    else {
        __result179__ = __result_obj__ = node_249;
        if(node_249) { node_249 = come_decrement_ref_count2(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 1, 0, (void*)0); } 
        return __result179__;
    }
    if(node_249) { node_249 = come_decrement_ref_count2(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

