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
    struct sInfo* info_271;
    struct buffer** clang_option_254;
    struct buffer** cpp_option_255;
    struct list$1charph** files_256;
    struct list$1charph** object_files_257;
    _Bool* output_object_file_258;
    _Bool* output_cpp_file_259;
    _Bool* output_source_file_flag_260;
    char** output_file_name_261;
    _Bool* verbose_262;
    _Bool* come_debug_263;
    _Bool* come_malloc_264;
    _Bool* come_str_265;
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
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
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
static void list$1charph_finalize(struct list$1charph* self);
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
    sname_47=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_48=info->sline;
    __dec_obj12=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value83=node->sname(node->_protocol_obj)))));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value83 = come_decrement_ref_count2(__right_value83, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    info->sline=node->sline(node->_protocol_obj);
    write_source_file_position_to_source(info);
    result_49=node->compile(node->_protocol_obj,info);
    __dec_obj13=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_47));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_48;
    __result45__ = result_49;
    sname_47 = come_decrement_ref_count2(sname_47, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result45__;
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
msg2_50 = (void*)0;
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
void* __result_obj__=(void*)0;
void* __right_value88 = (void*)0;
void* __right_value89 = (void*)0;
struct list$1charph* result_57;
struct list_item$1charph* it_60;
int i_61;
struct list$1charph* __result48__;
    result_57=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value88=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 635, "list$1charph"))))));
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
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result46__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result46__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result46__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_58;
struct list_item$1charph* prev_it_59;
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
void* __result_obj__=(void*)0;
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
}

static struct list$1charph* list$1charph_map2(struct list$1charph* self, void* parent, char* (*block)(void*,char*)){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
struct list$1charph* result_65;
struct list_item$1charph* it_66;
void* __right_value96 = (void*)0;
struct list$1charph* __result49__;
    result_65=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value94=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./neo-c.h", 844, "list$1charph"))))));
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
}

