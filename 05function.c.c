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
    _Bool inhibits_output_code2;
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
struct sSemicolonNode
{
    int sline;
    char* sname;
};
struct sLambdaNode
{
    int sline;
    char* sname;
    struct sFun* mFun;
};
struct sFunNode
{
    int sline;
    char* sname;
    struct sFun* mFun;
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
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
struct sNode* parse_normal_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
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
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info);
char* sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);
char* sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void CVALUE_finalize(struct CVALUE* self);
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
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);
char* sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
void arrange_stack(struct sInfo* info, int top);
int expected_next_character(char c, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
char* parse_attribute(struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
int transpile_v5(struct sInfo* info);
static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item);
static void map$2charphsFunph_rehash(struct map$2charphsFunph* self);
static char* map$2charphsFunph_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self);
static char* map$2charphsFunph_next(struct map$2charphsFunph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
_Bool is_type_name(char* buf, struct sInfo* info);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static void sLambdaNode_finalize(struct sLambdaNode* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item);
static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self);
static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static void sFunNode_finalize(struct sFunNode* self);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
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
void* __result_obj__=(void*)0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result1__;
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2111, "buffer"))))));
    come_call_finalizer3(__right_value0,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = __result_obj__ = result_0;
    come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result1__;
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_1;
struct buffer* __result2__;
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2118, "buffer"))))));
    come_call_finalizer3(__right_value2,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    __result2__ = __result_obj__ = result_1;
    come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result2__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_2;
struct buffer* __result3__;
    result_2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2125, "buffer"))))));
    come_call_finalizer3(__right_value4,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    __result3__ = __result_obj__ = result_2;
    come_call_finalizer3(result_2,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result3__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_3;
struct buffer* __result4__;
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2132, "buffer"))))));
    come_call_finalizer3(__right_value6,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    __result4__ = __result_obj__ = result_3;
    come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result4__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_4;
struct buffer* __result5__;
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2139, "buffer"))))));
    come_call_finalizer3(__right_value8,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    __result5__ = __result_obj__ = result_4;
    come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result5__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_5;
struct buffer* __result6__;
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2146, "buffer"))))));
    come_call_finalizer3(__right_value10,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    __result6__ = __result_obj__ = result_5;
    come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result6__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
struct smart_pointer$1char* result_6;
void* __right_value13 = (void*)0;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result7__;
    result_6=(struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2162, "smart_pointer$1char"));
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(buffer_clone(self));
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_6->p=result_6->memory->buf;
    __result7__ = __result_obj__ = result_6;
    come_call_finalizer3(result_6,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value14 = (void*)0;
struct smart_pointer$1char* result_7;
void* __right_value15 = (void*)0;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result8__;
    result_7=(struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2172, "smart_pointer$1char"));
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(buffer_clone(self));
    come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_7->p=(char*)result_7->memory->buf;
    __result8__ = __result_obj__ = result_7;
    come_call_finalizer3(result_7,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result8__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value16 = (void*)0;
struct smart_pointer$1short* result_8;
void* __right_value17 = (void*)0;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result9__;
    result_8=(struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2182, "smart_pointer$1short"));
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(buffer_clone(self));
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_8->p=(short short*)result_8->memory->buf;
    __result9__ = __result_obj__ = result_8;
    come_call_finalizer3(result_8,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result9__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value18 = (void*)0;
struct smart_pointer$1int* result_9;
void* __right_value19 = (void*)0;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result10__;
    result_9=(struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2192, "smart_pointer$1int"));
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(buffer_clone(self));
    come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_9->p=(int*)result_9->memory->buf;
    __result10__ = __result_obj__ = result_9;
    come_call_finalizer3(result_9,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result10__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value20 = (void*)0;
struct smart_pointer$1long* result_10;
void* __right_value21 = (void*)0;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result11__;
    result_10=(struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2202, "smart_pointer$1long"));
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(buffer_clone(self));
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_10->p=(long*)result_10->memory->buf;
    __result11__ = __result_obj__ = result_10;
    come_call_finalizer3(result_10,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result11__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value22 = (void*)0;
void* __right_value25 = (void*)0;
struct smart_pointer$1char* __result13__;
    __result13__ = __result_obj__ = ((struct smart_pointer$1char*)(__right_value25=smart_pointer$1char_initialize((struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(__right_value22=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./neo-c.h", 2373, "smart_pointer$1char")))),self,len)));
    come_call_finalizer3(__right_value22,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value25,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result13__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value26 = (void*)0;
void* __right_value29 = (void*)0;
struct smart_pointer$1short* __result15__;
    __result15__ = __result_obj__ = ((struct smart_pointer$1short*)(__right_value29=smart_pointer$1short_initialize((struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(__right_value26=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./neo-c.h", 2378, "smart_pointer$1short")))),self,len)));
    come_call_finalizer3(__right_value26,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value29,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result15__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value30 = (void*)0;
void* __right_value33 = (void*)0;
struct smart_pointer$1int* __result17__;
    __result17__ = __result_obj__ = ((struct smart_pointer$1int*)(__right_value33=smart_pointer$1int_initialize((struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(__right_value30=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./neo-c.h", 2383, "smart_pointer$1int")))),self,len)));
    come_call_finalizer3(__right_value30,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value33,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result17__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value34 = (void*)0;
void* __right_value37 = (void*)0;
struct smart_pointer$1long* __result19__;
    __result19__ = __result_obj__ = ((struct smart_pointer$1long*)(__right_value37=smart_pointer$1long_initialize((struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(__right_value34=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./neo-c.h", 2388, "smart_pointer$1long")))),self,len)));
    come_call_finalizer3(__right_value34,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value37,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result19__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value38 = (void*)0;
void* __right_value41 = (void*)0;
struct smart_pointer$1float* __result21__;
    __result21__ = __result_obj__ = ((struct smart_pointer$1float*)(__right_value41=smart_pointer$1float_initialize((struct smart_pointer$1float*)come_increment_ref_count(((struct smart_pointer$1float*)(__right_value38=(struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./neo-c.h", 2393, "smart_pointer$1float")))),self,len)));
    come_call_finalizer3(__right_value38,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value41,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result21__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value42 = (void*)0;
void* __right_value45 = (void*)0;
struct smart_pointer$1double* __result23__;
    __result23__ = __result_obj__ = ((struct smart_pointer$1double*)(__right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(__right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./neo-c.h", 2398, "smart_pointer$1double")))),self,len)));
    come_call_finalizer3(__right_value42,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value45,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    return __result23__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value50 = (void*)0;
struct list$1char* __result26__;
    __result26__ = __result_obj__ = ((struct list$1char*)(__right_value50=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count(((struct list$1char*)(__right_value46=(struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./neo-c.h", 2403, "list$1char")))),len,self)));
    come_call_finalizer3(__right_value46,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value50,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result26__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value51 = (void*)0;
void* __right_value55 = (void*)0;
struct list$1short* __result29__;
    __result29__ = __result_obj__ = ((struct list$1short*)(__right_value55=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count(((struct list$1short*)(__right_value51=(struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./neo-c.h", 2408, "list$1short")))),len,self)));
    come_call_finalizer3(__right_value51,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value55,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result29__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value56 = (void*)0;
void* __right_value60 = (void*)0;
struct list$1int* __result32__;
    __result32__ = __result_obj__ = ((struct list$1int*)(__right_value60=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count(((struct list$1int*)(__right_value56=(struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./neo-c.h", 2413, "list$1int")))),len,self)));
    come_call_finalizer3(__right_value56,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value60,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result32__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value65 = (void*)0;
struct list$1long* __result35__;
    __result35__ = __result_obj__ = ((struct list$1long*)(__right_value65=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count(((struct list$1long*)(__right_value61=(struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./neo-c.h", 2418, "list$1long")))),len,self)));
    come_call_finalizer3(__right_value61,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value65,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result35__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value66 = (void*)0;
void* __right_value70 = (void*)0;
struct list$1float* __result38__;
    __result38__ = __result_obj__ = ((struct list$1float*)(__right_value70=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count(((struct list$1float*)(__right_value66=(struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./neo-c.h", 2423, "list$1float")))),len,self)));
    come_call_finalizer3(__right_value66,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value70,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result38__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long int len){
void* __result_obj__=(void*)0;
void* __right_value71 = (void*)0;
void* __right_value75 = (void*)0;
struct list$1double* __result41__;
    __result41__ = __result_obj__ = ((struct list$1double*)(__right_value75=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count(((struct list$1double*)(__right_value71=(struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./neo-c.h", 2428, "list$1double")))),len,self)));
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
void* __result_obj__=(void*)0;
void* __right_value76 = (void*)0;
char* __result42__;
    __result42__ = __result_obj__ = ((char*)(__right_value76=xsprintf(msg,self)));
    __right_value76 = come_decrement_ref_count2(__right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result42__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
char* __result43__;
    __result43__ = __result_obj__ = ((char*)(__right_value77=xsprintf(msg,self)));
    __right_value77 = come_decrement_ref_count2(__right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result43__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value78 = (void*)0;
char* __result44__;
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
void* __result_obj__=(void*)0;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
struct buffer* __dec_obj6;
struct smart_pointer$1char* __result12__;
    __dec_obj6=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"))))));
    come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value23,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(self->memory,memory,sizeof(char)*size);
    self->p=(char*)self->memory->buf;
    __result12__ = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    return __result12__;
}


static struct smart_pointer$1short* smart_pointer$1short_initialize(struct smart_pointer$1short* self, void* memory, int size){
void* __result_obj__=(void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct buffer* __dec_obj7;
struct smart_pointer$1short* __result14__;
    __dec_obj7=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"))))));
    come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value27,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(self->memory,memory,sizeof(short short)*size);
    self->p=(short short*)self->memory->buf;
    __result14__ = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    return __result14__;
}


static struct smart_pointer$1int* smart_pointer$1int_initialize(struct smart_pointer$1int* self, void* memory, int size){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* __dec_obj8;
struct smart_pointer$1int* __result16__;
    __dec_obj8=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"))))));
    come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value31,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(self->memory,memory,sizeof(int)*size);
    self->p=(int*)self->memory->buf;
    __result16__ = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    return __result16__;
}


static struct smart_pointer$1long* smart_pointer$1long_initialize(struct smart_pointer$1long* self, void* memory, int size){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* __dec_obj9;
struct smart_pointer$1long* __result18__;
    __dec_obj9=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"))))));
    come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value35,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(self->memory,memory,sizeof(long)*size);
    self->p=(long*)self->memory->buf;
    __result18__ = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    return __result18__;
}


static struct smart_pointer$1float* smart_pointer$1float_initialize(struct smart_pointer$1float* self, void* memory, int size){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* __dec_obj10;
struct smart_pointer$1float* __result20__;
    __dec_obj10=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"))))));
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
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* __dec_obj11;
struct smart_pointer$1double* __result22__;
    __dec_obj11=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 2214, "buffer"))))));
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
void* __result_obj__=(void*)0;
int i_11;
struct list$1char* __result25__;
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
void* __result_obj__=(void*)0;
void* __right_value47 = (void*)0;
struct list_item$1char* litem_12;
void* __right_value48 = (void*)0;
struct list_item$1char* litem_13;
void* __right_value49 = (void*)0;
struct list_item$1char* litem_14;
struct list$1char* __result24__;
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
void* __result_obj__=(void*)0;
int i_17;
struct list$1short* __result28__;
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
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
struct list_item$1short* litem_18;
void* __right_value53 = (void*)0;
struct list_item$1short* litem_19;
void* __right_value54 = (void*)0;
struct list_item$1short* litem_20;
struct list$1short* __result27__;
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
void* __result_obj__=(void*)0;
int i_23;
struct list$1int* __result31__;
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
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
struct list_item$1int* litem_24;
void* __right_value58 = (void*)0;
struct list_item$1int* litem_25;
void* __right_value59 = (void*)0;
struct list_item$1int* litem_26;
struct list$1int* __result30__;
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
void* __result_obj__=(void*)0;
int i_29;
struct list$1long* __result34__;
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
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
struct list_item$1long* litem_30;
void* __right_value63 = (void*)0;
struct list_item$1long* litem_31;
void* __right_value64 = (void*)0;
struct list_item$1long* litem_32;
struct list$1long* __result33__;
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
void* __result_obj__=(void*)0;
int i_35;
struct list$1float* __result37__;
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
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
struct list_item$1float* litem_36;
void* __right_value68 = (void*)0;
struct list_item$1float* litem_37;
void* __right_value69 = (void*)0;
struct list_item$1float* litem_38;
struct list$1float* __result36__;
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
void* __result_obj__=(void*)0;
int i_41;
struct list$1double* __result40__;
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
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
struct list_item$1double* litem_42;
void* __right_value73 = (void*)0;
struct list_item$1double* litem_43;
void* __right_value74 = (void*)0;
struct list_item$1double* litem_44;
struct list$1double* __result39__;
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










struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value79 = (void*)0;
struct sSemicolonNode* __result45__;
    ((struct sNodeBase*)(__right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result45__ = __result_obj__ = self;
    come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result45__;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
void* __right_value80 = (void*)0;
char* __result46__;
    __result46__ = __result_obj__ = ((char*)(__right_value80=__builtin_string("sSemicolonNode")));
    __right_value80 = come_decrement_ref_count2(__right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result46__;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
struct sLambdaNode* __result47__;
    ((struct sNodeBase*)(__right_value81=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value81,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mFun=fun;
    __result47__ = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result47__;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
char* __result48__;
    __result48__ = __result_obj__ = ((char*)(__right_value82=__builtin_string("sLambdaNode")));
    __right_value82 = come_decrement_ref_count2(__right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result48__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_47;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct sType* result_type_48;
void* __right_value85 = (void*)0;
int block_level_55;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
struct CVALUE* come_value_56;
void* __right_value88 = (void*)0;
char* __dec_obj12;
void* __right_value124 = (void*)0;
struct sType* __dec_obj36;
_Bool __result68__;
    come_fun_47=info->come_fun;
    info->come_fun=self->mFun;
    result_type_48=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value83=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "sType")))),"void*",(_Bool)0,info));
    come_call_finalizer3(__right_value83,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(!gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value85=make_define_var(result_type_48,"__result_obj__",(_Bool)0,info))));
        __right_value85 = come_decrement_ref_count2(__right_value85, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_55=info->block_level;
    info->block_level=0;
    if(self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_55;
    come_value_56=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(__right_value86=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "CVALUE"))))));
    come_call_finalizer3(__right_value86,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj12=come_value_56->c_value;
    come_value_56->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj36=come_value_56->type;
    come_value_56->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_56->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_56->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_56));
    info->come_fun=come_fun_47;
    __result68__ = (_Bool)1;
    come_call_finalizer3(result_type_48,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_56,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result68__;
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

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result49__;
void* __right_value89 = (void*)0;
struct sType* result_57;
void* __right_value96 = (void*)0;
struct list$1sTypeph* __dec_obj16;
void* __right_value99 = (void*)0;
struct tuple1$1sTypeph* __dec_obj18;
void* __right_value100 = (void*)0;
struct tuple1$1sTypeph* __dec_obj19;
void* __right_value101 = (void*)0;
char* __dec_obj20;
void* __right_value102 = (void*)0;
struct list$1sTypeph* __dec_obj21;
void* __right_value110 = (void*)0;
struct list$1sNodeph* __dec_obj25;
void* __right_value111 = (void*)0;
struct list$1sTypeph* __dec_obj26;
void* __right_value118 = (void*)0;
struct list$1charph* __dec_obj30;
void* __right_value119 = (void*)0;
struct tuple1$1sTypeph* __dec_obj31;
void* __right_value120 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value121 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value122 = (void*)0;
char* __dec_obj34;
void* __right_value123 = (void*)0;
char* __dec_obj35;
struct sType* __result66__;
    if(self==(void*)0) {
        __result49__ = __result_obj__ = (void*)0;
        return __result49__;
    }
    result_57=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_57->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mMultipleTypes!=((void*)0)) {
        __dec_obj16=result_57->mMultipleTypes;
        result_57->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mMultipleTypes));
        come_call_finalizer3(__dec_obj16,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj18=result_57->mNoSolvedGenericsType;
        result_57->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj18,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj19=result_57->mOriginalLoadVarType;
        result_57->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj19,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj20=result_57->mGenericsName;
        result_57->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj21=result_57->mGenericsTypes;
        result_57->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj21,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj25=result_57->mArrayNum;
        result_57->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_57->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj26=result_57->mParamTypes;
        result_57->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj30=result_57->mParamNames;
        result_57->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj30,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj31=result_57->mResultType;
        result_57->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj31,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_57->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj32=result_57->mAlignas;
        result_57->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_57->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result_57->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result_57->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result_57->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result_57->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result_57->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result_57->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result_57->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result_57->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result_57->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result_57->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result_57->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result_57->mImmutable=self->mImmutable;
    }
    if(self!=((void*)0)) {
        result_57->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result_57->mDummyHeap=self->mDummyHeap;
    }
    if(self!=((void*)0)) {
        result_57->mDelegate=self->mDelegate;
    }
    if(self!=((void*)0)) {
        result_57->mShare=self->mShare;
    }
    if(self!=((void*)0)) {
        result_57->mClone=self->mClone;
    }
    if(self!=((void*)0)) {
        result_57->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result_57->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result_57->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result_57->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result_57->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result_57->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(self!=((void*)0)) {
        result_57->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result_57->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj33=result_57->mSizeNum;
        result_57->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_57->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_57->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj34=result_57->mOriginalTypeName;
        result_57->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_57->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(self!=((void*)0)) {
        result_57->mFunctionParam=self->mFunctionParam;
    }
    if(self!=((void*)0)) {
        result_57->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result_57->mGenericsStruct=self->mGenericsStruct;
    }
    if(self!=((void*)0)) {
        result_57->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(self!=((void*)0)) {
        result_57->mComeMemCore=self->mComeMemCore;
    }
    if(self!=((void*)0)) {
        result_57->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result_57->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result_57->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj35=result_57->mAsmName;
        result_57->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_57->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)) {
        result_57->mLambdaArray=self->mLambdaArray;
    }
    if(self!=((void*)0)) {
        result_57->mNoNumberArray=self->mNoNumberArray;
    }
    __result66__ = __result_obj__ = result_57;
    come_call_finalizer3(result_57,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result66__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result50__;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1sTypeph* result_58;
struct list_item$1sTypeph* it_59;
void* __right_value95 = (void*)0;
struct list$1sTypeph* __result53__;
    if(self==((void*)0)) {
        __result50__ = __result_obj__ = ((void*)0);
        return __result50__;
    }
    result_58=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value90=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))));
    come_call_finalizer3(__right_value90,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    it_59=self->head;
    while(it_59!=((void*)0)) {
        list$1sTypeph_add(result_58,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value95=sType_clone(it_59->item)))));
        come_call_finalizer3(__right_value95,sType_finalize, 0, 1, 0, 0, __result_obj__);
        it_59=it_59->next;
    }
    __result53__ = __result_obj__ = result_58;
    come_call_finalizer3(result_58,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result53__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result51__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result51__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result51__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
struct list_item$1sTypeph* litem_60;
struct sType* __dec_obj13;
void* __right_value93 = (void*)0;
struct list_item$1sTypeph* litem_61;
struct sType* __dec_obj14;
void* __right_value94 = (void*)0;
struct list_item$1sTypeph* litem_62;
struct sType* __dec_obj15;
struct list$1sTypeph* __result52__;
    if(self->len==0) {
        litem_60=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value92=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
        come_call_finalizer3(__right_value92,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_60->prev=((void*)0);
        litem_60->next=((void*)0);
        __dec_obj13=litem_60->item;
        litem_60->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_60;
        self->head=litem_60;
    }
    else {
        if(self->len==1) {
            litem_61=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value93=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
            come_call_finalizer3(__right_value93,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_61->prev=self->head;
            litem_61->next=((void*)0);
            __dec_obj14=litem_61->item;
            litem_61->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj14,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_61;
            self->head->next=litem_61;
        }
        else {
            litem_62=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value94=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
            come_call_finalizer3(__right_value94,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_62->prev=self->tail;
            litem_62->next=((void*)0);
            __dec_obj15=litem_62->item;
            litem_62->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_62;
            self->tail=litem_62;
        }
    }
    self->len++;
    __result52__ = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result52__;
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_63;
struct list_item$1sTypeph* prev_it_64;
    it_63=self->head;
    while(it_63!=((void*)0)) {
        prev_it_64=it_63;
        it_63=it_63->next;
        come_call_finalizer3(prev_it_64,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result54__;
void* __right_value97 = (void*)0;
struct tuple1$1sTypeph* result_65;
void* __right_value98 = (void*)0;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result55__;
    if(self==(void*)0) {
        __result54__ = __result_obj__ = (void*)0;
        return __result54__;
    }
    result_65=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj17=result_65->v1;
        result_65->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result55__ = __result_obj__ = result_65;
    come_call_finalizer3(result_65,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    return __result55__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result56__;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
struct list$1sNodeph* result_66;
struct list_item$1sNodeph* it_67;
void* __right_value109 = (void*)0;
struct list$1sNodeph* __result61__;
    if(self==((void*)0)) {
        __result56__ = __result_obj__ = ((void*)0);
        return __result56__;
    }
    result_66=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value103=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))));
    come_call_finalizer3(__right_value103,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    it_67=self->head;
    while(it_67!=((void*)0)) {
        list$1sNodeph_add(result_66,(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value109=sNode_clone(it_67->item)))));
        if(__right_value109) { __right_value109 = come_decrement_ref_count2(__right_value109, ((struct sNode*)__right_value109)->finalize, ((struct sNode*)__right_value109)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        it_67=it_67->next;
    }
    __result61__ = __result_obj__ = result_66;
    come_call_finalizer3(result_66,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result61__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result57__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result57__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result57__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1sNodeph* litem_68;
struct sNode* __dec_obj22;
void* __right_value106 = (void*)0;
struct list_item$1sNodeph* litem_69;
struct sNode* __dec_obj23;
void* __right_value107 = (void*)0;
struct list_item$1sNodeph* litem_70;
struct sNode* __dec_obj24;
struct list$1sNodeph* __result58__;
    if(self->len==0) {
        litem_68=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value105=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
        come_call_finalizer3(__right_value105,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_68->prev=((void*)0);
        litem_68->next=((void*)0);
        __dec_obj22=litem_68->item;
        litem_68->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_68;
        self->head=litem_68;
    }
    else {
        if(self->len==1) {
            litem_69=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value106=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value106,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_69->prev=self->head;
            litem_69->next=((void*)0);
            __dec_obj23=litem_69->item;
            litem_69->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_69;
            self->head->next=litem_69;
        }
        else {
            litem_70=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value107=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value107,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_70->prev=self->tail;
            litem_70->next=((void*)0);
            __dec_obj24=litem_70->item;
            litem_70->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_70;
            self->tail=litem_70;
        }
    }
    self->len++;
    __result58__ = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result58__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result59__;
void* __right_value108 = (void*)0;
struct sNode* result_71;
struct sNode* __result60__;
    if(self==(void*)0) {
        __result59__ = __result_obj__ = (void*)0;
        return __result59__;
    }
    result_71=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_71->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_71->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_71->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_71->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_71->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_71->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_71->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result_71->kind=self->kind;
    }
    __result60__ = __result_obj__ = result_71;
    if(result_71) { result_71 = come_decrement_ref_count2(result_71, ((struct sNode*)result_71)->finalize, ((struct sNode*)result_71)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result60__;
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_72;
struct list_item$1sNodeph* prev_it_73;
    it_72=self->head;
    while(it_72!=((void*)0)) {
        prev_it_73=it_72;
        it_72=it_72->next;
        come_call_finalizer3(prev_it_73,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result62__;
void* __right_value112 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1charph* result_74;
struct list_item$1charph* it_75;
void* __right_value117 = (void*)0;
struct list$1charph* __result65__;
    if(self==((void*)0)) {
        __result62__ = __result_obj__ = ((void*)0);
        return __result62__;
    }
    result_74=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value112=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))));
    come_call_finalizer3(__right_value112,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    it_75=self->head;
    while(it_75!=((void*)0)) {
        list$1charph_add(result_74,(char*)come_increment_ref_count(((char*)(__right_value117=string_clone(it_75->item)))));
        __right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        it_75=it_75->next;
    }
    __result65__ = __result_obj__ = result_74;
    come_call_finalizer3(result_74,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result65__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result63__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result63__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result63__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
struct list_item$1charph* litem_76;
char* __dec_obj27;
void* __right_value115 = (void*)0;
struct list_item$1charph* litem_77;
char* __dec_obj28;
void* __right_value116 = (void*)0;
struct list_item$1charph* litem_78;
char* __dec_obj29;
struct list$1charph* __result64__;
    if(self->len==0) {
        litem_76=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value114=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
        come_call_finalizer3(__right_value114,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_76->prev=((void*)0);
        litem_76->next=((void*)0);
        __dec_obj27=litem_76->item;
        litem_76->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_76;
        self->head=litem_76;
    }
    else {
        if(self->len==1) {
            litem_77=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value115=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
            come_call_finalizer3(__right_value115,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_77->prev=self->head;
            litem_77->next=((void*)0);
            __dec_obj28=litem_77->item;
            litem_77->item=(char*)come_increment_ref_count(item);
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_77;
            self->head->next=litem_77;
        }
        else {
            litem_78=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value116=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
            come_call_finalizer3(__right_value116,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_78->prev=self->tail;
            litem_78->next=((void*)0);
            __dec_obj29=litem_78->item;
            litem_78->item=(char*)come_increment_ref_count(item);
            __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_78;
            self->tail=litem_78;
        }
    }
    self->len++;
    __result64__ = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result64__;
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_79;
struct list_item$1charph* prev_it_80;
    it_79=self->head;
    while(it_79!=((void*)0)) {
        prev_it_80=it_79;
        it_79=it_79->next;
        come_call_finalizer3(prev_it_80,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct list_item$1CVALUEph* litem_81;
struct CVALUE* __dec_obj37;
void* __right_value126 = (void*)0;
struct list_item$1CVALUEph* litem_82;
struct CVALUE* __dec_obj38;
void* __right_value127 = (void*)0;
struct list_item$1CVALUEph* litem_83;
struct CVALUE* __dec_obj39;
struct list$1CVALUEph* __result67__;
    if(self->len==0) {
        litem_81=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value125=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 219, "list_item$1CVALUEph"))));
        come_call_finalizer3(__right_value125,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_81->prev=((void*)0);
        litem_81->next=((void*)0);
        __dec_obj37=litem_81->item;
        litem_81->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj37,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_81;
        self->head=litem_81;
    }
    else {
        if(self->len==1) {
            litem_82=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value126=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 229, "list_item$1CVALUEph"))));
            come_call_finalizer3(__right_value126,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_82->prev=self->head;
            litem_82->next=((void*)0);
            __dec_obj38=litem_82->item;
            litem_82->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj38,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_82;
            self->head->next=litem_82;
        }
        else {
            litem_83=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value127=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./neo-c.h", 239, "list_item$1CVALUEph"))));
            come_call_finalizer3(__right_value127,list_item$1CVALUEphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_83->prev=self->tail;
            litem_83->next=((void*)0);
            __dec_obj39=litem_83->item;
            litem_83->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj39,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_83;
            self->tail=litem_83;
        }
    }
    self->len++;
    __result67__ = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result67__;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct sFun* __dec_obj40;
struct sFunNode* __result69__;
    ((struct sNodeBase*)(__right_value128=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value128,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj40=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj40,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result69__ = __result_obj__ = self;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result69__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value129 = (void*)0;
char* __result70__;
    __result70__ = __result_obj__ = ((char*)(__right_value129=__builtin_string("sFunNode")));
    __right_value129 = come_decrement_ref_count2(__right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result70__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_84;
char* come_fun_name_85;
void* __right_value130 = (void*)0;
char* __dec_obj41;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct sType* result_type_86;
void* __right_value133 = (void*)0;
int block_level_87;
void* __right_value134 = (void*)0;
char* __dec_obj42;
_Bool __result71__;
    come_fun_84=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_85=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj41=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(self->mFun->mBlock) {
        if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_86=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value131=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "sType")))),"void*",(_Bool)0,info));
        come_call_finalizer3(__right_value131,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(!gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value133=make_define_var(result_type_86,"__result_obj__",(_Bool)0,info))));
            __right_value133 = come_decrement_ref_count2(__right_value133, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_87=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0);
        info->block_level=block_level_87;
        if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value134=xsprintf("come_heap_final();\n"))));
            __right_value134 = come_decrement_ref_count2(__right_value134, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_86,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_84;
    __dec_obj42=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_85);
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result71__ = (_Bool)1;
    come_fun_name_85 = come_decrement_ref_count2(come_fun_name_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result71__;
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

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
struct list$1sNodeph* __dec_obj43;
struct sBlock* __result72__;
    __dec_obj43=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value135=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 128, "list$1sNodeph"))))));
    come_call_finalizer3(__dec_obj43,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value135,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    __result72__ = __result_obj__ = self;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result72__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct sType* __dec_obj44;
void* __right_value138 = (void*)0;
struct list$1charph* __dec_obj45;
void* __right_value139 = (void*)0;
struct list$1charph* __dec_obj46;
char* __dec_obj47;
struct sType* __dec_obj48;
struct list$1sTypeph* __dec_obj49;
struct list$1charph* __dec_obj50;
struct list$1charph* __dec_obj51;
char* __dec_obj52;
void* __right_value140 = (void*)0;
char* __dec_obj53;
struct sGenericsFun* __result73__;
    __dec_obj44=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(sType_clone(impl_type));
    come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj45=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_type_names));
    come_call_finalizer3(__dec_obj45,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj46=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(method_generics_type_names));
    come_call_finalizer3(__dec_obj46,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj47=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj48=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj49=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj49,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj50=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj50,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj51=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj51,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj52=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj53=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    __result73__ = __result_obj__ = self;
    come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(impl_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result73__;
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

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
struct sBlock* result_88;
int block_level_89;
int sline_90;
char* sname_91;
void* __right_value143 = (void*)0;
struct sNode* node_92;
void* __right_value144 = (void*)0;
char* __dec_obj54;
struct sNode* node_96;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value152 = (void*)0;
struct sNode* __dec_obj59;
void* __right_value153 = (void*)0;
struct sNode* __dec_obj60;
char* p_98;
char* head_99;
void* __right_value154 = (void*)0;
char* source_100;
void* __right_value155 = (void*)0;
struct sNode* node_101;
struct sBlock* __result77__;
node_96 = (void*)0;
    result_88=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count(((struct sBlock*)(__right_value141=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 158, "sBlock")))),info));
    come_call_finalizer3(__right_value141,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
    block_level_89=info->block_level;
    if(!no_block_level) {
        info->block_level++;
    }
    if(*info->p==123) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            parse_sharp_v5(info);
            if(*info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            sline_90=info->sline;
            sname_91=info->sname;
            node_92=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj54=info->sname;
            info->sname=(char*)come_increment_ref_count(node_92->sname(node_92->_protocol_obj));
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_92->sline(node_92->_protocol_obj);
            if(node_92==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_88->mNodes,(struct sNode*)come_increment_ref_count(node_92));
            parse_sharp_v5(info);
            if(node_92->terminated(node_92->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            if(*info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                if(node_92) { node_92 = come_decrement_ref_count2(node_92, ((struct sNode*)node_92)->finalize, ((struct sNode*)node_92)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            if(node_92) { node_92 = come_decrement_ref_count2(node_92, ((struct sNode*)node_92)->finalize, ((struct sNode*)node_92)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        parse_sharp_v5(info);
        if(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 226, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sSemicolonNode*)(__right_value149=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value148=(struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 226, "sSemicolonNode")))),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj59=node_96;
            node_96=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
            come_call_finalizer3(__right_value148,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value149,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj60=node_96;
            node_96=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
            parse_sharp_v5(info);
            if(node_96==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            if(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
        list$1sNodeph_push_back(result_88->mNodes,(struct sNode*)come_increment_ref_count(node_96));
        if(node_96) { node_96 = come_decrement_ref_count2(node_96, ((struct sNode*)node_96)->finalize, ((struct sNode*)node_96)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(return_self_at_last) {
        p_98=info->p;
        head_99=info->head;
        source_100=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_100;
        info->head=source_100;
        node_101=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(node_101==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_88->mNodes,(struct sNode*)come_increment_ref_count(node_101));
        info->p=p_98;
        info->head=head_99;
        source_100 = come_decrement_ref_count2(source_100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_101) { node_101 = come_decrement_ref_count2(node_101, ((struct sNode*)node_101)->finalize, ((struct sNode*)node_101)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_89;
    __result77__ = __result_obj__ = result_88;
    come_call_finalizer3(result_88,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result77__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value145 = (void*)0;
struct list_item$1sNodeph* litem_93;
struct sNode* __dec_obj55;
void* __right_value146 = (void*)0;
struct list_item$1sNodeph* litem_94;
struct sNode* __dec_obj56;
void* __right_value147 = (void*)0;
struct list_item$1sNodeph* litem_95;
struct sNode* __dec_obj57;
struct list$1sNodeph* __result74__;
    if(self->len==0) {
        litem_93=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value145=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 219, "list_item$1sNodeph"))));
        come_call_finalizer3(__right_value145,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_93->prev=((void*)0);
        litem_93->next=((void*)0);
        __dec_obj55=litem_93->item;
        litem_93->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_93;
        self->head=litem_93;
    }
    else {
        if(self->len==1) {
            litem_94=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value146=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 229, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value146,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_94->prev=self->head;
            litem_94->next=((void*)0);
            __dec_obj56=litem_94->item;
            litem_94->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_94;
            self->head->next=litem_94;
        }
        else {
            litem_95=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value147=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 239, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value147,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_95->prev=self->tail;
            litem_95->next=((void*)0);
            __dec_obj57=litem_95->item;
            litem_95->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_95;
            self->tail=litem_95;
        }
    }
    self->len++;
    __result74__ = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result74__;
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result75__;
void* __right_value150 = (void*)0;
struct sSemicolonNode* result_97;
void* __right_value151 = (void*)0;
char* __dec_obj58;
struct sSemicolonNode* __result76__;
    if(self==(void*)0) {
        __result75__ = __result_obj__ = (void*)0;
        return __result75__;
    }
    result_97=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "sSemicolonNode"));
    if(self!=((void*)0)) {
        result_97->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj58=result_97->sname;
        result_97->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result76__ = __result_obj__ = result_97;
    come_call_finalizer3(result_97,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result76__;
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block){
_Bool inhibits_output_code_102;
struct sVarTable* old_table_103;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
struct sVarTable* __dec_obj61;
struct sVarTable* current_loop_vtable_104;
struct list$1sTypeph* param_types__105;
struct list$1charph* param_names__106;
int i_107;
struct list$1charph* o2_saved_108;
char* name_111;
void* __right_value158 = (void*)0;
struct sType* type_114;
void* __right_value159 = (void*)0;
int block_level_118;
int i_119;
struct list$1sNodeph* o2_saved_120;
struct sNode* node_123;
struct list$1sRightValueObjectph* right_value_objects_126;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj62;
char* __dec_obj63;
char* __dec_obj64;
char* __dec_obj65;
int stack_num_before_131;
int sline_132;
void* __right_value162 = (void*)0;
char* sname_133;
void* __right_value163 = (void*)0;
char* __dec_obj66;
void* __right_value164 = (void*)0;
char* __dec_obj67;
struct list$1sRightValueObjectph* __dec_obj68;
memset(&i_107, 0, sizeof(int));
memset(&i_119, 0, sizeof(int));
    if(info->output_header_file) {
        return 0;
    }
    inhibits_output_code_102=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_103=info->lv_table;
    if(!no_var_table) {
        __dec_obj61=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(__right_value156=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 284, "sVarTable")))),(_Bool)0,old_table_103));
        come_call_finalizer3(__dec_obj61,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value156,sVarTable_finalize, 0, 1, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_104=info->current_loop_vtable;
    if(loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__105=info->param_types;
    param_names__106=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(param_types&&param_names) {
        for(        o2_saved_108=(param_names),name_111=list$1charph_begin((o2_saved_108));        !list$1charph_end((o2_saved_108));        name_111=list$1charph_next((o2_saved_108))        ){
            type_114=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types,i_107), "05function.c", 302, 0))));
            type_114->mFunctionParam=(_Bool)1;
            type_114->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_111,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value159=sType_clone(type_114)))),info);
            come_call_finalizer3(__right_value159,sType_finalize, 0, 1, 0, 0, (void*)0);
            i_107++;
            come_call_finalizer3(type_114,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_118=info->block_level;
    if(!no_var_table) {
        info->block_level++;
    }
    if(list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_120=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_123=list$1sNodeph_begin((o2_saved_120));        !list$1sNodeph_end((o2_saved_120));        node_123=list$1sNodeph_next((o2_saved_120))        ){
            right_value_objects_126=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj62=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(__right_value160=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 321, "list$1sRightValueObjectph"))))));
            come_call_finalizer3(__dec_obj62,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value160,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj63=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj64=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj65=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_131=list$1CVALUEph_length(info->stack);
            sline_132=info->sline;
            sname_133=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_123->sline(node_123->_protocol_obj);
            __dec_obj66=info->sname;
            info->sname=(char*)come_increment_ref_count(node_123->sname(node_123->_protocol_obj));
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->writing_source_file_position=(_Bool)1;
            if(!node_compile(node_123,info)) {
                printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                exit(2);
            }
            info->sline=sline_132;
            __dec_obj67=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_133));
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
            add_last_code_to_source(info);
            arrange_stack(info,stack_num_before_131);
            free_right_value_objects(info,(_Bool)0);
            list$1sRightValueObjectph_reset(info->right_value_objects);
            __dec_obj68=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_126);
            come_call_finalizer3(__dec_obj68,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_objects_126,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_133 = come_decrement_ref_count2(sname_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_120,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(!no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
    }
    info->lv_table=old_table_103;
    info->block_level=block_level_118;
    info->param_types=param_types__105;
    info->param_names=param_names__106;
    if(string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_104;
    info->inhibits_output_code=inhibits_output_code_102;
    return 0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_109;
char* __result78__;
char* __result79__;
char* result_110;
char* __result80__;
result_109 = (void*)0;
result_110 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_109,0,sizeof(char*));
        __result78__ = __result_obj__ = result_109;
        return __result78__;
    }
    self->it=self->head;
    if(self->it) {
        __result79__ = __result_obj__ = self->it->item;
        return __result79__;
    }
    memset(&result_110,0,sizeof(char*));
    __result80__ = __result_obj__ = result_110;
    return __result80__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_112;
char* __result81__;
char* __result82__;
char* result_113;
char* __result83__;
result_112 = (void*)0;
result_113 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_112,0,sizeof(char*));
        __result81__ = __result_obj__ = result_112;
        return __result81__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result82__ = __result_obj__ = self->it->item;
        return __result82__;
    }
    memset(&result_113,0,sizeof(char*));
    __result83__ = __result_obj__ = result_113;
    return __result83__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_115;
int i_116;
struct sType* __result84__;
struct sType* default_value_117;
struct sType* __result85__;
default_value_117 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_115=self->head;
    i_116=0;
    while(it_115!=((void*)0)) {
        if(position==i_116) {
            __result84__ = __result_obj__ = it_115->item;
            return __result84__;
        }
        it_115=it_115->next;
        i_116++;
    }
    memset(&default_value_117,0,sizeof(struct sType*));
    __result85__ = __result_obj__ = default_value_117;
    come_call_finalizer3(default_value_117,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result85__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_121;
struct sNode* __result86__;
struct sNode* __result87__;
struct sNode* result_122;
struct sNode* __result88__;
result_121 = (void*)0;
result_122 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_121,0,sizeof(struct sNode*));
        __result86__ = __result_obj__ = result_121;
        return __result86__;
    }
    self->it=self->head;
    if(self->it) {
        __result87__ = __result_obj__ = self->it->item;
        return __result87__;
    }
    memset(&result_122,0,sizeof(struct sNode*));
    __result88__ = __result_obj__ = result_122;
    return __result88__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_124;
struct sNode* __result89__;
struct sNode* __result90__;
struct sNode* result_125;
struct sNode* __result91__;
result_124 = (void*)0;
result_125 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_124,0,sizeof(struct sNode*));
        __result89__ = __result_obj__ = result_124;
        return __result89__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result90__ = __result_obj__ = self->it->item;
        return __result90__;
    }
    memset(&result_125,0,sizeof(struct sNode*));
    __result91__ = __result_obj__ = result_125;
    return __result91__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result92__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result92__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result92__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_127;
struct list_item$1sRightValueObjectph* prev_it_128;
    it_127=self->head;
    while(it_127!=((void*)0)) {
        prev_it_128=it_127;
        it_127=it_127->next;
        come_call_finalizer3(prev_it_128,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sRightValueObjectph* it_129;
struct list_item$1sRightValueObjectph* prev_it_130;
    it_129=self->head;
    while(it_129!=((void*)0)) {
        prev_it_130=it_129;
        it_129=it_129->next;
        come_call_finalizer3(prev_it_130,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list_item$1sRightValueObjectph* it_134;
struct list_item$1sRightValueObjectph* prev_it_135;
struct list$1sRightValueObjectph* __result93__;
    it_134=self->head;
    while(it_134!=((void*)0)) {
        prev_it_135=it_134;
        it_134=it_134->next;
        come_call_finalizer3(prev_it_135,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result93__ = __result_obj__ = self;
    return __result93__;
}

void arrange_stack(struct sInfo* info, int top){
    if(list$1CVALUEph_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUEph_length(info->stack)-top,info);
    }
    if(list$1CVALUEph_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEph_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
    parse_sharp_v5(info);
    if(*info->p!=c) {
        if(!info->no_output_err) {
            err_msg(info,"expected next charaster is %c, but %c\n",c,*info->p);
            exit(2);
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    return 0;
}

char* skip_block(struct sInfo* info){
void* __result_obj__=(void*)0;
char* head_136;
_Bool dquort_137;
_Bool squort_138;
int sline_139;
int nest_140;
char* tail_141;
void* __right_value165 = (void*)0;
char* buf_142;
void* __right_value166 = (void*)0;
char* __result94__;
    head_136=info->p;
    if(*info->p==123) {
        info->p++;
        dquort_137=(_Bool)0;
        squort_138=(_Bool)0;
        sline_139=0;
        nest_140=0;
        while(1) {
            if(dquort_137) {
                if(*info->p==92) {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_139);
                        exit(2);
                    }
                    if(*info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else {
                    if(*info->p==34) {
                        info->p++;
                        dquort_137=!dquort_137;
                    }
                    else {
                        if(*info->p==10) {
                            info->p++;
                            info->sline++;
                            if(*info->p==0) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_139);
                                exit(2);
                            }
                        }
                        else {
                            info->p++;
                            if(*info->p==0) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_139);
                                exit(2);
                            }
                        }
                    }
                }
            }
            else {
                if(squort_138) {
                    if(*info->p==92) {
                        info->p++;
                        if(*info->p==0) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_139);
                            exit(2);
                        }
                        if(*info->p==10) {
                            info->sline++;
                        }
                        info->p++;
                    }
                    else {
                        if(*info->p==39) {
                            info->p++;
                            squort_138=!squort_138;
                        }
                        else {
                            if(*info->p==10) {
                                info->p++;
                                info->sline++;
                                if(*info->p==0) {
                                    err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_139);
                                    exit(2);
                                }
                            }
                            else {
                                info->p++;
                                if(*info->p==0) {
                                    err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_139);
                                    exit(2);
                                }
                            }
                        }
                    }
                }
                else {
                    if(*info->p==39) {
                        sline_139=info->sline;
                        info->p++;
                        squort_138=!squort_138;
                    }
                    else {
                        if(*info->p==34) {
                            sline_139=info->sline;
                            info->p++;
                            dquort_137=!dquort_137;
                        }
                        else {
                            if(*info->p==35) {
                                parse_sharp_v5(info);
                            }
                            else {
                                if(*info->p==123) {
                                    info->p++;
                                    nest_140++;
                                }
                                else {
                                    if(*info->p==125) {
                                        info->p++;
                                        if(nest_140==0) {
                                            skip_spaces_and_lf(info);
                                            break;
                                        }
                                        nest_140--;
                                    }
                                    else {
                                        if(*info->p==0) {
                                            err_msg(info,"The block requires } character for closing block");
                                            exit(2);
                                        }
                                        else {
                                            if(*info->p==10) {
                                                info->p++;
                                                info->sline++;
                                            }
                                            else {
                                                info->p++;
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
    else {
        err_msg(info,"Require block. This is %c",*info->p);
    }
    tail_141=info->p;
    buf_142=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_141-head_136+1)), "05function.c", 531, "char"));
    memcpy(buf_142,head_136,tail_141-head_136);
    buf_142[tail_141-head_136]=0;
    __result94__ = __result_obj__ = ((char*)(__right_value166=__builtin_string(buf_142)));
    buf_142 = come_decrement_ref_count2(buf_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value166 = come_decrement_ref_count2(__right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result94__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_143;
char* p3_144;
int i_145;
    terminated_143=(_Bool)0;
    p3_144=p;
    for(    i_145=0;    i_145<strlen(p2);    i_145++    ){
        if(*p3_144==0) {
            terminated_143=(_Bool)1;
            break;
        }
        p3_144++;
    }
    return !terminated_143&&memcmp(p,p2,strlen(p2))==0;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
struct buffer* asm_fun_name_146;
int brace_num_147;
int len_148;
_Bool in_dquort_149;
int brace_num_150;
int brace_num_151;
void* __right_value169 = (void*)0;
char* __result95__;
    asm_fun_name_146=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value167=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 554, "buffer"))))));
    come_call_finalizer3(__right_value167,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while((_Bool)1) {
        if(strmemcmp(info->p,"__attribute_pure__")) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else {
            if(strmemcmp(info->p,"__attribute_malloc__")) {
                info->p+=strlen("__attribute_malloc__");
                skip_spaces_and_lf(info);
            }
            else {
                if(strmemcmp(info->p,"__attr_dealloc_fclose")) {
                    info->p+=strlen("__attr_dealloc_fclose");
                    skip_spaces_and_lf(info);
                }
                else {
                    if(strmemcmp(info->p,"__wur")) {
                        info->p+=strlen("__wur");
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(strmemcmp(info->p,"__noreturn")) {
                            info->p+=strlen("__noreturn");
                            skip_spaces_and_lf(info);
                        }
                        else {
                            if(strmemcmp(info->p,"__attribute__")) {
                                info->p+=strlen("__attribute__");
                                skip_spaces_and_lf(info);
                                brace_num_147=0;
                                while(*info->p) {
                                    if(*info->p==40) {
                                        info->p++;
                                        brace_num_147++;
                                    }
                                    else {
                                        if(*info->p==41) {
                                            info->p++;
                                            brace_num_147--;
                                            if(brace_num_147==0) {
                                                break;
                                            }
                                        }
                                        else {
                                            info->p++;
                                        }
                                    }
                                }
                                skip_spaces_and_lf(info);
                            }
                            else {
                                if(strmemcmp(info->p,"__asm__")) {
                                    info->p+=strlen("__asm__");
                                    skip_spaces_and_lf(info);
                                    len_148=0;
                                    in_dquort_149=(_Bool)0;
                                    brace_num_150=0;
                                    while(*info->p) {
                                        if(*info->p==34) {
                                            info->p++;
                                            in_dquort_149=!in_dquort_149;
                                        }
                                        else {
                                            if(in_dquort_149) {
                                                buffer_append_char(asm_fun_name_146,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(*info->p==40) {
                                                    info->p++;
                                                    brace_num_150++;
                                                }
                                                else {
                                                    if(*info->p==41) {
                                                        info->p++;
                                                        brace_num_150--;
                                                        if(brace_num_150==0) {
                                                            break;
                                                        }
                                                    }
                                                    else {
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(strmemcmp(info->p,"__asm")) {
                                        info->p+=strlen("__asm");
                                        skip_spaces_and_lf(info);
                                        brace_num_151=0;
                                        while(*info->p) {
                                            if(*info->p==40) {
                                                info->p++;
                                                brace_num_151++;
                                            }
                                            else {
                                                if(*info->p==41) {
                                                    info->p++;
                                                    brace_num_151--;
                                                    if(brace_num_151==0) {
                                                        break;
                                                    }
                                                }
                                                else {
                                                    info->p++;
                                                }
                                            }
                                        }
                                        skip_spaces_and_lf(info);
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
    __result95__ = __result_obj__ = ((char*)(__right_value169=buffer_to_string(asm_fun_name_146)));
    come_call_finalizer3(asm_fun_name_146,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value169 = come_decrement_ref_count2(__right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result95__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
char* head_152;
int head_sline_153;
void* __right_value170 = (void*)0;
char* buf_154;
void* __right_value171 = (void*)0;
struct sNode* node_155;
    while(*info->p) {
        parse_sharp_v5(info);
        head_152=info->p;
        head_sline_153=info->sline;
        buf_154=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_154 = come_decrement_ref_count2(buf_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_155=(struct sNode*)come_increment_ref_count(top_level_v99(buf_154,head_152,head_sline_153,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(node_155!=((void*)0)) {
            if(!node_compile(node_155,info)) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_154 = come_decrement_ref_count2(buf_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_155) { node_155 = come_decrement_ref_count2(node_155, ((struct sNode*)node_155)->finalize, ((struct sNode*)node_155)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_154 = come_decrement_ref_count2(buf_154, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_155) { node_155 = come_decrement_ref_count2(node_155, ((struct sNode*)node_155)->finalize, ((struct sNode*)node_155)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value172 = (void*)0;
char* name_156;
void* __right_value173 = (void*)0;
void* __right_value174 = (void*)0;
struct sType* result_type_157;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
struct sType* __list_values1___158[5];
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct list$1sTypeph* param_types_163;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
char* __list_values2___164[5];
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct list$1charph* param_names_169;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
struct list$1charph* param_default_parametors_170;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct sFun* main_fun_171;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
char* name_216;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct sType* result_type_217;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct sType* __list_values3___218[1];
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct list$1sTypeph* param_types_219;
void* __right_value223 = (void*)0;
char* __list_values4___220[1];
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct list$1charph* param_names_221;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
struct list$1charph* param_default_parametors_222;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct sFun* main_fun_223;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
char* name_224;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct sType* result_type_225;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct sType* __list_values5___226[7];
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct list$1sTypeph* param_types_227;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
char* __list_values6___228[7];
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct list$1charph* param_names_229;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct list$1charph* param_default_parametors_230;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct sFun* main_fun_231;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
char* name_232;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct sType* result_type_233;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct sType* __list_values7___234[5];
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1sTypeph* param_types_235;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
char* __list_values8___236[5];
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct list$1charph* param_names_237;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct list$1charph* param_default_parametors_238;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct sFun* main_fun_239;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
char* name_240;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct sType* result_type_241;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct sType* __list_values9___242[1];
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct list$1sTypeph* param_types_243;
void* __right_value304 = (void*)0;
char* __list_values10___244[1];
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct list$1charph* param_names_245;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct list$1charph* param_default_parametors_246;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct sFun* main_fun_247;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
char* name_248;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct sType* result_type_249;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct sType* __list_values11___250[4];
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct list$1sTypeph* param_types_251;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
char* __list_values12___252[4];
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct list$1charph* param_names_253;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct list$1charph* param_default_parametors_254;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct sFun* main_fun_255;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
char* name_256;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct sType* result_type_257;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct sType* __list_values13___258[3];
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct list$1sTypeph* param_types_259;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
char* __list_values14___260[3];
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct list$1charph* param_names_261;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct list$1charph* param_default_parametors_262;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sFun* main_fun_263;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
char* name_264;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct sType* result_type_265;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sType* __list_values15___266[1];
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct list$1sTypeph* param_types_267;
void* __right_value373 = (void*)0;
char* __list_values16___268[1];
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct list$1charph* param_names_269;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct list$1charph* param_default_parametors_270;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct sFun* main_fun_271;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
char* name_272;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct sType* result_type_273;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct sType* __list_values17___274[3];
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct list$1sTypeph* param_types_275;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
char* __list_values18___276[3];
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct list$1charph* param_names_277;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct list$1charph* param_default_parametors_278;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct sFun* main_fun_279;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
char* name_280;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct sType* result_type_281;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct list$1sTypeph* param_types_282;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct list$1charph* param_names_283;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct list$1charph* param_default_parametors_284;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct sFun* main_fun_285;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
char* name_286;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct sType* result_type_287;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct sType* __list_values19___288[4];
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct list$1sTypeph* param_types_289;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
char* __list_values20___290[4];
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct list$1charph* param_names_291;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct list$1charph* param_default_parametors_292;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sFun* main_fun_293;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
char* name_294;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct sType* result_type_295;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct list$1sTypeph* param_types_296;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct list$1charph* param_names_297;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct list$1charph* param_default_parametors_298;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sFun* fun_299;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
char* name_300;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sType* result_type_301;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct list$1sTypeph* param_types_302;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct list$1charph* param_names_303;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct list$1charph* param_default_parametors_304;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct sFun* fun_305;
void* __right_value473 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_156=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_157=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value173=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 723, "sType")))),"void*",(_Bool)0,info));
        come_call_finalizer3(__right_value173,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values1___158[0]=come_increment_ref_count(((struct sType*)(__right_value176=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value175=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 724, "sType")))),"int",(_Bool)0,info))));
__list_values1___158[1]=come_increment_ref_count(((struct sType*)(__right_value178=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value177=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 724, "sType")))),"int",(_Bool)0,info))));
__list_values1___158[2]=come_increment_ref_count(((struct sType*)(__right_value180=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value179=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 724, "sType")))),"char*",(_Bool)0,info))));
__list_values1___158[3]=come_increment_ref_count(((struct sType*)(__right_value182=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value181=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 724, "sType")))),"int",(_Bool)0,info))));
__list_values1___158[4]=come_increment_ref_count(((struct sType*)(__right_value184=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value183=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 724, "sType")))),"char*",(_Bool)0,info))));
}        param_types_163=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value188=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 724, "struct list$1sTypeph")))),5,__list_values1___158));
        come_call_finalizer3(__right_value175,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value176,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value177,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value178,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value179,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value180,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value181,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value182,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value183,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value184,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value188,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values2___164[0]=come_increment_ref_count(((char*)(__right_value190=__builtin_string("count"))));
__list_values2___164[1]=come_increment_ref_count(((char*)(__right_value191=__builtin_string("size"))));
__list_values2___164[2]=come_increment_ref_count(((char*)(__right_value192=__builtin_string("sname"))));
__list_values2___164[3]=come_increment_ref_count(((char*)(__right_value193=__builtin_string("sline"))));
__list_values2___164[4]=come_increment_ref_count(((char*)(__right_value194=__builtin_string("class_name"))));
}        param_names_169=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value198=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 725, "struct list$1charph")))),5,__list_values2___164));
        __right_value190 = come_decrement_ref_count2(__right_value190, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value191 = come_decrement_ref_count2(__right_value191, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value192 = come_decrement_ref_count2(__right_value192, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value194 = come_decrement_ref_count2(__right_value194, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value198,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_170=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value200=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 726, "list$1charph"))))));
        come_call_finalizer3(__right_value200,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_170,((void*)0));
        list$1charph_push_back(param_default_parametors_170,((void*)0));
        list$1charph_push_back(param_default_parametors_170,(char*)come_increment_ref_count(((char*)(__right_value202=__builtin_string("null")))));
        __right_value202 = come_decrement_ref_count2(__right_value202, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_170,(char*)come_increment_ref_count(((char*)(__right_value203=__builtin_string("0")))));
        __right_value203 = come_decrement_ref_count2(__right_value203, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_170,(char*)come_increment_ref_count(((char*)(__right_value204=__builtin_string("null")))));
        __right_value204 = come_decrement_ref_count2(__right_value204, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        main_fun_171=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value205=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 732, "sFun")))),(char*)come_increment_ref_count(name_156),(struct sType*)come_increment_ref_count(result_type_157),(struct list$1sTypeph*)come_increment_ref_count(param_types_163),(struct list$1charph*)come_increment_ref_count(param_names_169),(struct list$1charph*)come_increment_ref_count(param_default_parametors_170),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(__right_value206=__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(__right_value207=__builtin_string("")))),info));
        come_call_finalizer3(__right_value205,sFun_finalize, 0, 1, 0, 0, (void*)0);
        __right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value207 = come_decrement_ref_count2(__right_value207, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value215=__builtin_string(name_156)))),(struct sFun*)come_increment_ref_count(main_fun_171));
        __right_value215 = come_decrement_ref_count2(__right_value215, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_156 = come_decrement_ref_count2(name_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_157,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_163,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_169,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_170,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_171,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_216=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_217=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value217=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 743, "sType")))),"void*",(_Bool)0,info));
        come_call_finalizer3(__right_value217,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values3___218[0]=come_increment_ref_count(((struct sType*)(__right_value220=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value219=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 744, "sType")))),"void*",(_Bool)0,info))));
}        param_types_219=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value221=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 744, "struct list$1sTypeph")))),1,__list_values3___218));
        come_call_finalizer3(__right_value219,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value220,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value221,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values4___220[0]=come_increment_ref_count(((char*)(__right_value223=__builtin_string("mem"))));
}        param_names_221=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value224=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 745, "struct list$1charph")))),1,__list_values4___220));
        __right_value223 = come_decrement_ref_count2(__right_value223, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value224,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_222=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value226=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 746, "list$1charph"))))));
        come_call_finalizer3(__right_value226,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_223=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value228=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 747, "sFun")))),(char*)come_increment_ref_count(name_216),(struct sType*)come_increment_ref_count(result_type_217),(struct list$1sTypeph*)come_increment_ref_count(param_types_219),(struct list$1charph*)come_increment_ref_count(param_names_221),(struct list$1charph*)come_increment_ref_count(param_default_parametors_222),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(__right_value229=__builtin_string("void* come_increment_ref_count(void* mem)")))),(char*)come_increment_ref_count(((char*)(__right_value230=__builtin_string("")))),info));
        come_call_finalizer3(__right_value228,sFun_finalize, 0, 1, 0, 0, (void*)0);
        __right_value229 = come_decrement_ref_count2(__right_value229, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value230 = come_decrement_ref_count2(__right_value230, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value232=__builtin_string(name_216)))),(struct sFun*)come_increment_ref_count(main_fun_223));
        __right_value232 = come_decrement_ref_count2(__right_value232, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_216 = come_decrement_ref_count2(name_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_217,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_219,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_221,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_222,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_223,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_224=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_225=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value234=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 758, "sType")))),"void",(_Bool)0,info));
        come_call_finalizer3(__right_value234,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values5___226[0]=come_increment_ref_count(((struct sType*)(__right_value237=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value236=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 759, "sType")))),"void*",(_Bool)0,info))));
