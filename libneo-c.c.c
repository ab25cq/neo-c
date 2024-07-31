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
struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
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
struct sMemHeaderTiny
{
    unsigned long int size;
    int allocated;
    struct sMemHeaderTiny* next;
    struct sMemHeaderTiny* prev;
    struct sMemHeaderTiny* free_next;
};
struct sMemHeader
{
    unsigned long int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* class_name;
    char* sname[16];
    int sline[16];
    int id[16];
};
struct sHeapPage
{
    char** mPages;
    int mSizePages;
    char* mTop;
    int mCurrentPages;
    void** mFreeMem[4048];
    int mNumFreeMem[4048];
    int mSizeFreeMem[4048];
};

// header function
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
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);

char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);

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

void come_push_stackframe(char* sname, int sline, int id);

void come_pop_stackframe();

void come_save_stackframe(char* sname, int sline);

void stackframe();

char* come_get_stackframe();

void* come_null_check(void* mem, char* sname, int sline, int id);

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));

_Bool bool_value(_Bool self);

int int_catch(int self, void* parent, void (*block)(void*));

int int_expect(int self, void* parent, void (*block)(void*));

int int_value(int self);

int int_except(int self, void* parent, void (*block)(void*));

_Bool bool_except(_Bool self, void* parent, void (*block)(void*));

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));

void xassert(char* msg, _Bool test);

void come_heap_init(int come_malloc, int come_debug, int come_gc);

void come_heap_final();

static void* alloc_from_pages(unsigned long int size);
static void* come_alloc_mem_from_heap_pool(unsigned long int size, char* sname, int sline, char* class_name);
static void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name);

void come_free_object(void* mem);

void come_free(void* mem);

void* come_memdup(void* block, char* sname, int sline, char* class_name);

void* come_increment_ref_count(void* mem);

void* come_print_ref_count(void* mem);

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);

char* __builtin_string(char* str);

_Bool come_is_contained_element(void** array, int len, void* element);

struct buffer* buffer_initialize(struct buffer* self);

void buffer_finalize(struct buffer* self);

void buffer_force_finalize(struct buffer* self);

struct buffer* buffer_clone(struct buffer* self);

int buffer_length(struct buffer* self);

void buffer_reset(struct buffer* self);

void buffer_trim(struct buffer* self, int len);

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size);

struct buffer* buffer_append_char(struct buffer* self, char c);

struct buffer* buffer_append_str(struct buffer* self, char* mem);

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem);

struct buffer* buffer_append_int(struct buffer* self, int value);

struct buffer* buffer_append_long(struct buffer* self, long value);

struct buffer* buffer_append_short(struct buffer* self, short short value);

struct buffer* buffer_alignment(struct buffer* self);

int buffer_compare(struct buffer* left, struct buffer* right);

struct buffer* string_to_buffer(char* self);

struct buffer* charp_to_buffer(char* self);

char* buffer_to_string(struct buffer* self);

_Bool bool_equals(_Bool self, _Bool right);

_Bool int_equals(int self, int right);

_Bool char_equals(char self, char right);

_Bool short_equals(short short self, short short right);

_Bool long_equals(long self, long right);

_Bool size_t_equals(unsigned long int self, unsigned long int right);

_Bool float_equals(float self, float right);

_Bool double_equals(double self, double right);

_Bool string_equals(char* self, char* right);

_Bool charp_equals(char* self, char* right);

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

unsigned int short_get_hash_key(short int value);

unsigned int int_get_hash_key(int value);

unsigned int long_get_hash_key(long value);

unsigned int size_t_get_hash_key(unsigned long int value);

unsigned int float_get_hash_key(float value);

unsigned int double_get_hash_key(double value);

unsigned int string_get_hash_key(char* value);

unsigned int charp_get_hash_key(char* value);

_Bool bool_clone(_Bool self);

char char_clone(char self);

short int short_clone(short short self);

int int_clone(int self);

long int long_clone(long self);

unsigned long int size_t_clone(unsigned long int self);

double double_clone(double self);

float float_clone(float self);

char* charp_clone(char* self);

char* string_clone(char* self);

_Bool xiswalpha(unsigned int c);

_Bool xiswblank(unsigned int c);

_Bool xiswdigit(unsigned int c);

_Bool xiswalnum(unsigned int c);

_Bool xisalpha(char c);

_Bool xisblank(char c);

_Bool xisdigit(char c);

_Bool xisalnum(char c);

_Bool xisascii(char c);

_Bool xiswascii(unsigned int c);

int string_length(char* str);

int charp_length(char* str);

char* string_reverse(char* str);

char* charp_reverse(char* str);

char* string_operator_load_range_element(char* str, int head, int tail);

char* charp_operator_load_range_element(char* str, int head, int tail);

char* charp_substring(char* str, int head, int tail);

char* string_substring(char* str, int head, int tail);

char* xsprintf(char* msg, ...);

static void va_list_finalize(va_list self);
char* charp_delete(char* str, int head, int tail);

char* string_delete(char* str, int head, int tail);

struct list$1charph* charp_split_char(char* self, char c);

static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
struct list$1charph* string_split_char(char* self, char c);

char* xbasename(char* path);

char* xnoextname(char* path);

char* xextname(char* path);

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

int size_t_compare(unsigned long int left, unsigned long int right);

int float_compare(float left, float right);

int double_compare(double left, double right);

int string_compare(char* left, char* right);

int charp_compare(char* left, char* right);

char* FILE_read(struct _IO_FILE* f);

int FILE_write(struct _IO_FILE* f, char* str);

int FILE_fclose(struct _IO_FILE* f);

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);

int string_write(char* self, char* file_name, _Bool append);

int charp_write(char* self, char* file_name, _Bool append);

char* string_read(char* file_name);

char* charp_read(char* file_name);

struct list$1charph* FILE_readlines(struct _IO_FILE* f);

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));

char* charp_puts(char* self);

char* charp_print(char* self);

char* string_printf(char* self, ...);

char* charp_printf(char* self, ...);

int int_printf(int self, char* msg);

char* string_puts(char* self);

void int_times(int self, void* parent, void (*block)(void*,int));

struct integer* integer_initialize(struct integer* self, long value);

static void integer_finalize(struct integer* self);
int integer_to_int(struct integer* self);

struct integer* char_to_integer(char self);

struct integer* short_to_integer(short short self);

struct integer* int_to_integer(int self);

struct integer* long_to_integer(long self);

int integer_compare(struct integer* left, struct integer* right);

_Bool integer_equals(struct integer* self, struct integer* right);

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

// uniq global variable
// source head3
char* gComeStackFrameSName[1024];
int gComeStackFrameSLine[1024];
int gComeStackFrameID[1024];
int gNumComeStackFrame=0;
char* gComeStackFrameBuffer=((void*)0);
void* gComeResultObject=((void*)0);
static _Bool gComeMallocLib=(_Bool)0;
static _Bool gComeDebugLib=(_Bool)0;
_Bool gComeGCLib=(_Bool)0;
static int gNumAlloc=0;
static int gNumFree=0;
struct sMemHeader* gAllocMem;
struct sHeapPage gHeapPages;

// inline function
static inline _Bool die(char* msg){
_Bool __result1__;
    perror(msg);
    stackframe();
    exit(4);
    __result1__ = (_Bool)0;
    return __result1__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value0;
void* right_value1;
struct buffer* result_0;
struct buffer* __result2__;
memset(&__result_obj__, 0, sizeof(void*));
right_value0 = (void*)0;
right_value1 = (void*)0;
memset(&result_0, 0, sizeof(struct buffer*));
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1899, "buffer"))))))));
    come_call_finalizer3(right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value1,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_0,self,sizeof(char)*len);
    __result2__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result2__;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value2;
void* right_value3;
struct buffer* result_1;
struct buffer* __result3__;
memset(&__result_obj__, 0, sizeof(void*));
right_value2 = (void*)0;
right_value3 = (void*)0;
memset(&result_1, 0, sizeof(struct buffer*));
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1906, "buffer"))))))));
    come_call_finalizer3(right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value3,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    __result3__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result3__;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value4;
void* right_value5;
struct buffer* result_2;
struct buffer* __result4__;
memset(&__result_obj__, 0, sizeof(void*));
right_value4 = (void*)0;
right_value5 = (void*)0;
memset(&result_2, 0, sizeof(struct buffer*));
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1913, "buffer"))))))));
    come_call_finalizer3(right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value5,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    __result4__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result4__;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value6;
void* right_value7;
struct buffer* result_3;
struct buffer* __result5__;
memset(&__result_obj__, 0, sizeof(void*));
right_value6 = (void*)0;
right_value7 = (void*)0;
memset(&result_3, 0, sizeof(struct buffer*));
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1920, "buffer"))))))));
    come_call_finalizer3(right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value7,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    __result5__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result5__;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value8;
void* right_value9;
struct buffer* result_4;
struct buffer* __result6__;
memset(&__result_obj__, 0, sizeof(void*));
right_value8 = (void*)0;
right_value9 = (void*)0;
memset(&result_4, 0, sizeof(struct buffer*));
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1927, "buffer"))))))));
    come_call_finalizer3(right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value9,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    __result6__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result6__;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value10;
void* right_value11;
struct buffer* result_5;
struct buffer* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
right_value11 = (void*)0;
memset(&result_5, 0, sizeof(struct buffer*));
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 1934, "buffer"))))))));
    come_call_finalizer3(right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value11,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    __result7__ = __result_obj__ = result_5;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__;
void* right_value12;
struct smart_pointer$1char* result_6;
void* right_value13;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
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
    __result8__ = __result_obj__ = result_6;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result8__;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__;
void* right_value14;
struct smart_pointer$1char* result_7;
void* right_value15;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result9__;
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
    __result9__ = __result_obj__ = result_7;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result9__;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__;
void* right_value16;
struct smart_pointer$1short* result_8;
void* right_value17;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result10__;
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
    __result10__ = __result_obj__ = result_8;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__;
void* right_value18;
struct smart_pointer$1int* result_9;
void* right_value19;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result11__;
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
    __result11__ = __result_obj__ = result_9;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result11__;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__;
void* right_value20;
struct smart_pointer$1long* result_10;
void* right_value21;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result12__;
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
    __result12__ = __result_obj__ = result_10;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result12__;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 0, 0, (void*)0);
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__;
void* right_value22;
void* right_value25;
struct smart_pointer$1char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value25 = (void*)0;
    __result14__ = __result_obj__ = ((struct smart_pointer$1char*)(right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2161, "smart_pointer$1char")))),self,len)));
    come_call_finalizer3(right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result14__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value26;
void* right_value29;
struct smart_pointer$1short* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value29 = (void*)0;
    __result16__ = __result_obj__ = ((struct smart_pointer$1short*)(right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2166, "smart_pointer$1short")))),self,len)));
    come_call_finalizer3(right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result16__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__;
void* right_value30;
void* right_value33;
struct smart_pointer$1int* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value30 = (void*)0;
right_value33 = (void*)0;
    __result18__ = __result_obj__ = ((struct smart_pointer$1int*)(right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2171, "smart_pointer$1int")))),self,len)));
    come_call_finalizer3(right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result18__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__;
void* right_value34;
void* right_value37;
struct smart_pointer$1long* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
right_value37 = (void*)0;
    __result20__ = __result_obj__ = ((struct smart_pointer$1long*)(right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2176, "smart_pointer$1long")))),self,len)));
    come_call_finalizer3(right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result20__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__;
void* right_value38;
void* right_value41;
struct smart_pointer$1float* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
right_value41 = (void*)0;
    __result22__ = __result_obj__ = ((struct smart_pointer$1float*)(right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2181, "smart_pointer$1float")))),self,len)));
    come_call_finalizer3(right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result22__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__;
void* right_value42;
void* right_value45;
struct smart_pointer$1double* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value42 = (void*)0;
right_value45 = (void*)0;
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2186, "smart_pointer$1double")))),self,len)));
    come_call_finalizer3(right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result24__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__;
void* right_value46;
void* right_value50;
struct list$1char* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
right_value50 = (void*)0;
    __result27__ = __result_obj__ = ((struct list$1char*)(right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2191, "list$1char")))),len,self)));
    come_call_finalizer3(right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result27__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__;
void* right_value51;
void* right_value55;
struct list$1short* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value51 = (void*)0;
right_value55 = (void*)0;
    __result30__ = __result_obj__ = ((struct list$1short*)(right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2196, "list$1short")))),len,self)));
    come_call_finalizer3(right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result30__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__;
void* right_value56;
void* right_value60;
struct list$1int* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value56 = (void*)0;
right_value60 = (void*)0;
    __result33__ = __result_obj__ = ((struct list$1int*)(right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2201, "list$1int")))),len,self)));
    come_call_finalizer3(right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result33__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__;
void* right_value61;
void* right_value65;
struct list$1long* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value61 = (void*)0;
right_value65 = (void*)0;
    __result36__ = __result_obj__ = ((struct list$1long*)(right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2206, "list$1long")))),len,self)));
    come_call_finalizer3(right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result36__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__;
void* right_value66;
void* right_value70;
struct list$1float* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value66 = (void*)0;
right_value70 = (void*)0;
    __result39__ = __result_obj__ = ((struct list$1float*)(right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2211, "list$1float")))),len,self)));
    come_call_finalizer3(right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result39__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__;
void* right_value71;
void* right_value75;
struct list$1double* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
right_value75 = (void*)0;
    __result42__ = __result_obj__ = ((struct list$1double*)(right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2216, "list$1double")))),len,self)));
    come_call_finalizer3(right_value71,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value75,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
unsigned long int __result43__;
    __result43__ = len;
    return __result43__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
unsigned long int __result44__;
    __result44__ = len;
    return __result44__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
unsigned long int __result45__;
    __result45__ = len;
    return __result45__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
unsigned long int __result46__;
    __result46__ = len;
    return __result46__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
unsigned long int __result47__;
    __result47__ = len;
    return __result47__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
unsigned long int __result48__;
    __result48__ = len;
    return __result48__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value76;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
    __result49__ = __result_obj__ = ((char*)(right_value76=xsprintf(msg,self)));
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result49__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value77;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
    __result50__ = __result_obj__ = ((char*)(right_value77=xsprintf(msg,self)));
    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result50__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__;
void* right_value78;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
    __result51__ = __result_obj__ = ((char*)(right_value78=xsprintf(msg,self)));
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result51__;
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
struct smart_pointer$1char* __result13__;
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
        __result13__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result13__;
        come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__;
void* right_value27;
void* right_value28;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result15__;
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
        __result15__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result15__;
        come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__;
void* right_value31;
void* right_value32;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result17__;
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
        __result17__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result17__;
        come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__;
void* right_value35;
void* right_value36;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result19__;
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
        __result19__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result19__;
        come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__;
void* right_value39;
void* right_value40;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result21__;
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
        __result21__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result21__;
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
struct smart_pointer$1double* __result23__;
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
        __result23__ = __result_obj__ = self;
        come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result23__;
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
struct list$1char* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_11, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_11=0;        i_11<num_value;        i_11++        ){
            list$1char_push_back(self,values[i_11]);
        }
        __result26__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
        return __result26__;
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
struct list$1char* __result25__;
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
                __result25__ = __result_obj__ = self;
                return __result25__;
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
struct list$1short* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_17, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_17=0;        i_17<num_value;        i_17++        ){
            list$1short_push_back(self,values[i_17]);
        }
        __result29__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
        return __result29__;
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
struct list$1short* __result28__;
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
                __result28__ = __result_obj__ = self;
                return __result28__;
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
struct list$1int* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_23=0;        i_23<num_value;        i_23++        ){
            list$1int_push_back(self,values[i_23]);
        }
        __result32__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
        return __result32__;
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
struct list$1int* __result31__;
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
                __result31__ = __result_obj__ = self;
                return __result31__;
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
struct list$1long* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_29, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_29=0;        i_29<num_value;        i_29++        ){
            list$1long_push_back(self,values[i_29]);
        }
        __result35__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
        return __result35__;
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
struct list$1long* __result34__;
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
                __result34__ = __result_obj__ = self;
                return __result34__;
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
struct list$1float* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_35, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_35=0;        i_35<num_value;        i_35++        ){
            list$1float_push_back(self,values[i_35]);
        }
        __result38__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
        return __result38__;
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
struct list$1float* __result37__;
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
                __result37__ = __result_obj__ = self;
                return __result37__;
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
struct list$1double* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&i_41, 0, sizeof(int));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        for(        i_41=0;        i_41<num_value;        i_41++        ){
            list$1double_push_back(self,values[i_41]);
        }
        __result41__ = __result_obj__ = self;
        come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
        return __result41__;
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
struct list$1double* __result40__;
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
                __result40__ = __result_obj__ = self;
                return __result40__;
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