char* method_block1_02transpilec(struct __current_stack1__* parent, char* it){
void* __result_obj__=(void*)0;
void* __right_value97 = (void*)0;
char* __result50__;
    __result50__ = __result_obj__ = ((char*)(__right_value97=xsprintf("%d %s",++(*(parent->n_56)),it)));
    __right_value97 = come_decrement_ref_count2(__right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result50__;
}

static char* list$1charph_join(struct list$1charph* self, char* sep){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
struct buffer* buf_67;
int n_68;
char* it_71;
void* __right_value101 = (void*)0;
char* __result57__;
    buf_67=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value99=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./neo-c.h", 939, "buffer"))))));
    come_call_finalizer3(__right_value99,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    n_68=0;
    for(    it_71=list$1charph_begin(self);    !list$1charph_end(self);    it_71=list$1charph_next(self)    ){
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
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_69;
char* __result51__;
char* __result52__;
char* result_70;
char* __result53__;
result_69 = (void*)0;
result_70 = (void*)0;
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
void* __result_obj__=(void*)0;
char* result_72;
char* __result54__;
char* __result55__;
char* result_73;
char* __result56__;
result_72 = (void*)0;
result_73 = (void*)0;
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
    output_file_name_74=(char*)come_increment_ref_count(xsprintf("%s.c",info->sname));
    string_write(((char*)(__right_value105=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_74,(_Bool)0);
    __right_value105 = come_decrement_ref_count2(__right_value105, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result58__ = (_Bool)1;
    output_file_name_74 = come_decrement_ref_count2(output_file_name_74, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result58__;
}

static void clear_tmp_file(struct sInfo* info){
char* input_file_name_75;
void* __right_value106 = (void*)0;
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
output_file_name_79 = (void*)0;
    input_file_name_78=(char*)come_increment_ref_count(info->sname);
    if(!info->output_header_file&&info->output_file_name) {
        __dec_obj17=output_file_name_79;
        output_file_name_79=(char*)come_increment_ref_count(string_operator_add(info->output_file_name,".i"));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj18=output_file_name_79;
        output_file_name_79=(char*)come_increment_ref_count(string_operator_add(info->sname,".i"));
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    cmd_80=(char*)come_increment_ref_count(xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"));
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
        cmd2_84=(char*)come_increment_ref_count(xsprintf("gcc -E -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -D__DARWIN_ARM__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_81?((char*)(__right_value112=__builtin_string(" -include common.h "))):"",input_file_name_78,output_file_name_79,output_file_name_79));
        __right_value112 = come_decrement_ref_count2(__right_value112, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(info->verbose) {
            puts(cmd2_84);
        }
        rc_85=system(cmd2_84);
        if(rc_85!=0) {
            printf("failed to cpp(2) (%s)\n",cmd2_84);
            exit(5);
        }
        command2_86=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_79));
        if(info->verbose) {
            puts(command2_86);
        }
        (void)system(command2_86);
        cmd2_84 = come_decrement_ref_count2(cmd2_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_86 = come_decrement_ref_count2(command2_86, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        cmd3_87=(char*)come_increment_ref_count(xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DCOMELANG2 -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_81?((char*)(__right_value115=__builtin_string(" -include common.h "))):"",input_file_name_78,output_file_name_79,output_file_name_79));
        __right_value115 = come_decrement_ref_count2(__right_value115, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(info->verbose) {
            puts(cmd3_87);
        }
        rc_88=system(cmd3_87);
        command2_89=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_79));
        if(info->verbose) {
            puts(command2_89);
        }
        (void)system(command2_89);
        if(rc_88!=0) {
            cmd4_90=(char*)come_increment_ref_count(xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -C %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_81?((char*)(__right_value118=__builtin_string(" -include common.h "))):"",input_file_name_78,output_file_name_79,output_file_name_79));
            __right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            command_91=(char*)come_increment_ref_count(xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_79,input_file_name_78,info->clang_option,input_file_name_78));
            if(info->verbose) {
                puts(cmd4_90);
            }
            rc_88=system(cmd4_90);
            command2_92=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_79));
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
    input_file_name_93=(char*)come_increment_ref_count(string_operator_add(info->sname,".c"));
    output_file_name_94=((void*)0);
    if(info->output_file_name&&output_object_file) {
        __dec_obj19=output_file_name_94;
        output_file_name_94=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj20=output_file_name_94;
        output_file_name_94=(char*)come_increment_ref_count(string_operator_add(info->sname,".o"));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_95=(char*)come_increment_ref_count(xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_94,input_file_name_93,info->clang_option,input_file_name_93));
    if(info->verbose) {
        puts(command_95);
    }
    rc_96=system(command_95);
    command2_97=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.out",input_file_name_93));
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
    output_file_name_98=((void*)0);
    if(info->output_file_name) {
        __dec_obj21=output_file_name_98;
        output_file_name_98=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj22=output_file_name_98;
        output_file_name_98=(char*)come_increment_ref_count(xnoextname(info->sname));
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_99=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value130=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 265, "buffer"))))));
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
    cmd_102=(char*)come_increment_ref_count(xsprintf("which /opt/homebrew/opt/llvm/bin/clang-cpp 1> /dev/null 2>/dev/null"));
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
    project_name_104=(char*)come_increment_ref_count(__builtin_string(argv[2]));
    project_name_debug_105=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value140=__builtin_string(argv[2]))),((char*)(__right_value141=__builtin_string("-debug")))));
    __right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value141 = come_decrement_ref_count2(__right_value141, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    cc_106=(char*)come_increment_ref_count(__builtin_string("neo-c"));
    install_107=(char*)come_increment_ref_count(__builtin_string("install"));
    libs_108=(char*)come_increment_ref_count(__builtin_string("-lpcre"));
    os_109=(char*)come_increment_ref_count(__builtin_string("linux"));
    prefix_110=(char*)come_increment_ref_count(__builtin_string("/usr/local/"));
    cflags_111=(char*)come_increment_ref_count(__builtin_string(" -common-header -O2 "));
    cflags_debug_112=(char*)come_increment_ref_count(__builtin_string(" -common-header -gdwarf-4 -cg "));
    if((_or_conditional1=(system(((char*)(__right_value151=xsprintf("mkdir \%s",((char*)(__right_value150=string_to_string(project_name_104))))))))),    (__right_value150 = come_decrement_ref_count2(__right_value150, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    (__right_value151 = come_decrement_ref_count2(__right_value151, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
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
    if((_or_conditional7=(system(((char*)(__right_value182=xsprintf("make install DESTDIR=\%s",((char*)(__right_value181=charp_to_string(prefix))))))))),    (__right_value181 = come_decrement_ref_count2(__right_value181, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    (__right_value182 = come_decrement_ref_count2(__right_value182, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
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
        generics_type_164=(char*)come_increment_ref_count(xsprintf("generics_type%d",i_163));
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_164),(struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value227=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value226=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 474, "sClass")))),generics_type_164,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_163,-1,(_Bool)0,info)))));
        come_call_finalizer3(__right_value226,sClass_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value227,sClass_finalize, 0, 1, 0, 0, (void*)0);
        generics_type_164 = come_decrement_ref_count2(generics_type_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    for(    i_165=0;    i_165<7;    i_165++    ){
        generics_type_166=(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_165));
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
        type_name_169=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        type_170=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(__right_value235=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 490, "sType")))),"__builtin_va_list",(_Bool)0,info));
        come_call_finalizer3(__right_value235,sType_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj23=type_170->mOriginalTypeName;
        type_170->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(((char*)(__right_value241=__builtin_string(type_name_169)))),(struct sType*)come_increment_ref_count(type_170));
        __right_value241 = come_decrement_ref_count2(__right_value241, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        type_name_169 = come_decrement_ref_count2(type_name_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_170,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_192=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(__right_value242=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 498, "sClass")))),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
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
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(((char*)(__right_value272=__builtin_string("__builtin_va_list")))),(struct sClass*)come_increment_ref_count(klass_192));
        __right_value272 = come_decrement_ref_count2(__right_value272, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(klass_192,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_136;
unsigned int it_137;
_Bool same_key_exist_154;
char* it2_157;
struct map$2charphsClassph* __result86__;
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
    for(    it2_157=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_157=list$1charp_next(self->key_list)    ){
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
default_value_129 = (void*)0;
default_value_135 = (void*)0;
    size_113=self->size*10;
    keys_114=(char**)come_increment_ref_count(((char**)(__right_value183=(char**)come_calloc(1, sizeof(char*)*(1*(size_113)), "./neo-c.h", 1527, "char*%"))));
    __right_value183 = come_decrement_ref_count2(__right_value183, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    items_115=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value184=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_113)), "./neo-c.h", 1528, "sClass*%"))));
    come_call_finalizer3(__right_value184,sClass_finalize, 0, 1, 0, 0, (void*)0);
    item_existance_122=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value185=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_113)), "./neo-c.h", 1529, "bool"))));
    __right_value185 = come_decrement_ref_count2(__right_value185, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    len_123=0;
    for(    it_126=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_126=map$2charphsClassph_next(self)    ){
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
void* __result_obj__=(void*)0;
char* result_124;
char* __result65__;
char* __result66__;
char* result_125;
char* __result67__;
result_124 = (void*)0;
result_125 = (void*)0;
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
void* __result_obj__=(void*)0;
char* result_127;
char* __result68__;
char* __result69__;
char* result_128;
char* __result70__;
result_127 = (void*)0;
result_128 = (void*)0;
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
void* __result_obj__=(void*)0;
unsigned int hash_131;
unsigned int it_132;
struct sClass* __result71__;
struct sClass* __result72__;
struct sClass* __result73__;
struct sClass* __result74__;
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
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_138;
struct list_item$1charp* it_139;
struct list$1charp* __result78__;
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
void* __result_obj__=(void*)0;
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
void* __result_obj__=(void*)0;
struct list_item$1charp* it_141;
struct list_item$1charp* prev_it_142;
struct list$1charp* __result76__;
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
void* __result_obj__=(void*)0;
char* result_155;
char* __result79__;
char* __result80__;
char* result_156;
char* __result81__;
result_155 = (void*)0;
result_156 = (void*)0;
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
void* __result_obj__=(void*)0;
char* result_158;
char* __result82__;
char* __result83__;
char* result_159;
char* __result84__;
result_158 = (void*)0;
result_159 = (void*)0;
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
void* __result_obj__=(void*)0;
void* __right_value186 = (void*)0;
struct list_item$1charp* litem_160;
void* __right_value187 = (void*)0;
struct list_item$1charp* litem_161;
void* __right_value188 = (void*)0;
struct list_item$1charp* litem_162;
struct list$1charp* __result85__;
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
void* __result_obj__=(void*)0;
unsigned int hash_188;
unsigned int it_189;
_Bool same_key_exist_190;
char* it2_191;
struct map$2charphsTypeph* __result97__;
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
    for(    it2_191=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_191=list$1charp_next(self->key_list)    ){
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
default_value_181 = (void*)0;
default_value_187 = (void*)0;
    size_171=self->size*10;
    keys_172=(char**)come_increment_ref_count(((char**)(__right_value238=(char**)come_calloc(1, sizeof(char*)*(1*(size_171)), "./neo-c.h", 1527, "char*%"))));
    __right_value238 = come_decrement_ref_count2(__right_value238, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    items_173=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value239=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_171)), "./neo-c.h", 1528, "sType*%"))));
    come_call_finalizer3(__right_value239,sType_finalize, 0, 1, 0, 0, (void*)0);
    item_existance_174=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value240=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_171)), "./neo-c.h", 1529, "bool"))));
    __right_value240 = come_decrement_ref_count2(__right_value240, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    len_175=0;
    for(    it_178=map$2charphsTypeph_begin(self);    !map$2charphsTypeph_end(self);    it_178=map$2charphsTypeph_next(self)    ){
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
void* __result_obj__=(void*)0;
char* result_176;
char* __result87__;
char* __result88__;
char* result_177;
char* __result89__;
result_176 = (void*)0;
result_177 = (void*)0;
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
void* __result_obj__=(void*)0;
char* result_179;
char* __result90__;
char* __result91__;
char* result_180;
char* __result92__;
result_179 = (void*)0;
result_180 = (void*)0;
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
void* __result_obj__=(void*)0;
unsigned int hash_183;
unsigned int it_184;
struct sType* __result93__;
struct sType* __result94__;
struct sType* __result95__;
struct sType* __result96__;
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
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
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
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj27;
struct sType* __dec_obj28;
struct tuple2$2charphsTypeph* __result99__;
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
}

int come_main_v2(int argc, char** argv){
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct buffer* clang_option_196;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct buffer* cpp_option_197;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct list$1charph* files_198;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct list$1charph* object_files_199;
_Bool output_object_file_200;
_Bool output_cpp_file_201;
_Bool output_source_file_flag_202;
void* __right_value281 = (void*)0;
char* output_file_name_203;
_Bool verbose_204;
_Bool prohibit_common_header_205;
_Bool come_debug_206;
_Bool come_malloc_207;
_Bool come_str_208;
int i_209;
void* __right_value282 = (void*)0;
char* __dec_obj29;
void* __right_value283 = (void*)0;
_Bool _if_conditional1;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
_Bool _if_conditional2;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
_Bool _or_conditional8;
_Bool __exception_result_var_b8;
struct _IO_FILE* f_210;
_Bool _and_conditional1;
_Bool __exception_result_var_b9;
void* __right_value297 = (void*)0;
char* tmp_file_211;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct sInfo info_212;
void* __right_value302 = (void*)0;
char* __dec_obj30;
void* __right_value303 = (void*)0;
char* __dec_obj31;
void* __right_value304 = (void*)0;
char* __dec_obj32;
void* __right_value305 = (void*)0;
char* __dec_obj33;
void* __right_value306 = (void*)0;
void* __right_value312 = (void*)0;
struct map$2charphsFunph* __dec_obj35;
void* __right_value313 = (void*)0;
void* __right_value319 = (void*)0;
struct map$2charphsGenericsFunph* __dec_obj37;
void* __right_value320 = (void*)0;
void* __right_value326 = (void*)0;
struct map$2charphsClassph* __dec_obj39;
void* __right_value327 = (void*)0;
void* __right_value333 = (void*)0;
struct map$2charphsClassModuleph* __dec_obj41;
void* __right_value334 = (void*)0;
void* __right_value340 = (void*)0;
struct map$2charphsTypeph* __dec_obj43;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct sModule* __dec_obj44;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj45;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct list$1CVALUEph* __dec_obj46;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct sVarTable* __dec_obj47;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct sVarTable* lv_table_248;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct list$1charph* __dec_obj48;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct list$1charph* __dec_obj49;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct map$2charphsClassph* __dec_obj50;
void* __right_value357 = (void*)0;
char* __dec_obj51;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct buffer* __dec_obj52;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct buffer* __dec_obj53;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct buffer* clang_option_254;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct buffer* cpp_option_255;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct list$1charph* files_256;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct list$1charph* object_files_257;
_Bool output_object_file_258;
_Bool output_cpp_file_259;
_Bool output_source_file_flag_260;
char* output_file_name_261;
_Bool verbose_262;
_Bool come_debug_263;
_Bool come_malloc_264;
_Bool come_str_265;
int i_266;
void* __right_value373 = (void*)0;
char* __dec_obj54;
void* __right_value374 = (void*)0;
_Bool _if_conditional3;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
_Bool _if_conditional4;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct list$1charph* o2_saved_267;
char* it_268;
struct sInfo info_269;
void* __right_value387 = (void*)0;
char* __dec_obj55;
void* __right_value388 = (void*)0;
char* __dec_obj56;
void* __right_value389 = (void*)0;
char* __dec_obj57;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct map$2charphsFunph* __dec_obj58;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct map$2charphsGenericsFunph* __dec_obj59;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct map$2charphsClassph* __dec_obj60;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct map$2charphsClassModuleph* __dec_obj61;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct map$2charphsTypeph* __dec_obj62;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct sModule* __dec_obj63;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj64;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct list$1CVALUEph* __dec_obj65;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct sVarTable* __dec_obj66;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sVarTable* lv_table_270;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct list$1charph* __dec_obj67;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct list$1charph* __dec_obj68;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct map$2charphsClassph* __dec_obj69;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct buffer* __dec_obj70;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct buffer* __dec_obj71;
void* __right_value422 = (void*)0;
char* __dec_obj72;
char* __dec_obj73;
struct sInfo info_271;
void* __right_value423 = (void*)0;
char* __dec_obj74;
void* __right_value424 = (void*)0;
char* __dec_obj75;
void* __right_value425 = (void*)0;
char* __dec_obj76;
char* __dec_obj77;
struct __current_stack2__ __current_stack2__;
memset(&info_212, 0, sizeof(struct sInfo));
memset(&info_269, 0, sizeof(struct sInfo));
memset(&info_271, 0, sizeof(struct sInfo));
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    if(charp_operator_equals(argv[1],"header")&&argc>=3) {
        gProgramName=argv[0];
        clang_option_196=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value273=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 515, "buffer"))))));
        come_call_finalizer3(__right_value273,buffer_finalize, 0, 1, 0, 0, (void*)0);
        cpp_option_197=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value275=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 516, "buffer"))))));
        come_call_finalizer3(__right_value275,buffer_finalize, 0, 1, 0, 0, (void*)0);
        files_198=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value277=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 517, "list$1charph"))))));
        come_call_finalizer3(__right_value277,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        object_files_199=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value279=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 518, "list$1charph"))))));
        come_call_finalizer3(__right_value279,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        output_object_file_200=(_Bool)0;
        output_cpp_file_201=(_Bool)0;
        output_source_file_flag_202=(_Bool)0;
        output_file_name_203=(char*)come_increment_ref_count(__builtin_string("common.h"));
        verbose_204=(_Bool)0;
        prohibit_common_header_205=(_Bool)0;
        come_debug_206=(_Bool)0;
        come_malloc_207=(_Bool)0;
        come_str_208=(_Bool)0;
        for(        i_209=2;        i_209<argc;        i_209++        ){
            if(charp_operator_equals(argv[i_209],"-o")&&i_209+1<argc) {
                __dec_obj29=output_file_name_203;
                output_file_name_203=(char*)come_increment_ref_count(__builtin_string(argv[i_209+1]));
                __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                i_209++;
            }
            else {
                if(charp_operator_equals(argv[i_209],"-str")) {
                    come_str_208=(_Bool)1;
                }
                else {
                    if(charp_operator_equals(argv[i_209],"-gc")) {
                        gComeGC=(_Bool)1;
                    }
                    else {
                        if(charp_operator_equals(argv[i_209],"-g")) {
                            buffer_append_str(clang_option_196,"-g ");
                        }
                        else {
                            if(charp_operator_equals(argv[i_209],"-cg")) {
                                buffer_append_str(clang_option_196,"-g ");
                                come_debug_206=(_Bool)1;
                            }
                            else {
                                if(charp_operator_equals(argv[i_209],"-common-header")) {
                                    gCommonHeader=(_Bool)1;
                                }
                                else {
                                    if(charp_operator_equals(argv[i_209],"-original-position")) {
                                        gComeOriginalSourcePosition=(_Bool)0;
                                    }
                                    else {
                                        if((_if_conditional1=(string_operator_equals(((char*)(__right_value283=charp_operator_load_range_element(argv[i_209],0,2))),"-O"))),                                        (__right_value283 = come_decrement_ref_count2(__right_value283, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
                                        _if_conditional1) {
                                            buffer_append_str(clang_option_196,((char*)(__right_value285=xsprintf(" \%s ",((char*)(__right_value284=charp_to_string(argv[i_209])))))));
                                            __right_value284 = come_decrement_ref_count2(__right_value284, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                            __right_value285 = come_decrement_ref_count2(__right_value285, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                            come_debug_206=(_Bool)0;
                                        }
                                        else {
                                            if((_if_conditional2=(string_operator_equals(((char*)(__right_value286=charp_operator_load_range_element(argv[i_209],0,2))),"-D"))),                                            (__right_value286 = come_decrement_ref_count2(__right_value286, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
                                            _if_conditional2) {
                                                buffer_append_str(cpp_option_197,((char*)(__right_value288=xsprintf(" \%s ",((char*)(__right_value287=charp_to_string(argv[i_209])))))));
                                                __right_value287 = come_decrement_ref_count2(__right_value287, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                __right_value288 = come_decrement_ref_count2(__right_value288, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                buffer_append_str(clang_option_196,((char*)(__right_value290=xsprintf(" \%s ",((char*)(__right_value289=charp_to_string(argv[i_209])))))));
                                                __right_value289 = come_decrement_ref_count2(__right_value289, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                __right_value290 = come_decrement_ref_count2(__right_value290, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                            }
                                            else {
                                                if(charp_operator_equals(argv[i_209],"-v")) {
                                                    buffer_append_str(clang_option_196,"-v ");
                                                    verbose_204=(_Bool)1;
                                                }
                                                else {
                                                    if(strlen(argv[i_209])>=2&&memcmp(argv[i_209],"-I",strlen("-I"))==0) {
                                                        buffer_append_str(cpp_option_197,((char*)(__right_value292=charp_operator_add(" ",((char*)(__right_value291=charp_operator_add(argv[i_209]," ")))))));
                                                        __right_value291 = come_decrement_ref_count2(__right_value291, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                        __right_value292 = come_decrement_ref_count2(__right_value292, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                    }
                                                    else {
                                                        if(charp_operator_equals(argv[i_209],"-gdwarf-4")) {
                                                            buffer_append_str(clang_option_196,"-gdwarf-4 ");
                                                        }
                                                        else {
                                                            if(charp_operator_equals(argv[i_209],"-s")||charp_operator_equals(argv[i_209],"-S")) {
                                                                output_source_file_flag_202=(_Bool)1;
                                                                gComeOriginalSourcePosition=(_Bool)0;
                                                            }
                                                            else {
                                                                if(charp_operator_equals(argv[i_209],"-c")) {
                                                                    output_object_file_200=(_Bool)1;
                                                                }
                                                                else {
                                                                    if(charp_operator_equals(argv[i_209],"-E")) {
                                                                        output_cpp_file_201=(_Bool)1;
                                                                    }
                                                                    else {
                                                                        if(argv[i_209][0]==45) {
                                                                            buffer_append_str(clang_option_196,((char*)(__right_value293=charp_operator_add(argv[i_209]," "))));
                                                                            __right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                        }
                                                                        else {
                                                                            if(strlen(argv[i_209])>2&&memcmp(argv[i_209]+strlen(argv[i_209])-2,".o",2)==0) {
                                                                                list$1charph_push_back(object_files_199,(char*)come_increment_ref_count(((char*)(__right_value294=__builtin_string(argv[i_209])))));
                                                                                __right_value294 = come_decrement_ref_count2(__right_value294, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                            }
                                                                            else {
                                                                                list$1charph_push_back(files_198,(char*)come_increment_ref_count(((char*)(__right_value295=__builtin_string(argv[i_209])))));
                                                                                __right_value295 = come_decrement_ref_count2(__right_value295, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
        gComeDebug=come_debug_206;
        gComeMalloc=come_malloc_207;
        if(come_str_208) {
            if(gComeGC) {
                buffer_append_str(clang_option_196," -lneo-c-str-gc -lpcre ");
            }
            else {
                buffer_append_str(clang_option_196," -lneo-c-str -lpcre ");
            }
        }
        if((_or_conditional8=(system(((char*)(__right_value296=xsprintf("%s %s",RM,output_file_name_203)))))),        (__right_value296 = come_decrement_ref_count2(__right_value296, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _or_conditional8 != 0) {
            (come_push_stackframe("02transpile.c", 603, 7),__exception_result_var_b8=die("rm"), come_pop_stackframe(), __exception_result_var_b8);
        }
        if((_and_conditional1=(f_210=fopen(output_file_name_203,"w"))),        _and_conditional1 == 0) {
            (come_push_stackframe("02transpile.c", 605, 8),__exception_result_var_b9=die("fopen"), come_pop_stackframe(), __exception_result_var_b9);
        }
        fclose(f_210);
        tmp_file_211=(char*)come_increment_ref_count(__builtin_string("tmp-common-header"));
        system(((char*)(__right_value301=xsprintf("cat \%s > \%s",((char*)(__right_value299=string_to_string(((char*)(__right_value298=list$1charph_join(files_198," ")))))),((char*)(__right_value300=string_to_string(tmp_file_211)))))));
        __right_value298 = come_decrement_ref_count2(__right_value298, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value301 = come_decrement_ref_count2(__right_value301, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        memset(&info_212,0,sizeof(struct sInfo));
        __dec_obj30=info_212.base_sname;
        info_212.base_sname=(char*)come_increment_ref_count(((char*)(__right_value302=__builtin_string(tmp_file_211))));
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj31=info_212.sname;
        info_212.sname=(char*)come_increment_ref_count(((char*)(__right_value303=__builtin_string(tmp_file_211))));
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        info_212.sline=1;
        info_212.err_num=0;
        __dec_obj32=info_212.clang_option;
        info_212.clang_option=(char*)come_increment_ref_count(((char*)(__right_value304=buffer_to_string(clang_option_196))));
        __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj33=info_212.cpp_option;
        info_212.cpp_option=(char*)come_increment_ref_count(((char*)(__right_value305=buffer_to_string(cpp_option_197))));
        __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        info_212.no_output_err=(_Bool)0;
        __dec_obj35=info_212.funcs;
        info_212.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(__right_value312=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(__right_value306=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 623, "map$2charphsFunph"))))))));
        come_call_finalizer3(__dec_obj35,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value306,map$2charphsFunphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value312,map$2charphsFunphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj37=info_212.generics_funcs;
        info_212.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(__right_value319=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(__right_value313=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 624, "map$2charphsGenericsFunph"))))))));
        come_call_finalizer3(__dec_obj37,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value313,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value319,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj39=info_212.classes;
        info_212.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(__right_value326=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(__right_value320=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 625, "map$2charphsClassph"))))))));
        come_call_finalizer3(__dec_obj39,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value320,map$2charphsClassphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value326,map$2charphsClassphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj41=info_212.modules;
        info_212.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(__right_value333=map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(__right_value327=(struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 626, "map$2charphsClassModuleph"))))))));
        come_call_finalizer3(__dec_obj41,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value327,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value333,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj43=info_212.types;
        info_212.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(__right_value340=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(__right_value334=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 627, "map$2charphsTypeph"))))))));
        come_call_finalizer3(__dec_obj43,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value334,map$2charphsTypephp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value340,map$2charphsTypephp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj44=info_212.module;
        info_212.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(__right_value342=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(__right_value341=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 628, "sModule"))))))));
        come_call_finalizer3(__dec_obj44,sModule_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value341,sModule_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value342,sModule_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj45=info_212.right_value_objects;
        info_212.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(__right_value344=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(__right_value343=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 629, "list$1sRightValueObjectph"))))))));
        come_call_finalizer3(__dec_obj45,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value343,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value344,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj46=info_212.stack;
        info_212.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value346=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value345=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 630, "list$1CVALUEph"))))))));
        come_call_finalizer3(__dec_obj46,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value345,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value346,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj47=info_212.gv_table;
        info_212.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(__right_value348=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(__right_value347=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 631, "sVarTable")))),(_Bool)1,((void*)0)))));
        come_call_finalizer3(__dec_obj47,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value347,sVarTable_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value348,sVarTable_finalize, 0, 1, 0, 0, (void*)0);
        lv_table_248=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(__right_value349=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 632, "sVarTable")))),(_Bool)0,((void*)0)));
        come_call_finalizer3(__right_value349,sVarTable_finalize, 0, 1, 0, 0, (void*)0);
        info_212.lv_table=lv_table_248;
        __dec_obj48=info_212.generics_type_names;
        info_212.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value352=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value351=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 634, "list$1charph"))))))));
        come_call_finalizer3(__dec_obj48,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value351,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value352,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj49=info_212.method_generics_type_names;
        info_212.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value354=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value353=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 635, "list$1charph"))))))));
        come_call_finalizer3(__dec_obj49,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value353,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value354,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj50=info_212.generics_classes;
        info_212.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(__right_value356=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(__right_value355=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 636, "map$2charphsClassph"))))))));
        come_call_finalizer3(__dec_obj50,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value355,map$2charphsClassphp_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value356,map$2charphsClassphp_finalize, 0, 1, 0, 0, (void*)0);
        info_212.verbose=verbose_204;
        info_212.output_header_file=(_Bool)1;
        static int n_251=0;
        info_212.num_source_files=n_251++;
        info_212.max_source_files=list$1charph_length(files_198);
        __dec_obj51=info_212.output_file_name;
        info_212.output_file_name=(char*)come_increment_ref_count(((char*)(__right_value357=__builtin_string(output_file_name_203))));
        __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        init_classes(&info_212);
        clear_tmp_file(&info_212);
        if(!cpp(&info_212)) {
            printf("%s %d: transpile failed\n",info_212.sname,info_212.sline);
            exit(2);
        }
        __dec_obj52=info_212.original_source;
        info_212.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value360=string_to_buffer(((char*)(__right_value359=string_read(((char*)(__right_value358=xsprintf("%s",tmp_file_211))))))))));
        come_call_finalizer3(__dec_obj52,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value360,buffer_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj53=info_212.source;
        info_212.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value363=string_to_buffer(((char*)(__right_value362=string_read(((char*)(__right_value361=xsprintf("%s.i",tmp_file_211))))))))));
        come_call_finalizer3(__dec_obj53,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value363,buffer_finalize, 0, 1, 0, 0, (void*)0);
        info_212.p=info_212.source->buf;
        info_212.head=info_212.source->buf;
        if(!output_cpp_file_201) {
            transpile_v5(&info_212);
            if(!output_header_file(&info_212)) {
                printf("%s %d: output source file faield\n",info_212.sname,info_212.sline);
                exit(2);
            }
        }
        system(((char*)(__right_value364=xsprintf("%s %s*",RM,tmp_file_211))));
        __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(clang_option_196,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(cpp_option_197,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(files_198,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(object_files_199,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        output_file_name_203 = come_decrement_ref_count2(output_file_name_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        tmp_file_211 = come_decrement_ref_count2(tmp_file_211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3((&info_212),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        come_call_finalizer3(lv_table_248,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
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
                                    clang_option_254=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value365=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 716, "buffer"))))));
                                    come_call_finalizer3(__right_value365,buffer_finalize, 0, 1, 0, 0, (void*)0);
                                    cpp_option_255=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value367=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 717, "buffer"))))));
                                    come_call_finalizer3(__right_value367,buffer_finalize, 0, 1, 0, 0, (void*)0);
                                    files_256=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value369=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 718, "list$1charph"))))));
                                    come_call_finalizer3(__right_value369,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
                                    object_files_257=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value371=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 719, "list$1charph"))))));
                                    come_call_finalizer3(__right_value371,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
                                    output_object_file_258=(_Bool)0;
                                    output_cpp_file_259=(_Bool)0;
                                    output_source_file_flag_260=(_Bool)0;
                                    output_file_name_261=((void*)0);
                                    verbose_262=(_Bool)0;
                                    come_debug_263=(_Bool)0;
                                    come_malloc_264=(_Bool)0;
                                    come_str_265=(_Bool)0;
                                    for(                                    i_266=1;                                    i_266<argc;                                    i_266++                                    ){
                                        if(charp_operator_equals(argv[i_266],"-o")&&i_266+1<argc) {
                                            __dec_obj54=output_file_name_261;
                                            output_file_name_261=(char*)come_increment_ref_count(__builtin_string(argv[i_266+1]));
                                            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            i_266++;
                                        }
                                        else {
                                            if(charp_operator_equals(argv[i_266],"-str")) {
                                                come_str_265=(_Bool)1;
                                            }
                                            else {
                                                if(charp_operator_equals(argv[i_266],"-gc")) {
                                                    gComeGC=(_Bool)1;
                                                }
                                                else {
                                                    if(charp_operator_equals(argv[i_266],"-cg")) {
                                                        come_debug_263=(_Bool)1;
                                                        buffer_append_str(clang_option_254,"-g ");
                                                    }
                                                    else {
                                                        if(charp_operator_equals(argv[i_266],"-common-header")) {
                                                            gCommonHeader=(_Bool)1;
                                                        }
                                                        else {
                                                            if(charp_operator_equals(argv[i_266],"-original-position")) {
                                                                gComeOriginalSourcePosition=(_Bool)0;
                                                            }
                                                            else {
                                                                if((_if_conditional3=(string_operator_equals(((char*)(__right_value374=charp_operator_load_range_element(argv[i_266],0,2))),"-O"))),                                                                (__right_value374 = come_decrement_ref_count2(__right_value374, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
                                                                _if_conditional3) {
                                                                    buffer_append_str(clang_option_254,((char*)(__right_value376=xsprintf(" \%s ",((char*)(__right_value375=charp_to_string(argv[i_266])))))));
                                                                    __right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                    __right_value376 = come_decrement_ref_count2(__right_value376, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                    come_debug_263=(_Bool)0;
                                                                }
                                                                else {
                                                                    if((_if_conditional4=(string_operator_equals(((char*)(__right_value377=charp_operator_load_range_element(argv[i_266],0,2))),"-D"))),                                                                    (__right_value377 = come_decrement_ref_count2(__right_value377, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
                                                                    _if_conditional4) {
                                                                        buffer_append_str(cpp_option_255,((char*)(__right_value379=xsprintf(" \%s ",((char*)(__right_value378=charp_to_string(argv[i_266])))))));
                                                                        __right_value378 = come_decrement_ref_count2(__right_value378, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                        __right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                        buffer_append_str(clang_option_254,((char*)(__right_value381=xsprintf(" \%s ",((char*)(__right_value380=charp_to_string(argv[i_266])))))));
                                                                        __right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                        __right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                    }
                                                                    else {
                                                                        if(charp_operator_equals(argv[i_266],"-g")) {
                                                                            buffer_append_str(clang_option_254,"-g ");
                                                                        }
                                                                        else {
                                                                            if(charp_operator_equals(argv[i_266],"-v")) {
                                                                                buffer_append_str(clang_option_254,"-v ");
                                                                                verbose_262=(_Bool)1;
                                                                            }
                                                                            else {
                                                                                if(strlen(argv[i_266])>=2&&memcmp(argv[i_266],"-I",strlen("-I"))==0) {
                                                                                    buffer_append_str(cpp_option_255,((char*)(__right_value383=charp_operator_add(" ",((char*)(__right_value382=charp_operator_add(argv[i_266]," ")))))));
                                                                                    __right_value382 = come_decrement_ref_count2(__right_value382, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                                    __right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                                }
                                                                                else {
                                                                                    if(charp_operator_equals(argv[i_266],"-gdwarf-4")) {
                                                                                        buffer_append_str(clang_option_254,"-gdwarf-4 ");
                                                                                    }
                                                                                    else {
                                                                                        if(charp_operator_equals(argv[i_266],"-s")||charp_operator_equals(argv[i_266],"-S")) {
                                                                                            output_source_file_flag_260=(_Bool)1;
                                                                                            gComeOriginalSourcePosition=(_Bool)0;
                                                                                        }
                                                                                        else {
                                                                                            if(charp_operator_equals(argv[i_266],"-c")) {
                                                                                                output_object_file_258=(_Bool)1;
                                                                                            }
                                                                                            else {
                                                                                                if(charp_operator_equals(argv[i_266],"-E")) {
                                                                                                    output_cpp_file_259=(_Bool)1;
                                                                                                }
                                                                                                else {
                                                                                                    if(argv[i_266][0]==45) {
                                                                                                        buffer_append_str(clang_option_254,((char*)(__right_value384=charp_operator_add(argv[i_266]," "))));
                                                                                                        __right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                                                    }
                                                                                                    else {
                                                                                                        if(strlen(argv[i_266])>2&&memcmp(argv[i_266]+strlen(argv[i_266])-2,".o",2)==0) {
                                                                                                            list$1charph_push_back(object_files_257,(char*)come_increment_ref_count(((char*)(__right_value385=__builtin_string(argv[i_266])))));
                                                                                                            __right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                                                        }
                                                                                                        else {
                                                                                                            list$1charph_push_back(files_256,(char*)come_increment_ref_count(((char*)(__right_value386=__builtin_string(argv[i_266])))));
                                                                                                            __right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, (void*)0);
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
                                    gComeDebug=come_debug_263;
                                    gComeMalloc=come_malloc_264;
                                    if(come_str_265) {
                                        if(gComeGC) {
                                            buffer_append_str(clang_option_254," -lneo-c-str-gc -lpcre ");
                                        }
                                        else {
                                            buffer_append_str(clang_option_254," -lneo-c-str -lpcre ");
                                        }
                                    }
                                    for(                                    o2_saved_267=(struct list$1charph*)come_increment_ref_count((files_256)),it_268=list$1charph_begin((o2_saved_267));                                    !list$1charph_end((o2_saved_267));                                    it_268=list$1charph_next((o2_saved_267))                                    ){
                                        memset(&info_269,0,sizeof(struct sInfo));
                                        __dec_obj55=info_269.sname;
                                        info_269.sname=(char*)come_increment_ref_count(((char*)(__right_value387=__builtin_string(it_268))));
                                        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        info_269.sline=1;
                                        info_269.err_num=0;
                                        __dec_obj56=info_269.clang_option;
                                        info_269.clang_option=(char*)come_increment_ref_count(((char*)(__right_value388=buffer_to_string(clang_option_254))));
                                        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        __dec_obj57=info_269.cpp_option;
                                        info_269.cpp_option=(char*)come_increment_ref_count(((char*)(__right_value389=buffer_to_string(cpp_option_255))));
                                        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        __right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        info_269.no_output_err=(_Bool)0;
                                        __dec_obj58=info_269.funcs;
                                        info_269.funcs=(struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(__right_value391=map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count(((struct map$2charphsFunph*)(__right_value390=(struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 814, "map$2charphsFunph"))))))));
                                        come_call_finalizer3(__dec_obj58,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value390,map$2charphsFunphp_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value391,map$2charphsFunphp_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj59=info_269.generics_funcs;
                                        info_269.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(__right_value393=map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count(((struct map$2charphsGenericsFunph*)(__right_value392=(struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 815, "map$2charphsGenericsFunph"))))))));
                                        come_call_finalizer3(__dec_obj59,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value392,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value393,map$2charphsGenericsFunphp_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj60=info_269.classes;
                                        info_269.classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(__right_value395=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(__right_value394=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 816, "map$2charphsClassph"))))))));
                                        come_call_finalizer3(__dec_obj60,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value394,map$2charphsClassphp_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value395,map$2charphsClassphp_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj61=info_269.modules;
                                        info_269.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(__right_value397=map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count(((struct map$2charphsClassModuleph*)(__right_value396=(struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 817, "map$2charphsClassModuleph"))))))));
                                        come_call_finalizer3(__dec_obj61,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value396,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value397,map$2charphsClassModulephp_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj62=info_269.types;
                                        info_269.types=(struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(__right_value399=map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count(((struct map$2charphsTypeph*)(__right_value398=(struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 818, "map$2charphsTypeph"))))))));
                                        come_call_finalizer3(__dec_obj62,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value398,map$2charphsTypephp_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value399,map$2charphsTypephp_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj63=info_269.module;
                                        info_269.module=(struct sModule*)come_increment_ref_count(((struct sModule*)(__right_value401=sModule_initialize((struct sModule*)come_increment_ref_count(((struct sModule*)(__right_value400=(struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 819, "sModule"))))))));
                                        come_call_finalizer3(__dec_obj63,sModule_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value400,sModule_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value401,sModule_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj64=info_269.right_value_objects;
                                        info_269.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(__right_value403=list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count(((struct list$1sRightValueObjectph*)(__right_value402=(struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 820, "list$1sRightValueObjectph"))))))));
                                        come_call_finalizer3(__dec_obj64,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value402,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value403,list$1sRightValueObjectphp_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj65=info_269.stack;
                                        info_269.stack=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value405=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(__right_value404=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 821, "list$1CVALUEph"))))))));
                                        come_call_finalizer3(__dec_obj65,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value404,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value405,list$1CVALUEphp_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj66=info_269.gv_table;
                                        info_269.gv_table=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(__right_value407=sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(__right_value406=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 822, "sVarTable")))),(_Bool)1,((void*)0)))));
                                        come_call_finalizer3(__dec_obj66,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value406,sVarTable_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value407,sVarTable_finalize, 0, 1, 0, 0, (void*)0);
                                        lv_table_270=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(__right_value408=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 823, "sVarTable")))),(_Bool)0,((void*)0)));
                                        come_call_finalizer3(__right_value408,sVarTable_finalize, 0, 1, 0, 0, (void*)0);
                                        info_269.lv_table=lv_table_270;
                                        __dec_obj67=info_269.generics_type_names;
                                        info_269.generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value411=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value410=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 825, "list$1charph"))))))));
                                        come_call_finalizer3(__dec_obj67,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value410,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value411,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj68=info_269.method_generics_type_names;
                                        info_269.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value413=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value412=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 826, "list$1charph"))))))));
                                        come_call_finalizer3(__dec_obj68,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value412,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value413,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj69=info_269.generics_classes;
                                        info_269.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(__right_value415=map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count(((struct map$2charphsClassph*)(__right_value414=(struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 827, "map$2charphsClassph"))))))));
                                        come_call_finalizer3(__dec_obj69,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value414,map$2charphsClassphp_finalize, 0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value415,map$2charphsClassphp_finalize, 0, 1, 0, 0, (void*)0);
                                        info_269.verbose=verbose_262;
                                        init_classes(&info_269);
                                        clear_tmp_file(&info_269);
                                        if(!cpp(&info_269)) {
                                            printf("%s %d: transpile failed\n",info_269.sname,info_269.sline);
                                            exit(2);
                                        }
                                        __dec_obj70=info_269.original_source;
                                        info_269.original_source=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value418=string_to_buffer(((char*)(__right_value417=string_read(((char*)(__right_value416=xsprintf("%s",it_268))))))))));
                                        come_call_finalizer3(__dec_obj70,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        __right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        __right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value418,buffer_finalize, 0, 1, 0, 0, (void*)0);
                                        __dec_obj71=info_269.source;
                                        info_269.source=(struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value421=string_to_buffer(((char*)(__right_value420=string_read(((char*)(__right_value419=xsprintf("%s.i",it_268))))))))));
                                        come_call_finalizer3(__dec_obj71,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        __right_value419 = come_decrement_ref_count2(__right_value419, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        __right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        come_call_finalizer3(__right_value421,buffer_finalize, 0, 1, 0, 0, (void*)0);
                                        info_269.p=info_269.source->buf;
                                        info_269.head=info_269.source->buf;
                                        if(output_file_name_261) {
                                            __dec_obj72=info_269.output_file_name;
                                            info_269.output_file_name=(char*)come_increment_ref_count(((char*)(__right_value422=__builtin_string(output_file_name_261))));
                                            __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            __right_value422 = come_decrement_ref_count2(__right_value422, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        }
                                        else {
                                            __dec_obj73=info_269.output_file_name;
                                            info_269.output_file_name=((void*)0);
                                            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        if(!output_cpp_file_259) {
                                            transpile_v5(&info_269);
                                            if(!output_source_file_v3(&info_269)) {
                                                printf("%s %d: output source file faield\n",info_269.sname,info_269.sline);
                                                exit(2);
                                            }
                                            if(info_269.err_num>0) {
                                                printf("transpile error. err num %d\n",info_269.err_num);
                                                exit(2);
                                            }
                                            else {
                                                if(!compile(&info_269,output_object_file_258,object_files_257)) {
                                                    printf("%s %d: compile faield\n",info_269.sname,info_269.sline);
                                                    exit(27);
                                                }
                                            }
                                        }
                                        if(output_cpp_file_259) {
                                        }
                                        else {
                                            if(info_269.err_num>0) {
                                            }
                                            else {
                                                if(output_source_file_flag_260) {
                                                    clear_tmp_file_without_object_file_and_ccfile(&info_269);
                                                }
                                                else {
                                                    clear_tmp_file_without_object_file(&info_269);
                                                }
                                            }
                                        }
                                        come_call_finalizer3((&info_269),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                        come_call_finalizer3(lv_table_270,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer3(o2_saved_267,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    if(!output_object_file_258&&!output_cpp_file_259&&(list$1charph_length(files_256)>0||list$1charph_length(object_files_257)>0)) {
                                        memset(&info_271,0,sizeof(struct sInfo));
                                        __dec_obj74=info_271.sname;
                                        info_271.sname=(char*)come_increment_ref_count(((char*)(__right_value423=string_clone(list$1charphp_operator_load_element(files_256,0)))));
                                        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        __right_value423 = come_decrement_ref_count2(__right_value423, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        __dec_obj75=info_271.clang_option;
                                        info_271.clang_option=(char*)come_increment_ref_count(((char*)(__right_value424=buffer_to_string(clang_option_254))));
                                        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        __right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        info_271.verbose=verbose_262;
                                        if(output_file_name_261) {
                                            __dec_obj76=info_271.output_file_name;
                                            info_271.output_file_name=(char*)come_increment_ref_count(((char*)(__right_value425=__builtin_string(output_file_name_261))));
                                            __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            __right_value425 = come_decrement_ref_count2(__right_value425, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        }
                                        else {
                                            __dec_obj77=info_271.output_file_name;
                                            info_271.output_file_name=((void*)0);
                                            __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        __current_stack2__.info_271 = &info_271;
                                        __current_stack2__.clang_option_254 = &clang_option_254;
                                        __current_stack2__.cpp_option_255 = &cpp_option_255;
                                        __current_stack2__.files_256 = &files_256;
                                        __current_stack2__.object_files_257 = &object_files_257;
                                        __current_stack2__.output_object_file_258 = &output_object_file_258;
                                        __current_stack2__.output_cpp_file_259 = &output_cpp_file_259;
                                        __current_stack2__.output_source_file_flag_260 = &output_source_file_flag_260;
                                        __current_stack2__.output_file_name_261 = &output_file_name_261;
                                        __current_stack2__.verbose_262 = &verbose_262;
                                        __current_stack2__.come_debug_263 = &come_debug_263;
                                        __current_stack2__.come_malloc_264 = &come_malloc_264;
                                        __current_stack2__.come_str_265 = &come_str_265;
                                        __current_stack2__.argc = &argc;
                                        __current_stack2__.argv = &argv;
                                        bool_expect(linker(&info_271,object_files_257),&__current_stack2__,(void*)method_block2_02transpilec);
                                        if(!output_cpp_file_259&&!output_source_file_flag_260) {
                                            clear_tmp_file(&info_271);
                                        }
                                        come_call_finalizer3((&info_271),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                    }
                                    come_call_finalizer3(clang_option_254,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(cpp_option_255,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(files_256,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(object_files_257,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    output_file_name_261 = come_decrement_ref_count2(output_file_name_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
void* __result_obj__=(void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
int i_213;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct list$1charp* __dec_obj34;
struct map$2charphsFunph* __result101__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value307=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1276, "char*%"))));
    __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value308=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(128)), "./neo-c.h", 1277, "sFun*%"))));
    come_call_finalizer3(__right_value308,sFun_finalize, 0, 1, 0, 0, __result_obj__);
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value309=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1278, "bool"))));
    __right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_213=0;    i_213<128;    i_213++    ){
        self->item_existance[i_213]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj34=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value310=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1288, "list$1charp"))))));
    come_call_finalizer3(__dec_obj34,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value310,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    self->it=0;
    __result101__ = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result101__;
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
void* __result_obj__=(void*)0;
struct list$1charp* __result100__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result100__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    return __result100__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_214;
struct list_item$1charp* prev_it_215;
    it_214=self->head;
    while(it_214!=((void*)0)) {
        prev_it_215=it_214;
        it_214=it_214->next;
        come_call_finalizer3(prev_it_215,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
int i_216;
int i_217;
    for(    i_216=0;    i_216<self->size;    i_216++    ){
        if(self->item_existance[i_216]) {
            if(1) {
                come_call_finalizer3(self->items[i_216],sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_217=0;    i_217<self->size;    i_217++    ){
        if(self->item_existance[i_217]) {
            if(1) {
                self->keys[i_217] = come_decrement_ref_count2(self->keys[i_217], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
int i_218;
int i_219;
    for(    i_218=0;    i_218<self->size;    i_218++    ){
        if(self->item_existance[i_218]) {
            if(1) {
                come_call_finalizer3(self->items[i_218],sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_219=0;    i_219<self->size;    i_219++    ){
        if(self->item_existance[i_219]) {
            if(1) {
                self->keys[i_219] = come_decrement_ref_count2(self->keys[i_219], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
int i_220;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct list$1charp* __dec_obj36;
struct map$2charphsGenericsFunph* __result102__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value314=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1276, "char*%"))));
    __right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value315=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(128)), "./neo-c.h", 1277, "sGenericsFun*%"))));
    come_call_finalizer3(__right_value315,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value316=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1278, "bool"))));
    __right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_220=0;    i_220<128;    i_220++    ){
        self->item_existance[i_220]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj36=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value317=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1288, "list$1charp"))))));
    come_call_finalizer3(__dec_obj36,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value317,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    self->it=0;
    __result102__ = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result102__;
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
int i_221;
int i_222;
    for(    i_221=0;    i_221<self->size;    i_221++    ){
        if(self->item_existance[i_221]) {
            if(1) {
                come_call_finalizer3(self->items[i_221],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_222=0;    i_222<self->size;    i_222++    ){
        if(self->item_existance[i_222]) {
            if(1) {
                self->keys[i_222] = come_decrement_ref_count2(self->keys[i_222], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
int i_223;
int i_224;
    for(    i_223=0;    i_223<self->size;    i_223++    ){
        if(self->item_existance[i_223]) {
            if(1) {
                come_call_finalizer3(self->items[i_223],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_224=0;    i_224<self->size;    i_224++    ){
        if(self->item_existance[i_224]) {
            if(1) {
                self->keys[i_224] = come_decrement_ref_count2(self->keys[i_224], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
int i_225;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct list$1charp* __dec_obj38;
struct map$2charphsClassph* __result103__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value321=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1276, "char*%"))));
    __right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value322=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(128)), "./neo-c.h", 1277, "sClass*%"))));
    come_call_finalizer3(__right_value322,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value323=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1278, "bool"))));
    __right_value323 = come_decrement_ref_count2(__right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_225=0;    i_225<128;    i_225++    ){
        self->item_existance[i_225]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj38=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value324=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1288, "list$1charp"))))));
    come_call_finalizer3(__dec_obj38,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value324,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    self->it=0;
    __result103__ = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result103__;
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
int i_226;
int i_227;
    for(    i_226=0;    i_226<self->size;    i_226++    ){
        if(self->item_existance[i_226]) {
            if(1) {
                come_call_finalizer3(self->items[i_226],sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_227=0;    i_227<self->size;    i_227++    ){
        if(self->item_existance[i_227]) {
            if(1) {
                self->keys[i_227] = come_decrement_ref_count2(self->keys[i_227], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
int i_228;
int i_229;
    for(    i_228=0;    i_228<self->size;    i_228++    ){
        if(self->item_existance[i_228]) {
            if(1) {
                come_call_finalizer3(self->items[i_228],sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_229=0;    i_229<self->size;    i_229++    ){
        if(self->item_existance[i_229]) {
            if(1) {
                self->keys[i_229] = come_decrement_ref_count2(self->keys[i_229], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self){
void* __result_obj__=(void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
int i_230;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct list$1charp* __dec_obj40;
struct map$2charphsClassModuleph* __result104__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value328=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1276, "char*%"))));
    __right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(__right_value329=(struct sClassModule**)come_calloc(1, sizeof(struct sClassModule*)*(1*(128)), "./neo-c.h", 1277, "sClassModule*%"))));
    come_call_finalizer3(__right_value329,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value330=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1278, "bool"))));
    __right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_230=0;    i_230<128;    i_230++    ){
        self->item_existance[i_230]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj40=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value331=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1288, "list$1charp"))))));
    come_call_finalizer3(__dec_obj40,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value331,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    self->it=0;
    __result104__ = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result104__;
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
int i_231;
int i_232;
    for(    i_231=0;    i_231<self->size;    i_231++    ){
        if(self->item_existance[i_231]) {
            if(1) {
                come_call_finalizer3(self->items[i_231],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_232=0;    i_232<self->size;    i_232++    ){
        if(self->item_existance[i_232]) {
            if(1) {
                self->keys[i_232] = come_decrement_ref_count2(self->keys[i_232], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self){
int i_233;
int i_234;
    for(    i_233=0;    i_233<self->size;    i_233++    ){
        if(self->item_existance[i_233]) {
            if(1) {
                come_call_finalizer3(self->items[i_233],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_234=0;    i_234<self->size;    i_234++    ){
        if(self->item_existance[i_234]) {
            if(1) {
                self->keys[i_234] = come_decrement_ref_count2(self->keys[i_234], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
int i_235;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct list$1charp* __dec_obj42;
struct map$2charphsTypeph* __result105__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value335=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./neo-c.h", 1276, "char*%"))));
    __right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->items=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value336=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(128)), "./neo-c.h", 1277, "sType*%"))));
    come_call_finalizer3(__right_value336,sType_finalize, 0, 1, 0, 0, __result_obj__);
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value337=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./neo-c.h", 1278, "bool"))));
    __right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    for(    i_235=0;    i_235<128;    i_235++    ){
        self->item_existance[i_235]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj42=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(__right_value338=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./neo-c.h", 1288, "list$1charp"))))));
    come_call_finalizer3(__dec_obj42,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value338,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    self->it=0;
    __result105__ = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    return __result105__;
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
int i_236;
int i_237;
    for(    i_236=0;    i_236<self->size;    i_236++    ){
        if(self->item_existance[i_236]) {
            if(1) {
                come_call_finalizer3(self->items[i_236],sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_237=0;    i_237<self->size;    i_237++    ){
        if(self->item_existance[i_237]) {
            if(1) {
                self->keys[i_237] = come_decrement_ref_count2(self->keys[i_237], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
int i_238;
int i_239;
    for(    i_238=0;    i_238<self->size;    i_238++    ){
        if(self->item_existance[i_238]) {
            if(1) {
                come_call_finalizer3(self->items[i_238],sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_239=0;    i_239<self->size;    i_239++    ){
        if(self->item_existance[i_239]) {
            if(1) {
                self->keys[i_239] = come_decrement_ref_count2(self->keys[i_239], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result106__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result106__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result106__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_240;
struct list_item$1sRightValueObjectph* prev_it_241;
    it_240=self->head;
    while(it_240!=((void*)0)) {
        prev_it_241=it_240;
        it_240=it_240->next;
        come_call_finalizer3(prev_it_241,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sRightValueObjectph* it_242;
struct list_item$1sRightValueObjectph* prev_it_243;
    it_242=self->head;
    while(it_242!=((void*)0)) {
        prev_it_243=it_242;
        it_242=it_242->next;
        come_call_finalizer3(prev_it_243,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result107__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result107__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result107__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_244;
struct list_item$1CVALUEph* prev_it_245;
    it_244=self->head;
    while(it_244!=((void*)0)) {
        prev_it_245=it_244;
        it_244=it_244->next;
        come_call_finalizer3(prev_it_245,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
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
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_246;
struct list_item$1CVALUEph* prev_it_247;
    it_246=self->head;
    while(it_246!=((void*)0)) {
        prev_it_247=it_246;
        it_246=it_246->next;
        come_call_finalizer3(prev_it_247,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_249;
struct list_item$1charph* prev_it_250;
    it_249=self->head;
    while(it_249!=((void*)0)) {
        prev_it_250=it_249;
        it_249=it_249->next;
        come_call_finalizer3(prev_it_250,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
int i_252;
int i_253;
    for(    i_252=0;    i_252<self->size;    i_252++    ){
        if(self->item_existance[i_252]) {
            if(1) {
                self->items[i_252] = come_decrement_ref_count2(self->items[i_252], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_253=0;    i_253<self->size;    i_253++    ){
        if(self->item_existance[i_253]) {
            if(1) {
                self->keys[i_253] = come_decrement_ref_count2(self->keys[i_253], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_272;
int i_273;
char* __result108__;
char* default_value_274;
char* __result109__;
default_value_274 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_272=self->head;
    i_273=0;
    while(it_272!=((void*)0)) {
        if(position==i_273) {
            __result108__ = __result_obj__ = it_272->item;
            return __result108__;
        }
        it_272=it_272->next;
        i_273++;
    }
    memset(&default_value_274,0,sizeof(char*));
    __result109__ = __result_obj__ = default_value_274;
    default_value_274 = come_decrement_ref_count2(default_value_274, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result109__;
}

void method_block2_02transpilec(struct __current_stack2__* parent){
    printf("%s %d: linker faield\n",(*(parent->info_271)).sname,(*(parent->info_271)).sline);
    exit(13);
}