__list_values5___226[1]=come_increment_ref_count(((struct sType*)(__right_value239=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value238=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 759, "sType")))),"void*",(_Bool)0,info))));
__list_values5___226[2]=come_increment_ref_count(((struct sType*)(__right_value241=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value240=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 759, "sType")))),"void*",(_Bool)0,info))));
__list_values5___226[3]=come_increment_ref_count(((struct sType*)(__right_value243=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value242=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 759, "sType")))),"void*",(_Bool)0,info))));
__list_values5___226[4]=come_increment_ref_count(((struct sType*)(__right_value245=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value244=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 759, "sType")))),"int",(_Bool)0,info))));
__list_values5___226[5]=come_increment_ref_count(((struct sType*)(__right_value247=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value246=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 759, "sType")))),"int",(_Bool)0,info))));
__list_values5___226[6]=come_increment_ref_count(((struct sType*)(__right_value249=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value248=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 759, "sType")))),"int",(_Bool)0,info))));
}        param_types_227=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value250=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 759, "struct list$1sTypeph")))),7,__list_values5___226));
        come_call_finalizer3(__right_value236,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value237,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value238,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value239,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value240,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value241,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value242,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value243,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value244,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value245,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value246,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value247,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value248,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value249,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value250,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values6___228[0]=come_increment_ref_count(((char*)(__right_value252=__builtin_string("fun"))));
__list_values6___228[1]=come_increment_ref_count(((char*)(__right_value253=__builtin_string("mem"))));
__list_values6___228[2]=come_increment_ref_count(((char*)(__right_value254=__builtin_string("protocol_fun"))));
__list_values6___228[3]=come_increment_ref_count(((char*)(__right_value255=__builtin_string("protocol_obj"))));
__list_values6___228[4]=come_increment_ref_count(((char*)(__right_value256=__builtin_string("call_finalizer_only"))));
__list_values6___228[5]=come_increment_ref_count(((char*)(__right_value257=__builtin_string("no_decrement"))));
__list_values6___228[6]=come_increment_ref_count(((char*)(__right_value258=__builtin_string("no_free"))));
}        param_names_229=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value259=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 760, "struct list$1charph")))),7,__list_values6___228));
        __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value258 = come_decrement_ref_count2(__right_value258, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value259,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_230=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value261=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 761, "list$1charph"))))));
        come_call_finalizer3(__right_value261,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_231=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value263=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 762, "sFun")))),(char*)come_increment_ref_count(name_224),(struct sType*)come_increment_ref_count(result_type_225),(struct list$1sTypeph*)come_increment_ref_count(param_types_227),(struct list$1charph*)come_increment_ref_count(param_names_229),(struct list$1charph*)come_increment_ref_count(param_default_parametors_230),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(__right_value264=__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")))),(char*)come_increment_ref_count(((char*)(__right_value265=__builtin_string("")))),info));
        come_call_finalizer3(__right_value263,sFun_finalize, 0, 1, 0, 0, (void*)0);
        __right_value264 = come_decrement_ref_count2(__right_value264, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value265 = come_decrement_ref_count2(__right_value265, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value267=__builtin_string(name_224)))),(struct sFun*)come_increment_ref_count(main_fun_231));
        __right_value267 = come_decrement_ref_count2(__right_value267, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_224 = come_decrement_ref_count2(name_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_225,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_227,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_229,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_230,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_231,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_232=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_233=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value269=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 773, "sType")))),"void*",(_Bool)0,info));
        come_call_finalizer3(__right_value269,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values7___234[0]=come_increment_ref_count(((struct sType*)(__right_value272=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value271=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 774, "sType")))),"void*",(_Bool)0,info))));