void come_push_stackframe(char* sname, int sline, int id){
    if(gNumComeStackFrame<1024) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
    if(gNumComeStackFrame>0) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* right_value79;
void* right_value80;
struct buffer* buf_47;
void* right_value81;
int i_48;
void* right_value82;
void* right_value83;
right_value79 = (void*)0;
right_value80 = (void*)0;
memset(&buf_47, 0, sizeof(struct buffer*));
right_value81 = (void*)0;
memset(&i_48, 0, sizeof(int));
right_value82 = (void*)0;
right_value83 = (void*)0;
    buf_47=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value80=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value79=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 36, "buffer"))))))));
    come_call_finalizer3(right_value79,buffer_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value80,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(buf_47,((char*)(right_value81=xsprintf("%s %d\n",sname,sline))));
    right_value81 = come_decrement_ref_count2(right_value81, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    i_48=gNumComeStackFrame-2;    i_48>=0;    i_48--    ){
        buffer_append_str(buf_47,((char*)(right_value82=xsprintf("%s %d #%d\n",gComeStackFrameSName[i_48],gComeStackFrameSLine[i_48],gComeStackFrameID[i_48]))));
        right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(right_value83=buffer_to_string(buf_47))));
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(buf_47,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

void stackframe(){
int i_49;
memset(&i_49, 0, sizeof(int));
    for(    i_49=gNumComeStackFrame-1;    i_49>=0;    i_49--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_49],gComeStackFrameSLine[i_49],gComeStackFrameID[i_49]);
    }
}

char* come_get_stackframe(){
void* __result_obj__;
void* right_value84;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
    __result52__ = __result_obj__ = ((char*)(right_value84=__builtin_string(gComeStackFrameBuffer)));
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result52__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__;
void* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    if(mem==((void*)0)) {
        printf("%s %d #%d: null check error\n",sname,sline,id);
        stackframe();
        exit(2);
    }
    __result53__ = __result_obj__ = mem;
    return __result53__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__;
void* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    if(mem==((void*)0)) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(mem<begin) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(mem>=end) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result54__ = __result_obj__ = mem;
    return __result54__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
_Bool __result55__;
    if(!self) {
        block(parent);
        stackframe();
        exit(1);
    }
    __result55__ = self;
    return __result55__;
}

_Bool bool_value(_Bool self){
_Bool __result56__;
    __result56__ = self;
    return __result56__;
}

int int_catch(int self, void* parent, void (*block)(void*)){
int __result57__;
    if(self<0) {
        block(parent);
    }
    __result57__ = self;
    return __result57__;
}

int int_expect(int self, void* parent, void (*block)(void*)){
int __result58__;
    if(self<0) {
        block(parent);
        stackframe();
        exit(1);
    }
    __result58__ = self;
    return __result58__;
}

int int_value(int self){
int __result59__;
    __result59__ = self;
    return __result59__;
}

int int_except(int self, void* parent, void (*block)(void*)){
int __result60__;
    if(self<0) {
        block(parent);
    }
    __result60__ = self;
    return __result60__;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
_Bool __result61__;
    if(!self) {
        block(parent);
    }
    __result61__ = self;
    return __result61__;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
_Bool __result62__;
    if(!self) {
        block(parent);
    }
    __result62__ = self;
    return __result62__;
}

void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
int i_50;
memset(&i_50, 0, sizeof(int));
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*1024);
    memset(gComeStackFrameSLine,0,sizeof(int)*1024);
    memset(gComeStackFrameID,0,sizeof(int)*1024);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_50=0;    i_50<gHeapPages.mSizePages;    i_50++    ){
        gHeapPages.mPages[i_50]=calloc(1,sizeof(char)*4048);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(void**)*4048);
    memset(gHeapPages.mNumFreeMem,0,sizeof(int)*4048);
    memset(gHeapPages.mSizeFreeMem,0,sizeof(int)*4048);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_51;
int n_52;
_Bool flag_53;
int i_54;
struct sMemHeaderTiny* it_55;
int n_56;
int i_57;
int i_58;
memset(&it_51, 0, sizeof(struct sMemHeader*));
memset(&n_52, 0, sizeof(int));
memset(&flag_53, 0, sizeof(_Bool));
memset(&i_54, 0, sizeof(int));
memset(&it_55, 0, sizeof(struct sMemHeaderTiny*));
memset(&n_56, 0, sizeof(int));
memset(&i_57, 0, sizeof(int));
memset(&i_58, 0, sizeof(int));
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    if(gComeGCLib) {
    }
    else {
        if(gComeDebugLib) {
            it_51=gAllocMem;
            n_52=0;
            while(it_51) {
                n_52++;
                flag_53=(_Bool)0;
                printf("#%d ",n_52);
                if(it_51->class_name) {
                    printf("%p (%s): ",(char*)it_51+sizeof(struct sMemHeader)+sizeof(unsigned long int)+sizeof(unsigned long int),it_51->class_name);
                }
                for(                i_54=0;                i_54<16;                i_54++                ){
                    if(it_51->sname[i_54]) {
                        printf("%s %d #%d, ",it_51->sname[i_54],it_51->sline[i_54],it_51->id[i_54]);
                        flag_53=(_Bool)1;
                    }
                }
                if(flag_53) {
                    puts("");
                }
                it_51=it_51->next;
            }
            printf("%d memory leaks. %d alloc, %d free.\n",n_52,gNumAlloc,gNumFree);
        }
        else {
            it_55=(struct sMemHeaderTiny*)gAllocMem;
            n_56=0;
            while(it_55) {
                n_56++;
                it_55=it_55->next;
            }
            if(n_56>0) {
                printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_56,gNumAlloc,gNumFree);
            }
        }
    }
    for(    i_57=0;    i_57<gHeapPages.mSizePages;    i_57++    ){
        free(gHeapPages.mPages[i_57]);
    }
    free(gHeapPages.mPages);
    for(    i_58=0;    i_58<4048;    i_58++    ){
        if(gHeapPages.mFreeMem[i_58]) {
            free(gHeapPages.mFreeMem[i_58]);
        }
    }
}

