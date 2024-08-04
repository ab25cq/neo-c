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
struct sNothingNode
{
    int sline;
    char* sname;
};
struct sNewNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sImplementsNode
{
    int sline;
    char* sname;
    struct sNode* obj_exp;
    struct sType* inf_type;
};
struct sTrueNode
{
    int sline;
    char* sname;
};
struct sFalseNode
{
    int sline;
    char* sname;
};
struct sSizeOfNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sSizeOfExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sTypeOfNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sTypeOfExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sDynamicTypeOfNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sAlignOfNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sAlignOfExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sAlignOfNode2
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sAlignOfExpNode2
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sAlignAsNode
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sAlignAsExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};
struct sDeleteNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sForceDeleteNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sDelegateNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sShareNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sBorrowNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sCloneNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sDupeNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sDummyHeapNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sGCIncNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sGCDecNode
{
    int sline;
    char* sname;
    struct sNode* node;
};
struct sIsHeap
{
    int sline;
    char* sname;
    struct sType* type;
};
struct sIsPointer
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

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);

char* sNothingNode_kind(struct sNothingNode* self);

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);

static void sNodeBase_finalize(struct sNodeBase* self);
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info);

char* sNewNode_kind(struct sNewNode* self);

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);

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
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);

char* sImplementsNode_kind(struct sImplementsNode* self);

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info);

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info);

char* sTrueNode_kind(struct sTrueNode* self);

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);

char* sFalseNode_kind(struct sFalseNode* self);

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);

char* sSizeOfNode_kind(struct sSizeOfNode* self);

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info);

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self);

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info);

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info);

char* sTypeOfNode_kind(struct sTypeOfNode* self);

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info);

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info);

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self);

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info);

struct sDynamicTypeOfNode* sDynamicTypeOfNode_initialize(struct sDynamicTypeOfNode* self, struct sNode* exp, struct sInfo* info);

char* sDynamicTypeOfNode_kind(struct sDynamicTypeOfNode* self);

_Bool sDynamicTypeOfNode_compile(struct sDynamicTypeOfNode* self, struct sInfo* info);

static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self);
struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info);

char* sAlignOfNode_kind(struct sAlignOfNode* self);

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info);

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info);

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self);

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info);

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info);

char* sAlignOfNode2_kind(struct sAlignOfNode2* self);

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info);

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info);

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self);

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info);

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info);

char* sAlignAsNode_kind(struct sAlignAsNode* self);

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info);

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info);

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self);

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info);

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info);

char* sDeleteNode_kind(struct sDeleteNode* self);

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info);

char* sForceDeleteNode_kind(struct sForceDeleteNode* self);

_Bool sForceDeleteNode_compile(struct sForceDeleteNode* self, struct sInfo* info);

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info);

char* sDelegateNode_kind(struct sDelegateNode* self);

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info);

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info);

char* sShareNode_kind(struct sShareNode* self);

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info);

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info);

char* sBorrowNode_kind(struct sBorrowNode* self);

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info);

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info);

char* sCloneNode_kind(struct sCloneNode* self);

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info);

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info);

char* sDupeNode_kind(struct sDupeNode* self);

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info);

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info);

char* sDummyHeapNode_kind(struct sDummyHeapNode* self);

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info);

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info);

char* sGCIncNode_kind(struct sGCIncNode* self);

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info);

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info);

char* sGCDecNode_kind(struct sGCDecNode* self);

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info);

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info);

char* sIsHeap_kind(struct sIsHeap* self);

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info);

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info);

char* sIsPointer_kind(struct sIsPointer* self);

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void sNewNode_finalize(struct sNewNode* self);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static void sTrueNode_finalize(struct sTrueNode* self);
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
static void sFalseNode_finalize(struct sFalseNode* self);
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
static void sDeleteNode_finalize(struct sDeleteNode* self);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static void sForceDeleteNode_finalize(struct sForceDeleteNode* self);
static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self);
static void sBorrowNode_finalize(struct sBorrowNode* self);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static void sDelegateNode_finalize(struct sDelegateNode* self);
static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self);
static void sShareNode_finalize(struct sShareNode* self);
static struct sShareNode* sShareNode_clone(struct sShareNode* self);
static void sCloneNode_finalize(struct sCloneNode* self);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static void sDupeNode_finalize(struct sDupeNode* self);
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static void sGCIncNode_finalize(struct sGCIncNode* self);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static void sGCDecNode_finalize(struct sGCDecNode* self);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static void sIsHeap_finalize(struct sIsHeap* self);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static void sIsPointer_finalize(struct sIsPointer* self);
static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self);
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static void sTypeOfNode_finalize(struct sTypeOfNode* self);
static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self);
static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self);
static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self);
static void sAlignOfNode_finalize(struct sAlignOfNode* self);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static void sAlignOfNode2_finalize(struct sAlignOfNode2* self);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
static void sAlignAsNode_finalize(struct sAlignAsNode* self);
static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self);
static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self);
static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

static void sNothingNode_finalize(struct sNothingNode* self);
static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);

static void sImplementsNode_finalize(struct sImplementsNode* self);
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
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
    it_45=self->head;
    while(it_45!=((void*)0)) {
        prev_it_46=it_45;
        it_45=it_45->next;
        come_call_finalizer3(prev_it_46,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}










struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info){
void* __result_obj__;
void* __right_value79 = (void*)0;
struct sNothingNode* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result45__ = __result_obj__ = self;
    come_call_finalizer3(self,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result45__;
}

char* sNothingNode_kind(struct sNothingNode* self){
void* __result_obj__;
void* __right_value80 = (void*)0;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
    __result46__ = __result_obj__ = ((char*)(__right_value80=__builtin_string("sNothingNode")));
    __right_value80 = come_decrement_ref_count2(__right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result46__;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info){
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* __right_value81 = (void*)0;
void* __right_value117 = (void*)0;
struct sType* __dec_obj35;
struct sNewNode* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value81=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value81,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj35=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result65__ = __result_obj__ = self;
    come_call_finalizer3(self,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result65__;
}

char* sNewNode_kind(struct sNewNode* self){
void* __result_obj__;
void* __right_value118 = (void*)0;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
    __result66__ = __result_obj__ = ((char*)(__right_value118=__builtin_string("sNewNode")));
    __right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result66__;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
struct sType* type_77;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
struct CVALUE* come_value_78;
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
struct buffer* num_string_79;
struct list$1sNodeph* o2_saved_80;
struct sNode* it_83;
_Bool __result73__;
void* __right_value123 = (void*)0;
struct CVALUE* cvalue_86;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct sType* type2_87;
void* __right_value126 = (void*)0;
char* type_name_90;
void* __right_value127 = (void*)0;
char* type_name2_91;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
char* __dec_obj36;
void* __right_value130 = (void*)0;
struct sType* __dec_obj37;
_Bool __result76__;
    type_77=self->type;
    come_value_78=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value119=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 39, "CVALUE"))))));
    come_call_finalizer3(__right_value119,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    num_string_79=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value121=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 41, "buffer"))))));
    come_call_finalizer3(__right_value121,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(num_string_79,"1");
    for(    o2_saved_80=(struct list$1sNodeph*)come_increment_ref_count((type_77->mArrayNum)),it_83=list$1sNodeph_begin((o2_saved_80));    !list$1sNodeph_end((o2_saved_80));    it_83=list$1sNodeph_next((o2_saved_80))    ){
        if(!node_compile(it_83,info)) {
            __result73__ = (_Bool)0;
            come_call_finalizer3(o2_saved_80,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_78,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(num_string_79,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result73__;
        }
        cvalue_86=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        buffer_append_str(num_string_79,((char*)(__right_value124=xsprintf("*(%s)",cvalue_86->c_value))));
        __right_value124 = come_decrement_ref_count2(__right_value124, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(cvalue_86,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_80,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    type2_87=(struct sType*)come_increment_ref_count(solve_generics(type_77,info->generics_type,info));
    list$1sNodeph_reset(type2_87->mArrayNum);
    type_name_90=(char*)come_increment_ref_count(make_type_name_string(type2_87,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)1));
    type_name2_91=(char*)come_increment_ref_count(make_come_type_name_string(type2_87,info));
    __dec_obj36=come_value_78->c_value;
    come_value_78->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_90,type_name_90,((char*)(__right_value128=buffer_to_string(num_string_79))),info->sname,info->sline,type_name2_91));
    __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type2_87->mHeap=(_Bool)1;
    type2_87->mPointerNum++;
    if(type2_87->mNoSolvedGenericsType->v1) {
        type2_87->mNoSolvedGenericsType->v1->mPointerNum++;
        type2_87->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
    }
    __dec_obj37=come_value_78->type;
    come_value_78->type=(struct sType*)come_increment_ref_count(sType_clone(type2_87));
    come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_78->var=((void*)0);
    append_object_to_right_values2(come_value_78,(struct sType*)come_increment_ref_count(type2_87),info);
    add_come_last_code(info,"%s;\n",come_value_78->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_78));
    __result76__ = (_Bool)1;
    come_call_finalizer3(come_value_78,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_79,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_87,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_90 = come_decrement_ref_count2(type_name_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_91 = come_decrement_ref_count2(type_name2_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result76__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
struct sType* __result47__;
void* __right_value82 = (void*)0;
struct sType* result_47;
void* __right_value89 = (void*)0;
struct list$1sTypeph* __dec_obj15;
void* __right_value92 = (void*)0;
struct tuple1$1sTypeph* __dec_obj17;
void* __right_value93 = (void*)0;
struct tuple1$1sTypeph* __dec_obj18;
void* __right_value94 = (void*)0;
char* __dec_obj19;
void* __right_value95 = (void*)0;
struct list$1sTypeph* __dec_obj20;
void* __right_value103 = (void*)0;
struct list$1sNodeph* __dec_obj24;
void* __right_value104 = (void*)0;
struct list$1sTypeph* __dec_obj25;
void* __right_value111 = (void*)0;
struct list$1charph* __dec_obj29;
void* __right_value112 = (void*)0;
struct tuple1$1sTypeph* __dec_obj30;
void* __right_value113 = (void*)0;
struct sNode* __dec_obj31;
void* __right_value114 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value115 = (void*)0;
char* __dec_obj33;
void* __right_value116 = (void*)0;
char* __dec_obj34;
struct sType* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result47__ = __result_obj__ = (void*)0;
        return __result47__;
    }
    result_47=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_47->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
        __dec_obj15=result_47->mMultipleTypes;
        result_47->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mMultipleTypes));
        come_call_finalizer3(__dec_obj15,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj17=result_47->mNoSolvedGenericsType;
        result_47->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj17,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj18=result_47->mOriginalLoadVarType;
        result_47->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj19=result_47->mGenericsName;
        result_47->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj20=result_47->mGenericsTypes;
        result_47->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj20,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj24=result_47->mArrayNum;
        result_47->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_47->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj25=result_47->mParamTypes;
        result_47->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj25,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj29=result_47->mParamNames;
        result_47->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj30=result_47->mResultType;
        result_47->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj30,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_47->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj31=result_47->mAlignas;
        result_47->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_47->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result_47->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result_47->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result_47->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result_47->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result_47->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result_47->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result_47->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result_47->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result_47->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result_47->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result_47->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result_47->mImmutable=self->mImmutable;
    }
    if(self!=((void*)0)) {
        result_47->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result_47->mDummyHeap=self->mDummyHeap;
    }
    if(self!=((void*)0)) {
        result_47->mDelegate=self->mDelegate;
    }
    if(self!=((void*)0)) {
        result_47->mShare=self->mShare;
    }
    if(self!=((void*)0)) {
        result_47->mClone=self->mClone;
    }
    if(self!=((void*)0)) {
        result_47->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result_47->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result_47->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result_47->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result_47->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result_47->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(self!=((void*)0)) {
        result_47->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result_47->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj32=result_47->mSizeNum;
        result_47->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_47->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_47->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj33=result_47->mOriginalTypeName;
        result_47->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_47->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(self!=((void*)0)) {
        result_47->mFunctionParam=self->mFunctionParam;
    }
    if(self!=((void*)0)) {
        result_47->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result_47->mGenericsStruct=self->mGenericsStruct;
    }
    if(self!=((void*)0)) {
        result_47->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(self!=((void*)0)) {
        result_47->mComeMemCore=self->mComeMemCore;
    }
    if(self!=((void*)0)) {
        result_47->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result_47->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result_47->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj34=result_47->mAsmName;
        result_47->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_47->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)) {
        result_47->mLambdaArray=self->mLambdaArray;
    }
    if(self!=((void*)0)) {
        result_47->mNoNumberArray=self->mNoNumberArray;
    }
    __result64__ = __result_obj__ = result_47;
    come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result64__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result48__;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
void* __right_value88 = (void*)0;
struct list$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==((void*)0)) {
        __result48__ = __result_obj__ = ((void*)0);
        return __result48__;
    }
    result_54=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value83=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))));
    come_call_finalizer3(__right_value83,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    it_55=self->head;
    while(it_55!=((void*)0)) {
        list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value88=sType_clone(it_55->item)))));
        come_call_finalizer3(__right_value88,sType_finalize, 0, 1, 0, 0, __result_obj__);
        it_55=it_55->next;
    }
    __result51__ = __result_obj__ = result_54;
    come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result51__;
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
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_48;
struct list_item$1sTypeph* prev_it_49;
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
struct list_item$1sNodeph* it_50;
struct list_item$1sNodeph* prev_it_51;
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

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
void* __right_value85 = (void*)0;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj12;
void* __right_value86 = (void*)0;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj13;
void* __right_value87 = (void*)0;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj14;
struct list$1sTypeph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->len==0) {
        litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
        come_call_finalizer3(__right_value85,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_56->prev=((void*)0);
        litem_56->next=((void*)0);
        __dec_obj12=litem_56->item;
        litem_56->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj12,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_56;
        self->head=litem_56;
    }
    else {
        if(self->len==1) {
            litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value86=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
            come_call_finalizer3(__right_value86,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_57->prev=self->head;
            litem_57->next=((void*)0);
            __dec_obj13=litem_57->item;
            litem_57->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_57;
            self->head->next=litem_57;
        }
        else {
            litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value87=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
            come_call_finalizer3(__right_value87,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_58->prev=self->tail;
            litem_58->next=((void*)0);
            __dec_obj14=litem_58->item;
            litem_58->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_58;
            self->tail=litem_58;
        }
    }
    self->len++;
    __result50__ = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result50__;
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_59;
struct list_item$1sTypeph* prev_it_60;
    it_59=self->head;
    while(it_59!=((void*)0)) {
        prev_it_60=it_59;
        it_59=it_59->next;
        come_call_finalizer3(prev_it_60,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
struct tuple1$1sTypeph* __result52__;
void* __right_value90 = (void*)0;
struct tuple1$1sTypeph* result_61;
void* __right_value91 = (void*)0;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result52__ = __result_obj__ = (void*)0;
        return __result52__;
    }
    result_61=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj16=result_61->v1;
        result_61->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result53__ = __result_obj__ = result_61;
    come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    return __result53__;
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
struct list$1sNodeph* result_62;
struct list_item$1sNodeph* it_63;
void* __right_value102 = (void*)0;
struct list$1sNodeph* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==((void*)0)) {
        __result54__ = __result_obj__ = ((void*)0);
        return __result54__;
    }
    result_62=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value96=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))));
    come_call_finalizer3(__right_value96,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    it_63=self->head;
    while(it_63!=((void*)0)) {
        list$1sNodeph_add(result_62,(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value102=sNode_clone(it_63->item)))));
        if(__right_value102) { __right_value102 = come_decrement_ref_count2(__right_value102, ((struct sNode*)__right_value102)->finalize, ((struct sNode*)__right_value102)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        it_63=it_63->next;
    }
    __result59__ = __result_obj__ = result_62;
    come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result59__;
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
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
void* __right_value98 = (void*)0;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj21;
void* __right_value99 = (void*)0;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj22;
void* __right_value100 = (void*)0;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->len==0) {
        litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
        come_call_finalizer3(__right_value98,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_64->prev=((void*)0);
        litem_64->next=((void*)0);
        __dec_obj21=litem_64->item;
        litem_64->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_64;
        self->head=litem_64;
    }
    else {
        if(self->len==1) {
            litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value99,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_65->prev=self->head;
            litem_65->next=((void*)0);
            __dec_obj22=litem_65->item;
            litem_65->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_65;
            self->head->next=litem_65;
        }
        else {
            litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value100=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value100,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_66->prev=self->tail;
            litem_66->next=((void*)0);
            __dec_obj23=litem_66->item;
            litem_66->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_66;
            self->tail=litem_66;
        }
    }
    self->len++;
    __result56__ = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result56__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
struct sNode* __result57__;
void* __right_value101 = (void*)0;
struct sNode* result_67;
struct sNode* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result57__ = __result_obj__ = (void*)0;
        return __result57__;
    }
    result_67=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_67->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_67->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_67->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_67->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_67->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_67->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_67->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result_67->kind=self->kind;
    }
    __result58__ = __result_obj__ = result_67;
    if(result_67) { result_67 = come_decrement_ref_count2(result_67, ((struct sNode*)result_67)->finalize, ((struct sNode*)result_67)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result58__;
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_68;
struct list_item$1sNodeph* prev_it_69;
    it_68=self->head;
    while(it_68!=((void*)0)) {
        prev_it_69=it_68;
        it_68=it_68->next;
        come_call_finalizer3(prev_it_69,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result60__;
void* __right_value105 = (void*)0;
void* __right_value106 = (void*)0;
struct list$1charph* result_70;
struct list_item$1charph* it_71;
void* __right_value110 = (void*)0;
struct list$1charph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==((void*)0)) {
        __result60__ = __result_obj__ = ((void*)0);
        return __result60__;
    }
    result_70=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value105=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))));
    come_call_finalizer3(__right_value105,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    it_71=self->head;
    while(it_71!=((void*)0)) {
        list$1charph_add(result_70,(char*)come_increment_ref_count(((char*)(__right_value110=string_clone(it_71->item)))));
        __right_value110 = come_decrement_ref_count2(__right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        it_71=it_71->next;
    }
    __result63__ = __result_obj__ = result_70;
    come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result63__;
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
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
void* __right_value107 = (void*)0;
struct list_item$1charph* litem_72;
char* __dec_obj26;
void* __right_value108 = (void*)0;
struct list_item$1charph* litem_73;
char* __dec_obj27;
void* __right_value109 = (void*)0;
struct list_item$1charph* litem_74;
char* __dec_obj28;
struct list$1charph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->len==0) {
        litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
        come_call_finalizer3(__right_value107,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_72->prev=((void*)0);
        litem_72->next=((void*)0);
        __dec_obj26=litem_72->item;
        litem_72->item=(char*)come_increment_ref_count(item);
        __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_72;
        self->head=litem_72;
    }
    else {
        if(self->len==1) {
            litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value108=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
            come_call_finalizer3(__right_value108,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_73->prev=self->head;
            litem_73->next=((void*)0);
            __dec_obj27=litem_73->item;
            litem_73->item=(char*)come_increment_ref_count(item);
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_73;
            self->head->next=litem_73;
        }
        else {
            litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value109=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
            come_call_finalizer3(__right_value109,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_74->prev=self->tail;
            litem_74->next=((void*)0);
            __dec_obj28=litem_74->item;
            litem_74->item=(char*)come_increment_ref_count(item);
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_74;
            self->tail=litem_74;
        }
    }
    self->len++;
    __result62__ = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result62__;
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_75;
struct list_item$1charph* prev_it_76;
    it_75=self->head;
    while(it_75!=((void*)0)) {
        prev_it_76=it_75;
        it_75=it_75->next;
        come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_81;
struct sNode* __result67__;
struct sNode* __result68__;
struct sNode* result_82;
struct sNode* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_81, 0, sizeof(struct sNode*));
memset(&result_82, 0, sizeof(struct sNode*));
    if(self==((void*)0)) {
        memset(&result_81,0,sizeof(struct sNode*));
        __result67__ = __result_obj__ = result_81;
        return __result67__;
    }
    self->it=self->head;
    if(self->it) {
        __result68__ = __result_obj__ = self->it->item;
        return __result68__;
    }
    memset(&result_82,0,sizeof(struct sNode*));
    __result69__ = __result_obj__ = result_82;
    return __result69__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
struct sNode* result_84;
struct sNode* __result70__;
struct sNode* __result71__;
struct sNode* result_85;
struct sNode* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_84, 0, sizeof(struct sNode*));
memset(&result_85, 0, sizeof(struct sNode*));
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_84,0,sizeof(struct sNode*));
        __result70__ = __result_obj__ = result_84;
        return __result70__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result71__ = __result_obj__ = self->it->item;
        return __result71__;
    }
    memset(&result_85,0,sizeof(struct sNode*));
    __result72__ = __result_obj__ = result_85;
    return __result72__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_88;
struct list_item$1sNodeph* prev_it_89;
struct list$1sNodeph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
    it_88=self->head;
    while(it_88!=((void*)0)) {
        prev_it_89=it_88;
        it_88=it_88->next;
        come_call_finalizer3(prev_it_89,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result74__ = __result_obj__ = self;
    return __result74__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
void* __right_value131 = (void*)0;
struct list_item$1CVALUEph* litem_92;
struct CVALUE* __dec_obj38;
void* __right_value132 = (void*)0;
struct list_item$1CVALUEph* litem_93;
struct CVALUE* __dec_obj39;
void* __right_value133 = (void*)0;
struct list_item$1CVALUEph* litem_94;
struct CVALUE* __dec_obj40;
struct list$1CVALUEph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self->len==0) {
        litem_92=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value131=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 219, "list_item$1CVALUEph"))));
        come_call_finalizer3(__right_value131,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_92->prev=((void*)0);
        litem_92->next=((void*)0);
        __dec_obj38=litem_92->item;
        litem_92->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj38,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_92;
        self->head=litem_92;
    }
    else {
        if(self->len==1) {
            litem_93=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value132=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 229, "list_item$1CVALUEph"))));
            come_call_finalizer3(__right_value132,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_93->prev=self->head;
            litem_93->next=((void*)0);
            __dec_obj39=litem_93->item;
            litem_93->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj39,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_93;
            self->head->next=litem_93;
        }
        else {
            litem_94=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value133=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 239, "list_item$1CVALUEph"))));
            come_call_finalizer3(__right_value133,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_94->prev=self->tail;
            litem_94->next=((void*)0);
            __dec_obj40=litem_94->item;
            litem_94->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj40,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_94;
            self->tail=litem_94;
        }
    }
    self->len++;
    __result75__ = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result75__;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __result_obj__;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
