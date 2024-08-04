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
struct __current_stack1__
{
    int* n_56;
    char** msg2_50;
    char** p_52;
    char** last_lf_53;
    struct sInfo** info;
    char** msg;
};
struct __current_stack2__
{
    struct sInfo* info_304;
    struct buffer** clang_option_287;
    struct buffer** cpp_option_288;
    struct list$1charph** files_289;
    struct list$1charph** object_files_290;
    _Bool* output_object_file_291;
    _Bool* output_cpp_file_292;
    _Bool* output_source_file_flag_293;
    char** output_file_name_294;
    _Bool* verbose_295;
    _Bool* come_debug_296;
    _Bool* come_malloc_297;
    _Bool* come_str_298;
    int* argc;
    char*** argv;
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

_Bool sNodeBase_terminated(struct sNodeBase* self);

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

static void write_source_file_position_to_source(struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);

void err_msg(struct sInfo* info, char* msg, ...);

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1charph* list$1charph_map2(struct list$1charph* self, void* parent, char* (*block)(void*,char*));
char* method_block1_02transpilec(struct __current_stack1__* parent, char* it);

static char* list$1charph_join(struct list$1charph* self, char* sep);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1charph_length(struct list$1charph* self);
static void va_list_finalize(va_list self);
int transpile_v2(struct sInfo* info);

_Bool output_source_file_v2(struct sInfo* info);

static void clear_tmp_file(struct sInfo* info);
static void clear_tmp_file_without_object_file(struct sInfo* info);
static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info);
static _Bool cpp(struct sInfo* info);
static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files);
static _Bool linker(struct sInfo* info, struct list$1charph* object_files);
_Bool new_project(int argc, char** argv);

_Bool run_project(int argc, char** argv);

_Bool make_header_project(int argc, char** argv);

_Bool compile_project(int argc, char** argv);

_Bool debug_run_project(int argc, char** argv);

_Bool clean_project(int argc, char** argv);

_Bool install_project(int argc, char** argv, char* prefix);

static void init_classes(struct sInfo* info);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
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
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
int come_main_v2(int argc, char** argv);

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void map$2charphsFunph_finalize(struct map$2charphsFunph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self);
static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self);
static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self);
static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self);
static void map$2charphsClassph_finalize(struct map$2charphsClassph* self);
static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self);
static void sClassModule_finalize(struct sClassModule* self);
static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self);
static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self);
static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self);
static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self);
static void sModule_finalize(struct sModule* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void sInfo_finalize(struct sInfo* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
void method_block2_02transpilec(struct __current_stack2__* parent);

// uniq global variable
// source head3
_Bool gComeGC=(_Bool)0;
_Bool gComeLink=(_Bool)1;
_Bool gComeC=(_Bool)1;
char* gProgramName=((void*)0);
_Bool gCommonHeader=(_Bool)0;
_Bool gComeMalloc=(_Bool)0;
_Bool gComeDebug=(_Bool)0;
_Bool gComeOriginalSourcePosition=(_Bool)1;
int gComeDebugStackFrameID=0;
static char* RM="rm -rf";

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










static void write_source_file_position_to_source(struct sInfo* info){
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
void* __right_value81 = (void*)0;
    if(gComeOriginalSourcePosition) {
        if(info->writing_source_file_position) {
            add_come_code(info,((char*)(__right_value81=xsprintf("# \%s \"\%s\"\n",((char*)(__right_value79=int_to_string(info->sline))),((char*)(__right_value80=string_to_string(info->sname)))))));
            __right_value79 = come_decrement_ref_count2(__right_value79, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value80 = come_decrement_ref_count2(__right_value80, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value81 = come_decrement_ref_count2(__right_value81, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            info->writing_source_file_position=(_Bool)0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info){
void* __right_value82 = (void*)0;
char* sname_47;
int sline_48;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
char* __dec_obj12;
_Bool result_49;
void* __right_value85 = (void*)0;
char* __dec_obj13;
_Bool __result45__;
memset(&sname_47, 0, sizeof(char*));
    sname_47=(char*)come_increment_ref_count(((char*)(__right_value82=__builtin_string(info->sname))));
    sline_48=info->sline;
    __dec_obj12=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(__right_value84=__builtin_string(((char*)(__right_value83=node->sname(node->_protocol_obj)))))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value83 = come_decrement_ref_count2(__right_value83, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    info->sline=node->sline(node->_protocol_obj);
    write_source_file_position_to_source(info);
    result_49=node->compile(node->_protocol_obj,info);
    __dec_obj13=info->sname;
    info->sname=(char*)come_increment_ref_count(((char*)(__right_value85=__builtin_string(sname_47))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_48;
    __result45__ = result_49;
    sname_47 = come_decrement_ref_count2(sname_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result45__;
    sname_47 = come_decrement_ref_count2(sname_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void err_msg(struct sInfo* info, char* msg, ...){
char* msg2_50;
va_list args_51;
char* p_52;
char* last_lf_53;
int col_54;
int col_55;
int n_56;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
void* __right_value93 = (void*)0;
struct __current_stack1__ __current_stack1__;
void* __right_value98 = (void*)0;
void* __right_value102 = (void*)0;
void* __right_value103 = (void*)0;
memset(&msg2_50, 0, sizeof(char*));
memset(&args_51, 0, sizeof(va_list));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
    if(!info->no_output_err) {
        __builtin_va_start(args_51,msg);
        vasprintf(&msg2_50,msg,args_51);
        __builtin_va_end(args_51);
        p_52=info->p;
        last_lf_53=((void*)0);
        while(p_52>=info->head) {
            if(*p_52==10) {
                last_lf_53=p_52;
                break;
            }
            p_52--;
        }
        if(last_lf_53) {
            col_54=info->p-last_lf_53;
            printf("%s %d %d: %s\n",info->sname,info->sline,col_54,msg2_50);
        }
        else {
            col_55=info->p-info->head;
            printf("%s %d %d: %s\n",info->sname,info->sline,col_55,msg2_50);
        }
        info->err_num++;
        stackframe();
        if(info->come_fun) {
            n_56=info->sline-5;
            __current_stack1__.n_56 = &n_56;
            __current_stack1__.msg2_50 = &msg2_50;
            __current_stack1__.p_52 = &p_52;
            __current_stack1__.last_lf_53 = &last_lf_53;
            __current_stack1__.info = &info;
            __current_stack1__.msg = &msg;
            ((char*)(__right_value103=string_puts(((char*)(__right_value102=list$1charph_join(((struct list$1charph*)(__right_value98=list$1charph_map2(((struct list$1charph*)(__right_value93=list$1charph_sublist(((struct list$1charph*)(__right_value87=string_split_char(((char*)(__right_value86=buffer_to_string(info->original_source))),10))),n_56,n_56+10))),&__current_stack1__,(void*)method_block1_02transpilec))),"\n"))))));
            __right_value86 = come_decrement_ref_count2(__right_value86, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value87,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value93,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value98,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            __right_value102 = come_decrement_ref_count2(__right_value102, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value103 = come_decrement_ref_count2(__right_value103, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        free(msg2_50);
        come_call_finalizer3((&args_51),va_list_finalize, 1, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
struct list$1charph* result_57;
struct list_item$1charph* it_60;
int i_61;
struct list$1charph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_57, 0, sizeof(struct list$1charph*));
memset(&it_60, 0, sizeof(struct list_item$1charph*));
                result_57=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value89=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value88=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 635, "list$1charph"))))))));
                come_call_finalizer3(__right_value88,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(begin<0) {
                    begin+=self->len;
                }
                if(tail<0) {
                    tail+=self->len+1;
                }
                if(begin<0) {
                    begin=0;
                }
                if(tail>=self->len) {
                    tail=self->len;
                }
                it_60=self->head;
                i_61=0;
                while(it_60!=((void*)0)) {
                    if(i_61>=begin&&i_61<tail) {
                        list$1charph_push_back(result_57,(char*)come_increment_ref_count(it_60->item));
                    }
                    it_60=it_60->next;
                    i_61++;
                }
                __result48__ = __result_obj__ = result_57;
                come_call_finalizer3(result_57,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result48__;
                come_call_finalizer3(result_57,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result46__ = __result_obj__ = self;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result46__;
                    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_58;
struct list_item$1charph* prev_it_59;
memset(&it_58, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_59, 0, sizeof(struct list_item$1charph*));
                        it_58=self->head;
                        while(it_58!=((void*)0)) {
                            prev_it_59=it_58;
                            it_58=it_58->next;
                            come_call_finalizer3(prev_it_59,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
                                if(self!=((void*)0)&&self->item!=((void*)0)) {
                                    self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
void* __right_value90 = (void*)0;
struct list_item$1charph* litem_62;
char* __dec_obj14;
void* __right_value91 = (void*)0;
struct list_item$1charph* litem_63;
char* __dec_obj15;
void* __right_value92 = (void*)0;
struct list_item$1charph* litem_64;
char* __dec_obj16;
struct list$1charph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_62, 0, sizeof(struct list_item$1charph*));
memset(&litem_63, 0, sizeof(struct list_item$1charph*));
memset(&litem_64, 0, sizeof(struct list_item$1charph*));
                            if(self->len==0) {
                                litem_62=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value90=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 219, "list_item$1charph"))));
                                come_call_finalizer3(__right_value90,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_62->prev=((void*)0);
                                litem_62->next=((void*)0);
                                __dec_obj14=litem_62->item;
                                litem_62->item=(char*)come_increment_ref_count(item);
                                __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_62;
                                self->head=litem_62;
                            }
                            else {
                                if(self->len==1) {
                                    litem_63=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value91=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 229, "list_item$1charph"))));
                                    come_call_finalizer3(__right_value91,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_63->prev=self->head;
                                    litem_63->next=((void*)0);
                                    __dec_obj15=litem_63->item;
                                    litem_63->item=(char*)come_increment_ref_count(item);
                                    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail=litem_63;
                                    self->head->next=litem_63;
                                }
                                else {
                                    litem_64=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value92=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 239, "list_item$1charph"))));
                                    come_call_finalizer3(__right_value92,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_64->prev=self->tail;
                                    litem_64->next=((void*)0);
                                    __dec_obj16=litem_64->item;
                                    litem_64->item=(char*)come_increment_ref_count(item);
                                    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    self->tail->next=litem_64;
                                    self->tail=litem_64;
                                }
                            }
                            self->len++;
                            __result47__ = __result_obj__ = self;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                            return __result47__;
                            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_map2(struct list$1charph* self, void* parent, char* (*block)(void*,char*)){
void* __result_obj__;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
struct list$1charph* result_65;
struct list_item$1charph* it_66;
void* __right_value96 = (void*)0;
struct list$1charph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_65, 0, sizeof(struct list$1charph*));
memset(&it_66, 0, sizeof(struct list_item$1charph*));
                result_65=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value95=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value94=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 929, "list$1charph"))))))));
                come_call_finalizer3(__right_value94,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_66=self->head;
                while(it_66!=((void*)0)) {
                    list$1charph_push_back(result_65,(char*)come_increment_ref_count(((char*)(__right_value96=block(parent,it_66->item)))));
                    __right_value96 = come_decrement_ref_count2(__right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_66=it_66->next;
                }
                __result49__ = __result_obj__ = result_65;
                come_call_finalizer3(result_65,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                return __result49__;
                come_call_finalizer3(result_65,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

char* method_block1_02transpilec(struct __current_stack1__* parent, char* it){
void* __result_obj__;
void* __right_value97 = (void*)0;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
                __result50__ = __result_obj__ = ((char*)(__right_value97=xsprintf("%d %s",++(*(parent->n_56)),it)));
                __right_value97 = come_decrement_ref_count2(__right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result50__;
}

static char* list$1charph_join(struct list$1charph* self, char* sep){
void* __result_obj__;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
struct buffer* buf_67;
int n_68;
char* it_71;
void* __right_value101 = (void*)0;
char* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&buf_67, 0, sizeof(struct buffer*));
                buf_67=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value100=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value99=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1024, "buffer"))))))));
                come_call_finalizer3(__right_value99,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                n_68=0;
                for(                it_71=list$1charph_begin(self);                !list$1charph_end(self);                it_71=list$1charph_next(self)                ){
                    buffer_append_str(buf_67,it_71);
                    if(n_68<list$1charph_length(self)-1) {
                        buffer_append_str(buf_67,sep);
                    }
                    n_68++;
                }
                __result57__ = __result_obj__ = ((char*)(__right_value101=buffer_to_string(buf_67)));
                come_call_finalizer3(buf_67,buffer_finalize, 0, 0, 0, 0, (void*)0);
                __right_value101 = come_decrement_ref_count2(__right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                return __result57__;
                come_call_finalizer3(buf_67,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
char* result_69;
char* __result51__;
char* __result52__;
char* result_70;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_69, 0, sizeof(char*));
memset(&result_70, 0, sizeof(char*));
                    if(self==((void*)0)) {
                        memset(&result_69,0,sizeof(char*));
                        __result51__ = __result_obj__ = result_69;
                        return __result51__;
                    }
                    self->it=self->head;
                    if(self->it) {
                        __result52__ = __result_obj__ = self->it->item;
                        return __result52__;
                    }
                    memset(&result_70,0,sizeof(char*));
                    __result53__ = __result_obj__ = result_70;
                    return __result53__;
}

static _Bool list$1charph_end(struct list$1charph* self){
                    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
char* result_72;
char* __result54__;
char* __result55__;
char* result_73;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_72, 0, sizeof(char*));
memset(&result_73, 0, sizeof(char*));
                    if(self==((void*)0)||self->it==((void*)0)) {
                        memset(&result_72,0,sizeof(char*));
                        __result54__ = __result_obj__ = result_72;
                        return __result54__;
                    }
                    self->it=self->it->next;
                    if(self->it) {
                        __result55__ = __result_obj__ = self->it->item;
                        return __result55__;
                    }
                    memset(&result_73,0,sizeof(char*));
                    __result56__ = __result_obj__ = result_73;
                    return __result56__;
}

static int list$1charph_length(struct list$1charph* self){
                        if(self==((void*)0)) {
                            return 0;
                        }
                        return self->len;
}

static void va_list_finalize(va_list self){
}