__list_values7___234[1]=come_increment_ref_count(((struct sType*)(__right_value274=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value273=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 774, "sType")))),"void*",(_Bool)0,info))));
__list_values7___234[2]=come_increment_ref_count(((struct sType*)(__right_value276=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value275=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 774, "sType")))),"void*",(_Bool)0,info))));
__list_values7___234[3]=come_increment_ref_count(((struct sType*)(__right_value278=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value277=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 774, "sType")))),"bool",(_Bool)0,info))));
__list_values7___234[4]=come_increment_ref_count(((struct sType*)(__right_value280=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value279=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 774, "sType")))),"bool",(_Bool)0,info))));
}        param_types_235=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value281=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 774, "struct list$1sTypeph")))),5,__list_values7___234));
        come_call_finalizer3(__right_value271,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value272,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value273,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value274,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value275,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value276,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value277,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value278,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value279,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value280,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value281,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values8___236[0]=come_increment_ref_count(((char*)(__right_value283=__builtin_string("mem"))));
__list_values8___236[1]=come_increment_ref_count(((char*)(__right_value284=__builtin_string("protocol_fun"))));
__list_values8___236[2]=come_increment_ref_count(((char*)(__right_value285=__builtin_string("protocol_obj"))));
__list_values8___236[3]=come_increment_ref_count(((char*)(__right_value286=__builtin_string("no_decrement"))));
__list_values8___236[4]=come_increment_ref_count(((char*)(__right_value287=__builtin_string("no_free"))));
}        param_names_237=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value288=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 775, "struct list$1charph")))),5,__list_values8___236));
        __right_value283 = come_decrement_ref_count2(__right_value283, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value284 = come_decrement_ref_count2(__right_value284, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value285 = come_decrement_ref_count2(__right_value285, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value286 = come_decrement_ref_count2(__right_value286, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value287 = come_decrement_ref_count2(__right_value287, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value288,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_238=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value290=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 776, "list$1charph"))))));
        come_call_finalizer3(__right_value290,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_239=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value292=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 777, "sFun")))),(char*)come_increment_ref_count(name_232),(struct sType*)come_increment_ref_count(result_type_233),(struct list$1sTypeph*)come_increment_ref_count(param_types_235),(struct list$1charph*)come_increment_ref_count(param_names_237),(struct list$1charph*)come_increment_ref_count(param_default_parametors_238),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(__right_value293=__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")))),(char*)come_increment_ref_count(((char*)(__right_value294=__builtin_string("")))),info));
        come_call_finalizer3(__right_value292,sFun_finalize, 0, 1, 0, 0, (void*)0);
        __right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value294 = come_decrement_ref_count2(__right_value294, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value296=__builtin_string(name_232)))),(struct sFun*)come_increment_ref_count(main_fun_239));
        __right_value296 = come_decrement_ref_count2(__right_value296, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_232 = come_decrement_ref_count2(name_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_233,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_235,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_237,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_238,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_239,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_240=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_241=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value298=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 788, "sType")))),"void",(_Bool)0,info));
        come_call_finalizer3(__right_value298,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values9___242[0]=come_increment_ref_count(((struct sType*)(__right_value301=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value300=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 789, "sType")))),"void*",(_Bool)0,info))));
}        param_types_243=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value302=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 789, "struct list$1sTypeph")))),1,__list_values9___242));
        come_call_finalizer3(__right_value300,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value301,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value302,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values10___244[0]=come_increment_ref_count(((char*)(__right_value304=__builtin_string("mem"))));
}        param_names_245=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value305=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 790, "struct list$1charph")))),1,__list_values10___244));
        __right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value305,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_246=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value307=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 791, "list$1charph"))))));
        come_call_finalizer3(__right_value307,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_247=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value309=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 792, "sFun")))),(char*)come_increment_ref_count(name_240),(struct sType*)come_increment_ref_count(result_type_241),(struct list$1sTypeph*)come_increment_ref_count(param_types_243),(struct list$1charph*)come_increment_ref_count(param_names_245),(struct list$1charph*)come_increment_ref_count(param_default_parametors_246),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(__right_value310=__builtin_string("void come_free_object(void* mem)")))),(char*)come_increment_ref_count(((char*)(__right_value311=__builtin_string("")))),info));
        come_call_finalizer3(__right_value309,sFun_finalize, 0, 1, 0, 0, (void*)0);
        __right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value313=__builtin_string(name_240)))),(struct sFun*)come_increment_ref_count(main_fun_247));
        __right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_240 = come_decrement_ref_count2(name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_241,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_243,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_245,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_246,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_247,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_248=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_249=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value315=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 803, "sType")))),"void*",(_Bool)0,info));
        come_call_finalizer3(__right_value315,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values11___250[0]=come_increment_ref_count(((struct sType*)(__right_value318=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value317=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 804, "sType")))),"void*",(_Bool)0,info))));
__list_values11___250[1]=come_increment_ref_count(((struct sType*)(__right_value320=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value319=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 804, "sType")))),"char*",(_Bool)0,info))));
__list_values11___250[2]=come_increment_ref_count(((struct sType*)(__right_value322=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value321=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 804, "sType")))),"int",(_Bool)0,info))));
__list_values11___250[3]=come_increment_ref_count(((struct sType*)(__right_value324=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value323=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 804, "sType")))),"char*",(_Bool)0,info))));
}        param_types_251=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value325=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 804, "struct list$1sTypeph")))),4,__list_values11___250));
        come_call_finalizer3(__right_value317,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value318,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value319,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value320,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value321,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value322,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value323,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value324,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value325,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values12___252[0]=come_increment_ref_count(((char*)(__right_value327=__builtin_string("block"))));
__list_values12___252[1]=come_increment_ref_count(((char*)(__right_value328=__builtin_string("sname"))));
__list_values12___252[2]=come_increment_ref_count(((char*)(__right_value329=__builtin_string("sline"))));
__list_values12___252[3]=come_increment_ref_count(((char*)(__right_value330=__builtin_string("class_name"))));
}        param_names_253=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value331=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 805, "struct list$1charph")))),4,__list_values12___252));
        __right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value331,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_254=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value333=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 806, "list$1charph"))))));
        come_call_finalizer3(__right_value333,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_254,((void*)0));
        list$1charph_push_back(param_default_parametors_254,(char*)come_increment_ref_count(((char*)(__right_value335=__builtin_string("null")))));
        __right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_254,(char*)come_increment_ref_count(((char*)(__right_value336=__builtin_string("0")))));
        __right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_254,(char*)come_increment_ref_count(((char*)(__right_value337=__builtin_string("null")))));
        __right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        main_fun_255=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value338=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 811, "sFun")))),(char*)come_increment_ref_count(name_248),(struct sType*)come_increment_ref_count(result_type_249),(struct list$1sTypeph*)come_increment_ref_count(param_types_251),(struct list$1charph*)come_increment_ref_count(param_names_253),(struct list$1charph*)come_increment_ref_count(param_default_parametors_254),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(__right_value339=__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")))),(char*)come_increment_ref_count(((char*)(__right_value340=__builtin_string("")))),info));
        come_call_finalizer3(__right_value338,sFun_finalize, 0, 1, 0, 0, (void*)0);
        __right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value342=__builtin_string(name_248)))),(struct sFun*)come_increment_ref_count(main_fun_255));
        __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_248 = come_decrement_ref_count2(name_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_249,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_251,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_253,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_254,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_255,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_256=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_257=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value344=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 822, "sType")))),"void*",(_Bool)0,info));
        come_call_finalizer3(__right_value344,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values13___258[0]=come_increment_ref_count(((struct sType*)(__right_value347=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value346=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 823, "sType")))),"void*",(_Bool)0,info))));
__list_values13___258[1]=come_increment_ref_count(((struct sType*)(__right_value349=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value348=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 823, "sType")))),"int",(_Bool)0,info))));
__list_values13___258[2]=come_increment_ref_count(((struct sType*)(__right_value351=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value350=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 823, "sType")))),"long",(_Bool)0,info))));
}        param_types_259=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value352=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 823, "struct list$1sTypeph")))),3,__list_values13___258));
        come_call_finalizer3(__right_value346,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value347,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value348,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value349,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value350,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value351,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value352,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values14___260[0]=come_increment_ref_count(((char*)(__right_value354=__builtin_string("b"))));
__list_values14___260[1]=come_increment_ref_count(((char*)(__right_value355=__builtin_string("c"))));
__list_values14___260[2]=come_increment_ref_count(((char*)(__right_value356=__builtin_string("len"))));
}        param_names_261=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value357=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 824, "struct list$1charph")))),3,__list_values14___260));
        __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value357,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_262=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value359=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 825, "list$1charph"))))));
        come_call_finalizer3(__right_value359,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_263=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value361=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 826, "sFun")))),(char*)come_increment_ref_count(name_256),(struct sType*)come_increment_ref_count(result_type_257),(struct list$1sTypeph*)come_increment_ref_count(param_types_259),(struct list$1charph*)come_increment_ref_count(param_names_261),(struct list$1charph*)come_increment_ref_count(param_default_parametors_262),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(__right_value362=__builtin_string("void* memset(void* b, int c, size_t len)")))),(char*)come_increment_ref_count(((char*)(__right_value363=__builtin_string("")))),info));
        come_call_finalizer3(__right_value361,sFun_finalize, 0, 1, 0, 0, (void*)0);
        __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value365=__builtin_string(name_256)))),(struct sFun*)come_increment_ref_count(main_fun_263));
        __right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_256 = come_decrement_ref_count2(name_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_257,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_259,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_261,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_262,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_263,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_264=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_265=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value367=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 837, "sType")))),"char*",(_Bool)0,info));
        come_call_finalizer3(__right_value367,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values15___266[0]=come_increment_ref_count(((struct sType*)(__right_value370=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value369=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 838, "sType")))),"char*",(_Bool)0,info))));
}        param_types_267=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value371=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 838, "struct list$1sTypeph")))),1,__list_values15___266));
        come_call_finalizer3(__right_value369,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value370,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value371,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values16___268[0]=come_increment_ref_count(((char*)(__right_value373=__builtin_string("str"))));
}        param_names_269=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value374=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 839, "struct list$1charph")))),1,__list_values16___268));
        __right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value374,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_270=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value376=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 840, "list$1charph"))))));
        come_call_finalizer3(__right_value376,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_271=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value378=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 841, "sFun")))),(char*)come_increment_ref_count(name_264),(struct sType*)come_increment_ref_count(result_type_265),(struct list$1sTypeph*)come_increment_ref_count(param_types_267),(struct list$1charph*)come_increment_ref_count(param_names_269),(struct list$1charph*)come_increment_ref_count(param_default_parametors_270),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(__right_value379=__builtin_string("char* __builtin_string(char* str)")))),(char*)come_increment_ref_count(((char*)(__right_value380=__builtin_string("")))),info));
        come_call_finalizer3(__right_value378,sFun_finalize, 0, 1, 0, 0, (void*)0);
        __right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value382=__builtin_string(name_264)))),(struct sFun*)come_increment_ref_count(main_fun_271));
        __right_value382 = come_decrement_ref_count2(__right_value382, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_264 = come_decrement_ref_count2(name_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_265,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_267,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_269,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_270,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_271,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_272=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_273=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value384=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 852, "sType")))),"void",(_Bool)0,info));
        come_call_finalizer3(__right_value384,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values17___274[0]=come_increment_ref_count(((struct sType*)(__right_value387=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value386=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 853, "sType")))),"int",(_Bool)0,info))));
__list_values17___274[1]=come_increment_ref_count(((struct sType*)(__right_value389=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value388=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 853, "sType")))),"int",(_Bool)0,info))));
__list_values17___274[2]=come_increment_ref_count(((struct sType*)(__right_value391=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value390=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 853, "sType")))),"int",(_Bool)0,info))));
}        param_types_275=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value392=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 853, "struct list$1sTypeph")))),3,__list_values17___274));
        come_call_finalizer3(__right_value386,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value387,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value388,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value389,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value390,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value391,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value392,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values18___276[0]=come_increment_ref_count(((char*)(__right_value394=xsprintf("come_malloc"))));
__list_values18___276[1]=come_increment_ref_count(((char*)(__right_value395=xsprintf("come_debug"))));
__list_values18___276[2]=come_increment_ref_count(((char*)(__right_value396=xsprintf("come_gc"))));
}        param_names_277=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value397=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 854, "struct list$1charph")))),3,__list_values18___276));
        __right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value397,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_278=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value399=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 855, "list$1charph"))))));
        come_call_finalizer3(__right_value399,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        list$1charph_push_back(param_default_parametors_278,((void*)0));
        main_fun_279=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value401=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 857, "sFun")))),(char*)come_increment_ref_count(name_272),(struct sType*)come_increment_ref_count(result_type_273),(struct list$1sTypeph*)come_increment_ref_count(param_types_275),(struct list$1charph*)come_increment_ref_count(param_names_277),(struct list$1charph*)come_increment_ref_count(param_default_parametors_278),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(__right_value402=__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")))),(char*)come_increment_ref_count(((char*)(__right_value403=__builtin_string("")))),info));
        come_call_finalizer3(__right_value401,sFun_finalize, 0, 1, 0, 0, (void*)0);
        __right_value402 = come_decrement_ref_count2(__right_value402, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value405=__builtin_string(name_272)))),(struct sFun*)come_increment_ref_count(main_fun_279));
        __right_value405 = come_decrement_ref_count2(__right_value405, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_272 = come_decrement_ref_count2(name_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_273,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_275,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_277,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_278,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_279,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_280=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_281=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value407=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 868, "sType")))),"void",(_Bool)0,info));
        come_call_finalizer3(__right_value407,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_types_282=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value409=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 869, "list$1sTypeph"))))));
        come_call_finalizer3(__right_value409,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        param_names_283=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value411=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 870, "list$1charph"))))));
        come_call_finalizer3(__right_value411,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_284=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value413=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 871, "list$1charph"))))));
        come_call_finalizer3(__right_value413,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_285=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value415=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 872, "sFun")))),(char*)come_increment_ref_count(name_280),(struct sType*)come_increment_ref_count(result_type_281),(struct list$1sTypeph*)come_increment_ref_count(param_types_282),(struct list$1charph*)come_increment_ref_count(param_names_283),(struct list$1charph*)come_increment_ref_count(param_default_parametors_284),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(__right_value416=__builtin_string("void come_heap_final()")))),(char*)come_increment_ref_count(((char*)(__right_value417=__builtin_string("")))),info));
        come_call_finalizer3(__right_value415,sFun_finalize, 0, 1, 0, 0, (void*)0);
        __right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value419=__builtin_string(name_280)))),(struct sFun*)come_increment_ref_count(main_fun_285));
        __right_value419 = come_decrement_ref_count2(__right_value419, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_280 = come_decrement_ref_count2(name_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_281,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_282,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_283,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_284,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_285,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_286=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_287=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value421=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")))),"void*",(_Bool)0,info));
        come_call_finalizer3(__right_value421,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values19___288[0]=come_increment_ref_count(((struct sType*)(__right_value424=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value423=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 884, "sType")))),"void*",(_Bool)0,info))));
__list_values19___288[1]=come_increment_ref_count(((struct sType*)(__right_value426=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value425=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 884, "sType")))),"char*",(_Bool)0,info))));
__list_values19___288[2]=come_increment_ref_count(((struct sType*)(__right_value428=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value427=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 884, "sType")))),"int",(_Bool)0,info))));
__list_values19___288[3]=come_increment_ref_count(((struct sType*)(__right_value430=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value429=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 884, "sType")))),"int",(_Bool)0,info))));
}        param_types_289=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value431=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 884, "struct list$1sTypeph")))),4,__list_values19___288));
        come_call_finalizer3(__right_value423,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value424,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value425,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value426,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value427,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value428,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value429,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value430,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value431,list$1sTypeph_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values20___290[0]=come_increment_ref_count(((char*)(__right_value433=__builtin_string("mem"))));
__list_values20___290[1]=come_increment_ref_count(((char*)(__right_value434=__builtin_string("sname"))));
__list_values20___290[2]=come_increment_ref_count(((char*)(__right_value435=__builtin_string("sline"))));
__list_values20___290[3]=come_increment_ref_count(((char*)(__right_value436=__builtin_string("id"))));
}        param_names_291=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value437=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 885, "struct list$1charph")))),4,__list_values20___290));
        __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value437,list$1charph_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_292=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value439=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 886, "list$1charph"))))));
        come_call_finalizer3(__right_value439,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        main_fun_293=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value441=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 887, "sFun")))),(char*)come_increment_ref_count(name_286),(struct sType*)come_increment_ref_count(result_type_287),(struct list$1sTypeph*)come_increment_ref_count(param_types_289),(struct list$1charph*)come_increment_ref_count(param_names_291),(struct list$1charph*)come_increment_ref_count(param_default_parametors_292),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(__right_value442=__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")))),(char*)come_increment_ref_count(((char*)(__right_value443=__builtin_string("")))),info));
        come_call_finalizer3(__right_value441,sFun_finalize, 0, 1, 0, 0, (void*)0);
        __right_value442 = come_decrement_ref_count2(__right_value442, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value443 = come_decrement_ref_count2(__right_value443, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value445=__builtin_string(name_286)))),(struct sFun*)come_increment_ref_count(main_fun_293));
        __right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_286 = come_decrement_ref_count2(name_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_287,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_289,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_291,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_292,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_293,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_294=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_295=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value447=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 898, "sType")))),"void",(_Bool)0,info));
        come_call_finalizer3(__right_value447,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_types_296=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value449=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 899, "list$1sTypeph"))))));
        come_call_finalizer3(__right_value449,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        param_names_297=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value451=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 900, "list$1charph"))))));
        come_call_finalizer3(__right_value451,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_298=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value453=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 901, "list$1charph"))))));
        come_call_finalizer3(__right_value453,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        fun_299=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value455=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 902, "sFun")))),(char*)come_increment_ref_count(name_294),(struct sType*)come_increment_ref_count(result_type_295),(struct list$1sTypeph*)come_increment_ref_count(param_types_296),(struct list$1charph*)come_increment_ref_count(param_names_297),(struct list$1charph*)come_increment_ref_count(param_default_parametors_298),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(__right_value456=__builtin_string("void __builtin_va_start()")))),(char*)come_increment_ref_count(((char*)(__right_value457=__builtin_string("")))),info));
        come_call_finalizer3(__right_value455,sFun_finalize, 0, 1, 0, 0, (void*)0);
        __right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value459=__builtin_string(name_294)))),(struct sFun*)come_increment_ref_count(fun_299));
        __right_value459 = come_decrement_ref_count2(__right_value459, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_294 = come_decrement_ref_count2(name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_295,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_296,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_297,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_298,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_299,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_300=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_301=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value461=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 913, "sType")))),"void",(_Bool)0,info));
        come_call_finalizer3(__right_value461,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_types_302=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value463=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 914, "list$1sTypeph"))))));
        come_call_finalizer3(__right_value463,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
        param_names_303=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value465=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 915, "list$1charph"))))));
        come_call_finalizer3(__right_value465,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        param_default_parametors_304=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value467=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 916, "list$1charph"))))));
        come_call_finalizer3(__right_value467,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        fun_305=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value469=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 917, "sFun")))),(char*)come_increment_ref_count(name_300),(struct sType*)come_increment_ref_count(result_type_301),(struct list$1sTypeph*)come_increment_ref_count(param_types_302),(struct list$1charph*)come_increment_ref_count(param_names_303),(struct list$1charph*)come_increment_ref_count(param_default_parametors_304),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(__right_value470=__builtin_string("void __builtin_va_end()")))),(char*)come_increment_ref_count(((char*)(__right_value471=__builtin_string("")))),info));
        come_call_finalizer3(__right_value469,sFun_finalize, 0, 1, 0, 0, (void*)0);
        __right_value470 = come_decrement_ref_count2(__right_value470, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value473=__builtin_string(name_300)))),(struct sFun*)come_increment_ref_count(fun_305));
        __right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        name_300 = come_decrement_ref_count2(name_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_301,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_302,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_303,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_304,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_305,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_159;
struct list$1sTypeph* __result97__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_159=0;    i_159<num_value;    i_159++    ){
        list$1sTypeph_push_back(self,values[i_159]);
    }
    __result97__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result97__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value185 = (void*)0;
struct list_item$1sTypeph* litem_160;
struct sType* __dec_obj69;
void* __right_value186 = (void*)0;
struct list_item$1sTypeph* litem_161;
struct sType* __dec_obj70;
void* __right_value187 = (void*)0;
struct list_item$1sTypeph* litem_162;
struct sType* __dec_obj71;
struct list$1sTypeph* __result96__;
    if(self->len==0) {
        litem_160=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value185=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 219, "list_item$1sTypeph"))));
        come_call_finalizer3(__right_value185,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_160->prev=((void*)0);
        litem_160->next=((void*)0);
        __dec_obj69=litem_160->item;
        litem_160->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_160;
        self->head=litem_160;
    }
    else {
        if(self->len==1) {
            litem_161=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value186=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 229, "list_item$1sTypeph"))));
            come_call_finalizer3(__right_value186,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_161->prev=self->head;
            litem_161->next=((void*)0);
            __dec_obj70=litem_161->item;
            litem_161->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_161;
            self->head->next=litem_161;
        }
        else {
            litem_162=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value187=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 239, "list_item$1sTypeph"))));
            come_call_finalizer3(__right_value187,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_162->prev=self->tail;
            litem_162->next=((void*)0);
            __dec_obj71=litem_162->item;
            litem_162->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_162;
            self->tail=litem_162;
        }
    }
    self->len++;
    __result96__ = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result96__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_165;
struct list$1charph* __result99__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_165=0;    i_165<num_value;    i_165++    ){
        list$1charph_push_back(self,values[i_165]);
    }
    __result99__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result99__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value195 = (void*)0;
struct list_item$1charph* litem_166;
char* __dec_obj72;
void* __right_value196 = (void*)0;
struct list_item$1charph* litem_167;
char* __dec_obj73;
void* __right_value197 = (void*)0;
struct list_item$1charph* litem_168;
char* __dec_obj74;
struct list$1charph* __result98__;
    if(self->len==0) {
        litem_166=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value195=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 219, "list_item$1charph"))));
        come_call_finalizer3(__right_value195,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_166->prev=((void*)0);
        litem_166->next=((void*)0);
        __dec_obj72=litem_166->item;
        litem_166->item=(char*)come_increment_ref_count(item);
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_166;
        self->head=litem_166;
    }
    else {
        if(self->len==1) {
            litem_167=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value196=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 229, "list_item$1charph"))));
            come_call_finalizer3(__right_value196,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_167->prev=self->head;
            litem_167->next=((void*)0);
            __dec_obj73=litem_167->item;
            litem_167->item=(char*)come_increment_ref_count(item);
            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_167;
            self->head->next=litem_167;
        }
        else {
            litem_168=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value197=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 239, "list_item$1charph"))));
            come_call_finalizer3(__right_value197,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_168->prev=self->tail;
            litem_168->next=((void*)0);
            __dec_obj74=litem_168->item;
            litem_168->item=(char*)come_increment_ref_count(item);
            __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_168;
            self->tail=litem_168;
        }
    }
    self->len++;
    __result98__ = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result98__;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_189;