struct sNode* __dec_obj41;
void* __right_value136 = (void*)0;
struct sType* __dec_obj42;
struct sImplementsNode* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value134=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value134,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj41=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(obj_exp));
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj42=self->inf_type;
    self->inf_type=(struct sType*)come_increment_ref_count(sType_clone(inf_type));
    come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result77__ = __result_obj__ = self;
    come_call_finalizer3(self,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer3(inf_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result77__;
}

char* sImplementsNode_kind(struct sImplementsNode* self){
void* __result_obj__;
void* __right_value137 = (void*)0;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
    __result78__ = __result_obj__ = ((char*)(__right_value137=__builtin_string("sImplementsNode")));
    __right_value137 = come_decrement_ref_count2(__right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result78__;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __right_value138 = (void*)0;
struct sNode* obj_exp_95;
void* __right_value139 = (void*)0;
struct sType* inf_type_96;
_Bool __result79__;
void* __right_value140 = (void*)0;
struct CVALUE* come_value_97;
void* __right_value141 = (void*)0;
struct sType* type_98;
struct sClass* klass_99;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct CVALUE* come_value2_100;
void* __right_value144 = (void*)0;
struct sType* type2_101;
void* __right_value145 = (void*)0;
char* type_name_102;
void* __right_value146 = (void*)0;
char* type_name2_103;
void* __right_value147 = (void*)0;
char* buf_105;
void* __right_value148 = (void*)0;
char* buf2_106;
void* __right_value149 = (void*)0;
struct sType* typeX_107;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
int i_108;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_112;
struct sType* field_type_113;
void* __right_value152 = (void*)0;
char* method_name_114;
struct sFun* fun_115;
struct sClass* klass2_118;
void* __right_value153 = (void*)0;
char* __dec_obj43;
void* __right_value154 = (void*)0;
char* __dec_obj44;
void* __right_value155 = (void*)0;
struct sType* type3_124;
void* __right_value156 = (void*)0;
struct sType* __dec_obj45;
_Bool __result90__;
    obj_exp_95=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp));
    inf_type_96=(struct sType*)come_increment_ref_count(sType_clone(self->inf_type));
    if(!node_compile(obj_exp_95,info)) {
        __result79__ = (_Bool)0;
        if(obj_exp_95) { obj_exp_95 = come_decrement_ref_count2(obj_exp_95, ((struct sNode*)obj_exp_95)->finalize, ((struct sNode*)obj_exp_95)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(inf_type_96,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result79__;
    }
    come_value_97=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_98=(struct sType*)come_increment_ref_count(sType_clone(come_value_97->type));
    type_98->mPointerNum--;
    type_98->mHeap=(_Bool)0;
    klass_99=inf_type_96->mClass;
    come_value2_100=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value142=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 125, "CVALUE"))))));
    come_call_finalizer3(__right_value142,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    type2_101=(struct sType*)come_increment_ref_count(sType_clone(inf_type_96));
    type_name_102=(char*)come_increment_ref_count(make_type_name_string(inf_type_96,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    type_name2_103=(char*)come_increment_ref_count(make_type_name_string(type_98,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    static int inf_num_104=0;
    buf_105=(char*)come_increment_ref_count(xsprintf("%s* _inf_value%d;\n",type_name_102,++inf_num_104));
    add_come_code_at_function_head(info,buf_105);
    buf2_106=(char*)come_increment_ref_count(xsprintf("%s* _inf_obj_value%d;\n",type_name2_103,inf_num_104));
    add_come_code_at_function_head(info,buf2_106);
    add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_104,type_name_102,type_name_102,info->sname,info->sline,type_name_102);
    add_come_code(info,"_inf_obj_value%d=come_increment_ref_count(%s);\n",inf_num_104,come_value_97->c_value);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_104,inf_num_104);
    typeX_107=(struct sType*)come_increment_ref_count(sType_clone(type_98));
    typeX_107->mPointerNum++;
    ((struct tuple2$2sFunpcharph*)(__right_value150=create_finalizer_automatically(typeX_107,"finalize",info)));
    come_call_finalizer3(__right_value150,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    ((struct tuple2$2sFunpcharph*)(__right_value151=create_cloner_automatically(typeX_107,"clone",info)));
    come_call_finalizer3(__right_value151,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    i_108=1;    i_108<list$1tuple2$2charphsTypephph_length(klass_99->mFields);    i_108++    ){
        multiple_assign_var1=((struct tuple2$2charphsTypeph*)come_null_check(list$1tuple2$2charphsTypephphp_operator_load_element(klass_99->mFields,i_108), "21obj.c", 150, 0));
        name_112=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_113=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        method_name_114=(char*)come_increment_ref_count(create_method_name(type_98,(_Bool)0,name_112,info,(_Bool)1));
        fun_115=map$2charphsFunph_at(info->funcs,method_name_114,((void*)0));
        if(fun_115==((void*)0)) {
            klass2_118=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,type_98->mClass->mName), "21obj.c", 157, 1));
            while(map$2charphsClassphp_operator_load_element(info->classes,klass2_118->mParentClassName)) {
                klass2_118=map$2charphsClassphp_operator_load_element(info->classes,klass2_118->mParentClassName);
                __dec_obj43=method_name_114;
                method_name_114=(char*)come_increment_ref_count(create_method_name_using_class(klass2_118,(_Bool)0,name_112,info,(_Bool)1));
                __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_115=map$2charphsFunph_at(info->funcs,method_name_114,((void*)0));
                if(fun_115) {
                    break;
                }
            }
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_104,name_112,method_name_114);
        }
        else {
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_104,name_112,method_name_114);
        }
        name_112 = come_decrement_ref_count2(name_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_113,sType_finalize, 0, 0, 0, 0, (void*)0);
        method_name_114 = come_decrement_ref_count2(method_name_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj44=come_value2_100->c_value;
    come_value2_100->c_value=(char*)come_increment_ref_count(xsprintf("_inf_value%d",inf_num_104));
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    type3_124=(struct sType*)come_increment_ref_count(sType_clone(inf_type_96));
    type3_124->mPointerNum++;
    type3_124->mHeap=(_Bool)1;
    type2_101->mHeap=(_Bool)1;
    __dec_obj45=come_value2_100->type;
    come_value2_100->type=(struct sType*)come_increment_ref_count(sType_clone(type2_101));
    come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_100->type->mPointerNum++;
    come_value2_100->var=((void*)0);
    append_object_to_right_values2(come_value2_100,(struct sType*)come_increment_ref_count(type3_124),info);
    add_come_last_code(info,"%s;\n",come_value2_100->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_100));
    __result90__ = (_Bool)1;
    if(obj_exp_95) { obj_exp_95 = come_decrement_ref_count2(obj_exp_95, ((struct sNode*)obj_exp_95)->finalize, ((struct sNode*)obj_exp_95)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(inf_type_96,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_97,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_98,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_101,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_102 = come_decrement_ref_count2(type_name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_103 = come_decrement_ref_count2(type_name2_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf_105 = come_decrement_ref_count2(buf_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf2_106 = come_decrement_ref_count2(buf2_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(typeX_107,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type3_124,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result90__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position){
void* __result_obj__;
struct list_item$1tuple2$2charphsTypephph* it_109;
int i_110;
struct tuple2$2charphsTypeph* __result80__;
struct tuple2$2charphsTypeph* default_value_111;
struct tuple2$2charphsTypeph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_111, 0, sizeof(struct tuple2$2charphsTypeph*));
    if(position<0) {
        position+=self->len;
    }
    it_109=self->head;
    i_110=0;
    while(it_109!=((void*)0)) {
        if(position==i_110) {
            __result80__ = __result_obj__ = it_109->item;
            return __result80__;
        }
        it_109=it_109->next;
        i_110++;
    }
    memset(&default_value_111,0,sizeof(struct tuple2$2charphsTypeph*));
    __result81__ = __result_obj__ = default_value_111;
    come_call_finalizer3(default_value_111,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result81__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__;
unsigned int hash_116;
unsigned int it_117;
struct sFun* __result82__;
struct sFun* __result83__;
struct sFun* __result84__;
struct sFun* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
    hash_116=string_get_hash_key(((char*)key))%self->size;
    it_117=hash_116;
    while((_Bool)1) {
        if(self->item_existance[it_117]) {
            if(string_equals(self->keys[it_117],key)) {
                __result82__ = __result_obj__ = self->items[it_117];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result82__;
            }
            it_117++;
            if(it_117>=self->size) {
                it_117=0;
            }
            else {
                if(it_117==hash_116) {
                    __result83__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result83__;
                }
            }
        }
        else {
            __result84__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result84__;
        }
    }
    __result85__ = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result85__;
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

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
struct sClass* default_value_119;
unsigned int hash_120;
unsigned int it_121;
struct sClass* __result86__;
struct sClass* __result87__;
struct sClass* __result88__;
struct sClass* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_119, 0, sizeof(struct sClass*));
    memset(&default_value_119,0,sizeof(struct sClass*));
    hash_120=string_get_hash_key(((char*)key))%self->size;
    it_121=hash_120;
    while((_Bool)1) {
        if(self->item_existance[it_121]) {
            if(string_equals(self->keys[it_121],key)) {
                __result86__ = __result_obj__ = self->items[it_121];
                come_call_finalizer3(default_value_119,sClass_finalize, 0, 0, 0, 0, (void*)0);
                return __result86__;
            }
            it_121++;
            if(it_121>=self->size) {
                it_121=0;
            }
            else {
                if(it_121==hash_120) {
                    __result87__ = __result_obj__ = default_value_119;
                    come_call_finalizer3(default_value_119,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    return __result87__;
                }
            }
        }
        else {
            __result88__ = __result_obj__ = default_value_119;
            come_call_finalizer3(default_value_119,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result88__;
        }
    }
    __result89__ = __result_obj__ = default_value_119;
    come_call_finalizer3(default_value_119,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result89__;
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
struct list_item$1tuple2$2charphsTypephph* it_122;
struct list_item$1tuple2$2charphsTypephph* prev_it_123;
    it_122=self->head;
    while(it_122!=((void*)0)) {
        prev_it_123=it_122;
        it_122=it_122->next;
        come_call_finalizer3(prev_it_123,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
void* __right_value157 = (void*)0;
struct sTrueNode* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value157=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value157,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result91__ = __result_obj__ = self;
    come_call_finalizer3(self,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result91__;
}

char* sTrueNode_kind(struct sTrueNode* self){
void* __result_obj__;
void* __right_value158 = (void*)0;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
    __result92__ = __result_obj__ = ((char*)(__right_value158=__builtin_string("sTrueNode")));
    __right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result92__;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct CVALUE* come_value_125;
void* __right_value161 = (void*)0;
char* __dec_obj46;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
struct sType* __dec_obj47;
_Bool __result93__;
    come_value_125=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value159=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 211, "CVALUE"))))));
    come_call_finalizer3(__right_value159,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj46=come_value_125->c_value;
    come_value_125->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)1"));
    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj47=come_value_125->type;
    come_value_125->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value162=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 214, "sType")))),"bool",(_Bool)0,info));
    come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value162,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_125->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_125->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_125));
    __result93__ = (_Bool)1;
    come_call_finalizer3(come_value_125,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result93__;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* __right_value164 = (void*)0;
struct sFalseNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value164=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value164,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result94__ = __result_obj__ = self;
    come_call_finalizer3(self,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result94__;
}

char* sFalseNode_kind(struct sFalseNode* self){
void* __result_obj__;
void* __right_value165 = (void*)0;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    __result95__ = __result_obj__ = ((char*)(__right_value165=__builtin_string("sFalseNode")));
    __right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result95__;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
struct CVALUE* come_value_126;
void* __right_value168 = (void*)0;
char* __dec_obj48;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
struct sType* __dec_obj49;
_Bool __result96__;
    come_value_126=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value166=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 239, "CVALUE"))))));
    come_call_finalizer3(__right_value166,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj48=come_value_126->c_value;
    come_value_126->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)0"));
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj49=come_value_126->type;
    come_value_126->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value169=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 242, "sType")))),"bool",(_Bool)0,info));
    come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value169,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_126->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_126->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_126));
    __result96__ = (_Bool)1;
    come_call_finalizer3(come_value_126,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result96__;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
struct sType* __dec_obj50;
struct sSizeOfNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value171=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value171,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj50=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result97__ = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result97__;
}