int transpile_v2(struct sInfo* info){
    return 0;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __right_value104 = (void*)0;
char* output_file_name_74;
void* __right_value105 = (void*)0;
_Bool __result58__;
memset(&output_file_name_74, 0, sizeof(char*));
    output_file_name_74=(char*)come_increment_ref_count(((char*)(__right_value104=xsprintf("%s.c",info->sname))));
    string_write(((char*)(__right_value105=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_74,(_Bool)0);
    __right_value105 = come_decrement_ref_count2(__right_value105, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result58__ = (_Bool)1;
    output_file_name_74 = come_decrement_ref_count2(output_file_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result58__;
    output_file_name_74 = come_decrement_ref_count2(output_file_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file(struct sInfo* info){
char* input_file_name_75;
void* __right_value106 = (void*)0;
memset(&input_file_name_75, 0, sizeof(char*));
    input_file_name_75=(char*)come_increment_ref_count(info->sname);
    if(input_file_name_75!=((void*)0)&&string_operator_not_equals(input_file_name_75,"")) {
        system(((char*)(__right_value106=xsprintf("%s %s.*",RM,input_file_name_75))));
        __right_value106 = come_decrement_ref_count2(__right_value106, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    input_file_name_75 = come_decrement_ref_count2(input_file_name_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file_without_object_file(struct sInfo* info){
char* input_file_name_76;
void* __right_value107 = (void*)0;
memset(&input_file_name_76, 0, sizeof(char*));
    input_file_name_76=(char*)come_increment_ref_count(info->sname);
    if(input_file_name_76!=((void*)0)&&string_operator_not_equals(input_file_name_76,"")) {
        system(((char*)(__right_value107=xsprintf("%s %s.i* %s.c*",RM,input_file_name_76,input_file_name_76))));
        __right_value107 = come_decrement_ref_count2(__right_value107, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    input_file_name_76 = come_decrement_ref_count2(input_file_name_76, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info){
char* input_file_name_77;
void* __right_value108 = (void*)0;
memset(&input_file_name_77, 0, sizeof(char*));
    input_file_name_77=(char*)come_increment_ref_count(info->sname);
    if(input_file_name_77!=((void*)0)&&string_operator_not_equals(input_file_name_77,"")) {
        system(((char*)(__right_value108=xsprintf("%s %s.i* %s.c.out",RM,input_file_name_77,input_file_name_77))));
        __right_value108 = come_decrement_ref_count2(__right_value108, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    input_file_name_77 = come_decrement_ref_count2(input_file_name_77, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool cpp(struct sInfo* info){
char* input_file_name_78;
char* output_file_name_79;
void* __right_value109 = (void*)0;
char* __dec_obj17;
void* __right_value110 = (void*)0;
char* __dec_obj18;
void* __right_value111 = (void*)0;
char* cmd_80;
_Bool exist_common_h_81;
struct _IO_FILE* f_82;
int rc_83;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
char* cmd2_84;
int rc_85;
void* __right_value114 = (void*)0;
char* command2_86;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
char* cmd3_87;
int rc_88;
void* __right_value117 = (void*)0;
char* command2_89;
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
char* cmd4_90;
void* __right_value120 = (void*)0;
char* command_91;
void* __right_value121 = (void*)0;
char* command2_92;
_Bool __result59__;
memset(&input_file_name_78, 0, sizeof(char*));
memset(&output_file_name_79, 0, sizeof(char*));
memset(&cmd_80, 0, sizeof(char*));
memset(&f_82, 0, sizeof(struct _IO_FILE*));
memset(&cmd2_84, 0, sizeof(char*));
memset(&command2_86, 0, sizeof(char*));
memset(&cmd3_87, 0, sizeof(char*));
memset(&command2_89, 0, sizeof(char*));
memset(&cmd4_90, 0, sizeof(char*));
memset(&command_91, 0, sizeof(char*));
memset(&command2_92, 0, sizeof(char*));
    input_file_name_78=(char*)come_increment_ref_count(info->sname);
    if(!info->output_header_file&&info->output_file_name) {
        __dec_obj17=output_file_name_79;
        output_file_name_79=(char*)come_increment_ref_count(((char*)(__right_value109=string_operator_add(info->output_file_name,".i"))));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj18=output_file_name_79;
        output_file_name_79=(char*)come_increment_ref_count(((char*)(__right_value110=string_operator_add(info->sname,".i"))));
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    cmd_80=(char*)come_increment_ref_count(((char*)(__right_value111=xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"))));
    exist_common_h_81=(_Bool)0;
    {
        f_82=fopen("common.h","r");
        if(f_82) {
            exist_common_h_81=(_Bool)1;
        }
        if(string_operator_equals(info->output_file_name,"common.h")) {
            exist_common_h_81=(_Bool)0;
        }
        if(f_82) {
            fclose(f_82);
        }
    }
    if(!gCommonHeader) {
        exist_common_h_81=(_Bool)0;
    }
    rc_83=system(cmd_80);
    if(rc_83==0) {
        cmd2_84=(char*)come_increment_ref_count(((char*)(__right_value113=xsprintf("gcc -E -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -D__DARWIN_ARM__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_81?((char*)(__right_value112=__builtin_string(" -include common.h "))):"",input_file_name_78,output_file_name_79,output_file_name_79))));
        __right_value112 = come_decrement_ref_count2(__right_value112, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(info->verbose) {
            puts(cmd2_84);
        }
        rc_85=system(cmd2_84);
        if(rc_85!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_84);
            exit(5);
        }
        command2_86=(char*)come_increment_ref_count(((char*)(__right_value114=xsprintf("grep error\\: %s.cpp.out",output_file_name_79))));
        if(info->verbose) {
            puts(command2_86);
        }
        (void)system(command2_86);
        cmd2_84 = come_decrement_ref_count2(cmd2_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_86 = come_decrement_ref_count2(command2_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        cmd3_87=(char*)come_increment_ref_count(((char*)(__right_value116=xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_81?((char*)(__right_value115=__builtin_string(" -include common.h "))):"",input_file_name_78,output_file_name_79,output_file_name_79))));
        __right_value115 = come_decrement_ref_count2(__right_value115, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(info->verbose) {
            puts(cmd3_87);
        }
        rc_88=system(cmd3_87);
        command2_89=(char*)come_increment_ref_count(((char*)(__right_value117=xsprintf("grep error\\: %s.cpp.out",output_file_name_79))));
        if(info->verbose) {
            puts(command2_89);
        }
        (void)system(command2_89);
        if(rc_88!=0) {
            cmd4_90=(char*)come_increment_ref_count(((char*)(__right_value119=xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -C %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_81?((char*)(__right_value118=__builtin_string(" -include common.h "))):"",input_file_name_78,output_file_name_79,output_file_name_79))));
            __right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            command_91=(char*)come_increment_ref_count(((char*)(__right_value120=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_79,input_file_name_78,info->clang_option,input_file_name_78))));
            if(info->verbose) {
                puts(cmd4_90);
            }
            rc_88=system(cmd4_90);
            command2_92=(char*)come_increment_ref_count(((char*)(__right_value121=xsprintf("grep error\\: %s.cpp.out",output_file_name_79))));
            if(info->verbose) {
                puts(command2_92);
            }
            (void)system(command2_92);
            if(rc_88!=0) {
                printf("failed to cpp(2) (%s)\n",cmd4_90);
                exit(5);
            }
            cmd4_90 = come_decrement_ref_count2(cmd4_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command_91 = come_decrement_ref_count2(command_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command2_92 = come_decrement_ref_count2(command2_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        cmd3_87 = come_decrement_ref_count2(cmd3_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_89 = come_decrement_ref_count2(command2_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result59__ = (_Bool)1;
    input_file_name_78 = come_decrement_ref_count2(input_file_name_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_79 = come_decrement_ref_count2(output_file_name_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_80 = come_decrement_ref_count2(cmd_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result59__;
    input_file_name_78 = come_decrement_ref_count2(input_file_name_78, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_79 = come_decrement_ref_count2(output_file_name_79, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_80 = come_decrement_ref_count2(cmd_80, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __right_value122 = (void*)0;
char* input_file_name_93;
char* output_file_name_94;
void* __right_value123 = (void*)0;
char* __dec_obj19;
void* __right_value124 = (void*)0;
char* __dec_obj20;
void* __right_value125 = (void*)0;
char* command_95;
int rc_96;
void* __right_value126 = (void*)0;
char* command2_97;
_Bool __result60__;
void* __right_value127 = (void*)0;
_Bool __result61__;
memset(&input_file_name_93, 0, sizeof(char*));
memset(&output_file_name_94, 0, sizeof(char*));
memset(&command_95, 0, sizeof(char*));
memset(&command2_97, 0, sizeof(char*));
    input_file_name_93=(char*)come_increment_ref_count(((char*)(__right_value122=string_operator_add(info->sname,".c"))));
    output_file_name_94=((void*)0);
    if(info->output_file_name&&output_object_file) {
        __dec_obj19=output_file_name_94;
        output_file_name_94=(char*)come_increment_ref_count(((char*)(__right_value123=__builtin_string(info->output_file_name))));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj20=output_file_name_94;
        output_file_name_94=(char*)come_increment_ref_count(((char*)(__right_value124=string_operator_add(info->sname,".o"))));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_95=(char*)come_increment_ref_count(((char*)(__right_value125=xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_94,input_file_name_93,info->clang_option,input_file_name_93))));
    if(info->verbose) {
        puts(command_95);
    }
    rc_96=system(command_95);
    command2_97=(char*)come_increment_ref_count(((char*)(__right_value126=xsprintf("grep error\\: %s.out",input_file_name_93))));
    if(info->verbose) {
        puts(command2_97);
    }
    (void)system(command2_97);
    if(rc_96!=0) {
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        __result60__ = (_Bool)0;
        input_file_name_93 = come_decrement_ref_count2(input_file_name_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        output_file_name_94 = come_decrement_ref_count2(output_file_name_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command_95 = come_decrement_ref_count2(command_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_97 = come_decrement_ref_count2(command2_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result60__;
    }
    if(!output_object_file) {
        list$1charph_push_back(object_files,(char*)come_increment_ref_count(((char*)(__right_value127=__builtin_string(output_file_name_94)))));
        __right_value127 = come_decrement_ref_count2(__right_value127, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    __result61__ = (_Bool)1;
    input_file_name_93 = come_decrement_ref_count2(input_file_name_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_94 = come_decrement_ref_count2(output_file_name_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_95 = come_decrement_ref_count2(command_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command2_97 = come_decrement_ref_count2(command2_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result61__;
    input_file_name_93 = come_decrement_ref_count2(input_file_name_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_94 = come_decrement_ref_count2(output_file_name_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_95 = come_decrement_ref_count2(command_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command2_97 = come_decrement_ref_count2(command2_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
char* output_file_name_98;
void* __right_value128 = (void*)0;
char* __dec_obj21;
void* __right_value129 = (void*)0;
char* __dec_obj22;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct buffer* command_99;
void* __right_value132 = (void*)0;
struct list$1charph* o2_saved_100;
char* it_101;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
char* cmd_102;
int rc_103;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
_Bool __result62__;
_Bool __result63__;
memset(&output_file_name_98, 0, sizeof(char*));
memset(&command_99, 0, sizeof(struct buffer*));
memset(&o2_saved_100, 0, sizeof(struct list$1charph*));
memset(&cmd_102, 0, sizeof(char*));
    output_file_name_98=((void*)0);
    if(info->output_file_name) {
        __dec_obj21=output_file_name_98;
        output_file_name_98=(char*)come_increment_ref_count(((char*)(__right_value128=__builtin_string(info->output_file_name))));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj22=output_file_name_98;
        output_file_name_98=(char*)come_increment_ref_count(((char*)(__right_value129=xnoextname(info->sname))));
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_99=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value131=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value130=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 265, "buffer"))))))));
    come_call_finalizer3(__right_value130,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(command_99,((char*)(__right_value132=xsprintf("clang -o %s -L%s/lib -L%s/lib ",output_file_name_98,getenv("HOME"),"/usr/local/"))));
    __right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_100=(object_files),it_101=list$1charph_begin((o2_saved_100));    !list$1charph_end((o2_saved_100));    it_101=list$1charph_next((o2_saved_100))    ){
        buffer_append_str(command_99,((char*)(__right_value133=xsprintf("%s ",it_101))));
        __right_value133 = come_decrement_ref_count2(__right_value133, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(gComeGC) {
        buffer_append_str(command_99,"-L/usr/local/lib -lneo-c-gc ");
    }
    else {
        if(gComeLink) {
            buffer_append_str(command_99,"-L/usr/local/lib -lneo-c ");
        }
        else {
            buffer_append_str(command_99,"-L/usr/local/lib ");
        }
    }
    cmd_102=(char*)come_increment_ref_count(((char*)(__right_value134=xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"))));
    rc_103=system(cmd_102);
    if(rc_103==0) {
        buffer_append_str(command_99," -L/opt/homebrew/opt/pcre/lib ");
    }
    buffer_append_str(command_99,((char*)(__right_value135=xsprintf(" %s ",info->clang_option))));
    __right_value135 = come_decrement_ref_count2(__right_value135, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(gComeGC) {
        buffer_append_str(command_99,((char*)(__right_value136=xsprintf(" -L/opt/homebrew/opt/boehmgc/lib -lgc "))));
        __right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(info->verbose) {
        puts(((char*)(__right_value137=buffer_to_string(command_99))));
        __right_value137 = come_decrement_ref_count2(__right_value137, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    rc_103=system(((char*)(__right_value138=buffer_to_string(command_99))));
    __right_value138 = come_decrement_ref_count2(__right_value138, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(rc_103!=0) {
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        __result62__ = (_Bool)0;
        output_file_name_98 = come_decrement_ref_count2(output_file_name_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(command_99,buffer_finalize, 0, 0, 0, 0, (void*)0);
        cmd_102 = come_decrement_ref_count2(cmd_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result62__;
    }
    __result63__ = (_Bool)1;
    output_file_name_98 = come_decrement_ref_count2(output_file_name_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(command_99,buffer_finalize, 0, 0, 0, 0, (void*)0);
    cmd_102 = come_decrement_ref_count2(cmd_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result63__;
    output_file_name_98 = come_decrement_ref_count2(output_file_name_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(command_99,buffer_finalize, 0, 0, 0, 0, (void*)0);
    cmd_102 = come_decrement_ref_count2(cmd_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool new_project(int argc, char** argv){
void* __right_value139 = (void*)0;
char* project_name_104;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
char* project_name_debug_105;
void* __right_value143 = (void*)0;
char* cc_106;
void* __right_value144 = (void*)0;
char* install_107;
void* __right_value145 = (void*)0;
char* libs_108;
void* __right_value146 = (void*)0;
char* os_109;
void* __right_value147 = (void*)0;
char* prefix_110;
void* __right_value148 = (void*)0;
char* cflags_111;
void* __right_value149 = (void*)0;
char* cflags_debug_112;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
_Bool _or_conditional1;
_Bool __exception_result_var_b1;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
_Bool __result64__;
memset(&project_name_104, 0, sizeof(char*));
memset(&project_name_debug_105, 0, sizeof(char*));
memset(&cc_106, 0, sizeof(char*));
memset(&install_107, 0, sizeof(char*));
memset(&libs_108, 0, sizeof(char*));
memset(&os_109, 0, sizeof(char*));
memset(&prefix_110, 0, sizeof(char*));
memset(&cflags_111, 0, sizeof(char*));
memset(&cflags_debug_112, 0, sizeof(char*));
    project_name_104=(char*)come_increment_ref_count(((char*)(__right_value139=__builtin_string(argv[2]))));
    project_name_debug_105=(char*)come_increment_ref_count(((char*)(__right_value142=string_operator_add(((char*)(__right_value140=__builtin_string(argv[2]))),((char*)(__right_value141=__builtin_string("-debug")))))));
    __right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value141 = come_decrement_ref_count2(__right_value141, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    cc_106=(char*)come_increment_ref_count(((char*)(__right_value143=__builtin_string("neo-c"))));
    install_107=(char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string("install"))));
    libs_108=(char*)come_increment_ref_count(((char*)(__right_value145=__builtin_string("-lpcre"))));
    os_109=(char*)come_increment_ref_count(((char*)(__right_value146=__builtin_string("linux"))));
    prefix_110=(char*)come_increment_ref_count(((char*)(__right_value147=__builtin_string("/usr/local/"))));
    cflags_111=(char*)come_increment_ref_count(((char*)(__right_value148=__builtin_string(" -common-header -O2 "))));
    cflags_debug_112=(char*)come_increment_ref_count(((char*)(__right_value149=__builtin_string(" -common-header -gdwarf-4 -cg "))));
    if((_or_conditional1=(system(((char*)(__right_value151=xsprintf("mkdir \%s",((char*)(__right_value150=string_to_string(project_name_104))))))))),    (come_decrement_ref_count2(__right_value150, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    (come_decrement_ref_count2(__right_value151, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    _or_conditional1 != 0) {
        (come_push_stackframe("02transpile.c", 317, 0),__exception_result_var_b1=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b1);
    }
    charp_write(((char*)(__right_value178=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nprefix=\%s\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: $(TARGET)\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader: common.h\n\ncommon.h: $(SINGLE_SRCS)\n\tneo-c header -common-header $(SINGLE_SRCS)\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ncompile: \%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(__right_value152=string_to_string(prefix_110))),((char*)(__right_value153=string_to_string(project_name_104))),((char*)(__right_value154=string_to_string(project_name_104))),((char*)(__right_value155=string_to_string(project_name_104))),((char*)(__right_value156=string_to_string(project_name_104))),((char*)(__right_value157=string_to_string(cc_106))),((char*)(__right_value158=string_to_string(install_107))),((char*)(__right_value159=string_to_string(cflags_111))),((char*)(__right_value160=string_to_string(cflags_debug_112))),((char*)(__right_value161=string_to_string(libs_108))),((char*)(__right_value162=string_to_string(os_109))),((char*)(__right_value163=string_to_string(prefix_110))),((char*)(__right_value164=string_to_string(project_name_104))),((char*)(__right_value165=string_to_string(project_name_debug_105))),((char*)(__right_value166=string_to_string(project_name_104))),((char*)(__right_value167=string_to_string(project_name_104))),((char*)(__right_value168=string_to_string(project_name_104))),((char*)(__right_value169=string_to_string(project_name_104))),((char*)(__right_value170=string_to_string(project_name_debug_105))),((char*)(__right_value171=string_to_string(project_name_104))),((char*)(__right_value172=string_to_string(project_name_104))),((char*)(__right_value173=string_to_string(project_name_104))),((char*)(__right_value174=string_to_string(project_name_104))),((char*)(__right_value175=string_to_string(project_name_104))),((char*)(__right_value176=string_to_string(project_name_debug_105))),((char*)(__right_value177=string_to_string(project_name_debug_105)))))),((char*)(__right_value180=xsprintf("\%s/Makefile",((char*)(__right_value179=string_to_string(project_name_104)))))),(_Bool)0);
    __right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value153 = come_decrement_ref_count2(__right_value153, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value154 = come_decrement_ref_count2(__right_value154, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value155 = come_decrement_ref_count2(__right_value155, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value156 = come_decrement_ref_count2(__right_value156, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value157 = come_decrement_ref_count2(__right_value157, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value159 = come_decrement_ref_count2(__right_value159, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value160 = come_decrement_ref_count2(__right_value160, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value161 = come_decrement_ref_count2(__right_value161, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value162 = come_decrement_ref_count2(__right_value162, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value163 = come_decrement_ref_count2(__right_value163, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value164 = come_decrement_ref_count2(__right_value164, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value166 = come_decrement_ref_count2(__right_value166, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value168 = come_decrement_ref_count2(__right_value168, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value169 = come_decrement_ref_count2(__right_value169, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value172 = come_decrement_ref_count2(__right_value172, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value174 = come_decrement_ref_count2(__right_value174, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value175 = come_decrement_ref_count2(__right_value175, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value176 = come_decrement_ref_count2(__right_value176, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value177 = come_decrement_ref_count2(__right_value177, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value178 = come_decrement_ref_count2(__right_value178, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value179 = come_decrement_ref_count2(__right_value179, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value180 = come_decrement_ref_count2(__right_value180, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result64__ = (_Bool)1;
    project_name_104 = come_decrement_ref_count2(project_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_105 = come_decrement_ref_count2(project_name_debug_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_106 = come_decrement_ref_count2(cc_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_107 = come_decrement_ref_count2(install_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_108 = come_decrement_ref_count2(libs_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_109 = come_decrement_ref_count2(os_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_110 = come_decrement_ref_count2(prefix_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_111 = come_decrement_ref_count2(cflags_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_112 = come_decrement_ref_count2(cflags_debug_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result64__;
    project_name_104 = come_decrement_ref_count2(project_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_105 = come_decrement_ref_count2(project_name_debug_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_106 = come_decrement_ref_count2(cc_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_107 = come_decrement_ref_count2(install_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_108 = come_decrement_ref_count2(libs_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_109 = come_decrement_ref_count2(os_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_110 = come_decrement_ref_count2(prefix_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_111 = come_decrement_ref_count2(cflags_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_112 = come_decrement_ref_count2(cflags_debug_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool run_project(int argc, char** argv){
_Bool _or_conditional2;
_Bool __exception_result_var_b2;
    if((_or_conditional2=(system("make run"))),    _or_conditional2 != 0) {
        (come_push_stackframe("02transpile.c", 418, 1),__exception_result_var_b2=die("system"), come_pop_stackframe(), __exception_result_var_b2);
    }
    return (_Bool)1;
}

_Bool make_header_project(int argc, char** argv){
_Bool _or_conditional3;
_Bool __exception_result_var_b3;
    if((_or_conditional3=(system("make header"))),    _or_conditional3 != 0) {
        (come_push_stackframe("02transpile.c", 425, 2),__exception_result_var_b3=die("system"), come_pop_stackframe(), __exception_result_var_b3);
    }
    return (_Bool)1;
}

_Bool compile_project(int argc, char** argv){
_Bool _or_conditional4;
_Bool __exception_result_var_b4;
    if((_or_conditional4=(system("make compile"))),    _or_conditional4 != 0) {
        (come_push_stackframe("02transpile.c", 432, 3),__exception_result_var_b4=die("system"), come_pop_stackframe(), __exception_result_var_b4);
    }
    return (_Bool)1;
}

_Bool debug_run_project(int argc, char** argv){
_Bool _or_conditional5;
_Bool __exception_result_var_b5;
    if((_or_conditional5=(system("make debug"))),    _or_conditional5 != 0) {
        (come_push_stackframe("02transpile.c", 439, 4),__exception_result_var_b5=die("system"), come_pop_stackframe(), __exception_result_var_b5);
    }
    return (_Bool)1;
}

_Bool clean_project(int argc, char** argv){
_Bool _or_conditional6;
_Bool __exception_result_var_b6;
    if((_or_conditional6=(system("make clean"))),    _or_conditional6 != 0) {
        (come_push_stackframe("02transpile.c", 446, 5),__exception_result_var_b6=die("system"), come_pop_stackframe(), __exception_result_var_b6);
    }
    return (_Bool)1;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
_Bool _or_conditional7;
_Bool __exception_result_var_b7;
    if((_or_conditional7=(system(((char*)(__right_value182=xsprintf("make install DESTDIR=\%s",((char*)(__right_value181=charp_to_string(prefix))))))))),    (come_decrement_ref_count2(__right_value181, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    (come_decrement_ref_count2(__right_value182, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    _or_conditional7 != 0) {
        (come_push_stackframe("02transpile.c", 453, 6),__exception_result_var_b7=die("system"), come_pop_stackframe(), __exception_result_var_b7);
    }
    return (_Bool)1;
}

static void init_classes(struct sInfo* info){
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
int i_163;
void* __right_value225 = (void*)0;
char* generics_type_164;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
int i_165;
void* __right_value228 = (void*)0;
char* generics_type_166;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
int rc_168;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
char* type_name_169;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct sType* type_170;
void* __right_value237 = (void*)0;
char* __dec_obj23;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct sClass* klass_192;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value326 = (void*)0;
memset(&generics_type_164, 0, sizeof(char*));
memset(&generics_type_166, 0, sizeof(char*));
memset(&type_name_169, 0, sizeof(char*));
memset(&type_170, 0, sizeof(struct sType*));
memset(&klass_192, 0, sizeof(struct sClass*));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(__right_value189=__builtin_string("int")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value191=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value190=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 460, "sClass")))),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __right_value189 = come_decrement_ref_count2(__right_value189, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value190,sClass_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value191,sClass_finalize, 0, 1, 0, 0, (void*)0);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(__right_value192=__builtin_string("short")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value194=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value193=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 461, "sClass")))),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __right_value192 = come_decrement_ref_count2(__right_value192, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value193,sClass_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value194,sClass_finalize, 0, 1, 0, 0, (void*)0);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(__right_value195=__builtin_string("long")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value197=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value196=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 462, "sClass")))),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __right_value195 = come_decrement_ref_count2(__right_value195, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value196,sClass_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value197,sClass_finalize, 0, 1, 0, 0, (void*)0);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(__right_value198=__builtin_string("char")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value200=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value199=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 463, "sClass")))),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value199,sClass_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value200,sClass_finalize, 0, 1, 0, 0, (void*)0);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(__right_value201=__builtin_string("bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value203=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value202=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 464, "sClass")))),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __right_value201 = come_decrement_ref_count2(__right_value201, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value202,sClass_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value203,sClass_finalize, 0, 1, 0, 0, (void*)0);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(__right_value204=__builtin_string("_Bool")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value206=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value205=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 465, "sClass")))),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __right_value204 = come_decrement_ref_count2(__right_value204, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value205,sClass_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value206,sClass_finalize, 0, 1, 0, 0, (void*)0);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(__right_value207=__builtin_string("void")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value209=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value208=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 466, "sClass")))),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __right_value207 = come_decrement_ref_count2(__right_value207, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value208,sClass_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value209,sClass_finalize, 0, 1, 0, 0, (void*)0);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(__right_value210=__builtin_string("float")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value212=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value211=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 467, "sClass")))),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    __right_value210 = come_decrement_ref_count2(__right_value210, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value211,sClass_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value212,sClass_finalize, 0, 1, 0, 0, (void*)0);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(__right_value213=__builtin_string("double")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value215=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value214=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 468, "sClass")))),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)))));
    __right_value213 = come_decrement_ref_count2(__right_value213, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value214,sClass_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value215,sClass_finalize, 0, 1, 0, 0, (void*)0);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(__right_value216=__builtin_string("lambda")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value218=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value217=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 469, "sClass")))),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __right_value216 = come_decrement_ref_count2(__right_value216, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value217,sClass_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value218,sClass_finalize, 0, 1, 0, 0, (void*)0);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(__right_value219=__builtin_string("__uint128_t")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value221=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value220=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 470, "sClass")))),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __right_value219 = come_decrement_ref_count2(__right_value219, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value220,sClass_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value221,sClass_finalize, 0, 1, 0, 0, (void*)0);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(__right_value222=__builtin_string("__int128")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value224=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value223=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 471, "sClass")))),"__int128",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
    __right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value223,sClass_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value224,sClass_finalize, 0, 1, 0, 0, (void*)0);
    for(    i_163=0;    i_163<12;    i_163++    ){
        generics_type_164=(char*)come_increment_ref_count(((char*)(__right_value225=xsprintf("generics_type%d",i_163))));
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_164),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value227=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value226=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 474, "sClass")))),generics_type_164,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_163,-1,(_Bool)0,info)))));
        come_call_finalizer3(__right_value226,sClass_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value227,sClass_finalize, 0, 1, 0, 0, (void*)0);
        generics_type_164 = come_decrement_ref_count2(generics_type_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    for(    i_165=0;    i_165<7;    i_165++    ){
        generics_type_166=(char*)come_increment_ref_count(((char*)(__right_value228=xsprintf("mgenerics_type%d",i_165))));
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_166),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value230=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value229=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 478, "sClass")))),generics_type_166,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_165,(_Bool)0,info)))));
        come_call_finalizer3(__right_value229,sClass_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value230,sClass_finalize, 0, 1, 0, 0, (void*)0);
        generics_type_166 = come_decrement_ref_count2(generics_type_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    char cmd_167[1024];
    memset(&cmd_167, 0, sizeof(char)    *(1024)    );
    snprintf(cmd_167,1024,"which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null");
    rc_168=system(cmd_167);
    if(rc_168==0) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(__right_value231=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value233=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value232=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 486, "sClass")))),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)))));
        __right_value231 = come_decrement_ref_count2(__right_value231, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value232,sClass_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value233,sClass_finalize, 0, 1, 0, 0, (void*)0);
        type_name_169=(char*)come_increment_ref_count(((char*)(__right_value234=__builtin_string("__builtin_va_list"))));
        type_170=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value236=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value235=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 490, "sType")))),"__builtin_va_list",(_Bool)0,info))));
        come_call_finalizer3(__right_value235,sType_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj23=type_170->mOriginalTypeName;
        type_170->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(__right_value237=__builtin_string("__builtin_va_list"))));
        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(__right_value241=__builtin_string(type_name_169)))),(struct sType*)come_increment_ref_count(type_170));
        __right_value241 = come_decrement_ref_count2(__right_value241, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        type_name_169 = come_decrement_ref_count2(type_name_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_170,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_192=(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value243=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value242=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 498, "sClass")))),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        come_call_finalizer3(__right_value242,sClass_finalize, 0, 1, 0, 0, (void*)0);
        list$1tuple2$2charphsTypephph_push_back(klass_192->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value251=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value250=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 500, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(__right_value247=__builtin_string("v1")))),(struct sType*)come_increment_ref_count(((struct sType*)(__right_value249=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value248=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 500, "sType")))),"char*",(_Bool)0,info)))))))));
        __right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value248,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value249,sType_finalize, 0, 1, 0, 0, (void*)0);
        __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value251,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, (void*)0);
        list$1tuple2$2charphsTypephph_push_back(klass_192->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value256=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value255=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 501, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(__right_value252=__builtin_string("v2")))),(struct sType*)come_increment_ref_count(((struct sType*)(__right_value254=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value253=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 501, "sType")))),"char*",(_Bool)0,info)))))))));
        __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value253,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value254,sType_finalize, 0, 1, 0, 0, (void*)0);
        __right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value256,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, (void*)0);
        list$1tuple2$2charphsTypephph_push_back(klass_192->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value261=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value260=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 502, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(__right_value257=__builtin_string("v3")))),(struct sType*)come_increment_ref_count(((struct sType*)(__right_value259=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value258=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 502, "sType")))),"char*",(_Bool)0,info)))))))));
        __right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value258,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value259,sType_finalize, 0, 1, 0, 0, (void*)0);
        __right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value261,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, (void*)0);
        list$1tuple2$2charphsTypephph_push_back(klass_192->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value266=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value265=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 503, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(__right_value262=__builtin_string("v4")))),(struct sType*)come_increment_ref_count(((struct sType*)(__right_value264=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value263=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 503, "sType")))),"int",(_Bool)0,info)))))))));
        __right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value263,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value264,sType_finalize, 0, 1, 0, 0, (void*)0);
        __right_value265 = come_decrement_ref_count2(__right_value265, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value266,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, (void*)0);
        list$1tuple2$2charphsTypephph_push_back(klass_192->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value271=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value270=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 504, "struct tuple2$2charphsTypeph")))),(char*)come_increment_ref_count(((char*)(__right_value267=__builtin_string("v5")))),(struct sType*)come_increment_ref_count(((struct sType*)(__right_value269=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value268=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 504, "sType")))),"int",(_Bool)0,info)))))))));
        __right_value267 = come_decrement_ref_count2(__right_value267, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value268,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value269,sType_finalize, 0, 1, 0, 0, (void*)0);
        __right_value270 = come_decrement_ref_count2(__right_value270, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value271,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, (void*)0);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(__right_value272=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value326=sClass_clone(klass_192)))));
        __right_value272 = come_decrement_ref_count2(__right_value272, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value326,sClass_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(klass_192,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
unsigned int hash_136;
unsigned int it_137;
_Bool same_key_exist_154;
char* it2_157;
struct map$2charphsClassph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
        if(self->len*10>=self->size) {
            map$2charphsClassph_rehash(self);
        }
        hash_136=string_get_hash_key(key)%self->size;
        it_137=hash_136;
        while((_Bool)1) {
            if(self->item_existance[it_137]) {
                if(string_equals(self->keys[it_137],key)) {
                    if(1) {
                        list$1charp_remove(self->key_list,self->keys[it_137]);
                        self->keys[it_137] = come_decrement_ref_count2(self->keys[it_137], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        self->keys[it_137]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_137]);
                        self->keys[it_137]=key;
                    }
                    if(1) {
                        come_call_finalizer3(self->items[it_137],sClass_finalize, 0, 0, 0, 0, (void*)0);
                        self->items[it_137]=(struct sClass*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_137]=item;
                    }
                    break;
                }
                it_137++;
                if(it_137>=self->size) {
                    it_137=0;
                }
                else {
                    if(it_137==hash_136) {
                        printf("unexpected error in map.insert\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                self->item_existance[it_137]=(_Bool)1;
                if(1) {
                    self->keys[it_137]=(char*)come_increment_ref_count(key);
                }
                else {
                    self->keys[it_137]=key;
                }
                if(1) {
                    self->items[it_137]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_137]=item;
                }
                self->len++;
                break;
            }
        }
        same_key_exist_154=(_Bool)0;
        for(        it2_157=list$1charp_begin(self->key_list);        !list$1charp_end(self->key_list);        it2_157=list$1charp_next(self->key_list)        ){
            if(string_equals(it2_157,key)) {
                same_key_exist_154=(_Bool)1;
            }
        }
        if(!same_key_exist_154) {
            list$1charp_push_back(self->key_list,key);
        }
        __result86__ = __result_obj__ = self;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result86__;
        key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer3(item,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_113;
void* __right_value183 = (void*)0;
char** keys_114;
void* __right_value184 = (void*)0;
struct sClass** items_115;
void* __right_value185 = (void*)0;
_Bool* item_existance_122;
int len_123;
char* it_126;
struct sClass* default_value_129;
struct sClass* it2_130;
unsigned int hash_133;
int n_134;
struct sClass* default_value_135;
memset(&items_115, 0, sizeof(struct sClass**));
memset(&default_value_129, 0, sizeof(struct sClass*));
memset(&it2_130, 0, sizeof(struct sClass*));
memset(&default_value_135, 0, sizeof(struct sClass*));
                size_113=self->size*10;
                keys_114=(char**)come_increment_ref_count(((char**)(__right_value183=(char**)come_calloc(1, sizeof(char*)*(1*(size_113)), "./neo-c.h", 1315, "char*%"))));
                __right_value183 = come_decrement_ref_count2(__right_value183, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                items_115=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value184=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_113)), "./neo-c.h", 1316, "sClass*%"))));
                come_call_finalizer3(__right_value184,sClass_finalize, 0, 1, 0, 0, (void*)0);
                item_existance_122=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value185=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_113)), "./neo-c.h", 1317, "bool"))));
                __right_value185 = come_decrement_ref_count2(__right_value185, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                len_123=0;
                for(                it_126=map$2charphsClassph_begin(self);                !map$2charphsClassph_end(self);                it_126=map$2charphsClassph_next(self)                ){
                    memset(&default_value_129,0,sizeof(struct sClass*));
                    it2_130=map$2charphsClassph_at(self,it_126,default_value_129);
                    hash_133=string_get_hash_key(it_126)%size_113;
                    n_134=hash_133;
                    while((_Bool)1) {
                        if(item_existance_122[n_134]) {
                            n_134++;
                            if(n_134>=size_113) {
                                n_134=0;
                            }
                            else {
                                if(n_134==hash_133) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    stackframe();
                                    exit(2);
                                }
                            }
                        }
                        else {
                            item_existance_122[n_134]=(_Bool)1;
                            keys_114[n_134]=it_126;
                            items_115[n_134]=map$2charphsClassph_at(self,it_126,default_value_135);
                            len_123++;
                            break;
                        }
                    }
                }
                come_free((char*)self->items);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_free((char*)self->keys);
                self->keys=keys_114;
                self->items=items_115;
                self->item_existance=item_existance_122;
                self->size=size_113;
                self->len=len_123;
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
struct list_item$1tuple2$2charphsTypephph* it_116;
struct list_item$1tuple2$2charphsTypephph* prev_it_117;
memset(&it_116, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_117, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            it_116=self->head;
                            while(it_116!=((void*)0)) {
                                prev_it_117=it_116;
                                it_116=it_116->next;
                                come_call_finalizer3(prev_it_117,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_118;
struct list_item$1sTypeph* prev_it_119;
memset(&it_118, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_119, 0, sizeof(struct list_item$1sTypeph*));
                                                            it_118=self->head;
                                                            while(it_118!=((void*)0)) {
                                                                prev_it_119=it_118;
                                                                it_118=it_118->next;
                                                                come_call_finalizer3(prev_it_119,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_120;
struct list_item$1sNodeph* prev_it_121;
memset(&it_120, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_121, 0, sizeof(struct list_item$1sNodeph*));
                                                            it_120=self->head;
                                                            while(it_120!=((void*)0)) {
                                                                prev_it_121=it_120;
                                                                it_120=it_120->next;
                                                                come_call_finalizer3(prev_it_121,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
                                                                    if(self!=((void*)0)&&self->item!=((void*)0)) {
                                                                        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    }
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
char* result_124;
char* __result65__;
char* __result66__;
char* result_125;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_124, 0, sizeof(char*));
memset(&result_125, 0, sizeof(char*));
                    if(self==((void*)0)) {
                        memset(&result_124,0,sizeof(char*));
                        __result65__ = __result_obj__ = result_124;
                        return __result65__;
                    }
                    self->key_list->it=self->key_list->head;
                    if(self->key_list->it) {
                        __result66__ = __result_obj__ = self->key_list->it->item;
                        return __result66__;
                    }
                    memset(&result_125,0,sizeof(char*));
                    __result67__ = __result_obj__ = result_125;
                    return __result67__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
                    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
char* result_127;
char* __result68__;
char* __result69__;
char* result_128;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_127, 0, sizeof(char*));
memset(&result_128, 0, sizeof(char*));
                    if(self==((void*)0)||self->key_list->it==((void*)0)) {
                        memset(&result_127,0,sizeof(char*));
                        __result68__ = __result_obj__ = result_127;
                        return __result68__;
                    }
                    self->key_list->it=self->key_list->it->next;
                    if(self->key_list->it) {
                        __result69__ = __result_obj__ = self->key_list->it->item;
                        return __result69__;
                    }
                    memset(&result_128,0,sizeof(char*));
                    __result70__ = __result_obj__ = result_128;
                    return __result70__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
unsigned int hash_131;
unsigned int it_132;
struct sClass* __result71__;
struct sClass* __result72__;
struct sClass* __result73__;
struct sClass* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
                        hash_131=string_get_hash_key(((char*)key))%self->size;
                        it_132=hash_131;
                        while((_Bool)1) {
                            if(self->item_existance[it_132]) {
                                if(string_equals(self->keys[it_132],key)) {
                                    __result71__ = __result_obj__ = self->items[it_132];
                                    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result71__;
                                }
                                it_132++;
                                if(it_132>=self->size) {
                                    it_132=0;
                                }
                                else {
                                    if(it_132==hash_131) {
                                        __result72__ = __result_obj__ = default_value;
                                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result72__;
                                    }
                                }
                            }
                            else {
                                __result73__ = __result_obj__ = default_value;
                                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                                return __result73__;
                            }
                        }
                        __result74__ = __result_obj__ = default_value;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                        return __result74__;
                        come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
int it2_138;
struct list_item$1charp* it_139;
struct list$1charp* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_139, 0, sizeof(struct list_item$1charp*));
                            it2_138=0;
                            it_139=self->head;
                            while(it_139!=((void*)0)) {
                                if(string_equals(it_139->item,item)) {
                                    list$1charp_delete(self,it2_138,it2_138+1);
                                    break;
                                }
                                it2_138++;
                                it_139=it_139->next;
                            }
                            __result78__ = __result_obj__ = self;
                            return __result78__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
int tmp_140;
struct list$1charp* __result75__;
struct list_item$1charp* it_143;
int i_144;
struct list_item$1charp* prev_it_145;
struct list_item$1charp* it_146;
int i_147;
struct list_item$1charp* prev_it_148;
struct list_item$1charp* it_149;
struct list_item$1charp* head_prev_it_150;
struct list_item$1charp* tail_it_151;
int i_152;
struct list_item$1charp* prev_it_153;
struct list$1charp* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_143, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_145, 0, sizeof(struct list_item$1charp*));
memset(&it_146, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_148, 0, sizeof(struct list_item$1charp*));
memset(&it_149, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_150, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_151, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_153, 0, sizeof(struct list_item$1charp*));
                                        if(head<0) {
                                            head+=self->len;
                                        }
                                        if(tail<0) {
                                            tail+=self->len+1;
                                        }
                                        if(head>tail) {
                                            tmp_140=tail;
                                            tail=head;
                                            head=tmp_140;
                                        }
                                        if(head<0) {
                                            head=0;
                                        }
                                        if(tail>self->len) {
                                            tail=self->len;
                                        }
                                        if(head==tail) {
                                            __result75__ = __result_obj__ = self;
                                            return __result75__;
                                        }
                                        if(head==0&&tail==self->len) {
                                            list$1charp_reset(self);
                                        }
                                        else {
                                            if(head==0) {
                                                it_143=self->head;
                                                i_144=0;
                                                while(it_143!=((void*)0)) {
                                                    if(i_144<tail) {
                                                        prev_it_145=it_143;
                                                        it_143=it_143->next;
                                                        i_144++;
                                                        come_call_finalizer3(prev_it_145,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                        self->len--;
                                                    }
                                                    else {
                                                        if(i_144==tail) {
                                                            self->head=it_143;
                                                            self->head->prev=((void*)0);
                                                            break;
                                                        }
                                                        else {
                                                            it_143=it_143->next;
                                                            i_144++;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(tail==self->len) {
                                                    it_146=self->head;
                                                    i_147=0;
                                                    while(it_146!=((void*)0)) {
                                                        if(i_147==head) {
                                                            self->tail=it_146->prev;
                                                            self->tail->next=((void*)0);
                                                        }
                                                        if(i_147>=head) {
                                                            prev_it_148=it_146;
                                                            it_146=it_146->next;
                                                            i_147++;
                                                            come_call_finalizer3(prev_it_148,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_146=it_146->next;
                                                            i_147++;
                                                        }
                                                    }
                                                }
                                                else {
                                                    it_149=self->head;
                                                    head_prev_it_150=((void*)0);
                                                    tail_it_151=((void*)0);
                                                    i_152=0;
                                                    while(it_149!=((void*)0)) {
                                                        if(i_152==head) {
                                                            head_prev_it_150=it_149->prev;
                                                        }
                                                        if(i_152==tail) {
                                                            tail_it_151=it_149;
                                                        }
                                                        if(i_152>=head&&i_152<tail) {
                                                            prev_it_153=it_149;
                                                            it_149=it_149->next;
                                                            i_152++;
                                                            come_call_finalizer3(prev_it_153,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->len--;
                                                        }
                                                        else {
                                                            it_149=it_149->next;
                                                            i_152++;
                                                        }
                                                    }
                                                    if(head_prev_it_150!=((void*)0)) {
                                                        head_prev_it_150->next=tail_it_151;
                                                    }
                                                    if(tail_it_151!=((void*)0)) {
                                                        tail_it_151->prev=head_prev_it_150;
                                                    }
                                                }
                                            }
                                        }
                                        __result77__ = __result_obj__ = self;
                                        return __result77__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
struct list_item$1charp* it_141;
struct list_item$1charp* prev_it_142;
struct list$1charp* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_141, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_142, 0, sizeof(struct list_item$1charp*));
                                                it_141=self->head;
                                                while(it_141!=((void*)0)) {
                                                    prev_it_142=it_141;
                                                    it_141=it_141->next;
                                                    come_call_finalizer3(prev_it_142,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                                                }
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result76__ = __result_obj__ = self;
                                                return __result76__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
char* result_155;
char* __result79__;
char* __result80__;
char* result_156;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_155, 0, sizeof(char*));
memset(&result_156, 0, sizeof(char*));
            if(self==((void*)0)) {
                memset(&result_155,0,sizeof(char*));
                __result79__ = __result_obj__ = result_155;
                return __result79__;
            }
            self->it=self->head;
            if(self->it) {
                __result80__ = __result_obj__ = self->it->item;
                return __result80__;
            }
            memset(&result_156,0,sizeof(char*));
            __result81__ = __result_obj__ = result_156;
            return __result81__;
}

static _Bool list$1charp_end(struct list$1charp* self){
            return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
char* result_158;
char* __result82__;
char* __result83__;
char* result_159;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_158, 0, sizeof(char*));
memset(&result_159, 0, sizeof(char*));
            if(self==((void*)0)||self->it==((void*)0)) {
                memset(&result_158,0,sizeof(char*));
                __result82__ = __result_obj__ = result_158;
                return __result82__;
            }
            self->it=self->it->next;
            if(self->it) {
                __result83__ = __result_obj__ = self->it->item;
                return __result83__;
            }
            memset(&result_159,0,sizeof(char*));
            __result84__ = __result_obj__ = result_159;
            return __result84__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
void* __right_value186 = (void*)0;
struct list_item$1charp* litem_160;
void* __right_value187 = (void*)0;
struct list_item$1charp* litem_161;
void* __right_value188 = (void*)0;
struct list_item$1charp* litem_162;
struct list$1charp* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_160, 0, sizeof(struct list_item$1charp*));
memset(&litem_161, 0, sizeof(struct list_item$1charp*));
memset(&litem_162, 0, sizeof(struct list_item$1charp*));
                if(self->len==0) {
                    litem_160=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value186=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 219, "list_item$1charp"))));
                    come_call_finalizer3(__right_value186,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_160->prev=((void*)0);
                    litem_160->next=((void*)0);
                    litem_160->item=item;
                    self->tail=litem_160;
                    self->head=litem_160;
                }
                else {
                    if(self->len==1) {
                        litem_161=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value187=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 229, "list_item$1charp"))));
                        come_call_finalizer3(__right_value187,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_161->prev=self->head;
                        litem_161->next=((void*)0);
                        litem_161->item=item;
                        self->tail=litem_161;
                        self->head->next=litem_161;
                    }
                    else {
                        litem_162=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value188=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 239, "list_item$1charp"))));
                        come_call_finalizer3(__right_value188,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_162->prev=self->tail;
                        litem_162->next=((void*)0);
                        litem_162->item=item;
                        self->tail->next=litem_162;
                        self->tail=litem_162;
                    }
                }
                self->len++;
                __result85__ = __result_obj__ = self;
                return __result85__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
