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
struct tuple3$3sTypephcharphcharph
{
    struct sType* v1;
    char* v2;
    char* v3;
};
struct list_item$1tuple3$3sTypephcharphcharphph
{
    struct tuple3$3sTypephcharphcharph* item;
    struct list_item$1tuple3$3sTypephcharphcharphph* prev;
    struct list_item$1tuple3$3sTypephcharphcharphph* next;
};
struct list$1tuple3$3sTypephcharphcharphph
{
    struct list_item$1tuple3$3sTypephcharphcharphph* head;
    struct list_item$1tuple3$3sTypephcharphcharphph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphcharphph* it;
};
struct sGlobalVariable
{
    int sline;
    char* sname;
    struct sType* type;
    char* name;
    struct sNode* right_node;
    char* array_initializer;
    struct list$1tuple3$3sTypephcharphcharphph* multiple_declare;
    char* mDeclareSName;
};
struct sExternalGlobalVariable
{
    int sline;
    char* sname;
    struct sType* type;
    char* name;
    struct list$1tuple3$3sTypephcharphcharphph* multiple_declare;
    char* mDeclareSName;
};
struct tuple3$3sTypephcharphvoidp
{
    struct sType* v1;
    char* v2;
    void* v3;
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
struct sGlobalVariable* sGlobalVariable_initialize(struct sGlobalVariable* self, struct list$1tuple3$3sTypephcharphcharphph* multiple_declare, struct sType* type, char* name, struct sNode* right_node, char* array_initializer, struct sInfo* info);
char* sGlobalVariable_kind(struct sGlobalVariable* self);
_Bool sGlobalVariable_compile(struct sGlobalVariable* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
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
static struct list$1tuple3$3sTypephcharphcharphph* list$1tuple3$3sTypephcharphcharphphp_clone(struct list$1tuple3$3sTypephcharphcharphph* self);
static struct list$1tuple3$3sTypephcharphcharphph* list$1tuple3$3sTypephcharphcharphph_initialize(struct list$1tuple3$3sTypephcharphcharphph* self);
static void list$1tuple3$3sTypephcharphcharphphp_finalize(struct list$1tuple3$3sTypephcharphcharphph* self);
static void list_item$1tuple3$3sTypephcharphcharphphp_finalize(struct list_item$1tuple3$3sTypephcharphcharphph* self);
static struct list$1tuple3$3sTypephcharphcharphph* list$1tuple3$3sTypephcharphcharphph_add(struct list$1tuple3$3sTypephcharphcharphph* self, struct tuple3$3sTypephcharphcharph* item);
static void tuple3$3sTypephcharphcharphp_finalize(struct tuple3$3sTypephcharphcharph* self);
static struct tuple3$3sTypephcharphcharph* tuple3$3sTypephcharphcharphp_clone(struct tuple3$3sTypephcharphcharph* self);
static void tuple3$3sTypephcharphcharph_finalize(struct tuple3$3sTypephcharphcharph* self);
static void list$1tuple3$3sTypephcharphcharphph_finalize(struct list$1tuple3$3sTypephcharphcharphph* self);
static struct tuple3$3sTypephcharphcharph* list$1tuple3$3sTypephcharphcharphph_begin(struct list$1tuple3$3sTypephcharphcharphph* self);
static _Bool list$1tuple3$3sTypephcharphcharphph_end(struct list$1tuple3$3sTypephcharphcharphph* self);
static struct tuple3$3sTypephcharphcharph* list$1tuple3$3sTypephcharphcharphph_next(struct list$1tuple3$3sTypephcharphcharphph* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sExternalGlobalVariable* sExternalGlobalVariable_initialize(struct sExternalGlobalVariable* self, struct list$1tuple3$3sTypephcharphcharphph* multiple_declare, struct sType* type, char* name, struct sInfo* info);
char* sExternalGlobalVariable_kind(struct sExternalGlobalVariable* self);
_Bool sExternalGlobalVariable_compile(struct sExternalGlobalVariable* self, struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct list$1tuple3$3sTypephcharphcharphph* list$1tuple3$3sTypephcharphcharphph_push_back(struct list$1tuple3$3sTypephcharphcharphph* self, struct tuple3$3sTypephcharphcharph* item);
static struct tuple3$3sTypephcharphcharph* tuple3$3sTypephcharphcharph_initialize(struct tuple3$3sTypephcharphcharph* self, struct sType* v1, char* v2, char* v3);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static void sExternalGlobalVariable_finalize(struct sExternalGlobalVariable* self);
static struct sExternalGlobalVariable* sExternalGlobalVariable_clone(struct sExternalGlobalVariable* self);
static void sGlobalVariable_finalize(struct sGlobalVariable* self);
static struct sGlobalVariable* sGlobalVariable_clone(struct sGlobalVariable* self);
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










struct sGlobalVariable* sGlobalVariable_initialize(struct sGlobalVariable* self, struct list$1tuple3$3sTypephcharphcharphph* multiple_declare, struct sType* type, char* name, struct sNode* right_node, char* array_initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value79 = (void*)0;
void* __right_value115 = (void*)0;
struct sType* __dec_obj35;
void* __right_value116 = (void*)0;
char* __dec_obj36;
struct sNode* __dec_obj37;
char* __dec_obj38;
void* __right_value127 = (void*)0;
struct list$1tuple3$3sTypephcharphcharphph* __dec_obj45;
void* __right_value128 = (void*)0;
char* __dec_obj46;
struct sGlobalVariable* __result69__;
    ((struct sNodeBase*)(__right_value79=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value79,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj35=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj36=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj37=self->right_node;
    self->right_node=(struct sNode*)come_increment_ref_count(right_node);
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj38=self->array_initializer;
    self->array_initializer=(char*)come_increment_ref_count(array_initializer);
    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj45=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(list$1tuple3$3sTypephcharphcharphphp_clone(multiple_declare));
    come_call_finalizer3(__dec_obj45,list$1tuple3$3sTypephcharphcharphph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj46=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(__builtin_string(info->sname));
    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result69__ = __result_obj__ = self;
    come_call_finalizer3(self,sGlobalVariable_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(right_node) { right_node = come_decrement_ref_count2(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    array_initializer = come_decrement_ref_count2(array_initializer, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result69__;
}

char* sGlobalVariable_kind(struct sGlobalVariable* self){
void* __result_obj__=(void*)0;
void* __right_value129 = (void*)0;
char* __result70__;
    __result70__ = __result_obj__ = ((char*)(__right_value129=__builtin_string("sGlobalVariable")));
    __right_value129 = come_decrement_ref_count2(__right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result70__;
}

_Bool sGlobalVariable_compile(struct sGlobalVariable* self, struct sInfo* info){
void* __right_value130 = (void*)0;
struct sType* type_87;
void* __right_value131 = (void*)0;
char* name_88;
struct sNode* right_node_89;
void* __right_value132 = (void*)0;
char* array_initializer_90;
struct list$1tuple3$3sTypephcharphcharphph* o2_saved_91;
struct tuple3$3sTypephcharphcharph* it_94;
struct tuple3$3sTypephcharphcharph* multiple_assign_var1;
struct sType* type_97;
char* name_98;
char* initializer_99;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
_Bool __result77__;
void* __right_value144 = (void*)0;
struct CVALUE* come_value_100;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
_Bool __result78__;
    type_87=(struct sType*)come_increment_ref_count(sType_clone(self->type));
    name_88=(char*)come_increment_ref_count(string_clone(self->name));
    right_node_89=self->right_node;
    array_initializer_90=(char*)come_increment_ref_count(string_clone(self->array_initializer));
    if(self->multiple_declare) {
        for(        o2_saved_91=(struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count((self->multiple_declare)),it_94=list$1tuple3$3sTypephcharphcharphph_begin((o2_saved_91));        !list$1tuple3$3sTypephcharphcharphph_end((o2_saved_91));        it_94=list$1tuple3$3sTypephcharphcharphph_next((o2_saved_91))        ){
            multiple_assign_var1=it_94;
            type_97=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            name_98=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            initializer_99=(char*)come_increment_ref_count(multiple_assign_var1->v3);
            add_variable_to_global_table(name_98,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value133=sType_clone(type_97)))),info);
            come_call_finalizer3(__right_value133,sType_finalize, 0, 1, 0, 0, (void*)0);
            if(info->output_header_file) {
                add_come_code_at_come_header(info,"extern %s;\n",((char*)(__right_value134=make_define_var(type_97,name_98,(_Bool)0,info))));
                __right_value134 = come_decrement_ref_count2(__right_value134, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else {
                if(type_97->mUniq) {
                    add_come_code_at_source_head(info,"extern %s;\n",((char*)(__right_value135=make_define_var(type_97,name_98,(_Bool)0,info))));
                    __right_value135 = come_decrement_ref_count2(__right_value135, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    add_come_code_at_source_head3(info,"%s;\n",((char*)(__right_value136=make_define_var(type_97,name_98,(_Bool)0,info))));
                    __right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                else {
                    if(initializer_99) {
                        add_come_code_at_source_head3(info,"%s=%s;\n",((char*)(__right_value137=make_define_var(type_97,name_98,(_Bool)0,info))),initializer_99);
                        __right_value137 = come_decrement_ref_count2(__right_value137, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    else {
                        add_come_code_at_source_head3(info,"%s;\n",((char*)(__right_value138=make_define_var(type_97,name_98,(_Bool)0,info))));
                        __right_value138 = come_decrement_ref_count2(__right_value138, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(type_97,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_98 = come_decrement_ref_count2(name_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            initializer_99 = come_decrement_ref_count2(initializer_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_91,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        add_variable_to_global_table(name_88,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value139=sType_clone(type_87)))),info);
        come_call_finalizer3(__right_value139,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(array_initializer_90) {
            if(info->output_header_file) {
                add_come_code_at_come_header(info,"extern %s;\n",((char*)(__right_value140=make_define_var(type_87,name_88,(_Bool)0,info))));
                __right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else {
                if(type_87->mUniq) {
                    add_come_code_at_source_head(info,"extern %s;\n",((char*)(__right_value141=make_define_var(type_87,name_88,(_Bool)0,info))));
                    __right_value141 = come_decrement_ref_count2(__right_value141, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    add_come_code_at_source_head3(info,"%s=%s;\n",((char*)(__right_value142=make_define_var(type_87,name_88,(_Bool)0,info))),array_initializer_90);
                    __right_value142 = come_decrement_ref_count2(__right_value142, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                else {
                    add_come_code_at_source_head3(info,"%s=%s;\n",((char*)(__right_value143=make_define_var(type_87,name_88,(_Bool)0,info))),array_initializer_90);
                    __right_value143 = come_decrement_ref_count2(__right_value143, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
            }
        }
        else {
            if(right_node_89) {
                if(!node_compile(right_node_89,info)) {
                    __result77__ = (_Bool)0;
                    come_call_finalizer3(type_87,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_88 = come_decrement_ref_count2(name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    array_initializer_90 = come_decrement_ref_count2(array_initializer_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result77__;
                }
                come_value_100=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(info->output_header_file) {
                    add_come_code_at_come_header(info,"extern %s;\n",((char*)(__right_value145=make_define_var(type_87,name_88,(_Bool)0,info))));
                    __right_value145 = come_decrement_ref_count2(__right_value145, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                else {
                    if(type_87->mUniq) {
                        add_come_code_at_source_head(info,"extern %s;\n",((char*)(__right_value146=make_define_var(type_87,name_88,(_Bool)0,info))));
                        __right_value146 = come_decrement_ref_count2(__right_value146, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        add_come_code_at_source_head3(info,"%s=%s;\n",((char*)(__right_value147=make_define_var(type_87,name_88,(_Bool)0,info))),come_value_100->c_value);
                        __right_value147 = come_decrement_ref_count2(__right_value147, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    else {
                        add_come_code_at_source_head3(info,"%s=%s;\n",((char*)(__right_value148=make_define_var(type_87,name_88,(_Bool)0,info))),come_value_100->c_value);
                        __right_value148 = come_decrement_ref_count2(__right_value148, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                }
                come_call_finalizer3(come_value_100,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(info->output_header_file) {
                    add_come_code_at_come_header(info,"extern %s;\n",((char*)(__right_value149=make_define_var(type_87,name_88,(_Bool)0,info))));
                    __right_value149 = come_decrement_ref_count2(__right_value149, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                else {
                    if(type_87->mUniq) {
                        add_come_code_at_source_head(info,"extern %s;\n",((char*)(__right_value150=make_define_var(type_87,name_88,(_Bool)0,info))));
                        __right_value150 = come_decrement_ref_count2(__right_value150, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        add_come_code_at_source_head3(info,"%s;\n",((char*)(__right_value151=make_define_var(type_87,name_88,(_Bool)0,info))));
                        __right_value151 = come_decrement_ref_count2(__right_value151, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                    else {
                        add_come_code_at_source_head3(info,"%s;\n",((char*)(__right_value152=make_define_var(type_87,name_88,(_Bool)0,info))));
                        __right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                }
            }
        }
    }
    __result78__ = (_Bool)1;
    come_call_finalizer3(type_87,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_88 = come_decrement_ref_count2(name_88, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    array_initializer_90 = come_decrement_ref_count2(array_initializer_90, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result78__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result45__;
void* __right_value80 = (void*)0;
struct sType* result_47;
void* __right_value87 = (void*)0;
struct list$1sTypeph* __dec_obj15;
void* __right_value90 = (void*)0;
struct tuple1$1sTypeph* __dec_obj17;
void* __right_value91 = (void*)0;
struct tuple1$1sTypeph* __dec_obj18;
void* __right_value92 = (void*)0;
char* __dec_obj19;
void* __right_value93 = (void*)0;
struct list$1sTypeph* __dec_obj20;
void* __right_value101 = (void*)0;
struct list$1sNodeph* __dec_obj24;
void* __right_value102 = (void*)0;
struct list$1sTypeph* __dec_obj25;
void* __right_value109 = (void*)0;
struct list$1charph* __dec_obj29;
void* __right_value110 = (void*)0;
struct tuple1$1sTypeph* __dec_obj30;
void* __right_value111 = (void*)0;
struct sNode* __dec_obj31;
void* __right_value112 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value113 = (void*)0;
char* __dec_obj33;
void* __right_value114 = (void*)0;
char* __dec_obj34;
struct sType* __result62__;
    if(self==(void*)0) {
        __result45__ = __result_obj__ = (void*)0;
        return __result45__;
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
    __result62__ = __result_obj__ = result_47;
    come_call_finalizer3(result_47,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result62__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result46__;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct list$1sTypeph* result_54;
struct list_item$1sTypeph* it_55;
void* __right_value86 = (void*)0;
struct list$1sTypeph* __result49__;
    if(self==((void*)0)) {
        __result46__ = __result_obj__ = ((void*)0);
        return __result46__;
    }
    result_54=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(__right_value81=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./neo-c.h", 135, "list$1sTypeph"))))));
    come_call_finalizer3(__right_value81,list$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
    it_55=self->head;
    while(it_55!=((void*)0)) {
        list$1sTypeph_add(result_54,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value86=sType_clone(it_55->item)))));
        come_call_finalizer3(__right_value86,sType_finalize, 0, 1, 0, 0, __result_obj__);
        it_55=it_55->next;
    }
    __result49__ = __result_obj__ = result_54;
    come_call_finalizer3(result_54,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result49__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result47__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result47__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result47__;
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
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
struct list_item$1sTypeph* litem_56;
struct sType* __dec_obj12;
void* __right_value84 = (void*)0;
struct list_item$1sTypeph* litem_57;
struct sType* __dec_obj13;
void* __right_value85 = (void*)0;
struct list_item$1sTypeph* litem_58;
struct sType* __dec_obj14;
struct list$1sTypeph* __result48__;
    if(self->len==0) {
        litem_56=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value83=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 149, "list_item$1sTypeph"))));
        come_call_finalizer3(__right_value83,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
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
            litem_57=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value84=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 159, "list_item$1sTypeph"))));
            come_call_finalizer3(__right_value84,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_57->prev=self->head;
            litem_57->next=((void*)0);
            __dec_obj13=litem_57->item;
            litem_57->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj13,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_57;
            self->head->next=litem_57;
        }
        else {
            litem_58=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value85=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./neo-c.h", 169, "list_item$1sTypeph"))));
            come_call_finalizer3(__right_value85,list_item$1sTypephp_finalize, 0, 1, 0, 0, __result_obj__);
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
    __result48__ = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result48__;
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
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result50__;
void* __right_value88 = (void*)0;
struct tuple1$1sTypeph* result_61;
void* __right_value89 = (void*)0;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result51__;
    if(self==(void*)0) {
        __result50__ = __result_obj__ = (void*)0;
        return __result50__;
    }
    result_61=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj16=result_61->v1;
        result_61->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result51__ = __result_obj__ = result_61;
    come_call_finalizer3(result_61,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    return __result51__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result52__;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
struct list$1sNodeph* result_62;
struct list_item$1sNodeph* it_63;
void* __right_value100 = (void*)0;
struct list$1sNodeph* __result57__;
    if(self==((void*)0)) {
        __result52__ = __result_obj__ = ((void*)0);
        return __result52__;
    }
    result_62=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(__right_value94=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./neo-c.h", 135, "list$1sNodeph"))))));
    come_call_finalizer3(__right_value94,list$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
    it_63=self->head;
    while(it_63!=((void*)0)) {
        list$1sNodeph_add(result_62,(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value100=sNode_clone(it_63->item)))));
        if(__right_value100) { __right_value100 = come_decrement_ref_count2(__right_value100, ((struct sNode*)__right_value100)->finalize, ((struct sNode*)__right_value100)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        it_63=it_63->next;
    }
    __result57__ = __result_obj__ = result_62;
    come_call_finalizer3(result_62,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result57__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result53__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result53__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result53__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
struct list_item$1sNodeph* litem_64;
struct sNode* __dec_obj21;
void* __right_value97 = (void*)0;
struct list_item$1sNodeph* litem_65;
struct sNode* __dec_obj22;
void* __right_value98 = (void*)0;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result54__;
    if(self->len==0) {
        litem_64=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value96=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 149, "list_item$1sNodeph"))));
        come_call_finalizer3(__right_value96,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
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
            litem_65=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value97=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 159, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value97,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_65->prev=self->head;
            litem_65->next=((void*)0);
            __dec_obj22=litem_65->item;
            litem_65->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_65;
            self->head->next=litem_65;
        }
        else {
            litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./neo-c.h", 169, "list_item$1sNodeph"))));
            come_call_finalizer3(__right_value98,list_item$1sNodephp_finalize, 0, 1, 0, 0, __result_obj__);
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
    __result54__ = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result54__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result55__;
void* __right_value99 = (void*)0;
struct sNode* result_67;
struct sNode* __result56__;
    if(self==(void*)0) {
        __result55__ = __result_obj__ = (void*)0;
        return __result55__;
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
    __result56__ = __result_obj__ = result_67;
    if(result_67) { result_67 = come_decrement_ref_count2(result_67, ((struct sNode*)result_67)->finalize, ((struct sNode*)result_67)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result56__;
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
void* __result_obj__=(void*)0;
struct list$1charph* __result58__;
void* __right_value103 = (void*)0;
void* __right_value104 = (void*)0;
struct list$1charph* result_70;
struct list_item$1charph* it_71;
void* __right_value108 = (void*)0;
struct list$1charph* __result61__;
    if(self==((void*)0)) {
        __result58__ = __result_obj__ = ((void*)0);
        return __result58__;
    }
    result_70=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value103=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 135, "list$1charph"))))));
    come_call_finalizer3(__right_value103,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    it_71=self->head;
    while(it_71!=((void*)0)) {
        list$1charph_add(result_70,(char*)come_increment_ref_count(((char*)(__right_value108=string_clone(it_71->item)))));
        __right_value108 = come_decrement_ref_count2(__right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        it_71=it_71->next;
    }
    __result61__ = __result_obj__ = result_70;
    come_call_finalizer3(result_70,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result61__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result59__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result59__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result59__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1charph* litem_72;
char* __dec_obj26;
void* __right_value106 = (void*)0;
struct list_item$1charph* litem_73;
char* __dec_obj27;
void* __right_value107 = (void*)0;
struct list_item$1charph* litem_74;
char* __dec_obj28;
struct list$1charph* __result60__;
    if(self->len==0) {
        litem_72=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value105=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 149, "list_item$1charph"))));
        come_call_finalizer3(__right_value105,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
            litem_73=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value106=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 159, "list_item$1charph"))));
            come_call_finalizer3(__right_value106,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_73->prev=self->head;
            litem_73->next=((void*)0);
            __dec_obj27=litem_73->item;
            litem_73->item=(char*)come_increment_ref_count(item);
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_73;
            self->head->next=litem_73;
        }
        else {
            litem_74=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value107=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 169, "list_item$1charph"))));
            come_call_finalizer3(__right_value107,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
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
    __result60__ = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result60__;
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

static struct list$1tuple3$3sTypephcharphcharphph* list$1tuple3$3sTypephcharphcharphphp_clone(struct list$1tuple3$3sTypephcharphcharphph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sTypephcharphcharphph* __result63__;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1tuple3$3sTypephcharphcharphph* result_79;
struct list_item$1tuple3$3sTypephcharphcharphph* it_80;
void* __right_value126 = (void*)0;
struct list$1tuple3$3sTypephcharphcharphph* __result68__;
    if(self==((void*)0)) {
        __result63__ = __result_obj__ = ((void*)0);
        return __result63__;
    }
    result_79=(struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(list$1tuple3$3sTypephcharphcharphph_initialize((struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphcharphph*)(__right_value117=(struct list$1tuple3$3sTypephcharphcharphph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphcharphph)*(1), "./neo-c.h", 135, "list$1tuple3$3sTypephcharphcharphph"))))));
    come_call_finalizer3(__right_value117,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 1, 0, 0, __result_obj__);
    it_80=self->head;
    while(it_80!=((void*)0)) {
        list$1tuple3$3sTypephcharphcharphph_add(result_79,(struct tuple3$3sTypephcharphcharph*)come_increment_ref_count(((struct tuple3$3sTypephcharphcharph*)(__right_value126=tuple3$3sTypephcharphcharphp_clone(it_80->item)))));
        come_call_finalizer3(__right_value126,tuple3$3sTypephcharphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        it_80=it_80->next;
    }
    __result68__ = __result_obj__ = result_79;
    come_call_finalizer3(result_79,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result68__;
}

static struct list$1tuple3$3sTypephcharphcharphph* list$1tuple3$3sTypephcharphcharphph_initialize(struct list$1tuple3$3sTypephcharphcharphph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sTypephcharphcharphph* __result64__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result64__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result64__;
}

static void list$1tuple3$3sTypephcharphcharphphp_finalize(struct list$1tuple3$3sTypephcharphcharphph* self){
struct list_item$1tuple3$3sTypephcharphcharphph* it_77;
struct list_item$1tuple3$3sTypephcharphcharphph* prev_it_78;
    it_77=self->head;
    while(it_77!=((void*)0)) {
        prev_it_78=it_77;
        it_77=it_77->next;
        come_call_finalizer3(prev_it_78,list_item$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple3$3sTypephcharphcharphphp_finalize(struct list_item$1tuple3$3sTypephcharphcharphph* self){
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,tuple3$3sTypephcharphcharphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1tuple3$3sTypephcharphcharphph* list$1tuple3$3sTypephcharphcharphph_add(struct list$1tuple3$3sTypephcharphcharphph* self, struct tuple3$3sTypephcharphcharph* item){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
struct list_item$1tuple3$3sTypephcharphcharphph* litem_81;
struct tuple3$3sTypephcharphcharph* __dec_obj39;
void* __right_value120 = (void*)0;
struct list_item$1tuple3$3sTypephcharphcharphph* litem_82;
struct tuple3$3sTypephcharphcharph* __dec_obj40;
void* __right_value121 = (void*)0;
struct list_item$1tuple3$3sTypephcharphcharphph* litem_83;
struct tuple3$3sTypephcharphcharph* __dec_obj41;
struct list$1tuple3$3sTypephcharphcharphph* __result65__;
    if(self->len==0) {
        litem_81=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphcharphph*)(__right_value119=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphcharphph)*(1), "./neo-c.h", 149, "list_item$1tuple3$3sTypephcharphcharphph"))));
        come_call_finalizer3(__right_value119,list_item$1tuple3$3sTypephcharphcharphphp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_81->prev=((void*)0);
        litem_81->next=((void*)0);
        __dec_obj39=litem_81->item;
        litem_81->item=(struct tuple3$3sTypephcharphcharph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj39,tuple3$3sTypephcharphcharphp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_81;
        self->head=litem_81;
    }
    else {
        if(self->len==1) {
            litem_82=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphcharphph*)(__right_value120=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphcharphph)*(1), "./neo-c.h", 159, "list_item$1tuple3$3sTypephcharphcharphph"))));
            come_call_finalizer3(__right_value120,list_item$1tuple3$3sTypephcharphcharphphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_82->prev=self->head;
            litem_82->next=((void*)0);
            __dec_obj40=litem_82->item;
            litem_82->item=(struct tuple3$3sTypephcharphcharph*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj40,tuple3$3sTypephcharphcharphp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_82;
            self->head->next=litem_82;
        }
        else {
            litem_83=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphcharphph*)(__right_value121=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphcharphph)*(1), "./neo-c.h", 169, "list_item$1tuple3$3sTypephcharphcharphph"))));
            come_call_finalizer3(__right_value121,list_item$1tuple3$3sTypephcharphcharphphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_83->prev=self->tail;
            litem_83->next=((void*)0);
            __dec_obj41=litem_83->item;
            litem_83->item=(struct tuple3$3sTypephcharphcharph*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj41,tuple3$3sTypephcharphcharphp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_83;
            self->tail=litem_83;
        }
    }
    self->len++;
    __result65__ = __result_obj__ = self;
    come_call_finalizer3(item,tuple3$3sTypephcharphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result65__;
}

static void tuple3$3sTypephcharphcharphp_finalize(struct tuple3$3sTypephcharphcharph* self){
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        self->v3 = come_decrement_ref_count2(self->v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct tuple3$3sTypephcharphcharph* tuple3$3sTypephcharphcharphp_clone(struct tuple3$3sTypephcharphcharph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphcharph* __result66__;
void* __right_value122 = (void*)0;
struct tuple3$3sTypephcharphcharph* result_84;
void* __right_value123 = (void*)0;
struct sType* __dec_obj42;
void* __right_value124 = (void*)0;
char* __dec_obj43;
void* __right_value125 = (void*)0;
char* __dec_obj44;
struct tuple3$3sTypephcharphcharph* __result67__;
    if(self==(void*)0) {
        __result66__ = __result_obj__ = (void*)0;
        return __result66__;
    }
    result_84=(struct tuple3$3sTypephcharphcharph*)come_increment_ref_count((struct tuple3$3sTypephcharphcharph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphcharph)*(1), "tuple3$3sTypephcharphcharphp_clone", 3, "tuple3$3sTypephcharphcharph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj42=result_84->v1;
        result_84->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj43=result_84->v2;
        result_84->v2=(char*)come_increment_ref_count(string_clone(self->v2));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj44=result_84->v3;
        result_84->v3=(char*)come_increment_ref_count(string_clone(self->v3));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result67__ = __result_obj__ = result_84;
    come_call_finalizer3(result_84,tuple3$3sTypephcharphcharph_finalize, 0, 0, 1, 0, (void*)0);
    return __result67__;
}

static void tuple3$3sTypephcharphcharph_finalize(struct tuple3$3sTypephcharphcharph* self){
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        self->v3 = come_decrement_ref_count2(self->v3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1tuple3$3sTypephcharphcharphph_finalize(struct list$1tuple3$3sTypephcharphcharphph* self){
struct list_item$1tuple3$3sTypephcharphcharphph* it_85;
struct list_item$1tuple3$3sTypephcharphcharphph* prev_it_86;
    it_85=self->head;
    while(it_85!=((void*)0)) {
        prev_it_86=it_85;
        it_85=it_85->next;
        come_call_finalizer3(prev_it_86,list_item$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple3$3sTypephcharphcharph* list$1tuple3$3sTypephcharphcharphph_begin(struct list$1tuple3$3sTypephcharphcharphph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphcharph* result_92;
struct tuple3$3sTypephcharphcharph* __result71__;
struct tuple3$3sTypephcharphcharph* __result72__;
struct tuple3$3sTypephcharphcharph* result_93;
struct tuple3$3sTypephcharphcharph* __result73__;
result_92 = (void*)0;
result_93 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_92,0,sizeof(struct tuple3$3sTypephcharphcharph*));
        __result71__ = __result_obj__ = result_92;
        return __result71__;
    }
    self->it=self->head;
    if(self->it) {
        __result72__ = __result_obj__ = self->it->item;
        return __result72__;
    }
    memset(&result_93,0,sizeof(struct tuple3$3sTypephcharphcharph*));
    __result73__ = __result_obj__ = result_93;
    return __result73__;
}

static _Bool list$1tuple3$3sTypephcharphcharphph_end(struct list$1tuple3$3sTypephcharphcharphph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sTypephcharphcharph* list$1tuple3$3sTypephcharphcharphph_next(struct list$1tuple3$3sTypephcharphcharphph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphcharph* result_95;
struct tuple3$3sTypephcharphcharph* __result74__;
struct tuple3$3sTypephcharphcharph* __result75__;
struct tuple3$3sTypephcharphcharph* result_96;
struct tuple3$3sTypephcharphcharph* __result76__;
result_95 = (void*)0;
result_96 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_95,0,sizeof(struct tuple3$3sTypephcharphcharph*));
        __result74__ = __result_obj__ = result_95;
        return __result74__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result75__ = __result_obj__ = self->it->item;
        return __result75__;
    }
    memset(&result_96,0,sizeof(struct tuple3$3sTypephcharphcharph*));
    __result76__ = __result_obj__ = result_96;
    return __result76__;
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

struct sExternalGlobalVariable* sExternalGlobalVariable_initialize(struct sExternalGlobalVariable* self, struct list$1tuple3$3sTypephcharphcharphph* multiple_declare, struct sType* type, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct sType* __dec_obj47;
void* __right_value155 = (void*)0;
char* __dec_obj48;
void* __right_value156 = (void*)0;
struct list$1tuple3$3sTypephcharphcharphph* __dec_obj49;
void* __right_value157 = (void*)0;
char* __dec_obj50;
struct sExternalGlobalVariable* __result79__;
    ((struct sNodeBase*)(__right_value153=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value153,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj47=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj48=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj49=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(list$1tuple3$3sTypephcharphcharphphp_clone(multiple_declare));
    come_call_finalizer3(__dec_obj49,list$1tuple3$3sTypephcharphcharphph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj50=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(__builtin_string(info->sname));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result79__ = __result_obj__ = self;
    come_call_finalizer3(self,sExternalGlobalVariable_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result79__;
}

char* sExternalGlobalVariable_kind(struct sExternalGlobalVariable* self){
void* __result_obj__=(void*)0;
void* __right_value158 = (void*)0;
char* __result80__;
    __result80__ = __result_obj__ = ((char*)(__right_value158=__builtin_string("sExternalGlobalVariable")));
    __right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result80__;
}

_Bool sExternalGlobalVariable_compile(struct sExternalGlobalVariable* self, struct sInfo* info){
struct sType* type_101;
char* name_102;
struct list$1tuple3$3sTypephcharphcharphph* o2_saved_103;
struct tuple3$3sTypephcharphcharph* it_104;
struct tuple3$3sTypephcharphcharph* multiple_assign_var2;
struct sType* type_105;
char* name_106;
char* initializer_107;
void* __right_value159 = (void*)0;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
_Bool __result81__;
    type_101=self->type;
    name_102=(char*)come_increment_ref_count(self->name);
    if(self->multiple_declare) {
        for(        o2_saved_103=(struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count((self->multiple_declare)),it_104=list$1tuple3$3sTypephcharphcharphph_begin((o2_saved_103));        !list$1tuple3$3sTypephcharphcharphph_end((o2_saved_103));        it_104=list$1tuple3$3sTypephcharphcharphph_next((o2_saved_103))        ){
            multiple_assign_var2=it_104;
            type_105=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            name_106=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            initializer_107=(char*)come_increment_ref_count(multiple_assign_var2->v3);
            add_variable_to_global_table(name_106,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value159=sType_clone(type_105)))),info);
            come_call_finalizer3(__right_value159,sType_finalize, 0, 1, 0, 0, (void*)0);
            if(info->output_header_file) {
                add_come_code_at_come_header(info,"extern %s;\n",((char*)(__right_value160=make_define_var(type_105,name_106,(_Bool)0,info))));
                __right_value160 = come_decrement_ref_count2(__right_value160, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else {
                add_come_code_at_source_head(info,"extern %s;\n",((char*)(__right_value161=make_define_var(type_105,name_106,(_Bool)0,info))));
                __right_value161 = come_decrement_ref_count2(__right_value161, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_105,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_106 = come_decrement_ref_count2(name_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            initializer_107 = come_decrement_ref_count2(initializer_107, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_103,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        add_variable_to_global_table(name_102,(struct sType*)come_increment_ref_count(((struct sType*)(__right_value162=sType_clone(type_101)))),info);
        come_call_finalizer3(__right_value162,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(info->output_header_file) {
            add_come_code_at_come_header(info,"extern %s;\n",((char*)(__right_value163=make_define_var(type_101,name_102,(_Bool)0,info))));
            __right_value163 = come_decrement_ref_count2(__right_value163, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            add_come_code_at_source_head(info,"extern %s;\n",((char*)(__right_value164=make_define_var(type_101,name_102,(_Bool)0,info))));
            __right_value164 = come_decrement_ref_count2(__right_value164, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
    }
    __result81__ = (_Bool)1;
    name_102 = come_decrement_ref_count2(name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result81__;
}

struct sNode* parse_global_variable(struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool multiple_declare_108;
char* p_109;
int sline_110;
void* __right_value165 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* type_111;
char* name_112;
_Bool err_113;
void* __right_value166 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var4;
struct sType* type_114;
char* name_115;
void* __right_value167 = (void*)0;
_Bool no_output_err_116;
_Bool no_comma_117;
_Bool no_output_come_code_118;
void* __right_value168 = (void*)0;
struct sNode* exp_119;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
struct list$1tuple3$3sTypephcharphcharphph* multiple_declare_120;
void* __right_value171 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* base_type_121;
char* name_122;
_Bool err_123;
void* __right_value172 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var6;
struct sType* type2_124;
char* var_name_125;
char* head_126;
void* __right_value173 = (void*)0;
_Bool no_output_err_127;
_Bool no_comma_128;
_Bool no_output_come_code_129;
void* __right_value174 = (void*)0;
struct sNode* exp_130;
char* tail_131;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
struct buffer* buf_132;
void* __right_value177 = (void*)0;
char* initializer_133;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var7;
struct sType* type2_137;
char* var_name_138;
char* head_139;
void* __right_value186 = (void*)0;
_Bool no_output_err_140;
_Bool no_comma_141;
_Bool no_output_come_code_142;
void* __right_value187 = (void*)0;
struct sNode* exp_143;
char* tail_144;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct buffer* buf_145;
void* __right_value190 = (void*)0;
char* initializer_146;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
struct sNode* right_node_147;
char* array_initializer_148;
void* __right_value195 = (void*)0;
char* var_name2_149;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct sNode* _inf_value1;
struct sExternalGlobalVariable* _inf_obj_value1;
void* __right_value204 = (void*)0;
struct sNode* __result87__;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct sNode* _inf_value2;
struct sGlobalVariable* _inf_obj_value2;
void* __right_value215 = (void*)0;
struct sNode* __result90__;
void* __right_value216 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* result_type_152;
char* var_name_153;
_Bool err_154;
struct sNode* right_node_155;
char* array_initializer_156;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct buffer* buf_157;
_Bool squort_158;
_Bool dquort_159;
int nest_160;
void* __right_value219 = (void*)0;
char* __dec_obj71;
void* __right_value220 = (void*)0;
struct sNode* __dec_obj72;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct sNode* _inf_value3;
struct sExternalGlobalVariable* _inf_obj_value3;
void* __right_value229 = (void*)0;
struct sNode* __result93__;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct sNode* _inf_value4;
struct sGlobalVariable* _inf_obj_value4;
void* __right_value240 = (void*)0;
struct sNode* __result96__;
struct sNode* __result97__;
    multiple_declare_108=(_Bool)0;
    {
        p_109=info->p;
        sline_110=info->sline;
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value165=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_111=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            name_112=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_113=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value165,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(err_113) {
                multiple_assign_var4=((struct tuple2$2sTypephcharph*)(__right_value166=parse_variable_name((struct sType*)come_increment_ref_count(type_111),(_Bool)1,info)));
                type_114=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name_115=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                come_call_finalizer3(__right_value166,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(*info->p==61) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(*info->p==123) {
                        ((char*)(__right_value167=skip_block(info)));
                        __right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        no_output_err_116=info->no_output_err;
                        no_comma_117=info->no_comma;
                        no_output_come_code_118=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_119=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_117;
                        info->no_output_err=no_output_err_116;
                        info->no_output_come_code=no_output_come_code_118;
                        if(exp_119) { exp_119 = come_decrement_ref_count2(exp_119, ((struct sNode*)exp_119)->finalize, ((struct sNode*)exp_119)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
                if(!is_type_name(name_115,info)&&*info->p==44) {
                    multiple_declare_108=(_Bool)1;
                }
                come_call_finalizer3(type_114,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_115 = come_decrement_ref_count2(name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(type_111,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_112 = come_decrement_ref_count2(name_112, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_109;
        info->sline=sline_110;
    }
    if(multiple_declare_108) {
        multiple_declare_120=(struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(list$1tuple3$3sTypephcharphcharphph_initialize((struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(((struct list$1tuple3$3sTypephcharphcharphph*)(__right_value169=(struct list$1tuple3$3sTypephcharphcharphph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphcharphph)*(1), "07gvar.c", 203, "list$1tuple3$3sTypephcharphcharphph"))))));
        come_call_finalizer3(__right_value169,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 1, 0, 0, __result_obj__);
        multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value171=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_121=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
        name_122=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        err_123=multiple_assign_var5->v3;
        come_call_finalizer3(__right_value171,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(!err_123) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var6=((struct tuple2$2sTypephcharph*)(__right_value172=parse_variable_name((struct sType*)come_increment_ref_count(base_type_121),(_Bool)1,info)));
        type2_124=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        var_name_125=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        come_call_finalizer3(__right_value172,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(*info->p==61) {
            info->p++;
            skip_spaces_and_lf(info);
            head_126=info->p;
            if(*info->p==123) {
                ((char*)(__right_value173=skip_block(info)));
                __right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else {
                no_output_err_127=info->no_output_err;
                no_comma_128=info->no_comma;
                no_output_come_code_129=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_130=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_128;
                info->no_output_err=no_output_err_127;
                info->no_output_come_code=no_output_come_code_129;
                if(exp_130) { exp_130 = come_decrement_ref_count2(exp_130, ((struct sNode*)exp_130)->finalize, ((struct sNode*)exp_130)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            tail_131=info->p;
            buf_132=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value175=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07gvar.c", 243, "buffer"))))));
            come_call_finalizer3(__right_value175,buffer_finalize, 0, 1, 0, 0, __result_obj__);
            buffer_append(buf_132,head_126,tail_131-head_126);
            initializer_133=(char*)come_increment_ref_count(buffer_to_string(buf_132));
            list$1tuple3$3sTypephcharphcharphph_push_back(multiple_declare_120,(struct tuple3$3sTypephcharphcharph*)come_increment_ref_count(((struct tuple3$3sTypephcharphcharph*)(__right_value182=tuple3$3sTypephcharphcharph_initialize((struct tuple3$3sTypephcharphcharph*)come_increment_ref_count(((struct tuple3$3sTypephcharphcharph*)(__right_value181=(struct tuple3$3sTypephcharphcharph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphcharph)*(1), "07gvar.c", 249, "struct tuple3$3sTypephcharphcharph")))),(struct sType*)come_increment_ref_count(type2_124),(char*)come_increment_ref_count(var_name_125),(char*)come_increment_ref_count(initializer_133))))));
            come_call_finalizer3(__right_value181,tuple3$3sTypephcharphcharph_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value182,tuple3$3sTypephcharphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(buf_132,buffer_finalize, 0, 0, 0, 0, (void*)0);
            initializer_133 = come_decrement_ref_count2(initializer_133, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            list$1tuple3$3sTypephcharphcharphph_push_back(multiple_declare_120,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(__right_value184=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(__right_value183=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07gvar.c", 252, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(type2_124),(char*)come_increment_ref_count(var_name_125),((void*)0))))));
            __right_value183 = come_decrement_ref_count2(__right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value184,tuple3$3sTypephcharphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
        }
        while(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var7=((struct tuple2$2sTypephcharph*)(__right_value185=parse_variable_name((struct sType*)come_increment_ref_count(base_type_121),(_Bool)0,info)));
            type2_137=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            var_name_138=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            come_call_finalizer3(__right_value185,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(*info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                head_139=info->p;
                if(*info->p==123) {
                    ((char*)(__right_value186=skip_block(info)));
                    __right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                else {
                    no_output_err_140=info->no_output_err;
                    no_comma_141=info->no_comma;
                    no_output_come_code_142=info->no_output_come_code;
                    info->no_output_err=(_Bool)1;
                    info->no_comma=(_Bool)1;
                    info->no_output_come_code=(_Bool)1;
                    exp_143=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_141;
                    info->no_output_err=no_output_err_140;
                    info->no_output_come_code=no_output_come_code_142;
                    if(exp_143) { exp_143 = come_decrement_ref_count2(exp_143, ((struct sNode*)exp_143)->finalize, ((struct sNode*)exp_143)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                tail_144=info->p;
                buf_145=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value188=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07gvar.c", 290, "buffer"))))));
                come_call_finalizer3(__right_value188,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                buffer_append(buf_145,head_139,tail_144-head_139);
                initializer_146=(char*)come_increment_ref_count(buffer_to_string(buf_145));
                list$1tuple3$3sTypephcharphcharphph_push_back(multiple_declare_120,(struct tuple3$3sTypephcharphcharph*)come_increment_ref_count(((struct tuple3$3sTypephcharphcharph*)(__right_value192=tuple3$3sTypephcharphcharph_initialize((struct tuple3$3sTypephcharphcharph*)come_increment_ref_count(((struct tuple3$3sTypephcharphcharph*)(__right_value191=(struct tuple3$3sTypephcharphcharph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphcharph)*(1), "07gvar.c", 296, "struct tuple3$3sTypephcharphcharph")))),(struct sType*)come_increment_ref_count(type2_137),(char*)come_increment_ref_count(var_name_138),(char*)come_increment_ref_count(initializer_146))))));
                come_call_finalizer3(__right_value191,tuple3$3sTypephcharphcharph_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value192,tuple3$3sTypephcharphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(buf_145,buffer_finalize, 0, 0, 0, 0, (void*)0);
                initializer_146 = come_decrement_ref_count2(initializer_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                list$1tuple3$3sTypephcharphcharphph_push_back(multiple_declare_120,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(__right_value194=tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(((struct tuple3$3sTypephcharphvoidp*)(__right_value193=(struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07gvar.c", 299, "struct tuple3$3sTypephcharphvoidp")))),(struct sType*)come_increment_ref_count(type2_137),(char*)come_increment_ref_count(var_name_138),((void*)0))))));
                __right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value194,tuple3$3sTypephcharphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(type2_137,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_138 = come_decrement_ref_count2(var_name_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        right_node_147=((void*)0);
        array_initializer_148=((void*)0);
        var_name2_149=(char*)come_increment_ref_count(__builtin_string(""));
        if(base_type_121->mExtern) {
            if(right_node_147) {
                err_msg(info,"invalid right value");
                exit(2);
            }
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07gvar.c", 312, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sExternalGlobalVariable*)(__right_value197=sExternalGlobalVariable_initialize((struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(__right_value196=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "07gvar.c", 312, "sExternalGlobalVariable")))),(struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(multiple_declare_120),base_type_121,(char*)come_increment_ref_count(var_name2_149),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sExternalGlobalVariable_finalize;
            _inf_value1->clone=(void*)sExternalGlobalVariable_clone;
            _inf_value1->compile=(void*)sExternalGlobalVariable_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sExternalGlobalVariable_kind;
            __result87__ = __result_obj__ = ((struct sNode*)(__right_value204=_inf_value1));
            come_call_finalizer3(multiple_declare_120,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(base_type_121,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_122 = come_decrement_ref_count2(name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_124,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_125 = come_decrement_ref_count2(var_name_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_147) { right_node_147 = come_decrement_ref_count2(right_node_147, ((struct sNode*)right_node_147)->finalize, ((struct sNode*)right_node_147)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_148 = come_decrement_ref_count2(array_initializer_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            var_name2_149 = come_decrement_ref_count2(var_name2_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value196,sExternalGlobalVariable_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value197,sExternalGlobalVariable_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value204) { __right_value204 = come_decrement_ref_count2(__right_value204, ((struct sNode*)__right_value204)->finalize, ((struct sNode*)__right_value204)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result87__;
        }
        else {
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07gvar.c", 315, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sGlobalVariable*)(__right_value206=sGlobalVariable_initialize((struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(__right_value205=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "07gvar.c", 315, "sGlobalVariable")))),(struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(multiple_declare_120),base_type_121,(char*)come_increment_ref_count(var_name2_149),(struct sNode*)come_increment_ref_count(right_node_147),(char*)come_increment_ref_count(array_initializer_148),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sGlobalVariable_finalize;
            _inf_value2->clone=(void*)sGlobalVariable_clone;
            _inf_value2->compile=(void*)sGlobalVariable_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sGlobalVariable_kind;
            __result90__ = __result_obj__ = ((struct sNode*)(__right_value215=_inf_value2));
            come_call_finalizer3(multiple_declare_120,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(base_type_121,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_122 = come_decrement_ref_count2(name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_124,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_125 = come_decrement_ref_count2(var_name_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_147) { right_node_147 = come_decrement_ref_count2(right_node_147, ((struct sNode*)right_node_147)->finalize, ((struct sNode*)right_node_147)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_148 = come_decrement_ref_count2(array_initializer_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            var_name2_149 = come_decrement_ref_count2(var_name2_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value205,sGlobalVariable_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value206,sGlobalVariable_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value215) { __right_value215 = come_decrement_ref_count2(__right_value215, ((struct sNode*)__right_value215)->finalize, ((struct sNode*)__right_value215)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result90__;
        }
        come_call_finalizer3(multiple_declare_120,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(base_type_121,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_122 = come_decrement_ref_count2(name_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_124,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_125 = come_decrement_ref_count2(var_name_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_147) { right_node_147 = come_decrement_ref_count2(right_node_147, ((struct sNode*)right_node_147)->finalize, ((struct sNode*)right_node_147)->_protocol_obj, 0, 0, 0, (void*)0); } 
        array_initializer_148 = come_decrement_ref_count2(array_initializer_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        var_name2_149 = come_decrement_ref_count2(var_name2_149, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value216=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
        result_type_152=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        var_name_153=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_154=multiple_assign_var8->v3;
        come_call_finalizer3(__right_value216,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(!err_154) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        right_node_155=((void*)0);
        array_initializer_156=((void*)0);
        if(*info->p==61) {
            info->p++;
            skip_spaces_and_lf(info);
            if(*info->p==123) {
                buf_157=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value217=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07gvar.c", 334, "buffer"))))));
                come_call_finalizer3(__right_value217,buffer_finalize, 0, 1, 0, 0, __result_obj__);
                buffer_append_char(buf_157,*info->p);
                info->p++;
                squort_158=(_Bool)0;
                dquort_159=(_Bool)0;
                nest_160=1;
                while(1) {
                    if(*info->p==0) {
                        err_msg(info,"unexpected source end in array initiailizer");
                        exit(2);
                    }
                    else {
                        if(*info->p==92) {
                            buffer_append_char(buf_157,*info->p);
                            info->p++;
                            if(*info->p==10) {
                                info->sline++;
                            }
                            buffer_append_char(buf_157,*info->p);
                            info->p++;
                        }
                        else {
                            if(!squort_158&&*info->p==34) {
                                buffer_append_char(buf_157,*info->p);
                                info->p++;
                                dquort_159=!dquort_159;
                            }
                            else {
                                if(!dquort_159&&*info->p==39) {
                                    buffer_append_char(buf_157,*info->p);
                                    info->p++;
                                    squort_158=!squort_158;
                                }
                                else {
                                    if(squort_158||dquort_159) {
                                        if(*info->p==10) {
                                            info->sline++;
                                        }
                                        buffer_append_char(buf_157,*info->p);
                                        info->p++;
                                    }
                                    else {
                                        if(*info->p==123) {
                                            nest_160++;
                                            buffer_append_char(buf_157,*info->p);
                                            info->p++;
                                        }
                                        else {
                                            if(*info->p==125) {
                                                nest_160--;
                                                buffer_append_char(buf_157,*info->p);
                                                info->p++;
                                                if(nest_160==0) {
                                                    skip_spaces_and_lf(info);
                                                    break;
                                                }
                                            }
                                            else {
                                                if(*info->p==10) {
                                                    info->sline++;
                                                    buffer_append_char(buf_157,*info->p);
                                                    info->p++;
                                                }
                                                else {
                                                    buffer_append_char(buf_157,*info->p);
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
                __dec_obj71=array_initializer_156;
                array_initializer_156=(char*)come_increment_ref_count(buffer_to_string(buf_157));
                __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                come_call_finalizer3(buf_157,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                parse_sharp_v5(info);
                __dec_obj72=right_node_155;
                right_node_155=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); }
                parse_sharp_v5(info);
            }
        }
        if(result_type_152->mExtern) {
            if(right_node_155) {
                err_msg(info,"invalid right value");
                exit(2);
            }
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07gvar.c", 412, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sExternalGlobalVariable*)(__right_value222=sExternalGlobalVariable_initialize((struct sExternalGlobalVariable*)come_increment_ref_count(((struct sExternalGlobalVariable*)(__right_value221=(struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "07gvar.c", 412, "sExternalGlobalVariable")))),((void*)0),result_type_152,(char*)come_increment_ref_count(var_name_153),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sExternalGlobalVariable_finalize;
            _inf_value3->clone=(void*)sExternalGlobalVariable_clone;
            _inf_value3->compile=(void*)sExternalGlobalVariable_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sExternalGlobalVariable_kind;
            __result93__ = __result_obj__ = ((struct sNode*)(__right_value229=_inf_value3));
            come_call_finalizer3(result_type_152,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_153 = come_decrement_ref_count2(var_name_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_155) { right_node_155 = come_decrement_ref_count2(right_node_155, ((struct sNode*)right_node_155)->finalize, ((struct sNode*)right_node_155)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_156 = come_decrement_ref_count2(array_initializer_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value221,sExternalGlobalVariable_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value222,sExternalGlobalVariable_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value229) { __right_value229 = come_decrement_ref_count2(__right_value229, ((struct sNode*)__right_value229)->finalize, ((struct sNode*)__right_value229)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result93__;
        }
        else {
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07gvar.c", 415, "struct sNode");
            _inf_obj_value4=come_increment_ref_count(((struct sGlobalVariable*)(__right_value231=sGlobalVariable_initialize((struct sGlobalVariable*)come_increment_ref_count(((struct sGlobalVariable*)(__right_value230=(struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "07gvar.c", 415, "sGlobalVariable")))),((void*)0),result_type_152,(char*)come_increment_ref_count(var_name_153),(struct sNode*)come_increment_ref_count(right_node_155),(char*)come_increment_ref_count(array_initializer_156),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sGlobalVariable_finalize;
            _inf_value4->clone=(void*)sGlobalVariable_clone;
            _inf_value4->compile=(void*)sGlobalVariable_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sGlobalVariable_kind;
            __result96__ = __result_obj__ = ((struct sNode*)(__right_value240=_inf_value4));
            come_call_finalizer3(result_type_152,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_153 = come_decrement_ref_count2(var_name_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_155) { right_node_155 = come_decrement_ref_count2(right_node_155, ((struct sNode*)right_node_155)->finalize, ((struct sNode*)right_node_155)->_protocol_obj, 0, 0, 0, (void*)0); } 
            array_initializer_156 = come_decrement_ref_count2(array_initializer_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value230,sGlobalVariable_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value231,sGlobalVariable_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value240) { __right_value240 = come_decrement_ref_count2(__right_value240, ((struct sNode*)__right_value240)->finalize, ((struct sNode*)__right_value240)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result96__;
        }
        come_call_finalizer3(result_type_152,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_153 = come_decrement_ref_count2(var_name_153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(right_node_155) { right_node_155 = come_decrement_ref_count2(right_node_155, ((struct sNode*)right_node_155)->finalize, ((struct sNode*)right_node_155)->_protocol_obj, 0, 0, 0, (void*)0); } 
        array_initializer_156 = come_decrement_ref_count2(array_initializer_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result97__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result97__;
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

static struct list$1tuple3$3sTypephcharphcharphph* list$1tuple3$3sTypephcharphcharphph_push_back(struct list$1tuple3$3sTypephcharphcharphph* self, struct tuple3$3sTypephcharphcharph* item){
void* __result_obj__=(void*)0;
void* __right_value178 = (void*)0;
struct list_item$1tuple3$3sTypephcharphcharphph* litem_134;
struct tuple3$3sTypephcharphcharph* __dec_obj51;
void* __right_value179 = (void*)0;
struct list_item$1tuple3$3sTypephcharphcharphph* litem_135;
struct tuple3$3sTypephcharphcharph* __dec_obj52;
void* __right_value180 = (void*)0;
struct list_item$1tuple3$3sTypephcharphcharphph* litem_136;
struct tuple3$3sTypephcharphcharph* __dec_obj53;
struct list$1tuple3$3sTypephcharphcharphph* __result82__;
    if(self->len==0) {
        litem_134=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphcharphph*)(__right_value178=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphcharphph)*(1), "./neo-c.h", 219, "list_item$1tuple3$3sTypephcharphcharphph"))));
        come_call_finalizer3(__right_value178,list_item$1tuple3$3sTypephcharphcharphphp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_134->prev=((void*)0);
        litem_134->next=((void*)0);
        __dec_obj51=litem_134->item;
        litem_134->item=(struct tuple3$3sTypephcharphcharph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj51,tuple3$3sTypephcharphcharph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_134;
        self->head=litem_134;
    }
    else {
        if(self->len==1) {
            litem_135=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphcharphph*)(__right_value179=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphcharphph)*(1), "./neo-c.h", 229, "list_item$1tuple3$3sTypephcharphcharphph"))));
            come_call_finalizer3(__right_value179,list_item$1tuple3$3sTypephcharphcharphphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_135->prev=self->head;
            litem_135->next=((void*)0);
            __dec_obj52=litem_135->item;
            litem_135->item=(struct tuple3$3sTypephcharphcharph*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj52,tuple3$3sTypephcharphcharph_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_135;
            self->head->next=litem_135;
        }
        else {
            litem_136=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphcharphph*)(__right_value180=(struct list_item$1tuple3$3sTypephcharphcharphph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphcharphph)*(1), "./neo-c.h", 239, "list_item$1tuple3$3sTypephcharphcharphph"))));
            come_call_finalizer3(__right_value180,list_item$1tuple3$3sTypephcharphcharphphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_136->prev=self->tail;
            litem_136->next=((void*)0);
            __dec_obj53=litem_136->item;
            litem_136->item=(struct tuple3$3sTypephcharphcharph*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj53,tuple3$3sTypephcharphcharph_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_136;
            self->tail=litem_136;
        }
    }
    self->len++;
    __result82__ = __result_obj__ = self;
    come_call_finalizer3(item,tuple3$3sTypephcharphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result82__;
}

static struct tuple3$3sTypephcharphcharph* tuple3$3sTypephcharphcharph_initialize(struct tuple3$3sTypephcharphcharph* self, struct sType* v1, char* v2, char* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
struct tuple3$3sTypephcharphcharph* __result83__;
    __dec_obj54=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj55=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj56=self->v3;
    self->v3=(char*)come_increment_ref_count(v3);
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result83__ = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    v3 = come_decrement_ref_count2(v3, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result83__;
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj57;
char* __dec_obj58;
struct tuple3$3sTypephcharphvoidp* __result84__;
    __dec_obj57=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj58=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result84__ = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result84__;
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void sExternalGlobalVariable_finalize(struct sExternalGlobalVariable* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        come_call_finalizer3(self->multiple_declare,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sExternalGlobalVariable* sExternalGlobalVariable_clone(struct sExternalGlobalVariable* self){
void* __result_obj__=(void*)0;
struct sExternalGlobalVariable* __result91__;
void* __right_value223 = (void*)0;
struct sExternalGlobalVariable* result_161;
void* __right_value224 = (void*)0;
char* __dec_obj73;
void* __right_value225 = (void*)0;
struct sType* __dec_obj74;
void* __right_value226 = (void*)0;
char* __dec_obj75;
void* __right_value227 = (void*)0;
struct list$1tuple3$3sTypephcharphcharphph* __dec_obj76;
void* __right_value228 = (void*)0;
char* __dec_obj77;
struct sExternalGlobalVariable* __result92__;
    if(self==(void*)0) {
        __result91__ = __result_obj__ = (void*)0;
        return __result91__;
    }
    result_161=(struct sExternalGlobalVariable*)come_increment_ref_count((struct sExternalGlobalVariable*)come_calloc(1, sizeof(struct sExternalGlobalVariable)*(1), "sExternalGlobalVariable_clone", 3, "sExternalGlobalVariable"));
    if(self!=((void*)0)) {
        result_161->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj73=result_161->sname;
        result_161->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj74=result_161->type;
        result_161->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj75=result_161->name;
        result_161->name=(char*)come_increment_ref_count(string_clone(self->name));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __dec_obj76=result_161->multiple_declare;
        result_161->multiple_declare=(struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(list$1tuple3$3sTypephcharphcharphphp_clone(self->multiple_declare));
        come_call_finalizer3(__dec_obj76,list$1tuple3$3sTypephcharphcharphph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj77=result_161->mDeclareSName;
        result_161->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result92__ = __result_obj__ = result_161;
    come_call_finalizer3(result_161,sExternalGlobalVariable_finalize, 0, 0, 1, 0, (void*)0);
    return __result92__;
}

static void sGlobalVariable_finalize(struct sGlobalVariable* self){
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->right_node!=((void*)0)) {
        if(self->right_node) { self->right_node = come_decrement_ref_count2(self->right_node, ((struct sNode*)self->right_node)->finalize, ((struct sNode*)self->right_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(self!=((void*)0)&&self->array_initializer!=((void*)0)) {
        self->array_initializer = come_decrement_ref_count2(self->array_initializer, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        come_call_finalizer3(self->multiple_declare,list$1tuple3$3sTypephcharphcharphphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct sGlobalVariable* sGlobalVariable_clone(struct sGlobalVariable* self){
void* __result_obj__=(void*)0;
struct sGlobalVariable* __result94__;
void* __right_value232 = (void*)0;
struct sGlobalVariable* result_162;
void* __right_value233 = (void*)0;
char* __dec_obj78;
void* __right_value234 = (void*)0;
struct sType* __dec_obj79;
void* __right_value235 = (void*)0;
char* __dec_obj80;
void* __right_value236 = (void*)0;
struct sNode* __dec_obj81;
void* __right_value237 = (void*)0;
char* __dec_obj82;
void* __right_value238 = (void*)0;
struct list$1tuple3$3sTypephcharphcharphph* __dec_obj83;
void* __right_value239 = (void*)0;
char* __dec_obj84;
struct sGlobalVariable* __result95__;
    if(self==(void*)0) {
        __result94__ = __result_obj__ = (void*)0;
        return __result94__;
    }
    result_162=(struct sGlobalVariable*)come_increment_ref_count((struct sGlobalVariable*)come_calloc(1, sizeof(struct sGlobalVariable)*(1), "sGlobalVariable_clone", 3, "sGlobalVariable"));
    if(self!=((void*)0)) {
        result_162->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj78=result_162->sname;
        result_162->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj79=result_162->type;
        result_162->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj80=result_162->name;
        result_162->name=(char*)come_increment_ref_count(string_clone(self->name));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->right_node!=((void*)0)) {
        __dec_obj81=result_162->right_node;
        result_162->right_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_node));
        if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->array_initializer!=((void*)0)) {
        __dec_obj82=result_162->array_initializer;
        result_162->array_initializer=(char*)come_increment_ref_count(string_clone(self->array_initializer));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __dec_obj83=result_162->multiple_declare;
        result_162->multiple_declare=(struct list$1tuple3$3sTypephcharphcharphph*)come_increment_ref_count(list$1tuple3$3sTypephcharphcharphphp_clone(self->multiple_declare));
        come_call_finalizer3(__dec_obj83,list$1tuple3$3sTypephcharphcharphph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj84=result_162->mDeclareSName;
        result_162->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result95__ = __result_obj__ = result_162;
    come_call_finalizer3(result_162,sGlobalVariable_finalize, 0, 0, 1, 0, (void*)0);
    return __result95__;
}