char* sSizeOfNode_kind(struct sSizeOfNode* self){
void* __result_obj__;
void* __right_value173 = (void*)0;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
    __result98__ = __result_obj__ = ((char*)(__right_value173=__builtin_string("sSizeOfNode")));
    __right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result98__;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
struct sType* type_127;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
struct CVALUE* come_value_128;
void* __right_value176 = (void*)0;
struct sType* type2_129;
void* __right_value177 = (void*)0;
char* type_name_130;
void* __right_value178 = (void*)0;
char* __dec_obj51;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
struct sType* __dec_obj52;
_Bool __result99__;
    type_127=self->type;
    come_value_128=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value174=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 271, "CVALUE"))))));
    come_call_finalizer3(__right_value174,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    type2_129=(struct sType*)come_increment_ref_count(solve_generics(type_127,info->generics_type,info));
    type_name_130=(char*)come_increment_ref_count(make_type_name_string(type2_129,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
    __dec_obj51=come_value_128->c_value;
    come_value_128->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",type_name_130));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj52=come_value_128->type;
    come_value_128->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value179=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 278, "sType")))),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value179,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_128->type->mUnsigned=(_Bool)1;
    come_value_128->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_128->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_128));
    __result99__ = (_Bool)1;
    come_call_finalizer3(come_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_129,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_130 = come_decrement_ref_count2(type_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result99__;
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
struct sNode* __dec_obj53;
struct sSizeOfExpNode* __result100__;
struct sSizeOfExpNode* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value181=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value181,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj53=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); }
    __result100__ = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result100__;
    __result101__ = __result_obj__ = self;
    come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result101__;
}

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self){
void* __result_obj__;
void* __right_value183 = (void*)0;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
    __result102__ = __result_obj__ = ((char*)(__right_value183=__builtin_string("sSizeOfExpNode")));
    __right_value183 = come_decrement_ref_count2(__right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result102__;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
struct sNode* exp_131;
_Bool __result103__;
void* __right_value184 = (void*)0;
struct CVALUE* come_value_132;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
struct CVALUE* come_value2_133;
void* __right_value187 = (void*)0;
char* __dec_obj54;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct sType* __dec_obj55;
_Bool __result104__;
    exp_131=(struct sNode*)come_increment_ref_count(self->exp);
    if(!node_compile(exp_131,info)) {
        __result103__ = (_Bool)0;
        if(exp_131) { exp_131 = come_decrement_ref_count2(exp_131, ((struct sNode*)exp_131)->finalize, ((struct sNode*)exp_131)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result103__;
    }
    come_value_132=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_133=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value185=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 317, "CVALUE"))))));
    come_call_finalizer3(__right_value185,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj54=come_value2_133->c_value;
    come_value2_133->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",come_value_132->c_value));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj55=come_value2_133->type;
    come_value2_133->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value188=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 320, "sType")))),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value188,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value2_133->type->mUnsigned=(_Bool)1;
    come_value2_133->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_133->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_133));
    __result104__ = (_Bool)1;
    if(exp_131) { exp_131 = come_decrement_ref_count2(exp_131, ((struct sNode*)exp_131)->finalize, ((struct sNode*)exp_131)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_132,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_133,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result104__;
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct sType* __dec_obj56;
struct sTypeOfNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value190=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value190,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj56=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result105__ = __result_obj__ = self;
    come_call_finalizer3(self,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result105__;
}

char* sTypeOfNode_kind(struct sTypeOfNode* self){
void* __result_obj__;
void* __right_value192 = (void*)0;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
    __result106__ = __result_obj__ = ((char*)(__right_value192=__builtin_string("sTypeOfNode")));
    __right_value192 = come_decrement_ref_count2(__right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result106__;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info){
struct sType* type_134;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
struct CVALUE* come_value_135;
void* __right_value195 = (void*)0;
struct sType* type2_136;
void* __right_value196 = (void*)0;
char* type_name_137;
void* __right_value197 = (void*)0;
char* __dec_obj57;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct sType* __dec_obj58;
_Bool __result107__;
    type_134=self->type;
    come_value_135=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value193=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 350, "CVALUE"))))));
    come_call_finalizer3(__right_value193,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    type2_136=(struct sType*)come_increment_ref_count(solve_generics(type_134,info->generics_type,info));
    type_name_137=(char*)come_increment_ref_count(make_type_name_string(type2_136,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj57=come_value_135->c_value;
    come_value_135->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_137));
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj58=come_value_135->type;
    come_value_135->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value198=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 357, "sType")))),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value198,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_135->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_135->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_135));
    __result107__ = (_Bool)1;
    come_call_finalizer3(come_value_135,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_136,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_137 = come_decrement_ref_count2(type_name_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result107__;
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
struct sNode* __dec_obj59;
struct sTypeOfExpNode* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value200=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value200,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj59=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
    __result108__ = __result_obj__ = self;
    come_call_finalizer3(self,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result108__;
}

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self){
void* __result_obj__;
void* __right_value202 = (void*)0;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
    __result109__ = __result_obj__ = ((char*)(__right_value202=__builtin_string("sTypeOfExpNode")));
    __right_value202 = come_decrement_ref_count2(__right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result109__;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
struct sNode* exp_138;
_Bool __result110__;
void* __right_value203 = (void*)0;
struct CVALUE* come_value_139;
void* __right_value204 = (void*)0;
struct sType* type_140;
void* __right_value205 = (void*)0;
struct sType* type2_141;
void* __right_value206 = (void*)0;
char* type_name_142;
void* __right_value207 = (void*)0;
char* __dec_obj60;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct sType* __dec_obj61;
_Bool __result111__;
    exp_138=(struct sNode*)come_increment_ref_count(self->exp);
    if(!node_compile(exp_138,info)) {
        __result110__ = (_Bool)0;
        if(exp_138) { exp_138 = come_decrement_ref_count2(exp_138, ((struct sNode*)exp_138)->finalize, ((struct sNode*)exp_138)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result110__;
    }
    come_value_139=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_140=(struct sType*)come_increment_ref_count(sType_clone(come_value_139->type));
    type2_141=(struct sType*)come_increment_ref_count(solve_generics(type_140,info->generics_type,info));
    type_name_142=(char*)come_increment_ref_count(make_type_name_string(type2_141,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj60=come_value_139->c_value;
    come_value_139->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_142));
    __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj61=come_value_139->type;
    come_value_139->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value208=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 400, "sType")))),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value208,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_139->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_139->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_139));
    __result111__ = (_Bool)1;
    if(exp_138) { exp_138 = come_decrement_ref_count2(exp_138, ((struct sNode*)exp_138)->finalize, ((struct sNode*)exp_138)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_139,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_140,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_141,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_142 = come_decrement_ref_count2(type_name_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result111__;
}

struct sDynamicTypeOfNode* sDynamicTypeOfNode_initialize(struct sDynamicTypeOfNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
struct sNode* __dec_obj62;
struct sDynamicTypeOfNode* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value210=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value210,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj62=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); }
    __result112__ = __result_obj__ = self;
    come_call_finalizer3(self,sDynamicTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result112__;
}

char* sDynamicTypeOfNode_kind(struct sDynamicTypeOfNode* self){
void* __result_obj__;
void* __right_value212 = (void*)0;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    __result113__ = __result_obj__ = ((char*)(__right_value212=__builtin_string("sDynamicTypeOfNode")));
    __right_value212 = come_decrement_ref_count2(__right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result113__;
}

_Bool sDynamicTypeOfNode_compile(struct sDynamicTypeOfNode* self, struct sInfo* info){
struct sNode* exp_143;
_Bool __result114__;
void* __right_value213 = (void*)0;
struct CVALUE* come_value_144;
void* __right_value214 = (void*)0;
struct sType* type_145;
void* __right_value215 = (void*)0;
struct sType* type2_146;
void* __right_value216 = (void*)0;
char* type_name_147;
void* __right_value217 = (void*)0;
char* __dec_obj63;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct sType* __dec_obj64;
_Bool __result115__;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct CVALUE* come_value2_148;
void* __right_value222 = (void*)0;
char* __dec_obj65;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct sType* __dec_obj66;
_Bool __result116__;
    exp_143=(struct sNode*)come_increment_ref_count(self->exp);
    if(!node_compile(exp_143,info)) {
        __result114__ = (_Bool)0;
        if(exp_143) { exp_143 = come_decrement_ref_count2(exp_143, ((struct sNode*)exp_143)->finalize, ((struct sNode*)exp_143)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result114__;
    }
    come_value_144=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(!come_value_144->type->mHeap) {
        type_145=(struct sType*)come_increment_ref_count(sType_clone(come_value_144->type));
        type2_146=(struct sType*)come_increment_ref_count(solve_generics(type_145,info->generics_type,info));
        type_name_147=(char*)come_increment_ref_count(make_type_name_string(type2_146,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj63=come_value_144->c_value;
        come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_147));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj64=come_value_144->type;
        come_value_144->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value218=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 444, "sType")))),"char*",(_Bool)0,info));
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value218,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_144->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_144->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_144));
        __result115__ = (_Bool)1;
        come_call_finalizer3(type_145,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_146,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_147 = come_decrement_ref_count2(type_name_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(exp_143) { exp_143 = come_decrement_ref_count2(exp_143, ((struct sNode*)exp_143)->finalize, ((struct sNode*)exp_143)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_144,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result115__;
        come_call_finalizer3(type_145,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_146,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_147 = come_decrement_ref_count2(type_name_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_value2_148=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value220=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 454, "CVALUE"))))));
        come_call_finalizer3(__right_value220,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj65=come_value2_148->c_value;
        come_value2_148->c_value=(char*)come_increment_ref_count(xsprintf("come_dynamic_typeof(%s)",come_value_144->c_value));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj66=come_value2_148->type;
        come_value2_148->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value223=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 457, "sType")))),"char*",(_Bool)0,info));
        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value223,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value2_148->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value2_148->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_148));
        come_call_finalizer3(come_value2_148,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result116__ = (_Bool)1;
    if(exp_143) { exp_143 = come_decrement_ref_count2(exp_143, ((struct sNode*)exp_143)->finalize, ((struct sNode*)exp_143)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_144,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result116__;
}

static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct sType* __dec_obj67;
struct sAlignOfNode* __result117__;
struct sAlignOfNode* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value225=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value225,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj67=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result117__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result117__;
    __result118__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result118__;
}

char* sAlignOfNode_kind(struct sAlignOfNode* self){
void* __result_obj__;
void* __right_value227 = (void*)0;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
    __result119__ = __result_obj__ = ((char*)(__right_value227=__builtin_string("sAlignOfNode")));
    __right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result119__;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
struct sType* type_149;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct CVALUE* come_value_150;
void* __right_value230 = (void*)0;
struct sType* type2_151;
void* __right_value231 = (void*)0;
char* type_name_152;
void* __right_value232 = (void*)0;
char* __dec_obj68;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct sType* __dec_obj69;
_Bool __result120__;
    type_149=self->type;
    come_value_150=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value228=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 489, "CVALUE"))))));
    come_call_finalizer3(__right_value228,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    type2_151=(struct sType*)come_increment_ref_count(solve_generics(type_149,info->generics_type,info));
    type_name_152=(char*)come_increment_ref_count(make_type_name_string(type2_151,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj68=come_value_150->c_value;
    come_value_150->c_value=(char*)come_increment_ref_count(xsprintf("_Alignof(%s)",type_name_152));
    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj69=come_value_150->type;
    come_value_150->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value233=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 496, "sType")))),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value233,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_150->type->mUnsigned=(_Bool)1;
    come_value_150->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_150->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_150));
    __result120__ = (_Bool)1;
    come_call_finalizer3(come_value_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_151,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_152 = come_decrement_ref_count2(type_name_152, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result120__;
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct sNode* __dec_obj70;
struct sAlignOfExpNode* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value235=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value235,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj70=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); }
    __result121__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result121__;
}

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self){
void* __result_obj__;
void* __right_value237 = (void*)0;
char* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    __result122__ = __result_obj__ = ((char*)(__right_value237=__builtin_string("sAlignOfExpNode")));
    __right_value237 = come_decrement_ref_count2(__right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result122__;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
struct sNode* exp_153;
_Bool __result123__;
void* __right_value238 = (void*)0;
struct CVALUE* come_value_154;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct CVALUE* come_value2_155;
void* __right_value241 = (void*)0;
char* __dec_obj71;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct sType* __dec_obj72;
_Bool __result124__;
    exp_153=(struct sNode*)come_increment_ref_count(self->exp);
    if(!node_compile(exp_153,info)) {
        __result123__ = (_Bool)0;
        if(exp_153) { exp_153 = come_decrement_ref_count2(exp_153, ((struct sNode*)exp_153)->finalize, ((struct sNode*)exp_153)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result123__;
    }
    come_value_154=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_155=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value239=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 533, "CVALUE"))))));
    come_call_finalizer3(__right_value239,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj71=come_value2_155->c_value;
    come_value2_155->c_value=(char*)come_increment_ref_count(xsprintf("_AlignOf(%s)",come_value_154->c_value));
    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj72=come_value2_155->type;
    come_value2_155->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value242=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 536, "sType")))),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value242,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value2_155->type->mUnsigned=(_Bool)1;
    come_value2_155->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_155->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_155));
    __result124__ = (_Bool)1;
    if(exp_153) { exp_153 = come_decrement_ref_count2(exp_153, ((struct sNode*)exp_153)->finalize, ((struct sNode*)exp_153)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_154,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_155,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result124__;
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct sType* __dec_obj73;
struct sAlignOfNode2* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value244=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value244,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj73=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result125__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result125__;
}

char* sAlignOfNode2_kind(struct sAlignOfNode2* self){
void* __result_obj__;
void* __right_value246 = (void*)0;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    __result126__ = __result_obj__ = ((char*)(__right_value246=__builtin_string("sAlignOfNode2")));
    __right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result126__;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
struct sType* type_156;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct CVALUE* come_value_157;
void* __right_value249 = (void*)0;
struct sType* type2_158;
void* __right_value250 = (void*)0;
char* type_name_159;
void* __right_value251 = (void*)0;
char* __dec_obj74;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct sType* __dec_obj75;
_Bool __result127__;
    type_156=self->type;
    come_value_157=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value247=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 566, "CVALUE"))))));
    come_call_finalizer3(__right_value247,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    type2_158=(struct sType*)come_increment_ref_count(solve_generics(type_156,info->generics_type,info));
    type_name_159=(char*)come_increment_ref_count(make_type_name_string(type2_158,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj74=come_value_157->c_value;
    come_value_157->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",type_name_159));
    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj75=come_value_157->type;
    come_value_157->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value252=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 573, "sType")))),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value252,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_157->type->mUnsigned=(_Bool)1;
    come_value_157->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_157->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_157));
    __result127__ = (_Bool)1;
    come_call_finalizer3(come_value_157,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_158,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_159 = come_decrement_ref_count2(type_name_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result127__;
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct sNode* __dec_obj76;
struct sAlignOfExpNode2* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value254=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value254,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj76=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
    __result128__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result128__;
}

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self){
void* __result_obj__;
void* __right_value256 = (void*)0;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    __result129__ = __result_obj__ = ((char*)(__right_value256=__builtin_string("sAlignOfExpNode2")));
    __right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result129__;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
struct sNode* exp_160;
_Bool __result130__;
void* __right_value257 = (void*)0;
struct CVALUE* come_value_161;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct CVALUE* come_value2_162;
void* __right_value260 = (void*)0;
char* __dec_obj77;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct sType* __dec_obj78;
_Bool __result131__;
    exp_160=(struct sNode*)come_increment_ref_count(self->exp);
    if(!node_compile(exp_160,info)) {
        __result130__ = (_Bool)0;
        if(exp_160) { exp_160 = come_decrement_ref_count2(exp_160, ((struct sNode*)exp_160)->finalize, ((struct sNode*)exp_160)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result130__;
    }
    come_value_161=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_162=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value258=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 610, "CVALUE"))))));
    come_call_finalizer3(__right_value258,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj77=come_value2_162->c_value;
    come_value2_162->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",come_value_161->c_value));
    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj78=come_value2_162->type;
    come_value2_162->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value261=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 613, "sType")))),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value261,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value2_162->type->mUnsigned=(_Bool)1;
    come_value2_162->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_162->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_162));
    __result131__ = (_Bool)1;
    if(exp_160) { exp_160 = come_decrement_ref_count2(exp_160, ((struct sNode*)exp_160)->finalize, ((struct sNode*)exp_160)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_161,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result131__;
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct sType* __dec_obj79;
struct sAlignAsNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value263=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value263,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj79=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result132__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result132__;
}

char* sAlignAsNode_kind(struct sAlignAsNode* self){
void* __result_obj__;
void* __right_value265 = (void*)0;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    __result133__ = __result_obj__ = ((char*)(__right_value265=__builtin_string("sAlignAsNode")));
    __right_value265 = come_decrement_ref_count2(__right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result133__;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
struct sType* type_163;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct CVALUE* come_value_164;
void* __right_value268 = (void*)0;
struct sType* type2_165;
void* __right_value269 = (void*)0;
char* type_name_166;
void* __right_value270 = (void*)0;
char* __dec_obj80;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct sType* __dec_obj81;
_Bool __result134__;
    type_163=self->type;
    come_value_164=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value266=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 643, "CVALUE"))))));
    come_call_finalizer3(__right_value266,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    type2_165=(struct sType*)come_increment_ref_count(solve_generics(type_163,info->generics_type,info));
    type_name_166=(char*)come_increment_ref_count(make_type_name_string(type2_165,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj80=come_value_164->c_value;
    come_value_164->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",type_name_166));
    __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj81=come_value_164->type;
    come_value_164->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value271=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 650, "sType")))),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value271,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_164->type->mUnsigned=(_Bool)1;
    come_value_164->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_164->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_164));
    __result134__ = (_Bool)1;
    come_call_finalizer3(come_value_164,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_165,sType_finalize, 0, 0, 0, 0, (void*)0);
    type_name_166 = come_decrement_ref_count2(type_name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result134__;
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct sNode* __dec_obj82;
struct sAlignAsExpNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value273=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value273,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj82=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); }
    __result135__ = __result_obj__ = self;
    come_call_finalizer3(self,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result135__;
}

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self){
void* __result_obj__;
void* __right_value275 = (void*)0;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
    __result136__ = __result_obj__ = ((char*)(__right_value275=__builtin_string("sAlignAsExpNode")));
    __right_value275 = come_decrement_ref_count2(__right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result136__;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
struct sNode* exp_167;
_Bool __result137__;
void* __right_value276 = (void*)0;
struct CVALUE* come_value_168;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct CVALUE* come_value2_169;
void* __right_value279 = (void*)0;
char* __dec_obj83;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct sType* __dec_obj84;
_Bool __result138__;
    exp_167=(struct sNode*)come_increment_ref_count(self->exp);
    if(!node_compile(exp_167,info)) {
        __result137__ = (_Bool)0;
        if(exp_167) { exp_167 = come_decrement_ref_count2(exp_167, ((struct sNode*)exp_167)->finalize, ((struct sNode*)exp_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result137__;
    }
    come_value_168=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_169=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value277=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 687, "CVALUE"))))));
    come_call_finalizer3(__right_value277,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj83=come_value2_169->c_value;
    come_value2_169->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",come_value_168->c_value));
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj84=come_value2_169->type;
    come_value2_169->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value280=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 690, "sType")))),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value280,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value2_169->type->mUnsigned=(_Bool)1;
    come_value2_169->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_169->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_169));
    __result138__ = (_Bool)1;
    if(exp_167) { exp_167 = come_decrement_ref_count2(exp_167, ((struct sNode*)exp_167)->finalize, ((struct sNode*)exp_167)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result138__;
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct sNode* __dec_obj85;
struct sDeleteNode* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value282=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value282,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj85=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); }
    __result139__ = __result_obj__ = self;
    come_call_finalizer3(self,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result139__;
}

char* sDeleteNode_kind(struct sDeleteNode* self){
void* __result_obj__;
void* __right_value284 = (void*)0;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
    __result140__ = __result_obj__ = ((char*)(__right_value284=__builtin_string("sDeleteNode")));
    __right_value284 = come_decrement_ref_count2(__right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result140__;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
struct sNode* node_170;
void* __right_value285 = (void*)0;
struct CVALUE* come_value_171;
_Bool __result141__;
    node_170=self->node;
    if(!node_compile(node_170,info)) {
        return (_Bool)0;
    }
    come_value_171=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    free_object(come_value_171->type,come_value_171->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
    __result141__ = (_Bool)1;
    come_call_finalizer3(come_value_171,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result141__;
}

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct sNode* __dec_obj86;
struct sForceDeleteNode* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value286=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value286,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj86=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); }
    __result142__ = __result_obj__ = self;
    come_call_finalizer3(self,sForceDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result142__;
}

char* sForceDeleteNode_kind(struct sForceDeleteNode* self){
void* __result_obj__;
void* __right_value288 = (void*)0;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    __result143__ = __result_obj__ = ((char*)(__right_value288=__builtin_string("sForceDeleteNode")));
    __right_value288 = come_decrement_ref_count2(__right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result143__;
}

_Bool sForceDeleteNode_compile(struct sForceDeleteNode* self, struct sInfo* info){
struct sNode* node_172;
void* __right_value289 = (void*)0;
struct CVALUE* come_value_173;
_Bool __result144__;
    node_172=self->node;
    if(!node_compile(node_172,info)) {
        return (_Bool)0;
    }
    come_value_173=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    free_object(come_value_173->type,come_value_173->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)1);
    __result144__ = (_Bool)1;
    come_call_finalizer3(come_value_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result144__;
}

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct sNode* __dec_obj87;
struct sDelegateNode* __result145__;
struct sDelegateNode* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value290=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value290,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj87=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); }
    __result145__ = __result_obj__ = self;
    come_call_finalizer3(self,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result145__;
    __result146__ = __result_obj__ = self;
    come_call_finalizer3(self,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result146__;
}

char* sDelegateNode_kind(struct sDelegateNode* self){
void* __result_obj__;
void* __right_value292 = (void*)0;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
    __result147__ = __result_obj__ = ((char*)(__right_value292=__builtin_string("sDelegateNode")));
    __right_value292 = come_decrement_ref_count2(__right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result147__;
}

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info){
struct sNode* node_174;
void* __right_value293 = (void*)0;
struct CVALUE* come_value_175;
_Bool __result148__;
    node_174=self->node;
    if(!node_compile(node_174,info)) {
        return (_Bool)0;
    }
    come_value_175=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_175->type->mDelegate=(_Bool)1;
    if(come_value_175->var) {
        come_value_175->var->mType->mDelegate=(_Bool)1;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_175));
    __result148__ = (_Bool)1;
    come_call_finalizer3(come_value_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result148__;
}

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct sNode* __dec_obj88;
struct sShareNode* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value294=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value294,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj88=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); }
    __result149__ = __result_obj__ = self;
    come_call_finalizer3(self,sShareNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result149__;
}

char* sShareNode_kind(struct sShareNode* self){
void* __result_obj__;
void* __right_value296 = (void*)0;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
    __result150__ = __result_obj__ = ((char*)(__right_value296=__builtin_string("sShareNode")));
    __right_value296 = come_decrement_ref_count2(__right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result150__;
}

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info){
struct sNode* node_176;
void* __right_value297 = (void*)0;
struct CVALUE* come_value_177;
_Bool __result151__;
    node_176=self->node;
    if(!node_compile(node_176,info)) {
        return (_Bool)0;
    }
    come_value_177=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_177->type->mShare=(_Bool)1;
    if(come_value_177->var) {
        come_value_177->var->mType->mShare=(_Bool)1;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_177));
    __result151__ = (_Bool)1;
    come_call_finalizer3(come_value_177,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result151__;
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct sNode* __dec_obj89;
struct sBorrowNode* __result152__;
struct sBorrowNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value298=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value298,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj89=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); }
    __result152__ = __result_obj__ = self;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result152__;
    __result153__ = __result_obj__ = self;
    come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result153__;
}

char* sBorrowNode_kind(struct sBorrowNode* self){
void* __result_obj__;
void* __right_value300 = (void*)0;
char* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
    __result154__ = __result_obj__ = ((char*)(__right_value300=__builtin_string("sBorrowNode")));
    __right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result154__;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
struct sNode* node_178;
void* __right_value301 = (void*)0;
struct CVALUE* come_value_179;
int right_value_id_180;
_Bool __result155__;
    node_178=self->node;
    if(!node_compile(node_178,info)) {
        return (_Bool)0;
    }
    come_value_179=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_179->type->mHeap=(_Bool)0;
    right_value_id_180=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_179->c_value));
    if(right_value_id_180!=-1) {
        remove_object_from_right_values(right_value_id_180,info);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_179));
    __result155__ = (_Bool)1;
    come_call_finalizer3(come_value_179,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result155__;
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct sNode* __dec_obj90;
struct sCloneNode* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value302=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value302,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj90=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); }
    __result156__ = __result_obj__ = self;
    come_call_finalizer3(self,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result156__;
}