unsigned int hash_188;
unsigned int it_189;
_Bool same_key_exist_190;
char* it2_191;
struct map$2charphsTypeph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
            if(self->len*10>=self->size) {
                map$2charphsTypeph_rehash(self);
            }
            hash_188=string_get_hash_key(key)%self->size;
            it_189=hash_188;
            while((_Bool)1) {
                if(self->item_existance[it_189]) {
                    if(string_equals(self->keys[it_189],key)) {
                        if(1) {
                            list$1charp_remove(self->key_list,self->keys[it_189]);
                            self->keys[it_189] = come_decrement_ref_count2(self->keys[it_189], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            self->keys[it_189]=(char*)come_increment_ref_count(key);
                        }
                        else {
                            list$1charp_remove(self->key_list,self->keys[it_189]);
                            self->keys[it_189]=key;
                        }
                        if(1) {
                            come_call_finalizer3(self->items[it_189],sType_finalize, 0, 0, 0, 0, (void*)0);
                            self->items[it_189]=(struct sType*)come_increment_ref_count(item);
                        }
                        else {
                            self->items[it_189]=item;
                        }
                        break;
                    }
                    it_189++;
                    if(it_189>=self->size) {
                        it_189=0;
                    }
                    else {
                        if(it_189==hash_188) {
                            printf("unexpected error in map.insert\n");
                            stackframe();
                            exit(2);
                        }
                    }
                }
                else {
                    self->item_existance[it_189]=(_Bool)1;
                    if(1) {
                        self->keys[it_189]=(char*)come_increment_ref_count(key);
                    }
                    else {
                        self->keys[it_189]=key;
                    }
                    if(1) {
                        self->items[it_189]=(struct sType*)come_increment_ref_count(item);
                    }
                    else {
                        self->items[it_189]=item;
                    }
                    self->len++;
                    break;
                }
            }
            same_key_exist_190=(_Bool)0;
            for(            it2_191=list$1charp_begin(self->key_list);            !list$1charp_end(self->key_list);            it2_191=list$1charp_next(self->key_list)            ){
                if(string_equals(it2_191,key)) {
                    same_key_exist_190=(_Bool)1;
                }
            }
            if(!same_key_exist_190) {
                list$1charp_push_back(self->key_list,key);
            }
            __result97__ = __result_obj__ = self;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result97__;
            key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
int size_171;
void* __right_value238 = (void*)0;
char** keys_172;
void* __right_value239 = (void*)0;
struct sType** items_173;
void* __right_value240 = (void*)0;
_Bool* item_existance_174;
int len_175;
char* it_178;
struct sType* default_value_181;
struct sType* it2_182;
unsigned int hash_185;
int n_186;
struct sType* default_value_187;
memset(&items_173, 0, sizeof(struct sType**));
memset(&default_value_181, 0, sizeof(struct sType*));
memset(&it2_182, 0, sizeof(struct sType*));
memset(&default_value_187, 0, sizeof(struct sType*));
                    size_171=self->size*10;
                    keys_172=(char**)come_increment_ref_count(((char**)(__right_value238=(char**)come_calloc(1, sizeof(char*)*(1*(size_171)), "./neo-c.h", 1315, "char*%"))));
                    __right_value238 = come_decrement_ref_count2(__right_value238, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    items_173=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value239=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_171)), "./neo-c.h", 1316, "sType*%"))));
                    come_call_finalizer3(__right_value239,sType_finalize, 0, 1, 0, 0, (void*)0);
                    item_existance_174=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value240=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_171)), "./neo-c.h", 1317, "bool"))));
                    __right_value240 = come_decrement_ref_count2(__right_value240, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    len_175=0;
                    for(                    it_178=map$2charphsTypeph_begin(self);                    !map$2charphsTypeph_end(self);                    it_178=map$2charphsTypeph_next(self)                    ){
                        memset(&default_value_181,0,sizeof(struct sType*));
                        it2_182=map$2charphsTypeph_at(self,it_178,default_value_181);
                        hash_185=string_get_hash_key(it_178)%size_171;
                        n_186=hash_185;
                        while((_Bool)1) {
                            if(item_existance_174[n_186]) {
                                n_186++;
                                if(n_186>=size_171) {
                                    n_186=0;
                                }
                                else {
                                    if(n_186==hash_185) {
                                        printf("unexpected error in map.rehash(1)\n");
                                        stackframe();
                                        exit(2);
                                    }
                                }
                            }
                            else {
                                item_existance_174[n_186]=(_Bool)1;
                                keys_172[n_186]=it_178;
                                items_173[n_186]=map$2charphsTypeph_at(self,it_178,default_value_187);
                                len_175++;
                                break;
                            }
                        }
                    }
                    come_free((char*)self->items);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_free((char*)self->keys);
                    self->keys=keys_172;
                    self->items=items_173;
                    self->item_existance=item_existance_174;
                    self->size=size_171;
                    self->len=len_175;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
char* result_176;
char* __result87__;
char* __result88__;
char* result_177;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_176, 0, sizeof(char*));
memset(&result_177, 0, sizeof(char*));
                        if(self==((void*)0)) {
                            memset(&result_176,0,sizeof(char*));
                            __result87__ = __result_obj__ = result_176;
                            return __result87__;
                        }
                        self->key_list->it=self->key_list->head;
                        if(self->key_list->it) {
                            __result88__ = __result_obj__ = self->key_list->it->item;
                            return __result88__;
                        }
                        memset(&result_177,0,sizeof(char*));
                        __result89__ = __result_obj__ = result_177;
                        return __result89__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
                        return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
