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
    struct sMemHeaderTiny* mFreeMem[1024*2];
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
char* gComeStackFrameSName[128];
int gComeStackFrameSLine[128];
int gComeStackFrameID[128];
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










void come_push_stackframe(char* sname, int sline, int id){
    if(gNumComeStackFrame<128) {
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
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct buffer* buf_47;
void* __right_value81 = (void*)0;
int i_48;
void* __right_value82 = (void*)0;
void* __right_value83 = (void*)0;
    buf_47=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value79=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 36, "buffer"))))));
    come_call_finalizer3(__right_value79,buffer_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_str(buf_47,((char*)(__right_value81=xsprintf("%s %d\n",sname,sline))));
    __right_value81 = come_decrement_ref_count2(__right_value81, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    i_48=gNumComeStackFrame-2;    i_48>=0;    i_48--    ){
        buffer_append_str(buf_47,((char*)(__right_value82=xsprintf("%s %d #%d\n",gComeStackFrameSName[i_48],gComeStackFrameSLine[i_48],gComeStackFrameID[i_48]))));
        __right_value82 = come_decrement_ref_count2(__right_value82, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value83=buffer_to_string(buf_47))));
    __right_value83 = come_decrement_ref_count2(__right_value83, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(buf_47,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

void stackframe(){
int i_49;
    for(    i_49=gNumComeStackFrame-1;    i_49>=0;    i_49--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_49],gComeStackFrameSLine[i_49],gComeStackFrameID[i_49]);
    }
}

char* come_get_stackframe(){
void* __result_obj__=(void*)0;
void* __right_value84 = (void*)0;
char* __result45__;
    __result45__ = __result_obj__ = ((char*)(__right_value84=__builtin_string(gComeStackFrameBuffer)));
    __right_value84 = come_decrement_ref_count2(__right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result45__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__=(void*)0;
void* __result46__;
    if(mem==((void*)0)) {
        printf("%s %d #%d: null check error\n",sname,sline,id);
        stackframe();
        exit(2);
    }
    __result46__ = __result_obj__ = mem;
    return __result46__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__=(void*)0;
void* __result47__;
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
    __result47__ = __result_obj__ = mem;
    return __result47__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
    if(!self) {
        block(parent);
        stackframe();
        exit(1);
    }
    return self;
}

_Bool bool_value(_Bool self){
    return self;
}

int int_catch(int self, void* parent, void (*block)(void*)){
    if(self<0) {
        block(parent);
    }
    return self;
}

int int_expect(int self, void* parent, void (*block)(void*)){
    if(self<0) {
        block(parent);
        stackframe();
        exit(1);
    }
    return self;
}

int int_value(int self){
    return self;
}

int int_except(int self, void* parent, void (*block)(void*)){
    if(self<0) {
        block(parent);
    }
    return self;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
    if(!self) {
        block(parent);
    }
    return self;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
    if(!self) {
        block(parent);
    }
    return self;
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
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_50=0;    i_50<gHeapPages.mSizePages;    i_50++    ){
        gHeapPages.mPages[i_50]=calloc(1,sizeof(char)*1024*2);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*1024*2);
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
}