static void* alloc_from_pages(unsigned long int size){
void* __result_obj__;
void* result_59;
struct sMemHeaderTiny* it_60;
unsigned long int free_area_61;
int new_size_pages_62;
void** new_pages_63;
int i_64;
void* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_59, 0, sizeof(void*));
memset(&it_60, 0, sizeof(struct sMemHeaderTiny*));
memset(&free_area_61, 0, sizeof(unsigned long int));
memset(&new_size_pages_62, 0, sizeof(int));
memset(&new_pages_63, 0, sizeof(void**));
memset(&i_64, 0, sizeof(int));
    result_59=((void*)0);
    if(size<4048) {
        if(gHeapPages.mFreeMem[size]&&gHeapPages.mNumFreeMem[size]>0) {
            it_60=gHeapPages.mFreeMem[size][gHeapPages.mNumFreeMem[size]-1];
            gHeapPages.mNumFreeMem[size]--;
        }
        if(result_59==((void*)0)) {
            free_area_61=gHeapPages.mPages[gHeapPages.mCurrentPages]+4048-gHeapPages.mTop;
            if(size>=free_area_61) {
                gHeapPages.mCurrentPages++;
                if(gHeapPages.mCurrentPages==gHeapPages.mSizePages) {
                    new_size_pages_62=gHeapPages.mSizePages*2;
                    new_pages_63=calloc(1,sizeof(char*)*new_size_pages_62);
                    i_64=0;
                    for(                    ;                    i_64<gHeapPages.mSizePages;                    i_64++                    ){
                        new_pages_63[i_64]=gHeapPages.mPages[i_64];
                    }
                    for(                    ;                    i_64<new_size_pages_62;                    i_64++                    ){
                        new_pages_63[i_64]=calloc(1,sizeof(char)*4048);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_63;
                    gHeapPages.mSizePages=new_size_pages_62;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_59=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_59=calloc(1,size);
    }
    __result63__ = __result_obj__ = result_59;
    return __result63__;
}

static void* come_alloc_mem_from_heap_pool(unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
void* result_65;
struct sMemHeader* it_66;
void* __result64__;
void* result_67;
struct sMemHeaderTiny* it_68;
void* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_65, 0, sizeof(void*));
memset(&it_66, 0, sizeof(struct sMemHeader*));
memset(&result_67, 0, sizeof(void*));
memset(&it_68, 0, sizeof(struct sMemHeaderTiny*));
    if(gComeDebugLib) {
        result_65=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_66=result_65;
        it_66->allocated=177783;
        it_66->size=size+sizeof(struct sMemHeader);
        come_push_stackframe(sname,sline,0);
        if(gNumComeStackFrame<16) {
            memcpy(it_66->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(it_66->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            memcpy(it_66->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it_66->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(it_66->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            memcpy(it_66->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        come_pop_stackframe();
        it_66->next=gAllocMem;
        it_66->prev=((void*)0);
        if(class_name) {
            it_66->class_name=strdup(class_name);
        }
        else {
            it_66->class_name=((void*)0);
        }
        if(gAllocMem) {
            gAllocMem->prev=it_66;
        }
        gAllocMem=it_66;
        gNumAlloc++;
        __result64__ = __result_obj__ = (char*)result_65+sizeof(struct sMemHeader);
        return __result64__;
    }
    else {
        result_67=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_68=result_67;
        it_68->allocated=177783;
        it_68->size=size+sizeof(struct sMemHeaderTiny);
        it_68->next=(struct sMemHeaderTiny*)gAllocMem;
        it_68->prev=((void*)0);
        if(gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_68;
        }
        gAllocMem=(struct sMemHeader*)it_68;
        gNumAlloc++;
        __result65__ = __result_obj__ = (char*)result_67+sizeof(struct sMemHeaderTiny);
        return __result65__;
    }
}

static void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_69;
struct sMemHeader* prev_it_70;
struct sMemHeader* next_it_71;
unsigned long int size_72;
int num_free_mem_73;
int size_free_mem_74;
int new_size_free_mem_75;
void** new_free_mem_76;
int new_size_free_mem_77;
void** new_free_mem_78;
struct sMemHeaderTiny* it_79;
struct sMemHeaderTiny* prev_it_80;
struct sMemHeaderTiny* next_it_81;
unsigned long int size_82;
int num_free_mem_83;
int size_free_mem_84;
int new_size_free_mem_85;
void** new_free_mem_86;
int new_size_free_mem_87;
void** new_free_mem_88;
memset(&it_69, 0, sizeof(struct sMemHeader*));
memset(&prev_it_70, 0, sizeof(struct sMemHeader*));
memset(&next_it_71, 0, sizeof(struct sMemHeader*));
memset(&size_72, 0, sizeof(unsigned long int));
memset(&num_free_mem_73, 0, sizeof(int));
memset(&size_free_mem_74, 0, sizeof(int));
memset(&new_size_free_mem_75, 0, sizeof(int));
memset(&new_free_mem_76, 0, sizeof(void**));
memset(&new_size_free_mem_77, 0, sizeof(int));
memset(&new_free_mem_78, 0, sizeof(void**));
memset(&it_79, 0, sizeof(struct sMemHeaderTiny*));
memset(&prev_it_80, 0, sizeof(struct sMemHeaderTiny*));
memset(&next_it_81, 0, sizeof(struct sMemHeaderTiny*));
memset(&size_82, 0, sizeof(unsigned long int));
memset(&num_free_mem_83, 0, sizeof(int));
memset(&size_free_mem_84, 0, sizeof(int));
memset(&new_size_free_mem_85, 0, sizeof(int));
memset(&new_free_mem_86, 0, sizeof(void**));
memset(&new_size_free_mem_87, 0, sizeof(int));
memset(&new_free_mem_88, 0, sizeof(void**));
    if(mem) {
        if(gComeGCLib) {
        }
        else {
            if(gComeDebugLib) {
                it_69=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
                if(it_69->allocated!=177783) {
                    return;
                }
                it_69->allocated=0;
                prev_it_70=it_69->prev;
                next_it_71=it_69->next;
                if(it_69->class_name) {
                    free(it_69->class_name);
                }
                if(gAllocMem==it_69) {
                    gAllocMem=next_it_71;
                    if(gAllocMem) {
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    if(prev_it_70) {
                        prev_it_70->next=next_it_71;
                    }
                    if(next_it_71) {
                        next_it_71->prev=prev_it_70;
                    }
                }
                size_72=it_69->size;
                if(size_72<4048) {
                    num_free_mem_73=gHeapPages.mNumFreeMem[size_72];
                    size_free_mem_74=gHeapPages.mSizeFreeMem[size_72];
                    if(gHeapPages.mFreeMem[size_72]==((void*)0)) {
                        new_size_free_mem_75=16;
                        new_free_mem_76=calloc(1,sizeof(void*)*new_size_free_mem_75);
                        gHeapPages.mSizeFreeMem[size_72]=new_size_free_mem_75;
                        gHeapPages.mFreeMem[size_72]=new_free_mem_76;
                    }
                    else {
                        if(num_free_mem_73==size_free_mem_74) {
                            new_size_free_mem_77=size_free_mem_74*2;
                            new_free_mem_78=calloc(1,sizeof(void*)*new_size_free_mem_77);
                            memcpy(new_free_mem_78,gHeapPages.mFreeMem[size_72],sizeof(void*)*num_free_mem_73);
                            free(gHeapPages.mFreeMem[size_72]);
                            gHeapPages.mSizeFreeMem[size_72]=new_size_free_mem_77;
                            gHeapPages.mFreeMem[size_72]=new_free_mem_78;
                        }
                    }
                    gHeapPages.mFreeMem[size_72][gHeapPages.mNumFreeMem[size_72]]=it_69;
                    gHeapPages.mNumFreeMem[size_72]++;
                }
                else {
                    free(it_69);
                }
                gNumFree++;
            }
            else {
                it_79=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
                if(it_79->allocated!=177783) {
                    return;
                }
                it_79->allocated=0;
                prev_it_80=it_79->prev;
                next_it_81=it_79->next;
                if(gAllocMem==it_79) {
                    gAllocMem=(struct sMemHeader*)next_it_81;
                    if(gAllocMem) {
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    if(prev_it_80) {
                        prev_it_80->next=next_it_81;
                    }
                    if(next_it_81) {
                        next_it_81->prev=prev_it_80;
                    }
                }
                size_82=it_79->size;
                if(size_82<4048) {
                    num_free_mem_83=gHeapPages.mNumFreeMem[size_82];
                    size_free_mem_84=gHeapPages.mSizeFreeMem[size_82];
                    if(gHeapPages.mFreeMem[size_82]==((void*)0)) {
                        new_size_free_mem_85=16;
                        new_free_mem_86=calloc(1,sizeof(void*)*new_size_free_mem_85);
                        gHeapPages.mSizeFreeMem[size_82]=new_size_free_mem_85;
                        gHeapPages.mFreeMem[size_82]=new_free_mem_86;
                    }
                    else {
                        if(num_free_mem_83==size_free_mem_84) {
                            new_size_free_mem_87=size_free_mem_84*2;
                            new_free_mem_88=calloc(1,sizeof(void*)*new_size_free_mem_87);
                            memcpy(new_free_mem_88,gHeapPages.mFreeMem[size_82],sizeof(void*)*num_free_mem_83);
                            free(gHeapPages.mFreeMem[size_82]);
                            gHeapPages.mSizeFreeMem[size_82]=new_size_free_mem_87;
                            gHeapPages.mFreeMem[size_82]=new_free_mem_88;
                        }
                    }
                    gHeapPages.mFreeMem[size_82][gHeapPages.mNumFreeMem[size_82]]=it_79;
                    gHeapPages.mNumFreeMem[size_82]++;
                }
                else {
                    free(it_79);
                }
                gNumFree++;
            }
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__;
struct sMemHeader* it_89;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_89, 0, sizeof(struct sMemHeader*));
    it_89=(struct sMemHeader*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int)-sizeof(struct sMemHeaderTiny));
    if(it_89->allocated!=177783) {
        printf("invalid heap object(%p)\n",it_89);
        exit(2);
    }
    __result66__ = __result_obj__ = it_89->class_name;
    return __result66__;
}

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__;
char* mem_90;
unsigned long int* ref_count_91;
unsigned long int* size2_92;
void* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_90, 0, sizeof(char*));
memset(&ref_count_91, 0, sizeof(unsigned long int*));
memset(&size2_92, 0, sizeof(unsigned long int*));
    mem_90=come_alloc_mem_from_heap_pool(sizeof(unsigned long int)+sizeof(unsigned long int)+count*size,sname,sline,class_name);
    ref_count_91=(unsigned long int*)mem_90;
    *ref_count_91=0;
    size2_92=(unsigned long int*)(mem_90+sizeof(unsigned long int));
    *size2_92=size*count+sizeof(unsigned long int)+sizeof(unsigned long int);
    __result67__ = __result_obj__ = mem_90+sizeof(unsigned long int)+sizeof(unsigned long int);
    return __result67__;
}

void come_free_object(void* mem){
unsigned long int* ref_count_93;
memset(&ref_count_93, 0, sizeof(unsigned long int*));
    if(mem==((void*)0)) {
        return;
    }
    ref_count_93=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    come_free_mem_of_heap_pool((char*)ref_count_93);
}

void come_free(void* mem){
unsigned long int* ref_count_94;
memset(&ref_count_94, 0, sizeof(unsigned long int*));
    if(mem==((void*)0)) {
        return;
    }
    ref_count_94=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    come_free_mem_of_heap_pool((char*)ref_count_94);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__;
void* __result68__;
char* mem_95;
unsigned long int* size_p_96;
unsigned long int size_97;
void* result_98;
void* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_95, 0, sizeof(char*));
memset(&size_p_96, 0, sizeof(unsigned long int*));
memset(&size_97, 0, sizeof(unsigned long int));
memset(&result_98, 0, sizeof(void*));
    if(!block) {
        __result68__ = __result_obj__ = ((void*)0);
        return __result68__;
    }
    mem_95=(char*)block-sizeof(unsigned long int)-sizeof(unsigned long int);
    size_p_96=(unsigned long int*)(mem_95+sizeof(unsigned long int));
    size_97=*size_p_96-sizeof(unsigned long int)-sizeof(unsigned long int);
    result_98=come_calloc(1,size_97,sname,sline,class_name);
    memcpy(result_98,block,size_97);
    __result69__ = __result_obj__ = result_98;
    return __result69__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__;
void* __result70__;
unsigned long int* ref_count_99;
void* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_99, 0, sizeof(unsigned long int*));
    if(mem==((void*)0)) {
        __result70__ = __result_obj__ = mem;
        return __result70__;
    }
    ref_count_99=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    (*ref_count_99)++;
    __result71__ = __result_obj__ = mem;
    return __result71__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__;
void* __result72__;
unsigned long int* ref_count_100;
void* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_100, 0, sizeof(unsigned long int*));
    if(mem==((void*)0)) {
        __result72__ = __result_obj__ = mem;
        return __result72__;
    }
    ref_count_100=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    printf("ref_count %ld\n",*ref_count_100);
    __result73__ = __result_obj__ = mem;
    return __result73__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__;
void* __result74__;
unsigned long int* ref_count_101;
unsigned long int count_102;
void (*finalizer_103)(void*);
void* __result75__;
void* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_101, 0, sizeof(unsigned long int*));
memset(&count_102, 0, sizeof(unsigned long int));
memset(&finalizer_103, 0, sizeof(void (*)(void*)));
    if(mem==((void*)0)) {
        __result74__ = __result_obj__ = ((void*)0);
        return __result74__;
    }
    ref_count_101=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    if(!no_decrement) {
        (*ref_count_101)--;
    }
    count_102=*ref_count_101;
    if(!no_free&&(count_102<=0||force_delete_)) {
        if(protocol_obj&&protocol_fun) {
            finalizer_103=protocol_fun;
            finalizer_103(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result75__ = __result_obj__ = ((void*)0);
        return __result75__;
    }
    __result76__ = __result_obj__ = mem;
    return __result76__;
}

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj){
void* __result_obj__;
void* __result77__;
void* __result78__;
unsigned long int* ref_count_104;
unsigned long int count_105;
void (*finalizer_106)(void*);
void* __result79__;
void* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&ref_count_104, 0, sizeof(unsigned long int*));
memset(&count_105, 0, sizeof(unsigned long int));
memset(&finalizer_106, 0, sizeof(void (*)(void*)));
    if(result_obj) {
        if(mem==result_obj) {
            __result77__ = __result_obj__ = mem;
            return __result77__;
        }
    }
    if(mem==((void*)0)) {
        __result78__ = __result_obj__ = ((void*)0);
        return __result78__;
    }
    ref_count_104=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    if(!no_decrement) {
        (*ref_count_104)--;
    }
    count_105=*ref_count_104;
    if(!no_free&&(count_105<=0||force_delete_)) {
        if(protocol_obj&&protocol_fun) {
            finalizer_106=protocol_fun;
            finalizer_106(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result79__ = __result_obj__ = ((void*)0);
        return __result79__;
    }
    __result80__ = __result_obj__ = mem;
    return __result80__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void (*finalizer_107)(void*);
void (*finalizer_108)(void*);
unsigned long int* ref_count_109;
unsigned long int count_110;
void (*finalizer_111)(void*);
void (*finalizer_112)(void*);
memset(&finalizer_107, 0, sizeof(void (*)(void*)));
memset(&finalizer_108, 0, sizeof(void (*)(void*)));
memset(&ref_count_109, 0, sizeof(unsigned long int*));
memset(&count_110, 0, sizeof(unsigned long int));
memset(&finalizer_111, 0, sizeof(void (*)(void*)));
memset(&finalizer_112, 0, sizeof(void (*)(void*)));
    if(mem==((void*)0)) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj&&protocol_fun) {
                finalizer_107=protocol_fun;
                finalizer_107(protocol_obj);
            }
            finalizer_108=fun;
            finalizer_108(mem);
        }
    }
    else {
        ref_count_109=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(!no_decrement) {
            (*ref_count_109)--;
        }
        count_110=*ref_count_109;
        if(!no_free&&(count_110<=0||force_delete_)) {
            if(mem) {
                if(protocol_obj&&protocol_fun) {
                    finalizer_111=protocol_fun;
                    finalizer_111(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    finalizer_112=fun;
                    finalizer_112(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void (*finalizer_113)(void*);
void (*finalizer_114)(void*);
unsigned long int* ref_count_115;
unsigned long int count_116;
void (*finalizer_117)(void*);
void (*finalizer_118)(void*);
memset(&finalizer_113, 0, sizeof(void (*)(void*)));
memset(&finalizer_114, 0, sizeof(void (*)(void*)));
memset(&ref_count_115, 0, sizeof(unsigned long int*));
memset(&count_116, 0, sizeof(unsigned long int));
memset(&finalizer_117, 0, sizeof(void (*)(void*)));
memset(&finalizer_118, 0, sizeof(void (*)(void*)));
    if(result_obj) {
        if(mem==result_obj) {
            return;
        }
    }
    if(mem==((void*)0)) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj&&protocol_fun) {
                finalizer_113=protocol_fun;
                finalizer_113(protocol_obj);
            }
            finalizer_114=fun;
            finalizer_114(mem);
        }
    }
    else {
        ref_count_115=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(!no_decrement) {
            (*ref_count_115)--;
        }
        count_116=*ref_count_115;
        if(!no_free&&(count_116<=0||force_delete_)) {
            if(mem) {
                if(protocol_obj&&protocol_fun) {
                    finalizer_117=protocol_fun;
                    finalizer_117(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    finalizer_118=fun;
                    finalizer_118(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void (*finalizer_119)(void*);
unsigned long int* ref_count_120;
unsigned long int count_121;
void (*finalizer_122)(void*);
memset(&finalizer_119, 0, sizeof(void (*)(void*)));
memset(&ref_count_120, 0, sizeof(unsigned long int*));
memset(&count_121, 0, sizeof(unsigned long int));
memset(&finalizer_122, 0, sizeof(void (*)(void*)));
    if(result_obj) {
        if(mem==result_obj) {
            return;
        }
    }
    if(mem==((void*)0)) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            finalizer_119=fun;
            finalizer_119(mem);
        }
    }
    else {
        ref_count_120=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(!no_decrement) {
            (*ref_count_120)--;
        }
        count_121=*ref_count_120;
        if(!no_free&&(count_121<=0||force_delete_)) {
            if(mem) {
                if(fun) {
                    finalizer_122=fun;
                    finalizer_122(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__;
char* __result81__;
int len_123;
void* right_value85;
char* result_124;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_123, 0, sizeof(int));
right_value85 = (void*)0;
memset(&result_124, 0, sizeof(char*));
    if(str==((void*)0)) {
        __result81__ = __result_obj__ = ((void*)0);
        return __result81__;
    }
    len_123=strlen(str)+1;
    result_124=(char*)come_increment_ref_count(((char*)(right_value85=(char*)come_calloc(1, sizeof(char)*(1*(len_123)), "libneo-c.c", 948, "char"))));
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    strncpy(result_124,str,len_123);
    __result82__ = __result_obj__ = result_124;
    result_124 = come_decrement_ref_count2(result_124, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result82__;
    result_124 = come_decrement_ref_count2(result_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool come_is_contained_element(void** array, int len, void* element){
_Bool found_125;
int i_126;
_Bool __result83__;
memset(&found_125, 0, sizeof(_Bool));
memset(&i_126, 0, sizeof(int));
    found_125=(_Bool)0;
    for(    i_126=0;    i_126<len;    i_126++    ){
        if(array[i_126]==element) {
            found_125=(_Bool)1;
            break;
        }
    }
    __result83__ = found_125;
    return __result83__;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__;
void* right_value86;
char* __dec_obj12;
struct buffer* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
    self->size=128;
    __dec_obj12=self->buf;
    self->buf=(char*)come_increment_ref_count(((char*)(right_value86=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 973, "char"))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->buf[0]=0;
    self->len=0;
    __result84__ = __result_obj__ = self;
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result84__;
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
}

void buffer_finalize(struct buffer* self){
    if(self&&self->buf) {
        self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

void buffer_force_finalize(struct buffer* self){
    if(self&&self->buf) {
        self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__;
struct buffer* __result85__;
void* right_value87;
struct buffer* result_127;
void* right_value88;
char* __dec_obj13;
struct buffer* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&result_127, 0, sizeof(struct buffer*));
right_value88 = (void*)0;
    if(self==((void*)0)) {
        __result85__ = __result_obj__ = ((void*)0);
        return __result85__;
    }
    result_127=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value87=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 995, "buffer"))));
    come_call_finalizer3(right_value87,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    result_127->size=self->size;
    __dec_obj13=result_127->buf;
    result_127->buf=(char*)come_increment_ref_count(((char*)(right_value88=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 998, "char"))));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result_127->len=self->len;
    memcpy(result_127->buf,self->buf,self->len);
    __result86__ = __result_obj__ = result_127;
    come_call_finalizer3(result_127,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result86__;
    come_call_finalizer3(result_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

int buffer_length(struct buffer* self){
int __result87__;
int __result88__;
    if(self==((void*)0)) {
        __result87__ = 0;
        return __result87__;
    }
    __result88__ = self->len;
    return __result88__;
}

void buffer_reset(struct buffer* self){
    if(self==((void*)0)) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
    if(self==((void*)0)) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long int size){
void* __result_obj__;
struct buffer* __result89__;
void* right_value89;
char* old_buf_128;
int old_len_129;
int new_size_130;
void* right_value90;
char* __dec_obj14;
struct buffer* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
memset(&old_buf_128, 0, sizeof(char*));
memset(&old_len_129, 0, sizeof(int));
memset(&new_size_130, 0, sizeof(int));
right_value90 = (void*)0;
    if(self==((void*)0)||mem==((void*)0)) {
        __result89__ = __result_obj__ = self;
        return __result89__;
    }
    if(self->len+size+1+1>=self->size) {
        old_buf_128=(char*)come_increment_ref_count(((char*)(right_value89=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1037, "char"))));
        right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_128,self->buf,self->size);
        old_len_129=self->len;
        new_size_130=(self->size+size+1)*2;
        __dec_obj14=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value90=(char*)come_calloc(1, sizeof(char)*(1*(new_size_130)), "libneo-c.c", 1041, "char"))));
        __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_128,old_len_129);
        self->buf[old_len_129]=0;
        self->size=new_size_130;
        old_buf_128 = come_decrement_ref_count2(old_buf_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result90__ = __result_obj__ = self;
    return __result90__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__;
struct buffer* __result91__;
void* right_value91;
char* old_buf_131;
int old_len_132;
int new_size_133;
void* right_value92;
char* __dec_obj15;
struct buffer* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
memset(&old_buf_131, 0, sizeof(char*));
memset(&old_len_132, 0, sizeof(int));
memset(&new_size_133, 0, sizeof(int));
right_value92 = (void*)0;
    if(self==((void*)0)) {
        __result91__ = __result_obj__ = ((void*)0);
        return __result91__;
    }
    if(self->len+1+1+1>=self->size) {
        old_buf_131=(char*)come_increment_ref_count(((char*)(right_value91=charp_clone(self->buf))));
        right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        old_len_132=self->len;
        new_size_133=(self->size+10+1)*2;
        __dec_obj15=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value92=(char*)come_calloc(1, sizeof(char)*(1*(new_size_133)), "libneo-c.c", 1064, "char"))));
        __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_131,old_len_132);
        self->buf[old_len_132]=0;
        self->size=new_size_133;
        old_buf_131 = come_decrement_ref_count2(old_buf_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result92__ = __result_obj__ = self;
    return __result92__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__;
struct buffer* __result93__;
int size_134;
void* right_value93;
char* old_buf_135;
int old_len_136;
int new_size_137;
void* right_value94;
char* __dec_obj16;
struct buffer* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_134, 0, sizeof(int));
right_value93 = (void*)0;
memset(&old_buf_135, 0, sizeof(char*));
memset(&old_len_136, 0, sizeof(int));
memset(&new_size_137, 0, sizeof(int));
right_value94 = (void*)0;
    if(self==((void*)0)||mem==((void*)0)) {
        __result93__ = __result_obj__ = self;
        return __result93__;
    }
    size_134=strlen(mem);
    if(self->len+size_134+1+1>=self->size) {
        old_buf_135=(char*)come_increment_ref_count(((char*)(right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1086, "char"))));
        right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_135,self->buf,self->size);
        old_len_136=self->len;
        new_size_137=(self->size+size_134+1)*2;
        __dec_obj16=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value94=(char*)come_calloc(1, sizeof(char)*(1*(new_size_137)), "libneo-c.c", 1090, "char"))));
        __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_135,old_len_136);
        self->buf[old_len_136]=0;
        self->size=new_size_137;
        old_buf_135 = come_decrement_ref_count2(old_buf_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_134);
    self->len+=size_134;
    self->buf[self->len]=0;
    __result94__ = __result_obj__ = self;
    return __result94__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__;
struct buffer* __result95__;
int size_138;
void* right_value95;
char* old_buf_139;
int old_len_140;
int new_size_141;
void* right_value96;
char* __dec_obj17;
struct buffer* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&size_138, 0, sizeof(int));
right_value95 = (void*)0;
memset(&old_buf_139, 0, sizeof(char*));
memset(&old_len_140, 0, sizeof(int));
memset(&new_size_141, 0, sizeof(int));
right_value96 = (void*)0;
    if(self==((void*)0)||mem==((void*)0)) {
        __result95__ = __result_obj__ = self;
        return __result95__;
    }
    size_138=strlen(mem)+1;
    if(self->len+size_138+1+1+1>=self->size) {
        old_buf_139=(char*)come_increment_ref_count(((char*)(right_value95=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1110, "char"))));
        right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_139,self->buf,self->size);
        old_len_140=self->len;
        new_size_141=(self->size+size_138+1)*2;
        __dec_obj17=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value96=(char*)come_calloc(1, sizeof(char)*(1*(new_size_141)), "libneo-c.c", 1114, "char"))));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_139,old_len_140);
        self->buf[old_len_140]=0;
        self->size=new_size_141;
        old_buf_139 = come_decrement_ref_count2(old_buf_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_138);
    self->len+=size_138;
    self->buf[self->len]=0;
    self->len++;
    __result96__ = __result_obj__ = self;
    return __result96__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__;
struct buffer* __result97__;
int* mem_142;
int size_143;
void* right_value97;
char* old_buf_144;
int old_len_145;
int new_size_146;
void* right_value98;
char* __dec_obj18;
struct buffer* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_142, 0, sizeof(int*));
memset(&size_143, 0, sizeof(int));
right_value97 = (void*)0;
memset(&old_buf_144, 0, sizeof(char*));
memset(&old_len_145, 0, sizeof(int));
memset(&new_size_146, 0, sizeof(int));
right_value98 = (void*)0;
    if(self==((void*)0)) {
        __result97__ = __result_obj__ = ((void*)0);
        return __result97__;
    }
    mem_142=&value;
    size_143=sizeof(int);
    if(self->len+size_143+1+1>=self->size) {
        old_buf_144=(char*)come_increment_ref_count(((char*)(right_value97=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1137, "char"))));
        right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_144,self->buf,self->size);
        old_len_145=self->len;
        new_size_146=(self->size+size_143+1)*2;
        __dec_obj18=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value98=(char*)come_calloc(1, sizeof(char)*(1*(new_size_146)), "libneo-c.c", 1141, "char"))));
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_144,old_len_145);
        self->buf[old_len_145]=0;
        self->size=new_size_146;
        old_buf_144 = come_decrement_ref_count2(old_buf_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_142,size_143);
    self->len+=size_143;
    self->buf[self->len]=0;
    __result98__ = __result_obj__ = self;
    return __result98__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__;