unsigned int it_190;
_Bool same_key_exist_207;
char* it2_210;
struct map$2charphsFunph* __result121__;
    if(self->len*10>=self->size) {
        map$2charphsFunph_rehash(self);
    }
    hash_189=string_get_hash_key(key)%self->size;
    it_190=hash_189;
    while((_Bool)1) {
        if(self->item_existance[it_190]) {
            if(string_equals(self->keys[it_190],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_190]);
                    self->keys[it_190] = come_decrement_ref_count2(self->keys[it_190], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_190]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_190]);
                    self->keys[it_190]=key;
                }
                if(1) {
                    come_call_finalizer3(self->items[it_190],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_190]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_190]=item;
                }
                break;
            }
            it_190++;
            if(it_190>=self->size) {
                it_190=0;
            }
            else {
                if(it_190==hash_189) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_190]=(_Bool)1;
            if(1) {
                self->keys[it_190]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_190]=key;
            }
            if(1) {
                self->items[it_190]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_190]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_207=(_Bool)0;
    for(    it2_210=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_210=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_210,key)) {
            same_key_exist_207=(_Bool)1;
        }
    }
    if(!same_key_exist_207) {
        list$1charp_push_back(self->key_list,key);
    }
    __result121__ = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(item,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result121__;
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_172;
void* __right_value209 = (void*)0;
char** keys_173;
void* __right_value210 = (void*)0;
struct sFun** items_174;
void* __right_value211 = (void*)0;
_Bool* item_existance_175;
int len_176;
char* it_179;
struct sFun* default_value_182;
struct sFun* it2_183;
unsigned int hash_186;
int n_187;
struct sFun* default_value_188;
default_value_182 = (void*)0;
default_value_188 = (void*)0;
    size_172=self->size*10;
    keys_173=(char**)come_increment_ref_count(((char**)(__right_value209=(char**)come_calloc(1, sizeof(char*)*(1*(size_172)), "./neo-c.h", 1527, "char*%"))));
    __right_value209 = come_decrement_ref_count2(__right_value209, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    items_174=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value210=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_172)), "./neo-c.h", 1528, "sFun*%"))));
    come_call_finalizer3(__right_value210,sFun_finalize, 0, 1, 0, 0, (void*)0);
    item_existance_175=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value211=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_172)), "./neo-c.h", 1529, "bool"))));
    __right_value211 = come_decrement_ref_count2(__right_value211, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    len_176=0;
    for(    it_179=map$2charphsFunph_begin(self);    !map$2charphsFunph_end(self);    it_179=map$2charphsFunph_next(self)    ){
        memset(&default_value_182,0,sizeof(struct sFun*));
        it2_183=map$2charphsFunph_at(self,it_179,default_value_182);
        hash_186=string_get_hash_key(it_179)%size_172;
        n_187=hash_186;
        while((_Bool)1) {
            if(item_existance_175[n_187]) {
                n_187++;
                if(n_187>=size_172) {
                    n_187=0;
                }
                else {
                    if(n_187==hash_186) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_175[n_187]=(_Bool)1;
                keys_173[n_187]=it_179;
                items_174[n_187]=map$2charphsFunph_at(self,it_179,default_value_188);
                len_176++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_173;
    self->items=items_174;
    self->item_existance=item_existance_175;
    self->size=size_172;
    self->len=len_176;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_177;
char* __result100__;
char* __result101__;
char* result_178;
char* __result102__;
result_177 = (void*)0;
result_178 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_177,0,sizeof(char*));
        __result100__ = __result_obj__ = result_177;
        return __result100__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result101__ = __result_obj__ = self->key_list->it->item;
        return __result101__;
    }
    memset(&result_178,0,sizeof(char*));
    __result102__ = __result_obj__ = result_178;
    return __result102__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_180;
char* __result103__;
char* __result104__;
char* result_181;
char* __result105__;
result_180 = (void*)0;
result_181 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_180,0,sizeof(char*));
        __result103__ = __result_obj__ = result_180;
        return __result103__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result104__ = __result_obj__ = self->key_list->it->item;
        return __result104__;
    }
    memset(&result_181,0,sizeof(char*));
    __result105__ = __result_obj__ = result_181;
    return __result105__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_184;
unsigned int it_185;
struct sFun* __result106__;
struct sFun* __result107__;
struct sFun* __result108__;
struct sFun* __result109__;
    hash_184=string_get_hash_key(((char*)key))%self->size;
    it_185=hash_184;
    while((_Bool)1) {
        if(self->item_existance[it_185]) {
            if(string_equals(self->keys[it_185],key)) {
                __result106__ = __result_obj__ = self->items[it_185];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result106__;
            }
            it_185++;
            if(it_185>=self->size) {
                it_185=0;
            }
            else {
                if(it_185==hash_184) {
                    __result107__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result107__;
                }
            }
        }
        else {
            __result108__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result108__;
        }
    }
    __result109__ = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result109__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_191;
struct list_item$1charp* it_192;
struct list$1charp* __result113__;
    it2_191=0;
    it_192=self->head;
    while(it_192!=((void*)0)) {
        if(string_equals(it_192->item,item)) {
            list$1charp_delete(self,it2_191,it2_191+1);
            break;
        }
        it2_191++;
        it_192=it_192->next;
    }
    __result113__ = __result_obj__ = self;
    return __result113__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_193;
struct list$1charp* __result110__;
struct list_item$1charp* it_196;
int i_197;
struct list_item$1charp* prev_it_198;
struct list_item$1charp* it_199;
int i_200;
struct list_item$1charp* prev_it_201;
struct list_item$1charp* it_202;
struct list_item$1charp* head_prev_it_203;
struct list_item$1charp* tail_it_204;
int i_205;
struct list_item$1charp* prev_it_206;
struct list$1charp* __result112__;
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_193=tail;
        tail=head;
        head=tmp_193;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head==tail) {
        __result110__ = __result_obj__ = self;
        return __result110__;
    }
    if(head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else {
        if(head==0) {
            it_196=self->head;
            i_197=0;
            while(it_196!=((void*)0)) {
                if(i_197<tail) {
                    prev_it_198=it_196;
                    it_196=it_196->next;
                    i_197++;
                    come_call_finalizer3(prev_it_198,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_197==tail) {
                        self->head=it_196;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_196=it_196->next;
                        i_197++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_199=self->head;
                i_200=0;
                while(it_199!=((void*)0)) {
                    if(i_200==head) {
                        self->tail=it_199->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_200>=head) {
                        prev_it_201=it_199;
                        it_199=it_199->next;
                        i_200++;
                        come_call_finalizer3(prev_it_201,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_199=it_199->next;
                        i_200++;
                    }
                }
            }
            else {
                it_202=self->head;
                head_prev_it_203=((void*)0);
                tail_it_204=((void*)0);
                i_205=0;
                while(it_202!=((void*)0)) {
                    if(i_205==head) {
                        head_prev_it_203=it_202->prev;
                    }
                    if(i_205==tail) {
                        tail_it_204=it_202;
                    }
                    if(i_205>=head&&i_205<tail) {
                        prev_it_206=it_202;
                        it_202=it_202->next;
                        i_205++;
                        come_call_finalizer3(prev_it_206,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_202=it_202->next;
                        i_205++;
                    }
                }
                if(head_prev_it_203!=((void*)0)) {
                    head_prev_it_203->next=tail_it_204;
                }
                if(tail_it_204!=((void*)0)) {
                    tail_it_204->prev=head_prev_it_203;
                }
            }
        }
    }
    __result112__ = __result_obj__ = self;
    return __result112__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_194;
struct list_item$1charp* prev_it_195;
struct list$1charp* __result111__;
    it_194=self->head;
    while(it_194!=((void*)0)) {
        prev_it_195=it_194;
        it_194=it_194->next;
        come_call_finalizer3(prev_it_195,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result111__ = __result_obj__ = self;
    return __result111__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_208;
char* __result114__;
char* __result115__;
char* result_209;
char* __result116__;
result_208 = (void*)0;
result_209 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_208,0,sizeof(char*));
        __result114__ = __result_obj__ = result_208;
        return __result114__;
    }
    self->it=self->head;
    if(self->it) {
        __result115__ = __result_obj__ = self->it->item;
        return __result115__;
    }
    memset(&result_209,0,sizeof(char*));
    __result116__ = __result_obj__ = result_209;
    return __result116__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_211;
char* __result117__;
char* __result118__;
char* result_212;
char* __result119__;
result_211 = (void*)0;
result_212 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_211,0,sizeof(char*));
        __result117__ = __result_obj__ = result_211;
        return __result117__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result118__ = __result_obj__ = self->it->item;
        return __result118__;
    }
    memset(&result_212,0,sizeof(char*));
    __result119__ = __result_obj__ = result_212;
    return __result119__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value212 = (void*)0;
struct list_item$1charp* litem_213;
void* __right_value213 = (void*)0;
struct list_item$1charp* litem_214;
void* __right_value214 = (void*)0;
struct list_item$1charp* litem_215;
struct list$1charp* __result120__;
    if(self->len==0) {
        litem_213=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value212=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 219, "list_item$1charp"))));
        come_call_finalizer3(__right_value212,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head=litem_213;
    }
    else {
        if(self->len==1) {
            litem_214=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value213=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 229, "list_item$1charp"))));
            come_call_finalizer3(__right_value213,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_214->prev=self->head;
            litem_214->next=((void*)0);
            litem_214->item=item;
            self->tail=litem_214;
            self->head->next=litem_214;
        }
        else {
            litem_215=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value214=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 239, "list_item$1charp"))));
            come_call_finalizer3(__right_value214,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_215->prev=self->tail;
            litem_215->next=((void*)0);
            litem_215->item=item;
            self->tail->next=litem_215;
            self->tail=litem_215;
        }
    }
    self->len++;
    __result120__ = __result_obj__ = self;
    return __result120__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_306;