static void* alloc_from_pages(unsigned long int size){
void* __result_obj__=(void*)0;
void* result_58;
unsigned long int free_area_59;
int new_size_pages_60;
void** new_pages_61;
int i_62;
void* __result48__;
    result_58=((void*)0);
    if(size<1024*2) {
        if(gHeapPages.mFreeMem[size]) {
            result_58=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_58,0,size);
        }
        if(result_58==((void*)0)) {
            free_area_59=gHeapPages.mPages[gHeapPages.mCurrentPages]+1024*2-gHeapPages.mTop;
            if(size>=free_area_59) {
                gHeapPages.mCurrentPages++;
                if(gHeapPages.mCurrentPages==gHeapPages.mSizePages) {
                    new_size_pages_60=gHeapPages.mSizePages*2;
                    new_pages_61=calloc(1,sizeof(char*)*new_size_pages_60);
                    i_62=0;
                    for(                    ;                    i_62<gHeapPages.mSizePages;                    i_62++                    ){
                        new_pages_61[i_62]=gHeapPages.mPages[i_62];
                    }
                    for(                    ;                    i_62<new_size_pages_60;                    i_62++                    ){
                        new_pages_61[i_62]=calloc(1,sizeof(char)*1024*2);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_61;
                    gHeapPages.mSizePages=new_size_pages_60;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_58=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_58=calloc(1,size);
    }
    __result48__ = __result_obj__ = result_58;
    return __result48__;
}

static void* come_alloc_mem_from_heap_pool(unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
void* result_63;
struct sMemHeader* it_64;
void* __result49__;
void* result_65;
struct sMemHeaderTiny* it_66;
void* __result50__;
    if(gComeDebugLib) {
        result_63=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_64=result_63;
        it_64->allocated=177783;
        it_64->size=size+sizeof(struct sMemHeader);
        it_64->free_next=((void*)0);
        come_push_stackframe(sname,sline,0);
        if(gNumComeStackFrame<16) {
            memcpy(it_64->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(it_64->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            memcpy(it_64->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it_64->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(it_64->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            memcpy(it_64->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        come_pop_stackframe();
        it_64->next=gAllocMem;
        it_64->prev=((void*)0);
        if(class_name) {
            it_64->class_name=strdup(class_name);
        }
        else {
            it_64->class_name=((void*)0);
        }
        if(gAllocMem) {
            gAllocMem->prev=it_64;
        }
        gAllocMem=it_64;
        gNumAlloc++;
        __result49__ = __result_obj__ = (char*)result_63+sizeof(struct sMemHeader);
        return __result49__;
    }
    else {
        result_65=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_66=result_65;
        it_66->allocated=177783;
        it_66->size=size+sizeof(struct sMemHeaderTiny);
        it_66->free_next=((void*)0);
        it_66->next=(struct sMemHeaderTiny*)gAllocMem;
        it_66->prev=((void*)0);
        if(gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_66;
        }
        gAllocMem=(struct sMemHeader*)it_66;
        gNumAlloc++;
        __result50__ = __result_obj__ = (char*)result_65+sizeof(struct sMemHeaderTiny);
        return __result50__;
    }
}

static void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_67;
struct sMemHeader* prev_it_68;
struct sMemHeader* next_it_69;
unsigned long int size_70;
struct sMemHeaderTiny* it_71;
struct sMemHeaderTiny* prev_it_72;
struct sMemHeaderTiny* next_it_73;
unsigned long int size_74;
    if(mem) {
        if(gComeGCLib) {
        }
        else {
            if(gComeDebugLib) {
                it_67=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
                if(it_67->allocated!=177783) {
                    return;
                }
                it_67->allocated=0;
                prev_it_68=it_67->prev;
                next_it_69=it_67->next;
                if(it_67->class_name) {
                    free(it_67->class_name);
                }
                if(gAllocMem==it_67) {
                    gAllocMem=next_it_69;
                    if(gAllocMem) {
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    if(prev_it_68) {
                        prev_it_68->next=next_it_69;
                    }
                    if(next_it_69) {
                        next_it_69->prev=prev_it_68;
                    }
                }
                size_70=it_67->size;
                if(size_70<1024*2) {
                    if(gHeapPages.mFreeMem[size_70]==((void*)0)) {
                        it_67->free_next=((void*)0);
                        gHeapPages.mFreeMem[size_70]=(struct sMemHeaderTiny*)it_67;
                    }
                    else {
                        it_67->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_70];
                        gHeapPages.mFreeMem[size_70]=(struct sMemHeaderTiny*)it_67;
                    }
                }
                else {
                    free(it_67);
                }
                gNumFree++;
            }
            else {
                it_71=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
                if(it_71->allocated!=177783) {
                    return;
                }
                it_71->allocated=0;
                prev_it_72=it_71->prev;
                next_it_73=it_71->next;
                if(gAllocMem==it_71) {
                    gAllocMem=(struct sMemHeader*)next_it_73;
                    if(gAllocMem) {
                        gAllocMem->prev=((void*)0);
                    }
                }
                else {
                    if(prev_it_72) {
                        prev_it_72->next=next_it_73;
                    }
                    if(next_it_73) {
                        next_it_73->prev=prev_it_72;
                    }
                }
                size_74=it_71->size;
                if(size_74<1024*2) {
                    if(gHeapPages.mFreeMem[size_74]==((void*)0)) {
                        it_71->free_next=((void*)0);
                        gHeapPages.mFreeMem[size_74]=it_71;
                    }
                    else {
                        it_71->free_next=gHeapPages.mFreeMem[size_74];
                        gHeapPages.mFreeMem[size_74]=it_71;
                    }
                }
                else {
                    free(it_71);
                }
                gNumFree++;
            }
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_75;
char* __result51__;
    it_75=(struct sMemHeader*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int)-sizeof(struct sMemHeaderTiny));
    if(it_75->allocated!=177783) {
        printf("invalid heap object(%p)\n",it_75);
        exit(2);
    }
    __result51__ = __result_obj__ = it_75->class_name;
    return __result51__;
}

void* come_calloc(unsigned long int count, unsigned long int size, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
char* mem_76;
unsigned long int* ref_count_77;
unsigned long int* size2_78;
void* __result52__;
    mem_76=come_alloc_mem_from_heap_pool(sizeof(unsigned long int)+sizeof(unsigned long int)+count*size,sname,sline,class_name);
    ref_count_77=(unsigned long int*)mem_76;
    *ref_count_77=0;
    size2_78=(unsigned long int*)(mem_76+sizeof(unsigned long int));
    *size2_78=size*count+sizeof(unsigned long int)+sizeof(unsigned long int);
    __result52__ = __result_obj__ = mem_76+sizeof(unsigned long int)+sizeof(unsigned long int);
    return __result52__;
}

void come_free_object(void* mem){
unsigned long int* ref_count_79;
    if(mem==((void*)0)) {
        return;
    }
    ref_count_79=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    come_free_mem_of_heap_pool((char*)ref_count_79);
}

void come_free(void* mem){
unsigned long int* ref_count_80;
    if(mem==((void*)0)) {
        return;
    }
    ref_count_80=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    come_free_mem_of_heap_pool((char*)ref_count_80);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name){
void* __result_obj__=(void*)0;
void* __result53__;
char* mem_81;
unsigned long int* size_p_82;
unsigned long int size_83;
void* result_84;
void* __result54__;
    if(!block) {
        __result53__ = __result_obj__ = ((void*)0);
        return __result53__;
    }
    mem_81=(char*)block-sizeof(unsigned long int)-sizeof(unsigned long int);
    size_p_82=(unsigned long int*)(mem_81+sizeof(unsigned long int));
    size_83=*size_p_82-sizeof(unsigned long int)-sizeof(unsigned long int);
    result_84=come_calloc(1,size_83,sname,sline,class_name);
    memcpy(result_84,block,size_83);
    __result54__ = __result_obj__ = result_84;
    return __result54__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result55__;
unsigned long int* ref_count_85;
void* __result56__;
    if(mem==((void*)0)) {
        __result55__ = __result_obj__ = mem;
        return __result55__;
    }
    ref_count_85=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    (*ref_count_85)++;
    __result56__ = __result_obj__ = mem;
    return __result56__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result57__;
unsigned long int* ref_count_86;
void* __result58__;
    if(mem==((void*)0)) {
        __result57__ = __result_obj__ = mem;
        return __result57__;
    }
    ref_count_86=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    printf("ref_count %ld\n",*ref_count_86);
    __result58__ = __result_obj__ = mem;
    return __result58__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__=(void*)0;
void* __result59__;
unsigned long int* ref_count_87;
unsigned long int count_88;
void (*finalizer_89)(void*);
void* __result60__;
void* __result61__;
memset(&finalizer_89, 0, sizeof(void (*)(void*)));
    if(mem==((void*)0)) {
        __result59__ = __result_obj__ = ((void*)0);
        return __result59__;
    }
    ref_count_87=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    if(!no_decrement) {
        (*ref_count_87)--;
    }
    count_88=*ref_count_87;
    if(!no_free&&(count_88<=0||force_delete_)) {
        if(protocol_obj&&protocol_fun) {
            finalizer_89=protocol_fun;
            finalizer_89(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result60__ = __result_obj__ = ((void*)0);
        return __result60__;
    }
    __result61__ = __result_obj__ = mem;
    return __result61__;
}

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj){
void* __result_obj__=(void*)0;
void* __result62__;
void* __result63__;
unsigned long int* ref_count_90;
unsigned long int count_91;
void (*finalizer_92)(void*);
void* __result64__;
void* __result65__;
memset(&finalizer_92, 0, sizeof(void (*)(void*)));
    if(result_obj) {
        if(mem==result_obj) {
            __result62__ = __result_obj__ = mem;
            return __result62__;
        }
    }
    if(mem==((void*)0)) {
        __result63__ = __result_obj__ = ((void*)0);
        return __result63__;
    }
    ref_count_90=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
    if(!no_decrement) {
        (*ref_count_90)--;
    }
    count_91=*ref_count_90;
    if(!no_free&&(count_91<=0||force_delete_)) {
        if(protocol_obj&&protocol_fun) {
            finalizer_92=protocol_fun;
            finalizer_92(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result64__ = __result_obj__ = ((void*)0);
        return __result64__;
    }
    __result65__ = __result_obj__ = mem;
    return __result65__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void (*finalizer_93)(void*);
void (*finalizer_94)(void*);
unsigned long int* ref_count_95;
unsigned long int count_96;
void (*finalizer_97)(void*);
void (*finalizer_98)(void*);
memset(&finalizer_93, 0, sizeof(void (*)(void*)));
memset(&finalizer_94, 0, sizeof(void (*)(void*)));
memset(&finalizer_97, 0, sizeof(void (*)(void*)));
memset(&finalizer_98, 0, sizeof(void (*)(void*)));
    if(mem==((void*)0)) {
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj&&protocol_fun) {
                finalizer_93=protocol_fun;
                finalizer_93(protocol_obj);
            }
            finalizer_94=fun;
            finalizer_94(mem);
        }
    }
    else {
        ref_count_95=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(!no_decrement) {
            (*ref_count_95)--;
        }
        count_96=*ref_count_95;
        if(!no_free&&(count_96<=0||force_delete_)) {
            if(mem) {
                if(protocol_obj&&protocol_fun) {
                    finalizer_97=protocol_fun;
                    finalizer_97(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    finalizer_98=fun;
                    finalizer_98(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void (*finalizer_99)(void*);
void (*finalizer_100)(void*);
unsigned long int* ref_count_101;
unsigned long int count_102;
void (*finalizer_103)(void*);
void (*finalizer_104)(void*);
memset(&finalizer_99, 0, sizeof(void (*)(void*)));
memset(&finalizer_100, 0, sizeof(void (*)(void*)));
memset(&finalizer_103, 0, sizeof(void (*)(void*)));
memset(&finalizer_104, 0, sizeof(void (*)(void*)));
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
                finalizer_99=protocol_fun;
                finalizer_99(protocol_obj);
            }
            finalizer_100=fun;
            finalizer_100(mem);
        }
    }
    else {
        ref_count_101=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(!no_decrement) {
            (*ref_count_101)--;
        }
        count_102=*ref_count_101;
        if(!no_free&&(count_102<=0||force_delete_)) {
            if(mem) {
                if(protocol_obj&&protocol_fun) {
                    finalizer_103=protocol_fun;
                    finalizer_103(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    finalizer_104=fun;
                    finalizer_104(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void (*finalizer_105)(void*);
unsigned long int* ref_count_106;
unsigned long int count_107;
void (*finalizer_108)(void*);
memset(&finalizer_105, 0, sizeof(void (*)(void*)));
memset(&finalizer_108, 0, sizeof(void (*)(void*)));
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
            finalizer_105=fun;
            finalizer_105(mem);
        }
    }
    else {
        ref_count_106=(unsigned long int*)((char*)mem-sizeof(unsigned long int)-sizeof(unsigned long int));
        if(!no_decrement) {
            (*ref_count_106)--;
        }
        count_107=*ref_count_106;
        if(!no_free&&(count_107<=0||force_delete_)) {
            if(mem) {
                if(fun) {
                    finalizer_108=fun;
                    finalizer_108(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

char* __builtin_string(char* str){
void* __result_obj__=(void*)0;
char* __result66__;
int len_109;
void* __right_value85 = (void*)0;
char* result_110;
char* __result67__;
    if(str==((void*)0)) {
        __result66__ = __result_obj__ = ((void*)0);
        return __result66__;
    }
    len_109=strlen(str)+1;
    result_110=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_109)), "libneo-c.c", 910, "char"));
    strncpy(result_110,str,len_109);
    __result67__ = __result_obj__ = result_110;
    result_110 = come_decrement_ref_count2(result_110, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result67__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
_Bool found_111;
int i_112;
    found_111=(_Bool)0;
    for(    i_112=0;    i_112<len;    i_112++    ){
        if(array[i_112]==element) {
            found_111=(_Bool)1;
            break;
        }
    }
    return found_111;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value86 = (void*)0;
char* __dec_obj12;
struct buffer* __result68__;
    self->size=128;
    __dec_obj12=self->buf;
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 935, "char"));
    __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result68__ = __result_obj__ = self;
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result68__;
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
void* __result_obj__=(void*)0;
struct buffer* __result69__;
void* __right_value87 = (void*)0;
struct buffer* result_113;
void* __right_value88 = (void*)0;
char* __dec_obj13;
struct buffer* __result70__;
    if(self==((void*)0)) {
        __result69__ = __result_obj__ = ((void*)0);
        return __result69__;
    }
    result_113=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 957, "buffer"));
    result_113->size=self->size;
    __dec_obj13=result_113->buf;
    result_113->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 960, "char"));
    __dec_obj13 = come_decrement_ref_count2(__dec_obj13, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_113->len=self->len;
    memcpy(result_113->buf,self->buf,self->len);
    __result70__ = __result_obj__ = result_113;
    come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result70__;
}

int buffer_length(struct buffer* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
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
void* __result_obj__=(void*)0;
struct buffer* __result71__;
void* __right_value89 = (void*)0;
char* old_buf_114;
int old_len_115;
int new_size_116;
void* __right_value90 = (void*)0;
char* __dec_obj14;
struct buffer* __result72__;
    if(self==((void*)0)||mem==((void*)0)) {
        __result71__ = __result_obj__ = self;
        return __result71__;
    }
    if(self->len+size+1+1>=self->size) {
        old_buf_114=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 999, "char"));
        memcpy(old_buf_114,self->buf,self->size);
        old_len_115=self->len;
        new_size_116=(self->size+size+1)*2;
        __dec_obj14=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_116)), "libneo-c.c", 1003, "char"));
        __dec_obj14 = come_decrement_ref_count2(__dec_obj14, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_114,old_len_115);
        self->buf[old_len_115]=0;
        self->size=new_size_116;
        old_buf_114 = come_decrement_ref_count2(old_buf_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result72__ = __result_obj__ = self;
    return __result72__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__=(void*)0;
struct buffer* __result73__;
void* __right_value91 = (void*)0;
char* old_buf_117;
int old_len_118;
int new_size_119;
void* __right_value92 = (void*)0;
char* __dec_obj15;
struct buffer* __result74__;
    if(self==((void*)0)) {
        __result73__ = __result_obj__ = ((void*)0);
        return __result73__;
    }
    if(self->len+1+1+1>=self->size) {
        old_buf_117=(char*)come_increment_ref_count(charp_clone(self->buf));
        old_len_118=self->len;
        new_size_119=(self->size+10+1)*2;
        __dec_obj15=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_119)), "libneo-c.c", 1026, "char"));
        __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_117,old_len_118);
        self->buf[old_len_118]=0;
        self->size=new_size_119;
        old_buf_117 = come_decrement_ref_count2(old_buf_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result74__ = __result_obj__ = self;
    return __result74__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result75__;
int size_120;
void* __right_value93 = (void*)0;
char* old_buf_121;
int old_len_122;
int new_size_123;
void* __right_value94 = (void*)0;
char* __dec_obj16;
struct buffer* __result76__;
    if(self==((void*)0)||mem==((void*)0)) {
        __result75__ = __result_obj__ = self;
        return __result75__;
    }
    size_120=strlen(mem);
    if(self->len+size_120+1+1>=self->size) {
        old_buf_121=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1048, "char"));
        memcpy(old_buf_121,self->buf,self->size);
        old_len_122=self->len;
        new_size_123=(self->size+size_120+1)*2;
        __dec_obj16=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_123)), "libneo-c.c", 1052, "char"));
        __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_121,old_len_122);
        self->buf[old_len_122]=0;
        self->size=new_size_123;
        old_buf_121 = come_decrement_ref_count2(old_buf_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_120);
    self->len+=size_120;
    self->buf[self->len]=0;
    __result76__ = __result_obj__ = self;
    return __result76__;
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result77__;
int size_124;
void* __right_value95 = (void*)0;
char* old_buf_125;
int old_len_126;
int new_size_127;
void* __right_value96 = (void*)0;
char* __dec_obj17;
struct buffer* __result78__;
    if(self==((void*)0)||mem==((void*)0)) {
        __result77__ = __result_obj__ = self;
        return __result77__;
    }
    size_124=strlen(mem)+1;
    if(self->len+size_124+1+1+1>=self->size) {
        old_buf_125=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1072, "char"));
        memcpy(old_buf_125,self->buf,self->size);
        old_len_126=self->len;
        new_size_127=(self->size+size_124+1)*2;
        __dec_obj17=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_127)), "libneo-c.c", 1076, "char"));
        __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_125,old_len_126);
        self->buf[old_len_126]=0;
        self->size=new_size_127;
        old_buf_125 = come_decrement_ref_count2(old_buf_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_124);
    self->len+=size_124;
    self->buf[self->len]=0;
    self->len++;
    __result78__ = __result_obj__ = self;
    return __result78__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__=(void*)0;
