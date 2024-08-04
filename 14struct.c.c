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
struct sStructNode
{
    int sline;
    char* sname;
    char* mName;
    struct sClass* mClass;
    _Bool mOutput;
};
struct sStructNobodyNode
{
    int sline;
    char* sname;
    char* mName;
    struct sClass* mClass;
};
struct sGenericsStructNode
{
    int sline;
    char* sname;
};
struct sClassNode
{
    int sline;
    char* sname;
    char* mName;
    struct sClass* mClass;
    struct list$1sNodeph* mMethods;
    _Bool mOutput;
};
struct list_item$1sClassp
{
    struct sClass* item;
    struct list_item$1sClassp* prev;
    struct list_item$1sClassp* next;
};
struct list$1sClassp
{
    struct list_item$1sClassp* head;
    struct list_item$1sClassp* tail;
    int len;
    struct list_item$1sClassp* it;
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

char* get_none_generics_name(char* class_name);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
void output_struct(struct sClass* klass, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
void output_struct_header(struct sClass* klass, struct sInfo* info);

_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info);

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key);
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
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info);

_Bool sStructNode_terminated(struct sStructNode* self);

char* sStructNode_kind(struct sStructNode* self);

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info);

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self);

char* sStructNobodyNode_kind(struct sStructNobodyNode* self);

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info);

_Bool sGenericsStructNode_terminated(struct sGenericsStructNode* self);

char* sGenericsStructNode_kind(struct sGenericsStructNode* self);

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info);

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, _Bool output, struct sInfo* info);

_Bool sClassNode_terminated(struct sClassNode* self);

char* sClassNode_kind(struct sClassNode* self);

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info);

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
struct sNode* parse_struct(char* type_name, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void sGenericsStructNode_finalize(struct sGenericsStructNode* self);
static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self);
static void sStructNode_finalize(struct sStructNode* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self);
static void list$1sClasspp_finalize(struct list$1sClassp* self);
static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self);
static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item);
static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self);
static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item);
static struct sClass* list$1sClassp_begin(struct list$1sClassp* self);
static _Bool list$1sClassp_end(struct list$1sClassp* self);
static struct sClass* list$1sClassp_next(struct list$1sClassp* self);
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
static void list$1charpp_finalize(struct list$1charp* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item);
static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item);
static void map$2charphcharph_rehash(struct map$2charphcharph* self);
static char* map$2charphcharph_begin(struct map$2charphcharph* self);
static _Bool map$2charphcharph_end(struct map$2charphcharph* self);
static char* map$2charphcharph_next(struct map$2charphcharph* self);
static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value);
static void sClassNode_finalize(struct sClassNode* self);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);

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