long* mem_147;
int size_148;
void* right_value99;
char* old_buf_149;
int old_len_150;
int new_size_151;
void* right_value100;
char* __dec_obj19;
struct buffer* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_147, 0, sizeof(long*));
memset(&size_148, 0, sizeof(int));
right_value99 = (void*)0;
memset(&old_buf_149, 0, sizeof(char*));
memset(&old_len_150, 0, sizeof(int));
memset(&new_size_151, 0, sizeof(int));
right_value100 = (void*)0;
    mem_147=&value;
    size_148=sizeof(long);
    if(self->len+size_148+1+1>=self->size) {
        old_buf_149=(char*)come_increment_ref_count(((char*)(right_value99=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1160, "char"))));
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_149,self->buf,self->size);
        old_len_150=self->len;
        new_size_151=(self->size+size_148+1)*2;
        __dec_obj19=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value100=(char*)come_calloc(1, sizeof(char)*(1*(new_size_151)), "libneo-c.c", 1164, "char"))));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_149,old_len_150);
        self->buf[old_len_150]=0;
        self->size=new_size_151;
        old_buf_149 = come_decrement_ref_count2(old_buf_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_147,size_148);
    self->len+=size_148;
    self->buf[self->len]=0;
    __result99__ = __result_obj__ = self;
    return __result99__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__;
struct buffer* __result100__;
short short* mem_152;
int size_153;
void* right_value101;
char* old_buf_154;
int old_len_155;
int new_size_156;
void* right_value102;
char* __dec_obj20;
struct buffer* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&mem_152, 0, sizeof(short short*));
memset(&size_153, 0, sizeof(int));
right_value101 = (void*)0;
memset(&old_buf_154, 0, sizeof(char*));
memset(&old_len_155, 0, sizeof(int));
memset(&new_size_156, 0, sizeof(int));
right_value102 = (void*)0;
    if(self==((void*)0)) {
        __result100__ = __result_obj__ = ((void*)0);
        return __result100__;
    }
    mem_152=&value;
    size_153=sizeof(short short);
    if(self->len+size_153+1+1>=self->size) {
        old_buf_154=(char*)come_increment_ref_count(((char*)(right_value101=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1187, "char"))));
        right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(old_buf_154,self->buf,self->size);
        old_len_155=self->len;
        new_size_156=(self->size+size_153+1)*2;
        __dec_obj20=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value102=(char*)come_calloc(1, sizeof(char)*(1*(new_size_156)), "libneo-c.c", 1191, "char"))));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        memcpy(self->buf,old_buf_154,old_len_155);
        self->buf[old_len_155]=0;
        self->size=new_size_156;
        old_buf_154 = come_decrement_ref_count2(old_buf_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_152,size_153);
    self->len+=size_153;
    self->buf[self->len]=0;
    __result101__ = __result_obj__ = self;
    return __result101__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__;
struct buffer* __result102__;
int len_157;
int new_size_158;
void* right_value103;
char* __dec_obj21;
int i_159;
struct buffer* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&len_157, 0, sizeof(int));
memset(&new_size_158, 0, sizeof(int));
right_value103 = (void*)0;
memset(&i_159, 0, sizeof(int));
    if(self==((void*)0)) {
        __result102__ = __result_obj__ = ((void*)0);
        return __result102__;
    }
    len_157=self->len;
    len_157=(len_157+3)&~3;
    if(len_157>=self->size) {
        new_size_158=(self->size+1+1)*2;
        __dec_obj21=self->buf;
        self->buf=(char*)come_increment_ref_count(((char*)(right_value103=(char*)come_calloc(1, sizeof(char)*(1*(new_size_158)), "libneo-c.c", 1215, "char"))));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        self->size=new_size_158;
    }
    for(    i_159=self->len;    i_159<len_157;    i_159++    ){
        self->buf[i_159]=0;
    }
    self->len=len_157;
    __result103__ = __result_obj__ = self;
    return __result103__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