char* result_179;
char* __result90__;
char* __result91__;
char* result_180;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_179, 0, sizeof(char*));
memset(&result_180, 0, sizeof(char*));
                        if(self==((void*)0)||self->key_list->it==((void*)0)) {
                            memset(&result_179,0,sizeof(char*));
                            __result90__ = __result_obj__ = result_179;
                            return __result90__;
                        }
                        self->key_list->it=self->key_list->it->next;
                        if(self->key_list->it) {
                            __result91__ = __result_obj__ = self->key_list->it->item;
                            return __result91__;
                        }
                        memset(&result_180,0,sizeof(char*));
                        __result92__ = __result_obj__ = result_180;
                        return __result92__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
unsigned int hash_183;
unsigned int it_184;
struct sType* __result93__;
struct sType* __result94__;
struct sType* __result95__;
struct sType* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
                            hash_183=string_get_hash_key(((char*)key))%self->size;
                            it_184=hash_183;
                            while((_Bool)1) {
                                if(self->item_existance[it_184]) {
                                    if(string_equals(self->keys[it_184],key)) {
                                        __result93__ = __result_obj__ = self->items[it_184];
                                        come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result93__;
                                    }
                                    it_184++;
                                    if(it_184>=self->size) {
                                        it_184=0;
                                    }
                                    else {
                                        if(it_184==hash_183) {
                                            __result94__ = __result_obj__ = default_value;
                                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result94__;
                                        }
                                    }
                                }
                                else {
                                    __result95__ = __result_obj__ = default_value;
                                    come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result95__;
                                }
                            }
                            __result96__ = __result_obj__ = default_value;
                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                            return __result96__;
                            come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
void* __right_value244 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_193;
struct tuple2$2charphsTypeph* __dec_obj24;
void* __right_value245 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_194;
struct tuple2$2charphsTypeph* __dec_obj25;
void* __right_value246 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_195;
struct tuple2$2charphsTypeph* __dec_obj26;
struct list$1tuple2$2charphsTypephph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_193, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&litem_194, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&litem_195, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            if(self->len==0) {
                litem_193=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value244=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 219, "list_item$1tuple2$2charphsTypephph"))));
                come_call_finalizer3(__right_value244,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_193->prev=((void*)0);
                litem_193->next=((void*)0);
                __dec_obj24=litem_193->item;
                litem_193->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj24,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_193;
                self->head=litem_193;
            }
            else {
                if(self->len==1) {
                    litem_194=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value245=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 229, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(__right_value245,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_194->prev=self->head;
                    litem_194->next=((void*)0);
                    __dec_obj25=litem_194->item;
                    litem_194->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj25,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_194;
                    self->head->next=litem_194;
                }
                else {
                    litem_195=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value246=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 239, "list_item$1tuple2$2charphsTypephph"))));
                    come_call_finalizer3(__right_value246,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_195->prev=self->tail;
                    litem_195->next=((void*)0);
                    __dec_obj26=litem_195->item;
                    litem_195->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj26,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_195;
                    self->tail=litem_195;
                }
            }
            self->len++;
            __result98__ = __result_obj__ = self;
            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result98__;
            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