_Bool is_type_name_flag_307;
int sline_308;
_Bool define_struct_nobody_309;
char* p_310;
int sline_311;
void* __right_value474 = (void*)0;
char* word_312;
_Bool define_function_pointer_result_function_313;
_Bool define_variable_between_brace_314;
char* p_315;
void* __right_value475 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_316;
char* fun_name_317;
_Bool err_318;
void* __right_value476 = (void*)0;
char* word_319;
_Bool define_function_flag_320;
char* p_321;
void* __right_value477 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_322;
char* fun_name_323;
_Bool err_324;
char* word_325;
void* __right_value478 = (void*)0;
char* __dec_obj75;
void* __right_value479 = (void*)0;
char* __dec_obj76;
char* __dec_obj77;
void* __right_value480 = (void*)0;
char* __dec_obj78;
_Bool define_variable_326;
char* p_327;
void* __right_value481 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_328;
char* fun_name_329;
_Bool err_330;
void* __right_value482 = (void*)0;
char* word_331;
void* __right_value483 = (void*)0;
char* word_332;
char* p_333;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
char* word_334;
void* __right_value486 = (void*)0;
char* __dec_obj79;
void* __right_value487 = (void*)0;
char* word_335;
void* __right_value488 = (void*)0;
char* word_338;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct sNode* node_339;
struct sNode* __result123__;
void* __right_value491 = (void*)0;
struct sNode* __result124__;
char* header_head_340;
void* __right_value492 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_341;
char* fun_name_342;
_Bool err_343;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct list$1sTypeph* param_types_344;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct list$1charph* param_names_345;
void* __right_value497 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_346;
char* param_name_347;
_Bool err_348;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct list$1sTypeph* param_types2_350;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct list$1charph* param_names2_351;
void* __right_value503 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_352;
char* param_name_353;
_Bool err_354;
void* __right_value504 = (void*)0;
char* header_tail_356;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sType* result_type2_357;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct tuple1$1sTypeph* __dec_obj81;
void* __right_value509 = (void*)0;
struct list$1sTypeph* __dec_obj82;
void* __right_value510 = (void*)0;
struct list$1charph* __dec_obj83;
_Bool var_args_358;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct buffer* header_buf_359;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct list$1charph* param_default_parametors_360;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct sFun* fun_361;
void* __right_value520 = (void*)0;
struct sFun* fun2_365;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value558 = (void*)0;
struct sNode* __result153__;
void* __right_value559 = (void*)0;
struct sNode* node_402;
struct sNode* __result154__;
void* __right_value560 = (void*)0;
struct sNode* node_403;
char* source_tail_404;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct buffer* header_405;
struct sNode* __result155__;
void* __right_value563 = (void*)0;
char* buf2_406;
void* __right_value564 = (void*)0;
struct sNode* __result156__;
    source_head_306=info->p;
    is_type_name_flag_307=is_type_name(buf,info);
    sline_308=info->sline;
    define_struct_nobody_309=(_Bool)0;
    {
        p_310=info->p;
        sline_311=info->sline;
        if(charp_operator_equals(buf,"struct")) {
            if(xisalpha(*info->p)||*info->p==95) {
                word_312=(char*)come_increment_ref_count(parse_word(info));
                if(*info->p==59) {
                    define_struct_nobody_309=(_Bool)1;
                }
                word_312 = come_decrement_ref_count2(word_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_311;
    }
    define_function_pointer_result_function_313=(_Bool)0;
    define_variable_between_brace_314=(_Bool)0;
    if(is_type_name_flag_307) {
        p_315=info->p;
        info->p=head;
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value475=backtrace_parse_type((_Bool)0,info)));
            result_type_316=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_317=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_318=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value475,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p!=42) {
                    define_function_pointer_result_function_313=(_Bool)1;
                    if(xisalpha(*info->p)||*info->p==95) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_319=(char*)come_increment_ref_count(parse_word(info));
                        if(!is_type_name(word_319,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p==40) {
                            }
                            else {
                                define_variable_between_brace_314=(_Bool)1;
                            }
                        }
                        word_319 = come_decrement_ref_count2(word_319, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_316,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_317 = come_decrement_ref_count2(fun_name_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_308;
    }
    define_function_flag_320=(_Bool)0;
    if(is_type_name_flag_307&&!define_function_pointer_result_function_313&&charp_operator_not_equals(buf,"__typeof__")) {
        p_321=info->p;
        info->p=head;
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value477=backtrace_parse_type((_Bool)0,info)));
            result_type_322=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_323=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_324=multiple_assign_var2->v3;
            come_call_finalizer3(__right_value477,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_322,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_323 = come_decrement_ref_count2(fun_name_323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(!info->define_struct) {
            info->define_struct=(_Bool)0;
            word_325=((void*)0);
            if(xisalnum(*info->p)||*info->p==95) {
                __dec_obj75=word_325;
                word_325=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(string_operator_equals(word_325,"extern")) {
                    __dec_obj76=word_325;
                    word_325=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj77=word_325;
                word_325=((void*)0);
                __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(word_325) {
                if(is_type_name(word_325,info)) {
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
                        __dec_obj78=word_325;
                        word_325=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(strlen(word_325)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(is_type_name_flag_307) {
                        define_function_flag_320=(_Bool)1;
                    }
                }
            }
            word_325 = come_decrement_ref_count2(word_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_321;
        info->sline=sline_308;
    }
    define_variable_326=(_Bool)1;
    if(is_type_name_flag_307&&!define_function_pointer_result_function_313) {
        p_327=info->p;
        info->p=head;
        if(!is_type_name_flag_307) {
            define_variable_326=(_Bool)0;
        }
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value481=backtrace_parse_type((_Bool)0,info)));
            result_type_328=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_329=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_330=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value481,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(xisalpha(*info->p)||*info->p==95) {
                        word_331=(char*)come_increment_ref_count(parse_word(info));
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p==40) {
                                define_variable_326=(_Bool)1;
                            }
                        }
                        word_331 = come_decrement_ref_count2(word_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    if(xisalpha(*info->p)||*info->p==95) {
                        word_332=(char*)come_increment_ref_count(parse_word(info));
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(!is_type_name(word_332,info)&&*info->p!=40) {
                                define_variable_326=(_Bool)1;
                            }
                        }
                        word_332 = come_decrement_ref_count2(word_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_328,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_329 = come_decrement_ref_count2(fun_name_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_326=(_Bool)0;
        }
        else {
            if(define_variable_326) {
            }
            else {
                if(!(xisalpha(*info->p)||*info->p==95)) {
                    define_variable_326=(_Bool)0;
                }
                while(xisalpha(*info->p)||*info->p==95) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(*info->p==40||*info->p==58) {
                    define_variable_326=(_Bool)0;
                }
            }
        }
        info->p=p_327;
        info->sline=sline_308;
    }
    else {
        define_variable_326=(_Bool)0;
    }
    {
        p_333=info->p;
        info->p=head;
        if(charp_operator_equals(buf,"struct")) {
            if(xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value484=parse_word(info)));
                __right_value484 = come_decrement_ref_count2(__right_value484, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(xisalpha(*info->p)||*info->p==95) {
                    word_334=(char*)come_increment_ref_count(parse_word(info));
                    if(xisalpha(*info->p)||*info->p==95) {
                        __dec_obj79=word_334;
                        word_334=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(string_operator_equals(word_334,"extends")) {
                            define_variable_326=(_Bool)0;
                        }
                    }
                    word_334 = come_decrement_ref_count2(word_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_326=(_Bool)0;
        }
        else {
            if(define_variable_326) {
            }
            else {
                if(!(xisalpha(*info->p)||*info->p==95)) {
                    define_variable_326=(_Bool)0;
                }
                while(xisalpha(*info->p)||*info->p==95) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(*info->p==40||*info->p==58) {
                    define_variable_326=(_Bool)0;
                }
            }
        }
        info->p=p_333;
        info->sline=sline_308;
    }
    if(charp_operator_equals(buf,"template")) {
        word_335=(char*)come_increment_ref_count(parse_word(info));
        if(*info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1charph_reset(info->method_generics_type_names);
            while((_Bool)1) {
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
                        if(*info->p==0) {
                            err_msg(info,"unexpected source end");
                            exit(2);
                        }
                        else {
                            word_338=(char*)come_increment_ref_count(parse_word(info));
                            list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(__right_value489=string_clone(word_338)))));
                            __right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            word_338 = come_decrement_ref_count2(word_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            node_339=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charph_reset(info->method_generics_type_names);
            __result123__ = __result_obj__ = node_339;
            if(node_339) { node_339 = come_decrement_ref_count2(node_339, ((struct sNode*)node_339)->finalize, ((struct sNode*)node_339)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_335 = come_decrement_ref_count2(word_335, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result123__;
            if(node_339) { node_339 = come_decrement_ref_count2(node_339, ((struct sNode*)node_339)->finalize, ((struct sNode*)node_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_335 = come_decrement_ref_count2(word_335, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(define_struct_nobody_309) {
        }
        else {
            if(define_variable_between_brace_314) {
                info->p=head;
                info->sline=sline_308;
                __result124__ = __result_obj__ = ((struct sNode*)(__right_value491=parse_global_variable(info)));
                if(__right_value491) { __right_value491 = come_decrement_ref_count2(__right_value491, ((struct sNode*)__right_value491)->finalize, ((struct sNode*)__right_value491)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result124__;
            }
            else {
                if(define_function_pointer_result_function_313) {
                    header_head_340=info->p;
                    multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value492=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    result_type_341=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                    fun_name_342=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    err_343=multiple_assign_var4->v3;
                    come_call_finalizer3(__right_value492,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(*info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        param_types_344=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value493=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1241, "list$1sTypeph"))))));
                        come_call_finalizer3(__right_value493,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                        param_names_345=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value495=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1242, "list$1charph"))))));
                        come_call_finalizer3(__right_value495,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            while((_Bool)1) {
                                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value497=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                param_type_346=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                param_name_347=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                err_348=multiple_assign_var5->v3;
                                come_call_finalizer3(__right_value497,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                if(!err_348) {
                                    err_msg(info,"parse_type is failed");
                                    exit(2);
                                }
                                list$1sTypeph_push_back(param_types_344,(struct sType*)come_increment_ref_count(param_type_346));
                                static int num_function_pointer_result_var_name_a_349=0;
                                list$1charph_push_back(param_names_345,(char*)come_increment_ref_count(((char*)(__right_value498=xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_349)))));
                                __right_value498 = come_decrement_ref_count2(__right_value498, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                if(*info->p==44) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(*info->p==41) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        come_call_finalizer3(param_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        param_name_347 = come_decrement_ref_count2(param_name_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        break;
                                    }
                                    else {
                                        err_msg(info,"require , or )");
                                        exit(2);
                                    }
                                }
                                come_call_finalizer3(param_type_346,sType_finalize, 0, 0, 0, 0, (void*)0);
                                param_name_347 = come_decrement_ref_count2(param_name_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        expected_next_character(41,info);
                        if(*info->p==40) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            param_types2_350=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value499=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1284, "list$1sTypeph"))))));
                            come_call_finalizer3(__right_value499,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            param_names2_351=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value501=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1285, "list$1charph"))))));
                            come_call_finalizer3(__right_value501,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(*info->p==41) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                while((_Bool)1) {
                                    multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value503=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                    param_type_352=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                    param_name_353=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                    err_354=multiple_assign_var6->v3;
                                    come_call_finalizer3(__right_value503,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(!err_354) {
                                        err_msg(info,"parse_type is failed");
                                        exit(2);
                                    }
                                    list$1sTypeph_push_back(param_types2_350,(struct sType*)come_increment_ref_count(param_type_352));
                                    static int num_function_pointer_result_var_name_b_355=0;
                                    list$1charph_push_back(param_names2_351,(char*)come_increment_ref_count(((char*)(__right_value504=xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_355)))));
                                    __right_value504 = come_decrement_ref_count2(__right_value504, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    if(*info->p==44) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(*info->p==41) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            come_call_finalizer3(param_type_352,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            param_name_353 = come_decrement_ref_count2(param_name_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            break;
                                        }
                                        else {
                                            err_msg(info,"require , or )");
                                            exit(2);
                                        }
                                    }
                                    come_call_finalizer3(param_type_352,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    param_name_353 = come_decrement_ref_count2(param_name_353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            header_tail_356=info->p;
                            result_type2_357=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value505=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1323, "sType")))),"lambda",(_Bool)0,info));
                            come_call_finalizer3(__right_value505,sType_finalize, 0, 1, 0, 0, __result_obj__);
                            __dec_obj81=result_type2_357->mResultType;
                            result_type2_357->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(__right_value507=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 1325, "tuple1$1sTypeph")))),(struct sType*)come_increment_ref_count(result_type_341)));
                            come_call_finalizer3(__dec_obj81,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(__right_value507,tuple1$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
                            __dec_obj82=result_type2_357->mParamTypes;
                            result_type2_357->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types2_350));
                            come_call_finalizer3(__dec_obj82,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                            __dec_obj83=result_type2_357->mParamNames;
                            result_type2_357->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(param_names2_351));
                            come_call_finalizer3(__dec_obj83,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                            result_type2_357->mVarArgs=(_Bool)0;
                            result_type2_357->mStatic=(_Bool)0;
                            var_args_358=(_Bool)0;
                            header_buf_359=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value511=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1333, "buffer"))))));
                            come_call_finalizer3(__right_value511,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_buf_359,header_head_340,header_tail_356-header_head_340);
                            buffer_append_char(header_buf_359,0);
                            param_default_parametors_360=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value513=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1337, "list$1charph"))))));
                            come_call_finalizer3(__right_value513,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                            fun_361=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value515=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1339, "sFun")))),(char*)come_increment_ref_count(((char*)(__right_value516=__builtin_string(fun_name_342)))),(struct sType*)come_increment_ref_count(result_type2_357),(struct list$1sTypeph*)come_increment_ref_count(param_types_344),(struct list$1charph*)come_increment_ref_count(param_names_345),(struct list$1charph*)come_increment_ref_count(param_default_parametors_360),(_Bool)1,var_args_358,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(__right_value517=buffer_to_string(header_buf_359)))),(char*)come_increment_ref_count(((char*)(__right_value518=__builtin_string(info->sname)))),info));
                            come_call_finalizer3(__right_value515,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            __right_value516 = come_decrement_ref_count2(__right_value516, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __right_value517 = come_decrement_ref_count2(__right_value517, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __right_value518 = come_decrement_ref_count2(__right_value518, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            fun2_365=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value520=__builtin_string(fun_name_342))));
                            __right_value520 = come_decrement_ref_count2(__right_value520, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_365==((void*)0)||fun2_365->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value521=string_clone(fun_name_342)))),(struct sFun*)come_increment_ref_count(fun_361));
                                __right_value521 = come_decrement_ref_count2(__right_value521, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1351, "struct sNode");
                            _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(__right_value523=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value522=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1351, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_361),info))));
                            _inf_value2->_protocol_obj=_inf_obj_value2;
                            _inf_value2->finalize=(void*)sFunNode_finalize;
                            _inf_value2->clone=(void*)sFunNode_clone;
                            _inf_value2->compile=(void*)sFunNode_compile;
                            _inf_value2->sline=(void*)sNodeBase_sline;
                            _inf_value2->sname=(void*)sNodeBase_sname;
                            _inf_value2->terminated=(void*)sNodeBase_terminated;
                            _inf_value2->kind=(void*)sFunNode_kind;
                            __result153__ = __result_obj__ = ((struct sNode*)(__right_value558=_inf_value2));
                            come_call_finalizer3(param_types2_350,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names2_351,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_359,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_360,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_361,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_344,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names_345,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_342 = come_decrement_ref_count2(fun_name_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(__right_value522,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(__right_value523,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value558) { __right_value558 = come_decrement_ref_count2(__right_value558, ((struct sNode*)__right_value558)->finalize, ((struct sNode*)__right_value558)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result153__;
                            come_call_finalizer3(param_types2_350,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names2_351,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_357,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_359,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_360,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_361,sFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            err_msg(info,"require (");
                            exit(2);
                        }
                        come_call_finalizer3(param_types_344,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_names_345,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(result_type_341,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_342 = come_decrement_ref_count2(fun_name_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(define_function_flag_320) {
                        info->p=head;
                        info->sline=sline_308;
                        node_402=(struct sNode*)come_increment_ref_count(parse_function(info));
                        __result154__ = __result_obj__ = node_402;
                        if(node_402) { node_402 = come_decrement_ref_count2(node_402, ((struct sNode*)node_402)->finalize, ((struct sNode*)node_402)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result154__;
                        if(node_402) { node_402 = come_decrement_ref_count2(node_402, ((struct sNode*)node_402)->finalize, ((struct sNode*)node_402)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(define_variable_326) {
                            info->p=head;
                            info->sline=sline_308;
                            node_403=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
                            source_tail_404=info->p;
                            header_405=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value561=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1375, "buffer"))))));
                            come_call_finalizer3(__right_value561,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_405,source_head_306,source_tail_404-source_head_306);
                            __result155__ = __result_obj__ = node_403;
                            if(node_403) { node_403 = come_decrement_ref_count2(node_403, ((struct sNode*)node_403)->finalize, ((struct sNode*)node_403)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            come_call_finalizer3(header_405,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            return __result155__;
                            if(node_403) { node_403 = come_decrement_ref_count2(node_403, ((struct sNode*)node_403)->finalize, ((struct sNode*)node_403)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(header_405,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
    }
    info->p=head;
    info->sline=sline_308;
    buf2_406=(char*)come_increment_ref_count(parse_word(info));
    __result156__ = __result_obj__ = ((struct sNode*)(__right_value564=top_level_v98(buf2_406,head,head_sline,info)));
    buf2_406 = come_decrement_ref_count2(buf2_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value564) { __right_value564 = come_decrement_ref_count2(__right_value564, ((struct sNode*)__right_value564)->finalize, ((struct sNode*)__right_value564)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result156__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_336;
struct list_item$1charph* prev_it_337;
struct list$1charph* __result122__;
    it_336=self->head;
    while(it_336!=((void*)0)) {
        prev_it_337=it_336;
        it_336=it_336->next;
        come_call_finalizer3(prev_it_337,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result122__ = __result_obj__ = self;
    return __result122__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj80;
struct tuple1$1sTypeph* __result125__;
    __dec_obj80=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result125__ = __result_obj__ = self;
    come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result125__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_362;
unsigned int hash_363;
unsigned int it_364;
struct sFun* __result126__;
struct sFun* __result127__;
struct sFun* __result128__;
struct sFun* __result129__;
default_value_362 = (void*)0;
    memset(&default_value_362,0,sizeof(struct sFun*));
    hash_363=string_get_hash_key(((char*)key))%self->size;
    it_364=hash_363;
    while((_Bool)1) {
        if(self->item_existance[it_364]) {
            if(string_equals(self->keys[it_364],key)) {
                __result126__ = __result_obj__ = self->items[it_364];
                come_call_finalizer3(default_value_362,sFun_finalize, 0, 0, 0, 0, (void*)0);
                return __result126__;
            }
            it_364++;
            if(it_364>=self->size) {
                it_364=0;
            }
            else {
                if(it_364==hash_363) {
                    __result127__ = __result_obj__ = default_value_362;
                    come_call_finalizer3(default_value_362,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result127__;
                }
            }
        }
        else {
            __result128__ = __result_obj__ = default_value_362;
            come_call_finalizer3(default_value_362,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result128__;
        }
    }
    __result129__ = __result_obj__ = default_value_362;
    come_call_finalizer3(default_value_362,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result129__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result131__;
void* __right_value526 = (void*)0;
struct sFun* result_367;
void* __right_value527 = (void*)0;
char* __dec_obj85;
void* __right_value528 = (void*)0;
struct sType* __dec_obj86;
void* __right_value529 = (void*)0;
struct list$1sTypeph* __dec_obj87;
void* __right_value530 = (void*)0;
struct list$1charph* __dec_obj88;
void* __right_value531 = (void*)0;
struct list$1charph* __dec_obj89;
void* __right_value532 = (void*)0;
struct sType* __dec_obj90;
void* __right_value550 = (void*)0;
struct sBlock* __dec_obj96;
void* __right_value551 = (void*)0;
struct buffer* __dec_obj97;
void* __right_value552 = (void*)0;
struct buffer* __dec_obj98;
void* __right_value553 = (void*)0;
struct buffer* __dec_obj99;
void* __right_value554 = (void*)0;
struct buffer* __dec_obj100;
void* __right_value555 = (void*)0;
char* __dec_obj101;
void* __right_value556 = (void*)0;
char* __dec_obj102;
struct sFun* __result151__;
    if(self==(void*)0) {
        __result131__ = __result_obj__ = (void*)0;
        return __result131__;
    }
    result_367=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"));
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj85=result_367->mName;
        result_367->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj86=result_367->mResultType;
        result_367->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj87=result_367->mParamTypes;
        result_367->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj87,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj88=result_367->mParamNames;
        result_367->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj88,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj89=result_367->mParamDefaultParametors;
        result_367->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj89,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj90=result_367->mLambdaType;
        result_367->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj96=result_367->mBlock;
        result_367->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer3(__dec_obj96,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_367->mExternal=self->mExternal;
    }
    if(self!=((void*)0)) {
        result_367->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj97=result_367->mSource;
        result_367->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        come_call_finalizer3(__dec_obj97,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj98=result_367->mSourceHead;
        result_367->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        come_call_finalizer3(__dec_obj98,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj99=result_367->mSourceHead2;
        result_367->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        come_call_finalizer3(__dec_obj99,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj100=result_367->mSourceDefer;
        result_367->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        come_call_finalizer3(__dec_obj100,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_367->mStatic=self->mStatic;
    }
    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj101=result_367->mComeHeader;
        result_367->mComeHeader=(char*)come_increment_ref_count(string_clone(self->mComeHeader));
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_367->mCloner=self->mCloner;
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj102=result_367->mDeclareSName;
        result_367->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_367->mNoResultType=self->mNoResultType;
    }
    if(self!=((void*)0)) {
        result_367->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    __result151__ = __result_obj__ = result_367;
    come_call_finalizer3(result_367,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result151__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result132__;
void* __right_value533 = (void*)0;
struct sBlock* result_368;
void* __right_value534 = (void*)0;
struct list$1sNodeph* __dec_obj91;
void* __right_value549 = (void*)0;
struct sVarTable* __dec_obj95;
struct sBlock* __result150__;
    if(self==(void*)0) {
        __result132__ = __result_obj__ = (void*)0;
        return __result132__;
    }
    result_368=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj91=result_368->mNodes;
        result_368->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        come_call_finalizer3(__dec_obj91,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj95=result_368->mVarTable;
        result_368->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj95,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result150__ = __result_obj__ = result_368;
    come_call_finalizer3(result_368,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result150__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result133__;
void* __right_value535 = (void*)0;
struct sVarTable* result_369;
void* __right_value548 = (void*)0;
struct map$2charphsVarph* __dec_obj94;
struct sVarTable* __result149__;
    if(self==(void*)0) {
        __result133__ = __result_obj__ = (void*)0;
        return __result133__;
    }
    result_369=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj94=result_369->mVars;
        result_369->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        come_call_finalizer3(__dec_obj94,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_369->mGlobal=self->mGlobal;
    }
    if(self!=((void*)0)) {
        result_369->mParent=self->mParent;
    }
    if(self!=((void*)0)) {
        result_369->mID=self->mID;
    }
    __result149__ = __result_obj__ = result_369;
    come_call_finalizer3(result_369,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    return __result149__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result134__;
void* __right_value536 = (void*)0;
void* __right_value542 = (void*)0;
struct map$2charphsVarph* result_375;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct list$1charp* __dec_obj93;
char* it_378;
struct sVar* default_value_381;
struct sVar* it2_384;
struct map$2charphsVarph* __result148__;
default_value_381 = (void*)0;
    if(self==((void*)0)) {
        __result134__ = __result_obj__ = ((void*)0);
        return __result134__;
    }
    result_375=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(__right_value536=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./neo-c.h", 1370, "map$2charphsVarph"))))));
    come_call_finalizer3(__right_value536,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj93=result_375->key_list;
    result_375->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value543=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1372, "list$1charp"))))));
    come_call_finalizer3(__dec_obj93,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value543,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    it_378=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_378=map$2charphsVarph_next(self)    ){
        memset(&default_value_381,0,sizeof(struct sVar*));
        it2_384=map$2charphsVarph_at(self,it_378,default_value_381);
        map$2charphsVarph_insert2(result_375,it_378,it2_384);
    }
    __result148__ = __result_obj__ = result_375;
    come_call_finalizer3(result_375,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result148__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
int i_370;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct list$1charp* __dec_obj92;
struct map$2charphsVarph* __result136__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value537=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1276, "char*%"))));
    __right_value537 = come_decrement_ref_count2(__right_value537, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value538=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./neo-c.h", 1277, "sVar*%"))));
    come_call_finalizer3(__right_value538,sVar_finalize, 0, 1, 0, 0, __result_obj__);
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value539=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1278, "bool"))));
    __right_value539 = come_decrement_ref_count2(__right_value539, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_370=0;    i_370<128;    i_370++    ){
        self->item_existance[i_370]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj92=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value540=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1288, "list$1charp"))))));
    come_call_finalizer3(__dec_obj92,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value540,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    self->it=0;
    __result136__ = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result136__;
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
void* __result_obj__=(void*)0;
struct list$1charp* __result135__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result135__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    return __result135__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_371;
struct list_item$1charp* prev_it_372;
    it_371=self->head;
    while(it_371!=((void*)0)) {
        prev_it_372=it_371;
        it_371=it_371->next;
        come_call_finalizer3(prev_it_372,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_373;
int i_374;
    for(    i_373=0;    i_373<self->size;    i_373++    ){
        if(self->item_existance[i_373]) {
            if(1) {
                come_call_finalizer3(self->items[i_373],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_374=0;    i_374<self->size;    i_374++    ){
        if(self->item_existance[i_374]) {
            if(1) {
                self->keys[i_374] = come_decrement_ref_count2(self->keys[i_374], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_376;
char* __result137__;
char* __result138__;
char* result_377;
char* __result139__;
result_376 = (void*)0;
result_377 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_376,0,sizeof(char*));
        __result137__ = __result_obj__ = result_376;
        return __result137__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result138__ = __result_obj__ = self->key_list->it->item;
        return __result138__;
    }
    memset(&result_377,0,sizeof(char*));
    __result139__ = __result_obj__ = result_377;
    return __result139__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_379;
char* __result140__;
char* __result141__;
char* result_380;
char* __result142__;
result_379 = (void*)0;
result_380 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_379,0,sizeof(char*));
        __result140__ = __result_obj__ = result_379;
        return __result140__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result141__ = __result_obj__ = self->key_list->it->item;
        return __result141__;
    }
    memset(&result_380,0,sizeof(char*));
    __result142__ = __result_obj__ = result_380;
    return __result142__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_382;
unsigned int it_383;
struct sVar* __result143__;
struct sVar* __result144__;
struct sVar* __result145__;
struct sVar* __result146__;
    hash_382=string_get_hash_key(((char*)key))%self->size;
    it_383=hash_382;
    while((_Bool)1) {
        if(self->item_existance[it_383]) {
            if(string_equals(self->keys[it_383],key)) {
                __result143__ = __result_obj__ = self->items[it_383];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result143__;
            }
            it_383++;
            if(it_383>=self->size) {
                it_383=0;
            }
            else {
                if(it_383==hash_382) {
                    __result144__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result144__;
                }
            }
        }
        else {
            __result145__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result145__;
        }
    }
    __result146__ = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result146__;
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_396;
int it_397;
_Bool same_key_exist_398;
char* it2_399;
struct map$2charphsVarph* __result147__;
    if(self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_396=string_get_hash_key(key)%self->size;
    it_397=hash_396;
    while((_Bool)1) {
        if(self->item_existance[it_397]) {
            if(string_equals(self->keys[it_397],key)) {
                if(1) {
                    self->keys[it_397] = come_decrement_ref_count2(self->keys[it_397], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_397]);
                    self->keys[it_397]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_397]);
                    self->keys[it_397]=key;
                }
                if(1) {
                    come_call_finalizer3(self->items[it_397],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_397]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_397]=item;
                }
                break;
            }
            it_397++;
            if(it_397>=self->size) {
                it_397=0;
            }
            else {
                if(it_397==hash_396) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_397]=(_Bool)1;
            if(1) {
                self->keys[it_397]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_397]=key;
            }
            if(1) {
                self->items[it_397]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_397]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_398=(_Bool)0;
    for(    it2_399=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_399=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_399,key)) {
            same_key_exist_398=(_Bool)1;
        }
    }
    if(!same_key_exist_398) {
        list$1charp_push_back(self->key_list,key);
    }
    __result147__ = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result147__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_385;
void* __right_value545 = (void*)0;
char** keys_386;
void* __right_value546 = (void*)0;
struct sVar** items_387;
void* __right_value547 = (void*)0;
_Bool* item_existance_388;
int len_389;
char* it_390;
struct sVar* default_value_391;
struct sVar* it2_392;
unsigned int hash_393;
int n_394;
struct sVar* default_value_395;
default_value_391 = (void*)0;
default_value_395 = (void*)0;
    size_385=self->size*10;
    keys_386=(char**)come_increment_ref_count(((char**)(__right_value545=(char**)come_calloc(1, sizeof(char*)*(1*(size_385)), "./neo-c.h", 1527, "char*%"))));
    __right_value545 = come_decrement_ref_count2(__right_value545, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    items_387=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value546=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_385)), "./neo-c.h", 1528, "sVar*%"))));
    come_call_finalizer3(__right_value546,sVar_finalize, 0, 1, 0, 0, (void*)0);
    item_existance_388=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value547=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_385)), "./neo-c.h", 1529, "bool"))));
    __right_value547 = come_decrement_ref_count2(__right_value547, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    len_389=0;
    for(    it_390=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_390=map$2charphsVarph_next(self)    ){
        memset(&default_value_391,0,sizeof(struct sVar*));
        it2_392=map$2charphsVarph_at(self,it_390,default_value_391);
        hash_393=string_get_hash_key(it_390)%size_385;
        n_394=hash_393;
        while((_Bool)1) {
            if(item_existance_388[n_394]) {
                n_394++;
                if(n_394>=size_385) {
                    n_394=0;
                }
                else {
                    if(n_394==hash_393) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_388[n_394]=(_Bool)1;
                keys_386[n_394]=it_390;
                items_387[n_394]=map$2charphsVarph_at(self,it_390,default_value_395);
                len_389++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_386;
    self->items=items_387;
    self->item_existance=item_existance_388;
    self->size=size_385;
    self->len=len_389;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_400;
int i_401;
    for(    i_400=0;    i_400<self->size;    i_400++    ){
        if(self->item_existance[i_400]) {
            if(1) {
                come_call_finalizer3(self->items[i_400],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_401=0;    i_401<self->size;    i_401++    ){
        if(self->item_existance[i_401]) {
            if(1) {
                self->keys[i_401] = come_decrement_ref_count2(self->keys[i_401], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool is_type_name(char* buf, struct sInfo* info){
struct sClass* klass_407;
struct sType* type_413;
struct sClass* generics_class_417;
void* __right_value565 = (void*)0;
_Bool generics_type_name_418;
void* __right_value566 = (void*)0;
_Bool mgenerics_type_name_420;
    klass_407=map$2charphsClassphp_operator_load_element(info->classes,buf);
    type_413=map$2charphsTypephp_operator_load_element(info->types,buf);
    generics_class_417=map$2charphsClassphp_operator_load_element(info->generics_classes,buf);
    generics_type_name_418=list$1charph_contained(info->generics_type_names,(char*)come_increment_ref_count(((char*)(__right_value565=__builtin_string(buf)))));
    __right_value565 = come_decrement_ref_count2(__right_value565, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    mgenerics_type_name_420=list$1charph_contained(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(__right_value566=__builtin_string(buf)))));
    __right_value566 = come_decrement_ref_count2(__right_value566, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    return generics_class_417||generics_type_name_418||mgenerics_type_name_420||klass_407||type_413||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"uniq")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"record")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__");
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_408;
unsigned int hash_409;
unsigned int it_410;
struct sClass* __result157__;
struct sClass* __result158__;
struct sClass* __result159__;
struct sClass* __result160__;
default_value_408 = (void*)0;
    memset(&default_value_408,0,sizeof(struct sClass*));
    hash_409=string_get_hash_key(((char*)key))%self->size;
    it_410=hash_409;
    while((_Bool)1) {
        if(self->item_existance[it_410]) {
            if(string_equals(self->keys[it_410],key)) {
                __result157__ = __result_obj__ = self->items[it_410];
                come_call_finalizer3(default_value_408,sClass_finalize, 0, 0, 0, 0, (void*)0);
                return __result157__;
            }
            it_410++;
            if(it_410>=self->size) {
                it_410=0;
            }
            else {
                if(it_410==hash_409) {
                    __result158__ = __result_obj__ = default_value_408;
                    come_call_finalizer3(default_value_408,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    return __result158__;
                }
            }
        }
        else {
            __result159__ = __result_obj__ = default_value_408;
            come_call_finalizer3(default_value_408,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result159__;
        }
    }
    __result160__ = __result_obj__ = default_value_408;
    come_call_finalizer3(default_value_408,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result160__;
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
struct list_item$1tuple2$2charphsTypephph* it_411;
struct list_item$1tuple2$2charphsTypephph* prev_it_412;
    it_411=self->head;
    while(it_411!=((void*)0)) {
        prev_it_412=it_411;
        it_411=it_411->next;
        come_call_finalizer3(prev_it_412,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
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

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_414;
unsigned int hash_415;
unsigned int it_416;
struct sType* __result161__;
struct sType* __result162__;
struct sType* __result163__;
struct sType* __result164__;
default_value_414 = (void*)0;
    memset(&default_value_414,0,sizeof(struct sType*));
    hash_415=string_get_hash_key(((char*)key))%self->size;
    it_416=hash_415;
    while((_Bool)1) {
        if(self->item_existance[it_416]) {
            if(string_equals(self->keys[it_416],key)) {
                __result161__ = __result_obj__ = self->items[it_416];
                come_call_finalizer3(default_value_414,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result161__;
            }
            it_416++;
            if(it_416>=self->size) {
                it_416=0;
            }
            else {
                if(it_416==hash_415) {
                    __result162__ = __result_obj__ = default_value_414;
                    come_call_finalizer3(default_value_414,sType_finalize, 0, 0, 1, 0, (void*)0);
                    return __result162__;
                }
            }
        }
        else {
            __result163__ = __result_obj__ = default_value_414;
            come_call_finalizer3(default_value_414,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result163__;
        }
    }
    __result164__ = __result_obj__ = default_value_414;
    come_call_finalizer3(default_value_414,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result164__;
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
char* it_419;
_Bool __result165__;
_Bool __result166__;
    for(    it_419=list$1charph_begin(self);    !list$1charph_end(self);    it_419=list$1charph_next(self)    ){
        if(string_operator_equals(it_419,item)) {
            __result165__ = (_Bool)1;
            item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            return __result165__;
        }
    }
    __result166__ = (_Bool)0;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result166__;
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_421;
int caller_line_422;
char* caller_sname_423;
char* last_code_424;
char* __dec_obj104;
char* last_code2_425;
char* __dec_obj105;
char* last_code3_426;
char* __dec_obj106;
void* __right_value567 = (void*)0;
char* sname_top_427;
int sline_top_428;
struct sFun* funX_429;
_Bool __result167__;
void* __right_value568 = (void*)0;
struct sType* result_type_430;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct list$1sTypeph* param_types_431;
struct list$1sTypeph* o2_saved_432;
struct sType* it_435;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct sType* param_type_438;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1charph* param_names_439;
void* __right_value575 = (void*)0;
struct list$1charph* param_default_parametors_440;
char* p_441;
int sline_442;
char* sname_443;
char* head_444;
struct buffer* source_445;
void* __right_value576 = (void*)0;
struct buffer* __dec_obj107;
struct sType* generics_type_saved_446;
void* __right_value577 = (void*)0;
struct sType* __dec_obj108;
struct list$1charph* method_generics_type_names_447;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct list$1charph* __dec_obj109;
struct list$1charph* o2_saved_448;
char* it_449;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct list$1charph* __dec_obj110;
char* __dec_obj111;
void* __right_value582 = (void*)0;
struct sBlock* block_450;
struct buffer* __dec_obj112;
char* __dec_obj113;
_Bool var_args_451;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct sFun* fun_452;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value594 = (void*)0;
struct sNode* node_453;
_Bool __result176__;
struct sType* __dec_obj116;
struct list$1charph* __dec_obj117;
void* __right_value595 = (void*)0;
char* __dec_obj118;
char* __dec_obj119;
char* __dec_obj120;
char* __dec_obj121;
_Bool __result177__;
    caller_fun_421=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_422=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_423=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_424=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj104=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_425=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj105=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_426=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj106=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_427=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_428=info->sline;
    if(generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_429=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_429) {
        __result167__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_424 = come_decrement_ref_count2(last_code_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_425 = come_decrement_ref_count2(last_code2_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_426 = come_decrement_ref_count2(last_code3_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_427 = come_decrement_ref_count2(sname_top_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result167__;
    }
    result_type_430=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_431=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value569=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1431, "list$1sTypeph"))))));
    come_call_finalizer3(__right_value569,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_432=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_435=list$1sTypeph_begin((o2_saved_432));    !list$1sTypeph_end((o2_saved_432));    it_435=list$1sTypeph_next((o2_saved_432))    ){
        param_type_438=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value571=sType_clone(it_435))),generics_type,info));
        come_call_finalizer3(__right_value571,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_438->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_431,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value573=sType_clone(param_type_438)))));
        come_call_finalizer3(__right_value573,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(param_type_438,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_432,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_439=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_440=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_441=info->p;
    sline_442=info->sline;
    sname_443=(char*)come_increment_ref_count(info->sname);
    head_444=info->head;
    source_445=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj107=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj107,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_446=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj108=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_447=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj109=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value578=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1458, "list$1charph"))))));
    come_call_finalizer3(__dec_obj109,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value578,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_448=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_449=list$1charph_begin((o2_saved_448));    !list$1charph_end((o2_saved_448));    it_449=list$1charph_next((o2_saved_448))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(__right_value580=string_clone(it_449)))));
        __right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_448,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj110=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj110,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj111=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_450=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
    info->head=head_444;
    __dec_obj112=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_445);
    come_call_finalizer3(__dec_obj112,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_441;
    info->sline=sline_442;
    __dec_obj113=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_443);
    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_430->mInline=(_Bool)0;
    var_args_451=generics_fun->mVarArgs;
    fun_452=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value583=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1480, "sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_430),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value584=list$1sTypephp_clone(param_types_431)))),(struct list$1charph*)come_increment_ref_count(param_names_439),(struct list$1charph*)come_increment_ref_count(param_default_parametors_440),(_Bool)0,var_args_451,(struct sBlock*)come_increment_ref_count(block_450),(_Bool)1,(char*)come_increment_ref_count(((char*)(__right_value585=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(__right_value586=__builtin_string("")))),info));
    come_call_finalizer3(__right_value583,sFun_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value584,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
    __right_value585 = come_decrement_ref_count2(__right_value585, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value588=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_452));
    __right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1487, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFunNode*)(__right_value590=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value589=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1487, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_452),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_453=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value589,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value590,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    if(!node_compile(node_453,info)) {
        __result176__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_424 = come_decrement_ref_count2(last_code_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_425 = come_decrement_ref_count2(last_code2_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_426 = come_decrement_ref_count2(last_code3_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_427 = come_decrement_ref_count2(sname_top_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_430,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_431,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_439,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_440,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_443 = come_decrement_ref_count2(sname_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_445,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_446,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_447,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_450,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_452,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_453) { node_453 = come_decrement_ref_count2(node_453, ((struct sNode*)node_453)->finalize, ((struct sNode*)node_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result176__;
    }
    __dec_obj116=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_446);
    come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj117=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_447);
    come_call_finalizer3(__dec_obj117,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj118=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_427));
    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_428;
    __dec_obj119=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_424);
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj120=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_425);
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj121=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_426);
    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_421;
    info->caller_line=caller_line_422;
    info->caller_sname=caller_sname_423;
    __result177__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_424 = come_decrement_ref_count2(last_code_424, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_425 = come_decrement_ref_count2(last_code2_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_426 = come_decrement_ref_count2(last_code3_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_427 = come_decrement_ref_count2(sname_top_427, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_430,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_431,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_439,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_440,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_443 = come_decrement_ref_count2(sname_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_445,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_446,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_447,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_450,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_452,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_453) { node_453 = come_decrement_ref_count2(node_453, ((struct sNode*)node_453)->finalize, ((struct sNode*)node_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result177__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_433;
struct sType* __result168__;
struct sType* __result169__;
struct sType* result_434;
struct sType* __result170__;
result_433 = (void*)0;
result_434 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_433,0,sizeof(struct sType*));
        __result168__ = __result_obj__ = result_433;
        return __result168__;
    }
    self->it=self->head;
    if(self->it) {
        __result169__ = __result_obj__ = self->it->item;
        return __result169__;
    }
    memset(&result_434,0,sizeof(struct sType*));
    __result170__ = __result_obj__ = result_434;
    return __result170__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_436;
struct sType* __result171__;
struct sType* __result172__;
struct sType* result_437;
struct sType* __result173__;
result_436 = (void*)0;
result_437 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_436,0,sizeof(struct sType*));
        __result171__ = __result_obj__ = result_436;
        return __result171__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result172__ = __result_obj__ = self->it->item;
        return __result172__;
    }
    memset(&result_437,0,sizeof(struct sType*));
    __result173__ = __result_obj__ = result_437;
    return __result173__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_455;
int caller_line_456;
char* caller_sname_457;
char* last_code_458;
char* __dec_obj122;
char* last_code2_459;
char* __dec_obj123;
char* last_code3_460;
char* __dec_obj124;
void* __right_value596 = (void*)0;
char* sname_top_461;
int sline_top_462;
struct sFun* funX_463;
_Bool __result178__;
void* __right_value597 = (void*)0;
struct sType* result_type_464;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct list$1sTypeph* param_types_465;
struct list$1sTypeph* o2_saved_466;
struct sType* it_467;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct sType* param_type_468;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct list$1charph* param_names_469;
void* __right_value604 = (void*)0;
struct list$1charph* param_default_parametors_470;
char* p_471;
int sline_472;
char* sname_473;
char* head_474;
struct buffer* source_475;
void* __right_value605 = (void*)0;
struct buffer* __dec_obj125;
struct list$1charph* method_generics_type_names_476;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct list$1charph* __dec_obj126;
struct list$1charph* o2_saved_477;
char* it_478;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct list$1charph* __dec_obj127;
char* __dec_obj128;
void* __right_value610 = (void*)0;
struct sBlock* block_479;
struct buffer* __dec_obj129;
char* __dec_obj130;
_Bool var_args_480;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sFun* fun_481;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value622 = (void*)0;
struct sNode* node_482;
_Bool __result181__;
struct list$1charph* __dec_obj133;
struct list$1charph* __dec_obj134;
void* __right_value623 = (void*)0;
char* __dec_obj135;
char* __dec_obj136;
char* __dec_obj137;
char* __dec_obj138;
_Bool __result182__;
    caller_fun_455=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_456=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_457=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_458=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj122=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_459=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj123=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_460=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj124=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_461=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_462=info->sline;
    funX_463=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_463) {
        __result178__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_458 = come_decrement_ref_count2(last_code_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_459 = come_decrement_ref_count2(last_code2_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_460 = come_decrement_ref_count2(last_code3_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_461 = come_decrement_ref_count2(sname_top_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result178__;
    }
    result_type_464=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_465=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value598=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1538, "list$1sTypeph"))))));
    come_call_finalizer3(__right_value598,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_466=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_467=list$1sTypeph_begin((o2_saved_466));    !list$1sTypeph_end((o2_saved_466));    it_467=list$1sTypeph_next((o2_saved_466))    ){
        param_type_468=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value600=sType_clone(it_467))),info));
        come_call_finalizer3(__right_value600,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_468->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_465,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value602=sType_clone(param_type_468)))));
        come_call_finalizer3(__right_value602,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(param_type_468,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_466,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_469=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_470=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_471=info->p;
    sline_472=info->sline;
    sname_473=(char*)come_increment_ref_count(info->sname);
    head_474=info->head;
    source_475=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj125=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_476=info->method_generics_type_names;
    __dec_obj126=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value606=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1562, "list$1charph"))))));
    come_call_finalizer3(__dec_obj126,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value606,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    o2_saved_477=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_478=list$1charph_begin((o2_saved_477));    !list$1charph_end((o2_saved_477));    it_478=list$1charph_next((o2_saved_477))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(((char*)(__right_value608=string_clone(it_478)))));
        __right_value608 = come_decrement_ref_count2(__right_value608, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_477,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj127=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj127,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj128=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_479=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
    info->head=head_474;
    __dec_obj129=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_475);
    come_call_finalizer3(__dec_obj129,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_471;
    info->sline=sline_472;
    __dec_obj130=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_473);
    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_464->mInline=(_Bool)0;
    var_args_480=generics_fun->mVarArgs;
    fun_481=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value611=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1584, "sFun")))),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_464),(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value612=list$1sTypephp_clone(param_types_465)))),(struct list$1charph*)come_increment_ref_count(param_names_469),(struct list$1charph*)come_increment_ref_count(param_default_parametors_470),(_Bool)0,var_args_480,(struct sBlock*)come_increment_ref_count(block_479),(_Bool)1,(char*)come_increment_ref_count(((char*)(__right_value613=__builtin_string("")))),(char*)come_increment_ref_count(((char*)(__right_value614=__builtin_string("")))),info));
    come_call_finalizer3(__right_value611,sFun_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value612,list$1sTypephp_finalize, 0, 1, 0, 0, (void*)0);
    __right_value613 = come_decrement_ref_count2(__right_value613, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value614 = come_decrement_ref_count2(__right_value614, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value616=string_clone(fun_name)))),(struct sFun*)come_increment_ref_count(fun_481));
    __right_value616 = come_decrement_ref_count2(__right_value616, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1591, "struct sNode");
    _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(__right_value618=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value617=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1591, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_481),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_482=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value617,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value618,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    if(!node_compile(node_482,info)) {
        __result181__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        last_code_458 = come_decrement_ref_count2(last_code_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_459 = come_decrement_ref_count2(last_code2_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_460 = come_decrement_ref_count2(last_code3_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_461 = come_decrement_ref_count2(sname_top_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_464,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_465,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_469,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_470,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_473 = come_decrement_ref_count2(sname_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_475,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_479,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_481,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_482) { node_482 = come_decrement_ref_count2(node_482, ((struct sNode*)node_482)->finalize, ((struct sNode*)node_482)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result181__;
    }
    come_call_finalizer3(info->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj133=method_generics_type_names_476;
    __dec_obj134=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_476);
    come_call_finalizer3(__dec_obj134,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj135=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_461));
    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_462;
    __dec_obj136=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_458);
    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj137=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_459);
    __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj138=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_460);
    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_455;
    info->caller_line=caller_line_456;
    info->caller_sname=caller_sname_457;
    __result182__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    last_code_458 = come_decrement_ref_count2(last_code_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_459 = come_decrement_ref_count2(last_code2_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_460 = come_decrement_ref_count2(last_code3_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_461 = come_decrement_ref_count2(sname_top_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_464,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_465,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_469,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_470,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_473 = come_decrement_ref_count2(sname_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_475,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_479,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_481,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_482) { node_482 = come_decrement_ref_count2(node_482, ((struct sNode*)node_482)->finalize, ((struct sNode*)node_482)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result182__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_484;
char* source_head_485;
struct sType* result_type_486;
char* var_name_487;
_Bool constructor__488;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sType* __dec_obj139;
void* __right_value626 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type2_489;
char* var_name2_490;
_Bool err_491;
struct sType* __dec_obj140;
char* __dec_obj141;
_Bool method_definition_492;
char* p_493;
int sline_494;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct buffer* buf2_495;
char* fun_name_496;
char* base_fun_name_497;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
char* __dec_obj142;
void* __right_value631 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_498;
char* name_499;
_Bool err_500;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
char* __dec_obj143;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
char* __dec_obj144;
void* __right_value636 = (void*)0;
char* __dec_obj145;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9;
struct list$1sTypeph* param_types_501;
struct list$1charph* param_names_502;
struct list$1charph* param_default_parametors_503;
_Bool var_args_504;
char* header_tail_505;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct buffer* header_buf_506;
int version_507;
int n_508;
void* __right_value641 = (void*)0;
struct sBlock* block_509;
void* __right_value642 = (void*)0;
char* fun_name_511;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct sFun* fun_512;
void* __right_value648 = (void*)0;
struct sFun* fun2_513;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value654 = (void*)0;
struct sNode* __result185__;
void* __right_value655 = (void*)0;
char* none_generics_name_515;
void* __right_value656 = (void*)0;
char* generics_sname_516;
int generics_sline_517;
void* __right_value657 = (void*)0;
char* block_518;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct sGenericsFun* fun_519;
void* __right_value664 = (void*)0;
char* fun_name3_520;
void* __right_value668 = (void*)0;
struct sNode* __result197__;
void* __right_value669 = (void*)0;
char* generics_sname_542;
int generics_sline_543;
void* __right_value670 = (void*)0;
char* block_544;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sGenericsFun* fun_545;
void* __right_value677 = (void*)0;
char* fun_name3_546;
void* __right_value678 = (void*)0;
struct sNode* __result198__;
char* source_tail_547;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct buffer* header_548;
void* __right_value681 = (void*)0;
char* name_549;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
char* name_550;
void* __right_value684 = (void*)0;
int i_551;
struct sType* param_type_552;
char* param_name_556;
char* default_parametor_557;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
char* impl_name_558;
void* __right_value690 = (void*)0;
char* result_type_name_559;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
char* impl_name_560;
void* __right_value693 = (void*)0;
char* result_type_name_561;
void* __right_value694 = (void*)0;
int i_562;
struct sType* param_type_563;
char* param_name_564;
char* default_parametor_565;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct sBlock* block_566;
_Bool static__567;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
char* new_fun_name_568;
void* __right_value703 = (void*)0;
char* __dec_obj147;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct sFun* fun_569;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct sFun* fun2_570;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value718 = (void*)0;
struct sNode* __result203__;
void* __right_value719 = (void*)0;
char* new_fun_name_572;
void* __right_value720 = (void*)0;
char* __dec_obj150;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct sFun* fun_573;
void* __right_value726 = (void*)0;
struct sFun* fun2_574;
void* __right_value727 = (void*)0;
char* source_tail_575;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct buffer* header_576;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value736 = (void*)0;
struct sNode* __result206__;
void* __right_value737 = (void*)0;
char* asm_fun_578;
void* __right_value738 = (void*)0;
char* __dec_obj153;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct sFun* fun_579;
void* __right_value744 = (void*)0;
struct sFun* fun2_580;
void* __right_value745 = (void*)0;
char* source_tail_581;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct buffer* header_582;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value754 = (void*)0;
struct sNode* __result209__;
struct sNode* __result210__;
fun_name_496 = (void*)0;
    header_head_484=info->p;
    source_head_485=info->p;
    result_type_486=((void*)0);
    var_name_487=((void*)0);
    constructor__488=(_Bool)0;
    if(info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value624=parse_word(info)));
        __right_value624 = come_decrement_ref_count2(__right_value624, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj139=result_type_486;
        result_type_486=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_486->mHeap=(_Bool)1;
        constructor__488=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value626=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_489=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_490=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_491=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value626,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj140=result_type_486;
        result_type_486=(struct sType*)come_increment_ref_count(result_type2_489);
        come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj141=var_name_487;
        var_name_487=(char*)come_increment_ref_count(var_name2_490);
        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(info->in_class) {
        }
        if(!err_491) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_489,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_490 = come_decrement_ref_count2(var_name2_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_492=(_Bool)0;
    {
        p_493=info->p;
        sline_494=info->sline;
        buf2_495=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value627=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1656, "buffer"))))));
        come_call_finalizer3(__right_value627,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_495,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(*info->p==91&&*(info->p+1)==93) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(buffer_length(buf2_495)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_492=(_Bool)1;
        }
        info->p=p_493;
        info->sline=sline_494;
        come_call_finalizer3(buf2_495,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_497=((void*)0);
    if(constructor__488) {
        base_fun_name_497=(char*)come_increment_ref_count(((char*)(__right_value629=__builtin_string("initialize"))));
        __right_value629 = come_decrement_ref_count2(__right_value629, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj142=fun_name_496;
        fun_name_496=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_497,info,(_Bool)1));
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        if(method_definition_492) {
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value631=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            obj_type_498=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_499=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_500=multiple_assign_var8->v3;
            come_call_finalizer3(__right_value631,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(!err_500) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            base_fun_name_497=(char*)come_increment_ref_count(((char*)(__right_value632=parse_word(info))));
            __right_value632 = come_decrement_ref_count2(__right_value632, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj143=fun_name_496;
            fun_name_496=(char*)come_increment_ref_count(create_method_name(obj_type_498,(_Bool)0,base_fun_name_497,info,(_Bool)1));
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(obj_type_498,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_499 = come_decrement_ref_count2(name_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(info->impl_type) {
                base_fun_name_497=(char*)come_increment_ref_count(((char*)(__right_value634=parse_word(info))));
                __right_value634 = come_decrement_ref_count2(__right_value634, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj144=fun_name_496;
                fun_name_496=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_497,info,(_Bool)1));
                __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj145=fun_name_496;
                fun_name_496=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                base_fun_name_497=(char*)come_increment_ref_count(((char*)(__right_value637=__builtin_string(fun_name_496))));
                __right_value637 = come_decrement_ref_count2(__right_value637, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
    }
    if(info->in_class&&charp_operator_equals(base_fun_name_497,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value638=parse_params(info,constructor__488)));
    param_types_501=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_502=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_503=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_504=multiple_assign_var9->v4;
    come_call_finalizer3(__right_value638,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_505=info->p;
    if(info->in_class&&charp_operator_equals(base_fun_name_497,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_506=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value639=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1723, "buffer"))))));
    come_call_finalizer3(__right_value639,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    buffer_append(header_buf_506,header_head_484,header_tail_505-header_head_484);
    buffer_append_char(header_buf_506,0);
    version_507=0;
    if(parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_508=0;
        while(xisdigit(*info->p)) {
            n_508=n_508*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_507=n_508;
    }
    if(charp_operator_equals(base_fun_name_497,"lambda")) {
        block_509=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        static int lambda_num_510=0;
        lambda_num_510++;
        fun_name_511=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_510));
        result_type_486->mStatic=(_Bool)0;
        fun_512=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value643=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1753, "sFun")))),(char*)come_increment_ref_count(((char*)(__right_value644=__builtin_string(fun_name_511)))),(struct sType*)come_increment_ref_count(result_type_486),(struct list$1sTypeph*)come_increment_ref_count(param_types_501),(struct list$1charph*)come_increment_ref_count(param_names_502),(struct list$1charph*)come_increment_ref_count(param_default_parametors_503),(_Bool)0,var_args_504,(struct sBlock*)come_increment_ref_count(block_509),(_Bool)1,(char*)come_increment_ref_count(((char*)(__right_value645=buffer_to_string(header_buf_506)))),(char*)come_increment_ref_count(((char*)(__right_value646=__builtin_string("")))),info));
        come_call_finalizer3(__right_value643,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        __right_value644 = come_decrement_ref_count2(__right_value644, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value645 = come_decrement_ref_count2(__right_value645, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value646 = come_decrement_ref_count2(__right_value646, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun2_513=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value648=__builtin_string(fun_name_511))));
        __right_value648 = come_decrement_ref_count2(__right_value648, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_513==((void*)0)||fun2_513->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value649=string_clone(fun_name_511)))),(struct sFun*)come_increment_ref_count(fun_512));
            __right_value649 = come_decrement_ref_count2(__right_value649, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        base_fun_name_497 = come_decrement_ref_count2(base_fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1765, "struct sNode");
        _inf_obj_value5=come_increment_ref_count(((struct sLambdaNode*)(__right_value651=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value650=(struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 1765, "sLambdaNode")))),fun_512,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result185__ = __result_obj__ = ((struct sNode*)(__right_value654=_inf_value5));
        come_call_finalizer3(block_509,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_511 = come_decrement_ref_count2(fun_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_512,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_486,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_487 = come_decrement_ref_count2(var_name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_496 = come_decrement_ref_count2(fun_name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_502,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_503,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_506,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value650,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value651,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value654) { __right_value654 = come_decrement_ref_count2(__right_value654, ((struct sNode*)__right_value654)->finalize, ((struct sNode*)__right_value654)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result185__;
        come_call_finalizer3(block_509,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_511 = come_decrement_ref_count2(fun_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_512,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
            none_generics_name_515=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
            generics_sname_516=(char*)come_increment_ref_count(__builtin_string(info->sname));
            generics_sline_517=info->sline;
            block_518=(char*)come_increment_ref_count(skip_block(info));
            fun_519=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(__right_value658=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1775, "sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value659=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value660=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(__right_value661=__builtin_string(fun_name_496)))),(struct sType*)come_increment_ref_count(result_type_486),(struct list$1sTypeph*)come_increment_ref_count(param_types_501),(struct list$1charph*)come_increment_ref_count(param_names_502),(struct list$1charph*)come_increment_ref_count(param_default_parametors_503),var_args_504,(char*)come_increment_ref_count(block_518),info,(char*)come_increment_ref_count(((char*)(__right_value662=__builtin_string(generics_sname_516)))),generics_sline_517));
            come_call_finalizer3(__right_value658,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value659,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value660,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            __right_value661 = come_decrement_ref_count2(__right_value661, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value662 = come_decrement_ref_count2(__right_value662, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            fun_name3_520=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_515,base_fun_name_497));
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(__right_value668=__builtin_string(fun_name3_520)))),(struct sGenericsFun*)come_increment_ref_count(fun_519));
            __right_value668 = come_decrement_ref_count2(__right_value668, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            base_fun_name_497 = come_decrement_ref_count2(base_fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __result197__ = __result_obj__ = (struct sNode*)((void*)0);
            none_generics_name_515 = come_decrement_ref_count2(none_generics_name_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_516 = come_decrement_ref_count2(generics_sname_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_518 = come_decrement_ref_count2(block_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_519,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_520 = come_decrement_ref_count2(fun_name3_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_486,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_487 = come_decrement_ref_count2(var_name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_496 = come_decrement_ref_count2(fun_name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_502,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_503,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_506,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result197__;
            none_generics_name_515 = come_decrement_ref_count2(none_generics_name_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_516 = come_decrement_ref_count2(generics_sname_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_518 = come_decrement_ref_count2(block_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_519,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_520 = come_decrement_ref_count2(fun_name3_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(list$1charph_length(info->method_generics_type_names)>0) {
                generics_sname_542=(char*)come_increment_ref_count(__builtin_string(info->sname));
                generics_sline_543=info->sline;
                block_544=(char*)come_increment_ref_count(skip_block(info));
                fun_545=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count(((struct sGenericsFun*)(__right_value671=(struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1791, "sGenericsFun")))),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value672=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value673=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(((char*)(__right_value674=__builtin_string(fun_name_496)))),(struct sType*)come_increment_ref_count(result_type_486),(struct list$1sTypeph*)come_increment_ref_count(param_types_501),(struct list$1charph*)come_increment_ref_count(param_names_502),(struct list$1charph*)come_increment_ref_count(param_default_parametors_503),var_args_504,(char*)come_increment_ref_count(block_544),info,(char*)come_increment_ref_count(((char*)(__right_value675=__builtin_string(generics_sname_542)))),generics_sline_543));
                come_call_finalizer3(__right_value671,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value672,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value673,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                __right_value674 = come_decrement_ref_count2(__right_value674, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __right_value675 = come_decrement_ref_count2(__right_value675, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                fun_name3_546=(char*)come_increment_ref_count(charp_clone(base_fun_name_497));
                map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(((char*)(__right_value678=__builtin_string(fun_name3_546)))),(struct sGenericsFun*)come_increment_ref_count(fun_545));
                __right_value678 = come_decrement_ref_count2(__right_value678, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                base_fun_name_497 = come_decrement_ref_count2(base_fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                __result198__ = __result_obj__ = (struct sNode*)((void*)0);
                generics_sname_542 = come_decrement_ref_count2(generics_sname_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_544 = come_decrement_ref_count2(block_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_545,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_546 = come_decrement_ref_count2(fun_name3_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_486,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_487 = come_decrement_ref_count2(var_name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_496 = come_decrement_ref_count2(fun_name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_502,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_503,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_506,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result198__;
                generics_sname_542 = come_decrement_ref_count2(generics_sname_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_544 = come_decrement_ref_count2(block_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_545,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_546 = come_decrement_ref_count2(fun_name3_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(*info->p==123) {
                    source_tail_547=info->p-1;
                    header_548=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value679=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1804, "buffer"))))));
                    come_call_finalizer3(__right_value679,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                    if(constructor__488) {
                        if(list$1sTypeph_length(param_types_501)==1) {
                            name_549=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                            buffer_append_str(header_548,((char*)(__right_value682=xsprintf("extern %s*%% %s*::initialize(%s*%% self);\n",name_549,name_549,name_549))));
                            __right_value682 = come_decrement_ref_count2(__right_value682, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            name_549 = come_decrement_ref_count2(name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            name_550=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                            buffer_append_str(header_548,((char*)(__right_value684=xsprintf("extern %s*%% %s*::initialize(%s*%% self, ",name_550,name_550,name_550))));
                            __right_value684 = come_decrement_ref_count2(__right_value684, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_551=1;                            i_551<list$1sTypeph_length(param_types_501);                            i_551++                            ){
                                param_type_552=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_501,i_551), "05function.c", 1816, 1));
                                param_name_556=((char*)come_null_check(list$1charphp_operator_load_element(param_names_502,i_551), "05function.c", 1817, 2));
                                default_parametor_557=list$1charphp_operator_load_element(param_default_parametors_503,i_551);
                                if(default_parametor_557) {
                                    buffer_append_str(header_548,((char*)(__right_value686=xsprintf("extern %s %s=%s",((char*)(__right_value685=make_come_type_name_string_no_solved(param_type_552,info))),param_name_556,default_parametor_557))));
                                    __right_value685 = come_decrement_ref_count2(__right_value685, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    __right_value686 = come_decrement_ref_count2(__right_value686, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    buffer_append_str(header_548,((char*)(__right_value688=xsprintf("extern %s %s",((char*)(__right_value687=make_come_type_name_string_no_solved(param_type_552,info))),param_name_556))));
                                    __right_value687 = come_decrement_ref_count2(__right_value687, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    __right_value688 = come_decrement_ref_count2(__right_value688, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(i_551!=list$1sTypeph_length(param_types_501)-1) {
                                    buffer_append_str(header_548,",");
                                }
                            }
                            buffer_append_str(header_548,");\n");
                            name_550 = come_decrement_ref_count2(name_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(info->in_class&&info->impl_type) {
                            if(list$1sTypeph_length(param_types_501)==1) {
                                impl_name_558=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                                result_type_name_559=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_486,info));
                                buffer_append_str(header_548,((char*)(__right_value691=xsprintf("extern %s %s*::%s(%s* self);\n",result_type_name_559,impl_name_558,base_fun_name_497,impl_name_558))));
                                __right_value691 = come_decrement_ref_count2(__right_value691, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                impl_name_558 = come_decrement_ref_count2(impl_name_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                result_type_name_559 = come_decrement_ref_count2(result_type_name_559, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                impl_name_560=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                                result_type_name_561=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_486,info));
                                buffer_append_str(header_548,((char*)(__right_value694=xsprintf("extern %s %s*::%s(%s* self, ",result_type_name_561,impl_name_560,base_fun_name_497,impl_name_560))));
                                __right_value694 = come_decrement_ref_count2(__right_value694, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                for(                                i_562=1;                                i_562<list$1sTypeph_length(param_types_501);                                i_562++                                ){
                                    param_type_563=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_501,i_562), "05function.c", 1847, 3));
                                    param_name_564=((char*)come_null_check(list$1charphp_operator_load_element(param_names_502,i_562), "05function.c", 1848, 4));
                                    default_parametor_565=list$1charphp_operator_load_element(param_default_parametors_503,i_562);
                                    if(default_parametor_565) {
                                        buffer_append_str(header_548,((char*)(__right_value696=xsprintf("extern %s %s=%s",((char*)(__right_value695=make_come_type_name_string_no_solved(param_type_563,info))),param_name_564,default_parametor_565))));
                                        __right_value695 = come_decrement_ref_count2(__right_value695, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __right_value696 = come_decrement_ref_count2(__right_value696, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        buffer_append_str(header_548,((char*)(__right_value698=xsprintf("extern %s %s",((char*)(__right_value697=make_come_type_name_string_no_solved(param_type_563,info))),param_name_564))));
                                        __right_value697 = come_decrement_ref_count2(__right_value697, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __right_value698 = come_decrement_ref_count2(__right_value698, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(i_562!=list$1sTypeph_length(param_types_501)-1) {
                                        buffer_append_str(header_548,",");
                                    }
                                }
                                buffer_append_str(header_548,");\n");
                                impl_name_560 = come_decrement_ref_count2(impl_name_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                result_type_name_561 = come_decrement_ref_count2(result_type_name_561, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        else {
                            buffer_append(header_548,source_head_485,source_tail_547-source_head_485);
                            buffer_append_str(header_548,";\n");
                        }
                    }
                    if(!result_type_486->mStatic) {
                        add_come_code_at_come_header(info,"%s",((char*)(__right_value699=buffer_to_string(header_548))));
                        __right_value699 = come_decrement_ref_count2(__right_value699, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    block_566=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__488));
                    static__567=(_Bool)0;
                    if(result_type_486->mStatic) {
                        result_type_486->mStatic=(_Bool)0;
                        static__567=(_Bool)1;
                    }
                    if(version_507>0) {
                        new_fun_name_568=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value701=__builtin_string(fun_name_496))),version_507));
                        __right_value701 = come_decrement_ref_count2(__right_value701, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj147=fun_name_496;
                        fun_name_496=(char*)come_increment_ref_count(__builtin_string(new_fun_name_568));
                        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                        new_fun_name_568 = come_decrement_ref_count2(new_fun_name_568, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    fun_569=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value704=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1888, "sFun")))),(char*)come_increment_ref_count(((char*)(__right_value705=__builtin_string(fun_name_496)))),(struct sType*)come_increment_ref_count(result_type_486),(struct list$1sTypeph*)come_increment_ref_count(param_types_501),(struct list$1charph*)come_increment_ref_count(param_names_502),(struct list$1charph*)come_increment_ref_count(param_default_parametors_503),(_Bool)0,var_args_504,(struct sBlock*)come_increment_ref_count(((struct sBlock*)(__right_value706=sBlock_clone(block_566)))),static__567,(char*)come_increment_ref_count(((char*)(__right_value707=buffer_to_string(header_buf_506)))),(char*)come_increment_ref_count(((char*)(__right_value708=__builtin_string(info->sname)))),info));
                    come_call_finalizer3(__right_value704,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                    __right_value705 = come_decrement_ref_count2(__right_value705, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(__right_value706,sBlock_finalize, 0, 1, 0, 0, __result_obj__);
                    __right_value707 = come_decrement_ref_count2(__right_value707, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    __right_value708 = come_decrement_ref_count2(__right_value708, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(info->in_class) {
                        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value710=string_clone(fun_name_496)))),(struct sFun*)come_increment_ref_count(fun_569));
                        __right_value710 = come_decrement_ref_count2(__right_value710, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        fun2_570=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value711=__builtin_string(fun_name_496))));
                        __right_value711 = come_decrement_ref_count2(__right_value711, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(fun2_570==((void*)0)||fun2_570->mExternal) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value712=string_clone(fun_name_496)))),(struct sFun*)come_increment_ref_count(fun_569));
                            __right_value712 = come_decrement_ref_count2(__right_value712, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                    base_fun_name_497 = come_decrement_ref_count2(base_fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1909, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(__right_value714=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value713=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1909, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_569),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sFunNode_finalize;
                    _inf_value6->clone=(void*)sFunNode_clone;
                    _inf_value6->compile=(void*)sFunNode_compile;
                    _inf_value6->sline=(void*)sNodeBase_sline;
                    _inf_value6->sname=(void*)sNodeBase_sname;
                    _inf_value6->terminated=(void*)sNodeBase_terminated;
                    _inf_value6->kind=(void*)sFunNode_kind;
                    __result203__ = __result_obj__ = ((struct sNode*)(__right_value718=_inf_value6));
                    come_call_finalizer3(header_548,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(block_566,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(fun_569,sFun_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_486,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_487 = come_decrement_ref_count2(var_name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_496 = come_decrement_ref_count2(fun_name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_names_502,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_default_parametors_503,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(header_buf_506,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value713,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(__right_value714,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(__right_value718) { __right_value718 = come_decrement_ref_count2(__right_value718, ((struct sNode*)__right_value718)->finalize, ((struct sNode*)__right_value718)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result203__;
                    come_call_finalizer3(header_548,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(block_566,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(fun_569,sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(xisalpha(*info->p)||*info->p==95||*info->p==59) {
                        if(version_507>0) {
                            new_fun_name_572=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_496,version_507));
                            __dec_obj150=fun_name_496;
                            fun_name_496=(char*)come_increment_ref_count(__builtin_string(new_fun_name_572));
                            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                            new_fun_name_572 = come_decrement_ref_count2(new_fun_name_572, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(*info->p==59) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            result_type_486->mStatic=(_Bool)0;
                            fun_573=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value721=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1923, "sFun")))),(char*)come_increment_ref_count(((char*)(__right_value722=__builtin_string(fun_name_496)))),(struct sType*)come_increment_ref_count(result_type_486),(struct list$1sTypeph*)come_increment_ref_count(param_types_501),(struct list$1charph*)come_increment_ref_count(param_names_502),(struct list$1charph*)come_increment_ref_count(param_default_parametors_503),(_Bool)1,var_args_504,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(__right_value723=buffer_to_string(header_buf_506)))),(char*)come_increment_ref_count(((char*)(__right_value724=__builtin_string(info->sname)))),info));
                            come_call_finalizer3(__right_value721,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            __right_value722 = come_decrement_ref_count2(__right_value722, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __right_value723 = come_decrement_ref_count2(__right_value723, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __right_value724 = come_decrement_ref_count2(__right_value724, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            fun2_574=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value726=__builtin_string(fun_name_496))));
                            __right_value726 = come_decrement_ref_count2(__right_value726, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_574==((void*)0)||fun2_574->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value727=string_clone(fun_name_496)))),(struct sFun*)come_increment_ref_count(fun_573));
                                __right_value727 = come_decrement_ref_count2(__right_value727, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            base_fun_name_497 = come_decrement_ref_count2(base_fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            source_tail_575=info->p;
                            header_576=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value728=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1939, "buffer"))))));
                            come_call_finalizer3(__right_value728,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_576,source_head_485,source_tail_575-source_head_485);
                            add_come_code_at_come_header(info,"%s",((char*)(__right_value730=buffer_to_string(header_576))));
                            __right_value730 = come_decrement_ref_count2(__right_value730, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1944, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(__right_value732=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value731=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1944, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_573),info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sFunNode_finalize;
                            _inf_value7->clone=(void*)sFunNode_clone;
                            _inf_value7->compile=(void*)sFunNode_compile;
                            _inf_value7->sline=(void*)sNodeBase_sline;
                            _inf_value7->sname=(void*)sNodeBase_sname;
                            _inf_value7->terminated=(void*)sNodeBase_terminated;
                            _inf_value7->kind=(void*)sFunNode_kind;
                            __result206__ = __result_obj__ = ((struct sNode*)(__right_value736=_inf_value7));
                            come_call_finalizer3(fun_573,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_576,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_486,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_487 = come_decrement_ref_count2(var_name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_496 = come_decrement_ref_count2(fun_name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names_502,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_503,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_506,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(__right_value731,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(__right_value732,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value736) { __right_value736 = come_decrement_ref_count2(__right_value736, ((struct sNode*)__right_value736)->finalize, ((struct sNode*)__right_value736)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result206__;
                            come_call_finalizer3(fun_573,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_576,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            asm_fun_578=(char*)come_increment_ref_count(parse_attribute(info));
                            if(string_operator_not_equals(asm_fun_578,"")) {
                                __dec_obj153=fun_name_496;
                                fun_name_496=(char*)come_increment_ref_count(__builtin_string(asm_fun_578));
                                __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            expected_next_character(59,info);
                            result_type_486->mStatic=(_Bool)0;
                            fun_579=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value739=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1957, "sFun")))),(char*)come_increment_ref_count(((char*)(__right_value740=__builtin_string(fun_name_496)))),(struct sType*)come_increment_ref_count(result_type_486),(struct list$1sTypeph*)come_increment_ref_count(param_types_501),(struct list$1charph*)come_increment_ref_count(param_names_502),(struct list$1charph*)come_increment_ref_count(param_default_parametors_503),(_Bool)1,var_args_504,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(__right_value741=buffer_to_string(header_buf_506)))),(char*)come_increment_ref_count(((char*)(__right_value742=__builtin_string(info->sname)))),info));
                            come_call_finalizer3(__right_value739,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                            __right_value740 = come_decrement_ref_count2(__right_value740, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __right_value741 = come_decrement_ref_count2(__right_value741, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            __right_value742 = come_decrement_ref_count2(__right_value742, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            fun2_580=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value744=__builtin_string(fun_name_496))));
                            __right_value744 = come_decrement_ref_count2(__right_value744, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_580==((void*)0)||fun2_580->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value745=string_clone(fun_name_496)))),(struct sFun*)come_increment_ref_count(fun_579));
                                __right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            base_fun_name_497 = come_decrement_ref_count2(base_fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            source_tail_581=info->p;
                            header_582=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value746=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1973, "buffer"))))));
                            come_call_finalizer3(__right_value746,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                            buffer_append(header_582,source_head_485,source_tail_581-source_head_485);
                            add_come_code_at_come_header(info,"%s",((char*)(__right_value748=buffer_to_string(header_582))));
                            __right_value748 = come_decrement_ref_count2(__right_value748, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1978, "struct sNode");
                            _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(__right_value750=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value749=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1978, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_579),info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sFunNode_finalize;
                            _inf_value8->clone=(void*)sFunNode_clone;
                            _inf_value8->compile=(void*)sFunNode_compile;
                            _inf_value8->sline=(void*)sNodeBase_sline;
                            _inf_value8->sname=(void*)sNodeBase_sname;
                            _inf_value8->terminated=(void*)sNodeBase_terminated;
                            _inf_value8->kind=(void*)sFunNode_kind;
                            __result209__ = __result_obj__ = ((struct sNode*)(__right_value754=_inf_value8));
                            asm_fun_578 = come_decrement_ref_count2(asm_fun_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_579,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_582,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type_486,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_487 = come_decrement_ref_count2(var_name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_496 = come_decrement_ref_count2(fun_name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_names_502,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_default_parametors_503,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_buf_506,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(__right_value749,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(__right_value750,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value754) { __right_value754 = come_decrement_ref_count2(__right_value754, ((struct sNode*)__right_value754)->finalize, ((struct sNode*)__right_value754)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result209__;
                            asm_fun_578 = come_decrement_ref_count2(asm_fun_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(fun_579,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(header_582,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        err_msg(info,"invalid character(%c)(2)\n",*info->p);
                        exit(2);
                    }
                }
            }
        }
    }
    info->constructor_=(_Bool)0;
    base_fun_name_497 = come_decrement_ref_count2(base_fun_name_497, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result210__ = __result_obj__ = (struct sNode*)((void*)0);
    come_call_finalizer3(result_type_486,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_487 = come_decrement_ref_count2(var_name_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_496 = come_decrement_ref_count2(fun_name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_502,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_503,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_506,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result210__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result183__;
void* __right_value652 = (void*)0;
struct sLambdaNode* result_514;
void* __right_value653 = (void*)0;
char* __dec_obj146;
struct sLambdaNode* __result184__;
    if(self==(void*)0) {
        __result183__ = __result_obj__ = (void*)0;
        return __result183__;
    }
    result_514=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"));
    if(self!=((void*)0)) {
        result_514->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj146=result_514->sname;
        result_514->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_514->mFun=self->mFun;
    }
    __result184__ = __result_obj__ = result_514;
    come_call_finalizer3(result_514,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result184__;
}

static int list$1charph_length(struct list$1charph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_538;
unsigned int it_539;
_Bool same_key_exist_540;
char* it2_541;
struct map$2charphsGenericsFunph* __result196__;
    if(self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_538=string_get_hash_key(key)%self->size;
    it_539=hash_538;
    while((_Bool)1) {
        if(self->item_existance[it_539]) {
            if(string_equals(self->keys[it_539],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_539]);
                    self->keys[it_539] = come_decrement_ref_count2(self->keys[it_539], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_539]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_539]);
                    self->keys[it_539]=key;
                }
                if(1) {
                    come_call_finalizer3(self->items[it_539],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_539]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_539]=item;
                }
                break;
            }
            it_539++;
            if(it_539>=self->size) {
                it_539=0;
            }
            else {
                if(it_539==hash_538) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_539]=(_Bool)1;
            if(1) {
                self->keys[it_539]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_539]=key;
            }
            if(1) {
                self->items[it_539]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_539]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_540=(_Bool)0;
    for(    it2_541=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_541=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_541,key)) {
            same_key_exist_540=(_Bool)1;
        }
    }
    if(!same_key_exist_540) {
        list$1charp_push_back(self->key_list,key);
    }
    __result196__ = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result196__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_521;
void* __right_value665 = (void*)0;
char** keys_522;
void* __right_value666 = (void*)0;
struct sGenericsFun** items_523;
void* __right_value667 = (void*)0;
_Bool* item_existance_524;
int len_525;
char* it_528;
struct sGenericsFun* default_value_531;
struct sGenericsFun* it2_532;
unsigned int hash_535;
int n_536;
struct sGenericsFun* default_value_537;
default_value_531 = (void*)0;
default_value_537 = (void*)0;
    size_521=self->size*10;
    keys_522=(char**)come_increment_ref_count(((char**)(__right_value665=(char**)come_calloc(1, sizeof(char*)*(1*(size_521)), "./neo-c.h", 1527, "char*%"))));
    __right_value665 = come_decrement_ref_count2(__right_value665, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    items_523=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value666=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_521)), "./neo-c.h", 1528, "sGenericsFun*%"))));
    come_call_finalizer3(__right_value666,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
    item_existance_524=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value667=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_521)), "./neo-c.h", 1529, "bool"))));
    __right_value667 = come_decrement_ref_count2(__right_value667, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    len_525=0;
    for(    it_528=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_528=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_531,0,sizeof(struct sGenericsFun*));
        it2_532=map$2charphsGenericsFunph_at(self,it_528,default_value_531);
        hash_535=string_get_hash_key(it_528)%size_521;
        n_536=hash_535;
        while((_Bool)1) {
            if(item_existance_524[n_536]) {
                n_536++;
                if(n_536>=size_521) {
                    n_536=0;
                }
                else {
                    if(n_536==hash_535) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_524[n_536]=(_Bool)1;
                keys_522[n_536]=it_528;
                items_523[n_536]=map$2charphsGenericsFunph_at(self,it_528,default_value_537);
                len_525++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_522;
    self->items=items_523;
    self->item_existance=item_existance_524;
    self->size=size_521;
    self->len=len_525;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_526;
char* __result186__;
char* __result187__;
char* result_527;
char* __result188__;
result_526 = (void*)0;
result_527 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_526,0,sizeof(char*));
        __result186__ = __result_obj__ = result_526;
        return __result186__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result187__ = __result_obj__ = self->key_list->it->item;
        return __result187__;
    }
    memset(&result_527,0,sizeof(char*));
    __result188__ = __result_obj__ = result_527;
    return __result188__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_529;
char* __result189__;
char* __result190__;
char* result_530;
char* __result191__;
result_529 = (void*)0;
result_530 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_529,0,sizeof(char*));
        __result189__ = __result_obj__ = result_529;
        return __result189__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result190__ = __result_obj__ = self->key_list->it->item;
        return __result190__;
    }
    memset(&result_530,0,sizeof(char*));
    __result191__ = __result_obj__ = result_530;
    return __result191__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_533;
unsigned int it_534;
struct sGenericsFun* __result192__;
struct sGenericsFun* __result193__;
struct sGenericsFun* __result194__;
struct sGenericsFun* __result195__;
    hash_533=string_get_hash_key(((char*)key))%self->size;
    it_534=hash_533;
    while((_Bool)1) {
        if(self->item_existance[it_534]) {
            if(string_equals(self->keys[it_534],key)) {
                __result192__ = __result_obj__ = self->items[it_534];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result192__;
            }
            it_534++;
            if(it_534>=self->size) {
                it_534=0;
            }
            else {
                if(it_534==hash_533) {
                    __result193__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    return __result193__;
                }
            }
        }
        else {
            __result194__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result194__;
        }
    }
    __result195__ = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result195__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_553;
int i_554;
char* __result199__;
char* default_value_555;
char* __result200__;
default_value_555 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_553=self->head;
    i_554=0;
    while(it_553!=((void*)0)) {
        if(position==i_554) {
            __result199__ = __result_obj__ = it_553->item;
            return __result199__;
        }
        it_553=it_553->next;
        i_554++;
    }
    memset(&default_value_555,0,sizeof(char*));
    __result200__ = __result_obj__ = default_value_555;
    default_value_555 = come_decrement_ref_count2(default_value_555, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result200__;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_584;
char* __dec_obj156;
char* last_code2_585;
char* __dec_obj157;
char* last_code3_586;
char* __dec_obj158;
struct sClass* current_stack_frame_struct_587;
struct sFun* finalizer_588;
void* __right_value755 = (void*)0;
char* real_fun_name_589;
void* __right_value756 = (void*)0;
char* user_real_fun_name_590;
struct sFun* user_finalizer_591;
void* __right_value757 = (void*)0;
struct sType* type2_592;
struct sClass* klass_593;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct buffer* source_594;
struct list$1tuple2$2charphsTypephph* o2_saved_596;
struct tuple2$2charphsTypeph* it_599;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_602;
struct sType* field_type_603;
char* p_605;
int sline_606;
char* sname_607;
char* head_608;
struct buffer* source3_609;
struct buffer* __dec_obj159;
void* __right_value760 = (void*)0;
char* __dec_obj160;
void* __right_value761 = (void*)0;
struct sBlock* block_610;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct sType* result_type_611;
void* __right_value764 = (void*)0;
char* name_612;
void* __right_value765 = (void*)0;
struct sType* self_type_613;
struct sType* __list_values21___614[1];
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct list$1sTypeph* param_types_615;
void* __right_value768 = (void*)0;
char* __list_values22___616[1];
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
struct list$1charph* param_names_617;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct list$1charph* param_default_parametors_618;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct buffer* header_buf_619;
void* __right_value775 = (void*)0;
int i_620;
struct sType* param_type_621;
char* param_name_622;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct sFun* fun_623;
void* __right_value781 = (void*)0;
struct sFun* fun2_624;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value788 = (void*)0;
struct sNode* node_625;
struct buffer* __dec_obj163;
char* __dec_obj164;
char* __dec_obj165;
char* __dec_obj166;
char* __dec_obj167;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct tuple2$2sFunpcharph* __result220__;
    last_code_584=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj156=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_585=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj157=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_586=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj158=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_587=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_588=((void*)0);
    real_fun_name_589=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_590=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_591=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_590);
    type2_592=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_592;
    klass_593=type->mClass;
    if(type->mPointerNum>0&&klass_593->mStruct) {
        source_594=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value758=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2019, "buffer"))))));
        come_call_finalizer3(__right_value758,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_594,123);
        if(user_finalizer_591) {
            char source2_595[1024];
            memset(&source2_595, 0, sizeof(char)            *(1024)            );
            snprintf(source2_595,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_590);
            buffer_append_str(source_594,source2_595);
        }
        klass_593=map$2charphsClassphp_operator_load_element(info->classes,klass_593->mName);
        for(        o2_saved_596=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_593->mFields)),it_599=list$1tuple2$2charphsTypephph_begin((o2_saved_596));        !list$1tuple2$2charphsTypephph_end((o2_saved_596));        it_599=list$1tuple2$2charphsTypephph_next((o2_saved_596))        ){
            multiple_assign_var10=it_599;
            name_602=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_603=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(string_operator_equals(type->mClass->mName,field_type_603->mClass->mName)&&type->mPointerNum==field_type_603->mPointerNum&&field_type_603->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_603->mHeap) {
                char source2_604[1024];
                memset(&source2_604, 0, sizeof(char)                *(1024)                );
                snprintf(source2_604,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_602,name_602);
                buffer_append_str(source_594,source2_604);
            }
            name_602 = come_decrement_ref_count2(name_602, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_603,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_596,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_594,125);
        p_605=info->p;
        sline_606=info->sline;
        sname_607=(char*)come_increment_ref_count(info->sname);
        head_608=info->head;
        source3_609=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj159=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_594);
        come_call_finalizer3(__dec_obj159,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_594->buf;
        info->head=source_594->buf;
        __dec_obj160=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_589));
        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_610=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        result_type_611=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value762=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2065, "sType")))),"void",(_Bool)0,info));
        come_call_finalizer3(__right_value762,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_612=(char*)come_increment_ref_count(string_clone(real_fun_name_589));
        self_type_613=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_613->mHeap=(_Bool)0;
        if(self_type_613->mPointerNum>1) {
            self_type_613->mPointerNum=1;
        }
        {__list_values21___614[0]=come_increment_ref_count(self_type_613);
}        param_types_615=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value766=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2072, "struct list$1sTypeph")))),1,__list_values21___614));
        come_call_finalizer3(__right_value766,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values22___616[0]=come_increment_ref_count(((char*)(__right_value768=__builtin_string("self"))));
}        param_names_617=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value769=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2073, "struct list$1charph")))),1,__list_values22___616));
        __right_value768 = come_decrement_ref_count2(__right_value768, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value769,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_618=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value771=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2074, "list$1charph"))))));
        come_call_finalizer3(__right_value771,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_618,((void*)0));
        header_buf_619=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value773=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2077, "buffer"))))));
        come_call_finalizer3(__right_value773,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_619,((char*)(__right_value775=make_come_type_name_string(result_type_611,info))));
        __right_value775 = come_decrement_ref_count2(__right_value775, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_619," ");
        buffer_append_str(header_buf_619,real_fun_name_589);
        buffer_append_str(header_buf_619,"(");
        for(        i_620=0;        i_620<list$1sTypeph_length(param_types_615);        i_620++        ){
            param_type_621=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_615,i_620), "05function.c", 2085, 5));
            param_name_622=((char*)come_null_check(list$1charphp_operator_load_element(param_names_617,i_620), "05function.c", 2086, 6));
            buffer_append_str(header_buf_619,((char*)(__right_value776=make_come_type_name_string(param_type_621,info))));
            __right_value776 = come_decrement_ref_count2(__right_value776, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_619," ");
            buffer_append_str(header_buf_619,param_name_622);
            if(i_620!=list$1sTypeph_length(param_types_615)-1) {
                buffer_append_str(header_buf_619,",");
            }
        }
        buffer_append_str(header_buf_619,")");
        result_type_611->mStatic=(_Bool)0;
        fun_623=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value777=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2100, "sFun")))),(char*)come_increment_ref_count(name_612),(struct sType*)come_increment_ref_count(result_type_611),(struct list$1sTypeph*)come_increment_ref_count(param_types_615),(struct list$1charph*)come_increment_ref_count(param_names_617),(struct list$1charph*)come_increment_ref_count(param_default_parametors_618),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_610),(_Bool)1,(char*)come_increment_ref_count(((char*)(__right_value778=buffer_to_string(header_buf_619)))),(char*)come_increment_ref_count(((char*)(__right_value779=__builtin_string("")))),info));
        come_call_finalizer3(__right_value777,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        __right_value778 = come_decrement_ref_count2(__right_value778, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value779 = come_decrement_ref_count2(__right_value779, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun2_624=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value781=__builtin_string(fun_name))));
        __right_value781 = come_decrement_ref_count2(__right_value781, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_624==((void*)0)||fun2_624->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value782=string_clone(name_612)))),(struct sFun*)come_increment_ref_count(fun_623));
            __right_value782 = come_decrement_ref_count2(__right_value782, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_588=fun_623;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2116, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(__right_value784=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value783=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2116, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_623),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_625=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value783,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value784,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_625,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj163=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_609);
        come_call_finalizer3(__dec_obj163,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_605;
        info->head=head_608;
        info->sline=sline_606;
        __dec_obj164=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_607);
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_594,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_607 = come_decrement_ref_count2(sname_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_609,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_610,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_611,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_612 = come_decrement_ref_count2(name_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_613,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_615,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_617,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_618,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_619,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_623,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_625) { node_625 = come_decrement_ref_count2(node_625, ((struct sNode*)node_625)->finalize, ((struct sNode*)node_625)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_587;
    __dec_obj165=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_584);
    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj166=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_585);
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj167=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_586);
    __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result220__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value790=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(__right_value789=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2136, "struct tuple2$2sFunpcharph")))),finalizer_588,(char*)come_increment_ref_count(real_fun_name_589))));
    last_code_584 = come_decrement_ref_count2(last_code_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_585 = come_decrement_ref_count2(last_code2_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_586 = come_decrement_ref_count2(last_code3_586, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_589 = come_decrement_ref_count2(real_fun_name_589, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_590 = come_decrement_ref_count2(user_real_fun_name_590, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_592,sType_finalize, 0, 0, 0, 0, (void*)0);
    __right_value789 = come_decrement_ref_count2(__right_value789, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value790,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result220__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_597;
struct tuple2$2charphsTypeph* __result211__;
struct tuple2$2charphsTypeph* __result212__;
struct tuple2$2charphsTypeph* result_598;
struct tuple2$2charphsTypeph* __result213__;
result_597 = (void*)0;
result_598 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_597,0,sizeof(struct tuple2$2charphsTypeph*));
        __result211__ = __result_obj__ = result_597;
        return __result211__;
    }
    self->it=self->head;
    if(self->it) {
        __result212__ = __result_obj__ = self->it->item;
        return __result212__;
    }
    memset(&result_598,0,sizeof(struct tuple2$2charphsTypeph*));
    __result213__ = __result_obj__ = result_598;
    return __result213__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_600;
struct tuple2$2charphsTypeph* __result214__;
struct tuple2$2charphsTypeph* __result215__;
struct tuple2$2charphsTypeph* result_601;
struct tuple2$2charphsTypeph* __result216__;
result_600 = (void*)0;
result_601 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_600,0,sizeof(struct tuple2$2charphsTypeph*));
        __result214__ = __result_obj__ = result_600;
        return __result214__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result215__ = __result_obj__ = self->it->item;
        return __result215__;
    }
    memset(&result_601,0,sizeof(struct tuple2$2charphsTypeph*));
    __result216__ = __result_obj__ = result_601;
    return __result216__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj168;
struct tuple2$2sFunpcharph* __result219__;
    self->v1=v1;
    __dec_obj168=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result219__ = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result219__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_627;
char* __dec_obj169;
char* last_code2_628;
char* __dec_obj170;
char* last_code3_629;
char* __dec_obj171;
struct sClass* current_stack_frame_struct_630;
struct sFun* finalizer_631;
void* __right_value791 = (void*)0;
char* real_fun_name_632;
void* __right_value792 = (void*)0;
struct sType* type2_633;
struct sClass* klass_634;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
struct buffer* source_635;
struct list$1tuple2$2charphsTypephph* o2_saved_636;
struct tuple2$2charphsTypeph* it_637;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_638;
struct sType* field_type_639;
char* p_641;
int sline_642;
char* sname_643;
char* head_644;
struct buffer* source3_645;
struct buffer* __dec_obj172;
void* __right_value795 = (void*)0;
char* __dec_obj173;
void* __right_value796 = (void*)0;
struct sBlock* block_646;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
struct sType* result_type_647;
void* __right_value799 = (void*)0;
char* name_648;
void* __right_value800 = (void*)0;
struct sType* self_type_649;
struct sType* __list_values23___650[1];
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct list$1sTypeph* param_types_651;
void* __right_value803 = (void*)0;
char* __list_values24___652[1];
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct list$1charph* param_names_653;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct list$1charph* param_default_parametors_654;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct buffer* header_buf_655;
void* __right_value810 = (void*)0;
int i_656;
struct sType* param_type_657;
char* param_name_658;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
struct sFun* fun_659;
void* __right_value816 = (void*)0;
struct sFun* fun2_660;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value823 = (void*)0;
struct sNode* node_661;
struct buffer* __dec_obj176;
char* __dec_obj177;
char* __dec_obj178;
char* __dec_obj179;
char* __dec_obj180;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct tuple2$2sFunpcharph* __result223__;
    last_code_627=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj169=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_628=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj170=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_629=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj171=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_630=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_631=((void*)0);
    real_fun_name_632=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_633=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_633;
    klass_634=type->mClass;
    if(type->mPointerNum>0&&klass_634->mStruct) {
        source_635=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value793=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2163, "buffer"))))));
        come_call_finalizer3(__right_value793,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_635,123);
        klass_634=map$2charphsClassphp_operator_load_element(info->classes,klass_634->mName);
        for(        o2_saved_636=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_634->mFields)),it_637=list$1tuple2$2charphsTypephph_begin((o2_saved_636));        !list$1tuple2$2charphsTypephph_end((o2_saved_636));        it_637=list$1tuple2$2charphsTypephph_next((o2_saved_636))        ){
            multiple_assign_var11=it_637;
            name_638=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_639=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(string_operator_equals(type->mClass->mName,field_type_639->mClass->mName)&&type->mPointerNum==field_type_639->mPointerNum&&field_type_639->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_639->mHeap) {
                char source2_640[1024];
                memset(&source2_640, 0, sizeof(char)                *(1024)                );
                snprintf(source2_640,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { force_delete borrow self.%s; }\n",name_638,name_638);
                buffer_append_str(source_635,source2_640);
            }
            name_638 = come_decrement_ref_count2(name_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_639,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_636,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_635,125);
        p_641=info->p;
        sline_642=info->sline;
        sname_643=(char*)come_increment_ref_count(info->sname);
        head_644=info->head;
        source3_645=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj172=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_635);
        come_call_finalizer3(__dec_obj172,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_635->buf;
        info->head=source_635->buf;
        __dec_obj173=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_632));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_646=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        result_type_647=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value797=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2202, "sType")))),"void",(_Bool)0,info));
        come_call_finalizer3(__right_value797,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_648=(char*)come_increment_ref_count(string_clone(real_fun_name_632));
        self_type_649=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_649->mHeap=(_Bool)0;
        if(self_type_649->mPointerNum>1) {
            self_type_649->mPointerNum=1;
        }
        {__list_values23___650[0]=come_increment_ref_count(self_type_649);
}        param_types_651=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value801=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2209, "struct list$1sTypeph")))),1,__list_values23___650));
        come_call_finalizer3(__right_value801,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values24___652[0]=come_increment_ref_count(((char*)(__right_value803=__builtin_string("self"))));
}        param_names_653=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value804=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2210, "struct list$1charph")))),1,__list_values24___652));
        __right_value803 = come_decrement_ref_count2(__right_value803, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value804,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_654=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value806=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2211, "list$1charph"))))));
        come_call_finalizer3(__right_value806,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_654,((void*)0));
        header_buf_655=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value808=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2214, "buffer"))))));
        come_call_finalizer3(__right_value808,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_655,((char*)(__right_value810=make_come_type_name_string(result_type_647,info))));
        __right_value810 = come_decrement_ref_count2(__right_value810, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_655," ");
        buffer_append_str(header_buf_655,real_fun_name_632);
        buffer_append_str(header_buf_655,"(");
        for(        i_656=0;        i_656<list$1sTypeph_length(param_types_651);        i_656++        ){
            param_type_657=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_651,i_656), "05function.c", 2222, 7));
            param_name_658=((char*)come_null_check(list$1charphp_operator_load_element(param_names_653,i_656), "05function.c", 2223, 8));
            buffer_append_str(header_buf_655,((char*)(__right_value811=make_come_type_name_string(param_type_657,info))));
            __right_value811 = come_decrement_ref_count2(__right_value811, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_655," ");
            buffer_append_str(header_buf_655,param_name_658);
            if(i_656!=list$1sTypeph_length(param_types_651)-1) {
                buffer_append_str(header_buf_655,",");
            }
        }
        buffer_append_str(header_buf_655,")");
        result_type_647->mStatic=(_Bool)0;
        fun_659=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value812=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2237, "sFun")))),(char*)come_increment_ref_count(name_648),(struct sType*)come_increment_ref_count(result_type_647),(struct list$1sTypeph*)come_increment_ref_count(param_types_651),(struct list$1charph*)come_increment_ref_count(param_names_653),(struct list$1charph*)come_increment_ref_count(param_default_parametors_654),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_646),(_Bool)1,(char*)come_increment_ref_count(((char*)(__right_value813=buffer_to_string(header_buf_655)))),(char*)come_increment_ref_count(((char*)(__right_value814=__builtin_string("")))),info));
        come_call_finalizer3(__right_value812,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        __right_value813 = come_decrement_ref_count2(__right_value813, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value814 = come_decrement_ref_count2(__right_value814, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun2_660=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value816=__builtin_string(fun_name))));
        __right_value816 = come_decrement_ref_count2(__right_value816, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_660==((void*)0)||fun2_660->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value817=string_clone(name_648)))),(struct sFun*)come_increment_ref_count(fun_659));
            __right_value817 = come_decrement_ref_count2(__right_value817, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        finalizer_631=fun_659;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2253, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(__right_value819=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value818=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2253, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_659),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_661=(struct sNode*)come_increment_ref_count(_inf_value10);
        come_call_finalizer3(__right_value818,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value819,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_661,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj176=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_645);
        come_call_finalizer3(__dec_obj176,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_641;
        info->head=head_644;
        info->sline=sline_642;
        __dec_obj177=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_643);
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_635,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_643 = come_decrement_ref_count2(sname_643, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_645,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_646,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_647,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_648 = come_decrement_ref_count2(name_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_649,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_651,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_653,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_654,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_655,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_659,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_661) { node_661 = come_decrement_ref_count2(node_661, ((struct sNode*)node_661)->finalize, ((struct sNode*)node_661)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_630;
    __dec_obj178=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_627);
    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj179=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_628);
    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj180=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_629);
    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result223__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value825=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(__right_value824=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2273, "struct tuple2$2sFunpcharph")))),finalizer_631,(char*)come_increment_ref_count(real_fun_name_632))));
    last_code_627 = come_decrement_ref_count2(last_code_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_628 = come_decrement_ref_count2(last_code2_628, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_629 = come_decrement_ref_count2(last_code3_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_632 = come_decrement_ref_count2(real_fun_name_632, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_633,sType_finalize, 0, 0, 0, 0, (void*)0);
    __right_value824 = come_decrement_ref_count2(__right_value824, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value825,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result223__;
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_663;
char* __dec_obj181;
char* last_code2_664;
char* __dec_obj182;
char* last_code3_665;
char* __dec_obj183;
struct sClass* current_stack_frame_struct_666;
struct sFun* equaler_667;
void* __right_value826 = (void*)0;
char* real_fun_name_668;
void* __right_value827 = (void*)0;
struct sType* type2_669;
struct sClass* klass_670;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct buffer* source_671;
char* name_672;
struct list$1tuple2$2charphsTypephph* o2_saved_674;
struct tuple2$2charphsTypeph* it_675;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_676;
struct sType* field_type_677;
char* p_679;
int sline_680;
char* sname_681;
char* head_682;
struct buffer* source3_683;
struct buffer* __dec_obj184;
void* __right_value830 = (void*)0;
char* __dec_obj185;
void* __right_value831 = (void*)0;
struct sBlock* block_684;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct sType* result_type_685;
void* __right_value834 = (void*)0;
char* name_686;
void* __right_value835 = (void*)0;
struct sType* left_type_687;
void* __right_value836 = (void*)0;
struct sType* right_type_688;
struct sType* __list_values25___689[2];
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct list$1sTypeph* param_types_690;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
char* __list_values26___691[2];
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
struct list$1charph* param_names_692;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct list$1charph* param_default_parametors_693;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
struct buffer* header_buf_694;
void* __right_value847 = (void*)0;
int i_695;
struct sType* param_type_696;
char* param_name_697;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
struct sFun* fun_698;
void* __right_value853 = (void*)0;
struct sFun* fun2_699;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value860 = (void*)0;
struct sNode* node_700;
struct buffer* __dec_obj188;
char* __dec_obj189;
char* __dec_obj190;
char* __dec_obj191;
char* __dec_obj192;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct tuple2$2sFunpcharph* __result226__;
    last_code_663=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj181=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_664=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj182=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_665=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj183=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_666=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_667=((void*)0);
    real_fun_name_668=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_669=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_669;
    klass_670=type->mClass;
    if(type->mPointerNum>0&&!klass_670->mNumber) {
        source_671=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value828=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2298, "buffer"))))));
        come_call_finalizer3(__right_value828,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_671,123);
        if(klass_670->mProtocol) {
            name_672="_protocol_obj";
            char source2_673[1024];
            memset(&source2_673, 0, sizeof(char)            *(1024)            );
            snprintf(source2_673,1024,"return left.%s.equals(right.%s);\n",name_672,name_672);
            buffer_append_str(source_671,source2_673);
        }
        else {
            klass_670=map$2charphsClassphp_operator_load_element(info->classes,klass_670->mName);
            for(            o2_saved_674=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_670->mFields)),it_675=list$1tuple2$2charphsTypephph_begin((o2_saved_674));            !list$1tuple2$2charphsTypephph_end((o2_saved_674));            it_675=list$1tuple2$2charphsTypephph_next((o2_saved_674))            ){
                multiple_assign_var12=it_675;
                name_676=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_677=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(string_operator_equals(type->mClass->mName,field_type_677->mClass->mName)&&type->mPointerNum==field_type_677->mPointerNum&&field_type_677->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_678[1024];
                memset(&source2_678, 0, sizeof(char)                *(1024)                );
                snprintf(source2_678,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_676,name_676);
                buffer_append_str(source_671,source2_678);
                name_676 = come_decrement_ref_count2(name_676, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_677,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_674,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_671,"return true;");
        buffer_append_char(source_671,125);
        p_679=info->p;
        sline_680=info->sline;
        sname_681=(char*)come_increment_ref_count(info->sname);
        head_682=info->head;
        source3_683=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj184=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_671);
        come_call_finalizer3(__dec_obj184,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_671->buf;
        info->head=source_671->buf;
        __dec_obj185=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_668));
        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_684=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        result_type_685=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value832=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2344, "sType")))),"bool",(_Bool)0,info));
        come_call_finalizer3(__right_value832,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_686=(char*)come_increment_ref_count(string_clone(real_fun_name_668));
        left_type_687=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_687->mHeap=(_Bool)0;
        right_type_688=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_688->mHeap=(_Bool)0;
        {__list_values25___689[0]=come_increment_ref_count(left_type_687);
__list_values25___689[1]=come_increment_ref_count(right_type_688);
}        param_types_690=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value837=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2350, "struct list$1sTypeph")))),2,__list_values25___689));
        come_call_finalizer3(__right_value837,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values26___691[0]=come_increment_ref_count(((char*)(__right_value839=__builtin_string("left"))));
__list_values26___691[1]=come_increment_ref_count(((char*)(__right_value840=__builtin_string("right"))));
}        param_names_692=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value841=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2351, "struct list$1charph")))),2,__list_values26___691));
        __right_value839 = come_decrement_ref_count2(__right_value839, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value840 = come_decrement_ref_count2(__right_value840, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value841,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_693=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value843=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2352, "list$1charph"))))));
        come_call_finalizer3(__right_value843,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_693,((void*)0));
        list$1charph_push_back(param_default_parametors_693,((void*)0));
        header_buf_694=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value845=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2356, "buffer"))))));
        come_call_finalizer3(__right_value845,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_694,((char*)(__right_value847=make_come_type_name_string(result_type_685,info))));
        __right_value847 = come_decrement_ref_count2(__right_value847, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_694," ");
        buffer_append_str(header_buf_694,real_fun_name_668);
        buffer_append_str(header_buf_694,"(");
        for(        i_695=0;        i_695<list$1sTypeph_length(param_types_690);        i_695++        ){
            param_type_696=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_690,i_695), "05function.c", 2364, 9));
            param_name_697=((char*)come_null_check(list$1charphp_operator_load_element(param_names_692,i_695), "05function.c", 2365, 10));
            buffer_append_str(header_buf_694,((char*)(__right_value848=make_come_type_name_string(param_type_696,info))));
            __right_value848 = come_decrement_ref_count2(__right_value848, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_694," ");
            buffer_append_str(header_buf_694,param_name_697);
            if(i_695!=list$1sTypeph_length(param_types_690)-1) {
                buffer_append_str(header_buf_694,",");
            }
        }
        buffer_append_str(header_buf_694,")");
        result_type_685->mStatic=(_Bool)0;
        fun_698=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value849=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2379, "sFun")))),(char*)come_increment_ref_count(name_686),(struct sType*)come_increment_ref_count(result_type_685),(struct list$1sTypeph*)come_increment_ref_count(param_types_690),(struct list$1charph*)come_increment_ref_count(param_names_692),(struct list$1charph*)come_increment_ref_count(param_default_parametors_693),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_684),(_Bool)1,(char*)come_increment_ref_count(((char*)(__right_value850=buffer_to_string(header_buf_694)))),(char*)come_increment_ref_count(((char*)(__right_value851=__builtin_string("")))),info));
        come_call_finalizer3(__right_value849,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        __right_value850 = come_decrement_ref_count2(__right_value850, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value851 = come_decrement_ref_count2(__right_value851, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun2_699=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value853=__builtin_string(fun_name))));
        __right_value853 = come_decrement_ref_count2(__right_value853, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_699==((void*)0)||fun2_699->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value854=string_clone(name_686)))),(struct sFun*)come_increment_ref_count(fun_698));
            __right_value854 = come_decrement_ref_count2(__right_value854, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_667=fun_698;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2395, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(__right_value856=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value855=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2395, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_698),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_700=(struct sNode*)come_increment_ref_count(_inf_value11);
        come_call_finalizer3(__right_value855,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value856,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_700,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj188=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_683);
        come_call_finalizer3(__dec_obj188,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_679;
        info->head=head_682;
        info->sline=sline_680;
        __dec_obj189=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_681);
        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_671,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_681 = come_decrement_ref_count2(sname_681, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_683,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_684,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_685,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_686 = come_decrement_ref_count2(name_686, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_687,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_688,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_690,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_692,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_693,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_694,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_698,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_700) { node_700 = come_decrement_ref_count2(node_700, ((struct sNode*)node_700)->finalize, ((struct sNode*)node_700)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_666;
    __dec_obj190=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_663);
    __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj191=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_664);
    __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj192=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_665);
    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result226__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value862=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(__right_value861=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2415, "struct tuple2$2sFunpcharph")))),equaler_667,(char*)come_increment_ref_count(real_fun_name_668))));
    last_code_663 = come_decrement_ref_count2(last_code_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_664 = come_decrement_ref_count2(last_code2_664, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_665 = come_decrement_ref_count2(last_code3_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_668 = come_decrement_ref_count2(real_fun_name_668, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_669,sType_finalize, 0, 0, 0, 0, (void*)0);
    __right_value861 = come_decrement_ref_count2(__right_value861, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value862,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result226__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_702;
char* __dec_obj193;
char* last_code2_703;
char* __dec_obj194;
char* last_code3_704;
char* __dec_obj195;
struct sClass* current_stack_frame_struct_705;
struct sFun* equaler_706;
void* __right_value863 = (void*)0;
char* real_fun_name_707;
void* __right_value864 = (void*)0;
struct sType* type2_708;
struct sClass* klass_709;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct buffer* source_710;
char* name_711;
int i_714;
struct list$1tuple2$2charphsTypephph* o2_saved_715;
struct tuple2$2charphsTypeph* it_716;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_717;
struct sType* field_type_718;
char* p_722;
int sline_723;
char* sname_724;
char* head_725;
struct buffer* source3_726;
struct buffer* __dec_obj196;
void* __right_value867 = (void*)0;
char* __dec_obj197;
void* __right_value868 = (void*)0;
struct sBlock* block_727;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
struct sType* result_type_728;
void* __right_value871 = (void*)0;
char* name_729;
void* __right_value872 = (void*)0;
struct sType* left_type_730;
void* __right_value873 = (void*)0;
struct sType* right_type_731;
struct sType* __list_values27___732[2];
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
struct list$1sTypeph* param_types_733;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
char* __list_values28___734[2];
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
struct list$1charph* param_names_735;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
struct list$1charph* param_default_parametors_736;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
struct buffer* header_buf_737;
void* __right_value884 = (void*)0;
int i_738;
struct sType* param_type_739;
char* param_name_740;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
struct sFun* fun_741;
void* __right_value890 = (void*)0;
struct sFun* fun2_742;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value897 = (void*)0;
struct sNode* node_743;
struct buffer* __dec_obj200;
char* __dec_obj201;
char* __dec_obj202;
char* __dec_obj203;
char* __dec_obj204;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
struct tuple2$2sFunpcharph* __result229__;
    last_code_702=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj193=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_703=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj194=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_704=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj195=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_705=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_706=((void*)0);
    real_fun_name_707=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_708=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_708;
    klass_709=type->mClass;
    if(type->mPointerNum>0&&!klass_709->mNumber) {
        source_710=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value865=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2440, "buffer"))))));
        come_call_finalizer3(__right_value865,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_710,123);
        if(klass_709->mProtocol) {
            name_711="_protocol_obj";
            char source2_712[1024];
            memset(&source2_712, 0, sizeof(char)            *(1024)            );
            snprintf(source2_712,1024,"return !left.%s.equals(right.%s);\n",name_711,name_711);
            buffer_append_str(source_710,source2_712);
        }
        else {
            char source2_713[1024];
            memset(&source2_713, 0, sizeof(char)            *(1024)            );
            snprintf(source2_713,1024,"return !(");
            buffer_append_str(source_710,source2_713);
            i_714=0;
            klass_709=map$2charphsClassphp_operator_load_element(info->classes,klass_709->mName);
            for(            o2_saved_715=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_709->mFields)),it_716=list$1tuple2$2charphsTypephph_begin((o2_saved_715));            !list$1tuple2$2charphsTypephph_end((o2_saved_715));            it_716=list$1tuple2$2charphsTypephph_next((o2_saved_715))            ){
                multiple_assign_var13=it_716;
                name_717=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_718=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(string_operator_equals(type->mClass->mName,field_type_718->mClass->mName)&&type->mPointerNum==field_type_718->mPointerNum&&field_type_718->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_719[1024];
                memset(&source2_719, 0, sizeof(char)                *(1024)                );
                snprintf(source2_719,1024,"left.%s.equals(right.%s)",name_717,name_717);
                buffer_append_str(source_710,source2_719);
                if(i_714==list$1tuple2$2charphsTypephph_length(klass_709->mFields)-1) {
                    char source2_720[1024];
                    memset(&source2_720, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_720,1024,");");
                    buffer_append_str(source_710,source2_720);
                }
                else {
                    char source2_721[1024];
                    memset(&source2_721, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_721,1024," && ");
                    buffer_append_str(source_710,source2_721);
                }
                i_714++;
                name_717 = come_decrement_ref_count2(name_717, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_718,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_715,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_710,125);
        p_722=info->p;
        sline_723=info->sline;
        sname_724=(char*)come_increment_ref_count(info->sname);
        head_725=info->head;
        source3_726=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj196=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_710);
        come_call_finalizer3(__dec_obj196,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_710->buf;
        info->head=source_710->buf;
        __dec_obj197=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_707));
        __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_727=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        result_type_728=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value869=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2503, "sType")))),"bool",(_Bool)0,info));
        come_call_finalizer3(__right_value869,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_729=(char*)come_increment_ref_count(string_clone(real_fun_name_707));
        left_type_730=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_730->mHeap=(_Bool)0;
        right_type_731=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_731->mHeap=(_Bool)0;
        {__list_values27___732[0]=come_increment_ref_count(left_type_730);
__list_values27___732[1]=come_increment_ref_count(right_type_731);
}        param_types_733=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value874=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2509, "struct list$1sTypeph")))),2,__list_values27___732));
        come_call_finalizer3(__right_value874,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values28___734[0]=come_increment_ref_count(((char*)(__right_value876=__builtin_string("left"))));
__list_values28___734[1]=come_increment_ref_count(((char*)(__right_value877=__builtin_string("right"))));
}        param_names_735=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value878=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2510, "struct list$1charph")))),2,__list_values28___734));
        __right_value876 = come_decrement_ref_count2(__right_value876, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value877 = come_decrement_ref_count2(__right_value877, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value878,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_736=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value880=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2511, "list$1charph"))))));
        come_call_finalizer3(__right_value880,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_736,((void*)0));
        list$1charph_push_back(param_default_parametors_736,((void*)0));
        header_buf_737=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value882=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2515, "buffer"))))));
        come_call_finalizer3(__right_value882,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_737,((char*)(__right_value884=make_come_type_name_string(result_type_728,info))));
        __right_value884 = come_decrement_ref_count2(__right_value884, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_737," ");
        buffer_append_str(header_buf_737,real_fun_name_707);
        buffer_append_str(header_buf_737,"(");
        for(        i_738=0;        i_738<list$1sTypeph_length(param_types_733);        i_738++        ){
            param_type_739=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_733,i_738), "05function.c", 2523, 11));
            param_name_740=((char*)come_null_check(list$1charphp_operator_load_element(param_names_735,i_738), "05function.c", 2524, 12));
            buffer_append_str(header_buf_737,((char*)(__right_value885=make_come_type_name_string(param_type_739,info))));
            __right_value885 = come_decrement_ref_count2(__right_value885, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_737," ");
            buffer_append_str(header_buf_737,param_name_740);
            if(i_738!=list$1sTypeph_length(param_types_733)-1) {
                buffer_append_str(header_buf_737,",");
            }
        }
        buffer_append_str(header_buf_737,")");
        result_type_728->mStatic=(_Bool)0;
        fun_741=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value886=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2538, "sFun")))),(char*)come_increment_ref_count(name_729),(struct sType*)come_increment_ref_count(result_type_728),(struct list$1sTypeph*)come_increment_ref_count(param_types_733),(struct list$1charph*)come_increment_ref_count(param_names_735),(struct list$1charph*)come_increment_ref_count(param_default_parametors_736),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_727),(_Bool)1,(char*)come_increment_ref_count(((char*)(__right_value887=buffer_to_string(header_buf_737)))),(char*)come_increment_ref_count(((char*)(__right_value888=__builtin_string("")))),info));
        come_call_finalizer3(__right_value886,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        __right_value887 = come_decrement_ref_count2(__right_value887, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value888 = come_decrement_ref_count2(__right_value888, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun2_742=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value890=__builtin_string(fun_name))));
        __right_value890 = come_decrement_ref_count2(__right_value890, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_742==((void*)0)||fun2_742->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value891=string_clone(name_729)))),(struct sFun*)come_increment_ref_count(fun_741));
            __right_value891 = come_decrement_ref_count2(__right_value891, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_706=fun_741;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2554, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(__right_value893=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value892=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2554, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_741),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_743=(struct sNode*)come_increment_ref_count(_inf_value12);
        come_call_finalizer3(__right_value892,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value893,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_743,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj200=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_726);
        come_call_finalizer3(__dec_obj200,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_722;
        info->head=head_725;
        info->sline=sline_723;
        __dec_obj201=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_724);
        __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_710,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_724 = come_decrement_ref_count2(sname_724, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_726,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_727,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_728,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_729 = come_decrement_ref_count2(name_729, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_730,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_731,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_733,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_735,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_736,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_737,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_741,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_743) { node_743 = come_decrement_ref_count2(node_743, ((struct sNode*)node_743)->finalize, ((struct sNode*)node_743)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_705;
    __dec_obj202=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_702);
    __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj203=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_703);
    __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj204=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_704);
    __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result229__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value899=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(__right_value898=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2574, "struct tuple2$2sFunpcharph")))),equaler_706,(char*)come_increment_ref_count(real_fun_name_707))));
    last_code_702 = come_decrement_ref_count2(last_code_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_703 = come_decrement_ref_count2(last_code2_703, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_704 = come_decrement_ref_count2(last_code3_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_707 = come_decrement_ref_count2(real_fun_name_707, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_708,sType_finalize, 0, 0, 0, 0, (void*)0);
    __right_value898 = come_decrement_ref_count2(__right_value898, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value899,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result229__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_745;
char* __dec_obj205;
char* last_code2_746;
char* __dec_obj206;
char* last_code3_747;
char* __dec_obj207;
struct sClass* current_stack_frame_struct_748;
struct sFun* equaler_749;
void* __right_value900 = (void*)0;
char* real_fun_name_750;
void* __right_value901 = (void*)0;
struct sType* type2_751;
struct sClass* klass_752;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct buffer* source_753;
char* name_754;
struct list$1tuple2$2charphsTypephph* o2_saved_756;
struct tuple2$2charphsTypeph* it_757;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_758;
struct sType* field_type_759;
char* p_761;
int sline_762;
char* sname_763;
char* head_764;
struct buffer* source3_765;
struct buffer* __dec_obj208;
void* __right_value904 = (void*)0;
char* __dec_obj209;
void* __right_value905 = (void*)0;
struct sBlock* block_766;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct sType* result_type_767;
void* __right_value908 = (void*)0;
char* name_768;
void* __right_value909 = (void*)0;
struct sType* left_type_769;
void* __right_value910 = (void*)0;
struct sType* right_type_770;
struct sType* __list_values29___771[2];
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
struct list$1sTypeph* param_types_772;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
char* __list_values30___773[2];
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
struct list$1charph* param_names_774;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct list$1charph* param_default_parametors_775;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
struct buffer* header_buf_776;
void* __right_value921 = (void*)0;
int i_777;
struct sType* param_type_778;
char* param_name_779;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
struct sFun* fun_780;
void* __right_value927 = (void*)0;
struct sFun* fun2_781;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value934 = (void*)0;
struct sNode* node_782;
struct buffer* __dec_obj212;
char* __dec_obj213;
char* __dec_obj214;
char* __dec_obj215;
char* __dec_obj216;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct tuple2$2sFunpcharph* __result232__;
    last_code_745=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj205=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_746=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj206=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_747=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj207=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_748=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_749=((void*)0);
    real_fun_name_750=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_751=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_751;
    klass_752=type->mClass;
    if(type->mPointerNum>0&&!klass_752->mNumber) {
        source_753=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value902=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2599, "buffer"))))));
        come_call_finalizer3(__right_value902,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_753,123);
        if(klass_752->mProtocol) {
            name_754="_protocol_obj";
            char source2_755[1024];
            memset(&source2_755, 0, sizeof(char)            *(1024)            );
            snprintf(source2_755,1024,"return left.%s.equals(right.%s);\n",name_754,name_754);
            buffer_append_str(source_753,source2_755);
        }
        else {
            klass_752=map$2charphsClassphp_operator_load_element(info->classes,klass_752->mName);
            for(            o2_saved_756=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_752->mFields)),it_757=list$1tuple2$2charphsTypephph_begin((o2_saved_756));            !list$1tuple2$2charphsTypephph_end((o2_saved_756));            it_757=list$1tuple2$2charphsTypephph_next((o2_saved_756))            ){
                multiple_assign_var14=it_757;
                name_758=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_759=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(string_operator_equals(type->mClass->mName,field_type_759->mClass->mName)&&type->mPointerNum==field_type_759->mPointerNum&&field_type_759->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_760[1024];
                memset(&source2_760, 0, sizeof(char)                *(1024)                );
                snprintf(source2_760,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_758,name_758);
                buffer_append_str(source_753,source2_760);
                name_758 = come_decrement_ref_count2(name_758, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_759,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_756,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_753,"return true;\n");
        buffer_append_char(source_753,125);
        p_761=info->p;
        sline_762=info->sline;
        sname_763=(char*)come_increment_ref_count(info->sname);
        head_764=info->head;
        source3_765=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj208=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_753);
        come_call_finalizer3(__dec_obj208,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_753->buf;
        info->head=source_753->buf;
        __dec_obj209=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_750));
        __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_766=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        result_type_767=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value906=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2645, "sType")))),"bool",(_Bool)0,info));
        come_call_finalizer3(__right_value906,sType_finalize, 0, 1, 0, 0, __result_obj__);
        name_768=(char*)come_increment_ref_count(string_clone(real_fun_name_750));
        left_type_769=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_769->mHeap=(_Bool)0;
        right_type_770=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_770->mHeap=(_Bool)0;
        {__list_values29___771[0]=come_increment_ref_count(left_type_769);
__list_values29___771[1]=come_increment_ref_count(right_type_770);
}        param_types_772=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value911=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2651, "struct list$1sTypeph")))),2,__list_values29___771));
        come_call_finalizer3(__right_value911,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values30___773[0]=come_increment_ref_count(((char*)(__right_value913=__builtin_string("left"))));
__list_values30___773[1]=come_increment_ref_count(((char*)(__right_value914=__builtin_string("right"))));
}        param_names_774=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value915=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2652, "struct list$1charph")))),2,__list_values30___773));
        __right_value913 = come_decrement_ref_count2(__right_value913, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value914 = come_decrement_ref_count2(__right_value914, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value915,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_775=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value917=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2653, "list$1charph"))))));
        come_call_finalizer3(__right_value917,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_775,((void*)0));
        list$1charph_push_back(param_default_parametors_775,((void*)0));
        header_buf_776=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value919=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2657, "buffer"))))));
        come_call_finalizer3(__right_value919,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_776,((char*)(__right_value921=make_come_type_name_string(result_type_767,info))));
        __right_value921 = come_decrement_ref_count2(__right_value921, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_776," ");
        buffer_append_str(header_buf_776,real_fun_name_750);
        buffer_append_str(header_buf_776,"(");
        for(        i_777=0;        i_777<list$1sTypeph_length(param_types_772);        i_777++        ){
            param_type_778=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_772,i_777), "05function.c", 2665, 13));
            param_name_779=((char*)come_null_check(list$1charphp_operator_load_element(param_names_774,i_777), "05function.c", 2666, 14));
            buffer_append_str(header_buf_776,((char*)(__right_value922=make_come_type_name_string(param_type_778,info))));
            __right_value922 = come_decrement_ref_count2(__right_value922, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_776," ");
            buffer_append_str(header_buf_776,param_name_779);
            if(i_777!=list$1sTypeph_length(param_types_772)-1) {
                buffer_append_str(header_buf_776,",");
            }
        }
        buffer_append_str(header_buf_776,")");
        result_type_767->mStatic=(_Bool)0;
        fun_780=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value923=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2680, "sFun")))),(char*)come_increment_ref_count(name_768),(struct sType*)come_increment_ref_count(result_type_767),(struct list$1sTypeph*)come_increment_ref_count(param_types_772),(struct list$1charph*)come_increment_ref_count(param_names_774),(struct list$1charph*)come_increment_ref_count(param_default_parametors_775),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_766),(_Bool)1,(char*)come_increment_ref_count(((char*)(__right_value924=buffer_to_string(header_buf_776)))),(char*)come_increment_ref_count(((char*)(__right_value925=__builtin_string("")))),info));
        come_call_finalizer3(__right_value923,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        __right_value924 = come_decrement_ref_count2(__right_value924, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value925 = come_decrement_ref_count2(__right_value925, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun2_781=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value927=__builtin_string(fun_name))));
        __right_value927 = come_decrement_ref_count2(__right_value927, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_781==((void*)0)||fun2_781->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value928=string_clone(name_768)))),(struct sFun*)come_increment_ref_count(fun_780));
            __right_value928 = come_decrement_ref_count2(__right_value928, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        equaler_749=fun_780;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2696, "struct sNode");
        _inf_obj_value13=come_increment_ref_count(((struct sFunNode*)(__right_value930=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value929=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2696, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_780),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_782=(struct sNode*)come_increment_ref_count(_inf_value13);
        come_call_finalizer3(__right_value929,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value930,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_782,info)) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj212=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_765);
        come_call_finalizer3(__dec_obj212,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_761;
        info->head=head_764;
        info->sline=sline_762;
        __dec_obj213=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_763);
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_753,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_763 = come_decrement_ref_count2(sname_763, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_765,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_766,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_767,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_768 = come_decrement_ref_count2(name_768, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_769,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_770,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_772,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_774,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_775,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_776,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_780,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_782) { node_782 = come_decrement_ref_count2(node_782, ((struct sNode*)node_782)->finalize, ((struct sNode*)node_782)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_748;
    __dec_obj214=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_745);
    __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj215=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_746);
    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj216=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_747);
    __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result232__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value936=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(__right_value935=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2716, "struct tuple2$2sFunpcharph")))),equaler_749,(char*)come_increment_ref_count(real_fun_name_750))));
    last_code_745 = come_decrement_ref_count2(last_code_745, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_746 = come_decrement_ref_count2(last_code2_746, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_747 = come_decrement_ref_count2(last_code3_747, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_750 = come_decrement_ref_count2(real_fun_name_750, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_751,sType_finalize, 0, 0, 0, 0, (void*)0);
    __right_value935 = come_decrement_ref_count2(__right_value935, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value936,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result232__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_784;
char* __dec_obj217;
char* last_code2_785;
char* __dec_obj218;
char* last_code3_786;
char* __dec_obj219;
struct sClass* current_stack_frame_struct_787;
struct sFun* cloner_788;
void* __right_value937 = (void*)0;
char* real_fun_name_789;
void* __right_value938 = (void*)0;
struct sType* type2_790;
struct sClass* klass_791;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
struct buffer* source_792;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
char* name_793;
struct list$1tuple2$2charphsTypephph* o2_saved_795;
struct tuple2$2charphsTypeph* it_796;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_797;
struct sType* field_type_798;
struct list$1tuple2$2charphsTypephph* o2_saved_801;
struct tuple2$2charphsTypeph* it_802;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_803;
struct sType* field_type_804;
void* __right_value943 = (void*)0;
char* p_808;
int sline_809;
char* sname_810;
struct buffer* source3_811;
char* head_812;
struct buffer* __dec_obj220;
void* __right_value944 = (void*)0;
char* __dec_obj221;
void* __right_value945 = (void*)0;
struct sBlock* block_813;
void* __right_value946 = (void*)0;
struct sType* result_type_814;
void* __right_value947 = (void*)0;
char* name_815;
void* __right_value948 = (void*)0;
struct sType* self_type_816;
struct sType* __list_values31___817[1];
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
struct list$1sTypeph* param_types_818;
void* __right_value951 = (void*)0;
char* __list_values32___819[1];
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
struct list$1charph* param_names_820;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
struct list$1charph* param_default_parametors_821;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
struct buffer* header_buf_822;
void* __right_value958 = (void*)0;
int i_823;
struct sType* param_type_824;
char* param_name_825;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
struct sFun* fun_826;
void* __right_value964 = (void*)0;
struct sFun* fun2_827;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value971 = (void*)0;
struct sNode* node_828;
char* __dec_obj224;
struct buffer* __dec_obj225;
char* __dec_obj226;
char* __dec_obj227;
char* __dec_obj228;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
struct tuple2$2sFunpcharph* __result235__;
    last_code_784=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj217=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_785=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj218=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_786=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj219=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_787=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_788=((void*)0);
    real_fun_name_789=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_790=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_790;
    klass_791=type->mClass;
    if(type->mPointerNum>0&&!klass_791->mNumber) {
        source_792=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value939=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2741, "buffer"))))));
        come_call_finalizer3(__right_value939,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(source_792,"{\n");
        buffer_append_str(source_792,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_792,((char*)(__right_value942=xsprintf("var result = new %s;\n",((char*)(__right_value941=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0)))))));
        __right_value941 = come_decrement_ref_count2(__right_value941, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value942 = come_decrement_ref_count2(__right_value942, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(klass_791->mProtocol) {
            name_793="_protocol_obj";
            char source2_794[1024];
            memset(&source2_794, 0, sizeof(char)            *(1024)            );
            snprintf(source2_794,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_792,source2_794);
            klass_791=map$2charphsClassphp_operator_load_element(info->classes,klass_791->mName);
            for(            o2_saved_795=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_791->mFields)),it_796=list$1tuple2$2charphsTypephph_begin((o2_saved_795));            !list$1tuple2$2charphsTypephph_end((o2_saved_795));            it_796=list$1tuple2$2charphsTypephph_next((o2_saved_795))            ){
                multiple_assign_var15=it_796;
                name_797=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_798=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(string_operator_equals(type->mClass->mName,field_type_798->mClass->mName)&&type->mPointerNum==field_type_798->mPointerNum&&field_type_798->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(string_operator_equals(name_797,"_protocol_obj")) {
                }
                else {
                    if(list$1sNodeph_length(field_type_798->mArrayNum)>0) {
                        char source2_799[1024];
                        memset(&source2_799, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_799,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_797,name_797,name_797);
                        buffer_append_str(source_792,source2_799);
                    }
                    else {
                        char source2_800[1024];
                        memset(&source2_800, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_800,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_797,name_797);
                        buffer_append_str(source_792,source2_800);
                    }
                }
                name_797 = come_decrement_ref_count2(name_797, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_798,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_795,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_791=map$2charphsClassphp_operator_load_element(info->classes,klass_791->mName);
            for(            o2_saved_801=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_791->mFields)),it_802=list$1tuple2$2charphsTypephph_begin((o2_saved_801));            !list$1tuple2$2charphsTypephph_end((o2_saved_801));            it_802=list$1tuple2$2charphsTypephph_next((o2_saved_801))            ){
                multiple_assign_var16=it_802;
                name_803=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_804=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(string_operator_equals(type->mClass->mName,field_type_804->mClass->mName)&&type->mPointerNum==field_type_804->mPointerNum&&field_type_804->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(field_type_804->mHeap) {
                    char source2_805[1024];
                    memset(&source2_805, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_805,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_803,name_803,name_803);
                    buffer_append_str(source_792,source2_805);
                }
                else {
                    if(list$1sNodeph_length(field_type_804->mArrayNum)>0) {
                        char source2_806[1024];
                        memset(&source2_806, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_806,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_803,name_803,name_803);
                        buffer_append_str(source_792,source2_806);
                    }
                    else {
                        char source2_807[1024];
                        memset(&source2_807, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_807,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_803,name_803);
                        buffer_append_str(source_792,source2_807);
                    }
                }
                name_803 = come_decrement_ref_count2(name_803, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_804,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_801,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_792,((char*)(__right_value943=xsprintf("return result;"))));
        __right_value943 = come_decrement_ref_count2(__right_value943, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_792,125);
        p_808=info->p;
        sline_809=info->sline;
        sname_810=(char*)come_increment_ref_count(info->sname);
        source3_811=(struct buffer*)come_increment_ref_count(info->source);
        head_812=info->head;
        __dec_obj220=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_792);
        come_call_finalizer3(__dec_obj220,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj221=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_789));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_813=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
        result_type_814=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_815=(char*)come_increment_ref_count(string_clone(real_fun_name_789));
        self_type_816=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_816->mHeap=(_Bool)0;
        {__list_values31___817[0]=come_increment_ref_count(self_type_816);
}        param_types_818=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value949=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2835, "struct list$1sTypeph")))),1,__list_values31___817));
        come_call_finalizer3(__right_value949,list$1sTypeph_finalize, 0, 1, 0, 0, __result_obj__);
        {__list_values32___819[0]=come_increment_ref_count(((char*)(__right_value951=__builtin_string("self"))));
}        param_names_820=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value952=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2836, "struct list$1charph")))),1,__list_values32___819));
        __right_value951 = come_decrement_ref_count2(__right_value951, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value952,list$1charph_finalize, 0, 1, 0, 0, __result_obj__);
        param_default_parametors_821=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value954=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2837, "list$1charph"))))));
        come_call_finalizer3(__right_value954,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        list$1charph_push_back(param_default_parametors_821,((void*)0));
        header_buf_822=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value956=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2840, "buffer"))))));
        come_call_finalizer3(__right_value956,buffer_finalize, 0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_822,((char*)(__right_value958=make_come_type_name_string(result_type_814,info))));
        __right_value958 = come_decrement_ref_count2(__right_value958, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_822," ");
        buffer_append_str(header_buf_822,real_fun_name_789);
        buffer_append_str(header_buf_822,"(");
        for(        i_823=0;        i_823<list$1sTypeph_length(param_types_818);        i_823++        ){
            param_type_824=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_818,i_823), "05function.c", 2848, 15));
            param_name_825=((char*)come_null_check(list$1charphp_operator_load_element(param_names_820,i_823), "05function.c", 2849, 16));
            buffer_append_str(header_buf_822,((char*)(__right_value959=make_come_type_name_string(param_type_824,info))));
            __right_value959 = come_decrement_ref_count2(__right_value959, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_822," ");
            buffer_append_str(header_buf_822,param_name_825);
            if(i_823!=list$1sTypeph_length(param_types_818)-1) {
                buffer_append_str(header_buf_822,",");
            }
        }
        buffer_append_str(header_buf_822,")");
        result_type_814->mStatic=(_Bool)0;
        fun_826=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(__right_value960=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2863, "sFun")))),(char*)come_increment_ref_count(name_815),(struct sType*)come_increment_ref_count(result_type_814),(struct list$1sTypeph*)come_increment_ref_count(param_types_818),(struct list$1charph*)come_increment_ref_count(param_names_820),(struct list$1charph*)come_increment_ref_count(param_default_parametors_821),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_813),(_Bool)1,(char*)come_increment_ref_count(((char*)(__right_value961=buffer_to_string(header_buf_822)))),(char*)come_increment_ref_count(((char*)(__right_value962=__builtin_string("")))),info));
        come_call_finalizer3(__right_value960,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        __right_value961 = come_decrement_ref_count2(__right_value961, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value962 = come_decrement_ref_count2(__right_value962, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_826->mCloner=(_Bool)1;
        fun2_827=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value964=__builtin_string(fun_name))));
        __right_value964 = come_decrement_ref_count2(__right_value964, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_827==((void*)0)||fun2_827->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(((char*)(__right_value965=string_clone(name_815)))),(struct sFun*)come_increment_ref_count(fun_826));
            __right_value965 = come_decrement_ref_count2(__right_value965, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        cloner_788=fun_826;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2880, "struct sNode");
        _inf_obj_value14=come_increment_ref_count(((struct sFunNode*)(__right_value967=sFunNode_initialize((struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value966=(struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2880, "sFunNode")))),(struct sFun*)come_increment_ref_count(fun_826),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sFunNode_finalize;
        _inf_value14->clone=(void*)sFunNode_clone;
        _inf_value14->compile=(void*)sFunNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sFunNode_kind;
        node_828=(struct sNode*)come_increment_ref_count(_inf_value14);
        come_call_finalizer3(__right_value966,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value967,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_828,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj224=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_810);
        __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_809;
        __dec_obj225=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_811);
        come_call_finalizer3(__dec_obj225,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_808;
        info->head=head_812;
        info->sline=sline_809;
        come_call_finalizer3(source_792,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_810 = come_decrement_ref_count2(sname_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_811,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_813,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_814,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_815 = come_decrement_ref_count2(name_815, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_816,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_818,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_820,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_821,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_822,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_826,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_828) { node_828 = come_decrement_ref_count2(node_828, ((struct sNode*)node_828)->finalize, ((struct sNode*)node_828)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_787;
    __dec_obj226=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_784);
    __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj227=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_785);
    __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj228=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_786);
    __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result235__ = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value973=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count(((struct tuple2$2sFunpcharph*)(__right_value972=(struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2902, "struct tuple2$2sFunpcharph")))),cloner_788,(char*)come_increment_ref_count(real_fun_name_789))));
    last_code_784 = come_decrement_ref_count2(last_code_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_785 = come_decrement_ref_count2(last_code2_785, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_786 = come_decrement_ref_count2(last_code3_786, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_789 = come_decrement_ref_count2(real_fun_name_789, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_790,sType_finalize, 0, 0, 0, 0, (void*)0);
    __right_value972 = come_decrement_ref_count2(__right_value972, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value973,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    return __result235__;
}

static void sFunNode_finalize(struct sFunNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result233__;
void* __right_value968 = (void*)0;
struct sFunNode* result_829;
void* __right_value969 = (void*)0;
char* __dec_obj222;
void* __right_value970 = (void*)0;
struct sFun* __dec_obj223;
struct sFunNode* __result234__;
    if(self==(void*)0) {
        __result233__ = __result_obj__ = (void*)0;
        return __result233__;
    }
    result_829=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"));
    if(self!=((void*)0)) {
        result_829->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj222=result_829->sname;
        result_829->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj223=result_829->mFun;
        result_829->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        come_call_finalizer3(__dec_obj223,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result234__ = __result_obj__ = result_829;
    come_call_finalizer3(result_829,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result234__;
}