struct buffer* __result79__;
int* mem_128;
int size_129;
void* __right_value97 = (void*)0;
char* old_buf_130;
int old_len_131;
int new_size_132;
void* __right_value98 = (void*)0;
char* __dec_obj18;
struct buffer* __result80__;
    if(self==((void*)0)) {
        __result79__ = __result_obj__ = ((void*)0);
        return __result79__;
    }
    mem_128=&value;
    size_129=sizeof(int);
    if(self->len+size_129+1+1>=self->size) {
        old_buf_130=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1099, "char"));
        memcpy(old_buf_130,self->buf,self->size);
        old_len_131=self->len;
        new_size_132=(self->size+size_129+1)*2;
        __dec_obj18=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_132)), "libneo-c.c", 1103, "char"));
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_130,old_len_131);
        self->buf[old_len_131]=0;
        self->size=new_size_132;
        old_buf_130 = come_decrement_ref_count2(old_buf_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_128,size_129);
    self->len+=size_129;
    self->buf[self->len]=0;
    __result80__ = __result_obj__ = self;
    return __result80__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__=(void*)0;
long* mem_133;
int size_134;
void* __right_value99 = (void*)0;
char* old_buf_135;
int old_len_136;
int new_size_137;
void* __right_value100 = (void*)0;
char* __dec_obj19;
struct buffer* __result81__;
    mem_133=&value;
    size_134=sizeof(long);
    if(self->len+size_134+1+1>=self->size) {
        old_buf_135=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1122, "char"));
        memcpy(old_buf_135,self->buf,self->size);
        old_len_136=self->len;
        new_size_137=(self->size+size_134+1)*2;
        __dec_obj19=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_137)), "libneo-c.c", 1126, "char"));
        __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_135,old_len_136);
        self->buf[old_len_136]=0;
        self->size=new_size_137;
        old_buf_135 = come_decrement_ref_count2(old_buf_135, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_133,size_134);
    self->len+=size_134;
    self->buf[self->len]=0;
    __result81__ = __result_obj__ = self;
    return __result81__;
}

struct buffer* buffer_append_short(struct buffer* self, short short value){
void* __result_obj__=(void*)0;
struct buffer* __result82__;
short short* mem_138;
int size_139;
void* __right_value101 = (void*)0;
char* old_buf_140;
int old_len_141;
int new_size_142;
void* __right_value102 = (void*)0;
char* __dec_obj20;
struct buffer* __result83__;
    if(self==((void*)0)) {
        __result82__ = __result_obj__ = ((void*)0);
        return __result82__;
    }
    mem_138=&value;
    size_139=sizeof(short short);
    if(self->len+size_139+1+1>=self->size) {
        old_buf_140=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "libneo-c.c", 1149, "char"));
        memcpy(old_buf_140,self->buf,self->size);
        old_len_141=self->len;
        new_size_142=(self->size+size_139+1)*2;
        __dec_obj20=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_142)), "libneo-c.c", 1153, "char"));
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_140,old_len_141);
        self->buf[old_len_141]=0;
        self->size=new_size_142;
        old_buf_140 = come_decrement_ref_count2(old_buf_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_138,size_139);
    self->len+=size_139;
    self->buf[self->len]=0;
    __result83__ = __result_obj__ = self;
    return __result83__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result84__;
int len_143;
int new_size_144;
void* __right_value103 = (void*)0;
char* __dec_obj21;
int i_145;
struct buffer* __result85__;
    if(self==((void*)0)) {
        __result84__ = __result_obj__ = ((void*)0);
        return __result84__;
    }
    len_143=self->len;
    len_143=(len_143+3)&~3;
    if(len_143>=self->size) {
        new_size_144=(self->size+1+1)*2;
        __dec_obj21=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_144)), "libneo-c.c", 1177, "char"));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->size=new_size_144;
    }
    for(    i_145=self->len;    i_145<len_143;    i_145++    ){
        self->buf[i_145]=0;
    }
    self->len=len_143;
    __result85__ = __result_obj__ = self;
    return __result85__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
    if(left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else {
        if(left==((void*)0)) {
            return -1;
        }
        else {
            if(right==((void*)0)) {
                return 1;
            }
        }
    }
    return strcmp(left->buf,right->buf);
}