char* get_none_generics_name(char* class_name){
void* __result_obj__;
char* p_47;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
char* __result45__;
void* __right_value81 = (void*)0;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    p_47=class_name;
    while(*p_47) {
        if(*p_47==36) {
            __result45__ = __result_obj__ = ((char*)(__right_value80=string_substring(((char*)(__right_value79=__builtin_string(class_name))),0,p_47-class_name)));
            __right_value79 = come_decrement_ref_count2(__right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value80 = come_decrement_ref_count2(__right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            return __result45__;
        }
        else {
            p_47++;
        }
    }
    __result46__ = __result_obj__ = ((char*)(__right_value81=__builtin_string(class_name)));
    __right_value81 = come_decrement_ref_count2(__right_value81, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result46__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
void* __right_value82 = (void*)0;
void* __right_value83 = (void*)0;
struct buffer* buf_48;
struct sClass* klass_49;
char* class_name_50;
int i_51;
struct sType* type_52;
void* __right_value84 = (void*)0;
char* type_name_62;
int i_63;
void* __right_value85 = (void*)0;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_48, 0, sizeof(struct buffer*));
memset(&klass_49, 0, sizeof(struct sClass*));
memset(&type_52, 0, sizeof(struct sType*));
    buf_48=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value82=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20, "buffer"))))));
    come_call_finalizer3(__right_value82,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    klass_49=generics_type->mClass;
    class_name_50=klass_49->mName;
    buffer_append_str(buf_48,class_name_50);
    if(list$1sTypeph_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_48,36);
        buffer_append_char(buf_48,list$1sTypeph_length(generics_type->mGenericsTypes)+48);
        for(        i_51=0;        i_51<list$1sTypeph_length(generics_type->mGenericsTypes);        i_51++        ){
            type_52=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,i_51), "14struct.c", 33, 0));
            type_name_62=(char*)come_increment_ref_count(create_generics_name(type_52,info));
            buffer_append_str(buf_48,type_name_62);
            for(            i_63=0;            i_63<type_52->mPointerNum;            i_63++            ){
                buffer_append_char(buf_48,112);
            }
            if(type_52->mHeap) {
                buffer_append_str(buf_48,"h");
            }
            type_name_62 = come_decrement_ref_count2(type_name_62, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result49__ = __result_obj__ = ((char*)(__right_value85=buffer_to_string(buf_48)));
    come_call_finalizer3(buf_48,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value85 = come_decrement_ref_count2(__right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result49__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
struct list_item$1sTypeph* it_53;
int i_54;
struct sType* __result47__;
struct sType* default_value_55;
struct sType* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_53, 0, sizeof(struct list_item$1sTypeph*));
memset(&default_value_55, 0, sizeof(struct sType*));
    if(position<0) {
        position+=self->len;
    }
    it_53=self->head;
    i_54=0;
    while(it_53!=((void*)0)) {
        if(position==i_54) {
            __result47__ = __result_obj__ = it_53->item;
            return __result47__;
        }
        it_53=it_53->next;
        i_54++;
    }
    memset(&default_value_55,0,sizeof(struct sType*));
    __result48__ = __result_obj__ = default_value_55;
    come_call_finalizer3(default_value_55,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result48__;
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
memset(&it_56, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_57, 0, sizeof(struct list_item$1sTypeph*));
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
memset(&it_58, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_59, 0, sizeof(struct list_item$1sNodeph*));
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
memset(&it_60, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_61, 0, sizeof(struct list_item$1charph*));
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

void output_struct(struct sClass* klass, struct sInfo* info){
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
struct buffer* buf_64;
void* __right_value88 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_65;
struct tuple2$2charphsTypeph* it_68;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_71;
struct sType* type_72;
void* __right_value89 = (void*)0;
void* __right_value90 = (void*)0;
memset(&buf_64, 0, sizeof(struct buffer*));
memset(&o2_saved_65, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_68, 0, sizeof(struct tuple2$2charphsTypeph*));
    if(!klass->mOutputed) {
        klass->mOutputed=(_Bool)1;
        buf_64=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value86=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 61, "buffer"))))));
        come_call_finalizer3(__right_value86,buffer_finalize, 0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_64,((char*)(__right_value88=xsprintf("struct %s\n{\n",klass->mName))));
        __right_value88 = come_decrement_ref_count2(__right_value88, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        for(        o2_saved_65=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_68=list$1tuple2$2charphsTypephph_begin((o2_saved_65));        !list$1tuple2$2charphsTypephph_end((o2_saved_65));        it_68=list$1tuple2$2charphsTypephph_next((o2_saved_65))        ){
            multiple_assign_var1=it_68;
            name_71=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            type_72=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
            type_72->mStatic=(_Bool)0;
            buffer_append_str(buf_64,"    ");
            buffer_append_str(buf_64,((char*)(__right_value89=make_define_var(type_72,name_71,(_Bool)0,info))));
            __right_value89 = come_decrement_ref_count2(__right_value89, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_64,";\n");
            name_71 = come_decrement_ref_count2(name_71, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_72,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_65,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_64,"};\n");
        if(info->output_header_file&&string_operator_not_equals(klass->mDeclareSName,info->base_sname)) {
        }
        else {
            add_come_code_at_source_head(info,"%s",((char*)(__right_value90=buffer_to_string(buf_64))));
            __right_value90 = come_decrement_ref_count2(__right_value90, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(buf_64,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct tuple2$2charphsTypeph* result_66;
struct tuple2$2charphsTypeph* __result50__;
struct tuple2$2charphsTypeph* __result51__;
struct tuple2$2charphsTypeph* result_67;
struct tuple2$2charphsTypeph* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_66, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_67, 0, sizeof(struct tuple2$2charphsTypeph*));
    if(self==((void*)0)) {
        memset(&result_66,0,sizeof(struct tuple2$2charphsTypeph*));
        __result50__ = __result_obj__ = result_66;
        return __result50__;
    }
    self->it=self->head;
    if(self->it) {
        __result51__ = __result_obj__ = self->it->item;
        return __result51__;
    }
    memset(&result_67,0,sizeof(struct tuple2$2charphsTypeph*));
    __result52__ = __result_obj__ = result_67;
    return __result52__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct tuple2$2charphsTypeph* result_69;
struct tuple2$2charphsTypeph* __result53__;
struct tuple2$2charphsTypeph* __result54__;
struct tuple2$2charphsTypeph* result_70;
struct tuple2$2charphsTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_69, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_70, 0, sizeof(struct tuple2$2charphsTypeph*));
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_69,0,sizeof(struct tuple2$2charphsTypeph*));
        __result53__ = __result_obj__ = result_69;
        return __result53__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result54__ = __result_obj__ = self->it->item;
        return __result54__;
    }
    memset(&result_70,0,sizeof(struct tuple2$2charphsTypeph*));
    __result55__ = __result_obj__ = result_70;
    return __result55__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_73;
struct list_item$1tuple2$2charphsTypephph* prev_it_74;
memset(&it_73, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_74, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
    it_73=self->head;
    while(it_73!=((void*)0)) {
        prev_it_74=it_73;
        it_73=it_73->next;
        come_call_finalizer3(prev_it_74,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

void output_struct_header(struct sClass* klass, struct sInfo* info){
void* __right_value91 = (void*)0;
void* __right_value92 = (void*)0;
struct buffer* buf_75;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_76;
struct tuple2$2charphsTypeph* it_77;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* name_78;
struct sType* type_79;
void* __right_value95 = (void*)0;
void* __right_value96 = (void*)0;
memset(&buf_75, 0, sizeof(struct buffer*));
memset(&o2_saved_76, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_77, 0, sizeof(struct tuple2$2charphsTypeph*));
    if(!klass->mOutputed2) {
        klass->mOutputed2=(_Bool)1;
        buf_75=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value91=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 98, "buffer"))))));
        come_call_finalizer3(__right_value91,buffer_finalize, 0, 1, 0, 0, (void*)0);
        if(klass->mParentClassName) {
            buffer_append_str(buf_75,((char*)(__right_value93=xsprintf("struct %s extends %s\n{\n",klass->mName,klass->mParentClassName))));
            __right_value93 = come_decrement_ref_count2(__right_value93, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(buf_75,((char*)(__right_value94=xsprintf("struct %s\n{\n",klass->mName))));
            __right_value94 = come_decrement_ref_count2(__right_value94, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        for(        o2_saved_76=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_77=list$1tuple2$2charphsTypephph_begin((o2_saved_76));        !list$1tuple2$2charphsTypephph_end((o2_saved_76));        it_77=list$1tuple2$2charphsTypephph_next((o2_saved_76))        ){
            multiple_assign_var2=it_77;
            name_78=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            type_79=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            type_79->mStatic=(_Bool)0;
            buffer_append_str(buf_75,"    ");
            buffer_append_str(buf_75,((char*)(__right_value95=make_define_var_no_solved(type_79,name_78,(_Bool)0,info))));
            __right_value95 = come_decrement_ref_count2(__right_value95, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_75,";\n");
            name_78 = come_decrement_ref_count2(name_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_79,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_76,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_75,"};\n");
        if(info->output_header_file&&string_operator_not_equals(klass->mDeclareSName,info->base_sname)) {
        }
        else {
            add_come_code_at_come_header(info,"%s",((char*)(__right_value96=buffer_to_string(buf_75))));
            __right_value96 = come_decrement_ref_count2(__right_value96, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(buf_75,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_80;
struct sClass* klass_81;
int i_82;
_Bool result_83;
memset(&type2_80, 0, sizeof(struct sType*));
memset(&klass_81, 0, sizeof(struct sClass*));
    type2_80=type->mNoSolvedGenericsType->v1;
    if(type2_80&&is_no_contained_generics_types(type2_80,info)) {
        return (_Bool)0;
    }
    klass_81=type->mClass;
    if(klass_81->mGenerics) {
        return (_Bool)0;
    }
    if(klass_81->mMethodGenerics) {
        return (_Bool)0;
    }
    for(    i_82=0;    i_82<list$1sTypeph_length(type->mGenericsTypes);    i_82++    ){
        result_83=is_no_contained_generics_types(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_82), "14struct.c", 144, 1)),info);
        if(!result_83) {
            return (_Bool)0;
        }
    }
    return (_Bool)1;
}

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_84;
struct sClass* klass_85;
int i_86;
_Bool result_87;
memset(&type2_84, 0, sizeof(struct sType*));
memset(&klass_85, 0, sizeof(struct sClass*));
    type2_84=type->mNoSolvedGenericsType->v1;
    if(type2_84&&is_contained_method_generics_types(type2_84,info)) {
        return (_Bool)1;
    }
    klass_85=type->mClass;
    if(klass_85->mMethodGenerics) {
        return (_Bool)1;
    }
    for(    i_86=0;    i_86<list$1sTypeph_length(type->mGenericsTypes);    i_86++    ){
        result_87=is_contained_method_generics_types(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_86), "14struct.c", 168, 2)),info);
        if(result_87) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value97 = (void*)0;
char* new_name_88;
void* __right_value133 = (void*)0;
struct sType* type2_91;
struct sClass* generics_class_116;
_Bool __result78__;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
struct sClass* new_class_120;
void* __right_value142 = (void*)0;
int i_165;
struct list$1tuple2$2charphsTypephph* o2_saved_166;
struct tuple2$2charphsTypeph* it_167;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_168;
struct sType* type_169;
void* __right_value143 = (void*)0;
struct sType* new_type_170;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct sType* __dec_obj40;
struct sClass* generics_class_176;
_Bool __result104__;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
struct sClass* new_class_177;
void* __right_value154 = (void*)0;
_Bool existance_method_generics_178;
int i_179;
struct list$1tuple2$2charphsTypephph* o2_saved_180;
struct tuple2$2charphsTypeph* it_181;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* name_182;
struct sType* type_183;
void* __right_value155 = (void*)0;
struct sType* new_type_184;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct sType* __dec_obj41;
void* __right_value161 = (void*)0;
struct sType* __dec_obj42;
_Bool __result105__;
memset(&type2_91, 0, sizeof(struct sType*));
memset(&generics_class_116, 0, sizeof(struct sClass*));
memset(&new_class_120, 0, sizeof(struct sClass*));
memset(&o2_saved_166, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_167, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&new_type_170, 0, sizeof(struct sType*));
memset(&generics_class_176, 0, sizeof(struct sClass*));
memset(&new_class_177, 0, sizeof(struct sClass*));
memset(&o2_saved_180, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_181, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&new_type_184, 0, sizeof(struct sType*));
    new_name_88=(char*)come_increment_ref_count(create_generics_name(type,info));
    if(is_no_contained_generics_types(type,info)&&!map$2charphsClassph_find(info->classes,new_name_88)) {
        type2_91=(struct sType*)come_increment_ref_count(sType_clone(type));
        generics_class_116=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName);
        if(generics_class_116==((void*)0)) {
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            __result78__ = (_Bool)0;
            come_call_finalizer3(type2_91,sType_finalize, 0, 0, 0, 0, (void*)0);
            new_name_88 = come_decrement_ref_count2(new_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result78__;
        }
        new_class_120=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value134=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 192, "sClass")))),new_name_88,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        come_call_finalizer3(__right_value134,sClass_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(__right_value142=__builtin_string(new_name_88)))),(struct sClass*)come_increment_ref_count(new_class_120));
        __right_value142 = come_decrement_ref_count2(__right_value142, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        i_165=0;
        for(        o2_saved_166=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_116->mFields)),it_167=list$1tuple2$2charphsTypephph_begin((o2_saved_166));        !list$1tuple2$2charphsTypephph_end((o2_saved_166));        it_167=list$1tuple2$2charphsTypephph_next((o2_saved_166))        ){
            multiple_assign_var3=it_167;
            name_168=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            type_169=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            new_type_170=(struct sType*)come_increment_ref_count(solve_generics(type_169,type2_91,info));
            list$1tuple2$2charphsTypephph_push_back(new_class_120->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value150=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value149=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 202, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(__right_value147=string_clone(name_168)))),(struct sType*)come_increment_ref_count(((struct sType*)(__right_value148=sType_clone(new_type_170)))))))));
            __right_value147 = come_decrement_ref_count2(__right_value147, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value148,sType_finalize, 0, 1, 0, 0, (void*)0);
            __right_value149 = come_decrement_ref_count2(__right_value149, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value150,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, (void*)0);
            name_168 = come_decrement_ref_count2(name_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_169,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(new_type_170,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_166,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj40=type->mNoSolvedGenericsType->v1;
        type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(sType_clone(type));
        come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 0, 0, (void*)0);
        type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        type->mClass=new_class_120;
        list$1sTypeph_reset(type->mGenericsTypes);
        output_struct(new_class_120,info);
        come_call_finalizer3(type2_91,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(new_class_120,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(!map$2charphsClassph_find(info->classes,new_name_88)) {
            generics_class_176=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName);
            if(generics_class_176==((void*)0)) {
                err_msg(info,"generics_class(%s) is null",type->mClass->mName);
                __result104__ = (_Bool)0;
                new_name_88 = come_decrement_ref_count2(new_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result104__;
            }
            new_class_177=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value152=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 220, "sClass")))),new_name_88,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
            come_call_finalizer3(__right_value152,sClass_finalize, 0, 1, 0, 0, (void*)0);
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(__right_value154=__builtin_string(new_name_88)))),(struct sClass*)come_increment_ref_count(new_class_177));
            __right_value154 = come_decrement_ref_count2(__right_value154, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            existance_method_generics_178=(_Bool)0;
            i_179=0;
            for(            o2_saved_180=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_176->mFields)),it_181=list$1tuple2$2charphsTypephph_begin((o2_saved_180));            !list$1tuple2$2charphsTypephph_end((o2_saved_180));            it_181=list$1tuple2$2charphsTypephph_next((o2_saved_180))            ){
                multiple_assign_var4=it_181;
                name_182=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                type_183=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                new_type_184=(struct sType*)come_increment_ref_count(solve_generics(type_183,generics_type,info));
                if(is_contained_method_generics_types(new_type_184,info)) {
                }
                list$1tuple2$2charphsTypephph_push_back(new_class_177->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value159=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value158=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 235, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(__right_value156=string_clone(name_182)))),(struct sType*)come_increment_ref_count(((struct sType*)(__right_value157=sType_clone(new_type_184)))))))));
                __right_value156 = come_decrement_ref_count2(__right_value156, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value157,sType_finalize, 0, 1, 0, 0, (void*)0);
                __right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value159,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, (void*)0);
                name_182 = come_decrement_ref_count2(name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_183,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(new_type_184,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_180,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj41=type->mNoSolvedGenericsType->v1;
            type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(sType_clone(type));
            come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 0, 0, (void*)0);
            type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            type->mClass=new_class_177;
            list$1sTypeph_reset(type->mGenericsTypes);
            if(!existance_method_generics_178) {
                output_struct(new_class_177,info);
            }
            come_call_finalizer3(new_class_177,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(type->mNoSolvedGenericsType->v1==((void*)0)) {
                __dec_obj42=type->mNoSolvedGenericsType->v1;
                type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(sType_clone(type));
                come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
                type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            }
            type->mClass=map$2charphsClassphp_operator_load_element(info->classes,new_name_88);
            list$1sTypeph_reset(type->mGenericsTypes);
        }
    }
    __result105__ = (_Bool)1;
    new_name_88 = come_decrement_ref_count2(new_name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result105__;
}

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key){
unsigned int hash_89;
int it_90;
    hash_89=string_get_hash_key(((char*)key))%self->size;
    it_90=hash_89;
    while((_Bool)1) {
        if(self->item_existance[it_90]) {
            if(string_equals(self->keys[it_90],key)) {
                return (_Bool)1;
            }
            it_90++;
            if(it_90>=self->size) {
                it_90=0;
            }
            else {
                if(it_90==hash_89) {
                    return (_Bool)0;
                }
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
struct sType* __result56__;
void* __right_value98 = (void*)0;
struct sType* result_92;
void* __right_value105 = (void*)0;
struct list$1sTypeph* __dec_obj15;
void* __right_value108 = (void*)0;
struct tuple1$1sTypeph* __dec_obj17;
void* __right_value109 = (void*)0;
struct tuple1$1sTypeph* __dec_obj18;
void* __right_value110 = (void*)0;
char* __dec_obj19;
void* __right_value111 = (void*)0;
struct list$1sTypeph* __dec_obj20;
void* __right_value119 = (void*)0;
struct list$1sNodeph* __dec_obj24;
void* __right_value120 = (void*)0;
struct list$1sTypeph* __dec_obj25;
void* __right_value127 = (void*)0;
struct list$1charph* __dec_obj29;
void* __right_value128 = (void*)0;
struct tuple1$1sTypeph* __dec_obj30;
void* __right_value129 = (void*)0;
struct sNode* __dec_obj31;
void* __right_value130 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value131 = (void*)0;
char* __dec_obj33;
void* __right_value132 = (void*)0;
char* __dec_obj34;
struct sType* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_92, 0, sizeof(struct sType*));
    if(self==(void*)0) {
        __result56__ = __result_obj__ = (void*)0;
        return __result56__;
    }
    result_92=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_92->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
        __dec_obj15=result_92->mMultipleTypes;
        result_92->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mMultipleTypes));
        come_call_finalizer3(__dec_obj15,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj17=result_92->mNoSolvedGenericsType;
        result_92->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj17,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj18=result_92->mOriginalLoadVarType;
        result_92->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj19=result_92->mGenericsName;
        result_92->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj20=result_92->mGenericsTypes;
        result_92->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj24=result_92->mArrayNum;
        result_92->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_92->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj25=result_92->mParamTypes;
        result_92->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj29=result_92->mParamNames;
        result_92->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj30=result_92->mResultType;
        result_92->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_92->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj31=result_92->mAlignas;
        result_92->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_92->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result_92->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result_92->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result_92->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result_92->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result_92->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result_92->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result_92->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result_92->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result_92->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result_92->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result_92->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result_92->mImmutable=self->mImmutable;
    }
    if(self!=((void*)0)) {
        result_92->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result_92->mDummyHeap=self->mDummyHeap;
    }
    if(self!=((void*)0)) {
        result_92->mDelegate=self->mDelegate;
    }
    if(self!=((void*)0)) {
        result_92->mShare=self->mShare;
    }
    if(self!=((void*)0)) {
        result_92->mClone=self->mClone;
    }
    if(self!=((void*)0)) {
        result_92->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result_92->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result_92->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result_92->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result_92->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result_92->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(self!=((void*)0)) {
        result_92->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result_92->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj32=result_92->mSizeNum;
        result_92->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_92->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_92->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj33=result_92->mOriginalTypeName;
        result_92->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_92->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(self!=((void*)0)) {
        result_92->mFunctionParam=self->mFunctionParam;
    }
    if(self!=((void*)0)) {
        result_92->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result_92->mGenericsStruct=self->mGenericsStruct;
    }
    if(self!=((void*)0)) {
        result_92->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(self!=((void*)0)) {
        result_92->mComeMemCore=self->mComeMemCore;
    }
    if(self!=((void*)0)) {
        result_92->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result_92->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result_92->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj34=result_92->mAsmName;
        result_92->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_92->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)) {
        result_92->mLambdaArray=self->mLambdaArray;
    }
    if(self!=((void*)0)) {
        result_92->mNoNumberArray=self->mNoNumberArray;
    }
    __result73__ = __result_obj__ = result_92;
    come_call_finalizer3(result_92,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result73__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result57__;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
struct list$1sTypeph* result_93;
struct list_item$1sTypeph* it_94;
void* __right_value104 = (void*)0;
struct list$1sTypeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_93, 0, sizeof(struct list$1sTypeph*));
memset(&it_94, 0, sizeof(struct list_item$1sTypeph*));
    if(self==((void*)0)) {
        __result57__ = __result_obj__ = ((void*)0);
        return __result57__;
    }
    result_93=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value99=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))));
    come_call_finalizer3(__right_value99,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    it_94=self->head;
    while(it_94!=((void*)0)) {
        list$1sTypeph_add(result_93,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value104=sType_clone(it_94->item)))));
        come_call_finalizer3(__right_value104,sType_finalize, 0, 1, 0, 0, __result_obj__);
        it_94=it_94->next;
    }
    __result60__ = __result_obj__ = result_93;
    come_call_finalizer3(result_93,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result60__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result58__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result58__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* __right_value101 = (void*)0;
struct list_item$1sTypeph* litem_95;
struct sType* __dec_obj12;
void* __right_value102 = (void*)0;
struct list_item$1sTypeph* litem_96;
struct sType* __dec_obj13;
void* __right_value103 = (void*)0;
struct list_item$1sTypeph* litem_97;
struct sType* __dec_obj14;
struct list$1sTypeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_95, 0, sizeof(struct list_item$1sTypeph*));
memset(&litem_96, 0, sizeof(struct list_item$1sTypeph*));
memset(&litem_97, 0, sizeof(struct list_item$1sTypeph*));
    if(self->len==0) {
        litem_95=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value101=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
        come_call_finalizer3(__right_value101,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_95->prev=((void*)0);
        litem_95->next=((void*)0);
        __dec_obj12=litem_95->item;
        litem_95->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj12,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_95;
        self->head=litem_95;
    }
    else {
        if(self->len==1) {
            litem_96=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value102=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
            come_call_finalizer3(__right_value102,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_96->prev=self->head;
            litem_96->next=((void*)0);
            __dec_obj13=litem_96->item;
            litem_96->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_96;
            self->head->next=litem_96;
        }
        else {
            litem_97=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value103=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
            come_call_finalizer3(__right_value103,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_97->prev=self->tail;
            litem_97->next=((void*)0);
            __dec_obj14=litem_97->item;
            litem_97->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_97;
            self->tail=litem_97;
        }
    }
    self->len++;
    __result59__ = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result59__;
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_98;
struct list_item$1sTypeph* prev_it_99;
memset(&it_98, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_99, 0, sizeof(struct list_item$1sTypeph*));
    it_98=self->head;
    while(it_98!=((void*)0)) {
        prev_it_99=it_98;
        it_98=it_98->next;
        come_call_finalizer3(prev_it_99,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
struct tuple1$1sTypeph* __result61__;
void* __right_value106 = (void*)0;
struct tuple1$1sTypeph* result_100;
void* __right_value107 = (void*)0;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_100, 0, sizeof(struct tuple1$1sTypeph*));
    if(self==(void*)0) {
        __result61__ = __result_obj__ = (void*)0;
        return __result61__;
    }
    result_100=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj16=result_100->v1;
        result_100->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result62__ = __result_obj__ = result_100;
    come_call_finalizer3(result_100,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    return __result62__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result63__;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1sNodeph* result_101;
struct list_item$1sNodeph* it_102;
void* __right_value118 = (void*)0;
struct list$1sNodeph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_101, 0, sizeof(struct list$1sNodeph*));
memset(&it_102, 0, sizeof(struct list_item$1sNodeph*));
    if(self==((void*)0)) {
        __result63__ = __result_obj__ = ((void*)0);
        return __result63__;
    }
    result_101=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value112=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))));
    come_call_finalizer3(__right_value112,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    it_102=self->head;
    while(it_102!=((void*)0)) {
        list$1sNodeph_add(result_101,(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value118=sNode_clone(it_102->item)))));
        if(__right_value118) { __right_value118 = come_decrement_ref_count2(__right_value118, ((struct sNode*)__right_value118)->finalize, ((struct sNode*)__right_value118)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        it_102=it_102->next;
    }
    __result68__ = __result_obj__ = result_101;
    come_call_finalizer3(result_101,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result68__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result64__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result64__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* __right_value114 = (void*)0;
struct list_item$1sNodeph* litem_103;
struct sNode* __dec_obj21;
void* __right_value115 = (void*)0;
struct list_item$1sNodeph* litem_104;
struct sNode* __dec_obj22;
void* __right_value116 = (void*)0;
struct list_item$1sNodeph* litem_105;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_103, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_104, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_105, 0, sizeof(struct list_item$1sNodeph*));
    if(self->len==0) {
        litem_103=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value114=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
        come_call_finalizer3(__right_value114,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_103->prev=((void*)0);
        litem_103->next=((void*)0);
        __dec_obj21=litem_103->item;
        litem_103->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_103;
        self->head=litem_103;
    }
    else {
        if(self->len==1) {
            litem_104=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value115=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value115,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_104->prev=self->head;
            litem_104->next=((void*)0);
            __dec_obj22=litem_104->item;
            litem_104->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_104;
            self->head->next=litem_104;
        }
        else {
            litem_105=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value116=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value116,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_105->prev=self->tail;
            litem_105->next=((void*)0);
            __dec_obj23=litem_105->item;
            litem_105->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_105;
            self->tail=litem_105;
        }
    }
    self->len++;
    __result65__ = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result65__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
struct sNode* __result66__;
void* __right_value117 = (void*)0;
struct sNode* result_106;
struct sNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_106, 0, sizeof(struct sNode*));
    if(self==(void*)0) {
        __result66__ = __result_obj__ = (void*)0;
        return __result66__;
    }
    result_106=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_106->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_106->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_106->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_106->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_106->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_106->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_106->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result_106->kind=self->kind;
    }
    __result67__ = __result_obj__ = result_106;
    if(result_106) { result_106 = come_decrement_ref_count2(result_106, ((struct sNode*)result_106)->finalize, ((struct sNode*)result_106)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result67__;
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_107;
struct list_item$1sNodeph* prev_it_108;
memset(&it_107, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_108, 0, sizeof(struct list_item$1sNodeph*));
    it_107=self->head;
    while(it_107!=((void*)0)) {
        prev_it_108=it_107;
        it_107=it_107->next;
        come_call_finalizer3(prev_it_108,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result69__;
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
struct list$1charph* result_109;
struct list_item$1charph* it_110;
void* __right_value126 = (void*)0;
struct list$1charph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_109, 0, sizeof(struct list$1charph*));
memset(&it_110, 0, sizeof(struct list_item$1charph*));
    if(self==((void*)0)) {
        __result69__ = __result_obj__ = ((void*)0);
        return __result69__;
    }
    result_109=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value121=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))));
    come_call_finalizer3(__right_value121,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    it_110=self->head;
    while(it_110!=((void*)0)) {
        list$1charph_add(result_109,(char*)come_increment_ref_count(((char*)(__right_value126=string_clone(it_110->item)))));
        __right_value126 = come_decrement_ref_count2(__right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        it_110=it_110->next;
    }
    __result72__ = __result_obj__ = result_109;
    come_call_finalizer3(result_109,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result72__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result70__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result70__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
void* __right_value123 = (void*)0;
struct list_item$1charph* litem_111;
char* __dec_obj26;
void* __right_value124 = (void*)0;
struct list_item$1charph* litem_112;
char* __dec_obj27;
void* __right_value125 = (void*)0;
struct list_item$1charph* litem_113;
char* __dec_obj28;
struct list$1charph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_111, 0, sizeof(struct list_item$1charph*));
memset(&litem_112, 0, sizeof(struct list_item$1charph*));
memset(&litem_113, 0, sizeof(struct list_item$1charph*));
    if(self->len==0) {
        litem_111=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value123=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
        come_call_finalizer3(__right_value123,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_111->prev=((void*)0);
        litem_111->next=((void*)0);
        __dec_obj26=litem_111->item;
        litem_111->item=(char*)come_increment_ref_count(item);
        __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_111;
        self->head=litem_111;
    }
    else {
        if(self->len==1) {
            litem_112=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value124=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
            come_call_finalizer3(__right_value124,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_112->prev=self->head;
            litem_112->next=((void*)0);
            __dec_obj27=litem_112->item;
            litem_112->item=(char*)come_increment_ref_count(item);
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_112;
            self->head->next=litem_112;
        }
        else {
            litem_113=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value125=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
            come_call_finalizer3(__right_value125,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_113->prev=self->tail;
            litem_113->next=((void*)0);
            __dec_obj28=litem_113->item;
            litem_113->item=(char*)come_increment_ref_count(item);
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_113;
            self->tail=litem_113;
        }
    }
    self->len++;
    __result71__ = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result71__;
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_114;
struct list_item$1charph* prev_it_115;
memset(&it_114, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_115, 0, sizeof(struct list_item$1charph*));
    it_114=self->head;
    while(it_114!=((void*)0)) {
        prev_it_115=it_114;
        it_114=it_114->next;
        come_call_finalizer3(prev_it_115,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_117;
unsigned int hash_118;
unsigned int it_119;
struct sClass* __result74__;
struct sClass* __result75__;
struct sClass* __result76__;
struct sClass* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_117, 0, sizeof(struct sClass*));
    memset(&default_value_117,0,sizeof(struct sClass*));
    hash_118=string_get_hash_key(((char*)key))%self->size;
    it_119=hash_118;
    while((_Bool)1) {
        if(self->item_existance[it_119]) {
            if(string_equals(self->keys[it_119],key)) {
                __result74__ = __result_obj__ = self->items[it_119];
                come_call_finalizer3(default_value_117,sClass_finalize, 0, 0, 0, 0, (void*)0);
                return __result74__;
            }
            it_119++;
            if(it_119>=self->size) {
                it_119=0;
            }
            else {
                if(it_119==hash_118) {
                    __result75__ = __result_obj__ = default_value_117;
                    come_call_finalizer3(default_value_117,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    return __result75__;
                }
            }
        }
        else {
            __result76__ = __result_obj__ = default_value_117;
            come_call_finalizer3(default_value_117,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result76__;
        }
    }
    __result77__ = __result_obj__ = default_value_117;
    come_call_finalizer3(default_value_117,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result77__;
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

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
unsigned int hash_138;
unsigned int it_139;
_Bool same_key_exist_156;
char* it2_159;
struct map$2charphsClassph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_138=string_get_hash_key(key)%self->size;
    it_139=hash_138;
    while((_Bool)1) {
        if(self->item_existance[it_139]) {
            if(string_equals(self->keys[it_139],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_139]);
                    self->keys[it_139] = come_decrement_ref_count2(self->keys[it_139], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_139]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_139]);
                    self->keys[it_139]=key;
                }
                if(1) {
                    come_call_finalizer3(self->items[it_139],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_139]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_139]=item;
                }
                break;
            }
            it_139++;
            if(it_139>=self->size) {
                it_139=0;
            }
            else {
                if(it_139==hash_138) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_139]=(_Bool)1;
            if(1) {
                self->keys[it_139]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_139]=key;
            }
            if(1) {
                self->items[it_139]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_139]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_156=(_Bool)0;
    for(    it2_159=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_159=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_159,key)) {
            same_key_exist_156=(_Bool)1;
        }
    }
    if(!same_key_exist_156) {
        list$1charp_push_back(self->key_list,key);
    }
    __result100__ = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result100__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_121;
void* __right_value136 = (void*)0;
char** keys_122;
void* __right_value137 = (void*)0;
struct sClass** items_123;
void* __right_value138 = (void*)0;
_Bool* item_existance_124;
int len_125;
char* it_128;
struct sClass* default_value_131;
struct sClass* it2_132;
unsigned int hash_135;
int n_136;
struct sClass* default_value_137;
memset(&items_123, 0, sizeof(struct sClass**));
memset(&default_value_131, 0, sizeof(struct sClass*));
memset(&it2_132, 0, sizeof(struct sClass*));
memset(&default_value_137, 0, sizeof(struct sClass*));
    size_121=self->size*10;
    keys_122=(char**)come_increment_ref_count(((char**)(__right_value136=(char**)come_calloc(1, sizeof(char*)*(1*(size_121)), "./neo-c.h", 1315, "char*%"))));
    __right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    items_123=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value137=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_121)), "./neo-c.h", 1316, "sClass*%"))));
    come_call_finalizer3(__right_value137,sClass_finalize, 0, 1, 0, 0, (void*)0);
    item_existance_124=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value138=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_121)), "./neo-c.h", 1317, "bool"))));
    __right_value138 = come_decrement_ref_count2(__right_value138, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    len_125=0;
    for(    it_128=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_128=map$2charphsClassph_next(self)    ){
        memset(&default_value_131,0,sizeof(struct sClass*));
        it2_132=map$2charphsClassph_at(self,it_128,default_value_131);
        hash_135=string_get_hash_key(it_128)%size_121;
        n_136=hash_135;
        while((_Bool)1) {
            if(item_existance_124[n_136]) {
                n_136++;
                if(n_136>=size_121) {
                    n_136=0;
                }
                else {
                    if(n_136==hash_135) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_124[n_136]=(_Bool)1;
                keys_122[n_136]=it_128;
                items_123[n_136]=map$2charphsClassph_at(self,it_128,default_value_137);
                len_125++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_122;
    self->items=items_123;
    self->item_existance=item_existance_124;
    self->size=size_121;
    self->len=len_125;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
char* result_126;
char* __result79__;
char* __result80__;
char* result_127;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_126, 0, sizeof(char*));
memset(&result_127, 0, sizeof(char*));
    if(self==((void*)0)) {
        memset(&result_126,0,sizeof(char*));
        __result79__ = __result_obj__ = result_126;
        return __result79__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result80__ = __result_obj__ = self->key_list->it->item;
        return __result80__;
    }
    memset(&result_127,0,sizeof(char*));
    __result81__ = __result_obj__ = result_127;
    return __result81__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
char* result_129;
char* __result82__;
char* __result83__;
char* result_130;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_129, 0, sizeof(char*));
memset(&result_130, 0, sizeof(char*));
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_129,0,sizeof(char*));
        __result82__ = __result_obj__ = result_129;
        return __result82__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result83__ = __result_obj__ = self->key_list->it->item;
        return __result83__;
    }
    memset(&result_130,0,sizeof(char*));
    __result84__ = __result_obj__ = result_130;
    return __result84__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_133;
unsigned int it_134;
struct sClass* __result85__;
struct sClass* __result86__;
struct sClass* __result87__;
struct sClass* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    hash_133=string_get_hash_key(((char*)key))%self->size;
    it_134=hash_133;
    while((_Bool)1) {
        if(self->item_existance[it_134]) {
            if(string_equals(self->keys[it_134],key)) {
                __result85__ = __result_obj__ = self->items[it_134];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result85__;
            }
            it_134++;
            if(it_134>=self->size) {
                it_134=0;
            }
            else {
                if(it_134==hash_133) {
                    __result86__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    return __result86__;
                }
            }
        }
        else {
            __result87__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result87__;
        }
    }
    __result88__ = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result88__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_140;
struct list_item$1charp* it_141;
struct list$1charp* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_141, 0, sizeof(struct list_item$1charp*));
    it2_140=0;
    it_141=self->head;
    while(it_141!=((void*)0)) {
        if(string_equals(it_141->item,item)) {
            list$1charp_delete(self,it2_140,it2_140+1);
            break;
        }
        it2_140++;
        it_141=it_141->next;
    }
    __result92__ = __result_obj__ = self;
    return __result92__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