char* sCloneNode_kind(struct sCloneNode* self){
void* __result_obj__;
void* __right_value304 = (void*)0;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
    __result157__ = __result_obj__ = ((char*)(__right_value304=__builtin_string("sCloneNode")));
    __right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result157__;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
struct sNode* node_181;
void* __right_value305 = (void*)0;
struct CVALUE* left_value_182;
void* __right_value306 = (void*)0;
struct sType* left_type_183;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct CVALUE* come_value_184;
void* __right_value309 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var2;
struct sType* result_type_185;
char* c_value_186;
char* __dec_obj91;
void* __right_value310 = (void*)0;
struct sType* __dec_obj92;
_Bool __result158__;
    node_181=self->node;
    if(!node_compile(node_181,info)) {
        return (_Bool)0;
    }
    left_value_182=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_value_182->type->mClone=(_Bool)1;
    left_type_183=(struct sType*)come_increment_ref_count(sType_clone(left_value_182->type));
    if(left_type_183->mPointerNum==1&&string_operator_equals(left_type_183->mClass->mName,"void")&&left_type_183->mHeap==(_Bool)0) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_182));
    }
    else {
        if(left_type_183->mPointerNum==0) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_182));
        }
        else {
            if(left_type_183->mPointerNum>0) {
                come_value_184=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value307=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 923, "CVALUE"))))));
                come_call_finalizer3(__right_value307,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var2=((struct tuple2$2sTypephcharph*)(__right_value309=clone_object(left_type_183,left_value_182->c_value,info)));
                result_type_185=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
                c_value_186=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(__right_value309,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj91=come_value_184->c_value;
                come_value_184->c_value=(char*)come_increment_ref_count(c_value_186);
                __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj92=come_value_184->type;
                come_value_184->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_183));
                come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_184->type->mHeap=(_Bool)1;
                come_value_184->type->mClone=(_Bool)1;
                come_value_184->var=((void*)0);
                append_object_to_right_values2(come_value_184,(struct sType*)come_increment_ref_count(left_type_183),info);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_184));
                come_call_finalizer3(come_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_185,sType_finalize, 0, 0, 0, 0, (void*)0);
                c_value_186 = come_decrement_ref_count2(c_value_186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result158__ = (_Bool)1;
    come_call_finalizer3(left_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_183,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result158__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct sNode* __dec_obj93;
struct sDupeNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value311=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value311,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj93=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); }
    __result159__ = __result_obj__ = self;
    come_call_finalizer3(self,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result159__;
}

char* sDupeNode_kind(struct sDupeNode* self){
void* __result_obj__;
void* __right_value313 = (void*)0;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
    __result160__ = __result_obj__ = ((char*)(__right_value313=__builtin_string("sDupeNode")));
    __right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result160__;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
struct sNode* node_187;
void* __right_value314 = (void*)0;
struct CVALUE* left_value_188;
void* __right_value315 = (void*)0;
struct sType* left_type_189;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct CVALUE* come_value_190;
void* __right_value318 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var3;
struct sType* result_type_191;
char* c_value_192;
char* __dec_obj94;
void* __right_value319 = (void*)0;
struct sType* __dec_obj95;
_Bool __result161__;
    node_187=self->node;
    if(!node_compile(node_187,info)) {
        return (_Bool)0;
    }
    left_value_188=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_189=(struct sType*)come_increment_ref_count(sType_clone(left_value_188->type));
    if(left_type_189->mPointerNum==0) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_188));
    }
    else {
        if(left_type_189->mPointerNum>0&&left_type_189->mHeap==(_Bool)0) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_188));
        }
        else {
            if(left_type_189->mPointerNum>0) {
                come_value_190=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value316=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 975, "CVALUE"))))));
                come_call_finalizer3(__right_value316,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var3=((struct tuple2$2sTypephcharph*)(__right_value318=clone_object(left_type_189,left_value_188->c_value,info)));
                result_type_191=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                c_value_192=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer3(__right_value318,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj94=come_value_190->c_value;
                come_value_190->c_value=(char*)come_increment_ref_count(c_value_192);
                __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj95=come_value_190->type;
                come_value_190->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_189));
                come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_190->type->mHeap=(_Bool)1;
                come_value_190->var=((void*)0);
                append_object_to_right_values2(come_value_190,(struct sType*)come_increment_ref_count(left_type_189),info);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_190));
                come_call_finalizer3(come_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_191,sType_finalize, 0, 0, 0, 0, (void*)0);
                c_value_192 = come_decrement_ref_count2(c_value_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result161__ = (_Bool)1;
    come_call_finalizer3(left_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_189,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result161__;
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct sNode* __dec_obj96;
struct sDummyHeapNode* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value320=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value320,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj96=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0, (void*)0); }
    __result162__ = __result_obj__ = self;
    come_call_finalizer3(self,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result162__;
}

char* sDummyHeapNode_kind(struct sDummyHeapNode* self){
void* __result_obj__;
void* __right_value322 = (void*)0;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    __result163__ = __result_obj__ = ((char*)(__right_value322=__builtin_string("sDummyHeapNode")));
    __right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result163__;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
struct sNode* node_193;
void* __right_value323 = (void*)0;
struct CVALUE* come_value_194;
_Bool __result164__;
    node_193=self->node;
    if(!node_compile(node_193,info)) {
        return (_Bool)0;
    }
    come_value_194=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_194->type->mHeap=(_Bool)1;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_194));
    __result164__ = (_Bool)1;
    come_call_finalizer3(come_value_194,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result164__;
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct sNode* __dec_obj97;
struct sGCIncNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value324=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value324,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj97=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0, (void*)0); }
    __result165__ = __result_obj__ = self;
    come_call_finalizer3(self,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result165__;
}

