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
struct sSwitchNode
{
    int sline;
    char* sname;
    struct sNode* mExpressionNode;
    struct sBlock* mBlock;
};
struct sCaseNode
{
    int sline;
    char* sname;
    struct sNode* mNode;
};
struct sDefaultNode
{
    int sline;
    char* sname;
};
struct sLabelNode
{
    int sline;
    char* sname;
    char* label;
};
struct sGotoNode
{
    int sline;
    char* sname;
    char* label;
};
struct sBreakNode
{
    int sline;
    char* sname;
};
struct sContinueNode
{
    int sline;
    char* sname;
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
struct sSwitchNode* sSwitchNode_initialize(struct sSwitchNode* self, struct sNode* expression_node, struct sBlock* block, struct sInfo* info);
_Bool sSwitchNode_terminated(struct sSwitchNode* self);
char* sSwitchNode_kind(struct sSwitchNode* self);
_Bool sSwitchNode_compile(struct sSwitchNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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
static void sBlock_finalize(struct sBlock* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sCaseNode* sCaseNode_initialize(struct sCaseNode* self, struct sNode* node, struct sInfo* info);
_Bool sCaseNode_terminated(struct sCaseNode* self);
char* sCaseNode_kind(struct sCaseNode* self);
_Bool sCaseNode_compile(struct sCaseNode* self, struct sInfo* info);
struct sDefaultNode* sDefaultNode_initialize(struct sDefaultNode* self, struct sInfo* info);
_Bool sDefaultNode_terminated(struct sDefaultNode* self);
char* sDefaultNode_kind(struct sDefaultNode* self);
_Bool sDefaultNode_compile(struct sDefaultNode* self, struct sInfo* info);
struct sLabelNode* sLabelNode_initialize(struct sLabelNode* self, char* label, struct sInfo* info);
_Bool sLabelNode_terminated(struct sLabelNode* self);
char* sLabelNode_kind(struct sLabelNode* self);
_Bool sLabelNode_compile(struct sLabelNode* self, struct sInfo* info);
struct sGotoNode* sGotoNode_initialize(struct sGotoNode* self, char* label, struct sInfo* info);
char* sGotoNode_kind(struct sGotoNode* self);
_Bool sGotoNode_compile(struct sGotoNode* self, struct sInfo* info);
struct sBreakNode* sBreakNode_initialize(struct sBreakNode* self, struct sInfo* info);
char* sBreakNode_kind(struct sBreakNode* self);
_Bool sBreakNode_compile(struct sBreakNode* self, struct sInfo* info);
struct sContinueNode* sContinueNode_initialize(struct sContinueNode* self, struct sInfo* info);
char* sContinueNode_kind(struct sContinueNode* self);
_Bool sContinueNode_compile(struct sContinueNode* self, struct sInfo* info);
struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);
static void sCaseNode_finalize(struct sCaseNode* self);
static struct sCaseNode* sCaseNode_clone(struct sCaseNode* self);
static void sDefaultNode_finalize(struct sDefaultNode* self);
static struct sDefaultNode* sDefaultNode_clone(struct sDefaultNode* self);
static void sBreakNode_finalize(struct sBreakNode* self);
static struct sBreakNode* sBreakNode_clone(struct sBreakNode* self);
static void sContinueNode_finalize(struct sContinueNode* self);
static struct sContinueNode* sContinueNode_clone(struct sContinueNode* self);
static void sLabelNode_finalize(struct sLabelNode* self);
static struct sLabelNode* sLabelNode_clone(struct sLabelNode* self);
static void sGotoNode_finalize(struct sGotoNode* self);
static struct sGotoNode* sGotoNode_clone(struct sGotoNode* self);
static void sSwitchNode_finalize(struct sSwitchNode* self);
static struct sSwitchNode* sSwitchNode_clone(struct sSwitchNode* self);
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










struct sSwitchNode* sSwitchNode_initialize(struct sSwitchNode* self, struct sNode* expression_node, struct sBlock* block, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value79 = (void*)0;
void* __right_value81 = (void*)0;
struct sNode* __dec_obj12;
void* __right_value108 = (void*)0;
struct sBlock* __dec_obj21;
struct sSwitchNode* __result81__;
    ((struct sNodeBase*)(__right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj12=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node));
    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count2(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj21=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(block));
    come_call_finalizer3(__dec_obj21,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    __result81__ = __result_obj__ = self;
    come_call_finalizer3(self,sSwitchNode_finalize, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result81__;
}

_Bool sSwitchNode_terminated(struct sSwitchNode* self){
    return (_Bool)1;
}

char* sSwitchNode_kind(struct sSwitchNode* self){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
char* __result82__;
    __result82__ = __result_obj__ = ((char*)(__right_value109=__builtin_string("sSwitchNode")));
    __right_value109 = come_decrement_ref_count2(__right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result82__;
}

_Bool sSwitchNode_compile(struct sSwitchNode* self, struct sInfo* info){
struct sBlock* block_118;
struct sNode* expression_node_119;
void* __right_value110 = (void*)0;
struct CVALUE* conditional_value_120;
_Bool __result83__;
    block_118=self->mBlock;
    expression_node_119=self->mExpressionNode;
    if(!node_compile(expression_node_119,info)) {
        return (_Bool)0;
    }
    conditional_value_120=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    add_come_code(info,"switch (%s) {\n",conditional_value_120->c_value);
    transpile_block(block_118,((void*)0),((void*)0),info,(_Bool)0,(_Bool)1);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result83__ = (_Bool)1;
    come_call_finalizer3(conditional_value_120,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result83__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result45__;
void* __right_value80 = (void*)0;
struct sNode* result_47;
struct sNode* __result46__;
    if(self==(void*)0) {
        __result45__ = __result_obj__ = (void*)0;
        return __result45__;
    }
    result_47=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_47->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_47->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_47->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_47->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_47->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_47->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_47->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result_47->kind=self->kind;
    }
    __result46__ = __result_obj__ = result_47;
    if(result_47) { result_47 = come_decrement_ref_count2(result_47, ((struct sNode*)result_47)->finalize, ((struct sNode*)result_47)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result46__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result47__;
void* __right_value82 = (void*)0;
struct sBlock* result_48;
void* __right_value89 = (void*)0;
struct list$1sNodeph* __dec_obj16;
void* __right_value107 = (void*)0;
struct sVarTable* __dec_obj20;
struct sBlock* __result80__;
    if(self==(void*)0) {
        __result47__ = __result_obj__ = (void*)0;
        return __result47__;
    }
    result_48=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj16=result_48->mNodes;
        result_48->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        come_call_finalizer3(__dec_obj16,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj20=result_48->mVarTable;
        result_48->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj20,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result80__ = __result_obj__ = result_48;
    come_call_finalizer3(result_48,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result80__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result48__;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct list$1sNodeph* result_51;
struct list_item$1sNodeph* it_52;
void* __right_value88 = (void*)0;
struct list$1sNodeph* __result51__;
    if(self==((void*)0)) {
        __result48__ = __result_obj__ = ((void*)0);
        return __result48__;
    }
    result_51=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value83=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))));
    come_call_finalizer3(__right_value83,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    it_52=self->head;
    while(it_52!=((void*)0)) {
        list$1sNodeph_add(result_51,(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value88=sNode_clone(it_52->item)))));
        if(__right_value88) { __right_value88 = come_decrement_ref_count2(__right_value88, ((struct sNode*)__right_value88)->finalize, ((struct sNode*)__right_value88)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        it_52=it_52->next;
    }
    __result51__ = __result_obj__ = result_51;
    come_call_finalizer3(result_51,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result51__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result49__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result49__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result49__;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_49;
struct list_item$1sNodeph* prev_it_50;
    it_49=self->head;
    while(it_49!=((void*)0)) {
        prev_it_50=it_49;
        it_49=it_49->next;
        come_call_finalizer3(prev_it_50,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
struct list_item$1sNodeph* litem_53;
struct sNode* __dec_obj13;
void* __right_value86 = (void*)0;
struct list_item$1sNodeph* litem_54;
struct sNode* __dec_obj14;
void* __right_value87 = (void*)0;
struct list_item$1sNodeph* litem_55;
struct sNode* __dec_obj15;
struct list$1sNodeph* __result50__;
    if(self->len==0) {
        litem_53=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value85=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
        come_call_finalizer3(__right_value85,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_53->prev=((void*)0);
        litem_53->next=((void*)0);
        __dec_obj13=litem_53->item;
        litem_53->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count2(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_53;
        self->head=litem_53;
    }
    else {
        if(self->len==1) {
            litem_54=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value86=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value86,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_54->prev=self->head;
            litem_54->next=((void*)0);
            __dec_obj14=litem_54->item;
            litem_54->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count2(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_54;
            self->head->next=litem_54;
        }
        else {
            litem_55=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value87=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value87,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_55->prev=self->tail;
            litem_55->next=((void*)0);
            __dec_obj15=litem_55->item;
            litem_55->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count2(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_55;
            self->tail=litem_55;
        }
    }
    self->len++;
    __result50__ = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result50__;
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_56;
struct list_item$1sNodeph* prev_it_57;
    it_56=self->head;
    while(it_56!=((void*)0)) {
        prev_it_57=it_56;
        it_56=it_56->next;
        come_call_finalizer3(prev_it_57,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result52__;
void* __right_value90 = (void*)0;
struct sVarTable* result_58;
void* __right_value106 = (void*)0;
struct map$2charphsVarph* __dec_obj19;
struct sVarTable* __result79__;
    if(self==(void*)0) {
        __result52__ = __result_obj__ = (void*)0;
        return __result52__;
    }
    result_58=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj19=result_58->mVars;
        result_58->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        come_call_finalizer3(__dec_obj19,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_58->mGlobal=self->mGlobal;
    }
    if(self!=((void*)0)) {
        result_58->mParent=self->mParent;
    }
    if(self!=((void*)0)) {
        result_58->mID=self->mID;
    }
    __result79__ = __result_obj__ = result_58;
    come_call_finalizer3(result_58,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    return __result79__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result53__;
void* __right_value91 = (void*)0;
void* __right_value97 = (void*)0;
struct map$2charphsVarph* result_68;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
struct list$1charp* __dec_obj18;
char* it_71;
struct sVar* default_value_74;
struct sVar* it2_77;
struct map$2charphsVarph* __result78__;
default_value_74 = (void*)0;
    if(self==((void*)0)) {
        __result53__ = __result_obj__ = ((void*)0);
        return __result53__;
    }
    result_68=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(__right_value91=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./neo-c.h", 1370, "map$2charphsVarph"))))));
    come_call_finalizer3(__right_value91,map$2charphsVarphp_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj18=result_68->key_list;
    result_68->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value98=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1372, "list$1charp"))))));
    come_call_finalizer3(__dec_obj18,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    for(    it_71=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_71=map$2charphsVarph_next(self)    ){
        memset(&default_value_74,0,sizeof(struct sVar*));
        it2_77=map$2charphsVarph_at(self,it_71,default_value_74);
        map$2charphsVarph_insert2(result_68,it_71,it2_77);
    }
    __result78__ = __result_obj__ = result_68;
    come_call_finalizer3(result_68,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result78__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
int i_63;
void* __right_value95 = (void*)0;
void* __right_value96 = (void*)0;
struct list$1charp* __dec_obj17;
struct map$2charphsVarph* __result55__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value92=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1276, "char*%"))));
    __right_value92 = come_decrement_ref_count2(__right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value93=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./neo-c.h", 1277, "sVar*%"))));
    come_call_finalizer3(__right_value93,sVar_finalize, 0, 1, 0, 0, __result_obj__);
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value94=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1278, "bool"))));
    __right_value94 = come_decrement_ref_count2(__right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_63=0;    i_63<128;    i_63++    ){
        self->item_existance[i_63]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj17=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value95=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1288, "list$1charp"))))));
    come_call_finalizer3(__dec_obj17,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value95,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    self->it=0;
    __result55__ = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result55__;
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
struct list_item$1sTypeph* it_59;
struct list_item$1sTypeph* prev_it_60;
    it_59=self->head;
    while(it_59!=((void*)0)) {
        prev_it_60=it_59;
        it_59=it_59->next;
        come_call_finalizer3(prev_it_60,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_61;
struct list_item$1charph* prev_it_62;
    it_61=self->head;
    while(it_61!=((void*)0)) {
        prev_it_62=it_61;
        it_61=it_61->next;
        come_call_finalizer3(prev_it_62,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result54__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result54__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    return __result54__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_64;
struct list_item$1charp* prev_it_65;
    it_64=self->head;
    while(it_64!=((void*)0)) {
        prev_it_65=it_64;
        it_64=it_64->next;
        come_call_finalizer3(prev_it_65,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_66;
int i_67;
    for(    i_66=0;    i_66<self->size;    i_66++    ){
        if(self->item_existance[i_66]) {
            if(1) {
                come_call_finalizer3(self->items[i_66],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_67=0;    i_67<self->size;    i_67++    ){
        if(self->item_existance[i_67]) {
            if(1) {
                self->keys[i_67] = come_decrement_ref_count2(self->keys[i_67], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_69;
char* __result56__;
char* __result57__;
char* result_70;
char* __result58__;
result_69 = (void*)0;
result_70 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_69,0,sizeof(char*));
        __result56__ = __result_obj__ = result_69;
        return __result56__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result57__ = __result_obj__ = self->key_list->it->item;
        return __result57__;
    }
    memset(&result_70,0,sizeof(char*));
    __result58__ = __result_obj__ = result_70;
    return __result58__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_72;
char* __result59__;
char* __result60__;
char* result_73;
char* __result61__;
result_72 = (void*)0;
result_73 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_72,0,sizeof(char*));
        __result59__ = __result_obj__ = result_72;
        return __result59__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result60__ = __result_obj__ = self->key_list->it->item;
        return __result60__;
    }
    memset(&result_73,0,sizeof(char*));
    __result61__ = __result_obj__ = result_73;
    return __result61__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_75;
unsigned int it_76;
struct sVar* __result62__;
struct sVar* __result63__;
struct sVar* __result64__;
struct sVar* __result65__;
    hash_75=string_get_hash_key(((char*)key))%self->size;
    it_76=hash_75;
    while((_Bool)1) {
        if(self->item_existance[it_76]) {
            if(string_equals(self->keys[it_76],key)) {
                __result62__ = __result_obj__ = self->items[it_76];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result62__;
            }
            it_76++;
            if(it_76>=self->size) {
                it_76=0;
            }
            else {
                if(it_76==hash_75) {
                    __result63__ = __result_obj__ = default_value;
                    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    return __result63__;
                }
            }
        }
        else {
            __result64__ = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result64__;
        }
    }
    __result65__ = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result65__;
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_89;
int it_90;
_Bool same_key_exist_107;
char* it2_110;
struct map$2charphsVarph* __result77__;
    if(self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_89=string_get_hash_key(key)%self->size;
    it_90=hash_89;
    while((_Bool)1) {
        if(self->item_existance[it_90]) {
            if(string_equals(self->keys[it_90],key)) {
                if(1) {
                    self->keys[it_90] = come_decrement_ref_count2(self->keys[it_90], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_90]);
                    self->keys[it_90]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_90]);
                    self->keys[it_90]=key;
                }
                if(1) {
                    come_call_finalizer3(self->items[it_90],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_90]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_90]=item;
                }
                break;
            }
            it_90++;
            if(it_90>=self->size) {
                it_90=0;
            }
            else {
                if(it_90==hash_89) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_90]=(_Bool)1;
            if(1) {
                self->keys[it_90]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_90]=key;
            }
            if(1) {
                self->items[it_90]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_90]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_107=(_Bool)0;
    for(    it2_110=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_110=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_110,key)) {
            same_key_exist_107=(_Bool)1;
        }
    }
    if(!same_key_exist_107) {
        list$1charp_push_back(self->key_list,key);
    }
    __result77__ = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result77__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_78;
void* __right_value100 = (void*)0;
char** keys_79;
void* __right_value101 = (void*)0;
struct sVar** items_80;
void* __right_value102 = (void*)0;
_Bool* item_existance_81;
int len_82;
char* it_83;
struct sVar* default_value_84;
struct sVar* it2_85;
unsigned int hash_86;
int n_87;
struct sVar* default_value_88;
default_value_84 = (void*)0;
default_value_88 = (void*)0;
    size_78=self->size*10;
    keys_79=(char**)come_increment_ref_count(((char**)(__right_value100=(char**)come_calloc(1, sizeof(char*)*(1*(size_78)), "./neo-c.h", 1527, "char*%"))));
    __right_value100 = come_decrement_ref_count2(__right_value100, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    items_80=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value101=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_78)), "./neo-c.h", 1528, "sVar*%"))));
    come_call_finalizer3(__right_value101,sVar_finalize, 0, 1, 0, 0, (void*)0);
    item_existance_81=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value102=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_78)), "./neo-c.h", 1529, "bool"))));
    __right_value102 = come_decrement_ref_count2(__right_value102, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    len_82=0;
    for(    it_83=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_83=map$2charphsVarph_next(self)    ){
        memset(&default_value_84,0,sizeof(struct sVar*));
        it2_85=map$2charphsVarph_at(self,it_83,default_value_84);
        hash_86=string_get_hash_key(it_83)%size_78;
        n_87=hash_86;
        while((_Bool)1) {
            if(item_existance_81[n_87]) {
                n_87++;
                if(n_87>=size_78) {
                    n_87=0;
                }
                else {
                    if(n_87==hash_86) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_81[n_87]=(_Bool)1;
                keys_79[n_87]=it_83;
                items_80[n_87]=map$2charphsVarph_at(self,it_83,default_value_88);
                len_82++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_79;
    self->items=items_80;
    self->item_existance=item_existance_81;
    self->size=size_78;
    self->len=len_82;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_91;
struct list_item$1charp* it_92;
struct list$1charp* __result69__;
    it2_91=0;
    it_92=self->head;
    while(it_92!=((void*)0)) {
        if(string_equals(it_92->item,item)) {
            list$1charp_delete(self,it2_91,it2_91+1);
            break;
        }
        it2_91++;
        it_92=it_92->next;
    }
    __result69__ = __result_obj__ = self;
    return __result69__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_93;
struct list$1charp* __result66__;
struct list_item$1charp* it_96;
int i_97;
struct list_item$1charp* prev_it_98;
struct list_item$1charp* it_99;
int i_100;
struct list_item$1charp* prev_it_101;
struct list_item$1charp* it_102;
struct list_item$1charp* head_prev_it_103;
struct list_item$1charp* tail_it_104;
int i_105;
struct list_item$1charp* prev_it_106;
struct list$1charp* __result68__;
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_93=tail;
        tail=head;
        head=tmp_93;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head==tail) {
        __result66__ = __result_obj__ = self;
        return __result66__;
    }
    if(head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else {
        if(head==0) {
            it_96=self->head;
            i_97=0;
            while(it_96!=((void*)0)) {
                if(i_97<tail) {
                    prev_it_98=it_96;
                    it_96=it_96->next;
                    i_97++;
                    come_call_finalizer3(prev_it_98,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_97==tail) {
                        self->head=it_96;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_96=it_96->next;
                        i_97++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_99=self->head;
                i_100=0;
                while(it_99!=((void*)0)) {
                    if(i_100==head) {
                        self->tail=it_99->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_100>=head) {
                        prev_it_101=it_99;
                        it_99=it_99->next;
                        i_100++;
                        come_call_finalizer3(prev_it_101,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_99=it_99->next;
                        i_100++;
                    }
                }
            }
            else {
                it_102=self->head;
                head_prev_it_103=((void*)0);
                tail_it_104=((void*)0);
                i_105=0;
                while(it_102!=((void*)0)) {
                    if(i_105==head) {
                        head_prev_it_103=it_102->prev;
                    }
                    if(i_105==tail) {
                        tail_it_104=it_102;
                    }
                    if(i_105>=head&&i_105<tail) {
                        prev_it_106=it_102;
                        it_102=it_102->next;
                        i_105++;
                        come_call_finalizer3(prev_it_106,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_102=it_102->next;
                        i_105++;
                    }
                }
                if(head_prev_it_103!=((void*)0)) {
                    head_prev_it_103->next=tail_it_104;
                }
                if(tail_it_104!=((void*)0)) {
                    tail_it_104->prev=head_prev_it_103;
                }
            }
        }
    }
    __result68__ = __result_obj__ = self;
    return __result68__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_94;
struct list_item$1charp* prev_it_95;
struct list$1charp* __result67__;
    it_94=self->head;
    while(it_94!=((void*)0)) {
        prev_it_95=it_94;
        it_94=it_94->next;
        come_call_finalizer3(prev_it_95,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result67__ = __result_obj__ = self;
    return __result67__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_108;
char* __result70__;
char* __result71__;
char* result_109;
char* __result72__;
result_108 = (void*)0;
result_109 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_108,0,sizeof(char*));
        __result70__ = __result_obj__ = result_108;
        return __result70__;
    }
    self->it=self->head;
    if(self->it) {
        __result71__ = __result_obj__ = self->it->item;
        return __result71__;
    }
    memset(&result_109,0,sizeof(char*));
    __result72__ = __result_obj__ = result_109;
    return __result72__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_111;
char* __result73__;
char* __result74__;
char* result_112;
char* __result75__;
result_111 = (void*)0;
result_112 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_111,0,sizeof(char*));
        __result73__ = __result_obj__ = result_111;
        return __result73__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result74__ = __result_obj__ = self->it->item;
        return __result74__;
    }
    memset(&result_112,0,sizeof(char*));
    __result75__ = __result_obj__ = result_112;
    return __result75__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value103 = (void*)0;
struct list_item$1charp* litem_113;
void* __right_value104 = (void*)0;
struct list_item$1charp* litem_114;
void* __right_value105 = (void*)0;
struct list_item$1charp* litem_115;
struct list$1charp* __result76__;
    if(self->len==0) {
        litem_113=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value103=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 219, "list_item$1charp"))));
        come_call_finalizer3(__right_value103,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_113->prev=((void*)0);
        litem_113->next=((void*)0);
        litem_113->item=item;
        self->tail=litem_113;
        self->head=litem_113;
    }
    else {
        if(self->len==1) {
            litem_114=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value104=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 229, "list_item$1charp"))));
            come_call_finalizer3(__right_value104,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_114->prev=self->head;
            litem_114->next=((void*)0);
            litem_114->item=item;
            self->tail=litem_114;
            self->head->next=litem_114;
        }
        else {
            litem_115=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value105=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./neo-c.h", 239, "list_item$1charp"))));
            come_call_finalizer3(__right_value105,list_item$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_115->prev=self->tail;
            litem_115->next=((void*)0);
            litem_115->item=item;
            self->tail->next=litem_115;
            self->tail=litem_115;
        }
    }
    self->len++;
    __result76__ = __result_obj__ = self;
    return __result76__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_116;
int i_117;
    for(    i_116=0;    i_116<self->size;    i_116++    ){
        if(self->item_existance[i_116]) {
            if(1) {
                come_call_finalizer3(self->items[i_116],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_117=0;    i_117<self->size;    i_117++    ){
        if(self->item_existance[i_117]) {
            if(1) {
                self->keys[i_117] = come_decrement_ref_count2(self->keys[i_117], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sBlock_finalize(struct sBlock* self){
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
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

struct sCaseNode* sCaseNode_initialize(struct sCaseNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
struct sNode* __dec_obj22;
struct sCaseNode* __result84__;
    ((struct sNodeBase*)(__right_value111=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value111,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj22=self->mNode;
    self->mNode=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
    __result84__ = __result_obj__ = self;
    come_call_finalizer3(self,sCaseNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result84__;
}

_Bool sCaseNode_terminated(struct sCaseNode* self){
    return (_Bool)1;
}

char* sCaseNode_kind(struct sCaseNode* self){
void* __result_obj__=(void*)0;
void* __right_value113 = (void*)0;
char* __result85__;
    __result85__ = __result_obj__ = ((char*)(__right_value113=__builtin_string("sCaseNode")));
    __right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result85__;
}

_Bool sCaseNode_compile(struct sCaseNode* self, struct sInfo* info){
struct sNode* node_121;
void* __right_value114 = (void*)0;
struct CVALUE* label_value_122;
_Bool __result86__;
    node_121=self->mNode;
    if(!node_compile(node_121,info)) {
        return (_Bool)0;
    }
    label_value_122=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    add_come_code(info,"case %s:\n",label_value_122->c_value);
    transpiler_clear_last_code(info);
    __result86__ = (_Bool)1;
    come_call_finalizer3(label_value_122,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result86__;
}

struct sDefaultNode* sDefaultNode_initialize(struct sDefaultNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct sDefaultNode* __result87__;
    ((struct sNodeBase*)(__right_value115=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value115,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result87__ = __result_obj__ = self;
    come_call_finalizer3(self,sDefaultNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result87__;
}

_Bool sDefaultNode_terminated(struct sDefaultNode* self){
    return (_Bool)1;
}

char* sDefaultNode_kind(struct sDefaultNode* self){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
char* __result88__;
    __result88__ = __result_obj__ = ((char*)(__right_value116=__builtin_string("sDefaultNode")));
    __right_value116 = come_decrement_ref_count2(__right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result88__;
}

_Bool sDefaultNode_compile(struct sDefaultNode* self, struct sInfo* info){
    add_come_code(info,"default:\n");
    transpiler_clear_last_code(info);
    return (_Bool)1;
}

struct sLabelNode* sLabelNode_initialize(struct sLabelNode* self, char* label, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
char* __dec_obj23;
struct sLabelNode* __result89__;
    ((struct sNodeBase*)(__right_value117=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value117,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj23=self->label;
    self->label=(char*)come_increment_ref_count(label);
    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result89__ = __result_obj__ = self;
    come_call_finalizer3(self,sLabelNode_finalize, 0, 0, 1, 0, (void*)0);
    label = come_decrement_ref_count2(label, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result89__;
}

_Bool sLabelNode_terminated(struct sLabelNode* self){
    return (_Bool)1;
}

char* sLabelNode_kind(struct sLabelNode* self){
void* __result_obj__=(void*)0;
void* __right_value118 = (void*)0;
char* __result90__;
    __result90__ = __result_obj__ = ((char*)(__right_value118=__builtin_string("sLabelNode")));
    __right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result90__;
}

_Bool sLabelNode_compile(struct sLabelNode* self, struct sInfo* info){
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
    add_come_code(info,((char*)(__right_value120=xsprintf("\%s:\n",((char*)(__right_value119=string_to_string(self->label)))))));
    __right_value119 = come_decrement_ref_count2(__right_value119, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value120 = come_decrement_ref_count2(__right_value120, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    transpiler_clear_last_code(info);
    return (_Bool)1;
}

struct sGotoNode* sGotoNode_initialize(struct sGotoNode* self, char* label, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value121 = (void*)0;
char* __dec_obj24;
struct sGotoNode* __result91__;
    ((struct sNodeBase*)(__right_value121=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value121,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj24=self->label;
    self->label=(char*)come_increment_ref_count(label);
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result91__ = __result_obj__ = self;
    come_call_finalizer3(self,sGotoNode_finalize, 0, 0, 1, 0, (void*)0);
    label = come_decrement_ref_count2(label, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result91__;
}

char* sGotoNode_kind(struct sGotoNode* self){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
char* __result92__;
    __result92__ = __result_obj__ = ((char*)(__right_value122=__builtin_string("sGotoNode")));
    __right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result92__;
}

_Bool sGotoNode_compile(struct sGotoNode* self, struct sInfo* info){
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
    add_come_code(info,((char*)(__right_value124=xsprintf("goto \%s;\n",((char*)(__right_value123=string_to_string(self->label)))))));
    __right_value123 = come_decrement_ref_count2(__right_value123, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value124 = come_decrement_ref_count2(__right_value124, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    transpiler_clear_last_code(info);
    return (_Bool)1;
}

struct sBreakNode* sBreakNode_initialize(struct sBreakNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct sBreakNode* __result93__;
    ((struct sNodeBase*)(__right_value125=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value125,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result93__ = __result_obj__ = self;
    come_call_finalizer3(self,sBreakNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result93__;
}

char* sBreakNode_kind(struct sBreakNode* self){
void* __result_obj__=(void*)0;
void* __right_value126 = (void*)0;
char* __result94__;
    __result94__ = __result_obj__ = ((char*)(__right_value126=__builtin_string("sBreakNode")));
    __right_value126 = come_decrement_ref_count2(__right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result94__;
}

_Bool sBreakNode_compile(struct sBreakNode* self, struct sInfo* info){
    free_objects_on_break(info);
    add_come_code(info,"break;\n");
    transpiler_clear_last_code(info);
    return (_Bool)1;
}

struct sContinueNode* sContinueNode_initialize(struct sContinueNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
struct sContinueNode* __result95__;
    ((struct sNodeBase*)(__right_value127=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value127,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result95__ = __result_obj__ = self;
    come_call_finalizer3(self,sContinueNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result95__;
}

char* sContinueNode_kind(struct sContinueNode* self){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
char* __result96__;
    __result96__ = __result_obj__ = ((char*)(__right_value128=__builtin_string("sContinueNode")));
    __right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result96__;
}

_Bool sContinueNode_compile(struct sContinueNode* self, struct sInfo* info){
    free_objects_on_break(info);
    add_come_code(info,"continue;\n");
    transpiler_clear_last_code(info);
    return (_Bool)1;
}

struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool no_label_123;
void* __right_value129 = (void*)0;
struct sNode* node_124;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct sNode* _inf_value1;
struct sCaseNode* _inf_obj_value1;
void* __right_value135 = (void*)0;
struct sNode* __result99__;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
struct sNode* _inf_value2;
struct sDefaultNode* _inf_obj_value2;
void* __right_value140 = (void*)0;
struct sNode* __result102__;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
struct sNode* _inf_value3;
struct sBreakNode* _inf_obj_value3;
void* __right_value145 = (void*)0;
struct sNode* __result105__;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
struct sNode* _inf_value4;
struct sContinueNode* _inf_obj_value4;
void* __right_value150 = (void*)0;
struct sNode* __result108__;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
struct sNode* _inf_value5;
struct sLabelNode* _inf_obj_value5;
void* __right_value157 = (void*)0;
struct sNode* __result111__;
void* __right_value158 = (void*)0;
char* buf_130;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
struct sNode* _inf_value6;
struct sGotoNode* _inf_obj_value6;
void* __right_value164 = (void*)0;
struct sNode* __result114__;
void* __right_value165 = (void*)0;
struct sNode* expression_node_132;
void* __right_value166 = (void*)0;
struct sBlock* block_133;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
struct sNode* _inf_value7;
struct sSwitchNode* _inf_obj_value7;
void* __right_value173 = (void*)0;
struct sNode* __result117__;
void* __right_value174 = (void*)0;
struct sNode* __result118__;
    if(charp_operator_equals(buf,"case")) {
        no_label_123=info->no_label;
        info->no_label=(_Bool)1;
        node_124=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_label=no_label_123;
        expected_next_character(58,info);
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12switch.c", 224, "struct sNode");
        _inf_obj_value1=come_increment_ref_count(((struct sCaseNode*)(__right_value131=sCaseNode_initialize((struct sCaseNode*)come_increment_ref_count(((struct sCaseNode*)(__right_value130=(struct sCaseNode*)come_calloc(1, sizeof(struct sCaseNode)*(1), "12switch.c", 224, "sCaseNode")))),(struct sNode*)come_increment_ref_count(node_124),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sCaseNode_finalize;
        _inf_value1->clone=(void*)sCaseNode_clone;
        _inf_value1->compile=(void*)sCaseNode_compile;
        _inf_value1->sline=(void*)sNodeBase_sline;
        _inf_value1->sname=(void*)sNodeBase_sname;
        _inf_value1->terminated=(void*)sCaseNode_terminated;
        _inf_value1->kind=(void*)sCaseNode_kind;
        __result99__ = __result_obj__ = ((struct sNode*)(__right_value135=_inf_value1));
        if(node_124) { node_124 = come_decrement_ref_count2(node_124, ((struct sNode*)node_124)->finalize, ((struct sNode*)node_124)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value130,sCaseNode_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value131,sCaseNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value135) { __right_value135 = come_decrement_ref_count2(__right_value135, ((struct sNode*)__right_value135)->finalize, ((struct sNode*)__right_value135)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result99__;
        if(node_124) { node_124 = come_decrement_ref_count2(node_124, ((struct sNode*)node_124)->finalize, ((struct sNode*)node_124)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        if(charp_operator_equals(buf,"default")) {
            expected_next_character(58,info);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12switch.c", 229, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sDefaultNode*)(__right_value137=sDefaultNode_initialize((struct sDefaultNode*)come_increment_ref_count(((struct sDefaultNode*)(__right_value136=(struct sDefaultNode*)come_calloc(1, sizeof(struct sDefaultNode)*(1), "12switch.c", 229, "sDefaultNode")))),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sDefaultNode_finalize;
            _inf_value2->clone=(void*)sDefaultNode_clone;
            _inf_value2->compile=(void*)sDefaultNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sDefaultNode_terminated;
            _inf_value2->kind=(void*)sDefaultNode_kind;
            __result102__ = __result_obj__ = ((struct sNode*)(__right_value140=_inf_value2));
            come_call_finalizer3(__right_value136,sDefaultNode_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value137,sDefaultNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value140) { __right_value140 = come_decrement_ref_count2(__right_value140, ((struct sNode*)__right_value140)->finalize, ((struct sNode*)__right_value140)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result102__;
        }
        else {
            if(charp_operator_equals(buf,"break")) {
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12switch.c", 232, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sBreakNode*)(__right_value142=sBreakNode_initialize((struct sBreakNode*)come_increment_ref_count(((struct sBreakNode*)(__right_value141=(struct sBreakNode*)come_calloc(1, sizeof(struct sBreakNode)*(1), "12switch.c", 232, "sBreakNode")))),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sBreakNode_finalize;
                _inf_value3->clone=(void*)sBreakNode_clone;
                _inf_value3->compile=(void*)sBreakNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sNodeBase_terminated;
                _inf_value3->kind=(void*)sBreakNode_kind;
                __result105__ = __result_obj__ = ((struct sNode*)(__right_value145=_inf_value3));
                come_call_finalizer3(__right_value141,sBreakNode_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value142,sBreakNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value145) { __right_value145 = come_decrement_ref_count2(__right_value145, ((struct sNode*)__right_value145)->finalize, ((struct sNode*)__right_value145)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result105__;
            }
            else {
                if(charp_operator_equals(buf,"continue")) {
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12switch.c", 235, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sContinueNode*)(__right_value147=sContinueNode_initialize((struct sContinueNode*)come_increment_ref_count(((struct sContinueNode*)(__right_value146=(struct sContinueNode*)come_calloc(1, sizeof(struct sContinueNode)*(1), "12switch.c", 235, "sContinueNode")))),info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sContinueNode_finalize;
                    _inf_value4->clone=(void*)sContinueNode_clone;
                    _inf_value4->compile=(void*)sContinueNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sNodeBase_terminated;
                    _inf_value4->kind=(void*)sContinueNode_kind;
                    __result108__ = __result_obj__ = ((struct sNode*)(__right_value150=_inf_value4));
                    come_call_finalizer3(__right_value146,sContinueNode_finalize, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer3(__right_value147,sContinueNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(__right_value150) { __right_value150 = come_decrement_ref_count2(__right_value150, ((struct sNode*)__right_value150)->finalize, ((struct sNode*)__right_value150)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result108__;
                }
                else {
                    if(!info->no_label&&*info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12switch.c", 241, "struct sNode");
                        _inf_obj_value5=come_increment_ref_count(((struct sLabelNode*)(__right_value153=sLabelNode_initialize((struct sLabelNode*)come_increment_ref_count(((struct sLabelNode*)(__right_value151=(struct sLabelNode*)come_calloc(1, sizeof(struct sLabelNode)*(1), "12switch.c", 241, "sLabelNode")))),(char*)come_increment_ref_count(((char*)(__right_value152=__builtin_string(buf)))),info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sLabelNode_finalize;
                        _inf_value5->clone=(void*)sLabelNode_clone;
                        _inf_value5->compile=(void*)sLabelNode_compile;
                        _inf_value5->sline=(void*)sNodeBase_sline;
                        _inf_value5->sname=(void*)sNodeBase_sname;
                        _inf_value5->terminated=(void*)sLabelNode_terminated;
                        _inf_value5->kind=(void*)sLabelNode_kind;
                        __result111__ = __result_obj__ = ((struct sNode*)(__right_value157=_inf_value5));
                        come_call_finalizer3(__right_value151,sLabelNode_finalize, 0, 1, 0, 0, __result_obj__);
                        __right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(__right_value153,sLabelNode_finalize, 0, 1, 0, 0, __result_obj__);
                        if(__right_value157) { __right_value157 = come_decrement_ref_count2(__right_value157, ((struct sNode*)__right_value157)->finalize, ((struct sNode*)__right_value157)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result111__;
                    }
                    else {
                        if(charp_operator_equals(buf,"goto")) {
                            buf_130=(char*)come_increment_ref_count(parse_word(info));
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12switch.c", 246, "struct sNode");
                            _inf_obj_value6=come_increment_ref_count(((struct sGotoNode*)(__right_value160=sGotoNode_initialize((struct sGotoNode*)come_increment_ref_count(((struct sGotoNode*)(__right_value159=(struct sGotoNode*)come_calloc(1, sizeof(struct sGotoNode)*(1), "12switch.c", 246, "sGotoNode")))),(char*)come_increment_ref_count(buf_130),info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sGotoNode_finalize;
                            _inf_value6->clone=(void*)sGotoNode_clone;
                            _inf_value6->compile=(void*)sGotoNode_compile;
                            _inf_value6->sline=(void*)sNodeBase_sline;
                            _inf_value6->sname=(void*)sNodeBase_sname;
                            _inf_value6->terminated=(void*)sNodeBase_terminated;
                            _inf_value6->kind=(void*)sGotoNode_kind;
                            __result114__ = __result_obj__ = ((struct sNode*)(__right_value164=_inf_value6));
                            buf_130 = come_decrement_ref_count2(buf_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(__right_value159,sGotoNode_finalize, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer3(__right_value160,sGotoNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value164) { __right_value164 = come_decrement_ref_count2(__right_value164, ((struct sNode*)__right_value164)->finalize, ((struct sNode*)__right_value164)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result114__;
                            buf_130 = come_decrement_ref_count2(buf_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(charp_operator_equals(buf,"switch")) {
                                expected_next_character(40,info);
                                expression_node_132=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                expected_next_character(41,info);
                                block_133=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0));
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "12switch.c", 257, "struct sNode");
                                _inf_obj_value7=come_increment_ref_count(((struct sSwitchNode*)(__right_value168=sSwitchNode_initialize((struct sSwitchNode*)come_increment_ref_count(((struct sSwitchNode*)(__right_value167=(struct sSwitchNode*)come_calloc(1, sizeof(struct sSwitchNode)*(1), "12switch.c", 257, "sSwitchNode")))),(struct sNode*)come_increment_ref_count(expression_node_132),block_133,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sSwitchNode_finalize;
                                _inf_value7->clone=(void*)sSwitchNode_clone;
                                _inf_value7->compile=(void*)sSwitchNode_compile;
                                _inf_value7->sline=(void*)sNodeBase_sline;
                                _inf_value7->sname=(void*)sNodeBase_sname;
                                _inf_value7->terminated=(void*)sSwitchNode_terminated;
                                _inf_value7->kind=(void*)sSwitchNode_kind;
                                __result117__ = __result_obj__ = ((struct sNode*)(__right_value173=_inf_value7));
                                if(expression_node_132) { expression_node_132 = come_decrement_ref_count2(expression_node_132, ((struct sNode*)expression_node_132)->finalize, ((struct sNode*)expression_node_132)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(block_133,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(__right_value167,sSwitchNode_finalize, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer3(__right_value168,sSwitchNode_finalize, 0, 1, 0, 0, __result_obj__);
                                if(__right_value173) { __right_value173 = come_decrement_ref_count2(__right_value173, ((struct sNode*)__right_value173)->finalize, ((struct sNode*)__right_value173)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result117__;
                                if(expression_node_132) { expression_node_132 = come_decrement_ref_count2(expression_node_132, ((struct sNode*)expression_node_132)->finalize, ((struct sNode*)expression_node_132)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(block_133,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                }
            }
        }
    }
    __result118__ = __result_obj__ = ((struct sNode*)(__right_value174=string_node_v11(buf,head,head_sline,info)));
    if(__right_value174) { __right_value174 = come_decrement_ref_count2(__right_value174, ((struct sNode*)__right_value174)->finalize, ((struct sNode*)__right_value174)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result118__;
}

static void sCaseNode_finalize(struct sCaseNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNode!=((void*)0)) {
        if(self->mNode) { self->mNode = come_decrement_ref_count2(self->mNode, ((struct sNode*)self->mNode)->finalize, ((struct sNode*)self->mNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

static struct sCaseNode* sCaseNode_clone(struct sCaseNode* self){
void* __result_obj__=(void*)0;
struct sCaseNode* __result97__;
void* __right_value132 = (void*)0;
struct sCaseNode* result_125;
void* __right_value133 = (void*)0;
char* __dec_obj25;
void* __right_value134 = (void*)0;
struct sNode* __dec_obj26;
struct sCaseNode* __result98__;
    if(self==(void*)0) {
        __result97__ = __result_obj__ = (void*)0;
        return __result97__;
    }
    result_125=(struct sCaseNode*)come_increment_ref_count((struct sCaseNode*)come_calloc(1, sizeof(struct sCaseNode)*(1), "sCaseNode_clone", 3, "sCaseNode"));
    if(self!=((void*)0)) {
        result_125->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj25=result_125->sname;
        result_125->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNode!=((void*)0)) {
        __dec_obj26=result_125->mNode;
        result_125->mNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mNode));
        if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result98__ = __result_obj__ = result_125;
    come_call_finalizer3(result_125,sCaseNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result98__;
}

static void sDefaultNode_finalize(struct sDefaultNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sDefaultNode* sDefaultNode_clone(struct sDefaultNode* self){
void* __result_obj__=(void*)0;
struct sDefaultNode* __result100__;
void* __right_value138 = (void*)0;
struct sDefaultNode* result_126;
void* __right_value139 = (void*)0;
char* __dec_obj27;
struct sDefaultNode* __result101__;
    if(self==(void*)0) {
        __result100__ = __result_obj__ = (void*)0;
        return __result100__;
    }
    result_126=(struct sDefaultNode*)come_increment_ref_count((struct sDefaultNode*)come_calloc(1, sizeof(struct sDefaultNode)*(1), "sDefaultNode_clone", 3, "sDefaultNode"));
    if(self!=((void*)0)) {
        result_126->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj27=result_126->sname;
        result_126->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result101__ = __result_obj__ = result_126;
    come_call_finalizer3(result_126,sDefaultNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result101__;
}

static void sBreakNode_finalize(struct sBreakNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sBreakNode* sBreakNode_clone(struct sBreakNode* self){
void* __result_obj__=(void*)0;
struct sBreakNode* __result103__;
void* __right_value143 = (void*)0;
struct sBreakNode* result_127;
void* __right_value144 = (void*)0;
char* __dec_obj28;
struct sBreakNode* __result104__;
    if(self==(void*)0) {
        __result103__ = __result_obj__ = (void*)0;
        return __result103__;
    }
    result_127=(struct sBreakNode*)come_increment_ref_count((struct sBreakNode*)come_calloc(1, sizeof(struct sBreakNode)*(1), "sBreakNode_clone", 3, "sBreakNode"));
    if(self!=((void*)0)) {
        result_127->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj28=result_127->sname;
        result_127->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result104__ = __result_obj__ = result_127;
    come_call_finalizer3(result_127,sBreakNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result104__;
}

static void sContinueNode_finalize(struct sContinueNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sContinueNode* sContinueNode_clone(struct sContinueNode* self){
void* __result_obj__=(void*)0;
struct sContinueNode* __result106__;
void* __right_value148 = (void*)0;
struct sContinueNode* result_128;
void* __right_value149 = (void*)0;
char* __dec_obj29;
struct sContinueNode* __result107__;
    if(self==(void*)0) {
        __result106__ = __result_obj__ = (void*)0;
        return __result106__;
    }
    result_128=(struct sContinueNode*)come_increment_ref_count((struct sContinueNode*)come_calloc(1, sizeof(struct sContinueNode)*(1), "sContinueNode_clone", 3, "sContinueNode"));
    if(self!=((void*)0)) {
        result_128->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj29=result_128->sname;
        result_128->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result107__ = __result_obj__ = result_128;
    come_call_finalizer3(result_128,sContinueNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result107__;
}

static void sLabelNode_finalize(struct sLabelNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->label!=((void*)0)) {
        self->label = come_decrement_ref_count2(self->label, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sLabelNode* sLabelNode_clone(struct sLabelNode* self){
void* __result_obj__=(void*)0;
struct sLabelNode* __result109__;
void* __right_value154 = (void*)0;
struct sLabelNode* result_129;
void* __right_value155 = (void*)0;
char* __dec_obj30;
void* __right_value156 = (void*)0;
char* __dec_obj31;
struct sLabelNode* __result110__;
    if(self==(void*)0) {
        __result109__ = __result_obj__ = (void*)0;
        return __result109__;
    }
    result_129=(struct sLabelNode*)come_increment_ref_count((struct sLabelNode*)come_calloc(1, sizeof(struct sLabelNode)*(1), "sLabelNode_clone", 3, "sLabelNode"));
    if(self!=((void*)0)) {
        result_129->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj30=result_129->sname;
        result_129->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->label!=((void*)0)) {
        __dec_obj31=result_129->label;
        result_129->label=(char*)come_increment_ref_count(string_clone(self->label));
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result110__ = __result_obj__ = result_129;
    come_call_finalizer3(result_129,sLabelNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result110__;
}

static void sGotoNode_finalize(struct sGotoNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->label!=((void*)0)) {
        self->label = come_decrement_ref_count2(self->label, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sGotoNode* sGotoNode_clone(struct sGotoNode* self){
void* __result_obj__=(void*)0;
struct sGotoNode* __result112__;
void* __right_value161 = (void*)0;
struct sGotoNode* result_131;
void* __right_value162 = (void*)0;
char* __dec_obj32;
void* __right_value163 = (void*)0;
char* __dec_obj33;
struct sGotoNode* __result113__;
    if(self==(void*)0) {
        __result112__ = __result_obj__ = (void*)0;
        return __result112__;
    }
    result_131=(struct sGotoNode*)come_increment_ref_count((struct sGotoNode*)come_calloc(1, sizeof(struct sGotoNode)*(1), "sGotoNode_clone", 3, "sGotoNode"));
    if(self!=((void*)0)) {
        result_131->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj32=result_131->sname;
        result_131->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->label!=((void*)0)) {
        __dec_obj33=result_131->label;
        result_131->label=(char*)come_increment_ref_count(string_clone(self->label));
        __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result113__ = __result_obj__ = result_131;
    come_call_finalizer3(result_131,sGotoNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result113__;
}

static void sSwitchNode_finalize(struct sSwitchNode* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sSwitchNode* sSwitchNode_clone(struct sSwitchNode* self){
void* __result_obj__=(void*)0;
struct sSwitchNode* __result115__;
void* __right_value169 = (void*)0;
struct sSwitchNode* result_134;
void* __right_value170 = (void*)0;
char* __dec_obj34;
void* __right_value171 = (void*)0;
struct sNode* __dec_obj35;
void* __right_value172 = (void*)0;
struct sBlock* __dec_obj36;
struct sSwitchNode* __result116__;
    if(self==(void*)0) {
        __result115__ = __result_obj__ = (void*)0;
        return __result115__;
    }
    result_134=(struct sSwitchNode*)come_increment_ref_count((struct sSwitchNode*)come_calloc(1, sizeof(struct sSwitchNode)*(1), "sSwitchNode_clone", 3, "sSwitchNode"));
    if(self!=((void*)0)) {
        result_134->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj34=result_134->sname;
        result_134->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj35=result_134->mExpressionNode;
        result_134->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode));
        if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj36=result_134->mBlock;
        result_134->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer3(__dec_obj36,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result116__ = __result_obj__ = result_134;
    come_call_finalizer3(result_134,sSwitchNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result116__;
}