int __result104__;
int __result105__;
int __result106__;
int __result107__;
    if(left==((void*)0)&&right==((void*)0)) {
        __result104__ = 0;
        return __result104__;
    }
    else {
        if(left==((void*)0)) {
            __result105__ = -1;
            return __result105__;
        }
        else {
            if(right==((void*)0)) {
                __result106__ = 1;
                return __result106__;
            }
        }
    }
    __result107__ = strcmp(left->buf,right->buf);
    return __result107__;
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__;
void* right_value104;
void* right_value105;
struct buffer* result_160;
struct buffer* __result108__;
struct buffer* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
right_value105 = (void*)0;
memset(&result_160, 0, sizeof(struct buffer*));
    result_160=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value105=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value104=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1245, "buffer"))))))));
    come_call_finalizer3(right_value104,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value105,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(self==((void*)0)) {
        __result108__ = __result_obj__ = result_160;
        come_call_finalizer3(result_160,buffer_finalize, 0, 0, 1, 0, (void*)0);
        return __result108__;
    }
    buffer_append_str(result_160,self);
    __result109__ = __result_obj__ = result_160;
    come_call_finalizer3(result_160,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result109__;
    come_call_finalizer3(result_160,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__;
void* right_value106;
void* right_value107;
struct buffer* result_161;
struct buffer* __result110__;
struct buffer* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value106 = (void*)0;
right_value107 = (void*)0;
memset(&result_161, 0, sizeof(struct buffer*));
    result_161=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value107=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value106=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1258, "buffer"))))))));
    come_call_finalizer3(right_value106,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value107,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(self==((void*)0)) {
        __result110__ = __result_obj__ = result_161;
        come_call_finalizer3(result_161,buffer_finalize, 0, 0, 1, 0, (void*)0);
        return __result110__;
    }
    buffer_append_str(result_161,self);
    __result111__ = __result_obj__ = result_161;
    come_call_finalizer3(result_161,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result111__;
    come_call_finalizer3(result_161,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__;
void* right_value108;
char* __result112__;
void* right_value109;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
right_value109 = (void*)0;
    if(self==((void*)0)) {
        __result112__ = __result_obj__ = ((char*)(right_value108=__builtin_string("")));
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result112__;
    }
    __result113__ = __result_obj__ = ((char*)(right_value109=__builtin_string(self->buf)));
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

_Bool bool_equals(_Bool self, _Bool right){
_Bool __result114__;
    __result114__ = self==right;
    return __result114__;
}

_Bool int_equals(int self, int right){
_Bool __result115__;
    __result115__ = self==right;
    return __result115__;
}

_Bool char_equals(char self, char right){
_Bool __result116__;
    __result116__ = self==right;
    return __result116__;
}

_Bool short_equals(short short self, short short right){
_Bool __result117__;
    __result117__ = self==right;
    return __result117__;
}

_Bool long_equals(long self, long right){
_Bool __result118__;
    __result118__ = self==right;
    return __result118__;
}

_Bool size_t_equals(unsigned long int self, unsigned long int right){
_Bool __result119__;
    __result119__ = self==right;
    return __result119__;
}

_Bool float_equals(float self, float right){
_Bool __result120__;
    __result120__ = self==right;
    return __result120__;
}

_Bool double_equals(double self, double right){
_Bool __result121__;
    __result121__ = self==right;
    return __result121__;
}

_Bool string_equals(char* self, char* right){
_Bool __result122__;
_Bool __result123__;
_Bool __result124__;
_Bool __result125__;
    if(self==((void*)0)&&right==((void*)0)) {
        __result122__ = (_Bool)1;
        return __result122__;
    }
    else {
        if(self==((void*)0)) {
            __result123__ = (_Bool)0;
            return __result123__;
        }
        else {
            if(right==((void*)0)) {
                __result124__ = (_Bool)0;
                return __result124__;
            }
        }
    }
    __result125__ = strcmp(self,right)==0;
    return __result125__;
}

_Bool charp_equals(char* self, char* right){
_Bool __result126__;
_Bool __result127__;
_Bool __result128__;
_Bool __result129__;
    if(self==((void*)0)&&right==((void*)0)) {
        __result126__ = (_Bool)1;
        return __result126__;
    }
    else {
        if(self==((void*)0)) {
            __result127__ = (_Bool)0;
            return __result127__;
        }
        else {
            if(right==((void*)0)) {
                __result128__ = (_Bool)0;
                return __result128__;
            }
        }
    }
    __result129__ = strcmp(self,right)==0;
    return __result129__;
}

_Bool string_operator_equals(char* self, char* right){
_Bool __result130__;
_Bool __result131__;
_Bool __result132__;
_Bool __result133__;
    if(self==((void*)0)&&right==((void*)0)) {
        __result130__ = (_Bool)1;
        return __result130__;
    }
    else {
        if(self==((void*)0)) {
            __result131__ = (_Bool)0;
            return __result131__;
        }
        else {
            if(right==((void*)0)) {
                __result132__ = (_Bool)0;
                return __result132__;
            }
        }
    }
    __result133__ = strcmp(self,right)==0;
    return __result133__;
}

_Bool charp_operator_equals(char* self, char* right){
_Bool __result134__;
_Bool __result135__;
_Bool __result136__;
_Bool __result137__;
    if(self==((void*)0)&&right==((void*)0)) {
        __result134__ = (_Bool)1;
        return __result134__;
    }
    else {
        if(self==((void*)0)) {
            __result135__ = (_Bool)0;
            return __result135__;
        }
        else {
            if(right==((void*)0)) {
                __result136__ = (_Bool)0;
                return __result136__;
            }
        }
    }
    __result137__ = strcmp(self,right)==0;
    return __result137__;
}

_Bool string_operator_not_equals(char* self, char* right){
_Bool __result138__;
_Bool __result139__;
_Bool __result140__;
_Bool __result141__;
    if(self==((void*)0)&&right==((void*)0)) {
        __result138__ = (_Bool)0;
        return __result138__;
    }
    else {
        if(self==((void*)0)) {
            __result139__ = (_Bool)1;
            return __result139__;
        }
        else {
            if(right==((void*)0)) {
                __result140__ = (_Bool)1;
                return __result140__;
            }
        }
    }
    __result141__ = strcmp(self,right)!=0;
    return __result141__;
}

_Bool charp_operator_not_equals(char* self, char* right){
_Bool __result142__;
_Bool __result143__;
_Bool __result144__;
_Bool __result145__;
    if(self==((void*)0)&&right==((void*)0)) {
        __result142__ = (_Bool)0;
        return __result142__;
    }
    else {
        if(self==((void*)0)) {
            __result143__ = (_Bool)1;
            return __result143__;
        }
        else {
            if(right==((void*)0)) {
                __result144__ = (_Bool)1;
                return __result144__;
            }
        }
    }
    __result145__ = strcmp(self,right)!=0;
    return __result145__;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__;
void* right_value110;
char* __result146__;
int len_162;
void* right_value111;
char* result_163;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
memset(&len_162, 0, sizeof(int));
right_value111 = (void*)0;
memset(&result_163, 0, sizeof(char*));
    if(self==((void*)0)||right==((void*)0)) {
        __result146__ = __result_obj__ = ((char*)(right_value110=__builtin_string("")));
        right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result146__;
    }
    len_162=strlen(self)+strlen(right);
    result_163=(char*)come_increment_ref_count(((char*)(right_value111=(char*)come_calloc(1, sizeof(char)*(1*(len_162+1)), "libneo-c.c", 1420, "char"))));
    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    strncpy(result_163,self,len_162+1);
    strncat(result_163,right,len_162+1);
    __result147__ = __result_obj__ = result_163;
    result_163 = come_decrement_ref_count2(result_163, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result147__;
    result_163 = come_decrement_ref_count2(result_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_operator_add(char* self, char* right){
void* __result_obj__;
void* right_value112;
char* __result148__;
int len_164;
void* right_value113;
char* result_165;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
memset(&len_164, 0, sizeof(int));
right_value113 = (void*)0;
memset(&result_165, 0, sizeof(char*));
    if(self==((void*)0)||right==((void*)0)) {
        __result148__ = __result_obj__ = ((char*)(right_value112=__builtin_string("")));
        right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result148__;
    }
    len_164=strlen(self)+strlen(right);
    result_165=(char*)come_increment_ref_count(((char*)(right_value113=(char*)come_calloc(1, sizeof(char)*(1*(len_164+1)), "libneo-c.c", 1435, "char"))));
    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    strncpy(result_165,self,len_164+1);
    strncat(result_165,right,len_164+1);
    __result149__ = __result_obj__ = result_165;
    result_165 = come_decrement_ref_count2(result_165, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result149__;
    result_165 = come_decrement_ref_count2(result_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__;
void* right_value114;
char* __result150__;
void* right_value115;
void* right_value116;
struct buffer* buf_166;
int i_167;
void* right_value117;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value116 = (void*)0;
memset(&buf_166, 0, sizeof(struct buffer*));
memset(&i_167, 0, sizeof(int));
right_value117 = (void*)0;
    if(self==((void*)0)) {
        __result150__ = __result_obj__ = ((char*)(right_value114=__builtin_string("")));
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result150__;
    }
    buf_166=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value116=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value115=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1448, "buffer"))))))));
    come_call_finalizer3(right_value115,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value116,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_167=0;    i_167<right;    i_167++    ){
        buffer_append_str(buf_166,self);
    }
    __result151__ = __result_obj__ = ((char*)(right_value117=buffer_to_string(buf_166)));
    come_call_finalizer3(buf_166,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result151__;
    come_call_finalizer3(buf_166,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* string_operator_mult(char* self, int right){
void* __result_obj__;
void* right_value118;
char* __result152__;
void* right_value119;
void* right_value120;
struct buffer* buf_168;
int i_169;
void* right_value121;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
right_value119 = (void*)0;
right_value120 = (void*)0;
memset(&buf_168, 0, sizeof(struct buffer*));
memset(&i_169, 0, sizeof(int));
right_value121 = (void*)0;
    if(self==((void*)0)) {
        __result152__ = __result_obj__ = ((char*)(right_value118=__builtin_string("")));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result152__;
    }
    buf_168=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value120=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value119=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1462, "buffer"))))))));
    come_call_finalizer3(right_value119,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value120,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_169=0;    i_169<right;    i_169++    ){
        buffer_append_str(buf_168,self);
    }
    __result153__ = __result_obj__ = ((char*)(right_value121=buffer_to_string(buf_168)));
    come_call_finalizer3(buf_168,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result153__;
    come_call_finalizer3(buf_168,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

unsigned int bool_get_hash_key(_Bool value){
unsigned int __result154__;
    __result154__ = (int_get_hash_key(((int)value)));
    return __result154__;
}

unsigned int char_get_hash_key(char value){
unsigned int __result155__;
    __result155__ = value;
    return __result155__;
}

unsigned int short_get_hash_key(short int value){
unsigned int __result156__;
    __result156__ = value;
    return __result156__;
}

unsigned int int_get_hash_key(int value){
unsigned int __result157__;
    __result157__ = value;
    return __result157__;
}

unsigned int long_get_hash_key(long value){
unsigned int __result158__;
    __result158__ = value;
    return __result158__;
}

unsigned int size_t_get_hash_key(unsigned long int value){
unsigned int __result159__;
    __result159__ = value;
    return __result159__;
}

unsigned int float_get_hash_key(float value){
unsigned int __result160__;
    __result160__ = (unsigned int)value;
    return __result160__;
}

unsigned int double_get_hash_key(double value){
unsigned int __result161__;
    __result161__ = (unsigned int)value;
    return __result161__;
}

unsigned int string_get_hash_key(char* value){
unsigned int __result162__;
int result_170;
char* p_171;
unsigned int __result163__;
memset(&result_170, 0, sizeof(int));
memset(&p_171, 0, sizeof(char*));
    if(value==((void*)0)) {
        __result162__ = 0;
        return __result162__;
    }
    result_170=0;
    p_171=value;
    while(*p_171) {
        result_170+=(*p_171);
        p_171++;
    }
    __result163__ = result_170;
    return __result163__;
}

unsigned int charp_get_hash_key(char* value){
unsigned int __result164__;
int result_172;
char* p_173;
unsigned int __result165__;
memset(&result_172, 0, sizeof(int));
memset(&p_173, 0, sizeof(char*));
    if(value==((void*)0)) {
        __result164__ = 0;
        return __result164__;
    }
    result_172=0;
    p_173=value;
    while(*p_173) {
        result_172+=(*p_173);
        p_173++;
    }
    __result165__ = result_172;
    return __result165__;
}

_Bool bool_clone(_Bool self){
_Bool __result166__;
    __result166__ = self;
    return __result166__;
}

char char_clone(char self){
char __result167__;
    __result167__ = self;
    return __result167__;
}

short int short_clone(short short self){
short int __result168__;
    __result168__ = self;
    return __result168__;
}

int int_clone(int self){
int __result169__;
    __result169__ = self;
    return __result169__;
}

long int long_clone(long self){
long int __result170__;
    __result170__ = self;
    return __result170__;
}

unsigned long int size_t_clone(unsigned long int self){
unsigned long int __result171__;
    __result171__ = self;
    return __result171__;
}

double double_clone(double self){
void* __result_obj__;
double __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    __result172__ = self;
    return __result172__;
}

float float_clone(float self){
void* __result_obj__;
float __result173__;
memset(&__result_obj__, 0, sizeof(void*));
    __result173__ = self;
    return __result173__;
}

char* charp_clone(char* self){
void* __result_obj__;
char* __result174__;
void* right_value122;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
    if(self==((void*)0)) {
        __result174__ = __result_obj__ = ((void*)0);
        return __result174__;
    }
    __result175__ = __result_obj__ = ((char*)(right_value122=__builtin_string(self)));
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result175__;
}

char* string_clone(char* self){
void* __result_obj__;
char* __result176__;
void* right_value123;
char* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
    if(self==((void*)0)) {
        __result176__ = __result_obj__ = ((void*)0);
        return __result176__;
    }
    __result177__ = __result_obj__ = ((char*)(right_value123=__builtin_string(self)));
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result177__;
}

_Bool xiswalpha(unsigned int c){
_Bool result_174;
_Bool __result178__;
memset(&result_174, 0, sizeof(_Bool));
    result_174=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result178__ = result_174;
    return __result178__;
}

_Bool xiswblank(unsigned int c){
_Bool __result179__;
    __result179__ = c==32||c==9;
    return __result179__;
}

_Bool xiswdigit(unsigned int c){
_Bool __result180__;
    __result180__ = (c>=48&&c<=57);
    return __result180__;
}

_Bool xiswalnum(unsigned int c){
_Bool __result181__;
    __result181__ = xiswalpha(c)||xiswdigit(c);
    return __result181__;
}

_Bool xisalpha(char c){
_Bool result_175;
_Bool __result182__;
memset(&result_175, 0, sizeof(_Bool));
    result_175=(c>=97&&c<=122)||(c>=65&&c<=90);
    __result182__ = result_175;
    return __result182__;
}

_Bool xisblank(char c){
_Bool __result183__;
    __result183__ = c==32||c==9;
    return __result183__;
}

_Bool xisdigit(char c){
_Bool __result184__;
    __result184__ = (c>=48&&c<=57);
    return __result184__;
}

_Bool xisalnum(char c){
_Bool __result185__;
    __result185__ = xisalpha(c)||xisdigit(c);
    return __result185__;
}

_Bool xisascii(char c){
_Bool result_176;
_Bool __result186__;
memset(&result_176, 0, sizeof(_Bool));
    result_176=(c>=32&&c<=126);
    __result186__ = result_176;
    return __result186__;
}

_Bool xiswascii(unsigned int c){
_Bool result_177;
_Bool __result187__;
memset(&result_177, 0, sizeof(_Bool));
    result_177=(c>=32&&c<=126);
    __result187__ = result_177;
    return __result187__;
}

int string_length(char* str){
int __result188__;
int __result189__;
    if(str==((void*)0)) {
        __result188__ = 0;
        return __result188__;
    }
    __result189__ = strlen(str);
    return __result189__;
}

int charp_length(char* str){
int __result190__;
int __result191__;
    if(str==((void*)0)) {
        __result190__ = 0;
        return __result190__;
    }
    __result191__ = strlen(str);
    return __result191__;
}

char* string_reverse(char* str){
void* __result_obj__;
void* right_value124;
char* __result192__;
int len_178;
void* right_value125;
char* result_179;
int i_180;
char* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
memset(&len_178, 0, sizeof(int));
right_value125 = (void*)0;
memset(&result_179, 0, sizeof(char*));
memset(&i_180, 0, sizeof(int));
    if(str==((void*)0)) {
        __result192__ = __result_obj__ = ((char*)(right_value124=__builtin_string("")));
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result192__;
    }
    len_178=strlen(str);
    result_179=(char*)come_increment_ref_count(((char*)(right_value125=(char*)come_calloc(1, sizeof(char)*(1*(len_178+1)), "libneo-c.c", 1679, "char"))));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_180=0;    i_180<len_178;    i_180++    ){
        result_179[i_180]=str[len_178-i_180-1];
    }
    result_179[len_178]=0;
    __result193__ = __result_obj__ = result_179;
    result_179 = come_decrement_ref_count2(result_179, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result193__;
    result_179 = come_decrement_ref_count2(result_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_reverse(char* str){
void* __result_obj__;
void* right_value126;
char* __result194__;
int len_181;
void* right_value127;
char* result_182;
int i_183;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
memset(&len_181, 0, sizeof(int));
right_value127 = (void*)0;
memset(&result_182, 0, sizeof(char*));
memset(&i_183, 0, sizeof(int));
    if(str==((void*)0)) {
        __result194__ = __result_obj__ = ((char*)(right_value126=__builtin_string("")));
        right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result194__;
    }
    len_181=strlen(str);
    result_182=(char*)come_increment_ref_count(((char*)(right_value127=(char*)come_calloc(1, sizeof(char)*(1*(len_181+1)), "libneo-c.c", 1696, "char"))));
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_183=0;    i_183<len_181;    i_183++    ){
        result_182[i_183]=str[len_181-i_183-1];
    }
    result_182[len_181]=0;
    __result195__ = __result_obj__ = result_182;
    result_182 = come_decrement_ref_count2(result_182, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result195__;
    result_182 = come_decrement_ref_count2(result_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
void* right_value128;
char* __result196__;
int len_184;
void* right_value129;
void* right_value130;
char* __result197__;
void* right_value131;
char* __result198__;
void* right_value132;
char* __result199__;
void* right_value133;
char* result_185;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
right_value128 = (void*)0;
memset(&len_184, 0, sizeof(int));
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
right_value133 = (void*)0;
memset(&result_185, 0, sizeof(char*));
    if(str==((void*)0)) {
        __result196__ = __result_obj__ = ((char*)(right_value128=__builtin_string("")));
        right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result196__;
    }
    len_184=strlen(str);
    if(head<0) {
        head+=len_184;
    }
    if(tail<0) {
        tail+=len_184+1;
    }
    if(head>tail) {
        __result197__ = __result_obj__ = ((char*)(right_value130=string_reverse(((char*)(right_value129=charp_substring(str,tail,head))))));
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result197__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_184) {
        tail=len_184;
    }
    if(head==tail) {
        __result198__ = __result_obj__ = ((char*)(right_value131=__builtin_string("")));
        right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result198__;
    }
    if(tail-head+1<1) {
        __result199__ = __result_obj__ = ((char*)(right_value132=__builtin_string("")));
        right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result199__;
    }
    result_185=(char*)come_increment_ref_count(((char*)(right_value133=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1741, "char"))));
    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_185,str+head,tail-head);
    result_185[tail-head]=0;
    __result200__ = __result_obj__ = result_185;
    result_185 = come_decrement_ref_count2(result_185, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result200__;
    result_185 = come_decrement_ref_count2(result_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__;
void* right_value134;
char* __result201__;
int len_186;
void* right_value135;
void* right_value136;
char* __result202__;
void* right_value137;
char* __result203__;
void* right_value138;
char* __result204__;
void* right_value139;
char* result_187;
char* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
memset(&len_186, 0, sizeof(int));
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
memset(&result_187, 0, sizeof(char*));
    if(str==((void*)0)) {
        __result201__ = __result_obj__ = ((char*)(right_value134=__builtin_string("")));
        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result201__;
    }
    len_186=strlen(str);
    if(head<0) {
        head+=len_186;
    }
    if(tail<0) {
        tail+=len_186+1;
    }
    if(head>tail) {
        __result202__ = __result_obj__ = ((char*)(right_value136=string_reverse(((char*)(right_value135=charp_substring(str,tail,head))))));
        right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result202__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_186) {
        tail=len_186;
    }
    if(head==tail) {
        __result203__ = __result_obj__ = ((char*)(right_value137=__builtin_string("")));
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result203__;
    }
    if(tail-head+1<1) {
        __result204__ = __result_obj__ = ((char*)(right_value138=__builtin_string("")));
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result204__;
    }
    result_187=(char*)come_increment_ref_count(((char*)(right_value139=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1784, "char"))));
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_187,str+head,tail-head);
    result_187[tail-head]=0;
    __result205__ = __result_obj__ = result_187;
    result_187 = come_decrement_ref_count2(result_187, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result205__;
    result_187 = come_decrement_ref_count2(result_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__;
void* right_value140;
char* __result206__;
int len_188;
void* right_value141;
void* right_value142;
char* __result207__;
void* right_value143;
char* __result208__;
void* right_value144;
char* __result209__;
void* right_value145;
char* result_189;
char* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
memset(&len_188, 0, sizeof(int));
right_value141 = (void*)0;
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
memset(&result_189, 0, sizeof(char*));
    if(str==((void*)0)) {
        __result206__ = __result_obj__ = ((char*)(right_value140=__builtin_string("")));
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result206__;
    }
    len_188=strlen(str);
    if(head<0) {
        head+=len_188;
    }
    if(tail<0) {
        tail+=len_188+1;
    }
    if(head>tail) {
        __result207__ = __result_obj__ = ((char*)(right_value142=string_reverse(((char*)(right_value141=charp_substring(str,tail,head))))));
        right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result207__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_188) {
        tail=len_188;
    }
    if(head==tail) {
        __result208__ = __result_obj__ = ((char*)(right_value143=__builtin_string("")));
        right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result208__;
    }
    if(tail-head+1<1) {
        __result209__ = __result_obj__ = ((char*)(right_value144=__builtin_string("")));
        right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result209__;
    }
    result_189=(char*)come_increment_ref_count(((char*)(right_value145=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1827, "char"))));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_189,str+head,tail-head);
    result_189[tail-head]=0;
    __result210__ = __result_obj__ = result_189;
    result_189 = come_decrement_ref_count2(result_189, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result210__;
    result_189 = come_decrement_ref_count2(result_189, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__;
void* right_value146;
char* __result211__;
int len_190;
void* right_value147;
void* right_value148;
char* __result212__;
void* right_value149;
char* __result213__;
void* right_value150;
char* __result214__;
void* right_value151;
char* result_191;
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
memset(&len_190, 0, sizeof(int));
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&result_191, 0, sizeof(char*));
    if(str==((void*)0)) {
        __result211__ = __result_obj__ = ((char*)(right_value146=__builtin_string("")));
        right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result211__;
    }
    len_190=strlen(str);
    if(head<0) {
        head+=len_190;
    }
    if(tail<0) {
        tail+=len_190+1;
    }
    if(head>tail) {
        __result212__ = __result_obj__ = ((char*)(right_value148=string_reverse(((char*)(right_value147=charp_substring(str,tail,head))))));
        right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value148 = come_decrement_ref_count2(right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result212__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_190) {
        tail=len_190;
    }
    if(head==tail) {
        __result213__ = __result_obj__ = ((char*)(right_value149=__builtin_string("")));
        right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result213__;
    }
    if(tail-head+1<1) {
        __result214__ = __result_obj__ = ((char*)(right_value150=__builtin_string("")));
        right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result214__;
    }
    result_191=(char*)come_increment_ref_count(((char*)(right_value151=(char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1870, "char"))));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(result_191,str+head,tail-head);
    result_191[tail-head]=0;
    __result215__ = __result_obj__ = result_191;
    result_191 = come_decrement_ref_count2(result_191, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result215__;
    result_191 = come_decrement_ref_count2(result_191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* xsprintf(char* msg, ...){
void* __result_obj__;
void* right_value152;
char* __result216__;
va_list args_192;
char* result_193;
int len_194;
void* right_value153;
char* __result217__;
void* right_value154;
char* result2_195;
char* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
memset(&args_192, 0, sizeof(va_list));
memset(&result_193, 0, sizeof(char*));
memset(&len_194, 0, sizeof(int));
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&result2_195, 0, sizeof(char*));
    if(msg==((void*)0)) {
        __result216__ = __result_obj__ = ((char*)(right_value152=__builtin_string("")));
        right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result216__;
    }
    __builtin_va_start(args_192,msg);
    len_194=vasprintf(&result_193,msg,args_192);
    __builtin_va_end(args_192);
    if(len_194<0) {
        __result217__ = __result_obj__ = ((char*)(right_value153=__builtin_string("")));
        come_call_finalizer3((&args_192),va_list_finalize, 1, 0, 0, 0, (void*)0);
        right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result217__;
    }
    result2_195=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(result_193))));
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    free(result_193);
    __result218__ = __result_obj__ = result2_195;
    come_call_finalizer3((&args_192),va_list_finalize, 1, 0, 0, 0, (void*)0);
    result2_195 = come_decrement_ref_count2(result2_195, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result218__;
    come_call_finalizer3((&args_192),va_list_finalize, 1, 0, 0, 0, (void*)0);
    result2_195 = come_decrement_ref_count2(result2_195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void va_list_finalize(va_list self){
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__;
void* right_value155;
char* __result219__;
int len_196;
void* right_value156;
char* __result220__;
void* right_value157;
char* __result221__;
void* right_value158;
char* sub_str_197;
void* right_value159;
char* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
memset(&len_196, 0, sizeof(int));
right_value156 = (void*)0;
right_value157 = (void*)0;
right_value158 = (void*)0;
memset(&sub_str_197, 0, sizeof(char*));
right_value159 = (void*)0;
    if(str==((void*)0)) {
        __result219__ = __result_obj__ = ((char*)(right_value155=__builtin_string("")));
        right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result219__;
    }
    len_196=strlen(str);
    if(strcmp(str,"")==0) {
        __result220__ = __result_obj__ = ((char*)(right_value156=__builtin_string(str)));
        right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result220__;
    }
    if(head<0) {
        head+=len_196;
    }
    if(tail<0) {
        tail+=len_196+1;
    }
    if(head<0) {
        head=0;
    }
    if(tail<0) {
        __result221__ = __result_obj__ = ((char*)(right_value157=__builtin_string(str)));
        right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result221__;
    }
    if(tail>=len_196) {
        tail=len_196;
    }
    sub_str_197=(char*)come_increment_ref_count(((char*)(right_value158=charp_substring(str,tail,-1))));
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(str+head,sub_str_197,string_length(sub_str_197)+1);
    __result222__ = __result_obj__ = ((char*)(right_value159=__builtin_string(str)));
    sub_str_197 = come_decrement_ref_count2(sub_str_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result222__;
    sub_str_197 = come_decrement_ref_count2(sub_str_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__;
void* right_value160;
char* __result223__;
int len_198;
void* right_value161;
char* __result224__;
void* right_value162;
char* __result225__;
void* right_value163;
char* sub_str_199;
void* right_value164;
char* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
memset(&len_198, 0, sizeof(int));
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&sub_str_199, 0, sizeof(char*));
right_value164 = (void*)0;
    if(str==((void*)0)) {
        __result223__ = __result_obj__ = ((char*)(right_value160=__builtin_string("")));
        right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result223__;
    }
    len_198=strlen(str);
    if(strcmp(str,"")==0) {
        __result224__ = __result_obj__ = ((char*)(right_value161=__builtin_string(str)));
        right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result224__;
    }
    if(head<0) {
        head+=len_198;
    }
    if(tail<0) {
        tail+=len_198+1;
    }
    if(head<0) {
        head=0;
    }
    if(tail<0) {
        __result225__ = __result_obj__ = ((char*)(right_value162=__builtin_string(str)));
        right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result225__;
    }
    if(tail>=len_198) {
        tail=len_198;
    }
    sub_str_199=(char*)come_increment_ref_count(((char*)(right_value163=charp_substring(str,tail,-1))));
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(str+head,sub_str_199,string_length(sub_str_199)+1);
    __result226__ = __result_obj__ = ((char*)(right_value164=__builtin_string(str)));
    sub_str_199 = come_decrement_ref_count2(sub_str_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result226__;
    sub_str_199 = come_decrement_ref_count2(sub_str_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__;
void* right_value165;
void* right_value166;
struct list$1charph* __result228__;
void* right_value167;
void* right_value168;
struct list$1charph* result_202;
void* right_value169;
void* right_value170;
struct buffer* str_203;
int i_204;
void* right_value174;
void* right_value175;
struct list$1charph* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&result_202, 0, sizeof(struct list$1charph*));
right_value169 = (void*)0;
right_value170 = (void*)0;
memset(&str_203, 0, sizeof(struct buffer*));
memset(&i_204, 0, sizeof(int));
right_value174 = (void*)0;
right_value175 = (void*)0;
    if(self==((void*)0)) {
        __result228__ = __result_obj__ = ((struct list$1charph*)(right_value166=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value165=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 1981, "list$1charph")))))));
        come_call_finalizer3(right_value165,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value166,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        return __result228__;
    }
    result_202=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value168=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value167=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 1984, "list$1charph"))))))));
    come_call_finalizer3(right_value167,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value168,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    str_203=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value170=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value169=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1986, "buffer"))))))));
    come_call_finalizer3(right_value169,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value170,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_204=0;    i_204<charp_length(self);    i_204++    ){
        if(self[i_204]==c) {
            list$1charph_push_back(result_202,(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string(str_203->buf)))));
            right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_reset(str_203);
        }
        else {
            buffer_append_char(str_203,self[i_204]);
        }
    }
    if(buffer_length(str_203)!=0) {
        list$1charph_push_back(result_202,(char*)come_increment_ref_count(((char*)(right_value175=__builtin_string(str_203->buf)))));
        right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result230__ = __result_obj__ = result_202;
    come_call_finalizer3(result_202,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(str_203,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result230__;
    come_call_finalizer3(result_202,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(str_203,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
            self->head=((void*)0);
            self->tail=((void*)0);
            self->len=0;
            __result227__ = __result_obj__ = self;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
            return __result227__;
            come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_200;
struct list_item$1charph* prev_it_201;
memset(&it_200, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_201, 0, sizeof(struct list_item$1charph*));
                it_200=self->head;
                while(it_200!=((void*)0)) {
                    prev_it_201=it_200;
                    it_200=it_200->next;
                    come_call_finalizer3(prev_it_201,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
                        if(self!=((void*)0)&&self->item!=((void*)0)) {
                            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
void* right_value171;
struct list_item$1charph* litem_205;
char* __dec_obj22;
void* right_value172;
struct list_item$1charph* litem_206;
char* __dec_obj23;
void* right_value173;
struct list_item$1charph* litem_207;
char* __dec_obj24;
struct list$1charph* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
memset(&litem_205, 0, sizeof(struct list_item$1charph*));
right_value172 = (void*)0;
memset(&litem_206, 0, sizeof(struct list_item$1charph*));
right_value173 = (void*)0;
memset(&litem_207, 0, sizeof(struct list_item$1charph*));
                if(self->len==0) {
                    litem_205=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value171=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 219, "list_item$1charph"))));
                    come_call_finalizer3(right_value171,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_205->prev=((void*)0);
                    litem_205->next=((void*)0);
                    __dec_obj22=litem_205->item;
                    litem_205->item=(char*)come_increment_ref_count(item);
                    __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                    self->tail=litem_205;
                    self->head=litem_205;
                }
                else {
                    if(self->len==1) {
                        litem_206=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value172=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 229, "list_item$1charph"))));
                        come_call_finalizer3(right_value172,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_206->prev=self->head;
                        litem_206->next=((void*)0);
                        __dec_obj23=litem_206->item;
                        litem_206->item=(char*)come_increment_ref_count(item);
                        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail=litem_206;
                        self->head->next=litem_206;
                    }
                    else {
                        litem_207=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value173=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 239, "list_item$1charph"))));
                        come_call_finalizer3(right_value173,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        litem_207->prev=self->tail;
                        litem_207->next=((void*)0);
                        __dec_obj24=litem_207->item;
                        litem_207->item=(char*)come_increment_ref_count(item);
                        __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
                        self->tail->next=litem_207;
                        self->tail=litem_207;
                    }
                }
                self->len++;
                __result229__ = __result_obj__ = self;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                return __result229__;
                item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__;