char* sGCIncNode_kind(struct sGCIncNode* self){
void* __result_obj__;
void* __right_value326 = (void*)0;
char* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    __result166__ = __result_obj__ = ((char*)(__right_value326=__builtin_string("sGCIncNode")));
    __right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result166__;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
struct sNode* node_195;
void* __right_value327 = (void*)0;
struct CVALUE* come_value_196;
struct sType* type_197;
void* __right_value328 = (void*)0;
char* type_name_198;
void* __right_value329 = (void*)0;
char* __dec_obj98;
_Bool __result167__;
    node_195=self->node;
    if(!node_compile(node_195,info)) {
        return (_Bool)0;
    }
    come_value_196=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_197=come_value_196->type;
    if(come_value_196->type->mHeap) {
        type_name_198=(char*)come_increment_ref_count(make_type_name_string(type_197,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj98=come_value_196->c_value;
        come_value_196->c_value=(char*)come_increment_ref_count(increment_ref_count_object(come_value_196->type,come_value_196->c_value,info));
        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        type_name_198 = come_decrement_ref_count2(type_name_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_196));
    __result167__ = (_Bool)1;
    come_call_finalizer3(come_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result167__;
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct sNode* __dec_obj99;
struct sGCDecNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value330=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value330,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj99=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); }
    __result168__ = __result_obj__ = self;
    come_call_finalizer3(self,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result168__;
}

char* sGCDecNode_kind(struct sGCDecNode* self){
void* __result_obj__;
void* __right_value332 = (void*)0;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
    __result169__ = __result_obj__ = ((char*)(__right_value332=__builtin_string("sGCDecNode")));
    __right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result169__;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
struct sNode* node_199;
void* __right_value333 = (void*)0;
struct CVALUE* come_value_200;
struct sType* type_201;
_Bool __result170__;
    node_199=self->node;
    if(!node_compile(node_199,info)) {
        return (_Bool)0;
    }
    come_value_200=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_201=come_value_200->type;
    decrement_ref_count_object(type_201,come_value_200->c_value,info,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_200));
    __result170__ = (_Bool)1;
    come_call_finalizer3(come_value_200,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result170__;
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sType* __dec_obj100;
struct sIsHeap* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value334=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value334,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj100=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result171__ = __result_obj__ = self;
    come_call_finalizer3(self,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result171__;
}

char* sIsHeap_kind(struct sIsHeap* self){
void* __result_obj__;
void* __right_value336 = (void*)0;
char* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
    __result172__ = __result_obj__ = ((char*)(__right_value336=__builtin_string("sIsHeap")));
    __right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result172__;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
struct sType* node_202;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct CVALUE* come_value_203;
void* __right_value339 = (void*)0;
char* __dec_obj101;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct sType* __dec_obj102;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct CVALUE* come_value_204;
void* __right_value344 = (void*)0;
char* __dec_obj103;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sType* __dec_obj104;
    node_202=self->type;
    if(self->type->mHeap) {
        come_value_203=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value337=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1117, "CVALUE"))))));
        come_call_finalizer3(__right_value337,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj101=come_value_203->c_value;
        come_value_203->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj102=come_value_203->type;
        come_value_203->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value340=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1120, "sType")))),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value340,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_203->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_203));
        add_come_last_code(info,"%s;\n",come_value_203->c_value);
        come_call_finalizer3(come_value_203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_204=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value342=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1128, "CVALUE"))))));
        come_call_finalizer3(__right_value342,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj103=come_value_204->c_value;
        come_value_204->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj104=come_value_204->type;
        come_value_204->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value345=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1131, "sType")))),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value345,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_204->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_204));
        add_come_last_code(info,"%s;\n",come_value_204->c_value);
        come_call_finalizer3(come_value_204,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct sType* __dec_obj105;
struct sIsPointer* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
    ((struct sNodeBase*)(__right_value347=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value347,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj105=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result173__ = __result_obj__ = self;
    come_call_finalizer3(self,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result173__;
}

char* sIsPointer_kind(struct sIsPointer* self){
void* __result_obj__;
void* __right_value349 = (void*)0;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
    __result174__ = __result_obj__ = ((char*)(__right_value349=__builtin_string("sIsPointer")));
    __right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result174__;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info){
struct sType* node_205;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct CVALUE* come_value_206;
void* __right_value352 = (void*)0;
char* __dec_obj106;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sType* __dec_obj107;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct CVALUE* come_value_207;
void* __right_value357 = (void*)0;
char* __dec_obj108;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sType* __dec_obj109;
    node_205=self->type;
    if(self->type->mPointerNum>0) {
        come_value_206=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value350=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1162, "CVALUE"))))));
        come_call_finalizer3(__right_value350,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj106=come_value_206->c_value;
        come_value_206->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj107=come_value_206->type;
        come_value_206->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value353=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1165, "sType")))),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value353,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_206->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_206));
        add_come_last_code(info,"%s;\n",come_value_206->c_value);
        come_call_finalizer3(come_value_206,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_207=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value355=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1173, "CVALUE"))))));
        come_call_finalizer3(__right_value355,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj108=come_value_207->c_value;
        come_value_207->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj109=come_value_207->type;
        come_value_207->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value358=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1176, "sType")))),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value358,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_value_207->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_207));
        add_come_last_code(info,"%s;\n",come_value_207->c_value);
        come_call_finalizer3(come_value_207,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
void* __right_value360 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_208;
char* name_209;
_Bool err_210;
void* __right_value361 = (void*)0;
struct sType* inf_type_211;
void* __right_value362 = (void*)0;
struct sNode* node_212;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sNode* _inf_value1;
struct sImplementsNode* _inf_obj_value1;
void* __right_value369 = (void*)0;
struct sNode* __result177__;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct sNode* _inf_value2;
struct sNewNode* _inf_obj_value2;
void* __right_value375 = (void*)0;
struct sNode* obj_214;
void* __right_value376 = (void*)0;
char* fun_name_216;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct sNode* __result180__;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sNode* _inf_value3;
struct sNewNode* _inf_obj_value3;
void* __right_value384 = (void*)0;
struct sNode* __result183__;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct sNode* _inf_value4;
struct sTrueNode* _inf_obj_value4;
void* __right_value389 = (void*)0;
struct sNode* __result186__;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct sNode* _inf_value5;
struct sFalseNode* _inf_obj_value5;
void* __right_value394 = (void*)0;
struct sNode* __result189__;
void* __right_value395 = (void*)0;
struct sNode* node_220;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct sNode* _inf_value6;
struct sDeleteNode* _inf_obj_value6;
void* __right_value401 = (void*)0;
struct sNode* __result192__;
void* __right_value402 = (void*)0;
struct sNode* node_222;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct sNode* _inf_value7;
struct sForceDeleteNode* _inf_obj_value7;
void* __right_value408 = (void*)0;
struct sNode* __result195__;
void* __right_value409 = (void*)0;
struct sNode* node_224;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct sNode* _inf_value8;
struct sBorrowNode* _inf_obj_value8;
void* __right_value415 = (void*)0;
struct sNode* __result198__;
void* __right_value416 = (void*)0;
struct sNode* node_226;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct sNode* _inf_value9;
struct sDelegateNode* _inf_obj_value9;
void* __right_value422 = (void*)0;
struct sNode* __result201__;
void* __right_value423 = (void*)0;
struct sNode* node_228;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct sNode* _inf_value10;
struct sShareNode* _inf_obj_value10;
void* __right_value429 = (void*)0;
struct sNode* __result204__;
void* __right_value430 = (void*)0;
struct sNode* node_230;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct sNode* _inf_value11;
struct sCloneNode* _inf_obj_value11;
void* __right_value436 = (void*)0;
struct sNode* __result207__;
void* __right_value437 = (void*)0;
struct sNode* node_232;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct sNode* _inf_value12;
struct sDupeNode* _inf_obj_value12;
void* __right_value443 = (void*)0;
struct sNode* __result210__;
void* __right_value444 = (void*)0;
struct sNode* node_234;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct sNode* _inf_value13;
struct sDummyHeapNode* _inf_obj_value13;
void* __right_value450 = (void*)0;
struct sNode* __result213__;
void* __right_value451 = (void*)0;
struct sNode* node_236;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct sNode* _inf_value14;
struct sGCIncNode* _inf_obj_value14;
void* __right_value457 = (void*)0;
struct sNode* __result216__;
void* __right_value458 = (void*)0;
struct sNode* node_238;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sNode* _inf_value15;
struct sGCDecNode* _inf_obj_value15;
void* __right_value464 = (void*)0;
struct sNode* __result219__;
void* __right_value465 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_240;
char* param_name_241;
_Bool err_242;
void* __right_value466 = (void*)0;
struct sType* type2_243;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct sNode* _inf_value16;
struct sIsHeap* _inf_obj_value16;
void* __right_value472 = (void*)0;
struct sNode* __result222__;
void* __right_value473 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_245;
char* param_name_246;
_Bool err_247;
void* __right_value474 = (void*)0;
struct sType* type2_248;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sNode* _inf_value17;
struct sIsPointer* _inf_obj_value17;
void* __right_value480 = (void*)0;
struct sNode* __result225__;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sNode* _inf_value18;
struct sNothingNode* _inf_obj_value18;
void* __right_value485 = (void*)0;
struct sNode* __result228__;
void* __right_value486 = (void*)0;
struct sNode* node_251;
struct sNode* __result229__;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sNode* _inf_value19;
struct sNothingNode* _inf_obj_value19;
void* __right_value491 = (void*)0;
struct sNode* __result232__;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sNode* _inf_value20;
struct sNothingNode* _inf_obj_value20;
void* __right_value496 = (void*)0;
struct sNode* __result235__;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct sNode* _inf_value21;
struct sNothingNode* _inf_obj_value21;
void* __right_value501 = (void*)0;
struct sNode* __result238__;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sNode* _inf_value22;
struct sNothingNode* _inf_obj_value22;
void* __right_value506 = (void*)0;
struct sNode* __result241__;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sNode* _inf_value23;
struct sNothingNode* _inf_obj_value23;
void* __right_value511 = (void*)0;
struct sNode* __result244__;
_Bool paren_257;
_Bool is_type_name_flag_258;
char* p_259;
int sline_260;
void* __right_value512 = (void*)0;
char* word_261;
void* __right_value513 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* type_262;
char* name_263;
_Bool err_264;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sNode* _inf_value24;
struct sSizeOfNode* _inf_obj_value24;
void* __right_value519 = (void*)0;
struct sNode* __result247__;
void* __right_value520 = (void*)0;
struct sNode* exp_266;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sNode* _inf_value25;
struct sSizeOfExpNode* _inf_obj_value25;
void* __right_value526 = (void*)0;
struct sNode* __result250__;
_Bool paren_268;
_Bool is_type_name_flag_269;
char* p_270;
int sline_271;
void* __right_value527 = (void*)0;
char* word_272;
void* __right_value528 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_273;
char* name_274;
_Bool err_275;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sNode* _inf_value26;
struct sTypeOfNode* _inf_obj_value26;
void* __right_value534 = (void*)0;
struct sNode* __result253__;
void* __right_value535 = (void*)0;
struct sNode* exp_277;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sNode* _inf_value27;
struct sTypeOfExpNode* _inf_obj_value27;
void* __right_value541 = (void*)0;
struct sNode* __result256__;
_Bool is_type_name_flag_279;
char* p_280;
int sline_281;
void* __right_value542 = (void*)0;
char* word_282;
void* __right_value543 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_283;
char* name_284;
_Bool err_285;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sNode* _inf_value28;
struct sAlignOfNode* _inf_obj_value28;
void* __right_value549 = (void*)0;
struct sNode* __result259__;
void* __right_value550 = (void*)0;
struct sNode* exp_287;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct sNode* _inf_value29;
struct sAlignOfExpNode* _inf_obj_value29;
void* __right_value556 = (void*)0;
struct sNode* __result262__;
_Bool is_type_name_flag_289;
char* p_290;
int sline_291;
void* __right_value557 = (void*)0;
char* word_292;
void* __right_value558 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type_293;
char* name_294;
_Bool err_295;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sNode* _inf_value30;
struct sAlignOfNode2* _inf_obj_value30;
void* __right_value564 = (void*)0;
struct sNode* __result265__;
void* __right_value565 = (void*)0;
struct sNode* exp_297;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sNode* _inf_value31;
struct sAlignOfExpNode2* _inf_obj_value31;
void* __right_value571 = (void*)0;
struct sNode* __result268__;
_Bool is_type_name_flag_299;
char* p_300;
int sline_301;
void* __right_value572 = (void*)0;
char* word_302;
void* __right_value573 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type_303;
char* name_304;
_Bool err_305;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct sNode* _inf_value32;
struct sAlignAsNode* _inf_obj_value32;
void* __right_value579 = (void*)0;
struct sNode* __result271__;
void* __right_value580 = (void*)0;
struct sNode* exp_307;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sNode* _inf_value33;
struct sAlignAsExpNode* _inf_obj_value33;
void* __right_value586 = (void*)0;
struct sNode* __result274__;
void* __right_value587 = (void*)0;
struct sNode* __result275__;
memset(&__result_obj__, 0, sizeof(void*));
    if(charp_operator_equals(buf,"new")) {
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value360=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_208=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        name_209=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_210=multiple_assign_var4->v3;
        come_call_finalizer3(__right_value360,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(!err_210) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        if(*info->p==40) {
            if(type_208->mClass->mProtocol) {
                info->p++;
                skip_spaces_and_lf(info);
                inf_type_211=(struct sType*)come_increment_ref_count(sType_clone(type_208));
                node_212=(struct sNode*)come_increment_ref_count(expression_v13(info));
                expected_next_character(41,info);
                _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1208, "struct sNode");
                _inf_obj_value1=come_increment_ref_count(((struct sImplementsNode*)(__right_value364=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value363=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1208, "sImplementsNode")))),(struct sNode*)come_increment_ref_count(node_212),(struct sType*)come_increment_ref_count(inf_type_211),info))));
                _inf_value1->_protocol_obj=_inf_obj_value1;
                _inf_value1->finalize=(void*)sImplementsNode_finalize;
                _inf_value1->clone=(void*)sImplementsNode_clone;
                _inf_value1->compile=(void*)sImplementsNode_compile;
                _inf_value1->sline=(void*)sNodeBase_sline;
                _inf_value1->sname=(void*)sNodeBase_sname;
                _inf_value1->terminated=(void*)sNodeBase_terminated;
                _inf_value1->kind=(void*)sImplementsNode_kind;
                __result177__ = __result_obj__ = ((struct sNode*)(__right_value369=_inf_value1));
                come_call_finalizer3(inf_type_211,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(node_212) { node_212 = come_decrement_ref_count2(node_212, ((struct sNode*)node_212)->finalize, ((struct sNode*)node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(type_208,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_209 = come_decrement_ref_count2(name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value363,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value364,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value369) { __right_value369 = come_decrement_ref_count2(__right_value369, ((struct sNode*)__right_value369)->finalize, ((struct sNode*)__right_value369)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result177__;
                come_call_finalizer3(inf_type_211,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(node_212) { node_212 = come_decrement_ref_count2(node_212, ((struct sNode*)node_212)->finalize, ((struct sNode*)node_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1211, "struct sNode");
                _inf_obj_value2=come_increment_ref_count(((struct sNewNode*)(__right_value371=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value370=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1211, "sNewNode")))),(struct sType*)come_increment_ref_count(type_208),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sNewNode_finalize;
                _inf_value2->clone=(void*)sNewNode_clone;
                _inf_value2->compile=(void*)sNewNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sNewNode_kind;
                obj_214=(struct sNode*)come_increment_ref_count(_inf_value2);
                come_call_finalizer3(__right_value370,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value371,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
                fun_name_216=(char*)come_increment_ref_count(__builtin_string("initialize"));
                __result180__ = __result_obj__ = ((struct sNode*)(__right_value378=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value377=sNode_clone(obj_214)))),(char*)come_increment_ref_count(fun_name_216),info)));
                if(obj_214) { obj_214 = come_decrement_ref_count2(obj_214, ((struct sNode*)obj_214)->finalize, ((struct sNode*)obj_214)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_216 = come_decrement_ref_count2(fun_name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_208,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_209 = come_decrement_ref_count2(name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(__right_value377) { __right_value377 = come_decrement_ref_count2(__right_value377, ((struct sNode*)__right_value377)->finalize, ((struct sNode*)__right_value377)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                if(__right_value378) { __right_value378 = come_decrement_ref_count2(__right_value378, ((struct sNode*)__right_value378)->finalize, ((struct sNode*)__right_value378)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result180__;
                if(obj_214) { obj_214 = come_decrement_ref_count2(obj_214, ((struct sNode*)obj_214)->finalize, ((struct sNode*)obj_214)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_216 = come_decrement_ref_count2(fun_name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1218, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sNewNode*)(__right_value380=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value379=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1218, "sNewNode")))),(struct sType*)come_increment_ref_count(type_208),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sNewNode_finalize;
            _inf_value3->clone=(void*)sNewNode_clone;
            _inf_value3->compile=(void*)sNewNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sNewNode_kind;
            __result183__ = __result_obj__ = ((struct sNode*)(__right_value384=_inf_value3));
            come_call_finalizer3(type_208,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_209 = come_decrement_ref_count2(name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value379,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value380,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value384) { __right_value384 = come_decrement_ref_count2(__right_value384, ((struct sNode*)__right_value384)->finalize, ((struct sNode*)__right_value384)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result183__;
        }
        come_call_finalizer3(type_208,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_209 = come_decrement_ref_count2(name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(charp_operator_equals(buf,"true")) {
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1222, "struct sNode");
            _inf_obj_value4=come_increment_ref_count(((struct sTrueNode*)(__right_value386=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value385=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1222, "sTrueNode")))),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sTrueNode_finalize;
            _inf_value4->clone=(void*)sTrueNode_clone;
            _inf_value4->compile=(void*)sTrueNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sTrueNode_kind;
            __result186__ = __result_obj__ = ((struct sNode*)(__right_value389=_inf_value4));
            come_call_finalizer3(__right_value385,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value386,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value389) { __right_value389 = come_decrement_ref_count2(__right_value389, ((struct sNode*)__right_value389)->finalize, ((struct sNode*)__right_value389)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result186__;
        }
        else {
            if(charp_operator_equals(buf,"false")) {
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1225, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sFalseNode*)(__right_value391=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value390=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1225, "sFalseNode")))),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sFalseNode_finalize;
                _inf_value5->clone=(void*)sFalseNode_clone;
                _inf_value5->compile=(void*)sFalseNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sNodeBase_terminated;
                _inf_value5->kind=(void*)sFalseNode_kind;
                __result189__ = __result_obj__ = ((struct sNode*)(__right_value394=_inf_value5));
                come_call_finalizer3(__right_value390,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value391,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value394) { __right_value394 = come_decrement_ref_count2(__right_value394, ((struct sNode*)__right_value394)->finalize, ((struct sNode*)__right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result189__;
            }
            else {
                if(charp_operator_equals(buf,"delete")) {
                    node_220=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1230, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sDeleteNode*)(__right_value397=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(__right_value396=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1230, "sDeleteNode")))),(struct sNode*)come_increment_ref_count(node_220),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sDeleteNode_finalize;
                    _inf_value6->clone=(void*)sDeleteNode_clone;
                    _inf_value6->compile=(void*)sDeleteNode_compile;
                    _inf_value6->sline=(void*)sNodeBase_sline;
                    _inf_value6->sname=(void*)sNodeBase_sname;
                    _inf_value6->terminated=(void*)sNodeBase_terminated;
                    _inf_value6->kind=(void*)sDeleteNode_kind;
                    __result192__ = __result_obj__ = ((struct sNode*)(__right_value401=_inf_value6));
                    if(node_220) { node_220 = come_decrement_ref_count2(node_220, ((struct sNode*)node_220)->finalize, ((struct sNode*)node_220)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value396,sDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(__right_value397,sDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(__right_value401) { __right_value401 = come_decrement_ref_count2(__right_value401, ((struct sNode*)__right_value401)->finalize, ((struct sNode*)__right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result192__;
                    if(node_220) { node_220 = come_decrement_ref_count2(node_220, ((struct sNode*)node_220)->finalize, ((struct sNode*)node_220)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(charp_operator_equals(buf,"force_delete")) {
                        node_222=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1235, "struct sNode");
                        _inf_obj_value7=come_increment_ref_count(((struct sForceDeleteNode*)(__right_value404=sForceDeleteNode_initialize((struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(__right_value403=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "21obj.c", 1235, "sForceDeleteNode")))),(struct sNode*)come_increment_ref_count(node_222),info))));
                        _inf_value7->_protocol_obj=_inf_obj_value7;
                        _inf_value7->finalize=(void*)sForceDeleteNode_finalize;
                        _inf_value7->clone=(void*)sForceDeleteNode_clone;
                        _inf_value7->compile=(void*)sForceDeleteNode_compile;
                        _inf_value7->sline=(void*)sNodeBase_sline;
                        _inf_value7->sname=(void*)sNodeBase_sname;
                        _inf_value7->terminated=(void*)sNodeBase_terminated;
                        _inf_value7->kind=(void*)sForceDeleteNode_kind;
                        __result195__ = __result_obj__ = ((struct sNode*)(__right_value408=_inf_value7));
                        if(node_222) { node_222 = come_decrement_ref_count2(node_222, ((struct sNode*)node_222)->finalize, ((struct sNode*)node_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(__right_value403,sForceDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(__right_value404,sForceDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(__right_value408) { __right_value408 = come_decrement_ref_count2(__right_value408, ((struct sNode*)__right_value408)->finalize, ((struct sNode*)__right_value408)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result195__;
                        if(node_222) { node_222 = come_decrement_ref_count2(node_222, ((struct sNode*)node_222)->finalize, ((struct sNode*)node_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(charp_operator_equals(buf,"borrow")) {
                            node_224=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1241, "struct sNode");
                            _inf_obj_value8=come_increment_ref_count(((struct sBorrowNode*)(__right_value411=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(__right_value410=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1241, "sBorrowNode")))),(struct sNode*)come_increment_ref_count(node_224),info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sBorrowNode_finalize;
                            _inf_value8->clone=(void*)sBorrowNode_clone;
                            _inf_value8->compile=(void*)sBorrowNode_compile;
                            _inf_value8->sline=(void*)sNodeBase_sline;
                            _inf_value8->sname=(void*)sNodeBase_sname;
                            _inf_value8->terminated=(void*)sNodeBase_terminated;
                            _inf_value8->kind=(void*)sBorrowNode_kind;
                            __result198__ = __result_obj__ = ((struct sNode*)(__right_value415=_inf_value8));
                            if(node_224) { node_224 = come_decrement_ref_count2(node_224, ((struct sNode*)node_224)->finalize, ((struct sNode*)node_224)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(__right_value410,sBorrowNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(__right_value411,sBorrowNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value415) { __right_value415 = come_decrement_ref_count2(__right_value415, ((struct sNode*)__right_value415)->finalize, ((struct sNode*)__right_value415)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result198__;
                            if(node_224) { node_224 = come_decrement_ref_count2(node_224, ((struct sNode*)node_224)->finalize, ((struct sNode*)node_224)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(charp_operator_equals(buf,"delegate")) {
                                node_226=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1246, "struct sNode");
                                _inf_obj_value9=come_increment_ref_count(((struct sDelegateNode*)(__right_value418=sDelegateNode_initialize((struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(__right_value417=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "21obj.c", 1246, "sDelegateNode")))),(struct sNode*)come_increment_ref_count(node_226),info))));
                                _inf_value9->_protocol_obj=_inf_obj_value9;
                                _inf_value9->finalize=(void*)sDelegateNode_finalize;
                                _inf_value9->clone=(void*)sDelegateNode_clone;
                                _inf_value9->compile=(void*)sDelegateNode_compile;
                                _inf_value9->sline=(void*)sNodeBase_sline;
                                _inf_value9->sname=(void*)sNodeBase_sname;
                                _inf_value9->terminated=(void*)sNodeBase_terminated;
                                _inf_value9->kind=(void*)sDelegateNode_kind;
                                __result201__ = __result_obj__ = ((struct sNode*)(__right_value422=_inf_value9));
                                if(node_226) { node_226 = come_decrement_ref_count2(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(__right_value417,sDelegateNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(__right_value418,sDelegateNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(__right_value422) { __right_value422 = come_decrement_ref_count2(__right_value422, ((struct sNode*)__right_value422)->finalize, ((struct sNode*)__right_value422)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result201__;
                                if(node_226) { node_226 = come_decrement_ref_count2(node_226, ((struct sNode*)node_226)->finalize, ((struct sNode*)node_226)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(charp_operator_equals(buf,"share")) {
                                    node_228=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1251, "struct sNode");
                                    _inf_obj_value10=come_increment_ref_count(((struct sShareNode*)(__right_value425=sShareNode_initialize((struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(__right_value424=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "21obj.c", 1251, "sShareNode")))),(struct sNode*)come_increment_ref_count(node_228),info))));
                                    _inf_value10->_protocol_obj=_inf_obj_value10;
                                    _inf_value10->finalize=(void*)sShareNode_finalize;
                                    _inf_value10->clone=(void*)sShareNode_clone;
                                    _inf_value10->compile=(void*)sShareNode_compile;
                                    _inf_value10->sline=(void*)sNodeBase_sline;
                                    _inf_value10->sname=(void*)sNodeBase_sname;
                                    _inf_value10->terminated=(void*)sNodeBase_terminated;
                                    _inf_value10->kind=(void*)sShareNode_kind;
                                    __result204__ = __result_obj__ = ((struct sNode*)(__right_value429=_inf_value10));
                                    if(node_228) { node_228 = come_decrement_ref_count2(node_228, ((struct sNode*)node_228)->finalize, ((struct sNode*)node_228)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer3(__right_value424,sShareNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer3(__right_value425,sShareNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(__right_value429) { __right_value429 = come_decrement_ref_count2(__right_value429, ((struct sNode*)__right_value429)->finalize, ((struct sNode*)__right_value429)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result204__;
                                    if(node_228) { node_228 = come_decrement_ref_count2(node_228, ((struct sNode*)node_228)->finalize, ((struct sNode*)node_228)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(charp_operator_equals(buf,"clone")) {
                                        node_230=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1256, "struct sNode");
                                        _inf_obj_value11=come_increment_ref_count(((struct sCloneNode*)(__right_value432=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(__right_value431=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1256, "sCloneNode")))),(struct sNode*)come_increment_ref_count(node_230),info))));
                                        _inf_value11->_protocol_obj=_inf_obj_value11;
                                        _inf_value11->finalize=(void*)sCloneNode_finalize;
                                        _inf_value11->clone=(void*)sCloneNode_clone;
                                        _inf_value11->compile=(void*)sCloneNode_compile;
                                        _inf_value11->sline=(void*)sNodeBase_sline;
                                        _inf_value11->sname=(void*)sNodeBase_sname;
                                        _inf_value11->terminated=(void*)sNodeBase_terminated;
                                        _inf_value11->kind=(void*)sCloneNode_kind;
                                        __result207__ = __result_obj__ = ((struct sNode*)(__right_value436=_inf_value11));
                                        if(node_230) { node_230 = come_decrement_ref_count2(node_230, ((struct sNode*)node_230)->finalize, ((struct sNode*)node_230)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer3(__right_value431,sCloneNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer3(__right_value432,sCloneNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(__right_value436) { __right_value436 = come_decrement_ref_count2(__right_value436, ((struct sNode*)__right_value436)->finalize, ((struct sNode*)__right_value436)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result207__;
                                        if(node_230) { node_230 = come_decrement_ref_count2(node_230, ((struct sNode*)node_230)->finalize, ((struct sNode*)node_230)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(charp_operator_equals(buf,"dupe")) {
                                            node_232=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1261, "struct sNode");
                                            _inf_obj_value12=come_increment_ref_count(((struct sDupeNode*)(__right_value439=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(__right_value438=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1261, "sDupeNode")))),(struct sNode*)come_increment_ref_count(node_232),info))));
                                            _inf_value12->_protocol_obj=_inf_obj_value12;
                                            _inf_value12->finalize=(void*)sDupeNode_finalize;
                                            _inf_value12->clone=(void*)sDupeNode_clone;
                                            _inf_value12->compile=(void*)sDupeNode_compile;
                                            _inf_value12->sline=(void*)sNodeBase_sline;
                                            _inf_value12->sname=(void*)sNodeBase_sname;
                                            _inf_value12->terminated=(void*)sNodeBase_terminated;
                                            _inf_value12->kind=(void*)sDupeNode_kind;
                                            __result210__ = __result_obj__ = ((struct sNode*)(__right_value443=_inf_value12));
                                            if(node_232) { node_232 = come_decrement_ref_count2(node_232, ((struct sNode*)node_232)->finalize, ((struct sNode*)node_232)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer3(__right_value438,sDupeNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer3(__right_value439,sDupeNode_finalize, 0, 1, 0, 0, __result_obj__);
                                            if(__right_value443) { __right_value443 = come_decrement_ref_count2(__right_value443, ((struct sNode*)__right_value443)->finalize, ((struct sNode*)__right_value443)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result210__;
                                            if(node_232) { node_232 = come_decrement_ref_count2(node_232, ((struct sNode*)node_232)->finalize, ((struct sNode*)node_232)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            if(charp_operator_equals(buf,"dummy_heap")) {
                                                node_234=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1266, "struct sNode");
                                                _inf_obj_value13=come_increment_ref_count(((struct sDummyHeapNode*)(__right_value446=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(__right_value445=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1266, "sDummyHeapNode")))),(struct sNode*)come_increment_ref_count(node_234),info))));
                                                _inf_value13->_protocol_obj=_inf_obj_value13;
                                                _inf_value13->finalize=(void*)sDummyHeapNode_finalize;
                                                _inf_value13->clone=(void*)sDummyHeapNode_clone;
                                                _inf_value13->compile=(void*)sDummyHeapNode_compile;
                                                _inf_value13->sline=(void*)sNodeBase_sline;
                                                _inf_value13->sname=(void*)sNodeBase_sname;
                                                _inf_value13->terminated=(void*)sNodeBase_terminated;
                                                _inf_value13->kind=(void*)sDummyHeapNode_kind;
                                                __result213__ = __result_obj__ = ((struct sNode*)(__right_value450=_inf_value13));
                                                if(node_234) { node_234 = come_decrement_ref_count2(node_234, ((struct sNode*)node_234)->finalize, ((struct sNode*)node_234)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                come_call_finalizer3(__right_value445,sDummyHeapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer3(__right_value446,sDummyHeapNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                if(__right_value450) { __right_value450 = come_decrement_ref_count2(__right_value450, ((struct sNode*)__right_value450)->finalize, ((struct sNode*)__right_value450)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                return __result213__;
                                                if(node_234) { node_234 = come_decrement_ref_count2(node_234, ((struct sNode*)node_234)->finalize, ((struct sNode*)node_234)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(charp_operator_equals(buf,"gc_inc")&&*info->p==40) {
                                                    info->p++;
                                                    skip_spaces_and_lf(info);
                                                    node_236=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                    expected_next_character(41,info);
                                                    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1276, "struct sNode");
                                                    _inf_obj_value14=come_increment_ref_count(((struct sGCIncNode*)(__right_value453=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(__right_value452=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1276, "sGCIncNode")))),(struct sNode*)come_increment_ref_count(node_236),info))));
                                                    _inf_value14->_protocol_obj=_inf_obj_value14;
                                                    _inf_value14->finalize=(void*)sGCIncNode_finalize;
                                                    _inf_value14->clone=(void*)sGCIncNode_clone;
                                                    _inf_value14->compile=(void*)sGCIncNode_compile;
                                                    _inf_value14->sline=(void*)sNodeBase_sline;
                                                    _inf_value14->sname=(void*)sNodeBase_sname;
                                                    _inf_value14->terminated=(void*)sNodeBase_terminated;
                                                    _inf_value14->kind=(void*)sGCIncNode_kind;
                                                    __result216__ = __result_obj__ = ((struct sNode*)(__right_value457=_inf_value14));
                                                    if(node_236) { node_236 = come_decrement_ref_count2(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    come_call_finalizer3(__right_value452,sGCIncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer3(__right_value453,sGCIncNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                    if(__right_value457) { __right_value457 = come_decrement_ref_count2(__right_value457, ((struct sNode*)__right_value457)->finalize, ((struct sNode*)__right_value457)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result216__;
                                                    if(node_236) { node_236 = come_decrement_ref_count2(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    if(charp_operator_equals(buf,"gc_dec")&&*info->p==40) {
                                                        info->p++;
                                                        skip_spaces_and_lf(info);
                                                        node_238=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                        expected_next_character(41,info);
                                                        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1286, "struct sNode");
                                                        _inf_obj_value15=come_increment_ref_count(((struct sGCDecNode*)(__right_value460=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(__right_value459=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1286, "sGCDecNode")))),(struct sNode*)come_increment_ref_count(node_238),info))));
                                                        _inf_value15->_protocol_obj=_inf_obj_value15;
                                                        _inf_value15->finalize=(void*)sGCDecNode_finalize;
                                                        _inf_value15->clone=(void*)sGCDecNode_clone;
                                                        _inf_value15->compile=(void*)sGCDecNode_compile;
                                                        _inf_value15->sline=(void*)sNodeBase_sline;
                                                        _inf_value15->sname=(void*)sNodeBase_sname;
                                                        _inf_value15->terminated=(void*)sNodeBase_terminated;
                                                        _inf_value15->kind=(void*)sGCDecNode_kind;
                                                        __result219__ = __result_obj__ = ((struct sNode*)(__right_value464=_inf_value15));
                                                        if(node_238) { node_238 = come_decrement_ref_count2(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        come_call_finalizer3(__right_value459,sGCDecNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer3(__right_value460,sGCDecNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                        if(__right_value464) { __right_value464 = come_decrement_ref_count2(__right_value464, ((struct sNode*)__right_value464)->finalize, ((struct sNode*)__right_value464)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result219__;
                                                        if(node_238) { node_238 = come_decrement_ref_count2(node_238, ((struct sNode*)node_238)->finalize, ((struct sNode*)node_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    else {
                                                        if(charp_operator_equals(buf,"isheap")&&*info->p==40) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value465=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                            param_type_240=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                                            param_name_241=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                                            err_242=multiple_assign_var5->v3;
                                                            come_call_finalizer3(__right_value465,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                            if(!err_242) {
                                                                err_msg(info,"parse_type failed");
                                                                exit(2);
                                                            }
                                                            type2_243=(struct sType*)come_increment_ref_count(solve_generics(param_type_240,info->generics_type,info));
                                                            expected_next_character(41,info);
                                                            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1302, "struct sNode");
                                                            _inf_obj_value16=come_increment_ref_count(((struct sIsHeap*)(__right_value468=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(__right_value467=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1302, "sIsHeap")))),(struct sType*)come_increment_ref_count(type2_243),info))));
                                                            _inf_value16->_protocol_obj=_inf_obj_value16;
                                                            _inf_value16->finalize=(void*)sIsHeap_finalize;
                                                            _inf_value16->clone=(void*)sIsHeap_clone;
                                                            _inf_value16->compile=(void*)sIsHeap_compile;
                                                            _inf_value16->sline=(void*)sNodeBase_sline;
                                                            _inf_value16->sname=(void*)sNodeBase_sname;
                                                            _inf_value16->terminated=(void*)sNodeBase_terminated;
                                                            _inf_value16->kind=(void*)sIsHeap_kind;
                                                            __result222__ = __result_obj__ = ((struct sNode*)(__right_value472=_inf_value16));
                                                            come_call_finalizer3(param_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            param_name_241 = come_decrement_ref_count2(param_name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(type2_243,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(__right_value467,sIsHeap_finalize, 0, 1, 0, 0, __result_obj__);
                                                            come_call_finalizer3(__right_value468,sIsHeap_finalize, 0, 1, 0, 0, __result_obj__);
                                                            if(__right_value472) { __right_value472 = come_decrement_ref_count2(__right_value472, ((struct sNode*)__right_value472)->finalize, ((struct sNode*)__right_value472)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            return __result222__;
                                                            come_call_finalizer3(param_type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            param_name_241 = come_decrement_ref_count2(param_name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer3(type2_243,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        else {
                                                            if(charp_operator_equals(buf,"ispointer")&&*info->p==40) {
                                                                info->p++;
                                                                skip_spaces_and_lf(info);
                                                                multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value473=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                param_type_245=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                                                param_name_246=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                                                err_247=multiple_assign_var6->v3;
                                                                come_call_finalizer3(__right_value473,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                if(!err_247) {
                                                                    err_msg(info,"parse_type failed");
                                                                    exit(2);
                                                                }
                                                                type2_248=(struct sType*)come_increment_ref_count(solve_generics(param_type_245,info->generics_type,info));
                                                                expected_next_character(41,info);
                                                                _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1318, "struct sNode");
                                                                _inf_obj_value17=come_increment_ref_count(((struct sIsPointer*)(__right_value476=sIsPointer_initialize((struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(__right_value475=(struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "21obj.c", 1318, "sIsPointer")))),(struct sType*)come_increment_ref_count(type2_248),info))));
                                                                _inf_value17->_protocol_obj=_inf_obj_value17;
                                                                _inf_value17->finalize=(void*)sIsPointer_finalize;
                                                                _inf_value17->clone=(void*)sIsPointer_clone;
                                                                _inf_value17->compile=(void*)sIsPointer_compile;
                                                                _inf_value17->sline=(void*)sNodeBase_sline;
                                                                _inf_value17->sname=(void*)sNodeBase_sname;
                                                                _inf_value17->terminated=(void*)sNodeBase_terminated;
                                                                _inf_value17->kind=(void*)sIsPointer_kind;
                                                                __result225__ = __result_obj__ = ((struct sNode*)(__right_value480=_inf_value17));
                                                                come_call_finalizer3(param_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                param_name_246 = come_decrement_ref_count2(param_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(type2_248,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(__right_value475,sIsPointer_finalize, 0, 1, 0, 0, __result_obj__);
                                                                come_call_finalizer3(__right_value476,sIsPointer_finalize, 0, 1, 0, 0, __result_obj__);
                                                                if(__right_value480) { __right_value480 = come_decrement_ref_count2(__right_value480, ((struct sNode*)__right_value480)->finalize, ((struct sNode*)__right_value480)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                return __result225__;
                                                                come_call_finalizer3(param_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                param_name_246 = come_decrement_ref_count2(param_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                come_call_finalizer3(type2_248,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            }
                                                            else {
                                                                if(charp_operator_equals(buf,"using")) {
                                                                    if(parsecmp("neo-c",info)) {
                                                                        info->p+=strlen("neo-c");
                                                                        skip_spaces_and_lf(info);
                                                                        gComeC=(_Bool)0;
                                                                        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1327, "struct sNode");
                                                                        _inf_obj_value18=come_increment_ref_count(((struct sNothingNode*)(__right_value482=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value481=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1327, "sNothingNode")))),info))));
                                                                        _inf_value18->_protocol_obj=_inf_obj_value18;
                                                                        _inf_value18->finalize=(void*)sNothingNode_finalize;
                                                                        _inf_value18->clone=(void*)sNothingNode_clone;
                                                                        _inf_value18->compile=(void*)sNothingNode_compile;
                                                                        _inf_value18->sline=(void*)sNodeBase_sline;
                                                                        _inf_value18->sname=(void*)sNodeBase_sname;
                                                                        _inf_value18->terminated=(void*)sNodeBase_terminated;
                                                                        _inf_value18->kind=(void*)sNothingNode_kind;
                                                                        __result228__ = __result_obj__ = ((struct sNode*)(__right_value485=_inf_value18));
                                                                        come_call_finalizer3(__right_value481,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                        come_call_finalizer3(__right_value482,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                        if(__right_value485) { __right_value485 = come_decrement_ref_count2(__right_value485, ((struct sNode*)__right_value485)->finalize, ((struct sNode*)__right_value485)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        return __result228__;
                                                                    }
                                                                    else {
                                                                        if(parsecmp("c",info)||parsecmp("C",info)) {
                                                                            info->p+=strlen("c");
                                                                            skip_spaces_and_lf(info);
                                                                            gComeC=(_Bool)1;
                                                                            if(*info->p==123) {
                                                                                node_251=(struct sNode*)come_increment_ref_count(parse_normal_block(info));
                                                                                gComeC=(_Bool)0;
                                                                                __result229__ = __result_obj__ = node_251;
                                                                                if(node_251) { node_251 = come_decrement_ref_count2(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                                return __result229__;
                                                                                if(node_251) { node_251 = come_decrement_ref_count2(node_251, ((struct sNode*)node_251)->finalize, ((struct sNode*)node_251)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                            else {
                                                                                _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1343, "struct sNode");
                                                                                _inf_obj_value19=come_increment_ref_count(((struct sNothingNode*)(__right_value488=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value487=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1343, "sNothingNode")))),info))));
                                                                                _inf_value19->_protocol_obj=_inf_obj_value19;
                                                                                _inf_value19->finalize=(void*)sNothingNode_finalize;
                                                                                _inf_value19->clone=(void*)sNothingNode_clone;
                                                                                _inf_value19->compile=(void*)sNothingNode_compile;
                                                                                _inf_value19->sline=(void*)sNodeBase_sline;
                                                                                _inf_value19->sname=(void*)sNodeBase_sname;
                                                                                _inf_value19->terminated=(void*)sNodeBase_terminated;
                                                                                _inf_value19->kind=(void*)sNothingNode_kind;
                                                                                __result232__ = __result_obj__ = ((struct sNode*)(__right_value491=_inf_value19));
                                                                                come_call_finalizer3(__right_value487,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer3(__right_value488,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(__right_value491) { __right_value491 = come_decrement_ref_count2(__right_value491, ((struct sNode*)__right_value491)->finalize, ((struct sNode*)__right_value491)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result232__;
                                                                            }
                                                                        }
                                                                        else {
                                                                            if(parsecmp("gc",info)) {
                                                                                info->p+=strlen("gc");
                                                                                skip_spaces_and_lf(info);
                                                                                _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1350, "struct sNode");
                                                                                _inf_obj_value20=come_increment_ref_count(((struct sNothingNode*)(__right_value493=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value492=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1350, "sNothingNode")))),info))));
                                                                                _inf_value20->_protocol_obj=_inf_obj_value20;
                                                                                _inf_value20->finalize=(void*)sNothingNode_finalize;
                                                                                _inf_value20->clone=(void*)sNothingNode_clone;
                                                                                _inf_value20->compile=(void*)sNothingNode_compile;
                                                                                _inf_value20->sline=(void*)sNodeBase_sline;
                                                                                _inf_value20->sname=(void*)sNodeBase_sname;
                                                                                _inf_value20->terminated=(void*)sNodeBase_terminated;
                                                                                _inf_value20->kind=(void*)sNothingNode_kind;
                                                                                __result235__ = __result_obj__ = ((struct sNode*)(__right_value496=_inf_value20));
                                                                                come_call_finalizer3(__right_value492,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer3(__right_value493,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(__right_value496) { __right_value496 = come_decrement_ref_count2(__right_value496, ((struct sNode*)__right_value496)->finalize, ((struct sNode*)__right_value496)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result235__;
                                                                            }
                                                                            else {
                                                                                if(parsecmp("no-gc",info)) {
                                                                                    info->p+=strlen("no-gc");
                                                                                    skip_spaces_and_lf(info);
                                                                                    _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1357, "struct sNode");
                                                                                    _inf_obj_value21=come_increment_ref_count(((struct sNothingNode*)(__right_value498=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value497=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1357, "sNothingNode")))),info))));
                                                                                    _inf_value21->_protocol_obj=_inf_obj_value21;
                                                                                    _inf_value21->finalize=(void*)sNothingNode_finalize;
                                                                                    _inf_value21->clone=(void*)sNothingNode_clone;
                                                                                    _inf_value21->compile=(void*)sNothingNode_compile;
                                                                                    _inf_value21->sline=(void*)sNodeBase_sline;
                                                                                    _inf_value21->sname=(void*)sNodeBase_sname;
                                                                                    _inf_value21->terminated=(void*)sNodeBase_terminated;
                                                                                    _inf_value21->kind=(void*)sNothingNode_kind;
                                                                                    __result238__ = __result_obj__ = ((struct sNode*)(__right_value501=_inf_value21));
                                                                                    come_call_finalizer3(__right_value497,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer3(__right_value498,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    if(__right_value501) { __right_value501 = come_decrement_ref_count2(__right_value501, ((struct sNode*)__right_value501)->finalize, ((struct sNode*)__right_value501)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result238__;
                                                                                }
                                                                                else {
                                                                                    if(parsecmp("unsafe",info)) {
                                                                                        info->p+=strlen("unsafe");
                                                                                        skip_spaces_and_lf(info);
                                                                                        _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1363, "struct sNode");
                                                                                        _inf_obj_value22=come_increment_ref_count(((struct sNothingNode*)(__right_value503=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value502=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1363, "sNothingNode")))),info))));
                                                                                        _inf_value22->_protocol_obj=_inf_obj_value22;
                                                                                        _inf_value22->finalize=(void*)sNothingNode_finalize;
                                                                                        _inf_value22->clone=(void*)sNothingNode_clone;
                                                                                        _inf_value22->compile=(void*)sNothingNode_compile;
                                                                                        _inf_value22->sline=(void*)sNodeBase_sline;
                                                                                        _inf_value22->sname=(void*)sNodeBase_sname;
                                                                                        _inf_value22->terminated=(void*)sNodeBase_terminated;
                                                                                        _inf_value22->kind=(void*)sNothingNode_kind;
                                                                                        __result241__ = __result_obj__ = ((struct sNode*)(__right_value506=_inf_value22));
                                                                                        come_call_finalizer3(__right_value502,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer3(__right_value503,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        if(__right_value506) { __right_value506 = come_decrement_ref_count2(__right_value506, ((struct sNode*)__right_value506)->finalize, ((struct sNode*)__right_value506)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result241__;
                                                                                    }
                                                                                    else {
                                                                                        if(parsecmp("no-null-check",info)) {
                                                                                            info->p+=strlen("no-null-check");
                                                                                            skip_spaces_and_lf(info);
                                                                                            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1369, "struct sNode");
                                                                                            _inf_obj_value23=come_increment_ref_count(((struct sNothingNode*)(__right_value508=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value507=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1369, "sNothingNode")))),info))));
                                                                                            _inf_value23->_protocol_obj=_inf_obj_value23;
                                                                                            _inf_value23->finalize=(void*)sNothingNode_finalize;
                                                                                            _inf_value23->clone=(void*)sNothingNode_clone;
                                                                                            _inf_value23->compile=(void*)sNothingNode_compile;
                                                                                            _inf_value23->sline=(void*)sNodeBase_sline;
                                                                                            _inf_value23->sname=(void*)sNodeBase_sname;
                                                                                            _inf_value23->terminated=(void*)sNodeBase_terminated;
                                                                                            _inf_value23->kind=(void*)sNothingNode_kind;
                                                                                            __result244__ = __result_obj__ = ((struct sNode*)(__right_value511=_inf_value23));
                                                                                            come_call_finalizer3(__right_value507,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer3(__right_value508,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(__right_value511) { __right_value511 = come_decrement_ref_count2(__right_value511, ((struct sNode*)__right_value511)->finalize, ((struct sNode*)__right_value511)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result244__;
                                                                                        }
                                                                                        else {
                                                                                            err_msg(info,"invalid using");
                                                                                            exit(2);
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                else {
                                                                    if(charp_operator_equals(buf,"sizeof")) {
                                                                        paren_257=(_Bool)0;
                                                                        if(*info->p==40) {
                                                                            info->p++;
                                                                            skip_spaces_and_lf(info);
                                                                            paren_257=(_Bool)1;
                                                                        }
                                                                        is_type_name_flag_258=(_Bool)0;
                                                                        {
                                                                            p_259=info->p;
                                                                            sline_260=info->sline;
                                                                            if(xisalpha(*info->p)||*info->p==95) {
                                                                                word_261=(char*)come_increment_ref_count(parse_word(info));
                                                                                if(is_type_name(word_261,info)) {
                                                                                    is_type_name_flag_258=(_Bool)1;
                                                                                }
                                                                                word_261 = come_decrement_ref_count2(word_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            info->p=p_259;
                                                                            info->sline=sline_260;
                                                                        }
                                                                        if(is_type_name_flag_258) {
                                                                            multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value513=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                            type_262=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                                                                            name_263=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                                                                            err_264=multiple_assign_var7->v3;
                                                                            come_call_finalizer3(__right_value513,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            if(!err_264) {
                                                                                err_msg(info,"parse type");
                                                                                exit(2);
                                                                            }
                                                                            if(paren_257&&*info->p==41) {
                                                                                info->p++;
                                                                                skip_spaces_and_lf(info);
                                                                            }
                                                                            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1417, "struct sNode");
                                                                            _inf_obj_value24=come_increment_ref_count(((struct sSizeOfNode*)(__right_value515=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(__right_value514=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1417, "sSizeOfNode")))),(struct sType*)come_increment_ref_count(type_262),info))));
                                                                            _inf_value24->_protocol_obj=_inf_obj_value24;
                                                                            _inf_value24->finalize=(void*)sSizeOfNode_finalize;
                                                                            _inf_value24->clone=(void*)sSizeOfNode_clone;
                                                                            _inf_value24->compile=(void*)sSizeOfNode_compile;
                                                                            _inf_value24->sline=(void*)sNodeBase_sline;
                                                                            _inf_value24->sname=(void*)sNodeBase_sname;
                                                                            _inf_value24->terminated=(void*)sNodeBase_terminated;
                                                                            _inf_value24->kind=(void*)sSizeOfNode_kind;
                                                                            __result247__ = __result_obj__ = ((struct sNode*)(__right_value519=_inf_value24));
                                                                            come_call_finalizer3(type_262,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                            name_263 = come_decrement_ref_count2(name_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            come_call_finalizer3(__right_value514,sSizeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer3(__right_value515,sSizeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            if(__right_value519) { __right_value519 = come_decrement_ref_count2(__right_value519, ((struct sNode*)__right_value519)->finalize, ((struct sNode*)__right_value519)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result247__;
                                                                            come_call_finalizer3(type_262,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                            name_263 = come_decrement_ref_count2(name_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        else {
                                                                            exp_266=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                                            if(paren_257&&*info->p==41) {
                                                                                info->p++;
                                                                                skip_spaces_and_lf(info);
                                                                            }
                                                                            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1429, "struct sNode");
                                                                            _inf_obj_value25=come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value522=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value521=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1429, "sSizeOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_266),info))));
                                                                            _inf_value25->_protocol_obj=_inf_obj_value25;
                                                                            _inf_value25->finalize=(void*)sSizeOfExpNode_finalize;
                                                                            _inf_value25->clone=(void*)sSizeOfExpNode_clone;
                                                                            _inf_value25->compile=(void*)sSizeOfExpNode_compile;
                                                                            _inf_value25->sline=(void*)sNodeBase_sline;
                                                                            _inf_value25->sname=(void*)sNodeBase_sname;
                                                                            _inf_value25->terminated=(void*)sNodeBase_terminated;
                                                                            _inf_value25->kind=(void*)sSizeOfExpNode_kind;
                                                                            __result250__ = __result_obj__ = ((struct sNode*)(__right_value526=_inf_value25));
                                                                            if(exp_266) { exp_266 = come_decrement_ref_count2(exp_266, ((struct sNode*)exp_266)->finalize, ((struct sNode*)exp_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            come_call_finalizer3(__right_value521,sSizeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer3(__right_value522,sSizeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                            if(__right_value526) { __right_value526 = come_decrement_ref_count2(__right_value526, ((struct sNode*)__right_value526)->finalize, ((struct sNode*)__right_value526)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result250__;
                                                                            if(exp_266) { exp_266 = come_decrement_ref_count2(exp_266, ((struct sNode*)exp_266)->finalize, ((struct sNode*)exp_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(charp_operator_equals(buf,"typeof")) {
                                                                            paren_268=(_Bool)0;
                                                                            if(*info->p==40) {
                                                                                info->p++;
                                                                                skip_spaces_and_lf(info);
                                                                                paren_268=(_Bool)1;
                                                                            }
                                                                            is_type_name_flag_269=(_Bool)0;
                                                                            {
                                                                                p_270=info->p;
                                                                                sline_271=info->sline;
                                                                                if(xisalpha(*info->p)||*info->p==95) {
                                                                                    word_272=(char*)come_increment_ref_count(parse_word(info));
                                                                                    if(is_type_name(word_272,info)) {
                                                                                        is_type_name_flag_269=(_Bool)1;
                                                                                    }
                                                                                    word_272 = come_decrement_ref_count2(word_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                info->p=p_270;
                                                                                info->sline=sline_271;
                                                                            }
                                                                            if(is_type_name_flag_269) {
                                                                                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value528=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                type_273=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                                                                                name_274=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                                                                err_275=multiple_assign_var8->v3;
                                                                                come_call_finalizer3(__right_value528,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(!err_275) {
                                                                                    err_msg(info,"parse type");
                                                                                    exit(2);
                                                                                }
                                                                                if(paren_268&&*info->p==41) {
                                                                                    info->p++;
                                                                                    skip_spaces_and_lf(info);
                                                                                }
                                                                                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1474, "struct sNode");
                                                                                _inf_obj_value26=come_increment_ref_count(((struct sTypeOfNode*)(__right_value530=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(__right_value529=(struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 1474, "sTypeOfNode")))),(struct sType*)come_increment_ref_count(type_273),info))));
                                                                                _inf_value26->_protocol_obj=_inf_obj_value26;
                                                                                _inf_value26->finalize=(void*)sTypeOfNode_finalize;
                                                                                _inf_value26->clone=(void*)sTypeOfNode_clone;
                                                                                _inf_value26->compile=(void*)sTypeOfNode_compile;
                                                                                _inf_value26->sline=(void*)sNodeBase_sline;
                                                                                _inf_value26->sname=(void*)sNodeBase_sname;
                                                                                _inf_value26->terminated=(void*)sNodeBase_terminated;
                                                                                _inf_value26->kind=(void*)sTypeOfNode_kind;
                                                                                __result253__ = __result_obj__ = ((struct sNode*)(__right_value534=_inf_value26));
                                                                                come_call_finalizer3(type_273,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                name_274 = come_decrement_ref_count2(name_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                come_call_finalizer3(__right_value529,sTypeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer3(__right_value530,sTypeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(__right_value534) { __right_value534 = come_decrement_ref_count2(__right_value534, ((struct sNode*)__right_value534)->finalize, ((struct sNode*)__right_value534)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result253__;
                                                                                come_call_finalizer3(type_273,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                name_274 = come_decrement_ref_count2(name_274, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            else {
                                                                                exp_277=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                                                if(paren_268&&*info->p==41) {
                                                                                    info->p++;
                                                                                    skip_spaces_and_lf(info);
                                                                                }
                                                                                _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1486, "struct sNode");
                                                                                _inf_obj_value27=come_increment_ref_count(((struct sTypeOfExpNode*)(__right_value537=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(__right_value536=(struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 1486, "sTypeOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_277),info))));
                                                                                _inf_value27->_protocol_obj=_inf_obj_value27;
                                                                                _inf_value27->finalize=(void*)sTypeOfExpNode_finalize;
                                                                                _inf_value27->clone=(void*)sTypeOfExpNode_clone;
                                                                                _inf_value27->compile=(void*)sTypeOfExpNode_compile;
                                                                                _inf_value27->sline=(void*)sNodeBase_sline;
                                                                                _inf_value27->sname=(void*)sNodeBase_sname;
                                                                                _inf_value27->terminated=(void*)sNodeBase_terminated;
                                                                                _inf_value27->kind=(void*)sTypeOfExpNode_kind;
                                                                                __result256__ = __result_obj__ = ((struct sNode*)(__right_value541=_inf_value27));
                                                                                if(exp_277) { exp_277 = come_decrement_ref_count2(exp_277, ((struct sNode*)exp_277)->finalize, ((struct sNode*)exp_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                come_call_finalizer3(__right_value536,sTypeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer3(__right_value537,sTypeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                if(__right_value541) { __right_value541 = come_decrement_ref_count2(__right_value541, ((struct sNode*)__right_value541)->finalize, ((struct sNode*)__right_value541)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result256__;
                                                                                if(exp_277) { exp_277 = come_decrement_ref_count2(exp_277, ((struct sNode*)exp_277)->finalize, ((struct sNode*)exp_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                        }
                                                                        else {
                                                                            if(charp_operator_equals(buf,"_Alignof")) {
                                                                                expected_next_character(40,info);
                                                                                is_type_name_flag_279=(_Bool)0;
                                                                                {
                                                                                    p_280=info->p;
                                                                                    sline_281=info->sline;
                                                                                    if(xisalpha(*info->p)||*info->p==95) {
                                                                                        word_282=(char*)come_increment_ref_count(parse_word(info));
                                                                                        if(is_type_name(word_282,info)) {
                                                                                            is_type_name_flag_279=(_Bool)1;
                                                                                        }
                                                                                        word_282 = come_decrement_ref_count2(word_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    info->p=p_280;
                                                                                    info->sline=sline_281;
                                                                                }
                                                                                if(is_type_name_flag_279) {
                                                                                    multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value543=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                    type_283=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                                                                                    name_284=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                                                                                    err_285=multiple_assign_var9->v3;
                                                                                    come_call_finalizer3(__right_value543,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    if(!err_285) {
                                                                                        err_msg(info,"parse type");
                                                                                        exit(2);
                                                                                    }
                                                                                    expected_next_character(41,info);
                                                                                    _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1530, "struct sNode");
                                                                                    _inf_obj_value28=come_increment_ref_count(((struct sAlignOfNode*)(__right_value545=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(__right_value544=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1530, "sAlignOfNode")))),(struct sType*)come_increment_ref_count(type_283),info))));
                                                                                    _inf_value28->_protocol_obj=_inf_obj_value28;
                                                                                    _inf_value28->finalize=(void*)sAlignOfNode_finalize;
                                                                                    _inf_value28->clone=(void*)sAlignOfNode_clone;
                                                                                    _inf_value28->compile=(void*)sAlignOfNode_compile;
                                                                                    _inf_value28->sline=(void*)sNodeBase_sline;
                                                                                    _inf_value28->sname=(void*)sNodeBase_sname;
                                                                                    _inf_value28->terminated=(void*)sNodeBase_terminated;
                                                                                    _inf_value28->kind=(void*)sAlignOfNode_kind;
                                                                                    __result259__ = __result_obj__ = ((struct sNode*)(__right_value549=_inf_value28));
                                                                                    come_call_finalizer3(type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    name_284 = come_decrement_ref_count2(name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    come_call_finalizer3(__right_value544,sAlignOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer3(__right_value545,sAlignOfNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    if(__right_value549) { __right_value549 = come_decrement_ref_count2(__right_value549, ((struct sNode*)__right_value549)->finalize, ((struct sNode*)__right_value549)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result259__;
                                                                                    come_call_finalizer3(type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                    name_284 = come_decrement_ref_count2(name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                else {
                                                                                    exp_287=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                                                    expected_next_character(41,info);
                                                                                    _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1537, "struct sNode");
                                                                                    _inf_obj_value29=come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value552=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value551=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1537, "sAlignOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_287),info))));
                                                                                    _inf_value29->_protocol_obj=_inf_obj_value29;
                                                                                    _inf_value29->finalize=(void*)sAlignOfExpNode_finalize;
                                                                                    _inf_value29->clone=(void*)sAlignOfExpNode_clone;
                                                                                    _inf_value29->compile=(void*)sAlignOfExpNode_compile;
                                                                                    _inf_value29->sline=(void*)sNodeBase_sline;
                                                                                    _inf_value29->sname=(void*)sNodeBase_sname;
                                                                                    _inf_value29->terminated=(void*)sNodeBase_terminated;
                                                                                    _inf_value29->kind=(void*)sAlignOfExpNode_kind;
                                                                                    __result262__ = __result_obj__ = ((struct sNode*)(__right_value556=_inf_value29));
                                                                                    if(exp_287) { exp_287 = come_decrement_ref_count2(exp_287, ((struct sNode*)exp_287)->finalize, ((struct sNode*)exp_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    come_call_finalizer3(__right_value551,sAlignOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer3(__right_value552,sAlignOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                    if(__right_value556) { __right_value556 = come_decrement_ref_count2(__right_value556, ((struct sNode*)__right_value556)->finalize, ((struct sNode*)__right_value556)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result262__;
                                                                                    if(exp_287) { exp_287 = come_decrement_ref_count2(exp_287, ((struct sNode*)exp_287)->finalize, ((struct sNode*)exp_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                            }
                                                                            else {
                                                                                if(charp_operator_equals(buf,"__alignof__")) {
                                                                                    expected_next_character(40,info);
                                                                                    is_type_name_flag_289=(_Bool)0;
                                                                                    {
                                                                                        p_290=info->p;
                                                                                        sline_291=info->sline;
                                                                                        if(xisalpha(*info->p)||*info->p==95) {
                                                                                            word_292=(char*)come_increment_ref_count(parse_word(info));
                                                                                            if(is_type_name(word_292,info)) {
                                                                                                is_type_name_flag_289=(_Bool)1;
                                                                                            }
                                                                                            word_292 = come_decrement_ref_count2(word_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        info->p=p_290;
                                                                                        info->sline=sline_291;
                                                                                    }
                                                                                    if(is_type_name_flag_289) {
                                                                                        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value558=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                        type_293=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                                                                                        name_294=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                                                                                        err_295=multiple_assign_var10->v3;
                                                                                        come_call_finalizer3(__right_value558,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        if(!err_295) {
                                                                                            err_msg(info,"parse type");
                                                                                            exit(2);
                                                                                        }
                                                                                        expected_next_character(41,info);
                                                                                        _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1570, "struct sNode");
                                                                                        _inf_obj_value30=come_increment_ref_count(((struct sAlignOfNode2*)(__right_value560=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(__right_value559=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1570, "sAlignOfNode2")))),(struct sType*)come_increment_ref_count(type_293),info))));
                                                                                        _inf_value30->_protocol_obj=_inf_obj_value30;
                                                                                        _inf_value30->finalize=(void*)sAlignOfNode2_finalize;
                                                                                        _inf_value30->clone=(void*)sAlignOfNode2_clone;
                                                                                        _inf_value30->compile=(void*)sAlignOfNode2_compile;
                                                                                        _inf_value30->sline=(void*)sNodeBase_sline;
                                                                                        _inf_value30->sname=(void*)sNodeBase_sname;
                                                                                        _inf_value30->terminated=(void*)sNodeBase_terminated;
                                                                                        _inf_value30->kind=(void*)sAlignOfNode2_kind;
                                                                                        __result265__ = __result_obj__ = ((struct sNode*)(__right_value564=_inf_value30));
                                                                                        come_call_finalizer3(type_293,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        name_294 = come_decrement_ref_count2(name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        come_call_finalizer3(__right_value559,sAlignOfNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer3(__right_value560,sAlignOfNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        if(__right_value564) { __right_value564 = come_decrement_ref_count2(__right_value564, ((struct sNode*)__right_value564)->finalize, ((struct sNode*)__right_value564)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result265__;
                                                                                        come_call_finalizer3(type_293,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                        name_294 = come_decrement_ref_count2(name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    else {
                                                                                        exp_297=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                                                        expected_next_character(41,info);
                                                                                        _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1577, "struct sNode");
                                                                                        _inf_obj_value31=come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value567=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value566=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1577, "sAlignOfExpNode2")))),(struct sNode*)come_increment_ref_count(exp_297),info))));
                                                                                        _inf_value31->_protocol_obj=_inf_obj_value31;
                                                                                        _inf_value31->finalize=(void*)sAlignOfExpNode2_finalize;
                                                                                        _inf_value31->clone=(void*)sAlignOfExpNode2_clone;
                                                                                        _inf_value31->compile=(void*)sAlignOfExpNode2_compile;
                                                                                        _inf_value31->sline=(void*)sNodeBase_sline;
                                                                                        _inf_value31->sname=(void*)sNodeBase_sname;
                                                                                        _inf_value31->terminated=(void*)sNodeBase_terminated;
                                                                                        _inf_value31->kind=(void*)sAlignOfExpNode2_kind;
                                                                                        __result268__ = __result_obj__ = ((struct sNode*)(__right_value571=_inf_value31));
                                                                                        if(exp_297) { exp_297 = come_decrement_ref_count2(exp_297, ((struct sNode*)exp_297)->finalize, ((struct sNode*)exp_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        come_call_finalizer3(__right_value566,sAlignOfExpNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer3(__right_value567,sAlignOfExpNode2_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                        if(__right_value571) { __right_value571 = come_decrement_ref_count2(__right_value571, ((struct sNode*)__right_value571)->finalize, ((struct sNode*)__right_value571)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result268__;
                                                                                        if(exp_297) { exp_297 = come_decrement_ref_count2(exp_297, ((struct sNode*)exp_297)->finalize, ((struct sNode*)exp_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    if(charp_operator_equals(buf,"_Alignas")) {
                                                                                        expected_next_character(40,info);
                                                                                        is_type_name_flag_299=(_Bool)0;
                                                                                        {
                                                                                            p_300=info->p;
                                                                                            sline_301=info->sline;
                                                                                            if(xisalpha(*info->p)||*info->p==95) {
                                                                                                word_302=(char*)come_increment_ref_count(parse_word(info));
                                                                                                if(is_type_name(word_302,info)) {
                                                                                                    is_type_name_flag_299=(_Bool)1;
                                                                                                }
                                                                                                word_302 = come_decrement_ref_count2(word_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            info->p=p_300;
                                                                                            info->sline=sline_301;
                                                                                        }
                                                                                        if(is_type_name_flag_299) {
                                                                                            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value573=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                                                                                            type_303=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                                                                                            name_304=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                                                                                            err_305=multiple_assign_var11->v3;
                                                                                            come_call_finalizer3(__right_value573,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(!err_305) {
                                                                                                err_msg(info,"parse type");
                                                                                                exit(2);
                                                                                            }
                                                                                            expected_next_character(41,info);
                                                                                            _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1610, "struct sNode");
                                                                                            _inf_obj_value32=come_increment_ref_count(((struct sAlignAsNode*)(__right_value575=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(__right_value574=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 1610, "sAlignAsNode")))),(struct sType*)come_increment_ref_count(type_303),info))));
                                                                                            _inf_value32->_protocol_obj=_inf_obj_value32;
                                                                                            _inf_value32->finalize=(void*)sAlignAsNode_finalize;
                                                                                            _inf_value32->clone=(void*)sAlignAsNode_clone;
                                                                                            _inf_value32->compile=(void*)sAlignAsNode_compile;
                                                                                            _inf_value32->sline=(void*)sNodeBase_sline;
                                                                                            _inf_value32->sname=(void*)sNodeBase_sname;
                                                                                            _inf_value32->terminated=(void*)sNodeBase_terminated;
                                                                                            _inf_value32->kind=(void*)sAlignAsNode_kind;
                                                                                            __result271__ = __result_obj__ = ((struct sNode*)(__right_value579=_inf_value32));
                                                                                            come_call_finalizer3(type_303,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                            name_304 = come_decrement_ref_count2(name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            come_call_finalizer3(__right_value574,sAlignAsNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer3(__right_value575,sAlignAsNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(__right_value579) { __right_value579 = come_decrement_ref_count2(__right_value579, ((struct sNode*)__right_value579)->finalize, ((struct sNode*)__right_value579)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result271__;
                                                                                            come_call_finalizer3(type_303,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                                            name_304 = come_decrement_ref_count2(name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        else {
                                                                                            exp_307=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                                                                            expected_next_character(41,info);
                                                                                            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1617, "struct sNode");
                                                                                            _inf_obj_value33=come_increment_ref_count(((struct sAlignAsExpNode*)(__right_value582=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(__right_value581=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 1617, "sAlignAsExpNode")))),(struct sNode*)come_increment_ref_count(exp_307),info))));
                                                                                            _inf_value33->_protocol_obj=_inf_obj_value33;
                                                                                            _inf_value33->finalize=(void*)sAlignAsExpNode_finalize;
                                                                                            _inf_value33->clone=(void*)sAlignAsExpNode_clone;
                                                                                            _inf_value33->compile=(void*)sAlignAsExpNode_compile;
                                                                                            _inf_value33->sline=(void*)sNodeBase_sline;
                                                                                            _inf_value33->sname=(void*)sNodeBase_sname;
                                                                                            _inf_value33->terminated=(void*)sNodeBase_terminated;
                                                                                            _inf_value33->kind=(void*)sAlignAsExpNode_kind;
                                                                                            __result274__ = __result_obj__ = ((struct sNode*)(__right_value586=_inf_value33));
                                                                                            if(exp_307) { exp_307 = come_decrement_ref_count2(exp_307, ((struct sNode*)exp_307)->finalize, ((struct sNode*)exp_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            come_call_finalizer3(__right_value581,sAlignAsExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer3(__right_value582,sAlignAsExpNode_finalize, 0, 1, 0, 0, __result_obj__);
                                                                                            if(__right_value586) { __right_value586 = come_decrement_ref_count2(__right_value586, ((struct sNode*)__right_value586)->finalize, ((struct sNode*)__right_value586)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result274__;
                                                                                            if(exp_307) { exp_307 = come_decrement_ref_count2(exp_307, ((struct sNode*)exp_307)->finalize, ((struct sNode*)exp_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
                }
            }
        }
    }
    __result275__ = __result_obj__ = ((struct sNode*)(__right_value587=string_node_v20(buf,head,head_sline,info)));
    if(__right_value587) { __right_value587 = come_decrement_ref_count2(__right_value587, ((struct sNode*)__right_value587)->finalize, ((struct sNode*)__right_value587)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result275__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sNewNode_finalize(struct sNewNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
void* __result_obj__;
struct sNewNode* __result181__;
void* __right_value381 = (void*)0;
struct sNewNode* result_217;
void* __right_value382 = (void*)0;
char* __dec_obj115;
void* __right_value383 = (void*)0;
struct sType* __dec_obj116;
struct sNewNode* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result181__ = __result_obj__ = (void*)0;
        return __result181__;
    }
    result_217=(struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "sNewNode"));
    if(self!=((void*)0)) {
        result_217->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj115=result_217->sname;
        result_217->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj116=result_217->type;
        result_217->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result182__ = __result_obj__ = result_217;
    come_call_finalizer3(result_217,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result182__;
}

static void sTrueNode_finalize(struct sTrueNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
void* __result_obj__;
struct sTrueNode* __result184__;
void* __right_value387 = (void*)0;
struct sTrueNode* result_218;
void* __right_value388 = (void*)0;
char* __dec_obj117;
struct sTrueNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result184__ = __result_obj__ = (void*)0;
        return __result184__;
    }
    result_218=(struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "sTrueNode"));
    if(self!=((void*)0)) {
        result_218->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj117=result_218->sname;
        result_218->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result185__ = __result_obj__ = result_218;
    come_call_finalizer3(result_218,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result185__;
}

static void sFalseNode_finalize(struct sFalseNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
void* __result_obj__;
struct sFalseNode* __result187__;
void* __right_value392 = (void*)0;
struct sFalseNode* result_219;
void* __right_value393 = (void*)0;
char* __dec_obj118;
struct sFalseNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result187__ = __result_obj__ = (void*)0;
        return __result187__;
    }
    result_219=(struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "sFalseNode"));
    if(self!=((void*)0)) {
        result_219->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj118=result_219->sname;
        result_219->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result188__ = __result_obj__ = result_219;
    come_call_finalizer3(result_219,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result188__;
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
void* __result_obj__;
struct sDeleteNode* __result190__;
void* __right_value398 = (void*)0;
struct sDeleteNode* result_221;
void* __right_value399 = (void*)0;
char* __dec_obj119;
void* __right_value400 = (void*)0;
struct sNode* __dec_obj120;
struct sDeleteNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result190__ = __result_obj__ = (void*)0;
        return __result190__;
    }
    result_221=(struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "sDeleteNode"));
    if(self!=((void*)0)) {
        result_221->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj119=result_221->sname;
        result_221->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj120=result_221->node;
        result_221->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result191__ = __result_obj__ = result_221;
    come_call_finalizer3(result_221,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result191__;
}

static void sForceDeleteNode_finalize(struct sForceDeleteNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self){
void* __result_obj__;
struct sForceDeleteNode* __result193__;
void* __right_value405 = (void*)0;
struct sForceDeleteNode* result_223;
void* __right_value406 = (void*)0;
char* __dec_obj121;
void* __right_value407 = (void*)0;
struct sNode* __dec_obj122;
struct sForceDeleteNode* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result193__ = __result_obj__ = (void*)0;
        return __result193__;
    }
    result_223=(struct sForceDeleteNode*)come_increment_ref_count((struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "sForceDeleteNode_clone", 3, "sForceDeleteNode"));
    if(self!=((void*)0)) {
        result_223->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj121=result_223->sname;
        result_223->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj122=result_223->node;
        result_223->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count2(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result194__ = __result_obj__ = result_223;
    come_call_finalizer3(result_223,sForceDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result194__;
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
void* __result_obj__;
struct sBorrowNode* __result196__;
void* __right_value412 = (void*)0;
struct sBorrowNode* result_225;
void* __right_value413 = (void*)0;
char* __dec_obj123;
void* __right_value414 = (void*)0;
struct sNode* __dec_obj124;
struct sBorrowNode* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result196__ = __result_obj__ = (void*)0;
        return __result196__;
    }
    result_225=(struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "sBorrowNode"));
    if(self!=((void*)0)) {
        result_225->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj123=result_225->sname;
        result_225->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj124=result_225->node;
        result_225->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result197__ = __result_obj__ = result_225;
    come_call_finalizer3(result_225,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result197__;
}

static void sDelegateNode_finalize(struct sDelegateNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self){
void* __result_obj__;
struct sDelegateNode* __result199__;
void* __right_value419 = (void*)0;
struct sDelegateNode* result_227;
void* __right_value420 = (void*)0;
char* __dec_obj125;
void* __right_value421 = (void*)0;
struct sNode* __dec_obj126;
struct sDelegateNode* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result199__ = __result_obj__ = (void*)0;
        return __result199__;
    }
    result_227=(struct sDelegateNode*)come_increment_ref_count((struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "sDelegateNode_clone", 3, "sDelegateNode"));
    if(self!=((void*)0)) {
        result_227->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj125=result_227->sname;
        result_227->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj126=result_227->node;
        result_227->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result200__ = __result_obj__ = result_227;
    come_call_finalizer3(result_227,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result200__;
}

static void sShareNode_finalize(struct sShareNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

static struct sShareNode* sShareNode_clone(struct sShareNode* self){
void* __result_obj__;
struct sShareNode* __result202__;
void* __right_value426 = (void*)0;
struct sShareNode* result_229;
void* __right_value427 = (void*)0;
char* __dec_obj127;
void* __right_value428 = (void*)0;
struct sNode* __dec_obj128;
struct sShareNode* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result202__ = __result_obj__ = (void*)0;
        return __result202__;
    }
    result_229=(struct sShareNode*)come_increment_ref_count((struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "sShareNode_clone", 3, "sShareNode"));
    if(self!=((void*)0)) {
        result_229->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj127=result_229->sname;
        result_229->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj128=result_229->node;
        result_229->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result203__ = __result_obj__ = result_229;
    come_call_finalizer3(result_229,sShareNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result203__;
}

static void sCloneNode_finalize(struct sCloneNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
void* __result_obj__;
struct sCloneNode* __result205__;
void* __right_value433 = (void*)0;
struct sCloneNode* result_231;
void* __right_value434 = (void*)0;
char* __dec_obj129;
void* __right_value435 = (void*)0;
struct sNode* __dec_obj130;
struct sCloneNode* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result205__ = __result_obj__ = (void*)0;
        return __result205__;
    }
    result_231=(struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "sCloneNode"));
    if(self!=((void*)0)) {
        result_231->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj129=result_231->sname;
        result_231->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj130=result_231->node;
        result_231->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result206__ = __result_obj__ = result_231;
    come_call_finalizer3(result_231,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result206__;
}

static void sDupeNode_finalize(struct sDupeNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
void* __result_obj__;
struct sDupeNode* __result208__;
void* __right_value440 = (void*)0;
struct sDupeNode* result_233;
void* __right_value441 = (void*)0;
char* __dec_obj131;
void* __right_value442 = (void*)0;
struct sNode* __dec_obj132;
struct sDupeNode* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result208__ = __result_obj__ = (void*)0;
        return __result208__;
    }
    result_233=(struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "sDupeNode"));
    if(self!=((void*)0)) {
        result_233->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj131=result_233->sname;
        result_233->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj132=result_233->node;
        result_233->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result209__ = __result_obj__ = result_233;
    come_call_finalizer3(result_233,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result209__;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
void* __result_obj__;
struct sDummyHeapNode* __result211__;
void* __right_value447 = (void*)0;
struct sDummyHeapNode* result_235;
void* __right_value448 = (void*)0;
char* __dec_obj133;
void* __right_value449 = (void*)0;
struct sNode* __dec_obj134;
struct sDummyHeapNode* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result211__ = __result_obj__ = (void*)0;
        return __result211__;
    }
    result_235=(struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "sDummyHeapNode"));
    if(self!=((void*)0)) {
        result_235->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj133=result_235->sname;
        result_235->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj134=result_235->node;
        result_235->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result212__ = __result_obj__ = result_235;
    come_call_finalizer3(result_235,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result212__;
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
void* __result_obj__;
struct sGCIncNode* __result214__;
void* __right_value454 = (void*)0;
struct sGCIncNode* result_237;
void* __right_value455 = (void*)0;
char* __dec_obj135;
void* __right_value456 = (void*)0;
struct sNode* __dec_obj136;
struct sGCIncNode* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result214__ = __result_obj__ = (void*)0;
        return __result214__;
    }
    result_237=(struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "sGCIncNode"));
    if(self!=((void*)0)) {
        result_237->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj135=result_237->sname;
        result_237->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj136=result_237->node;
        result_237->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result215__ = __result_obj__ = result_237;
    come_call_finalizer3(result_237,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result215__;
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
void* __result_obj__;
struct sGCDecNode* __result217__;
void* __right_value461 = (void*)0;
struct sGCDecNode* result_239;
void* __right_value462 = (void*)0;
char* __dec_obj137;
void* __right_value463 = (void*)0;
struct sNode* __dec_obj138;
struct sGCDecNode* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result217__ = __result_obj__ = (void*)0;
        return __result217__;
    }
    result_239=(struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "sGCDecNode"));
    if(self!=((void*)0)) {
        result_239->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj137=result_239->sname;
        result_239->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj138=result_239->node;
        result_239->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result218__ = __result_obj__ = result_239;
    come_call_finalizer3(result_239,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result218__;
}

static void sIsHeap_finalize(struct sIsHeap* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
void* __result_obj__;
struct sIsHeap* __result220__;
void* __right_value469 = (void*)0;
struct sIsHeap* result_244;
void* __right_value470 = (void*)0;
char* __dec_obj139;
void* __right_value471 = (void*)0;
struct sType* __dec_obj140;
struct sIsHeap* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result220__ = __result_obj__ = (void*)0;
        return __result220__;
    }
    result_244=(struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "sIsHeap"));
    if(self!=((void*)0)) {
        result_244->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj139=result_244->sname;
        result_244->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj140=result_244->type;
        result_244->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result221__ = __result_obj__ = result_244;
    come_call_finalizer3(result_244,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    return __result221__;
}

static void sIsPointer_finalize(struct sIsPointer* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self){
void* __result_obj__;
struct sIsPointer* __result223__;
void* __right_value477 = (void*)0;
struct sIsPointer* result_249;
void* __right_value478 = (void*)0;
char* __dec_obj141;
void* __right_value479 = (void*)0;
struct sType* __dec_obj142;
struct sIsPointer* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result223__ = __result_obj__ = (void*)0;
        return __result223__;
    }
    result_249=(struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "sIsPointer_clone", 3, "sIsPointer"));
    if(self!=((void*)0)) {
        result_249->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj141=result_249->sname;
        result_249->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj142=result_249->type;
        result_249->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result224__ = __result_obj__ = result_249;
    come_call_finalizer3(result_249,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    return __result224__;
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
void* __result_obj__;
struct sSizeOfNode* __result245__;
void* __right_value516 = (void*)0;
struct sSizeOfNode* result_265;
void* __right_value517 = (void*)0;
char* __dec_obj149;
void* __right_value518 = (void*)0;
struct sType* __dec_obj150;
struct sSizeOfNode* __result246__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result245__ = __result_obj__ = (void*)0;
        return __result245__;
    }
    result_265=(struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "sSizeOfNode"));
    if(self!=((void*)0)) {
        result_265->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj149=result_265->sname;
        result_265->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj150=result_265->type;
        result_265->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result246__ = __result_obj__ = result_265;
    come_call_finalizer3(result_265,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result246__;
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
void* __result_obj__;
struct sSizeOfExpNode* __result248__;
void* __right_value523 = (void*)0;
struct sSizeOfExpNode* result_267;
void* __right_value524 = (void*)0;
char* __dec_obj151;
void* __right_value525 = (void*)0;
struct sNode* __dec_obj152;
struct sSizeOfExpNode* __result249__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result248__ = __result_obj__ = (void*)0;
        return __result248__;
    }
    result_267=(struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "sSizeOfExpNode"));
    if(self!=((void*)0)) {
        result_267->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj151=result_267->sname;
        result_267->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj152=result_267->exp;
        result_267->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result249__ = __result_obj__ = result_267;
    come_call_finalizer3(result_267,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result249__;
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
void* __result_obj__;
struct sTypeOfNode* __result251__;
void* __right_value531 = (void*)0;
struct sTypeOfNode* result_276;
void* __right_value532 = (void*)0;
char* __dec_obj153;
void* __right_value533 = (void*)0;
struct sType* __dec_obj154;
struct sTypeOfNode* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result251__ = __result_obj__ = (void*)0;
        return __result251__;
    }
    result_276=(struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "sTypeOfNode"));
    if(self!=((void*)0)) {
        result_276->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj153=result_276->sname;
        result_276->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj154=result_276->type;
        result_276->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result252__ = __result_obj__ = result_276;
    come_call_finalizer3(result_276,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result252__;
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
void* __result_obj__;
struct sTypeOfExpNode* __result254__;
void* __right_value538 = (void*)0;
struct sTypeOfExpNode* result_278;
void* __right_value539 = (void*)0;
char* __dec_obj155;
void* __right_value540 = (void*)0;
struct sNode* __dec_obj156;
struct sTypeOfExpNode* __result255__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result254__ = __result_obj__ = (void*)0;
        return __result254__;
    }
    result_278=(struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "sTypeOfExpNode"));
    if(self!=((void*)0)) {
        result_278->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj155=result_278->sname;
        result_278->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj156=result_278->exp;
        result_278->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result255__ = __result_obj__ = result_278;
    come_call_finalizer3(result_278,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result255__;
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
void* __result_obj__;
struct sAlignOfNode* __result257__;
void* __right_value546 = (void*)0;
struct sAlignOfNode* result_286;
void* __right_value547 = (void*)0;
char* __dec_obj157;
void* __right_value548 = (void*)0;
struct sType* __dec_obj158;
struct sAlignOfNode* __result258__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result257__ = __result_obj__ = (void*)0;
        return __result257__;
    }
    result_286=(struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "sAlignOfNode"));
    if(self!=((void*)0)) {
        result_286->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj157=result_286->sname;
        result_286->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj158=result_286->type;
        result_286->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result258__ = __result_obj__ = result_286;
    come_call_finalizer3(result_286,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result258__;
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
void* __result_obj__;
struct sAlignOfExpNode* __result260__;
void* __right_value553 = (void*)0;
struct sAlignOfExpNode* result_288;
void* __right_value554 = (void*)0;
char* __dec_obj159;
void* __right_value555 = (void*)0;
struct sNode* __dec_obj160;
struct sAlignOfExpNode* __result261__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result260__ = __result_obj__ = (void*)0;
        return __result260__;
    }
    result_288=(struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "sAlignOfExpNode"));
    if(self!=((void*)0)) {
        result_288->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj159=result_288->sname;
        result_288->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj160=result_288->exp;
        result_288->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result261__ = __result_obj__ = result_288;
    come_call_finalizer3(result_288,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result261__;
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
void* __result_obj__;
struct sAlignOfNode2* __result263__;
void* __right_value561 = (void*)0;
struct sAlignOfNode2* result_296;
void* __right_value562 = (void*)0;
char* __dec_obj161;
void* __right_value563 = (void*)0;
struct sType* __dec_obj162;
struct sAlignOfNode2* __result264__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result263__ = __result_obj__ = (void*)0;
        return __result263__;
    }
    result_296=(struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "sAlignOfNode2"));
    if(self!=((void*)0)) {
        result_296->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj161=result_296->sname;
        result_296->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj162=result_296->type;
        result_296->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result264__ = __result_obj__ = result_296;
    come_call_finalizer3(result_296,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    return __result264__;
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
void* __result_obj__;
struct sAlignOfExpNode2* __result266__;
void* __right_value568 = (void*)0;
struct sAlignOfExpNode2* result_298;
void* __right_value569 = (void*)0;
char* __dec_obj163;
void* __right_value570 = (void*)0;
struct sNode* __dec_obj164;
struct sAlignOfExpNode2* __result267__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result266__ = __result_obj__ = (void*)0;
        return __result266__;
    }
    result_298=(struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "sAlignOfExpNode2"));
    if(self!=((void*)0)) {
        result_298->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj163=result_298->sname;
        result_298->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj164=result_298->exp;
        result_298->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result267__ = __result_obj__ = result_298;
    come_call_finalizer3(result_298,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    return __result267__;
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
void* __result_obj__;
struct sAlignAsNode* __result269__;
void* __right_value576 = (void*)0;
struct sAlignAsNode* result_306;
void* __right_value577 = (void*)0;
char* __dec_obj165;
void* __right_value578 = (void*)0;
struct sType* __dec_obj166;
struct sAlignAsNode* __result270__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result269__ = __result_obj__ = (void*)0;
        return __result269__;
    }
    result_306=(struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "sAlignAsNode"));
    if(self!=((void*)0)) {
        result_306->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj165=result_306->sname;
        result_306->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj166=result_306->type;
        result_306->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj166,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result270__ = __result_obj__ = result_306;
    come_call_finalizer3(result_306,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result270__;
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
void* __result_obj__;
struct sAlignAsExpNode* __result272__;
void* __right_value583 = (void*)0;
struct sAlignAsExpNode* result_308;
void* __right_value584 = (void*)0;
char* __dec_obj167;
void* __right_value585 = (void*)0;
struct sNode* __dec_obj168;
struct sAlignAsExpNode* __result273__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result272__ = __result_obj__ = (void*)0;
        return __result272__;
    }
    result_308=(struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "sAlignAsExpNode"));
    if(self!=((void*)0)) {
        result_308->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj167=result_308->sname;
        result_308->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj168=result_308->exp;
        result_308->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result273__ = __result_obj__ = result_308;
    come_call_finalizer3(result_308,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result273__;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool come_c_309;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct sNode* _inf_value34;
struct sNothingNode* _inf_obj_value34;
void* __right_value592 = (void*)0;
struct sNode* __result278__;
void* __right_value593 = (void*)0;
struct sNode* __result279__;
memset(&__result_obj__, 0, sizeof(void*));
    if(charp_operator_equals(buf,"using")) {
        if(parsecmp("neo-c",info)) {
            info->p+=strlen("neo-c");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
        }
        else {
            if(parsecmp("c",info)||parsecmp("C",info)) {
                info->p+=strlen("c");
                skip_spaces_and_lf(info);
                if(*info->p==123) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_c_309=gComeC;
                    gComeC=(_Bool)1;
                    transpile_toplevel((_Bool)1,info);
                    gComeC=come_c_309;
                }
                else {
                    gComeC=(_Bool)1;
                }
            }
            else {
                if(parsecmp("gc",info)) {
                    info->p+=strlen("gc");
                    skip_spaces_and_lf(info);
                }
                else {
                    if(parsecmp("no-gc",info)) {
                        info->p+=strlen("no-gc");
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(parsecmp("unsafe",info)) {
                            info->p+=strlen("unsafe");
                            skip_spaces_and_lf(info);
                        }
                        else {
                            err_msg(info,"invalid using");
                            exit(2);
                        }
                    }
                }
            }
        }
        _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1669, "struct sNode");
        _inf_obj_value34=come_increment_ref_count(((struct sNothingNode*)(__right_value589=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value588=(struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "21obj.c", 1669, "sNothingNode")))),info))));
        _inf_value34->_protocol_obj=_inf_obj_value34;
        _inf_value34->finalize=(void*)sNothingNode_finalize;
        _inf_value34->clone=(void*)sNothingNode_clone;
        _inf_value34->compile=(void*)sNothingNode_compile;
        _inf_value34->sline=(void*)sNodeBase_sline;
        _inf_value34->sname=(void*)sNodeBase_sname;
        _inf_value34->terminated=(void*)sNodeBase_terminated;
        _inf_value34->kind=(void*)sNothingNode_kind;
        __result278__ = __result_obj__ = ((struct sNode*)(__right_value592=_inf_value34));
        come_call_finalizer3(__right_value588,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value589,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value592) { __right_value592 = come_decrement_ref_count2(__right_value592, ((struct sNode*)__right_value592)->finalize, ((struct sNode*)__right_value592)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result278__;
    }
    __result279__ = __result_obj__ = ((struct sNode*)(__right_value593=top_level_v93(buf,head,head_sline,info)));
    if(__right_value593) { __right_value593 = come_decrement_ref_count2(__right_value593, ((struct sNode*)__right_value593)->finalize, ((struct sNode*)__right_value593)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result279__;
}

static void sNothingNode_finalize(struct sNothingNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self){
void* __result_obj__;
struct sNothingNode* __result276__;
void* __right_value590 = (void*)0;
struct sNothingNode* result_310;
void* __right_value591 = (void*)0;
char* __dec_obj169;
struct sNothingNode* __result277__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result276__ = __result_obj__ = (void*)0;
        return __result276__;
    }
    result_310=(struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "sNothingNode_clone", 3, "sNothingNode"));
    if(self!=((void*)0)) {
        result_310->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj169=result_310->sname;
        result_310->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result277__ = __result_obj__ = result_310;
    come_call_finalizer3(result_310,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result277__;
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* __right_value594 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var12;
struct sType* type3_311;
char* name2_312;
_Bool err_313;
void* __right_value595 = (void*)0;
struct sType* inf_type_314;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct sNode* _inf_value35;
struct sImplementsNode* _inf_obj_value35;
void* __right_value602 = (void*)0;
struct sNode* __result282__;
void* __right_value603 = (void*)0;
struct sNode* __result283__;
memset(&__result_obj__, 0, sizeof(void*));
    if(parsecmp("implements",info)) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var12=((struct tuple3$3sTypephcharphbool*)(__right_value594=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3_311=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
        name2_312=(char*)come_increment_ref_count(multiple_assign_var12->v2);
        err_313=multiple_assign_var12->v3;
        come_call_finalizer3(__right_value594,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(!err_313) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        inf_type_314=(struct sType*)come_increment_ref_count(sType_clone(type3_311));
        _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1689, "struct sNode");
        _inf_obj_value35=come_increment_ref_count(((struct sImplementsNode*)(__right_value597=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value596=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1689, "sImplementsNode")))),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_314),info))));
        _inf_value35->_protocol_obj=_inf_obj_value35;
        _inf_value35->finalize=(void*)sImplementsNode_finalize;
        _inf_value35->clone=(void*)sImplementsNode_clone;
        _inf_value35->compile=(void*)sImplementsNode_compile;
        _inf_value35->sline=(void*)sNodeBase_sline;
        _inf_value35->sname=(void*)sNodeBase_sname;
        _inf_value35->terminated=(void*)sNodeBase_terminated;
        _inf_value35->kind=(void*)sImplementsNode_kind;
        __result282__ = __result_obj__ = ((struct sNode*)(__right_value602=_inf_value35));
        come_call_finalizer3(type3_311,sType_finalize, 0, 0, 0, 0, (void*)0);
        name2_312 = come_decrement_ref_count2(name2_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(inf_type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(__right_value596,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value597,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value602) { __right_value602 = come_decrement_ref_count2(__right_value602, ((struct sNode*)__right_value602)->finalize, ((struct sNode*)__right_value602)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result282__;
        come_call_finalizer3(type3_311,sType_finalize, 0, 0, 0, 0, (void*)0);
        name2_312 = come_decrement_ref_count2(name2_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(inf_type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(*info->p==64) {
            info->p++;
            while(xisalnum(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
        }
    }
    __result283__ = __result_obj__ = ((struct sNode*)(__right_value603=post_position_operator_v19((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(__right_value603) { __right_value603 = come_decrement_ref_count2(__right_value603, ((struct sNode*)__right_value603)->finalize, ((struct sNode*)__right_value603)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result283__;
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        if(self->obj_exp) { self->obj_exp = come_decrement_ref_count2(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(self!=((void*)0)&&self->inf_type!=((void*)0)) {
        come_call_finalizer3(self->inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
void* __result_obj__;
struct sImplementsNode* __result280__;
void* __right_value598 = (void*)0;
struct sImplementsNode* result_315;
void* __right_value599 = (void*)0;
char* __dec_obj170;
void* __right_value600 = (void*)0;
struct sNode* __dec_obj171;
void* __right_value601 = (void*)0;
struct sType* __dec_obj172;
struct sImplementsNode* __result281__;
memset(&__result_obj__, 0, sizeof(void*));
    if(self==(void*)0) {
        __result280__ = __result_obj__ = (void*)0;
        return __result280__;
    }
    result_315=(struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "sImplementsNode"));
    if(self!=((void*)0)) {
        result_315->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj170=result_315->sname;
        result_315->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        __dec_obj171=result_315->obj_exp;
        result_315->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp));
        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->inf_type!=((void*)0)) {
        __dec_obj172=result_315->inf_type;
        result_315->inf_type=(struct sType*)come_increment_ref_count(sType_clone(self->inf_type));
        come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result281__ = __result_obj__ = result_315;
    come_call_finalizer3(result_315,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result281__;
}

