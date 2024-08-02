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
struct sNullNode
{
    int sline;
    char* sname;
};
struct sNilNode
{
    int sline;
    char* sname;
};
struct sAddNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sSubNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};
struct sMultNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sDivNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sModNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sLShiftNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sRShiftNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sGtEqNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sLtEqNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sLtNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sGtNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sEqNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sNotEqNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sEq2Node
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sNotEq2Node
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sAndNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sXOrNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sOrNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sAndAndNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sOrOrNode
{
    int sline;
    char* sname;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sCommaNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
};
struct sConditionalNode
{
    int sline;
    char* sname;
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
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

struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);

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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);

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
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1sRightValueObjectpp_finalize(struct list$1sRightValueObjectp* self);
static void list_item$1sRightValueObjectpp_finalize(struct list_item$1sRightValueObjectp* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info);

char* sNullNode_kind(struct sNullNode* self);

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
struct sNode* create_null_node(struct sInfo* info);

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info);

char* sNilNode_kind(struct sNilNode* self);

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info);

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sAddNode_kind(struct sAddNode* self);

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sSubNode_kind(struct sSubNode* self);

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sMultNode_kind(struct sMultNode* self);

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info);

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sDivNode_kind(struct sDivNode* self);

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info);

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sModNode_kind(struct sModNode* self);

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info);

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sLShiftNode_kind(struct sLShiftNode* self);

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info);

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sRShiftNode_kind(struct sRShiftNode* self);

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info);

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sGtEqNode_kind(struct sGtEqNode* self);

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info);

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sLtEqNode_kind(struct sLtEqNode* self);

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info);

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sLtNode_kind(struct sLtNode* self);

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info);

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sGtNode_kind(struct sGtNode* self);

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info);

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sEqNode_kind(struct sEqNode* self);

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info);

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sNotEqNode_kind(struct sNotEqNode* self);

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info);

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sEq2Node_kind(struct sEq2Node* self);

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info);

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sNotEq2Node_kind(struct sNotEq2Node* self);

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info);

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sAndNode_kind(struct sAndNode* self);

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info);

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sXOrNode_kind(struct sXOrNode* self);

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info);

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sOrNode_kind(struct sOrNode* self);

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info);

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sAndAndNode_kind(struct sAndAndNode* self);

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info);

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

char* sOrOrNode_kind(struct sOrOrNode* self);

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info);

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

char* sCommaNode_kind(struct sCommaNode* self);

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info);

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);

char* sConditionalNode_kind(struct sConditionalNode* self);

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info);

struct sNode* mult_exp(struct sInfo* info);

static void sMultNode_finalize(struct sMultNode* self);
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static void sDivNode_finalize(struct sDivNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static void sModNode_finalize(struct sModNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo* info);

static void sAddNode_finalize(struct sAddNode* self);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static void sSubNode_finalize(struct sSubNode* self);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo* info);

static void sLShiftNode_finalize(struct sLShiftNode* self);
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static void sRShiftNode_finalize(struct sRShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo* info);

static void sGtEqNode_finalize(struct sGtEqNode* self);
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static void sLtEqNode_finalize(struct sLtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static void sGtNode_finalize(struct sGtNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
static void sLtNode_finalize(struct sLtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
struct sNode* eq_exp(struct sInfo* info);

static void sEq2Node_finalize(struct sEq2Node* self);
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static void sEqNode_finalize(struct sEqNode* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static void sNotEqNode_finalize(struct sNotEqNode* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo* info);

static void sAndNode_finalize(struct sAndNode* self);
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo* info);

static void sXOrNode_finalize(struct sXOrNode* self);
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo* info);

static void sOrNode_finalize(struct sOrNode* self);
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo* info);

static void sAndAndNode_finalize(struct sAndAndNode* self);
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo* info);

static void sOrOrNode_finalize(struct sOrOrNode* self);
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* comma_exp(struct sInfo* info);

static void sCommaNode_finalize(struct sCommaNode* self);
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* conditional_exp(struct sInfo* info);

static void sConditionalNode_finalize(struct sConditionalNode* self);
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* expression_v13(struct sInfo* info);

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);

static void sNullNode_finalize(struct sNullNode* self);
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
static void sNilNode_finalize(struct sNilNode* self);
static struct sNilNode* sNilNode_clone(struct sNilNode* self);
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