char* __dec_obj27;
struct sType* __dec_obj28;
struct tuple2$2charphsTypeph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
            __dec_obj27=self->v1;
            self->v1=(char*)come_increment_ref_count(v1);
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj28=self->v2;
            self->v2=(struct sType*)come_increment_ref_count(v2);
            come_call_finalizer3(__dec_obj28,sType_finalize, 0, 0, 0, 0, (void*)0);
            __result99__ = __result_obj__ = self;
            come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result99__;
            come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            come_call_finalizer3(v2,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
struct sClass* __result100__;
void* __right_value273 = (void*)0;
struct sClass* result_196;
void* __right_value274 = (void*)0;
char* __dec_obj29;
void* __right_value323 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj60;
void* __right_value324 = (void*)0;
char* __dec_obj61;
void* __right_value325 = (void*)0;
char* __dec_obj62;
struct sClass* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_196, 0, sizeof(struct sClass*));
            if(self==(void*)0) {
                __result100__ = __result_obj__ = (void*)0;
                return __result100__;
            }
            result_196=(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value273=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"))));
            if(self!=((void*)0)) {
                result_196->mStruct=self->mStruct;
            }
            if(self!=((void*)0)) {
                result_196->mFloat=self->mFloat;
            }
            if(self!=((void*)0)) {
                result_196->mUnion=self->mUnion;
            }
            if(self!=((void*)0)) {
                result_196->mGenerics=self->mGenerics;
            }
            if(self!=((void*)0)) {
                result_196->mMethodGenerics=self->mMethodGenerics;
            }
            if(self!=((void*)0)) {
                result_196->mEnum=self->mEnum;
            }
            if(self!=((void*)0)) {
                result_196->mProtocol=self->mProtocol;
            }
            if(self!=((void*)0)) {
                result_196->mNumber=self->mNumber;
            }
            if(self!=((void*)0)&&self->mName!=((void*)0)) {
                __dec_obj29=result_196->mName;
                result_196->mName=(char*)come_increment_ref_count(((char*)(__right_value274=string_clone(self->mName))));
                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(self!=((void*)0)) {
                result_196->mGenericsNum=self->mGenericsNum;
            }
            if(self!=((void*)0)) {
                result_196->mMethodGenericsNum=self->mMethodGenericsNum;
            }
            if(self!=((void*)0)&&self->mFields!=((void*)0)) {
                __dec_obj60=result_196->mFields;
                result_196->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(__right_value323=list$1tuple2$2charphsTypephphp_clone(self->mFields))));
                come_call_finalizer3(__dec_obj60,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)) {
                result_196->mOutputed=self->mOutputed;
            }
            if(self!=((void*)0)) {
                result_196->mOutputed2=self->mOutputed2;
            }
            if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
                __dec_obj61=result_196->mDeclareSName;
                result_196->mDeclareSName=(char*)come_increment_ref_count(((char*)(__right_value324=string_clone(self->mDeclareSName))));
                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(self!=((void*)0)) {
                result_196->mNobodyStruct=self->mNobodyStruct;
            }
            if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
                __dec_obj62=result_196->mParentClassName;
                result_196->mParentClassName=(char*)come_increment_ref_count(((char*)(__right_value325=string_clone(self->mParentClassName))));
                __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            __result128__ = __result_obj__ = result_196;
            come_call_finalizer3(result_196,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result128__;
            come_call_finalizer3(result_196,sClass_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result101__;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct list$1tuple2$2charphsTypephph* result_197;
struct list_item$1tuple2$2charphsTypephph* it_198;
void* __right_value322 = (void*)0;
struct list$1tuple2$2charphsTypephph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_197, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_198, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    if(self==((void*)0)) {
                        __result101__ = __result_obj__ = ((void*)0);
                        return __result101__;
                    }
                    result_197=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(__right_value276=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(__right_value275=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 135, "list$1tuple2$2charphsTypephph"))))))));
                    come_call_finalizer3(__right_value275,list$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                    it_198=self->head;
                    while(it_198!=((void*)0)) {
                        list$1tuple2$2charphsTypephph_add(result_197,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value322=tuple2$2charphsTypephp_clone(it_198->item)))));
                        come_call_finalizer3(__right_value322,tuple2$2charphsTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        it_198=it_198->next;
                    }
                    __result127__ = __result_obj__ = result_197;
                    come_call_finalizer3(result_197,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                    return __result127__;
                    come_call_finalizer3(result_197,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
struct list$1tuple2$2charphsTypephph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
                        self->head=((void*)0);
                        self->tail=((void*)0);
                        self->len=0;
                        __result102__ = __result_obj__ = self;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
                        return __result102__;
                        come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
void* __right_value277 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_199;
struct tuple2$2charphsTypeph* __dec_obj30;
void* __right_value278 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_200;
struct tuple2$2charphsTypeph* __dec_obj31;
void* __right_value279 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_201;
struct tuple2$2charphsTypeph* __dec_obj32;
struct list$1tuple2$2charphsTypephph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_199, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&litem_200, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&litem_201, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                            if(self->len==0) {
                                litem_199=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value277=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 149, "list_item$1tuple2$2charphsTypephph"))));
                                come_call_finalizer3(__right_value277,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_199->prev=((void*)0);
                                litem_199->next=((void*)0);
                                __dec_obj30=litem_199->item;
                                litem_199->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj30,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_199;
                                self->head=litem_199;
                            }
                            else {
                                if(self->len==1) {
                                    litem_200=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value278=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 159, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(__right_value278,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_200->prev=self->head;
                                    litem_200->next=((void*)0);
                                    __dec_obj31=litem_200->item;
                                    litem_200->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj31,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail=litem_200;
                                    self->head->next=litem_200;
                                }
                                else {
                                    litem_201=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value279=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./neo-c.h", 169, "list_item$1tuple2$2charphsTypephph"))));
                                    come_call_finalizer3(__right_value279,list_item$1tuple2$2charphsTypephphp_finalize, 0, 1, 0, 0, __result_obj__);
                                    litem_201->prev=self->tail;
                                    litem_201->next=((void*)0);
                                    __dec_obj32=litem_201->item;
                                    litem_201->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                    come_call_finalizer3(__dec_obj32,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                    self->tail->next=litem_201;
                                    self->tail=litem_201;
                                }
                            }
                            self->len++;
                            __result103__ = __result_obj__ = self;
                            come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
                            return __result103__;
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
struct tuple2$2charphsTypeph* __result104__;
void* __right_value280 = (void*)0;
struct tuple2$2charphsTypeph* result_202;
void* __right_value281 = (void*)0;
char* __dec_obj33;
void* __right_value321 = (void*)0;
struct sType* __dec_obj59;
struct tuple2$2charphsTypeph* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_202, 0, sizeof(struct tuple2$2charphsTypeph*));
                            if(self==(void*)0) {
                                __result104__ = __result_obj__ = (void*)0;
                                return __result104__;
                            }
                            result_202=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(__right_value280=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"))));
                            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                __dec_obj33=result_202->v1;
                                result_202->v1=(char*)come_increment_ref_count(((char*)(__right_value281=string_clone(self->v1))));
                                __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->v2!=((void*)0)) {
                                __dec_obj59=result_202->v2;
                                result_202->v2=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value321=sType_clone(self->v2))));
                                come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            __result126__ = __result_obj__ = result_202;
                            come_call_finalizer3(result_202,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
                            return __result126__;
                            come_call_finalizer3(result_202,tuple2$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
struct sType* __result105__;
void* __right_value282 = (void*)0;
struct sType* result_203;
void* __right_value289 = (void*)0;
struct list$1sTypeph* __dec_obj37;
void* __right_value292 = (void*)0;
struct tuple1$1sTypeph* __dec_obj39;
void* __right_value295 = (void*)0;
struct tuple1$1sTypeph* __dec_obj41;
void* __right_value296 = (void*)0;
char* __dec_obj42;
void* __right_value297 = (void*)0;
struct list$1sTypeph* __dec_obj43;
void* __right_value305 = (void*)0;
struct list$1sNodeph* __dec_obj47;
void* __right_value306 = (void*)0;
struct list$1sTypeph* __dec_obj48;
void* __right_value313 = (void*)0;
struct list$1charph* __dec_obj52;
void* __right_value316 = (void*)0;
struct tuple1$1sTypeph* __dec_obj54;
void* __right_value317 = (void*)0;
struct sNode* __dec_obj55;
void* __right_value318 = (void*)0;
struct sNode* __dec_obj56;
void* __right_value319 = (void*)0;
char* __dec_obj57;
void* __right_value320 = (void*)0;
char* __dec_obj58;
struct sType* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_203, 0, sizeof(struct sType*));
                                    if(self==(void*)0) {
                                        __result105__ = __result_obj__ = (void*)0;
                                        return __result105__;
                                    }
                                    result_203=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value282=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
                                    if(self!=((void*)0)) {
                                        result_203->mClass=self->mClass;
                                    }
                                    if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
                                        __dec_obj37=result_203->mMultipleTypes;
                                        result_203->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value289=list$1sTypeph_clone(self->mMultipleTypes))));
                                        come_call_finalizer3(__dec_obj37,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
                                        __dec_obj39=result_203->mNoSolvedGenericsType;
                                        result_203->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value292=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                                        come_call_finalizer3(__dec_obj39,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
                                        __dec_obj41=result_203->mOriginalLoadVarType;
                                        result_203->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value295=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                                        come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
                                        __dec_obj42=result_203->mGenericsName;
                                        result_203->mGenericsName=(char*)come_increment_ref_count(((char*)(__right_value296=string_clone(self->mGenericsName))));
                                        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
                                        __dec_obj43=result_203->mGenericsTypes;
                                        result_203->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value297=list$1sTypeph_clone(self->mGenericsTypes))));
                                        come_call_finalizer3(__dec_obj43,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
                                        __dec_obj47=result_203->mArrayNum;
                                        result_203->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value305=list$1sNodeph_clone(self->mArrayNum))));
                                        come_call_finalizer3(__dec_obj47,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mOmitArrayNum=self->mOmitArrayNum;
                                    }
                                    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
                                        __dec_obj48=result_203->mParamTypes;
                                        result_203->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value306=list$1sTypeph_clone(self->mParamTypes))));
                                        come_call_finalizer3(__dec_obj48,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
                                        __dec_obj52=result_203->mParamNames;
                                        result_203->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value313=list$1charph_clone(self->mParamNames))));
                                        come_call_finalizer3(__dec_obj52,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
                                        __dec_obj54=result_203->mResultType;
                                        result_203->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value316=tuple1$1sTypephp_clone(self->mResultType))));
                                        come_call_finalizer3(__dec_obj54,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mVarArgs=self->mVarArgs;
                                    }
                                    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
                                        __dec_obj55=result_203->mAlignas;
                                        result_203->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value317=sNode_clone(self->mAlignas))));
                                        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mUnsigned=self->mUnsigned;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mShort=self->mShort;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mLong=self->mLong;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mLongLong=self->mLongLong;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mConstant=self->mConstant;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mRegister=self->mRegister;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mVolatile=self->mVolatile;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mStatic=self->mStatic;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mUniq=self->mUniq;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mRecord=self->mRecord;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mExtern=self->mExtern;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mRestrict=self->mRestrict;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mImmutable=self->mImmutable;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mHeap=self->mHeap;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mDummyHeap=self->mDummyHeap;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mDelegate=self->mDelegate;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mShare=self->mShare;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mClone=self->mClone;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mNoHeap=self->mNoHeap;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mNoCallingDestructor=self->mNoCallingDestructor;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mRefference=self->mRefference;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mException=self->mException;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mPointerNum=self->mPointerNum;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mNoArrayPointerNum=self->mNoArrayPointerNum;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
                                    }
                                    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
                                        __dec_obj56=result_203->mSizeNum;
                                        result_203->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value318=sNode_clone(self->mSizeNum))));
                                        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mDynamicArrayNum=self->mDynamicArrayNum;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mTypeOfExpression=self->mTypeOfExpression;
                                    }
                                    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
                                        __dec_obj57=result_203->mOriginalTypeName;
                                        result_203->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(__right_value319=string_clone(self->mOriginalTypeName))));
                                        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mOriginalPointerNum=self->mOriginalPointerNum;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mFunctionParam=self->mFunctionParam;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mAllocaValue=self->mAllocaValue;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mGenericsStruct=self->mGenericsStruct;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mSolvedGenericsName=self->mSolvedGenericsName;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mComeMemCore=self->mComeMemCore;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mInline=self->mInline;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mNullValue=self->mNullValue;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mGuardValue=self->mGuardValue;
                                    }
                                    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
                                        __dec_obj58=result_203->mAsmName;
                                        result_203->mAsmName=(char*)come_increment_ref_count(((char*)(__right_value320=string_clone(self->mAsmName))));
                                        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mArrayPointerType=self->mArrayPointerType;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mLambdaArray=self->mLambdaArray;
                                    }
                                    if(self!=((void*)0)) {
                                        result_203->mNoNumberArray=self->mNoNumberArray;
                                    }
                                    __result125__ = __result_obj__ = result_203;
                                    come_call_finalizer3(result_203,sType_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result125__;
                                    come_call_finalizer3(result_203,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result106__;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1sTypeph* result_204;
struct list_item$1sTypeph* it_205;
void* __right_value288 = (void*)0;
struct list$1sTypeph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_204, 0, sizeof(struct list$1sTypeph*));
memset(&it_205, 0, sizeof(struct list_item$1sTypeph*));
                                            if(self==((void*)0)) {
                                                __result106__ = __result_obj__ = ((void*)0);
                                                return __result106__;
                                            }
                                            result_204=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value284=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value283=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))))));
                                            come_call_finalizer3(__right_value283,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            it_205=self->head;
                                            while(it_205!=((void*)0)) {
                                                list$1sTypeph_add(result_204,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value288=sType_clone(it_205->item)))));
                                                come_call_finalizer3(__right_value288,sType_finalize, 0, 1, 0, 0, __result_obj__);
                                                it_205=it_205->next;
                                            }
                                            __result109__ = __result_obj__ = result_204;
                                            come_call_finalizer3(result_204,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result109__;
                                            come_call_finalizer3(result_204,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result107__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result107__;
                                                come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* __right_value285 = (void*)0;
struct list_item$1sTypeph* litem_206;
struct sType* __dec_obj34;
void* __right_value286 = (void*)0;
struct list_item$1sTypeph* litem_207;
struct sType* __dec_obj35;
void* __right_value287 = (void*)0;
struct list_item$1sTypeph* litem_208;
struct sType* __dec_obj36;
struct list$1sTypeph* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_206, 0, sizeof(struct list_item$1sTypeph*));
memset(&litem_207, 0, sizeof(struct list_item$1sTypeph*));
memset(&litem_208, 0, sizeof(struct list_item$1sTypeph*));
                                                    if(self->len==0) {
                                                        litem_206=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value285=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
                                                        come_call_finalizer3(__right_value285,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        litem_206->prev=((void*)0);
                                                        litem_206->next=((void*)0);
                                                        __dec_obj34=litem_206->item;
                                                        litem_206->item=(struct sType*)come_increment_ref_count(item);
                                                        come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        self->tail=litem_206;
                                                        self->head=litem_206;
                                                    }
                                                    else {
                                                        if(self->len==1) {
                                                            litem_207=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value286=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
                                                            come_call_finalizer3(__right_value286,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_207->prev=self->head;
                                                            litem_207->next=((void*)0);
                                                            __dec_obj35=litem_207->item;
                                                            litem_207->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->tail=litem_207;
                                                            self->head->next=litem_207;
                                                        }
                                                        else {
                                                            litem_208=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value287=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
                                                            come_call_finalizer3(__right_value287,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_208->prev=self->tail;
                                                            litem_208->next=((void*)0);
                                                            __dec_obj36=litem_208->item;
                                                            litem_208->item=(struct sType*)come_increment_ref_count(item);
                                                            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            self->tail->next=litem_208;
                                                            self->tail=litem_208;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result108__ = __result_obj__ = self;
                                                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
                                                    return __result108__;
                                                    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_209;
struct list_item$1sTypeph* prev_it_210;
memset(&it_209, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_210, 0, sizeof(struct list_item$1sTypeph*));
                                            it_209=self->head;
                                            while(it_209!=((void*)0)) {
                                                prev_it_210=it_209;
                                                it_209=it_209->next;
                                                come_call_finalizer3(prev_it_210,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
                                                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                                    come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                }
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result114__;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct list$1sNodeph* result_213;
struct list_item$1sNodeph* it_214;
void* __right_value304 = (void*)0;
struct list$1sNodeph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_213, 0, sizeof(struct list$1sNodeph*));
memset(&it_214, 0, sizeof(struct list_item$1sNodeph*));
                                            if(self==((void*)0)) {
                                                __result114__ = __result_obj__ = ((void*)0);
                                                return __result114__;
                                            }
                                            result_213=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value299=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value298=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))))));
                                            come_call_finalizer3(__right_value298,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                            it_214=self->head;
                                            while(it_214!=((void*)0)) {
                                                list$1sNodeph_add(result_213,(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value304=sNode_clone(it_214->item)))));
                                                if(__right_value304) { __right_value304 = come_decrement_ref_count2(__right_value304, ((struct sNode*)__right_value304)->finalize, ((struct sNode*)__right_value304)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                it_214=it_214->next;
                                            }
                                            __result119__ = __result_obj__ = result_213;
                                            come_call_finalizer3(result_213,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result119__;
                                            come_call_finalizer3(result_213,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
                                                self->head=((void*)0);
                                                self->tail=((void*)0);
                                                self->len=0;
                                                __result115__ = __result_obj__ = self;
                                                come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
                                                return __result115__;
                                                come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* __right_value300 = (void*)0;
struct list_item$1sNodeph* litem_215;
struct sNode* __dec_obj44;
void* __right_value301 = (void*)0;
struct list_item$1sNodeph* litem_216;
struct sNode* __dec_obj45;
void* __right_value302 = (void*)0;
struct list_item$1sNodeph* litem_217;
struct sNode* __dec_obj46;
struct list$1sNodeph* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_215, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_216, 0, sizeof(struct list_item$1sNodeph*));
memset(&litem_217, 0, sizeof(struct list_item$1sNodeph*));
                                                    if(self->len==0) {
                                                        litem_215=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value300=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
                                                        come_call_finalizer3(__right_value300,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        litem_215->prev=((void*)0);
                                                        litem_215->next=((void*)0);
                                                        __dec_obj44=litem_215->item;
                                                        litem_215->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
                                                        self->tail=litem_215;
                                                        self->head=litem_215;
                                                    }
                                                    else {
                                                        if(self->len==1) {
                                                            litem_216=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value301=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
                                                            come_call_finalizer3(__right_value301,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_216->prev=self->head;
                                                            litem_216->next=((void*)0);
                                                            __dec_obj45=litem_216->item;
                                                            litem_216->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); }
                                                            self->tail=litem_216;
                                                            self->head->next=litem_216;
                                                        }
                                                        else {
                                                            litem_217=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value302=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
                                                            come_call_finalizer3(__right_value302,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_217->prev=self->tail;
                                                            litem_217->next=((void*)0);
                                                            __dec_obj46=litem_217->item;
                                                            litem_217->item=(struct sNode*)come_increment_ref_count(item);
                                                            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
                                                            self->tail->next=litem_217;
                                                            self->tail=litem_217;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result116__ = __result_obj__ = self;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result116__;
                                                    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
struct sNode* __result117__;
void* __right_value303 = (void*)0;
struct sNode* result_218;
struct sNode* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_218, 0, sizeof(struct sNode*));
                                                    if(self==(void*)0) {
                                                        __result117__ = __result_obj__ = (void*)0;
                                                        return __result117__;
                                                    }
                                                    result_218=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value303=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                                                    if(self!=((void*)0)&&self->clone!=((void*)0)) {
                                                        result_218->_protocol_obj=self->clone(self->_protocol_obj);
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_218->finalize=self->finalize;
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_218->clone=self->clone;
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_218->compile=self->compile;
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_218->sline=self->sline;
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_218->sname=self->sname;
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_218->terminated=self->terminated;
                                                    }
                                                    if(self!=((void*)0)) {
                                                        result_218->kind=self->kind;
                                                    }
                                                    __result118__ = __result_obj__ = result_218;
                                                    if(result_218) { result_218 = come_decrement_ref_count2(result_218, ((struct sNode*)result_218)->finalize, ((struct sNode*)result_218)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                    return __result118__;
                                                    if(result_218) { result_218 = come_decrement_ref_count2(result_218, ((struct sNode*)result_218)->finalize, ((struct sNode*)result_218)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_219;
struct list_item$1sNodeph* prev_it_220;
memset(&it_219, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_220, 0, sizeof(struct list_item$1sNodeph*));
                                            it_219=self->head;
                                            while(it_219!=((void*)0)) {
                                                prev_it_220=it_219;
                                                it_219=it_219->next;
                                                come_call_finalizer3(prev_it_220,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result120__;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct list$1charph* result_221;
struct list_item$1charph* it_222;
void* __right_value312 = (void*)0;
struct list$1charph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_221, 0, sizeof(struct list$1charph*));
memset(&it_222, 0, sizeof(struct list_item$1charph*));
                                            if(self==((void*)0)) {
                                                __result120__ = __result_obj__ = ((void*)0);
                                                return __result120__;
                                            }
                                            result_221=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value308=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value307=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))))));
                                            come_call_finalizer3(__right_value307,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                            it_222=self->head;
                                            while(it_222!=((void*)0)) {
                                                list$1charph_add(result_221,(char*)come_increment_ref_count(((char*)(__right_value312=string_clone(it_222->item)))));
                                                __right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                it_222=it_222->next;
                                            }
                                            __result122__ = __result_obj__ = result_221;
                                            come_call_finalizer3(result_221,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result122__;
                                            come_call_finalizer3(result_221,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
void* __right_value309 = (void*)0;
struct list_item$1charph* litem_223;
char* __dec_obj49;
void* __right_value310 = (void*)0;
struct list_item$1charph* litem_224;
char* __dec_obj50;
void* __right_value311 = (void*)0;
struct list_item$1charph* litem_225;
char* __dec_obj51;
struct list$1charph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&litem_223, 0, sizeof(struct list_item$1charph*));
memset(&litem_224, 0, sizeof(struct list_item$1charph*));
memset(&litem_225, 0, sizeof(struct list_item$1charph*));
                                                    if(self->len==0) {
                                                        litem_223=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value309=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
                                                        come_call_finalizer3(__right_value309,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                        litem_223->prev=((void*)0);
                                                        litem_223->next=((void*)0);
                                                        __dec_obj49=litem_223->item;
                                                        litem_223->item=(char*)come_increment_ref_count(item);
                                                        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        self->tail=litem_223;
                                                        self->head=litem_223;
                                                    }
                                                    else {
                                                        if(self->len==1) {
                                                            litem_224=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value310=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
                                                            come_call_finalizer3(__right_value310,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_224->prev=self->head;
                                                            litem_224->next=((void*)0);
                                                            __dec_obj50=litem_224->item;
                                                            litem_224->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            self->tail=litem_224;
                                                            self->head->next=litem_224;
                                                        }
                                                        else {
                                                            litem_225=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value311=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
                                                            come_call_finalizer3(__right_value311,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            litem_225->prev=self->tail;
                                                            litem_225->next=((void*)0);
                                                            __dec_obj51=litem_225->item;
                                                            litem_225->item=(char*)come_increment_ref_count(item);
                                                            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            self->tail->next=litem_225;
                                                            self->tail=litem_225;
                                                        }
                                                    }
                                                    self->len++;
                                                    __result121__ = __result_obj__ = self;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                                    return __result121__;
                                                    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_226;
struct list_item$1charph* prev_it_227;
memset(&it_226, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_227, 0, sizeof(struct list_item$1charph*));
                                            it_226=self->head;
                                            while(it_226!=((void*)0)) {
                                                prev_it_227=it_226;
                                                it_226=it_226->next;
                                                come_call_finalizer3(prev_it_227,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
struct tuple1$1sTypeph* __result123__;
void* __right_value314 = (void*)0;
struct tuple1$1sTypeph* result_228;
void* __right_value315 = (void*)0;
struct sType* __dec_obj53;
struct tuple1$1sTypeph* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_228, 0, sizeof(struct tuple1$1sTypeph*));
                                            if(self==(void*)0) {
                                                __result123__ = __result_obj__ = (void*)0;
                                                return __result123__;
                                            }
                                            result_228=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value314=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                                            if(self!=((void*)0)&&self->v1!=((void*)0)) {
                                                __dec_obj53=result_228->v1;
                                                result_228->v1=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value315=sType_clone(self->v1))));
                                                come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            }
                                            __result124__ = __result_obj__ = result_228;
                                            come_call_finalizer3(result_228,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result124__;
                                            come_call_finalizer3(result_228,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1tuple2$2charphsTypephph* it_229;
struct list_item$1tuple2$2charphsTypephph* prev_it_230;
memset(&it_229, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_230, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    it_229=self->head;
                    while(it_229!=((void*)0)) {
                        prev_it_230=it_229;
                        it_229=it_229->next;
                        come_call_finalizer3(prev_it_230,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

int come_main_v2(int argc, char** argv){
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct buffer* clang_option_231;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct buffer* cpp_option_232;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct list$1charph* files_233;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct list$1charph* object_files_234;
_Bool output_object_file_235;
_Bool output_cpp_file_236;
_Bool output_source_file_flag_237;
void* __right_value335 = (void*)0;
char* output_file_name_238;
_Bool verbose_239;
_Bool prohibit_common_header_240;
_Bool come_debug_241;
_Bool come_malloc_242;
_Bool come_str_243;
int i_244;
void* __right_value336 = (void*)0;
char* __dec_obj63;
void* __right_value337 = (void*)0;
_Bool _if_conditional1;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
_Bool _if_conditional2;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
_Bool _or_conditional8;
_Bool __exception_result_var_b8;
struct _IO_FILE* f_245;
_Bool _and_conditional1;
_Bool __exception_result_var_b9;
void* __right_value351 = (void*)0;
char* tmp_file_246;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct sInfo info_247;
void* __right_value356 = (void*)0;
char* __dec_obj64;
void* __right_value357 = (void*)0;
char* __dec_obj65;
void* __right_value358 = (void*)0;
char* __dec_obj66;
void* __right_value359 = (void*)0;
char* __dec_obj67;
void* __right_value360 = (void*)0;
void* __right_value366 = (void*)0;
struct map$2charphsFunph* __dec_obj69;
void* __right_value367 = (void*)0;
void* __right_value373 = (void*)0;
struct map$2charphsGenericsFunph* __dec_obj71;
void* __right_value374 = (void*)0;
void* __right_value380 = (void*)0;
struct map$2charphsClassph* __dec_obj73;
void* __right_value381 = (void*)0;
void* __right_value387 = (void*)0;
struct map$2charphsClassModuleph* __dec_obj75;
void* __right_value388 = (void*)0;
void* __right_value394 = (void*)0;
struct map$2charphsTypeph* __dec_obj77;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sModule* __dec_obj78;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj79;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct list$1CVALUEph* __dec_obj80;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct sVarTable* __dec_obj81;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct sVarTable* lv_table_283;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct list$1charph* __dec_obj82;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct list$1charph* __dec_obj83;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct map$2charphsClassph* __dec_obj84;
void* __right_value411 = (void*)0;
char* __dec_obj85;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct buffer* __dec_obj86;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct buffer* __dec_obj87;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct buffer* clang_option_287;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct buffer* cpp_option_288;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct list$1charph* files_289;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct list$1charph* object_files_290;
_Bool output_object_file_291;
_Bool output_cpp_file_292;
_Bool output_source_file_flag_293;
char* output_file_name_294;
_Bool verbose_295;
_Bool come_debug_296;
_Bool come_malloc_297;
_Bool come_str_298;
int i_299;
void* __right_value427 = (void*)0;
char* __dec_obj88;
void* __right_value428 = (void*)0;
_Bool _if_conditional3;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
_Bool _if_conditional4;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct list$1charph* o2_saved_300;
char* it_301;
struct sInfo info_302;
void* __right_value442 = (void*)0;
char* __dec_obj89;
void* __right_value443 = (void*)0;
char* __dec_obj90;
void* __right_value444 = (void*)0;
char* __dec_obj91;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct map$2charphsFunph* __dec_obj92;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct map$2charphsGenericsFunph* __dec_obj93;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct map$2charphsClassph* __dec_obj94;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct map$2charphsClassModuleph* __dec_obj95;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct map$2charphsTypeph* __dec_obj96;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sModule* __dec_obj97;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj98;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct list$1CVALUEph* __dec_obj99;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sVarTable* __dec_obj100;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct sVarTable* lv_table_303;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct list$1charph* __dec_obj101;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct list$1charph* __dec_obj102;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct map$2charphsClassph* __dec_obj103;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct buffer* __dec_obj104;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct buffer* __dec_obj105;
void* __right_value477 = (void*)0;
char* __dec_obj106;
char* __dec_obj107;
struct sInfo info_304;
void* __right_value478 = (void*)0;
char* __dec_obj108;
void* __right_value479 = (void*)0;
char* __dec_obj109;
void* __right_value480 = (void*)0;
char* __dec_obj110;
char* __dec_obj111;
struct __current_stack2__ __current_stack2__;
memset(&clang_option_231, 0, sizeof(struct buffer*));
memset(&cpp_option_232, 0, sizeof(struct buffer*));
memset(&files_233, 0, sizeof(struct list$1charph*));
memset(&object_files_234, 0, sizeof(struct list$1charph*));
memset(&output_file_name_238, 0, sizeof(char*));
memset(&f_245, 0, sizeof(struct _IO_FILE*));
memset(&tmp_file_246, 0, sizeof(char*));
memset(&info_247, 0, sizeof(struct sInfo));
memset(&lv_table_283, 0, sizeof(struct sVarTable*));
memset(&clang_option_287, 0, sizeof(struct buffer*));
memset(&cpp_option_288, 0, sizeof(struct buffer*));
memset(&files_289, 0, sizeof(struct list$1charph*));
memset(&object_files_290, 0, sizeof(struct list$1charph*));
memset(&output_file_name_294, 0, sizeof(char*));
memset(&o2_saved_300, 0, sizeof(struct list$1charph*));
memset(&info_302, 0, sizeof(struct sInfo));
memset(&lv_table_303, 0, sizeof(struct sVarTable*));
memset(&info_304, 0, sizeof(struct sInfo));
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    if(charp_operator_equals(argv[1],"header")&&argc>=3) {
        gProgramName=argv[0];
        clang_option_231=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value328=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value327=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 515, "buffer"))))))));
        come_call_finalizer3(__right_value327,buffer_finalize, 0, 1, 0, 0, (void*)0);
        cpp_option_232=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value330=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value329=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 516, "buffer"))))))));
        come_call_finalizer3(__right_value329,buffer_finalize, 0, 1, 0, 0, (void*)0);
        files_233=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value332=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value331=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 517, "list$1charph"))))))));
        come_call_finalizer3(__right_value331,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        object_files_234=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value334=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value333=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 518, "list$1charph"))))))));
        come_call_finalizer3(__right_value333,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        output_object_file_235=(_Bool)0;
        output_cpp_file_236=(_Bool)0;
        output_source_file_flag_237=(_Bool)0;
        output_file_name_238=(char*)come_increment_ref_count(((char*)(__right_value335=__builtin_string("common.h"))));
        verbose_239=(_Bool)0;
        prohibit_common_header_240=(_Bool)0;
        come_debug_241=(_Bool)0;
        come_malloc_242=(_Bool)0;
        come_str_243=(_Bool)0;
        for(        i_244=2;        i_244<argc;        i_244++        ){
            if(charp_operator_equals(argv[i_244],"-o")&&i_244+1<argc) {
                __dec_obj63=output_file_name_238;
                output_file_name_238=(char*)come_increment_ref_count(((char*)(__right_value336=__builtin_string(argv[i_244+1]))));
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                i_244++;
            }
            else {
                if(charp_operator_equals(argv[i_244],"-str")) {
                    come_str_243=(_Bool)1;
                }
                else {
                    if(charp_operator_equals(argv[i_244],"-gc")) {
                        gComeGC=(_Bool)1;
                    }
                    else {
                        if(charp_operator_equals(argv[i_244],"-g")) {
                            buffer_append_str(clang_option_231,"-g ");
                        }
                        else {
                            if(charp_operator_equals(argv[i_244],"-cg")) {
                                buffer_append_str(clang_option_231,"-g ");
                                come_debug_241=(_Bool)1;
                            }
                            else {
                                if(charp_operator_equals(argv[i_244],"-common-header")) {
                                    gCommonHeader=(_Bool)1;
                                }
                                else {
                                    if(charp_operator_equals(argv[i_244],"-original-position")) {
                                        gComeOriginalSourcePosition=(_Bool)0;
                                    }
                                    else {
                                        if((_if_conditional1=(string_operator_equals(((char*)(__right_value337=charp_operator_load_range_element(argv[i_244],0,2))),"-O"))),                                        (come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
                                        _if_conditional1) {
                                            buffer_append_str(clang_option_231,((char*)(__right_value339=xsprintf(" \%s ",((char*)(__right_value338=charp_to_string(argv[i_244])))))));
                                            __right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                            __right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                            come_debug_241=(_Bool)0;
                                        }
                                        else {
                                            if((_if_conditional2=(string_operator_equals(((char*)(__right_value340=charp_operator_load_range_element(argv[i_244],0,2))),"-D"))),                                            (come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
                                            _if_conditional2) {
                                                buffer_append_str(cpp_option_232,((char*)(__right_value342=xsprintf(" \%s ",((char*)(__right_value341=charp_to_string(argv[i_244])))))));
                                                __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                buffer_append_str(clang_option_231,((char*)(__right_value344=xsprintf(" \%s ",((char*)(__right_value343=charp_to_string(argv[i_244])))))));
                                                __right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                __right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                            }
                                            else {
                                                if(charp_operator_equals(argv[i_244],"-v")) {
                                                    buffer_append_str(clang_option_231,"-v ");
                                                    verbose_239=(_Bool)1;
                                                }
                                                else {
                                                    if(strlen(argv[i_244])>=2&&memcmp(argv[i_244],"-I",strlen("-I"))==0) {
                                                        buffer_append_str(cpp_option_232,((char*)(__right_value346=charp_operator_add(" ",((char*)(__right_value345=charp_operator_add(argv[i_244]," ")))))));
                                                        __right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                        __right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                    }
                                                    else {
                                                        if(charp_operator_equals(argv[i_244],"-gdwarf-4")) {
                                                            buffer_append_str(clang_option_231,"-gdwarf-4 ");
                                                        }
                                                        else {
                                                            if(charp_operator_equals(argv[i_244],"-s")||charp_operator_equals(argv[i_244],"-S")) {
                                                                output_source_file_flag_237=(_Bool)1;
                                                                gComeOriginalSourcePosition=(_Bool)0;
                                                            }
                                                            else {
                                                                if(charp_operator_equals(argv[i_244],"-c")) {
                                                                    output_object_file_235=(_Bool)1;
                                                                }
                                                                else {
                                                                    if(charp_operator_equals(argv[i_244],"-E")) {
                                                                        output_cpp_file_236=(_Bool)1;
                                                                    }
                                                                    else {
                                                                        if(argv[i_244][0]==45) {
                                                                            buffer_append_str(clang_option_231,((char*)(__right_value347=charp_operator_add(argv[i_244]," "))));
                                                                            __right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                        }
                                                                        else {
                                                                            if(strlen(argv[i_244])>2&&memcmp(argv[i_244]+strlen(argv[i_244])-2,".o",2)==0) {
                                                                                list$1charph_push_back(object_files_234,(char*)come_increment_ref_count(((char*)(__right_value348=__builtin_string(argv[i_244])))));
                                                                                __right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                            }
                                                                            else {
                                                                                list$1charph_push_back(files_233,(char*)come_increment_ref_count(((char*)(__right_value349=__builtin_string(argv[i_244])))));
                                                                                __right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
                    }
                }
            }
        }
        gComeDebug=come_debug_241;
        gComeMalloc=come_malloc_242;
        if(come_str_243) {
            if(gComeGC) {
                buffer_append_str(clang_option_231," -lneo-c-str-gc -lpcre ");
            }
            else {
                buffer_append_str(clang_option_231," -lneo-c-str -lpcre ");
            }
        }
        if((_or_conditional8=(system(((char*)(__right_value350=xsprintf("%s %s",RM,output_file_name_238)))))),        (come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _or_conditional8 != 0) {
            (come_push_stackframe("02transpile.c", 603, 7),__exception_result_var_b8=die("rm"), come_pop_stackframe(), __exception_result_var_b8);
        }
        if((_and_conditional1=(f_245=fopen(output_file_name_238,"w"))),        _and_conditional1 == 0) {
            (come_push_stackframe("02transpile.c", 605, 8),__exception_result_var_b9=die("fopen"), come_pop_stackframe(), __exception_result_var_b9);
        }
        fclose(f_245);
        tmp_file_246=(char*)come_increment_ref_count(((char*)(__right_value351=__builtin_string("tmp-common-header"))));
        system(((char*)(__right_value355=xsprintf("cat \%s > \%s",((char*)(__right_value353=string_to_string(((char*)(__right_value352=list$1charph_join(files_233," ")))))),((char*)(__right_value354=string_to_string(tmp_file_246)))))));
        __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        memset(&info_247,0,sizeof(struct sInfo));
        __dec_obj64=info_247.base_sname;
        info_247.base_sname=(char*)come_increment_ref_count(((char*)(__right_value356=__builtin_string(tmp_file_246))));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj65=info_247.sname;
        info_247.sname=(char*)come_increment_ref_count(((char*)(__right_value357=__builtin_string(tmp_file_246))));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        info_247.sline=1;
        info_247.err_num=0;
        __dec_obj66=info_247.clang_option;
        info_247.clang_option=(char*)come_increment_ref_count(((char*)(__right_value358=buffer_to_string(clang_option_231))));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj67=info_247.cpp_option;
        info_247.cpp_option=(char*)come_increment_ref_count(((char*)(__right_value359=buffer_to_string(cpp_option_232))));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        info_247.no_output_err=(_Bool)0;
        __dec_obj69=info_247.funcs;
        info_247.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(__right_value366=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(__right_value360=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 623, "map$2charphsFunph"))))))));
        come_call_finalizer3(__dec_obj69,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value360,map$2charphsFunphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value366,map$2charphsFunphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj71=info_247.generics_funcs;
        info_247.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(__right_value373=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(__right_value367=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 624, "map$2charphsGenericsFunph"))))))));
        come_call_finalizer3(__dec_obj71,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value367,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value373,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj73=info_247.classes;
        info_247.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(__right_value380=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(__right_value374=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 625, "map$2charphsClassph"))))))));
        come_call_finalizer3(__dec_obj73,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value374,map$2charphsClassphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value380,map$2charphsClassphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj75=info_247.modules;
        info_247.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(__right_value387=map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(__right_value381=(struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 626, "map$2charphsClassModuleph"))))))));
        come_call_finalizer3(__dec_obj75,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value381,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value387,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj77=info_247.types;
        info_247.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(__right_value394=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(__right_value388=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 627, "map$2charphsTypeph"))))))));
        come_call_finalizer3(__dec_obj77,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value388,map$2charphsTypephp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value394,map$2charphsTypephp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj78=info_247.module;
        info_247.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(__right_value396=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(__right_value395=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 628, "sModule"))))))));
        come_call_finalizer3(__dec_obj78,sModule_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value395,sModule_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value396,sModule_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj79=info_247.right_value_objects;
        info_247.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(__right_value398=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(__right_value397=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 629, "list$1sRightValueObjectph"))))))));
        come_call_finalizer3(__dec_obj79,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value397,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value398,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj80=info_247.stack;
        info_247.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value400=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value399=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 630, "list$1CVALUEph"))))))));
        come_call_finalizer3(__dec_obj80,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value399,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value400,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj81=info_247.gv_table;
        info_247.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(__right_value402=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(__right_value401=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 631, "sVarTable")))),(_Bool)1,((void*)0)))));
        come_call_finalizer3(__dec_obj81,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value401,sVarTable_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value402,sVarTable_finalize, 0, 1, 0, 0, (void*)0);
        lv_table_283=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(__right_value404=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(__right_value403=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 632, "sVarTable")))),(_Bool)0,((void*)0)))));
        come_call_finalizer3(__right_value403,sVarTable_finalize, 0, 1, 0, 0, (void*)0);
        info_247.lv_table=lv_table_283;
        __dec_obj82=info_247.generics_type_names;
        info_247.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value406=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value405=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 634, "list$1charph"))))))));
        come_call_finalizer3(__dec_obj82,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value405,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value406,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj83=info_247.method_generics_type_names;
        info_247.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value408=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value407=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 635, "list$1charph"))))))));
        come_call_finalizer3(__dec_obj83,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value407,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value408,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj84=info_247.generics_classes;
        info_247.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(__right_value410=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(__right_value409=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 636, "map$2charphsClassph"))))))));
        come_call_finalizer3(__dec_obj84,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value409,map$2charphsClassphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value410,map$2charphsClassphp_finalize, 0, 1, 0, 0, (void*)0);
        info_247.verbose=verbose_239;
        info_247.output_header_file=(_Bool)1;
        static int n_284=0;
        info_247.num_source_files=n_284++;
        info_247.max_source_files=list$1charph_length(files_233);
        __dec_obj85=info_247.output_file_name;
        info_247.output_file_name=(char*)come_increment_ref_count(((char*)(__right_value411=__builtin_string(output_file_name_238))));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        init_classes(&info_247);
        clear_tmp_file(&info_247);
        if(!cpp(&info_247)) {
            printf("%s %d: transpile failed\n",info_247.sname,info_247.sline);
            exit(2);
        }
        __dec_obj86=info_247.original_source;
        info_247.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value414=string_to_buffer(((char*)(__right_value413=string_read(((char*)(__right_value412=xsprintf("%s",tmp_file_246))))))))));
        come_call_finalizer3(__dec_obj86,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value412 = come_decrement_ref_count2(__right_value412, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value414,buffer_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj87=info_247.source;
        info_247.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value417=string_to_buffer(((char*)(__right_value416=string_read(((char*)(__right_value415=xsprintf("%s.i",tmp_file_246))))))))));
        come_call_finalizer3(__dec_obj87,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value417,buffer_finalize, 0, 1, 0, 0, (void*)0);
        info_247.p=info_247.source->buf;
        info_247.head=info_247.source->buf;
        if(!output_cpp_file_236) {
            transpile_v5(&info_247);
            if(!output_header_file(&info_247)) {
                printf("%s %d: output source file faield\n",info_247.sname,info_247.sline);
                exit(2);
            }
        }
        system(((char*)(__right_value418=xsprintf("%s %s*",RM,tmp_file_246))));
        __right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(clang_option_231,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cpp_option_232,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(files_233,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(object_files_234,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        output_file_name_238 = come_decrement_ref_count2(output_file_name_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        tmp_file_246 = come_decrement_ref_count2(tmp_file_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3((&info_247),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        come_call_finalizer3(lv_table_283,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(charp_operator_equals(argv[1],"new")&&argc==3) {
            if(!new_project(argc,argv)) {
                return (_Bool)0;
            }
        }
        else {
            if(charp_operator_equals(argv[1],"run")&&argc==2) {
                if(!run_project(argc,argv)) {
                    return (_Bool)0;
                }
            }
            else {
                if(charp_operator_equals(argv[1],"header")&&argc==2) {
                    if(!make_header_project(argc,argv)) {
                        return (_Bool)0;
                    }
                }
                else {
                    if(charp_operator_equals(argv[1],"compile")&&argc==2) {
                        if(!compile_project(argc,argv)) {
                            return (_Bool)0;
                        }
                    }
                    else {
                        if(charp_operator_equals(argv[1],"debug")&&argc==2) {
                            if(!debug_run_project(argc,argv)) {
                                return (_Bool)0;
                            }
                        }
                        else {
                            if(charp_operator_equals(argv[1],"clean")&&argc==2) {
                                if(!clean_project(argc,argv)) {
                                    return (_Bool)0;
                                }
                            }
                            else {
                                if(charp_operator_equals(argv[1],"install")&&argc>=2) {
                                    if(argc==2) {
                                        if(!install_project(argc,argv,"/usr/local")) {
                                            return (_Bool)0;
                                        }
                                    }
                                    else {
                                        if(argc>=3) {
                                            if(!install_project(argc,argv,argv[2])) {
                                                return (_Bool)0;
                                            }
                                        }
                                    }
                                }
                                else {
                                    gProgramName=argv[0];
                                    clang_option_287=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value420=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value419=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 716, "buffer"))))))));
                                    come_call_finalizer3(__right_value419,buffer_finalize, 0, 1, 0, 0, (void*)0);
                                    cpp_option_288=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value422=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value421=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 717, "buffer"))))))));
                                    come_call_finalizer3(__right_value421,buffer_finalize, 0, 1, 0, 0, (void*)0);
                                    files_289=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value424=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value423=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 718, "list$1charph"))))))));
                                    come_call_finalizer3(__right_value423,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
                                    object_files_290=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value426=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value425=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 719, "list$1charph"))))))));
                                    come_call_finalizer3(__right_value425,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
                                    output_object_file_291=(_Bool)0;
                                    output_cpp_file_292=(_Bool)0;
                                    output_source_file_flag_293=(_Bool)0;
                                    output_file_name_294=((void*)0);
                                    verbose_295=(_Bool)0;
                                    come_debug_296=(_Bool)0;
                                    come_malloc_297=(_Bool)0;
                                    come_str_298=(_Bool)0;
                                    for(                                    i_299=1;                                    i_299<argc;                                    i_299++                                    ){
                                        if(charp_operator_equals(argv[i_299],"-o")&&i_299+1<argc) {
                                            __dec_obj88=output_file_name_294;
                                            output_file_name_294=(char*)come_increment_ref_count(((char*)(__right_value427=__builtin_string(argv[i_299+1]))));
                                            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            i_299++;
                                        }
                                        else {
                                            if(charp_operator_equals(argv[i_299],"-str")) {
                                                come_str_298=(_Bool)1;
                                            }
                                            else {
                                                if(charp_operator_equals(argv[i_299],"-gc")) {
                                                    gComeGC=(_Bool)1;
                                                }
                                                else {
                                                    if(charp_operator_equals(argv[i_299],"-cg")) {
                                                        come_debug_296=(_Bool)1;
                                                        buffer_append_str(clang_option_287,"-g ");
                                                    }
                                                    else {
                                                        if(charp_operator_equals(argv[i_299],"-common-header")) {
                                                            gCommonHeader=(_Bool)1;
                                                        }
                                                        else {
                                                            if(charp_operator_equals(argv[i_299],"-original-position")) {
                                                                gComeOriginalSourcePosition=(_Bool)0;
                                                            }
                                                            else {
                                                                if((_if_conditional3=(string_operator_equals(((char*)(__right_value428=charp_operator_load_range_element(argv[i_299],0,2))),"-O"))),                                                                (come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
                                                                _if_conditional3) {
                                                                    buffer_append_str(clang_option_287,((char*)(__right_value430=xsprintf(" \%s ",((char*)(__right_value429=charp_to_string(argv[i_299])))))));
                                                                    __right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                    __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                    come_debug_296=(_Bool)0;
                                                                }
                                                                else {
                                                                    if((_if_conditional4=(string_operator_equals(((char*)(__right_value431=charp_operator_load_range_element(argv[i_299],0,2))),"-D"))),                                                                    (come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
                                                                    _if_conditional4) {
                                                                        buffer_append_str(cpp_option_288,((char*)(__right_value433=xsprintf(" \%s ",((char*)(__right_value432=charp_to_string(argv[i_299])))))));
                                                                        __right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                        __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                        buffer_append_str(clang_option_287,((char*)(__right_value435=xsprintf(" \%s ",((char*)(__right_value434=charp_to_string(argv[i_299])))))));
                                                                        __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                        __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                    }
                                                                    else {
                                                                        if(charp_operator_equals(argv[i_299],"-g")) {
                                                                            buffer_append_str(clang_option_287,"-g ");
                                                                        }
                                                                        else {
                                                                            if(charp_operator_equals(argv[i_299],"-v")) {
                                                                                buffer_append_str(clang_option_287,"-v ");
                                                                                verbose_295=(_Bool)1;
                                                                            }
                                                                            else {
                                                                                if(strlen(argv[i_299])>=2&&memcmp(argv[i_299],"-I",strlen("-I"))==0) {
                                                                                    buffer_append_str(cpp_option_288,((char*)(__right_value437=charp_operator_add(" ",((char*)(__right_value436=charp_operator_add(argv[i_299]," ")))))));
                                                                                    __right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                                    __right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                                }
                                                                                else {
                                                                                    if(charp_operator_equals(argv[i_299],"-gdwarf-4")) {
                                                                                        buffer_append_str(clang_option_287,"-gdwarf-4 ");
                                                                                    }
                                                                                    else {
                                                                                        if(charp_operator_equals(argv[i_299],"-s")||charp_operator_equals(argv[i_299],"-S")) {
                                                                                            output_source_file_flag_293=(_Bool)1;
                                                                                            gComeOriginalSourcePosition=(_Bool)0;
                                                                                        }
                                                                                        else {
                                                                                            if(charp_operator_equals(argv[i_299],"-c")) {
                                                                                                output_object_file_291=(_Bool)1;
                                                                                            }
                                                                                            else {
                                                                                                if(charp_operator_equals(argv[i_299],"-E")) {
                                                                                                    output_cpp_file_292=(_Bool)1;
                                                                                                }
                                                                                                else {
                                                                                                    if(argv[i_299][0]==45) {
                                                                                                        buffer_append_str(clang_option_287,((char*)(__right_value438=charp_operator_add(argv[i_299]," "))));
                                                                                                        __right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                                                    }
                                                                                                    else {
                                                                                                        if(strlen(argv[i_299])>2&&memcmp(argv[i_299]+strlen(argv[i_299])-2,".o",2)==0) {
                                                                                                            list$1charph_push_back(object_files_290,(char*)come_increment_ref_count(((char*)(__right_value439=__builtin_string(argv[i_299])))));
                                                                                                            __right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                                                        }
                                                                                                        else {
                                                                                                            list$1charph_push_back(files_289,(char*)come_increment_ref_count(((char*)(__right_value441=string_clone(((char*)(__right_value440=__builtin_string(argv[i_299]))))))));
                                                                                                            __right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                                                            __right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
                                                }
                                            }
                                        }
                                    }
                                    gComeDebug=come_debug_296;
                                    gComeMalloc=come_malloc_297;
                                    if(come_str_298) {
                                        if(gComeGC) {
                                            buffer_append_str(clang_option_287," -lneo-c-str-gc -lpcre ");
                                        }
                                        else {
                                            buffer_append_str(clang_option_287," -lneo-c-str -lpcre ");
                                        }
                                    }
                                    for(                                    o2_saved_300=(struct list$1charph*)come_increment_ref_count((files_289)),it_301=list$1charph_begin((o2_saved_300));                                    !list$1charph_end((o2_saved_300));                                    it_301=list$1charph_next((o2_saved_300))                                    ){
                                        memset(&info_302,0,sizeof(struct sInfo));
                                        __dec_obj89=info_302.sname;
                                        info_302.sname=(char*)come_increment_ref_count(((char*)(__right_value442=__builtin_string(it_301))));
                                        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        __right_value442 = come_decrement_ref_count2(__right_value442, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        info_302.sline=1;
                                        info_302.err_num=0;
                                        __dec_obj90=info_302.clang_option;
                                        info_302.clang_option=(char*)come_increment_ref_count(((char*)(__right_value443=buffer_to_string(clang_option_287))));
                                        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        __right_value443 = come_decrement_ref_count2(__right_value443, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        __dec_obj91=info_302.cpp_option;
                                        info_302.cpp_option=(char*)come_increment_ref_count(((char*)(__right_value444=buffer_to_string(cpp_option_288))));
                                        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        __right_value444 = come_decrement_ref_count2(__right_value444, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        info_302.no_output_err=(_Bool)0;
                                        __dec_obj92=info_302.funcs;
                                        info_302.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(__right_value446=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(__right_value445=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 814, "map$2charphsFunph"))))))));
                                        come_call_finalizer3(__dec_obj92,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value445,map$2charphsFunphp_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value446,map$2charphsFunphp_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj93=info_302.generics_funcs;
                                        info_302.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(__right_value448=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(__right_value447=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 815, "map$2charphsGenericsFunph"))))))));
                                        come_call_finalizer3(__dec_obj93,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value447,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value448,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj94=info_302.classes;
                                        info_302.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(__right_value450=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(__right_value449=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 816, "map$2charphsClassph"))))))));
                                        come_call_finalizer3(__dec_obj94,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value449,map$2charphsClassphp_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value450,map$2charphsClassphp_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj95=info_302.modules;
                                        info_302.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(__right_value452=map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(__right_value451=(struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 817, "map$2charphsClassModuleph"))))))));
                                        come_call_finalizer3(__dec_obj95,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value451,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value452,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj96=info_302.types;
                                        info_302.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(__right_value454=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(__right_value453=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 818, "map$2charphsTypeph"))))))));
                                        come_call_finalizer3(__dec_obj96,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value453,map$2charphsTypephp_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value454,map$2charphsTypephp_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj97=info_302.module;
                                        info_302.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(__right_value456=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(__right_value455=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 819, "sModule"))))))));
                                        come_call_finalizer3(__dec_obj97,sModule_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value455,sModule_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value456,sModule_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj98=info_302.right_value_objects;
                                        info_302.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(__right_value458=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(__right_value457=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 820, "list$1sRightValueObjectph"))))))));
                                        come_call_finalizer3(__dec_obj98,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value457,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value458,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj99=info_302.stack;
                                        info_302.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value460=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value459=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 821, "list$1CVALUEph"))))))));
                                        come_call_finalizer3(__dec_obj99,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value459,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value460,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj100=info_302.gv_table;
                                        info_302.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(__right_value462=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(__right_value461=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 822, "sVarTable")))),(_Bool)1,((void*)0)))));
                                        come_call_finalizer3(__dec_obj100,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value461,sVarTable_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value462,sVarTable_finalize, 0, 1, 0, 0, (void*)0);
                                        lv_table_303=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(__right_value464=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(__right_value463=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 823, "sVarTable")))),(_Bool)0,((void*)0)))));
                                        come_call_finalizer3(__right_value463,sVarTable_finalize, 0, 1, 0, 0, (void*)0);
                                        info_302.lv_table=lv_table_303;
                                        __dec_obj101=info_302.generics_type_names;
                                        info_302.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value466=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value465=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 825, "list$1charph"))))))));
                                        come_call_finalizer3(__dec_obj101,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value465,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value466,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj102=info_302.method_generics_type_names;
                                        info_302.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value468=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value467=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 826, "list$1charph"))))))));
                                        come_call_finalizer3(__dec_obj102,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value467,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value468,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj103=info_302.generics_classes;
                                        info_302.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(__right_value470=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(__right_value469=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 827, "map$2charphsClassph"))))))));
                                        come_call_finalizer3(__dec_obj103,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value469,map$2charphsClassphp_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value470,map$2charphsClassphp_finalize, 0, 1, 0, 0, (void*)0);
                                        info_302.verbose=verbose_295;
                                        init_classes(&info_302);
                                        clear_tmp_file(&info_302);
                                        if(!cpp(&info_302)) {
                                            printf("%s %d: transpile failed\n",info_302.sname,info_302.sline);
                                            exit(2);
                                        }
                                        __dec_obj104=info_302.original_source;
                                        info_302.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value473=string_to_buffer(((char*)(__right_value472=string_read(((char*)(__right_value471=xsprintf("%s",it_301))))))))));
                                        come_call_finalizer3(__dec_obj104,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        __right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        __right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value473,buffer_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj105=info_302.source;
                                        info_302.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value476=string_to_buffer(((char*)(__right_value475=string_read(((char*)(__right_value474=xsprintf("%s.i",it_301))))))))));
                                        come_call_finalizer3(__dec_obj105,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        __right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        __right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value476,buffer_finalize, 0, 1, 0, 0, (void*)0);
                                        info_302.p=info_302.source->buf;
                                        info_302.head=info_302.source->buf;
                                        if(output_file_name_294) {
                                            __dec_obj106=info_302.output_file_name;
                                            info_302.output_file_name=(char*)come_increment_ref_count(((char*)(__right_value477=__builtin_string(output_file_name_294))));
                                            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            __right_value477 = come_decrement_ref_count2(__right_value477, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        }
                                        else {
                                            __dec_obj107=info_302.output_file_name;
                                            info_302.output_file_name=((void*)0);
                                            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        if(!output_cpp_file_292) {
                                            transpile_v5(&info_302);
                                            if(!output_source_file_v3(&info_302)) {
                                                printf("%s %d: output source file faield\n",info_302.sname,info_302.sline);
                                                exit(2);
                                            }
                                            if(info_302.err_num>0) {
                                                printf("transpile error. err num %d\n",info_302.err_num);
                                                exit(2);
                                            }
                                            else {
                                                if(!compile(&info_302,output_object_file_291,object_files_290)) {
                                                    printf("%s %d: compile faield\n",info_302.sname,info_302.sline);
                                                    exit(27);
                                                }
                                            }
                                        }
                                        if(output_cpp_file_292) {
                                        }
                                        else {
                                            if(info_302.err_num>0) {
                                            }
                                            else {
                                                if(output_source_file_flag_293) {
                                                    clear_tmp_file_without_object_file_and_ccfile(&info_302);
                                                }
                                                else {
                                                    clear_tmp_file_without_object_file(&info_302);
                                                }
                                            }
                                        }
                                        come_call_finalizer3((&info_302),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(lv_table_303,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer3(o2_saved_300,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    if(!output_object_file_291&&!output_cpp_file_292&&(list$1charph_length(files_289)>0||list$1charph_length(object_files_290)>0)) {
                                        memset(&info_304,0,sizeof(struct sInfo));
                                        __dec_obj108=info_304.sname;
                                        info_304.sname=(char*)come_increment_ref_count(((char*)(__right_value478=string_clone(list$1charphp_operator_load_element(files_289,0)))));
                                        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        __right_value478 = come_decrement_ref_count2(__right_value478, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        __dec_obj109=info_304.clang_option;
                                        info_304.clang_option=(char*)come_increment_ref_count(((char*)(__right_value479=buffer_to_string(clang_option_287))));
                                        __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        __right_value479 = come_decrement_ref_count2(__right_value479, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        info_304.verbose=verbose_295;
                                        if(output_file_name_294) {
                                            __dec_obj110=info_304.output_file_name;
                                            info_304.output_file_name=(char*)come_increment_ref_count(((char*)(__right_value480=__builtin_string(output_file_name_294))));
                                            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            __right_value480 = come_decrement_ref_count2(__right_value480, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        }
                                        else {
                                            __dec_obj111=info_304.output_file_name;
                                            info_304.output_file_name=((void*)0);
                                            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        __current_stack2__.info_304 = &info_304;
                                        __current_stack2__.clang_option_287 = &clang_option_287;
                                        __current_stack2__.cpp_option_288 = &cpp_option_288;
                                        __current_stack2__.files_289 = &files_289;
                                        __current_stack2__.object_files_290 = &object_files_290;
                                        __current_stack2__.output_object_file_291 = &output_object_file_291;
                                        __current_stack2__.output_cpp_file_292 = &output_cpp_file_292;
                                        __current_stack2__.output_source_file_flag_293 = &output_source_file_flag_293;
                                        __current_stack2__.output_file_name_294 = &output_file_name_294;
                                        __current_stack2__.verbose_295 = &verbose_295;
                                        __current_stack2__.come_debug_296 = &come_debug_296;
                                        __current_stack2__.come_malloc_297 = &come_malloc_297;
                                        __current_stack2__.come_str_298 = &come_str_298;
                                        __current_stack2__.argc = &argc;
                                        __current_stack2__.argv = &argv;
                                        bool_expect(linker(&info_304,object_files_290),&__current_stack2__,(void*)method_block2_02transpilec);
                                        if(!output_cpp_file_292&&!output_source_file_flag_293) {
                                            clear_tmp_file(&info_304);
                                        }
                                        come_call_finalizer3((&info_304),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer3(clang_option_287,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(cpp_option_288,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(files_289,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(object_files_290,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    output_file_name_294 = come_decrement_ref_count2(output_file_name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self){
void* __result_obj__;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
int i_248;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct list$1charp* __dec_obj68;
struct map$2charphsFunph* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
            self->keys=(char**)come_increment_ref_count(((char**)(__right_value361=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1064, "char*%"))));
            __right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value362=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(128)), "./neo-c.h", 1065, "sFun*%"))));
            come_call_finalizer3(__right_value362,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value363=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1066, "bool"))));
            __right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_248=0;            i_248<128;            i_248++            ){
                self->item_existance[i_248]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj68=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value365=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value364=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1076, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj68,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value364,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result130__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result130__;
            come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
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

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
struct list$1charp* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
                self->head=((void*)0);
                self->tail=((void*)0);
                self->len=0;
                __result129__ = __result_obj__ = self;
                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
                return __result129__;
                come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_249;
struct list_item$1charp* prev_it_250;
memset(&it_249, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_250, 0, sizeof(struct list_item$1charp*));
                    it_249=self->head;
                    while(it_249!=((void*)0)) {
                        prev_it_250=it_249;
                        it_249=it_249->next;
                        come_call_finalizer3(prev_it_250,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
int i_251;
int i_252;
                for(                i_251=0;                i_251<self->size;                i_251++                ){
                    if(self->item_existance[i_251]) {
                        if(1) {
                            come_call_finalizer3(self->items[i_251],sFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_252=0;                i_252<self->size;                i_252++                ){
                    if(self->item_existance[i_252]) {
                        if(1) {
                            self->keys[i_252] = come_decrement_ref_count2(self->keys[i_252], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
int i_253;
int i_254;
            for(            i_253=0;            i_253<self->size;            i_253++            ){
                if(self->item_existance[i_253]) {
                    if(1) {
                        come_call_finalizer3(self->items[i_253],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_254=0;            i_254<self->size;            i_254++            ){
                if(self->item_existance[i_254]) {
                    if(1) {
                        self->keys[i_254] = come_decrement_ref_count2(self->keys[i_254], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
int i_255;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct list$1charp* __dec_obj70;
struct map$2charphsGenericsFunph* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
            self->keys=(char**)come_increment_ref_count(((char**)(__right_value368=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1064, "char*%"))));
            __right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value369=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(128)), "./neo-c.h", 1065, "sGenericsFun*%"))));
            come_call_finalizer3(__right_value369,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value370=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1066, "bool"))));
            __right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_255=0;            i_255<128;            i_255++            ){
                self->item_existance[i_255]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj70=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value372=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value371=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1076, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj70,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value371,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result131__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result131__;
            come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
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

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
int i_256;
int i_257;
                for(                i_256=0;                i_256<self->size;                i_256++                ){
                    if(self->item_existance[i_256]) {
                        if(1) {
                            come_call_finalizer3(self->items[i_256],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_257=0;                i_257<self->size;                i_257++                ){
                    if(self->item_existance[i_257]) {
                        if(1) {
                            self->keys[i_257] = come_decrement_ref_count2(self->keys[i_257], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
int i_258;
int i_259;
            for(            i_258=0;            i_258<self->size;            i_258++            ){
                if(self->item_existance[i_258]) {
                    if(1) {
                        come_call_finalizer3(self->items[i_258],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_259=0;            i_259<self->size;            i_259++            ){
                if(self->item_existance[i_259]) {
                    if(1) {
                        self->keys[i_259] = come_decrement_ref_count2(self->keys[i_259], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
int i_260;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct list$1charp* __dec_obj72;
struct map$2charphsClassph* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
            self->keys=(char**)come_increment_ref_count(((char**)(__right_value375=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1064, "char*%"))));
            __right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value376=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(128)), "./neo-c.h", 1065, "sClass*%"))));
            come_call_finalizer3(__right_value376,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value377=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1066, "bool"))));
            __right_value377 = come_decrement_ref_count2(__right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_260=0;            i_260<128;            i_260++            ){
                self->item_existance[i_260]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj72=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value379=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value378=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1076, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj72,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value378,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result132__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result132__;
            come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
int i_261;
int i_262;
                for(                i_261=0;                i_261<self->size;                i_261++                ){
                    if(self->item_existance[i_261]) {
                        if(1) {
                            come_call_finalizer3(self->items[i_261],sClass_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_262=0;                i_262<self->size;                i_262++                ){
                    if(self->item_existance[i_262]) {
                        if(1) {
                            self->keys[i_262] = come_decrement_ref_count2(self->keys[i_262], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
int i_263;
int i_264;
            for(            i_263=0;            i_263<self->size;            i_263++            ){
                if(self->item_existance[i_263]) {
                    if(1) {
                        come_call_finalizer3(self->items[i_263],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_264=0;            i_264<self->size;            i_264++            ){
                if(self->item_existance[i_264]) {
                    if(1) {
                        self->keys[i_264] = come_decrement_ref_count2(self->keys[i_264], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self){
void* __result_obj__;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
int i_265;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct list$1charp* __dec_obj74;
struct map$2charphsClassModuleph* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
            self->keys=(char**)come_increment_ref_count(((char**)(__right_value382=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1064, "char*%"))));
            __right_value382 = come_decrement_ref_count2(__right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(__right_value383=(struct sClassModule**)come_calloc(1, sizeof(struct sClassModule*)*(1*(128)), "./neo-c.h", 1065, "sClassModule*%"))));
            come_call_finalizer3(__right_value383,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value384=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1066, "bool"))));
            __right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_265=0;            i_265<128;            i_265++            ){
                self->item_existance[i_265]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj74=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value386=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value385=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1076, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj74,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value385,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result133__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result133__;
            come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
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

static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self){
int i_266;
int i_267;
                for(                i_266=0;                i_266<self->size;                i_266++                ){
                    if(self->item_existance[i_266]) {
                        if(1) {
                            come_call_finalizer3(self->items[i_266],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_267=0;                i_267<self->size;                i_267++                ){
                    if(self->item_existance[i_267]) {
                        if(1) {
                            self->keys[i_267] = come_decrement_ref_count2(self->keys[i_267], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self){
int i_268;
int i_269;
            for(            i_268=0;            i_268<self->size;            i_268++            ){
                if(self->item_existance[i_268]) {
                    if(1) {
                        come_call_finalizer3(self->items[i_268],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_269=0;            i_269<self->size;            i_269++            ){
                if(self->item_existance[i_269]) {
                    if(1) {
                        self->keys[i_269] = come_decrement_ref_count2(self->keys[i_269], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
int i_270;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct list$1charp* __dec_obj76;
struct map$2charphsTypeph* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
            self->keys=(char**)come_increment_ref_count(((char**)(__right_value389=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1064, "char*%"))));
            __right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            self->items=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value390=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(128)), "./neo-c.h", 1065, "sType*%"))));
            come_call_finalizer3(__right_value390,sType_finalize, 0, 1, 0, 0, __result_obj__);
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value391=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1066, "bool"))));
            __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            for(            i_270=0;            i_270<128;            i_270++            ){
                self->item_existance[i_270]=(_Bool)0;
            }
            self->size=128;
            self->len=0;
            __dec_obj76=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value393=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value392=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1076, "list$1charp"))))))));
            come_call_finalizer3(__dec_obj76,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value392,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            self->it=0;
            __result134__ = __result_obj__ = self;
            come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
            return __result134__;
            come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
int i_271;
int i_272;
                for(                i_271=0;                i_271<self->size;                i_271++                ){
                    if(self->item_existance[i_271]) {
                        if(1) {
                            come_call_finalizer3(self->items[i_271],sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->items);
                for(                i_272=0;                i_272<self->size;                i_272++                ){
                    if(self->item_existance[i_272]) {
                        if(1) {
                            self->keys[i_272] = come_decrement_ref_count2(self->keys[i_272], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                come_free((char*)self->keys);
                come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
int i_273;
int i_274;
            for(            i_273=0;            i_273<self->size;            i_273++            ){
                if(self->item_existance[i_273]) {
                    if(1) {
                        come_call_finalizer3(self->items[i_273],sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->items);
            for(            i_274=0;            i_274<self->size;            i_274++            ){
                if(self->item_existance[i_274]) {
                    if(1) {
                        self->keys[i_274] = come_decrement_ref_count2(self->keys[i_274], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_free((char*)self->keys);
            come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
            self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sModule_finalize(struct sModule* self){
            if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
                come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
                come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mSourceHead3!=((void*)0)) {
                come_call_finalizer3(self->mSourceHead3,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mSource!=((void*)0)) {
                come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mLastCode!=((void*)0)) {
                self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
                self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mLastCode3!=((void*)0)) {
                self->mLastCode3 = come_decrement_ref_count2(self->mLastCode3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->mHeader!=((void*)0)) {
                come_call_finalizer3(self->mHeader,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__;
struct list$1sRightValueObjectph* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result135__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result135__;
            come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_275;
struct list_item$1sRightValueObjectph* prev_it_276;
memset(&it_275, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_276, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_275=self->head;
                while(it_275!=((void*)0)) {
                    prev_it_276=it_275;
                    it_275=it_275->next;
                    come_call_finalizer3(prev_it_276,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_277;
struct list_item$1sRightValueObjectph* prev_it_278;
memset(&it_277, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_278, 0, sizeof(struct list_item$1sRightValueObjectph*));
            it_277=self->head;
            while(it_277!=((void*)0)) {
                prev_it_278=it_277;
                it_277=it_277->next;
                come_call_finalizer3(prev_it_278,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
struct list$1CVALUEph* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result136__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result136__;
            come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_279;
struct list_item$1CVALUEph* prev_it_280;
memset(&it_279, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_280, 0, sizeof(struct list_item$1CVALUEph*));
                it_279=self->head;
                while(it_279!=((void*)0)) {
                    prev_it_280=it_279;
                    it_279=it_279->next;
                    come_call_finalizer3(prev_it_280,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
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
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_281;
struct list_item$1CVALUEph* prev_it_282;
memset(&it_281, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_282, 0, sizeof(struct list_item$1CVALUEph*));
            it_281=self->head;
            while(it_281!=((void*)0)) {
                prev_it_282=it_281;
                it_281=it_281->next;
                come_call_finalizer3(prev_it_282,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void sInfo_finalize(struct sInfo* self){
            if(self!=((void*)0)&&self->original_source!=((void*)0)) {
                come_call_finalizer3(self->original_source,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->source!=((void*)0)) {
                come_call_finalizer3(self->source,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->base_sname!=((void*)0)) {
                self->base_sname = come_decrement_ref_count2(self->base_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->err_line!=((void*)0)) {
                self->err_line = come_decrement_ref_count2(self->err_line, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->clang_option!=((void*)0)) {
                self->clang_option = come_decrement_ref_count2(self->clang_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->cpp_option!=((void*)0)) {
                self->cpp_option = come_decrement_ref_count2(self->cpp_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->come_fun_name!=((void*)0)) {
                self->come_fun_name = come_decrement_ref_count2(self->come_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->funcs!=((void*)0)) {
                come_call_finalizer3(self->funcs,map$2charphsFunphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->generics_funcs!=((void*)0)) {
                come_call_finalizer3(self->generics_funcs,map$2charphsGenericsFunphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->classes!=((void*)0)) {
                come_call_finalizer3(self->classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->modules!=((void*)0)) {
                come_call_finalizer3(self->modules,map$2charphsClassModulephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->types!=((void*)0)) {
                come_call_finalizer3(self->types,map$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->generics_classes!=((void*)0)) {
                come_call_finalizer3(self->generics_classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->module!=((void*)0)) {
                come_call_finalizer3(self->module,sModule_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->type!=((void*)0)) {
                come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->right_value_objects!=((void*)0)) {
                come_call_finalizer3(self->right_value_objects,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->generics_type!=((void*)0)) {
                come_call_finalizer3(self->generics_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
                come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->stack!=((void*)0)) {
                come_call_finalizer3(self->stack,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->come_function_result_type!=((void*)0)) {
                come_call_finalizer3(self->come_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->gv_table!=((void*)0)) {
                come_call_finalizer3(self->gv_table,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->generics_type_names!=((void*)0)) {
                come_call_finalizer3(self->generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->method_generics_type_names!=((void*)0)) {
                come_call_finalizer3(self->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->impl_type!=((void*)0)) {
                come_call_finalizer3(self->impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->output_file_name!=((void*)0)) {
                self->output_file_name = come_decrement_ref_count2(self->output_file_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->function_result_type!=((void*)0)) {
                come_call_finalizer3(self->function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(self!=((void*)0)&&self->module_params!=((void*)0)) {
                come_call_finalizer3(self->module_params,map$2charphcharphp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_285;
int i_286;
                    for(                    i_285=0;                    i_285<self->size;                    i_285++                    ){
                        if(self->item_existance[i_285]) {
                            if(1) {
                                self->items[i_285] = come_decrement_ref_count2(self->items[i_285], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_free((char*)self->items);
                    for(                    i_286=0;                    i_286<self->size;                    i_286++                    ){
                        if(self->item_existance[i_286]) {
                            if(1) {
                                self->keys[i_286] = come_decrement_ref_count2(self->keys[i_286], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    come_free((char*)self->keys);
                    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
struct list_item$1charph* it_305;
int i_306;
char* __result137__;
char* default_value_307;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_305, 0, sizeof(struct list_item$1charph*));
memset(&default_value_307, 0, sizeof(char*));
                                            if(position<0) {
                                                position+=self->len;
                                            }
                                            it_305=self->head;
                                            i_306=0;
                                            while(it_305!=((void*)0)) {
                                                if(position==i_306) {
                                                    __result137__ = __result_obj__ = it_305->item;
                                                    return __result137__;
                                                }
                                                it_305=it_305->next;
                                                i_306++;
                                            }
                                            memset(&default_value_307,0,sizeof(char*));
                                            __result138__ = __result_obj__ = default_value_307;
                                            default_value_307 = come_decrement_ref_count2(default_value_307, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                                            return __result138__;
                                            default_value_307 = come_decrement_ref_count2(default_value_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void method_block2_02transpilec(struct __current_stack2__* parent){
                                            printf("%s %d: linker faield\n",(*(parent->info_304)).sname,(*(parent->info_304)).sline);
                                            exit(13);
}