int tmp_142;
struct list$1charp* __result89__;
struct list_item$1charp* it_145;
int i_146;
struct list_item$1charp* prev_it_147;
struct list_item$1charp* it_148;
int i_149;
struct list_item$1charp* prev_it_150;
struct list_item$1charp* it_151;
struct list_item$1charp* head_prev_it_152;
struct list_item$1charp* tail_it_153;
int i_154;
struct list_item$1charp* prev_it_155;
struct list$1charp* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_145, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_147, 0, sizeof(struct list_item$1charp*));
memset(&it_148, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_150, 0, sizeof(struct list_item$1charp*));
memset(&it_151, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_152, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_153, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_155, 0, sizeof(struct list_item$1charp*));
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_142=tail;
        tail=head;
        head=tmp_142;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head==tail) {
        __result89__ = __result_obj__ = self;
        return __result89__;
    }
    if(head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else {
        if(head==0) {
            it_145=self->head;
            i_146=0;
            while(it_145!=((void*)0)) {
                if(i_146<tail) {
                    prev_it_147=it_145;
                    it_145=it_145->next;
                    i_146++;
                    come_call_finalizer3(prev_it_147,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_146==tail) {
                        self->head=it_145;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_145=it_145->next;
                        i_146++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_148=self->head;
                i_149=0;
                while(it_148!=((void*)0)) {
                    if(i_149==head) {
                        self->tail=it_148->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_149>=head) {
                        prev_it_150=it_148;
                        it_148=it_148->next;
                        i_149++;
                        come_call_finalizer3(prev_it_150,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_148=it_148->next;
                        i_149++;
                    }
                }
            }
            else {
                it_151=self->head;
                head_prev_it_152=((void*)0);
                tail_it_153=((void*)0);
                i_154=0;
                while(it_151!=((void*)0)) {
                    if(i_154==head) {
                        head_prev_it_152=it_151->prev;
                    }
                    if(i_154==tail) {
                        tail_it_153=it_151;
                    }
                    if(i_154>=head&&i_154<tail) {
                        prev_it_155=it_151;
                        it_151=it_151->next;
                        i_154++;
                        come_call_finalizer3(prev_it_155,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_151=it_151->next;
                        i_154++;
                    }
                }
                if(head_prev_it_152!=((void*)0)) {
                    head_prev_it_152->next=tail_it_153;
                }
                if(tail_it_153!=((void*)0)) {
                    tail_it_153->prev=head_prev_it_152;
                }
            }
        }
    }
    __result91__ = __result_obj__ = self;
    return __result91__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_143;
struct list_item$1charp* prev_it_144;
struct list$1charp* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_143, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_144, 0, sizeof(struct list_item$1charp*));
    it_143=self->head;
    while(it_143!=((void*)0)) {
        prev_it_144=it_143;
        it_143=it_143->next;
        come_call_finalizer3(prev_it_144,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result90__ = __result_obj__ = self;
    return __result90__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
char* result_157;
char* __result93__;
char* __result94__;
char* result_158;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_157, 0, sizeof(char*));
memset(&result_158, 0, sizeof(char*));
    if(self==((void*)0)) {
        memset(&result_157,0,sizeof(char*));
        __result93__ = __result_obj__ = result_157;
        return __result93__;
    }
    self->it=self->head;
    if(self->it) {
        __result94__ = __result_obj__ = self->it->item;
        return __result94__;
    }
    memset(&result_158,0,sizeof(char*));
    __result95__ = __result_obj__ = result_158;
    return __result95__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
char* result_160;
char* __result96__;
char* __result97__;
char* result_161;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_160, 0, sizeof(char*));
memset(&result_161, 0, sizeof(char*));
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_160,0,sizeof(char*));
        __result96__ = __result_obj__ = result_160;
        return __result96__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result97__ = __result_obj__ = self->it->item;
        return __result97__;
    }
    memset(&result_161,0,sizeof(char*));
    __result98__ = __result_obj__ = result_161;
    return __result98__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
void* __right_value139 = (void*)0;
struct list_item$1charp* litem_162;
void* __right_value140 = (void*)0;
struct list_item$1charp* litem_163;
void* __right_value141 = (void*)0;
struct list_item$1charp* litem_164;
struct list$1charp* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_162, 0, sizeof(struct list_item$1charp*));
memset(&litem_163, 0, sizeof(struct list_item$1charp*));
memset(&litem_164, 0, sizeof(struct list_item$1charp*));
    if(self->len==0) {
        litem_162=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value139=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 219, "list_item$1charp"))));
        come_call_finalizer3(__right_value139,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_162->prev=((void*)0);
        litem_162->next=((void*)0);
        litem_162->item=item;
        self->tail=litem_162;
        self->head=litem_162;
    }
    else {
        if(self->len==1) {
            litem_163=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value140=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 229, "list_item$1charp"))));
            come_call_finalizer3(__right_value140,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_163->prev=self->head;
            litem_163->next=((void*)0);
            litem_163->item=item;
            self->tail=litem_163;
            self->head->next=litem_163;
        }
        else {
            litem_164=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value141=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 239, "list_item$1charp"))));
            come_call_finalizer3(__right_value141,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_164->prev=self->tail;
            litem_164->next=((void*)0);
            litem_164->item=item;
            self->tail->next=litem_164;
            self->tail=litem_164;
        }
    }
    self->len++;
    __result99__ = __result_obj__ = self;
    return __result99__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
void* __right_value144 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_171;
struct tuple2$2charphsTypeph* __dec_obj35;
void* __right_value145 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_172;
struct tuple2$2charphsTypeph* __dec_obj36;
void* __right_value146 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_173;
struct tuple2$2charphsTypeph* __dec_obj37;
struct list$1tuple2$2charphsTypephph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_171, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&litem_172, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&litem_173, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
    if(self->len==0) {
        litem_171=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value144=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 219, "list_item$1tuple2$2charphsTypephph"))));
        come_call_finalizer3(__right_value144,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_171->prev=((void*)0);
        litem_171->next=((void*)0);
        __dec_obj35=litem_171->item;
        litem_171->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj35,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_171;
        self->head=litem_171;
    }
    else {
        if(self->len==1) {
            litem_172=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value145=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 229, "list_item$1tuple2$2charphsTypephph"))));
            come_call_finalizer3(__right_value145,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_172->prev=self->head;
            litem_172->next=((void*)0);
            __dec_obj36=litem_172->item;
            litem_172->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj36,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_172;
            self->head->next=litem_172;
        }
        else {
            litem_173=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value146=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 239, "list_item$1tuple2$2charphsTypephph"))));
            come_call_finalizer3(__right_value146,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_173->prev=self->tail;
            litem_173->next=((void*)0);
            __dec_obj37=litem_173->item;
            litem_173->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj37,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_173;
            self->tail=litem_173;
        }
    }
    self->len++;
    __result101__ = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result101__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj38;
struct sType* __dec_obj39;
struct tuple2$2charphsTypeph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
    __dec_obj38=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj39=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result102__ = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result102__;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_174;