void* right_value176;
void* right_value177;
struct list$1charph* __result231__;
void* right_value178;
void* right_value179;
struct list$1charph* result_208;
void* right_value180;
void* right_value181;
struct buffer* str_209;
int i_210;
void* right_value182;
void* right_value183;
struct list$1charph* __result232__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
right_value179 = (void*)0;
memset(&result_208, 0, sizeof(struct list$1charph*));
right_value180 = (void*)0;
right_value181 = (void*)0;
memset(&str_209, 0, sizeof(struct buffer*));
memset(&i_210, 0, sizeof(int));
right_value182 = (void*)0;
right_value183 = (void*)0;
    if(self==((void*)0)) {
        __result231__ = __result_obj__ = ((struct list$1charph*)(right_value177=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value176=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 2007, "list$1charph")))))));
        come_call_finalizer3(right_value176,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value177,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        return __result231__;
    }
    result_208=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value179=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value178=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 2010, "list$1charph"))))))));
    come_call_finalizer3(right_value178,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value179,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    str_209=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value181=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value180=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2012, "buffer"))))))));
    come_call_finalizer3(right_value180,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value181,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_210=0;    i_210<charp_length(self);    i_210++    ){
        if(self[i_210]==c) {
            list$1charph_push_back(result_208,(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string(str_209->buf)))));
            right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_reset(str_209);
        }
        else {
            buffer_append_char(str_209,self[i_210]);
        }
    }
    if(buffer_length(str_209)!=0) {
        list$1charph_push_back(result_208,(char*)come_increment_ref_count(((char*)(right_value183=__builtin_string(str_209->buf)))));
        right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result232__ = __result_obj__ = result_208;
    come_call_finalizer3(result_208,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(str_209,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result232__;
    come_call_finalizer3(result_208,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(str_209,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

char* xbasename(char* path){
void* __result_obj__;
void* right_value184;
char* __result233__;
char* p_211;
void* right_value185;
char* __result234__;
void* right_value186;
char* __result235__;
void* right_value187;
char* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
memset(&p_211, 0, sizeof(char*));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
    if(path==((void*)0)) {
        __result233__ = __result_obj__ = ((char*)(right_value184=__builtin_string("")));
        right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result233__;
    }
    p_211=path+strlen(path);
    while(p_211>=path) {
        if(*p_211==47) {
            break;
        }
        else {
            p_211--;
        }
    }
    if(p_211<path) {
        __result234__ = __result_obj__ = ((char*)(right_value185=__builtin_string(path)));
        right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result234__;
    }
    else {
        __result235__ = __result_obj__ = ((char*)(right_value186=__builtin_string(p_211+1)));
        right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result235__;
    }
    __result236__ = __result_obj__ = ((char*)(right_value187=__builtin_string("")));
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result236__;
}

char* xnoextname(char* path){
void* __result_obj__;
void* right_value188;
char* __result237__;
void* right_value189;
char* path2_212;
char* p_213;
void* right_value190;
char* __result238__;
void* right_value191;
char* __result239__;
void* right_value192;
char* __result240__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
right_value189 = (void*)0;
memset(&path2_212, 0, sizeof(char*));
memset(&p_213, 0, sizeof(char*));
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
    if(path==((void*)0)) {
        __result237__ = __result_obj__ = ((char*)(right_value188=__builtin_string("")));
        right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result237__;
    }
    path2_212=(char*)come_increment_ref_count(((char*)(right_value189=xbasename(path))));
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    p_213=path2_212+strlen(path2_212);
    while(p_213>=path2_212) {
        if(*p_213==46) {
            break;
        }
        else {
            p_213--;
        }
    }
    if(p_213<path2_212) {
        __result238__ = __result_obj__ = ((char*)(right_value190=__builtin_string(path2_212)));
        path2_212 = come_decrement_ref_count2(path2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result238__;
    }
    else {
        __result239__ = __result_obj__ = ((char*)(right_value191=string_substring(path2_212,0,p_213-path2_212)));
        path2_212 = come_decrement_ref_count2(path2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result239__;
    }
    __result240__ = __result_obj__ = ((char*)(right_value192=__builtin_string("")));
    path2_212 = come_decrement_ref_count2(path2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result240__;
    path2_212 = come_decrement_ref_count2(path2_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* xextname(char* path){
void* __result_obj__;
void* right_value193;
char* __result241__;
char* p_214;
void* right_value194;
char* __result242__;
void* right_value195;
char* __result243__;
void* right_value196;
char* __result244__;
memset(&__result_obj__, 0, sizeof(void*));
right_value193 = (void*)0;
memset(&p_214, 0, sizeof(char*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
    if(path==((void*)0)) {
        __result241__ = __result_obj__ = ((char*)(right_value193=__builtin_string("")));
        right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result241__;
    }
    p_214=path+strlen(path);
    while(p_214>=path) {
        if(*p_214==46) {
            break;
        }
        else {
            p_214--;
        }
    }
    if(p_214<path) {
        __result242__ = __result_obj__ = ((char*)(right_value194=__builtin_string(path)));
        right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result242__;
    }
    else {
        __result243__ = __result_obj__ = ((char*)(right_value195=__builtin_string(p_214+1)));
        right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result243__;
    }
    __result244__ = __result_obj__ = ((char*)(right_value196=__builtin_string("")));
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result244__;
}

char* bool_to_string(_Bool self){
void* __result_obj__;
void* right_value197;
char* __result245__;
void* right_value198;
char* __result246__;
memset(&__result_obj__, 0, sizeof(void*));
right_value197 = (void*)0;
right_value198 = (void*)0;
    if(self) {
        __result245__ = __result_obj__ = ((char*)(right_value197=__builtin_string("true")));
        right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result245__;
    }
    else {
        __result246__ = __result_obj__ = ((char*)(right_value198=__builtin_string("false")));
        right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result246__;
    }
}

char* char_to_string(char self){
void* __result_obj__;
void* right_value199;
char* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
right_value199 = (void*)0;
    __result247__ = __result_obj__ = ((char*)(right_value199=xsprintf("%c",self)));
    right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result247__;
}

char* short_to_string(short short self){
void* __result_obj__;
void* right_value200;
char* __result248__;
memset(&__result_obj__, 0, sizeof(void*));
right_value200 = (void*)0;
    __result248__ = __result_obj__ = ((char*)(right_value200=xsprintf("%d",self)));
    right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result248__;
}

char* int_to_string(int self){
void* __result_obj__;
void* right_value201;
char* __result249__;
memset(&__result_obj__, 0, sizeof(void*));
right_value201 = (void*)0;
    __result249__ = __result_obj__ = ((char*)(right_value201=xsprintf("%d",self)));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result249__;
}

char* long_to_string(long self){
void* __result_obj__;
void* right_value202;
char* __result250__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
    __result250__ = __result_obj__ = ((char*)(right_value202=xsprintf("%ld",self)));
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result250__;
}

char* size_t_to_string(unsigned long int self){
void* __result_obj__;
void* right_value203;
char* __result251__;
memset(&__result_obj__, 0, sizeof(void*));
right_value203 = (void*)0;
    __result251__ = __result_obj__ = ((char*)(right_value203=xsprintf("%ld",self)));
    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result251__;
}

char* float_to_string(float self){
void* __result_obj__;
void* right_value204;
char* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
    __result252__ = __result_obj__ = ((char*)(right_value204=xsprintf("%f",self)));
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result252__;
}

char* double_to_string(double self){
void* __result_obj__;
void* right_value205;
char* __result253__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
    __result253__ = __result_obj__ = ((char*)(right_value205=xsprintf("%lf",self)));
    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result253__;
}

char* string_to_string(char* self){
void* __result_obj__;
void* right_value206;
char* __result254__;
void* right_value207;
char* __result255__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
right_value207 = (void*)0;
    if(self==((void*)0)) {
        __result254__ = __result_obj__ = ((char*)(right_value206=__builtin_string("")));
        right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result254__;
    }
    __result255__ = __result_obj__ = ((char*)(right_value207=__builtin_string(self)));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result255__;
}

char* charp_to_string(char* self){
void* __result_obj__;
void* right_value208;
char* __result256__;
void* right_value209;
char* __result257__;
memset(&__result_obj__, 0, sizeof(void*));
right_value208 = (void*)0;
right_value209 = (void*)0;
    if(self==((void*)0)) {
        __result256__ = __result_obj__ = ((char*)(right_value208=__builtin_string("")));
        right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result256__;
    }
    __result257__ = __result_obj__ = ((char*)(right_value209=__builtin_string(self)));
    right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result257__;
}

int bool_compare(_Bool left, _Bool right){
int __result258__;
int __result259__;
int __result260__;
int __result261__;
int __result262__;
    if(!left&&right) {
        __result258__ = -1;
        return __result258__;
    }
    else {
        if(left&&right) {
            __result259__ = 0;
            return __result259__;
        }
        else {
            if(!left&&!right) {
                __result260__ = 0;
                return __result260__;
            }
            else {
                __result261__ = 1;
                return __result261__;
            }
        }
    }
    __result262__ = 0;
    return __result262__;
}

int char_compare(char left, char right){
int __result263__;
int __result264__;
int __result265__;
int __result266__;
    if(left<right) {
        __result263__ = -1;
        return __result263__;
    }
    else {
        if(left>right) {
            __result264__ = 1;
            return __result264__;
        }
        else {
            __result265__ = 0;
            return __result265__;
        }
    }
    __result266__ = 0;
    return __result266__;
}

int short_compare(short short left, short short right){
int __result267__;
int __result268__;
int __result269__;
int __result270__;
    if(left<right) {
        __result267__ = -1;
        return __result267__;
    }
    else {
        if(left>right) {
            __result268__ = 1;
            return __result268__;
        }
        else {
            __result269__ = 0;
            return __result269__;
        }
    }
    __result270__ = 0;
    return __result270__;
}

int int_compare(int left, int right){
int __result271__;
int __result272__;
int __result273__;
int __result274__;
    if(left<right) {
        __result271__ = -1;
        return __result271__;
    }
    else {
        if(left>right) {
            __result272__ = 1;
            return __result272__;
        }
        else {
            __result273__ = 0;
            return __result273__;
        }
    }
    __result274__ = 0;
    return __result274__;
}

int long_compare(long left, long right){
int __result275__;
int __result276__;
int __result277__;
int __result278__;
    if(left<right) {
        __result275__ = -1;
        return __result275__;
    }
    else {
        if(left>right) {
            __result276__ = 1;
            return __result276__;
        }
        else {
            __result277__ = 0;
            return __result277__;
        }
    }
    __result278__ = 0;
    return __result278__;
}

int size_t_compare(unsigned long int left, unsigned long int right){
int __result279__;
int __result280__;
int __result281__;
int __result282__;
    if(left<right) {
        __result279__ = -1;
        return __result279__;
    }
    else {
        if(left>right) {
            __result280__ = 1;
            return __result280__;
        }
        else {
            __result281__ = 0;
            return __result281__;
        }
    }
    __result282__ = 0;
    return __result282__;
}

int float_compare(float left, float right){
int __result283__;
int __result284__;
int __result285__;
int __result286__;
    if(left<right) {
        __result283__ = -1;
        return __result283__;
    }
    else {
        if(left>right) {
            __result284__ = 1;
            return __result284__;
        }
        else {
            __result285__ = 0;
            return __result285__;
        }
    }
    __result286__ = 0;
    return __result286__;
}

int double_compare(double left, double right){
int __result287__;
int __result288__;
int __result289__;
int __result290__;
    if(left<right) {
        __result287__ = -1;
        return __result287__;
    }
    else {
        if(left>right) {
            __result288__ = 1;
            return __result288__;
        }
        else {
            __result289__ = 0;
            return __result289__;
        }
    }
    __result290__ = 0;
    return __result290__;
}

int string_compare(char* left, char* right){
int __result291__;
int __result292__;
int __result293__;
int __result294__;
    if(left==((void*)0)&&right==((void*)0)) {
        __result291__ = 0;
        return __result291__;
    }
    else {
        if(left==((void*)0)) {
            __result292__ = -1;
            return __result292__;
        }
        else {
            if(right==((void*)0)) {
                __result293__ = 1;
                return __result293__;
            }
        }
    }
    __result294__ = strcmp(left,right);
    return __result294__;
}

int charp_compare(char* left, char* right){
int __result295__;
int __result296__;
int __result297__;
int __result298__;
    if(left==((void*)0)&&right==((void*)0)) {
        __result295__ = 0;
        return __result295__;
    }
    else {
        if(left==((void*)0)) {
            __result296__ = -1;
            return __result296__;
        }
        else {
            if(right==((void*)0)) {
                __result297__ = 1;
                return __result297__;
            }
        }
    }
    __result298__ = strcmp(left,right);
    return __result298__;
}

char* FILE_read(struct _IO_FILE* f){
void* __result_obj__;
void* right_value210;
char* __result299__;
void* right_value211;
void* right_value212;
struct buffer* buf_215;
int size_217;
void* right_value213;
char* __result300__;
memset(&__result_obj__, 0, sizeof(void*));
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
memset(&buf_215, 0, sizeof(struct buffer*));
memset(&size_217, 0, sizeof(int));
right_value213 = (void*)0;
    if(f==((void*)0)) {
        __result299__ = __result_obj__ = ((char*)(right_value210=__builtin_string("")));
        right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result299__;
    }
    buf_215=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value212=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value211=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2342, "buffer"))))))));
    come_call_finalizer3(right_value211,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value212,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while(1) {
        char buf2_216[1024];
        memset(&buf2_216, 0, sizeof(char)        *(1024)        );
        size_217=fread(buf2_216,1,1024,f);
        buffer_append(buf_215,buf2_216,size_217);
        if(size_217<1024) {
            break;
        }
    }
    __result300__ = __result_obj__ = ((char*)(right_value213=buffer_to_string(buf_215)));
    come_call_finalizer3(buf_215,buffer_finalize, 0, 0, 0, 0, (void*)0);
    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result300__;
    come_call_finalizer3(buf_215,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

int FILE_write(struct _IO_FILE* f, char* str){
int __result301__;
int __result302__;
    if(f==((void*)0)||str==((void*)0)) {
        __result301__ = -1;
        return __result301__;
    }
    __result302__ = fwrite(str,strlen(str),1,f);
    return __result302__;
}

int FILE_fclose(struct _IO_FILE* f){
int __result303__;
int result_218;
int __result304__;
int __result305__;
memset(&result_218, 0, sizeof(int));
    if(f==((void*)0)) {
        __result303__ = -1;
        return __result303__;
    }
    result_218=fclose(f);
    if(result_218<0) {
        __result304__ = result_218;
        return __result304__;
    }
    __result305__ = result_218;
    return __result305__;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__;
struct _IO_FILE* __result306__;
va_list args_220;
int result_221;
struct _IO_FILE* __result307__;
struct _IO_FILE* __result308__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&args_220, 0, sizeof(va_list));
memset(&result_221, 0, sizeof(int));
    if(f==((void*)0)||msg==((void*)0)) {
        __result306__ = __result_obj__ = f;
        return __result306__;
    }
    char msg2_219[1024*2*2*2];
    memset(&msg2_219, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_220,msg);
    vsnprintf(msg2_219,1024*2*2*2,msg,args_220);
    __builtin_va_end(args_220);
    result_221=fprintf(f,"%s",msg2_219);
    if(result_221<0) {
        __result307__ = __result_obj__ = f;
        come_call_finalizer3((&args_220),va_list_finalize, 1, 0, 0, 0, (void*)0);
        return __result307__;
    }
    __result308__ = __result_obj__ = f;
    come_call_finalizer3((&args_220),va_list_finalize, 1, 0, 0, 0, (void*)0);
    return __result308__;
    come_call_finalizer3((&args_220),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

int string_write(char* self, char* file_name, _Bool append){
int __result309__;
struct _IO_FILE* f_222;
int __result310__;
int result_223;
int __result311__;
int result2_224;
int __result312__;
int __result313__;
memset(&f_222, 0, sizeof(struct _IO_FILE*));
memset(&result_223, 0, sizeof(int));
memset(&result2_224, 0, sizeof(int));
    if(self==((void*)0)||file_name==((void*)0)) {
        __result309__ = -1;
        return __result309__;
    }
    if(append) {
        f_222=fopen(file_name,"a");
    }
    else {
        f_222=fopen(file_name,"w");
    }
    if(f_222==((void*)0)) {
        __result310__ = -1;
        return __result310__;
    }
    result_223=fwrite(self,strlen(self),1,f_222);
    if(result_223<0) {
        __result311__ = result_223;
        return __result311__;
    }
    result2_224=fclose(f_222);
    if(result2_224<0) {
        __result312__ = result2_224;
        return __result312__;
    }
    __result313__ = result_223;
    return __result313__;
}

int charp_write(char* self, char* file_name, _Bool append){
int __result314__;
struct _IO_FILE* f_225;
int __result315__;
int result_226;
int __result316__;
int result2_227;
int __result317__;
int __result318__;
memset(&f_225, 0, sizeof(struct _IO_FILE*));
memset(&result_226, 0, sizeof(int));
memset(&result2_227, 0, sizeof(int));
    if(self==((void*)0)||file_name==((void*)0)) {
        __result314__ = -1;
        return __result314__;
    }
    if(append) {
        f_225=fopen(file_name,"a");
    }
    else {
        f_225=fopen(file_name,"w");
    }
    if(f_225==((void*)0)) {
        __result315__ = -1;
        return __result315__;
    }
    result_226=fwrite(self,strlen(self),1,f_225);
    if(result_226<0) {
        __result316__ = result_226;
        return __result316__;
    }
    result2_227=fclose(f_225);
    if(result2_227<0) {
        __result317__ = result2_227;
        return __result317__;
    }
    __result318__ = result_226;
    return __result318__;
}

char* string_read(char* file_name){
void* __result_obj__;
void* right_value214;
char* __result319__;
struct _IO_FILE* f_228;
void* right_value215;
char* __result320__;
void* right_value216;
void* right_value217;
struct buffer* buf_229;
int size_231;
void* right_value218;
char* result_232;
int result2_233;
void* right_value219;
char* __result321__;
char* __result322__;
memset(&__result_obj__, 0, sizeof(void*));
right_value214 = (void*)0;
memset(&f_228, 0, sizeof(struct _IO_FILE*));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&buf_229, 0, sizeof(struct buffer*));
memset(&size_231, 0, sizeof(int));
right_value218 = (void*)0;
memset(&result_232, 0, sizeof(char*));
memset(&result2_233, 0, sizeof(int));
right_value219 = (void*)0;
    if(file_name==((void*)0)) {
        __result319__ = __result_obj__ = ((char*)(right_value214=__builtin_string("")));
        right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result319__;
    }
    f_228=fopen(file_name,"r");
    if(f_228==((void*)0)) {
        __result320__ = __result_obj__ = ((char*)(right_value215=__builtin_string("")));
        right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result320__;
    }
    buf_229=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value217=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value216=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2482, "buffer"))))))));
    come_call_finalizer3(right_value216,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value217,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while(1) {
        char buf2_230[1024];
        memset(&buf2_230, 0, sizeof(char)        *(1024)        );
        size_231=fread(buf2_230,1,1024,f_228);
        buffer_append(buf_229,buf2_230,size_231);
        if(size_231<1024) {
            break;
        }
    }
    result_232=(char*)come_increment_ref_count(((char*)(right_value218=buffer_to_string(buf_229))));
    right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result2_233=fclose(f_228);
    if(result2_233<0) {
        __result321__ = __result_obj__ = ((char*)(right_value219=__builtin_string("")));
        come_call_finalizer3(buf_229,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_232 = come_decrement_ref_count2(result_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result321__;
    }
    __result322__ = __result_obj__ = result_232;
    come_call_finalizer3(buf_229,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_232 = come_decrement_ref_count2(result_232, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result322__;
    come_call_finalizer3(buf_229,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_232 = come_decrement_ref_count2(result_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

char* charp_read(char* file_name){
void* __result_obj__;
void* right_value220;
char* __result323__;
struct _IO_FILE* f_234;
void* right_value221;
char* __result324__;
void* right_value222;
void* right_value223;
struct buffer* buf_235;
int size_237;
void* right_value224;
char* result_238;
int result2_239;
void* right_value225;
char* __result325__;
char* __result326__;
memset(&__result_obj__, 0, sizeof(void*));
right_value220 = (void*)0;
memset(&f_234, 0, sizeof(struct _IO_FILE*));
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
memset(&buf_235, 0, sizeof(struct buffer*));
memset(&size_237, 0, sizeof(int));
right_value224 = (void*)0;
memset(&result_238, 0, sizeof(char*));
memset(&result2_239, 0, sizeof(int));
right_value225 = (void*)0;
    if(file_name==((void*)0)) {
        __result323__ = __result_obj__ = ((char*)(right_value220=__builtin_string("")));
        right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result323__;
    }
    f_234=fopen(file_name,"r");
    if(f_234==((void*)0)) {
        __result324__ = __result_obj__ = ((char*)(right_value221=__builtin_string("")));
        right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result324__;
    }
    buf_235=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value223=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value222=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2519, "buffer"))))))));
    come_call_finalizer3(right_value222,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value223,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while(1) {
        char buf2_236[1024];
        memset(&buf2_236, 0, sizeof(char)        *(1024)        );
        size_237=fread(buf2_236,1,1024,f_234);
        buffer_append(buf_235,buf2_236,size_237);
        if(size_237<1024) {
            break;
        }
    }
    result_238=(char*)come_increment_ref_count(((char*)(right_value224=buffer_to_string(buf_235))));
    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    result2_239=fclose(f_234);
    if(result2_239<0) {
        __result325__ = __result_obj__ = ((char*)(right_value225=__builtin_string("")));
        come_call_finalizer3(buf_235,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_238 = come_decrement_ref_count2(result_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result325__;
    }
    __result326__ = __result_obj__ = result_238;
    come_call_finalizer3(buf_235,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_238 = come_decrement_ref_count2(result_238, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result326__;
    come_call_finalizer3(buf_235,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_238 = come_decrement_ref_count2(result_238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__;
void* right_value226;
void* right_value227;
struct list$1charph* result_240;
struct list$1charph* __result327__;
void* right_value228;
struct list$1charph* __result328__;
memset(&__result_obj__, 0, sizeof(void*));
right_value226 = (void*)0;
right_value227 = (void*)0;
memset(&result_240, 0, sizeof(struct list$1charph*));
right_value228 = (void*)0;
    result_240=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value227=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value226=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 2546, "list$1charph"))))))));
    come_call_finalizer3(right_value226,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value227,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(f==((void*)0)) {
        __result327__ = __result_obj__ = result_240;
        come_call_finalizer3(result_240,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result327__;
    }
    while(1) {
        char buf_241[1024];
        memset(&buf_241, 0, sizeof(char)        *(1024)        );
        if(fgets(buf_241,1024,f)==((void*)0)) {
            break;
        }
        list$1charph_push_back(result_240,(char*)come_increment_ref_count(((char*)(right_value228=__builtin_string(buf_241)))));
        right_value228 = come_decrement_ref_count2(right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result328__ = __result_obj__ = result_240;
    come_call_finalizer3(result_240,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result328__;
    come_call_finalizer3(result_240,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
int __result329__;
struct _IO_FILE* f_242;
int __result330__;
int __result331__;
memset(&f_242, 0, sizeof(struct _IO_FILE*));
    if(path==((void*)0)||mode==((void*)0)) {
        __result329__ = -1;
        return __result329__;
    }
    f_242=fopen(path,mode);
    if(f_242) {
        block(parent,f_242);
        fclose(f_242);
        __result330__ = 0;
        return __result330__;
    }
    __result331__ = -1;
    return __result331__;
}

char* charp_puts(char* self){
void* __result_obj__;
void* right_value229;
char* __result332__;
void* right_value230;
char* __result333__;
memset(&__result_obj__, 0, sizeof(void*));
right_value229 = (void*)0;
right_value230 = (void*)0;
    if(self==((void*)0)) {
        __result332__ = __result_obj__ = ((char*)(right_value229=__builtin_string("")));
        right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result332__;
    }
    puts(self);
    __result333__ = __result_obj__ = ((char*)(right_value230=__builtin_string(self)));
    right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result333__;
}

char* charp_print(char* self){
void* __result_obj__;
void* right_value231;
char* __result334__;
void* right_value232;
char* __result335__;
memset(&__result_obj__, 0, sizeof(void*));
right_value231 = (void*)0;
right_value232 = (void*)0;
    if(self==((void*)0)) {
        __result334__ = __result_obj__ = ((char*)(right_value231=__builtin_string("")));
        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result334__;
    }
    printf("%s",self);
    __result335__ = __result_obj__ = ((char*)(right_value232=__builtin_string(self)));
    right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result335__;
}

char* string_printf(char* self, ...){
void* __result_obj__;
void* right_value233;
char* __result336__;
char* msg2_243;
va_list args_244;
void* right_value234;
char* __result337__;
memset(&__result_obj__, 0, sizeof(void*));
right_value233 = (void*)0;
memset(&msg2_243, 0, sizeof(char*));
memset(&args_244, 0, sizeof(va_list));
right_value234 = (void*)0;
    if(self==((void*)0)) {
        __result336__ = __result_obj__ = ((char*)(right_value233=__builtin_string("")));
        right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result336__;
    }
    __builtin_va_start(args_244,self);
    vasprintf(&msg2_243,self,args_244);
    __builtin_va_end(args_244);
    printf("%s",msg2_243);
    free(msg2_243);
    __result337__ = __result_obj__ = ((char*)(right_value234=__builtin_string(self)));
    come_call_finalizer3((&args_244),va_list_finalize, 1, 0, 0, 0, (void*)0);
    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result337__;
    come_call_finalizer3((&args_244),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

char* charp_printf(char* self, ...){
void* __result_obj__;
void* right_value235;
char* __result338__;
char* msg2_245;
va_list args_246;
void* right_value236;
char* __result339__;
memset(&__result_obj__, 0, sizeof(void*));
right_value235 = (void*)0;
memset(&msg2_245, 0, sizeof(char*));
memset(&args_246, 0, sizeof(va_list));
right_value236 = (void*)0;
    if(self==((void*)0)) {
        __result338__ = __result_obj__ = ((char*)(right_value235=__builtin_string("")));
        right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result338__;
    }
    __builtin_va_start(args_246,self);
    vasprintf(&msg2_245,self,args_246);
    __builtin_va_end(args_246);
    printf("%s",msg2_245);
    free(msg2_245);
    __result339__ = __result_obj__ = ((char*)(right_value236=__builtin_string(self)));
    come_call_finalizer3((&args_246),va_list_finalize, 1, 0, 0, 0, (void*)0);
    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result339__;
    come_call_finalizer3((&args_246),va_list_finalize, 1, 0, 0, 0, (void*)0);
}

int int_printf(int self, char* msg){
int __result340__;
    printf(msg,self);
    __result340__ = self;
    return __result340__;
}

char* string_puts(char* self){
void* __result_obj__;
void* right_value237;
char* __result341__;
void* right_value238;
char* __result342__;
memset(&__result_obj__, 0, sizeof(void*));
right_value237 = (void*)0;
right_value238 = (void*)0;
    if(self==((void*)0)) {
        __result341__ = __result_obj__ = ((char*)(right_value237=__builtin_string("")));
        right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result341__;
    }
    puts(self);
    __result342__ = __result_obj__ = ((char*)(right_value238=__builtin_string(self)));
    right_value238 = come_decrement_ref_count2(right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result342__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_247;
memset(&i_247, 0, sizeof(int));
    for(    i_247=0;    i_247<self;    i_247++    ){
        block(parent,i_247);
    }
}

struct integer* integer_initialize(struct integer* self, long value){
void* __result_obj__;
struct integer* __result343__;
memset(&__result_obj__, 0, sizeof(void*));
    self->value=value;
    __result343__ = __result_obj__ = self;
    come_call_finalizer3(self,integer_finalize, 0, 0, 1, 0, (void*)0);
    return __result343__;
    come_call_finalizer3(self,integer_finalize, 0, 0, 1, 0, (void*)0);
}

static void integer_finalize(struct integer* self){
}

int integer_to_int(struct integer* self){
int __result344__;
    __result344__ = self->value;
    return __result344__;
}

struct integer* char_to_integer(char self){
void* __result_obj__;
void* right_value239;
void* right_value240;
struct integer* __result345__;
memset(&__result_obj__, 0, sizeof(void*));
right_value239 = (void*)0;
right_value240 = (void*)0;
    __result345__ = __result_obj__ = ((struct integer*)(right_value240=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value239=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2689, "integer")))),self)));
    come_call_finalizer3(right_value239,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value240,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result345__;
}

struct integer* short_to_integer(short short self){
void* __result_obj__;
void* right_value241;
void* right_value242;
struct integer* __result346__;
memset(&__result_obj__, 0, sizeof(void*));
right_value241 = (void*)0;
right_value242 = (void*)0;
    __result346__ = __result_obj__ = ((struct integer*)(right_value242=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value241=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2694, "integer")))),self)));
    come_call_finalizer3(right_value241,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value242,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result346__;
}