struct buffer* string_to_buffer(char* self){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value105 = (void*)0;
struct buffer* result_146;
struct buffer* __result86__;
struct buffer* __result87__;
    result_146=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value104=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1207, "buffer"))))));
    come_call_finalizer3(__right_value104,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(self==((void*)0)) {
        __result86__ = __result_obj__ = result_146;
        come_call_finalizer3(result_146,buffer_finalize, 0, 0, 1, 0, (void*)0);
        return __result86__;
    }
    buffer_append_str(result_146,self);
    __result87__ = __result_obj__ = result_146;
    come_call_finalizer3(result_146,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result87__;
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__=(void*)0;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
struct buffer* result_147;
struct buffer* __result88__;
struct buffer* __result89__;
    result_147=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value106=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1220, "buffer"))))));
    come_call_finalizer3(__right_value106,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    if(self==((void*)0)) {
        __result88__ = __result_obj__ = result_147;
        come_call_finalizer3(result_147,buffer_finalize, 0, 0, 1, 0, (void*)0);
        return __result88__;
    }
    buffer_append_str(result_147,self);
    __result89__ = __result_obj__ = result_147;
    come_call_finalizer3(result_147,buffer_finalize, 0, 0, 1, 0, (void*)0);
    return __result89__;
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value108 = (void*)0;
char* __result90__;
void* __right_value109 = (void*)0;
char* __result91__;
    if(self==((void*)0)) {
        __result90__ = __result_obj__ = ((char*)(__right_value108=__builtin_string("")));
        __right_value108 = come_decrement_ref_count2(__right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result90__;
    }
    __result91__ = __result_obj__ = ((char*)(__right_value109=__builtin_string(self->buf)));
    __right_value109 = come_decrement_ref_count2(__right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result91__;
}

_Bool bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool int_equals(int self, int right){
    return self==right;
}

_Bool char_equals(char self, char right){
    return self==right;
}

_Bool short_equals(short short self, short short right){
    return self==right;
}

_Bool long_equals(long self, long right){
    return self==right;
}

_Bool size_t_equals(unsigned long int self, unsigned long int right){
    return self==right;
}

_Bool float_equals(float self, float right){
    return self==right;
}

_Bool double_equals(double self, double right){
    return self==right;
}

_Bool string_equals(char* self, char* right){
    if(self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else {
        if(self==((void*)0)) {
            return (_Bool)0;
        }
        else {
            if(right==((void*)0)) {
                return (_Bool)0;
            }
        }
    }
    return strcmp(self,right)==0;
}

_Bool charp_equals(char* self, char* right){
    if(self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else {
        if(self==((void*)0)) {
            return (_Bool)0;
        }
        else {
            if(right==((void*)0)) {
                return (_Bool)0;
            }
        }
    }
    return strcmp(self,right)==0;
}

_Bool string_operator_equals(char* self, char* right){
    if(self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else {
        if(self==((void*)0)) {
            return (_Bool)0;
        }
        else {
            if(right==((void*)0)) {
                return (_Bool)0;
            }
        }
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right){
    if(self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else {
        if(self==((void*)0)) {
            return (_Bool)0;
        }
        else {
            if(right==((void*)0)) {
                return (_Bool)0;
            }
        }
    }
    return strcmp(self,right)==0;
}

_Bool string_operator_not_equals(char* self, char* right){
    if(self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else {
        if(self==((void*)0)) {
            return (_Bool)1;
        }
        else {
            if(right==((void*)0)) {
                return (_Bool)1;
            }
        }
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right){
    if(self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else {
        if(self==((void*)0)) {
            return (_Bool)1;
        }
        else {
            if(right==((void*)0)) {
                return (_Bool)1;
            }
        }
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
char* __result92__;
int len_148;
void* __right_value111 = (void*)0;
char* result_149;
char* __result93__;
    if(self==((void*)0)||right==((void*)0)) {
        __result92__ = __result_obj__ = ((char*)(__right_value110=__builtin_string("")));
        __right_value110 = come_decrement_ref_count2(__right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result92__;
    }
    len_148=strlen(self)+strlen(right);
    result_149=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_148+1)), "libneo-c.c", 1382, "char"));
    strncpy(result_149,self,len_148+1);
    strncat(result_149,right,len_148+1);
    __result93__ = __result_obj__ = result_149;
    result_149 = come_decrement_ref_count2(result_149, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result93__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
void* __right_value112 = (void*)0;
char* __result94__;
int len_150;
void* __right_value113 = (void*)0;
char* result_151;
char* __result95__;
    if(self==((void*)0)||right==((void*)0)) {
        __result94__ = __result_obj__ = ((char*)(__right_value112=__builtin_string("")));
        __right_value112 = come_decrement_ref_count2(__right_value112, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result94__;
    }
    len_150=strlen(self)+strlen(right);
    result_151=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_150+1)), "libneo-c.c", 1397, "char"));
    strncpy(result_151,self,len_150+1);
    strncat(result_151,right,len_150+1);
    __result95__ = __result_obj__ = result_151;
    result_151 = come_decrement_ref_count2(result_151, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result95__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
char* __result96__;
void* __right_value115 = (void*)0;
void* __right_value116 = (void*)0;
struct buffer* buf_152;
int i_153;
void* __right_value117 = (void*)0;
char* __result97__;
    if(self==((void*)0)) {
        __result96__ = __result_obj__ = ((char*)(__right_value114=__builtin_string("")));
        __right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result96__;
    }
    buf_152=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value115=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1410, "buffer"))))));
    come_call_finalizer3(__right_value115,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_153=0;    i_153<right;    i_153++    ){
        buffer_append_str(buf_152,self);
    }
    __result97__ = __result_obj__ = ((char*)(__right_value117=buffer_to_string(buf_152)));
    come_call_finalizer3(buf_152,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result97__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
void* __right_value118 = (void*)0;
char* __result98__;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
struct buffer* buf_154;
int i_155;
void* __right_value121 = (void*)0;
char* __result99__;
    if(self==((void*)0)) {
        __result98__ = __result_obj__ = ((char*)(__right_value118=__builtin_string("")));
        __right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result98__;
    }
    buf_154=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value119=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1424, "buffer"))))));
    come_call_finalizer3(__right_value119,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_155=0;    i_155<right;    i_155++    ){
        buffer_append_str(buf_154,self);
    }
    __result99__ = __result_obj__ = ((char*)(__right_value121=buffer_to_string(buf_154)));
    come_call_finalizer3(buf_154,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value121 = come_decrement_ref_count2(__right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result99__;
}

unsigned int bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int char_get_hash_key(char value){
    return value;
}

unsigned int short_get_hash_key(short int value){
    return value;
}

unsigned int int_get_hash_key(int value){
    return value;
}

unsigned int long_get_hash_key(long value){
    return value;
}

unsigned int size_t_get_hash_key(unsigned long int value){
    return value;
}

unsigned int float_get_hash_key(float value){
    return (unsigned int)value;
}

unsigned int double_get_hash_key(double value){
    return (unsigned int)value;
}

unsigned int string_get_hash_key(char* value){
int result_156;
char* p_157;
    if(value==((void*)0)) {
        return 0;
    }
    result_156=0;
    p_157=value;
    while(*p_157) {
        result_156+=(*p_157);
        p_157++;
    }
    return result_156;
}

unsigned int charp_get_hash_key(char* value){
int result_158;
char* p_159;
    if(value==((void*)0)) {
        return 0;
    }
    result_158=0;
    p_159=value;
    while(*p_159) {
        result_158+=(*p_159);
        p_159++;
    }
    return result_158;
}

_Bool bool_clone(_Bool self){
    return self;
}

char char_clone(char self){
    return self;
}

short int short_clone(short short self){
    return self;
}

int int_clone(int self){
    return self;
}

long int long_clone(long self){
    return self;
}

unsigned long int size_t_clone(unsigned long int self){
    return self;
}

double double_clone(double self){
    return self;
}

float float_clone(float self){
    return self;
}

char* charp_clone(char* self){
void* __result_obj__=(void*)0;
char* __result100__;
void* __right_value122 = (void*)0;
char* __result101__;
    if(self==((void*)0)) {
        __result100__ = __result_obj__ = ((void*)0);
        return __result100__;
    }
    __result101__ = __result_obj__ = ((char*)(__right_value122=__builtin_string(self)));
    __right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result101__;
}

char* string_clone(char* self){
void* __result_obj__=(void*)0;
char* __result102__;
void* __right_value123 = (void*)0;
char* __result103__;
    if(self==((void*)0)) {
        __result102__ = __result_obj__ = ((void*)0);
        return __result102__;
    }
    __result103__ = __result_obj__ = ((char*)(__right_value123=__builtin_string(self)));
    __right_value123 = come_decrement_ref_count2(__right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result103__;
}

_Bool xiswalpha(unsigned int c){
_Bool result_160;
    result_160=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_160;
}

_Bool xiswblank(unsigned int c){
    return c==32||c==9;
}

_Bool xiswdigit(unsigned int c){
    return (c>=48&&c<=57);
}

_Bool xiswalnum(unsigned int c){
    return xiswalpha(c)||xiswdigit(c);
}

_Bool xisalpha(char c){
_Bool result_161;
    result_161=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_161;
}

_Bool xisblank(char c){
    return c==32||c==9;
}

_Bool xisdigit(char c){
    return (c>=48&&c<=57);
}

_Bool xisalnum(char c){
    return xisalpha(c)||xisdigit(c);
}

_Bool xisascii(char c){
_Bool result_162;
    result_162=(c>=32&&c<=126);
    return result_162;
}

_Bool xiswascii(unsigned int c){
_Bool result_163;
    result_163=(c>=32&&c<=126);
    return result_163;
}

int string_length(char* str){
    if(str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

int charp_length(char* str){
    if(str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

char* string_reverse(char* str){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
char* __result104__;
int len_164;
void* __right_value125 = (void*)0;
char* result_165;
int i_166;
char* __result105__;
    if(str==((void*)0)) {
        __result104__ = __result_obj__ = ((char*)(__right_value124=__builtin_string("")));
        __right_value124 = come_decrement_ref_count2(__right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result104__;
    }
    len_164=strlen(str);
    result_165=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_164+1)), "libneo-c.c", 1641, "char"));
    for(    i_166=0;    i_166<len_164;    i_166++    ){
        result_165[i_166]=str[len_164-i_166-1];
    }
    result_165[len_164]=0;
    __result105__ = __result_obj__ = result_165;
    result_165 = come_decrement_ref_count2(result_165, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result105__;
}

char* charp_reverse(char* str){
void* __result_obj__=(void*)0;
void* __right_value126 = (void*)0;
char* __result106__;
int len_167;
void* __right_value127 = (void*)0;
char* result_168;
int i_169;
char* __result107__;
    if(str==((void*)0)) {
        __result106__ = __result_obj__ = ((char*)(__right_value126=__builtin_string("")));
        __right_value126 = come_decrement_ref_count2(__right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result106__;
    }
    len_167=strlen(str);
    result_168=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_167+1)), "libneo-c.c", 1658, "char"));
    for(    i_169=0;    i_169<len_167;    i_169++    ){
        result_168[i_169]=str[len_167-i_169-1];
    }
    result_168[len_167]=0;
    __result107__ = __result_obj__ = result_168;
    result_168 = come_decrement_ref_count2(result_168, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result107__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
char* __result108__;
int len_170;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
char* __result109__;
void* __right_value131 = (void*)0;
char* __result110__;
void* __right_value132 = (void*)0;
char* __result111__;
void* __right_value133 = (void*)0;
char* result_171;
char* __result112__;
    if(str==((void*)0)) {
        __result108__ = __result_obj__ = ((char*)(__right_value128=__builtin_string("")));
        __right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result108__;
    }
    len_170=strlen(str);
    if(head<0) {
        head+=len_170;
    }
    if(tail<0) {
        tail+=len_170+1;
    }
    if(head>tail) {
        __result109__ = __result_obj__ = ((char*)(__right_value130=string_reverse(((char*)(__right_value129=charp_substring(str,tail,head))))));
        __right_value129 = come_decrement_ref_count2(__right_value129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value130 = come_decrement_ref_count2(__right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result109__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_170) {
        tail=len_170;
    }
    if(head==tail) {
        __result110__ = __result_obj__ = ((char*)(__right_value131=__builtin_string("")));
        __right_value131 = come_decrement_ref_count2(__right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result110__;
    }
    if(tail-head+1<1) {
        __result111__ = __result_obj__ = ((char*)(__right_value132=__builtin_string("")));
        __right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result111__;
    }
    result_171=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1703, "char"));
    memcpy(result_171,str+head,tail-head);
    result_171[tail-head]=0;
    __result112__ = __result_obj__ = result_171;
    result_171 = come_decrement_ref_count2(result_171, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result112__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
char* __result113__;
int len_172;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
char* __result114__;
void* __right_value137 = (void*)0;
char* __result115__;
void* __right_value138 = (void*)0;
char* __result116__;
void* __right_value139 = (void*)0;
char* result_173;
char* __result117__;
    if(str==((void*)0)) {
        __result113__ = __result_obj__ = ((char*)(__right_value134=__builtin_string("")));
        __right_value134 = come_decrement_ref_count2(__right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result113__;
    }
    len_172=strlen(str);
    if(head<0) {
        head+=len_172;
    }
    if(tail<0) {
        tail+=len_172+1;
    }
    if(head>tail) {
        __result114__ = __result_obj__ = ((char*)(__right_value136=string_reverse(((char*)(__right_value135=charp_substring(str,tail,head))))));
        __right_value135 = come_decrement_ref_count2(__right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result114__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_172) {
        tail=len_172;
    }
    if(head==tail) {
        __result115__ = __result_obj__ = ((char*)(__right_value137=__builtin_string("")));
        __right_value137 = come_decrement_ref_count2(__right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result115__;
    }
    if(tail-head+1<1) {
        __result116__ = __result_obj__ = ((char*)(__right_value138=__builtin_string("")));
        __right_value138 = come_decrement_ref_count2(__right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result116__;
    }
    result_173=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1746, "char"));
    memcpy(result_173,str+head,tail-head);
    result_173[tail-head]=0;
    __result117__ = __result_obj__ = result_173;
    result_173 = come_decrement_ref_count2(result_173, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result117__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
char* __result118__;
int len_174;
void* __right_value141 = (void*)0;
void* __right_value142 = (void*)0;
char* __result119__;
void* __right_value143 = (void*)0;
char* __result120__;
void* __right_value144 = (void*)0;
char* __result121__;
void* __right_value145 = (void*)0;
char* result_175;
char* __result122__;
    if(str==((void*)0)) {
        __result118__ = __result_obj__ = ((char*)(__right_value140=__builtin_string("")));
        __right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result118__;
    }
    len_174=strlen(str);
    if(head<0) {
        head+=len_174;
    }
    if(tail<0) {
        tail+=len_174+1;
    }
    if(head>tail) {
        __result119__ = __result_obj__ = ((char*)(__right_value142=string_reverse(((char*)(__right_value141=charp_substring(str,tail,head))))));
        __right_value141 = come_decrement_ref_count2(__right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value142 = come_decrement_ref_count2(__right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result119__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_174) {
        tail=len_174;
    }
    if(head==tail) {
        __result120__ = __result_obj__ = ((char*)(__right_value143=__builtin_string("")));
        __right_value143 = come_decrement_ref_count2(__right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result120__;
    }
    if(tail-head+1<1) {
        __result121__ = __result_obj__ = ((char*)(__right_value144=__builtin_string("")));
        __right_value144 = come_decrement_ref_count2(__right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result121__;
    }
    result_175=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1789, "char"));
    memcpy(result_175,str+head,tail-head);
    result_175[tail-head]=0;
    __result122__ = __result_obj__ = result_175;
    result_175 = come_decrement_ref_count2(result_175, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result122__;
}

char* string_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value146 = (void*)0;
char* __result123__;
int len_176;
void* __right_value147 = (void*)0;
void* __right_value148 = (void*)0;
char* __result124__;
void* __right_value149 = (void*)0;
char* __result125__;
void* __right_value150 = (void*)0;
char* __result126__;
void* __right_value151 = (void*)0;
char* result_177;
char* __result127__;
    if(str==((void*)0)) {
        __result123__ = __result_obj__ = ((char*)(__right_value146=__builtin_string("")));
        __right_value146 = come_decrement_ref_count2(__right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result123__;
    }
    len_176=strlen(str);
    if(head<0) {
        head+=len_176;
    }
    if(tail<0) {
        tail+=len_176+1;
    }
    if(head>tail) {
        __result124__ = __result_obj__ = ((char*)(__right_value148=string_reverse(((char*)(__right_value147=charp_substring(str,tail,head))))));
        __right_value147 = come_decrement_ref_count2(__right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value148 = come_decrement_ref_count2(__right_value148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result124__;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len_176) {
        tail=len_176;
    }
    if(head==tail) {
        __result125__ = __result_obj__ = ((char*)(__right_value149=__builtin_string("")));
        __right_value149 = come_decrement_ref_count2(__right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result125__;
    }
    if(tail-head+1<1) {
        __result126__ = __result_obj__ = ((char*)(__right_value150=__builtin_string("")));
        __right_value150 = come_decrement_ref_count2(__right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result126__;
    }
    result_177=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "libneo-c.c", 1832, "char"));
    memcpy(result_177,str+head,tail-head);
    result_177[tail-head]=0;
    __result127__ = __result_obj__ = result_177;
    result_177 = come_decrement_ref_count2(result_177, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result127__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value152 = (void*)0;
char* __result128__;
va_list args_178;
char* result_179;
int len_180;
void* __right_value153 = (void*)0;
char* __result129__;
void* __right_value154 = (void*)0;
char* result2_181;
char* __result130__;
memset(&args_178, 0, sizeof(va_list));
result_179 = (void*)0;
    if(msg==((void*)0)) {
        __result128__ = __result_obj__ = ((char*)(__right_value152=__builtin_string("")));
        __right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result128__;
    }
    __builtin_va_start(args_178,msg);
    len_180=vasprintf(&result_179,msg,args_178);
    __builtin_va_end(args_178);
    if(len_180<0) {
        __result129__ = __result_obj__ = ((char*)(__right_value153=__builtin_string("")));
        come_call_finalizer3((&args_178),va_list_finalize, 1, 0, 0, 0, (void*)0);
        __right_value153 = come_decrement_ref_count2(__right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result129__;
    }
    result2_181=(char*)come_increment_ref_count(__builtin_string(result_179));
    free(result_179);
    __result130__ = __result_obj__ = result2_181;
    come_call_finalizer3((&args_178),va_list_finalize, 1, 0, 0, 0, (void*)0);
    result2_181 = come_decrement_ref_count2(result2_181, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result130__;
}

static void va_list_finalize(va_list self){
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value155 = (void*)0;
char* __result131__;
int len_182;
void* __right_value156 = (void*)0;
char* __result132__;
void* __right_value157 = (void*)0;
char* __result133__;
void* __right_value158 = (void*)0;
char* sub_str_183;
void* __right_value159 = (void*)0;
char* __result134__;
    if(str==((void*)0)) {
        __result131__ = __result_obj__ = ((char*)(__right_value155=__builtin_string("")));
        __right_value155 = come_decrement_ref_count2(__right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result131__;
    }
    len_182=strlen(str);
    if(strcmp(str,"")==0) {
        __result132__ = __result_obj__ = ((char*)(__right_value156=__builtin_string(str)));
        __right_value156 = come_decrement_ref_count2(__right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result132__;
    }
    if(head<0) {
        head+=len_182;
    }
    if(tail<0) {
        tail+=len_182+1;
    }
    if(head<0) {
        head=0;
    }
    if(tail<0) {
        __result133__ = __result_obj__ = ((char*)(__right_value157=__builtin_string(str)));
        __right_value157 = come_decrement_ref_count2(__right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result133__;
    }
    if(tail>=len_182) {
        tail=len_182;
    }
    sub_str_183=(char*)come_increment_ref_count(charp_substring(str,tail,-1));
    memcpy(str+head,sub_str_183,string_length(sub_str_183)+1);
    __result134__ = __result_obj__ = ((char*)(__right_value159=__builtin_string(str)));
    sub_str_183 = come_decrement_ref_count2(sub_str_183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value159 = come_decrement_ref_count2(__right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result134__;
}

char* string_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value160 = (void*)0;
char* __result135__;
int len_184;
void* __right_value161 = (void*)0;
char* __result136__;
void* __right_value162 = (void*)0;
char* __result137__;
void* __right_value163 = (void*)0;
char* sub_str_185;
void* __right_value164 = (void*)0;
char* __result138__;
    if(str==((void*)0)) {
        __result135__ = __result_obj__ = ((char*)(__right_value160=__builtin_string("")));
        __right_value160 = come_decrement_ref_count2(__right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result135__;
    }
    len_184=strlen(str);
    if(strcmp(str,"")==0) {
        __result136__ = __result_obj__ = ((char*)(__right_value161=__builtin_string(str)));
        __right_value161 = come_decrement_ref_count2(__right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result136__;
    }
    if(head<0) {
        head+=len_184;
    }
    if(tail<0) {
        tail+=len_184+1;
    }
    if(head<0) {
        head=0;
    }
    if(tail<0) {
        __result137__ = __result_obj__ = ((char*)(__right_value162=__builtin_string(str)));
        __right_value162 = come_decrement_ref_count2(__right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result137__;
    }
    if(tail>=len_184) {
        tail=len_184;
    }
    sub_str_185=(char*)come_increment_ref_count(charp_substring(str,tail,-1));
    memcpy(str+head,sub_str_185,string_length(sub_str_185)+1);
    __result138__ = __result_obj__ = ((char*)(__right_value164=__builtin_string(str)));
    sub_str_185 = come_decrement_ref_count2(sub_str_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value164 = come_decrement_ref_count2(__right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result138__;
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__=(void*)0;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
struct list$1charph* __result140__;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
struct list$1charph* result_188;
void* __right_value169 = (void*)0;
void* __right_value170 = (void*)0;
struct buffer* str_189;
int i_190;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
struct list$1charph* __result142__;
    if(self==((void*)0)) {
        __result140__ = __result_obj__ = ((struct list$1charph*)(__right_value166=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value165=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 1943, "list$1charph")))))));
        come_call_finalizer3(__right_value165,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value166,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        return __result140__;
    }
    result_188=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value167=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 1946, "list$1charph"))))));
    come_call_finalizer3(__right_value167,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    str_189=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value169=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1948, "buffer"))))));
    come_call_finalizer3(__right_value169,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_190=0;    i_190<charp_length(self);    i_190++    ){
        if(self[i_190]==c) {
            list$1charph_push_back(result_188,(char*)come_increment_ref_count(((char*)(__right_value174=__builtin_string(str_189->buf)))));
            __right_value174 = come_decrement_ref_count2(__right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_reset(str_189);
        }
        else {
            buffer_append_char(str_189,self[i_190]);
        }
    }
    if(buffer_length(str_189)!=0) {
        list$1charph_push_back(result_188,(char*)come_increment_ref_count(((char*)(__right_value175=__builtin_string(str_189->buf)))));
        __right_value175 = come_decrement_ref_count2(__right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result142__ = __result_obj__ = result_188;
    come_call_finalizer3(result_188,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(str_189,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result142__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result139__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result139__ = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result139__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_186;
struct list_item$1charph* prev_it_187;
    it_186=self->head;
    while(it_186!=((void*)0)) {
        prev_it_187=it_186;
        it_186=it_186->next;
        come_call_finalizer3(prev_it_187,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value171 = (void*)0;
struct list_item$1charph* litem_191;
char* __dec_obj22;
void* __right_value172 = (void*)0;
struct list_item$1charph* litem_192;
char* __dec_obj23;
void* __right_value173 = (void*)0;
struct list_item$1charph* litem_193;
char* __dec_obj24;
struct list$1charph* __result141__;
    if(self->len==0) {
        litem_191=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value171=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 219, "list_item$1charph"))));
        come_call_finalizer3(__right_value171,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        litem_191->prev=((void*)0);
        litem_191->next=((void*)0);
        __dec_obj22=litem_191->item;
        litem_191->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_191;
        self->head=litem_191;
    }
    else {
        if(self->len==1) {
            litem_192=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value172=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 229, "list_item$1charph"))));
            come_call_finalizer3(__right_value172,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_192->prev=self->head;
            litem_192->next=((void*)0);
            __dec_obj23=litem_192->item;
            litem_192->item=(char*)come_increment_ref_count(item);
            __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_192;
            self->head->next=litem_192;
        }
        else {
            litem_193=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value173=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./neo-c.h", 239, "list_item$1charph"))));
            come_call_finalizer3(__right_value173,list_item$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            litem_193->prev=self->tail;
            litem_193->next=((void*)0);
            __dec_obj24=litem_193->item;
            litem_193->item=(char*)come_increment_ref_count(item);
            __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_193;
            self->tail=litem_193;
        }
    }
    self->len++;
    __result141__ = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result141__;
}

struct list$1charph* string_split_char(char* self, char c){
void* __result_obj__=(void*)0;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
struct list$1charph* __result143__;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
struct list$1charph* result_194;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
struct buffer* str_195;
int i_196;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
struct list$1charph* __result144__;
    if(self==((void*)0)) {
        __result143__ = __result_obj__ = ((struct list$1charph*)(__right_value177=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value176=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 1969, "list$1charph")))))));
        come_call_finalizer3(__right_value176,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value177,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        return __result143__;
    }
    result_194=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value178=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 1972, "list$1charph"))))));
    come_call_finalizer3(__right_value178,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    str_195=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value180=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 1974, "buffer"))))));
    come_call_finalizer3(__right_value180,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    for(    i_196=0;    i_196<charp_length(self);    i_196++    ){
        if(self[i_196]==c) {
            list$1charph_push_back(result_194,(char*)come_increment_ref_count(((char*)(__right_value182=__builtin_string(str_195->buf)))));
            __right_value182 = come_decrement_ref_count2(__right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_reset(str_195);
        }
        else {
            buffer_append_char(str_195,self[i_196]);
        }
    }
    if(buffer_length(str_195)!=0) {
        list$1charph_push_back(result_194,(char*)come_increment_ref_count(((char*)(__right_value183=__builtin_string(str_195->buf)))));
        __right_value183 = come_decrement_ref_count2(__right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result144__ = __result_obj__ = result_194;
    come_call_finalizer3(result_194,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(str_195,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result144__;
}

char* xbasename(char* path){
void* __result_obj__=(void*)0;
void* __right_value184 = (void*)0;
char* __result145__;
char* p_197;
void* __right_value185 = (void*)0;
char* __result146__;
void* __right_value186 = (void*)0;
char* __result147__;
void* __right_value187 = (void*)0;
char* __result148__;
    if(path==((void*)0)) {
        __result145__ = __result_obj__ = ((char*)(__right_value184=__builtin_string("")));
        __right_value184 = come_decrement_ref_count2(__right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result145__;
    }
    p_197=path+strlen(path);
    while(p_197>=path) {
        if(*p_197==47) {
            break;
        }
        else {
            p_197--;
        }
    }
    if(p_197<path) {
        __result146__ = __result_obj__ = ((char*)(__right_value185=__builtin_string(path)));
        __right_value185 = come_decrement_ref_count2(__right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result146__;
    }
    else {
        __result147__ = __result_obj__ = ((char*)(__right_value186=__builtin_string(p_197+1)));
        __right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result147__;
    }
    __result148__ = __result_obj__ = ((char*)(__right_value187=__builtin_string("")));
    __right_value187 = come_decrement_ref_count2(__right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result148__;
}

char* xnoextname(char* path){
void* __result_obj__=(void*)0;
void* __right_value188 = (void*)0;
char* __result149__;
void* __right_value189 = (void*)0;
char* path2_198;
char* p_199;
void* __right_value190 = (void*)0;
char* __result150__;
void* __right_value191 = (void*)0;
char* __result151__;
void* __right_value192 = (void*)0;
char* __result152__;
    if(path==((void*)0)) {
        __result149__ = __result_obj__ = ((char*)(__right_value188=__builtin_string("")));
        __right_value188 = come_decrement_ref_count2(__right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result149__;
    }
    path2_198=(char*)come_increment_ref_count(xbasename(path));
    p_199=path2_198+strlen(path2_198);
    while(p_199>=path2_198) {
        if(*p_199==46) {
            break;
        }
        else {
            p_199--;
        }
    }
    if(p_199<path2_198) {
        __result150__ = __result_obj__ = ((char*)(__right_value190=__builtin_string(path2_198)));
        path2_198 = come_decrement_ref_count2(path2_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value190 = come_decrement_ref_count2(__right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result150__;
    }
    else {
        __result151__ = __result_obj__ = ((char*)(__right_value191=string_substring(path2_198,0,p_199-path2_198)));
        path2_198 = come_decrement_ref_count2(path2_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value191 = come_decrement_ref_count2(__right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result151__;
    }
    __result152__ = __result_obj__ = ((char*)(__right_value192=__builtin_string("")));
    path2_198 = come_decrement_ref_count2(path2_198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value192 = come_decrement_ref_count2(__right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result152__;
}

char* xextname(char* path){
void* __result_obj__=(void*)0;
void* __right_value193 = (void*)0;
char* __result153__;
char* p_200;
void* __right_value194 = (void*)0;
char* __result154__;
void* __right_value195 = (void*)0;
char* __result155__;
void* __right_value196 = (void*)0;
char* __result156__;
    if(path==((void*)0)) {
        __result153__ = __result_obj__ = ((char*)(__right_value193=__builtin_string("")));
        __right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result153__;
    }
    p_200=path+strlen(path);
    while(p_200>=path) {
        if(*p_200==46) {
            break;
        }
        else {
            p_200--;
        }
    }
    if(p_200<path) {
        __result154__ = __result_obj__ = ((char*)(__right_value194=__builtin_string(path)));
        __right_value194 = come_decrement_ref_count2(__right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result154__;
    }
    else {
        __result155__ = __result_obj__ = ((char*)(__right_value195=__builtin_string(p_200+1)));
        __right_value195 = come_decrement_ref_count2(__right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result155__;
    }
    __result156__ = __result_obj__ = ((char*)(__right_value196=__builtin_string("")));
    __right_value196 = come_decrement_ref_count2(__right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result156__;
}

char* bool_to_string(_Bool self){
void* __result_obj__=(void*)0;
void* __right_value197 = (void*)0;
char* __result157__;
void* __right_value198 = (void*)0;
char* __result158__;
    if(self) {
        __result157__ = __result_obj__ = ((char*)(__right_value197=__builtin_string("true")));
        __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result157__;
    }
    else {
        __result158__ = __result_obj__ = ((char*)(__right_value198=__builtin_string("false")));
        __right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result158__;
    }
}

char* char_to_string(char self){
void* __result_obj__=(void*)0;
void* __right_value199 = (void*)0;
char* __result159__;
    __result159__ = __result_obj__ = ((char*)(__right_value199=xsprintf("%c",self)));
    __right_value199 = come_decrement_ref_count2(__right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result159__;
}

char* short_to_string(short short self){
void* __result_obj__=(void*)0;
void* __right_value200 = (void*)0;
char* __result160__;
    __result160__ = __result_obj__ = ((char*)(__right_value200=xsprintf("%d",self)));
    __right_value200 = come_decrement_ref_count2(__right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result160__;
}

char* int_to_string(int self){
void* __result_obj__=(void*)0;
void* __right_value201 = (void*)0;
char* __result161__;
    __result161__ = __result_obj__ = ((char*)(__right_value201=xsprintf("%d",self)));
    __right_value201 = come_decrement_ref_count2(__right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result161__;
}

char* long_to_string(long self){
void* __result_obj__=(void*)0;
void* __right_value202 = (void*)0;
char* __result162__;
    __result162__ = __result_obj__ = ((char*)(__right_value202=xsprintf("%ld",self)));
    __right_value202 = come_decrement_ref_count2(__right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result162__;
}

char* size_t_to_string(unsigned long int self){
void* __result_obj__=(void*)0;
void* __right_value203 = (void*)0;
char* __result163__;
    __result163__ = __result_obj__ = ((char*)(__right_value203=xsprintf("%ld",self)));
    __right_value203 = come_decrement_ref_count2(__right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result163__;
}

char* float_to_string(float self){
void* __result_obj__=(void*)0;
void* __right_value204 = (void*)0;
char* __result164__;
    __result164__ = __result_obj__ = ((char*)(__right_value204=xsprintf("%f",self)));
    __right_value204 = come_decrement_ref_count2(__right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result164__;
}

char* double_to_string(double self){
void* __result_obj__=(void*)0;
void* __right_value205 = (void*)0;
char* __result165__;
    __result165__ = __result_obj__ = ((char*)(__right_value205=xsprintf("%lf",self)));
    __right_value205 = come_decrement_ref_count2(__right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result165__;
}

char* string_to_string(char* self){
void* __result_obj__=(void*)0;
void* __right_value206 = (void*)0;
char* __result166__;
void* __right_value207 = (void*)0;
char* __result167__;
    if(self==((void*)0)) {
        __result166__ = __result_obj__ = ((char*)(__right_value206=__builtin_string("")));
        __right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result166__;
    }
    __result167__ = __result_obj__ = ((char*)(__right_value207=__builtin_string(self)));
    __right_value207 = come_decrement_ref_count2(__right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result167__;
}

char* charp_to_string(char* self){
void* __result_obj__=(void*)0;
void* __right_value208 = (void*)0;
char* __result168__;
void* __right_value209 = (void*)0;
char* __result169__;
    if(self==((void*)0)) {
        __result168__ = __result_obj__ = ((char*)(__right_value208=__builtin_string("")));
        __right_value208 = come_decrement_ref_count2(__right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result168__;
    }
    __result169__ = __result_obj__ = ((char*)(__right_value209=__builtin_string(self)));
    __right_value209 = come_decrement_ref_count2(__right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result169__;
}

int bool_compare(_Bool left, _Bool right){
    if(!left&&right) {
        return -1;
    }
    else {
        if(left&&right) {
            return 0;
        }
        else {
            if(!left&&!right) {
                return 0;
            }
            else {
                return 1;
            }
        }
    }
    return 0;
}

int char_compare(char left, char right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int short_compare(short short left, short short right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int int_compare(int left, int right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int long_compare(long left, long right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int size_t_compare(unsigned long int left, unsigned long int right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int float_compare(float left, float right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int double_compare(double left, double right){
    if(left<right) {
        return -1;
    }
    else {
        if(left>right) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

int string_compare(char* left, char* right){
    if(left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else {
        if(left==((void*)0)) {
            return -1;
        }
        else {
            if(right==((void*)0)) {
                return 1;
            }
        }
    }
    return strcmp(left,right);
}

int charp_compare(char* left, char* right){
    if(left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else {
        if(left==((void*)0)) {
            return -1;
        }
        else {
            if(right==((void*)0)) {
                return 1;
            }
        }
    }
    return strcmp(left,right);
}

char* FILE_read(struct _IO_FILE* f){
void* __result_obj__=(void*)0;
void* __right_value210 = (void*)0;
char* __result170__;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct buffer* buf_201;
int size_203;
void* __right_value213 = (void*)0;
char* __result171__;
    if(f==((void*)0)) {
        __result170__ = __result_obj__ = ((char*)(__right_value210=__builtin_string("")));
        __right_value210 = come_decrement_ref_count2(__right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result170__;
    }
    buf_201=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value211=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2304, "buffer"))))));
    come_call_finalizer3(__right_value211,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while(1) {
        char buf2_202[1024];
        memset(&buf2_202, 0, sizeof(char)        *(1024)        );
        size_203=fread(buf2_202,1,1024,f);
        buffer_append(buf_201,buf2_202,size_203);
        if(size_203<1024) {
            break;
        }
    }
    __result171__ = __result_obj__ = ((char*)(__right_value213=buffer_to_string(buf_201)));
    come_call_finalizer3(buf_201,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value213 = come_decrement_ref_count2(__right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result171__;
}

int FILE_write(struct _IO_FILE* f, char* str){
    if(f==((void*)0)||str==((void*)0)) {
        return -1;
    }
    return fwrite(str,strlen(str),1,f);
}

int FILE_fclose(struct _IO_FILE* f){
int result_204;
    if(f==((void*)0)) {
        return -1;
    }
    result_204=fclose(f);
    if(result_204<0) {
        return result_204;
    }
    return result_204;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__=(void*)0;
struct _IO_FILE* __result172__;
va_list args_206;
int result_207;
struct _IO_FILE* __result173__;
struct _IO_FILE* __result174__;
memset(&args_206, 0, sizeof(va_list));
    if(f==((void*)0)||msg==((void*)0)) {
        __result172__ = __result_obj__ = f;
        return __result172__;
    }
    char msg2_205[1024*2*2*2];
    memset(&msg2_205, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_206,msg);
    vsnprintf(msg2_205,1024*2*2*2,msg,args_206);
    __builtin_va_end(args_206);
    result_207=fprintf(f,"%s",msg2_205);
    if(result_207<0) {
        __result173__ = __result_obj__ = f;
        come_call_finalizer3((&args_206),va_list_finalize, 1, 0, 0, 0, (void*)0);
        return __result173__;
    }
    __result174__ = __result_obj__ = f;
    come_call_finalizer3((&args_206),va_list_finalize, 1, 0, 0, 0, (void*)0);
    return __result174__;
}

int string_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_208;
int result_209;
int result2_210;
f_208 = (void*)0;
    if(self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(append) {
        f_208=fopen(file_name,"a");
    }
    else {
        f_208=fopen(file_name,"w");
    }
    if(f_208==((void*)0)) {
        return -1;
    }
    result_209=fwrite(self,strlen(self),1,f_208);
    if(result_209<0) {
        return result_209;
    }
    result2_210=fclose(f_208);
    if(result2_210<0) {
        return result2_210;
    }
    return result_209;
}

int charp_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_211;
int result_212;
int result2_213;
f_211 = (void*)0;
    if(self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(append) {
        f_211=fopen(file_name,"a");
    }
    else {
        f_211=fopen(file_name,"w");
    }
    if(f_211==((void*)0)) {
        return -1;
    }
    result_212=fwrite(self,strlen(self),1,f_211);
    if(result_212<0) {
        return result_212;
    }
    result2_213=fclose(f_211);
    if(result2_213<0) {
        return result2_213;
    }
    return result_212;
}

char* string_read(char* file_name){
void* __result_obj__=(void*)0;
void* __right_value214 = (void*)0;
char* __result175__;
struct _IO_FILE* f_214;
void* __right_value215 = (void*)0;
char* __result176__;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct buffer* buf_215;
int size_217;
void* __right_value218 = (void*)0;
char* result_218;
int result2_219;
void* __right_value219 = (void*)0;
char* __result177__;
char* __result178__;
    if(file_name==((void*)0)) {
        __result175__ = __result_obj__ = ((char*)(__right_value214=__builtin_string("")));
        __right_value214 = come_decrement_ref_count2(__right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result175__;
    }
    f_214=fopen(file_name,"r");
    if(f_214==((void*)0)) {
        __result176__ = __result_obj__ = ((char*)(__right_value215=__builtin_string("")));
        __right_value215 = come_decrement_ref_count2(__right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result176__;
    }
    buf_215=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value216=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2444, "buffer"))))));
    come_call_finalizer3(__right_value216,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while(1) {
        char buf2_216[1024];
        memset(&buf2_216, 0, sizeof(char)        *(1024)        );
        size_217=fread(buf2_216,1,1024,f_214);
        buffer_append(buf_215,buf2_216,size_217);
        if(size_217<1024) {
            break;
        }
    }
    result_218=(char*)come_increment_ref_count(buffer_to_string(buf_215));
    result2_219=fclose(f_214);
    if(result2_219<0) {
        __result177__ = __result_obj__ = ((char*)(__right_value219=__builtin_string("")));
        come_call_finalizer3(buf_215,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_218 = come_decrement_ref_count2(result_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value219 = come_decrement_ref_count2(__right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result177__;
    }
    __result178__ = __result_obj__ = result_218;
    come_call_finalizer3(buf_215,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_218 = come_decrement_ref_count2(result_218, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result178__;
}

char* charp_read(char* file_name){
void* __result_obj__=(void*)0;
void* __right_value220 = (void*)0;
char* __result179__;
struct _IO_FILE* f_220;
void* __right_value221 = (void*)0;
char* __result180__;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct buffer* buf_221;
int size_223;
void* __right_value224 = (void*)0;
char* result_224;
int result2_225;
void* __right_value225 = (void*)0;
char* __result181__;
char* __result182__;
    if(file_name==((void*)0)) {
        __result179__ = __result_obj__ = ((char*)(__right_value220=__builtin_string("")));
        __right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result179__;
    }
    f_220=fopen(file_name,"r");
    if(f_220==((void*)0)) {
        __result180__ = __result_obj__ = ((char*)(__right_value221=__builtin_string("")));
        __right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result180__;
    }
    buf_221=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(__right_value222=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "libneo-c.c", 2481, "buffer"))))));
    come_call_finalizer3(__right_value222,buffer_finalize, 0, 1, 0, 0, __result_obj__);
    while(1) {
        char buf2_222[1024];
        memset(&buf2_222, 0, sizeof(char)        *(1024)        );
        size_223=fread(buf2_222,1,1024,f_220);
        buffer_append(buf_221,buf2_222,size_223);
        if(size_223<1024) {
            break;
        }
    }
    result_224=(char*)come_increment_ref_count(buffer_to_string(buf_221));
    result2_225=fclose(f_220);
    if(result2_225<0) {
        __result181__ = __result_obj__ = ((char*)(__right_value225=__builtin_string("")));
        come_call_finalizer3(buf_221,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_224 = come_decrement_ref_count2(result_224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value225 = come_decrement_ref_count2(__right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result181__;
    }
    __result182__ = __result_obj__ = result_224;
    come_call_finalizer3(buf_221,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_224 = come_decrement_ref_count2(result_224, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    return __result182__;
}

struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__=(void*)0;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
struct list$1charph* result_226;
struct list$1charph* __result183__;
void* __right_value228 = (void*)0;
struct list$1charph* __result184__;
    result_226=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(__right_value226=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "libneo-c.c", 2508, "list$1charph"))))));
    come_call_finalizer3(__right_value226,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(f==((void*)0)) {
        __result183__ = __result_obj__ = result_226;
        come_call_finalizer3(result_226,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        return __result183__;
    }
    while(1) {
        char buf_227[1024];
        memset(&buf_227, 0, sizeof(char)        *(1024)        );
        if(fgets(buf_227,1024,f)==((void*)0)) {
            break;
        }
        list$1charph_push_back(result_226,(char*)come_increment_ref_count(((char*)(__right_value228=__builtin_string(buf_227)))));
        __right_value228 = come_decrement_ref_count2(__right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    }
    __result184__ = __result_obj__ = result_226;
    come_call_finalizer3(result_226,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    return __result184__;
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
struct _IO_FILE* f_228;
    if(path==((void*)0)||mode==((void*)0)) {
        return -1;
    }
    f_228=fopen(path,mode);
    if(f_228) {
        block(parent,f_228);
        fclose(f_228);
        return 0;
    }
    return -1;
}

char* charp_puts(char* self){
void* __result_obj__=(void*)0;
void* __right_value229 = (void*)0;
char* __result185__;
void* __right_value230 = (void*)0;
char* __result186__;
    if(self==((void*)0)) {
        __result185__ = __result_obj__ = ((char*)(__right_value229=__builtin_string("")));
        __right_value229 = come_decrement_ref_count2(__right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result185__;
    }
    puts(self);
    __result186__ = __result_obj__ = ((char*)(__right_value230=__builtin_string(self)));
    __right_value230 = come_decrement_ref_count2(__right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result186__;
}

char* charp_print(char* self){
void* __result_obj__=(void*)0;
void* __right_value231 = (void*)0;
char* __result187__;
void* __right_value232 = (void*)0;
char* __result188__;
    if(self==((void*)0)) {
        __result187__ = __result_obj__ = ((char*)(__right_value231=__builtin_string("")));
        __right_value231 = come_decrement_ref_count2(__right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result187__;
    }
    printf("%s",self);
    __result188__ = __result_obj__ = ((char*)(__right_value232=__builtin_string(self)));
    __right_value232 = come_decrement_ref_count2(__right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result188__;
}

char* string_printf(char* self, ...){
void* __result_obj__=(void*)0;
void* __right_value233 = (void*)0;
char* __result189__;
char* msg2_229;
va_list args_230;
void* __right_value234 = (void*)0;
char* __result190__;
msg2_229 = (void*)0;
memset(&args_230, 0, sizeof(va_list));
    if(self==((void*)0)) {
        __result189__ = __result_obj__ = ((char*)(__right_value233=__builtin_string("")));
        __right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result189__;
    }
    __builtin_va_start(args_230,self);
    vasprintf(&msg2_229,self,args_230);
    __builtin_va_end(args_230);
    printf("%s",msg2_229);
    free(msg2_229);
    __result190__ = __result_obj__ = ((char*)(__right_value234=__builtin_string(self)));
    come_call_finalizer3((&args_230),va_list_finalize, 1, 0, 0, 0, (void*)0);
    __right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result190__;
}

char* charp_printf(char* self, ...){
void* __result_obj__=(void*)0;
void* __right_value235 = (void*)0;
char* __result191__;
char* msg2_231;
va_list args_232;
void* __right_value236 = (void*)0;
char* __result192__;
msg2_231 = (void*)0;
memset(&args_232, 0, sizeof(va_list));
    if(self==((void*)0)) {
        __result191__ = __result_obj__ = ((char*)(__right_value235=__builtin_string("")));
        __right_value235 = come_decrement_ref_count2(__right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result191__;
    }
    __builtin_va_start(args_232,self);
    vasprintf(&msg2_231,self,args_232);
    __builtin_va_end(args_232);
    printf("%s",msg2_231);
    free(msg2_231);
    __result192__ = __result_obj__ = ((char*)(__right_value236=__builtin_string(self)));
    come_call_finalizer3((&args_232),va_list_finalize, 1, 0, 0, 0, (void*)0);
    __right_value236 = come_decrement_ref_count2(__right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result192__;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

char* string_puts(char* self){
void* __result_obj__=(void*)0;
void* __right_value237 = (void*)0;
char* __result193__;
void* __right_value238 = (void*)0;
char* __result194__;
    if(self==((void*)0)) {
        __result193__ = __result_obj__ = ((char*)(__right_value237=__builtin_string("")));
        __right_value237 = come_decrement_ref_count2(__right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        return __result193__;
    }
    puts(self);
    __result194__ = __result_obj__ = ((char*)(__right_value238=__builtin_string(self)));
    __right_value238 = come_decrement_ref_count2(__right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result194__;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_233;
    for(    i_233=0;    i_233<self;    i_233++    ){
        block(parent,i_233);
    }
}

struct integer* integer_initialize(struct integer* self, long value){
void* __result_obj__=(void*)0;
struct integer* __result195__;
    self->value=value;
    __result195__ = __result_obj__ = self;
    come_call_finalizer3(self,integer_finalize, 0, 0, 1, 0, (void*)0);
    return __result195__;
}

static void integer_finalize(struct integer* self){
}

int integer_to_int(struct integer* self){
    return self->value;
}

struct integer* char_to_integer(char self){
void* __result_obj__=(void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct integer* __result196__;
    __result196__ = __result_obj__ = ((struct integer*)(__right_value240=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(__right_value239=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2651, "integer")))),self)));
    come_call_finalizer3(__right_value239,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value240,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result196__;
}

struct integer* short_to_integer(short short self){
void* __result_obj__=(void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct integer* __result197__;
    __result197__ = __result_obj__ = ((struct integer*)(__right_value242=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(__right_value241=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2656, "integer")))),self)));
    come_call_finalizer3(__right_value241,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value242,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result197__;
}

struct integer* int_to_integer(int self){
void* __result_obj__=(void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct integer* __result198__;
    __result198__ = __result_obj__ = ((struct integer*)(__right_value244=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(__right_value243=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2661, "integer")))),self)));
    come_call_finalizer3(__right_value243,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value244,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result198__;
}

struct integer* long_to_integer(long self){
void* __result_obj__=(void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct integer* __result199__;
    __result199__ = __result_obj__ = ((struct integer*)(__right_value246=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(__right_value245=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2666, "integer")))),self)));
    come_call_finalizer3(__right_value245,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value246,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result199__;
}

int integer_compare(struct integer* left, struct integer* right){
    if(left->value<right->value) {
        return -1;
    }
    else {
        if(left->value>right->value) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

_Bool integer_equals(struct integer* self, struct integer* right){
    return self->value==right->value;
}

_Bool integer_operator_equals(struct integer* self, struct integer* right){
    return self->value==right->value;
}

_Bool integer_operator_not_equals(struct integer* self, struct integer* right){
    return self->value!=right->value;
}

struct integer* integer_operator_add(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct integer* __result200__;
    __result200__ = __result_obj__ = ((struct integer*)(__right_value248=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(__right_value247=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2701, "integer")))),left->value+right->value)));
    come_call_finalizer3(__right_value247,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value248,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result200__;
}

struct integer* integer_operator_sub(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct integer* __result201__;
    __result201__ = __result_obj__ = ((struct integer*)(__right_value250=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(__right_value249=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2706, "integer")))),left->value-right->value)));
    come_call_finalizer3(__right_value249,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value250,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result201__;
}

struct integer* integer_operator_mult(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct integer* __result202__;
    __result202__ = __result_obj__ = ((struct integer*)(__right_value252=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(__right_value251=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2711, "integer")))),left->value*right->value)));
    come_call_finalizer3(__right_value251,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value252,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result202__;
}

struct integer* integer_operator_div(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct integer* __result203__;
    __result203__ = __result_obj__ = ((struct integer*)(__right_value254=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(__right_value253=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2716, "integer")))),left->value/right->value)));
    come_call_finalizer3(__right_value253,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value254,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result203__;
}

struct integer* integer_operator_mod(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct integer* __result204__;
    __result204__ = __result_obj__ = ((struct integer*)(__right_value256=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(__right_value255=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2721, "integer")))),left->value%right->value)));
    come_call_finalizer3(__right_value255,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value256,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result204__;
}

struct integer* integer_operator_lshift(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct integer* __result205__;
    __result205__ = __result_obj__ = ((struct integer*)(__right_value258=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(__right_value257=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2726, "integer")))),left->value<<right->value)));
    come_call_finalizer3(__right_value257,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value258,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result205__;
}

struct integer* integer_operator_rshift(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct integer* __result206__;
    __result206__ = __result_obj__ = ((struct integer*)(__right_value260=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(__right_value259=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2731, "integer")))),left->value>>right->value)));
    come_call_finalizer3(__right_value259,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value260,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result206__;
}

struct integer* integer_operator_gteq(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct integer* __result207__;
    __result207__ = __result_obj__ = ((struct integer*)(__right_value262=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(__right_value261=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2736, "integer")))),left->value>=right->value)));
    come_call_finalizer3(__right_value261,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value262,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result207__;
}

struct integer* integer_operator_lteq(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct integer* __result208__;
    __result208__ = __result_obj__ = ((struct integer*)(__right_value264=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(__right_value263=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2741, "integer")))),left->value<=right->value)));
    come_call_finalizer3(__right_value263,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value264,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result208__;
}

struct integer* integer_operator_lt(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct integer* __result209__;
    __result209__ = __result_obj__ = ((struct integer*)(__right_value266=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(__right_value265=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2746, "integer")))),left->value<right->value)));
    come_call_finalizer3(__right_value265,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value266,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result209__;
}

struct integer* integer_operator_gt(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct integer* __result210__;
    __result210__ = __result_obj__ = ((struct integer*)(__right_value268=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(__right_value267=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2751, "integer")))),left->value>right->value)));
    come_call_finalizer3(__right_value267,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value268,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result210__;
}

struct integer* integer_operator_and(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct integer* __result211__;
    __result211__ = __result_obj__ = ((struct integer*)(__right_value270=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(__right_value269=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2756, "integer")))),left->value&right->value)));
    come_call_finalizer3(__right_value269,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value270,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result211__;
}

struct integer* integer_operator_xor(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct integer* __result212__;
    __result212__ = __result_obj__ = ((struct integer*)(__right_value272=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(__right_value271=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2761, "integer")))),left->value^right->value)));
    come_call_finalizer3(__right_value271,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value272,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result212__;
}

struct integer* integer_operator_or(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct integer* __result213__;
    __result213__ = __result_obj__ = ((struct integer*)(__right_value274=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(__right_value273=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2766, "integer")))),left->value|right->value)));
    come_call_finalizer3(__right_value273,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value274,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result213__;
}

struct integer* integer_operator_andand(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct integer* __result214__;
    __result214__ = __result_obj__ = ((struct integer*)(__right_value276=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(__right_value275=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2771, "integer")))),left->value&&right->value)));
    come_call_finalizer3(__right_value275,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value276,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result214__;
}

struct integer* integer_operator_oror(struct integer* left, struct integer* right){
void* __result_obj__=(void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct integer* __result215__;
    __result215__ = __result_obj__ = ((struct integer*)(__right_value278=integer_initialize((struct integer*)come_increment_ref_count(((struct integer*)(__right_value277=(struct integer*)come_calloc(1, sizeof(struct integer)*(1), "libneo-c.c", 2776, "integer")))),left->value||right->value)));
    come_call_finalizer3(__right_value277,integer_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value278,integer_finalize, 0, 1, 0, 0, __result_obj__);
    return __result215__;
}