_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info){
void* right_value114;
struct sType* generics_type_47;
struct sType* __dec_obj35;
struct sClass* klass_78;
char* class_name_79;
struct sFun* operator_fun_80;
char* fun_name2_81;
void* right_value115;
char* none_generics_name_82;
void* right_value116;
struct sType* obj_type_83;
void* right_value117;
char* __dec_obj36;
void* right_value118;
char* fun_name3_84;
struct sGenericsFun* generics_fun_85;
void* right_value119;
_Bool _if_conditional1;
_Bool __result67__;
void* right_value120;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_91;
char* fun_name_92;
void* right_value121;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun2_93;
char* fun_name2_94;
void* right_value122;
struct tuple2$2sFunpcharph* multiple_assign_var3;
struct sFun* fun_95;
char* fun_name_96;
void* right_value123;
struct tuple2$2sFunpcharph* multiple_assign_var4;
struct sFun* fun2_97;
char* fun_name2_98;
void* right_value124;
char* __dec_obj37;
int i_99;
void* right_value125;
char* new_fun_name_100;
void* right_value126;
char* __dec_obj38;
_Bool result_101;
void* right_value127;
void* right_value128;
struct CVALUE* come_value_102;
char* left_value2_105;
void* right_value129;
void* right_value130;
void* right_value131;
char* __dec_obj39;
void* right_value132;
char* __dec_obj40;
char* right_value2_109;
void* right_value133;
void* right_value134;
void* right_value135;
char* __dec_obj41;
void* right_value136;
char* __dec_obj42;
void* right_value137;
void* right_value138;
void* right_value139;
void* right_value140;
char* __dec_obj43;
void* right_value141;
struct sType* type2_110;
void* right_value142;
struct sType* type3_111;
void* right_value143;
struct sType* __dec_obj44;
void* right_value144;
void* right_value145;
char* __dec_obj45;
void* right_value146;
char* __dec_obj46;
_Bool __result75__;
right_value114 = (void*)0;
memset(&generics_type_47, 0, sizeof(struct sType*));
memset(&klass_78, 0, sizeof(struct sClass*));
memset(&class_name_79, 0, sizeof(char*));
memset(&operator_fun_80, 0, sizeof(struct sFun*));
memset(&fun_name2_81, 0, sizeof(char*));
right_value115 = (void*)0;
memset(&none_generics_name_82, 0, sizeof(char*));
right_value116 = (void*)0;
memset(&obj_type_83, 0, sizeof(struct sType*));
right_value117 = (void*)0;
right_value118 = (void*)0;
memset(&fun_name3_84, 0, sizeof(char*));
memset(&generics_fun_85, 0, sizeof(struct sGenericsFun*));
right_value119 = (void*)0;
right_value120 = (void*)0;
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
right_value124 = (void*)0;
memset(&i_99, 0, sizeof(int));
right_value125 = (void*)0;
memset(&new_fun_name_100, 0, sizeof(char*));
right_value126 = (void*)0;
memset(&result_101, 0, sizeof(_Bool));
right_value127 = (void*)0;
right_value128 = (void*)0;
memset(&come_value_102, 0, sizeof(struct CVALUE*));
memset(&left_value2_105, 0, sizeof(char*));
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
right_value132 = (void*)0;
memset(&right_value2_109, 0, sizeof(char*));
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
right_value140 = (void*)0;
right_value141 = (void*)0;
memset(&type2_110, 0, sizeof(struct sType*));
right_value142 = (void*)0;
memset(&type3_111, 0, sizeof(struct sType*));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
    generics_type_47=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(type))));
    come_call_finalizer3(right_value114,sType_finalize, 0, 1, 0, 0, (void*)0);
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
        none_generics_name_82=(char*)come_increment_ref_count(((char*)(right_value115=get_none_generics_name(type->mClass->mName))));
        right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        obj_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=solve_generics(type,info->generics_type,info))));
        come_call_finalizer3(right_value116,sType_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj36=fun_name2_81;
        fun_name2_81=(char*)come_increment_ref_count(((char*)(right_value117=create_method_name(obj_type_83,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value117 = come_decrement_ref_count2(right_value117, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_name3_84=(char*)come_increment_ref_count(((char*)(right_value118=xsprintf("%s_%s",none_generics_name_82,fun_name))));
        right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        generics_fun_85=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_84,((void*)0));
        if(generics_fun_85) {
            if(_if_conditional1=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value119=__builtin_string(fun_name2_81)))),generics_fun_85,obj_type_83,info),            right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, (void*)0),
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
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value120=create_equals_automatically(obj_type_83,"equals",info)));
                fun_91=multiple_assign_var1->v1;
                fun_name_92=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                come_call_finalizer3(right_value120,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value121=create_operator_equals_automatically(obj_type_83,"operator_equals",info)));
                fun2_93=multiple_assign_var2->v1;
                fun_name2_94=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(right_value121,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                operator_fun_80=fun2_93;
                fun_name_92 = come_decrement_ref_count2(fun_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_94 = come_decrement_ref_count2(fun_name2_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(charp_operator_equals(fun_name,"operator_not_equals")) {
                    multiple_assign_var3=((struct tuple2$2sFunpcharph*)(right_value122=create_equals_automatically(obj_type_83,"not_equals",info)));
                    fun_95=multiple_assign_var3->v1;
                    fun_name_96=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    come_call_finalizer3(right_value122,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                    multiple_assign_var4=((struct tuple2$2sFunpcharph*)(right_value123=create_operator_not_equals_automatically(obj_type_83,"operator_not_equals",info)));
                    fun2_97=multiple_assign_var4->v1;
                    fun_name2_98=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    come_call_finalizer3(right_value123,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
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
        fun_name2_81=(char*)come_increment_ref_count(((char*)(right_value124=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        for(        i_99=128-1;        i_99>=1;        i_99--        ){
            new_fun_name_100=(char*)come_increment_ref_count(((char*)(right_value125=xsprintf("%s_v%d",fun_name2_81,i_99))));
            right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            operator_fun_80=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_100);
            if(operator_fun_80) {
                __dec_obj38=fun_name2_81;
                fun_name2_81=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(new_fun_name_100))));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
    if(operator_fun_80&&(list$1sTypeph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult"))) {
        come_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value128=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 77, "CVALUE"))))))));
        come_call_finalizer3(right_value127,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value128,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        check_assign_type(((char*)(right_value130=xsprintf("\%s is assigned to",((char*)(right_value129=string_to_string(fun_name2_81)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,0), "13op.c", 79, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        right_value129 = come_decrement_ref_count2(right_value129, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,0), "13op.c", 80, 1))->mHeap&&left_value->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,0), "13op.c", 81, 2)),left_value->type,left_value,info);
            __dec_obj39=left_value2_105;
            left_value2_105=(char*)come_increment_ref_count(((char*)(right_value131=xsprintf("%s",left_value->c_value))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            __dec_obj40=left_value2_105;
            left_value2_105=(char*)come_increment_ref_count(((char*)(right_value132=string_clone(left_value->c_value))));
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        check_assign_type(((char*)(right_value134=xsprintf("\%s is assigned to",((char*)(right_value133=string_to_string(fun_name2_81)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,1), "13op.c", 88, 3)),right_value->type,right_value,(_Bool)0,(_Bool)1,info);
        right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,1), "13op.c", 89, 4))->mHeap&&right_value->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_80->mParamTypes,1), "13op.c", 90, 5)),right_value->type,right_value,info);
            __dec_obj41=right_value2_109;
            right_value2_109=(char*)come_increment_ref_count(((char*)(right_value135=xsprintf("%s",right_value->c_value))));
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            __dec_obj42=right_value2_109;
            right_value2_109=(char*)come_increment_ref_count(((char*)(right_value136=string_clone(right_value->c_value))));
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        __dec_obj43=come_value_102->c_value;
        come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("\%s(\%s,\%s)",((char*)(right_value137=string_to_string(fun_name2_81))),((char*)(right_value138=string_to_string(left_value2_105))),((char*)(right_value139=string_to_string(right_value2_109)))))));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        type2_110=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(operator_fun_80->mResultType))));
        come_call_finalizer3(right_value141,sType_finalize, 0, 1, 0, 0, (void*)0);
        type3_111=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=solve_generics(type2_110,generics_type_47,info))));
        come_call_finalizer3(right_value142,sType_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj44=come_value_102->type;
        come_value_102->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_clone(type3_111))));
        come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value143,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_102->var=((void*)0);
        if(type3_111->mHeap) {
            append_object_to_right_values2(come_value_102,(struct sType*)come_increment_ref_count(type3_111),info);
        }
        if(!break_guard&&type3_111->mGuardValue&&type3_111->mPointerNum>0) {
            __dec_obj45=come_value_102->c_value;
            come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value144=make_type_name_string(type3_111,(_Bool)0,(_Bool)0,(_Bool)0,info))),come_value_102->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        __dec_obj46=come_value_102->c_value;
        come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value146=append_stackframe(come_value_102->c_value,come_value_102->type,info))));
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_last_code(info,"%s;\n",come_value_102->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
        result_101=(_Bool)1;
        come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_105 = come_decrement_ref_count2(left_value2_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_109 = come_decrement_ref_count2(right_value2_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_110,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_111,sType_finalize, 0, 0, 0, 0, (void*)0);
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
void* right_value79;
struct sType* result_48;
void* right_value86;
struct list$1sTypeph* __dec_obj15;
void* right_value89;
struct tuple1$1sTypeph* __dec_obj17;
void* right_value90;
struct tuple1$1sTypeph* __dec_obj18;
void* right_value91;
char* __dec_obj19;
void* right_value92;
struct list$1sTypeph* __dec_obj20;
void* right_value100;
struct list$1sNodeph* __dec_obj24;
void* right_value101;
struct list$1sTypeph* __dec_obj25;
void* right_value108;
struct list$1charph* __dec_obj29;
void* right_value109;
struct tuple1$1sTypeph* __dec_obj30;
void* right_value110;
struct sNode* __dec_obj31;
void* right_value111;
struct sNode* __dec_obj32;
void* right_value112;
char* __dec_obj33;
void* right_value113;
char* __dec_obj34;
struct sType* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
memset(&result_48, 0, sizeof(struct sType*));
right_value86 = (void*)0;
right_value89 = (void*)0;
right_value90 = (void*)0;
right_value91 = (void*)0;
right_value92 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
        if(self==(void*)0) {
            __result45__ = __result_obj__ = (void*)0;
            return __result45__;
        }
        result_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer3(right_value79,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(self!=((void*)0)) {
            result_48->mClass=self->mClass;
        }
        if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
            __dec_obj15=result_48->mMultipleTypes;
            result_48->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value86=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer3(__dec_obj15,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value86,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
            __dec_obj17=result_48->mNoSolvedGenericsType;
            result_48->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value89=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer3(__dec_obj17,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value89,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
            __dec_obj18=result_48->mOriginalLoadVarType;
            result_48->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value90=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value90,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
            __dec_obj19=result_48->mGenericsName;
            result_48->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value91=string_clone(self->mGenericsName))));
            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
            __dec_obj20=result_48->mGenericsTypes;
            result_48->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value92=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value92,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
            __dec_obj24=result_48->mArrayNum;
            result_48->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value100=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value100,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_48->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
            __dec_obj25=result_48->mParamTypes;
            result_48->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value101=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value101,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
            __dec_obj29=result_48->mParamNames;
            result_48->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value108=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value108,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
            __dec_obj30=result_48->mResultType;
            result_48->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value109=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value109,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        if(self!=((void*)0)) {
            result_48->mVarArgs=self->mVarArgs;
        }
        if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
            __dec_obj31=result_48->mAlignas;
            result_48->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value110=sNode_clone(self->mAlignas))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value110) { right_value110 = come_decrement_ref_count2(right_value110, ((struct sNode*)right_value110)->finalize, ((struct sNode*)right_value110)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
            result_48->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value111=sNode_clone(self->mSizeNum))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value111) { right_value111 = come_decrement_ref_count2(right_value111, ((struct sNode*)right_value111)->finalize, ((struct sNode*)right_value111)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(self!=((void*)0)) {
            result_48->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(self!=((void*)0)) {
            result_48->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
            __dec_obj33=result_48->mOriginalTypeName;
            result_48->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value112=string_clone(self->mOriginalTypeName))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value112 = come_decrement_ref_count2(right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
            result_48->mAsmName=(char*)come_increment_ref_count(((char*)(right_value113=string_clone(self->mAsmName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result46__;
void* right_value80;
void* right_value81;
struct list$1sTypeph* result_55;
struct list_item$1sTypeph* it_56;
void* right_value85;
struct list$1sTypeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value80 = (void*)0;
right_value81 = (void*)0;
memset(&result_55, 0, sizeof(struct list$1sTypeph*));
memset(&it_56, 0, sizeof(struct list_item$1sTypeph*));
right_value85 = (void*)0;
                if(self==((void*)0)) {
                    __result46__ = __result_obj__ = ((void*)0);
                    return __result46__;
                }
                result_55=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value81=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value80=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))))));
                come_call_finalizer3(right_value80,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value81,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_56=self->head;
                while(it_56!=((void*)0)) {
                    list$1sTypeph_add(result_55,(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(it_56->item)))));
                    come_call_finalizer3(right_value85,sType_finalize, 0, 1, 0, 0, __result_obj__);
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

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* right_value82;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj12;
void* right_value83;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj13;
void* right_value84;
struct list_item$1sTypeph* litem_59;
struct sType* __dec_obj14;
struct list$1sTypeph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value82 = (void*)0;
memset(&litem_57, 0, sizeof(struct list_item$1sTypeph*));
right_value83 = (void*)0;
memset(&litem_58, 0, sizeof(struct list_item$1sTypeph*));
right_value84 = (void*)0;
memset(&litem_59, 0, sizeof(struct list_item$1sTypeph*));
                        if(self->len==0) {
                            litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value82=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
                            come_call_finalizer3(right_value82,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
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
                                litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value83,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_58->prev=self->head;
                                litem_58->next=((void*)0);
                                __dec_obj13=litem_58->item;
                                litem_58->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_58;
                                self->head->next=litem_58;
                            }
                            else {
                                litem_59=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
                                come_call_finalizer3(right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
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
void* right_value87;
struct tuple1$1sTypeph* result_62;
void* right_value88;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value87 = (void*)0;
memset(&result_62, 0, sizeof(struct tuple1$1sTypeph*));
right_value88 = (void*)0;
                if(self==(void*)0) {
                    __result50__ = __result_obj__ = (void*)0;
                    return __result50__;
                }
                result_62=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value87=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer3(right_value87,tuple1$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)&&self->v1!=((void*)0)) {
                    __dec_obj16=result_62->v1;
                    result_62->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(self->v1))));
                    come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value88,sType_finalize, 0, 1, 0, 0, __result_obj__);
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
void* right_value93;
void* right_value94;
struct list$1sNodeph* result_63;
struct list_item$1sNodeph* it_64;
void* right_value99;
struct list$1sNodeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&result_63, 0, sizeof(struct list$1sNodeph*));
memset(&it_64, 0, sizeof(struct list_item$1sNodeph*));
right_value99 = (void*)0;
                if(self==((void*)0)) {
                    __result52__ = __result_obj__ = ((void*)0);
                    return __result52__;
                }
                result_63=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value94=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value93=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))))));
                come_call_finalizer3(right_value93,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value94,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                it_64=self->head;
                while(it_64!=((void*)0)) {
                    list$1sNodeph_add(result_63,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value99=sNode_clone(it_64->item)))));
                    if(right_value99) { right_value99 = come_decrement_ref_count2(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
void* right_value95;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj21;
void* right_value96;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj22;
void* right_value97;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
memset(&litem_65, 0, sizeof(struct list_item$1sNodeph*));
right_value96 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
right_value97 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
                        if(self->len==0) {
                            litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value95=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
                            come_call_finalizer3(right_value95,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
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
                                litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value96,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_66->prev=self->head;
                                litem_66->next=((void*)0);
                                __dec_obj22=litem_66->item;
                                litem_66->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_66;
                                self->head->next=litem_66;
                            }
                            else {
                                litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
                                come_call_finalizer3(right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
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
void* right_value98;
struct sNode* result_68;
struct sNode* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&result_68, 0, sizeof(struct sNode*));
                        if(self==(void*)0) {
                            __result55__ = __result_obj__ = (void*)0;
                            return __result55__;
                        }
                        result_68=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value98=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value98) { right_value98 = come_decrement_ref_count2(right_value98, ((struct sNode*)right_value98)->finalize, ((struct sNode*)right_value98)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
void* right_value102;
void* right_value103;
struct list$1charph* result_71;
struct list_item$1charph* it_72;
void* right_value107;
struct list$1charph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
right_value103 = (void*)0;
memset(&result_71, 0, sizeof(struct list$1charph*));
memset(&it_72, 0, sizeof(struct list_item$1charph*));
right_value107 = (void*)0;
                if(self==((void*)0)) {
                    __result58__ = __result_obj__ = ((void*)0);
                    return __result58__;
                }
                result_71=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value103=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value102=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))))));
                come_call_finalizer3(right_value102,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value103,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                it_72=self->head;
                while(it_72!=((void*)0)) {
                    list$1charph_add(result_71,(char*)come_increment_ref_count(((char*)(right_value107=string_clone(it_72->item)))));
                    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
void* right_value104;
struct list_item$1charph* litem_73;
char* __dec_obj26;
void* right_value105;
struct list_item$1charph* litem_74;
char* __dec_obj27;
void* right_value106;
struct list_item$1charph* litem_75;
char* __dec_obj28;
struct list$1charph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
memset(&litem_73, 0, sizeof(struct list_item$1charph*));
right_value105 = (void*)0;
memset(&litem_74, 0, sizeof(struct list_item$1charph*));
right_value106 = (void*)0;
memset(&litem_75, 0, sizeof(struct list_item$1charph*));
                        if(self->len==0) {
                            litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value104=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
                            come_call_finalizer3(right_value104,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
                                litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value105=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
                                come_call_finalizer3(right_value105,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                                litem_74->prev=self->head;
                                litem_74->next=((void*)0);
                                __dec_obj27=litem_74->item;
                                litem_74->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_74;
                                self->head->next=litem_74;
                            }
                            else {
                                litem_75=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
                                come_call_finalizer3(right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
memset(&hash_86, 0, sizeof(unsigned int));
memset(&it_87, 0, sizeof(unsigned int));
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
memset(&hash_89, 0, sizeof(unsigned int));
memset(&it_90, 0, sizeof(unsigned int));
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
            if(self!=((void*)0)&&self->right_value_objects!=((void*)0)) {
                come_call_finalizer3(self->right_value_objects,list$1sRightValueObjectpp_finalize, 0, 0, 0, 0, (void*)0);
            }
}

static void list$1sRightValueObjectpp_finalize(struct list$1sRightValueObjectp* self){
struct list_item$1sRightValueObjectp* it_103;
struct list_item$1sRightValueObjectp* prev_it_104;
memset(&it_103, 0, sizeof(struct list_item$1sRightValueObjectp*));
memset(&prev_it_104, 0, sizeof(struct list_item$1sRightValueObjectp*));
                    it_103=self->head;
                    while(it_103!=((void*)0)) {
                        prev_it_104=it_103;
                        it_103=it_103->next;
                        come_call_finalizer3(prev_it_104,list_item$1sRightValueObjectpp_finalize, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sRightValueObjectpp_finalize(struct list_item$1sRightValueObjectp* self){
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
struct list_item$1sTypeph* it_106;
int i_107;
struct sType* __result72__;
struct sType* default_value_108;
struct sType* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_106, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_107, 0, sizeof(int));
memset(&default_value_108, 0, sizeof(struct sType*));
            if(position<0) {
                position+=self->len;
            }
            it_106=self->head;
            i_107=0;
            while(it_106!=((void*)0)) {
                if(position==i_107) {
                    __result72__ = __result_obj__ = it_106->item;
                    return __result72__;
                }
                it_106=it_106->next;
                i_107++;
            }
            memset(&default_value_108,0,sizeof(struct sType*));
            __result73__ = __result_obj__ = default_value_108;
            come_call_finalizer3(default_value_108,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result73__;
            come_call_finalizer3(default_value_108,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
void* right_value147;
struct list_item$1CVALUEph* litem_112;
struct CVALUE* __dec_obj47;
void* right_value148;
struct list_item$1CVALUEph* litem_113;
struct CVALUE* __dec_obj48;
void* right_value149;
struct list_item$1CVALUEph* litem_114;
struct CVALUE* __dec_obj49;
struct list$1CVALUEph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value147 = (void*)0;
memset(&litem_112, 0, sizeof(struct list_item$1CVALUEph*));
right_value148 = (void*)0;
memset(&litem_113, 0, sizeof(struct list_item$1CVALUEph*));
right_value149 = (void*)0;
memset(&litem_114, 0, sizeof(struct list_item$1CVALUEph*));
            if(self->len==0) {
                litem_112=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value147=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 219, "list_item$1CVALUEph"))));
                come_call_finalizer3(right_value147,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                litem_112->prev=((void*)0);
                litem_112->next=((void*)0);
                __dec_obj47=litem_112->item;
                litem_112->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer3(__dec_obj47,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                self->tail=litem_112;
                self->head=litem_112;
            }
            else {
                if(self->len==1) {
                    litem_113=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value148=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 229, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value148,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_113->prev=self->head;
                    litem_113->next=((void*)0);
                    __dec_obj48=litem_113->item;
                    litem_113->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj48,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_113;
                    self->head->next=litem_113;
                }
                else {
                    litem_114=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value149=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 239, "list_item$1CVALUEph"))));
                    come_call_finalizer3(right_value149,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
                    litem_114->prev=self->tail;
                    litem_114->next=((void*)0);
                    __dec_obj49=litem_114->item;
                    litem_114->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer3(__dec_obj49,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_114;
                    self->tail=litem_114;
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

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value150;
struct sNullNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
    ((struct sNodeBase*)(right_value150=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value150,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result76__ = __result_obj__ = self;
    come_call_finalizer3(self,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result76__;
    come_call_finalizer3(self,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sNullNode_kind(struct sNullNode* self){
void* __result_obj__;
void* right_value151;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
    __result77__ = __result_obj__ = ((char*)(right_value151=__builtin_string("sNullNode")));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result77__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* right_value152;
void* right_value153;
struct CVALUE* come_value_115;
void* right_value154;
char* __dec_obj50;
void* right_value155;
void* right_value156;
struct sType* __dec_obj51;
_Bool __result78__;
right_value152 = (void*)0;
right_value153 = (void*)0;
memset(&come_value_115, 0, sizeof(struct CVALUE*));
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
    come_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value153=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value152=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 140, "CVALUE"))))))));
    come_call_finalizer3(right_value152,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value153,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj50=come_value_115->c_value;
    come_value_115->c_value=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("((void*)0)"))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj51=come_value_115->type;
    come_value_115->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value155=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 143, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj51,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value155,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value156,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_115->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_115->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_115));
    __result78__ = (_Bool)1;
    come_call_finalizer3(come_value_115,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result78__;
    come_call_finalizer3(come_value_115,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNodeBase_finalize(struct sNodeBase* self){
        if(self!=((void*)0)&&self->sname!=((void*)0)) {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

struct sNode* create_null_node(struct sInfo* info){
void* __result_obj__;
void* right_value157;
void* right_value158;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* right_value161;
struct sNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value161 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 156, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNullNode*)(right_value158=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value157=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 156, "sNullNode")))),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result81__ = __result_obj__ = ((struct sNode*)(right_value161=_inf_value1));
    come_call_finalizer3(right_value157,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(right_value158,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(right_value161) { right_value161 = come_decrement_ref_count2(right_value161, ((struct sNode*)right_value161)->finalize, ((struct sNode*)right_value161)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result81__;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value162;
struct sNilNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
    ((struct sNodeBase*)(right_value162=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value162,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result82__ = __result_obj__ = self;
    come_call_finalizer3(self,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result82__;
    come_call_finalizer3(self,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
}

char* sNilNode_kind(struct sNilNode* self){
void* __result_obj__;
void* right_value163;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
    __result83__ = __result_obj__ = ((char*)(right_value163=__builtin_string("sNilNode")));
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result83__;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* right_value164;
void* right_value165;
struct CVALUE* come_value_117;
void* right_value166;
char* __dec_obj53;
void* right_value167;
void* right_value168;
struct sType* __dec_obj54;
_Bool __result84__;
right_value164 = (void*)0;
right_value165 = (void*)0;
memset(&come_value_117, 0, sizeof(struct CVALUE*));
right_value166 = (void*)0;
right_value167 = (void*)0;
right_value168 = (void*)0;
    come_value_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value165=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value164=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 173, "CVALUE"))))))));
    come_call_finalizer3(right_value164,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value165,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj53=come_value_117->c_value;
    come_value_117->c_value=(char*)come_increment_ref_count(((char*)(right_value166=xsprintf("((void*)0)"))));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj54=come_value_117->type;
    come_value_117->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value167=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 176, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value167,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value168,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_117->type->mNullValue=(_Bool)1;
    come_value_117->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_117->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_117));
    __result84__ = (_Bool)1;
    come_call_finalizer3(come_value_117,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result84__;
    come_call_finalizer3(come_value_117,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value169;
void* right_value170;
struct sNode* __dec_obj55;
void* right_value171;
struct sNode* __dec_obj56;
struct sAddNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
    ((struct sNodeBase*)(right_value169=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value169,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj55=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value170=sNode_clone(left))));
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value170) { right_value170 = come_decrement_ref_count2(right_value170, ((struct sNode*)right_value170)->finalize, ((struct sNode*)right_value170)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj56=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value171=sNode_clone(right))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value171) { right_value171 = come_decrement_ref_count2(right_value171, ((struct sNode*)right_value171)->finalize, ((struct sNode*)right_value171)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result85__ = __result_obj__ = self;
    come_call_finalizer3(self,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result85__;
    come_call_finalizer3(self,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sAddNode_kind(struct sAddNode* self){
void* __result_obj__;
void* right_value172;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value172 = (void*)0;
    __result86__ = __result_obj__ = ((char*)(right_value172=__builtin_string("sAddNode")));
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result86__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
struct sNode* left_node_118;
void* right_value173;
struct CVALUE* left_value_119;
struct sNode* right_node_120;
_Bool __result87__;
void* right_value174;
struct CVALUE* right_value_121;
struct sType* type_122;
char* fun_name_123;
_Bool calling_fun_124;
void* right_value175;
struct sType* result_type_125;
void* right_value176;
struct sType* __dec_obj57;
void* right_value177;
void* right_value178;
struct CVALUE* come_value_126;
void* right_value179;
char* __dec_obj58;
void* right_value180;
struct sType* __dec_obj59;
_Bool __result88__;
memset(&left_node_118, 0, sizeof(struct sNode*));
right_value173 = (void*)0;
memset(&left_value_119, 0, sizeof(struct CVALUE*));
memset(&right_node_120, 0, sizeof(struct sNode*));
right_value174 = (void*)0;
memset(&right_value_121, 0, sizeof(struct CVALUE*));
memset(&type_122, 0, sizeof(struct sType*));
memset(&fun_name_123, 0, sizeof(char*));
memset(&calling_fun_124, 0, sizeof(_Bool));
right_value175 = (void*)0;
memset(&result_type_125, 0, sizeof(struct sType*));
right_value176 = (void*)0;
right_value177 = (void*)0;
right_value178 = (void*)0;
memset(&come_value_126, 0, sizeof(struct CVALUE*));
right_value179 = (void*)0;
right_value180 = (void*)0;
    left_node_118=self->mLeft;
    if(!node_compile(left_node_118,info)) {
        return (_Bool)0;
    }
    left_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value173=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value173,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_120=self->mRight;
    if(!node_compile(right_node_120,info)) {
        __result87__ = (_Bool)0;
        come_call_finalizer3(left_value_119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result87__;
    }
    right_value_121=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value174,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    type_122=(struct sType*)come_increment_ref_count(left_value_119->type);
    fun_name_123="operator_add";
    if(self->mQuote) {
        calling_fun_124=(_Bool)0;
    }
    else {
        calling_fun_124=operator_overload_fun(type_122,fun_name_123,left_value_119,right_value_121,(_Bool)0,info);
    }
    if(!calling_fun_124) {
        result_type_125=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=sType_clone(left_value_119->type))));
        come_call_finalizer3(right_value175,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(right_value_121->type->mPointerNum>0) {
            __dec_obj57=result_type_125;
            result_type_125=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=sType_clone(right_value_121->type))));
            come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value176,sType_finalize, 0, 1, 0, 0, (void*)0);
        }
        come_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value178=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value177=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 242, "CVALUE"))))))));
        come_call_finalizer3(right_value177,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value178,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj58=come_value_126->c_value;
        come_value_126->c_value=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("%s+%s",left_value_119->c_value,right_value_121->c_value))));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj59=come_value_126->type;
        come_value_126->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=sType_clone(result_type_125))));
        come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value180,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_126->type->mHeap=(_Bool)0;
        come_value_126->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_126->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_126));
        come_call_finalizer3(result_type_125,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result88__ = (_Bool)1;
    come_call_finalizer3(left_value_119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_121,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_122,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result88__;
    come_call_finalizer3(left_value_119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_121,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_122,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value181;
void* right_value182;
struct sNode* __dec_obj60;
void* right_value183;
struct sNode* __dec_obj61;
struct sSubNode* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value181 = (void*)0;
right_value182 = (void*)0;
right_value183 = (void*)0;
    ((struct sNodeBase*)(right_value181=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value181,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj60=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value182=sNode_clone(left))));
    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value182) { right_value182 = come_decrement_ref_count2(right_value182, ((struct sNode*)right_value182)->finalize, ((struct sNode*)right_value182)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj61=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value183=sNode_clone(right))));
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value183) { right_value183 = come_decrement_ref_count2(right_value183, ((struct sNode*)right_value183)->finalize, ((struct sNode*)right_value183)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result89__ = __result_obj__ = self;
    come_call_finalizer3(self,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result89__;
    come_call_finalizer3(self,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sSubNode_kind(struct sSubNode* self){
void* __result_obj__;
void* right_value184;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
    __result90__ = __result_obj__ = ((char*)(right_value184=__builtin_string("sSubNode")));
    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result90__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
struct sNode* left_node_127;
void* right_value185;
struct CVALUE* left_value_128;
struct sNode* right_node_129;
_Bool __result91__;
void* right_value186;
struct CVALUE* right_value_130;
struct sType* type_131;
char* fun_name_132;
_Bool calling_fun_133;
void* right_value187;
struct sType* result_type_134;
void* right_value188;
void* right_value189;
struct sType* __dec_obj62;
void* right_value190;
void* right_value191;
struct CVALUE* come_value_135;
void* right_value192;
char* __dec_obj63;
void* right_value193;
struct sType* __dec_obj64;
_Bool __result92__;
memset(&left_node_127, 0, sizeof(struct sNode*));
right_value185 = (void*)0;
memset(&left_value_128, 0, sizeof(struct CVALUE*));
memset(&right_node_129, 0, sizeof(struct sNode*));
right_value186 = (void*)0;
memset(&right_value_130, 0, sizeof(struct CVALUE*));
memset(&type_131, 0, sizeof(struct sType*));
memset(&fun_name_132, 0, sizeof(char*));
memset(&calling_fun_133, 0, sizeof(_Bool));
right_value187 = (void*)0;
memset(&result_type_134, 0, sizeof(struct sType*));
right_value188 = (void*)0;
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
memset(&come_value_135, 0, sizeof(struct CVALUE*));
right_value192 = (void*)0;
right_value193 = (void*)0;
    left_node_127=self->mLeft;
    if(!node_compile(left_node_127,info)) {
        return (_Bool)0;
    }
    left_value_128=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value185=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value185,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_129=self->mRight;
    if(!node_compile(right_node_129,info)) {
        __result91__ = (_Bool)0;
        come_call_finalizer3(left_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result91__;
    }
    right_value_130=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value186=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value186,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    type_131=(struct sType*)come_increment_ref_count(left_value_128->type);
    fun_name_132="operator_sub";
    if(self->mQuote) {
        calling_fun_133=(_Bool)0;
    }
    else {
        calling_fun_133=operator_overload_fun(type_131,fun_name_132,left_value_128,right_value_130,(_Bool)0,info);
    }
    if(!calling_fun_133) {
        result_type_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=sType_clone(left_value_128->type))));
        come_call_finalizer3(right_value187,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(left_value_128->type->mPointerNum>0&&right_value_130->type->mPointerNum>0) {
            __dec_obj62=result_type_134;
            result_type_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value188=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 309, "sType")))),"long",(_Bool)0,info))));
            come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value188,sType_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(right_value189,sType_finalize, 0, 1, 0, 0, (void*)0);
        }
        come_value_135=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value190=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 312, "CVALUE"))))))));
        come_call_finalizer3(right_value190,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value191,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj63=come_value_135->c_value;
        come_value_135->c_value=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("%s-%s",left_value_128->c_value,right_value_130->c_value))));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj64=come_value_135->type;
        come_value_135->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(result_type_134))));
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value193,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_135->type->mHeap=(_Bool)0;
        come_value_135->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_135->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_135));
        come_call_finalizer3(result_type_134,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result92__ = (_Bool)1;
    come_call_finalizer3(left_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_130,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_131,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result92__;
    come_call_finalizer3(left_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_130,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_131,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value194;
void* right_value195;
struct sNode* __dec_obj65;
void* right_value196;
struct sNode* __dec_obj66;
struct sMultNode* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
    ((struct sNodeBase*)(right_value194=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value194,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj65=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value195=sNode_clone(left))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value195) { right_value195 = come_decrement_ref_count2(right_value195, ((struct sNode*)right_value195)->finalize, ((struct sNode*)right_value195)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj66=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value196=sNode_clone(right))));
    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value196) { right_value196 = come_decrement_ref_count2(right_value196, ((struct sNode*)right_value196)->finalize, ((struct sNode*)right_value196)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result93__ = __result_obj__ = self;
    come_call_finalizer3(self,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result93__;
    come_call_finalizer3(self,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sMultNode_kind(struct sMultNode* self){
void* __result_obj__;
void* right_value197;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value197 = (void*)0;
    __result94__ = __result_obj__ = ((char*)(right_value197=__builtin_string("sMultNode")));
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result94__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
struct sNode* left_node_136;
void* right_value198;
struct CVALUE* left_value_137;
struct sNode* right_node_138;
_Bool __result95__;
void* right_value199;
struct CVALUE* right_value_139;
struct sType* type_140;
char* fun_name_141;
_Bool calling_fun_142;
void* right_value200;
void* right_value201;
struct CVALUE* come_value_143;
void* right_value202;
char* __dec_obj67;
void* right_value203;
struct sType* __dec_obj68;
_Bool __result96__;
memset(&left_node_136, 0, sizeof(struct sNode*));
right_value198 = (void*)0;
memset(&left_value_137, 0, sizeof(struct CVALUE*));
memset(&right_node_138, 0, sizeof(struct sNode*));
right_value199 = (void*)0;
memset(&right_value_139, 0, sizeof(struct CVALUE*));
memset(&type_140, 0, sizeof(struct sType*));
memset(&fun_name_141, 0, sizeof(char*));
memset(&calling_fun_142, 0, sizeof(_Bool));
right_value200 = (void*)0;
right_value201 = (void*)0;
memset(&come_value_143, 0, sizeof(struct CVALUE*));
right_value202 = (void*)0;
right_value203 = (void*)0;
    left_node_136=self->mLeft;
    if(!node_compile(left_node_136,info)) {
        return (_Bool)0;
    }
    left_value_137=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value198=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value198,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_138=self->mRight;
    if(!node_compile(right_node_138,info)) {
        __result95__ = (_Bool)0;
        come_call_finalizer3(left_value_137,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result95__;
    }
    right_value_139=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value199=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value199,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    type_140=(struct sType*)come_increment_ref_count(left_value_137->type);
    fun_name_141="operator_mult";
    if(self->mQuote) {
        calling_fun_142=(_Bool)0;
    }
    else {
        calling_fun_142=operator_overload_fun(type_140,fun_name_141,left_value_137,right_value_139,(_Bool)0,info);
    }
    if(!calling_fun_142) {
        come_value_143=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value201=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value200=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 377, "CVALUE"))))))));
        come_call_finalizer3(right_value200,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value201,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj67=come_value_143->c_value;
        come_value_143->c_value=(char*)come_increment_ref_count(((char*)(right_value202=xsprintf("%s*%s",left_value_137->c_value,right_value_139->c_value))));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj68=come_value_143->type;
        come_value_143->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value203=sType_clone(left_value_137->type))));
        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value203,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_143->type->mHeap=(_Bool)0;
        come_value_143->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_143->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_143));
        come_call_finalizer3(come_value_143,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result96__ = (_Bool)1;
    come_call_finalizer3(left_value_137,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_139,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_140,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result96__;
    come_call_finalizer3(left_value_137,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_139,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_140,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value204;
void* right_value205;
struct sNode* __dec_obj69;
void* right_value206;
struct sNode* __dec_obj70;
struct sDivNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
    ((struct sNodeBase*)(right_value204=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value204,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj69=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value205=sNode_clone(left))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value205) { right_value205 = come_decrement_ref_count2(right_value205, ((struct sNode*)right_value205)->finalize, ((struct sNode*)right_value205)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj70=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value206=sNode_clone(right))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value206) { right_value206 = come_decrement_ref_count2(right_value206, ((struct sNode*)right_value206)->finalize, ((struct sNode*)right_value206)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result97__ = __result_obj__ = self;
    come_call_finalizer3(self,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result97__;
    come_call_finalizer3(self,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sDivNode_kind(struct sDivNode* self){
void* __result_obj__;
void* right_value207;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
    __result98__ = __result_obj__ = ((char*)(right_value207=__builtin_string("sDivNode")));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result98__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
struct sNode* left_node_144;
void* right_value208;
struct CVALUE* left_value_145;
struct sNode* right_node_146;
_Bool __result99__;
void* right_value209;
struct CVALUE* right_value_147;
struct sType* type_148;
char* fun_name_149;
_Bool calling_fun_150;
void* right_value210;
void* right_value211;
struct CVALUE* come_value_151;
void* right_value212;
char* __dec_obj71;
void* right_value213;
struct sType* __dec_obj72;
_Bool __result100__;
memset(&left_node_144, 0, sizeof(struct sNode*));
right_value208 = (void*)0;
memset(&left_value_145, 0, sizeof(struct CVALUE*));
memset(&right_node_146, 0, sizeof(struct sNode*));
right_value209 = (void*)0;
memset(&right_value_147, 0, sizeof(struct CVALUE*));
memset(&type_148, 0, sizeof(struct sType*));
memset(&fun_name_149, 0, sizeof(char*));
memset(&calling_fun_150, 0, sizeof(_Bool));
right_value210 = (void*)0;
right_value211 = (void*)0;
memset(&come_value_151, 0, sizeof(struct CVALUE*));
right_value212 = (void*)0;
right_value213 = (void*)0;
    left_node_144=self->mLeft;
    if(!node_compile(left_node_144,info)) {
        return (_Bool)0;
    }
    left_value_145=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value208=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value208,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_146=self->mRight;
    if(!node_compile(right_node_146,info)) {
        __result99__ = (_Bool)0;
        come_call_finalizer3(left_value_145,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result99__;
    }
    right_value_147=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value209,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    type_148=(struct sType*)come_increment_ref_count(left_value_145->type);
    fun_name_149="operator_div";
    if(self->mQuote) {
        calling_fun_150=(_Bool)0;
    }
    else {
        calling_fun_150=operator_overload_fun(type_148,fun_name_149,left_value_145,right_value_147,(_Bool)0,info);
    }
    if(!calling_fun_150) {
        come_value_151=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value211=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value210=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 442, "CVALUE"))))))));
        come_call_finalizer3(right_value210,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value211,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj71=come_value_151->c_value;
        come_value_151->c_value=(char*)come_increment_ref_count(((char*)(right_value212=xsprintf("%s/%s",left_value_145->c_value,right_value_147->c_value))));
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj72=come_value_151->type;
        come_value_151->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_clone(left_value_145->type))));
        come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value213,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_151->type->mHeap=(_Bool)0;
        come_value_151->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_151->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_151));
        come_call_finalizer3(come_value_151,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result100__ = (_Bool)1;
    come_call_finalizer3(left_value_145,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_147,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_148,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result100__;
    come_call_finalizer3(left_value_145,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_147,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_148,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value214;
void* right_value215;
struct sNode* __dec_obj73;
void* right_value216;
struct sNode* __dec_obj74;
struct sModNode* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
    ((struct sNodeBase*)(right_value214=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value214,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj73=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value215=sNode_clone(left))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value215) { right_value215 = come_decrement_ref_count2(right_value215, ((struct sNode*)right_value215)->finalize, ((struct sNode*)right_value215)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj74=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value216=sNode_clone(right))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value216) { right_value216 = come_decrement_ref_count2(right_value216, ((struct sNode*)right_value216)->finalize, ((struct sNode*)right_value216)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result101__ = __result_obj__ = self;
    come_call_finalizer3(self,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result101__;
    come_call_finalizer3(self,sModNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sModNode_kind(struct sModNode* self){
void* __result_obj__;
void* right_value217;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value217 = (void*)0;
    __result102__ = __result_obj__ = ((char*)(right_value217=__builtin_string("sModNode")));
    right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result102__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
struct sNode* left_node_152;
void* right_value218;
struct CVALUE* left_value_153;
struct sNode* right_node_154;
_Bool __result103__;
void* right_value219;
struct CVALUE* right_value_155;
struct sType* type_156;
char* fun_name_157;
_Bool calling_fun_158;
void* right_value220;
void* right_value221;
struct CVALUE* come_value_159;
void* right_value222;
char* __dec_obj75;
void* right_value223;
struct sType* __dec_obj76;
_Bool __result104__;
memset(&left_node_152, 0, sizeof(struct sNode*));
right_value218 = (void*)0;
memset(&left_value_153, 0, sizeof(struct CVALUE*));
memset(&right_node_154, 0, sizeof(struct sNode*));
right_value219 = (void*)0;
memset(&right_value_155, 0, sizeof(struct CVALUE*));
memset(&type_156, 0, sizeof(struct sType*));
memset(&fun_name_157, 0, sizeof(char*));
memset(&calling_fun_158, 0, sizeof(_Bool));
right_value220 = (void*)0;
right_value221 = (void*)0;
memset(&come_value_159, 0, sizeof(struct CVALUE*));
right_value222 = (void*)0;
right_value223 = (void*)0;
    left_node_152=self->mLeft;
    if(!node_compile(left_node_152,info)) {
        return (_Bool)0;
    }
    left_value_153=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value218=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value218,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_154=self->mRight;
    if(!node_compile(right_node_154,info)) {
        __result103__ = (_Bool)0;
        come_call_finalizer3(left_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result103__;
    }
    right_value_155=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value219=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value219,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    type_156=(struct sType*)come_increment_ref_count(left_value_153->type);
    fun_name_157="operator_mod";
    if(self->mQuote) {
        calling_fun_158=(_Bool)0;
    }
    else {
        calling_fun_158=operator_overload_fun(type_156,fun_name_157,left_value_153,right_value_155,(_Bool)0,info);
    }
    if(!calling_fun_158) {
        come_value_159=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value221=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value220=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 507, "CVALUE"))))))));
        come_call_finalizer3(right_value220,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value221,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj75=come_value_159->c_value;
        come_value_159->c_value=(char*)come_increment_ref_count(((char*)(right_value222=xsprintf("%s%%%s",left_value_153->c_value,right_value_155->c_value))));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj76=come_value_159->type;
        come_value_159->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=sType_clone(left_value_153->type))));
        come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value223,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_159->type->mHeap=(_Bool)0;
        come_value_159->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_159->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_159));
        come_call_finalizer3(come_value_159,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result104__ = (_Bool)1;
    come_call_finalizer3(left_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_155,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_156,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result104__;
    come_call_finalizer3(left_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_155,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_156,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value224;
void* right_value225;
struct sNode* __dec_obj77;
void* right_value226;
struct sNode* __dec_obj78;
struct sLShiftNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
    ((struct sNodeBase*)(right_value224=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value224,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj77=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value225=sNode_clone(left))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value225) { right_value225 = come_decrement_ref_count2(right_value225, ((struct sNode*)right_value225)->finalize, ((struct sNode*)right_value225)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj78=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value226=sNode_clone(right))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value226) { right_value226 = come_decrement_ref_count2(right_value226, ((struct sNode*)right_value226)->finalize, ((struct sNode*)right_value226)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result105__ = __result_obj__ = self;
    come_call_finalizer3(self,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result105__;
    come_call_finalizer3(self,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sLShiftNode_kind(struct sLShiftNode* self){
void* __result_obj__;
void* right_value227;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value227 = (void*)0;
    __result106__ = __result_obj__ = ((char*)(right_value227=__builtin_string("sLShiftNode")));
    right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result106__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
struct sNode* left_node_160;
void* right_value228;
struct CVALUE* left_value_161;
struct sNode* right_node_162;
_Bool __result107__;
void* right_value229;
struct CVALUE* right_value_163;
struct sType* type_164;
char* fun_name_165;
_Bool calling_fun_166;
void* right_value230;
void* right_value231;
struct CVALUE* come_value_167;
void* right_value232;
char* __dec_obj79;
void* right_value233;
struct sType* __dec_obj80;
_Bool __result108__;
memset(&left_node_160, 0, sizeof(struct sNode*));
right_value228 = (void*)0;
memset(&left_value_161, 0, sizeof(struct CVALUE*));
memset(&right_node_162, 0, sizeof(struct sNode*));
right_value229 = (void*)0;
memset(&right_value_163, 0, sizeof(struct CVALUE*));
memset(&type_164, 0, sizeof(struct sType*));
memset(&fun_name_165, 0, sizeof(char*));
memset(&calling_fun_166, 0, sizeof(_Bool));
right_value230 = (void*)0;
right_value231 = (void*)0;
memset(&come_value_167, 0, sizeof(struct CVALUE*));
right_value232 = (void*)0;
right_value233 = (void*)0;
    left_node_160=self->mLeft;
    if(!node_compile(left_node_160,info)) {
        return (_Bool)0;
    }
    left_value_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value228=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value228,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_162=self->mRight;
    if(!node_compile(right_node_162,info)) {
        __result107__ = (_Bool)0;
        come_call_finalizer3(left_value_161,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result107__;
    }
    right_value_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value229=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value229,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    type_164=(struct sType*)come_increment_ref_count(left_value_161->type);
    fun_name_165="operator_lshift";
    if(self->mQuote) {
        calling_fun_166=(_Bool)0;
    }
    else {
        calling_fun_166=operator_overload_fun(type_164,fun_name_165,left_value_161,right_value_163,(_Bool)0,info);
    }
    if(!calling_fun_166) {
        come_value_167=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value231=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 573, "CVALUE"))))))));
        come_call_finalizer3(right_value230,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value231,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj79=come_value_167->c_value;
        come_value_167->c_value=(char*)come_increment_ref_count(((char*)(right_value232=xsprintf("%s<<%s",left_value_161->c_value,right_value_163->c_value))));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj80=come_value_167->type;
        come_value_167->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value233=sType_clone(left_value_161->type))));
        come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value233,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_167->type->mHeap=(_Bool)0;
        come_value_167->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_167->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_167));
        come_call_finalizer3(come_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result108__ = (_Bool)1;
    come_call_finalizer3(left_value_161,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_164,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result108__;
    come_call_finalizer3(left_value_161,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_163,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_164,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value234;
void* right_value235;
struct sNode* __dec_obj81;
void* right_value236;
struct sNode* __dec_obj82;
struct sRShiftNode* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
    ((struct sNodeBase*)(right_value234=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value234,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj81=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value235=sNode_clone(left))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value235) { right_value235 = come_decrement_ref_count2(right_value235, ((struct sNode*)right_value235)->finalize, ((struct sNode*)right_value235)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj82=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value236=sNode_clone(right))));
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value236) { right_value236 = come_decrement_ref_count2(right_value236, ((struct sNode*)right_value236)->finalize, ((struct sNode*)right_value236)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result109__ = __result_obj__ = self;
    come_call_finalizer3(self,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result109__;
    come_call_finalizer3(self,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sRShiftNode_kind(struct sRShiftNode* self){
void* __result_obj__;
void* right_value237;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value237 = (void*)0;
    __result110__ = __result_obj__ = ((char*)(right_value237=__builtin_string("sRShiftNode")));
    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result110__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
struct sNode* left_node_168;
void* right_value238;
struct CVALUE* left_value_169;
struct sNode* right_node_170;
_Bool __result111__;
void* right_value239;
struct CVALUE* right_value_171;
struct sType* type_172;
char* fun_name_173;
_Bool calling_fun_174;
void* right_value240;
void* right_value241;
struct CVALUE* come_value_175;
void* right_value242;
char* __dec_obj83;
void* right_value243;
struct sType* __dec_obj84;
_Bool __result112__;
memset(&left_node_168, 0, sizeof(struct sNode*));
right_value238 = (void*)0;
memset(&left_value_169, 0, sizeof(struct CVALUE*));
memset(&right_node_170, 0, sizeof(struct sNode*));
right_value239 = (void*)0;
memset(&right_value_171, 0, sizeof(struct CVALUE*));
memset(&type_172, 0, sizeof(struct sType*));
memset(&fun_name_173, 0, sizeof(char*));
memset(&calling_fun_174, 0, sizeof(_Bool));
right_value240 = (void*)0;
right_value241 = (void*)0;
memset(&come_value_175, 0, sizeof(struct CVALUE*));
right_value242 = (void*)0;
right_value243 = (void*)0;
    left_node_168=self->mLeft;
    if(!node_compile(left_node_168,info)) {
        return (_Bool)0;
    }
    left_value_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value238=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value238,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_170=self->mRight;
    if(!node_compile(right_node_170,info)) {
        __result111__ = (_Bool)0;
        come_call_finalizer3(left_value_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result111__;
    }
    right_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value239=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value239,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    type_172=(struct sType*)come_increment_ref_count(left_value_169->type);
    fun_name_173="operator_rshift";
    if(self->mQuote) {
        calling_fun_174=(_Bool)0;
    }
    else {
        calling_fun_174=operator_overload_fun(type_172,fun_name_173,left_value_169,right_value_171,(_Bool)0,info);
    }
    if(!calling_fun_174) {
        come_value_175=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value241=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value240=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 638, "CVALUE"))))))));
        come_call_finalizer3(right_value240,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value241,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj83=come_value_175->c_value;
        come_value_175->c_value=(char*)come_increment_ref_count(((char*)(right_value242=xsprintf("%s>>%s",left_value_169->c_value,right_value_171->c_value))));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj84=come_value_175->type;
        come_value_175->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=sType_clone(left_value_169->type))));
        come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value243,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_175->type->mHeap=(_Bool)0;
        come_value_175->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_175->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_175));
        come_call_finalizer3(come_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result112__ = (_Bool)1;
    come_call_finalizer3(left_value_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_172,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result112__;
    come_call_finalizer3(left_value_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_172,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value244;
void* right_value245;
struct sNode* __dec_obj85;
void* right_value246;
struct sNode* __dec_obj86;
struct sGtEqNode* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
    ((struct sNodeBase*)(right_value244=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value244,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj85=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value245=sNode_clone(left))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value245) { right_value245 = come_decrement_ref_count2(right_value245, ((struct sNode*)right_value245)->finalize, ((struct sNode*)right_value245)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj86=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value246=sNode_clone(right))));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value246) { right_value246 = come_decrement_ref_count2(right_value246, ((struct sNode*)right_value246)->finalize, ((struct sNode*)right_value246)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result113__ = __result_obj__ = self;
    come_call_finalizer3(self,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result113__;
    come_call_finalizer3(self,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sGtEqNode_kind(struct sGtEqNode* self){
void* __result_obj__;
void* right_value247;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value247 = (void*)0;
    __result114__ = __result_obj__ = ((char*)(right_value247=__builtin_string("sGtEqNode")));
    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
struct sNode* left_node_176;
void* right_value248;
struct CVALUE* left_value_177;
struct sNode* right_node_178;
_Bool __result115__;
void* right_value249;
struct CVALUE* right_value_179;
struct sType* type_180;
char* fun_name_181;
_Bool calling_fun_182;
void* right_value250;
void* right_value251;
struct CVALUE* come_value_183;
void* right_value252;
char* __dec_obj87;
void* right_value253;
struct sType* __dec_obj88;
_Bool __result116__;
memset(&left_node_176, 0, sizeof(struct sNode*));
right_value248 = (void*)0;
memset(&left_value_177, 0, sizeof(struct CVALUE*));
memset(&right_node_178, 0, sizeof(struct sNode*));
right_value249 = (void*)0;
memset(&right_value_179, 0, sizeof(struct CVALUE*));
memset(&type_180, 0, sizeof(struct sType*));
memset(&fun_name_181, 0, sizeof(char*));
memset(&calling_fun_182, 0, sizeof(_Bool));
right_value250 = (void*)0;
right_value251 = (void*)0;
memset(&come_value_183, 0, sizeof(struct CVALUE*));
right_value252 = (void*)0;
right_value253 = (void*)0;
    left_node_176=self->mLeft;
    if(!node_compile(left_node_176,info)) {
        return (_Bool)0;
    }
    left_value_177=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value248,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_178=self->mRight;
    if(!node_compile(right_node_178,info)) {
        __result115__ = (_Bool)0;
        come_call_finalizer3(left_value_177,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result115__;
    }
    right_value_179=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value249=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value249,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    type_180=(struct sType*)come_increment_ref_count(left_value_177->type);
    fun_name_181="operator_gteq";
    if(self->mQuote) {
        calling_fun_182=(_Bool)0;
    }
    else {
        calling_fun_182=operator_overload_fun(type_180,fun_name_181,left_value_177,right_value_179,(_Bool)0,info);
    }
    if(!calling_fun_182) {
        come_value_183=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value251=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value250=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 703, "CVALUE"))))))));
        come_call_finalizer3(right_value250,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value251,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj87=come_value_183->c_value;
        come_value_183->c_value=(char*)come_increment_ref_count(((char*)(right_value252=xsprintf("%s>=%s",left_value_177->c_value,right_value_179->c_value))));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj88=come_value_183->type;
        come_value_183->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=sType_clone(left_value_177->type))));
        come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value253,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_183->type->mHeap=(_Bool)0;
        come_value_183->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_183->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_183));
        come_call_finalizer3(come_value_183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result116__ = (_Bool)1;
    come_call_finalizer3(left_value_177,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_179,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_180,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result116__;
    come_call_finalizer3(left_value_177,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_179,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_180,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value254;
void* right_value255;
struct sNode* __dec_obj89;
void* right_value256;
struct sNode* __dec_obj90;
struct sLtEqNode* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
    ((struct sNodeBase*)(right_value254=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value254,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj89=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value255=sNode_clone(left))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value255) { right_value255 = come_decrement_ref_count2(right_value255, ((struct sNode*)right_value255)->finalize, ((struct sNode*)right_value255)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj90=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value256=sNode_clone(right))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value256) { right_value256 = come_decrement_ref_count2(right_value256, ((struct sNode*)right_value256)->finalize, ((struct sNode*)right_value256)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result117__ = __result_obj__ = self;
    come_call_finalizer3(self,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result117__;
    come_call_finalizer3(self,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sLtEqNode_kind(struct sLtEqNode* self){
void* __result_obj__;
void* right_value257;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
right_value257 = (void*)0;
    __result118__ = __result_obj__ = ((char*)(right_value257=__builtin_string("sLtEqNode")));
    right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result118__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
struct sNode* left_node_184;
void* right_value258;
struct CVALUE* left_value_185;
struct sNode* right_node_186;
_Bool __result119__;
void* right_value259;
struct CVALUE* right_value_187;
struct sType* type_188;
char* fun_name_189;
_Bool calling_fun_190;
void* right_value260;
void* right_value261;
struct CVALUE* come_value_191;
void* right_value262;
char* __dec_obj91;
void* right_value263;
struct sType* __dec_obj92;
_Bool __result120__;
memset(&left_node_184, 0, sizeof(struct sNode*));
right_value258 = (void*)0;
memset(&left_value_185, 0, sizeof(struct CVALUE*));
memset(&right_node_186, 0, sizeof(struct sNode*));
right_value259 = (void*)0;
memset(&right_value_187, 0, sizeof(struct CVALUE*));
memset(&type_188, 0, sizeof(struct sType*));
memset(&fun_name_189, 0, sizeof(char*));
memset(&calling_fun_190, 0, sizeof(_Bool));
right_value260 = (void*)0;
right_value261 = (void*)0;
memset(&come_value_191, 0, sizeof(struct CVALUE*));
right_value262 = (void*)0;
right_value263 = (void*)0;
    left_node_184=self->mLeft;
    if(!node_compile(left_node_184,info)) {
        return (_Bool)0;
    }
    left_value_185=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value258=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value258,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_186=self->mRight;
    if(!node_compile(right_node_186,info)) {
        __result119__ = (_Bool)0;
        come_call_finalizer3(left_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result119__;
    }
    right_value_187=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value259=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value259,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    type_188=(struct sType*)come_increment_ref_count(left_value_185->type);
    fun_name_189="operator_lteq";
    if(self->mQuote) {
        calling_fun_190=(_Bool)0;
    }
    else {
        calling_fun_190=operator_overload_fun(type_188,fun_name_189,left_value_185,right_value_187,(_Bool)0,info);
    }
    if(!calling_fun_190) {
        come_value_191=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value261=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value260=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 768, "CVALUE"))))))));
        come_call_finalizer3(right_value260,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value261,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj91=come_value_191->c_value;
        come_value_191->c_value=(char*)come_increment_ref_count(((char*)(right_value262=xsprintf("%s<=%s",left_value_185->c_value,right_value_187->c_value))));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj92=come_value_191->type;
        come_value_191->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_clone(left_value_185->type))));
        come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value263,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_191->type->mHeap=(_Bool)0;
        come_value_191->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_191->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_191));
        come_call_finalizer3(come_value_191,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result120__ = (_Bool)1;
    come_call_finalizer3(left_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_188,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result120__;
    come_call_finalizer3(left_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_188,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value264;
void* right_value265;
struct sNode* __dec_obj93;
void* right_value266;
struct sNode* __dec_obj94;
struct sLtNode* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
    ((struct sNodeBase*)(right_value264=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value264,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj93=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value265=sNode_clone(left))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value265) { right_value265 = come_decrement_ref_count2(right_value265, ((struct sNode*)right_value265)->finalize, ((struct sNode*)right_value265)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj94=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value266=sNode_clone(right))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value266) { right_value266 = come_decrement_ref_count2(right_value266, ((struct sNode*)right_value266)->finalize, ((struct sNode*)right_value266)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result121__ = __result_obj__ = self;
    come_call_finalizer3(self,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result121__;
    come_call_finalizer3(self,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sLtNode_kind(struct sLtNode* self){
void* __result_obj__;
void* right_value267;
char* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
right_value267 = (void*)0;
    __result122__ = __result_obj__ = ((char*)(right_value267=__builtin_string("sLtNode")));
    right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result122__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
struct sNode* left_node_192;
void* right_value268;
struct CVALUE* left_value_193;
struct sNode* right_node_194;
_Bool __result123__;
void* right_value269;
struct CVALUE* right_value_195;
struct sType* type_196;
char* fun_name_197;
_Bool calling_fun_198;
void* right_value270;
void* right_value271;
struct CVALUE* come_value_199;
void* right_value272;
char* __dec_obj95;
void* right_value273;
struct sType* __dec_obj96;
_Bool __result124__;
memset(&left_node_192, 0, sizeof(struct sNode*));
right_value268 = (void*)0;
memset(&left_value_193, 0, sizeof(struct CVALUE*));
memset(&right_node_194, 0, sizeof(struct sNode*));
right_value269 = (void*)0;
memset(&right_value_195, 0, sizeof(struct CVALUE*));
memset(&type_196, 0, sizeof(struct sType*));
memset(&fun_name_197, 0, sizeof(char*));
memset(&calling_fun_198, 0, sizeof(_Bool));
right_value270 = (void*)0;
right_value271 = (void*)0;
memset(&come_value_199, 0, sizeof(struct CVALUE*));
right_value272 = (void*)0;
right_value273 = (void*)0;
    left_node_192=self->mLeft;
    if(!node_compile(left_node_192,info)) {
        return (_Bool)0;
    }
    left_value_193=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value268=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value268,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_194=self->mRight;
    if(!node_compile(right_node_194,info)) {
        __result123__ = (_Bool)0;
        come_call_finalizer3(left_value_193,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result123__;
    }
    right_value_195=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value269=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value269,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    type_196=(struct sType*)come_increment_ref_count(left_value_193->type);
    fun_name_197="operator_lt";
    if(self->mQuote) {
        calling_fun_198=(_Bool)0;
    }
    else {
        calling_fun_198=operator_overload_fun(type_196,fun_name_197,left_value_193,right_value_195,(_Bool)0,info);
    }
    if(!calling_fun_198) {
        come_value_199=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value271=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value270=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 833, "CVALUE"))))))));
        come_call_finalizer3(right_value270,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value271,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj95=come_value_199->c_value;
        come_value_199->c_value=(char*)come_increment_ref_count(((char*)(right_value272=xsprintf("%s<%s",left_value_193->c_value,right_value_195->c_value))));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj96=come_value_199->type;
        come_value_199->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=sType_clone(left_value_193->type))));
        come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value273,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_199->type->mHeap=(_Bool)0;
        come_value_199->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_199->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_199));
        come_call_finalizer3(come_value_199,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result124__ = (_Bool)1;
    come_call_finalizer3(left_value_193,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_196,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result124__;
    come_call_finalizer3(left_value_193,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_196,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value274;
void* right_value275;
struct sNode* __dec_obj97;
void* right_value276;
struct sNode* __dec_obj98;
struct sGtNode* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
    ((struct sNodeBase*)(right_value274=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value274,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj97=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value275=sNode_clone(left))));
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value275) { right_value275 = come_decrement_ref_count2(right_value275, ((struct sNode*)right_value275)->finalize, ((struct sNode*)right_value275)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj98=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value276=sNode_clone(right))));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count2(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value276) { right_value276 = come_decrement_ref_count2(right_value276, ((struct sNode*)right_value276)->finalize, ((struct sNode*)right_value276)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result125__ = __result_obj__ = self;
    come_call_finalizer3(self,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result125__;
    come_call_finalizer3(self,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sGtNode_kind(struct sGtNode* self){
void* __result_obj__;
void* right_value277;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
right_value277 = (void*)0;
    __result126__ = __result_obj__ = ((char*)(right_value277=__builtin_string("sGtNode")));
    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result126__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
struct sNode* left_node_200;
void* right_value278;
struct CVALUE* left_value_201;
struct sNode* right_node_202;
_Bool __result127__;
void* right_value279;
struct CVALUE* right_value_203;
struct sType* type_204;
char* fun_name_205;
_Bool calling_fun_206;
void* right_value280;
void* right_value281;
struct CVALUE* come_value_207;
void* right_value282;
char* __dec_obj99;
void* right_value283;
struct sType* __dec_obj100;
_Bool __result128__;
memset(&left_node_200, 0, sizeof(struct sNode*));
right_value278 = (void*)0;
memset(&left_value_201, 0, sizeof(struct CVALUE*));
memset(&right_node_202, 0, sizeof(struct sNode*));
right_value279 = (void*)0;
memset(&right_value_203, 0, sizeof(struct CVALUE*));
memset(&type_204, 0, sizeof(struct sType*));
memset(&fun_name_205, 0, sizeof(char*));
memset(&calling_fun_206, 0, sizeof(_Bool));
right_value280 = (void*)0;
right_value281 = (void*)0;
memset(&come_value_207, 0, sizeof(struct CVALUE*));
right_value282 = (void*)0;
right_value283 = (void*)0;
    left_node_200=self->mLeft;
    if(!node_compile(left_node_200,info)) {
        return (_Bool)0;
    }
    left_value_201=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value278=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value278,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_202=self->mRight;
    if(!node_compile(right_node_202,info)) {
        __result127__ = (_Bool)0;
        come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result127__;
    }
    right_value_203=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value279=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value279,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    type_204=(struct sType*)come_increment_ref_count(left_value_201->type);
    fun_name_205="operator_gt";
    if(self->mQuote) {
        calling_fun_206=(_Bool)0;
    }
    else {
        calling_fun_206=operator_overload_fun(type_204,fun_name_205,left_value_201,right_value_203,(_Bool)0,info);
    }
    if(!calling_fun_206) {
        come_value_207=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value281=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value280=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 898, "CVALUE"))))))));
        come_call_finalizer3(right_value280,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value281,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj99=come_value_207->c_value;
        come_value_207->c_value=(char*)come_increment_ref_count(((char*)(right_value282=xsprintf("%s>%s",left_value_201->c_value,right_value_203->c_value))));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj100=come_value_207->type;
        come_value_207->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value283=sType_clone(left_value_201->type))));
        come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value283,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_207->type->mHeap=(_Bool)0;
        come_value_207->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_207->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_207));
        come_call_finalizer3(come_value_207,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result128__ = (_Bool)1;
    come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_204,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result128__;
    come_call_finalizer3(left_value_201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_204,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value284;
void* right_value285;
struct sNode* __dec_obj101;
void* right_value286;
struct sNode* __dec_obj102;
struct sEqNode* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
    ((struct sNodeBase*)(right_value284=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value284,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj101=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value285=sNode_clone(left))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value285) { right_value285 = come_decrement_ref_count2(right_value285, ((struct sNode*)right_value285)->finalize, ((struct sNode*)right_value285)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj102=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value286=sNode_clone(right))));
    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value286) { right_value286 = come_decrement_ref_count2(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result129__ = __result_obj__ = self;
    come_call_finalizer3(self,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result129__;
    come_call_finalizer3(self,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sEqNode_kind(struct sEqNode* self){
void* __result_obj__;
void* right_value287;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value287 = (void*)0;
    __result130__ = __result_obj__ = ((char*)(right_value287=__builtin_string("sEqNode")));
    right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result130__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
struct sNode* left_node_208;
void* right_value288;
struct CVALUE* left_value_209;
struct sNode* right_node_210;
_Bool __result131__;
void* right_value289;
struct CVALUE* right_value_211;
void* right_value290;
void* right_value291;
struct CVALUE* come_value_212;
void* right_value292;
char* __dec_obj103;
void* right_value293;
struct sType* __dec_obj104;
_Bool __result132__;
memset(&left_node_208, 0, sizeof(struct sNode*));
right_value288 = (void*)0;
memset(&left_value_209, 0, sizeof(struct CVALUE*));
memset(&right_node_210, 0, sizeof(struct sNode*));
right_value289 = (void*)0;
memset(&right_value_211, 0, sizeof(struct CVALUE*));
right_value290 = (void*)0;
right_value291 = (void*)0;
memset(&come_value_212, 0, sizeof(struct CVALUE*));
right_value292 = (void*)0;
right_value293 = (void*)0;
    left_node_208=self->mLeft;
    if(!node_compile(left_node_208,info)) {
        return (_Bool)0;
    }
    left_value_209=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value288=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value288,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_210=self->mRight;
    if(!node_compile(right_node_210,info)) {
        __result131__ = (_Bool)0;
        come_call_finalizer3(left_value_209,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result131__;
    }
    right_value_211=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value289=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value289,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    come_value_212=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value291=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value290=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 951, "CVALUE"))))))));
    come_call_finalizer3(right_value290,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value291,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj103=come_value_212->c_value;
    come_value_212->c_value=(char*)come_increment_ref_count(((char*)(right_value292=xsprintf("%s==%s",left_value_209->c_value,right_value_211->c_value))));
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj104=come_value_212->type;
    come_value_212->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value293=sType_clone(left_value_209->type))));
    come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value293,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_212->type->mHeap=(_Bool)0;
    come_value_212->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_212->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_212));
    __result132__ = (_Bool)1;
    come_call_finalizer3(left_value_209,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_212,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result132__;
    come_call_finalizer3(left_value_209,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_211,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_212,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value294;
void* right_value295;
struct sNode* __dec_obj105;
void* right_value296;
struct sNode* __dec_obj106;
struct sNotEqNode* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
    ((struct sNodeBase*)(right_value294=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value294,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj105=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value295=sNode_clone(left))));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value295) { right_value295 = come_decrement_ref_count2(right_value295, ((struct sNode*)right_value295)->finalize, ((struct sNode*)right_value295)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj106=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value296=sNode_clone(right))));
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value296) { right_value296 = come_decrement_ref_count2(right_value296, ((struct sNode*)right_value296)->finalize, ((struct sNode*)right_value296)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result133__ = __result_obj__ = self;
    come_call_finalizer3(self,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result133__;
    come_call_finalizer3(self,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sNotEqNode_kind(struct sNotEqNode* self){
void* __result_obj__;
void* right_value297;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value297 = (void*)0;
    __result134__ = __result_obj__ = ((char*)(right_value297=__builtin_string("sNotEqNode")));
    right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result134__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
struct sNode* left_node_213;
void* right_value298;
struct CVALUE* left_value_214;
struct sNode* right_node_215;
_Bool __result135__;
void* right_value299;
struct CVALUE* right_value_216;
void* right_value300;
void* right_value301;
struct CVALUE* come_value_217;
void* right_value302;
char* __dec_obj107;
void* right_value303;
struct sType* __dec_obj108;
_Bool __result136__;
memset(&left_node_213, 0, sizeof(struct sNode*));
right_value298 = (void*)0;
memset(&left_value_214, 0, sizeof(struct CVALUE*));
memset(&right_node_215, 0, sizeof(struct sNode*));
right_value299 = (void*)0;
memset(&right_value_216, 0, sizeof(struct CVALUE*));
right_value300 = (void*)0;
right_value301 = (void*)0;
memset(&come_value_217, 0, sizeof(struct CVALUE*));
right_value302 = (void*)0;
right_value303 = (void*)0;
    left_node_213=self->mLeft;
    if(!node_compile(left_node_213,info)) {
        return (_Bool)0;
    }
    left_value_214=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value298=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value298,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_215=self->mRight;
    if(!node_compile(right_node_215,info)) {
        __result135__ = (_Bool)0;
        come_call_finalizer3(left_value_214,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result135__;
    }
    right_value_216=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value299=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value299,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    come_value_217=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value301=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value300=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1003, "CVALUE"))))))));
    come_call_finalizer3(right_value300,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value301,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj107=come_value_217->c_value;
    come_value_217->c_value=(char*)come_increment_ref_count(((char*)(right_value302=xsprintf("%s!=%s",left_value_214->c_value,right_value_216->c_value))));
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj108=come_value_217->type;
    come_value_217->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value303=sType_clone(left_value_214->type))));
    come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value303,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_217->type->mHeap=(_Bool)0;
    come_value_217->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_217->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_217));
    __result136__ = (_Bool)1;
    come_call_finalizer3(left_value_214,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_216,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_217,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result136__;
    come_call_finalizer3(left_value_214,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_216,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_217,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value304;
void* right_value305;
struct sNode* __dec_obj109;
void* right_value306;
struct sNode* __dec_obj110;
struct sEq2Node* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
    ((struct sNodeBase*)(right_value304=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value304,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj109=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value305=sNode_clone(left))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value305) { right_value305 = come_decrement_ref_count2(right_value305, ((struct sNode*)right_value305)->finalize, ((struct sNode*)right_value305)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj110=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value306=sNode_clone(right))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value306) { right_value306 = come_decrement_ref_count2(right_value306, ((struct sNode*)right_value306)->finalize, ((struct sNode*)right_value306)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result137__ = __result_obj__ = self;
    come_call_finalizer3(self,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result137__;
    come_call_finalizer3(self,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sEq2Node_kind(struct sEq2Node* self){
void* __result_obj__;
void* right_value307;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value307 = (void*)0;
    __result138__ = __result_obj__ = ((char*)(right_value307=__builtin_string("sEq2Node")));
    right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result138__;
}

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info){
struct sNode* left_node_218;
void* right_value308;
struct CVALUE* left_value_219;
struct sNode* right_node_220;
_Bool __result139__;
void* right_value309;
struct CVALUE* right_value_221;
struct sType* type_222;
char* fun_name_223;
_Bool calling_fun_224;
void* right_value310;
void* right_value311;
struct CVALUE* come_value_225;
void* right_value312;
char* __dec_obj111;
void* right_value313;
struct sType* __dec_obj112;
_Bool __result140__;
memset(&left_node_218, 0, sizeof(struct sNode*));
right_value308 = (void*)0;
memset(&left_value_219, 0, sizeof(struct CVALUE*));
memset(&right_node_220, 0, sizeof(struct sNode*));
right_value309 = (void*)0;
memset(&right_value_221, 0, sizeof(struct CVALUE*));
memset(&type_222, 0, sizeof(struct sType*));
memset(&fun_name_223, 0, sizeof(char*));
memset(&calling_fun_224, 0, sizeof(_Bool));
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&come_value_225, 0, sizeof(struct CVALUE*));
right_value312 = (void*)0;
right_value313 = (void*)0;
    left_node_218=self->mLeft;
    if(!node_compile(left_node_218,info)) {
        return (_Bool)0;
    }
    left_value_219=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value308=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value308,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_220=self->mRight;
    if(!node_compile(right_node_220,info)) {
        __result139__ = (_Bool)0;
        come_call_finalizer3(left_value_219,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result139__;
    }
    right_value_221=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value309=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value309,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    type_222=(struct sType*)come_increment_ref_count(left_value_219->type);
    fun_name_223="operator_equals";
    if(self->mQuote) {
        calling_fun_224=(_Bool)0;
    }
    else {
        calling_fun_224=operator_overload_fun(type_222,fun_name_223,left_value_219,right_value_221,(_Bool)0,info);
    }
    if(!calling_fun_224) {
        come_value_225=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value311=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value310=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1067, "CVALUE"))))))));
        come_call_finalizer3(right_value310,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value311,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj111=come_value_225->c_value;
        come_value_225->c_value=(char*)come_increment_ref_count(((char*)(right_value312=xsprintf("%s==%s",left_value_219->c_value,right_value_221->c_value))));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj112=come_value_225->type;
        come_value_225->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value313=sType_clone(left_value_219->type))));
        come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value313,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_225->type->mHeap=(_Bool)0;
        come_value_225->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_225->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_225));
        come_call_finalizer3(come_value_225,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result140__ = (_Bool)1;
    come_call_finalizer3(left_value_219,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_221,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_222,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result140__;
    come_call_finalizer3(left_value_219,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_221,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_222,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value314;
void* right_value315;
struct sNode* __dec_obj113;
void* right_value316;
struct sNode* __dec_obj114;
struct sNotEq2Node* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
    ((struct sNodeBase*)(right_value314=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value314,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj113=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value315=sNode_clone(left))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value315) { right_value315 = come_decrement_ref_count2(right_value315, ((struct sNode*)right_value315)->finalize, ((struct sNode*)right_value315)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj114=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value316=sNode_clone(right))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value316) { right_value316 = come_decrement_ref_count2(right_value316, ((struct sNode*)right_value316)->finalize, ((struct sNode*)right_value316)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result141__ = __result_obj__ = self;
    come_call_finalizer3(self,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result141__;
    come_call_finalizer3(self,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sNotEq2Node_kind(struct sNotEq2Node* self){
void* __result_obj__;
void* right_value317;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
right_value317 = (void*)0;
    __result142__ = __result_obj__ = ((char*)(right_value317=__builtin_string("sNotEq2Node")));
    right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result142__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
struct sNode* left_node_226;
void* right_value318;
struct CVALUE* left_value_227;
struct sNode* right_node_228;
_Bool __result143__;
void* right_value319;
struct CVALUE* right_value_229;
struct sType* type_230;
char* fun_name_231;
_Bool calling_fun_232;
void* right_value320;
void* right_value321;
struct CVALUE* come_value_233;
void* right_value322;
char* __dec_obj115;
void* right_value323;
struct sType* __dec_obj116;
_Bool __result144__;
memset(&left_node_226, 0, sizeof(struct sNode*));
right_value318 = (void*)0;
memset(&left_value_227, 0, sizeof(struct CVALUE*));
memset(&right_node_228, 0, sizeof(struct sNode*));
right_value319 = (void*)0;
memset(&right_value_229, 0, sizeof(struct CVALUE*));
memset(&type_230, 0, sizeof(struct sType*));
memset(&fun_name_231, 0, sizeof(char*));
memset(&calling_fun_232, 0, sizeof(_Bool));
right_value320 = (void*)0;
right_value321 = (void*)0;
memset(&come_value_233, 0, sizeof(struct CVALUE*));
right_value322 = (void*)0;
right_value323 = (void*)0;
    left_node_226=self->mLeft;
    if(!node_compile(left_node_226,info)) {
        return (_Bool)0;
    }
    left_value_227=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value318=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value318,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_228=self->mRight;
    if(!node_compile(right_node_228,info)) {
        __result143__ = (_Bool)0;
        come_call_finalizer3(left_value_227,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result143__;
    }
    right_value_229=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value319=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value319,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    type_230=(struct sType*)come_increment_ref_count(left_value_227->type);
    fun_name_231="operator_not_equals";
    if(self->mQuote) {
        calling_fun_232=(_Bool)0;
    }
    else {
        calling_fun_232=operator_overload_fun(type_230,fun_name_231,left_value_227,right_value_229,(_Bool)0,info);
    }
    if(!calling_fun_232) {
        come_value_233=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value321=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value320=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1132, "CVALUE"))))))));
        come_call_finalizer3(right_value320,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value321,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj115=come_value_233->c_value;
        come_value_233->c_value=(char*)come_increment_ref_count(((char*)(right_value322=xsprintf("%s!=%s",left_value_227->c_value,right_value_229->c_value))));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj116=come_value_233->type;
        come_value_233->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value323=sType_clone(left_value_227->type))));
        come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value323,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_233->type->mHeap=(_Bool)0;
        come_value_233->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_233->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_233));
        come_call_finalizer3(come_value_233,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result144__ = (_Bool)1;
    come_call_finalizer3(left_value_227,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_229,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_230,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result144__;
    come_call_finalizer3(left_value_227,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_229,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_230,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value324;
void* right_value325;
struct sNode* __dec_obj117;
void* right_value326;
struct sNode* __dec_obj118;
struct sAndNode* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
    ((struct sNodeBase*)(right_value324=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value324,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj117=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value325=sNode_clone(left))));
    if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value325) { right_value325 = come_decrement_ref_count2(right_value325, ((struct sNode*)right_value325)->finalize, ((struct sNode*)right_value325)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj118=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=sNode_clone(right))));
    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count2(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value326) { right_value326 = come_decrement_ref_count2(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result145__ = __result_obj__ = self;
    come_call_finalizer3(self,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result145__;
    come_call_finalizer3(self,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sAndNode_kind(struct sAndNode* self){
void* __result_obj__;
void* right_value327;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
right_value327 = (void*)0;
    __result146__ = __result_obj__ = ((char*)(right_value327=__builtin_string("sAndNode")));
    right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result146__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
struct sNode* left_node_234;
void* right_value328;
struct CVALUE* left_value_235;
struct sNode* right_node_236;
_Bool __result147__;
void* right_value329;
struct CVALUE* right_value_237;
struct sType* type_238;
char* fun_name_239;
_Bool calling_fun_240;
void* right_value330;
void* right_value331;
struct CVALUE* come_value_241;
void* right_value332;
char* __dec_obj119;
void* right_value333;
struct sType* __dec_obj120;
_Bool __result148__;
memset(&left_node_234, 0, sizeof(struct sNode*));
right_value328 = (void*)0;
memset(&left_value_235, 0, sizeof(struct CVALUE*));
memset(&right_node_236, 0, sizeof(struct sNode*));
right_value329 = (void*)0;
memset(&right_value_237, 0, sizeof(struct CVALUE*));
memset(&type_238, 0, sizeof(struct sType*));
memset(&fun_name_239, 0, sizeof(char*));
memset(&calling_fun_240, 0, sizeof(_Bool));
right_value330 = (void*)0;
right_value331 = (void*)0;
memset(&come_value_241, 0, sizeof(struct CVALUE*));
right_value332 = (void*)0;
right_value333 = (void*)0;
    left_node_234=self->mLeft;
    if(!node_compile(left_node_234,info)) {
        return (_Bool)0;
    }
    left_value_235=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value328=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value328,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_236=self->mRight;
    if(!node_compile(right_node_236,info)) {
        __result147__ = (_Bool)0;
        come_call_finalizer3(left_value_235,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result147__;
    }
    right_value_237=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value329=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value329,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    type_238=(struct sType*)come_increment_ref_count(left_value_235->type);
    fun_name_239="operator_and";
    if(self->mQuote) {
        calling_fun_240=(_Bool)0;
    }
    else {
        calling_fun_240=operator_overload_fun(type_238,fun_name_239,left_value_235,right_value_237,(_Bool)0,info);
    }
    if(!calling_fun_240) {
        come_value_241=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value331=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value330=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1198, "CVALUE"))))))));
        come_call_finalizer3(right_value330,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value331,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj119=come_value_241->c_value;
        come_value_241->c_value=(char*)come_increment_ref_count(((char*)(right_value332=xsprintf("%s&%s",left_value_235->c_value,right_value_237->c_value))));
        __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj120=come_value_241->type;
        come_value_241->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value333=sType_clone(left_value_235->type))));
        come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value333,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_241->type->mHeap=(_Bool)0;
        come_value_241->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_241->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_241));
        come_call_finalizer3(come_value_241,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result148__ = (_Bool)1;
    come_call_finalizer3(left_value_235,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_237,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_238,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result148__;
    come_call_finalizer3(left_value_235,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_237,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_238,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value334;
void* right_value335;
struct sNode* __dec_obj121;
void* right_value336;
struct sNode* __dec_obj122;
struct sXOrNode* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value334 = (void*)0;
right_value335 = (void*)0;
right_value336 = (void*)0;
    ((struct sNodeBase*)(right_value334=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value334,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj121=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value335=sNode_clone(left))));
    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value335) { right_value335 = come_decrement_ref_count2(right_value335, ((struct sNode*)right_value335)->finalize, ((struct sNode*)right_value335)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj122=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value336=sNode_clone(right))));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count2(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value336) { right_value336 = come_decrement_ref_count2(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result149__ = __result_obj__ = self;
    come_call_finalizer3(self,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result149__;
    come_call_finalizer3(self,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sXOrNode_kind(struct sXOrNode* self){
void* __result_obj__;
void* right_value337;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
right_value337 = (void*)0;
    __result150__ = __result_obj__ = ((char*)(right_value337=__builtin_string("sXOrNode")));
    right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result150__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
struct sNode* left_node_242;
void* right_value338;
struct CVALUE* left_value_243;
struct sNode* right_node_244;
_Bool __result151__;
void* right_value339;
struct CVALUE* right_value_245;
struct sType* type_246;
char* fun_name_247;
_Bool calling_fun_248;
void* right_value340;
void* right_value341;
struct CVALUE* come_value_249;
void* right_value342;
char* __dec_obj123;
void* right_value343;
struct sType* __dec_obj124;
_Bool __result152__;
memset(&left_node_242, 0, sizeof(struct sNode*));
right_value338 = (void*)0;
memset(&left_value_243, 0, sizeof(struct CVALUE*));
memset(&right_node_244, 0, sizeof(struct sNode*));
right_value339 = (void*)0;
memset(&right_value_245, 0, sizeof(struct CVALUE*));
memset(&type_246, 0, sizeof(struct sType*));
memset(&fun_name_247, 0, sizeof(char*));
memset(&calling_fun_248, 0, sizeof(_Bool));
right_value340 = (void*)0;
right_value341 = (void*)0;
memset(&come_value_249, 0, sizeof(struct CVALUE*));
right_value342 = (void*)0;
right_value343 = (void*)0;
    left_node_242=self->mLeft;
    if(!node_compile(left_node_242,info)) {
        return (_Bool)0;
    }
    left_value_243=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value338=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value338,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_244=self->mRight;
    if(!node_compile(right_node_244,info)) {
        __result151__ = (_Bool)0;
        come_call_finalizer3(left_value_243,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result151__;
    }
    right_value_245=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value339=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value339,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    type_246=(struct sType*)come_increment_ref_count(left_value_243->type);
    fun_name_247="operator_xor";
    if(self->mQuote) {
        calling_fun_248=(_Bool)0;
    }
    else {
        calling_fun_248=operator_overload_fun(type_246,fun_name_247,left_value_243,right_value_245,(_Bool)0,info);
    }
    if(!calling_fun_248) {
        come_value_249=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value341=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value340=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1263, "CVALUE"))))))));
        come_call_finalizer3(right_value340,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value341,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj123=come_value_249->c_value;
        come_value_249->c_value=(char*)come_increment_ref_count(((char*)(right_value342=xsprintf("%s^%s",left_value_243->c_value,right_value_245->c_value))));
        __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj124=come_value_249->type;
        come_value_249->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value343=sType_clone(left_value_243->type))));
        come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value343,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_249->type->mHeap=(_Bool)0;
        come_value_249->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_249->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_249));
        come_call_finalizer3(come_value_249,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result152__ = (_Bool)1;
    come_call_finalizer3(left_value_243,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_245,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_246,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result152__;
    come_call_finalizer3(left_value_243,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_245,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_246,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value344;
void* right_value345;
struct sNode* __dec_obj125;
void* right_value346;
struct sNode* __dec_obj126;
struct sOrNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
    ((struct sNodeBase*)(right_value344=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value344,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj125=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value345=sNode_clone(left))));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value345) { right_value345 = come_decrement_ref_count2(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj126=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value346=sNode_clone(right))));
    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value346) { right_value346 = come_decrement_ref_count2(right_value346, ((struct sNode*)right_value346)->finalize, ((struct sNode*)right_value346)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result153__ = __result_obj__ = self;
    come_call_finalizer3(self,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result153__;
    come_call_finalizer3(self,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sOrNode_kind(struct sOrNode* self){
void* __result_obj__;
void* right_value347;
char* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value347 = (void*)0;
    __result154__ = __result_obj__ = ((char*)(right_value347=__builtin_string("sOrNode")));
    right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result154__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
struct sNode* left_node_250;
void* right_value348;
struct CVALUE* left_value_251;
struct sNode* right_node_252;
_Bool __result155__;
void* right_value349;
struct CVALUE* right_value_253;
struct sType* type_254;
char* fun_name_255;
_Bool calling_fun_256;
void* right_value350;
void* right_value351;
struct CVALUE* come_value_257;
void* right_value352;
char* __dec_obj127;
void* right_value353;
struct sType* __dec_obj128;
_Bool __result156__;
memset(&left_node_250, 0, sizeof(struct sNode*));
right_value348 = (void*)0;
memset(&left_value_251, 0, sizeof(struct CVALUE*));
memset(&right_node_252, 0, sizeof(struct sNode*));
right_value349 = (void*)0;
memset(&right_value_253, 0, sizeof(struct CVALUE*));
memset(&type_254, 0, sizeof(struct sType*));
memset(&fun_name_255, 0, sizeof(char*));
memset(&calling_fun_256, 0, sizeof(_Bool));
right_value350 = (void*)0;
right_value351 = (void*)0;
memset(&come_value_257, 0, sizeof(struct CVALUE*));
right_value352 = (void*)0;
right_value353 = (void*)0;
    left_node_250=self->mLeft;
    if(!node_compile(left_node_250,info)) {
        return (_Bool)0;
    }
    left_value_251=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value348=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value348,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_252=self->mRight;
    if(!node_compile(right_node_252,info)) {
        __result155__ = (_Bool)0;
        come_call_finalizer3(left_value_251,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result155__;
    }
    right_value_253=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value349=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value349,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    type_254=(struct sType*)come_increment_ref_count(left_value_251->type);
    fun_name_255="operator_or";
    if(self->mQuote) {
        calling_fun_256=(_Bool)0;
    }
    else {
        calling_fun_256=operator_overload_fun(type_254,fun_name_255,left_value_251,right_value_253,(_Bool)0,info);
    }
    if(!calling_fun_256) {
        come_value_257=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value351=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value350=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1329, "CVALUE"))))))));
        come_call_finalizer3(right_value350,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value351,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj127=come_value_257->c_value;
        come_value_257->c_value=(char*)come_increment_ref_count(((char*)(right_value352=xsprintf("%s|%s",left_value_251->c_value,right_value_253->c_value))));
        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj128=come_value_257->type;
        come_value_257->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value353=sType_clone(left_value_251->type))));
        come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value353,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_257->type->mHeap=(_Bool)0;
        come_value_257->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_257->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_257));
        come_call_finalizer3(come_value_257,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result156__ = (_Bool)1;
    come_call_finalizer3(left_value_251,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_253,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_254,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result156__;
    come_call_finalizer3(left_value_251,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_253,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_254,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value354;
void* right_value355;
struct sNode* __dec_obj129;
void* right_value356;
struct sNode* __dec_obj130;
struct sAndAndNode* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
    ((struct sNodeBase*)(right_value354=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value354,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj129=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value355=sNode_clone(left))));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value355) { right_value355 = come_decrement_ref_count2(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj130=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value356=sNode_clone(right))));
    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value356) { right_value356 = come_decrement_ref_count2(right_value356, ((struct sNode*)right_value356)->finalize, ((struct sNode*)right_value356)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result157__ = __result_obj__ = self;
    come_call_finalizer3(self,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result157__;
    come_call_finalizer3(self,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sAndAndNode_kind(struct sAndAndNode* self){
void* __result_obj__;
void* right_value357;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value357 = (void*)0;
    __result158__ = __result_obj__ = ((char*)(right_value357=__builtin_string("sAndAndNode")));
    right_value357 = come_decrement_ref_count2(right_value357, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result158__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
struct sNode* left_node_258;
void* right_value358;
struct CVALUE* left_value_259;
struct sNode* right_node_260;
_Bool __result159__;
void* right_value359;
struct CVALUE* right_value_261;
struct sType* type_262;
char* fun_name_263;
_Bool calling_fun_264;
void* right_value360;
void* right_value361;
struct CVALUE* come_value_265;
void* right_value362;
char* __dec_obj131;
void* right_value363;
struct sType* __dec_obj132;
_Bool __result160__;
memset(&left_node_258, 0, sizeof(struct sNode*));
right_value358 = (void*)0;
memset(&left_value_259, 0, sizeof(struct CVALUE*));
memset(&right_node_260, 0, sizeof(struct sNode*));
right_value359 = (void*)0;
memset(&right_value_261, 0, sizeof(struct CVALUE*));
memset(&type_262, 0, sizeof(struct sType*));
memset(&fun_name_263, 0, sizeof(char*));
memset(&calling_fun_264, 0, sizeof(_Bool));
right_value360 = (void*)0;
right_value361 = (void*)0;
memset(&come_value_265, 0, sizeof(struct CVALUE*));
right_value362 = (void*)0;
right_value363 = (void*)0;
    left_node_258=self->mLeft;
    if(!node_compile(left_node_258,info)) {
        return (_Bool)0;
    }
    left_value_259=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value358=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value358,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_260=self->mRight;
    if(!node_compile(right_node_260,info)) {
        __result159__ = (_Bool)0;
        come_call_finalizer3(left_value_259,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result159__;
    }
    right_value_261=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value359=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value359,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    type_262=(struct sType*)come_increment_ref_count(left_value_259->type);
    fun_name_263="operator_andand";
    if(self->mQuote) {
        calling_fun_264=(_Bool)0;
    }
    else {
        calling_fun_264=operator_overload_fun(type_262,fun_name_263,left_value_259,right_value_261,(_Bool)0,info);
    }
    if(!calling_fun_264) {
        come_value_265=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value361=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value360=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1395, "CVALUE"))))))));
        come_call_finalizer3(right_value360,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value361,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj131=come_value_265->c_value;
        come_value_265->c_value=(char*)come_increment_ref_count(((char*)(right_value362=xsprintf("%s&&%s",left_value_259->c_value,right_value_261->c_value))));
        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value362 = come_decrement_ref_count2(right_value362, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj132=come_value_265->type;
        come_value_265->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value363=sType_clone(left_value_259->type))));
        come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value363,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_265->type->mHeap=(_Bool)0;
        come_value_265->var=left_value_259->var;
        add_come_last_code(info,"%s;\n",come_value_265->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_265));
        come_call_finalizer3(come_value_265,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result160__ = (_Bool)1;
    come_call_finalizer3(left_value_259,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_261,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_262,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result160__;
    come_call_finalizer3(left_value_259,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_261,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_262,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value364;
void* right_value365;
struct sNode* __dec_obj133;
void* right_value366;
struct sNode* __dec_obj134;
struct sOrOrNode* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
    ((struct sNodeBase*)(right_value364=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value364,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj133=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value365=sNode_clone(left))));
    if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value365) { right_value365 = come_decrement_ref_count2(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj134=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value366=sNode_clone(right))));
    if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value366) { right_value366 = come_decrement_ref_count2(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result161__ = __result_obj__ = self;
    come_call_finalizer3(self,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result161__;
    come_call_finalizer3(self,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sOrOrNode_kind(struct sOrOrNode* self){
void* __result_obj__;
void* right_value367;
char* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value367 = (void*)0;
    __result162__ = __result_obj__ = ((char*)(right_value367=__builtin_string("sOrOrNode")));
    right_value367 = come_decrement_ref_count2(right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result162__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
struct sNode* left_node_266;
void* right_value368;
struct CVALUE* left_value_267;
struct sNode* right_node_268;
_Bool __result163__;
void* right_value369;
struct CVALUE* right_value_269;
struct sType* type_270;
char* fun_name_271;
_Bool calling_fun_272;
void* right_value370;
void* right_value371;
struct CVALUE* come_value_273;
void* right_value372;
char* __dec_obj135;
void* right_value373;
struct sType* __dec_obj136;
_Bool __result164__;
memset(&left_node_266, 0, sizeof(struct sNode*));
right_value368 = (void*)0;
memset(&left_value_267, 0, sizeof(struct CVALUE*));
memset(&right_node_268, 0, sizeof(struct sNode*));
right_value369 = (void*)0;
memset(&right_value_269, 0, sizeof(struct CVALUE*));
memset(&type_270, 0, sizeof(struct sType*));
memset(&fun_name_271, 0, sizeof(char*));
memset(&calling_fun_272, 0, sizeof(_Bool));
right_value370 = (void*)0;
right_value371 = (void*)0;
memset(&come_value_273, 0, sizeof(struct CVALUE*));
right_value372 = (void*)0;
right_value373 = (void*)0;
    left_node_266=self->mLeft;
    if(!node_compile(left_node_266,info)) {
        return (_Bool)0;
    }
    left_value_267=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value368=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value368,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_268=self->mRight;
    if(!node_compile(right_node_268,info)) {
        __result163__ = (_Bool)0;
        come_call_finalizer3(left_value_267,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result163__;
    }
    right_value_269=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value369=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value369,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    type_270=(struct sType*)come_increment_ref_count(left_value_267->type);
    fun_name_271="operator_oror";
    if(self->mQuote) {
        calling_fun_272=(_Bool)0;
    }
    else {
        calling_fun_272=operator_overload_fun(type_270,fun_name_271,left_value_267,right_value_269,(_Bool)0,info);
    }
    if(!calling_fun_272) {
        come_value_273=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value371=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value370=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1460, "CVALUE"))))))));
        come_call_finalizer3(right_value370,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(right_value371,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj135=come_value_273->c_value;
        come_value_273->c_value=(char*)come_increment_ref_count(((char*)(right_value372=xsprintf("%s||%s",left_value_267->c_value,right_value_269->c_value))));
        __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj136=come_value_273->type;
        come_value_273->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value373=sType_clone(left_value_267->type))));
        come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value373,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_273->type->mHeap=(_Bool)0;
        come_value_273->var=left_value_267->var;
        add_come_last_code(info,"%s;\n",come_value_273->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_273));
        come_call_finalizer3(come_value_273,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result164__ = (_Bool)1;
    come_call_finalizer3(left_value_267,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_269,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_270,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result164__;
    come_call_finalizer3(left_value_267,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_269,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_270,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
void* right_value374;
void* right_value375;
struct sNode* __dec_obj137;
void* right_value376;
struct sNode* __dec_obj138;
struct sCommaNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
    ((struct sNodeBase*)(right_value374=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value374,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj137=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value375=sNode_clone(left))));
    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value375) { right_value375 = come_decrement_ref_count2(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj138=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value376=sNode_clone(right))));
    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value376) { right_value376 = come_decrement_ref_count2(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result165__ = __result_obj__ = self;
    come_call_finalizer3(self,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result165__;
    come_call_finalizer3(self,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sCommaNode_kind(struct sCommaNode* self){
void* __result_obj__;
void* right_value377;
char* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
right_value377 = (void*)0;
    __result166__ = __result_obj__ = ((char*)(right_value377=__builtin_string("sCommaNode")));
    right_value377 = come_decrement_ref_count2(right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result166__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
struct sNode* left_node_274;
void* right_value378;
struct CVALUE* left_value_275;
struct sNode* right_node_276;
_Bool __result167__;
void* right_value379;
struct CVALUE* right_value_277;
void* right_value380;
void* right_value381;
struct CVALUE* come_value_278;
void* right_value382;
char* __dec_obj139;
void* right_value383;
struct sType* __dec_obj140;
_Bool __result168__;
memset(&left_node_274, 0, sizeof(struct sNode*));
right_value378 = (void*)0;
memset(&left_value_275, 0, sizeof(struct CVALUE*));
memset(&right_node_276, 0, sizeof(struct sNode*));
right_value379 = (void*)0;
memset(&right_value_277, 0, sizeof(struct CVALUE*));
right_value380 = (void*)0;
right_value381 = (void*)0;
memset(&come_value_278, 0, sizeof(struct CVALUE*));
right_value382 = (void*)0;
right_value383 = (void*)0;
    left_node_274=self->mLeft;
    if(!node_compile(left_node_274,info)) {
        return (_Bool)0;
    }
    left_value_275=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value378=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value378,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    right_node_276=self->mRight;
    if(!node_compile(right_node_276,info)) {
        __result167__ = (_Bool)0;
        come_call_finalizer3(left_value_275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result167__;
    }
    right_value_277=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value379=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value379,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    come_value_278=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value381=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value380=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1512, "CVALUE"))))))));
    come_call_finalizer3(right_value380,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value381,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj139=come_value_278->c_value;
    come_value_278->c_value=(char*)come_increment_ref_count(((char*)(right_value382=xsprintf("%s,%s",left_value_275->c_value,right_value_277->c_value))));
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj140=come_value_278->type;
    come_value_278->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value383=sType_clone(left_value_275->type))));
    come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value383,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_278->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_278->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_278));
    __result168__ = (_Bool)1;
    come_call_finalizer3(left_value_275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_277,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_278,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result168__;
    come_call_finalizer3(left_value_275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_277,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_278,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__;
void* right_value384;
void* right_value385;
struct sNode* __dec_obj141;
void* right_value386;
struct sNode* __dec_obj142;
void* right_value387;
struct sNode* __dec_obj143;
struct sConditionalNode* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
right_value384 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
    ((struct sNodeBase*)(right_value384=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(right_value384,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj141=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value385=sNode_clone(value1))));
    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value385) { right_value385 = come_decrement_ref_count2(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj142=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value386=sNode_clone(value2))));
    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj143=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value387=sNode_clone(value3))));
    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value387) { right_value387 = come_decrement_ref_count2(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result169__ = __result_obj__ = self;
    come_call_finalizer3(self,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result169__;
    come_call_finalizer3(self,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

char* sConditionalNode_kind(struct sConditionalNode* self){
void* __result_obj__;
void* right_value388;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value388 = (void*)0;
    __result170__ = __result_obj__ = ((char*)(right_value388=__builtin_string("sConditionalNode")));
    right_value388 = come_decrement_ref_count2(right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result170__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
struct sNode* value1_279;
void* right_value389;
struct CVALUE* value1_value_280;
struct sNode* value2_281;
_Bool __result171__;
void* right_value390;
struct CVALUE* value2_value_282;
struct sNode* value3_283;
_Bool __result172__;
void* right_value391;
struct CVALUE* value3_value_284;
void* right_value392;
void* right_value393;
struct CVALUE* come_value_285;
void* right_value394;
char* __dec_obj144;
void* right_value395;
struct sType* __dec_obj145;
_Bool __result173__;
memset(&value1_279, 0, sizeof(struct sNode*));
right_value389 = (void*)0;
memset(&value1_value_280, 0, sizeof(struct CVALUE*));
memset(&value2_281, 0, sizeof(struct sNode*));
right_value390 = (void*)0;
memset(&value2_value_282, 0, sizeof(struct CVALUE*));
memset(&value3_283, 0, sizeof(struct sNode*));
right_value391 = (void*)0;
memset(&value3_value_284, 0, sizeof(struct CVALUE*));
right_value392 = (void*)0;
right_value393 = (void*)0;
memset(&come_value_285, 0, sizeof(struct CVALUE*));
right_value394 = (void*)0;
right_value395 = (void*)0;
    value1_279=self->mValue1;
    if(!node_compile(value1_279,info)) {
        return (_Bool)0;
    }
    value1_value_280=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value389=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value389,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    value2_281=self->mValue2;
    if(!node_compile(value2_281,info)) {
        __result171__ = (_Bool)0;
        come_call_finalizer3(value1_value_280,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result171__;
    }
    value2_value_282=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value390=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value390,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    value3_283=self->mValue3;
    if(!node_compile(value3_283,info)) {
        __result172__ = (_Bool)0;
        come_call_finalizer3(value1_value_280,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value2_value_282,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result172__;
    }
    value3_value_284=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value391=get_value_from_stack(-1,info))));
    come_call_finalizer3(right_value391,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    come_value_285=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value393=CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value392=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1572, "CVALUE"))))))));
    come_call_finalizer3(right_value392,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(right_value393,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj144=come_value_285->c_value;
    come_value_285->c_value=(char*)come_increment_ref_count(((char*)(right_value394=xsprintf("%s?%s:%s",value1_value_280->c_value,value2_value_282->c_value,value3_value_284->c_value))));
    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value394 = come_decrement_ref_count2(right_value394, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj145=come_value_285->type;
    come_value_285->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value395=sType_clone(value2_value_282->type))));
    come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value395,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_285->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_285->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_285));
    __result173__ = (_Bool)1;
    come_call_finalizer3(value1_value_280,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value2_value_282,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value3_value_284,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_285,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result173__;
    come_call_finalizer3(value1_value_280,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value2_value_282,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(value3_value_284,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_285,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__;
void* right_value396;
struct sNode* node_286;
void* right_value397;
struct sNode* right_287;
void* right_value398;
void* right_value399;
struct sNode* _inf_value2;
struct sMultNode* _inf_obj_value2;
void* right_value404;
struct sNode* __result176__;
void* right_value405;
struct sNode* right_289;
void* right_value406;
void* right_value407;
struct sNode* _inf_value3;
struct sDivNode* _inf_obj_value3;
void* right_value412;
struct sNode* __result179__;
void* right_value413;
struct sNode* right_291;
void* right_value414;
void* right_value415;
struct sNode* _inf_value4;
struct sModNode* _inf_obj_value4;
void* right_value420;
struct sNode* __result182__;
void* right_value421;
struct sNode* right_293;
void* right_value422;
void* right_value423;
struct sNode* _inf_value5;
struct sMultNode* _inf_obj_value5;
void* right_value428;
struct sNode* __result185__;
void* right_value429;
struct sNode* right_295;
void* right_value430;
void* right_value431;
struct sNode* _inf_value6;
struct sDivNode* _inf_obj_value6;
void* right_value436;
struct sNode* __result188__;
void* right_value437;
struct sNode* right_297;
void* right_value438;
void* right_value439;
struct sNode* _inf_value7;
struct sModNode* _inf_obj_value7;
void* right_value444;
struct sNode* __result191__;
struct sNode* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
right_value396 = (void*)0;
memset(&node_286, 0, sizeof(struct sNode*));
right_value397 = (void*)0;
memset(&right_287, 0, sizeof(struct sNode*));
right_value398 = (void*)0;
right_value399 = (void*)0;
right_value404 = (void*)0;
right_value405 = (void*)0;
memset(&right_289, 0, sizeof(struct sNode*));
right_value406 = (void*)0;
right_value407 = (void*)0;
right_value412 = (void*)0;
right_value413 = (void*)0;
memset(&right_291, 0, sizeof(struct sNode*));
right_value414 = (void*)0;
right_value415 = (void*)0;
right_value420 = (void*)0;
right_value421 = (void*)0;
memset(&right_293, 0, sizeof(struct sNode*));
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value428 = (void*)0;
right_value429 = (void*)0;
memset(&right_295, 0, sizeof(struct sNode*));
right_value430 = (void*)0;
right_value431 = (void*)0;
right_value436 = (void*)0;
right_value437 = (void*)0;
memset(&right_297, 0, sizeof(struct sNode*));
right_value438 = (void*)0;
right_value439 = (void*)0;
right_value444 = (void*)0;
    node_286=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value396=expression_node_v99(info))));
    if(right_value396) { right_value396 = come_decrement_ref_count2(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(!node_286->terminated(node_286->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            right_287=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value397=mult_exp(info))));
            if(right_value397) { right_value397 = come_decrement_ref_count2(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1599, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sMultNode*)(right_value399=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value398=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1599, "sMultNode")))),(struct sNode*)come_increment_ref_count(node_286),(struct sNode*)come_increment_ref_count(right_287),(_Bool)0,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sMultNode_finalize;
            _inf_value2->clone=(void*)sMultNode_clone;
            _inf_value2->compile=(void*)sMultNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sMultNode_kind;
            __result176__ = __result_obj__ = ((struct sNode*)(right_value404=_inf_value2));
            if(right_287) { right_287 = come_decrement_ref_count2(right_287, ((struct sNode*)right_287)->finalize, ((struct sNode*)right_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_286) { node_286 = come_decrement_ref_count2(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value398,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value399,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value404) { right_value404 = come_decrement_ref_count2(right_value404, ((struct sNode*)right_value404)->finalize, ((struct sNode*)right_value404)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result176__;
            if(right_287) { right_287 = come_decrement_ref_count2(right_287, ((struct sNode*)right_287)->finalize, ((struct sNode*)right_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(*info->p==47&&*(info->p+1)!=61) {
                info->p++;
                skip_spaces_and_lf(info);
                right_289=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value405=mult_exp(info))));
                if(right_value405) { right_value405 = come_decrement_ref_count2(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1607, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sDivNode*)(right_value407=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value406=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1607, "sDivNode")))),(struct sNode*)come_increment_ref_count(node_286),(struct sNode*)come_increment_ref_count(right_289),(_Bool)0,info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sDivNode_finalize;
                _inf_value3->clone=(void*)sDivNode_clone;
                _inf_value3->compile=(void*)sDivNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sNodeBase_terminated;
                _inf_value3->kind=(void*)sDivNode_kind;
                __result179__ = __result_obj__ = ((struct sNode*)(right_value412=_inf_value3));
                if(right_289) { right_289 = come_decrement_ref_count2(right_289, ((struct sNode*)right_289)->finalize, ((struct sNode*)right_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_286) { node_286 = come_decrement_ref_count2(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value406,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value407,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value412) { right_value412 = come_decrement_ref_count2(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result179__;
                if(right_289) { right_289 = come_decrement_ref_count2(right_289, ((struct sNode*)right_289)->finalize, ((struct sNode*)right_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(*info->p==37&&*(info->p+1)!=61) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_291=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value413=expression_node_v99(info))));
                    if(right_value413) { right_value413 = come_decrement_ref_count2(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1615, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sModNode*)(right_value415=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value414=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1615, "sModNode")))),(struct sNode*)come_increment_ref_count(node_286),(struct sNode*)come_increment_ref_count(right_291),(_Bool)0,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sModNode_finalize;
                    _inf_value4->clone=(void*)sModNode_clone;
                    _inf_value4->compile=(void*)sModNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sNodeBase_terminated;
                    _inf_value4->kind=(void*)sModNode_kind;
                    __result182__ = __result_obj__ = ((struct sNode*)(right_value420=_inf_value4));
                    if(right_291) { right_291 = come_decrement_ref_count2(right_291, ((struct sNode*)right_291)->finalize, ((struct sNode*)right_291)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_286) { node_286 = come_decrement_ref_count2(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value414,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value415,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value420) { right_value420 = come_decrement_ref_count2(right_value420, ((struct sNode*)right_value420)->finalize, ((struct sNode*)right_value420)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result182__;
                    if(right_291) { right_291 = come_decrement_ref_count2(right_291, ((struct sNode*)right_291)->finalize, ((struct sNode*)right_291)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(!node_286->terminated(node_286->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_293=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value421=mult_exp(info))));
                        if(right_value421) { right_value421 = come_decrement_ref_count2(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1623, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sMultNode*)(right_value423=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value422=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 1623, "sMultNode")))),(struct sNode*)come_increment_ref_count(node_286),(struct sNode*)come_increment_ref_count(right_293),(_Bool)1,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sMultNode_finalize;
                        _inf_value5->clone=(void*)sMultNode_clone;
                        _inf_value5->compile=(void*)sMultNode_compile;
                        _inf_value5->sline=(void*)sNodeBase_sline;
                        _inf_value5->sname=(void*)sNodeBase_sname;
                        _inf_value5->terminated=(void*)sNodeBase_terminated;
                        _inf_value5->kind=(void*)sMultNode_kind;
                        __result185__ = __result_obj__ = ((struct sNode*)(right_value428=_inf_value5));
                        if(right_293) { right_293 = come_decrement_ref_count2(right_293, ((struct sNode*)right_293)->finalize, ((struct sNode*)right_293)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_286) { node_286 = come_decrement_ref_count2(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value422,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value423,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value428) { right_value428 = come_decrement_ref_count2(right_value428, ((struct sNode*)right_value428)->finalize, ((struct sNode*)right_value428)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result185__;
                        if(right_293) { right_293 = come_decrement_ref_count2(right_293, ((struct sNode*)right_293)->finalize, ((struct sNode*)right_293)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(*info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61) {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            right_295=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value429=mult_exp(info))));
                            if(right_value429) { right_value429 = come_decrement_ref_count2(right_value429, ((struct sNode*)right_value429)->finalize, ((struct sNode*)right_value429)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1631, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sDivNode*)(right_value431=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value430=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 1631, "sDivNode")))),(struct sNode*)come_increment_ref_count(node_286),(struct sNode*)come_increment_ref_count(right_295),(_Bool)1,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sDivNode_finalize;
                            _inf_value6->clone=(void*)sDivNode_clone;
                            _inf_value6->compile=(void*)sDivNode_compile;
                            _inf_value6->sline=(void*)sNodeBase_sline;
                            _inf_value6->sname=(void*)sNodeBase_sname;
                            _inf_value6->terminated=(void*)sNodeBase_terminated;
                            _inf_value6->kind=(void*)sDivNode_kind;
                            __result188__ = __result_obj__ = ((struct sNode*)(right_value436=_inf_value6));
                            if(right_295) { right_295 = come_decrement_ref_count2(right_295, ((struct sNode*)right_295)->finalize, ((struct sNode*)right_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_286) { node_286 = come_decrement_ref_count2(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value430,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value431,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value436) { right_value436 = come_decrement_ref_count2(right_value436, ((struct sNode*)right_value436)->finalize, ((struct sNode*)right_value436)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result188__;
                            if(right_295) { right_295 = come_decrement_ref_count2(right_295, ((struct sNode*)right_295)->finalize, ((struct sNode*)right_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(*info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                                right_297=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value437=expression_node_v99(info))));
                                if(right_value437) { right_value437 = come_decrement_ref_count2(right_value437, ((struct sNode*)right_value437)->finalize, ((struct sNode*)right_value437)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1639, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sModNode*)(right_value439=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value438=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 1639, "sModNode")))),(struct sNode*)come_increment_ref_count(node_286),(struct sNode*)come_increment_ref_count(right_297),(_Bool)1,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sModNode_finalize;
                                _inf_value7->clone=(void*)sModNode_clone;
                                _inf_value7->compile=(void*)sModNode_compile;
                                _inf_value7->sline=(void*)sNodeBase_sline;
                                _inf_value7->sname=(void*)sNodeBase_sname;
                                _inf_value7->terminated=(void*)sNodeBase_terminated;
                                _inf_value7->kind=(void*)sModNode_kind;
                                __result191__ = __result_obj__ = ((struct sNode*)(right_value444=_inf_value7));
                                if(right_297) { right_297 = come_decrement_ref_count2(right_297, ((struct sNode*)right_297)->finalize, ((struct sNode*)right_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_286) { node_286 = come_decrement_ref_count2(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(right_value438,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value439,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value444) { right_value444 = come_decrement_ref_count2(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result191__;
                                if(right_297) { right_297 = come_decrement_ref_count2(right_297, ((struct sNode*)right_297)->finalize, ((struct sNode*)right_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result192__ = __result_obj__ = node_286;
    if(node_286) { node_286 = come_decrement_ref_count2(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result192__;
    if(node_286) { node_286 = come_decrement_ref_count2(node_286, ((struct sNode*)node_286)->finalize, ((struct sNode*)node_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sMultNode_finalize(struct sMultNode* self){
                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__;
struct sMultNode* __result183__;
void* right_value424;
struct sMultNode* result_294;
void* right_value425;
char* __dec_obj155;
void* right_value426;
struct sNode* __dec_obj156;
void* right_value427;
struct sNode* __dec_obj157;
struct sMultNode* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value424 = (void*)0;
memset(&result_294, 0, sizeof(struct sMultNode*));
right_value425 = (void*)0;
right_value426 = (void*)0;
right_value427 = (void*)0;
                            if(self==(void*)0) {
                                __result183__ = __result_obj__ = (void*)0;
                                return __result183__;
                            }
                            result_294=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value424=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "sMultNode"))));
                            come_call_finalizer3(right_value424,sMultNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(self!=((void*)0)) {
                                result_294->sline=self->sline;
                            }
                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                __dec_obj155=result_294->sname;
                                result_294->sname=(char*)come_increment_ref_count(((char*)(right_value425=string_clone(self->sname))));
                                __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value425 = come_decrement_ref_count2(right_value425, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(self!=((void*)0)) {
                                result_294->mQuote=self->mQuote;
                            }
                            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                __dec_obj156=result_294->mLeft;
                                result_294->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value426=sNode_clone(self->mLeft))));
                                if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value426) { right_value426 = come_decrement_ref_count2(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                __dec_obj157=result_294->mRight;
                                result_294->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value427=sNode_clone(self->mRight))));
                                if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value427) { right_value427 = come_decrement_ref_count2(right_value427, ((struct sNode*)right_value427)->finalize, ((struct sNode*)right_value427)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            __result184__ = __result_obj__ = result_294;
                            come_call_finalizer3(result_294,sMultNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result184__;
                            come_call_finalizer3(result_294,sMultNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sDivNode_finalize(struct sDivNode* self){
                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__;
struct sDivNode* __result186__;
void* right_value432;
struct sDivNode* result_296;
void* right_value433;
char* __dec_obj158;
void* right_value434;
struct sNode* __dec_obj159;
void* right_value435;
struct sNode* __dec_obj160;
struct sDivNode* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
right_value432 = (void*)0;
memset(&result_296, 0, sizeof(struct sDivNode*));
right_value433 = (void*)0;
right_value434 = (void*)0;
right_value435 = (void*)0;
                                if(self==(void*)0) {
                                    __result186__ = __result_obj__ = (void*)0;
                                    return __result186__;
                                }
                                result_296=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value432=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "sDivNode"))));
                                come_call_finalizer3(right_value432,sDivNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(self!=((void*)0)) {
                                    result_296->sline=self->sline;
                                }
                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                    __dec_obj158=result_296->sname;
                                    result_296->sname=(char*)come_increment_ref_count(((char*)(right_value433=string_clone(self->sname))));
                                    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value433 = come_decrement_ref_count2(right_value433, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(self!=((void*)0)) {
                                    result_296->mQuote=self->mQuote;
                                }
                                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                    __dec_obj159=result_296->mLeft;
                                    result_296->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value434=sNode_clone(self->mLeft))));
                                    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value434) { right_value434 = come_decrement_ref_count2(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                    __dec_obj160=result_296->mRight;
                                    result_296->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value435=sNode_clone(self->mRight))));
                                    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value435) { right_value435 = come_decrement_ref_count2(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                __result187__ = __result_obj__ = result_296;
                                come_call_finalizer3(result_296,sDivNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result187__;
                                come_call_finalizer3(result_296,sDivNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sModNode_finalize(struct sModNode* self){
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__;
struct sModNode* __result189__;
void* right_value440;
struct sModNode* result_298;
void* right_value441;
char* __dec_obj161;
void* right_value442;
struct sNode* __dec_obj162;
void* right_value443;
struct sNode* __dec_obj163;
struct sModNode* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
right_value440 = (void*)0;
memset(&result_298, 0, sizeof(struct sModNode*));
right_value441 = (void*)0;
right_value442 = (void*)0;
right_value443 = (void*)0;
                                    if(self==(void*)0) {
                                        __result189__ = __result_obj__ = (void*)0;
                                        return __result189__;
                                    }
                                    result_298=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value440=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "sModNode"))));
                                    come_call_finalizer3(right_value440,sModNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(self!=((void*)0)) {
                                        result_298->sline=self->sline;
                                    }
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        __dec_obj161=result_298->sname;
                                        result_298->sname=(char*)come_increment_ref_count(((char*)(right_value441=string_clone(self->sname))));
                                        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value441 = come_decrement_ref_count2(right_value441, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)) {
                                        result_298->mQuote=self->mQuote;
                                    }
                                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                        __dec_obj162=result_298->mLeft;
                                        result_298->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value442=sNode_clone(self->mLeft))));
                                        if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count2(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value442) { right_value442 = come_decrement_ref_count2(right_value442, ((struct sNode*)right_value442)->finalize, ((struct sNode*)right_value442)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                        __dec_obj163=result_298->mRight;
                                        result_298->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value443=sNode_clone(self->mRight))));
                                        if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value443) { right_value443 = come_decrement_ref_count2(right_value443, ((struct sNode*)right_value443)->finalize, ((struct sNode*)right_value443)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    __result190__ = __result_obj__ = result_298;
                                    come_call_finalizer3(result_298,sModNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result190__;
                                    come_call_finalizer3(result_298,sModNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* add_exp(struct sInfo* info){
void* __result_obj__;
void* right_value445;
struct sNode* node_299;
void* right_value446;
struct sNode* right_300;
void* right_value447;
void* right_value448;
struct sNode* _inf_value8;
struct sAddNode* _inf_obj_value8;
void* right_value453;
struct sNode* __result195__;
void* right_value454;
struct sNode* right_302;
void* right_value455;
void* right_value456;
struct sNode* _inf_value9;
struct sSubNode* _inf_obj_value9;
void* right_value461;
struct sNode* __result198__;
void* right_value462;
struct sNode* right_304;
void* right_value463;
void* right_value464;
struct sNode* _inf_value10;
struct sAddNode* _inf_obj_value10;
void* right_value469;
struct sNode* __result201__;
void* right_value470;
struct sNode* right_306;
void* right_value471;
void* right_value472;
struct sNode* _inf_value11;
struct sSubNode* _inf_obj_value11;
void* right_value477;
struct sNode* __result204__;
struct sNode* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
right_value445 = (void*)0;
memset(&node_299, 0, sizeof(struct sNode*));
right_value446 = (void*)0;
memset(&right_300, 0, sizeof(struct sNode*));
right_value447 = (void*)0;
right_value448 = (void*)0;
right_value453 = (void*)0;
right_value454 = (void*)0;
memset(&right_302, 0, sizeof(struct sNode*));
right_value455 = (void*)0;
right_value456 = (void*)0;
right_value461 = (void*)0;
right_value462 = (void*)0;
memset(&right_304, 0, sizeof(struct sNode*));
right_value463 = (void*)0;
right_value464 = (void*)0;
right_value469 = (void*)0;
right_value470 = (void*)0;
memset(&right_306, 0, sizeof(struct sNode*));
right_value471 = (void*)0;
right_value472 = (void*)0;
right_value477 = (void*)0;
    node_299=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value445=mult_exp(info))));
    if(right_value445) { right_value445 = come_decrement_ref_count2(right_value445, ((struct sNode*)right_value445)->finalize, ((struct sNode*)right_value445)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43) {
            info->p++;
            skip_spaces_and_lf(info);
            right_300=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value446=add_exp(info))));
            if(right_value446) { right_value446 = come_decrement_ref_count2(right_value446, ((struct sNode*)right_value446)->finalize, ((struct sNode*)right_value446)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1665, "struct sNode");
            _inf_obj_value8=come_increment_ref_count(((struct sAddNode*)(right_value448=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value447=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1665, "sAddNode")))),(struct sNode*)come_increment_ref_count(node_299),(struct sNode*)come_increment_ref_count(right_300),(_Bool)0,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sAddNode_finalize;
            _inf_value8->clone=(void*)sAddNode_clone;
            _inf_value8->compile=(void*)sAddNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sAddNode_kind;
            __result195__ = __result_obj__ = ((struct sNode*)(right_value453=_inf_value8));
            if(right_300) { right_300 = come_decrement_ref_count2(right_300, ((struct sNode*)right_300)->finalize, ((struct sNode*)right_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_299) { node_299 = come_decrement_ref_count2(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value447,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value448,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value453) { right_value453 = come_decrement_ref_count2(right_value453, ((struct sNode*)right_value453)->finalize, ((struct sNode*)right_value453)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result195__;
            if(right_300) { right_300 = come_decrement_ref_count2(right_300, ((struct sNode*)right_300)->finalize, ((struct sNode*)right_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(*info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                right_302=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value454=add_exp(info))));
                if(right_value454) { right_value454 = come_decrement_ref_count2(right_value454, ((struct sNode*)right_value454)->finalize, ((struct sNode*)right_value454)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1674, "struct sNode");
                _inf_obj_value9=come_increment_ref_count(((struct sSubNode*)(right_value456=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value455=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1674, "sSubNode")))),(struct sNode*)come_increment_ref_count(node_299),(struct sNode*)come_increment_ref_count(right_302),(_Bool)0,info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sSubNode_finalize;
                _inf_value9->clone=(void*)sSubNode_clone;
                _inf_value9->compile=(void*)sSubNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sSubNode_kind;
                __result198__ = __result_obj__ = ((struct sNode*)(right_value461=_inf_value9));
                if(right_302) { right_302 = come_decrement_ref_count2(right_302, ((struct sNode*)right_302)->finalize, ((struct sNode*)right_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_299) { node_299 = come_decrement_ref_count2(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value455,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value456,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value461) { right_value461 = come_decrement_ref_count2(right_value461, ((struct sNode*)right_value461)->finalize, ((struct sNode*)right_value461)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result198__;
                if(right_302) { right_302 = come_decrement_ref_count2(right_302, ((struct sNode*)right_302)->finalize, ((struct sNode*)right_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(*info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    right_304=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value462=add_exp(info))));
                    if(right_value462) { right_value462 = come_decrement_ref_count2(right_value462, ((struct sNode*)right_value462)->finalize, ((struct sNode*)right_value462)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1683, "struct sNode");
                    _inf_obj_value10=come_increment_ref_count(((struct sAddNode*)(right_value464=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value463=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 1683, "sAddNode")))),(struct sNode*)come_increment_ref_count(node_299),(struct sNode*)come_increment_ref_count(right_304),(_Bool)1,info))));
                    _inf_value10->_protocol_obj=_inf_obj_value10;
                    _inf_value10->finalize=(void*)sAddNode_finalize;
                    _inf_value10->clone=(void*)sAddNode_clone;
                    _inf_value10->compile=(void*)sAddNode_compile;
                    _inf_value10->sline=(void*)sNodeBase_sline;
                    _inf_value10->sname=(void*)sNodeBase_sname;
                    _inf_value10->terminated=(void*)sNodeBase_terminated;
                    _inf_value10->kind=(void*)sAddNode_kind;
                    __result201__ = __result_obj__ = ((struct sNode*)(right_value469=_inf_value10));
                    if(right_304) { right_304 = come_decrement_ref_count2(right_304, ((struct sNode*)right_304)->finalize, ((struct sNode*)right_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_299) { node_299 = come_decrement_ref_count2(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value463,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value464,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value469) { right_value469 = come_decrement_ref_count2(right_value469, ((struct sNode*)right_value469)->finalize, ((struct sNode*)right_value469)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result201__;
                    if(right_304) { right_304 = come_decrement_ref_count2(right_304, ((struct sNode*)right_304)->finalize, ((struct sNode*)right_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(*info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_306=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value470=add_exp(info))));
                        if(right_value470) { right_value470 = come_decrement_ref_count2(right_value470, ((struct sNode*)right_value470)->finalize, ((struct sNode*)right_value470)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1692, "struct sNode");
                        _inf_obj_value11=come_increment_ref_count(((struct sSubNode*)(right_value472=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value471=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 1692, "sSubNode")))),(struct sNode*)come_increment_ref_count(node_299),(struct sNode*)come_increment_ref_count(right_306),(_Bool)1,info))));
                        _inf_value11->_protocol_obj=_inf_obj_value11;
                        _inf_value11->finalize=(void*)sSubNode_finalize;
                        _inf_value11->clone=(void*)sSubNode_clone;
                        _inf_value11->compile=(void*)sSubNode_compile;
                        _inf_value11->sline=(void*)sNodeBase_sline;
                        _inf_value11->sname=(void*)sNodeBase_sname;
                        _inf_value11->terminated=(void*)sNodeBase_terminated;
                        _inf_value11->kind=(void*)sSubNode_kind;
                        __result204__ = __result_obj__ = ((struct sNode*)(right_value477=_inf_value11));
                        if(right_306) { right_306 = come_decrement_ref_count2(right_306, ((struct sNode*)right_306)->finalize, ((struct sNode*)right_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_299) { node_299 = come_decrement_ref_count2(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value471,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value472,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value477) { right_value477 = come_decrement_ref_count2(right_value477, ((struct sNode*)right_value477)->finalize, ((struct sNode*)right_value477)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result204__;
                        if(right_306) { right_306 = come_decrement_ref_count2(right_306, ((struct sNode*)right_306)->finalize, ((struct sNode*)right_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result205__ = __result_obj__ = node_299;
    if(node_299) { node_299 = come_decrement_ref_count2(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result205__;
    if(node_299) { node_299 = come_decrement_ref_count2(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAddNode_finalize(struct sAddNode* self){
                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__;
struct sAddNode* __result199__;
void* right_value465;
struct sAddNode* result_305;
void* right_value466;
char* __dec_obj170;
void* right_value467;
struct sNode* __dec_obj171;
void* right_value468;
struct sNode* __dec_obj172;
struct sAddNode* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
right_value465 = (void*)0;
memset(&result_305, 0, sizeof(struct sAddNode*));
right_value466 = (void*)0;
right_value467 = (void*)0;
right_value468 = (void*)0;
                        if(self==(void*)0) {
                            __result199__ = __result_obj__ = (void*)0;
                            return __result199__;
                        }
                        result_305=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value465=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "sAddNode"))));
                        come_call_finalizer3(right_value465,sAddNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(self!=((void*)0)) {
                            result_305->sline=self->sline;
                        }
                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                            __dec_obj170=result_305->sname;
                            result_305->sname=(char*)come_increment_ref_count(((char*)(right_value466=string_clone(self->sname))));
                            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value466 = come_decrement_ref_count2(right_value466, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                            __dec_obj171=result_305->mLeft;
                            result_305->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value467=sNode_clone(self->mLeft))));
                            if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value467) { right_value467 = come_decrement_ref_count2(right_value467, ((struct sNode*)right_value467)->finalize, ((struct sNode*)right_value467)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                            __dec_obj172=result_305->mRight;
                            result_305->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value468=sNode_clone(self->mRight))));
                            if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value468) { right_value468 = come_decrement_ref_count2(right_value468, ((struct sNode*)right_value468)->finalize, ((struct sNode*)right_value468)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(self!=((void*)0)) {
                            result_305->mQuote=self->mQuote;
                        }
                        __result200__ = __result_obj__ = result_305;
                        come_call_finalizer3(result_305,sAddNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result200__;
                        come_call_finalizer3(result_305,sAddNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sSubNode_finalize(struct sSubNode* self){
                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__;
struct sSubNode* __result202__;
void* right_value473;
struct sSubNode* result_307;
void* right_value474;
char* __dec_obj173;
void* right_value475;
struct sNode* __dec_obj174;
void* right_value476;
struct sNode* __dec_obj175;
struct sSubNode* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
right_value473 = (void*)0;
memset(&result_307, 0, sizeof(struct sSubNode*));
right_value474 = (void*)0;
right_value475 = (void*)0;
right_value476 = (void*)0;
                            if(self==(void*)0) {
                                __result202__ = __result_obj__ = (void*)0;
                                return __result202__;
                            }
                            result_307=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value473=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "sSubNode"))));
                            come_call_finalizer3(right_value473,sSubNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(self!=((void*)0)) {
                                result_307->sline=self->sline;
                            }
                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                __dec_obj173=result_307->sname;
                                result_307->sname=(char*)come_increment_ref_count(((char*)(right_value474=string_clone(self->sname))));
                                __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value474 = come_decrement_ref_count2(right_value474, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                __dec_obj174=result_307->mLeft;
                                result_307->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value475=sNode_clone(self->mLeft))));
                                if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value475) { right_value475 = come_decrement_ref_count2(right_value475, ((struct sNode*)right_value475)->finalize, ((struct sNode*)right_value475)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                __dec_obj175=result_307->mRight;
                                result_307->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value476=sNode_clone(self->mRight))));
                                if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value476) { right_value476 = come_decrement_ref_count2(right_value476, ((struct sNode*)right_value476)->finalize, ((struct sNode*)right_value476)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(self!=((void*)0)) {
                                result_307->mQuote=self->mQuote;
                            }
                            __result203__ = __result_obj__ = result_307;
                            come_call_finalizer3(result_307,sSubNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result203__;
                            come_call_finalizer3(result_307,sSubNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* shift_exp(struct sInfo* info){
void* __result_obj__;
void* right_value478;
struct sNode* node_308;
void* right_value479;
struct sNode* right_309;
void* right_value480;
void* right_value481;
struct sNode* _inf_value12;
struct sLShiftNode* _inf_obj_value12;
void* right_value486;
struct sNode* __result208__;
void* right_value487;
struct sNode* right_311;
void* right_value488;
void* right_value489;
struct sNode* _inf_value13;
struct sRShiftNode* _inf_obj_value13;
void* right_value494;
struct sNode* __result211__;
void* right_value495;
struct sNode* right_313;
void* right_value496;
void* right_value497;
struct sNode* _inf_value14;
struct sLShiftNode* _inf_obj_value14;
void* right_value502;
struct sNode* __result214__;
void* right_value503;
struct sNode* right_315;
void* right_value504;
void* right_value505;
struct sNode* _inf_value15;
struct sRShiftNode* _inf_obj_value15;
void* right_value510;
struct sNode* __result217__;
struct sNode* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
right_value478 = (void*)0;
memset(&node_308, 0, sizeof(struct sNode*));
right_value479 = (void*)0;
memset(&right_309, 0, sizeof(struct sNode*));
right_value480 = (void*)0;
right_value481 = (void*)0;
right_value486 = (void*)0;
right_value487 = (void*)0;
memset(&right_311, 0, sizeof(struct sNode*));
right_value488 = (void*)0;
right_value489 = (void*)0;
right_value494 = (void*)0;
right_value495 = (void*)0;
memset(&right_313, 0, sizeof(struct sNode*));
right_value496 = (void*)0;
right_value497 = (void*)0;
right_value502 = (void*)0;
right_value503 = (void*)0;
memset(&right_315, 0, sizeof(struct sNode*));
right_value504 = (void*)0;
right_value505 = (void*)0;
right_value510 = (void*)0;
    parse_sharp_v5(info);
    node_308=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value478=add_exp(info))));
    if(right_value478) { right_value478 = come_decrement_ref_count2(right_value478, ((struct sNode*)right_value478)->finalize, ((struct sNode*)right_value478)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_309=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value479=shift_exp(info))));
            if(right_value479) { right_value479 = come_decrement_ref_count2(right_value479, ((struct sNode*)right_value479)->finalize, ((struct sNode*)right_value479)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1719, "struct sNode");
            _inf_obj_value12=come_increment_ref_count(((struct sLShiftNode*)(right_value481=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value480=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1719, "sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_308),(struct sNode*)come_increment_ref_count(right_309),(_Bool)0,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sLShiftNode_finalize;
            _inf_value12->clone=(void*)sLShiftNode_clone;
            _inf_value12->compile=(void*)sLShiftNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sLShiftNode_kind;
            __result208__ = __result_obj__ = ((struct sNode*)(right_value486=_inf_value12));
            if(right_309) { right_309 = come_decrement_ref_count2(right_309, ((struct sNode*)right_309)->finalize, ((struct sNode*)right_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_308) { node_308 = come_decrement_ref_count2(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value480,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value481,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value486) { right_value486 = come_decrement_ref_count2(right_value486, ((struct sNode*)right_value486)->finalize, ((struct sNode*)right_value486)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result208__;
            if(right_309) { right_309 = come_decrement_ref_count2(right_309, ((struct sNode*)right_309)->finalize, ((struct sNode*)right_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(*info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_311=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value487=shift_exp(info))));
                if(right_value487) { right_value487 = come_decrement_ref_count2(right_value487, ((struct sNode*)right_value487)->finalize, ((struct sNode*)right_value487)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1727, "struct sNode");
                _inf_obj_value13=come_increment_ref_count(((struct sRShiftNode*)(right_value489=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value488=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1727, "sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_308),(struct sNode*)come_increment_ref_count(right_311),(_Bool)0,info))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sRShiftNode_finalize;
                _inf_value13->clone=(void*)sRShiftNode_clone;
                _inf_value13->compile=(void*)sRShiftNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sRShiftNode_kind;
                __result211__ = __result_obj__ = ((struct sNode*)(right_value494=_inf_value13));
                if(right_311) { right_311 = come_decrement_ref_count2(right_311, ((struct sNode*)right_311)->finalize, ((struct sNode*)right_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_308) { node_308 = come_decrement_ref_count2(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value488,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value489,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value494) { right_value494 = come_decrement_ref_count2(right_value494, ((struct sNode*)right_value494)->finalize, ((struct sNode*)right_value494)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result211__;
                if(right_311) { right_311 = come_decrement_ref_count2(right_311, ((struct sNode*)right_311)->finalize, ((struct sNode*)right_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_313=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value495=shift_exp(info))));
                    if(right_value495) { right_value495 = come_decrement_ref_count2(right_value495, ((struct sNode*)right_value495)->finalize, ((struct sNode*)right_value495)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1735, "struct sNode");
                    _inf_obj_value14=come_increment_ref_count(((struct sLShiftNode*)(right_value497=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value496=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1735, "sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_308),(struct sNode*)come_increment_ref_count(right_313),(_Bool)1,info))));
                    _inf_value14->_protocol_obj=_inf_obj_value14;
                    _inf_value14->finalize=(void*)sLShiftNode_finalize;
                    _inf_value14->clone=(void*)sLShiftNode_clone;
                    _inf_value14->compile=(void*)sLShiftNode_compile;
                    _inf_value14->sline=(void*)sNodeBase_sline;
                    _inf_value14->sname=(void*)sNodeBase_sname;
                    _inf_value14->terminated=(void*)sNodeBase_terminated;
                    _inf_value14->kind=(void*)sLShiftNode_kind;
                    __result214__ = __result_obj__ = ((struct sNode*)(right_value502=_inf_value14));
                    if(right_313) { right_313 = come_decrement_ref_count2(right_313, ((struct sNode*)right_313)->finalize, ((struct sNode*)right_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_308) { node_308 = come_decrement_ref_count2(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value496,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value497,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value502) { right_value502 = come_decrement_ref_count2(right_value502, ((struct sNode*)right_value502)->finalize, ((struct sNode*)right_value502)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result214__;
                    if(right_313) { right_313 = come_decrement_ref_count2(right_313, ((struct sNode*)right_313)->finalize, ((struct sNode*)right_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62) {
                        info->p+=3;
                        skip_spaces_and_lf(info);
                        right_315=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value503=shift_exp(info))));
                        if(right_value503) { right_value503 = come_decrement_ref_count2(right_value503, ((struct sNode*)right_value503)->finalize, ((struct sNode*)right_value503)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1743, "struct sNode");
                        _inf_obj_value15=come_increment_ref_count(((struct sRShiftNode*)(right_value505=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value504=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1743, "sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_308),(struct sNode*)come_increment_ref_count(right_315),(_Bool)1,info))));
                        _inf_value15->_protocol_obj=_inf_obj_value15;
                        _inf_value15->finalize=(void*)sRShiftNode_finalize;
                        _inf_value15->clone=(void*)sRShiftNode_clone;
                        _inf_value15->compile=(void*)sRShiftNode_compile;
                        _inf_value15->sline=(void*)sNodeBase_sline;
                        _inf_value15->sname=(void*)sNodeBase_sname;
                        _inf_value15->terminated=(void*)sNodeBase_terminated;
                        _inf_value15->kind=(void*)sRShiftNode_kind;
                        __result217__ = __result_obj__ = ((struct sNode*)(right_value510=_inf_value15));
                        if(right_315) { right_315 = come_decrement_ref_count2(right_315, ((struct sNode*)right_315)->finalize, ((struct sNode*)right_315)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_308) { node_308 = come_decrement_ref_count2(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value504,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value505,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value510) { right_value510 = come_decrement_ref_count2(right_value510, ((struct sNode*)right_value510)->finalize, ((struct sNode*)right_value510)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result217__;
                        if(right_315) { right_315 = come_decrement_ref_count2(right_315, ((struct sNode*)right_315)->finalize, ((struct sNode*)right_315)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result218__ = __result_obj__ = node_308;
    if(node_308) { node_308 = come_decrement_ref_count2(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result218__;
    if(node_308) { node_308 = come_decrement_ref_count2(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__;
struct sLShiftNode* __result212__;
void* right_value498;
struct sLShiftNode* result_314;
void* right_value499;
char* __dec_obj182;
void* right_value500;
struct sNode* __dec_obj183;
void* right_value501;
struct sNode* __dec_obj184;
struct sLShiftNode* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
right_value498 = (void*)0;
memset(&result_314, 0, sizeof(struct sLShiftNode*));
right_value499 = (void*)0;
right_value500 = (void*)0;
right_value501 = (void*)0;
                        if(self==(void*)0) {
                            __result212__ = __result_obj__ = (void*)0;
                            return __result212__;
                        }
                        result_314=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value498=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "sLShiftNode"))));
                        come_call_finalizer3(right_value498,sLShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(self!=((void*)0)) {
                            result_314->sline=self->sline;
                        }
                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                            __dec_obj182=result_314->sname;
                            result_314->sname=(char*)come_increment_ref_count(((char*)(right_value499=string_clone(self->sname))));
                            __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value499 = come_decrement_ref_count2(right_value499, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(self!=((void*)0)) {
                            result_314->mQuote=self->mQuote;
                        }
                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                            __dec_obj183=result_314->mLeft;
                            result_314->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value500=sNode_clone(self->mLeft))));
                            if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value500) { right_value500 = come_decrement_ref_count2(right_value500, ((struct sNode*)right_value500)->finalize, ((struct sNode*)right_value500)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                            __dec_obj184=result_314->mRight;
                            result_314->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value501=sNode_clone(self->mRight))));
                            if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value501) { right_value501 = come_decrement_ref_count2(right_value501, ((struct sNode*)right_value501)->finalize, ((struct sNode*)right_value501)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        __result213__ = __result_obj__ = result_314;
                        come_call_finalizer3(result_314,sLShiftNode_finalize, 0, 0, 1, 0, (void*)0);
                        return __result213__;
                        come_call_finalizer3(result_314,sLShiftNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__;
struct sRShiftNode* __result215__;
void* right_value506;
struct sRShiftNode* result_316;
void* right_value507;
char* __dec_obj185;
void* right_value508;
struct sNode* __dec_obj186;
void* right_value509;
struct sNode* __dec_obj187;
struct sRShiftNode* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
right_value506 = (void*)0;
memset(&result_316, 0, sizeof(struct sRShiftNode*));
right_value507 = (void*)0;
right_value508 = (void*)0;
right_value509 = (void*)0;
                            if(self==(void*)0) {
                                __result215__ = __result_obj__ = (void*)0;
                                return __result215__;
                            }
                            result_316=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value506=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "sRShiftNode"))));
                            come_call_finalizer3(right_value506,sRShiftNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(self!=((void*)0)) {
                                result_316->sline=self->sline;
                            }
                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                __dec_obj185=result_316->sname;
                                result_316->sname=(char*)come_increment_ref_count(((char*)(right_value507=string_clone(self->sname))));
                                __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value507 = come_decrement_ref_count2(right_value507, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            if(self!=((void*)0)) {
                                result_316->mQuote=self->mQuote;
                            }
                            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                __dec_obj186=result_316->mLeft;
                                result_316->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value508=sNode_clone(self->mLeft))));
                                if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value508) { right_value508 = come_decrement_ref_count2(right_value508, ((struct sNode*)right_value508)->finalize, ((struct sNode*)right_value508)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                __dec_obj187=result_316->mRight;
                                result_316->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value509=sNode_clone(self->mRight))));
                                if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value509) { right_value509 = come_decrement_ref_count2(right_value509, ((struct sNode*)right_value509)->finalize, ((struct sNode*)right_value509)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            __result216__ = __result_obj__ = result_316;
                            come_call_finalizer3(result_316,sRShiftNode_finalize, 0, 0, 1, 0, (void*)0);
                            return __result216__;
                            come_call_finalizer3(result_316,sRShiftNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* comparison_exp(struct sInfo* info){
void* __result_obj__;
void* right_value511;
struct sNode* node_317;
void* right_value512;
struct sNode* right_318;
void* right_value513;
void* right_value514;
struct sNode* _inf_value16;
struct sGtEqNode* _inf_obj_value16;
void* right_value519;
struct sNode* __result221__;
void* right_value520;
struct sNode* right_320;
void* right_value521;
void* right_value522;
struct sNode* _inf_value17;
struct sLtEqNode* _inf_obj_value17;
void* right_value527;
struct sNode* __result224__;
void* right_value528;
struct sNode* right_322;
void* right_value529;
void* right_value530;
struct sNode* _inf_value18;
struct sGtNode* _inf_obj_value18;
void* right_value535;
struct sNode* __result227__;
void* right_value536;
struct sNode* right_324;
void* right_value537;
void* right_value538;
struct sNode* _inf_value19;
struct sLtNode* _inf_obj_value19;
void* right_value543;
struct sNode* __result230__;
void* right_value544;
struct sNode* right_326;
void* right_value545;
void* right_value546;
struct sNode* _inf_value20;
struct sGtEqNode* _inf_obj_value20;
void* right_value551;
struct sNode* __result233__;
void* right_value552;
struct sNode* right_328;
void* right_value553;
void* right_value554;
struct sNode* _inf_value21;
struct sLtEqNode* _inf_obj_value21;
void* right_value559;
struct sNode* __result236__;
void* right_value560;
struct sNode* right_330;
void* right_value561;
void* right_value562;
struct sNode* _inf_value22;
struct sGtNode* _inf_obj_value22;
void* right_value567;
struct sNode* __result239__;
void* right_value568;
struct sNode* right_332;
void* right_value569;
void* right_value570;
struct sNode* _inf_value23;
struct sLtNode* _inf_obj_value23;
void* right_value575;
struct sNode* __result242__;
struct sNode* __result243__;
memset(&__result_obj__, 0, sizeof(void*));
right_value511 = (void*)0;
memset(&node_317, 0, sizeof(struct sNode*));
right_value512 = (void*)0;
memset(&right_318, 0, sizeof(struct sNode*));
right_value513 = (void*)0;
right_value514 = (void*)0;
right_value519 = (void*)0;
right_value520 = (void*)0;
memset(&right_320, 0, sizeof(struct sNode*));
right_value521 = (void*)0;
right_value522 = (void*)0;
right_value527 = (void*)0;
right_value528 = (void*)0;
memset(&right_322, 0, sizeof(struct sNode*));
right_value529 = (void*)0;
right_value530 = (void*)0;
right_value535 = (void*)0;
right_value536 = (void*)0;
memset(&right_324, 0, sizeof(struct sNode*));
right_value537 = (void*)0;
right_value538 = (void*)0;
right_value543 = (void*)0;
right_value544 = (void*)0;
memset(&right_326, 0, sizeof(struct sNode*));
right_value545 = (void*)0;
right_value546 = (void*)0;
right_value551 = (void*)0;
right_value552 = (void*)0;
memset(&right_328, 0, sizeof(struct sNode*));
right_value553 = (void*)0;
right_value554 = (void*)0;
right_value559 = (void*)0;
right_value560 = (void*)0;
memset(&right_330, 0, sizeof(struct sNode*));
right_value561 = (void*)0;
right_value562 = (void*)0;
right_value567 = (void*)0;
right_value568 = (void*)0;
memset(&right_332, 0, sizeof(struct sNode*));
right_value569 = (void*)0;
right_value570 = (void*)0;
right_value575 = (void*)0;
    parse_sharp_v5(info);
    node_317=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value511=shift_exp(info))));
    if(right_value511) { right_value511 = come_decrement_ref_count2(right_value511, ((struct sNode*)right_value511)->finalize, ((struct sNode*)right_value511)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==62&&*(info->p+1)==61) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_318=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value512=shift_exp(info))));
            if(right_value512) { right_value512 = come_decrement_ref_count2(right_value512, ((struct sNode*)right_value512)->finalize, ((struct sNode*)right_value512)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1770, "struct sNode");
            _inf_obj_value16=come_increment_ref_count(((struct sGtEqNode*)(right_value514=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value513=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1770, "sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_317),(struct sNode*)come_increment_ref_count(right_318),(_Bool)0,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sGtEqNode_finalize;
            _inf_value16->clone=(void*)sGtEqNode_clone;
            _inf_value16->compile=(void*)sGtEqNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sGtEqNode_kind;
            __result221__ = __result_obj__ = ((struct sNode*)(right_value519=_inf_value16));
            if(right_318) { right_318 = come_decrement_ref_count2(right_318, ((struct sNode*)right_318)->finalize, ((struct sNode*)right_318)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_317) { node_317 = come_decrement_ref_count2(node_317, ((struct sNode*)node_317)->finalize, ((struct sNode*)node_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value513,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value514,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value519) { right_value519 = come_decrement_ref_count2(right_value519, ((struct sNode*)right_value519)->finalize, ((struct sNode*)right_value519)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result221__;
            if(right_318) { right_318 = come_decrement_ref_count2(right_318, ((struct sNode*)right_318)->finalize, ((struct sNode*)right_318)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(*info->p==60&&*(info->p+1)==61) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_320=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value520=shift_exp(info))));
                if(right_value520) { right_value520 = come_decrement_ref_count2(right_value520, ((struct sNode*)right_value520)->finalize, ((struct sNode*)right_value520)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1778, "struct sNode");
                _inf_obj_value17=come_increment_ref_count(((struct sLtEqNode*)(right_value522=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value521=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1778, "sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_317),(struct sNode*)come_increment_ref_count(right_320),(_Bool)0,info))));
                _inf_value17->_protocol_obj=_inf_obj_value17;
                _inf_value17->finalize=(void*)sLtEqNode_finalize;
                _inf_value17->clone=(void*)sLtEqNode_clone;
                _inf_value17->compile=(void*)sLtEqNode_compile;
                _inf_value17->sline=(void*)sNodeBase_sline;
                _inf_value17->sname=(void*)sNodeBase_sname;
                _inf_value17->terminated=(void*)sNodeBase_terminated;
                _inf_value17->kind=(void*)sLtEqNode_kind;
                __result224__ = __result_obj__ = ((struct sNode*)(right_value527=_inf_value17));
                if(right_320) { right_320 = come_decrement_ref_count2(right_320, ((struct sNode*)right_320)->finalize, ((struct sNode*)right_320)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_317) { node_317 = come_decrement_ref_count2(node_317, ((struct sNode*)node_317)->finalize, ((struct sNode*)node_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value521,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value522,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value527) { right_value527 = come_decrement_ref_count2(right_value527, ((struct sNode*)right_value527)->finalize, ((struct sNode*)right_value527)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result224__;
                if(right_320) { right_320 = come_decrement_ref_count2(right_320, ((struct sNode*)right_320)->finalize, ((struct sNode*)right_320)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(*info->p==62&&*(info->p+1)!=62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_322=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value528=shift_exp(info))));
                    if(right_value528) { right_value528 = come_decrement_ref_count2(right_value528, ((struct sNode*)right_value528)->finalize, ((struct sNode*)right_value528)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1786, "struct sNode");
                    _inf_obj_value18=come_increment_ref_count(((struct sGtNode*)(right_value530=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value529=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1786, "sGtNode")))),(struct sNode*)come_increment_ref_count(node_317),(struct sNode*)come_increment_ref_count(right_322),(_Bool)0,info))));
                    _inf_value18->_protocol_obj=_inf_obj_value18;
                    _inf_value18->finalize=(void*)sGtNode_finalize;
                    _inf_value18->clone=(void*)sGtNode_clone;
                    _inf_value18->compile=(void*)sGtNode_compile;
                    _inf_value18->sline=(void*)sNodeBase_sline;
                    _inf_value18->sname=(void*)sNodeBase_sname;
                    _inf_value18->terminated=(void*)sNodeBase_terminated;
                    _inf_value18->kind=(void*)sGtNode_kind;
                    __result227__ = __result_obj__ = ((struct sNode*)(right_value535=_inf_value18));
                    if(right_322) { right_322 = come_decrement_ref_count2(right_322, ((struct sNode*)right_322)->finalize, ((struct sNode*)right_322)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_317) { node_317 = come_decrement_ref_count2(node_317, ((struct sNode*)node_317)->finalize, ((struct sNode*)node_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value529,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value530,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value535) { right_value535 = come_decrement_ref_count2(right_value535, ((struct sNode*)right_value535)->finalize, ((struct sNode*)right_value535)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result227__;
                    if(right_322) { right_322 = come_decrement_ref_count2(right_322, ((struct sNode*)right_322)->finalize, ((struct sNode*)right_322)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(*info->p==60&&*(info->p+1)!=60) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        right_324=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value536=shift_exp(info))));
                        if(right_value536) { right_value536 = come_decrement_ref_count2(right_value536, ((struct sNode*)right_value536)->finalize, ((struct sNode*)right_value536)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1794, "struct sNode");
                        _inf_obj_value19=come_increment_ref_count(((struct sLtNode*)(right_value538=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value537=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1794, "sLtNode")))),(struct sNode*)come_increment_ref_count(node_317),(struct sNode*)come_increment_ref_count(right_324),(_Bool)0,info))));
                        _inf_value19->_protocol_obj=_inf_obj_value19;
                        _inf_value19->finalize=(void*)sLtNode_finalize;
                        _inf_value19->clone=(void*)sLtNode_clone;
                        _inf_value19->compile=(void*)sLtNode_compile;
                        _inf_value19->sline=(void*)sNodeBase_sline;
                        _inf_value19->sname=(void*)sNodeBase_sname;
                        _inf_value19->terminated=(void*)sNodeBase_terminated;
                        _inf_value19->kind=(void*)sLtNode_kind;
                        __result230__ = __result_obj__ = ((struct sNode*)(right_value543=_inf_value19));
                        if(right_324) { right_324 = come_decrement_ref_count2(right_324, ((struct sNode*)right_324)->finalize, ((struct sNode*)right_324)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_317) { node_317 = come_decrement_ref_count2(node_317, ((struct sNode*)node_317)->finalize, ((struct sNode*)node_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value537,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value538,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value543) { right_value543 = come_decrement_ref_count2(right_value543, ((struct sNode*)right_value543)->finalize, ((struct sNode*)right_value543)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result230__;
                        if(right_324) { right_324 = come_decrement_ref_count2(right_324, ((struct sNode*)right_324)->finalize, ((struct sNode*)right_324)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(*info->p==92&&*(info->p+1)==62&&*(info->p+2)==61) {
                            info->p+=3;
                            skip_spaces_and_lf(info);
                            right_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value544=shift_exp(info))));
                            if(right_value544) { right_value544 = come_decrement_ref_count2(right_value544, ((struct sNode*)right_value544)->finalize, ((struct sNode*)right_value544)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1802, "struct sNode");
                            _inf_obj_value20=come_increment_ref_count(((struct sGtEqNode*)(right_value546=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value545=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1802, "sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_317),(struct sNode*)come_increment_ref_count(right_326),(_Bool)1,info))));
                            _inf_value20->_protocol_obj=_inf_obj_value20;
                            _inf_value20->finalize=(void*)sGtEqNode_finalize;
                            _inf_value20->clone=(void*)sGtEqNode_clone;
                            _inf_value20->compile=(void*)sGtEqNode_compile;
                            _inf_value20->sline=(void*)sNodeBase_sline;
                            _inf_value20->sname=(void*)sNodeBase_sname;
                            _inf_value20->terminated=(void*)sNodeBase_terminated;
                            _inf_value20->kind=(void*)sGtEqNode_kind;
                            __result233__ = __result_obj__ = ((struct sNode*)(right_value551=_inf_value20));
                            if(right_326) { right_326 = come_decrement_ref_count2(right_326, ((struct sNode*)right_326)->finalize, ((struct sNode*)right_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_317) { node_317 = come_decrement_ref_count2(node_317, ((struct sNode*)node_317)->finalize, ((struct sNode*)node_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value545,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value546,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value551) { right_value551 = come_decrement_ref_count2(right_value551, ((struct sNode*)right_value551)->finalize, ((struct sNode*)right_value551)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result233__;
                            if(right_326) { right_326 = come_decrement_ref_count2(right_326, ((struct sNode*)right_326)->finalize, ((struct sNode*)right_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(*info->p==92&&*(info->p+1)==60&&*(info->p+2)==61) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_328=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value552=shift_exp(info))));
                                if(right_value552) { right_value552 = come_decrement_ref_count2(right_value552, ((struct sNode*)right_value552)->finalize, ((struct sNode*)right_value552)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1810, "struct sNode");
                                _inf_obj_value21=come_increment_ref_count(((struct sLtEqNode*)(right_value554=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value553=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1810, "sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_317),(struct sNode*)come_increment_ref_count(right_328),(_Bool)1,info))));
                                _inf_value21->_protocol_obj=_inf_obj_value21;
                                _inf_value21->finalize=(void*)sLtEqNode_finalize;
                                _inf_value21->clone=(void*)sLtEqNode_clone;
                                _inf_value21->compile=(void*)sLtEqNode_compile;
                                _inf_value21->sline=(void*)sNodeBase_sline;
                                _inf_value21->sname=(void*)sNodeBase_sname;
                                _inf_value21->terminated=(void*)sNodeBase_terminated;
                                _inf_value21->kind=(void*)sLtEqNode_kind;
                                __result236__ = __result_obj__ = ((struct sNode*)(right_value559=_inf_value21));
                                if(right_328) { right_328 = come_decrement_ref_count2(right_328, ((struct sNode*)right_328)->finalize, ((struct sNode*)right_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_317) { node_317 = come_decrement_ref_count2(node_317, ((struct sNode*)node_317)->finalize, ((struct sNode*)node_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(right_value553,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value554,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value559) { right_value559 = come_decrement_ref_count2(right_value559, ((struct sNode*)right_value559)->finalize, ((struct sNode*)right_value559)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result236__;
                                if(right_328) { right_328 = come_decrement_ref_count2(right_328, ((struct sNode*)right_328)->finalize, ((struct sNode*)right_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(*info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62) {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                    right_330=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value560=shift_exp(info))));
                                    if(right_value560) { right_value560 = come_decrement_ref_count2(right_value560, ((struct sNode*)right_value560)->finalize, ((struct sNode*)right_value560)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1818, "struct sNode");
                                    _inf_obj_value22=come_increment_ref_count(((struct sGtNode*)(right_value562=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value561=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 1818, "sGtNode")))),(struct sNode*)come_increment_ref_count(node_317),(struct sNode*)come_increment_ref_count(right_330),(_Bool)1,info))));
                                    _inf_value22->_protocol_obj=_inf_obj_value22;
                                    _inf_value22->finalize=(void*)sGtNode_finalize;
                                    _inf_value22->clone=(void*)sGtNode_clone;
                                    _inf_value22->compile=(void*)sGtNode_compile;
                                    _inf_value22->sline=(void*)sNodeBase_sline;
                                    _inf_value22->sname=(void*)sNodeBase_sname;
                                    _inf_value22->terminated=(void*)sNodeBase_terminated;
                                    _inf_value22->kind=(void*)sGtNode_kind;
                                    __result239__ = __result_obj__ = ((struct sNode*)(right_value567=_inf_value22));
                                    if(right_330) { right_330 = come_decrement_ref_count2(right_330, ((struct sNode*)right_330)->finalize, ((struct sNode*)right_330)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node_317) { node_317 = come_decrement_ref_count2(node_317, ((struct sNode*)node_317)->finalize, ((struct sNode*)node_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_value561,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value562,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value567) { right_value567 = come_decrement_ref_count2(right_value567, ((struct sNode*)right_value567)->finalize, ((struct sNode*)right_value567)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result239__;
                                    if(right_330) { right_330 = come_decrement_ref_count2(right_330, ((struct sNode*)right_330)->finalize, ((struct sNode*)right_330)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(*info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60) {
                                        info->p+=2;
                                        skip_spaces_and_lf(info);
                                        right_332=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value568=shift_exp(info))));
                                        if(right_value568) { right_value568 = come_decrement_ref_count2(right_value568, ((struct sNode*)right_value568)->finalize, ((struct sNode*)right_value568)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1826, "struct sNode");
                                        _inf_obj_value23=come_increment_ref_count(((struct sLtNode*)(right_value570=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value569=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 1826, "sLtNode")))),(struct sNode*)come_increment_ref_count(node_317),(struct sNode*)come_increment_ref_count(right_332),(_Bool)1,info))));
                                        _inf_value23->_protocol_obj=_inf_obj_value23;
                                        _inf_value23->finalize=(void*)sLtNode_finalize;
                                        _inf_value23->clone=(void*)sLtNode_clone;
                                        _inf_value23->compile=(void*)sLtNode_compile;
                                        _inf_value23->sline=(void*)sNodeBase_sline;
                                        _inf_value23->sname=(void*)sNodeBase_sname;
                                        _inf_value23->terminated=(void*)sNodeBase_terminated;
                                        _inf_value23->kind=(void*)sLtNode_kind;
                                        __result242__ = __result_obj__ = ((struct sNode*)(right_value575=_inf_value23));
                                        if(right_332) { right_332 = come_decrement_ref_count2(right_332, ((struct sNode*)right_332)->finalize, ((struct sNode*)right_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node_317) { node_317 = come_decrement_ref_count2(node_317, ((struct sNode*)node_317)->finalize, ((struct sNode*)node_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(right_value569,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value570,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value575) { right_value575 = come_decrement_ref_count2(right_value575, ((struct sNode*)right_value575)->finalize, ((struct sNode*)right_value575)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result242__;
                                        if(right_332) { right_332 = come_decrement_ref_count2(right_332, ((struct sNode*)right_332)->finalize, ((struct sNode*)right_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result243__ = __result_obj__ = node_317;
    if(node_317) { node_317 = come_decrement_ref_count2(node_317, ((struct sNode*)node_317)->finalize, ((struct sNode*)node_317)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result243__;
    if(node_317) { node_317 = come_decrement_ref_count2(node_317, ((struct sNode*)node_317)->finalize, ((struct sNode*)node_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__;
struct sGtEqNode* __result231__;
void* right_value547;
struct sGtEqNode* result_327;
void* right_value548;
char* __dec_obj200;
void* right_value549;
struct sNode* __dec_obj201;
void* right_value550;
struct sNode* __dec_obj202;
struct sGtEqNode* __result232__;
memset(&__result_obj__, 0, sizeof(void*));
right_value547 = (void*)0;
memset(&result_327, 0, sizeof(struct sGtEqNode*));
right_value548 = (void*)0;
right_value549 = (void*)0;
right_value550 = (void*)0;
                                if(self==(void*)0) {
                                    __result231__ = __result_obj__ = (void*)0;
                                    return __result231__;
                                }
                                result_327=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value547=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "sGtEqNode"))));
                                come_call_finalizer3(right_value547,sGtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(self!=((void*)0)) {
                                    result_327->sline=self->sline;
                                }
                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                    __dec_obj200=result_327->sname;
                                    result_327->sname=(char*)come_increment_ref_count(((char*)(right_value548=string_clone(self->sname))));
                                    __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value548 = come_decrement_ref_count2(right_value548, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(self!=((void*)0)) {
                                    result_327->mQuote=self->mQuote;
                                }
                                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                    __dec_obj201=result_327->mLeft;
                                    result_327->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value549=sNode_clone(self->mLeft))));
                                    if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count2(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value549) { right_value549 = come_decrement_ref_count2(right_value549, ((struct sNode*)right_value549)->finalize, ((struct sNode*)right_value549)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                    __dec_obj202=result_327->mRight;
                                    result_327->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value550=sNode_clone(self->mRight))));
                                    if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count2(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value550) { right_value550 = come_decrement_ref_count2(right_value550, ((struct sNode*)right_value550)->finalize, ((struct sNode*)right_value550)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                __result232__ = __result_obj__ = result_327;
                                come_call_finalizer3(result_327,sGtEqNode_finalize, 0, 0, 1, 0, (void*)0);
                                return __result232__;
                                come_call_finalizer3(result_327,sGtEqNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__;
struct sLtEqNode* __result234__;
void* right_value555;
struct sLtEqNode* result_329;
void* right_value556;
char* __dec_obj203;
void* right_value557;
struct sNode* __dec_obj204;
void* right_value558;
struct sNode* __dec_obj205;
struct sLtEqNode* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
right_value555 = (void*)0;
memset(&result_329, 0, sizeof(struct sLtEqNode*));
right_value556 = (void*)0;
right_value557 = (void*)0;
right_value558 = (void*)0;
                                    if(self==(void*)0) {
                                        __result234__ = __result_obj__ = (void*)0;
                                        return __result234__;
                                    }
                                    result_329=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value555=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "sLtEqNode"))));
                                    come_call_finalizer3(right_value555,sLtEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(self!=((void*)0)) {
                                        result_329->sline=self->sline;
                                    }
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        __dec_obj203=result_329->sname;
                                        result_329->sname=(char*)come_increment_ref_count(((char*)(right_value556=string_clone(self->sname))));
                                        __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value556 = come_decrement_ref_count2(right_value556, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)) {
                                        result_329->mQuote=self->mQuote;
                                    }
                                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                        __dec_obj204=result_329->mLeft;
                                        result_329->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value557=sNode_clone(self->mLeft))));
                                        if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value557) { right_value557 = come_decrement_ref_count2(right_value557, ((struct sNode*)right_value557)->finalize, ((struct sNode*)right_value557)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                        __dec_obj205=result_329->mRight;
                                        result_329->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value558=sNode_clone(self->mRight))));
                                        if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value558) { right_value558 = come_decrement_ref_count2(right_value558, ((struct sNode*)right_value558)->finalize, ((struct sNode*)right_value558)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    __result235__ = __result_obj__ = result_329;
                                    come_call_finalizer3(result_329,sLtEqNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result235__;
                                    come_call_finalizer3(result_329,sLtEqNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sGtNode_finalize(struct sGtNode* self){
                                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__;
struct sGtNode* __result237__;
void* right_value563;
struct sGtNode* result_331;
void* right_value564;
char* __dec_obj206;
void* right_value565;
struct sNode* __dec_obj207;
void* right_value566;
struct sNode* __dec_obj208;
struct sGtNode* __result238__;
memset(&__result_obj__, 0, sizeof(void*));
right_value563 = (void*)0;
memset(&result_331, 0, sizeof(struct sGtNode*));
right_value564 = (void*)0;
right_value565 = (void*)0;
right_value566 = (void*)0;
                                        if(self==(void*)0) {
                                            __result237__ = __result_obj__ = (void*)0;
                                            return __result237__;
                                        }
                                        result_331=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value563=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "sGtNode"))));
                                        come_call_finalizer3(right_value563,sGtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(self!=((void*)0)) {
                                            result_331->sline=self->sline;
                                        }
                                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                            __dec_obj206=result_331->sname;
                                            result_331->sname=(char*)come_increment_ref_count(((char*)(right_value564=string_clone(self->sname))));
                                            __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value564 = come_decrement_ref_count2(right_value564, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)) {
                                            result_331->mQuote=self->mQuote;
                                        }
                                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                            __dec_obj207=result_331->mLeft;
                                            result_331->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value565=sNode_clone(self->mLeft))));
                                            if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count2(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value565) { right_value565 = come_decrement_ref_count2(right_value565, ((struct sNode*)right_value565)->finalize, ((struct sNode*)right_value565)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                            __dec_obj208=result_331->mRight;
                                            result_331->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value566=sNode_clone(self->mRight))));
                                            if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count2(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value566) { right_value566 = come_decrement_ref_count2(right_value566, ((struct sNode*)right_value566)->finalize, ((struct sNode*)right_value566)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        __result238__ = __result_obj__ = result_331;
                                        come_call_finalizer3(result_331,sGtNode_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result238__;
                                        come_call_finalizer3(result_331,sGtNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sLtNode_finalize(struct sLtNode* self){
                                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__;
struct sLtNode* __result240__;
void* right_value571;
struct sLtNode* result_333;
void* right_value572;
char* __dec_obj209;
void* right_value573;
struct sNode* __dec_obj210;
void* right_value574;
struct sNode* __dec_obj211;
struct sLtNode* __result241__;
memset(&__result_obj__, 0, sizeof(void*));
right_value571 = (void*)0;
memset(&result_333, 0, sizeof(struct sLtNode*));
right_value572 = (void*)0;
right_value573 = (void*)0;
right_value574 = (void*)0;
                                            if(self==(void*)0) {
                                                __result240__ = __result_obj__ = (void*)0;
                                                return __result240__;
                                            }
                                            result_333=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value571=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "sLtNode"))));
                                            come_call_finalizer3(right_value571,sLtNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(self!=((void*)0)) {
                                                result_333->sline=self->sline;
                                            }
                                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                __dec_obj209=result_333->sname;
                                                result_333->sname=(char*)come_increment_ref_count(((char*)(right_value572=string_clone(self->sname))));
                                                __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value572 = come_decrement_ref_count2(right_value572, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            if(self!=((void*)0)) {
                                                result_333->mQuote=self->mQuote;
                                            }
                                            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                                __dec_obj210=result_333->mLeft;
                                                result_333->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value573=sNode_clone(self->mLeft))));
                                                if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value573) { right_value573 = come_decrement_ref_count2(right_value573, ((struct sNode*)right_value573)->finalize, ((struct sNode*)right_value573)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                                __dec_obj211=result_333->mRight;
                                                result_333->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value574=sNode_clone(self->mRight))));
                                                if(__dec_obj211) { __dec_obj211 = come_decrement_ref_count2(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value574) { right_value574 = come_decrement_ref_count2(right_value574, ((struct sNode*)right_value574)->finalize, ((struct sNode*)right_value574)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            __result241__ = __result_obj__ = result_333;
                                            come_call_finalizer3(result_333,sLtNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result241__;
                                            come_call_finalizer3(result_333,sLtNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* eq_exp(struct sInfo* info){
void* __result_obj__;
void* right_value576;
struct sNode* node_334;
void* right_value577;
struct sNode* right_335;
void* right_value578;
void* right_value579;
struct sNode* _inf_value24;
struct sEq2Node* _inf_obj_value24;
void* right_value584;
struct sNode* __result246__;
void* right_value585;
struct sNode* right_337;
void* right_value586;
void* right_value587;
struct sNode* _inf_value25;
struct sEqNode* _inf_obj_value25;
void* right_value592;
struct sNode* __result249__;
void* right_value593;
struct sNode* right_339;
void* right_value594;
void* right_value595;
struct sNode* _inf_value26;
struct sNotEq2Node* _inf_obj_value26;
void* right_value600;
struct sNode* __result252__;
void* right_value601;
struct sNode* right_341;
void* right_value602;
void* right_value603;
struct sNode* _inf_value27;
struct sNotEqNode* _inf_obj_value27;
void* right_value608;
struct sNode* __result255__;
void* right_value609;
struct sNode* right_343;
void* right_value610;
void* right_value611;
struct sNode* _inf_value28;
struct sEq2Node* _inf_obj_value28;
void* right_value616;
struct sNode* __result258__;
void* right_value617;
struct sNode* right_345;
void* right_value618;
void* right_value619;
struct sNode* _inf_value29;
struct sEqNode* _inf_obj_value29;
void* right_value624;
struct sNode* __result261__;
void* right_value625;
struct sNode* right_347;
void* right_value626;
void* right_value627;
struct sNode* _inf_value30;
struct sNotEq2Node* _inf_obj_value30;
void* right_value632;
struct sNode* __result264__;
void* right_value633;
struct sNode* right_349;
void* right_value634;
void* right_value635;
struct sNode* _inf_value31;
struct sNotEqNode* _inf_obj_value31;
void* right_value640;
struct sNode* __result267__;
struct sNode* __result268__;
memset(&__result_obj__, 0, sizeof(void*));
right_value576 = (void*)0;
memset(&node_334, 0, sizeof(struct sNode*));
right_value577 = (void*)0;
memset(&right_335, 0, sizeof(struct sNode*));
right_value578 = (void*)0;
right_value579 = (void*)0;
right_value584 = (void*)0;
right_value585 = (void*)0;
memset(&right_337, 0, sizeof(struct sNode*));
right_value586 = (void*)0;
right_value587 = (void*)0;
right_value592 = (void*)0;
right_value593 = (void*)0;
memset(&right_339, 0, sizeof(struct sNode*));
right_value594 = (void*)0;
right_value595 = (void*)0;
right_value600 = (void*)0;
right_value601 = (void*)0;
memset(&right_341, 0, sizeof(struct sNode*));
right_value602 = (void*)0;
right_value603 = (void*)0;
right_value608 = (void*)0;
right_value609 = (void*)0;
memset(&right_343, 0, sizeof(struct sNode*));
right_value610 = (void*)0;
right_value611 = (void*)0;
right_value616 = (void*)0;
right_value617 = (void*)0;
memset(&right_345, 0, sizeof(struct sNode*));
right_value618 = (void*)0;
right_value619 = (void*)0;
right_value624 = (void*)0;
right_value625 = (void*)0;
memset(&right_347, 0, sizeof(struct sNode*));
right_value626 = (void*)0;
right_value627 = (void*)0;
right_value632 = (void*)0;
right_value633 = (void*)0;
memset(&right_349, 0, sizeof(struct sNode*));
right_value634 = (void*)0;
right_value635 = (void*)0;
right_value640 = (void*)0;
    parse_sharp_v5(info);
    node_334=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value576=comparison_exp(info))));
    if(right_value576) { right_value576 = come_decrement_ref_count2(right_value576, ((struct sNode*)right_value576)->finalize, ((struct sNode*)right_value576)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==61&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_335=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value577=eq_exp(info))));
            if(right_value577) { right_value577 = come_decrement_ref_count2(right_value577, ((struct sNode*)right_value577)->finalize, ((struct sNode*)right_value577)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1853, "struct sNode");
            _inf_obj_value24=come_increment_ref_count(((struct sEq2Node*)(right_value579=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value578=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 1853, "sEq2Node")))),(struct sNode*)come_increment_ref_count(node_334),(struct sNode*)come_increment_ref_count(right_335),(_Bool)0,info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sEq2Node_finalize;
            _inf_value24->clone=(void*)sEq2Node_clone;
            _inf_value24->compile=(void*)sEq2Node_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sEq2Node_kind;
            __result246__ = __result_obj__ = ((struct sNode*)(right_value584=_inf_value24));
            if(right_335) { right_335 = come_decrement_ref_count2(right_335, ((struct sNode*)right_335)->finalize, ((struct sNode*)right_335)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_334) { node_334 = come_decrement_ref_count2(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value578,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value579,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value584) { right_value584 = come_decrement_ref_count2(right_value584, ((struct sNode*)right_value584)->finalize, ((struct sNode*)right_value584)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result246__;
            if(right_335) { right_335 = come_decrement_ref_count2(right_335, ((struct sNode*)right_335)->finalize, ((struct sNode*)right_335)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(*info->p==61&&*(info->p+1)==61) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_337=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value585=eq_exp(info))));
                if(right_value585) { right_value585 = come_decrement_ref_count2(right_value585, ((struct sNode*)right_value585)->finalize, ((struct sNode*)right_value585)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1861, "struct sNode");
                _inf_obj_value25=come_increment_ref_count(((struct sEqNode*)(right_value587=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value586=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 1861, "sEqNode")))),(struct sNode*)come_increment_ref_count(node_334),(struct sNode*)come_increment_ref_count(right_337),(_Bool)0,info))));
                _inf_value25->_protocol_obj=_inf_obj_value25;
                _inf_value25->finalize=(void*)sEqNode_finalize;
                _inf_value25->clone=(void*)sEqNode_clone;
                _inf_value25->compile=(void*)sEqNode_compile;
                _inf_value25->sline=(void*)sNodeBase_sline;
                _inf_value25->sname=(void*)sNodeBase_sname;
                _inf_value25->terminated=(void*)sNodeBase_terminated;
                _inf_value25->kind=(void*)sEqNode_kind;
                __result249__ = __result_obj__ = ((struct sNode*)(right_value592=_inf_value25));
                if(right_337) { right_337 = come_decrement_ref_count2(right_337, ((struct sNode*)right_337)->finalize, ((struct sNode*)right_337)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_334) { node_334 = come_decrement_ref_count2(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value586,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value587,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value592) { right_value592 = come_decrement_ref_count2(right_value592, ((struct sNode*)right_value592)->finalize, ((struct sNode*)right_value592)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result249__;
                if(right_337) { right_337 = come_decrement_ref_count2(right_337, ((struct sNode*)right_337)->finalize, ((struct sNode*)right_337)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(*info->p==33&&*(info->p+1)==61&&*(info->p+2)==61) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_339=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value593=eq_exp(info))));
                    if(right_value593) { right_value593 = come_decrement_ref_count2(right_value593, ((struct sNode*)right_value593)->finalize, ((struct sNode*)right_value593)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1869, "struct sNode");
                    _inf_obj_value26=come_increment_ref_count(((struct sNotEq2Node*)(right_value595=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value594=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 1869, "sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_334),(struct sNode*)come_increment_ref_count(right_339),(_Bool)0,info))));
                    _inf_value26->_protocol_obj=_inf_obj_value26;
                    _inf_value26->finalize=(void*)sNotEq2Node_finalize;
                    _inf_value26->clone=(void*)sNotEq2Node_clone;
                    _inf_value26->compile=(void*)sNotEq2Node_compile;
                    _inf_value26->sline=(void*)sNodeBase_sline;
                    _inf_value26->sname=(void*)sNodeBase_sname;
                    _inf_value26->terminated=(void*)sNodeBase_terminated;
                    _inf_value26->kind=(void*)sNotEq2Node_kind;
                    __result252__ = __result_obj__ = ((struct sNode*)(right_value600=_inf_value26));
                    if(right_339) { right_339 = come_decrement_ref_count2(right_339, ((struct sNode*)right_339)->finalize, ((struct sNode*)right_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_334) { node_334 = come_decrement_ref_count2(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(right_value594,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(right_value595,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                    if(right_value600) { right_value600 = come_decrement_ref_count2(right_value600, ((struct sNode*)right_value600)->finalize, ((struct sNode*)right_value600)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result252__;
                    if(right_339) { right_339 = come_decrement_ref_count2(right_339, ((struct sNode*)right_339)->finalize, ((struct sNode*)right_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(*info->p==33&&*(info->p+1)==61) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_341=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value601=eq_exp(info))));
                        if(right_value601) { right_value601 = come_decrement_ref_count2(right_value601, ((struct sNode*)right_value601)->finalize, ((struct sNode*)right_value601)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1877, "struct sNode");
                        _inf_obj_value27=come_increment_ref_count(((struct sNotEqNode*)(right_value603=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value602=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 1877, "sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_334),(struct sNode*)come_increment_ref_count(right_341),(_Bool)0,info))));
                        _inf_value27->_protocol_obj=_inf_obj_value27;
                        _inf_value27->finalize=(void*)sNotEqNode_finalize;
                        _inf_value27->clone=(void*)sNotEqNode_clone;
                        _inf_value27->compile=(void*)sNotEqNode_compile;
                        _inf_value27->sline=(void*)sNodeBase_sline;
                        _inf_value27->sname=(void*)sNodeBase_sname;
                        _inf_value27->terminated=(void*)sNodeBase_terminated;
                        _inf_value27->kind=(void*)sNotEqNode_kind;
                        __result255__ = __result_obj__ = ((struct sNode*)(right_value608=_inf_value27));
                        if(right_341) { right_341 = come_decrement_ref_count2(right_341, ((struct sNode*)right_341)->finalize, ((struct sNode*)right_341)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_334) { node_334 = come_decrement_ref_count2(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(right_value602,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(right_value603,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(right_value608) { right_value608 = come_decrement_ref_count2(right_value608, ((struct sNode*)right_value608)->finalize, ((struct sNode*)right_value608)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result255__;
                        if(right_341) { right_341 = come_decrement_ref_count2(right_341, ((struct sNode*)right_341)->finalize, ((struct sNode*)right_341)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61) {
                            info->p+=4;
                            skip_spaces_and_lf(info);
                            right_343=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value609=eq_exp(info))));
                            if(right_value609) { right_value609 = come_decrement_ref_count2(right_value609, ((struct sNode*)right_value609)->finalize, ((struct sNode*)right_value609)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1885, "struct sNode");
                            _inf_obj_value28=come_increment_ref_count(((struct sEq2Node*)(right_value611=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value610=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 1885, "sEq2Node")))),(struct sNode*)come_increment_ref_count(node_334),(struct sNode*)come_increment_ref_count(right_343),(_Bool)1,info))));
                            _inf_value28->_protocol_obj=_inf_obj_value28;
                            _inf_value28->finalize=(void*)sEq2Node_finalize;
                            _inf_value28->clone=(void*)sEq2Node_clone;
                            _inf_value28->compile=(void*)sEq2Node_compile;
                            _inf_value28->sline=(void*)sNodeBase_sline;
                            _inf_value28->sname=(void*)sNodeBase_sname;
                            _inf_value28->terminated=(void*)sNodeBase_terminated;
                            _inf_value28->kind=(void*)sEq2Node_kind;
                            __result258__ = __result_obj__ = ((struct sNode*)(right_value616=_inf_value28));
                            if(right_343) { right_343 = come_decrement_ref_count2(right_343, ((struct sNode*)right_343)->finalize, ((struct sNode*)right_343)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_334) { node_334 = come_decrement_ref_count2(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(right_value610,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(right_value611,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                            if(right_value616) { right_value616 = come_decrement_ref_count2(right_value616, ((struct sNode*)right_value616)->finalize, ((struct sNode*)right_value616)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result258__;
                            if(right_343) { right_343 = come_decrement_ref_count2(right_343, ((struct sNode*)right_343)->finalize, ((struct sNode*)right_343)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_345=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value617=eq_exp(info))));
                                if(right_value617) { right_value617 = come_decrement_ref_count2(right_value617, ((struct sNode*)right_value617)->finalize, ((struct sNode*)right_value617)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1893, "struct sNode");
                                _inf_obj_value29=come_increment_ref_count(((struct sEqNode*)(right_value619=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value618=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 1893, "sEqNode")))),(struct sNode*)come_increment_ref_count(node_334),(struct sNode*)come_increment_ref_count(right_345),(_Bool)1,info))));
                                _inf_value29->_protocol_obj=_inf_obj_value29;
                                _inf_value29->finalize=(void*)sEqNode_finalize;
                                _inf_value29->clone=(void*)sEqNode_clone;
                                _inf_value29->compile=(void*)sEqNode_compile;
                                _inf_value29->sline=(void*)sNodeBase_sline;
                                _inf_value29->sname=(void*)sNodeBase_sname;
                                _inf_value29->terminated=(void*)sNodeBase_terminated;
                                _inf_value29->kind=(void*)sEqNode_kind;
                                __result261__ = __result_obj__ = ((struct sNode*)(right_value624=_inf_value29));
                                if(right_345) { right_345 = come_decrement_ref_count2(right_345, ((struct sNode*)right_345)->finalize, ((struct sNode*)right_345)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_334) { node_334 = come_decrement_ref_count2(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(right_value618,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(right_value619,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(right_value624) { right_value624 = come_decrement_ref_count2(right_value624, ((struct sNode*)right_value624)->finalize, ((struct sNode*)right_value624)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result261__;
                                if(right_345) { right_345 = come_decrement_ref_count2(right_345, ((struct sNode*)right_345)->finalize, ((struct sNode*)right_345)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61) {
                                    info->p+=4;
                                    skip_spaces_and_lf(info);
                                    right_347=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value625=eq_exp(info))));
                                    if(right_value625) { right_value625 = come_decrement_ref_count2(right_value625, ((struct sNode*)right_value625)->finalize, ((struct sNode*)right_value625)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1901, "struct sNode");
                                    _inf_obj_value30=come_increment_ref_count(((struct sNotEq2Node*)(right_value627=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value626=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 1901, "sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_334),(struct sNode*)come_increment_ref_count(right_347),(_Bool)1,info))));
                                    _inf_value30->_protocol_obj=_inf_obj_value30;
                                    _inf_value30->finalize=(void*)sNotEq2Node_finalize;
                                    _inf_value30->clone=(void*)sNotEq2Node_clone;
                                    _inf_value30->compile=(void*)sNotEq2Node_compile;
                                    _inf_value30->sline=(void*)sNodeBase_sline;
                                    _inf_value30->sname=(void*)sNodeBase_sname;
                                    _inf_value30->terminated=(void*)sNodeBase_terminated;
                                    _inf_value30->kind=(void*)sNotEq2Node_kind;
                                    __result264__ = __result_obj__ = ((struct sNode*)(right_value632=_inf_value30));
                                    if(right_347) { right_347 = come_decrement_ref_count2(right_347, ((struct sNode*)right_347)->finalize, ((struct sNode*)right_347)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node_334) { node_334 = come_decrement_ref_count2(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(right_value626,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(right_value627,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(right_value632) { right_value632 = come_decrement_ref_count2(right_value632, ((struct sNode*)right_value632)->finalize, ((struct sNode*)right_value632)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result264__;
                                    if(right_347) { right_347 = come_decrement_ref_count2(right_347, ((struct sNode*)right_347)->finalize, ((struct sNode*)right_347)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61) {
                                        info->p+=3;
                                        skip_spaces_and_lf(info);
                                        right_349=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value633=eq_exp(info))));
                                        if(right_value633) { right_value633 = come_decrement_ref_count2(right_value633, ((struct sNode*)right_value633)->finalize, ((struct sNode*)right_value633)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1909, "struct sNode");
                                        _inf_obj_value31=come_increment_ref_count(((struct sNotEqNode*)(right_value635=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value634=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 1909, "sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_334),(struct sNode*)come_increment_ref_count(right_349),(_Bool)1,info))));
                                        _inf_value31->_protocol_obj=_inf_obj_value31;
                                        _inf_value31->finalize=(void*)sNotEqNode_finalize;
                                        _inf_value31->clone=(void*)sNotEqNode_clone;
                                        _inf_value31->compile=(void*)sNotEqNode_compile;
                                        _inf_value31->sline=(void*)sNodeBase_sline;
                                        _inf_value31->sname=(void*)sNodeBase_sname;
                                        _inf_value31->terminated=(void*)sNodeBase_terminated;
                                        _inf_value31->kind=(void*)sNotEqNode_kind;
                                        __result267__ = __result_obj__ = ((struct sNode*)(right_value640=_inf_value31));
                                        if(right_349) { right_349 = come_decrement_ref_count2(right_349, ((struct sNode*)right_349)->finalize, ((struct sNode*)right_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node_334) { node_334 = come_decrement_ref_count2(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(right_value634,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(right_value635,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(right_value640) { right_value640 = come_decrement_ref_count2(right_value640, ((struct sNode*)right_value640)->finalize, ((struct sNode*)right_value640)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result267__;
                                        if(right_349) { right_349 = come_decrement_ref_count2(right_349, ((struct sNode*)right_349)->finalize, ((struct sNode*)right_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result268__ = __result_obj__ = node_334;
    if(node_334) { node_334 = come_decrement_ref_count2(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result268__;
    if(node_334) { node_334 = come_decrement_ref_count2(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sEq2Node_finalize(struct sEq2Node* self){
                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__;
struct sEq2Node* __result256__;
void* right_value612;
struct sEq2Node* result_344;
void* right_value613;
char* __dec_obj224;
void* right_value614;
struct sNode* __dec_obj225;
void* right_value615;
struct sNode* __dec_obj226;
struct sEq2Node* __result257__;
memset(&__result_obj__, 0, sizeof(void*));
right_value612 = (void*)0;
memset(&result_344, 0, sizeof(struct sEq2Node*));
right_value613 = (void*)0;
right_value614 = (void*)0;
right_value615 = (void*)0;
                                if(self==(void*)0) {
                                    __result256__ = __result_obj__ = (void*)0;
                                    return __result256__;
                                }
                                result_344=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value612=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "sEq2Node"))));
                                come_call_finalizer3(right_value612,sEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                                if(self!=((void*)0)) {
                                    result_344->sline=self->sline;
                                }
                                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                    __dec_obj224=result_344->sname;
                                    result_344->sname=(char*)come_increment_ref_count(((char*)(right_value613=string_clone(self->sname))));
                                    __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value613 = come_decrement_ref_count2(right_value613, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(self!=((void*)0)) {
                                    result_344->mQuote=self->mQuote;
                                }
                                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                    __dec_obj225=result_344->mLeft;
                                    result_344->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value614=sNode_clone(self->mLeft))));
                                    if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value614) { right_value614 = come_decrement_ref_count2(right_value614, ((struct sNode*)right_value614)->finalize, ((struct sNode*)right_value614)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                    __dec_obj226=result_344->mRight;
                                    result_344->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value615=sNode_clone(self->mRight))));
                                    if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value615) { right_value615 = come_decrement_ref_count2(right_value615, ((struct sNode*)right_value615)->finalize, ((struct sNode*)right_value615)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                __result257__ = __result_obj__ = result_344;
                                come_call_finalizer3(result_344,sEq2Node_finalize, 0, 0, 1, 0, (void*)0);
                                return __result257__;
                                come_call_finalizer3(result_344,sEq2Node_finalize, 0, 0, 0, 0, (void*)0);
}

static void sEqNode_finalize(struct sEqNode* self){
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__;
struct sEqNode* __result259__;
void* right_value620;
struct sEqNode* result_346;
void* right_value621;
char* __dec_obj227;
void* right_value622;
struct sNode* __dec_obj228;
void* right_value623;
struct sNode* __dec_obj229;
struct sEqNode* __result260__;
memset(&__result_obj__, 0, sizeof(void*));
right_value620 = (void*)0;
memset(&result_346, 0, sizeof(struct sEqNode*));
right_value621 = (void*)0;
right_value622 = (void*)0;
right_value623 = (void*)0;
                                    if(self==(void*)0) {
                                        __result259__ = __result_obj__ = (void*)0;
                                        return __result259__;
                                    }
                                    result_346=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value620=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "sEqNode"))));
                                    come_call_finalizer3(right_value620,sEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(self!=((void*)0)) {
                                        result_346->sline=self->sline;
                                    }
                                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                        __dec_obj227=result_346->sname;
                                        result_346->sname=(char*)come_increment_ref_count(((char*)(right_value621=string_clone(self->sname))));
                                        __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value621 = come_decrement_ref_count2(right_value621, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(self!=((void*)0)) {
                                        result_346->mQuote=self->mQuote;
                                    }
                                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                        __dec_obj228=result_346->mLeft;
                                        result_346->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value622=sNode_clone(self->mLeft))));
                                        if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value622) { right_value622 = come_decrement_ref_count2(right_value622, ((struct sNode*)right_value622)->finalize, ((struct sNode*)right_value622)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                        __dec_obj229=result_346->mRight;
                                        result_346->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value623=sNode_clone(self->mRight))));
                                        if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value623) { right_value623 = come_decrement_ref_count2(right_value623, ((struct sNode*)right_value623)->finalize, ((struct sNode*)right_value623)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    __result260__ = __result_obj__ = result_346;
                                    come_call_finalizer3(result_346,sEqNode_finalize, 0, 0, 1, 0, (void*)0);
                                    return __result260__;
                                    come_call_finalizer3(result_346,sEqNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
                                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__;
struct sNotEq2Node* __result262__;
void* right_value628;
struct sNotEq2Node* result_348;
void* right_value629;
char* __dec_obj230;
void* right_value630;
struct sNode* __dec_obj231;
void* right_value631;
struct sNode* __dec_obj232;
struct sNotEq2Node* __result263__;
memset(&__result_obj__, 0, sizeof(void*));
right_value628 = (void*)0;
memset(&result_348, 0, sizeof(struct sNotEq2Node*));
right_value629 = (void*)0;
right_value630 = (void*)0;
right_value631 = (void*)0;
                                        if(self==(void*)0) {
                                            __result262__ = __result_obj__ = (void*)0;
                                            return __result262__;
                                        }
                                        result_348=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value628=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "sNotEq2Node"))));
                                        come_call_finalizer3(right_value628,sNotEq2Node_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(self!=((void*)0)) {
                                            result_348->sline=self->sline;
                                        }
                                        if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                            __dec_obj230=result_348->sname;
                                            result_348->sname=(char*)come_increment_ref_count(((char*)(right_value629=string_clone(self->sname))));
                                            __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value629 = come_decrement_ref_count2(right_value629, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        if(self!=((void*)0)) {
                                            result_348->mQuote=self->mQuote;
                                        }
                                        if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                            __dec_obj231=result_348->mLeft;
                                            result_348->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value630=sNode_clone(self->mLeft))));
                                            if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count2(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value630) { right_value630 = come_decrement_ref_count2(right_value630, ((struct sNode*)right_value630)->finalize, ((struct sNode*)right_value630)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                            __dec_obj232=result_348->mRight;
                                            result_348->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value631=sNode_clone(self->mRight))));
                                            if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count2(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value631) { right_value631 = come_decrement_ref_count2(right_value631, ((struct sNode*)right_value631)->finalize, ((struct sNode*)right_value631)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        __result263__ = __result_obj__ = result_348;
                                        come_call_finalizer3(result_348,sNotEq2Node_finalize, 0, 0, 1, 0, (void*)0);
                                        return __result263__;
                                        come_call_finalizer3(result_348,sNotEq2Node_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
                                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
                                            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__;
struct sNotEqNode* __result265__;
void* right_value636;
struct sNotEqNode* result_350;
void* right_value637;
char* __dec_obj233;
void* right_value638;
struct sNode* __dec_obj234;
void* right_value639;
struct sNode* __dec_obj235;
struct sNotEqNode* __result266__;
memset(&__result_obj__, 0, sizeof(void*));
right_value636 = (void*)0;
memset(&result_350, 0, sizeof(struct sNotEqNode*));
right_value637 = (void*)0;
right_value638 = (void*)0;
right_value639 = (void*)0;
                                            if(self==(void*)0) {
                                                __result265__ = __result_obj__ = (void*)0;
                                                return __result265__;
                                            }
                                            result_350=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value636=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "sNotEqNode"))));
                                            come_call_finalizer3(right_value636,sNotEqNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(self!=((void*)0)) {
                                                result_350->sline=self->sline;
                                            }
                                            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                                                __dec_obj233=result_350->sname;
                                                result_350->sname=(char*)come_increment_ref_count(((char*)(right_value637=string_clone(self->sname))));
                                                __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value637 = come_decrement_ref_count2(right_value637, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            if(self!=((void*)0)) {
                                                result_350->mQuote=self->mQuote;
                                            }
                                            if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                                                __dec_obj234=result_350->mLeft;
                                                result_350->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value638=sNode_clone(self->mLeft))));
                                                if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value638) { right_value638 = come_decrement_ref_count2(right_value638, ((struct sNode*)right_value638)->finalize, ((struct sNode*)right_value638)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                                                __dec_obj235=result_350->mRight;
                                                result_350->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value639=sNode_clone(self->mRight))));
                                                if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value639) { right_value639 = come_decrement_ref_count2(right_value639, ((struct sNode*)right_value639)->finalize, ((struct sNode*)right_value639)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            __result266__ = __result_obj__ = result_350;
                                            come_call_finalizer3(result_350,sNotEqNode_finalize, 0, 0, 1, 0, (void*)0);
                                            return __result266__;
                                            come_call_finalizer3(result_350,sNotEqNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* and_exp(struct sInfo* info){
void* __result_obj__;
void* right_value641;
struct sNode* node_351;
void* right_value642;
struct sNode* right_352;
void* right_value643;
void* right_value644;
struct sNode* _inf_value32;
struct sAndNode* _inf_obj_value32;
void* right_value649;
struct sNode* __result271__;
void* right_value650;
struct sNode* right_354;
void* right_value651;
void* right_value652;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* right_value657;
struct sNode* __result274__;
struct sNode* __result275__;
memset(&__result_obj__, 0, sizeof(void*));
right_value641 = (void*)0;
memset(&node_351, 0, sizeof(struct sNode*));
right_value642 = (void*)0;
memset(&right_352, 0, sizeof(struct sNode*));
right_value643 = (void*)0;
right_value644 = (void*)0;
right_value649 = (void*)0;
right_value650 = (void*)0;
memset(&right_354, 0, sizeof(struct sNode*));
right_value651 = (void*)0;
right_value652 = (void*)0;
right_value657 = (void*)0;
    parse_sharp_v5(info);
    node_351=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value641=eq_exp(info))));
    if(right_value641) { right_value641 = come_decrement_ref_count2(right_value641, ((struct sNode*)right_value641)->finalize, ((struct sNode*)right_value641)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(!node_351->terminated(node_351->_protocol_obj)&&*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            right_352=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value642=and_exp(info))));
            if(right_value642) { right_value642 = come_decrement_ref_count2(right_value642, ((struct sNode*)right_value642)->finalize, ((struct sNode*)right_value642)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1936, "struct sNode");
            _inf_obj_value32=come_increment_ref_count(((struct sAndNode*)(right_value644=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value643=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 1936, "sAndNode")))),(struct sNode*)come_increment_ref_count(node_351),(struct sNode*)come_increment_ref_count(right_352),(_Bool)0,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sAndNode_finalize;
            _inf_value32->clone=(void*)sAndNode_clone;
            _inf_value32->compile=(void*)sAndNode_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sNodeBase_terminated;
            _inf_value32->kind=(void*)sAndNode_kind;
            __result271__ = __result_obj__ = ((struct sNode*)(right_value649=_inf_value32));
            if(right_352) { right_352 = come_decrement_ref_count2(right_352, ((struct sNode*)right_352)->finalize, ((struct sNode*)right_352)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value643,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value644,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value649) { right_value649 = come_decrement_ref_count2(right_value649, ((struct sNode*)right_value649)->finalize, ((struct sNode*)right_value649)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result271__;
            if(right_352) { right_352 = come_decrement_ref_count2(right_352, ((struct sNode*)right_352)->finalize, ((struct sNode*)right_352)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(!node_351->terminated(node_351->_protocol_obj)&&*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_354=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value650=and_exp(info))));
                if(right_value650) { right_value650 = come_decrement_ref_count2(right_value650, ((struct sNode*)right_value650)->finalize, ((struct sNode*)right_value650)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1944, "struct sNode");
                _inf_obj_value33=come_increment_ref_count(((struct sAndNode*)(right_value652=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value651=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 1944, "sAndNode")))),(struct sNode*)come_increment_ref_count(node_351),(struct sNode*)come_increment_ref_count(right_354),(_Bool)1,info))));
                _inf_value33->_protocol_obj=_inf_obj_value33;
                _inf_value33->finalize=(void*)sAndNode_finalize;
                _inf_value33->clone=(void*)sAndNode_clone;
                _inf_value33->compile=(void*)sAndNode_compile;
                _inf_value33->sline=(void*)sNodeBase_sline;
                _inf_value33->sname=(void*)sNodeBase_sname;
                _inf_value33->terminated=(void*)sNodeBase_terminated;
                _inf_value33->kind=(void*)sAndNode_kind;
                __result274__ = __result_obj__ = ((struct sNode*)(right_value657=_inf_value33));
                if(right_354) { right_354 = come_decrement_ref_count2(right_354, ((struct sNode*)right_354)->finalize, ((struct sNode*)right_354)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value651,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value652,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value657) { right_value657 = come_decrement_ref_count2(right_value657, ((struct sNode*)right_value657)->finalize, ((struct sNode*)right_value657)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result274__;
                if(right_354) { right_354 = come_decrement_ref_count2(right_354, ((struct sNode*)right_354)->finalize, ((struct sNode*)right_354)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result275__ = __result_obj__ = node_351;
    if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result275__;
    if(node_351) { node_351 = come_decrement_ref_count2(node_351, ((struct sNode*)node_351)->finalize, ((struct sNode*)node_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAndNode_finalize(struct sAndNode* self){
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__;
struct sAndNode* __result272__;
void* right_value653;
struct sAndNode* result_355;
void* right_value654;
char* __dec_obj239;
void* right_value655;
struct sNode* __dec_obj240;
void* right_value656;
struct sNode* __dec_obj241;
struct sAndNode* __result273__;
memset(&__result_obj__, 0, sizeof(void*));
right_value653 = (void*)0;
memset(&result_355, 0, sizeof(struct sAndNode*));
right_value654 = (void*)0;
right_value655 = (void*)0;
right_value656 = (void*)0;
                    if(self==(void*)0) {
                        __result272__ = __result_obj__ = (void*)0;
                        return __result272__;
                    }
                    result_355=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value653=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "sAndNode"))));
                    come_call_finalizer3(right_value653,sAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(self!=((void*)0)) {
                        result_355->sline=self->sline;
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        __dec_obj239=result_355->sname;
                        result_355->sname=(char*)come_increment_ref_count(((char*)(right_value654=string_clone(self->sname))));
                        __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value654 = come_decrement_ref_count2(right_value654, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(self!=((void*)0)) {
                        result_355->mQuote=self->mQuote;
                    }
                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                        __dec_obj240=result_355->mLeft;
                        result_355->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value655=sNode_clone(self->mLeft))));
                        if(__dec_obj240) { __dec_obj240 = come_decrement_ref_count2(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value655) { right_value655 = come_decrement_ref_count2(right_value655, ((struct sNode*)right_value655)->finalize, ((struct sNode*)right_value655)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                        __dec_obj241=result_355->mRight;
                        result_355->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value656=sNode_clone(self->mRight))));
                        if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count2(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value656) { right_value656 = come_decrement_ref_count2(right_value656, ((struct sNode*)right_value656)->finalize, ((struct sNode*)right_value656)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    __result273__ = __result_obj__ = result_355;
                    come_call_finalizer3(result_355,sAndNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result273__;
                    come_call_finalizer3(result_355,sAndNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* xor_exp(struct sInfo* info){
void* __result_obj__;
void* right_value658;
struct sNode* node_356;
void* right_value659;
struct sNode* right_357;
void* right_value660;
void* right_value661;
struct sNode* _inf_value34;
struct sXOrNode* _inf_obj_value34;
void* right_value666;
struct sNode* __result278__;
void* right_value667;
struct sNode* right_359;
void* right_value668;
void* right_value669;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* right_value674;
struct sNode* __result281__;
struct sNode* __result282__;
memset(&__result_obj__, 0, sizeof(void*));
right_value658 = (void*)0;
memset(&node_356, 0, sizeof(struct sNode*));
right_value659 = (void*)0;
memset(&right_357, 0, sizeof(struct sNode*));
right_value660 = (void*)0;
right_value661 = (void*)0;
right_value666 = (void*)0;
right_value667 = (void*)0;
memset(&right_359, 0, sizeof(struct sNode*));
right_value668 = (void*)0;
right_value669 = (void*)0;
right_value674 = (void*)0;
    parse_sharp_v5(info);
    node_356=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value658=and_exp(info))));
    if(right_value658) { right_value658 = come_decrement_ref_count2(right_value658, ((struct sNode*)right_value658)->finalize, ((struct sNode*)right_value658)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==94&&*(info->p+1)!=61) {
            info->p++;
            skip_spaces_and_lf(info);
            right_357=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value659=xor_exp(info))));
            if(right_value659) { right_value659 = come_decrement_ref_count2(right_value659, ((struct sNode*)right_value659)->finalize, ((struct sNode*)right_value659)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1971, "struct sNode");
            _inf_obj_value34=come_increment_ref_count(((struct sXOrNode*)(right_value661=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value660=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 1971, "sXOrNode")))),(struct sNode*)come_increment_ref_count(node_356),(struct sNode*)come_increment_ref_count(right_357),(_Bool)0,info))));
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sXOrNode_finalize;
            _inf_value34->clone=(void*)sXOrNode_clone;
            _inf_value34->compile=(void*)sXOrNode_compile;
            _inf_value34->sline=(void*)sNodeBase_sline;
            _inf_value34->sname=(void*)sNodeBase_sname;
            _inf_value34->terminated=(void*)sNodeBase_terminated;
            _inf_value34->kind=(void*)sXOrNode_kind;
            __result278__ = __result_obj__ = ((struct sNode*)(right_value666=_inf_value34));
            if(right_357) { right_357 = come_decrement_ref_count2(right_357, ((struct sNode*)right_357)->finalize, ((struct sNode*)right_357)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_356) { node_356 = come_decrement_ref_count2(node_356, ((struct sNode*)node_356)->finalize, ((struct sNode*)node_356)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value660,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value661,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value666) { right_value666 = come_decrement_ref_count2(right_value666, ((struct sNode*)right_value666)->finalize, ((struct sNode*)right_value666)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result278__;
            if(right_357) { right_357 = come_decrement_ref_count2(right_357, ((struct sNode*)right_357)->finalize, ((struct sNode*)right_357)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(*info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_359=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value667=xor_exp(info))));
                if(right_value667) { right_value667 = come_decrement_ref_count2(right_value667, ((struct sNode*)right_value667)->finalize, ((struct sNode*)right_value667)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 1979, "struct sNode");
                _inf_obj_value35=come_increment_ref_count(((struct sXOrNode*)(right_value669=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value668=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 1979, "sXOrNode")))),(struct sNode*)come_increment_ref_count(node_356),(struct sNode*)come_increment_ref_count(right_359),(_Bool)1,info))));
                _inf_value35->_protocol_obj=_inf_obj_value35;
                _inf_value35->finalize=(void*)sXOrNode_finalize;
                _inf_value35->clone=(void*)sXOrNode_clone;
                _inf_value35->compile=(void*)sXOrNode_compile;
                _inf_value35->sline=(void*)sNodeBase_sline;
                _inf_value35->sname=(void*)sNodeBase_sname;
                _inf_value35->terminated=(void*)sNodeBase_terminated;
                _inf_value35->kind=(void*)sXOrNode_kind;
                __result281__ = __result_obj__ = ((struct sNode*)(right_value674=_inf_value35));
                if(right_359) { right_359 = come_decrement_ref_count2(right_359, ((struct sNode*)right_359)->finalize, ((struct sNode*)right_359)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_356) { node_356 = come_decrement_ref_count2(node_356, ((struct sNode*)node_356)->finalize, ((struct sNode*)node_356)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value668,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value669,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value674) { right_value674 = come_decrement_ref_count2(right_value674, ((struct sNode*)right_value674)->finalize, ((struct sNode*)right_value674)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result281__;
                if(right_359) { right_359 = come_decrement_ref_count2(right_359, ((struct sNode*)right_359)->finalize, ((struct sNode*)right_359)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result282__ = __result_obj__ = node_356;
    if(node_356) { node_356 = come_decrement_ref_count2(node_356, ((struct sNode*)node_356)->finalize, ((struct sNode*)node_356)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result282__;
    if(node_356) { node_356 = come_decrement_ref_count2(node_356, ((struct sNode*)node_356)->finalize, ((struct sNode*)node_356)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sXOrNode_finalize(struct sXOrNode* self){
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__;
struct sXOrNode* __result279__;
void* right_value670;
struct sXOrNode* result_360;
void* right_value671;
char* __dec_obj245;
void* right_value672;
struct sNode* __dec_obj246;
void* right_value673;
struct sNode* __dec_obj247;
struct sXOrNode* __result280__;
memset(&__result_obj__, 0, sizeof(void*));
right_value670 = (void*)0;
memset(&result_360, 0, sizeof(struct sXOrNode*));
right_value671 = (void*)0;
right_value672 = (void*)0;
right_value673 = (void*)0;
                    if(self==(void*)0) {
                        __result279__ = __result_obj__ = (void*)0;
                        return __result279__;
                    }
                    result_360=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value670=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "sXOrNode"))));
                    come_call_finalizer3(right_value670,sXOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(self!=((void*)0)) {
                        result_360->sline=self->sline;
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        __dec_obj245=result_360->sname;
                        result_360->sname=(char*)come_increment_ref_count(((char*)(right_value671=string_clone(self->sname))));
                        __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value671 = come_decrement_ref_count2(right_value671, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(self!=((void*)0)) {
                        result_360->mQuote=self->mQuote;
                    }
                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                        __dec_obj246=result_360->mLeft;
                        result_360->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value672=sNode_clone(self->mLeft))));
                        if(__dec_obj246) { __dec_obj246 = come_decrement_ref_count2(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value672) { right_value672 = come_decrement_ref_count2(right_value672, ((struct sNode*)right_value672)->finalize, ((struct sNode*)right_value672)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                        __dec_obj247=result_360->mRight;
                        result_360->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value673=sNode_clone(self->mRight))));
                        if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count2(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value673) { right_value673 = come_decrement_ref_count2(right_value673, ((struct sNode*)right_value673)->finalize, ((struct sNode*)right_value673)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    __result280__ = __result_obj__ = result_360;
                    come_call_finalizer3(result_360,sXOrNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result280__;
                    come_call_finalizer3(result_360,sXOrNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* or_exp(struct sInfo* info){
void* __result_obj__;
void* right_value675;
struct sNode* node_361;
void* right_value676;
struct sNode* right_362;
void* right_value677;
void* right_value678;
struct sNode* _inf_value36;
struct sOrNode* _inf_obj_value36;
void* right_value683;
struct sNode* __result285__;
void* right_value684;
struct sNode* right_364;
void* right_value685;
void* right_value686;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* right_value691;
struct sNode* __result288__;
struct sNode* __result289__;
memset(&__result_obj__, 0, sizeof(void*));
right_value675 = (void*)0;
memset(&node_361, 0, sizeof(struct sNode*));
right_value676 = (void*)0;
memset(&right_362, 0, sizeof(struct sNode*));
right_value677 = (void*)0;
right_value678 = (void*)0;
right_value683 = (void*)0;
right_value684 = (void*)0;
memset(&right_364, 0, sizeof(struct sNode*));
right_value685 = (void*)0;
right_value686 = (void*)0;
right_value691 = (void*)0;
    parse_sharp_v5(info);
    node_361=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value675=xor_exp(info))));
    if(right_value675) { right_value675 = come_decrement_ref_count2(right_value675, ((struct sNode*)right_value675)->finalize, ((struct sNode*)right_value675)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124) {
            info->p++;
            skip_spaces_and_lf(info);
            right_362=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value676=or_exp(info))));
            if(right_value676) { right_value676 = come_decrement_ref_count2(right_value676, ((struct sNode*)right_value676)->finalize, ((struct sNode*)right_value676)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2006, "struct sNode");
            _inf_obj_value36=come_increment_ref_count(((struct sOrNode*)(right_value678=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value677=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2006, "sOrNode")))),(struct sNode*)come_increment_ref_count(node_361),(struct sNode*)come_increment_ref_count(right_362),(_Bool)0,info))));
            _inf_value36->_protocol_obj=_inf_obj_value36;
            _inf_value36->finalize=(void*)sOrNode_finalize;
            _inf_value36->clone=(void*)sOrNode_clone;
            _inf_value36->compile=(void*)sOrNode_compile;
            _inf_value36->sline=(void*)sNodeBase_sline;
            _inf_value36->sname=(void*)sNodeBase_sname;
            _inf_value36->terminated=(void*)sNodeBase_terminated;
            _inf_value36->kind=(void*)sOrNode_kind;
            __result285__ = __result_obj__ = ((struct sNode*)(right_value683=_inf_value36));
            if(right_362) { right_362 = come_decrement_ref_count2(right_362, ((struct sNode*)right_362)->finalize, ((struct sNode*)right_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_361) { node_361 = come_decrement_ref_count2(node_361, ((struct sNode*)node_361)->finalize, ((struct sNode*)node_361)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value677,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value678,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value683) { right_value683 = come_decrement_ref_count2(right_value683, ((struct sNode*)right_value683)->finalize, ((struct sNode*)right_value683)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result285__;
            if(right_362) { right_362 = come_decrement_ref_count2(right_362, ((struct sNode*)right_362)->finalize, ((struct sNode*)right_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(*info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_364=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value684=or_exp(info))));
                if(right_value684) { right_value684 = come_decrement_ref_count2(right_value684, ((struct sNode*)right_value684)->finalize, ((struct sNode*)right_value684)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2014, "struct sNode");
                _inf_obj_value37=come_increment_ref_count(((struct sOrNode*)(right_value686=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value685=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2014, "sOrNode")))),(struct sNode*)come_increment_ref_count(node_361),(struct sNode*)come_increment_ref_count(right_364),(_Bool)1,info))));
                _inf_value37->_protocol_obj=_inf_obj_value37;
                _inf_value37->finalize=(void*)sOrNode_finalize;
                _inf_value37->clone=(void*)sOrNode_clone;
                _inf_value37->compile=(void*)sOrNode_compile;
                _inf_value37->sline=(void*)sNodeBase_sline;
                _inf_value37->sname=(void*)sNodeBase_sname;
                _inf_value37->terminated=(void*)sNodeBase_terminated;
                _inf_value37->kind=(void*)sOrNode_kind;
                __result288__ = __result_obj__ = ((struct sNode*)(right_value691=_inf_value37));
                if(right_364) { right_364 = come_decrement_ref_count2(right_364, ((struct sNode*)right_364)->finalize, ((struct sNode*)right_364)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_361) { node_361 = come_decrement_ref_count2(node_361, ((struct sNode*)node_361)->finalize, ((struct sNode*)node_361)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value685,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value686,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value691) { right_value691 = come_decrement_ref_count2(right_value691, ((struct sNode*)right_value691)->finalize, ((struct sNode*)right_value691)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result288__;
                if(right_364) { right_364 = come_decrement_ref_count2(right_364, ((struct sNode*)right_364)->finalize, ((struct sNode*)right_364)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result289__ = __result_obj__ = node_361;
    if(node_361) { node_361 = come_decrement_ref_count2(node_361, ((struct sNode*)node_361)->finalize, ((struct sNode*)node_361)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result289__;
    if(node_361) { node_361 = come_decrement_ref_count2(node_361, ((struct sNode*)node_361)->finalize, ((struct sNode*)node_361)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sOrNode_finalize(struct sOrNode* self){
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__;
struct sOrNode* __result286__;
void* right_value687;
struct sOrNode* result_365;
void* right_value688;
char* __dec_obj251;
void* right_value689;
struct sNode* __dec_obj252;
void* right_value690;
struct sNode* __dec_obj253;
struct sOrNode* __result287__;
memset(&__result_obj__, 0, sizeof(void*));
right_value687 = (void*)0;
memset(&result_365, 0, sizeof(struct sOrNode*));
right_value688 = (void*)0;
right_value689 = (void*)0;
right_value690 = (void*)0;
                    if(self==(void*)0) {
                        __result286__ = __result_obj__ = (void*)0;
                        return __result286__;
                    }
                    result_365=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value687=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "sOrNode"))));
                    come_call_finalizer3(right_value687,sOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(self!=((void*)0)) {
                        result_365->sline=self->sline;
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        __dec_obj251=result_365->sname;
                        result_365->sname=(char*)come_increment_ref_count(((char*)(right_value688=string_clone(self->sname))));
                        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value688 = come_decrement_ref_count2(right_value688, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(self!=((void*)0)) {
                        result_365->mQuote=self->mQuote;
                    }
                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                        __dec_obj252=result_365->mLeft;
                        result_365->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value689=sNode_clone(self->mLeft))));
                        if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value689) { right_value689 = come_decrement_ref_count2(right_value689, ((struct sNode*)right_value689)->finalize, ((struct sNode*)right_value689)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                        __dec_obj253=result_365->mRight;
                        result_365->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value690=sNode_clone(self->mRight))));
                        if(__dec_obj253) { __dec_obj253 = come_decrement_ref_count2(__dec_obj253, ((struct sNode*)__dec_obj253)->finalize, ((struct sNode*)__dec_obj253)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value690) { right_value690 = come_decrement_ref_count2(right_value690, ((struct sNode*)right_value690)->finalize, ((struct sNode*)right_value690)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    __result287__ = __result_obj__ = result_365;
                    come_call_finalizer3(result_365,sOrNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result287__;
                    come_call_finalizer3(result_365,sOrNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* andand_exp(struct sInfo* info){
void* __result_obj__;
void* right_value692;
struct sNode* node_366;
void* right_value693;
struct sNode* right_367;
void* right_value694;
void* right_value695;
struct sNode* _inf_value38;
struct sAndAndNode* _inf_obj_value38;
void* right_value700;
struct sNode* __result292__;
void* right_value701;
struct sNode* right_369;
void* right_value702;
void* right_value703;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* right_value708;
struct sNode* __result295__;
struct sNode* __result296__;
memset(&__result_obj__, 0, sizeof(void*));
right_value692 = (void*)0;
memset(&node_366, 0, sizeof(struct sNode*));
right_value693 = (void*)0;
memset(&right_367, 0, sizeof(struct sNode*));
right_value694 = (void*)0;
right_value695 = (void*)0;
right_value700 = (void*)0;
right_value701 = (void*)0;
memset(&right_369, 0, sizeof(struct sNode*));
right_value702 = (void*)0;
right_value703 = (void*)0;
right_value708 = (void*)0;
    parse_sharp_v5(info);
    node_366=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value692=or_exp(info))));
    if(right_value692) { right_value692 = come_decrement_ref_count2(right_value692, ((struct sNode*)right_value692)->finalize, ((struct sNode*)right_value692)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==38&&*(info->p+1)==38) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_367=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value693=andand_exp(info))));
            if(right_value693) { right_value693 = come_decrement_ref_count2(right_value693, ((struct sNode*)right_value693)->finalize, ((struct sNode*)right_value693)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2041, "struct sNode");
            _inf_obj_value38=come_increment_ref_count(((struct sAndAndNode*)(right_value695=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value694=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2041, "sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_366),(struct sNode*)come_increment_ref_count(right_367),(_Bool)0,info))));
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sAndAndNode_finalize;
            _inf_value38->clone=(void*)sAndAndNode_clone;
            _inf_value38->compile=(void*)sAndAndNode_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sAndAndNode_kind;
            __result292__ = __result_obj__ = ((struct sNode*)(right_value700=_inf_value38));
            if(right_367) { right_367 = come_decrement_ref_count2(right_367, ((struct sNode*)right_367)->finalize, ((struct sNode*)right_367)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_366) { node_366 = come_decrement_ref_count2(node_366, ((struct sNode*)node_366)->finalize, ((struct sNode*)node_366)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value694,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value695,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value700) { right_value700 = come_decrement_ref_count2(right_value700, ((struct sNode*)right_value700)->finalize, ((struct sNode*)right_value700)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result292__;
            if(right_367) { right_367 = come_decrement_ref_count2(right_367, ((struct sNode*)right_367)->finalize, ((struct sNode*)right_367)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(*info->p==92&&*(info->p+1)==38&&*(info->p+2)==38) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_369=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value701=andand_exp(info))));
                if(right_value701) { right_value701 = come_decrement_ref_count2(right_value701, ((struct sNode*)right_value701)->finalize, ((struct sNode*)right_value701)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2049, "struct sNode");
                _inf_obj_value39=come_increment_ref_count(((struct sAndAndNode*)(right_value703=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value702=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2049, "sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_366),(struct sNode*)come_increment_ref_count(right_369),(_Bool)1,info))));
                _inf_value39->_protocol_obj=_inf_obj_value39;
                _inf_value39->finalize=(void*)sAndAndNode_finalize;
                _inf_value39->clone=(void*)sAndAndNode_clone;
                _inf_value39->compile=(void*)sAndAndNode_compile;
                _inf_value39->sline=(void*)sNodeBase_sline;
                _inf_value39->sname=(void*)sNodeBase_sname;
                _inf_value39->terminated=(void*)sNodeBase_terminated;
                _inf_value39->kind=(void*)sAndAndNode_kind;
                __result295__ = __result_obj__ = ((struct sNode*)(right_value708=_inf_value39));
                if(right_369) { right_369 = come_decrement_ref_count2(right_369, ((struct sNode*)right_369)->finalize, ((struct sNode*)right_369)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_366) { node_366 = come_decrement_ref_count2(node_366, ((struct sNode*)node_366)->finalize, ((struct sNode*)node_366)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value702,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value703,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value708) { right_value708 = come_decrement_ref_count2(right_value708, ((struct sNode*)right_value708)->finalize, ((struct sNode*)right_value708)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result295__;
                if(right_369) { right_369 = come_decrement_ref_count2(right_369, ((struct sNode*)right_369)->finalize, ((struct sNode*)right_369)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result296__ = __result_obj__ = node_366;
    if(node_366) { node_366 = come_decrement_ref_count2(node_366, ((struct sNode*)node_366)->finalize, ((struct sNode*)node_366)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result296__;
    if(node_366) { node_366 = come_decrement_ref_count2(node_366, ((struct sNode*)node_366)->finalize, ((struct sNode*)node_366)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__;
struct sAndAndNode* __result293__;
void* right_value704;
struct sAndAndNode* result_370;
void* right_value705;
char* __dec_obj257;
void* right_value706;
struct sNode* __dec_obj258;
void* right_value707;
struct sNode* __dec_obj259;
struct sAndAndNode* __result294__;
memset(&__result_obj__, 0, sizeof(void*));
right_value704 = (void*)0;
memset(&result_370, 0, sizeof(struct sAndAndNode*));
right_value705 = (void*)0;
right_value706 = (void*)0;
right_value707 = (void*)0;
                    if(self==(void*)0) {
                        __result293__ = __result_obj__ = (void*)0;
                        return __result293__;
                    }
                    result_370=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value704=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "sAndAndNode"))));
                    come_call_finalizer3(right_value704,sAndAndNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(self!=((void*)0)) {
                        result_370->sline=self->sline;
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        __dec_obj257=result_370->sname;
                        result_370->sname=(char*)come_increment_ref_count(((char*)(right_value705=string_clone(self->sname))));
                        __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value705 = come_decrement_ref_count2(right_value705, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(self!=((void*)0)) {
                        result_370->mQuote=self->mQuote;
                    }
                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                        __dec_obj258=result_370->mLeft;
                        result_370->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value706=sNode_clone(self->mLeft))));
                        if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value706) { right_value706 = come_decrement_ref_count2(right_value706, ((struct sNode*)right_value706)->finalize, ((struct sNode*)right_value706)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                        __dec_obj259=result_370->mRight;
                        result_370->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value707=sNode_clone(self->mRight))));
                        if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value707) { right_value707 = come_decrement_ref_count2(right_value707, ((struct sNode*)right_value707)->finalize, ((struct sNode*)right_value707)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    __result294__ = __result_obj__ = result_370;
                    come_call_finalizer3(result_370,sAndAndNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result294__;
                    come_call_finalizer3(result_370,sAndAndNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* oror_exp(struct sInfo* info){
void* __result_obj__;
void* right_value709;
struct sNode* node_371;
void* right_value710;
struct sNode* right_372;
void* right_value711;
void* right_value712;
struct sNode* _inf_value40;
struct sOrOrNode* _inf_obj_value40;
void* right_value717;
struct sNode* __result299__;
void* right_value718;
struct sNode* right_374;
void* right_value719;
void* right_value720;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* right_value725;
struct sNode* __result302__;
struct sNode* __result303__;
memset(&__result_obj__, 0, sizeof(void*));
right_value709 = (void*)0;
memset(&node_371, 0, sizeof(struct sNode*));
right_value710 = (void*)0;
memset(&right_372, 0, sizeof(struct sNode*));
right_value711 = (void*)0;
right_value712 = (void*)0;
right_value717 = (void*)0;
right_value718 = (void*)0;
memset(&right_374, 0, sizeof(struct sNode*));
right_value719 = (void*)0;
right_value720 = (void*)0;
right_value725 = (void*)0;
    parse_sharp_v5(info);
    node_371=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value709=andand_exp(info))));
    if(right_value709) { right_value709 = come_decrement_ref_count2(right_value709, ((struct sNode*)right_value709)->finalize, ((struct sNode*)right_value709)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==124&&*(info->p+1)==124) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_372=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value710=oror_exp(info))));
            if(right_value710) { right_value710 = come_decrement_ref_count2(right_value710, ((struct sNode*)right_value710)->finalize, ((struct sNode*)right_value710)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2076, "struct sNode");
            _inf_obj_value40=come_increment_ref_count(((struct sOrOrNode*)(right_value712=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value711=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2076, "sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_371),(struct sNode*)come_increment_ref_count(right_372),(_Bool)0,info))));
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sOrOrNode_finalize;
            _inf_value40->clone=(void*)sOrOrNode_clone;
            _inf_value40->compile=(void*)sOrOrNode_compile;
            _inf_value40->sline=(void*)sNodeBase_sline;
            _inf_value40->sname=(void*)sNodeBase_sname;
            _inf_value40->terminated=(void*)sNodeBase_terminated;
            _inf_value40->kind=(void*)sOrOrNode_kind;
            __result299__ = __result_obj__ = ((struct sNode*)(right_value717=_inf_value40));
            if(right_372) { right_372 = come_decrement_ref_count2(right_372, ((struct sNode*)right_372)->finalize, ((struct sNode*)right_372)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_371) { node_371 = come_decrement_ref_count2(node_371, ((struct sNode*)node_371)->finalize, ((struct sNode*)node_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value711,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value712,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value717) { right_value717 = come_decrement_ref_count2(right_value717, ((struct sNode*)right_value717)->finalize, ((struct sNode*)right_value717)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result299__;
            if(right_372) { right_372 = come_decrement_ref_count2(right_372, ((struct sNode*)right_372)->finalize, ((struct sNode*)right_372)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(*info->p==92&&*(info->p+1)==124&&*(info->p+2)==124) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_374=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value718=oror_exp(info))));
                if(right_value718) { right_value718 = come_decrement_ref_count2(right_value718, ((struct sNode*)right_value718)->finalize, ((struct sNode*)right_value718)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2084, "struct sNode");
                _inf_obj_value41=come_increment_ref_count(((struct sOrOrNode*)(right_value720=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value719=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2084, "sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_371),(struct sNode*)come_increment_ref_count(right_374),(_Bool)1,info))));
                _inf_value41->_protocol_obj=_inf_obj_value41;
                _inf_value41->finalize=(void*)sOrOrNode_finalize;
                _inf_value41->clone=(void*)sOrOrNode_clone;
                _inf_value41->compile=(void*)sOrOrNode_compile;
                _inf_value41->sline=(void*)sNodeBase_sline;
                _inf_value41->sname=(void*)sNodeBase_sname;
                _inf_value41->terminated=(void*)sNodeBase_terminated;
                _inf_value41->kind=(void*)sOrOrNode_kind;
                __result302__ = __result_obj__ = ((struct sNode*)(right_value725=_inf_value41));
                if(right_374) { right_374 = come_decrement_ref_count2(right_374, ((struct sNode*)right_374)->finalize, ((struct sNode*)right_374)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_371) { node_371 = come_decrement_ref_count2(node_371, ((struct sNode*)node_371)->finalize, ((struct sNode*)node_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(right_value719,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value720,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value725) { right_value725 = come_decrement_ref_count2(right_value725, ((struct sNode*)right_value725)->finalize, ((struct sNode*)right_value725)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result302__;
                if(right_374) { right_374 = come_decrement_ref_count2(right_374, ((struct sNode*)right_374)->finalize, ((struct sNode*)right_374)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result303__ = __result_obj__ = node_371;
    if(node_371) { node_371 = come_decrement_ref_count2(node_371, ((struct sNode*)node_371)->finalize, ((struct sNode*)node_371)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result303__;
    if(node_371) { node_371 = come_decrement_ref_count2(node_371, ((struct sNode*)node_371)->finalize, ((struct sNode*)node_371)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__;
struct sOrOrNode* __result300__;
void* right_value721;
struct sOrOrNode* result_375;
void* right_value722;
char* __dec_obj263;
void* right_value723;
struct sNode* __dec_obj264;
void* right_value724;
struct sNode* __dec_obj265;
struct sOrOrNode* __result301__;
memset(&__result_obj__, 0, sizeof(void*));
right_value721 = (void*)0;
memset(&result_375, 0, sizeof(struct sOrOrNode*));
right_value722 = (void*)0;
right_value723 = (void*)0;
right_value724 = (void*)0;
                    if(self==(void*)0) {
                        __result300__ = __result_obj__ = (void*)0;
                        return __result300__;
                    }
                    result_375=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value721=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "sOrOrNode"))));
                    come_call_finalizer3(right_value721,sOrOrNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(self!=((void*)0)) {
                        result_375->sline=self->sline;
                    }
                    if(self!=((void*)0)&&self->sname!=((void*)0)) {
                        __dec_obj263=result_375->sname;
                        result_375->sname=(char*)come_increment_ref_count(((char*)(right_value722=string_clone(self->sname))));
                        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value722 = come_decrement_ref_count2(right_value722, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(self!=((void*)0)) {
                        result_375->mQuote=self->mQuote;
                    }
                    if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                        __dec_obj264=result_375->mLeft;
                        result_375->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value723=sNode_clone(self->mLeft))));
                        if(__dec_obj264) { __dec_obj264 = come_decrement_ref_count2(__dec_obj264, ((struct sNode*)__dec_obj264)->finalize, ((struct sNode*)__dec_obj264)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value723) { right_value723 = come_decrement_ref_count2(right_value723, ((struct sNode*)right_value723)->finalize, ((struct sNode*)right_value723)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                        __dec_obj265=result_375->mRight;
                        result_375->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value724=sNode_clone(self->mRight))));
                        if(__dec_obj265) { __dec_obj265 = come_decrement_ref_count2(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value724) { right_value724 = come_decrement_ref_count2(right_value724, ((struct sNode*)right_value724)->finalize, ((struct sNode*)right_value724)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    __result301__ = __result_obj__ = result_375;
                    come_call_finalizer3(result_375,sOrOrNode_finalize, 0, 0, 1, 0, (void*)0);
                    return __result301__;
                    come_call_finalizer3(result_375,sOrOrNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* comma_exp(struct sInfo* info){
void* __result_obj__;
void* right_value726;
struct sNode* node_376;
void* right_value727;
struct sNode* node2_377;
void* right_value728;
void* right_value729;
struct sNode* _inf_value42;
struct sCommaNode* _inf_obj_value42;
void* right_value734;
struct sNode* __result306__;
struct sNode* __result307__;
memset(&__result_obj__, 0, sizeof(void*));
right_value726 = (void*)0;
memset(&node_376, 0, sizeof(struct sNode*));
right_value727 = (void*)0;
memset(&node2_377, 0, sizeof(struct sNode*));
right_value728 = (void*)0;
right_value729 = (void*)0;
right_value734 = (void*)0;
    parse_sharp_v5(info);
    node_376=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value726=oror_exp(info))));
    if(right_value726) { right_value726 = come_decrement_ref_count2(right_value726, ((struct sNode*)right_value726)->finalize, ((struct sNode*)right_value726)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(!info->no_comma&&*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            node2_377=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value727=comma_exp(info))));
            if(right_value727) { right_value727 = come_decrement_ref_count2(right_value727, ((struct sNode*)right_value727)->finalize, ((struct sNode*)right_value727)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2111, "struct sNode");
            _inf_obj_value42=come_increment_ref_count(((struct sCommaNode*)(right_value729=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value728=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2111, "sCommaNode")))),(struct sNode*)come_increment_ref_count(node_376),(struct sNode*)come_increment_ref_count(node2_377),info))));
            _inf_value42->_protocol_obj=_inf_obj_value42;
            _inf_value42->finalize=(void*)sCommaNode_finalize;
            _inf_value42->clone=(void*)sCommaNode_clone;
            _inf_value42->compile=(void*)sCommaNode_compile;
            _inf_value42->sline=(void*)sNodeBase_sline;
            _inf_value42->sname=(void*)sNodeBase_sname;
            _inf_value42->terminated=(void*)sNodeBase_terminated;
            _inf_value42->kind=(void*)sCommaNode_kind;
            __result306__ = __result_obj__ = ((struct sNode*)(right_value734=_inf_value42));
            if(node2_377) { node2_377 = come_decrement_ref_count2(node2_377, ((struct sNode*)node2_377)->finalize, ((struct sNode*)node2_377)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_376) { node_376 = come_decrement_ref_count2(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value728,sCommaNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value729,sCommaNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value734) { right_value734 = come_decrement_ref_count2(right_value734, ((struct sNode*)right_value734)->finalize, ((struct sNode*)right_value734)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result306__;
            if(node2_377) { node2_377 = come_decrement_ref_count2(node2_377, ((struct sNode*)node2_377)->finalize, ((struct sNode*)node2_377)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result307__ = __result_obj__ = node_376;
    if(node_376) { node_376 = come_decrement_ref_count2(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result307__;
    if(node_376) { node_376 = come_decrement_ref_count2(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sCommaNode_finalize(struct sCommaNode* self){
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__;
struct sCommaNode* __result304__;
void* right_value730;
struct sCommaNode* result_378;
void* right_value731;
char* __dec_obj266;
void* right_value732;
struct sNode* __dec_obj267;
void* right_value733;
struct sNode* __dec_obj268;
struct sCommaNode* __result305__;
memset(&__result_obj__, 0, sizeof(void*));
right_value730 = (void*)0;
memset(&result_378, 0, sizeof(struct sCommaNode*));
right_value731 = (void*)0;
right_value732 = (void*)0;
right_value733 = (void*)0;
                if(self==(void*)0) {
                    __result304__ = __result_obj__ = (void*)0;
                    return __result304__;
                }
                result_378=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value730=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "sCommaNode"))));
                come_call_finalizer3(right_value730,sCommaNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)) {
                    result_378->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj266=result_378->sname;
                    result_378->sname=(char*)come_increment_ref_count(((char*)(right_value731=string_clone(self->sname))));
                    __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value731 = come_decrement_ref_count2(right_value731, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(self!=((void*)0)&&self->mLeft!=((void*)0)) {
                    __dec_obj267=result_378->mLeft;
                    result_378->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value732=sNode_clone(self->mLeft))));
                    if(__dec_obj267) { __dec_obj267 = come_decrement_ref_count2(__dec_obj267, ((struct sNode*)__dec_obj267)->finalize, ((struct sNode*)__dec_obj267)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value732) { right_value732 = come_decrement_ref_count2(right_value732, ((struct sNode*)right_value732)->finalize, ((struct sNode*)right_value732)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(self!=((void*)0)&&self->mRight!=((void*)0)) {
                    __dec_obj268=result_378->mRight;
                    result_378->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value733=sNode_clone(self->mRight))));
                    if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count2(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value733) { right_value733 = come_decrement_ref_count2(right_value733, ((struct sNode*)right_value733)->finalize, ((struct sNode*)right_value733)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result305__ = __result_obj__ = result_378;
                come_call_finalizer3(result_378,sCommaNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result305__;
                come_call_finalizer3(result_378,sCommaNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* conditional_exp(struct sInfo* info){
void* __result_obj__;
void* right_value735;
struct sNode* node_379;
struct sNode* value1_380;
void* right_value736;
void* right_value737;
struct sNode* _inf_value43;
struct sNullNode* _inf_obj_value43;
void* right_value740;
struct sNode* __dec_obj270;
_Bool no_label_382;
void* right_value741;
struct sNode* __dec_obj271;
void* right_value742;
struct sNode* value2_383;
void* right_value743;
void* right_value744;
struct sNode* _inf_value44;
struct sConditionalNode* _inf_obj_value44;
void* right_value750;
struct sNode* __result312__;
struct sNode* __result313__;
memset(&__result_obj__, 0, sizeof(void*));
right_value735 = (void*)0;
memset(&node_379, 0, sizeof(struct sNode*));
memset(&value1_380, 0, sizeof(struct sNode*));
right_value736 = (void*)0;
right_value737 = (void*)0;
right_value740 = (void*)0;
memset(&no_label_382, 0, sizeof(_Bool));
right_value741 = (void*)0;
right_value742 = (void*)0;
memset(&value2_383, 0, sizeof(struct sNode*));
right_value743 = (void*)0;
right_value744 = (void*)0;
right_value750 = (void*)0;
    parse_sharp_v5(info);
    node_379=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value735=comma_exp(info))));
    if(right_value735) { right_value735 = come_decrement_ref_count2(right_value735, ((struct sNode*)right_value735)->finalize, ((struct sNode*)right_value735)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(*info->p) {
        if(*info->p==63) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(*info->p==58) {
                _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2140, "struct sNode");
                _inf_obj_value43=come_increment_ref_count(((struct sNullNode*)(right_value737=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value736=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2140, "sNullNode")))),info))));
                _inf_value43->_protocol_obj=_inf_obj_value43;
                _inf_value43->finalize=(void*)sNullNode_finalize;
                _inf_value43->clone=(void*)sNullNode_clone;
                _inf_value43->compile=(void*)sNullNode_compile;
                _inf_value43->sline=(void*)sNodeBase_sline;
                _inf_value43->sname=(void*)sNodeBase_sname;
                _inf_value43->terminated=(void*)sNodeBase_terminated;
                _inf_value43->kind=(void*)sNullNode_kind;
                __dec_obj270=value1_380;
                value1_380=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value740=_inf_value43)));
                if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); }
                come_call_finalizer3(right_value736,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(right_value737,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_value740) { right_value740 = come_decrement_ref_count2(right_value740, ((struct sNode*)right_value740)->finalize, ((struct sNode*)right_value740)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            else {
                no_label_382=info->no_label;
                info->no_label=(_Bool)1;
                __dec_obj271=value1_380;
                value1_380=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value741=conditional_exp(info))));
                if(__dec_obj271) { __dec_obj271 = come_decrement_ref_count2(__dec_obj271, ((struct sNode*)__dec_obj271)->finalize, ((struct sNode*)__dec_obj271)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value741) { right_value741 = come_decrement_ref_count2(right_value741, ((struct sNode*)right_value741)->finalize, ((struct sNode*)right_value741)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_label=no_label_382;
            }
            parse_sharp_v5(info);
            expected_next_character(58,info);
            value2_383=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value742=conditional_exp(info))));
            if(right_value742) { right_value742 = come_decrement_ref_count2(right_value742, ((struct sNode*)right_value742)->finalize, ((struct sNode*)right_value742)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            parse_sharp_v5(info);
            _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2157, "struct sNode");
            _inf_obj_value44=come_increment_ref_count(((struct sConditionalNode*)(right_value744=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value743=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2157, "sConditionalNode")))),(struct sNode*)come_increment_ref_count(node_379),(struct sNode*)come_increment_ref_count(value1_380),(struct sNode*)come_increment_ref_count(value2_383),info))));
            _inf_value44->_protocol_obj=_inf_obj_value44;
            _inf_value44->finalize=(void*)sConditionalNode_finalize;
            _inf_value44->clone=(void*)sConditionalNode_clone;
            _inf_value44->compile=(void*)sConditionalNode_compile;
            _inf_value44->sline=(void*)sNodeBase_sline;
            _inf_value44->sname=(void*)sNodeBase_sname;
            _inf_value44->terminated=(void*)sNodeBase_terminated;
            _inf_value44->kind=(void*)sConditionalNode_kind;
            __result312__ = __result_obj__ = ((struct sNode*)(right_value750=_inf_value44));
            if(value1_380) { value1_380 = come_decrement_ref_count2(value1_380, ((struct sNode*)value1_380)->finalize, ((struct sNode*)value1_380)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_383) { value2_383 = come_decrement_ref_count2(value2_383, ((struct sNode*)value2_383)->finalize, ((struct sNode*)value2_383)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_379) { node_379 = come_decrement_ref_count2(node_379, ((struct sNode*)node_379)->finalize, ((struct sNode*)node_379)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(right_value743,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value744,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value750) { right_value750 = come_decrement_ref_count2(right_value750, ((struct sNode*)right_value750)->finalize, ((struct sNode*)right_value750)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result312__;
            if(value1_380) { value1_380 = come_decrement_ref_count2(value1_380, ((struct sNode*)value1_380)->finalize, ((struct sNode*)value1_380)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_383) { value2_383 = come_decrement_ref_count2(value2_383, ((struct sNode*)value2_383)->finalize, ((struct sNode*)value2_383)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result313__ = __result_obj__ = node_379;
    if(node_379) { node_379 = come_decrement_ref_count2(node_379, ((struct sNode*)node_379)->finalize, ((struct sNode*)node_379)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result313__;
    if(node_379) { node_379 = come_decrement_ref_count2(node_379, ((struct sNode*)node_379)->finalize, ((struct sNode*)node_379)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(self!=((void*)0)&&self->mValue1!=((void*)0)) {
                    if(self->mValue1) { self->mValue1 = come_decrement_ref_count2(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(self!=((void*)0)&&self->mValue2!=((void*)0)) {
                    if(self->mValue2) { self->mValue2 = come_decrement_ref_count2(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(self!=((void*)0)&&self->mValue3!=((void*)0)) {
                    if(self->mValue3) { self->mValue3 = come_decrement_ref_count2(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__;
struct sConditionalNode* __result310__;
void* right_value745;
struct sConditionalNode* result_384;
void* right_value746;
char* __dec_obj272;
void* right_value747;
struct sNode* __dec_obj273;
void* right_value748;
struct sNode* __dec_obj274;
void* right_value749;
struct sNode* __dec_obj275;
struct sConditionalNode* __result311__;
memset(&__result_obj__, 0, sizeof(void*));
right_value745 = (void*)0;
memset(&result_384, 0, sizeof(struct sConditionalNode*));
right_value746 = (void*)0;
right_value747 = (void*)0;
right_value748 = (void*)0;
right_value749 = (void*)0;
                if(self==(void*)0) {
                    __result310__ = __result_obj__ = (void*)0;
                    return __result310__;
                }
                result_384=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value745=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "sConditionalNode"))));
                come_call_finalizer3(right_value745,sConditionalNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)) {
                    result_384->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj272=result_384->sname;
                    result_384->sname=(char*)come_increment_ref_count(((char*)(right_value746=string_clone(self->sname))));
                    __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value746 = come_decrement_ref_count2(right_value746, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(self!=((void*)0)&&self->mValue1!=((void*)0)) {
                    __dec_obj273=result_384->mValue1;
                    result_384->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value747=sNode_clone(self->mValue1))));
                    if(__dec_obj273) { __dec_obj273 = come_decrement_ref_count2(__dec_obj273, ((struct sNode*)__dec_obj273)->finalize, ((struct sNode*)__dec_obj273)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value747) { right_value747 = come_decrement_ref_count2(right_value747, ((struct sNode*)right_value747)->finalize, ((struct sNode*)right_value747)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(self!=((void*)0)&&self->mValue2!=((void*)0)) {
                    __dec_obj274=result_384->mValue2;
                    result_384->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value748=sNode_clone(self->mValue2))));
                    if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count2(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value748) { right_value748 = come_decrement_ref_count2(right_value748, ((struct sNode*)right_value748)->finalize, ((struct sNode*)right_value748)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(self!=((void*)0)&&self->mValue3!=((void*)0)) {
                    __dec_obj275=result_384->mValue3;
                    result_384->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value749=sNode_clone(self->mValue3))));
                    if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count2(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value749) { right_value749 = come_decrement_ref_count2(right_value749, ((struct sNode*)right_value749)->finalize, ((struct sNode*)right_value749)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                __result311__ = __result_obj__ = result_384;
                come_call_finalizer3(result_384,sConditionalNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result311__;
                come_call_finalizer3(result_384,sConditionalNode_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_v13(struct sInfo* info){
void* __result_obj__;
void* right_value751;
struct sNode* node_385;
struct sNode* __result314__;
memset(&__result_obj__, 0, sizeof(void*));
right_value751 = (void*)0;
memset(&node_385, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_385=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value751=conditional_exp(info))));
    if(right_value751) { right_value751 = come_decrement_ref_count2(right_value751, ((struct sNode*)right_value751)->finalize, ((struct sNode*)right_value751)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result314__ = __result_obj__ = node_385;
    if(node_385) { node_385 = come_decrement_ref_count2(node_385, ((struct sNode*)node_385)->finalize, ((struct sNode*)node_385)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result314__;
    if(node_385) { node_385 = come_decrement_ref_count2(node_385, ((struct sNode*)node_385)->finalize, ((struct sNode*)node_385)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
void* right_value752;
void* right_value753;
struct sNode* _inf_value45;
struct sNullNode* _inf_obj_value45;
void* right_value756;
struct sNode* __result317__;
void* right_value757;
void* right_value758;
struct sNode* _inf_value46;
struct sNilNode* _inf_obj_value46;
void* right_value761;
struct sNode* __result320__;
void* right_value762;
struct sNode* __result321__;
memset(&__result_obj__, 0, sizeof(void*));
right_value752 = (void*)0;
right_value753 = (void*)0;
right_value756 = (void*)0;
right_value757 = (void*)0;
right_value758 = (void*)0;
right_value761 = (void*)0;
right_value762 = (void*)0;
    if(charp_operator_equals(buf,"null")) {
        _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2181, "struct sNode");
        _inf_obj_value45=come_increment_ref_count(((struct sNullNode*)(right_value753=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value752=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2181, "sNullNode")))),info))));
        _inf_value45->_protocol_obj=_inf_obj_value45;
        _inf_value45->finalize=(void*)sNullNode_finalize;
        _inf_value45->clone=(void*)sNullNode_clone;
        _inf_value45->compile=(void*)sNullNode_compile;
        _inf_value45->sline=(void*)sNodeBase_sline;
        _inf_value45->sname=(void*)sNodeBase_sname;
        _inf_value45->terminated=(void*)sNodeBase_terminated;
        _inf_value45->kind=(void*)sNullNode_kind;
        __result317__ = __result_obj__ = ((struct sNode*)(right_value756=_inf_value45));
        come_call_finalizer3(right_value752,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(right_value753,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(right_value756) { right_value756 = come_decrement_ref_count2(right_value756, ((struct sNode*)right_value756)->finalize, ((struct sNode*)right_value756)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result317__;
    }
    else {
        if(charp_operator_equals(buf,"nil")) {
            _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2184, "struct sNode");
            _inf_obj_value46=come_increment_ref_count(((struct sNilNode*)(right_value758=sNilNode_initialize((struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value757=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2184, "sNilNode")))),info))));
            _inf_value46->_protocol_obj=_inf_obj_value46;
            _inf_value46->finalize=(void*)sNilNode_finalize;
            _inf_value46->clone=(void*)sNilNode_clone;
            _inf_value46->compile=(void*)sNilNode_compile;
            _inf_value46->sline=(void*)sNodeBase_sline;
            _inf_value46->sname=(void*)sNodeBase_sname;
            _inf_value46->terminated=(void*)sNodeBase_terminated;
            _inf_value46->kind=(void*)sNilNode_kind;
            __result320__ = __result_obj__ = ((struct sNode*)(right_value761=_inf_value46));
            come_call_finalizer3(right_value757,sNilNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(right_value758,sNilNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(right_value761) { right_value761 = come_decrement_ref_count2(right_value761, ((struct sNode*)right_value761)->finalize, ((struct sNode*)right_value761)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result320__;
        }
    }
    __result321__ = __result_obj__ = ((struct sNode*)(right_value762=string_node_v12(buf,head,head_sline,info)));
    if(right_value762) { right_value762 = come_decrement_ref_count2(right_value762, ((struct sNode*)right_value762)->finalize, ((struct sNode*)right_value762)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result321__;
}

static void sNullNode_finalize(struct sNullNode* self){
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__;
struct sNullNode* __result315__;
void* right_value754;
struct sNullNode* result_386;
void* right_value755;
char* __dec_obj276;
struct sNullNode* __result316__;
memset(&__result_obj__, 0, sizeof(void*));
right_value754 = (void*)0;
memset(&result_386, 0, sizeof(struct sNullNode*));
right_value755 = (void*)0;
            if(self==(void*)0) {
                __result315__ = __result_obj__ = (void*)0;
                return __result315__;
            }
            result_386=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value754=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "sNullNode"))));
            come_call_finalizer3(right_value754,sNullNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(self!=((void*)0)) {
                result_386->sline=self->sline;
            }
            if(self!=((void*)0)&&self->sname!=((void*)0)) {
                __dec_obj276=result_386->sname;
                result_386->sname=(char*)come_increment_ref_count(((char*)(right_value755=string_clone(self->sname))));
                __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value755 = come_decrement_ref_count2(right_value755, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result316__ = __result_obj__ = result_386;
            come_call_finalizer3(result_386,sNullNode_finalize, 0, 0, 1, 0, (void*)0);
            return __result316__;
            come_call_finalizer3(result_386,sNullNode_finalize, 0, 0, 0, 0, (void*)0);
}

static void sNilNode_finalize(struct sNilNode* self){
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
void* __result_obj__;
struct sNilNode* __result318__;
void* right_value759;
struct sNilNode* result_387;
void* right_value760;
char* __dec_obj277;
struct sNilNode* __result319__;
memset(&__result_obj__, 0, sizeof(void*));
right_value759 = (void*)0;
memset(&result_387, 0, sizeof(struct sNilNode*));
right_value760 = (void*)0;
                if(self==(void*)0) {
                    __result318__ = __result_obj__ = (void*)0;
                    return __result318__;
                }
                result_387=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value759=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "sNilNode"))));
                come_call_finalizer3(right_value759,sNilNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(self!=((void*)0)) {
                    result_387->sline=self->sline;
                }
                if(self!=((void*)0)&&self->sname!=((void*)0)) {
                    __dec_obj277=result_387->sname;
                    result_387->sname=(char*)come_increment_ref_count(((char*)(right_value760=string_clone(self->sname))));
                    __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value760 = come_decrement_ref_count2(right_value760, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result319__ = __result_obj__ = result_387;
                come_call_finalizer3(result_387,sNilNode_finalize, 0, 0, 1, 0, (void*)0);
                return __result319__;
                come_call_finalizer3(result_387,sNilNode_finalize, 0, 0, 0, 0, (void*)0);
}