struct integer* int_to_integer(int self){
void* __result_obj__;
void* right_value243;
void* right_value244;
struct integer* __result347__;
memset(&__result_obj__, 0, sizeof(void*));
right_value243 = (void*)0;
right_value244 = (void*)0;
    __result347__ = __result_obj__ = ((struct integer*)(right_value244=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value243=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2699, "integer")))),self)));
    come_call_finalizer3(right_value243,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value244,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result347__;
}

struct integer* long_to_integer(long self){
void* __result_obj__;
void* right_value245;
void* right_value246;
struct integer* __result348__;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
right_value246 = (void*)0;
    __result348__ = __result_obj__ = ((struct integer*)(right_value246=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value245=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2704, "integer")))),self)));
    come_call_finalizer3(right_value245,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value246,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result348__;
}

int integer_compare(struct integer* left, struct integer* right){
int __result349__;
int __result350__;
int __result351__;
int __result352__;
    if(left->value<right->value) {
        __result349__ = -1;
        return __result349__;
    }
    else {
        if(left->value>right->value) {
            __result350__ = 1;
            return __result350__;
        }
        else {
            __result351__ = 0;
            return __result351__;
        }
    }
    __result352__ = 0;
    return __result352__;
}

_Bool integer_equals(struct integer* self, struct integer* right){
_Bool __result353__;
    __result353__ = self->value==right->value;
    return __result353__;
}