struct list_item$1sTypeph* prev_it_175;
struct list$1sTypeph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_174, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_175, 0, sizeof(struct list_item$1sTypeph*));
    it_174=self->head;
    while(it_174!=((void*)0)) {
        prev_it_175=it_174;
        it_174=it_174->next;
        come_call_finalizer3(prev_it_175,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result103__ = __result_obj__ = self;
    return __result103__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info){
void* __result_obj__;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
char* __dec_obj43;
void* __right_value178 = (void*)0;
struct sClass* __dec_obj53;
struct sStructNode* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value162=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value162,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj43=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj53=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    come_call_finalizer3(__dec_obj53,sClass_finalize, 0, 0, 0, 0, (void*)0);
    self->mOutput=output;
    __result114__ = __result_obj__ = self;
    come_call_finalizer3(self,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result114__;
}

_Bool sStructNode_terminated(struct sStructNode* self){
    return (_Bool)1;
}

char* sStructNode_kind(struct sStructNode* self){
void* __result_obj__;
void* __right_value179 = (void*)0;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
    __result115__ = __result_obj__ = ((char*)(__right_value179=__builtin_string("sStructNode")));
    __right_value179 = come_decrement_ref_count2(__right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result115__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
void* __right_value180 = (void*)0;
struct sClass* klass_194;
void* __right_value181 = (void*)0;
char* name_195;
void* __right_value182 = (void*)0;
struct sClass* klass2_196;
void* __right_value183 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj54;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
struct sType* type_197;
void* __right_value189 = (void*)0;
_Bool __result127__;
memset(&klass_194, 0, sizeof(struct sClass*));
memset(&klass2_196, 0, sizeof(struct sClass*));
memset(&type_197, 0, sizeof(struct sType*));
    klass_194=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
    name_195=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(map$2charphsClassph_at(info->classes,name_195,((void*)0))==((void*)0)) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_195),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value182=sClass_clone(klass_194)))));
        come_call_finalizer3(__right_value182,sClass_finalize, 0, 1, 0, 0, (void*)0);
    }
    else {
        if(list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,name_195,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_194->mFields)>0) {
            klass2_196=map$2charphsClassph_at(info->classes,name_195,((void*)0));
            __dec_obj54=klass2_196->mFields;
            klass2_196->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephphp_clone(klass_194->mFields));
            come_call_finalizer3(__dec_obj54,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    type_197=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value184=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 294, "sType")))),name_195,(_Bool)0,info));
    come_call_finalizer3(__right_value184,sType_finalize, 0, 1, 0, 0, (void*)0);
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_195),(struct sType*)come_increment_ref_count(((struct sType*)(__right_value189=sType_clone(type_197)))));
    come_call_finalizer3(__right_value189,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(self->mOutput) {
        output_struct(klass_194,info);
    }
    __result127__ = (_Bool)1;
    come_call_finalizer3(klass_194,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_195 = come_decrement_ref_count2(name_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_197,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result127__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
struct sClass* __result106__;
void* __right_value164 = (void*)0;
struct sClass* result_185;
void* __right_value165 = (void*)0;
char* __dec_obj44;
void* __right_value175 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj50;
void* __right_value176 = (void*)0;
char* __dec_obj51;
void* __right_value177 = (void*)0;
char* __dec_obj52;
struct sClass* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_185, 0, sizeof(struct sClass*));
    if(self==(void*)0) {
        __result106__ = __result_obj__ = (void*)0;
        return __result106__;
    }
    result_185=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"));
    if(self!=((void*)0)) {
        result_185->mStruct=self->mStruct;
    }
    if(self!=((void*)0)) {
        result_185->mFloat=self->mFloat;
    }
    if(self!=((void*)0)) {
        result_185->mUnion=self->mUnion;
    }
    if(self!=((void*)0)) {
        result_185->mGenerics=self->mGenerics;
    }
    if(self!=((void*)0)) {
        result_185->mMethodGenerics=self->mMethodGenerics;
    }
    if(self!=((void*)0)) {
        result_185->mEnum=self->mEnum;
    }
    if(self!=((void*)0)) {
        result_185->mProtocol=self->mProtocol;
    }
    if(self!=((void*)0)) {
        result_185->mNumber=self->mNumber;
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj44=result_185->mName;
        result_185->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_185->mGenericsNum=self->mGenericsNum;
    }
    if(self!=((void*)0)) {
        result_185->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj50=result_185->mFields;
        result_185->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephphp_clone(self->mFields));
        come_call_finalizer3(__dec_obj50,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_185->mOutputed=self->mOutputed;
    }
    if(self!=((void*)0)) {
        result_185->mOutputed2=self->mOutputed2;
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj51=result_185->mDeclareSName;
        result_185->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_185->mNobodyStruct=self->mNobodyStruct;
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj52=result_185->mParentClassName;
        result_185->mParentClassName=(char*)come_increment_ref_count(string_clone(self->mParentClassName));
        __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result113__ = __result_obj__ = result_185;
    come_call_finalizer3(result_185,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result113__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result107__;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
struct list$1tuple2$2charphsTypephph* result_186;
struct list_item$1tuple2$2charphsTypephph* it_187;
void* __right_value174 = (void*)0;
struct list$1tuple2$2charphsTypephph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_186, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_187, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
    if(self==((void*)0)) {
        __result107__ = __result_obj__ = ((void*)0);
        return __result107__;
    }
    result_186=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(__right_value166=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 135, "list$1tuple2$2charphsTypephph"))))));
    come_call_finalizer3(__right_value166,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
    it_187=self->head;
    while(it_187!=((void*)0)) {
        list$1tuple2$2charphsTypephph_add(result_186,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value174=tuple2$2charphsTypephp_clone(it_187->item)))));
        come_call_finalizer3(__right_value174,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        it_187=it_187->next;
    }
    __result112__ = __result_obj__ = result_186;
    come_call_finalizer3(result_186,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result112__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result108__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result108__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
void* __right_value168 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_188;
struct tuple2$2charphsTypeph* __dec_obj45;
void* __right_value169 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_189;
struct tuple2$2charphsTypeph* __dec_obj46;
void* __right_value170 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_190;
struct tuple2$2charphsTypeph* __dec_obj47;
struct list$1tuple2$2charphsTypephph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_188, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&litem_189, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&litem_190, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
    if(self->len==0) {
        litem_188=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value168=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 149, "list_item$1tuple2$2charphsTypephph"))));
        come_call_finalizer3(__right_value168,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_188->prev=((void*)0);
        litem_188->next=((void*)0);
        __dec_obj45=litem_188->item;
        litem_188->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj45,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_188;
        self->head=litem_188;
    }
    else {
        if(self->len==1) {
            litem_189=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value169=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 159, "list_item$1tuple2$2charphsTypephph"))));
            come_call_finalizer3(__right_value169,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_189->prev=self->head;
            litem_189->next=((void*)0);
            __dec_obj46=litem_189->item;
            litem_189->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj46,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_189;
            self->head->next=litem_189;
        }
        else {
            litem_190=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value170=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 169, "list_item$1tuple2$2charphsTypephph"))));
            come_call_finalizer3(__right_value170,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_190->prev=self->tail;
            litem_190->next=((void*)0);
            __dec_obj47=litem_190->item;
            litem_190->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj47,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_190;
            self->tail=litem_190;
        }
    }
    self->len++;
    __result109__ = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result109__;
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
struct tuple2$2charphsTypeph* __result110__;
void* __right_value171 = (void*)0;
struct tuple2$2charphsTypeph* result_191;
void* __right_value172 = (void*)0;
char* __dec_obj48;
void* __right_value173 = (void*)0;
struct sType* __dec_obj49;
struct tuple2$2charphsTypeph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_191, 0, sizeof(struct tuple2$2charphsTypeph*));
    if(self==(void*)0) {
        __result110__ = __result_obj__ = (void*)0;
        return __result110__;
    }
    result_191=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj48=result_191->v1;
        result_191->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj49=result_191->v2;
        result_191->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result111__ = __result_obj__ = result_191;
    come_call_finalizer3(result_191,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    return __result111__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_192;
struct list_item$1tuple2$2charphsTypephph* prev_it_193;
memset(&it_192, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_193, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
    it_192=self->head;
    while(it_192!=((void*)0)) {
        prev_it_193=it_192;
        it_192=it_192->next;
        come_call_finalizer3(prev_it_193,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
unsigned int hash_215;
unsigned int it_216;
_Bool same_key_exist_217;
char* it2_218;
struct map$2charphsTypeph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->len*10>=self->size) {
        map$2charphsTypeph_rehash(self);
    }
    hash_215=string_get_hash_key(key)%self->size;
    it_216=hash_215;
    while((_Bool)1) {
        if(self->item_existance[it_216]) {
            if(string_equals(self->keys[it_216],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_216]);
                    self->keys[it_216] = come_decrement_ref_count2(self->keys[it_216], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_216]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_216]);
                    self->keys[it_216]=key;
                }
                if(1) {
                    come_call_finalizer3(self->items[it_216],sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_216]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_216]=item;
                }
                break;
            }
            it_216++;
            if(it_216>=self->size) {
                it_216=0;
            }
            else {
                if(it_216==hash_215) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_216]=(_Bool)1;
            if(1) {
                self->keys[it_216]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_216]=key;
            }
            if(1) {
                self->items[it_216]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_216]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_217=(_Bool)0;
    for(    it2_218=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_218=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_218,key)) {
            same_key_exist_217=(_Bool)1;
        }
    }
    if(!same_key_exist_217) {
        list$1charp_push_back(self->key_list,key);
    }
    __result126__ = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result126__;
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
int size_198;
void* __right_value186 = (void*)0;
char** keys_199;
void* __right_value187 = (void*)0;
struct sType** items_200;
void* __right_value188 = (void*)0;
_Bool* item_existance_201;
int len_202;
char* it_205;
struct sType* default_value_208;
struct sType* it2_209;
unsigned int hash_212;
int n_213;
struct sType* default_value_214;
memset(&items_200, 0, sizeof(struct sType**));
memset(&default_value_208, 0, sizeof(struct sType*));
memset(&it2_209, 0, sizeof(struct sType*));
memset(&default_value_214, 0, sizeof(struct sType*));
    size_198=self->size*10;
    keys_199=(char**)come_increment_ref_count(((char**)(__right_value186=(char**)come_calloc(1, sizeof(char*)*(1*(size_198)), "./neo-c.h", 1315, "char*%"))));
    __right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    items_200=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value187=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_198)), "./neo-c.h", 1316, "sType*%"))));
    come_call_finalizer3(__right_value187,sType_finalize, 0, 1, 0, 0, (void*)0);
    item_existance_201=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value188=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_198)), "./neo-c.h", 1317, "bool"))));
    __right_value188 = come_decrement_ref_count2(__right_value188, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    len_202=0;
    for(    it_205=map$2charphsTypeph_begin(self);    !map$2charphsTypeph_end(self);    it_205=map$2charphsTypeph_next(self)    ){
        memset(&default_value_208,0,sizeof(struct sType*));
        it2_209=map$2charphsTypeph_at(self,it_205,default_value_208);
        hash_212=string_get_hash_key(it_205)%size_198;
        n_213=hash_212;
        while((_Bool)1) {
            if(item_existance_201[n_213]) {
                n_213++;
                if(n_213>=size_198) {
                    n_213=0;
                }
                else {
                    if(n_213==hash_212) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_201[n_213]=(_Bool)1;
                keys_199[n_213]=it_205;
                items_200[n_213]=map$2charphsTypeph_at(self,it_205,default_value_214);
                len_202++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_199;
    self->items=items_200;
    self->item_existance=item_existance_201;
    self->size=size_198;
    self->len=len_202;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
char* result_203;
char* __result116__;
char* __result117__;
char* result_204;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_203, 0, sizeof(char*));
memset(&result_204, 0, sizeof(char*));
    if(self==((void*)0)) {
        memset(&result_203,0,sizeof(char*));
        __result116__ = __result_obj__ = result_203;
        return __result116__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result117__ = __result_obj__ = self->key_list->it->item;
        return __result117__;
    }
    memset(&result_204,0,sizeof(char*));
    __result118__ = __result_obj__ = result_204;
    return __result118__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
char* result_206;
char* __result119__;
char* __result120__;
char* result_207;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_206, 0, sizeof(char*));
memset(&result_207, 0, sizeof(char*));
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_206,0,sizeof(char*));
        __result119__ = __result_obj__ = result_206;
        return __result119__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result120__ = __result_obj__ = self->key_list->it->item;
        return __result120__;
    }
    memset(&result_207,0,sizeof(char*));
    __result121__ = __result_obj__ = result_207;
    return __result121__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_210;
unsigned int it_211;
struct sType* __result122__;
struct sType* __result123__;
struct sType* __result124__;
struct sType* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    hash_210=string_get_hash_key(((char*)key))%self->size;
    it_211=hash_210;
    while((_Bool)1) {
        if(self->item_existance[it_211]) {
            if(string_equals(self->keys[it_211],key)) {
                __result122__ = __result_obj__ = self->items[it_211];
                come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                return __result122__;
            }
            it_211++;
            if(it_211>=self->size) {
                it_211=0;
            }
            else {
                if(it_211==hash_210) {
                    __result123__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result123__;
                }
            }
        }
        else {
            __result124__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result124__;
        }
    }
    __result125__ = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result125__;
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
char* __dec_obj55;
void* __right_value192 = (void*)0;
struct sClass* __dec_obj56;
struct sStructNobodyNode* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value190=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value190,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj55=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj56=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    come_call_finalizer3(__dec_obj56,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __result128__ = __result_obj__ = self;
    come_call_finalizer3(self,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result128__;
}

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self){
    return (_Bool)1;
}

char* sStructNobodyNode_kind(struct sStructNobodyNode* self){
void* __result_obj__;
void* __right_value193 = (void*)0;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    __result129__ = __result_obj__ = ((char*)(__right_value193=__builtin_string("sStructNobodyNode")));
    __right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result129__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __right_value194 = (void*)0;
char* name_219;
struct sClass* klass_220;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct sType* type_221;
void* __right_value198 = (void*)0;
_Bool __result130__;
memset(&klass_220, 0, sizeof(struct sClass*));
memset(&type_221, 0, sizeof(struct sType*));
    name_219=(char*)come_increment_ref_count(__builtin_string(self->mName));
    klass_220=self->mClass;
    if(map$2charphsClassph_at(info->classes,name_219,((void*)0))==((void*)0)) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_219),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value195=sClass_clone(klass_220)))));
        come_call_finalizer3(__right_value195,sClass_finalize, 0, 1, 0, 0, (void*)0);
    }
    type_221=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value196=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 334, "sType")))),name_219,(_Bool)0,info));
    come_call_finalizer3(__right_value196,sType_finalize, 0, 1, 0, 0, (void*)0);
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_219),(struct sType*)come_increment_ref_count(((struct sType*)(__right_value198=sType_clone(type_221)))));
    come_call_finalizer3(__right_value198,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(info->output_header_file&&string_operator_not_equals(klass_220->mDeclareSName,info->base_sname)) {
    }
    else {
        add_come_code_at_source_head(info,"struct %s;\n",name_219);
    }
    __result130__ = (_Bool)1;
    name_219 = come_decrement_ref_count2(name_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_221,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result130__;
}

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
void* __right_value199 = (void*)0;
struct sGenericsStructNode* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value199=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value199,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result131__ = __result_obj__ = self;
    come_call_finalizer3(self,sGenericsStructNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result131__;
}

_Bool sGenericsStructNode_terminated(struct sGenericsStructNode* self){
    return (_Bool)1;
}

char* sGenericsStructNode_kind(struct sGenericsStructNode* self){
void* __result_obj__;
void* __right_value200 = (void*)0;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
    __result132__ = __result_obj__ = ((char*)(__right_value200=__builtin_string("sGenericsStructNode")));
    __right_value200 = come_decrement_ref_count2(__right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result132__;
}

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info){
    return (_Bool)1;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, _Bool output, struct sInfo* info){
void* __result_obj__;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
char* __dec_obj57;
void* __right_value203 = (void*)0;
struct sClass* __dec_obj58;
struct list$1sNodeph* __dec_obj59;
struct sClassNode* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value201=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value201,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj57=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj58=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    come_call_finalizer3(__dec_obj58,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj59=self->mMethods;
    self->mMethods=(struct list$1sNodeph*)come_increment_ref_count(methods);
    come_call_finalizer3(__dec_obj59,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mOutput=output;
    __result133__ = __result_obj__ = self;
    come_call_finalizer3(self,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(methods,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result133__;
}

_Bool sClassNode_terminated(struct sClassNode* self){
    return (_Bool)1;
}

char* sClassNode_kind(struct sClassNode* self){
void* __result_obj__;
void* __right_value204 = (void*)0;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
    __result134__ = __result_obj__ = ((char*)(__right_value204=__builtin_string("sClassNode")));
    __right_value204 = come_decrement_ref_count2(__right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result134__;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
void* __right_value205 = (void*)0;
struct sClass* klass_222;
void* __right_value206 = (void*)0;
char* name_223;
void* __right_value207 = (void*)0;
struct sClass* klass2_224;
void* __right_value208 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj60;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
struct sType* type_225;
void* __right_value211 = (void*)0;
struct list$1sNodeph* o2_saved_226;
struct sNode* it_229;
_Bool __result141__;
_Bool __result142__;
memset(&klass_222, 0, sizeof(struct sClass*));
memset(&klass2_224, 0, sizeof(struct sClass*));
memset(&type_225, 0, sizeof(struct sType*));
memset(&o2_saved_226, 0, sizeof(struct list$1sNodeph*));
memset(&it_229, 0, sizeof(struct sNode*));
    klass_222=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
    name_223=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(map$2charphsClassph_at(info->classes,name_223,((void*)0))==((void*)0)) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_223),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value207=sClass_clone(klass_222)))));
        come_call_finalizer3(__right_value207,sClass_finalize, 0, 1, 0, 0, (void*)0);
    }
    else {
        if(list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,name_223,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_222->mFields)>0) {
            klass2_224=map$2charphsClassph_at(info->classes,name_223,((void*)0));
            __dec_obj60=klass2_224->mFields;
            klass2_224->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephphp_clone(klass_222->mFields));
            come_call_finalizer3(__dec_obj60,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    type_225=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value209=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 409, "sType")))),name_223,(_Bool)0,info));
    come_call_finalizer3(__right_value209,sType_finalize, 0, 1, 0, 0, (void*)0);
    map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_223),(struct sType*)come_increment_ref_count(((struct sType*)(__right_value211=sType_clone(type_225)))));
    come_call_finalizer3(__right_value211,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(self->mOutput) {
        output_struct(klass_222,info);
    }
    for(    o2_saved_226=(struct list$1sNodeph*)come_increment_ref_count((self->mMethods)),it_229=list$1sNodeph_begin((o2_saved_226));    !list$1sNodeph_end((o2_saved_226));    it_229=list$1sNodeph_next((o2_saved_226))    ){
        if(!node_compile(it_229,info)) {
            __result141__ = (_Bool)0;
            come_call_finalizer3(o2_saved_226,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(klass_222,sClass_finalize, 0, 0, 0, 0, (void*)0);
            name_223 = come_decrement_ref_count2(name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_225,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result141__;
        }
    }
    come_call_finalizer3(o2_saved_226,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    __result142__ = (_Bool)1;
    come_call_finalizer3(klass_222,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_223 = come_decrement_ref_count2(name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_225,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result142__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_227;
struct sNode* __result135__;
struct sNode* __result136__;
struct sNode* result_228;
struct sNode* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_227, 0, sizeof(struct sNode*));
memset(&result_228, 0, sizeof(struct sNode*));
    if(self==((void*)0)) {
        memset(&result_227,0,sizeof(struct sNode*));
        __result135__ = __result_obj__ = result_227;
        return __result135__;
    }
    self->it=self->head;
    if(self->it) {
        __result136__ = __result_obj__ = self->it->item;
        return __result136__;
    }
    memset(&result_228,0,sizeof(struct sNode*));
    __result137__ = __result_obj__ = result_228;
    return __result137__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_230;
struct sNode* __result138__;
struct sNode* __result139__;
struct sNode* result_231;
struct sNode* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_230, 0, sizeof(struct sNode*));
memset(&result_231, 0, sizeof(struct sNode*));
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_230,0,sizeof(struct sNode*));
        __result138__ = __result_obj__ = result_230;
        return __result138__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result139__ = __result_obj__ = self->it->item;
        return __result139__;
    }
    memset(&result_231,0,sizeof(struct sNode*));
    __result140__ = __result_obj__ = result_231;
    return __result140__;
}

struct sNode* parse_struct(char* type_name, struct sInfo* info){
void* __result_obj__;
struct sClass* klass_232;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct sClass* __dec_obj61;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
struct sClass* __dec_obj62;
_Bool output_233;
struct sClass* parent_class_234;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
char* parent_class_name_235;
struct sNode* __result143__;
_Bool multiple_declare_236;
char* p_237;
int sline_238;
void* __right_value219 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_239;
char* name_240;
_Bool err_241;
void* __right_value220 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* base_type_242;
char* name_243;
_Bool err_244;
void* __right_value221 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var7;
struct sType* type2_245;
char* name2_246;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var8;
struct sType* type2_247;
char* name2_248;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type2_249;
char* name_250;
_Bool err_251;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
char* __dec_obj63;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct sNode* _inf_value1;
struct sStructNode* _inf_obj_value1;
void* __right_value239 = (void*)0;
struct sNode* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&klass_232, 0, sizeof(struct sClass*));
memset(&output_233, 0, sizeof(_Bool));
memset(&parent_class_234, 0, sizeof(struct sClass*));
    if(map$2charphsClassph_at(info->classes,type_name,((void*)0))==((void*)0)) {
        __dec_obj61=klass_232;
        klass_232=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value212=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 430, "sClass")))),((char*)(__right_value213=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        come_call_finalizer3(__dec_obj61,sClass_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value212,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        __right_value213 = come_decrement_ref_count2(__right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(__right_value215=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_232));
        __right_value215 = come_decrement_ref_count2(__right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    else {
        __dec_obj62=klass_232;
        klass_232=(struct sClass*)come_increment_ref_count(sClass_clone(map$2charphsClassph_at(info->classes,type_name,((void*)0))));
        come_call_finalizer3(__dec_obj62,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(list$1tuple2$2charphsTypephph_length(klass_232->mFields)>0) {
        output_233=(_Bool)0;
    }
    else {
        output_233=(_Bool)1;
    }
    parent_class_234=((void*)0);
    if(parsecmp("extends",info)) {
        ((char*)(__right_value217=parse_word(info)));
        __right_value217 = come_decrement_ref_count2(__right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parent_class_name_235=(char*)come_increment_ref_count(parse_word(info));
        parent_class_234=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_235);
        if(parent_class_234==((void*)0)) {
            err_msg(info,"invalid class name(%s)",parent_class_name_235);
            __result143__ = __result_obj__ = ((void*)0);
            parent_class_name_235 = come_decrement_ref_count2(parent_class_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(klass_232,sClass_finalize, 0, 0, 0, 0, (void*)0);
            return __result143__;
        }
        parent_class_name_235 = come_decrement_ref_count2(parent_class_name_235, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    expected_next_character(123,info);
    while((_Bool)1) {
        multiple_declare_236=(_Bool)0;
        {
            p_237=info->p;
            sline_238=info->sline;
            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value219=backtrace_parse_type((_Bool)1,info)));
            type_239=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_240=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_241=multiple_assign_var5->v3;
            come_call_finalizer3(__right_value219,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(err_241&&*info->p==44) {
                multiple_declare_236=(_Bool)1;
            }
            info->p=p_237;
            info->sline=sline_238;
            come_call_finalizer3(type_239,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_240 = come_decrement_ref_count2(name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(multiple_declare_236) {
            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value220=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_242=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name_243=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            err_244=multiple_assign_var6->v3;
            come_call_finalizer3(__right_value220,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var7=((struct tuple2$2sTypephcharph*)(__right_value221=parse_variable_name((struct sType*)come_increment_ref_count(base_type_242),(_Bool)1,info)));
            type2_245=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            name2_246=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            come_call_finalizer3(__right_value221,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(output_233) {
                list$1tuple2$2charphsTypephph_push_back(klass_232->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value223=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value222=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 483, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_246),(struct sType*)come_increment_ref_count(type2_245))))));
                come_call_finalizer3(__right_value222,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value223,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple2$2sTypephcharph*)(__right_value224=parse_variable_name((struct sType*)come_increment_ref_count(base_type_242),(_Bool)0,info)));
                type2_247=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name2_248=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                come_call_finalizer3(__right_value224,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(output_233) {
                    list$1tuple2$2charphsTypephph_push_back(klass_232->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value226=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value225=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 493, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_248),(struct sType*)come_increment_ref_count(type2_247))))));
                    come_call_finalizer3(__right_value225,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(__right_value226,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                come_call_finalizer3(type2_247,sType_finalize, 0, 0, 0, 0, (void*)0);
                name2_248 = come_decrement_ref_count2(name2_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(base_type_242,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_243 = come_decrement_ref_count2(name_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_245,sType_finalize, 0, 0, 0, 0, (void*)0);
            name2_246 = come_decrement_ref_count2(name2_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value227=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_249=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_250=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            err_251=multiple_assign_var9->v3;
            come_call_finalizer3(__right_value227,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(!err_251) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            if(output_233) {
                list$1tuple2$2charphsTypephph_push_back(klass_232->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value229=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value228=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 506, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_250),(struct sType*)come_increment_ref_count(type2_249))))));
                come_call_finalizer3(__right_value228,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value229,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(type2_249,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_250 = come_decrement_ref_count2(name_250, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    if(parent_class_234) {
        __dec_obj63=klass_232->mParentClassName;
        klass_232->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_234->mName));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(klass_232->mName),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value231=sClass_clone(klass_232)))));
        come_call_finalizer3(__right_value231,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 528, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStructNode*)(__right_value234=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value232=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 528, "sStructNode")))),(char*)come_increment_ref_count(((char*)(__right_value233=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_232),output_233,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStructNode_finalize;
    _inf_value1->clone=(void*)sStructNode_clone;
    _inf_value1->compile=(void*)sStructNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sStructNode_terminated;
    _inf_value1->kind=(void*)sStructNode_kind;
    __result146__ = __result_obj__ = ((struct sNode*)(__right_value239=_inf_value1));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(klass_232,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value232,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
    __right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value234,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value239) { __right_value239 = come_decrement_ref_count2(__right_value239, ((struct sNode*)__right_value239)->finalize, ((struct sNode*)__right_value239)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result146__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
char* source_head_253;
void* __right_value240 = (void*)0;
char* type_name_254;
struct sClass* struct_class_255;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct sClass* __dec_obj67;
struct sClass* __dec_obj68;
char* source_tail_256;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct buffer* header_257;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct sNode* _inf_value2;
struct sStructNobodyNode* _inf_obj_value2;
void* __right_value253 = (void*)0;
struct sNode* __result149__;
void* __right_value254 = (void*)0;
char* T_261;
void* __right_value258 = (void*)0;
struct sClass* generics_class_265;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct sClass* __dec_obj75;
void* __right_value261 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type2_266;
char* name_267;
_Bool err_268;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
char* name2_269;
void* __right_value265 = (void*)0;
struct sType* type3_270;
_Bool no_comma_271;
void* __right_value266 = (void*)0;
struct sNode* node_272;
struct sNode* __dec_obj76;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
char* source_tail_273;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct buffer* header_274;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct sNode* _inf_value3;
struct sGenericsStructNode* _inf_obj_value3;
void* __right_value278 = (void*)0;
struct sNode* __result154__;
_Bool output_276;
struct sClass* struct_class_277;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct sClass* __dec_obj78;
void* __right_value281 = (void*)0;
struct sClass* __dec_obj79;
struct sClass* parent_class_278;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
char* parent_class_name_279;
struct sNode* __result155__;
_Bool multiple_declare_280;
char* p_281;
int sline_282;
void* __right_value284 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type_283;
char* name_284;
_Bool err_285;
void* __right_value285 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var12;
struct sType* base_type_286;
char* name_287;
_Bool err_288;
void* __right_value286 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var13;
struct sType* type2_289;
char* name2_290;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var14;
struct sType* type2_291;
char* name2_292;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var15;
struct sType* type2_293;
char* name_294;
_Bool err_295;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct sClass* klass2_296;
char* source_tail_297;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct buffer* header_298;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
char* __dec_obj80;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct sNode* _inf_value4;
struct sStructNode* _inf_obj_value4;
void* __right_value308 = (void*)0;
struct sNode* __result158__;
char* source_head_300;
void* __right_value309 = (void*)0;
char* type_name_301;
struct sClass* parent_class_302;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
char* parent_class_name_303;
struct sNode* __result159__;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct list$1sClassp* parent_classes_304;
struct sClass* parent_class2_307;
_Bool output_311;
struct sClass* struct_class_312;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct sClass* __dec_obj84;
void* __right_value319 = (void*)0;
struct sClass* __dec_obj85;
struct sClass* defining_class_313;
void* __right_value320 = (void*)0;
char* __dec_obj86;
void* __right_value321 = (void*)0;
void* __right_value327 = (void*)0;
struct list$1sClassp* o2_saved_319;
struct sClass* parent_322;
struct list$1tuple2$2charphsTypephph* o2_saved_325;
struct tuple2$2charphsTypeph* it_326;
void* __right_value328 = (void*)0;
struct sClass* klass2_327;
void* __right_value329 = (void*)0;
char* __dec_obj87;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct list$1sClassp* o2_saved_328;
struct sClass* parent_329;
struct list$1tuple2$2charphsTypephph* o2_saved_330;
struct tuple2$2charphsTypeph* it_331;
void* __right_value332 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_332;
struct tuple2$2charphsTypeph* it_333;
void* __right_value333 = (void*)0;
char* head_334;
char* p_saved_335;
int sline_saved_336;
char* sname_saved_337;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct list$1sNodeph* methods_338;
void* __right_value336 = (void*)0;
char* __dec_obj88;
char* __dec_obj89;
struct map$2charphcharph* __dec_obj90;
_Bool include__343;
_Bool multiple_declare_344;
char* p_345;
int sline_346;
void* __right_value337 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var16;
struct sType* type_347;
char* name_348;
_Bool err_349;
_Bool define_function_flag_350;
char* p_351;
int sline_352;
_Bool invalid_type_353;
void* __right_value338 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var17;
struct sType* result_type_354;
char* fun_name_355;
_Bool err_356;
char* word_357;
void* __right_value339 = (void*)0;
char* __dec_obj91;
void* __right_value340 = (void*)0;
char* __dec_obj92;
char* __dec_obj93;
void* __right_value341 = (void*)0;
char* __dec_obj94;
char* tail_358;
int pointer_num_359;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct sType* __dec_obj95;
void* __right_value344 = (void*)0;
struct sNode* method_360;
struct sType* __dec_obj96;
void* __right_value348 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var18;
struct sType* base_type_364;
char* name_365;
_Bool err_366;
void* __right_value349 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var19;
struct sType* type2_367;
char* name2_368;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var20;
struct sType* type2_369;
char* name2_370;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
char* module_name_371;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct list$1charph* params_372;
void* __right_value359 = (void*)0;
char* word_373;
void* __right_value360 = (void*)0;
char* __dec_obj100;
struct sNode* __result175__;
struct sClassModule* module_377;
void* __right_value361 = (void*)0;
void* __right_value367 = (void*)0;
struct map$2charphcharph* __dec_obj102;
int i_381;
struct list$1charph* o2_saved_382;
char* it_385;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
char* __dec_obj103;
void* __right_value373 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var21;
struct sType* type2_412;
char* name_413;
_Bool err_414;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
char* __dec_obj104;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sNode* _inf_value5;
struct sClassNode* _inf_obj_value5;
void* __right_value386 = (void*)0;
struct sNode* __result200__;
void* __right_value387 = (void*)0;
struct sNode* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&struct_class_255, 0, sizeof(struct sClass*));
memset(&header_257, 0, sizeof(struct buffer*));
memset(&generics_class_265, 0, sizeof(struct sClass*));
memset(&type3_270, 0, sizeof(struct sType*));
memset(&node_272, 0, sizeof(struct sNode*));
memset(&header_274, 0, sizeof(struct buffer*));
memset(&struct_class_277, 0, sizeof(struct sClass*));
memset(&parent_class_278, 0, sizeof(struct sClass*));
memset(&klass2_296, 0, sizeof(struct sClass*));
memset(&header_298, 0, sizeof(struct buffer*));
memset(&parent_class_302, 0, sizeof(struct sClass*));
memset(&parent_classes_304, 0, sizeof(struct list$1sClassp*));
memset(&parent_class2_307, 0, sizeof(struct sClass*));
memset(&struct_class_312, 0, sizeof(struct sClass*));
memset(&defining_class_313, 0, sizeof(struct sClass*));
memset(&o2_saved_319, 0, sizeof(struct list$1sClassp*));
memset(&parent_322, 0, sizeof(struct sClass*));
memset(&o2_saved_325, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_326, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&klass2_327, 0, sizeof(struct sClass*));
memset(&o2_saved_328, 0, sizeof(struct list$1sClassp*));
memset(&parent_329, 0, sizeof(struct sClass*));
memset(&o2_saved_330, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_331, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&o2_saved_332, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_333, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&methods_338, 0, sizeof(struct list$1sNodeph*));
memset(&method_360, 0, sizeof(struct sNode*));
memset(&params_372, 0, sizeof(struct list$1charph*));
memset(&module_377, 0, sizeof(struct sClassModule*));
memset(&o2_saved_382, 0, sizeof(struct list$1charph*));
    if(charp_operator_equals(buf,"struct")) {
        source_head_253=head;
        type_name_254=(char*)come_increment_ref_count(parse_word(info));
        if(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            if(map$2charphsClassph_at(info->classes,type_name_254,((void*)0))==((void*)0)) {
                __dec_obj67=struct_class_255;
                struct_class_255=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value241=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 544, "sClass")))),type_name_254,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                come_call_finalizer3(__dec_obj67,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value241,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                struct_class_255->mNobodyStruct=(_Bool)1;
            }
            else {
                __dec_obj68=struct_class_255;
                struct_class_255=(struct sClass*)come_increment_ref_count(map$2charphsClassph_at(info->classes,type_name_254,((void*)0)));
                come_call_finalizer3(__dec_obj68,sClass_finalize, 0, 0, 0, 0, (void*)0);
                struct_class_255->mNobodyStruct=(_Bool)1;
            }
            source_tail_256=info->p;
            header_257=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value243=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 554, "buffer"))))));
            come_call_finalizer3(__right_value243,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            buffer_append(header_257,source_head_253,source_tail_256-source_head_253);
            add_come_code_at_come_header(info,"%s",((char*)(__right_value245=buffer_to_string(header_257))));
            __right_value245 = come_decrement_ref_count2(__right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 559, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStructNobodyNode*)(__right_value248=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(__right_value246=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 559, "sStructNobodyNode")))),(char*)come_increment_ref_count(((char*)(__right_value247=__builtin_string(type_name_254)))),(struct sClass*)come_increment_ref_count(struct_class_255),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value2->clone=(void*)sStructNobodyNode_clone;
            _inf_value2->compile=(void*)sStructNobodyNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value2->kind=(void*)sStructNobodyNode_kind;
            __result149__ = __result_obj__ = ((struct sNode*)(__right_value253=_inf_value2));
            come_call_finalizer3(struct_class_255,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_257,buffer_finalize, 0, 0, 0, 0, (void*)0);
            type_name_254 = come_decrement_ref_count2(type_name_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value246,sStructNobodyNode_finalize, 0, 1, 0, 0, __result_obj__);
            __right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value248,sStructNobodyNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value253) { __right_value253 = come_decrement_ref_count2(__right_value253, ((struct sNode*)__right_value253)->finalize, ((struct sNode*)__right_value253)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result149__;
            come_call_finalizer3(struct_class_255,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_257,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(*info->p==60) {
                list$1charph_reset(info->generics_type_names);
                info->p++;
                skip_spaces_and_lf(info);
                while((_Bool)1) {
                    T_261=(char*)come_increment_ref_count(parse_word(info));
                    list$1charph_push_back(info->generics_type_names,(char*)come_increment_ref_count(((char*)(__right_value258=string_clone(T_261)))));
                    __right_value258 = come_decrement_ref_count2(__right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(*info->p==62) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        T_261 = come_decrement_ref_count2(T_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        if(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            err_msg(info,"invalid generics struct definition");
                            exit(2);
                        }
                    }
                    T_261 = come_decrement_ref_count2(T_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(map$2charphsClassph_at(info->generics_classes,type_name_254,((void*)0))!=((void*)0)) {
                    err_msg(info,"redifined generics struct(%s)",type_name_254);
                    exit(2);
                }
                else {
                    __dec_obj75=generics_class_265;
                    generics_class_265=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value259=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 593, "sClass")))),type_name_254,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj75,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value259,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(map$2charphsClassph_at(info->generics_classes,type_name_254,((void*)0))==((void*)0)) {
                    map$2charphsClassph_insert(info->generics_classes,(char*)come_increment_ref_count(type_name_254),(struct sClass*)come_increment_ref_count(generics_class_265));
                }
                expected_next_character(123,info);
                while((_Bool)1) {
                    parse_sharp_v5(info);
                    multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value261=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_266=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                    name_267=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                    err_268=multiple_assign_var10->v3;
                    come_call_finalizer3(__right_value261,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(!err_268) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    if(*info->p==44) {
                        list$1tuple2$2charphsTypephph_push_back(generics_class_265->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value263=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value262=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 613, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_267),(struct sType*)come_increment_ref_count(type2_266))))));
                        come_call_finalizer3(__right_value262,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(__right_value263,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        while(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            name2_269=(char*)come_increment_ref_count(parse_word(info));
                            type3_270=(struct sType*)come_increment_ref_count(sType_clone(type2_266));
                            if(*info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                no_comma_271=info->no_comma;
                                info->no_comma=(_Bool)1;
                                node_272=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                info->no_comma=no_comma_271;
                                __dec_obj76=type3_270->mSizeNum;
                                type3_270->mSizeNum=(struct sNode*)come_increment_ref_count(node_272);
                                if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
                                if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            list$1tuple2$2charphsTypephph_push_back(generics_class_265->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value268=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value267=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 635, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_269),(struct sType*)come_increment_ref_count(type3_270))))));
                            come_call_finalizer3(__right_value267,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(__right_value268,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            name2_269 = come_decrement_ref_count2(name2_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type3_270,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        list$1tuple2$2charphsTypephph_push_back(generics_class_265->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value270=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value269=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 639, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_267),(struct sType*)come_increment_ref_count(type2_266))))));
                        come_call_finalizer3(__right_value269,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(__right_value270,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    if(*info->p==59) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    parse_sharp_v5(info);
                    if(*info->p==125) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(type2_266,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_267 = come_decrement_ref_count2(name_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    parse_sharp_v5(info);
                    come_call_finalizer3(type2_266,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_267 = come_decrement_ref_count2(name_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                list$1charph_reset(info->generics_type_names);
                source_tail_273=info->p;
                header_274=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value271=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 662, "buffer"))))));
                come_call_finalizer3(__right_value271,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                buffer_append_str(header_274,"struct ");
                buffer_append(header_274,source_head_253,source_tail_273-source_head_253);
                add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value273=buffer_to_string(header_274))));
                __right_value273 = come_decrement_ref_count2(__right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 668, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sGenericsStructNode*)(__right_value275=sGenericsStructNode_initialize((struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(__right_value274=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "14struct.c", 668, "sGenericsStructNode")))),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sGenericsStructNode_finalize;
                _inf_value3->clone=(void*)sGenericsStructNode_clone;
                _inf_value3->compile=(void*)sGenericsStructNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sGenericsStructNode_terminated;
                _inf_value3->kind=(void*)sGenericsStructNode_kind;
                __result154__ = __result_obj__ = ((struct sNode*)(__right_value278=_inf_value3));
                come_call_finalizer3(generics_class_265,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_274,buffer_finalize, 0, 0, 0, 0, (void*)0);
                type_name_254 = come_decrement_ref_count2(type_name_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value274,sGenericsStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value275,sGenericsStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value278) { __right_value278 = come_decrement_ref_count2(__right_value278, ((struct sNode*)__right_value278)->finalize, ((struct sNode*)__right_value278)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result154__;
                come_call_finalizer3(generics_class_265,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_274,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                output_276=(_Bool)1;
                if(map$2charphsClassph_at(info->classes,type_name_254,((void*)0))==((void*)0)) {
                    __dec_obj78=struct_class_277;
                    struct_class_277=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value279=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 675, "sClass")))),type_name_254,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj78,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value279,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                }
                else {
                    __dec_obj79=struct_class_277;
                    struct_class_277=(struct sClass*)come_increment_ref_count(sClass_clone(map$2charphsClassph_at(info->classes,type_name_254,((void*)0))));
                    come_call_finalizer3(__dec_obj79,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    if(list$1tuple2$2charphsTypephph_length(struct_class_277->mFields)>0) {
                        output_276=(_Bool)0;
                    }
                }
                parent_class_278=((void*)0);
                if(parsecmp("extends",info)) {
                    ((char*)(__right_value282=parse_word(info)));
                    __right_value282 = come_decrement_ref_count2(__right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    parent_class_name_279=(char*)come_increment_ref_count(parse_word(info));
                    parent_class_278=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_279);
                    if(parent_class_278==((void*)0)) {
                        err_msg(info,"invalid class name(%s)",parent_class_name_279);
                        __result155__ = __result_obj__ = ((void*)0);
                        parent_class_name_279 = come_decrement_ref_count2(parent_class_name_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(struct_class_277,sClass_finalize, 0, 0, 0, 0, (void*)0);
                        type_name_254 = come_decrement_ref_count2(type_name_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        return __result155__;
                    }
                    parent_class_name_279 = come_decrement_ref_count2(parent_class_name_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                expected_next_character(123,info);
                while((_Bool)1) {
                    parse_sharp_v5(info);
                    multiple_declare_280=(_Bool)0;
                    {
                        p_281=info->p;
                        sline_282=info->sline;
                        multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value284=backtrace_parse_type((_Bool)1,info)));
                        type_283=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                        name_284=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        err_285=multiple_assign_var11->v3;
                        come_call_finalizer3(__right_value284,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(err_285&&*info->p==44) {
                            multiple_declare_280=(_Bool)1;
                        }
                        info->p=p_281;
                        info->sline=sline_282;
                        come_call_finalizer3(type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_284 = come_decrement_ref_count2(name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(multiple_declare_280) {
                        multiple_assign_var12=((struct tuple3$3sTypephcharphbool*)(__right_value285=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                        base_type_286=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                        name_287=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        err_288=multiple_assign_var12->v3;
                        come_call_finalizer3(__right_value285,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        multiple_assign_var13=((struct tuple2$2sTypephcharph*)(__right_value286=parse_variable_name((struct sType*)come_increment_ref_count(base_type_286),(_Bool)1,info)));
                        type2_289=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                        name2_290=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        come_call_finalizer3(__right_value286,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        list$1tuple2$2charphsTypephph_push_back(struct_class_277->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value288=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value287=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 723, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_290),(struct sType*)come_increment_ref_count(type2_289))))));
                        come_call_finalizer3(__right_value287,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(__right_value288,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        while(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var14=((struct tuple2$2sTypephcharph*)(__right_value289=parse_variable_name((struct sType*)come_increment_ref_count(base_type_286),(_Bool)0,info)));
                            type2_291=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                            name2_292=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                            come_call_finalizer3(__right_value289,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            list$1tuple2$2charphsTypephph_push_back(struct_class_277->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value291=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value290=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 731, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_292),(struct sType*)come_increment_ref_count(type2_291))))));
                            come_call_finalizer3(__right_value290,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(__right_value291,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(type2_291,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name2_292 = come_decrement_ref_count2(name2_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        come_call_finalizer3(base_type_286,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_287 = come_decrement_ref_count2(name_287, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type2_289,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name2_290 = come_decrement_ref_count2(name2_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        multiple_assign_var15=((struct tuple3$3sTypephcharphbool*)(__right_value292=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                        type2_293=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                        name_294=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                        err_295=multiple_assign_var15->v3;
                        come_call_finalizer3(__right_value292,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(!err_295) {
                            printf("%s %d: parse_type failed\n",info->sname,info->sline);
                            exit(2);
                        }
                        list$1tuple2$2charphsTypephph_push_back(struct_class_277->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value294=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value293=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 741, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_294),(struct sType*)come_increment_ref_count(type2_293))))));
                        come_call_finalizer3(__right_value293,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(__right_value294,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(type2_293,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_294 = come_decrement_ref_count2(name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(*info->p==59) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    parse_sharp_v5(info);
                    if(*info->p==125) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                    parse_sharp_v5(info);
                }
                list$1charph_reset(info->generics_type_names);
                klass2_296=map$2charphsClassph_at(info->classes,type_name_254,((void*)0));
                if(klass2_296==((void*)0)||klass2_296->mNobodyStruct) {
                    if(klass2_296) {
                        klass2_296->mNobodyStruct=(_Bool)0;
                    }
                    source_tail_297=info->p;
                    header_298=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value295=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 768, "buffer"))))));
                    come_call_finalizer3(__right_value295,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    buffer_append(header_298,source_head_253,source_tail_297-source_head_253);
                    add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value297=buffer_to_string(header_298))));
                    __right_value297 = come_decrement_ref_count2(__right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(header_298,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(parent_class_278) {
                    __dec_obj80=struct_class_277->mParentClassName;
                    struct_class_277->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_278->mName));
                    __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(struct_class_277->mName),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value299=sClass_clone(struct_class_277)))));
                    come_call_finalizer3(__right_value299,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                }
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 779, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sStructNode*)(__right_value303=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value300=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 779, "sStructNode")))),(char*)come_increment_ref_count(((char*)(__right_value301=__builtin_string(type_name_254)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value302=sClass_clone(struct_class_277)))),output_276,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sStructNode_finalize;
                _inf_value4->clone=(void*)sStructNode_clone;
                _inf_value4->compile=(void*)sStructNode_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sStructNode_terminated;
                _inf_value4->kind=(void*)sStructNode_kind;
                __result158__ = __result_obj__ = ((struct sNode*)(__right_value308=_inf_value4));
                come_call_finalizer3(struct_class_277,sClass_finalize, 0, 0, 0, 0, (void*)0);
                type_name_254 = come_decrement_ref_count2(type_name_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value300,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                __right_value301 = come_decrement_ref_count2(__right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value302,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value303,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value308) { __right_value308 = come_decrement_ref_count2(__right_value308, ((struct sNode*)__right_value308)->finalize, ((struct sNode*)__right_value308)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result158__;
                come_call_finalizer3(struct_class_277,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        type_name_254 = come_decrement_ref_count2(type_name_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(charp_operator_equals(buf,"class")) {
            source_head_300=head;
            type_name_301=(char*)come_increment_ref_count(parse_word(info));
            parent_class_302=((void*)0);
            if(parsecmp("extends",info)) {
                ((char*)(__right_value310=parse_word(info)));
                __right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parent_class_name_303=(char*)come_increment_ref_count(parse_word(info));
                parent_class_302=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_303);
                if(parent_class_302==((void*)0)) {
                    err_msg(info,"invalid class name(%s)",parent_class_name_303);
                    __result159__ = __result_obj__ = ((void*)0);
                    parent_class_name_303 = come_decrement_ref_count2(parent_class_name_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_301 = come_decrement_ref_count2(type_name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result159__;
                }
                parent_class_name_303 = come_decrement_ref_count2(parent_class_name_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parent_classes_304=(struct list$1sClassp*)come_increment_ref_count(list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count(((struct list$1sClassp*)(__right_value312=(struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "14struct.c", 802, "list$1sClassp"))))));
            come_call_finalizer3(__right_value312,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
            parent_class2_307=parent_class_302;
            while(parent_class2_307) {
                list$1sClassp_add(parent_classes_304,parent_class2_307);
                if(parent_class_302->mParentClassName) {
                    parent_class2_307=map$2charphsClassphp_operator_load_element(info->classes,parent_class_302->mParentClassName);
                }
                else {
                    parent_class2_307=((void*)0);
                }
            }
            output_311=(_Bool)1;
            if(map$2charphsClassph_at(info->classes,type_name_301,((void*)0))==((void*)0)) {
                __dec_obj84=struct_class_312;
                struct_class_312=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value317=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 819, "sClass")))),type_name_301,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                come_call_finalizer3(__dec_obj84,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value317,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            }
            else {
                __dec_obj85=struct_class_312;
                struct_class_312=(struct sClass*)come_increment_ref_count(sClass_clone(map$2charphsClassph_at(info->classes,type_name_301,((void*)0))));
                come_call_finalizer3(__dec_obj85,sClass_finalize, 0, 0, 0, 0, (void*)0);
                if(list$1tuple2$2charphsTypephph_length(struct_class_312->mFields)>0) {
                    output_311=(_Bool)0;
                }
            }
            defining_class_313=info->defining_class;
            info->defining_class=struct_class_312;
            if(map$2charphsClassph_at(info->classes,type_name_301,((void*)0))==((void*)0)) {
                if(parent_class_302) {
                    __dec_obj86=struct_class_312->mParentClassName;
                    struct_class_312->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_302->mName));
                    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_301),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value321=sClass_clone(struct_class_312)))));
                come_call_finalizer3(__right_value321,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                for(                o2_saved_319=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value327=list$1sClassp_reverse(parent_classes_304))))),parent_322=list$1sClassp_begin((o2_saved_319)) ,                come_call_finalizer3(__right_value327,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
                0;                !list$1sClassp_end((o2_saved_319));                parent_322=list$1sClassp_next((o2_saved_319))                ){
                    for(                    o2_saved_325=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_322->mFields)),it_326=list$1tuple2$2charphsTypephph_begin((o2_saved_325));                    !list$1tuple2$2charphsTypephph_end((o2_saved_325));                    it_326=list$1tuple2$2charphsTypephph_next((o2_saved_325))                    ){
                        list$1tuple2$2charphsTypephph_add(struct_class_312->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value328=tuple2$2charphsTypephp_clone(it_326)))));
                        come_call_finalizer3(__right_value328,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    come_call_finalizer3(o2_saved_325,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_319,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,type_name_301,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(struct_class_312->mFields)>0) {
                    klass2_327=map$2charphsClassph_at(info->classes,type_name_301,((void*)0));
                    if(parent_class_302) {
                        __dec_obj87=klass2_327->mParentClassName;
                        klass2_327->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_302->mName));
                        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_301),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value330=sClass_clone(klass2_327)))));
                    come_call_finalizer3(__right_value330,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                    for(                    o2_saved_328=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value331=list$1sClassp_reverse(parent_classes_304))))),parent_329=list$1sClassp_begin((o2_saved_328)) ,                    come_call_finalizer3(__right_value331,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
                    0;                    !list$1sClassp_end((o2_saved_328));                    parent_329=list$1sClassp_next((o2_saved_328))                    ){
                        for(                        o2_saved_330=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_329->mFields)),it_331=list$1tuple2$2charphsTypephph_begin((o2_saved_330));                        !list$1tuple2$2charphsTypephph_end((o2_saved_330));                        it_331=list$1tuple2$2charphsTypephph_next((o2_saved_330))                        ){
                            list$1tuple2$2charphsTypephph_add(klass2_327->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value332=tuple2$2charphsTypephp_clone(it_331)))));
                            come_call_finalizer3(__right_value332,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        }
                        come_call_finalizer3(o2_saved_330,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_328,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
                    for(                    o2_saved_332=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct_class_312->mFields)),it_333=list$1tuple2$2charphsTypephph_begin((o2_saved_332));                    !list$1tuple2$2charphsTypephph_end((o2_saved_332));                    it_333=list$1tuple2$2charphsTypephph_next((o2_saved_332))                    ){
                        list$1tuple2$2charphsTypephph_add(klass2_327->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value333=tuple2$2charphsTypephp_clone(it_333)))));
                        come_call_finalizer3(__right_value333,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                    }
                    come_call_finalizer3(o2_saved_332,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(123,info);
            head_334=info->p;
            p_saved_335=((void*)0);
            sline_saved_336=0;
            sname_saved_337=((void*)0);
            methods_338=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value334=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "14struct.c", 869, "list$1sNodeph"))))));
            come_call_finalizer3(__right_value334,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            while((_Bool)1) {
                if(p_saved_335) {
                    if(*info->p==0) {
                        info->p=p_saved_335;
                        info->sline=sline_saved_336;
                        __dec_obj88=info->sname;
                        info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_337));
                        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                        p_saved_335=((void*)0);
                        sline_saved_336=0;
                        __dec_obj89=sname_saved_337;
                        sname_saved_337=((void*)0);
                        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __dec_obj90=info->module_params;
                        info->module_params=((void*)0);
                        come_call_finalizer3(__dec_obj90,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                parse_sharp_v5(info);
                include__343=parsecmp("include",info);
                multiple_declare_344=(_Bool)0;
                if(include__343==(_Bool)0) {
                    p_345=info->p;
                    sline_346=info->sline;
                    if(memcmp(info->p,"new(",4)!=0) {
                        multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(__right_value337=backtrace_parse_type((_Bool)1,info)));
                        type_347=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                        name_348=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                        err_349=multiple_assign_var16->v3;
                        come_call_finalizer3(__right_value337,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(err_349&&*info->p==44) {
                            multiple_declare_344=(_Bool)1;
                        }
                        come_call_finalizer3(type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_348 = come_decrement_ref_count2(name_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    info->p=p_345;
                    info->sline=sline_346;
                }
                define_function_flag_350=(_Bool)0;
                if(include__343==(_Bool)0) {
                    p_351=info->p;
                    sline_352=info->sline;
                    if(memcmp(info->p,"new(",4)==0) {
                        define_function_flag_350=(_Bool)1;
                    }
                    else {
                        invalid_type_353=(_Bool)0;
                        if(xisalpha(*info->p)||*info->p==95) {
                            multiple_assign_var17=((struct tuple3$3sTypephcharphbool*)(__right_value338=backtrace_parse_type((_Bool)0,info)));
                            result_type_354=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                            fun_name_355=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                            err_356=multiple_assign_var17->v3;
                            come_call_finalizer3(__right_value338,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(result_type_354,sType_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_355 = come_decrement_ref_count2(fun_name_355, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        word_357=((void*)0);
                        if(xisalnum(*info->p)||*info->p==95) {
                            __dec_obj91=word_357;
                            word_357=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                            if(string_operator_equals(word_357,"extern")) {
                                __dec_obj92=word_357;
                                word_357=(char*)come_increment_ref_count(parse_word(info));
                                __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                        }
                        else {
                            __dec_obj93=word_357;
                            word_357=((void*)0);
                            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        info->no_output_err=(_Bool)0;
                        if(word_357) {
                            if(is_type_name(word_357,info)) {
                                while(*info->p==42) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                if(*info->p==91&&*(info->p+1)==93) {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                }
                                if(*info->p==58) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                if(*info->p==58) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                if(xisalnum(*info->p)||*info->p==95) {
                                    __dec_obj94=word_357;
                                    word_357=(char*)come_increment_ref_count(parse_word(info));
                                    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                                }
                            }
                            if(strlen(word_357)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                                define_function_flag_350=(_Bool)1;
                            }
                        }
                        word_357 = come_decrement_ref_count2(word_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    info->p=p_351;
                    info->sline=sline_352;
                }
                if(define_function_flag_350) {
                    tail_358=info->p;
                    pointer_num_359=1;
                    __dec_obj95=info->impl_type;
                    info->impl_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value342=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 972, "sType")))),type_name_301,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value342,sType_finalize, 0, 1, 0, 0, __result_obj__);
                    info->impl_type->mPointerNum=pointer_num_359;
                    output_struct_header(struct_class_312,info);
                    info->in_class=(_Bool)1;
                    method_360=(struct sNode*)come_increment_ref_count(parse_function(info));
                    __dec_obj96=info->impl_type;
                    info->impl_type=((void*)0);
                    come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
                    info->in_class=(_Bool)0;
                    list$1sNodeph_push_back(methods_338,(struct sNode*)come_increment_ref_count(method_360));
                    if(method_360) { method_360 = come_decrement_ref_count2(method_360, ((struct sNode*)method_360)->finalize, ((struct sNode*)method_360)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(multiple_declare_344) {
                        multiple_assign_var18=((struct tuple3$3sTypephcharphbool*)(__right_value348=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                        base_type_364=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                        name_365=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                        err_366=multiple_assign_var18->v3;
                        come_call_finalizer3(__right_value348,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        multiple_assign_var19=((struct tuple2$2sTypephcharph*)(__right_value349=parse_variable_name((struct sType*)come_increment_ref_count(base_type_364),(_Bool)1,info)));
                        type2_367=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                        name2_368=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                        come_call_finalizer3(__right_value349,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        list$1tuple2$2charphsTypephph_push_back(struct_class_312->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value351=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value350=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 991, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_368),(struct sType*)come_increment_ref_count(type2_367))))));
                        come_call_finalizer3(__right_value350,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(__right_value351,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        while(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var20=((struct tuple2$2sTypephcharph*)(__right_value352=parse_variable_name((struct sType*)come_increment_ref_count(base_type_364),(_Bool)0,info)));
                            type2_369=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
                            name2_370=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                            come_call_finalizer3(__right_value352,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            list$1tuple2$2charphsTypephph_push_back(struct_class_312->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value354=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value353=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 999, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name2_370),(struct sType*)come_increment_ref_count(type2_369))))));
                            come_call_finalizer3(__right_value353,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(__right_value354,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(type2_369,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name2_370 = come_decrement_ref_count2(name2_370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        expected_next_character(59,info);
                        come_call_finalizer3(base_type_364,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_365 = come_decrement_ref_count2(name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type2_367,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name2_368 = come_decrement_ref_count2(name2_368, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(parsecmp("include",info)) {
                            ((char*)(__right_value355=parse_word(info)));
                            __right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            module_name_371=(char*)come_increment_ref_count(parse_word(info));
                            params_372=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value357=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "14struct.c", 1008, "list$1charph"))))));
                            come_call_finalizer3(__right_value357,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(*info->p==60) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                while((_Bool)1) {
                                    word_373=(char*)come_increment_ref_count(parse_word(info));
                                    list$1charph_add(params_372,(char*)come_increment_ref_count(word_373));
                                    if(*info->p==44) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(*info->p==0) {
                                            err_msg(info,"invalid source end");
                                            exit(2);
                                        }
                                        else {
                                            if(*info->p==62) {
                                                info->p++;
                                                skip_spaces_and_lf(info);
                                                word_373 = come_decrement_ref_count2(word_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                break;
                                            }
                                            else {
                                                err_msg(info,"invalid charactor(%c)",*info->p);
                                                exit(2);
                                            }
                                        }
                                    }
                                    word_373 = come_decrement_ref_count2(word_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            if(*info->p==59) {
                                info->p++;
                            }
                            skip_spaces_and_lf(info);
                            p_saved_335=info->p;
                            sline_saved_336=info->sline;
                            __dec_obj100=sname_saved_337;
                            sname_saved_337=(char*)come_increment_ref_count(__builtin_string(info->sname));
                            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                            if(map$2charphsClassModulephp_operator_load_element(info->modules,module_name_371)==((void*)0)) {
                                err_msg(info,"module not found");
                                __result175__ = __result_obj__ = ((void*)0);
                                module_name_371 = come_decrement_ref_count2(module_name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_372,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                type_name_301 = come_decrement_ref_count2(type_name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(parent_classes_304,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(struct_class_312,sClass_finalize, 0, 0, 0, 0, (void*)0);
                                sname_saved_337 = come_decrement_ref_count2(sname_saved_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(methods_338,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                return __result175__;
                            }
                            module_377=((struct sClassModule*)come_null_check(map$2charphsClassModulephp_operator_load_element(info->modules,module_name_371), "14struct.c", 1052, 3));
                            if(list$1charph_length(module_377->mParams)!=list$1charph_length(params_372)) {
                                err_msg(info,"invalid parametor number");
                                exit(1);
                            }
                            __dec_obj102=info->module_params;
                            info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count(((struct map$2charphcharph*)(__right_value361=(struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "14struct.c", 1059, "map$2charphcharph"))))));
                            come_call_finalizer3(__dec_obj102,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(__right_value361,map$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            i_381=0;
                            for(                            o2_saved_382=(struct list$1charph*)come_increment_ref_count((module_377->mParams)),it_385=list$1charph_begin((o2_saved_382));                            !list$1charph_end((o2_saved_382));                            it_385=list$1charph_next((o2_saved_382))                            ){
                                ((char*)(__right_value371=map$2charphcharphp_operator_store_element(info->module_params,it_385,((char*)come_null_check(list$1charphp_operator_load_element(params_372,i_381), "14struct.c", 1063, 4)))));
                                __right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            come_call_finalizer3(o2_saved_382,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            info->p=module_377->mText;
                            info->sline=module_377->mSLine;
                            __dec_obj103=info->sname;
                            info->sname=(char*)come_increment_ref_count(__builtin_string(module_377->mSName));
                            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                            module_name_371 = come_decrement_ref_count2(module_name_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_372,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            multiple_assign_var21=((struct tuple3$3sTypephcharphbool*)(__right_value373=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                            type2_412=(struct sType*)come_increment_ref_count(multiple_assign_var21->v1);
                            name_413=(char*)come_increment_ref_count(multiple_assign_var21->v2);
                            err_414=multiple_assign_var21->v3;
                            come_call_finalizer3(__right_value373,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(!err_414) {
                                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                exit(2);
                            }
                            list$1tuple2$2charphsTypephph_push_back(struct_class_312->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value375=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value374=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1077, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(name_413),(struct sType*)come_increment_ref_count(type2_412))))));
                            come_call_finalizer3(__right_value374,tuple2$2charphsTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(__right_value375,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(*info->p==59) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            come_call_finalizer3(type2_412,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name_413 = come_decrement_ref_count2(name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                parse_sharp_v5(info);
                if(*info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
            }
            if(p_saved_335) {
                if(info->p==0) {
                    info->p=p_saved_335;
                    info->sline=sline_saved_336;
                    __dec_obj104=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_337));
                    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_335=((void*)0);
                    sline_saved_336=0;
                }
            }
            list$1charph_reset(info->generics_type_names);
            info->defining_class=defining_class_313;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 1110, "struct sNode");
            _inf_obj_value5=come_increment_ref_count(((struct sClassNode*)(__right_value380=sClassNode_initialize((struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(__right_value377=(struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "14struct.c", 1110, "sClassNode")))),(char*)come_increment_ref_count(((char*)(__right_value378=__builtin_string(type_name_301)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value379=sClass_clone(struct_class_312)))),(struct list$1sNodeph*)come_increment_ref_count(methods_338),output_311,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sClassNode_finalize;
            _inf_value5->clone=(void*)sClassNode_clone;
            _inf_value5->compile=(void*)sClassNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sClassNode_terminated;
            _inf_value5->kind=(void*)sClassNode_kind;
            __result200__ = __result_obj__ = ((struct sNode*)(__right_value386=_inf_value5));
            type_name_301 = come_decrement_ref_count2(type_name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(parent_classes_304,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(struct_class_312,sClass_finalize, 0, 0, 0, 0, (void*)0);
            sname_saved_337 = come_decrement_ref_count2(sname_saved_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(methods_338,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value377,sClassNode_finalize, 0, 1, 0, 0, __result_obj__);
            __right_value378 = come_decrement_ref_count2(__right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value379,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value380,sClassNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value386) { __right_value386 = come_decrement_ref_count2(__right_value386, ((struct sNode*)__right_value386)->finalize, ((struct sNode*)__right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result200__;
            type_name_301 = come_decrement_ref_count2(type_name_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(parent_classes_304,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(struct_class_312,sClass_finalize, 0, 0, 0, 0, (void*)0);
            sname_saved_337 = come_decrement_ref_count2(sname_saved_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(methods_338,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result201__ = __result_obj__ = ((struct sNode*)(__right_value387=top_level_v97(buf,head,head_sline,info)));
    if(__right_value387) { __right_value387 = come_decrement_ref_count2(__right_value387, ((struct sNode*)__right_value387)->finalize, ((struct sNode*)__right_value387)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result201__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mClass!=((void*)0)) {
        come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__;
struct sStructNobodyNode* __result147__;
void* __right_value249 = (void*)0;
struct sStructNobodyNode* result_258;
void* __right_value250 = (void*)0;
char* __dec_obj69;
void* __right_value251 = (void*)0;
char* __dec_obj70;
void* __right_value252 = (void*)0;
struct sClass* __dec_obj71;
struct sStructNobodyNode* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_258, 0, sizeof(struct sStructNobodyNode*));
    if(self==(void*)0) {
        __result147__ = __result_obj__ = (void*)0;
        return __result147__;
    }
    result_258=(struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "sStructNobodyNode"));
    if(self!=((void*)0)) {
        result_258->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj69=result_258->sname;
        result_258->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj70=result_258->mName;
        result_258->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj71=result_258->mClass;
        result_258->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        come_call_finalizer3(__dec_obj71,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result148__ = __result_obj__ = result_258;
    come_call_finalizer3(result_258,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result148__;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_259;
struct list_item$1charph* prev_it_260;
struct list$1charph* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_259, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_260, 0, sizeof(struct list_item$1charph*));
    it_259=self->head;
    while(it_259!=((void*)0)) {
        prev_it_260=it_259;
        it_259=it_259->next;
        come_call_finalizer3(prev_it_260,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result150__ = __result_obj__ = self;
    return __result150__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
void* __right_value255 = (void*)0;
struct list_item$1charph* litem_262;
char* __dec_obj72;
void* __right_value256 = (void*)0;
struct list_item$1charph* litem_263;
char* __dec_obj73;
void* __right_value257 = (void*)0;
struct list_item$1charph* litem_264;
char* __dec_obj74;
struct list$1charph* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_262, 0, sizeof(struct list_item$1charph*));
memset(&litem_263, 0, sizeof(struct list_item$1charph*));
memset(&litem_264, 0, sizeof(struct list_item$1charph*));
    if(self->len==0) {
        litem_262=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value255=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 219, "list_item$1charph"))));
        come_call_finalizer3(__right_value255,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_262->prev=((void*)0);
        litem_262->next=((void*)0);
        __dec_obj72=litem_262->item;
        litem_262->item=(char*)come_increment_ref_count(item);
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_262;
        self->head=litem_262;
    }
    else {
        if(self->len==1) {
            litem_263=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value256=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 229, "list_item$1charph"))));
            come_call_finalizer3(__right_value256,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_263->prev=self->head;
            litem_263->next=((void*)0);
            __dec_obj73=litem_263->item;
            litem_263->item=(char*)come_increment_ref_count(item);
            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_263;
            self->head->next=litem_263;
        }
        else {
            litem_264=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value257=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 239, "list_item$1charph"))));
            come_call_finalizer3(__right_value257,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_264->prev=self->tail;
            litem_264->next=((void*)0);
            __dec_obj74=litem_264->item;
            litem_264->item=(char*)come_increment_ref_count(item);
            __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_264;
            self->tail=litem_264;
        }
    }
    self->len++;
    __result151__ = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result151__;
}

static void sGenericsStructNode_finalize(struct sGenericsStructNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self){
void* __result_obj__;
struct sGenericsStructNode* __result152__;
void* __right_value276 = (void*)0;
struct sGenericsStructNode* result_275;
void* __right_value277 = (void*)0;
char* __dec_obj77;
struct sGenericsStructNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_275, 0, sizeof(struct sGenericsStructNode*));
    if(self==(void*)0) {
        __result152__ = __result_obj__ = (void*)0;
        return __result152__;
    }
    result_275=(struct sGenericsStructNode*)come_increment_ref_count((struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "sGenericsStructNode_clone", 3, "sGenericsStructNode"));
    if(self!=((void*)0)) {
        result_275->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj77=result_275->sname;
        result_275->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result153__ = __result_obj__ = result_275;
    come_call_finalizer3(result_275,sGenericsStructNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result153__;
}

static void sStructNode_finalize(struct sStructNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mClass!=((void*)0)) {
        come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__;
struct sStructNode* __result156__;
void* __right_value304 = (void*)0;
struct sStructNode* result_299;
void* __right_value305 = (void*)0;
char* __dec_obj81;
void* __right_value306 = (void*)0;
char* __dec_obj82;
void* __right_value307 = (void*)0;
struct sClass* __dec_obj83;
struct sStructNode* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_299, 0, sizeof(struct sStructNode*));
    if(self==(void*)0) {
        __result156__ = __result_obj__ = (void*)0;
        return __result156__;
    }
    result_299=(struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "sStructNode"));
    if(self!=((void*)0)) {
        result_299->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj81=result_299->sname;
        result_299->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj82=result_299->mName;
        result_299->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj83=result_299->mClass;
        result_299->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        come_call_finalizer3(__dec_obj83,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_299->mOutput=self->mOutput;
    }
    __result157__ = __result_obj__ = result_299;
    come_call_finalizer3(result_299,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result157__;
}

static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self){
void* __result_obj__;
struct list$1sClassp* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result160__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    return __result160__;
}

static void list$1sClasspp_finalize(struct list$1sClassp* self){
struct list_item$1sClassp* it_305;
struct list_item$1sClassp* prev_it_306;
memset(&it_305, 0, sizeof(struct list_item$1sClassp*));
memset(&prev_it_306, 0, sizeof(struct list_item$1sClassp*));
    it_305=self->head;
    while(it_305!=((void*)0)) {
        prev_it_306=it_305;
        it_305=it_305->next;
        come_call_finalizer3(prev_it_306,list_item$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self){
}

static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__;
void* __right_value314 = (void*)0;
struct list_item$1sClassp* litem_308;
void* __right_value315 = (void*)0;
struct list_item$1sClassp* litem_309;
void* __right_value316 = (void*)0;
struct list_item$1sClassp* litem_310;
struct list$1sClassp* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_308, 0, sizeof(struct list_item$1sClassp*));
memset(&litem_309, 0, sizeof(struct list_item$1sClassp*));
memset(&litem_310, 0, sizeof(struct list_item$1sClassp*));
    if(self->len==0) {
        litem_308=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value314=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 149, "list_item$1sClassp"))));
        come_call_finalizer3(__right_value314,list_item$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_308->prev=((void*)0);
        litem_308->next=((void*)0);
        litem_308->item=item;
        self->tail=litem_308;
        self->head=litem_308;
    }
    else {
        if(self->len==1) {
            litem_309=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value315=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 159, "list_item$1sClassp"))));
            come_call_finalizer3(__right_value315,list_item$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_309->prev=self->head;
            litem_309->next=((void*)0);
            litem_309->item=item;
            self->tail=litem_309;
            self->head->next=litem_309;
        }
        else {
            litem_310=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value316=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 169, "list_item$1sClassp"))));
            come_call_finalizer3(__right_value316,list_item$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_310->prev=self->tail;
            litem_310->next=((void*)0);
            litem_310->item=item;
            self->tail->next=litem_310;
            self->tail=litem_310;
        }
    }
    self->len++;
    __result161__ = __result_obj__ = self;
    return __result161__;
}

static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self){
void* __result_obj__;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct list$1sClassp* result_314;
struct list_item$1sClassp* it_315;
struct list$1sClassp* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_314, 0, sizeof(struct list$1sClassp*));
memset(&it_315, 0, sizeof(struct list_item$1sClassp*));
    result_314=(struct list$1sClassp*)come_increment_ref_count(list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count(((struct list$1sClassp*)(__right_value322=(struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "./neo-c.h", 941, "list$1sClassp"))))));
    come_call_finalizer3(__right_value322,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
    it_315=self->tail;
    while(it_315!=((void*)0)) {
        list$1sClassp_push_back(result_314,it_315->item);
        it_315=it_315->prev;
    }
    __result163__ = __result_obj__ = result_314;
    come_call_finalizer3(result_314,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    return __result163__;
}

static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__;
void* __right_value324 = (void*)0;
struct list_item$1sClassp* litem_316;
void* __right_value325 = (void*)0;
struct list_item$1sClassp* litem_317;
void* __right_value326 = (void*)0;
struct list_item$1sClassp* litem_318;
struct list$1sClassp* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_316, 0, sizeof(struct list_item$1sClassp*));
memset(&litem_317, 0, sizeof(struct list_item$1sClassp*));
memset(&litem_318, 0, sizeof(struct list_item$1sClassp*));
    if(self->len==0) {
        litem_316=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value324=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 219, "list_item$1sClassp"))));
        come_call_finalizer3(__right_value324,list_item$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_316->prev=((void*)0);
        litem_316->next=((void*)0);
        litem_316->item=item;
        self->tail=litem_316;
        self->head=litem_316;
    }
    else {
        if(self->len==1) {
            litem_317=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value325=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 229, "list_item$1sClassp"))));
            come_call_finalizer3(__right_value325,list_item$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_317->prev=self->head;
            litem_317->next=((void*)0);
            litem_317->item=item;
            self->tail=litem_317;
            self->head->next=litem_317;
        }
        else {
            litem_318=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value326=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./neo-c.h", 239, "list_item$1sClassp"))));
            come_call_finalizer3(__right_value326,list_item$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_318->prev=self->tail;
            litem_318->next=((void*)0);
            litem_318->item=item;
            self->tail->next=litem_318;
            self->tail=litem_318;
        }
    }
    self->len++;
    __result162__ = __result_obj__ = self;
    return __result162__;
}

static struct sClass* list$1sClassp_begin(struct list$1sClassp* self){
void* __result_obj__;
struct sClass* result_320;
struct sClass* __result164__;
struct sClass* __result165__;
struct sClass* result_321;
struct sClass* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_320, 0, sizeof(struct sClass*));
memset(&result_321, 0, sizeof(struct sClass*));
    if(self==((void*)0)) {
        memset(&result_320,0,sizeof(struct sClass*));
        __result164__ = __result_obj__ = result_320;
        return __result164__;
    }
    self->it=self->head;
    if(self->it) {
        __result165__ = __result_obj__ = self->it->item;
        return __result165__;
    }
    memset(&result_321,0,sizeof(struct sClass*));
    __result166__ = __result_obj__ = result_321;
    return __result166__;
}

static _Bool list$1sClassp_end(struct list$1sClassp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sClass* list$1sClassp_next(struct list$1sClassp* self){
void* __result_obj__;
struct sClass* result_323;
struct sClass* __result167__;
struct sClass* __result168__;
struct sClass* result_324;
struct sClass* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_323, 0, sizeof(struct sClass*));
memset(&result_324, 0, sizeof(struct sClass*));
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_323,0,sizeof(struct sClass*));
        __result167__ = __result_obj__ = result_323;
        return __result167__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result168__ = __result_obj__ = self->it->item;
        return __result168__;
    }
    memset(&result_324,0,sizeof(struct sClass*));
    __result169__ = __result_obj__ = result_324;
    return __result169__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_339;
int i_340;
    for(    i_339=0;    i_339<self->size;    i_339++    ){
        if(self->item_existance[i_339]) {
            if(1) {
                self->items[i_339] = come_decrement_ref_count2(self->items[i_339], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_340=0;    i_340<self->size;    i_340++    ){
        if(self->item_existance[i_340]) {
            if(1) {
                self->keys[i_340] = come_decrement_ref_count2(self->keys[i_340], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_341;
struct list_item$1charp* prev_it_342;
memset(&it_341, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_342, 0, sizeof(struct list_item$1charp*));
    it_341=self->head;
    while(it_341!=((void*)0)) {
        prev_it_342=it_341;
        it_341=it_341->next;
        come_call_finalizer3(prev_it_342,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* __right_value345 = (void*)0;
struct list_item$1sNodeph* litem_361;
struct sNode* __dec_obj97;
void* __right_value346 = (void*)0;
struct list_item$1sNodeph* litem_362;
struct sNode* __dec_obj98;
void* __right_value347 = (void*)0;
struct list_item$1sNodeph* litem_363;
struct sNode* __dec_obj99;
struct list$1sNodeph* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_361, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_362, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_363, 0, sizeof(struct list_item$1sNodeph*));
    if(self->len==0) {
        litem_361=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value345=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 219, "list_item$1sNodeph"))));
        come_call_finalizer3(__right_value345,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_361->prev=((void*)0);
        litem_361->next=((void*)0);
        __dec_obj97=litem_361->item;
        litem_361->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_361;
        self->head=litem_361;
    }
    else {
        if(self->len==1) {
            litem_362=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value346=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 229, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value346,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_362->prev=self->head;
            litem_362->next=((void*)0);
            __dec_obj98=litem_362->item;
            litem_362->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count2(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_362;
            self->head->next=litem_362;
        }
        else {
            litem_363=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value347=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 239, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value347,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_363->prev=self->tail;
            litem_363->next=((void*)0);
            __dec_obj99=litem_363->item;
            litem_363->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_363;
            self->tail=litem_363;
        }
    }
    self->len++;
    __result170__ = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result170__;
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__;
struct sClassModule* default_value_374;
unsigned int hash_375;
unsigned int it_376;
struct sClassModule* __result171__;
struct sClassModule* __result172__;
struct sClassModule* __result173__;
struct sClassModule* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_374, 0, sizeof(struct sClassModule*));
    memset(&default_value_374,0,sizeof(struct sClassModule*));
    hash_375=string_get_hash_key(((char*)key))%self->size;
    it_376=hash_375;
    while((_Bool)1) {
        if(self->item_existance[it_376]) {
            if(string_equals(self->keys[it_376],key)) {
                __result171__ = __result_obj__ = self->items[it_376];
                come_call_finalizer3(default_value_374,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                return __result171__;
            }
            it_376++;
            if(it_376>=self->size) {
                it_376=0;
            }
            else {
                if(it_376==hash_375) {
                    __result172__ = __result_obj__ = default_value_374;
                    come_call_finalizer3(default_value_374,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                    return __result172__;
                }
            }
        }
        else {
            __result173__ = __result_obj__ = default_value_374;
            come_call_finalizer3(default_value_374,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            return __result173__;
        }
    }
    __result174__ = __result_obj__ = default_value_374;
    come_call_finalizer3(default_value_374,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    return __result174__;
}

static void sClassModule_finalize(struct sClassModule* self){
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mText!=((void*)0)) {
        self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParams!=((void*)0)) {
        come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSName!=((void*)0)) {
        self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static int list$1charph_length(struct list$1charph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self){
void* __result_obj__;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
int i_378;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct list$1charp* __dec_obj101;
struct map$2charphcharph* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value362=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1064, "char*%"))));
    __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->items=(char**)come_increment_ref_count(((char**)(__right_value363=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1065, "char*%"))));
    __right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value364=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1066, "bool"))));
    __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_378=0;    i_378<128;    i_378++    ){
        self->item_existance[i_378]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj101=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value365=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1076, "list$1charp"))))));
    come_call_finalizer3(__dec_obj101,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value365,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    self->it=0;
    __result177__ = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result177__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result176__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    return __result176__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_379;
int i_380;
    for(    i_379=0;    i_379<self->size;    i_379++    ){
        if(self->item_existance[i_379]) {
            if(1) {
                self->items[i_379] = come_decrement_ref_count2(self->items[i_379], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_380=0;    i_380<self->size;    i_380++    ){
        if(self->item_existance[i_380]) {
            if(1) {
                self->keys[i_380] = come_decrement_ref_count2(self->keys[i_380], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
char* result_383;
char* __result178__;
char* __result179__;
char* result_384;
char* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_383, 0, sizeof(char*));
memset(&result_384, 0, sizeof(char*));
    if(self==((void*)0)) {
        memset(&result_383,0,sizeof(char*));
        __result178__ = __result_obj__ = result_383;
        return __result178__;
    }
    self->it=self->head;
    if(self->it) {
        __result179__ = __result_obj__ = self->it->item;
        return __result179__;
    }
    memset(&result_384,0,sizeof(char*));
    __result180__ = __result_obj__ = result_384;
    return __result180__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
char* result_386;
char* __result181__;
char* __result182__;
char* result_387;
char* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_386, 0, sizeof(char*));
memset(&result_387, 0, sizeof(char*));
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_386,0,sizeof(char*));
        __result181__ = __result_obj__ = result_386;
        return __result181__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result182__ = __result_obj__ = self->it->item;
        return __result182__;
    }
    memset(&result_387,0,sizeof(char*));
    __result183__ = __result_obj__ = result_387;
    return __result183__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
struct list_item$1charph* it_388;
int i_389;
char* __result184__;
char* default_value_390;
char* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_388, 0, sizeof(struct list_item$1charph*));
memset(&default_value_390, 0, sizeof(char*));
    if(position<0) {
        position+=self->len;
    }
    it_388=self->head;
    i_389=0;
    while(it_388!=((void*)0)) {
        if(position==i_389) {
            __result184__ = __result_obj__ = it_388->item;
            return __result184__;
        }
        it_388=it_388->next;
        i_389++;
    }
    memset(&default_value_390,0,sizeof(char*));
    __result185__ = __result_obj__ = default_value_390;
    default_value_390 = come_decrement_ref_count2(default_value_390, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result185__;
}

static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__;
char* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
    map$2charphcharph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    __result197__ = __result_obj__ = item;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result197__;
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__;
unsigned int hash_408;
unsigned int it_409;
_Bool same_key_exist_410;
char* it2_411;
struct map$2charphcharph* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->len*10>=self->size) {
        map$2charphcharph_rehash(self);
    }
    hash_408=string_get_hash_key(key)%self->size;
    it_409=hash_408;
    while((_Bool)1) {
        if(self->item_existance[it_409]) {
            if(string_equals(self->keys[it_409],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_409]);
                    self->keys[it_409] = come_decrement_ref_count2(self->keys[it_409], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_409]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_409]);
                    self->keys[it_409]=key;
                }
                if(1) {
                    self->items[it_409] = come_decrement_ref_count2(self->items[it_409], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_409]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_409]=item;
                }
                break;
            }
            it_409++;
            if(it_409>=self->size) {
                it_409=0;
            }
            else {
                if(it_409==hash_408) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_409]=(_Bool)1;
            if(1) {
                self->keys[it_409]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_409]=key;
            }
            if(1) {
                self->items[it_409]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_409]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_410=(_Bool)0;
    for(    it2_411=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_411=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_411,key)) {
            same_key_exist_410=(_Bool)1;
        }
    }
    if(!same_key_exist_410) {
        list$1charp_push_back(self->key_list,key);
    }
    __result196__ = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result196__;
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
int size_391;
void* __right_value368 = (void*)0;
char** keys_392;
void* __right_value369 = (void*)0;
char** items_393;
void* __right_value370 = (void*)0;
_Bool* item_existance_394;
int len_395;
char* it_398;
char* default_value_401;
char* it2_402;
unsigned int hash_405;
int n_406;
char* default_value_407;
memset(&default_value_401, 0, sizeof(char*));
memset(&default_value_407, 0, sizeof(char*));
    size_391=self->size*10;
    keys_392=(char**)come_increment_ref_count(((char**)(__right_value368=(char**)come_calloc(1, sizeof(char*)*(1*(size_391)), "./neo-c.h", 1315, "char*%"))));
    __right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    items_393=(char**)come_increment_ref_count(((char**)(__right_value369=(char**)come_calloc(1, sizeof(char*)*(1*(size_391)), "./neo-c.h", 1316, "char*%"))));
    __right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    item_existance_394=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value370=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_391)), "./neo-c.h", 1317, "bool"))));
    __right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    len_395=0;
    for(    it_398=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_398=map$2charphcharph_next(self)    ){
        memset(&default_value_401,0,sizeof(char*));
        it2_402=map$2charphcharph_at(self,it_398,default_value_401);
        hash_405=string_get_hash_key(it_398)%size_391;
        n_406=hash_405;
        while((_Bool)1) {
            if(item_existance_394[n_406]) {
                n_406++;
                if(n_406>=size_391) {
                    n_406=0;
                }
                else {
                    if(n_406==hash_405) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_394[n_406]=(_Bool)1;
                keys_392[n_406]=it_398;
                items_393[n_406]=map$2charphcharph_at(self,it_398,default_value_407);
                len_395++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_392;
    self->items=items_393;
    self->item_existance=item_existance_394;
    self->size=size_391;
    self->len=len_395;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__;
char* result_396;
char* __result186__;
char* __result187__;
char* result_397;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_396, 0, sizeof(char*));
memset(&result_397, 0, sizeof(char*));
    if(self==((void*)0)) {
        memset(&result_396,0,sizeof(char*));
        __result186__ = __result_obj__ = result_396;
        return __result186__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result187__ = __result_obj__ = self->key_list->it->item;
        return __result187__;
    }
    memset(&result_397,0,sizeof(char*));
    __result188__ = __result_obj__ = result_397;
    return __result188__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__;
char* result_399;
char* __result189__;
char* __result190__;
char* result_400;
char* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_399, 0, sizeof(char*));
memset(&result_400, 0, sizeof(char*));
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_399,0,sizeof(char*));
        __result189__ = __result_obj__ = result_399;
        return __result189__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result190__ = __result_obj__ = self->key_list->it->item;
        return __result190__;
    }
    memset(&result_400,0,sizeof(char*));
    __result191__ = __result_obj__ = result_400;
    return __result191__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__;
unsigned int hash_403;
unsigned int it_404;
char* __result192__;
char* __result193__;
char* __result194__;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
    hash_403=string_get_hash_key(((char*)key))%self->size;
    it_404=hash_403;
    while((_Bool)1) {
        if(self->item_existance[it_404]) {
            if(string_equals(self->keys[it_404],key)) {
                __result192__ = __result_obj__ = self->items[it_404];
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result192__;
            }
            it_404++;
            if(it_404>=self->size) {
                it_404=0;
            }
            else {
                if(it_404==hash_403) {
                    __result193__ = __result_obj__ = default_value;
                    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    return __result193__;
                }
            }
        }
        else {
            __result194__ = __result_obj__ = default_value;
            default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            return __result194__;
        }
    }
    __result195__ = __result_obj__ = default_value;
    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result195__;
}

static void sClassNode_finalize(struct sClassNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mClass!=((void*)0)) {
        come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mMethods!=((void*)0)) {
        come_call_finalizer3(self->mMethods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
void* __result_obj__;
struct sClassNode* __result198__;
void* __right_value381 = (void*)0;
struct sClassNode* result_415;
void* __right_value382 = (void*)0;
char* __dec_obj105;
void* __right_value383 = (void*)0;
char* __dec_obj106;
void* __right_value384 = (void*)0;
struct sClass* __dec_obj107;
void* __right_value385 = (void*)0;
struct list$1sNodeph* __dec_obj108;
struct sClassNode* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_415, 0, sizeof(struct sClassNode*));
    if(self==(void*)0) {
        __result198__ = __result_obj__ = (void*)0;
        return __result198__;
    }
    result_415=(struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "sClassNode"));
    if(self!=((void*)0)) {
        result_415->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj105=result_415->sname;
        result_415->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj106=result_415->mName;
        result_415->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj107=result_415->mClass;
        result_415->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        come_call_finalizer3(__dec_obj107,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mMethods!=((void*)0)) {
        __dec_obj108=result_415->mMethods;
        result_415->mMethods=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mMethods));
        come_call_finalizer3(__dec_obj108,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_415->mOutput=self->mOutput;
    }
    __result199__ = __result_obj__ = result_415;
    come_call_finalizer3(result_415,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result199__;
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool define_struct_416;
char* p_417;
int sline_418;
void* __right_value388 = (void*)0;
char* type_name_419;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
char* type_name_420;
void* __right_value393 = (void*)0;
struct sNode* __result202__;
void* __right_value394 = (void*)0;
struct sNode* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
    define_struct_416=(_Bool)0;
    {
        p_417=info->p;
        sline_418=info->sline;
        if(charp_operator_equals(buf,"struct")) {
            if(xisalpha(*info->p)||*info->p==95) {
                type_name_419=(char*)come_increment_ref_count(parse_word(info));
                if(parsecmp("extends",info)) {
                    ((char*)(__right_value389=parse_word(info)));
                    __right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    ((char*)(__right_value390=parse_word(info)));
                    __right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(*info->p==123) {
                    ((char*)(__right_value391=skip_block(info)));
                    __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(*info->p==59) {
                        define_struct_416=(_Bool)1;
                    }
                }
                type_name_419 = come_decrement_ref_count2(type_name_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_417;
        info->sline=sline_418;
    }
    if(define_struct_416) {
        type_name_420=(char*)come_increment_ref_count(parse_word(info));
        __result202__ = __result_obj__ = ((struct sNode*)(__right_value393=parse_struct((char*)come_increment_ref_count(type_name_420),info)));
        type_name_420 = come_decrement_ref_count2(type_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(__right_value393) { __right_value393 = come_decrement_ref_count2(__right_value393, ((struct sNode*)__right_value393)->finalize, ((struct sNode*)__right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result202__;
        type_name_420 = come_decrement_ref_count2(type_name_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result203__ = __result_obj__ = ((struct sNode*)(__right_value394=string_node_v13(buf,head,head_sline,info)));
    if(__right_value394) { __right_value394 = come_decrement_ref_count2(__right_value394, ((struct sNode*)__right_value394)->finalize, ((struct sNode*)__right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result203__;
}