_Bool integer_operator_equals(struct integer* self, struct integer* right){
_Bool __result354__;
    __result354__ = self->value==right->value;
    return __result354__;
}

_Bool integer_operator_not_equals(struct integer* self, struct integer* right){
_Bool __result355__;
    __result355__ = self->value!=right->value;
    return __result355__;
}

struct integer* integer_operator_add(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value247;
void* right_value248;
struct integer* __result356__;
memset(&__result_obj__, 0, sizeof(void*));
right_value247 = (void*)0;
right_value248 = (void*)0;
    __result356__ = __result_obj__ = ((struct integer*)(right_value248=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value247=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2739, "integer")))),left->value+right->value)));
    come_call_finalizer3(right_value247,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value248,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result356__;
}

struct integer* integer_operator_sub(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value249;
void* right_value250;
struct integer* __result357__;
memset(&__result_obj__, 0, sizeof(void*));
right_value249 = (void*)0;
right_value250 = (void*)0;
    __result357__ = __result_obj__ = ((struct integer*)(right_value250=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value249=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2744, "integer")))),left->value-right->value)));
    come_call_finalizer3(right_value249,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value250,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result357__;
}

struct integer* integer_operator_mult(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value251;
void* right_value252;
struct integer* __result358__;
memset(&__result_obj__, 0, sizeof(void*));
right_value251 = (void*)0;
right_value252 = (void*)0;
    __result358__ = __result_obj__ = ((struct integer*)(right_value252=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value251=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2749, "integer")))),left->value*right->value)));
    come_call_finalizer3(right_value251,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value252,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result358__;
}

struct integer* integer_operator_div(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value253;
void* right_value254;
struct integer* __result359__;
memset(&__result_obj__, 0, sizeof(void*));
right_value253 = (void*)0;
right_value254 = (void*)0;
    __result359__ = __result_obj__ = ((struct integer*)(right_value254=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value253=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2754, "integer")))),left->value/right->value)));
    come_call_finalizer3(right_value253,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value254,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result359__;
}

struct integer* integer_operator_mod(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value255;
void* right_value256;
struct integer* __result360__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
right_value256 = (void*)0;
    __result360__ = __result_obj__ = ((struct integer*)(right_value256=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value255=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2759, "integer")))),left->value%right->value)));
    come_call_finalizer3(right_value255,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value256,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result360__;
}

struct integer* integer_operator_lshift(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value257;
void* right_value258;
struct integer* __result361__;
memset(&__result_obj__, 0, sizeof(void*));
right_value257 = (void*)0;
right_value258 = (void*)0;
    __result361__ = __result_obj__ = ((struct integer*)(right_value258=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value257=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2764, "integer")))),left->value<<right->value)));
    come_call_finalizer3(right_value257,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value258,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result361__;
}

struct integer* integer_operator_rshift(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value259;
void* right_value260;
struct integer* __result362__;
memset(&__result_obj__, 0, sizeof(void*));
right_value259 = (void*)0;
right_value260 = (void*)0;
    __result362__ = __result_obj__ = ((struct integer*)(right_value260=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value259=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2769, "integer")))),left->value>>right->value)));
    come_call_finalizer3(right_value259,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value260,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result362__;
}

struct integer* integer_operator_gteq(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value261;
void* right_value262;
struct integer* __result363__;
memset(&__result_obj__, 0, sizeof(void*));
right_value261 = (void*)0;
right_value262 = (void*)0;
    __result363__ = __result_obj__ = ((struct integer*)(right_value262=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value261=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2774, "integer")))),left->value>=right->value)));
    come_call_finalizer3(right_value261,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value262,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result363__;
}

struct integer* integer_operator_lteq(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value263;
void* right_value264;
struct integer* __result364__;
memset(&__result_obj__, 0, sizeof(void*));
right_value263 = (void*)0;
right_value264 = (void*)0;
    __result364__ = __result_obj__ = ((struct integer*)(right_value264=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value263=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2779, "integer")))),left->value<=right->value)));
    come_call_finalizer3(right_value263,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value264,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result364__;
}

struct integer* integer_operator_lt(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value265;
void* right_value266;
struct integer* __result365__;
memset(&__result_obj__, 0, sizeof(void*));
right_value265 = (void*)0;
right_value266 = (void*)0;
    __result365__ = __result_obj__ = ((struct integer*)(right_value266=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value265=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2784, "integer")))),left->value<right->value)));
    come_call_finalizer3(right_value265,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value266,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result365__;
}

struct integer* integer_operator_gt(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value267;
void* right_value268;
struct integer* __result366__;
memset(&__result_obj__, 0, sizeof(void*));
right_value267 = (void*)0;
right_value268 = (void*)0;
    __result366__ = __result_obj__ = ((struct integer*)(right_value268=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value267=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2789, "integer")))),left->value>right->value)));
    come_call_finalizer3(right_value267,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value268,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result366__;
}

struct integer* integer_operator_and(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value269;
void* right_value270;
struct integer* __result367__;
memset(&__result_obj__, 0, sizeof(void*));
right_value269 = (void*)0;
right_value270 = (void*)0;
    __result367__ = __result_obj__ = ((struct integer*)(right_value270=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value269=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2794, "integer")))),left->value&right->value)));
    come_call_finalizer3(right_value269,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value270,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result367__;
}

struct integer* integer_operator_xor(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value271;
void* right_value272;
struct integer* __result368__;
memset(&__result_obj__, 0, sizeof(void*));
right_value271 = (void*)0;
right_value272 = (void*)0;
    __result368__ = __result_obj__ = ((struct integer*)(right_value272=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value271=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2799, "integer")))),left->value^right->value)));
    come_call_finalizer3(right_value271,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value272,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result368__;
}

struct integer* integer_operator_or(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value273;
void* right_value274;
struct integer* __result369__;
memset(&__result_obj__, 0, sizeof(void*));
right_value273 = (void*)0;
right_value274 = (void*)0;
    __result369__ = __result_obj__ = ((struct integer*)(right_value274=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value273=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2804, "integer")))),left->value|right->value)));
    come_call_finalizer3(right_value273,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value274,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result369__;
}

struct integer* integer_operator_andand(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value275;
void* right_value276;
struct integer* __result370__;
memset(&__result_obj__, 0, sizeof(void*));
right_value275 = (void*)0;
right_value276 = (void*)0;
    __result370__ = __result_obj__ = ((struct integer*)(right_value276=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value275=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2809, "integer")))),left->value&&right->value)));
    come_call_finalizer3(right_value275,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value276,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result370__;
}

struct integer* integer_operator_oror(struct integer* left, struct integer* right){
void* __result_obj__;
void* right_value277;
void* right_value278;
struct integer* __result371__;
memset(&__result_obj__, 0, sizeof(void*));
right_value277 = (void*)0;
right_value278 = (void*)0;
    __result371__ = __result_obj__ = ((struct integer*)(right_value278=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(right_value277=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2814, "integer")))),left->value||right->value)));
    come_call_finalizer3(right_value277,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value278,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result371__;
}

