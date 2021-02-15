; ModuleID = 'Module vm'
source_filename = "Module vm"

%_IO_FILE = type { i32, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, %_IO_marker*, %_IO_FILE*, i32, i32, i64, i16, i8, [1 x i8], i8*, i64, %_IO_codecvt*, %_IO_wide_data*, %_IO_FILE*, i8*, i64, i32, [20 x i8] }
%_IO_marker = type {}
%_IO_codecvt = type {}
%_IO_wide_data = type {}
%pcre_callout_block = type { i32, i32, i32*, i8*, i32, i32, i32, i32, i32, i8*, i32, i32, i8* }
%pcre16_callout_block = type { i32, i32, i32*, i16*, i32, i32, i32, i32, i32, i8*, i32, i32, i16* }
%pcre32_callout_block = type { i32, i32, i32*, i32*, i32, i32, i32, i32, i32, i8*, i32, i32, i32* }
%map__charp_sCLClassp = type { i8**, i1*, %sCLClass**, i32, i32 }
%sCLClass = type { i8*, %map__charp_sCLMethodp*, %map__charp_sCLFieldp*, %sCLClass*, %vector__sCLTypep* }
%map__charp_sCLMethodp = type { i8**, i1*, %sCLMethod**, i32, i32 }
%sCLMethod = type { i8*, [32 x %sCLParam], i32, %sCLType*, %buffer*, %sCLNodeBlock*, i32 }
%sCLParam = type { [128 x i8], %sCLType* }
%sCLType = type { i8*, %sCLClass*, i32, [32 x %sCLType*], i1, [32 x %sCLParam], i32, %sCLType*, i32 }
%buffer = type { i8*, i32, i32 }
%sCLNodeBlock = type { %vector__sCLNodep*, %vector__sVarTablep*, i1, i32, [32 x %sCLParam], %sCLType*, i32, %buffer*, i32, i1 }
%vector__sCLNodep = type { %sCLNode**, i32, i32 }
%sCLNode = type { i32, [4096 x i8], i32, %anon82, i8*, i8*, i8*, %buffer*, %sCLType*, %sCLNode*, %sCLNode*, %sCLNode* }
%anon82 = type { %anon84 }
%anon84 = type { %sCLNodeBlock*, [32 x %sCLParam], i32, %sCLType* }
%vector__sVarTablep = type { %sVarTable**, i32, i32 }
%sVarTable = type { %map__charp_sVarp*, i32, i32, i32, %sVarTable* }
%map__charp_sVarp = type { i8**, i1*, %sVar**, i32, i32 }
%sVar = type { i8*, i32, %sCLType*, i32, i1 }
%map__charp_sCLFieldp = type { i8**, i1*, %sCLField**, i32, i32 }
%sCLField = type { i8*, %sCLType*, %CLVALUE, i32 }
%CLVALUE = type { i32 }
%vector__sCLTypep = type { %sCLType**, i32, i32 }
%list__int = type { %list_item__int*, %list_item__int*, i32 }
%list_item__int = type { i32, %list_item__int*, %list_item__int* }
%map__charp_lambdap = type { i8**, i1*, i1 (%CLVALUE**, %sVMInfo*)**, i32, i32 }
%sVMInfo = type { [4096 x i8], i32, %sParserInfo*, %sCompileInfo*, i1, %vector__sCLStackFrame*, %CLVALUE }
%sParserInfo = type { [4096 x i8], i32, i32, i32, i8*, %vector__charp*, %vector__sCLNodep*, %vector__sVarTablep*, %vector__sCLNodeBlockp*, %vector__sCLTypep*, %vector__sVarp*, i32 }
%vector__charp = type { i8**, i32, i32 }
%vector__sCLNodeBlockp = type { %sCLNodeBlock**, i32, i32 }
%vector__sVarp = type { %sVar**, i32, i32 }
%sCompileInfo = type { [4096 x i8], i32, i32, i32, %sParserInfo*, %buffer*, %sCLType*, i1, %sCLNode*, i1 }
%vector__sCLStackFrame = type { %sCLStackFrame*, i32, i32 }
%sCLStackFrame = type { i32, %CLVALUE*, %CLVALUE**, i32, i32 }
%list__charp = type { %list_item__charp*, %list_item__charp*, i32 }
%list_item__charp = type { i8*, %list_item__charp*, %list_item__charp* }
%map__charp_int = type { i8**, i1*, i32*, i32, i32 }
%__locale_struct = type { [13 x %__locale_data*], i16*, i32*, i32*, [13 x i8*] }
%__locale_data = type opaque
%anon0 = type { i32, %anon1 }
%anon1 = type { i32 }
%__builtin_va_list.0 = type { i8* }
%tm = type {}
%_G_fpos_t = type { i64, %anon0 }
%anon7 = type { [16 x i64] }
%timeval = type { i64, i64 }
%timespec = type { i64, i64 }
%anon6 = type { [16 x i64] }
%random_data = type { i32*, i32*, i32*, i32, i32, i32, i32* }
%drand48_data = type { [3 x i16], [3 x i16], i16, i16, i64 }
%anon3 = type { i32, i32 }
%anon4 = type { i64, i64 }
%anon5 = type { i64, i64 }
%real_pcre = type {}
%real_pcre16 = type {}
%real_pcre32 = type {}
%pcre_extra = type { i64, i8*, i64, i8*, i8*, i64, i8**, i8* }
%pcre16_extra = type { i64, i8*, i64, i8*, i8*, i64, i16**, i8* }
%pcre32_extra = type { i64, i8*, i64, i8*, i8*, i64, i32**, i8* }
%real_pcre_jit_stack = type {}
%real_pcre16_jit_stack = type {}
%real_pcre32_jit_stack = type {}
%regex_struct = type { i8*, %real_pcre*, i1, i1, i1, i1, i1, i1, i1, i1, i32 }
%stat = type { i64, i64, i64, i32, i32, i32, i32, i64, i64, i64, i64, %timespec, %timespec, %timespec, [3 x i64] }
%lconv = type { i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8, i8, i8, i8, i8, i8, i8, i8, i8, i8, i8, i8, i8, i8 }
%termios = type { i32, i32, i32, i32, i8, [32 x i8], i32, i32 }
%sCLHeapMem = type { %sCLType*, i32, i32, i8* }
%sCLObject = type { %sCLType*, i32, i32, %anon93 }
%anon93 = type { [32 x %CLVALUE] }
%sCLInt = type { %sCLType*, i32, i32, i32 }
%sCLCommand = type { %sCLType*, i32, i32, i32, i8*, i32, i8*, i32, i1 }
%sCLBlock = type { %sCLType*, i32, i32, i32*, i32, i32 }
%anon94 = type { i32, i32, i32, i32, %anon95 }
%anon95 = type { [28 x i32] }
%sigaction = type { %anon108, %anon6, i32, void ()* }
%anon108 = type { void (i32)* }
%sigval = type { i8* }
%sigcontext = type { i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i16, i16, i16, i16, i64, i64, i64, i64, %anon110, [8 x i64] }
%anon110 = type { %_fpstate* }
%_fpstate = type { i16, i16, i16, i16, i64, i64, i32, i32, [8 x %_fpxreg], [16 x %_xmmreg], [24 x i32] }
%_fpxreg = type { [4 x i16], i16, [3 x i16] }
%_xmmreg = type { [4 x i32] }
%anon111 = type { i8*, i32, i64 }
%sigstack = type { i8*, i32 }
%rusage = type {}

@gLVTable = internal global [8192 x i8*] zeroinitializer, align 8
@gNCDebugHeap = external global i32
@__environ = external externally_initialized global i8**, align 8
@optarg = external externally_initialized global i8*, align 8
@optind = external externally_initialized global i32, align 4
@opterr = external externally_initialized global i32, align 4
@optopt = external externally_initialized global i32, align 4
@stdin = external externally_initialized global %_IO_FILE*, align 8
@stdout = external externally_initialized global %_IO_FILE*, align 8
@stderr = external externally_initialized global %_IO_FILE*, align 8
@sys_nerr = external externally_initialized global i32, align 4
@sys_errlist = external externally_initialized global i8**, align 8
@pcre_malloc = external externally_initialized global i8* (i64)*, align 8
@pcre_free = external externally_initialized global void (i8*)*, align 8
@pcre_stack_malloc = external externally_initialized global i8* (i64)*, align 8
@pcre_stack_free = external externally_initialized global void (i8*)*, align 8
@pcre_callout = external externally_initialized global i32 (%pcre_callout_block*)*, align 8
@pcre_stack_guard = external externally_initialized global i32 ()*, align 8
@pcre16_malloc = external externally_initialized global i8* (i64)*, align 8
@pcre16_free = external externally_initialized global void (i8*)*, align 8
@pcre16_stack_malloc = external externally_initialized global i8* (i64)*, align 8
@pcre16_stack_free = external externally_initialized global void (i8*)*, align 8
@pcre16_callout = external externally_initialized global i32 (%pcre16_callout_block*)*, align 8
@pcre16_stack_guard = external externally_initialized global i32 ()*, align 8
@pcre32_malloc = external externally_initialized global i8* (i64)*, align 8
@pcre32_free = external externally_initialized global void (i8*)*, align 8
@pcre32_stack_malloc = external externally_initialized global i8* (i64)*, align 8
@pcre32_stack_free = external externally_initialized global void (i8*)*, align 8
@pcre32_callout = external externally_initialized global i32 (%pcre32_callout_block*)*, align 8
@pcre32_stack_guard = external externally_initialized global i32 ()*, align 8
@gClasses = external externally_initialized global %map__charp_sCLClassp*, align 8
@gJobs = external externally_initialized global %list__int*, align 8
@gNativeMethods = external externally_initialized global %map__charp_lambdap*, align 8
@match_index = external externally_initialized global i32, align 4
@matches = external externally_initialized global %list__charp*, align 8
@_sys_siglist = external externally_initialized global [65 x i8*], align 8
@sys_siglist = external externally_initialized global [65 x i8*], align 8
@gSigInt = global i32 zeroinitializer, align 4
@gGlobalVars = global %map__charp_int* zeroinitializer, align 8
@global_string = private constant [10 x i8] c"%s %d: %s\00", align 1
@global_string.1 = private constant [4 x i8] c"int\00", align 1
@global_string.2 = private constant [10 x i8] c"value %d \00", align 1
@global_string.3 = private constant [5 x i8] c"bool\00", align 1
@global_string.4 = private constant [10 x i8] c"value %d \00", align 1
@global_string.5 = private constant [7 x i8] c"string\00", align 1
@global_string.6 = private constant [10 x i8] c"value %s \00", align 1
@global_string.7 = private constant [10 x i8] c"v[%d] %d \00", align 1
@global_string.8 = private constant [1 x i8] zeroinitializer, align 1
@global_string.9 = private constant [10 x i8] c" [%d] %d \00", align 1
@global_string.10 = private constant [1 x i8] zeroinitializer, align 1
@global_string.11 = private constant [46 x i8] c"invoke method %s.%s num_params %d var_num %d\0A\00", align 1
@global_string.12 = private constant [32 x i8] c"invoked method %s.%s result %d\0A\00", align 1
@global_string.13 = private constant [39 x i8] c"invoke block num_params %d var_num %d\0A\00", align 1
@global_string.14 = private constant [25 x i8] c"invoked block result %d\0A\00", align 1
@global_string.15 = private constant [11 x i8] c"OP_ANDAND\0A\00", align 1
@global_string.16 = private constant [9 x i8] c"OP_OROR\0A\00", align 1
@global_string.17 = private constant [10 x i8] c"OP_NOTEQ\0A\00", align 1
@global_string.18 = private constant [7 x i8] c"OP_EQ\0A\00", align 1
@global_string.19 = private constant [8 x i8] c"OP_POP\0A\00", align 1
@global_string.20 = private constant [10 x i8] c"OP_THROW\0A\00", align 1
@global_string.21 = private constant [15 x i8] c"OP_LIST_VALUE\0A\00", align 1
@global_string.22 = private constant [11 x i8] c"OP_RETURN\0A\00", align 1
@global_string.23 = private constant [14 x i8] c"OP_INT_VALUE\0A\00", align 1
@global_string.24 = private constant [17 x i8] c"OP_STRING_VALUE\0A\00", align 1
@global_string.25 = private constant [16 x i8] c"OP_REGEX_VALUE\0A\00", align 1
@global_string.26 = private constant [15 x i8] c"OP_LIST_VALUE\0A\00", align 1
@global_string.27 = private constant [9 x i8] c"OP_IADD\0A\00", align 1
@global_string.28 = private constant [9 x i8] c"OP_ISUB\0A\00", align 1
@global_string.29 = private constant [10 x i8] c"OP_IMULT\0A\00", align 1
@global_string.30 = private constant [9 x i8] c"OP_IDIV\0A\00", align 1
@global_string.31 = private constant [19 x i8] c"OP_STORE_VARIABLE\0A\00", align 1
@global_string.32 = private constant [18 x i8] c"OP_LOAD_VARIABLE\0A\00", align 1
@global_string.33 = private constant [8 x i8] c"OP_TRY\0A\00", align 1
@global_string.34 = private constant [8 x i8] c"OP_IEQ\0A\00", align 1
@global_string.35 = private constant [11 x i8] c"OP_INOTEQ\0A\00", align 1
@global_string.36 = private constant [8 x i8] c"OP_ILT\0A\00", align 1
@global_string.37 = private constant [8 x i8] c"OP_IGT\0A\00", align 1
@global_string.38 = private constant [8 x i8] c"OP_ILE\0A\00", align 1
@global_string.39 = private constant [8 x i8] c"OP_IGE\0A\00", align 1
@global_string.40 = private constant [14 x i8] c"OP_COND_JUMP\0A\00", align 1
@global_string.41 = private constant [18 x i8] c"OP_COND_NOT_JUMP\0A\00", align 1
@global_string.42 = private constant [9 x i8] c"OP_GOTO\0A\00", align 1
@global_string.43 = private constant [18 x i8] c"OP_CREATE_OBJECT\0A\00", align 1
@global_string.44 = private constant [18 x i8] c"OP_INVOKE_METHOD\0A\00", align 1
@global_string.45 = private constant [15 x i8] c"OP_TRUE_VALUE\0A\00", align 1
@global_string.46 = private constant [16 x i8] c"OP_FALSE_VALUE\0A\00", align 1
@global_string.47 = private constant [24 x i8] c"OP_CREATE_BLOCK_OBJECT\0A\00", align 1
@global_string.48 = private constant [24 x i8] c"OP_INVOKE_BLOCK_OBJECT\0A\00", align 1
@global_string.49 = private constant [16 x i8] c"OP_STORE_FIELD\0A\00", align 1
@global_string.50 = private constant [15 x i8] c"OP_LOAD_FIELD\0A\00", align 1
@global_string.51 = private constant [15 x i8] c"OP_NULL_VALUE\0A\00", align 1
@global_string.52 = private constant [18 x i8] c"OP_COMMAND_VALUE\0A\00", align 1
@global_string.53 = private constant [17 x i8] c"OP_SYSTEM_VALUE\0A\00", align 1
@global_string.54 = private constant [19 x i8] c"OP_LOGICAL_DENIAL\0A\00", align 1
@global_string.55 = private constant [7 x i8] c"OP %d\0A\00", align 1
@global_string.56 = private constant [23 x i8] c"command not found(%s)\0A\00", align 1
@global_string.57 = private constant [2 x i8] c" \00", align 1
@global_string.58 = private constant [1 x i8] zeroinitializer, align 1
@global_string.59 = private constant [1 x i8] zeroinitializer, align 1
@global_string.60 = private constant [1 x i8] zeroinitializer, align 1
@global_string.61 = private constant [1 x i8] zeroinitializer, align 1
@global_string.62 = private constant [1 x i8] zeroinitializer, align 1
@global_string.63 = private constant [1 x i8] zeroinitializer, align 1
@global_string.64 = private constant [23 x i8] c"command not found(%s)\0A\00", align 1
@global_string.65 = private constant [12 x i8] c"dup2 error\0A\00", align 1
@global_string.66 = private constant [23 x i8] c"command not found(%s)\0A\00", align 1
@global_string.67 = private constant [2 x i8] c" \00", align 1
@global_string.68 = private constant [1 x i8] zeroinitializer, align 1
@global_string.69 = private constant [1 x i8] zeroinitializer, align 1
@global_string.70 = private constant [1 x i8] zeroinitializer, align 1
@global_string.71 = private constant [1 x i8] zeroinitializer, align 1
@global_string.72 = private constant [1 x i8] zeroinitializer, align 1
@global_string.73 = private constant [1 x i8] zeroinitializer, align 1
@global_string.74 = private constant [23 x i8] c"command not found(%s)\0A\00", align 1
@global_string.75 = private constant [18 x i8] c"signal interrupt\0A\00", align 1
@global_string.76 = private constant [1 x i8] zeroinitializer, align 1
@global_string.77 = private constant [1 x i8] zeroinitializer, align 1
@global_string.78 = private constant [1 x i8] zeroinitializer, align 1
@global_string.79 = private constant [42 x i8] c"class not found on OP_CREATE_OBJECT (%s)\0A\00", align 1
@global_string.80 = private constant [6 x i8] c"0 div\00", align 1
@global_string.81 = private constant [6 x i8] c"0 mod\00", align 1
@global_string.82 = private constant [5 x i8] c"void\00", align 1
@global_string.83 = private constant [5 x i8] c"void\00", align 1
@global_string.84 = private constant [5 x i8] c"void\00", align 1
@global_string.85 = private constant [5 x i8] c"void\00", align 1
@global_string.86 = private constant [5 x i8] c"void\00", align 1
@global_string.87 = private constant [5 x i8] c"void\00", align 1
@global_string.88 = private constant [5 x i8] c"void\00", align 1
@global_string.89 = private constant [5 x i8] c"void\00", align 1
@global_string.90 = private constant [76 x i8] c"invalid equal type. The difference left object type with right object type.\00", align 1
@global_string.91 = private constant [5 x i8] c"void\00", align 1
@global_string.92 = private constant [5 x i8] c"void\00", align 1
@global_string.93 = private constant [5 x i8] c"void\00", align 1
@global_string.94 = private constant [5 x i8] c"void\00", align 1
@global_string.95 = private constant [5 x i8] c"void\00", align 1
@global_string.96 = private constant [5 x i8] c"void\00", align 1
@global_string.97 = private constant [5 x i8] c"void\00", align 1
@global_string.98 = private constant [5 x i8] c"void\00", align 1
@global_string.99 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.100 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.101 = private constant [32 x i8] c"unexpected error in map.insert\0A\00", align 1
@global_string.102 = private constant [56 x i8] c"Object Null pointer Exception. Invoking method is (%s)\0A\00", align 1
@global_string.103 = private constant [41 x i8] c"class not found on OP_INVOKE_METHOD(%s)\0A\00", align 1
@global_string.104 = private constant [8 x i8] c"command\00", align 1
@global_string.105 = private constant [7 x i8] c"string\00", align 1
@global_string.106 = private constant [67 x i8] c"type error command parametor. invalid class(%s). method name (%s)\0A\00", align 1
@global_string.107 = private constant [25 x i8] c"invoke command error(%s)\00", align 1
@global_string.108 = private constant [25 x i8] c"invoke command error(%s)\00", align 1
@global_string.109 = private constant [25 x i8] c"invoke command error(%s)\00", align 1
@global_string.110 = private constant [25 x i8] c"invoke command error(%s)\00", align 1
@global_string.111 = private constant [25 x i8] c"method not found(%s.%s)\0A\00", align 1
@global_string.112 = private constant [36 x i8] c"method parametor is invalid(%s.%s)\0A\00", align 1
@global_string.113 = private constant [5 x i8] c"void\00", align 1
@global_string.114 = private constant [5 x i8] c"void\00", align 1
@global_string.115 = private constant [60 x i8] c"Object Null pointer Exception. Storing field index is (%d)\0A\00", align 1
@global_string.116 = private constant [60 x i8] c"Object Null pointer Exception. Storing field index is (%d)\0A\00", align 1
@global_string.117 = private constant [37 x i8] c"Out of range field index number(%d)\0A\00", align 1

; Function Attrs: nounwind
declare void @llvm.va_start(i8*, ...) #0

; Function Attrs: nounwind
declare void @llvm.va_end(i8*) #0

; Function Attrs: nounwind
declare void @llvm.va_copy(i8*, i8*) #0

; Function Attrs: argmemonly nounwind
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1) #1

declare i32* @wcscpy(i32*, i32*)

declare i32* @wcsncpy(i32*, i32*, i64)

declare i32* @wcscat(i32*, i32*)

declare i32* @wcsncat(i32*, i32*, i64)

declare i32 @wcscmp(i32*, i32*)

declare i32 @wcsncmp(i32*, i32*, i64)

declare i32 @wcscasecmp(i32*, i32*)

declare i32 @wcsncasecmp(i32*, i32*, i64)

declare i32 @wcscasecmp_l(i32*, i32*, %__locale_struct*)

declare i32 @wcsncasecmp_l(i32*, i32*, i64, %__locale_struct*)

declare i32 @wcscoll(i32*, i32*)

declare i64 @wcsxfrm(i32*, i32*, i64)

declare i32 @wcscoll_l(i32*, i32*, %__locale_struct*)

declare i64 @wcsxfrm_l(i32*, i32*, i64, %__locale_struct*)

declare i32* @wcsdup(i32*)

declare i32* @wcschr(i32*, i32)

declare i32* @wcsrchr(i32*, i32)

declare i64 @wcscspn(i32*, i32*)

declare i64 @wcsspn(i32*, i32*)

declare i32* @wcspbrk(i32*, i32*)

declare i32* @wcsstr(i32*, i32*)

declare i32* @wcstok(i32*, i32*, i32**)

declare i64 @wcslen(i32*)

declare i32* @wcswcs(i32*, i32*)

declare i64 @wcsnlen(i32*, i64)

declare i32* @wmemchr(i32*, i32, i64)

declare i32 @wmemcmp(i32*, i32*, i64)

declare i32* @wmemcpy(i32*, i32*, i64)

declare i32* @wmemmove(i32*, i32*, i64)

declare i32* @wmemset(i32*, i32, i64)

declare i32 @btowc(i32)

declare i32 @wctob(i32)

declare i32 @mbsinit(%anon0*)

declare i64 @mbrtowc(i32*, i8*, i64, %anon0*)

declare i64 @wcrtomb(i8*, i32, %anon0*)

declare i64 @__mbrlen(i8*, i64, %anon0*)

declare i64 @mbrlen(i8*, i64, %anon0*)

declare i64 @mbsrtowcs(i32*, i8**, i64, %anon0*)

declare i64 @wcsrtombs(i8*, i32**, i64, %anon0*)

declare i64 @mbsnrtowcs(i32*, i8**, i64, i64, %anon0*)

declare i64 @wcsnrtombs(i8*, i32**, i64, i64, %anon0*)

declare i32 @wcwidth(i32)

declare i32 @wcswidth(i32*, i64)

declare double @wcstod(i32*, i32**)

declare float @wcstof(i32*, i32**)

declare fp128 @wcstold(i32*, i32**)

declare i64 @wcstol(i32*, i32**, i32)

declare i64 @wcstoul(i32*, i32**, i32)

declare i64 @wcstoll(i32*, i32**, i32)

declare i64 @wcstoull(i32*, i32**, i32)

declare i32* @wcpcpy(i32*, i32*)

declare i32* @wcpncpy(i32*, i32*, i64)

declare %_IO_FILE* @open_wmemstream(i32**, i64*)

declare i32 @fwide(%_IO_FILE*, i32)

declare i32 @fwprintf(%_IO_FILE*, i32*, ...)

declare i32 @wprintf(i32*, ...)

declare i32 @swprintf(i32*, i64, i32*, ...)

declare i32 @vfwprintf(%_IO_FILE*, i32*, %__builtin_va_list.0)

declare i32 @vwprintf(i32*, %__builtin_va_list.0)

declare i32 @vswprintf(i32*, i64, i32*, %__builtin_va_list.0)

declare i32 @fwscanf(%_IO_FILE*, i32*, ...)

declare i32 @wscanf(i32*, ...)

declare i32 @swscanf(i32*, i32*, ...)

declare i32 @vfwscanf(%_IO_FILE*, i32*, %__builtin_va_list.0)

declare i32 @vwscanf(i32*, %__builtin_va_list.0)

declare i32 @vswscanf(i32*, i32*, %__builtin_va_list.0)

declare i32 @fgetwc(%_IO_FILE*)

declare i32 @getwc(%_IO_FILE*)

declare i32 @getwchar()

declare i32 @fputwc(i32, %_IO_FILE*)

declare i32 @putwc(i32, %_IO_FILE*)

declare i32 @putwchar(i32)

declare i32* @fgetws(i32*, i32, %_IO_FILE*)

declare i32 @fputws(i32*, %_IO_FILE*)

declare i32 @ungetwc(i32, %_IO_FILE*)

declare i64 @wcsftime(i32*, i64, i32*, %tm*)

declare i32 @access(i8*, i32)

declare i32 @faccessat(i32, i8*, i32, i32)

declare i64 @lseek(i32, i64, i32)

declare i32 @close(i32)

declare i64 @read(i32, i8*, i64)

declare i64 @write(i32, i8*, i64)

declare i64 @pread(i32, i8*, i64, i64)

declare i64 @pwrite(i32, i8*, i64, i64)

declare i32 @pipe(i32*)

declare i32 @alarm(i32)

declare i32 @sleep(i32)

declare i32 @ualarm(i32, i32)

declare i32 @usleep(i32)

declare i32 @pause()

declare i32 @chown(i8*, i32, i32)

declare i32 @fchown(i32, i32, i32)

declare i32 @lchown(i8*, i32, i32)

declare i32 @fchownat(i32, i8*, i32, i32, i32)

declare i32 @chdir(i8*)

declare i32 @fchdir(i32)

declare i8* @getcwd(i8*, i64)

declare i8* @getwd(i8*)

declare i32 @dup(i32)

declare i32 @dup2(i32, i32)

declare i32 @execve(i8*, i8**, i8**)

declare i32 @fexecve(i32, i8**, i8**)

declare i32 @execv(i8*, i8**)

declare i32 @execle(i8*, i8*, ...)

declare i32 @execl(i8*, i8*, ...)

declare i32 @execvp(i8*, i8**)

declare i32 @execlp(i8*, i8*, ...)

declare i32 @nice(i32)

declare void @_exit(i32)

declare i64 @pathconf(i8*, i32)

declare i64 @fpathconf(i32, i32)

declare i64 @sysconf(i32)

declare i64 @confstr(i32, i8*, i64)

declare i32 @getpid()

declare i32 @getppid()

declare i32 @getpgrp()

declare i32 @__getpgid(i32)

declare i32 @getpgid(i32)

declare i32 @setpgid(i32, i32)

declare i32 @setpgrp()

declare i32 @setsid()

declare i32 @getsid(i32)

declare i32 @getuid()

declare i32 @geteuid()

declare i32 @getgid()

declare i32 @getegid()

declare i32 @getgroups(i32, i32*)

declare i32 @setuid(i32)

declare i32 @setreuid(i32, i32)

declare i32 @seteuid(i32)

declare i32 @setgid(i32)

declare i32 @setregid(i32, i32)

declare i32 @setegid(i32)

declare i32 @fork()

declare i32 @vfork()

declare i8* @ttyname(i32)

declare i32 @ttyname_r(i32, i8*, i64)

declare i32 @isatty(i32)

declare i32 @ttyslot()

declare i32 @link(i8*, i8*)

declare i32 @linkat(i32, i8*, i32, i8*, i32)

declare i32 @symlink(i8*, i8*)

declare i64 @readlink(i8*, i8*, i64)

declare i32 @symlinkat(i8*, i32, i8*)

declare i64 @readlinkat(i32, i8*, i8*, i64)

declare i32 @unlink(i8*)

declare i32 @unlinkat(i32, i8*, i32)

declare i32 @rmdir(i8*)

declare i32 @tcgetpgrp(i32)

declare i32 @tcsetpgrp(i32, i32)

declare i8* @getlogin()

declare i32 @getlogin_r(i8*, i64)

declare i32 @setlogin(i8*)

declare i32 @getopt(i32, i8**, i8*)

declare i32 @gethostname(i8*, i64)

declare i32 @sethostname(i8*, i64)

declare i32 @sethostid(i64)

declare i32 @getdomainname(i8*, i64)

declare i32 @setdomainname(i8*, i64)

declare i32 @vhangup()

declare i32 @revoke(i8*)

declare i32 @profil(i16*, i64, i64, i32)

declare i32 @acct(i8*)

declare i8* @getusershell()

declare void @endusershell()

declare void @setusershell()

declare i32 @daemon(i32, i32)

declare i32 @chroot(i8*)

declare i8* @getpass(i8*)

declare i32 @fsync(i32)

declare i64 @gethostid()

declare void @sync()

declare i32 @getpagesize()

declare i32 @getdtablesize()

declare i32 @truncate(i8*, i64)

declare i32 @ftruncate(i32, i64)

declare i32 @brk(i8*)

declare i8* @sbrk(i64)

declare i64 @syscall(i64, ...)

declare i32 @lockf(i32, i32, i64)

declare i32 @fdatasync(i32)

declare i8* @crypt(i8*, i8*)

declare void @swab(i8*, i8*, i64)

declare i32 @getentropy(i8*, i64)

declare i32 @remove(i8*)

declare i32 @rename(i8*, i8*)

declare i32 @renameat(i32, i8*, i32, i8*)

declare %_IO_FILE* @tmpfile()

declare i8* @tmpnam(i8*)

declare i8* @tmpnam_r(i8*)

declare i8* @tempnam(i8*, i8*)

declare i32 @fclose(%_IO_FILE*)

declare i32 @fflush(%_IO_FILE*)

declare i32 @fflush_unlocked(%_IO_FILE*)

declare %_IO_FILE* @fopen(i8*, i8*)

declare %_IO_FILE* @freopen(i8*, i8*, %_IO_FILE*)

declare %_IO_FILE* @fdopen(i32, i8*)

declare %_IO_FILE* @fmemopen(i8*, i64, i8*)

declare %_IO_FILE* @open_memstream(i8**, i64*)

declare void @setbuf(%_IO_FILE*, i8*)

declare i32 @setvbuf(%_IO_FILE*, i8*, i32, i64)

declare void @setbuffer(%_IO_FILE*, i8*, i64)

declare void @setlinebuf(%_IO_FILE*)

declare i32 @fprintf(%_IO_FILE*, i8*, ...)

declare i32 @printf(i8*, ...)

declare i32 @sprintf(i8*, i8*, ...)

declare i32 @vfprintf(%_IO_FILE*, i8*, %__builtin_va_list.0)

declare i32 @vprintf(i8*, %__builtin_va_list.0)

declare i32 @vsprintf(i8*, i8*, %__builtin_va_list.0)

declare i32 @snprintf(i8*, i64, i8*, ...)

declare i32 @vsnprintf(i8*, i64, i8*, %__builtin_va_list.0)

declare i32 @vdprintf(i32, i8*, %__builtin_va_list.0)

declare i32 @dprintf(i32, i8*, ...)

declare i32 @fscanf(%_IO_FILE*, i8*, ...)

declare i32 @scanf(i8*, ...)

declare i32 @sscanf(i8*, i8*, ...)

declare i32 @vfscanf(%_IO_FILE*, i8*, %__builtin_va_list.0)

declare i32 @vscanf(i8*, %__builtin_va_list.0)

declare i32 @vsscanf(i8*, i8*, %__builtin_va_list.0)

declare i32 @fgetc(%_IO_FILE*)

declare i32 @getc(%_IO_FILE*)

declare i32 @getchar()

declare i32 @getc_unlocked(%_IO_FILE*)

declare i32 @getchar_unlocked()

declare i32 @fgetc_unlocked(%_IO_FILE*)

declare i32 @fputc(i32, %_IO_FILE*)

declare i32 @putc(i32, %_IO_FILE*)

declare i32 @putchar(i32)

declare i32 @fputc_unlocked(i32, %_IO_FILE*)

declare i32 @putc_unlocked(i32, %_IO_FILE*)

declare i32 @putchar_unlocked(i32)

declare i32 @getw(%_IO_FILE*)

declare i32 @putw(i32, %_IO_FILE*)

declare i8* @fgets(i8*, i32, %_IO_FILE*)

declare i64 @__getdelim(i8**, i64*, i32, %_IO_FILE*)

declare i64 @getdelim(i8**, i64*, i32, %_IO_FILE*)

declare i64 @getline(i8**, i64*, %_IO_FILE*)

declare i32 @fputs(i8*, %_IO_FILE*)

declare i32 @puts(i8*)

declare i32 @ungetc(i32, %_IO_FILE*)

declare i64 @fread(i8*, i64, i64, %_IO_FILE*)

declare i64 @fwrite(i8*, i64, i64, %_IO_FILE*)

declare i64 @fread_unlocked(i8*, i64, i64, %_IO_FILE*)

declare i64 @fwrite_unlocked(i8*, i64, i64, %_IO_FILE*)

declare i32 @fseek(%_IO_FILE*, i64, i32)

declare i64 @ftell(%_IO_FILE*)

declare void @rewind(%_IO_FILE*)

declare i32 @fseeko(%_IO_FILE*, i64, i32)

declare i64 @ftello(%_IO_FILE*)

declare i32 @fgetpos(%_IO_FILE*, %_G_fpos_t*)

declare i32 @fsetpos(%_IO_FILE*, %_G_fpos_t*)

declare void @clearerr(%_IO_FILE*)

declare i32 @feof(%_IO_FILE*)

declare i32 @ferror(%_IO_FILE*)

declare void @clearerr_unlocked(%_IO_FILE*)

declare i32 @feof_unlocked(%_IO_FILE*)

declare i32 @ferror_unlocked(%_IO_FILE*)

declare void @perror(i8*)

declare i32 @fileno(%_IO_FILE*)

declare i32 @fileno_unlocked(%_IO_FILE*)

declare %_IO_FILE* @popen(i8*, i8*)

declare i32 @pclose(%_IO_FILE*)

declare i8* @ctermid(i8*)

declare void @flockfile(%_IO_FILE*)

declare i32 @ftrylockfile(%_IO_FILE*)

declare void @funlockfile(%_IO_FILE*)

declare i32 @__uflow(%_IO_FILE*)

declare i32 @__overflow(%_IO_FILE*, i32)

declare i64 @__ctype_get_mb_cur_max()

declare double @atof(i8*)

declare i32 @atoi(i8*)

declare i64 @atol(i8*)

declare i64 @atoll(i8*)

declare double @strtod(i8*, i8**)

declare float @strtof(i8*, i8**)

declare fp128 @strtold(i8*, i8**)

declare i64 @strtol(i8*, i8**, i32)

declare i64 @strtoul(i8*, i8**, i32)

declare i64 @strtoq(i8*, i8**, i32)

declare i64 @strtouq(i8*, i8**, i32)

declare i64 @strtoll(i8*, i8**, i32)

declare i64 @strtoull(i8*, i8**, i32)

declare i8* @l64a(i64)

declare i64 @a64l(i8*)

declare i32 @select(i32, %anon7*, %anon7*, %anon7*, %timeval*)

declare i32 @pselect(i32, %anon7*, %anon7*, %anon7*, %timespec*, %anon6*)

declare i64 @random()

declare void @srandom(i32)

declare i8* @initstate(i32, i8*, i64)

declare i8* @setstate(i8*)

declare i32 @random_r(%random_data*, i32*)

declare i32 @srandom_r(i32, %random_data*)

declare i32 @initstate_r(i32, i8*, i64, %random_data*)

declare i32 @setstate_r(i8*, %random_data*)

declare i32 @rand()

declare void @srand(i32)

declare i32 @rand_r(i32*)

declare double @drand48()

declare double @erand48(i16*)

declare i64 @lrand48()

declare i64 @nrand48(i16*)

declare i64 @mrand48()

declare i64 @jrand48(i16*)

declare void @srand48(i64)

declare i16* @seed48(i16*)

declare void @lcong48(i16*)

declare i32 @drand48_r(%drand48_data*, double*)

declare i32 @erand48_r(i16*, %drand48_data*, double*)

declare i32 @lrand48_r(%drand48_data*, i64*)

declare i32 @nrand48_r(i16*, %drand48_data*, i64*)

declare i32 @mrand48_r(%drand48_data*, i64*)

declare i32 @jrand48_r(i16*, %drand48_data*, i64*)

declare i32 @srand48_r(i64, %drand48_data*)

declare i32 @seed48_r(i16*, %drand48_data*)

declare i32 @lcong48_r(i16*, %drand48_data*)

declare i8* @malloc(i64)

declare i8* @calloc(i64, i64)

declare i8* @realloc(i8*, i64)

declare void @free(i8*)

declare i8* @alloca(i64)

declare i8* @valloc(i64)

declare i32 @posix_memalign(i8**, i64, i64)

declare i8* @aligned_alloc(i64, i64)

declare void @abort()

declare i32 @atexit(void ()*)

declare i32 @at_quick_exit(void ()*)

declare i32 @on_exit(void (i32, i8*)*, i8*)

declare void @exit(i32)

declare void @quick_exit(i32)

declare void @_Exit(i32)

declare i8* @getenv(i8*)

declare i32 @putenv(i8*)

declare i32 @setenv(i8*, i8*, i32)

declare i32 @unsetenv(i8*)

declare i32 @clearenv()

declare i8* @mktemp(i8*)

declare i32 @mkstemp(i8*)

declare i32 @mkstemps(i8*, i32)

declare i8* @mkdtemp(i8*)

declare i32 @system(i8*)

declare i8* @realpath(i8*, i8*)

declare i8* @bsearch(i8*, i8*, i64, i64, i32 (i8*, i8*)*)

declare void @qsort(i8*, i64, i64, i32 (i8*, i8*)*)

declare i32 @abs(i32)

declare i64 @labs(i64)

declare i64 @llabs(i64)

declare %anon3 @div(i32, i32)

declare %anon4 @ldiv(i64, i64)

declare %anon5 @lldiv(i64, i64)

declare i8* @ecvt(double, i32, i32*, i32*)

declare i8* @fcvt(double, i32, i32*, i32*)

declare i8* @gcvt(double, i32, i8*)

declare i8* @qecvt(fp128, i32, i32*, i32*)

declare i8* @qfcvt(fp128, i32, i32*, i32*)

declare i8* @qgcvt(fp128, i32, i8*)

declare i32 @ecvt_r(double, i32, i32*, i32*, i8*, i64)

declare i32 @fcvt_r(double, i32, i32*, i32*, i8*, i64)

declare i32 @qecvt_r(fp128, i32, i32*, i32*, i8*, i64)

declare i32 @qfcvt_r(fp128, i32, i32*, i32*, i8*, i64)

declare i32 @mblen(i8*, i64)

declare i32 @mbtowc(i32*, i8*, i64)

declare i32 @wctomb(i8*, i32)

declare i64 @mbstowcs(i32*, i8*, i64)

declare i64 @wcstombs(i8*, i32*, i64)

declare i32 @rpmatch(i8*)

declare i32 @getsubopt(i8**, i8**, i8**)

declare i32 @getloadavg(double*, i32)

declare i8* @memcpy(i8*, i8*, i64)

declare i8* @memmove(i8*, i8*, i64)

declare i8* @memccpy(i8*, i8*, i32, i64)

declare i8* @memset(i8*, i32, i64)

declare i32 @memcmp(i8*, i8*, i64)

declare i8* @memchr(i8*, i32, i64)

declare i8* @strcpy(i8*, i8*)

declare i8* @strncpy(i8*, i8*, i64)

declare i8* @strcat(i8*, i8*)

declare i8* @strncat(i8*, i8*, i64)

declare i32 @strcmp(i8*, i8*)

declare i32 @strncmp(i8*, i8*, i64)

declare i32 @strcoll(i8*, i8*)

declare i64 @strxfrm(i8*, i8*, i64)

declare i32 @strcoll_l(i8*, i8*, %__locale_struct*)

declare i64 @strxfrm_l(i8*, i8*, i64, %__locale_struct*)

declare i8* @strdup(i8*)

declare i8* @strndup(i8*, i64)

declare i8* @strchr(i8*, i32)

declare i8* @strrchr(i8*, i32)

declare i64 @strcspn(i8*, i8*)

declare i64 @strspn(i8*, i8*)

declare i8* @strpbrk(i8*, i8*)

declare i8* @strstr(i8*, i8*)

declare i8* @strtok(i8*, i8*)

declare i8* @__strtok_r(i8*, i8*, i8**)

declare i8* @strtok_r(i8*, i8*, i8**)

declare i64 @strlen(i8*)

declare i64 @strnlen(i8*, i64)

declare i8* @strerror(i32)

declare i32 @__xpg_strerror_r(i32, i8*, i64)

declare i8* @strerror_l(i32, %__locale_struct*)

declare i32 @bcmp(i8*, i8*, i64)

declare void @bcopy(i8*, i8*, i64)

declare void @bzero(i8*, i64)

declare i8* @index(i8*, i32)

declare i8* @rindex(i8*, i32)

declare i32 @ffs(i32)

declare i32 @ffsl(i64)

declare i32 @ffsll(i64)

declare i32 @strcasecmp(i8*, i8*)

declare i32 @strncasecmp(i8*, i8*, i64)

declare i32 @strcasecmp_l(i8*, i8*, %__locale_struct*)

declare i32 @strncasecmp_l(i8*, i8*, i64, %__locale_struct*)

declare void @explicit_bzero(i8*, i64)

declare i8* @strsep(i8**, i8*)

declare i8* @strsignal(i32)

declare i8* @__stpcpy(i8*, i8*)

declare i8* @stpcpy(i8*, i8*)

declare i8* @__stpncpy(i8*, i8*, i64)

declare i8* @stpncpy(i8*, i8*, i64)

declare %real_pcre* @pcre_compile(i8*, i32, i8**, i32*, i8*)

declare %real_pcre16* @pcre16_compile(i16*, i32, i8**, i32*, i8*)

declare %real_pcre32* @pcre32_compile(i32*, i32, i8**, i32*, i8*)

declare %real_pcre* @pcre_compile2(i8*, i32, i32*, i8**, i32*, i8*)

declare %real_pcre16* @pcre16_compile2(i16*, i32, i32*, i8**, i32*, i8*)

declare %real_pcre32* @pcre32_compile2(i32*, i32, i32*, i8**, i32*, i8*)

declare i32 @pcre_config(i32, i8*)

declare i32 @pcre16_config(i32, i8*)

declare i32 @pcre32_config(i32, i8*)

declare i32 @pcre_copy_named_substring(%real_pcre*, i8*, i32*, i32, i8*, i8*, i32)

declare i32 @pcre16_copy_named_substring(%real_pcre16*, i16*, i32*, i32, i16*, i16*, i32)

declare i32 @pcre32_copy_named_substring(%real_pcre32*, i32*, i32*, i32, i32*, i32*, i32)

declare i32 @pcre_copy_substring(i8*, i32*, i32, i32, i8*, i32)

declare i32 @pcre16_copy_substring(i16*, i32*, i32, i32, i16*, i32)

declare i32 @pcre32_copy_substring(i32*, i32*, i32, i32, i32*, i32)

declare i32 @pcre_dfa_exec(%real_pcre*, %pcre_extra*, i8*, i32, i32, i32, i32*, i32, i32*, i32)

declare i32 @pcre16_dfa_exec(%real_pcre16*, %pcre16_extra*, i16*, i32, i32, i32, i32*, i32, i32*, i32)

declare i32 @pcre32_dfa_exec(%real_pcre32*, %pcre32_extra*, i32*, i32, i32, i32, i32*, i32, i32*, i32)

declare i32 @pcre_exec(%real_pcre*, %pcre_extra*, i8*, i32, i32, i32, i32*, i32)

declare i32 @pcre16_exec(%real_pcre16*, %pcre16_extra*, i16*, i32, i32, i32, i32*, i32)

declare i32 @pcre32_exec(%real_pcre32*, %pcre32_extra*, i32*, i32, i32, i32, i32*, i32)

declare i32 @pcre_jit_exec(%real_pcre*, %pcre_extra*, i8*, i32, i32, i32, i32*, i32, %real_pcre_jit_stack*)

declare i32 @pcre16_jit_exec(%real_pcre16*, %pcre16_extra*, i16*, i32, i32, i32, i32*, i32, %real_pcre16_jit_stack*)

declare i32 @pcre32_jit_exec(%real_pcre32*, %pcre32_extra*, i32*, i32, i32, i32, i32*, i32, %real_pcre32_jit_stack*)

declare void @pcre_free_substring(i8*)

declare void @pcre16_free_substring(i16*)

declare void @pcre32_free_substring(i32*)

declare void @pcre_free_substring_list(i8**)

declare void @pcre16_free_substring_list(i16**)

declare void @pcre32_free_substring_list(i32**)

declare i32 @pcre_fullinfo(%real_pcre*, %pcre_extra*, i32, i8*)

declare i32 @pcre16_fullinfo(%real_pcre16*, %pcre16_extra*, i32, i8*)

declare i32 @pcre32_fullinfo(%real_pcre32*, %pcre32_extra*, i32, i8*)

declare i32 @pcre_get_named_substring(%real_pcre*, i8*, i32*, i32, i8*, i8**)

declare i32 @pcre16_get_named_substring(%real_pcre16*, i16*, i32*, i32, i16*, i16**)

declare i32 @pcre32_get_named_substring(%real_pcre32*, i32*, i32*, i32, i32*, i32**)

declare i32 @pcre_get_stringnumber(%real_pcre*, i8*)

declare i32 @pcre16_get_stringnumber(%real_pcre16*, i16*)

declare i32 @pcre32_get_stringnumber(%real_pcre32*, i32*)

declare i32 @pcre_get_stringtable_entries(%real_pcre*, i8*, i8**, i8**)

declare i32 @pcre16_get_stringtable_entries(%real_pcre16*, i16*, i16**, i16**)

declare i32 @pcre32_get_stringtable_entries(%real_pcre32*, i32*, i32**, i32**)

declare i32 @pcre_get_substring(i8*, i32*, i32, i32, i8**)

declare i32 @pcre16_get_substring(i16*, i32*, i32, i32, i16**)

declare i32 @pcre32_get_substring(i32*, i32*, i32, i32, i32**)

declare i32 @pcre_get_substring_list(i8*, i32*, i32, i8***)

declare i32 @pcre16_get_substring_list(i16*, i32*, i32, i16***)

declare i32 @pcre32_get_substring_list(i32*, i32*, i32, i32***)

declare i8* @pcre_maketables()

declare i8* @pcre16_maketables()

declare i8* @pcre32_maketables()

declare i32 @pcre_refcount(%real_pcre*, i32)

declare i32 @pcre16_refcount(%real_pcre16*, i32)

declare i32 @pcre32_refcount(%real_pcre32*, i32)

declare %pcre_extra* @pcre_study(%real_pcre*, i32, i8**)

declare %pcre16_extra* @pcre16_study(%real_pcre16*, i32, i8**)

declare %pcre32_extra* @pcre32_study(%real_pcre32*, i32, i8**)

declare void @pcre_free_study(%pcre_extra*)

declare void @pcre16_free_study(%pcre16_extra*)

declare void @pcre32_free_study(%pcre32_extra*)

declare i8* @pcre_version()

declare i8* @pcre16_version()

declare i8* @pcre32_version()

declare i32 @pcre_pattern_to_host_byte_order(%real_pcre*, %pcre_extra*, i8*)

declare i32 @pcre16_pattern_to_host_byte_order(%real_pcre16*, %pcre16_extra*, i8*)

declare i32 @pcre32_pattern_to_host_byte_order(%real_pcre32*, %pcre32_extra*, i8*)

declare i32 @pcre16_utf16_to_host_byte_order(i16*, i16*, i32, i32*, i32)

declare i32 @pcre32_utf32_to_host_byte_order(i32*, i32*, i32, i32*, i32)

declare %real_pcre_jit_stack* @pcre_jit_stack_alloc(i32, i32)

declare %real_pcre16_jit_stack* @pcre16_jit_stack_alloc(i32, i32)

declare %real_pcre32_jit_stack* @pcre32_jit_stack_alloc(i32, i32)

declare void @pcre_jit_stack_free(%real_pcre_jit_stack*)

declare void @pcre16_jit_stack_free(%real_pcre16_jit_stack*)

declare void @pcre32_jit_stack_free(%real_pcre32_jit_stack*)

declare void @pcre_assign_jit_stack(%pcre_extra*, %real_pcre_jit_stack* (i8*)*, i8*)

declare void @pcre16_assign_jit_stack(%pcre16_extra*, %real_pcre16_jit_stack* (i8*)*, i8*)

declare void @pcre32_assign_jit_stack(%pcre32_extra*, %real_pcre32_jit_stack* (i8*)*, i8*)

declare void @pcre_jit_free_unused_memory()

declare void @pcre16_jit_free_unused_memory()

declare void @pcre32_jit_free_unused_memory()

declare i8* @nccalloc(i64, i64)

declare i8* @ncmalloc(i64)

declare i8* @ncmemdup(i8*)

declare i8* @ncrealloc(i8*, i64)

declare void @ncfree(i8*)

declare i64 @ncmalloc_usable_size(i8*)

declare i8* @xstrncpy(i8*, i8*, i32)

declare i8* @xstrncat(i8*, i8*, i32)

declare i8* @ncmemcpy(i8*, i8*, i64)

declare i8* @xasprintf(i8*, ...)

declare i8* @xsprintf(i8*, ...)

declare i8* @xbasename(i8*)

declare i8* @xrealpath(i8*)

declare i8* @string(i8*)

declare i8* @string_from_wchar_t(i32*, i8*)

declare i32* @wstring(i8*)

declare i32* @wstring_from_wchar_t(i32*)

declare i8* @debug_xcalloc(i64, i64, i8*, i8*, i32, i8*, i8*)

declare void @debug_show_none_freed_heap_memory()

declare void @p(i8*)

declare i8* @"op_add_char*_char*"(i8*, i8*)

declare i8* @"op_mult_char*_int"(i8*, i32)

declare i32* @"op_add_wchar_t*_wchar_t*"(i32*, i32*)

declare i32* @"op_mult_wchar_t*_int"(i32*, i32)

declare %buffer* @buffer_initialize(%buffer*)

declare void @buffer_finalize(%buffer*)

declare void @buffer_append(%buffer*, i8*, i64)

declare void @buffer_append_char(%buffer*, i8)

declare void @buffer_append_str(%buffer*, i8*)

declare void @buffer_append_nullterminated_str(%buffer*, i8*)

declare i8* @buffer_to_string(%buffer*)

declare i32 @buffer_length(%buffer*)

declare %regex_struct* @regex(i8*, i1, i1, i1, i1, i1, i1, i1, i1)

declare i8* @op_add_string_string(i8*, i8*)

declare i8* @op_mult_string_int(i8*, i32)

declare i1 @string_equals(i8*, i8*)

declare i32 @string_length(i8*)

declare i32 @string_get_hash_key(i8*)

declare i8* @string_substring(i8*, i32, i32)

declare i32 @string_index(i8*, i8*, i32)

declare i32 @string_rindex(i8*, i8*, i32)

declare i32 @string_index_regex(i8*, %regex_struct*, i32)

declare i32 @string_rindex_regex(i8*, %regex_struct*, i32)

declare i8* @string_delete(i8*, i32)

declare i8* @string_delete_range(i8*, i32, i32)

declare i8* @string_printable(i8*)

declare i8* @string_sub(i8*, %regex_struct*, i8*, %list__charp*)

declare i1 @string_match(i8*, %regex_struct*, %list__charp*)

declare %list__charp* @string_scan(i8*, %regex_struct*)

declare i32* @string_to_wstring(i8*)

declare i8* @string_reverse(i8*)

declare %list__charp* @string_split_char(i8*, i8)

declare %list__charp* @string_split(i8*, %regex_struct*)

declare void @string_replace(i8*, i32, i8)

declare i8 @string_item(i8*, i32, i8)

declare %regex_struct* @string_to_regex(i8*)

declare %buffer* @string_to_buffer(i8*)

declare i32* @op_add_wstring_wstring(i32*, i32*)

declare i32* @op_mult_wstring_int(i32*, i32)

declare i1 @wstring_equals(i32*, i32*)

declare i32 @wstring_length(i32*)

declare i32 @wstring_get_hash_key(i32*)

declare i32* @wstring_reverse(i32*)

declare i32* @wstring_substring(i32*, i32, i32)

declare i32 @wstring_index(i32*, i32*, i32)

declare i32 @wstring_rindex(i32*, i32*, i32)

declare i32* @wstring_delete(i32*, i32)

declare i32* @wstring_delete_range(i32*, i32, i32)

declare i8* @wstring_to_string(i32*, i8*)

declare i32* @wstring_printable(i32*)

declare void @wstring_replace(i32*, i32, i32)

declare i32 @wstring_item(i32*, i32, i32)

declare void @xassert(i8*, i1)

declare i32 @stat(i8*, %stat*)

declare i32 @fstat(i32, %stat*)

declare i32 @fstatat(i32, i8*, %stat*, i32)

declare i32 @lstat(i8*, %stat*)

declare i32 @chmod(i8*, i32)

declare i32 @lchmod(i8*, i32)

declare i32 @fchmod(i32, i32)

declare i32 @fchmodat(i32, i8*, i32, i32)

declare i32 @umask(i32)

declare i32 @mkdir(i8*, i32)

declare i32 @mkdirat(i32, i8*, i32)

declare i32 @mknod(i8*, i32, i64)

declare i32 @mknodat(i32, i8*, i32, i64)

declare i32 @mkfifo(i8*, i32)

declare i32 @mkfifoat(i32, i8*, i32)

declare i32 @utimensat(i32, i8*, %timespec*, i32)

declare i32 @futimens(i32, %timespec*)

declare i32 @__fxstat(i32, i32, %stat*)

declare i32 @__xstat(i32, i8*, %stat*)

declare i32 @__lxstat(i32, i8*, %stat*)

declare i32 @__fxstatat(i32, i32, i8*, %stat*, i32)

declare i32 @__xmknod(i32, i8*, i32, i64*)

declare i32 @__xmknodat(i32, i32, i8*, i32, i64*)

declare i32 @fcntl(i32, i32, ...)

declare i32 @open(i8*, i32, ...)

declare i32 @openat(i32, i8*, i32, ...)

declare i32 @creat(i8*, i32)

declare i32 @posix_fadvise(i32, i64, i64, i32)

declare i32 @posix_fallocate(i32, i64, i64)

declare i16** @__ctype_b_loc()

declare i32** @__ctype_tolower_loc()

declare i32** @__ctype_toupper_loc()

declare i32 @isalnum(i32)

declare i32 @isalpha(i32)

declare i32 @iscntrl(i32)

declare i32 @isdigit(i32)

declare i32 @islower(i32)

declare i32 @isgraph(i32)

declare i32 @isprint(i32)

declare i32 @ispunct(i32)

declare i32 @isspace(i32)

declare i32 @isupper(i32)

declare i32 @isxdigit(i32)

declare i32 @tolower(i32)

declare i32 @toupper(i32)

declare i32 @isblank(i32)

declare i32 @isascii(i32)

declare i32 @toascii(i32)

declare i32 @_toupper(i32)

declare i32 @_tolower(i32)

declare i32 @isalnum_l(i32, %__locale_struct*)

declare i32 @isalpha_l(i32, %__locale_struct*)

declare i32 @iscntrl_l(i32, %__locale_struct*)

declare i32 @isdigit_l(i32, %__locale_struct*)

declare i32 @islower_l(i32, %__locale_struct*)

declare i32 @isgraph_l(i32, %__locale_struct*)

declare i32 @isprint_l(i32, %__locale_struct*)

declare i32 @ispunct_l(i32, %__locale_struct*)

declare i32 @isspace_l(i32, %__locale_struct*)

declare i32 @isupper_l(i32, %__locale_struct*)

declare i32 @isxdigit_l(i32, %__locale_struct*)

declare i32 @isblank_l(i32, %__locale_struct*)

declare i32 @__tolower_l(i32, %__locale_struct*)

declare i32 @tolower_l(i32, %__locale_struct*)

declare i32 @__toupper_l(i32, %__locale_struct*)

declare i32 @toupper_l(i32, %__locale_struct*)

declare i8* @setlocale(i32, i8*)

declare %lconv* @localeconv()

declare %__locale_struct* @newlocale(i32, i8*, %__locale_struct*)

declare %__locale_struct* @duplocale(%__locale_struct*)

declare void @freelocale(%__locale_struct*)

declare %__locale_struct* @uselocale(%__locale_struct*)

declare i8* @dlopen(i8*, i32)

declare i32 @dlclose(i8*)

declare i8* @dlsym(i8*, i8*)

declare i8* @dlerror()

declare i32 @cfgetospeed(%termios*)

declare i32 @cfgetispeed(%termios*)

declare i32 @cfsetospeed(%termios*, i32)

declare i32 @cfsetispeed(%termios*, i32)

declare i32 @cfsetspeed(%termios*, i32)

declare i32 @tcgetattr(i32, %termios*)

declare i32 @tcsetattr(i32, i32, %termios*)

declare void @cfmakeraw(%termios*)

declare i32 @tcsendbreak(i32, i32)

declare i32 @tcdrain(i32)

declare i32 @tcflush(i32, i32)

declare i32 @tcflow(i32, i32)

declare i32 @tcgetsid(i32)

declare void @class_init()

declare void @class_final()

declare void @append_class(i8*)

declare i1 @eval_class(i8*, %vector__sCLTypep*, i8*, i32)

declare void @native_init()

declare void @native_init2()

declare void @native_init3()

declare void @native_init4()

declare void @native_init5()

declare void @native_init6()

declare void @native_init7()

declare void @native_final()

declare i1 @invoke_native_method(%sCLClass*, %sCLMethod*, %CLVALUE**, %sVMInfo*)

declare %sVarTable* @sVarTable_initialize(%sVarTable*)

declare void @parser_err_msg(%sParserInfo*, i8*)

declare void @skip_spaces_and_lf(%sParserInfo*)

declare i1 @parse_params(%sCLParam*, i32*, %sParserInfo*, %vector__sCLTypep*)

declare i8* @parse_word(%sParserInfo*)

declare i1 @parse_type(%sCLType**, %sParserInfo*, %vector__sCLTypep*)

declare void @expected_next_character(i8, %sParserInfo*)

declare void @parse_comment(%sParserInfo*)

declare i1 @expression(%sCLNode**, %sParserInfo*)

declare i1 @compile(%sCLNode*, %sCompileInfo*)

declare void @compile_err_msg(%sCompileInfo*, i8*)

declare void @init_var_table(%vector__sVarTablep*)

declare void @final_var_table(%sParserInfo*)

declare void @add_variable_to_table(%sParserInfo*, i8*, %sCLType*, i1)

declare %sVar* @get_variable_from_table(%sParserInfo*, i8*)

declare void @check_already_added_variable(%sParserInfo*, i8*)

declare i32 @get_var_num(%vector__sVarTablep*)

declare void @show_vtable(%vector__sVarTablep*)

declare %sCLType* @clone_type(%sCLType*, %sParserInfo*)

declare %sCLType* @create_type(i8*, %vector__sCLTypep*)

declare %sCLType* @parse_type_runtime(i8*, %sParserInfo*, %vector__sCLTypep*)

declare i8* @create_type_name(%sCLType*)

declare i1 @type_identify(%sCLType*, %sCLType*)

declare i1 @substitution_posibility(%sCLType*, %sCLType*)

declare i1 @check_type(i32, i8*, %sVMInfo*)

declare i1 @type_identify_with_class_name(%sCLType*, i8*, %sParserInfo*)

declare i1 @is_generics_type(%sCLType*)

declare i32 @get_generics_type_number(%sCLType*, %sParserInfo*)

declare %sCLType* @solve_generics(%sCLType*, %sCLType*, %sParserInfo*)

declare void @show_type(%sCLType*)

declare void @codes_append_type(%buffer*, %sCLType*)

declare void @codes_read_type(i8*, %sCLType**)

declare %sCLNode* @sNodeTree_create_mod(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_primitive_mod(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_break(%sParserInfo*)

declare %sCLNode* @sNodeTree_create_mult(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_primitive_mult(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_div(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_primitive_div(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_list_value(i32, %sCLNode**, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_regex_value(i8*, i1, i1, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_cd(i8*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_typeof(%sCLNodeBlock*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_system_value(%sParserInfo*)

declare %sCLNode* @sNodeTree_create_normal_block(%sCLNodeBlock*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_minus(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_primitive_minus(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_logical_denial(%sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_return(%sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_try(%sCLNodeBlock*, %sCLNodeBlock*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_primitive_plus(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_while_expression(%sCLNode*, %sCLNodeBlock*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_plus(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_primitive_equal(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_primitive_not_equal(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_primitive_greater(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_primitive_lesser(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_primitive_lesser_equal(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_primitive_greater_equal(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_int_value(i32, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_store_variable(i8*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_store_global_variable(i8*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_load_global_variable(i8*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_load_variable(i8*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_equal(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_not_equal(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_greater(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_lesser(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_lesser_equal(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_greater_equal(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_and_and(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_or_or(%sCLNode*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_string_value(i8*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_true_value(%sParserInfo*)

declare %sCLNode* @sNodeTree_create_false_value(%sParserInfo*)

declare %sCLNode* @sNodeTree_create_null_value(%sParserInfo*)

declare %sCLNode* @sNodeTree_create_command_value(i8*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_if_expression(%sCLNode*, %sCLNodeBlock*, i32, %sCLNode**, %sCLNodeBlock**, %sCLNodeBlock*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_lambda(i32, %sCLParam*, %sCLNodeBlock*, %sCLType*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_method_block(i8*, i32, %buffer*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_class(i8*, i8*, i32, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_object(%sCLType*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_method_call(i8*, i32, %sCLNode**, i1, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_command_call(%sCLNode*, i8*, i32, %sCLNode**, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_block_object_call(i32, %sCLNode**, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_load_field(%sCLNode*, i8*, %sParserInfo*)

declare %sCLNode* @NodeTree_create_store_field(%sCLNode*, i8*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_store_field(%sCLNode*, i8*, %sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_throw_exception(%sCLNode*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_macro(i8*, i8*, %sParserInfo*)

declare %sCLNode* @sNodeTree_create_call_macro(i8*, i8*, %sParserInfo*)

declare void @macro_init()

declare void @macro_final()

declare void @append_macro(i8*, i8*)

declare i1 @call_macro(%sCLNode**, i8*, i8*, %sParserInfo*)

define void @vm_init() {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %2 = call i8* @nccalloc(i64 1, i64 32)
  %3 = bitcast i8* %2 to %map__charp_int*
  %4 = call %map__charp_int* @"initialize_charp_int0_src/vm"(%map__charp_int* %3)
  store %map__charp_int* %4, %map__charp_int** @gGlobalVars, align 8
  %5 = bitcast [8192 x i8*]* %lvtable to i8*
  %6 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %5, i64 65536)
  ret void
}

define void @vm_final() {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %gGlobalVars = load %map__charp_int*, %map__charp_int** @gGlobalVars, align 8
  %2 = load %map__charp_int*, %map__charp_int** @gGlobalVars, align 8
  call void @"finalize_charp_int1_src/vm"(%map__charp_int* %2)
  %3 = ptrtoint %map__charp_int* %2 to i64
  %4 = icmp ne i64 %3, 0
  br i1 %4, label %cond_then_block, label %cond_end

cond_then_block:                                  ; preds = %entry
  br label %cond_end

cond_end:                                         ; preds = %cond_then_block, %entry
  %5 = bitcast %map__charp_int* %2 to i8*
  call void @ncfree(i8* %5)
  %6 = bitcast [8192 x i8*]* %lvtable to i8*
  %7 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %6, i64 65536)
  ret void
}

define void @vm_err_msg(%CLVALUE** %stack_ptr, %sVMInfo* %info, i8* %msg) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %stack_ptr2 = alloca %CLVALUE**
  store %CLVALUE** %stack_ptr, %CLVALUE*** %stack_ptr2, align 8
  %2 = bitcast %CLVALUE*** %stack_ptr2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %info3 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info3, align 8
  %3 = bitcast %sVMInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %msg4 = alloca i8*
  store i8* %msg, i8** %msg4, align 8
  %4 = bitcast i8** %msg4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %buf = alloca [128 x i8]
  %5 = bitcast [128 x i8]* %buf to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %info5 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %6 = getelementptr inbounds %sVMInfo, %sVMInfo* %info5, i32 0, i32 0
  %7 = bitcast [4096 x i8]* %6 to i8*
  %info6 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %8 = getelementptr inbounds %sVMInfo, %sVMInfo* %info6, i32 0, i32 1
  %9 = load i32, i32* %8, align 4
  %msg7 = load i8*, i8** %msg4, align 8
  %10 = bitcast [128 x i8]* %buf to i8*
  %11 = call i32 (i8*, i64, i8*, ...) @snprintf(i8* %10, i64 128, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_string, i32 0, i32 0), i8* %7, i32 %9, i8* %msg7)
  %info8 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %12 = bitcast [128 x i8]* %buf to i8*
  %13 = call i32 @create_string_object(i8* %12, %sVMInfo* %info8)
  %obj = alloca i32
  %14 = bitcast i32* %obj to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  store i32 %13, i32* %obj, align 4
  %stack_ptr9 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value = load %CLVALUE*, %CLVALUE** %stack_ptr9, align 8
  %obj10 = load i32, i32* %obj, align 4
  %15 = bitcast %CLVALUE* %derefference_value to i32*
  store i32 %obj10, i32* %15, align 4
  %stack_ptr11 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value12 = load %CLVALUE*, %CLVALUE** %stack_ptr11, align 8
  %16 = ptrtoint %CLVALUE* %derefference_value12 to i64
  %adddtmp = add nsw i64 %16, 4
  %IntTOPtr5c = inttoptr i64 %adddtmp to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c, %CLVALUE** %stack_ptr11, align 8
  %info13 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %17 = getelementptr inbounds %sVMInfo, %sVMInfo* %info13, i32 0, i32 6
  %18 = load %CLVALUE, %CLVALUE* %17, align 8
  %obj14 = load i32, i32* %obj, align 4
  %19 = bitcast %CLVALUE* %17 to i32*
  store i32 %obj14, i32* %19, align 4
  %20 = bitcast [8192 x i8*]* %lvtable to i8*
  %21 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %20, i64 65536)
  ret void
}

define i1 @param_check(%sCLParam* %method_params, i32 %num_params, %CLVALUE* %stack_ptr, %sCLType* %generics_types, %sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %method_params2 = alloca %sCLParam*
  store %sCLParam* %method_params, %sCLParam** %method_params2, align 8
  %2 = bitcast %sCLParam** %method_params2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %num_params3 = alloca i32
  store i32 %num_params, i32* %num_params3, align 4
  %3 = bitcast i32* %num_params3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %stack_ptr4 = alloca %CLVALUE*
  store %CLVALUE* %stack_ptr, %CLVALUE** %stack_ptr4, align 8
  %4 = bitcast %CLVALUE** %stack_ptr4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %generics_types5 = alloca %sCLType*
  store %sCLType* %generics_types, %sCLType** %generics_types5, align 8
  %5 = bitcast %sCLType** %generics_types5 to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %info6 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info6, align 8
  %6 = bitcast %sVMInfo** %info6 to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %i = alloca i32
  %7 = bitcast i32* %i to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %i7 = load i32, i32* %i, align 4
  %8 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %9 = bitcast i8* %8 to i32*
  %num_params8 = load i32, i32* %9, align 4
  %letmp = icmp slt i32 %i7, %num_params8
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %11 = bitcast i8* %10 to %CLVALUE**
  %stack_ptr9 = load %CLVALUE*, %CLVALUE** %11, align 8
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %13 = bitcast i8* %12 to i32*
  %num_params10 = load i32, i32* %13, align 4
  %14 = ptrtoint %CLVALUE* %stack_ptr9 to i64
  %sextY = sext i32 %num_params10 to i64
  %multtmp = mul nsw i64 %sextY, 4
  %subtmp = sub nsw i64 %14, %multtmp
  %IntTOPtr4b = inttoptr i64 %subtmp to %CLVALUE*
  %i11 = load i32, i32* %i, align 4
  %15 = ptrtoint %CLVALUE* %IntTOPtr4b to i64
  %sextXYZ = sext i32 %i11 to i64
  %multtmp12 = mul nsw i64 %sextXYZ, 4
  %addtmp = add nsw i64 %15, %multtmp12
  %intToPtr2 = inttoptr i64 %addtmp to %CLVALUE*
  %16 = bitcast %CLVALUE* %intToPtr2 to i32*
  %17 = load i32, i32* %16, align 4
  %obj = alloca i32
  %18 = bitcast i32* %obj to i8*
  store i8* %18, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  store i32 %17, i32* %obj, align 4
  %obj13 = load i32, i32* %obj, align 4
  %19 = call %sCLHeapMem* @get_object_pointer(i32 %obj13)
  %20 = bitcast %sCLHeapMem* %19 to %sCLObject*
  %object_data = alloca %sCLObject*
  %21 = bitcast %sCLObject** %object_data to i8*
  store i8* %21, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  store %sCLObject* %20, %sCLObject** %object_data, align 8
  %object_data14 = load %sCLObject*, %sCLObject** %object_data, align 8
  %22 = getelementptr inbounds %sCLObject, %sCLObject* %object_data14, i32 0, i32 0
  %23 = load %sCLType*, %sCLType** %22, align 8
  %stack_param = alloca %sCLType*
  %24 = bitcast %sCLType** %stack_param to i8*
  store i8* %24, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  store %sCLType* %23, %sCLType** %stack_param, align 8
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %26 = bitcast i8* %25 to %sCLParam**
  %method_params15 = load %sCLParam*, %sCLParam** %26, align 8
  %i16 = load i32, i32* %i, align 4
  %27 = ptrtoint %sCLParam* %method_params15 to i64
  %sextXYZ17 = sext i32 %i16 to i64
  %multtmp18 = mul nsw i64 %sextXYZ17, 136
  %addtmp19 = add nsw i64 %27, %multtmp18
  %intToPtr220 = inttoptr i64 %addtmp19 to %sCLParam*
  %param = alloca %sCLParam*
  %28 = bitcast %sCLParam** %param to i8*
  store i8* %28, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  store %sCLParam* %intToPtr220, %sCLParam** %param, align 8
  %param21 = load %sCLParam*, %sCLParam** %param, align 8
  %29 = getelementptr inbounds %sCLParam, %sCLParam* %param21, i32 0, i32 1
  %30 = load %sCLType*, %sCLType** %29, align 8
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %32 = bitcast i8* %31 to %sCLType**
  %generics_types22 = load %sCLType*, %sCLType** %32, align 8
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %34 = bitcast i8* %33 to %sVMInfo**
  %info23 = load %sVMInfo*, %sVMInfo** %34, align 8
  %35 = getelementptr inbounds %sVMInfo, %sVMInfo* %info23, i32 0, i32 3
  %36 = load %sCompileInfo*, %sCompileInfo** %35, align 8
  %37 = getelementptr inbounds %sCompileInfo, %sCompileInfo* %36, i32 0, i32 4
  %38 = load %sParserInfo*, %sParserInfo** %37, align 8
  %39 = call %sCLType* @solve_generics(%sCLType* %30, %sCLType* %generics_types22, %sParserInfo* %38)
  %type = alloca %sCLType*
  %40 = bitcast %sCLType** %type to i8*
  store i8* %40, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 516), align 8
  store %sCLType* %39, %sCLType** %type, align 8
  %type24 = load %sCLType*, %sCLType** %type, align 8
  %stack_param25 = load %sCLType*, %sCLType** %stack_param, align 8
  %41 = call i1 @substitution_posibility(%sCLType* %type24, %sCLType* %stack_param25)
  %LOGICAL_DIANEAL = icmp eq i1 %41, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_end_block:                                   ; preds = %loop_top_block
  %42 = bitcast [8192 x i8*]* %lvtable to i8*
  %43 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %42, i64 65536)
  ret i1 true

cond_jump_then:                                   ; preds = %cond_then_block
  %44 = bitcast [8192 x i8*]* %lvtable to i8*
  %45 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %44, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %cond_then_block
  %i26 = load i32, i32* %i, align 4
  %addtmp27 = add nsw i32 %i26, 1
  store i32 %addtmp27, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp27, 1
  br label %loop_top_block
}

define i1 @vm(%buffer* %codes, %CLVALUE* %parent_stack_ptr, i32 %num_params, i32 %var_num, %CLVALUE* %result, %CLVALUE* %init_stack, %sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %codes2 = alloca %buffer*
  store %buffer* %codes, %buffer** %codes2, align 8
  %2 = bitcast %buffer** %codes2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %parent_stack_ptr3 = alloca %CLVALUE*
  store %CLVALUE* %parent_stack_ptr, %CLVALUE** %parent_stack_ptr3, align 8
  %3 = bitcast %CLVALUE** %parent_stack_ptr3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %num_params4 = alloca i32
  store i32 %num_params, i32* %num_params4, align 4
  %4 = bitcast i32* %num_params4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %var_num5 = alloca i32
  store i32 %var_num, i32* %var_num5, align 4
  %5 = bitcast i32* %var_num5 to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %result6 = alloca %CLVALUE*
  store %CLVALUE* %result, %CLVALUE** %result6, align 8
  %6 = bitcast %CLVALUE** %result6 to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %init_stack7 = alloca %CLVALUE*
  store %CLVALUE* %init_stack, %CLVALUE** %init_stack7, align 8
  %7 = bitcast %CLVALUE** %init_stack7 to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  %info8 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info8, align 8
  %8 = bitcast %sVMInfo** %info8 to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %null_parent_stack_frame = alloca %sCLStackFrame
  %9 = bitcast %sCLStackFrame* %null_parent_stack_frame to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %null_parent_stack_frame9 = load %sCLStackFrame, %sCLStackFrame* %null_parent_stack_frame, align 8
  %10 = bitcast %sCLStackFrame* %null_parent_stack_frame to i8*
  %11 = call i8* @memset(i8* %10, i32 0, i64 32)
  %stack = alloca %CLVALUE*
  %12 = bitcast %CLVALUE** %stack to i8*
  store i8* %12, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  %stack_frame = alloca %sCLStackFrame
  %13 = bitcast %sCLStackFrame* %stack_frame to i8*
  store i8* %13, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  %stack2 = alloca [1024 x %CLVALUE]
  %14 = bitcast [1024 x %CLVALUE]* %stack2 to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 516), align 8
  %stack_ptr = alloca %CLVALUE*
  %15 = bitcast %CLVALUE** %stack_ptr to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %head_codes = alloca i32*
  %16 = bitcast i32** %head_codes to i8*
  store i8* %16, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 518), align 8
  %p = alloca i32*
  %17 = bitcast i32** %p to i8*
  store i8* %17, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %init_stack10 = load %CLVALUE*, %CLVALUE** %init_stack7, align 8
  %18 = ptrtoint %CLVALUE* %init_stack10 to i64
  %19 = icmp ne i64 %18, 0
  br i1 %19, label %cond_jump_then, label %cond_else_block

cond_jump_then:                                   ; preds = %entry
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  %21 = bitcast i8* %20 to %CLVALUE**
  %init_stack11 = load %CLVALUE*, %CLVALUE** %21, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  %23 = bitcast i8* %22 to %CLVALUE**
  store %CLVALUE* %init_stack11, %CLVALUE** %23, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  %25 = bitcast i8* %24 to %CLVALUE**
  %stack12 = load %CLVALUE*, %CLVALUE** %25, align 8
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %27 = bitcast i8* %26 to i32*
  %var_num13 = load i32, i32* %27, align 4
  %28 = ptrtoint %CLVALUE* %stack12 to i64
  %sextXYZ = sext i32 %var_num13 to i64
  %multtmp = mul nsw i64 %sextXYZ, 4
  %addtmp = add nsw i64 %28, %multtmp
  %intToPtr2 = inttoptr i64 %addtmp to %CLVALUE*
  %29 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %30 = bitcast i8* %29 to %CLVALUE**
  store %CLVALUE* %intToPtr2, %CLVALUE** %30, align 8
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %32 = bitcast i8* %31 to %buffer**
  %codes14 = load %buffer*, %buffer** %32, align 8
  %33 = getelementptr inbounds %buffer, %buffer* %codes14, i32 0, i32 0
  %34 = load i8*, i8** %33, align 8
  %35 = bitcast i8* %34 to i32*
  %36 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 518), align 8
  %37 = bitcast i8* %36 to i32**
  store i32* %35, i32** %37, align 8
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %39 = bitcast i8* %38 to %buffer**
  %codes15 = load %buffer*, %buffer** %39, align 8
  %40 = getelementptr inbounds %buffer, %buffer* %codes15, i32 0, i32 0
  %41 = load i8*, i8** %40, align 8
  %42 = bitcast i8* %41 to i32*
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %44 = bitcast i8* %43 to i32**
  store i32* %42, i32** %44, align 8
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  %46 = bitcast i8* %45 to %sCLStackFrame*
  %stack_frame16 = load %sCLStackFrame, %sCLStackFrame* %46, align 8
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  %48 = bitcast i8* %47 to %CLVALUE**
  %stack17 = load %CLVALUE*, %CLVALUE** %48, align 8
  %49 = getelementptr inbounds %sCLStackFrame, %sCLStackFrame* %46, i32 0, i32 1
  store %CLVALUE* %stack17, %CLVALUE** %49, align 8
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  %51 = bitcast i8* %50 to %sCLStackFrame*
  %stack_frame18 = load %sCLStackFrame, %sCLStackFrame* %51, align 8
  %52 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %53 = bitcast i8* %52 to %CLVALUE**
  %stack_ptr19 = load %CLVALUE*, %CLVALUE** %53, align 8
  %54 = getelementptr inbounds %sCLStackFrame, %sCLStackFrame* %51, i32 0, i32 2
  store %CLVALUE** %53, %CLVALUE*** %54, align 8
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  %56 = bitcast i8* %55 to %sCLStackFrame*
  %stack_frame20 = load %sCLStackFrame, %sCLStackFrame* %56, align 8
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %58 = bitcast i8* %57 to i32*
  %var_num21 = load i32, i32* %58, align 4
  %59 = getelementptr inbounds %sCLStackFrame, %sCLStackFrame* %56, i32 0, i32 3
  store i32 %var_num21, i32* %59, align 4
  %60 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  %61 = bitcast i8* %60 to %sCLStackFrame*
  %stack_frame22 = load %sCLStackFrame, %sCLStackFrame* %61, align 8
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %63 = bitcast i8* %62 to %sVMInfo**
  %info23 = load %sVMInfo*, %sVMInfo** %63, align 8
  %64 = getelementptr inbounds %sVMInfo, %sVMInfo* %info23, i32 0, i32 5
  %65 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %64, align 8
  %66 = call i32 @"length_sCLStackFrame7_src/vm"(%vector__sCLStackFrame* %65)
  %67 = getelementptr inbounds %sCLStackFrame, %sCLStackFrame* %61, i32 0, i32 0
  store i32 %66, i32* %67, align 4
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %69 = bitcast i8* %68 to %sVMInfo**
  %info24 = load %sVMInfo*, %sVMInfo** %69, align 8
  %70 = getelementptr inbounds %sVMInfo, %sVMInfo* %info24, i32 0, i32 5
  %71 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %70, align 8
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  %73 = bitcast i8* %72 to %sCLStackFrame*
  %stack_frame25 = load %sCLStackFrame, %sCLStackFrame* %73, align 8
  call void @"push_back_sCLStackFrame8_src/vm"(%vector__sCLStackFrame* %71, %sCLStackFrame %stack_frame25)
  br label %cond_end

cond_else_block:                                  ; preds = %entry
  %74 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 516), align 8
  %75 = bitcast i8* %74 to [1024 x %CLVALUE]*
  %76 = bitcast [1024 x %CLVALUE]* %75 to %CLVALUE*
  %77 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  %78 = bitcast i8* %77 to %CLVALUE**
  store %CLVALUE* %76, %CLVALUE** %78, align 8
  %79 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  %80 = bitcast i8* %79 to %CLVALUE**
  %stack26 = load %CLVALUE*, %CLVALUE** %80, align 8
  %81 = bitcast %CLVALUE* %stack26 to i8*
  %82 = call i8* @memset(i8* %81, i32 0, i64 4096)
  %83 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  %84 = bitcast i8* %83 to %CLVALUE**
  %stack27 = load %CLVALUE*, %CLVALUE** %84, align 8
  %85 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %86 = bitcast i8* %85 to i32*
  %var_num28 = load i32, i32* %86, align 4
  %87 = ptrtoint %CLVALUE* %stack27 to i64
  %sextXYZ29 = sext i32 %var_num28 to i64
  %multtmp30 = mul nsw i64 %sextXYZ29, 4
  %addtmp31 = add nsw i64 %87, %multtmp30
  %intToPtr232 = inttoptr i64 %addtmp31 to %CLVALUE*
  %88 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %89 = bitcast i8* %88 to %CLVALUE**
  store %CLVALUE* %intToPtr232, %CLVALUE** %89, align 8
  %90 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %91 = bitcast i8* %90 to %buffer**
  %codes33 = load %buffer*, %buffer** %91, align 8
  %92 = getelementptr inbounds %buffer, %buffer* %codes33, i32 0, i32 0
  %93 = load i8*, i8** %92, align 8
  %94 = bitcast i8* %93 to i32*
  %95 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 518), align 8
  %96 = bitcast i8* %95 to i32**
  store i32* %94, i32** %96, align 8
  %97 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %98 = bitcast i8* %97 to %buffer**
  %codes34 = load %buffer*, %buffer** %98, align 8
  %99 = getelementptr inbounds %buffer, %buffer* %codes34, i32 0, i32 0
  %100 = load i8*, i8** %99, align 8
  %101 = bitcast i8* %100 to i32*
  %102 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %103 = bitcast i8* %102 to i32**
  store i32* %101, i32** %103, align 8
  %104 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  %105 = bitcast i8* %104 to %sCLStackFrame*
  %stack_frame35 = load %sCLStackFrame, %sCLStackFrame* %105, align 8
  %106 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  %107 = bitcast i8* %106 to %CLVALUE**
  %stack36 = load %CLVALUE*, %CLVALUE** %107, align 8
  %108 = getelementptr inbounds %sCLStackFrame, %sCLStackFrame* %105, i32 0, i32 1
  store %CLVALUE* %stack36, %CLVALUE** %108, align 8
  %109 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  %110 = bitcast i8* %109 to %sCLStackFrame*
  %stack_frame37 = load %sCLStackFrame, %sCLStackFrame* %110, align 8
  %111 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %112 = bitcast i8* %111 to %CLVALUE**
  %stack_ptr38 = load %CLVALUE*, %CLVALUE** %112, align 8
  %113 = getelementptr inbounds %sCLStackFrame, %sCLStackFrame* %110, i32 0, i32 2
  store %CLVALUE** %112, %CLVALUE*** %113, align 8
  %114 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  %115 = bitcast i8* %114 to %sCLStackFrame*
  %stack_frame39 = load %sCLStackFrame, %sCLStackFrame* %115, align 8
  %116 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %117 = bitcast i8* %116 to i32*
  %var_num40 = load i32, i32* %117, align 4
  %118 = getelementptr inbounds %sCLStackFrame, %sCLStackFrame* %115, i32 0, i32 3
  store i32 %var_num40, i32* %118, align 4
  %119 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  %120 = bitcast i8* %119 to %sCLStackFrame*
  %stack_frame41 = load %sCLStackFrame, %sCLStackFrame* %120, align 8
  %121 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %122 = bitcast i8* %121 to %sVMInfo**
  %info42 = load %sVMInfo*, %sVMInfo** %122, align 8
  %123 = getelementptr inbounds %sVMInfo, %sVMInfo* %info42, i32 0, i32 5
  %124 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %123, align 8
  %125 = call i32 @"length_sCLStackFrame9_src/vm"(%vector__sCLStackFrame* %124)
  %126 = getelementptr inbounds %sCLStackFrame, %sCLStackFrame* %120, i32 0, i32 0
  store i32 %125, i32* %126, align 4
  %127 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %128 = bitcast i8* %127 to %sVMInfo**
  %info43 = load %sVMInfo*, %sVMInfo** %128, align 8
  %129 = getelementptr inbounds %sVMInfo, %sVMInfo* %info43, i32 0, i32 5
  %130 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %129, align 8
  %131 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  %132 = bitcast i8* %131 to %sCLStackFrame*
  %stack_frame44 = load %sCLStackFrame, %sCLStackFrame* %132, align 8
  call void @"push_back_sCLStackFrame10_src/vm"(%vector__sCLStackFrame* %130, %sCLStackFrame %stack_frame44)
  br label %cond_end

cond_end:                                         ; preds = %cond_else_block, %cond_jump_then
  %stack45 = load %CLVALUE*, %CLVALUE** %stack, align 8
  %parent_stack_ptr46 = load %CLVALUE*, %CLVALUE** %parent_stack_ptr3, align 8
  %num_params47 = load i32, i32* %num_params4, align 4
  %var_num48 = load i32, i32* %var_num5, align 4
  %info49 = load %sVMInfo*, %sVMInfo** %info8, align 8
  call void @ready_for_vm_stack(%CLVALUE* %stack45, %CLVALUE* %parent_stack_ptr46, i32 %num_params47, i32 %var_num48, %sVMInfo* %info49)
  br label %loop_top_block

loop_top_block:                                   ; preds = %end_block, %cond_end
  %p50 = load i32*, i32** %p, align 8
  %head_codes51 = load i32*, i32** %head_codes, align 8
  %133 = ptrtoint i32* %p50 to i64
  %134 = ptrtoint i32* %head_codes51 to i64
  %subtmp = sub nsw i64 %133, %134
  %codes52 = load %buffer*, %buffer** %codes2, align 8
  %135 = getelementptr inbounds %buffer, %buffer* %codes52, i32 0, i32 1
  %136 = load i32, i32* %135, align 4
  %sext14 = zext i32 %136 to i64
  %letmp = icmp slt i64 %subtmp, %sext14
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %137 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %138 = bitcast i8* %137 to i32**
  %p53 = load i32*, i32** %138, align 8
  %derefference_value = load i32, i32* %p53, align 8
  %op = alloca i32
  %139 = bitcast i32* %op to i8*
  store i8* %139, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  store i32 %derefference_value, i32* %op, align 4
  %140 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %141 = bitcast i8* %140 to i32**
  %p54 = load i32*, i32** %141, align 8
  %142 = ptrtoint i32* %p54 to i64
  %addtmp55 = add nsw i64 %142, 4
  %intToPtr256 = inttoptr i64 %addtmp55 to i32*
  %143 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %144 = bitcast i8* %143 to i32**
  store i32* %intToPtr256, i32** %144, align 8
  %145 = ptrtoint i32* %intToPtr256 to i64
  %subtmp57 = sub nsw i64 %145, 4
  %IntTOPtr4b = inttoptr i64 %subtmp57 to i32*
  %gSigInt = load i32, i32* @gSigInt, align 4
  %146 = icmp ne i32 %gSigInt, 0
  br i1 %146, label %cond_jump_then58, label %cond_end59

cond_end_block:                                   ; preds = %loop_top_block
  %result1965 = load %CLVALUE*, %CLVALUE** %result6, align 8
  %stack_ptr1966 = load %CLVALUE*, %CLVALUE** %stack_ptr, align 8
  %147 = ptrtoint %CLVALUE* %stack_ptr1966 to i64
  %subtmp1967 = sub nsw i64 %147, 4
  %IntTOPtr4b1968 = inttoptr i64 %subtmp1967 to %CLVALUE*
  %derefference_value1969 = load %CLVALUE, %CLVALUE* %IntTOPtr4b1968, align 8
  store %CLVALUE %derefference_value1969, %CLVALUE* %result1965, align 8
  %info1970 = load %sVMInfo*, %sVMInfo** %info8, align 8
  %148 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1970, i32 0, i32 5
  %149 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %148, align 8
  %null_parent_stack_frame1971 = load %sCLStackFrame, %sCLStackFrame* %null_parent_stack_frame, align 8
  %150 = call %sCLStackFrame @"pop_back_sCLStackFrame44_src/vm"(%vector__sCLStackFrame* %149, %sCLStackFrame %null_parent_stack_frame1971)
  %151 = bitcast [8192 x i8*]* %lvtable to i8*
  %152 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %151, i64 65536)
  ret i1 true

cond_jump_then58:                                 ; preds = %cond_then_block
  store i32 0, i32* @gSigInt, align 4
  %153 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %154 = bitcast i8* %153 to %CLVALUE**
  %stack_ptr60 = load %CLVALUE*, %CLVALUE** %154, align 8
  %155 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %156 = bitcast i8* %155 to %sVMInfo**
  %info61 = load %sVMInfo*, %sVMInfo** %156, align 8
  call void @vm_err_msg(%CLVALUE** %154, %sVMInfo* %info61, i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_string.75, i32 0, i32 0))
  %157 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %158 = bitcast i8* %157 to %sVMInfo**
  %info62 = load %sVMInfo*, %sVMInfo** %158, align 8
  %159 = getelementptr inbounds %sVMInfo, %sVMInfo* %info62, i32 0, i32 5
  %160 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %159, align 8
  %161 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %162 = bitcast i8* %161 to %sCLStackFrame*
  %null_parent_stack_frame63 = load %sCLStackFrame, %sCLStackFrame* %162, align 8
  %163 = call %sCLStackFrame @"pop_back_sCLStackFrame11_src/vm"(%vector__sCLStackFrame* %160, %sCLStackFrame %null_parent_stack_frame63)
  %164 = bitcast [8192 x i8*]* %lvtable to i8*
  %165 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %164, i64 65536)
  ret i1 false

cond_end59:                                       ; preds = %cond_then_block
  %op64 = load i32, i32* %op, align 4
  %eqtmpY = icmp eq i32 %op64, 0
  br i1 %eqtmpY, label %cond_then_block65, label %cond_else_block66

end_block:                                        ; preds = %cond_else_block1950, %cond_then_block1949, %cond_end1937, %cond_then_block1799, %cond_end1774, %cond_end1717, %cond_end1425, %cond_then_block1318, %cond_end1305, %cond_end1265, %cond_then_block1208, %cond_then_block1178, %cond_then_block1157, %cond_then_block1140, %cond_then_block1105, %cond_then_block1070, %cond_then_block1035, %cond_then_block999, %cond_then_block970, %cond_jump_end948, %cond_jump_end911, %cond_end850, %cond_end782, %cond_end705, %cond_end637, %cond_end593, %cond_end548, %cond_then_block495, %cond_then_block460, %cond_then_block431, %cond_then_block365, %cond_end346, %cond_end317, %cond_then_block214, %cond_then_block181, %cond_then_block168, %cond_end145, %cond_then_block112, %cond_then_block101, %cond_then_block90, %cond_then_block72, %cond_then_block65
  br label %loop_top_block

cond_then_block65:                                ; preds = %cond_end59
  %166 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %167 = bitcast i8* %166 to %CLVALUE**
  %stack_ptr67 = load %CLVALUE*, %CLVALUE** %167, align 8
  %168 = ptrtoint %CLVALUE* %stack_ptr67 to i64
  %subtmp68 = sub nsw i64 %168, 4
  %IntTOPtr4b69 = inttoptr i64 %subtmp68 to %CLVALUE*
  %169 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %170 = bitcast i8* %169 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b69, %CLVALUE** %170, align 8
  %171 = ptrtoint %CLVALUE* %IntTOPtr4b69 to i64
  %addtmp70 = add nsw i64 %171, 4
  %intToPtr271 = inttoptr i64 %addtmp70 to %CLVALUE*
  br label %end_block

cond_else_block66:                                ; preds = %after_break, %cond_end59
  %eqtmpY74 = icmp eq i32 %op64, 1
  br i1 %eqtmpY74, label %cond_then_block72, label %cond_else_block73

after_break:                                      ; No predecessors!
  br label %cond_else_block66

cond_then_block72:                                ; preds = %cond_else_block66
  %172 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %173 = bitcast i8* %172 to %CLVALUE**
  %stack_ptr75 = load %CLVALUE*, %CLVALUE** %173, align 8
  %174 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %175 = bitcast i8* %174 to i32**
  %p76 = load i32*, i32** %175, align 8
  %derefference_value77 = load i32, i32* %p76, align 8
  %176 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %177 = bitcast i8* %176 to %sVMInfo**
  %info78 = load %sVMInfo*, %sVMInfo** %177, align 8
  %178 = call i32 @create_int_object(i32 %derefference_value77, %sVMInfo* %info78)
  %179 = bitcast %CLVALUE* %stack_ptr75 to i32*
  store i32 %178, i32* %179, align 4
  %180 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %181 = bitcast i8* %180 to i32**
  %p79 = load i32*, i32** %181, align 8
  %182 = ptrtoint i32* %p79 to i64
  %addtmp80 = add nsw i64 %182, 4
  %intToPtr281 = inttoptr i64 %addtmp80 to i32*
  %183 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %184 = bitcast i8* %183 to i32**
  store i32* %intToPtr281, i32** %184, align 8
  %185 = ptrtoint i32* %intToPtr281 to i64
  %subtmp82 = sub nsw i64 %185, 4
  %IntTOPtr4b83 = inttoptr i64 %subtmp82 to i32*
  %186 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %187 = bitcast i8* %186 to %CLVALUE**
  %stack_ptr84 = load %CLVALUE*, %CLVALUE** %187, align 8
  %188 = ptrtoint %CLVALUE* %stack_ptr84 to i64
  %addtmp85 = add nsw i64 %188, 4
  %intToPtr286 = inttoptr i64 %addtmp85 to %CLVALUE*
  %189 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %190 = bitcast i8* %189 to %CLVALUE**
  store %CLVALUE* %intToPtr286, %CLVALUE** %190, align 8
  %191 = ptrtoint %CLVALUE* %intToPtr286 to i64
  %subtmp87 = sub nsw i64 %191, 4
  %IntTOPtr4b88 = inttoptr i64 %subtmp87 to %CLVALUE*
  br label %end_block

cond_else_block73:                                ; preds = %after_break89, %cond_else_block66
  %eqtmpY92 = icmp eq i32 %op64, 31
  br i1 %eqtmpY92, label %cond_then_block90, label %cond_else_block91

after_break89:                                    ; No predecessors!
  br label %cond_else_block73

cond_then_block90:                                ; preds = %cond_else_block73
  %192 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %193 = bitcast i8* %192 to %CLVALUE**
  %stack_ptr93 = load %CLVALUE*, %CLVALUE** %193, align 8
  %194 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %195 = bitcast i8* %194 to %sVMInfo**
  %info94 = load %sVMInfo*, %sVMInfo** %195, align 8
  %196 = call i32 @create_bool_object(i32 1, %sVMInfo* %info94)
  %197 = bitcast %CLVALUE* %stack_ptr93 to i32*
  store i32 %196, i32* %197, align 4
  %198 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %199 = bitcast i8* %198 to %CLVALUE**
  %stack_ptr95 = load %CLVALUE*, %CLVALUE** %199, align 8
  %200 = ptrtoint %CLVALUE* %stack_ptr95 to i64
  %addtmp96 = add nsw i64 %200, 4
  %intToPtr297 = inttoptr i64 %addtmp96 to %CLVALUE*
  %201 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %202 = bitcast i8* %201 to %CLVALUE**
  store %CLVALUE* %intToPtr297, %CLVALUE** %202, align 8
  %203 = ptrtoint %CLVALUE* %intToPtr297 to i64
  %subtmp98 = sub nsw i64 %203, 4
  %IntTOPtr4b99 = inttoptr i64 %subtmp98 to %CLVALUE*
  br label %end_block

cond_else_block91:                                ; preds = %after_break100, %cond_else_block73
  %eqtmpY103 = icmp eq i32 %op64, 32
  br i1 %eqtmpY103, label %cond_then_block101, label %cond_else_block102

after_break100:                                   ; No predecessors!
  br label %cond_else_block91

cond_then_block101:                               ; preds = %cond_else_block91
  %204 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %205 = bitcast i8* %204 to %CLVALUE**
  %stack_ptr104 = load %CLVALUE*, %CLVALUE** %205, align 8
  %206 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %207 = bitcast i8* %206 to %sVMInfo**
  %info105 = load %sVMInfo*, %sVMInfo** %207, align 8
  %208 = call i32 @create_bool_object(i32 0, %sVMInfo* %info105)
  %209 = bitcast %CLVALUE* %stack_ptr104 to i32*
  store i32 %208, i32* %209, align 4
  %210 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %211 = bitcast i8* %210 to %CLVALUE**
  %stack_ptr106 = load %CLVALUE*, %CLVALUE** %211, align 8
  %212 = ptrtoint %CLVALUE* %stack_ptr106 to i64
  %addtmp107 = add nsw i64 %212, 4
  %intToPtr2108 = inttoptr i64 %addtmp107 to %CLVALUE*
  %213 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %214 = bitcast i8* %213 to %CLVALUE**
  store %CLVALUE* %intToPtr2108, %CLVALUE** %214, align 8
  %215 = ptrtoint %CLVALUE* %intToPtr2108 to i64
  %subtmp109 = sub nsw i64 %215, 4
  %IntTOPtr4b110 = inttoptr i64 %subtmp109 to %CLVALUE*
  br label %end_block

cond_else_block102:                               ; preds = %after_break111, %cond_else_block91
  %eqtmpY114 = icmp eq i32 %op64, 35
  br i1 %eqtmpY114, label %cond_then_block112, label %cond_else_block113

after_break111:                                   ; No predecessors!
  br label %cond_else_block102

cond_then_block112:                               ; preds = %cond_else_block102
  %216 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %217 = bitcast i8* %216 to %sVMInfo**
  %info115 = load %sVMInfo*, %sVMInfo** %217, align 8
  %218 = call i32 @create_null_object(%sVMInfo* %info115)
  %obj = alloca i32
  %219 = bitcast i32* %obj to i8*
  store i8* %219, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %218, i32* %obj, align 4
  %220 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %221 = bitcast i8* %220 to %CLVALUE**
  %stack_ptr116 = load %CLVALUE*, %CLVALUE** %221, align 8
  %obj117 = load i32, i32* %obj, align 4
  %222 = bitcast %CLVALUE* %stack_ptr116 to i32*
  store i32 %obj117, i32* %222, align 4
  %223 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %224 = bitcast i8* %223 to %CLVALUE**
  %stack_ptr118 = load %CLVALUE*, %CLVALUE** %224, align 8
  %225 = ptrtoint %CLVALUE* %stack_ptr118 to i64
  %addtmp119 = add nsw i64 %225, 4
  %intToPtr2120 = inttoptr i64 %addtmp119 to %CLVALUE*
  %226 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %227 = bitcast i8* %226 to %CLVALUE**
  store %CLVALUE* %intToPtr2120, %CLVALUE** %227, align 8
  %228 = ptrtoint %CLVALUE* %intToPtr2120 to i64
  %subtmp121 = sub nsw i64 %228, 4
  %IntTOPtr4b122 = inttoptr i64 %subtmp121 to %CLVALUE*
  br label %end_block

cond_else_block113:                               ; preds = %after_break123, %cond_else_block102
  %eqtmpY126 = icmp eq i32 %op64, 41
  br i1 %eqtmpY126, label %cond_then_block124, label %cond_else_block125

after_break123:                                   ; No predecessors!
  br label %cond_else_block113

cond_then_block124:                               ; preds = %cond_else_block113
  %229 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %230 = bitcast i8* %229 to i32**
  %p127 = load i32*, i32** %230, align 8
  %231 = bitcast i32* %p127 to i8*
  %str = alloca i8*
  %232 = bitcast i8** %str to i8*
  store i8* %232, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i8* %231, i8** %str, align 8
  %str128 = load i8*, i8** %str, align 8
  %233 = call i64 @strlen(i8* %str128)
  %addtmp129 = add nsw i64 %233, 1
  %234 = trunc i64 %addtmp129 to i32
  %len = alloca i32
  %235 = bitcast i32* %len to i8*
  store i8* %235, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %234, i32* %len, align 4
  %len130 = load i32, i32* %len, align 4
  call void @alignment(i32* %len)
  %len131 = load i32, i32* %len, align 4
  %divtmp = sdiv i32 %len131, 4
  store i32 %divtmp, i32* %len, align 4
  %236 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %237 = bitcast i8* %236 to i32**
  %p132 = load i32*, i32** %237, align 8
  %len133 = load i32, i32* %len, align 4
  %238 = ptrtoint i32* %p132 to i64
  %sextXYZ134 = sext i32 %len133 to i64
  %multtmp135 = mul nsw i64 %sextXYZ134, 4
  %addtmp136 = add nsw i64 %238, %multtmp135
  %intToPtr2137 = inttoptr i64 %addtmp136 to i32*
  %239 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %240 = bitcast i8* %239 to i32**
  store i32* %intToPtr2137, i32** %240, align 8
  %len138 = load i32, i32* %len, align 4
  %241 = ptrtoint i32* %intToPtr2137 to i64
  %sextY = sext i32 %len138 to i64
  %multtmp139 = mul nsw i64 %sextY, 4
  %subtmp140 = sub nsw i64 %241, %multtmp139
  %IntTOPtr4b141 = inttoptr i64 %subtmp140 to i32*
  %str142 = load i8*, i8** %str, align 8
  %242 = call i64 @strlen(i8* %str142)
  %eqtmpX = icmp eq i64 %242, 0
  br i1 %eqtmpX, label %cond_jump_then143, label %cond_else_block144

cond_else_block125:                               ; preds = %after_break167, %cond_else_block113
  %eqtmpY170 = icmp eq i32 %op64, 45
  br i1 %eqtmpY170, label %cond_then_block168, label %cond_else_block169

cond_jump_then143:                                ; preds = %cond_then_block124
  %243 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %244 = bitcast i8* %243 to %sVMInfo**
  %info146 = load %sVMInfo*, %sVMInfo** %244, align 8
  %245 = call i32 @create_command_object(i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.76, i32 0, i32 0), i32 1, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.77, i32 0, i32 0), i32 1, i32 0, i1 true, %sVMInfo* %info146)
  %obj147 = alloca i32
  %246 = bitcast i32* %obj147 to i8*
  store i8* %246, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store i32 %245, i32* %obj147, align 4
  %247 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %248 = bitcast i8* %247 to %CLVALUE**
  %stack_ptr148 = load %CLVALUE*, %CLVALUE** %248, align 8
  %obj149 = load i32, i32* %obj147, align 4
  %249 = bitcast %CLVALUE* %stack_ptr148 to i32*
  store i32 %obj149, i32* %249, align 4
  %250 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %251 = bitcast i8* %250 to %CLVALUE**
  %stack_ptr150 = load %CLVALUE*, %CLVALUE** %251, align 8
  %252 = ptrtoint %CLVALUE* %stack_ptr150 to i64
  %addtmp151 = add nsw i64 %252, 4
  %intToPtr2152 = inttoptr i64 %addtmp151 to %CLVALUE*
  %253 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %254 = bitcast i8* %253 to %CLVALUE**
  store %CLVALUE* %intToPtr2152, %CLVALUE** %254, align 8
  %255 = ptrtoint %CLVALUE* %intToPtr2152 to i64
  %subtmp153 = sub nsw i64 %255, 4
  %IntTOPtr4b154 = inttoptr i64 %subtmp153 to %CLVALUE*
  br label %cond_end145

cond_else_block144:                               ; preds = %cond_then_block124
  %256 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %257 = bitcast i8* %256 to i8**
  %str155 = load i8*, i8** %257, align 8
  %258 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %259 = bitcast i8* %258 to i8**
  %str156 = load i8*, i8** %259, align 8
  %260 = call i64 @strlen(i8* %str156)
  %addtmp157 = add nsw i64 %260, 1
  %261 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %262 = bitcast i8* %261 to %sVMInfo**
  %info158 = load %sVMInfo*, %sVMInfo** %262, align 8
  %263 = trunc i64 %addtmp157 to i32
  %264 = call i32 @create_command_object(i8* %str155, i32 %263, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.78, i32 0, i32 0), i32 1, i32 0, i1 false, %sVMInfo* %info158)
  %obj159 = alloca i32
  %265 = bitcast i32* %obj159 to i8*
  store i8* %265, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store i32 %264, i32* %obj159, align 4
  %266 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %267 = bitcast i8* %266 to %CLVALUE**
  %stack_ptr160 = load %CLVALUE*, %CLVALUE** %267, align 8
  %obj161 = load i32, i32* %obj159, align 4
  %268 = bitcast %CLVALUE* %stack_ptr160 to i32*
  store i32 %obj161, i32* %268, align 4
  %269 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %270 = bitcast i8* %269 to %CLVALUE**
  %stack_ptr162 = load %CLVALUE*, %CLVALUE** %270, align 8
  %271 = ptrtoint %CLVALUE* %stack_ptr162 to i64
  %addtmp163 = add nsw i64 %271, 4
  %intToPtr2164 = inttoptr i64 %addtmp163 to %CLVALUE*
  %272 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %273 = bitcast i8* %272 to %CLVALUE**
  store %CLVALUE* %intToPtr2164, %CLVALUE** %273, align 8
  %274 = ptrtoint %CLVALUE* %intToPtr2164 to i64
  %subtmp165 = sub nsw i64 %274, 4
  %IntTOPtr4b166 = inttoptr i64 %subtmp165 to %CLVALUE*
  br label %cond_end145

cond_end145:                                      ; preds = %cond_else_block144, %cond_jump_then143
  br label %end_block

after_break167:                                   ; No predecessors!
  br label %cond_else_block125

cond_then_block168:                               ; preds = %cond_else_block125
  %275 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %276 = bitcast i8* %275 to %sVMInfo**
  %info171 = load %sVMInfo*, %sVMInfo** %276, align 8
  %277 = call i32 @create_system_object(%sVMInfo* %info171)
  %obj172 = alloca i32
  %278 = bitcast i32* %obj172 to i8*
  store i8* %278, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %277, i32* %obj172, align 4
  %279 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %280 = bitcast i8* %279 to %CLVALUE**
  %stack_ptr173 = load %CLVALUE*, %CLVALUE** %280, align 8
  %obj174 = load i32, i32* %obj172, align 4
  %281 = bitcast %CLVALUE* %stack_ptr173 to i32*
  store i32 %obj174, i32* %281, align 4
  %282 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %283 = bitcast i8* %282 to %CLVALUE**
  %stack_ptr175 = load %CLVALUE*, %CLVALUE** %283, align 8
  %284 = ptrtoint %CLVALUE* %stack_ptr175 to i64
  %addtmp176 = add nsw i64 %284, 4
  %intToPtr2177 = inttoptr i64 %addtmp176 to %CLVALUE*
  %285 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %286 = bitcast i8* %285 to %CLVALUE**
  store %CLVALUE* %intToPtr2177, %CLVALUE** %286, align 8
  %287 = ptrtoint %CLVALUE* %intToPtr2177 to i64
  %subtmp178 = sub nsw i64 %287, 4
  %IntTOPtr4b179 = inttoptr i64 %subtmp178 to %CLVALUE*
  br label %end_block

cond_else_block169:                               ; preds = %after_break180, %cond_else_block125
  %eqtmpY183 = icmp eq i32 %op64, 2
  br i1 %eqtmpY183, label %cond_then_block181, label %cond_else_block182

after_break180:                                   ; No predecessors!
  br label %cond_else_block169

cond_then_block181:                               ; preds = %cond_else_block169
  %288 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %289 = bitcast i8* %288 to i32**
  %p184 = load i32*, i32** %289, align 8
  %290 = bitcast i32* %p184 to i8*
  %str185 = alloca i8*
  %291 = bitcast i8** %str185 to i8*
  store i8* %291, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i8* %290, i8** %str185, align 8
  %str186 = load i8*, i8** %str185, align 8
  %292 = call i64 @strlen(i8* %str186)
  %addtmp187 = add nsw i64 %292, 1
  %293 = trunc i64 %addtmp187 to i32
  %len188 = alloca i32
  %294 = bitcast i32* %len188 to i8*
  store i8* %294, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %293, i32* %len188, align 4
  %len189 = load i32, i32* %len188, align 4
  call void @alignment(i32* %len188)
  %len190 = load i32, i32* %len188, align 4
  %divtmp191 = sdiv i32 %len190, 4
  store i32 %divtmp191, i32* %len188, align 4
  %295 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %296 = bitcast i8* %295 to i32**
  %p192 = load i32*, i32** %296, align 8
  %len193 = load i32, i32* %len188, align 4
  %297 = ptrtoint i32* %p192 to i64
  %sextXYZ194 = sext i32 %len193 to i64
  %multtmp195 = mul nsw i64 %sextXYZ194, 4
  %addtmp196 = add nsw i64 %297, %multtmp195
  %intToPtr2197 = inttoptr i64 %addtmp196 to i32*
  %298 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %299 = bitcast i8* %298 to i32**
  store i32* %intToPtr2197, i32** %299, align 8
  %len198 = load i32, i32* %len188, align 4
  %300 = ptrtoint i32* %intToPtr2197 to i64
  %sextY199 = sext i32 %len198 to i64
  %multtmp200 = mul nsw i64 %sextY199, 4
  %subtmp201 = sub nsw i64 %300, %multtmp200
  %IntTOPtr4b202 = inttoptr i64 %subtmp201 to i32*
  %str203 = load i8*, i8** %str185, align 8
  %301 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %302 = bitcast i8* %301 to %sVMInfo**
  %info204 = load %sVMInfo*, %sVMInfo** %302, align 8
  %303 = call i32 @create_string_object(i8* %str203, %sVMInfo* %info204)
  %obj205 = alloca i32
  %304 = bitcast i32* %obj205 to i8*
  store i8* %304, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store i32 %303, i32* %obj205, align 4
  %305 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %306 = bitcast i8* %305 to %CLVALUE**
  %stack_ptr206 = load %CLVALUE*, %CLVALUE** %306, align 8
  %obj207 = load i32, i32* %obj205, align 4
  %307 = bitcast %CLVALUE* %stack_ptr206 to i32*
  store i32 %obj207, i32* %307, align 4
  %308 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %309 = bitcast i8* %308 to %CLVALUE**
  %stack_ptr208 = load %CLVALUE*, %CLVALUE** %309, align 8
  %310 = ptrtoint %CLVALUE* %stack_ptr208 to i64
  %addtmp209 = add nsw i64 %310, 4
  %intToPtr2210 = inttoptr i64 %addtmp209 to %CLVALUE*
  %311 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %312 = bitcast i8* %311 to %CLVALUE**
  store %CLVALUE* %intToPtr2210, %CLVALUE** %312, align 8
  %313 = ptrtoint %CLVALUE* %intToPtr2210 to i64
  %subtmp211 = sub nsw i64 %313, 4
  %IntTOPtr4b212 = inttoptr i64 %subtmp211 to %CLVALUE*
  br label %end_block

cond_else_block182:                               ; preds = %after_break213, %cond_else_block169
  %eqtmpY216 = icmp eq i32 %op64, 43
  br i1 %eqtmpY216, label %cond_then_block214, label %cond_else_block215

after_break213:                                   ; No predecessors!
  br label %cond_else_block182

cond_then_block214:                               ; preds = %cond_else_block182
  %314 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %315 = bitcast i8* %314 to i32**
  %p217 = load i32*, i32** %315, align 8
  %316 = bitcast i32* %p217 to i8*
  %str218 = alloca i8*
  %317 = bitcast i8** %str218 to i8*
  store i8* %317, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i8* %316, i8** %str218, align 8
  %str219 = load i8*, i8** %str218, align 8
  %318 = call i64 @strlen(i8* %str219)
  %addtmp220 = add nsw i64 %318, 1
  %319 = trunc i64 %addtmp220 to i32
  %len221 = alloca i32
  %320 = bitcast i32* %len221 to i8*
  store i8* %320, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %319, i32* %len221, align 4
  %len222 = load i32, i32* %len221, align 4
  call void @alignment(i32* %len221)
  %len223 = load i32, i32* %len221, align 4
  %divtmp224 = sdiv i32 %len223, 4
  store i32 %divtmp224, i32* %len221, align 4
  %321 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %322 = bitcast i8* %321 to i32**
  %p225 = load i32*, i32** %322, align 8
  %len226 = load i32, i32* %len221, align 4
  %323 = ptrtoint i32* %p225 to i64
  %sextXYZ227 = sext i32 %len226 to i64
  %multtmp228 = mul nsw i64 %sextXYZ227, 4
  %addtmp229 = add nsw i64 %323, %multtmp228
  %intToPtr2230 = inttoptr i64 %addtmp229 to i32*
  %324 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %325 = bitcast i8* %324 to i32**
  store i32* %intToPtr2230, i32** %325, align 8
  %len231 = load i32, i32* %len221, align 4
  %326 = ptrtoint i32* %intToPtr2230 to i64
  %sextY232 = sext i32 %len231 to i64
  %multtmp233 = mul nsw i64 %sextY232, 4
  %subtmp234 = sub nsw i64 %326, %multtmp233
  %IntTOPtr4b235 = inttoptr i64 %subtmp234 to i32*
  %327 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %328 = bitcast i8* %327 to i32**
  %p236 = load i32*, i32** %328, align 8
  %derefference_value237 = load i32, i32* %p236, align 8
  %ignore_case = alloca i32
  %329 = bitcast i32* %ignore_case to i8*
  store i8* %329, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store i32 %derefference_value237, i32* %ignore_case, align 4
  %330 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %331 = bitcast i8* %330 to i32**
  %p238 = load i32*, i32** %331, align 8
  %332 = ptrtoint i32* %p238 to i64
  %addtmp239 = add nsw i64 %332, 4
  %intToPtr2240 = inttoptr i64 %addtmp239 to i32*
  %333 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %334 = bitcast i8* %333 to i32**
  store i32* %intToPtr2240, i32** %334, align 8
  %335 = ptrtoint i32* %intToPtr2240 to i64
  %subtmp241 = sub nsw i64 %335, 4
  %IntTOPtr4b242 = inttoptr i64 %subtmp241 to i32*
  %336 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %337 = bitcast i8* %336 to i32**
  %p243 = load i32*, i32** %337, align 8
  %derefference_value244 = load i32, i32* %p243, align 8
  %global = alloca i32
  %338 = bitcast i32* %global to i8*
  store i8* %338, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store i32 %derefference_value244, i32* %global, align 4
  %339 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %340 = bitcast i8* %339 to i32**
  %p245 = load i32*, i32** %340, align 8
  %341 = ptrtoint i32* %p245 to i64
  %addtmp246 = add nsw i64 %341, 4
  %intToPtr2247 = inttoptr i64 %addtmp246 to i32*
  %342 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %343 = bitcast i8* %342 to i32**
  store i32* %intToPtr2247, i32** %343, align 8
  %344 = ptrtoint i32* %intToPtr2247 to i64
  %subtmp248 = sub nsw i64 %344, 4
  %IntTOPtr4b249 = inttoptr i64 %subtmp248 to i32*
  %str250 = load i8*, i8** %str218, align 8
  %ignore_case251 = load i32, i32* %ignore_case, align 4
  %global252 = load i32, i32* %global, align 4
  %345 = icmp ne i32 %ignore_case251, 0
  %346 = icmp ne i32 %global252, 0
  %347 = call %regex_struct* @regex(i8* %str250, i1 %345, i1 false, i1 %346, i1 false, i1 false, i1 false, i1 false, i1 false)
  %reg = alloca %regex_struct*
  %348 = bitcast %regex_struct** %reg to i8*
  store i8* %348, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store %regex_struct* %347, %regex_struct** %reg, align 8
  %reg253 = load %regex_struct*, %regex_struct** %reg, align 8
  %349 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %350 = bitcast i8* %349 to %sVMInfo**
  %info254 = load %sVMInfo*, %sVMInfo** %350, align 8
  %351 = call i32 @create_regex_object(%regex_struct* %reg253, %sVMInfo* %info254)
  %obj255 = alloca i32
  %352 = bitcast i32* %obj255 to i8*
  store i8* %352, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store i32 %351, i32* %obj255, align 4
  %353 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %354 = bitcast i8* %353 to %CLVALUE**
  %stack_ptr256 = load %CLVALUE*, %CLVALUE** %354, align 8
  %obj257 = load i32, i32* %obj255, align 4
  %355 = bitcast %CLVALUE* %stack_ptr256 to i32*
  store i32 %obj257, i32* %355, align 4
  %356 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %357 = bitcast i8* %356 to %CLVALUE**
  %stack_ptr258 = load %CLVALUE*, %CLVALUE** %357, align 8
  %358 = ptrtoint %CLVALUE* %stack_ptr258 to i64
  %addtmp259 = add nsw i64 %358, 4
  %intToPtr2260 = inttoptr i64 %addtmp259 to %CLVALUE*
  %359 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %360 = bitcast i8* %359 to %CLVALUE**
  store %CLVALUE* %intToPtr2260, %CLVALUE** %360, align 8
  %361 = ptrtoint %CLVALUE* %intToPtr2260 to i64
  %subtmp261 = sub nsw i64 %361, 4
  %IntTOPtr4b262 = inttoptr i64 %subtmp261 to %CLVALUE*
  br label %end_block

cond_else_block215:                               ; preds = %after_break263, %cond_else_block182
  %eqtmpY266 = icmp eq i32 %op64, 42
  br i1 %eqtmpY266, label %cond_then_block264, label %cond_else_block265

after_break263:                                   ; No predecessors!
  br label %cond_else_block215

cond_then_block264:                               ; preds = %cond_else_block215
  %362 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %363 = bitcast i8* %362 to i32**
  %p267 = load i32*, i32** %363, align 8
  %derefference_value268 = load i32, i32* %p267, align 8
  %num_elements = alloca i32
  %364 = bitcast i32* %num_elements to i8*
  store i8* %364, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %derefference_value268, i32* %num_elements, align 4
  %365 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %366 = bitcast i8* %365 to i32**
  %p269 = load i32*, i32** %366, align 8
  %367 = ptrtoint i32* %p269 to i64
  %addtmp270 = add nsw i64 %367, 4
  %intToPtr2271 = inttoptr i64 %addtmp270 to i32*
  %368 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %369 = bitcast i8* %368 to i32**
  store i32* %intToPtr2271, i32** %369, align 8
  %370 = ptrtoint i32* %intToPtr2271 to i64
  %subtmp272 = sub nsw i64 %370, 4
  %IntTOPtr4b273 = inttoptr i64 %subtmp272 to i32*
  %371 = call i8* @nccalloc(i64 1, i64 24)
  %372 = bitcast i8* %371 to %list__int*
  %373 = call %list__int* @"initialize_int12_src/vm"(%list__int* %372)
  %list = alloca %list__int*
  %374 = bitcast %list__int** %list to i8*
  store i8* %374, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store %list__int* %373, %list__int** %list, align 8
  %i = alloca i32
  %375 = bitcast i32* %i to i8*
  store i8* %375, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block274

cond_else_block265:                               ; preds = %after_break318, %cond_else_block215
  %eqtmpY321 = icmp eq i32 %op64, 21
  br i1 %eqtmpY321, label %cond_then_block319, label %cond_else_block320

loop_top_block274:                                ; preds = %cond_then_block278, %cond_then_block264
  %i275 = load i32, i32* %i, align 4
  %376 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %377 = bitcast i8* %376 to i32*
  %num_elements276 = load i32, i32* %377, align 4
  %letmp277 = icmp slt i32 %i275, %num_elements276
  br i1 %letmp277, label %cond_then_block278, label %cond_end_block279

cond_then_block278:                               ; preds = %loop_top_block274
  %378 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %379 = bitcast i8* %378 to %CLVALUE**
  %stack_ptr280 = load %CLVALUE*, %CLVALUE** %379, align 8
  %380 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %381 = bitcast i8* %380 to i32*
  %num_elements281 = load i32, i32* %381, align 4
  %382 = ptrtoint %CLVALUE* %stack_ptr280 to i64
  %sextY282 = sext i32 %num_elements281 to i64
  %multtmp283 = mul nsw i64 %sextY282, 4
  %subtmp284 = sub nsw i64 %382, %multtmp283
  %IntTOPtr4b285 = inttoptr i64 %subtmp284 to %CLVALUE*
  %i286 = load i32, i32* %i, align 4
  %383 = ptrtoint %CLVALUE* %IntTOPtr4b285 to i64
  %sextXYZ287 = sext i32 %i286 to i64
  %multtmp288 = mul nsw i64 %sextXYZ287, 4
  %addtmp289 = add nsw i64 %383, %multtmp288
  %intToPtr2290 = inttoptr i64 %addtmp289 to %CLVALUE*
  %384 = bitcast %CLVALUE* %intToPtr2290 to i32*
  %385 = load i32, i32* %384, align 4
  %element = alloca i32
  %386 = bitcast i32* %element to i8*
  store i8* %386, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32 %385, i32* %element, align 4
  %387 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %388 = bitcast i8* %387 to %list__int**
  %list291 = load %list__int*, %list__int** %388, align 8
  %element292 = load i32, i32* %element, align 4
  call void @"push_back_int13_src/vm"(%list__int* %list291, i32 %element292)
  %i293 = load i32, i32* %i, align 4
  %addtmp294 = add nsw i32 %i293, 1
  store i32 %addtmp294, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp294, 1
  br label %loop_top_block274

cond_end_block279:                                ; preds = %loop_top_block274
  %list295 = load %list__int*, %list__int** %list, align 8
  %389 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %390 = bitcast i8* %389 to %sVMInfo**
  %info296 = load %sVMInfo*, %sVMInfo** %390, align 8
  %391 = call i32 @create_list_object(%list__int* %list295, %sVMInfo* %info296)
  %obj297 = alloca i32
  %392 = bitcast i32* %obj297 to i8*
  store i8* %392, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store i32 %391, i32* %obj297, align 4
  %393 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %394 = bitcast i8* %393 to %CLVALUE**
  %stack_ptr298 = load %CLVALUE*, %CLVALUE** %394, align 8
  %num_elements299 = load i32, i32* %num_elements, align 4
  %395 = ptrtoint %CLVALUE* %stack_ptr298 to i64
  %sextY300 = sext i32 %num_elements299 to i64
  %multtmp301 = mul nsw i64 %sextY300, 4
  %subtmp302 = sub nsw i64 %395, %multtmp301
  %IntTOPtr4b303 = inttoptr i64 %subtmp302 to %CLVALUE*
  %396 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %397 = bitcast i8* %396 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b303, %CLVALUE** %397, align 8
  %num_elements304 = load i32, i32* %num_elements, align 4
  %398 = ptrtoint %CLVALUE* %IntTOPtr4b303 to i64
  %sextXYZ305 = sext i32 %num_elements304 to i64
  %multtmp306 = mul nsw i64 %sextXYZ305, 4
  %addtmp307 = add nsw i64 %398, %multtmp306
  %intToPtr2308 = inttoptr i64 %addtmp307 to %CLVALUE*
  %399 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %400 = bitcast i8* %399 to %CLVALUE**
  %stack_ptr309 = load %CLVALUE*, %CLVALUE** %400, align 8
  %obj310 = load i32, i32* %obj297, align 4
  %401 = bitcast %CLVALUE* %stack_ptr309 to i32*
  store i32 %obj310, i32* %401, align 4
  %402 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %403 = bitcast i8* %402 to %CLVALUE**
  %stack_ptr311 = load %CLVALUE*, %CLVALUE** %403, align 8
  %404 = ptrtoint %CLVALUE* %stack_ptr311 to i64
  %addtmp312 = add nsw i64 %404, 4
  %intToPtr2313 = inttoptr i64 %addtmp312 to %CLVALUE*
  %405 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %406 = bitcast i8* %405 to %CLVALUE**
  store %CLVALUE* %intToPtr2313, %CLVALUE** %406, align 8
  %407 = ptrtoint %CLVALUE* %intToPtr2313 to i64
  %subtmp314 = sub nsw i64 %407, 4
  %IntTOPtr4b315 = inttoptr i64 %subtmp314 to %CLVALUE*
  %408 = load %list__int*, %list__int** %list, align 8
  call void @"finalize_int14_src/vm"(%list__int* %408)
  %409 = ptrtoint %list__int* %408 to i64
  %410 = icmp ne i64 %409, 0
  br i1 %410, label %cond_then_block316, label %cond_end317

cond_then_block316:                               ; preds = %cond_end_block279
  br label %cond_end317

cond_end317:                                      ; preds = %cond_then_block316, %cond_end_block279
  %411 = bitcast %list__int* %408 to i8*
  call void @ncfree(i8* %411)
  br label %end_block

after_break318:                                   ; No predecessors!
  br label %cond_else_block265

cond_then_block319:                               ; preds = %cond_else_block265
  %412 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %413 = bitcast i8* %412 to i32**
  %p322 = load i32*, i32** %413, align 8
  %414 = bitcast i32* %p322 to i8*
  %type_name = alloca i8*
  %415 = bitcast i8** %type_name to i8*
  store i8* %415, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i8* %414, i8** %type_name, align 8
  %type_name323 = load i8*, i8** %type_name, align 8
  %416 = call i64 @strlen(i8* %type_name323)
  %addtmp324 = add nsw i64 %416, 1
  %417 = trunc i64 %addtmp324 to i32
  %len325 = alloca i32
  %418 = bitcast i32* %len325 to i8*
  store i8* %418, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %417, i32* %len325, align 4
  %len326 = load i32, i32* %len325, align 4
  call void @alignment(i32* %len325)
  %len327 = load i32, i32* %len325, align 4
  %divtmp328 = sdiv i32 %len327, 4
  store i32 %divtmp328, i32* %len325, align 4
  %419 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %420 = bitcast i8* %419 to i32**
  %p329 = load i32*, i32** %420, align 8
  %len330 = load i32, i32* %len325, align 4
  %421 = ptrtoint i32* %p329 to i64
  %sextXYZ331 = sext i32 %len330 to i64
  %multtmp332 = mul nsw i64 %sextXYZ331, 4
  %addtmp333 = add nsw i64 %421, %multtmp332
  %intToPtr2334 = inttoptr i64 %addtmp333 to i32*
  %422 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %423 = bitcast i8* %422 to i32**
  store i32* %intToPtr2334, i32** %423, align 8
  %len335 = load i32, i32* %len325, align 4
  %424 = ptrtoint i32* %intToPtr2334 to i64
  %sextY336 = sext i32 %len335 to i64
  %multtmp337 = mul nsw i64 %sextY336, 4
  %subtmp338 = sub nsw i64 %424, %multtmp337
  %IntTOPtr4b339 = inttoptr i64 %subtmp338 to i32*
  %type_name340 = load i8*, i8** %type_name, align 8
  %425 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %426 = bitcast i8* %425 to %sVMInfo**
  %info341 = load %sVMInfo*, %sVMInfo** %426, align 8
  %427 = getelementptr inbounds %sVMInfo, %sVMInfo* %info341, i32 0, i32 3
  %428 = load %sCompileInfo*, %sCompileInfo** %427, align 8
  %429 = getelementptr inbounds %sCompileInfo, %sCompileInfo* %428, i32 0, i32 4
  %430 = load %sParserInfo*, %sParserInfo** %429, align 8
  %431 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %432 = bitcast i8* %431 to %sVMInfo**
  %info342 = load %sVMInfo*, %sVMInfo** %432, align 8
  %433 = getelementptr inbounds %sVMInfo, %sVMInfo* %info342, i32 0, i32 3
  %434 = load %sCompileInfo*, %sCompileInfo** %433, align 8
  %435 = getelementptr inbounds %sCompileInfo, %sCompileInfo* %434, i32 0, i32 4
  %436 = load %sParserInfo*, %sParserInfo** %435, align 8
  %437 = getelementptr inbounds %sParserInfo, %sParserInfo* %436, i32 0, i32 9
  %438 = load %vector__sCLTypep*, %vector__sCLTypep** %437, align 8
  %439 = call %sCLType* @parse_type_runtime(i8* %type_name340, %sParserInfo* %430, %vector__sCLTypep* %438)
  %type = alloca %sCLType*
  %440 = bitcast %sCLType** %type to i8*
  store i8* %440, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLType* %439, %sCLType** %type, align 8
  %type343 = load %sCLType*, %sCLType** %type, align 8
  %eqtmpX344 = icmp eq %sCLType* %type343, null
  br i1 %eqtmpX344, label %cond_jump_then345, label %cond_end346

cond_else_block320:                               ; preds = %after_break364, %cond_else_block265
  %eqtmpY367 = icmp eq i32 %op64, 23
  br i1 %eqtmpY367, label %cond_then_block365, label %cond_else_block366

cond_jump_then345:                                ; preds = %cond_then_block319
  %441 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %442 = bitcast i8* %441 to %CLVALUE**
  %stack_ptr347 = load %CLVALUE*, %CLVALUE** %442, align 8
  %443 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %444 = bitcast i8* %443 to %sVMInfo**
  %info348 = load %sVMInfo*, %sVMInfo** %444, align 8
  %445 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %446 = bitcast i8* %445 to i8**
  %type_name349 = load i8*, i8** %446, align 8
  %447 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([42 x i8], [42 x i8]* @global_string.79, i32 0, i32 0), i8* %type_name349)
  call void @vm_err_msg(%CLVALUE** %442, %sVMInfo* %info348, i8* %447)
  %448 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %449 = bitcast i8* %448 to %sVMInfo**
  %info350 = load %sVMInfo*, %sVMInfo** %449, align 8
  %450 = getelementptr inbounds %sVMInfo, %sVMInfo* %info350, i32 0, i32 5
  %451 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %450, align 8
  %452 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %453 = bitcast i8* %452 to %sCLStackFrame*
  %null_parent_stack_frame351 = load %sCLStackFrame, %sCLStackFrame* %453, align 8
  %454 = call %sCLStackFrame @"pop_back_sCLStackFrame16_src/vm"(%vector__sCLStackFrame* %451, %sCLStackFrame %null_parent_stack_frame351)
  %455 = bitcast [8192 x i8*]* %lvtable to i8*
  %456 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %455, i64 65536)
  %457 = ptrtoint i8* %447 to i64
  %458 = icmp ne i64 %457, 0
  br i1 %458, label %cond_then_block352, label %cond_end353

cond_end346:                                      ; preds = %cond_then_block319
  %type354 = load %sCLType*, %sCLType** %type, align 8
  %459 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %460 = bitcast i8* %459 to %sVMInfo**
  %info355 = load %sVMInfo*, %sVMInfo** %460, align 8
  %461 = call i32 @create_object(%sCLType* %type354, %sVMInfo* %info355)
  %obj356 = alloca i32
  %462 = bitcast i32* %obj356 to i8*
  store i8* %462, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store i32 %461, i32* %obj356, align 4
  %463 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %464 = bitcast i8* %463 to %CLVALUE**
  %stack_ptr357 = load %CLVALUE*, %CLVALUE** %464, align 8
  %obj358 = load i32, i32* %obj356, align 4
  %465 = bitcast %CLVALUE* %stack_ptr357 to i32*
  store i32 %obj358, i32* %465, align 4
  %466 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %467 = bitcast i8* %466 to %CLVALUE**
  %stack_ptr359 = load %CLVALUE*, %CLVALUE** %467, align 8
  %468 = ptrtoint %CLVALUE* %stack_ptr359 to i64
  %addtmp360 = add nsw i64 %468, 4
  %intToPtr2361 = inttoptr i64 %addtmp360 to %CLVALUE*
  %469 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %470 = bitcast i8* %469 to %CLVALUE**
  store %CLVALUE* %intToPtr2361, %CLVALUE** %470, align 8
  %471 = ptrtoint %CLVALUE* %intToPtr2361 to i64
  %subtmp362 = sub nsw i64 %471, 4
  %IntTOPtr4b363 = inttoptr i64 %subtmp362 to %CLVALUE*
  br label %end_block

cond_then_block352:                               ; preds = %cond_jump_then345
  br label %cond_end353

cond_end353:                                      ; preds = %cond_then_block352, %cond_jump_then345
  call void @ncfree(i8* %447)
  ret i1 false

after_break364:                                   ; No predecessors!
  br label %cond_else_block320

cond_then_block365:                               ; preds = %cond_else_block320
  %472 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %473 = bitcast i8* %472 to i32**
  %p368 = load i32*, i32** %473, align 8
  %474 = bitcast i32* %p368 to i8*
  %type_name369 = alloca i8*
  %475 = bitcast i8** %type_name369 to i8*
  store i8* %475, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i8* %474, i8** %type_name369, align 8
  %type_name370 = load i8*, i8** %type_name369, align 8
  %476 = call i64 @strlen(i8* %type_name370)
  %addtmp371 = add nsw i64 %476, 1
  %477 = trunc i64 %addtmp371 to i32
  %len372 = alloca i32
  %478 = bitcast i32* %len372 to i8*
  store i8* %478, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %477, i32* %len372, align 4
  %len373 = load i32, i32* %len372, align 4
  call void @alignment(i32* %len372)
  %len374 = load i32, i32* %len372, align 4
  %divtmp375 = sdiv i32 %len374, 4
  store i32 %divtmp375, i32* %len372, align 4
  %479 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %480 = bitcast i8* %479 to i32**
  %p376 = load i32*, i32** %480, align 8
  %len377 = load i32, i32* %len372, align 4
  %481 = ptrtoint i32* %p376 to i64
  %sextXYZ378 = sext i32 %len377 to i64
  %multtmp379 = mul nsw i64 %sextXYZ378, 4
  %addtmp380 = add nsw i64 %481, %multtmp379
  %intToPtr2381 = inttoptr i64 %addtmp380 to i32*
  %482 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %483 = bitcast i8* %482 to i32**
  store i32* %intToPtr2381, i32** %483, align 8
  %len382 = load i32, i32* %len372, align 4
  %484 = ptrtoint i32* %intToPtr2381 to i64
  %sextY383 = sext i32 %len382 to i64
  %multtmp384 = mul nsw i64 %sextY383, 4
  %subtmp385 = sub nsw i64 %484, %multtmp384
  %IntTOPtr4b386 = inttoptr i64 %subtmp385 to i32*
  %485 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %486 = bitcast i8* %485 to i32**
  %p387 = load i32*, i32** %486, align 8
  %derefference_value388 = load i32, i32* %p387, align 8
  %codes_len = alloca i32
  %487 = bitcast i32* %codes_len to i8*
  store i8* %487, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store i32 %derefference_value388, i32* %codes_len, align 4
  %488 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %489 = bitcast i8* %488 to i32**
  %p389 = load i32*, i32** %489, align 8
  %490 = ptrtoint i32* %p389 to i64
  %addtmp390 = add nsw i64 %490, 4
  %intToPtr2391 = inttoptr i64 %addtmp390 to i32*
  %491 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %492 = bitcast i8* %491 to i32**
  store i32* %intToPtr2391, i32** %492, align 8
  %493 = ptrtoint i32* %intToPtr2391 to i64
  %subtmp392 = sub nsw i64 %493, 4
  %IntTOPtr4b393 = inttoptr i64 %subtmp392 to i32*
  %494 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %495 = bitcast i8* %494 to i32**
  %p394 = load i32*, i32** %495, align 8
  %codes395 = alloca i32*
  %496 = bitcast i32** %codes395 to i8*
  store i8* %496, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store i32* %p394, i32** %codes395, align 8
  %497 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %498 = bitcast i8* %497 to i32**
  %p396 = load i32*, i32** %498, align 8
  %codes_len397 = load i32, i32* %codes_len, align 4
  %divtmp398 = sdiv i32 %codes_len397, 4
  %499 = ptrtoint i32* %p396 to i64
  %sextXYZ399 = sext i32 %divtmp398 to i64
  %multtmp400 = mul nsw i64 %sextXYZ399, 4
  %addtmp401 = add nsw i64 %499, %multtmp400
  %intToPtr2402 = inttoptr i64 %addtmp401 to i32*
  %500 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %501 = bitcast i8* %500 to i32**
  store i32* %intToPtr2402, i32** %501, align 8
  %codes_len403 = load i32, i32* %codes_len, align 4
  %divtmp404 = sdiv i32 %codes_len403, 4
  %502 = ptrtoint i32* %intToPtr2402 to i64
  %sextY405 = sext i32 %divtmp404 to i64
  %multtmp406 = mul nsw i64 %sextY405, 4
  %subtmp407 = sub nsw i64 %502, %multtmp406
  %IntTOPtr4b408 = inttoptr i64 %subtmp407 to i32*
  %503 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %504 = bitcast i8* %503 to i32**
  %p409 = load i32*, i32** %504, align 8
  %derefference_value410 = load i32, i32* %p409, align 8
  %var_num411 = alloca i32
  %505 = bitcast i32* %var_num411 to i8*
  store i8* %505, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32 %derefference_value410, i32* %var_num411, align 4
  %506 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %507 = bitcast i8* %506 to i32**
  %p412 = load i32*, i32** %507, align 8
  %508 = ptrtoint i32* %p412 to i64
  %addtmp413 = add nsw i64 %508, 4
  %intToPtr2414 = inttoptr i64 %addtmp413 to i32*
  %509 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %510 = bitcast i8* %509 to i32**
  store i32* %intToPtr2414, i32** %510, align 8
  %511 = ptrtoint i32* %intToPtr2414 to i64
  %subtmp415 = sub nsw i64 %511, 4
  %IntTOPtr4b416 = inttoptr i64 %subtmp415 to i32*
  %type_name417 = load i8*, i8** %type_name369, align 8
  %codes418 = load i32*, i32** %codes395, align 8
  %codes_len419 = load i32, i32* %codes_len, align 4
  %var_num420 = load i32, i32* %var_num411, align 4
  %512 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %513 = bitcast i8* %512 to %sVMInfo**
  %info421 = load %sVMInfo*, %sVMInfo** %513, align 8
  %514 = call i32 @create_block_object(i8* %type_name417, i32* %codes418, i32 %codes_len419, i32 %var_num420, %sVMInfo* %info421)
  %obj422 = alloca i32
  %515 = bitcast i32* %obj422 to i8*
  store i8* %515, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store i32 %514, i32* %obj422, align 4
  %516 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %517 = bitcast i8* %516 to %CLVALUE**
  %stack_ptr423 = load %CLVALUE*, %CLVALUE** %517, align 8
  %obj424 = load i32, i32* %obj422, align 4
  %518 = bitcast %CLVALUE* %stack_ptr423 to i32*
  store i32 %obj424, i32* %518, align 4
  %519 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %520 = bitcast i8* %519 to %CLVALUE**
  %stack_ptr425 = load %CLVALUE*, %CLVALUE** %520, align 8
  %521 = ptrtoint %CLVALUE* %stack_ptr425 to i64
  %addtmp426 = add nsw i64 %521, 4
  %intToPtr2427 = inttoptr i64 %addtmp426 to %CLVALUE*
  %522 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %523 = bitcast i8* %522 to %CLVALUE**
  store %CLVALUE* %intToPtr2427, %CLVALUE** %523, align 8
  %524 = ptrtoint %CLVALUE* %intToPtr2427 to i64
  %subtmp428 = sub nsw i64 %524, 4
  %IntTOPtr4b429 = inttoptr i64 %subtmp428 to %CLVALUE*
  br label %end_block

cond_else_block366:                               ; preds = %after_break430, %cond_else_block320
  %eqtmpY433 = icmp eq i32 %op64, 3
  br i1 %eqtmpY433, label %cond_then_block431, label %cond_else_block432

after_break430:                                   ; No predecessors!
  br label %cond_else_block366

cond_then_block431:                               ; preds = %cond_else_block366
  %525 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %526 = bitcast i8* %525 to %CLVALUE**
  %stack_ptr434 = load %CLVALUE*, %CLVALUE** %526, align 8
  %527 = ptrtoint %CLVALUE* %stack_ptr434 to i64
  %subtmp435 = sub nsw i64 %527, 8
  %IntTOPtr4b436 = inttoptr i64 %subtmp435 to %CLVALUE*
  %528 = bitcast %CLVALUE* %IntTOPtr4b436 to i32*
  %529 = load i32, i32* %528, align 4
  %lvalue = alloca i32
  %530 = bitcast i32* %lvalue to i8*
  store i8* %530, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %529, i32* %lvalue, align 4
  %531 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %532 = bitcast i8* %531 to %CLVALUE**
  %stack_ptr437 = load %CLVALUE*, %CLVALUE** %532, align 8
  %533 = ptrtoint %CLVALUE* %stack_ptr437 to i64
  %subtmp438 = sub nsw i64 %533, 4
  %IntTOPtr4b439 = inttoptr i64 %subtmp438 to %CLVALUE*
  %534 = bitcast %CLVALUE* %IntTOPtr4b439 to i32*
  %535 = load i32, i32* %534, align 4
  %rvalue = alloca i32
  %536 = bitcast i32* %rvalue to i8*
  store i8* %536, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %535, i32* %rvalue, align 4
  %lvalue440 = load i32, i32* %lvalue, align 4
  %537 = call %sCLHeapMem* @get_object_pointer(i32 %lvalue440)
  %538 = bitcast %sCLHeapMem* %537 to %sCLInt*
  %lvalue_data = alloca %sCLInt*
  %539 = bitcast %sCLInt** %lvalue_data to i8*
  store i8* %539, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLInt* %538, %sCLInt** %lvalue_data, align 8
  %rvalue441 = load i32, i32* %rvalue, align 4
  %540 = call %sCLHeapMem* @get_object_pointer(i32 %rvalue441)
  %541 = bitcast %sCLHeapMem* %540 to %sCLInt*
  %rvalue_data = alloca %sCLInt*
  %542 = bitcast %sCLInt** %rvalue_data to i8*
  store i8* %542, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store %sCLInt* %541, %sCLInt** %rvalue_data, align 8
  %lvalue_data442 = load %sCLInt*, %sCLInt** %lvalue_data, align 8
  %543 = getelementptr inbounds %sCLInt, %sCLInt* %lvalue_data442, i32 0, i32 3
  %544 = load i32, i32* %543, align 4
  %rvalue_data443 = load %sCLInt*, %sCLInt** %rvalue_data, align 8
  %545 = getelementptr inbounds %sCLInt, %sCLInt* %rvalue_data443, i32 0, i32 3
  %546 = load i32, i32* %545, align 4
  %addtmp444 = add nsw i32 %544, %546
  %value = alloca i32
  %547 = bitcast i32* %value to i8*
  store i8* %547, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32 %addtmp444, i32* %value, align 4
  %value445 = load i32, i32* %value, align 4
  %548 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %549 = bitcast i8* %548 to %sVMInfo**
  %info446 = load %sVMInfo*, %sVMInfo** %549, align 8
  %550 = call i32 @create_int_object(i32 %value445, %sVMInfo* %info446)
  %new_obj = alloca i32
  %551 = bitcast i32* %new_obj to i8*
  store i8* %551, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store i32 %550, i32* %new_obj, align 4
  %552 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %553 = bitcast i8* %552 to %CLVALUE**
  %stack_ptr447 = load %CLVALUE*, %CLVALUE** %553, align 8
  %554 = ptrtoint %CLVALUE* %stack_ptr447 to i64
  %subtmp448 = sub nsw i64 %554, 8
  %IntTOPtr4b449 = inttoptr i64 %subtmp448 to %CLVALUE*
  %555 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %556 = bitcast i8* %555 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b449, %CLVALUE** %556, align 8
  %557 = ptrtoint %CLVALUE* %IntTOPtr4b449 to i64
  %addtmp450 = add nsw i64 %557, 8
  %intToPtr2451 = inttoptr i64 %addtmp450 to %CLVALUE*
  %558 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %559 = bitcast i8* %558 to %CLVALUE**
  %stack_ptr452 = load %CLVALUE*, %CLVALUE** %559, align 8
  %new_obj453 = load i32, i32* %new_obj, align 4
  %560 = bitcast %CLVALUE* %stack_ptr452 to i32*
  store i32 %new_obj453, i32* %560, align 4
  %561 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %562 = bitcast i8* %561 to %CLVALUE**
  %stack_ptr454 = load %CLVALUE*, %CLVALUE** %562, align 8
  %563 = ptrtoint %CLVALUE* %stack_ptr454 to i64
  %addtmp455 = add nsw i64 %563, 4
  %intToPtr2456 = inttoptr i64 %addtmp455 to %CLVALUE*
  %564 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %565 = bitcast i8* %564 to %CLVALUE**
  store %CLVALUE* %intToPtr2456, %CLVALUE** %565, align 8
  %566 = ptrtoint %CLVALUE* %intToPtr2456 to i64
  %subtmp457 = sub nsw i64 %566, 4
  %IntTOPtr4b458 = inttoptr i64 %subtmp457 to %CLVALUE*
  br label %end_block

cond_else_block432:                               ; preds = %after_break459, %cond_else_block366
  %eqtmpY462 = icmp eq i32 %op64, 4
  br i1 %eqtmpY462, label %cond_then_block460, label %cond_else_block461

after_break459:                                   ; No predecessors!
  br label %cond_else_block432

cond_then_block460:                               ; preds = %cond_else_block432
  %567 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %568 = bitcast i8* %567 to %CLVALUE**
  %stack_ptr463 = load %CLVALUE*, %CLVALUE** %568, align 8
  %569 = ptrtoint %CLVALUE* %stack_ptr463 to i64
  %subtmp464 = sub nsw i64 %569, 8
  %IntTOPtr4b465 = inttoptr i64 %subtmp464 to %CLVALUE*
  %570 = bitcast %CLVALUE* %IntTOPtr4b465 to i32*
  %571 = load i32, i32* %570, align 4
  %lvalue466 = alloca i32
  %572 = bitcast i32* %lvalue466 to i8*
  store i8* %572, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %571, i32* %lvalue466, align 4
  %573 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %574 = bitcast i8* %573 to %CLVALUE**
  %stack_ptr467 = load %CLVALUE*, %CLVALUE** %574, align 8
  %575 = ptrtoint %CLVALUE* %stack_ptr467 to i64
  %subtmp468 = sub nsw i64 %575, 4
  %IntTOPtr4b469 = inttoptr i64 %subtmp468 to %CLVALUE*
  %576 = bitcast %CLVALUE* %IntTOPtr4b469 to i32*
  %577 = load i32, i32* %576, align 4
  %rvalue470 = alloca i32
  %578 = bitcast i32* %rvalue470 to i8*
  store i8* %578, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %577, i32* %rvalue470, align 4
  %lvalue471 = load i32, i32* %lvalue466, align 4
  %579 = call %sCLHeapMem* @get_object_pointer(i32 %lvalue471)
  %580 = bitcast %sCLHeapMem* %579 to %sCLInt*
  %lvalue_data472 = alloca %sCLInt*
  %581 = bitcast %sCLInt** %lvalue_data472 to i8*
  store i8* %581, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLInt* %580, %sCLInt** %lvalue_data472, align 8
  %rvalue473 = load i32, i32* %rvalue470, align 4
  %582 = call %sCLHeapMem* @get_object_pointer(i32 %rvalue473)
  %583 = bitcast %sCLHeapMem* %582 to %sCLInt*
  %rvalue_data474 = alloca %sCLInt*
  %584 = bitcast %sCLInt** %rvalue_data474 to i8*
  store i8* %584, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store %sCLInt* %583, %sCLInt** %rvalue_data474, align 8
  %lvalue_data475 = load %sCLInt*, %sCLInt** %lvalue_data472, align 8
  %585 = getelementptr inbounds %sCLInt, %sCLInt* %lvalue_data475, i32 0, i32 3
  %586 = load i32, i32* %585, align 4
  %rvalue_data476 = load %sCLInt*, %sCLInt** %rvalue_data474, align 8
  %587 = getelementptr inbounds %sCLInt, %sCLInt* %rvalue_data476, i32 0, i32 3
  %588 = load i32, i32* %587, align 4
  %subttmp477 = sub nsw i32 %586, %588
  %value478 = alloca i32
  %589 = bitcast i32* %value478 to i8*
  store i8* %589, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32 %subttmp477, i32* %value478, align 4
  %value479 = load i32, i32* %value478, align 4
  %590 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %591 = bitcast i8* %590 to %sVMInfo**
  %info480 = load %sVMInfo*, %sVMInfo** %591, align 8
  %592 = call i32 @create_int_object(i32 %value479, %sVMInfo* %info480)
  %new_obj481 = alloca i32
  %593 = bitcast i32* %new_obj481 to i8*
  store i8* %593, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store i32 %592, i32* %new_obj481, align 4
  %594 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %595 = bitcast i8* %594 to %CLVALUE**
  %stack_ptr482 = load %CLVALUE*, %CLVALUE** %595, align 8
  %596 = ptrtoint %CLVALUE* %stack_ptr482 to i64
  %subtmp483 = sub nsw i64 %596, 8
  %IntTOPtr4b484 = inttoptr i64 %subtmp483 to %CLVALUE*
  %597 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %598 = bitcast i8* %597 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b484, %CLVALUE** %598, align 8
  %599 = ptrtoint %CLVALUE* %IntTOPtr4b484 to i64
  %addtmp485 = add nsw i64 %599, 8
  %intToPtr2486 = inttoptr i64 %addtmp485 to %CLVALUE*
  %600 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %601 = bitcast i8* %600 to %CLVALUE**
  %stack_ptr487 = load %CLVALUE*, %CLVALUE** %601, align 8
  %new_obj488 = load i32, i32* %new_obj481, align 4
  %602 = bitcast %CLVALUE* %stack_ptr487 to i32*
  store i32 %new_obj488, i32* %602, align 4
  %603 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %604 = bitcast i8* %603 to %CLVALUE**
  %stack_ptr489 = load %CLVALUE*, %CLVALUE** %604, align 8
  %605 = ptrtoint %CLVALUE* %stack_ptr489 to i64
  %addtmp490 = add nsw i64 %605, 4
  %intToPtr2491 = inttoptr i64 %addtmp490 to %CLVALUE*
  %606 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %607 = bitcast i8* %606 to %CLVALUE**
  store %CLVALUE* %intToPtr2491, %CLVALUE** %607, align 8
  %608 = ptrtoint %CLVALUE* %intToPtr2491 to i64
  %subtmp492 = sub nsw i64 %608, 4
  %IntTOPtr4b493 = inttoptr i64 %subtmp492 to %CLVALUE*
  br label %end_block

cond_else_block461:                               ; preds = %after_break494, %cond_else_block432
  %eqtmpY497 = icmp eq i32 %op64, 5
  br i1 %eqtmpY497, label %cond_then_block495, label %cond_else_block496

after_break494:                                   ; No predecessors!
  br label %cond_else_block461

cond_then_block495:                               ; preds = %cond_else_block461
  %609 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %610 = bitcast i8* %609 to %CLVALUE**
  %stack_ptr498 = load %CLVALUE*, %CLVALUE** %610, align 8
  %611 = ptrtoint %CLVALUE* %stack_ptr498 to i64
  %subtmp499 = sub nsw i64 %611, 8
  %IntTOPtr4b500 = inttoptr i64 %subtmp499 to %CLVALUE*
  %612 = bitcast %CLVALUE* %IntTOPtr4b500 to i32*
  %613 = load i32, i32* %612, align 4
  %lvalue501 = alloca i32
  %614 = bitcast i32* %lvalue501 to i8*
  store i8* %614, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %613, i32* %lvalue501, align 4
  %615 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %616 = bitcast i8* %615 to %CLVALUE**
  %stack_ptr502 = load %CLVALUE*, %CLVALUE** %616, align 8
  %617 = ptrtoint %CLVALUE* %stack_ptr502 to i64
  %subtmp503 = sub nsw i64 %617, 4
  %IntTOPtr4b504 = inttoptr i64 %subtmp503 to %CLVALUE*
  %618 = bitcast %CLVALUE* %IntTOPtr4b504 to i32*
  %619 = load i32, i32* %618, align 4
  %rvalue505 = alloca i32
  %620 = bitcast i32* %rvalue505 to i8*
  store i8* %620, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %619, i32* %rvalue505, align 4
  %lvalue506 = load i32, i32* %lvalue501, align 4
  %621 = call %sCLHeapMem* @get_object_pointer(i32 %lvalue506)
  %622 = bitcast %sCLHeapMem* %621 to %sCLInt*
  %lvalue_data507 = alloca %sCLInt*
  %623 = bitcast %sCLInt** %lvalue_data507 to i8*
  store i8* %623, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLInt* %622, %sCLInt** %lvalue_data507, align 8
  %rvalue508 = load i32, i32* %rvalue505, align 4
  %624 = call %sCLHeapMem* @get_object_pointer(i32 %rvalue508)
  %625 = bitcast %sCLHeapMem* %624 to %sCLInt*
  %rvalue_data509 = alloca %sCLInt*
  %626 = bitcast %sCLInt** %rvalue_data509 to i8*
  store i8* %626, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store %sCLInt* %625, %sCLInt** %rvalue_data509, align 8
  %lvalue_data510 = load %sCLInt*, %sCLInt** %lvalue_data507, align 8
  %627 = getelementptr inbounds %sCLInt, %sCLInt* %lvalue_data510, i32 0, i32 3
  %628 = load i32, i32* %627, align 4
  %rvalue_data511 = load %sCLInt*, %sCLInt** %rvalue_data509, align 8
  %629 = getelementptr inbounds %sCLInt, %sCLInt* %rvalue_data511, i32 0, i32 3
  %630 = load i32, i32* %629, align 4
  %multtmp512 = mul nsw i32 %628, %630
  %value513 = alloca i32
  %631 = bitcast i32* %value513 to i8*
  store i8* %631, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32 %multtmp512, i32* %value513, align 4
  %value514 = load i32, i32* %value513, align 4
  %632 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %633 = bitcast i8* %632 to %sVMInfo**
  %info515 = load %sVMInfo*, %sVMInfo** %633, align 8
  %634 = call i32 @create_int_object(i32 %value514, %sVMInfo* %info515)
  %new_obj516 = alloca i32
  %635 = bitcast i32* %new_obj516 to i8*
  store i8* %635, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store i32 %634, i32* %new_obj516, align 4
  %636 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %637 = bitcast i8* %636 to %CLVALUE**
  %stack_ptr517 = load %CLVALUE*, %CLVALUE** %637, align 8
  %638 = ptrtoint %CLVALUE* %stack_ptr517 to i64
  %subtmp518 = sub nsw i64 %638, 8
  %IntTOPtr4b519 = inttoptr i64 %subtmp518 to %CLVALUE*
  %639 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %640 = bitcast i8* %639 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b519, %CLVALUE** %640, align 8
  %641 = ptrtoint %CLVALUE* %IntTOPtr4b519 to i64
  %addtmp520 = add nsw i64 %641, 8
  %intToPtr2521 = inttoptr i64 %addtmp520 to %CLVALUE*
  %642 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %643 = bitcast i8* %642 to %CLVALUE**
  %stack_ptr522 = load %CLVALUE*, %CLVALUE** %643, align 8
  %new_obj523 = load i32, i32* %new_obj516, align 4
  %644 = bitcast %CLVALUE* %stack_ptr522 to i32*
  store i32 %new_obj523, i32* %644, align 4
  %645 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %646 = bitcast i8* %645 to %CLVALUE**
  %stack_ptr524 = load %CLVALUE*, %CLVALUE** %646, align 8
  %647 = ptrtoint %CLVALUE* %stack_ptr524 to i64
  %addtmp525 = add nsw i64 %647, 4
  %intToPtr2526 = inttoptr i64 %addtmp525 to %CLVALUE*
  %648 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %649 = bitcast i8* %648 to %CLVALUE**
  store %CLVALUE* %intToPtr2526, %CLVALUE** %649, align 8
  %650 = ptrtoint %CLVALUE* %intToPtr2526 to i64
  %subtmp527 = sub nsw i64 %650, 4
  %IntTOPtr4b528 = inttoptr i64 %subtmp527 to %CLVALUE*
  br label %end_block

cond_else_block496:                               ; preds = %after_break529, %cond_else_block461
  %eqtmpY532 = icmp eq i32 %op64, 6
  br i1 %eqtmpY532, label %cond_then_block530, label %cond_else_block531

after_break529:                                   ; No predecessors!
  br label %cond_else_block496

cond_then_block530:                               ; preds = %cond_else_block496
  %651 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %652 = bitcast i8* %651 to %CLVALUE**
  %stack_ptr533 = load %CLVALUE*, %CLVALUE** %652, align 8
  %653 = ptrtoint %CLVALUE* %stack_ptr533 to i64
  %subtmp534 = sub nsw i64 %653, 8
  %IntTOPtr4b535 = inttoptr i64 %subtmp534 to %CLVALUE*
  %654 = bitcast %CLVALUE* %IntTOPtr4b535 to i32*
  %655 = load i32, i32* %654, align 4
  %lvalue536 = alloca i32
  %656 = bitcast i32* %lvalue536 to i8*
  store i8* %656, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %655, i32* %lvalue536, align 4
  %657 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %658 = bitcast i8* %657 to %CLVALUE**
  %stack_ptr537 = load %CLVALUE*, %CLVALUE** %658, align 8
  %659 = ptrtoint %CLVALUE* %stack_ptr537 to i64
  %subtmp538 = sub nsw i64 %659, 4
  %IntTOPtr4b539 = inttoptr i64 %subtmp538 to %CLVALUE*
  %660 = bitcast %CLVALUE* %IntTOPtr4b539 to i32*
  %661 = load i32, i32* %660, align 4
  %rvalue540 = alloca i32
  %662 = bitcast i32* %rvalue540 to i8*
  store i8* %662, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %661, i32* %rvalue540, align 4
  %lvalue541 = load i32, i32* %lvalue536, align 4
  %663 = call %sCLHeapMem* @get_object_pointer(i32 %lvalue541)
  %664 = bitcast %sCLHeapMem* %663 to %sCLInt*
  %lvalue_data542 = alloca %sCLInt*
  %665 = bitcast %sCLInt** %lvalue_data542 to i8*
  store i8* %665, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLInt* %664, %sCLInt** %lvalue_data542, align 8
  %rvalue543 = load i32, i32* %rvalue540, align 4
  %666 = call %sCLHeapMem* @get_object_pointer(i32 %rvalue543)
  %667 = bitcast %sCLHeapMem* %666 to %sCLInt*
  %rvalue_data544 = alloca %sCLInt*
  %668 = bitcast %sCLInt** %rvalue_data544 to i8*
  store i8* %668, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store %sCLInt* %667, %sCLInt** %rvalue_data544, align 8
  %rvalue_data545 = load %sCLInt*, %sCLInt** %rvalue_data544, align 8
  %669 = getelementptr inbounds %sCLInt, %sCLInt* %rvalue_data545, i32 0, i32 3
  %670 = load i32, i32* %669, align 4
  %eqtmpX546 = icmp eq i32 %670, 0
  br i1 %eqtmpX546, label %cond_jump_then547, label %cond_end548

cond_else_block531:                               ; preds = %after_break574, %cond_else_block496
  %eqtmpY577 = icmp eq i32 %op64, 7
  br i1 %eqtmpY577, label %cond_then_block575, label %cond_else_block576

cond_jump_then547:                                ; preds = %cond_then_block530
  %671 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %672 = bitcast i8* %671 to %CLVALUE**
  %stack_ptr549 = load %CLVALUE*, %CLVALUE** %672, align 8
  %673 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %674 = bitcast i8* %673 to %sVMInfo**
  %info550 = load %sVMInfo*, %sVMInfo** %674, align 8
  %675 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_string.80, i32 0, i32 0))
  call void @vm_err_msg(%CLVALUE** %672, %sVMInfo* %info550, i8* %675)
  %676 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %677 = bitcast i8* %676 to %sVMInfo**
  %info551 = load %sVMInfo*, %sVMInfo** %677, align 8
  %678 = getelementptr inbounds %sVMInfo, %sVMInfo* %info551, i32 0, i32 5
  %679 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %678, align 8
  %680 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %681 = bitcast i8* %680 to %sCLStackFrame*
  %null_parent_stack_frame552 = load %sCLStackFrame, %sCLStackFrame* %681, align 8
  %682 = call %sCLStackFrame @"pop_back_sCLStackFrame17_src/vm"(%vector__sCLStackFrame* %679, %sCLStackFrame %null_parent_stack_frame552)
  %683 = bitcast [8192 x i8*]* %lvtable to i8*
  %684 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %683, i64 65536)
  %685 = ptrtoint i8* %675 to i64
  %686 = icmp ne i64 %685, 0
  br i1 %686, label %cond_then_block553, label %cond_end554

cond_end548:                                      ; preds = %cond_then_block530
  %lvalue_data555 = load %sCLInt*, %sCLInt** %lvalue_data542, align 8
  %687 = getelementptr inbounds %sCLInt, %sCLInt* %lvalue_data555, i32 0, i32 3
  %688 = load i32, i32* %687, align 4
  %rvalue_data556 = load %sCLInt*, %sCLInt** %rvalue_data544, align 8
  %689 = getelementptr inbounds %sCLInt, %sCLInt* %rvalue_data556, i32 0, i32 3
  %690 = load i32, i32* %689, align 4
  %divtmp557 = sdiv i32 %688, %690
  %value558 = alloca i32
  %691 = bitcast i32* %value558 to i8*
  store i8* %691, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32 %divtmp557, i32* %value558, align 4
  %value559 = load i32, i32* %value558, align 4
  %692 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %693 = bitcast i8* %692 to %sVMInfo**
  %info560 = load %sVMInfo*, %sVMInfo** %693, align 8
  %694 = call i32 @create_int_object(i32 %value559, %sVMInfo* %info560)
  %new_obj561 = alloca i32
  %695 = bitcast i32* %new_obj561 to i8*
  store i8* %695, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store i32 %694, i32* %new_obj561, align 4
  %696 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %697 = bitcast i8* %696 to %CLVALUE**
  %stack_ptr562 = load %CLVALUE*, %CLVALUE** %697, align 8
  %698 = ptrtoint %CLVALUE* %stack_ptr562 to i64
  %subtmp563 = sub nsw i64 %698, 8
  %IntTOPtr4b564 = inttoptr i64 %subtmp563 to %CLVALUE*
  %699 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %700 = bitcast i8* %699 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b564, %CLVALUE** %700, align 8
  %701 = ptrtoint %CLVALUE* %IntTOPtr4b564 to i64
  %addtmp565 = add nsw i64 %701, 8
  %intToPtr2566 = inttoptr i64 %addtmp565 to %CLVALUE*
  %702 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %703 = bitcast i8* %702 to %CLVALUE**
  %stack_ptr567 = load %CLVALUE*, %CLVALUE** %703, align 8
  %new_obj568 = load i32, i32* %new_obj561, align 4
  %704 = bitcast %CLVALUE* %stack_ptr567 to i32*
  store i32 %new_obj568, i32* %704, align 4
  %705 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %706 = bitcast i8* %705 to %CLVALUE**
  %stack_ptr569 = load %CLVALUE*, %CLVALUE** %706, align 8
  %707 = ptrtoint %CLVALUE* %stack_ptr569 to i64
  %addtmp570 = add nsw i64 %707, 4
  %intToPtr2571 = inttoptr i64 %addtmp570 to %CLVALUE*
  %708 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %709 = bitcast i8* %708 to %CLVALUE**
  store %CLVALUE* %intToPtr2571, %CLVALUE** %709, align 8
  %710 = ptrtoint %CLVALUE* %intToPtr2571 to i64
  %subtmp572 = sub nsw i64 %710, 4
  %IntTOPtr4b573 = inttoptr i64 %subtmp572 to %CLVALUE*
  br label %end_block

cond_then_block553:                               ; preds = %cond_jump_then547
  br label %cond_end554

cond_end554:                                      ; preds = %cond_then_block553, %cond_jump_then547
  call void @ncfree(i8* %675)
  ret i1 false

after_break574:                                   ; No predecessors!
  br label %cond_else_block531

cond_then_block575:                               ; preds = %cond_else_block531
  %711 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %712 = bitcast i8* %711 to %CLVALUE**
  %stack_ptr578 = load %CLVALUE*, %CLVALUE** %712, align 8
  %713 = ptrtoint %CLVALUE* %stack_ptr578 to i64
  %subtmp579 = sub nsw i64 %713, 8
  %IntTOPtr4b580 = inttoptr i64 %subtmp579 to %CLVALUE*
  %714 = bitcast %CLVALUE* %IntTOPtr4b580 to i32*
  %715 = load i32, i32* %714, align 4
  %lvalue581 = alloca i32
  %716 = bitcast i32* %lvalue581 to i8*
  store i8* %716, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %715, i32* %lvalue581, align 4
  %717 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %718 = bitcast i8* %717 to %CLVALUE**
  %stack_ptr582 = load %CLVALUE*, %CLVALUE** %718, align 8
  %719 = ptrtoint %CLVALUE* %stack_ptr582 to i64
  %subtmp583 = sub nsw i64 %719, 4
  %IntTOPtr4b584 = inttoptr i64 %subtmp583 to %CLVALUE*
  %720 = bitcast %CLVALUE* %IntTOPtr4b584 to i32*
  %721 = load i32, i32* %720, align 4
  %rvalue585 = alloca i32
  %722 = bitcast i32* %rvalue585 to i8*
  store i8* %722, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %721, i32* %rvalue585, align 4
  %lvalue586 = load i32, i32* %lvalue581, align 4
  %723 = call %sCLHeapMem* @get_object_pointer(i32 %lvalue586)
  %724 = bitcast %sCLHeapMem* %723 to %sCLInt*
  %lvalue_data587 = alloca %sCLInt*
  %725 = bitcast %sCLInt** %lvalue_data587 to i8*
  store i8* %725, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLInt* %724, %sCLInt** %lvalue_data587, align 8
  %rvalue588 = load i32, i32* %rvalue585, align 4
  %726 = call %sCLHeapMem* @get_object_pointer(i32 %rvalue588)
  %727 = bitcast %sCLHeapMem* %726 to %sCLInt*
  %rvalue_data589 = alloca %sCLInt*
  %728 = bitcast %sCLInt** %rvalue_data589 to i8*
  store i8* %728, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store %sCLInt* %727, %sCLInt** %rvalue_data589, align 8
  %rvalue_data590 = load %sCLInt*, %sCLInt** %rvalue_data589, align 8
  %729 = getelementptr inbounds %sCLInt, %sCLInt* %rvalue_data590, i32 0, i32 3
  %730 = load i32, i32* %729, align 4
  %eqtmpX591 = icmp eq i32 %730, 0
  br i1 %eqtmpX591, label %cond_jump_then592, label %cond_end593

cond_else_block576:                               ; preds = %after_break618, %cond_else_block531
  %eqtmpY621 = icmp eq i32 %op64, 12
  br i1 %eqtmpY621, label %cond_then_block619, label %cond_else_block620

cond_jump_then592:                                ; preds = %cond_then_block575
  %731 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %732 = bitcast i8* %731 to %CLVALUE**
  %stack_ptr594 = load %CLVALUE*, %CLVALUE** %732, align 8
  %733 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %734 = bitcast i8* %733 to %sVMInfo**
  %info595 = load %sVMInfo*, %sVMInfo** %734, align 8
  %735 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_string.81, i32 0, i32 0))
  call void @vm_err_msg(%CLVALUE** %732, %sVMInfo* %info595, i8* %735)
  %736 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %737 = bitcast i8* %736 to %sVMInfo**
  %info596 = load %sVMInfo*, %sVMInfo** %737, align 8
  %738 = getelementptr inbounds %sVMInfo, %sVMInfo* %info596, i32 0, i32 5
  %739 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %738, align 8
  %740 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %741 = bitcast i8* %740 to %sCLStackFrame*
  %null_parent_stack_frame597 = load %sCLStackFrame, %sCLStackFrame* %741, align 8
  %742 = call %sCLStackFrame @"pop_back_sCLStackFrame18_src/vm"(%vector__sCLStackFrame* %739, %sCLStackFrame %null_parent_stack_frame597)
  %743 = bitcast [8192 x i8*]* %lvtable to i8*
  %744 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %743, i64 65536)
  %745 = ptrtoint i8* %735 to i64
  %746 = icmp ne i64 %745, 0
  br i1 %746, label %cond_then_block598, label %cond_end599

cond_end593:                                      ; preds = %cond_then_block575
  %lvalue_data600 = load %sCLInt*, %sCLInt** %lvalue_data587, align 8
  %747 = getelementptr inbounds %sCLInt, %sCLInt* %lvalue_data600, i32 0, i32 3
  %748 = load i32, i32* %747, align 4
  %rvalue_data601 = load %sCLInt*, %sCLInt** %rvalue_data589, align 8
  %749 = getelementptr inbounds %sCLInt, %sCLInt* %rvalue_data601, i32 0, i32 3
  %750 = load i32, i32* %749, align 4
  %remtmp = srem i32 %748, %750
  %value602 = alloca i32
  %751 = bitcast i32* %value602 to i8*
  store i8* %751, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32 %remtmp, i32* %value602, align 4
  %value603 = load i32, i32* %value602, align 4
  %752 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %753 = bitcast i8* %752 to %sVMInfo**
  %info604 = load %sVMInfo*, %sVMInfo** %753, align 8
  %754 = call i32 @create_int_object(i32 %value603, %sVMInfo* %info604)
  %new_obj605 = alloca i32
  %755 = bitcast i32* %new_obj605 to i8*
  store i8* %755, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store i32 %754, i32* %new_obj605, align 4
  %756 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %757 = bitcast i8* %756 to %CLVALUE**
  %stack_ptr606 = load %CLVALUE*, %CLVALUE** %757, align 8
  %758 = ptrtoint %CLVALUE* %stack_ptr606 to i64
  %subtmp607 = sub nsw i64 %758, 8
  %IntTOPtr4b608 = inttoptr i64 %subtmp607 to %CLVALUE*
  %759 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %760 = bitcast i8* %759 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b608, %CLVALUE** %760, align 8
  %761 = ptrtoint %CLVALUE* %IntTOPtr4b608 to i64
  %addtmp609 = add nsw i64 %761, 8
  %intToPtr2610 = inttoptr i64 %addtmp609 to %CLVALUE*
  %762 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %763 = bitcast i8* %762 to %CLVALUE**
  %stack_ptr611 = load %CLVALUE*, %CLVALUE** %763, align 8
  %new_obj612 = load i32, i32* %new_obj605, align 4
  %764 = bitcast %CLVALUE* %stack_ptr611 to i32*
  store i32 %new_obj612, i32* %764, align 4
  %765 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %766 = bitcast i8* %765 to %CLVALUE**
  %stack_ptr613 = load %CLVALUE*, %CLVALUE** %766, align 8
  %767 = ptrtoint %CLVALUE* %stack_ptr613 to i64
  %addtmp614 = add nsw i64 %767, 4
  %intToPtr2615 = inttoptr i64 %addtmp614 to %CLVALUE*
  %768 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %769 = bitcast i8* %768 to %CLVALUE**
  store %CLVALUE* %intToPtr2615, %CLVALUE** %769, align 8
  %770 = ptrtoint %CLVALUE* %intToPtr2615 to i64
  %subtmp616 = sub nsw i64 %770, 4
  %IntTOPtr4b617 = inttoptr i64 %subtmp616 to %CLVALUE*
  br label %end_block

cond_then_block598:                               ; preds = %cond_jump_then592
  br label %cond_end599

cond_end599:                                      ; preds = %cond_then_block598, %cond_jump_then592
  call void @ncfree(i8* %735)
  ret i1 false

after_break618:                                   ; No predecessors!
  br label %cond_else_block576

cond_then_block619:                               ; preds = %cond_else_block576
  %771 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %772 = bitcast i8* %771 to %CLVALUE**
  %stack_ptr622 = load %CLVALUE*, %CLVALUE** %772, align 8
  %773 = ptrtoint %CLVALUE* %stack_ptr622 to i64
  %subtmp623 = sub nsw i64 %773, 8
  %IntTOPtr4b624 = inttoptr i64 %subtmp623 to %CLVALUE*
  %774 = bitcast %CLVALUE* %IntTOPtr4b624 to i32*
  %775 = load i32, i32* %774, align 4
  %lvalue625 = alloca i32
  %776 = bitcast i32* %lvalue625 to i8*
  store i8* %776, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %775, i32* %lvalue625, align 4
  %777 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %778 = bitcast i8* %777 to %CLVALUE**
  %stack_ptr626 = load %CLVALUE*, %CLVALUE** %778, align 8
  %779 = ptrtoint %CLVALUE* %stack_ptr626 to i64
  %subtmp627 = sub nsw i64 %779, 4
  %IntTOPtr4b628 = inttoptr i64 %subtmp627 to %CLVALUE*
  %780 = bitcast %CLVALUE* %IntTOPtr4b628 to i32*
  %781 = load i32, i32* %780, align 4
  %rvalue629 = alloca i32
  %782 = bitcast i32* %rvalue629 to i8*
  store i8* %782, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %781, i32* %rvalue629, align 4
  %lvalue630 = load i32, i32* %lvalue625, align 4
  %783 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %784 = bitcast i8* %783 to %sVMInfo**
  %info631 = load %sVMInfo*, %sVMInfo** %784, align 8
  %785 = call i1 @check_type(i32 %lvalue630, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.82, i32 0, i32 0), %sVMInfo* %info631)
  store i1 %785, i1* %andand_result_var1, align 1
  br i1 %785, label %cond_jump_end, label %cond_jump_then632

cond_else_block620:                               ; preds = %after_break683, %cond_else_block576
  %eqtmpY686 = icmp eq i32 %op64, 36
  br i1 %eqtmpY686, label %cond_then_block684, label %cond_else_block685

cond_jump_then632:                                ; preds = %cond_then_block619
  %rvalue633 = load i32, i32* %rvalue629, align 4
  %786 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %787 = bitcast i8* %786 to %sVMInfo**
  %info634 = load %sVMInfo*, %sVMInfo** %787, align 8
  %788 = call i1 @check_type(i32 %rvalue633, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.83, i32 0, i32 0), %sVMInfo* %info634)
  %oror = or i1 %785, %788
  store i1 %oror, i1* %andand_result_var1, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then632, %cond_then_block619
  %oror_result_value = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value, label %cond_jump_then635, label %cond_else_block636

cond_jump_then635:                                ; preds = %cond_jump_end
  %789 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %790 = bitcast i8* %789 to i32*
  %lvalue638 = load i32, i32* %790, align 4
  %791 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %792 = bitcast i8* %791 to %sVMInfo**
  %info639 = load %sVMInfo*, %sVMInfo** %792, align 8
  %793 = call i1 @check_type(i32 %lvalue638, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.84, i32 0, i32 0), %sVMInfo* %info639)
  %794 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %795 = bitcast i8* %794 to i32*
  %rvalue640 = load i32, i32* %795, align 4
  %796 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %797 = bitcast i8* %796 to %sVMInfo**
  %info641 = load %sVMInfo*, %sVMInfo** %797, align 8
  %798 = call i1 @check_type(i32 %rvalue640, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.85, i32 0, i32 0), %sVMInfo* %info641)
  %eqtmpX642 = icmp eq i1 %793, %798
  %sext13 = zext i1 %eqtmpX642 to i32
  %value643 = alloca i32
  %799 = bitcast i32* %value643 to i8*
  store i8* %799, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store i32 %sext13, i32* %value643, align 4
  %value644 = load i32, i32* %value643, align 4
  %800 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %801 = bitcast i8* %800 to %sVMInfo**
  %info645 = load %sVMInfo*, %sVMInfo** %801, align 8
  %802 = call i32 @create_bool_object(i32 %value644, %sVMInfo* %info645)
  %obj646 = alloca i32
  %803 = bitcast i32* %obj646 to i8*
  store i8* %803, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store i32 %802, i32* %obj646, align 4
  %804 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %805 = bitcast i8* %804 to %CLVALUE**
  %stack_ptr647 = load %CLVALUE*, %CLVALUE** %805, align 8
  %806 = ptrtoint %CLVALUE* %stack_ptr647 to i64
  %subtmp648 = sub nsw i64 %806, 8
  %IntTOPtr4b649 = inttoptr i64 %subtmp648 to %CLVALUE*
  %807 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %808 = bitcast i8* %807 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b649, %CLVALUE** %808, align 8
  %809 = ptrtoint %CLVALUE* %IntTOPtr4b649 to i64
  %addtmp650 = add nsw i64 %809, 8
  %intToPtr2651 = inttoptr i64 %addtmp650 to %CLVALUE*
  %810 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %811 = bitcast i8* %810 to %CLVALUE**
  %stack_ptr652 = load %CLVALUE*, %CLVALUE** %811, align 8
  %obj653 = load i32, i32* %obj646, align 4
  %812 = bitcast %CLVALUE* %stack_ptr652 to i32*
  store i32 %obj653, i32* %812, align 4
  %813 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %814 = bitcast i8* %813 to %CLVALUE**
  %stack_ptr654 = load %CLVALUE*, %CLVALUE** %814, align 8
  %815 = ptrtoint %CLVALUE* %stack_ptr654 to i64
  %addtmp655 = add nsw i64 %815, 4
  %intToPtr2656 = inttoptr i64 %addtmp655 to %CLVALUE*
  %816 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %817 = bitcast i8* %816 to %CLVALUE**
  store %CLVALUE* %intToPtr2656, %CLVALUE** %817, align 8
  %818 = ptrtoint %CLVALUE* %intToPtr2656 to i64
  %subtmp657 = sub nsw i64 %818, 4
  %IntTOPtr4b658 = inttoptr i64 %subtmp657 to %CLVALUE*
  br label %cond_end637

cond_else_block636:                               ; preds = %cond_jump_end
  %819 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %820 = bitcast i8* %819 to i32*
  %lvalue659 = load i32, i32* %820, align 4
  %821 = call %sCLHeapMem* @get_object_pointer(i32 %lvalue659)
  %822 = bitcast %sCLHeapMem* %821 to %sCLInt*
  %lvalue_data660 = alloca %sCLInt*
  %823 = bitcast %sCLInt** %lvalue_data660 to i8*
  store i8* %823, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLInt* %822, %sCLInt** %lvalue_data660, align 8
  %824 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %825 = bitcast i8* %824 to i32*
  %rvalue661 = load i32, i32* %825, align 4
  %826 = call %sCLHeapMem* @get_object_pointer(i32 %rvalue661)
  %827 = bitcast %sCLHeapMem* %826 to %sCLInt*
  %rvalue_data662 = alloca %sCLInt*
  %828 = bitcast %sCLInt** %rvalue_data662 to i8*
  store i8* %828, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store %sCLInt* %827, %sCLInt** %rvalue_data662, align 8
  %lvalue_data663 = load %sCLInt*, %sCLInt** %lvalue_data660, align 8
  %829 = getelementptr inbounds %sCLInt, %sCLInt* %lvalue_data663, i32 0, i32 3
  %830 = load i32, i32* %829, align 4
  %rvalue_data664 = load %sCLInt*, %sCLInt** %rvalue_data662, align 8
  %831 = getelementptr inbounds %sCLInt, %sCLInt* %rvalue_data664, i32 0, i32 3
  %832 = load i32, i32* %831, align 4
  %eqtmpX665 = icmp eq i32 %830, %832
  %sext13666 = zext i1 %eqtmpX665 to i32
  %value667 = alloca i32
  %833 = bitcast i32* %value667 to i8*
  store i8* %833, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32 %sext13666, i32* %value667, align 4
  %value668 = load i32, i32* %value667, align 4
  %834 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %835 = bitcast i8* %834 to %sVMInfo**
  %info669 = load %sVMInfo*, %sVMInfo** %835, align 8
  %836 = call i32 @create_bool_object(i32 %value668, %sVMInfo* %info669)
  %new_obj670 = alloca i32
  %837 = bitcast i32* %new_obj670 to i8*
  store i8* %837, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store i32 %836, i32* %new_obj670, align 4
  %838 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %839 = bitcast i8* %838 to %CLVALUE**
  %stack_ptr671 = load %CLVALUE*, %CLVALUE** %839, align 8
  %840 = ptrtoint %CLVALUE* %stack_ptr671 to i64
  %subtmp672 = sub nsw i64 %840, 8
  %IntTOPtr4b673 = inttoptr i64 %subtmp672 to %CLVALUE*
  %841 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %842 = bitcast i8* %841 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b673, %CLVALUE** %842, align 8
  %843 = ptrtoint %CLVALUE* %IntTOPtr4b673 to i64
  %addtmp674 = add nsw i64 %843, 8
  %intToPtr2675 = inttoptr i64 %addtmp674 to %CLVALUE*
  %844 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %845 = bitcast i8* %844 to %CLVALUE**
  %stack_ptr676 = load %CLVALUE*, %CLVALUE** %845, align 8
  %new_obj677 = load i32, i32* %new_obj670, align 4
  %846 = bitcast %CLVALUE* %stack_ptr676 to i32*
  store i32 %new_obj677, i32* %846, align 4
  %847 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %848 = bitcast i8* %847 to %CLVALUE**
  %stack_ptr678 = load %CLVALUE*, %CLVALUE** %848, align 8
  %849 = ptrtoint %CLVALUE* %stack_ptr678 to i64
  %addtmp679 = add nsw i64 %849, 4
  %intToPtr2680 = inttoptr i64 %addtmp679 to %CLVALUE*
  %850 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %851 = bitcast i8* %850 to %CLVALUE**
  store %CLVALUE* %intToPtr2680, %CLVALUE** %851, align 8
  %852 = ptrtoint %CLVALUE* %intToPtr2680 to i64
  %subtmp681 = sub nsw i64 %852, 4
  %IntTOPtr4b682 = inttoptr i64 %subtmp681 to %CLVALUE*
  br label %cond_end637

cond_end637:                                      ; preds = %cond_else_block636, %cond_jump_then635
  br label %end_block

after_break683:                                   ; No predecessors!
  br label %cond_else_block620

cond_then_block684:                               ; preds = %cond_else_block620
  %853 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %854 = bitcast i8* %853 to %CLVALUE**
  %stack_ptr687 = load %CLVALUE*, %CLVALUE** %854, align 8
  %855 = ptrtoint %CLVALUE* %stack_ptr687 to i64
  %subtmp688 = sub nsw i64 %855, 8
  %IntTOPtr4b689 = inttoptr i64 %subtmp688 to %CLVALUE*
  %856 = bitcast %CLVALUE* %IntTOPtr4b689 to i32*
  %857 = load i32, i32* %856, align 4
  %lvalue690 = alloca i32
  %858 = bitcast i32* %lvalue690 to i8*
  store i8* %858, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %857, i32* %lvalue690, align 4
  %859 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %860 = bitcast i8* %859 to %CLVALUE**
  %stack_ptr691 = load %CLVALUE*, %CLVALUE** %860, align 8
  %861 = ptrtoint %CLVALUE* %stack_ptr691 to i64
  %subtmp692 = sub nsw i64 %861, 4
  %IntTOPtr4b693 = inttoptr i64 %subtmp692 to %CLVALUE*
  %862 = bitcast %CLVALUE* %IntTOPtr4b693 to i32*
  %863 = load i32, i32* %862, align 4
  %rvalue694 = alloca i32
  %864 = bitcast i32* %rvalue694 to i8*
  store i8* %864, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %863, i32* %rvalue694, align 4
  %lvalue695 = load i32, i32* %lvalue690, align 4
  %865 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %866 = bitcast i8* %865 to %sVMInfo**
  %info696 = load %sVMInfo*, %sVMInfo** %866, align 8
  %867 = call i1 @check_type(i32 %lvalue695, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.86, i32 0, i32 0), %sVMInfo* %info696)
  store i1 %867, i1* %andand_result_var1, align 1
  br i1 %867, label %cond_jump_end698, label %cond_jump_then697

cond_else_block685:                               ; preds = %after_break760, %cond_else_block620
  %eqtmpY763 = icmp eq i32 %op64, 13
  br i1 %eqtmpY763, label %cond_then_block761, label %cond_else_block762

cond_jump_then697:                                ; preds = %cond_then_block684
  %rvalue699 = load i32, i32* %rvalue694, align 4
  %868 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %869 = bitcast i8* %868 to %sVMInfo**
  %info700 = load %sVMInfo*, %sVMInfo** %869, align 8
  %870 = call i1 @check_type(i32 %rvalue699, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.87, i32 0, i32 0), %sVMInfo* %info700)
  %oror701 = or i1 %867, %870
  store i1 %oror701, i1* %andand_result_var1, align 1
  br label %cond_jump_end698

cond_jump_end698:                                 ; preds = %cond_jump_then697, %cond_then_block684
  %oror_result_value702 = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value702, label %cond_jump_then703, label %cond_else_block704

cond_jump_then703:                                ; preds = %cond_jump_end698
  %871 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %872 = bitcast i8* %871 to i32*
  %lvalue706 = load i32, i32* %872, align 4
  %873 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %874 = bitcast i8* %873 to %sVMInfo**
  %info707 = load %sVMInfo*, %sVMInfo** %874, align 8
  %875 = call i1 @check_type(i32 %lvalue706, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.88, i32 0, i32 0), %sVMInfo* %info707)
  %876 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %877 = bitcast i8* %876 to i32*
  %rvalue708 = load i32, i32* %877, align 4
  %878 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %879 = bitcast i8* %878 to %sVMInfo**
  %info709 = load %sVMInfo*, %sVMInfo** %879, align 8
  %880 = call i1 @check_type(i32 %rvalue708, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.89, i32 0, i32 0), %sVMInfo* %info709)
  %eqtmpX710 = icmp eq i1 %875, %880
  %sext13711 = zext i1 %eqtmpX710 to i32
  %value712 = alloca i32
  %881 = bitcast i32* %value712 to i8*
  store i8* %881, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store i32 %sext13711, i32* %value712, align 4
  %value713 = load i32, i32* %value712, align 4
  %882 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %883 = bitcast i8* %882 to %sVMInfo**
  %info714 = load %sVMInfo*, %sVMInfo** %883, align 8
  %884 = call i32 @create_bool_object(i32 %value713, %sVMInfo* %info714)
  %obj715 = alloca i32
  %885 = bitcast i32* %obj715 to i8*
  store i8* %885, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store i32 %884, i32* %obj715, align 4
  %886 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %887 = bitcast i8* %886 to %CLVALUE**
  %stack_ptr716 = load %CLVALUE*, %CLVALUE** %887, align 8
  %888 = ptrtoint %CLVALUE* %stack_ptr716 to i64
  %subtmp717 = sub nsw i64 %888, 8
  %IntTOPtr4b718 = inttoptr i64 %subtmp717 to %CLVALUE*
  %889 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %890 = bitcast i8* %889 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b718, %CLVALUE** %890, align 8
  %891 = ptrtoint %CLVALUE* %IntTOPtr4b718 to i64
  %addtmp719 = add nsw i64 %891, 8
  %intToPtr2720 = inttoptr i64 %addtmp719 to %CLVALUE*
  %892 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %893 = bitcast i8* %892 to %CLVALUE**
  %stack_ptr721 = load %CLVALUE*, %CLVALUE** %893, align 8
  %obj722 = load i32, i32* %obj715, align 4
  %894 = bitcast %CLVALUE* %stack_ptr721 to i32*
  store i32 %obj722, i32* %894, align 4
  %895 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %896 = bitcast i8* %895 to %CLVALUE**
  %stack_ptr723 = load %CLVALUE*, %CLVALUE** %896, align 8
  %897 = ptrtoint %CLVALUE* %stack_ptr723 to i64
  %addtmp724 = add nsw i64 %897, 4
  %intToPtr2725 = inttoptr i64 %addtmp724 to %CLVALUE*
  %898 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %899 = bitcast i8* %898 to %CLVALUE**
  store %CLVALUE* %intToPtr2725, %CLVALUE** %899, align 8
  %900 = ptrtoint %CLVALUE* %intToPtr2725 to i64
  %subtmp726 = sub nsw i64 %900, 4
  %IntTOPtr4b727 = inttoptr i64 %subtmp726 to %CLVALUE*
  br label %cond_end705

cond_else_block704:                               ; preds = %cond_jump_end698
  %901 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %902 = bitcast i8* %901 to i32*
  %lvalue728 = load i32, i32* %902, align 4
  %903 = call %sCLHeapMem* @get_object_pointer(i32 %lvalue728)
  %904 = bitcast %sCLHeapMem* %903 to %sCLObject*
  %left_data = alloca %sCLObject*
  %905 = bitcast %sCLObject** %left_data to i8*
  store i8* %905, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLObject* %904, %sCLObject** %left_data, align 8
  %906 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %907 = bitcast i8* %906 to i32*
  %rvalue729 = load i32, i32* %907, align 4
  %908 = call %sCLHeapMem* @get_object_pointer(i32 %rvalue729)
  %909 = bitcast %sCLHeapMem* %908 to %sCLObject*
  %right_data = alloca %sCLObject*
  %910 = bitcast %sCLObject** %right_data to i8*
  store i8* %910, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store %sCLObject* %909, %sCLObject** %right_data, align 8
  %left_data730 = load %sCLObject*, %sCLObject** %left_data, align 8
  %911 = getelementptr inbounds %sCLObject, %sCLObject* %left_data730, i32 0, i32 0
  %912 = load %sCLType*, %sCLType** %911, align 8
  %right_data731 = load %sCLObject*, %sCLObject** %right_data, align 8
  %913 = getelementptr inbounds %sCLObject, %sCLObject* %right_data731, i32 0, i32 0
  %914 = load %sCLType*, %sCLType** %913, align 8
  %915 = call i1 @type_identify(%sCLType* %912, %sCLType* %914)
  %LOGICAL_DIANEAL = icmp eq i1 %915, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then732, label %cond_end733

cond_end705:                                      ; preds = %cond_end733, %cond_jump_then703
  br label %end_block

cond_jump_then732:                                ; preds = %cond_else_block704
  %916 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %917 = bitcast i8* %916 to %CLVALUE**
  %stack_ptr734 = load %CLVALUE*, %CLVALUE** %917, align 8
  %918 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %919 = bitcast i8* %918 to %sVMInfo**
  %info735 = load %sVMInfo*, %sVMInfo** %919, align 8
  %920 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([76 x i8], [76 x i8]* @global_string.90, i32 0, i32 0))
  call void @vm_err_msg(%CLVALUE** %917, %sVMInfo* %info735, i8* %920)
  %921 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %922 = bitcast i8* %921 to %sVMInfo**
  %info736 = load %sVMInfo*, %sVMInfo** %922, align 8
  %923 = getelementptr inbounds %sVMInfo, %sVMInfo* %info736, i32 0, i32 5
  %924 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %923, align 8
  %925 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %926 = bitcast i8* %925 to %sCLStackFrame*
  %null_parent_stack_frame737 = load %sCLStackFrame, %sCLStackFrame* %926, align 8
  %927 = call %sCLStackFrame @"pop_back_sCLStackFrame19_src/vm"(%vector__sCLStackFrame* %924, %sCLStackFrame %null_parent_stack_frame737)
  %928 = bitcast [8192 x i8*]* %lvtable to i8*
  %929 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %928, i64 65536)
  %930 = ptrtoint i8* %920 to i64
  %931 = icmp ne i64 %930, 0
  br i1 %931, label %cond_then_block738, label %cond_end739

cond_end733:                                      ; preds = %cond_else_block704
  %932 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %933 = bitcast i8* %932 to i32*
  %lvalue740 = load i32, i32* %933, align 4
  %934 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %935 = bitcast i8* %934 to i32*
  %rvalue741 = load i32, i32* %935, align 4
  %eqtmpX742 = icmp eq i32 %lvalue740, %rvalue741
  %sext13743 = zext i1 %eqtmpX742 to i32
  %value744 = alloca i32
  %936 = bitcast i32* %value744 to i8*
  store i8* %936, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32 %sext13743, i32* %value744, align 4
  %value745 = load i32, i32* %value744, align 4
  %937 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %938 = bitcast i8* %937 to %sVMInfo**
  %info746 = load %sVMInfo*, %sVMInfo** %938, align 8
  %939 = call i32 @create_bool_object(i32 %value745, %sVMInfo* %info746)
  %new_obj747 = alloca i32
  %940 = bitcast i32* %new_obj747 to i8*
  store i8* %940, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store i32 %939, i32* %new_obj747, align 4
  %941 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %942 = bitcast i8* %941 to %CLVALUE**
  %stack_ptr748 = load %CLVALUE*, %CLVALUE** %942, align 8
  %943 = ptrtoint %CLVALUE* %stack_ptr748 to i64
  %subtmp749 = sub nsw i64 %943, 8
  %IntTOPtr4b750 = inttoptr i64 %subtmp749 to %CLVALUE*
  %944 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %945 = bitcast i8* %944 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b750, %CLVALUE** %945, align 8
  %946 = ptrtoint %CLVALUE* %IntTOPtr4b750 to i64
  %addtmp751 = add nsw i64 %946, 8
  %intToPtr2752 = inttoptr i64 %addtmp751 to %CLVALUE*
  %947 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %948 = bitcast i8* %947 to %CLVALUE**
  %stack_ptr753 = load %CLVALUE*, %CLVALUE** %948, align 8
  %new_obj754 = load i32, i32* %new_obj747, align 4
  %949 = bitcast %CLVALUE* %stack_ptr753 to i32*
  store i32 %new_obj754, i32* %949, align 4
  %950 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %951 = bitcast i8* %950 to %CLVALUE**
  %stack_ptr755 = load %CLVALUE*, %CLVALUE** %951, align 8
  %952 = ptrtoint %CLVALUE* %stack_ptr755 to i64
  %addtmp756 = add nsw i64 %952, 4
  %intToPtr2757 = inttoptr i64 %addtmp756 to %CLVALUE*
  %953 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %954 = bitcast i8* %953 to %CLVALUE**
  store %CLVALUE* %intToPtr2757, %CLVALUE** %954, align 8
  %955 = ptrtoint %CLVALUE* %intToPtr2757 to i64
  %subtmp758 = sub nsw i64 %955, 4
  %IntTOPtr4b759 = inttoptr i64 %subtmp758 to %CLVALUE*
  br label %cond_end705

cond_then_block738:                               ; preds = %cond_jump_then732
  br label %cond_end739

cond_end739:                                      ; preds = %cond_then_block738, %cond_jump_then732
  call void @ncfree(i8* %920)
  ret i1 false

after_break760:                                   ; No predecessors!
  br label %cond_else_block685

cond_then_block761:                               ; preds = %cond_else_block685
  %956 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %957 = bitcast i8* %956 to %CLVALUE**
  %stack_ptr764 = load %CLVALUE*, %CLVALUE** %957, align 8
  %958 = ptrtoint %CLVALUE* %stack_ptr764 to i64
  %subtmp765 = sub nsw i64 %958, 8
  %IntTOPtr4b766 = inttoptr i64 %subtmp765 to %CLVALUE*
  %959 = bitcast %CLVALUE* %IntTOPtr4b766 to i32*
  %960 = load i32, i32* %959, align 4
  %lvalue767 = alloca i32
  %961 = bitcast i32* %lvalue767 to i8*
  store i8* %961, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %960, i32* %lvalue767, align 4
  %962 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %963 = bitcast i8* %962 to %CLVALUE**
  %stack_ptr768 = load %CLVALUE*, %CLVALUE** %963, align 8
  %964 = ptrtoint %CLVALUE* %stack_ptr768 to i64
  %subtmp769 = sub nsw i64 %964, 4
  %IntTOPtr4b770 = inttoptr i64 %subtmp769 to %CLVALUE*
  %965 = bitcast %CLVALUE* %IntTOPtr4b770 to i32*
  %966 = load i32, i32* %965, align 4
  %rvalue771 = alloca i32
  %967 = bitcast i32* %rvalue771 to i8*
  store i8* %967, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %966, i32* %rvalue771, align 4
  %lvalue772 = load i32, i32* %lvalue767, align 4
  %968 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %969 = bitcast i8* %968 to %sVMInfo**
  %info773 = load %sVMInfo*, %sVMInfo** %969, align 8
  %970 = call i1 @check_type(i32 %lvalue772, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.91, i32 0, i32 0), %sVMInfo* %info773)
  store i1 %970, i1* %andand_result_var1, align 1
  br i1 %970, label %cond_jump_end775, label %cond_jump_then774

cond_else_block762:                               ; preds = %after_break828, %cond_else_block685
  %eqtmpY831 = icmp eq i32 %op64, 37
  br i1 %eqtmpY831, label %cond_then_block829, label %cond_else_block830

cond_jump_then774:                                ; preds = %cond_then_block761
  %rvalue776 = load i32, i32* %rvalue771, align 4
  %971 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %972 = bitcast i8* %971 to %sVMInfo**
  %info777 = load %sVMInfo*, %sVMInfo** %972, align 8
  %973 = call i1 @check_type(i32 %rvalue776, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.92, i32 0, i32 0), %sVMInfo* %info777)
  %oror778 = or i1 %970, %973
  store i1 %oror778, i1* %andand_result_var1, align 1
  br label %cond_jump_end775

cond_jump_end775:                                 ; preds = %cond_jump_then774, %cond_then_block761
  %oror_result_value779 = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value779, label %cond_jump_then780, label %cond_else_block781

cond_jump_then780:                                ; preds = %cond_jump_end775
  %974 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %975 = bitcast i8* %974 to i32*
  %lvalue783 = load i32, i32* %975, align 4
  %976 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %977 = bitcast i8* %976 to %sVMInfo**
  %info784 = load %sVMInfo*, %sVMInfo** %977, align 8
  %978 = call i1 @check_type(i32 %lvalue783, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.93, i32 0, i32 0), %sVMInfo* %info784)
  %979 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %980 = bitcast i8* %979 to i32*
  %rvalue785 = load i32, i32* %980, align 4
  %981 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %982 = bitcast i8* %981 to %sVMInfo**
  %info786 = load %sVMInfo*, %sVMInfo** %982, align 8
  %983 = call i1 @check_type(i32 %rvalue785, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.94, i32 0, i32 0), %sVMInfo* %info786)
  %noteqtmp = icmp ne i1 %978, %983
  %sext13787 = zext i1 %noteqtmp to i32
  %value788 = alloca i32
  %984 = bitcast i32* %value788 to i8*
  store i8* %984, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store i32 %sext13787, i32* %value788, align 4
  %value789 = load i32, i32* %value788, align 4
  %985 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %986 = bitcast i8* %985 to %sVMInfo**
  %info790 = load %sVMInfo*, %sVMInfo** %986, align 8
  %987 = call i32 @create_bool_object(i32 %value789, %sVMInfo* %info790)
  %obj791 = alloca i32
  %988 = bitcast i32* %obj791 to i8*
  store i8* %988, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store i32 %987, i32* %obj791, align 4
  %989 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %990 = bitcast i8* %989 to %CLVALUE**
  %stack_ptr792 = load %CLVALUE*, %CLVALUE** %990, align 8
  %991 = ptrtoint %CLVALUE* %stack_ptr792 to i64
  %subtmp793 = sub nsw i64 %991, 8
  %IntTOPtr4b794 = inttoptr i64 %subtmp793 to %CLVALUE*
  %992 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %993 = bitcast i8* %992 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b794, %CLVALUE** %993, align 8
  %994 = ptrtoint %CLVALUE* %IntTOPtr4b794 to i64
  %addtmp795 = add nsw i64 %994, 8
  %intToPtr2796 = inttoptr i64 %addtmp795 to %CLVALUE*
  %995 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %996 = bitcast i8* %995 to %CLVALUE**
  %stack_ptr797 = load %CLVALUE*, %CLVALUE** %996, align 8
  %obj798 = load i32, i32* %obj791, align 4
  %997 = bitcast %CLVALUE* %stack_ptr797 to i32*
  store i32 %obj798, i32* %997, align 4
  %998 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %999 = bitcast i8* %998 to %CLVALUE**
  %stack_ptr799 = load %CLVALUE*, %CLVALUE** %999, align 8
  %1000 = ptrtoint %CLVALUE* %stack_ptr799 to i64
  %addtmp800 = add nsw i64 %1000, 4
  %intToPtr2801 = inttoptr i64 %addtmp800 to %CLVALUE*
  %1001 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1002 = bitcast i8* %1001 to %CLVALUE**
  store %CLVALUE* %intToPtr2801, %CLVALUE** %1002, align 8
  %1003 = ptrtoint %CLVALUE* %intToPtr2801 to i64
  %subtmp802 = sub nsw i64 %1003, 4
  %IntTOPtr4b803 = inttoptr i64 %subtmp802 to %CLVALUE*
  br label %cond_end782

cond_else_block781:                               ; preds = %cond_jump_end775
  %1004 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1005 = bitcast i8* %1004 to i32*
  %lvalue804 = load i32, i32* %1005, align 4
  %1006 = call %sCLHeapMem* @get_object_pointer(i32 %lvalue804)
  %1007 = bitcast %sCLHeapMem* %1006 to %sCLInt*
  %lvalue_data805 = alloca %sCLInt*
  %1008 = bitcast %sCLInt** %lvalue_data805 to i8*
  store i8* %1008, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLInt* %1007, %sCLInt** %lvalue_data805, align 8
  %1009 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %1010 = bitcast i8* %1009 to i32*
  %rvalue806 = load i32, i32* %1010, align 4
  %1011 = call %sCLHeapMem* @get_object_pointer(i32 %rvalue806)
  %1012 = bitcast %sCLHeapMem* %1011 to %sCLInt*
  %rvalue_data807 = alloca %sCLInt*
  %1013 = bitcast %sCLInt** %rvalue_data807 to i8*
  store i8* %1013, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store %sCLInt* %1012, %sCLInt** %rvalue_data807, align 8
  %lvalue_data808 = load %sCLInt*, %sCLInt** %lvalue_data805, align 8
  %1014 = getelementptr inbounds %sCLInt, %sCLInt* %lvalue_data808, i32 0, i32 3
  %1015 = load i32, i32* %1014, align 4
  %rvalue_data809 = load %sCLInt*, %sCLInt** %rvalue_data807, align 8
  %1016 = getelementptr inbounds %sCLInt, %sCLInt* %rvalue_data809, i32 0, i32 3
  %1017 = load i32, i32* %1016, align 4
  %noteqtmp810 = icmp ne i32 %1015, %1017
  %sext13811 = zext i1 %noteqtmp810 to i32
  %value812 = alloca i32
  %1018 = bitcast i32* %value812 to i8*
  store i8* %1018, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32 %sext13811, i32* %value812, align 4
  %value813 = load i32, i32* %value812, align 4
  %1019 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1020 = bitcast i8* %1019 to %sVMInfo**
  %info814 = load %sVMInfo*, %sVMInfo** %1020, align 8
  %1021 = call i32 @create_bool_object(i32 %value813, %sVMInfo* %info814)
  %new_obj815 = alloca i32
  %1022 = bitcast i32* %new_obj815 to i8*
  store i8* %1022, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store i32 %1021, i32* %new_obj815, align 4
  %1023 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1024 = bitcast i8* %1023 to %CLVALUE**
  %stack_ptr816 = load %CLVALUE*, %CLVALUE** %1024, align 8
  %1025 = ptrtoint %CLVALUE* %stack_ptr816 to i64
  %subtmp817 = sub nsw i64 %1025, 8
  %IntTOPtr4b818 = inttoptr i64 %subtmp817 to %CLVALUE*
  %1026 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1027 = bitcast i8* %1026 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b818, %CLVALUE** %1027, align 8
  %1028 = ptrtoint %CLVALUE* %IntTOPtr4b818 to i64
  %addtmp819 = add nsw i64 %1028, 8
  %intToPtr2820 = inttoptr i64 %addtmp819 to %CLVALUE*
  %1029 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1030 = bitcast i8* %1029 to %CLVALUE**
  %stack_ptr821 = load %CLVALUE*, %CLVALUE** %1030, align 8
  %new_obj822 = load i32, i32* %new_obj815, align 4
  %1031 = bitcast %CLVALUE* %stack_ptr821 to i32*
  store i32 %new_obj822, i32* %1031, align 4
  %1032 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1033 = bitcast i8* %1032 to %CLVALUE**
  %stack_ptr823 = load %CLVALUE*, %CLVALUE** %1033, align 8
  %1034 = ptrtoint %CLVALUE* %stack_ptr823 to i64
  %addtmp824 = add nsw i64 %1034, 4
  %intToPtr2825 = inttoptr i64 %addtmp824 to %CLVALUE*
  %1035 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1036 = bitcast i8* %1035 to %CLVALUE**
  store %CLVALUE* %intToPtr2825, %CLVALUE** %1036, align 8
  %1037 = ptrtoint %CLVALUE* %intToPtr2825 to i64
  %subtmp826 = sub nsw i64 %1037, 4
  %IntTOPtr4b827 = inttoptr i64 %subtmp826 to %CLVALUE*
  br label %cond_end782

cond_end782:                                      ; preds = %cond_else_block781, %cond_jump_then780
  br label %end_block

after_break828:                                   ; No predecessors!
  br label %cond_else_block762

cond_then_block829:                               ; preds = %cond_else_block762
  %1038 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1039 = bitcast i8* %1038 to %CLVALUE**
  %stack_ptr832 = load %CLVALUE*, %CLVALUE** %1039, align 8
  %1040 = ptrtoint %CLVALUE* %stack_ptr832 to i64
  %subtmp833 = sub nsw i64 %1040, 8
  %IntTOPtr4b834 = inttoptr i64 %subtmp833 to %CLVALUE*
  %1041 = bitcast %CLVALUE* %IntTOPtr4b834 to i32*
  %1042 = load i32, i32* %1041, align 4
  %lvalue835 = alloca i32
  %1043 = bitcast i32* %lvalue835 to i8*
  store i8* %1043, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %1042, i32* %lvalue835, align 4
  %1044 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1045 = bitcast i8* %1044 to %CLVALUE**
  %stack_ptr836 = load %CLVALUE*, %CLVALUE** %1045, align 8
  %1046 = ptrtoint %CLVALUE* %stack_ptr836 to i64
  %subtmp837 = sub nsw i64 %1046, 4
  %IntTOPtr4b838 = inttoptr i64 %subtmp837 to %CLVALUE*
  %1047 = bitcast %CLVALUE* %IntTOPtr4b838 to i32*
  %1048 = load i32, i32* %1047, align 4
  %rvalue839 = alloca i32
  %1049 = bitcast i32* %rvalue839 to i8*
  store i8* %1049, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %1048, i32* %rvalue839, align 4
  %lvalue840 = load i32, i32* %lvalue835, align 4
  %1050 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1051 = bitcast i8* %1050 to %sVMInfo**
  %info841 = load %sVMInfo*, %sVMInfo** %1051, align 8
  %1052 = call i1 @check_type(i32 %lvalue840, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.95, i32 0, i32 0), %sVMInfo* %info841)
  store i1 %1052, i1* %andand_result_var1, align 1
  br i1 %1052, label %cond_jump_end843, label %cond_jump_then842

cond_else_block830:                               ; preds = %after_break893, %cond_else_block762
  %eqtmpY896 = icmp eq i32 %op64, 38
  br i1 %eqtmpY896, label %cond_then_block894, label %cond_else_block895

cond_jump_then842:                                ; preds = %cond_then_block829
  %rvalue844 = load i32, i32* %rvalue839, align 4
  %1053 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1054 = bitcast i8* %1053 to %sVMInfo**
  %info845 = load %sVMInfo*, %sVMInfo** %1054, align 8
  %1055 = call i1 @check_type(i32 %rvalue844, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.96, i32 0, i32 0), %sVMInfo* %info845)
  %oror846 = or i1 %1052, %1055
  store i1 %oror846, i1* %andand_result_var1, align 1
  br label %cond_jump_end843

cond_jump_end843:                                 ; preds = %cond_jump_then842, %cond_then_block829
  %oror_result_value847 = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value847, label %cond_jump_then848, label %cond_else_block849

cond_jump_then848:                                ; preds = %cond_jump_end843
  %1056 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1057 = bitcast i8* %1056 to i32*
  %lvalue851 = load i32, i32* %1057, align 4
  %1058 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1059 = bitcast i8* %1058 to %sVMInfo**
  %info852 = load %sVMInfo*, %sVMInfo** %1059, align 8
  %1060 = call i1 @check_type(i32 %lvalue851, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.97, i32 0, i32 0), %sVMInfo* %info852)
  %1061 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %1062 = bitcast i8* %1061 to i32*
  %rvalue853 = load i32, i32* %1062, align 4
  %1063 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1064 = bitcast i8* %1063 to %sVMInfo**
  %info854 = load %sVMInfo*, %sVMInfo** %1064, align 8
  %1065 = call i1 @check_type(i32 %rvalue853, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.98, i32 0, i32 0), %sVMInfo* %info854)
  %noteqtmp855 = icmp ne i1 %1060, %1065
  %sext13856 = zext i1 %noteqtmp855 to i32
  %value857 = alloca i32
  %1066 = bitcast i32* %value857 to i8*
  store i8* %1066, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store i32 %sext13856, i32* %value857, align 4
  %value858 = load i32, i32* %value857, align 4
  %1067 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1068 = bitcast i8* %1067 to %sVMInfo**
  %info859 = load %sVMInfo*, %sVMInfo** %1068, align 8
  %1069 = call i32 @create_bool_object(i32 %value858, %sVMInfo* %info859)
  %obj860 = alloca i32
  %1070 = bitcast i32* %obj860 to i8*
  store i8* %1070, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store i32 %1069, i32* %obj860, align 4
  %1071 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1072 = bitcast i8* %1071 to %CLVALUE**
  %stack_ptr861 = load %CLVALUE*, %CLVALUE** %1072, align 8
  %1073 = ptrtoint %CLVALUE* %stack_ptr861 to i64
  %subtmp862 = sub nsw i64 %1073, 8
  %IntTOPtr4b863 = inttoptr i64 %subtmp862 to %CLVALUE*
  %1074 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1075 = bitcast i8* %1074 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b863, %CLVALUE** %1075, align 8
  %1076 = ptrtoint %CLVALUE* %IntTOPtr4b863 to i64
  %addtmp864 = add nsw i64 %1076, 8
  %intToPtr2865 = inttoptr i64 %addtmp864 to %CLVALUE*
  %1077 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1078 = bitcast i8* %1077 to %CLVALUE**
  %stack_ptr866 = load %CLVALUE*, %CLVALUE** %1078, align 8
  %obj867 = load i32, i32* %obj860, align 4
  %1079 = bitcast %CLVALUE* %stack_ptr866 to i32*
  store i32 %obj867, i32* %1079, align 4
  %1080 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1081 = bitcast i8* %1080 to %CLVALUE**
  %stack_ptr868 = load %CLVALUE*, %CLVALUE** %1081, align 8
  %1082 = ptrtoint %CLVALUE* %stack_ptr868 to i64
  %addtmp869 = add nsw i64 %1082, 4
  %intToPtr2870 = inttoptr i64 %addtmp869 to %CLVALUE*
  %1083 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1084 = bitcast i8* %1083 to %CLVALUE**
  store %CLVALUE* %intToPtr2870, %CLVALUE** %1084, align 8
  %1085 = ptrtoint %CLVALUE* %intToPtr2870 to i64
  %subtmp871 = sub nsw i64 %1085, 4
  %IntTOPtr4b872 = inttoptr i64 %subtmp871 to %CLVALUE*
  br label %cond_end850

cond_else_block849:                               ; preds = %cond_jump_end843
  %1086 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1087 = bitcast i8* %1086 to i32*
  %lvalue873 = load i32, i32* %1087, align 4
  %1088 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %1089 = bitcast i8* %1088 to i32*
  %rvalue874 = load i32, i32* %1089, align 4
  %noteqtmp875 = icmp ne i32 %lvalue873, %rvalue874
  %sext13876 = zext i1 %noteqtmp875 to i32
  %value877 = alloca i32
  %1090 = bitcast i32* %value877 to i8*
  store i8* %1090, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store i32 %sext13876, i32* %value877, align 4
  %value878 = load i32, i32* %value877, align 4
  %1091 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1092 = bitcast i8* %1091 to %sVMInfo**
  %info879 = load %sVMInfo*, %sVMInfo** %1092, align 8
  %1093 = call i32 @create_bool_object(i32 %value878, %sVMInfo* %info879)
  %new_obj880 = alloca i32
  %1094 = bitcast i32* %new_obj880 to i8*
  store i8* %1094, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store i32 %1093, i32* %new_obj880, align 4
  %1095 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1096 = bitcast i8* %1095 to %CLVALUE**
  %stack_ptr881 = load %CLVALUE*, %CLVALUE** %1096, align 8
  %1097 = ptrtoint %CLVALUE* %stack_ptr881 to i64
  %subtmp882 = sub nsw i64 %1097, 8
  %IntTOPtr4b883 = inttoptr i64 %subtmp882 to %CLVALUE*
  %1098 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1099 = bitcast i8* %1098 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b883, %CLVALUE** %1099, align 8
  %1100 = ptrtoint %CLVALUE* %IntTOPtr4b883 to i64
  %addtmp884 = add nsw i64 %1100, 8
  %intToPtr2885 = inttoptr i64 %addtmp884 to %CLVALUE*
  %1101 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1102 = bitcast i8* %1101 to %CLVALUE**
  %stack_ptr886 = load %CLVALUE*, %CLVALUE** %1102, align 8
  %new_obj887 = load i32, i32* %new_obj880, align 4
  %1103 = bitcast %CLVALUE* %stack_ptr886 to i32*
  store i32 %new_obj887, i32* %1103, align 4
  %1104 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1105 = bitcast i8* %1104 to %CLVALUE**
  %stack_ptr888 = load %CLVALUE*, %CLVALUE** %1105, align 8
  %1106 = ptrtoint %CLVALUE* %stack_ptr888 to i64
  %addtmp889 = add nsw i64 %1106, 4
  %intToPtr2890 = inttoptr i64 %addtmp889 to %CLVALUE*
  %1107 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1108 = bitcast i8* %1107 to %CLVALUE**
  store %CLVALUE* %intToPtr2890, %CLVALUE** %1108, align 8
  %1109 = ptrtoint %CLVALUE* %intToPtr2890 to i64
  %subtmp891 = sub nsw i64 %1109, 4
  %IntTOPtr4b892 = inttoptr i64 %subtmp891 to %CLVALUE*
  br label %cond_end850

cond_end850:                                      ; preds = %cond_else_block849, %cond_jump_then848
  br label %end_block

after_break893:                                   ; No predecessors!
  br label %cond_else_block830

cond_then_block894:                               ; preds = %cond_else_block830
  %1110 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1111 = bitcast i8* %1110 to %CLVALUE**
  %stack_ptr897 = load %CLVALUE*, %CLVALUE** %1111, align 8
  %1112 = ptrtoint %CLVALUE* %stack_ptr897 to i64
  %subtmp898 = sub nsw i64 %1112, 8
  %IntTOPtr4b899 = inttoptr i64 %subtmp898 to %CLVALUE*
  %1113 = bitcast %CLVALUE* %IntTOPtr4b899 to i32*
  %1114 = load i32, i32* %1113, align 4
  %lvalue900 = alloca i32
  %1115 = bitcast i32* %lvalue900 to i8*
  store i8* %1115, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %1114, i32* %lvalue900, align 4
  %1116 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1117 = bitcast i8* %1116 to %CLVALUE**
  %stack_ptr901 = load %CLVALUE*, %CLVALUE** %1117, align 8
  %1118 = ptrtoint %CLVALUE* %stack_ptr901 to i64
  %subtmp902 = sub nsw i64 %1118, 4
  %IntTOPtr4b903 = inttoptr i64 %subtmp902 to %CLVALUE*
  %1119 = bitcast %CLVALUE* %IntTOPtr4b903 to i32*
  %1120 = load i32, i32* %1119, align 4
  %rvalue904 = alloca i32
  %1121 = bitcast i32* %rvalue904 to i8*
  store i8* %1121, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %1120, i32* %rvalue904, align 4
  %lvalue905 = load i32, i32* %lvalue900, align 4
  %1122 = call %sCLHeapMem* @get_object_pointer(i32 %lvalue905)
  %1123 = bitcast %sCLHeapMem* %1122 to %sCLInt*
  %lvalue_data906 = alloca %sCLInt*
  %1124 = bitcast %sCLInt** %lvalue_data906 to i8*
  store i8* %1124, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLInt* %1123, %sCLInt** %lvalue_data906, align 8
  %rvalue907 = load i32, i32* %rvalue904, align 4
  %1125 = call %sCLHeapMem* @get_object_pointer(i32 %rvalue907)
  %1126 = bitcast %sCLHeapMem* %1125 to %sCLInt*
  %rvalue_data908 = alloca %sCLInt*
  %1127 = bitcast %sCLInt** %rvalue_data908 to i8*
  store i8* %1127, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store %sCLInt* %1126, %sCLInt** %rvalue_data908, align 8
  %lvalue_data909 = load %sCLInt*, %sCLInt** %lvalue_data906, align 8
  %1128 = getelementptr inbounds %sCLInt, %sCLInt* %lvalue_data909, i32 0, i32 3
  %1129 = load i32, i32* %1128, align 4
  %1130 = icmp ne i32 %1129, 0
  store i1 %1130, i1* %andand_result_var, align 1
  br i1 %1130, label %cond_jump_then910, label %cond_jump_end911

cond_else_block895:                               ; preds = %after_break930, %cond_else_block830
  %eqtmpY933 = icmp eq i32 %op64, 39
  br i1 %eqtmpY933, label %cond_then_block931, label %cond_else_block932

cond_jump_then910:                                ; preds = %cond_then_block894
  %rvalue_data912 = load %sCLInt*, %sCLInt** %rvalue_data908, align 8
  %1131 = getelementptr inbounds %sCLInt, %sCLInt* %rvalue_data912, i32 0, i32 3
  %1132 = load i32, i32* %1131, align 4
  %1133 = icmp ne i32 %1132, 0
  %andand = and i1 %1130, %1133
  store i1 %andand, i1* %andand_result_var, align 1
  br label %cond_jump_end911

cond_jump_end911:                                 ; preds = %cond_jump_then910, %cond_then_block894
  %andand_result_value = load i1, i1* %andand_result_var, align 1
  %sext13913 = zext i1 %andand_result_value to i32
  %value914 = alloca i32
  %1134 = bitcast i32* %value914 to i8*
  store i8* %1134, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32 %sext13913, i32* %value914, align 4
  %value915 = load i32, i32* %value914, align 4
  %1135 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1136 = bitcast i8* %1135 to %sVMInfo**
  %info916 = load %sVMInfo*, %sVMInfo** %1136, align 8
  %1137 = call i32 @create_bool_object(i32 %value915, %sVMInfo* %info916)
  %new_obj917 = alloca i32
  %1138 = bitcast i32* %new_obj917 to i8*
  store i8* %1138, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store i32 %1137, i32* %new_obj917, align 4
  %1139 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1140 = bitcast i8* %1139 to %CLVALUE**
  %stack_ptr918 = load %CLVALUE*, %CLVALUE** %1140, align 8
  %1141 = ptrtoint %CLVALUE* %stack_ptr918 to i64
  %subtmp919 = sub nsw i64 %1141, 8
  %IntTOPtr4b920 = inttoptr i64 %subtmp919 to %CLVALUE*
  %1142 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1143 = bitcast i8* %1142 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b920, %CLVALUE** %1143, align 8
  %1144 = ptrtoint %CLVALUE* %IntTOPtr4b920 to i64
  %addtmp921 = add nsw i64 %1144, 8
  %intToPtr2922 = inttoptr i64 %addtmp921 to %CLVALUE*
  %1145 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1146 = bitcast i8* %1145 to %CLVALUE**
  %stack_ptr923 = load %CLVALUE*, %CLVALUE** %1146, align 8
  %new_obj924 = load i32, i32* %new_obj917, align 4
  %1147 = bitcast %CLVALUE* %stack_ptr923 to i32*
  store i32 %new_obj924, i32* %1147, align 4
  %1148 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1149 = bitcast i8* %1148 to %CLVALUE**
  %stack_ptr925 = load %CLVALUE*, %CLVALUE** %1149, align 8
  %1150 = ptrtoint %CLVALUE* %stack_ptr925 to i64
  %addtmp926 = add nsw i64 %1150, 4
  %intToPtr2927 = inttoptr i64 %addtmp926 to %CLVALUE*
  %1151 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1152 = bitcast i8* %1151 to %CLVALUE**
  store %CLVALUE* %intToPtr2927, %CLVALUE** %1152, align 8
  %1153 = ptrtoint %CLVALUE* %intToPtr2927 to i64
  %subtmp928 = sub nsw i64 %1153, 4
  %IntTOPtr4b929 = inttoptr i64 %subtmp928 to %CLVALUE*
  br label %end_block

after_break930:                                   ; No predecessors!
  br label %cond_else_block895

cond_then_block931:                               ; preds = %cond_else_block895
  %1154 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1155 = bitcast i8* %1154 to %CLVALUE**
  %stack_ptr934 = load %CLVALUE*, %CLVALUE** %1155, align 8
  %1156 = ptrtoint %CLVALUE* %stack_ptr934 to i64
  %subtmp935 = sub nsw i64 %1156, 8
  %IntTOPtr4b936 = inttoptr i64 %subtmp935 to %CLVALUE*
  %1157 = bitcast %CLVALUE* %IntTOPtr4b936 to i32*
  %1158 = load i32, i32* %1157, align 4
  %lvalue937 = alloca i32
  %1159 = bitcast i32* %lvalue937 to i8*
  store i8* %1159, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %1158, i32* %lvalue937, align 4
  %1160 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1161 = bitcast i8* %1160 to %CLVALUE**
  %stack_ptr938 = load %CLVALUE*, %CLVALUE** %1161, align 8
  %1162 = ptrtoint %CLVALUE* %stack_ptr938 to i64
  %subtmp939 = sub nsw i64 %1162, 4
  %IntTOPtr4b940 = inttoptr i64 %subtmp939 to %CLVALUE*
  %1163 = bitcast %CLVALUE* %IntTOPtr4b940 to i32*
  %1164 = load i32, i32* %1163, align 4
  %rvalue941 = alloca i32
  %1165 = bitcast i32* %rvalue941 to i8*
  store i8* %1165, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %1164, i32* %rvalue941, align 4
  %lvalue942 = load i32, i32* %lvalue937, align 4
  %1166 = call %sCLHeapMem* @get_object_pointer(i32 %lvalue942)
  %1167 = bitcast %sCLHeapMem* %1166 to %sCLInt*
  %lvalue_data943 = alloca %sCLInt*
  %1168 = bitcast %sCLInt** %lvalue_data943 to i8*
  store i8* %1168, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLInt* %1167, %sCLInt** %lvalue_data943, align 8
  %rvalue944 = load i32, i32* %rvalue941, align 4
  %1169 = call %sCLHeapMem* @get_object_pointer(i32 %rvalue944)
  %1170 = bitcast %sCLHeapMem* %1169 to %sCLInt*
  %rvalue_data945 = alloca %sCLInt*
  %1171 = bitcast %sCLInt** %rvalue_data945 to i8*
  store i8* %1171, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store %sCLInt* %1170, %sCLInt** %rvalue_data945, align 8
  %lvalue_data946 = load %sCLInt*, %sCLInt** %lvalue_data943, align 8
  %1172 = getelementptr inbounds %sCLInt, %sCLInt* %lvalue_data946, i32 0, i32 3
  %1173 = load i32, i32* %1172, align 4
  %1174 = icmp ne i32 %1173, 0
  store i1 %1174, i1* %andand_result_var1, align 1
  br i1 %1174, label %cond_jump_end948, label %cond_jump_then947

cond_else_block932:                               ; preds = %after_break969, %cond_else_block895
  %eqtmpY972 = icmp eq i32 %op64, 40
  br i1 %eqtmpY972, label %cond_then_block970, label %cond_else_block971

cond_jump_then947:                                ; preds = %cond_then_block931
  %rvalue_data949 = load %sCLInt*, %sCLInt** %rvalue_data945, align 8
  %1175 = getelementptr inbounds %sCLInt, %sCLInt* %rvalue_data949, i32 0, i32 3
  %1176 = load i32, i32* %1175, align 4
  %1177 = icmp ne i32 %1176, 0
  %oror950 = or i1 %1174, %1177
  store i1 %oror950, i1* %andand_result_var1, align 1
  br label %cond_jump_end948

cond_jump_end948:                                 ; preds = %cond_jump_then947, %cond_then_block931
  %oror_result_value951 = load i1, i1* %andand_result_var1, align 1
  %sext13952 = zext i1 %oror_result_value951 to i32
  %value953 = alloca i32
  %1178 = bitcast i32* %value953 to i8*
  store i8* %1178, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32 %sext13952, i32* %value953, align 4
  %value954 = load i32, i32* %value953, align 4
  %1179 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1180 = bitcast i8* %1179 to %sVMInfo**
  %info955 = load %sVMInfo*, %sVMInfo** %1180, align 8
  %1181 = call i32 @create_bool_object(i32 %value954, %sVMInfo* %info955)
  %new_obj956 = alloca i32
  %1182 = bitcast i32* %new_obj956 to i8*
  store i8* %1182, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store i32 %1181, i32* %new_obj956, align 4
  %1183 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1184 = bitcast i8* %1183 to %CLVALUE**
  %stack_ptr957 = load %CLVALUE*, %CLVALUE** %1184, align 8
  %1185 = ptrtoint %CLVALUE* %stack_ptr957 to i64
  %subtmp958 = sub nsw i64 %1185, 8
  %IntTOPtr4b959 = inttoptr i64 %subtmp958 to %CLVALUE*
  %1186 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1187 = bitcast i8* %1186 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b959, %CLVALUE** %1187, align 8
  %1188 = ptrtoint %CLVALUE* %IntTOPtr4b959 to i64
  %addtmp960 = add nsw i64 %1188, 8
  %intToPtr2961 = inttoptr i64 %addtmp960 to %CLVALUE*
  %1189 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1190 = bitcast i8* %1189 to %CLVALUE**
  %stack_ptr962 = load %CLVALUE*, %CLVALUE** %1190, align 8
  %new_obj963 = load i32, i32* %new_obj956, align 4
  %1191 = bitcast %CLVALUE* %stack_ptr962 to i32*
  store i32 %new_obj963, i32* %1191, align 4
  %1192 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1193 = bitcast i8* %1192 to %CLVALUE**
  %stack_ptr964 = load %CLVALUE*, %CLVALUE** %1193, align 8
  %1194 = ptrtoint %CLVALUE* %stack_ptr964 to i64
  %addtmp965 = add nsw i64 %1194, 4
  %intToPtr2966 = inttoptr i64 %addtmp965 to %CLVALUE*
  %1195 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1196 = bitcast i8* %1195 to %CLVALUE**
  store %CLVALUE* %intToPtr2966, %CLVALUE** %1196, align 8
  %1197 = ptrtoint %CLVALUE* %intToPtr2966 to i64
  %subtmp967 = sub nsw i64 %1197, 4
  %IntTOPtr4b968 = inttoptr i64 %subtmp967 to %CLVALUE*
  br label %end_block

after_break969:                                   ; No predecessors!
  br label %cond_else_block932

cond_then_block970:                               ; preds = %cond_else_block932
  %1198 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1199 = bitcast i8* %1198 to %CLVALUE**
  %stack_ptr973 = load %CLVALUE*, %CLVALUE** %1199, align 8
  %1200 = ptrtoint %CLVALUE* %stack_ptr973 to i64
  %subtmp974 = sub nsw i64 %1200, 4
  %IntTOPtr4b975 = inttoptr i64 %subtmp974 to %CLVALUE*
  %1201 = bitcast %CLVALUE* %IntTOPtr4b975 to i32*
  %1202 = load i32, i32* %1201, align 4
  %lvalue976 = alloca i32
  %1203 = bitcast i32* %lvalue976 to i8*
  store i8* %1203, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %1202, i32* %lvalue976, align 4
  %lvalue977 = load i32, i32* %lvalue976, align 4
  %1204 = call %sCLHeapMem* @get_object_pointer(i32 %lvalue977)
  %1205 = bitcast %sCLHeapMem* %1204 to %sCLInt*
  %lvalue_data978 = alloca %sCLInt*
  %1206 = bitcast %sCLInt** %lvalue_data978 to i8*
  store i8* %1206, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store %sCLInt* %1205, %sCLInt** %lvalue_data978, align 8
  %lvalue_data979 = load %sCLInt*, %sCLInt** %lvalue_data978, align 8
  %1207 = getelementptr inbounds %sCLInt, %sCLInt* %lvalue_data979, i32 0, i32 3
  %1208 = load i32, i32* %1207, align 4
  %1209 = icmp ne i32 %1208, 0
  %LOGICAL_DIANEAL980 = icmp eq i1 %1209, false
  %sext13981 = zext i1 %LOGICAL_DIANEAL980 to i32
  %value982 = alloca i32
  %1210 = bitcast i32* %value982 to i8*
  store i8* %1210, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store i32 %sext13981, i32* %value982, align 4
  %value983 = load i32, i32* %value982, align 4
  %1211 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1212 = bitcast i8* %1211 to %sVMInfo**
  %info984 = load %sVMInfo*, %sVMInfo** %1212, align 8
  %1213 = call i32 @create_bool_object(i32 %value983, %sVMInfo* %info984)
  %new_obj985 = alloca i32
  %1214 = bitcast i32* %new_obj985 to i8*
  store i8* %1214, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store i32 %1213, i32* %new_obj985, align 4
  %1215 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1216 = bitcast i8* %1215 to %CLVALUE**
  %stack_ptr986 = load %CLVALUE*, %CLVALUE** %1216, align 8
  %1217 = ptrtoint %CLVALUE* %stack_ptr986 to i64
  %subtmp987 = sub nsw i64 %1217, 4
  %IntTOPtr4b988 = inttoptr i64 %subtmp987 to %CLVALUE*
  %1218 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1219 = bitcast i8* %1218 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b988, %CLVALUE** %1219, align 8
  %1220 = ptrtoint %CLVALUE* %IntTOPtr4b988 to i64
  %addtmp989 = add nsw i64 %1220, 4
  %intToPtr2990 = inttoptr i64 %addtmp989 to %CLVALUE*
  %1221 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1222 = bitcast i8* %1221 to %CLVALUE**
  %stack_ptr991 = load %CLVALUE*, %CLVALUE** %1222, align 8
  %new_obj992 = load i32, i32* %new_obj985, align 4
  %1223 = bitcast %CLVALUE* %stack_ptr991 to i32*
  store i32 %new_obj992, i32* %1223, align 4
  %1224 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1225 = bitcast i8* %1224 to %CLVALUE**
  %stack_ptr993 = load %CLVALUE*, %CLVALUE** %1225, align 8
  %1226 = ptrtoint %CLVALUE* %stack_ptr993 to i64
  %addtmp994 = add nsw i64 %1226, 4
  %intToPtr2995 = inttoptr i64 %addtmp994 to %CLVALUE*
  %1227 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1228 = bitcast i8* %1227 to %CLVALUE**
  store %CLVALUE* %intToPtr2995, %CLVALUE** %1228, align 8
  %1229 = ptrtoint %CLVALUE* %intToPtr2995 to i64
  %subtmp996 = sub nsw i64 %1229, 4
  %IntTOPtr4b997 = inttoptr i64 %subtmp996 to %CLVALUE*
  br label %end_block

cond_else_block971:                               ; preds = %after_break998, %cond_else_block932
  %eqtmpY1001 = icmp eq i32 %op64, 14
  br i1 %eqtmpY1001, label %cond_then_block999, label %cond_else_block1000

after_break998:                                   ; No predecessors!
  br label %cond_else_block971

cond_then_block999:                               ; preds = %cond_else_block971
  %1230 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1231 = bitcast i8* %1230 to %CLVALUE**
  %stack_ptr1002 = load %CLVALUE*, %CLVALUE** %1231, align 8
  %1232 = ptrtoint %CLVALUE* %stack_ptr1002 to i64
  %subtmp1003 = sub nsw i64 %1232, 8
  %IntTOPtr4b1004 = inttoptr i64 %subtmp1003 to %CLVALUE*
  %1233 = bitcast %CLVALUE* %IntTOPtr4b1004 to i32*
  %1234 = load i32, i32* %1233, align 4
  %lvalue1005 = alloca i32
  %1235 = bitcast i32* %lvalue1005 to i8*
  store i8* %1235, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %1234, i32* %lvalue1005, align 4
  %1236 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1237 = bitcast i8* %1236 to %CLVALUE**
  %stack_ptr1006 = load %CLVALUE*, %CLVALUE** %1237, align 8
  %1238 = ptrtoint %CLVALUE* %stack_ptr1006 to i64
  %subtmp1007 = sub nsw i64 %1238, 4
  %IntTOPtr4b1008 = inttoptr i64 %subtmp1007 to %CLVALUE*
  %1239 = bitcast %CLVALUE* %IntTOPtr4b1008 to i32*
  %1240 = load i32, i32* %1239, align 4
  %rvalue1009 = alloca i32
  %1241 = bitcast i32* %rvalue1009 to i8*
  store i8* %1241, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %1240, i32* %rvalue1009, align 4
  %lvalue1010 = load i32, i32* %lvalue1005, align 4
  %1242 = call %sCLHeapMem* @get_object_pointer(i32 %lvalue1010)
  %1243 = bitcast %sCLHeapMem* %1242 to %sCLInt*
  %lvalue_data1011 = alloca %sCLInt*
  %1244 = bitcast %sCLInt** %lvalue_data1011 to i8*
  store i8* %1244, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLInt* %1243, %sCLInt** %lvalue_data1011, align 8
  %rvalue1012 = load i32, i32* %rvalue1009, align 4
  %1245 = call %sCLHeapMem* @get_object_pointer(i32 %rvalue1012)
  %1246 = bitcast %sCLHeapMem* %1245 to %sCLInt*
  %rvalue_data1013 = alloca %sCLInt*
  %1247 = bitcast %sCLInt** %rvalue_data1013 to i8*
  store i8* %1247, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store %sCLInt* %1246, %sCLInt** %rvalue_data1013, align 8
  %lvalue_data1014 = load %sCLInt*, %sCLInt** %lvalue_data1011, align 8
  %1248 = getelementptr inbounds %sCLInt, %sCLInt* %lvalue_data1014, i32 0, i32 3
  %1249 = load i32, i32* %1248, align 4
  %rvalue_data1015 = load %sCLInt*, %sCLInt** %rvalue_data1013, align 8
  %1250 = getelementptr inbounds %sCLInt, %sCLInt* %rvalue_data1015, i32 0, i32 3
  %1251 = load i32, i32* %1250, align 4
  %letmp1016 = icmp slt i32 %1249, %1251
  %sext131017 = zext i1 %letmp1016 to i32
  %value1018 = alloca i32
  %1252 = bitcast i32* %value1018 to i8*
  store i8* %1252, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32 %sext131017, i32* %value1018, align 4
  %value1019 = load i32, i32* %value1018, align 4
  %1253 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1254 = bitcast i8* %1253 to %sVMInfo**
  %info1020 = load %sVMInfo*, %sVMInfo** %1254, align 8
  %1255 = call i32 @create_bool_object(i32 %value1019, %sVMInfo* %info1020)
  %new_obj1021 = alloca i32
  %1256 = bitcast i32* %new_obj1021 to i8*
  store i8* %1256, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store i32 %1255, i32* %new_obj1021, align 4
  %1257 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1258 = bitcast i8* %1257 to %CLVALUE**
  %stack_ptr1022 = load %CLVALUE*, %CLVALUE** %1258, align 8
  %1259 = ptrtoint %CLVALUE* %stack_ptr1022 to i64
  %subtmp1023 = sub nsw i64 %1259, 8
  %IntTOPtr4b1024 = inttoptr i64 %subtmp1023 to %CLVALUE*
  %1260 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1261 = bitcast i8* %1260 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b1024, %CLVALUE** %1261, align 8
  %1262 = ptrtoint %CLVALUE* %IntTOPtr4b1024 to i64
  %addtmp1025 = add nsw i64 %1262, 8
  %intToPtr21026 = inttoptr i64 %addtmp1025 to %CLVALUE*
  %1263 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1264 = bitcast i8* %1263 to %CLVALUE**
  %stack_ptr1027 = load %CLVALUE*, %CLVALUE** %1264, align 8
  %new_obj1028 = load i32, i32* %new_obj1021, align 4
  %1265 = bitcast %CLVALUE* %stack_ptr1027 to i32*
  store i32 %new_obj1028, i32* %1265, align 4
  %1266 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1267 = bitcast i8* %1266 to %CLVALUE**
  %stack_ptr1029 = load %CLVALUE*, %CLVALUE** %1267, align 8
  %1268 = ptrtoint %CLVALUE* %stack_ptr1029 to i64
  %addtmp1030 = add nsw i64 %1268, 4
  %intToPtr21031 = inttoptr i64 %addtmp1030 to %CLVALUE*
  %1269 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1270 = bitcast i8* %1269 to %CLVALUE**
  store %CLVALUE* %intToPtr21031, %CLVALUE** %1270, align 8
  %1271 = ptrtoint %CLVALUE* %intToPtr21031 to i64
  %subtmp1032 = sub nsw i64 %1271, 4
  %IntTOPtr4b1033 = inttoptr i64 %subtmp1032 to %CLVALUE*
  br label %end_block

cond_else_block1000:                              ; preds = %after_break1034, %cond_else_block971
  %eqtmpY1037 = icmp eq i32 %op64, 16
  br i1 %eqtmpY1037, label %cond_then_block1035, label %cond_else_block1036

after_break1034:                                  ; No predecessors!
  br label %cond_else_block1000

cond_then_block1035:                              ; preds = %cond_else_block1000
  %1272 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1273 = bitcast i8* %1272 to %CLVALUE**
  %stack_ptr1038 = load %CLVALUE*, %CLVALUE** %1273, align 8
  %1274 = ptrtoint %CLVALUE* %stack_ptr1038 to i64
  %subtmp1039 = sub nsw i64 %1274, 8
  %IntTOPtr4b1040 = inttoptr i64 %subtmp1039 to %CLVALUE*
  %1275 = bitcast %CLVALUE* %IntTOPtr4b1040 to i32*
  %1276 = load i32, i32* %1275, align 4
  %lvalue1041 = alloca i32
  %1277 = bitcast i32* %lvalue1041 to i8*
  store i8* %1277, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %1276, i32* %lvalue1041, align 4
  %1278 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1279 = bitcast i8* %1278 to %CLVALUE**
  %stack_ptr1042 = load %CLVALUE*, %CLVALUE** %1279, align 8
  %1280 = ptrtoint %CLVALUE* %stack_ptr1042 to i64
  %subtmp1043 = sub nsw i64 %1280, 4
  %IntTOPtr4b1044 = inttoptr i64 %subtmp1043 to %CLVALUE*
  %1281 = bitcast %CLVALUE* %IntTOPtr4b1044 to i32*
  %1282 = load i32, i32* %1281, align 4
  %rvalue1045 = alloca i32
  %1283 = bitcast i32* %rvalue1045 to i8*
  store i8* %1283, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %1282, i32* %rvalue1045, align 4
  %lvalue1046 = load i32, i32* %lvalue1041, align 4
  %1284 = call %sCLHeapMem* @get_object_pointer(i32 %lvalue1046)
  %1285 = bitcast %sCLHeapMem* %1284 to %sCLInt*
  %lvalue_data1047 = alloca %sCLInt*
  %1286 = bitcast %sCLInt** %lvalue_data1047 to i8*
  store i8* %1286, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLInt* %1285, %sCLInt** %lvalue_data1047, align 8
  %rvalue1048 = load i32, i32* %rvalue1045, align 4
  %1287 = call %sCLHeapMem* @get_object_pointer(i32 %rvalue1048)
  %1288 = bitcast %sCLHeapMem* %1287 to %sCLInt*
  %rvalue_data1049 = alloca %sCLInt*
  %1289 = bitcast %sCLInt** %rvalue_data1049 to i8*
  store i8* %1289, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store %sCLInt* %1288, %sCLInt** %rvalue_data1049, align 8
  %lvalue_data1050 = load %sCLInt*, %sCLInt** %lvalue_data1047, align 8
  %1290 = getelementptr inbounds %sCLInt, %sCLInt* %lvalue_data1050, i32 0, i32 3
  %1291 = load i32, i32* %1290, align 4
  %rvalue_data1051 = load %sCLInt*, %sCLInt** %rvalue_data1049, align 8
  %1292 = getelementptr inbounds %sCLInt, %sCLInt* %rvalue_data1051, i32 0, i32 3
  %1293 = load i32, i32* %1292, align 4
  %gttmp = icmp sgt i32 %1291, %1293
  %sext131052 = zext i1 %gttmp to i32
  %value1053 = alloca i32
  %1294 = bitcast i32* %value1053 to i8*
  store i8* %1294, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32 %sext131052, i32* %value1053, align 4
  %value1054 = load i32, i32* %value1053, align 4
  %1295 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1296 = bitcast i8* %1295 to %sVMInfo**
  %info1055 = load %sVMInfo*, %sVMInfo** %1296, align 8
  %1297 = call i32 @create_bool_object(i32 %value1054, %sVMInfo* %info1055)
  %new_obj1056 = alloca i32
  %1298 = bitcast i32* %new_obj1056 to i8*
  store i8* %1298, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store i32 %1297, i32* %new_obj1056, align 4
  %1299 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1300 = bitcast i8* %1299 to %CLVALUE**
  %stack_ptr1057 = load %CLVALUE*, %CLVALUE** %1300, align 8
  %1301 = ptrtoint %CLVALUE* %stack_ptr1057 to i64
  %subtmp1058 = sub nsw i64 %1301, 8
  %IntTOPtr4b1059 = inttoptr i64 %subtmp1058 to %CLVALUE*
  %1302 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1303 = bitcast i8* %1302 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b1059, %CLVALUE** %1303, align 8
  %1304 = ptrtoint %CLVALUE* %IntTOPtr4b1059 to i64
  %addtmp1060 = add nsw i64 %1304, 8
  %intToPtr21061 = inttoptr i64 %addtmp1060 to %CLVALUE*
  %1305 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1306 = bitcast i8* %1305 to %CLVALUE**
  %stack_ptr1062 = load %CLVALUE*, %CLVALUE** %1306, align 8
  %new_obj1063 = load i32, i32* %new_obj1056, align 4
  %1307 = bitcast %CLVALUE* %stack_ptr1062 to i32*
  store i32 %new_obj1063, i32* %1307, align 4
  %1308 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1309 = bitcast i8* %1308 to %CLVALUE**
  %stack_ptr1064 = load %CLVALUE*, %CLVALUE** %1309, align 8
  %1310 = ptrtoint %CLVALUE* %stack_ptr1064 to i64
  %addtmp1065 = add nsw i64 %1310, 4
  %intToPtr21066 = inttoptr i64 %addtmp1065 to %CLVALUE*
  %1311 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1312 = bitcast i8* %1311 to %CLVALUE**
  store %CLVALUE* %intToPtr21066, %CLVALUE** %1312, align 8
  %1313 = ptrtoint %CLVALUE* %intToPtr21066 to i64
  %subtmp1067 = sub nsw i64 %1313, 4
  %IntTOPtr4b1068 = inttoptr i64 %subtmp1067 to %CLVALUE*
  br label %end_block

cond_else_block1036:                              ; preds = %after_break1069, %cond_else_block1000
  %eqtmpY1072 = icmp eq i32 %op64, 15
  br i1 %eqtmpY1072, label %cond_then_block1070, label %cond_else_block1071

after_break1069:                                  ; No predecessors!
  br label %cond_else_block1036

cond_then_block1070:                              ; preds = %cond_else_block1036
  %1314 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1315 = bitcast i8* %1314 to %CLVALUE**
  %stack_ptr1073 = load %CLVALUE*, %CLVALUE** %1315, align 8
  %1316 = ptrtoint %CLVALUE* %stack_ptr1073 to i64
  %subtmp1074 = sub nsw i64 %1316, 8
  %IntTOPtr4b1075 = inttoptr i64 %subtmp1074 to %CLVALUE*
  %1317 = bitcast %CLVALUE* %IntTOPtr4b1075 to i32*
  %1318 = load i32, i32* %1317, align 4
  %lvalue1076 = alloca i32
  %1319 = bitcast i32* %lvalue1076 to i8*
  store i8* %1319, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %1318, i32* %lvalue1076, align 4
  %1320 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1321 = bitcast i8* %1320 to %CLVALUE**
  %stack_ptr1077 = load %CLVALUE*, %CLVALUE** %1321, align 8
  %1322 = ptrtoint %CLVALUE* %stack_ptr1077 to i64
  %subtmp1078 = sub nsw i64 %1322, 4
  %IntTOPtr4b1079 = inttoptr i64 %subtmp1078 to %CLVALUE*
  %1323 = bitcast %CLVALUE* %IntTOPtr4b1079 to i32*
  %1324 = load i32, i32* %1323, align 4
  %rvalue1080 = alloca i32
  %1325 = bitcast i32* %rvalue1080 to i8*
  store i8* %1325, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %1324, i32* %rvalue1080, align 4
  %lvalue1081 = load i32, i32* %lvalue1076, align 4
  %1326 = call %sCLHeapMem* @get_object_pointer(i32 %lvalue1081)
  %1327 = bitcast %sCLHeapMem* %1326 to %sCLInt*
  %lvalue_data1082 = alloca %sCLInt*
  %1328 = bitcast %sCLInt** %lvalue_data1082 to i8*
  store i8* %1328, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLInt* %1327, %sCLInt** %lvalue_data1082, align 8
  %rvalue1083 = load i32, i32* %rvalue1080, align 4
  %1329 = call %sCLHeapMem* @get_object_pointer(i32 %rvalue1083)
  %1330 = bitcast %sCLHeapMem* %1329 to %sCLInt*
  %rvalue_data1084 = alloca %sCLInt*
  %1331 = bitcast %sCLInt** %rvalue_data1084 to i8*
  store i8* %1331, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store %sCLInt* %1330, %sCLInt** %rvalue_data1084, align 8
  %lvalue_data1085 = load %sCLInt*, %sCLInt** %lvalue_data1082, align 8
  %1332 = getelementptr inbounds %sCLInt, %sCLInt* %lvalue_data1085, i32 0, i32 3
  %1333 = load i32, i32* %1332, align 4
  %rvalue_data1086 = load %sCLInt*, %sCLInt** %rvalue_data1084, align 8
  %1334 = getelementptr inbounds %sCLInt, %sCLInt* %rvalue_data1086, i32 0, i32 3
  %1335 = load i32, i32* %1334, align 4
  %leeqtmp = icmp sle i32 %1333, %1335
  %sext131087 = zext i1 %leeqtmp to i32
  %value1088 = alloca i32
  %1336 = bitcast i32* %value1088 to i8*
  store i8* %1336, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32 %sext131087, i32* %value1088, align 4
  %value1089 = load i32, i32* %value1088, align 4
  %1337 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1338 = bitcast i8* %1337 to %sVMInfo**
  %info1090 = load %sVMInfo*, %sVMInfo** %1338, align 8
  %1339 = call i32 @create_bool_object(i32 %value1089, %sVMInfo* %info1090)
  %new_obj1091 = alloca i32
  %1340 = bitcast i32* %new_obj1091 to i8*
  store i8* %1340, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store i32 %1339, i32* %new_obj1091, align 4
  %1341 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1342 = bitcast i8* %1341 to %CLVALUE**
  %stack_ptr1092 = load %CLVALUE*, %CLVALUE** %1342, align 8
  %1343 = ptrtoint %CLVALUE* %stack_ptr1092 to i64
  %subtmp1093 = sub nsw i64 %1343, 8
  %IntTOPtr4b1094 = inttoptr i64 %subtmp1093 to %CLVALUE*
  %1344 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1345 = bitcast i8* %1344 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b1094, %CLVALUE** %1345, align 8
  %1346 = ptrtoint %CLVALUE* %IntTOPtr4b1094 to i64
  %addtmp1095 = add nsw i64 %1346, 8
  %intToPtr21096 = inttoptr i64 %addtmp1095 to %CLVALUE*
  %1347 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1348 = bitcast i8* %1347 to %CLVALUE**
  %stack_ptr1097 = load %CLVALUE*, %CLVALUE** %1348, align 8
  %new_obj1098 = load i32, i32* %new_obj1091, align 4
  %1349 = bitcast %CLVALUE* %stack_ptr1097 to i32*
  store i32 %new_obj1098, i32* %1349, align 4
  %1350 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1351 = bitcast i8* %1350 to %CLVALUE**
  %stack_ptr1099 = load %CLVALUE*, %CLVALUE** %1351, align 8
  %1352 = ptrtoint %CLVALUE* %stack_ptr1099 to i64
  %addtmp1100 = add nsw i64 %1352, 4
  %intToPtr21101 = inttoptr i64 %addtmp1100 to %CLVALUE*
  %1353 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1354 = bitcast i8* %1353 to %CLVALUE**
  store %CLVALUE* %intToPtr21101, %CLVALUE** %1354, align 8
  %1355 = ptrtoint %CLVALUE* %intToPtr21101 to i64
  %subtmp1102 = sub nsw i64 %1355, 4
  %IntTOPtr4b1103 = inttoptr i64 %subtmp1102 to %CLVALUE*
  br label %end_block

cond_else_block1071:                              ; preds = %after_break1104, %cond_else_block1036
  %eqtmpY1107 = icmp eq i32 %op64, 17
  br i1 %eqtmpY1107, label %cond_then_block1105, label %cond_else_block1106

after_break1104:                                  ; No predecessors!
  br label %cond_else_block1071

cond_then_block1105:                              ; preds = %cond_else_block1071
  %1356 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1357 = bitcast i8* %1356 to %CLVALUE**
  %stack_ptr1108 = load %CLVALUE*, %CLVALUE** %1357, align 8
  %1358 = ptrtoint %CLVALUE* %stack_ptr1108 to i64
  %subtmp1109 = sub nsw i64 %1358, 8
  %IntTOPtr4b1110 = inttoptr i64 %subtmp1109 to %CLVALUE*
  %1359 = bitcast %CLVALUE* %IntTOPtr4b1110 to i32*
  %1360 = load i32, i32* %1359, align 4
  %lvalue1111 = alloca i32
  %1361 = bitcast i32* %lvalue1111 to i8*
  store i8* %1361, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %1360, i32* %lvalue1111, align 4
  %1362 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1363 = bitcast i8* %1362 to %CLVALUE**
  %stack_ptr1112 = load %CLVALUE*, %CLVALUE** %1363, align 8
  %1364 = ptrtoint %CLVALUE* %stack_ptr1112 to i64
  %subtmp1113 = sub nsw i64 %1364, 4
  %IntTOPtr4b1114 = inttoptr i64 %subtmp1113 to %CLVALUE*
  %1365 = bitcast %CLVALUE* %IntTOPtr4b1114 to i32*
  %1366 = load i32, i32* %1365, align 4
  %rvalue1115 = alloca i32
  %1367 = bitcast i32* %rvalue1115 to i8*
  store i8* %1367, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %1366, i32* %rvalue1115, align 4
  %lvalue1116 = load i32, i32* %lvalue1111, align 4
  %1368 = call %sCLHeapMem* @get_object_pointer(i32 %lvalue1116)
  %1369 = bitcast %sCLHeapMem* %1368 to %sCLInt*
  %lvalue_data1117 = alloca %sCLInt*
  %1370 = bitcast %sCLInt** %lvalue_data1117 to i8*
  store i8* %1370, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLInt* %1369, %sCLInt** %lvalue_data1117, align 8
  %rvalue1118 = load i32, i32* %rvalue1115, align 4
  %1371 = call %sCLHeapMem* @get_object_pointer(i32 %rvalue1118)
  %1372 = bitcast %sCLHeapMem* %1371 to %sCLInt*
  %rvalue_data1119 = alloca %sCLInt*
  %1373 = bitcast %sCLInt** %rvalue_data1119 to i8*
  store i8* %1373, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store %sCLInt* %1372, %sCLInt** %rvalue_data1119, align 8
  %lvalue_data1120 = load %sCLInt*, %sCLInt** %lvalue_data1117, align 8
  %1374 = getelementptr inbounds %sCLInt, %sCLInt* %lvalue_data1120, i32 0, i32 3
  %1375 = load i32, i32* %1374, align 4
  %rvalue_data1121 = load %sCLInt*, %sCLInt** %rvalue_data1119, align 8
  %1376 = getelementptr inbounds %sCLInt, %sCLInt* %rvalue_data1121, i32 0, i32 3
  %1377 = load i32, i32* %1376, align 4
  %getmp = icmp sge i32 %1375, %1377
  %sext131122 = zext i1 %getmp to i32
  %value1123 = alloca i32
  %1378 = bitcast i32* %value1123 to i8*
  store i8* %1378, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32 %sext131122, i32* %value1123, align 4
  %value1124 = load i32, i32* %value1123, align 4
  %1379 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1380 = bitcast i8* %1379 to %sVMInfo**
  %info1125 = load %sVMInfo*, %sVMInfo** %1380, align 8
  %1381 = call i32 @create_bool_object(i32 %value1124, %sVMInfo* %info1125)
  %new_obj1126 = alloca i32
  %1382 = bitcast i32* %new_obj1126 to i8*
  store i8* %1382, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store i32 %1381, i32* %new_obj1126, align 4
  %1383 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1384 = bitcast i8* %1383 to %CLVALUE**
  %stack_ptr1127 = load %CLVALUE*, %CLVALUE** %1384, align 8
  %1385 = ptrtoint %CLVALUE* %stack_ptr1127 to i64
  %subtmp1128 = sub nsw i64 %1385, 8
  %IntTOPtr4b1129 = inttoptr i64 %subtmp1128 to %CLVALUE*
  %1386 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1387 = bitcast i8* %1386 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b1129, %CLVALUE** %1387, align 8
  %1388 = ptrtoint %CLVALUE* %IntTOPtr4b1129 to i64
  %addtmp1130 = add nsw i64 %1388, 8
  %intToPtr21131 = inttoptr i64 %addtmp1130 to %CLVALUE*
  %1389 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1390 = bitcast i8* %1389 to %CLVALUE**
  %stack_ptr1132 = load %CLVALUE*, %CLVALUE** %1390, align 8
  %new_obj1133 = load i32, i32* %new_obj1126, align 4
  %1391 = bitcast %CLVALUE* %stack_ptr1132 to i32*
  store i32 %new_obj1133, i32* %1391, align 4
  %1392 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1393 = bitcast i8* %1392 to %CLVALUE**
  %stack_ptr1134 = load %CLVALUE*, %CLVALUE** %1393, align 8
  %1394 = ptrtoint %CLVALUE* %stack_ptr1134 to i64
  %addtmp1135 = add nsw i64 %1394, 4
  %intToPtr21136 = inttoptr i64 %addtmp1135 to %CLVALUE*
  %1395 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1396 = bitcast i8* %1395 to %CLVALUE**
  store %CLVALUE* %intToPtr21136, %CLVALUE** %1396, align 8
  %1397 = ptrtoint %CLVALUE* %intToPtr21136 to i64
  %subtmp1137 = sub nsw i64 %1397, 4
  %IntTOPtr4b1138 = inttoptr i64 %subtmp1137 to %CLVALUE*
  br label %end_block

cond_else_block1106:                              ; preds = %after_break1139, %cond_else_block1071
  %eqtmpY1142 = icmp eq i32 %op64, 8
  br i1 %eqtmpY1142, label %cond_then_block1140, label %cond_else_block1141

after_break1139:                                  ; No predecessors!
  br label %cond_else_block1106

cond_then_block1140:                              ; preds = %cond_else_block1106
  %1398 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1399 = bitcast i8* %1398 to i32**
  %p1143 = load i32*, i32** %1399, align 8
  %derefference_value1144 = load i32, i32* %p1143, align 8
  %var_index = alloca i32
  %1400 = bitcast i32* %var_index to i8*
  store i8* %1400, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %derefference_value1144, i32* %var_index, align 4
  %1401 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1402 = bitcast i8* %1401 to i32**
  %p1145 = load i32*, i32** %1402, align 8
  %1403 = ptrtoint i32* %p1145 to i64
  %addtmp1146 = add nsw i64 %1403, 4
  %intToPtr21147 = inttoptr i64 %addtmp1146 to i32*
  %1404 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1405 = bitcast i8* %1404 to i32**
  store i32* %intToPtr21147, i32** %1405, align 8
  %1406 = ptrtoint i32* %intToPtr21147 to i64
  %subtmp1148 = sub nsw i64 %1406, 4
  %IntTOPtr4b1149 = inttoptr i64 %subtmp1148 to i32*
  %1407 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  %1408 = bitcast i8* %1407 to %CLVALUE**
  %stack1150 = load %CLVALUE*, %CLVALUE** %1408, align 8
  %var_index1151 = load i32, i32* %var_index, align 4
  %1409 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1410 = bitcast i8* %1409 to %CLVALUE**
  %stack_ptr1152 = load %CLVALUE*, %CLVALUE** %1410, align 8
  %1411 = ptrtoint %CLVALUE* %stack_ptr1152 to i64
  %subtmp1153 = sub nsw i64 %1411, 4
  %IntTOPtr4b1154 = inttoptr i64 %subtmp1153 to %CLVALUE*
  %derefference_value1155 = load %CLVALUE, %CLVALUE* %IntTOPtr4b1154, align 8
  %element_addressD = getelementptr %CLVALUE, %CLVALUE* %stack1150, i32 %var_index1151
  store %CLVALUE %derefference_value1155, %CLVALUE* %element_addressD, align 8
  br label %end_block

cond_else_block1141:                              ; preds = %after_break1156, %cond_else_block1106
  %eqtmpY1159 = icmp eq i32 %op64, 11
  br i1 %eqtmpY1159, label %cond_then_block1157, label %cond_else_block1158

after_break1156:                                  ; No predecessors!
  br label %cond_else_block1141

cond_then_block1157:                              ; preds = %cond_else_block1141
  %1412 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1413 = bitcast i8* %1412 to i32**
  %p1160 = load i32*, i32** %1413, align 8
  %derefference_value1161 = load i32, i32* %p1160, align 8
  %var_index1162 = alloca i32
  %1414 = bitcast i32* %var_index1162 to i8*
  store i8* %1414, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %derefference_value1161, i32* %var_index1162, align 4
  %1415 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1416 = bitcast i8* %1415 to i32**
  %p1163 = load i32*, i32** %1416, align 8
  %1417 = ptrtoint i32* %p1163 to i64
  %addtmp1164 = add nsw i64 %1417, 4
  %intToPtr21165 = inttoptr i64 %addtmp1164 to i32*
  %1418 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1419 = bitcast i8* %1418 to i32**
  store i32* %intToPtr21165, i32** %1419, align 8
  %1420 = ptrtoint i32* %intToPtr21165 to i64
  %subtmp1166 = sub nsw i64 %1420, 4
  %IntTOPtr4b1167 = inttoptr i64 %subtmp1166 to i32*
  %1421 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1422 = bitcast i8* %1421 to %CLVALUE**
  %stack_ptr1168 = load %CLVALUE*, %CLVALUE** %1422, align 8
  %1423 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  %1424 = bitcast i8* %1423 to %CLVALUE**
  %stack1169 = load %CLVALUE*, %CLVALUE** %1424, align 8
  %var_index1170 = load i32, i32* %var_index1162, align 4
  %element_addressB = getelementptr %CLVALUE, %CLVALUE* %stack1169, i32 %var_index1170
  %element1171 = load %CLVALUE, %CLVALUE* %element_addressB, align 8
  store %CLVALUE %element1171, %CLVALUE* %stack_ptr1168, align 8
  %1425 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1426 = bitcast i8* %1425 to %CLVALUE**
  %stack_ptr1172 = load %CLVALUE*, %CLVALUE** %1426, align 8
  %1427 = ptrtoint %CLVALUE* %stack_ptr1172 to i64
  %addtmp1173 = add nsw i64 %1427, 4
  %intToPtr21174 = inttoptr i64 %addtmp1173 to %CLVALUE*
  %1428 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1429 = bitcast i8* %1428 to %CLVALUE**
  store %CLVALUE* %intToPtr21174, %CLVALUE** %1429, align 8
  %1430 = ptrtoint %CLVALUE* %intToPtr21174 to i64
  %subtmp1175 = sub nsw i64 %1430, 4
  %IntTOPtr4b1176 = inttoptr i64 %subtmp1175 to %CLVALUE*
  br label %end_block

cond_else_block1158:                              ; preds = %after_break1177, %cond_else_block1141
  %eqtmpY1180 = icmp eq i32 %op64, 9
  br i1 %eqtmpY1180, label %cond_then_block1178, label %cond_else_block1179

after_break1177:                                  ; No predecessors!
  br label %cond_else_block1158

cond_then_block1178:                              ; preds = %cond_else_block1158
  %1431 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1432 = bitcast i8* %1431 to i32**
  %p1181 = load i32*, i32** %1432, align 8
  %1433 = bitcast i32* %p1181 to i8*
  %str1182 = alloca i8*
  %1434 = bitcast i8** %str1182 to i8*
  store i8* %1434, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i8* %1433, i8** %str1182, align 8
  %str1183 = load i8*, i8** %str1182, align 8
  %1435 = call i64 @strlen(i8* %str1183)
  %addtmp1184 = add nsw i64 %1435, 1
  %1436 = trunc i64 %addtmp1184 to i32
  %len1185 = alloca i32
  %1437 = bitcast i32* %len1185 to i8*
  store i8* %1437, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %1436, i32* %len1185, align 4
  %len1186 = load i32, i32* %len1185, align 4
  call void @alignment(i32* %len1185)
  %len1187 = load i32, i32* %len1185, align 4
  %divtmp1188 = sdiv i32 %len1187, 4
  store i32 %divtmp1188, i32* %len1185, align 4
  %1438 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1439 = bitcast i8* %1438 to i32**
  %p1189 = load i32*, i32** %1439, align 8
  %len1190 = load i32, i32* %len1185, align 4
  %1440 = ptrtoint i32* %p1189 to i64
  %sextXYZ1191 = sext i32 %len1190 to i64
  %multtmp1192 = mul nsw i64 %sextXYZ1191, 4
  %addtmp1193 = add nsw i64 %1440, %multtmp1192
  %intToPtr21194 = inttoptr i64 %addtmp1193 to i32*
  %1441 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1442 = bitcast i8* %1441 to i32**
  store i32* %intToPtr21194, i32** %1442, align 8
  %len1195 = load i32, i32* %len1185, align 4
  %1443 = ptrtoint i32* %intToPtr21194 to i64
  %sextY1196 = sext i32 %len1195 to i64
  %multtmp1197 = mul nsw i64 %sextY1196, 4
  %subtmp1198 = sub nsw i64 %1443, %multtmp1197
  %IntTOPtr4b1199 = inttoptr i64 %subtmp1198 to i32*
  %1444 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1445 = bitcast i8* %1444 to %CLVALUE**
  %stack_ptr1200 = load %CLVALUE*, %CLVALUE** %1445, align 8
  %1446 = ptrtoint %CLVALUE* %stack_ptr1200 to i64
  %subtmp1201 = sub nsw i64 %1446, 4
  %IntTOPtr4b1202 = inttoptr i64 %subtmp1201 to %CLVALUE*
  %derefference_value1203 = load %CLVALUE, %CLVALUE* %IntTOPtr4b1202, align 8
  %value1204 = alloca %CLVALUE
  %1447 = bitcast %CLVALUE* %value1204 to i8*
  store i8* %1447, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %CLVALUE %derefference_value1203, %CLVALUE* %value1204, align 8
  %gGlobalVars = load %map__charp_int*, %map__charp_int** @gGlobalVars, align 8
  %str1205 = load i8*, i8** %str1182, align 8
  %1448 = call i8* @string(i8* %str1205)
  %value1206 = load %CLVALUE, %CLVALUE* %value1204, align 8
  %1449 = bitcast %CLVALUE* %value1204 to i32*
  %1450 = load i32, i32* %1449, align 4
  call void @"insert_charp_int20_src/vm"(%map__charp_int* %gGlobalVars, i8* %1448, i32 %1450)
  br label %end_block

cond_else_block1179:                              ; preds = %after_break1207, %cond_else_block1158
  %eqtmpY1210 = icmp eq i32 %op64, 10
  br i1 %eqtmpY1210, label %cond_then_block1208, label %cond_else_block1209

after_break1207:                                  ; No predecessors!
  br label %cond_else_block1179

cond_then_block1208:                              ; preds = %cond_else_block1179
  %1451 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1452 = bitcast i8* %1451 to i32**
  %p1211 = load i32*, i32** %1452, align 8
  %1453 = bitcast i32* %p1211 to i8*
  %str1212 = alloca i8*
  %1454 = bitcast i8** %str1212 to i8*
  store i8* %1454, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i8* %1453, i8** %str1212, align 8
  %str1213 = load i8*, i8** %str1212, align 8
  %1455 = call i64 @strlen(i8* %str1213)
  %addtmp1214 = add nsw i64 %1455, 1
  %1456 = trunc i64 %addtmp1214 to i32
  %len1215 = alloca i32
  %1457 = bitcast i32* %len1215 to i8*
  store i8* %1457, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %1456, i32* %len1215, align 4
  %len1216 = load i32, i32* %len1215, align 4
  call void @alignment(i32* %len1215)
  %len1217 = load i32, i32* %len1215, align 4
  %divtmp1218 = sdiv i32 %len1217, 4
  store i32 %divtmp1218, i32* %len1215, align 4
  %1458 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1459 = bitcast i8* %1458 to i32**
  %p1219 = load i32*, i32** %1459, align 8
  %len1220 = load i32, i32* %len1215, align 4
  %1460 = ptrtoint i32* %p1219 to i64
  %sextXYZ1221 = sext i32 %len1220 to i64
  %multtmp1222 = mul nsw i64 %sextXYZ1221, 4
  %addtmp1223 = add nsw i64 %1460, %multtmp1222
  %intToPtr21224 = inttoptr i64 %addtmp1223 to i32*
  %1461 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1462 = bitcast i8* %1461 to i32**
  store i32* %intToPtr21224, i32** %1462, align 8
  %len1225 = load i32, i32* %len1215, align 4
  %1463 = ptrtoint i32* %intToPtr21224 to i64
  %sextY1226 = sext i32 %len1225 to i64
  %multtmp1227 = mul nsw i64 %sextY1226, 4
  %subtmp1228 = sub nsw i64 %1463, %multtmp1227
  %IntTOPtr4b1229 = inttoptr i64 %subtmp1228 to i32*
  %value1230 = alloca %CLVALUE
  %1464 = bitcast %CLVALUE* %value1230 to i8*
  store i8* %1464, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %value1231 = load %CLVALUE, %CLVALUE* %value1230, align 8
  %gGlobalVars1232 = load %map__charp_int*, %map__charp_int** @gGlobalVars, align 8
  %str1233 = load i8*, i8** %str1212, align 8
  %1465 = call i32 @"at_charp_int23_src/vm"(%map__charp_int* %gGlobalVars1232, i8* %str1233, i32 0)
  %1466 = bitcast %CLVALUE* %value1230 to i32*
  store i32 %1465, i32* %1466, align 4
  %1467 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1468 = bitcast i8* %1467 to %CLVALUE**
  %stack_ptr1234 = load %CLVALUE*, %CLVALUE** %1468, align 8
  %value1235 = load %CLVALUE, %CLVALUE* %value1230, align 8
  store %CLVALUE %value1235, %CLVALUE* %stack_ptr1234, align 8
  %1469 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1470 = bitcast i8* %1469 to %CLVALUE**
  %stack_ptr1236 = load %CLVALUE*, %CLVALUE** %1470, align 8
  %1471 = ptrtoint %CLVALUE* %stack_ptr1236 to i64
  %addtmp1237 = add nsw i64 %1471, 4
  %intToPtr21238 = inttoptr i64 %addtmp1237 to %CLVALUE*
  %1472 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1473 = bitcast i8* %1472 to %CLVALUE**
  store %CLVALUE* %intToPtr21238, %CLVALUE** %1473, align 8
  %1474 = ptrtoint %CLVALUE* %intToPtr21238 to i64
  %subtmp1239 = sub nsw i64 %1474, 4
  %IntTOPtr4b1240 = inttoptr i64 %subtmp1239 to %CLVALUE*
  br label %end_block

cond_else_block1209:                              ; preds = %after_break1241, %cond_else_block1179
  %eqtmpY1244 = icmp eq i32 %op64, 18
  br i1 %eqtmpY1244, label %cond_then_block1242, label %cond_else_block1243

after_break1241:                                  ; No predecessors!
  br label %cond_else_block1209

cond_then_block1242:                              ; preds = %cond_else_block1209
  %1475 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1476 = bitcast i8* %1475 to i32**
  %p1245 = load i32*, i32** %1476, align 8
  %derefference_value1246 = load i32, i32* %p1245, align 8
  %jump_size = alloca i32
  %1477 = bitcast i32* %jump_size to i8*
  store i8* %1477, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %derefference_value1246, i32* %jump_size, align 4
  %1478 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1479 = bitcast i8* %1478 to i32**
  %p1247 = load i32*, i32** %1479, align 8
  %1480 = ptrtoint i32* %p1247 to i64
  %addtmp1248 = add nsw i64 %1480, 4
  %intToPtr21249 = inttoptr i64 %addtmp1248 to i32*
  %1481 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1482 = bitcast i8* %1481 to i32**
  store i32* %intToPtr21249, i32** %1482, align 8
  %1483 = ptrtoint i32* %intToPtr21249 to i64
  %subtmp1250 = sub nsw i64 %1483, 4
  %IntTOPtr4b1251 = inttoptr i64 %subtmp1250 to i32*
  %1484 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1485 = bitcast i8* %1484 to %CLVALUE**
  %stack_ptr1252 = load %CLVALUE*, %CLVALUE** %1485, align 8
  %1486 = ptrtoint %CLVALUE* %stack_ptr1252 to i64
  %subtmp1253 = sub nsw i64 %1486, 4
  %IntTOPtr4b1254 = inttoptr i64 %subtmp1253 to %CLVALUE*
  %1487 = bitcast %CLVALUE* %IntTOPtr4b1254 to i32*
  %1488 = load i32, i32* %1487, align 4
  %conditional = alloca i32
  %1489 = bitcast i32* %conditional to i8*
  store i8* %1489, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %1488, i32* %conditional, align 4
  %conditional1255 = load i32, i32* %conditional, align 4
  %1490 = call %sCLHeapMem* @get_object_pointer(i32 %conditional1255)
  %1491 = bitcast %sCLHeapMem* %1490 to %sCLInt*
  %conditional_data = alloca %sCLInt*
  %1492 = bitcast %sCLInt** %conditional_data to i8*
  store i8* %1492, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLInt* %1491, %sCLInt** %conditional_data, align 8
  %conditional_data1256 = load %sCLInt*, %sCLInt** %conditional_data, align 8
  %1493 = getelementptr inbounds %sCLInt, %sCLInt* %conditional_data1256, i32 0, i32 3
  %1494 = load i32, i32* %1493, align 4
  %value1257 = alloca i32
  %1495 = bitcast i32* %value1257 to i8*
  store i8* %1495, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store i32 %1494, i32* %value1257, align 4
  %1496 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1497 = bitcast i8* %1496 to %CLVALUE**
  %stack_ptr1258 = load %CLVALUE*, %CLVALUE** %1497, align 8
  %1498 = ptrtoint %CLVALUE* %stack_ptr1258 to i64
  %subtmp1259 = sub nsw i64 %1498, 4
  %IntTOPtr4b1260 = inttoptr i64 %subtmp1259 to %CLVALUE*
  %1499 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1500 = bitcast i8* %1499 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b1260, %CLVALUE** %1500, align 8
  %1501 = ptrtoint %CLVALUE* %IntTOPtr4b1260 to i64
  %addtmp1261 = add nsw i64 %1501, 4
  %intToPtr21262 = inttoptr i64 %addtmp1261 to %CLVALUE*
  %value1263 = load i32, i32* %value1257, align 4
  %1502 = icmp ne i32 %value1263, 0
  br i1 %1502, label %cond_jump_then1264, label %cond_end1265

cond_else_block1243:                              ; preds = %after_break1277, %cond_else_block1209
  %eqtmpY1280 = icmp eq i32 %op64, 19
  br i1 %eqtmpY1280, label %cond_then_block1278, label %cond_else_block1279

cond_jump_then1264:                               ; preds = %cond_then_block1242
  %1503 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1504 = bitcast i8* %1503 to i32**
  %p1266 = load i32*, i32** %1504, align 8
  %1505 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1506 = bitcast i8* %1505 to i32*
  %jump_size1267 = load i32, i32* %1506, align 4
  %1507 = ptrtoint i32* %p1266 to i64
  %sextXYZ1268 = sext i32 %jump_size1267 to i64
  %multtmp1269 = mul nsw i64 %sextXYZ1268, 4
  %addtmp1270 = add nsw i64 %1507, %multtmp1269
  %intToPtr21271 = inttoptr i64 %addtmp1270 to i32*
  %1508 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1509 = bitcast i8* %1508 to i32**
  store i32* %intToPtr21271, i32** %1509, align 8
  %1510 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1511 = bitcast i8* %1510 to i32*
  %jump_size1272 = load i32, i32* %1511, align 4
  %1512 = ptrtoint i32* %intToPtr21271 to i64
  %sextY1273 = sext i32 %jump_size1272 to i64
  %multtmp1274 = mul nsw i64 %sextY1273, 4
  %subtmp1275 = sub nsw i64 %1512, %multtmp1274
  %IntTOPtr4b1276 = inttoptr i64 %subtmp1275 to i32*
  br label %cond_end1265

cond_end1265:                                     ; preds = %cond_jump_then1264, %cond_then_block1242
  br label %end_block

after_break1277:                                  ; No predecessors!
  br label %cond_else_block1243

cond_then_block1278:                              ; preds = %cond_else_block1243
  %1513 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1514 = bitcast i8* %1513 to i32**
  %p1281 = load i32*, i32** %1514, align 8
  %derefference_value1282 = load i32, i32* %p1281, align 8
  %jump_size1283 = alloca i32
  %1515 = bitcast i32* %jump_size1283 to i8*
  store i8* %1515, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %derefference_value1282, i32* %jump_size1283, align 4
  %1516 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1517 = bitcast i8* %1516 to i32**
  %p1284 = load i32*, i32** %1517, align 8
  %1518 = ptrtoint i32* %p1284 to i64
  %addtmp1285 = add nsw i64 %1518, 4
  %intToPtr21286 = inttoptr i64 %addtmp1285 to i32*
  %1519 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1520 = bitcast i8* %1519 to i32**
  store i32* %intToPtr21286, i32** %1520, align 8
  %1521 = ptrtoint i32* %intToPtr21286 to i64
  %subtmp1287 = sub nsw i64 %1521, 4
  %IntTOPtr4b1288 = inttoptr i64 %subtmp1287 to i32*
  %1522 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1523 = bitcast i8* %1522 to %CLVALUE**
  %stack_ptr1289 = load %CLVALUE*, %CLVALUE** %1523, align 8
  %1524 = ptrtoint %CLVALUE* %stack_ptr1289 to i64
  %subtmp1290 = sub nsw i64 %1524, 4
  %IntTOPtr4b1291 = inttoptr i64 %subtmp1290 to %CLVALUE*
  %1525 = bitcast %CLVALUE* %IntTOPtr4b1291 to i32*
  %1526 = load i32, i32* %1525, align 4
  %conditional1292 = alloca i32
  %1527 = bitcast i32* %conditional1292 to i8*
  store i8* %1527, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %1526, i32* %conditional1292, align 4
  %conditional1293 = load i32, i32* %conditional1292, align 4
  %1528 = call %sCLHeapMem* @get_object_pointer(i32 %conditional1293)
  %1529 = bitcast %sCLHeapMem* %1528 to %sCLInt*
  %conditional_data1294 = alloca %sCLInt*
  %1530 = bitcast %sCLInt** %conditional_data1294 to i8*
  store i8* %1530, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLInt* %1529, %sCLInt** %conditional_data1294, align 8
  %conditional_data1295 = load %sCLInt*, %sCLInt** %conditional_data1294, align 8
  %1531 = getelementptr inbounds %sCLInt, %sCLInt* %conditional_data1295, i32 0, i32 3
  %1532 = load i32, i32* %1531, align 4
  %value1296 = alloca i32
  %1533 = bitcast i32* %value1296 to i8*
  store i8* %1533, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store i32 %1532, i32* %value1296, align 4
  %1534 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1535 = bitcast i8* %1534 to %CLVALUE**
  %stack_ptr1297 = load %CLVALUE*, %CLVALUE** %1535, align 8
  %1536 = ptrtoint %CLVALUE* %stack_ptr1297 to i64
  %subtmp1298 = sub nsw i64 %1536, 4
  %IntTOPtr4b1299 = inttoptr i64 %subtmp1298 to %CLVALUE*
  %1537 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1538 = bitcast i8* %1537 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b1299, %CLVALUE** %1538, align 8
  %1539 = ptrtoint %CLVALUE* %IntTOPtr4b1299 to i64
  %addtmp1300 = add nsw i64 %1539, 4
  %intToPtr21301 = inttoptr i64 %addtmp1300 to %CLVALUE*
  %value1302 = load i32, i32* %value1296, align 4
  %1540 = icmp ne i32 %value1302, 0
  %LOGICAL_DIANEAL1303 = icmp eq i1 %1540, false
  br i1 %LOGICAL_DIANEAL1303, label %cond_jump_then1304, label %cond_end1305

cond_else_block1279:                              ; preds = %after_break1317, %cond_else_block1243
  %eqtmpY1320 = icmp eq i32 %op64, 20
  br i1 %eqtmpY1320, label %cond_then_block1318, label %cond_else_block1319

cond_jump_then1304:                               ; preds = %cond_then_block1278
  %1541 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1542 = bitcast i8* %1541 to i32**
  %p1306 = load i32*, i32** %1542, align 8
  %1543 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1544 = bitcast i8* %1543 to i32*
  %jump_size1307 = load i32, i32* %1544, align 4
  %1545 = ptrtoint i32* %p1306 to i64
  %sextXYZ1308 = sext i32 %jump_size1307 to i64
  %multtmp1309 = mul nsw i64 %sextXYZ1308, 4
  %addtmp1310 = add nsw i64 %1545, %multtmp1309
  %intToPtr21311 = inttoptr i64 %addtmp1310 to i32*
  %1546 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1547 = bitcast i8* %1546 to i32**
  store i32* %intToPtr21311, i32** %1547, align 8
  %1548 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1549 = bitcast i8* %1548 to i32*
  %jump_size1312 = load i32, i32* %1549, align 4
  %1550 = ptrtoint i32* %intToPtr21311 to i64
  %sextY1313 = sext i32 %jump_size1312 to i64
  %multtmp1314 = mul nsw i64 %sextY1313, 4
  %subtmp1315 = sub nsw i64 %1550, %multtmp1314
  %IntTOPtr4b1316 = inttoptr i64 %subtmp1315 to i32*
  br label %cond_end1305

cond_end1305:                                     ; preds = %cond_jump_then1304, %cond_then_block1278
  br label %end_block

after_break1317:                                  ; No predecessors!
  br label %cond_else_block1279

cond_then_block1318:                              ; preds = %cond_else_block1279
  %1551 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1552 = bitcast i8* %1551 to i32**
  %p1321 = load i32*, i32** %1552, align 8
  %derefference_value1322 = load i32, i32* %p1321, align 8
  %goto_point = alloca i32
  %1553 = bitcast i32* %goto_point to i8*
  store i8* %1553, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %derefference_value1322, i32* %goto_point, align 4
  %1554 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1555 = bitcast i8* %1554 to i32**
  %p1323 = load i32*, i32** %1555, align 8
  %1556 = ptrtoint i32* %p1323 to i64
  %addtmp1324 = add nsw i64 %1556, 4
  %intToPtr21325 = inttoptr i64 %addtmp1324 to i32*
  %1557 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1558 = bitcast i8* %1557 to i32**
  store i32* %intToPtr21325, i32** %1558, align 8
  %1559 = ptrtoint i32* %intToPtr21325 to i64
  %subtmp1326 = sub nsw i64 %1559, 4
  %IntTOPtr4b1327 = inttoptr i64 %subtmp1326 to i32*
  %1560 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 518), align 8
  %1561 = bitcast i8* %1560 to i32**
  %head_codes1328 = load i32*, i32** %1561, align 8
  %1562 = bitcast i32* %head_codes1328 to i8*
  %goto_point1329 = load i32, i32* %goto_point, align 4
  %1563 = ptrtoint i8* %1562 to i64
  %sextXYZ1330 = sext i32 %goto_point1329 to i64
  %multtmp1331 = mul nsw i64 %sextXYZ1330, 1
  %addtmp1332 = add nsw i64 %1563, %multtmp1331
  %intToPtr21333 = inttoptr i64 %addtmp1332 to i8*
  %1564 = bitcast i8* %intToPtr21333 to i32*
  %1565 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1566 = bitcast i8* %1565 to i32**
  store i32* %1564, i32** %1566, align 8
  br label %end_block

cond_else_block1319:                              ; preds = %after_break1334, %cond_else_block1279
  %eqtmpY1337 = icmp eq i32 %op64, 22
  br i1 %eqtmpY1337, label %cond_then_block1335, label %cond_else_block1336

after_break1334:                                  ; No predecessors!
  br label %cond_else_block1319

cond_then_block1335:                              ; preds = %cond_else_block1319
  %1567 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1568 = bitcast i8* %1567 to i32**
  %p1338 = load i32*, i32** %1568, align 8
  %1569 = bitcast i32* %p1338 to i8*
  %method_name = alloca i8*
  %1570 = bitcast i8** %method_name to i8*
  store i8* %1570, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i8* %1569, i8** %method_name, align 8
  %method_name1339 = load i8*, i8** %method_name, align 8
  %1571 = call i64 @strlen(i8* %method_name1339)
  %addtmp1340 = add nsw i64 %1571, 1
  %1572 = trunc i64 %addtmp1340 to i32
  %len1341 = alloca i32
  %1573 = bitcast i32* %len1341 to i8*
  store i8* %1573, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %1572, i32* %len1341, align 4
  %len1342 = load i32, i32* %len1341, align 4
  call void @alignment(i32* %len1341)
  %len1343 = load i32, i32* %len1341, align 4
  %divtmp1344 = sdiv i32 %len1343, 4
  store i32 %divtmp1344, i32* %len1341, align 4
  %1574 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1575 = bitcast i8* %1574 to i32**
  %p1345 = load i32*, i32** %1575, align 8
  %len1346 = load i32, i32* %len1341, align 4
  %1576 = ptrtoint i32* %p1345 to i64
  %sextXYZ1347 = sext i32 %len1346 to i64
  %multtmp1348 = mul nsw i64 %sextXYZ1347, 4
  %addtmp1349 = add nsw i64 %1576, %multtmp1348
  %intToPtr21350 = inttoptr i64 %addtmp1349 to i32*
  %1577 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1578 = bitcast i8* %1577 to i32**
  store i32* %intToPtr21350, i32** %1578, align 8
  %len1351 = load i32, i32* %len1341, align 4
  %1579 = ptrtoint i32* %intToPtr21350 to i64
  %sextY1352 = sext i32 %len1351 to i64
  %multtmp1353 = mul nsw i64 %sextY1352, 4
  %subtmp1354 = sub nsw i64 %1579, %multtmp1353
  %IntTOPtr4b1355 = inttoptr i64 %subtmp1354 to i32*
  %1580 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1581 = bitcast i8* %1580 to i32**
  %p1356 = load i32*, i32** %1581, align 8
  %derefference_value1357 = load i32, i32* %p1356, align 8
  %num_params1358 = alloca i32
  %1582 = bitcast i32* %num_params1358 to i8*
  store i8* %1582, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store i32 %derefference_value1357, i32* %num_params1358, align 4
  %1583 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1584 = bitcast i8* %1583 to i32**
  %p1359 = load i32*, i32** %1584, align 8
  %1585 = ptrtoint i32* %p1359 to i64
  %addtmp1360 = add nsw i64 %1585, 4
  %intToPtr21361 = inttoptr i64 %addtmp1360 to i32*
  %1586 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1587 = bitcast i8* %1586 to i32**
  store i32* %intToPtr21361, i32** %1587, align 8
  %1588 = ptrtoint i32* %intToPtr21361 to i64
  %subtmp1362 = sub nsw i64 %1588, 4
  %IntTOPtr4b1363 = inttoptr i64 %subtmp1362 to i32*
  %1589 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1590 = bitcast i8* %1589 to i32**
  %p1364 = load i32*, i32** %1590, align 8
  %derefference_value1365 = load i32, i32* %p1364, align 8
  %last_method_chain = alloca i32
  %1591 = bitcast i32* %last_method_chain to i8*
  store i8* %1591, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store i32 %derefference_value1365, i32* %last_method_chain, align 4
  %1592 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1593 = bitcast i8* %1592 to i32**
  %p1366 = load i32*, i32** %1593, align 8
  %1594 = ptrtoint i32* %p1366 to i64
  %addtmp1367 = add nsw i64 %1594, 4
  %intToPtr21368 = inttoptr i64 %addtmp1367 to i32*
  %1595 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %1596 = bitcast i8* %1595 to i32**
  store i32* %intToPtr21368, i32** %1596, align 8
  %1597 = ptrtoint i32* %intToPtr21368 to i64
  %subtmp1369 = sub nsw i64 %1597, 4
  %IntTOPtr4b1370 = inttoptr i64 %subtmp1369 to i32*
  %1598 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1599 = bitcast i8* %1598 to %CLVALUE**
  %stack_ptr1371 = load %CLVALUE*, %CLVALUE** %1599, align 8
  %num_params1372 = load i32, i32* %num_params1358, align 4
  %1600 = ptrtoint %CLVALUE* %stack_ptr1371 to i64
  %sextY1373 = sext i32 %num_params1372 to i64
  %multtmp1374 = mul nsw i64 %sextY1373, 4
  %subtmp1375 = sub nsw i64 %1600, %multtmp1374
  %IntTOPtr4b1376 = inttoptr i64 %subtmp1375 to %CLVALUE*
  %1601 = bitcast %CLVALUE* %IntTOPtr4b1376 to i32*
  %1602 = load i32, i32* %1601, align 4
  %obj1377 = alloca i32
  %1603 = bitcast i32* %obj1377 to i8*
  store i8* %1603, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32 %1602, i32* %obj1377, align 4
  %obj1378 = load i32, i32* %obj1377, align 4
  %eqtmpX1379 = icmp eq i32 %obj1378, 0
  br i1 %eqtmpX1379, label %cond_jump_then1380, label %cond_end1381

cond_else_block1336:                              ; preds = %after_break1681, %cond_else_block1319
  %eqtmpY1684 = icmp eq i32 %op64, 24
  br i1 %eqtmpY1684, label %cond_then_block1682, label %cond_else_block1683

cond_jump_then1380:                               ; preds = %cond_then_block1335
  %1604 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1605 = bitcast i8* %1604 to %CLVALUE**
  %stack_ptr1382 = load %CLVALUE*, %CLVALUE** %1605, align 8
  %1606 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1607 = bitcast i8* %1606 to %sVMInfo**
  %info1383 = load %sVMInfo*, %sVMInfo** %1607, align 8
  %1608 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1609 = bitcast i8* %1608 to i8**
  %method_name1384 = load i8*, i8** %1609, align 8
  %1610 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([56 x i8], [56 x i8]* @global_string.102, i32 0, i32 0), i8* %method_name1384)
  call void @vm_err_msg(%CLVALUE** %1605, %sVMInfo* %info1383, i8* %1610)
  %1611 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1612 = bitcast i8* %1611 to %sVMInfo**
  %info1385 = load %sVMInfo*, %sVMInfo** %1612, align 8
  %1613 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1385, i32 0, i32 5
  %1614 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %1613, align 8
  %1615 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %1616 = bitcast i8* %1615 to %sCLStackFrame*
  %null_parent_stack_frame1386 = load %sCLStackFrame, %sCLStackFrame* %1616, align 8
  %1617 = call %sCLStackFrame @"pop_back_sCLStackFrame24_src/vm"(%vector__sCLStackFrame* %1614, %sCLStackFrame %null_parent_stack_frame1386)
  %1618 = bitcast [8192 x i8*]* %lvtable to i8*
  %1619 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %1618, i64 65536)
  %1620 = ptrtoint i8* %1610 to i64
  %1621 = icmp ne i64 %1620, 0
  br i1 %1621, label %cond_then_block1387, label %cond_end1388

cond_end1381:                                     ; preds = %cond_then_block1335
  %obj1389 = load i32, i32* %obj1377, align 4
  %1622 = call %sCLHeapMem* @get_object_pointer(i32 %obj1389)
  %1623 = bitcast %sCLHeapMem* %1622 to %sCLObject*
  %object_data = alloca %sCLObject*
  %1624 = bitcast %sCLObject** %object_data to i8*
  store i8* %1624, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store %sCLObject* %1623, %sCLObject** %object_data, align 8
  %object_data1390 = load %sCLObject*, %sCLObject** %object_data, align 8
  %1625 = getelementptr inbounds %sCLObject, %sCLObject* %object_data1390, i32 0, i32 0
  %1626 = load %sCLType*, %sCLType** %1625, align 8
  %generics_types = alloca %sCLType*
  %1627 = bitcast %sCLType** %generics_types to i8*
  store i8* %1627, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  store %sCLType* %1626, %sCLType** %generics_types, align 8
  %object_data1391 = load %sCLObject*, %sCLObject** %object_data, align 8
  %1628 = getelementptr inbounds %sCLObject, %sCLObject* %object_data1391, i32 0, i32 0
  %1629 = load %sCLType*, %sCLType** %1628, align 8
  %1630 = getelementptr inbounds %sCLType, %sCLType* %1629, i32 0, i32 1
  %1631 = load %sCLClass*, %sCLClass** %1630, align 8
  %klass = alloca %sCLClass*
  %1632 = bitcast %sCLClass** %klass to i8*
  store i8* %1632, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  store %sCLClass* %1631, %sCLClass** %klass, align 8
  %klass1392 = load %sCLClass*, %sCLClass** %klass, align 8
  %eqtmpX1393 = icmp eq %sCLClass* %klass1392, null
  br i1 %eqtmpX1393, label %cond_jump_then1394, label %cond_end1395

cond_then_block1387:                              ; preds = %cond_jump_then1380
  br label %cond_end1388

cond_end1388:                                     ; preds = %cond_then_block1387, %cond_jump_then1380
  call void @ncfree(i8* %1610)
  ret i1 false

cond_jump_then1394:                               ; preds = %cond_end1381
  %1633 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1634 = bitcast i8* %1633 to %CLVALUE**
  %stack_ptr1396 = load %CLVALUE*, %CLVALUE** %1634, align 8
  %1635 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1636 = bitcast i8* %1635 to %sVMInfo**
  %info1397 = load %sVMInfo*, %sVMInfo** %1636, align 8
  %1637 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %1638 = bitcast i8* %1637 to %sCLClass**
  %klass1398 = load %sCLClass*, %sCLClass** %1638, align 8
  %1639 = getelementptr inbounds %sCLClass, %sCLClass* %klass1398, i32 0, i32 0
  %1640 = load i8*, i8** %1639, align 8
  %1641 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([41 x i8], [41 x i8]* @global_string.103, i32 0, i32 0), i8* %1640)
  call void @vm_err_msg(%CLVALUE** %1634, %sVMInfo* %info1397, i8* %1641)
  %1642 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1643 = bitcast i8* %1642 to %sVMInfo**
  %info1399 = load %sVMInfo*, %sVMInfo** %1643, align 8
  %1644 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1399, i32 0, i32 5
  %1645 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %1644, align 8
  %1646 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %1647 = bitcast i8* %1646 to %sCLStackFrame*
  %null_parent_stack_frame1400 = load %sCLStackFrame, %sCLStackFrame* %1647, align 8
  %1648 = call %sCLStackFrame @"pop_back_sCLStackFrame25_src/vm"(%vector__sCLStackFrame* %1645, %sCLStackFrame %null_parent_stack_frame1400)
  %1649 = bitcast [8192 x i8*]* %lvtable to i8*
  %1650 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %1649, i64 65536)
  %1651 = ptrtoint i8* %1641 to i64
  %1652 = icmp ne i64 %1651, 0
  br i1 %1652, label %cond_then_block1401, label %cond_end1402

cond_end1395:                                     ; preds = %cond_end1381
  %klass1403 = load %sCLClass*, %sCLClass** %klass, align 8
  %1653 = getelementptr inbounds %sCLClass, %sCLClass* %klass1403, i32 0, i32 0
  %1654 = load i8*, i8** %1653, align 8
  %klass_name = alloca i8*
  %1655 = bitcast i8** %klass_name to i8*
  store i8* %1655, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 529), align 8
  store i8* %1654, i8** %klass_name, align 8
  %method = alloca %sCLMethod*
  %1656 = bitcast %sCLMethod** %method to i8*
  store i8* %1656, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  store %sCLMethod* null, %sCLMethod** %method, align 8
  br label %loop_top_block1404

cond_then_block1401:                              ; preds = %cond_jump_then1394
  br label %cond_end1402

cond_end1402:                                     ; preds = %cond_then_block1401, %cond_jump_then1394
  call void @ncfree(i8* %1641)
  ret i1 false

loop_top_block1404:                               ; preds = %cond_end1412, %cond_end1395
  %klass1405 = load %sCLClass*, %sCLClass** %klass, align 8
  %1657 = ptrtoint %sCLClass* %klass1405 to i64
  %1658 = icmp ne i64 %1657, 0
  br i1 %1658, label %cond_then_block1406, label %cond_end_block1407

cond_then_block1406:                              ; preds = %loop_top_block1404
  %1659 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %1660 = bitcast i8* %1659 to %sCLClass**
  %klass1408 = load %sCLClass*, %sCLClass** %1660, align 8
  %1661 = getelementptr inbounds %sCLClass, %sCLClass* %klass1408, i32 0, i32 1
  %1662 = load %map__charp_sCLMethodp*, %map__charp_sCLMethodp** %1661, align 8
  %1663 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1664 = bitcast i8* %1663 to i8**
  %method_name1409 = load i8*, i8** %1664, align 8
  %1665 = call %sCLMethod* @"at_charp_sCLMethodp26_src/vm"(%map__charp_sCLMethodp* %1662, i8* %method_name1409, %sCLMethod* null)
  %1666 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  %1667 = bitcast i8* %1666 to %sCLMethod**
  store %sCLMethod* %1665, %sCLMethod** %1667, align 8
  %1668 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  %1669 = bitcast i8* %1668 to %sCLMethod**
  %method1410 = load %sCLMethod*, %sCLMethod** %1669, align 8
  %1670 = ptrtoint %sCLMethod* %method1410 to i64
  %1671 = icmp ne i64 %1670, 0
  br i1 %1671, label %cond_jump_then1411, label %cond_end1412

cond_end_block1407:                               ; preds = %cond_jump_then1411, %loop_top_block1404
  %method1415 = load %sCLMethod*, %sCLMethod** %method, align 8
  %eqtmpX1416 = icmp eq %sCLMethod* %method1415, null
  store i1 %eqtmpX1416, i1* %andand_result_var, align 1
  br i1 %eqtmpX1416, label %cond_jump_then1417, label %cond_jump_end1418

cond_jump_then1411:                               ; preds = %cond_then_block1406
  br label %cond_end_block1407

cond_end1412:                                     ; preds = %after_break1413, %cond_then_block1406
  %1672 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %1673 = bitcast i8* %1672 to %sCLClass**
  %klass1414 = load %sCLClass*, %sCLClass** %1673, align 8
  %1674 = getelementptr inbounds %sCLClass, %sCLClass* %klass1414, i32 0, i32 3
  %1675 = load %sCLClass*, %sCLClass** %1674, align 8
  %1676 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %1677 = bitcast i8* %1676 to %sCLClass**
  store %sCLClass* %1675, %sCLClass** %1677, align 8
  br label %loop_top_block1404

after_break1413:                                  ; No predecessors!
  br label %cond_end1412

cond_jump_then1417:                               ; preds = %cond_end_block1407
  %klass_name1419 = load i8*, i8** %klass_name, align 8
  %1678 = call i32 @strcmp(i8* %klass_name1419, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_string.104, i32 0, i32 0))
  %eqtmpX1420 = icmp eq i32 %1678, 0
  %andand1421 = and i1 %eqtmpX1416, %eqtmpX1420
  store i1 %andand1421, i1* %andand_result_var, align 1
  br label %cond_jump_end1418

cond_jump_end1418:                                ; preds = %cond_jump_then1417, %cond_end_block1407
  %andand_result_value1422 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value1422, label %cond_jump_then1423, label %cond_else_block1424

cond_jump_then1423:                               ; preds = %cond_jump_end1418
  %1679 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %1680 = bitcast i8* %1679 to i32*
  %obj1426 = load i32, i32* %1680, align 4
  %parent_obj = alloca i32
  %1681 = bitcast i32* %parent_obj to i8*
  store i8* %1681, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 531), align 8
  store i32 %obj1426, i32* %parent_obj, align 4
  %parent_obj1427 = load i32, i32* %parent_obj, align 4
  %1682 = call %sCLHeapMem* @get_object_pointer(i32 %parent_obj1427)
  %1683 = bitcast %sCLHeapMem* %1682 to %sCLCommand*
  %command_obj = alloca %sCLCommand*
  %1684 = bitcast %sCLCommand** %command_obj to i8*
  store i8* %1684, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 532), align 8
  store %sCLCommand* %1683, %sCLCommand** %command_obj, align 8
  %command_obj1428 = load %sCLCommand*, %sCLCommand** %command_obj, align 8
  %1685 = getelementptr inbounds %sCLCommand, %sCLCommand* %command_obj1428, i32 0, i32 8
  %1686 = load i1, i1* %1685, align 1
  %first_method_chain = alloca i1
  %1687 = bitcast i1* %first_method_chain to i8*
  store i8* %1687, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 533), align 8
  store i1 %1686, i1* %first_method_chain, align 1
  %argv = alloca [32 x i8*]
  %1688 = bitcast [32 x i8*]* %argv to i8*
  store i8* %1688, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 534), align 8
  %1689 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1690 = bitcast i8* %1689 to i8**
  %method_name1429 = load i8*, i8** %1690, align 8
  %1691 = bitcast [32 x i8*]* %argv to i8**
  %element_addressC = getelementptr i8*, i8** %1691, i32 0
  store i8* %method_name1429, i8** %element_addressC, align 8
  %i1430 = alloca i32
  %1692 = bitcast i32* %i1430 to i8*
  store i8* %1692, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  store i32 1, i32* %i1430, align 4
  br label %loop_top_block1431

cond_else_block1424:                              ; preds = %cond_jump_end1418
  %1693 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  %1694 = bitcast i8* %1693 to %sCLMethod**
  %method1545 = load %sCLMethod*, %sCLMethod** %1694, align 8
  %eqtmpX1546 = icmp eq %sCLMethod* %method1545, null
  br i1 %eqtmpX1546, label %cond_jump_then1547, label %cond_end1548

cond_end1425:                                     ; preds = %cond_end1579, %cond_end1476
  br label %end_block

loop_top_block1431:                               ; preds = %cond_end1456, %cond_jump_then1423
  %i1432 = load i32, i32* %i1430, align 4
  %1695 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %1696 = bitcast i8* %1695 to i32*
  %num_params1433 = load i32, i32* %1696, align 4
  %letmp1434 = icmp slt i32 %i1432, %num_params1433
  br i1 %letmp1434, label %cond_then_block1435, label %cond_end_block1436

cond_then_block1435:                              ; preds = %loop_top_block1431
  %1697 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1698 = bitcast i8* %1697 to %CLVALUE**
  %stack_ptr1437 = load %CLVALUE*, %CLVALUE** %1698, align 8
  %1699 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %1700 = bitcast i8* %1699 to i32*
  %num_params1438 = load i32, i32* %1700, align 4
  %1701 = ptrtoint %CLVALUE* %stack_ptr1437 to i64
  %sextY1439 = sext i32 %num_params1438 to i64
  %multtmp1440 = mul nsw i64 %sextY1439, 4
  %subtmp1441 = sub nsw i64 %1701, %multtmp1440
  %IntTOPtr4b1442 = inttoptr i64 %subtmp1441 to %CLVALUE*
  %i1443 = load i32, i32* %i1430, align 4
  %1702 = ptrtoint %CLVALUE* %IntTOPtr4b1442 to i64
  %sextXYZ1444 = sext i32 %i1443 to i64
  %multtmp1445 = mul nsw i64 %sextXYZ1444, 4
  %addtmp1446 = add nsw i64 %1702, %multtmp1445
  %intToPtr21447 = inttoptr i64 %addtmp1446 to %CLVALUE*
  %1703 = bitcast %CLVALUE* %intToPtr21447 to i32*
  %1704 = load i32, i32* %1703, align 4
  %obj1448 = alloca i32
  %1705 = bitcast i32* %obj1448 to i8*
  store i8* %1705, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 536), align 8
  store i32 %1704, i32* %obj1448, align 4
  %obj1449 = load i32, i32* %obj1448, align 4
  %1706 = call %sCLHeapMem* @get_object_pointer(i32 %obj1449)
  %1707 = bitcast %sCLHeapMem* %1706 to %sCLObject*
  %object_data1450 = alloca %sCLObject*
  %1708 = bitcast %sCLObject** %object_data1450 to i8*
  store i8* %1708, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 537), align 8
  store %sCLObject* %1707, %sCLObject** %object_data1450, align 8
  %1709 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1710 = bitcast i8* %1709 to %sVMInfo**
  %info1451 = load %sVMInfo*, %sVMInfo** %1710, align 8
  %1711 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1451, i32 0, i32 3
  %1712 = load %sCompileInfo*, %sCompileInfo** %1711, align 8
  %1713 = getelementptr inbounds %sCompileInfo, %sCompileInfo* %1712, i32 0, i32 4
  %1714 = load %sParserInfo*, %sParserInfo** %1713, align 8
  %1715 = getelementptr inbounds %sParserInfo, %sParserInfo* %1714, i32 0, i32 9
  %1716 = load %vector__sCLTypep*, %vector__sCLTypep** %1715, align 8
  %1717 = call %sCLType* @create_type(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_string.105, i32 0, i32 0), %vector__sCLTypep* %1716)
  %string_type = alloca %sCLType*
  %1718 = bitcast %sCLType** %string_type to i8*
  store i8* %1718, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 538), align 8
  store %sCLType* %1717, %sCLType** %string_type, align 8
  %string_type1452 = load %sCLType*, %sCLType** %string_type, align 8
  %object_data1453 = load %sCLObject*, %sCLObject** %object_data1450, align 8
  %1719 = getelementptr inbounds %sCLObject, %sCLObject* %object_data1453, i32 0, i32 0
  %1720 = load %sCLType*, %sCLType** %1719, align 8
  %1721 = call i1 @substitution_posibility(%sCLType* %string_type1452, %sCLType* %1720)
  %LOGICAL_DIANEAL1454 = icmp eq i1 %1721, false
  br i1 %LOGICAL_DIANEAL1454, label %cond_jump_then1455, label %cond_end1456

cond_end_block1436:                               ; preds = %loop_top_block1431
  %1722 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %1723 = bitcast i8* %1722 to i32*
  %num_params1471 = load i32, i32* %1723, align 4
  %1724 = bitcast [32 x i8*]* %argv to i8**
  %element_addressC1472 = getelementptr i8*, i8** %1724, i32 %num_params1471
  store i8* null, i8** %element_addressC1472, align 8
  %first_method_chain1473 = load i1, i1* %first_method_chain, align 1
  br i1 %first_method_chain1473, label %cond_jump_then1474, label %cond_else_block1475

cond_jump_then1455:                               ; preds = %cond_then_block1435
  %1725 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1726 = bitcast i8* %1725 to %CLVALUE**
  %stack_ptr1457 = load %CLVALUE*, %CLVALUE** %1726, align 8
  %1727 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1728 = bitcast i8* %1727 to %sVMInfo**
  %info1458 = load %sVMInfo*, %sVMInfo** %1728, align 8
  %1729 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 537), align 8
  %1730 = bitcast i8* %1729 to %sCLObject**
  %object_data1459 = load %sCLObject*, %sCLObject** %1730, align 8
  %1731 = getelementptr inbounds %sCLObject, %sCLObject* %object_data1459, i32 0, i32 0
  %1732 = load %sCLType*, %sCLType** %1731, align 8
  %1733 = getelementptr inbounds %sCLType, %sCLType* %1732, i32 0, i32 1
  %1734 = load %sCLClass*, %sCLClass** %1733, align 8
  %1735 = getelementptr inbounds %sCLClass, %sCLClass* %1734, i32 0, i32 0
  %1736 = load i8*, i8** %1735, align 8
  %1737 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1738 = bitcast i8* %1737 to i8**
  %method_name1460 = load i8*, i8** %1738, align 8
  %1739 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([67 x i8], [67 x i8]* @global_string.106, i32 0, i32 0), i8* %1736, i8* %method_name1460)
  call void @vm_err_msg(%CLVALUE** %1726, %sVMInfo* %info1458, i8* %1739)
  %1740 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1741 = bitcast i8* %1740 to %sVMInfo**
  %info1461 = load %sVMInfo*, %sVMInfo** %1741, align 8
  %1742 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1461, i32 0, i32 5
  %1743 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %1742, align 8
  %1744 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %1745 = bitcast i8* %1744 to %sCLStackFrame*
  %null_parent_stack_frame1462 = load %sCLStackFrame, %sCLStackFrame* %1745, align 8
  %1746 = call %sCLStackFrame @"pop_back_sCLStackFrame27_src/vm"(%vector__sCLStackFrame* %1743, %sCLStackFrame %null_parent_stack_frame1462)
  %1747 = bitcast [8192 x i8*]* %lvtable to i8*
  %1748 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %1747, i64 65536)
  %1749 = ptrtoint i8* %1739 to i64
  %1750 = icmp ne i64 %1749, 0
  br i1 %1750, label %cond_then_block1463, label %cond_end1464

cond_end1456:                                     ; preds = %cond_then_block1435
  %1751 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 534), align 8
  %1752 = bitcast i8* %1751 to [32 x i8*]*
  %i1465 = load i32, i32* %i1430, align 4
  %obj1466 = load i32, i32* %obj1448, align 4
  %1753 = call i8* @get_string_mem(i32 %obj1466)
  %1754 = bitcast [32 x i8*]* %1752 to i8**
  %element_addressC1467 = getelementptr i8*, i8** %1754, i32 %i1465
  store i8* %1753, i8** %element_addressC1467, align 8
  %i1468 = load i32, i32* %i1430, align 4
  %addtmp1469 = add nsw i32 %i1468, 1
  store i32 %addtmp1469, i32* %i1430, align 4
  %subttmp1470 = sub nsw i32 %addtmp1469, 1
  br label %loop_top_block1431

cond_then_block1463:                              ; preds = %cond_jump_then1455
  br label %cond_end1464

cond_end1464:                                     ; preds = %cond_then_block1463, %cond_jump_then1455
  call void @ncfree(i8* %1739)
  ret i1 false

cond_jump_then1474:                               ; preds = %cond_end_block1436
  %1755 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %1756 = bitcast i8* %1755 to i32*
  %last_method_chain1477 = load i32, i32* %1756, align 4
  %1757 = icmp ne i32 %last_method_chain1477, 0
  br i1 %1757, label %cond_jump_then1478, label %cond_else_block1479

cond_else_block1475:                              ; preds = %cond_end_block1436
  %1758 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %1759 = bitcast i8* %1758 to i32*
  %last_method_chain1509 = load i32, i32* %1759, align 4
  %1760 = icmp ne i32 %last_method_chain1509, 0
  br i1 %1760, label %cond_jump_then1510, label %cond_else_block1511

cond_end1476:                                     ; preds = %cond_end1512, %cond_end1480
  br label %cond_end1425

cond_jump_then1478:                               ; preds = %cond_jump_then1474
  %1761 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1762 = bitcast i8* %1761 to i8**
  %method_name1481 = load i8*, i8** %1762, align 8
  %1763 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 534), align 8
  %1764 = bitcast i8* %1763 to [32 x i8*]*
  %1765 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %1766 = bitcast i8* %1765 to i32*
  %num_params1482 = load i32, i32* %1766, align 4
  %1767 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1768 = bitcast i8* %1767 to %CLVALUE**
  %stack_ptr1483 = load %CLVALUE*, %CLVALUE** %1768, align 8
  %1769 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1770 = bitcast i8* %1769 to %sVMInfo**
  %info1484 = load %sVMInfo*, %sVMInfo** %1770, align 8
  %1771 = bitcast [32 x i8*]* %1764 to i8**
  %1772 = call i1 @invoke_command_with_control_terminal(i8* %method_name1481, i8** %1771, i32 %num_params1482, %CLVALUE** %1768, %sVMInfo* %info1484)
  %LOGICAL_DIANEAL1485 = icmp eq i1 %1772, false
  br i1 %LOGICAL_DIANEAL1485, label %cond_jump_then1486, label %cond_end1487

cond_else_block1479:                              ; preds = %cond_jump_then1474
  %1773 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1774 = bitcast i8* %1773 to i8**
  %method_name1495 = load i8*, i8** %1774, align 8
  %1775 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 534), align 8
  %1776 = bitcast i8* %1775 to [32 x i8*]*
  %1777 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1778 = bitcast i8* %1777 to %CLVALUE**
  %stack_ptr1496 = load %CLVALUE*, %CLVALUE** %1778, align 8
  %1779 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %1780 = bitcast i8* %1779 to i32*
  %num_params1497 = load i32, i32* %1780, align 4
  %1781 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1782 = bitcast i8* %1781 to %sVMInfo**
  %info1498 = load %sVMInfo*, %sVMInfo** %1782, align 8
  %1783 = bitcast [32 x i8*]* %1776 to i8**
  %1784 = call i1 @invoke_command(i8* %method_name1495, i8** %1783, %CLVALUE** %1778, i32 %num_params1497, %sVMInfo* %info1498)
  %LOGICAL_DIANEAL1499 = icmp eq i1 %1784, false
  br i1 %LOGICAL_DIANEAL1499, label %cond_jump_then1500, label %cond_end1501

cond_end1480:                                     ; preds = %cond_end1501, %cond_end1487
  br label %cond_end1476

cond_jump_then1486:                               ; preds = %cond_jump_then1478
  %1785 = call i32 @getpid()
  %1786 = call i32 @getpid()
  %1787 = call i32 @setpgid(i32 %1785, i32 %1786)
  %1788 = call i32 @getpid()
  %1789 = call i32 @tcsetpgrp(i32 0, i32 %1788)
  %1790 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1791 = bitcast i8* %1790 to %CLVALUE**
  %stack_ptr1488 = load %CLVALUE*, %CLVALUE** %1791, align 8
  %1792 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1793 = bitcast i8* %1792 to %sVMInfo**
  %info1489 = load %sVMInfo*, %sVMInfo** %1793, align 8
  %1794 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1795 = bitcast i8* %1794 to i8**
  %method_name1490 = load i8*, i8** %1795, align 8
  %1796 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_string.107, i32 0, i32 0), i8* %method_name1490)
  call void @vm_err_msg(%CLVALUE** %1791, %sVMInfo* %info1489, i8* %1796)
  %1797 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1798 = bitcast i8* %1797 to %sVMInfo**
  %info1491 = load %sVMInfo*, %sVMInfo** %1798, align 8
  %1799 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1491, i32 0, i32 5
  %1800 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %1799, align 8
  %1801 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %1802 = bitcast i8* %1801 to %sCLStackFrame*
  %null_parent_stack_frame1492 = load %sCLStackFrame, %sCLStackFrame* %1802, align 8
  %1803 = call %sCLStackFrame @"pop_back_sCLStackFrame28_src/vm"(%vector__sCLStackFrame* %1800, %sCLStackFrame %null_parent_stack_frame1492)
  %1804 = bitcast [8192 x i8*]* %lvtable to i8*
  %1805 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %1804, i64 65536)
  %1806 = ptrtoint i8* %1796 to i64
  %1807 = icmp ne i64 %1806, 0
  br i1 %1807, label %cond_then_block1493, label %cond_end1494

cond_end1487:                                     ; preds = %cond_jump_then1478
  br label %cond_end1480

cond_then_block1493:                              ; preds = %cond_jump_then1486
  br label %cond_end1494

cond_end1494:                                     ; preds = %cond_then_block1493, %cond_jump_then1486
  call void @ncfree(i8* %1796)
  ret i1 false

cond_jump_then1500:                               ; preds = %cond_else_block1479
  %1808 = call i32 @getpid()
  %1809 = call i32 @getpid()
  %1810 = call i32 @setpgid(i32 %1808, i32 %1809)
  %1811 = call i32 @getpid()
  %1812 = call i32 @tcsetpgrp(i32 0, i32 %1811)
  %1813 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1814 = bitcast i8* %1813 to %CLVALUE**
  %stack_ptr1502 = load %CLVALUE*, %CLVALUE** %1814, align 8
  %1815 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1816 = bitcast i8* %1815 to %sVMInfo**
  %info1503 = load %sVMInfo*, %sVMInfo** %1816, align 8
  %1817 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1818 = bitcast i8* %1817 to i8**
  %method_name1504 = load i8*, i8** %1818, align 8
  %1819 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_string.108, i32 0, i32 0), i8* %method_name1504)
  call void @vm_err_msg(%CLVALUE** %1814, %sVMInfo* %info1503, i8* %1819)
  %1820 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1821 = bitcast i8* %1820 to %sVMInfo**
  %info1505 = load %sVMInfo*, %sVMInfo** %1821, align 8
  %1822 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1505, i32 0, i32 5
  %1823 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %1822, align 8
  %1824 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %1825 = bitcast i8* %1824 to %sCLStackFrame*
  %null_parent_stack_frame1506 = load %sCLStackFrame, %sCLStackFrame* %1825, align 8
  %1826 = call %sCLStackFrame @"pop_back_sCLStackFrame29_src/vm"(%vector__sCLStackFrame* %1823, %sCLStackFrame %null_parent_stack_frame1506)
  %1827 = bitcast [8192 x i8*]* %lvtable to i8*
  %1828 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %1827, i64 65536)
  %1829 = ptrtoint i8* %1819 to i64
  %1830 = icmp ne i64 %1829, 0
  br i1 %1830, label %cond_then_block1507, label %cond_end1508

cond_end1501:                                     ; preds = %cond_else_block1479
  br label %cond_end1480

cond_then_block1507:                              ; preds = %cond_jump_then1500
  br label %cond_end1508

cond_end1508:                                     ; preds = %cond_then_block1507, %cond_jump_then1500
  call void @ncfree(i8* %1819)
  ret i1 false

cond_jump_then1510:                               ; preds = %cond_else_block1475
  %1831 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 531), align 8
  %1832 = bitcast i8* %1831 to i32*
  %parent_obj1513 = load i32, i32* %1832, align 4
  %1833 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1834 = bitcast i8* %1833 to i8**
  %method_name1514 = load i8*, i8** %1834, align 8
  %1835 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 534), align 8
  %1836 = bitcast i8* %1835 to [32 x i8*]*
  %1837 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %1838 = bitcast i8* %1837 to i32*
  %num_params1515 = load i32, i32* %1838, align 4
  %1839 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1840 = bitcast i8* %1839 to %CLVALUE**
  %stack_ptr1516 = load %CLVALUE*, %CLVALUE** %1840, align 8
  %1841 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1842 = bitcast i8* %1841 to %sVMInfo**
  %info1517 = load %sVMInfo*, %sVMInfo** %1842, align 8
  %1843 = bitcast [32 x i8*]* %1836 to i8**
  %1844 = call i1 @invoke_command_with_control_terminal_and_pipe(i32 %parent_obj1513, i8* %method_name1514, i8** %1843, i32 %num_params1515, %CLVALUE** %1840, %sVMInfo* %info1517)
  %LOGICAL_DIANEAL1518 = icmp eq i1 %1844, false
  br i1 %LOGICAL_DIANEAL1518, label %cond_jump_then1519, label %cond_end1520

cond_else_block1511:                              ; preds = %cond_else_block1475
  %1845 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 531), align 8
  %1846 = bitcast i8* %1845 to i32*
  %parent_obj1530 = load i32, i32* %1846, align 4
  %1847 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1848 = bitcast i8* %1847 to i8**
  %method_name1531 = load i8*, i8** %1848, align 8
  %1849 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 534), align 8
  %1850 = bitcast i8* %1849 to [32 x i8*]*
  %1851 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1852 = bitcast i8* %1851 to %CLVALUE**
  %stack_ptr1532 = load %CLVALUE*, %CLVALUE** %1852, align 8
  %1853 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %1854 = bitcast i8* %1853 to i32*
  %num_params1533 = load i32, i32* %1854, align 4
  %1855 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1856 = bitcast i8* %1855 to %sVMInfo**
  %info1534 = load %sVMInfo*, %sVMInfo** %1856, align 8
  %1857 = bitcast [32 x i8*]* %1850 to i8**
  %1858 = call i1 @invoke_command_with_pipe(i32 %parent_obj1530, i8* %method_name1531, i8** %1857, %CLVALUE** %1852, i32 %num_params1533, %sVMInfo* %info1534)
  %LOGICAL_DIANEAL1535 = icmp eq i1 %1858, false
  br i1 %LOGICAL_DIANEAL1535, label %cond_jump_then1536, label %cond_end1537

cond_end1512:                                     ; preds = %cond_end1537, %cond_end1520
  br label %cond_end1476

cond_jump_then1519:                               ; preds = %cond_jump_then1510
  %1859 = call i32 @getpid()
  %1860 = call i32 @getpid()
  %1861 = call i32 @setpgid(i32 %1859, i32 %1860)
  %1862 = call i32 @getpid()
  %1863 = call i32 @tcsetpgrp(i32 0, i32 %1862)
  %1864 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1865 = bitcast i8* %1864 to %CLVALUE**
  %stack_ptr1521 = load %CLVALUE*, %CLVALUE** %1865, align 8
  %1866 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1867 = bitcast i8* %1866 to %sVMInfo**
  %info1522 = load %sVMInfo*, %sVMInfo** %1867, align 8
  %1868 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1869 = bitcast i8* %1868 to i8**
  %method_name1523 = load i8*, i8** %1869, align 8
  %1870 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_string.109, i32 0, i32 0), i8* %method_name1523)
  call void @vm_err_msg(%CLVALUE** %1865, %sVMInfo* %info1522, i8* %1870)
  %1871 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1872 = bitcast i8* %1871 to %sVMInfo**
  %info1524 = load %sVMInfo*, %sVMInfo** %1872, align 8
  %1873 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1524, i32 0, i32 5
  %1874 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %1873, align 8
  %1875 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %1876 = bitcast i8* %1875 to %sCLStackFrame*
  %null_parent_stack_frame1525 = load %sCLStackFrame, %sCLStackFrame* %1876, align 8
  %1877 = call %sCLStackFrame @"pop_back_sCLStackFrame30_src/vm"(%vector__sCLStackFrame* %1874, %sCLStackFrame %null_parent_stack_frame1525)
  %1878 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1879 = bitcast i8* %1878 to %sVMInfo**
  %info1526 = load %sVMInfo*, %sVMInfo** %1879, align 8
  %1880 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1526, i32 0, i32 5
  %1881 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %1880, align 8
  %1882 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %1883 = bitcast i8* %1882 to %sCLStackFrame*
  %null_parent_stack_frame1527 = load %sCLStackFrame, %sCLStackFrame* %1883, align 8
  %1884 = call %sCLStackFrame @"pop_back_sCLStackFrame31_src/vm"(%vector__sCLStackFrame* %1881, %sCLStackFrame %null_parent_stack_frame1527)
  %1885 = bitcast [8192 x i8*]* %lvtable to i8*
  %1886 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %1885, i64 65536)
  %1887 = ptrtoint i8* %1870 to i64
  %1888 = icmp ne i64 %1887, 0
  br i1 %1888, label %cond_then_block1528, label %cond_end1529

cond_end1520:                                     ; preds = %cond_jump_then1510
  br label %cond_end1512

cond_then_block1528:                              ; preds = %cond_jump_then1519
  br label %cond_end1529

cond_end1529:                                     ; preds = %cond_then_block1528, %cond_jump_then1519
  call void @ncfree(i8* %1870)
  ret i1 false

cond_jump_then1536:                               ; preds = %cond_else_block1511
  %1889 = call i32 @getpid()
  %1890 = call i32 @getpid()
  %1891 = call i32 @setpgid(i32 %1889, i32 %1890)
  %1892 = call i32 @getpid()
  %1893 = call i32 @tcsetpgrp(i32 0, i32 %1892)
  %1894 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1895 = bitcast i8* %1894 to %CLVALUE**
  %stack_ptr1538 = load %CLVALUE*, %CLVALUE** %1895, align 8
  %1896 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1897 = bitcast i8* %1896 to %sVMInfo**
  %info1539 = load %sVMInfo*, %sVMInfo** %1897, align 8
  %1898 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1899 = bitcast i8* %1898 to i8**
  %method_name1540 = load i8*, i8** %1899, align 8
  %1900 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_string.110, i32 0, i32 0), i8* %method_name1540)
  call void @vm_err_msg(%CLVALUE** %1895, %sVMInfo* %info1539, i8* %1900)
  %1901 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1902 = bitcast i8* %1901 to %sVMInfo**
  %info1541 = load %sVMInfo*, %sVMInfo** %1902, align 8
  %1903 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1541, i32 0, i32 5
  %1904 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %1903, align 8
  %1905 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %1906 = bitcast i8* %1905 to %sCLStackFrame*
  %null_parent_stack_frame1542 = load %sCLStackFrame, %sCLStackFrame* %1906, align 8
  %1907 = call %sCLStackFrame @"pop_back_sCLStackFrame32_src/vm"(%vector__sCLStackFrame* %1904, %sCLStackFrame %null_parent_stack_frame1542)
  %1908 = bitcast [8192 x i8*]* %lvtable to i8*
  %1909 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %1908, i64 65536)
  %1910 = ptrtoint i8* %1900 to i64
  %1911 = icmp ne i64 %1910, 0
  br i1 %1911, label %cond_then_block1543, label %cond_end1544

cond_end1537:                                     ; preds = %cond_else_block1511
  br label %cond_end1512

cond_then_block1543:                              ; preds = %cond_jump_then1536
  br label %cond_end1544

cond_end1544:                                     ; preds = %cond_then_block1543, %cond_jump_then1536
  call void @ncfree(i8* %1900)
  ret i1 false

cond_jump_then1547:                               ; preds = %cond_else_block1424
  %1912 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1913 = bitcast i8* %1912 to %CLVALUE**
  %stack_ptr1549 = load %CLVALUE*, %CLVALUE** %1913, align 8
  %1914 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1915 = bitcast i8* %1914 to %sVMInfo**
  %info1550 = load %sVMInfo*, %sVMInfo** %1915, align 8
  %1916 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 529), align 8
  %1917 = bitcast i8* %1916 to i8**
  %klass_name1551 = load i8*, i8** %1917, align 8
  %1918 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1919 = bitcast i8* %1918 to i8**
  %method_name1552 = load i8*, i8** %1919, align 8
  %1920 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_string.111, i32 0, i32 0), i8* %klass_name1551, i8* %method_name1552)
  call void @vm_err_msg(%CLVALUE** %1913, %sVMInfo* %info1550, i8* %1920)
  %1921 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1922 = bitcast i8* %1921 to %sVMInfo**
  %info1553 = load %sVMInfo*, %sVMInfo** %1922, align 8
  %1923 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1553, i32 0, i32 5
  %1924 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %1923, align 8
  %1925 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %1926 = bitcast i8* %1925 to %sCLStackFrame*
  %null_parent_stack_frame1554 = load %sCLStackFrame, %sCLStackFrame* %1926, align 8
  %1927 = call %sCLStackFrame @"pop_back_sCLStackFrame33_src/vm"(%vector__sCLStackFrame* %1924, %sCLStackFrame %null_parent_stack_frame1554)
  %1928 = bitcast [8192 x i8*]* %lvtable to i8*
  %1929 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %1928, i64 65536)
  %1930 = ptrtoint i8* %1920 to i64
  %1931 = icmp ne i64 %1930, 0
  br i1 %1931, label %cond_then_block1555, label %cond_end1556

cond_end1548:                                     ; preds = %cond_else_block1424
  %1932 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  %1933 = bitcast i8* %1932 to %sCLMethod**
  %method1557 = load %sCLMethod*, %sCLMethod** %1933, align 8
  %1934 = getelementptr inbounds %sCLMethod, %sCLMethod* %method1557, i32 0, i32 6
  %1935 = load i32, i32* %1934, align 4
  %var_num1558 = alloca i32
  %1936 = bitcast i32* %var_num1558 to i8*
  store i8* %1936, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 531), align 8
  store i32 %1935, i32* %var_num1558, align 4
  %1937 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  %1938 = bitcast i8* %1937 to %sCLMethod**
  %method1559 = load %sCLMethod*, %sCLMethod** %1938, align 8
  %1939 = getelementptr inbounds %sCLMethod, %sCLMethod* %method1559, i32 0, i32 1
  %1940 = bitcast [32 x %sCLParam]* %1939 to %sCLParam*
  %1941 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  %1942 = bitcast i8* %1941 to %sCLMethod**
  %method1560 = load %sCLMethod*, %sCLMethod** %1942, align 8
  %1943 = getelementptr inbounds %sCLMethod, %sCLMethod* %method1560, i32 0, i32 2
  %1944 = load i32, i32* %1943, align 4
  %1945 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1946 = bitcast i8* %1945 to %CLVALUE**
  %stack_ptr1561 = load %CLVALUE*, %CLVALUE** %1946, align 8
  %1947 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %1948 = bitcast i8* %1947 to %sCLType**
  %generics_types1562 = load %sCLType*, %sCLType** %1948, align 8
  %1949 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1950 = bitcast i8* %1949 to %sVMInfo**
  %info1563 = load %sVMInfo*, %sVMInfo** %1950, align 8
  %1951 = call i1 @param_check(%sCLParam* %1940, i32 %1944, %CLVALUE* %stack_ptr1561, %sCLType* %generics_types1562, %sVMInfo* %info1563)
  %LOGICAL_DIANEAL1564 = icmp eq i1 %1951, false
  br i1 %LOGICAL_DIANEAL1564, label %cond_jump_then1565, label %cond_end1566

cond_then_block1555:                              ; preds = %cond_jump_then1547
  br label %cond_end1556

cond_end1556:                                     ; preds = %cond_then_block1555, %cond_jump_then1547
  call void @ncfree(i8* %1920)
  ret i1 false

cond_jump_then1565:                               ; preds = %cond_end1548
  %1952 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1953 = bitcast i8* %1952 to %CLVALUE**
  %stack_ptr1567 = load %CLVALUE*, %CLVALUE** %1953, align 8
  %1954 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1955 = bitcast i8* %1954 to %sVMInfo**
  %info1568 = load %sVMInfo*, %sVMInfo** %1955, align 8
  %1956 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %1957 = bitcast i8* %1956 to %sCLClass**
  %klass1569 = load %sCLClass*, %sCLClass** %1957, align 8
  %1958 = getelementptr inbounds %sCLClass, %sCLClass* %klass1569, i32 0, i32 0
  %1959 = load i8*, i8** %1958, align 8
  %1960 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %1961 = bitcast i8* %1960 to i8**
  %method_name1570 = load i8*, i8** %1961, align 8
  %1962 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_string.112, i32 0, i32 0), i8* %1959, i8* %method_name1570)
  call void @vm_err_msg(%CLVALUE** %1953, %sVMInfo* %info1568, i8* %1962)
  %1963 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1964 = bitcast i8* %1963 to %sVMInfo**
  %info1571 = load %sVMInfo*, %sVMInfo** %1964, align 8
  %1965 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1571, i32 0, i32 5
  %1966 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %1965, align 8
  %1967 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %1968 = bitcast i8* %1967 to %sCLStackFrame*
  %null_parent_stack_frame1572 = load %sCLStackFrame, %sCLStackFrame* %1968, align 8
  %1969 = call %sCLStackFrame @"pop_back_sCLStackFrame34_src/vm"(%vector__sCLStackFrame* %1966, %sCLStackFrame %null_parent_stack_frame1572)
  %1970 = bitcast [8192 x i8*]* %lvtable to i8*
  %1971 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %1970, i64 65536)
  %1972 = ptrtoint i8* %1962 to i64
  %1973 = icmp ne i64 %1972, 0
  br i1 %1973, label %cond_then_block1573, label %cond_end1574

cond_end1566:                                     ; preds = %cond_end1548
  %1974 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  %1975 = bitcast i8* %1974 to %sCLMethod**
  %method1575 = load %sCLMethod*, %sCLMethod** %1975, align 8
  %1976 = getelementptr inbounds %sCLMethod, %sCLMethod* %method1575, i32 0, i32 4
  %1977 = load %buffer*, %buffer** %1976, align 8
  %eqtmpX1576 = icmp eq %buffer* %1977, null
  br i1 %eqtmpX1576, label %cond_jump_then1577, label %cond_else_block1578

cond_then_block1573:                              ; preds = %cond_jump_then1565
  br label %cond_end1574

cond_end1574:                                     ; preds = %cond_then_block1573, %cond_jump_then1565
  call void @ncfree(i8* %1962)
  ret i1 false

cond_jump_then1577:                               ; preds = %cond_end1566
  %1978 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %1979 = bitcast i8* %1978 to %sCLClass**
  %klass1580 = load %sCLClass*, %sCLClass** %1979, align 8
  %1980 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  %1981 = bitcast i8* %1980 to %sCLMethod**
  %method1581 = load %sCLMethod*, %sCLMethod** %1981, align 8
  %1982 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1983 = bitcast i8* %1982 to %CLVALUE**
  %stack_ptr1582 = load %CLVALUE*, %CLVALUE** %1983, align 8
  %1984 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %1985 = bitcast i8* %1984 to %sVMInfo**
  %info1583 = load %sVMInfo*, %sVMInfo** %1985, align 8
  %1986 = call i1 @invoke_native_method(%sCLClass* %klass1580, %sCLMethod* %method1581, %CLVALUE** %1983, %sVMInfo* %info1583)
  %LOGICAL_DIANEAL1584 = icmp eq i1 %1986, false
  br i1 %LOGICAL_DIANEAL1584, label %cond_jump_then1585, label %cond_end1586

cond_else_block1578:                              ; preds = %cond_end1566
  %1987 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  %1988 = bitcast i8* %1987 to %sCLMethod**
  %method1631 = load %sCLMethod*, %sCLMethod** %1988, align 8
  %1989 = getelementptr inbounds %sCLMethod, %sCLMethod* %method1631, i32 0, i32 4
  %1990 = load %buffer*, %buffer** %1989, align 8
  %codes1632 = alloca %buffer*
  %1991 = bitcast %buffer** %codes1632 to i8*
  store i8* %1991, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 532), align 8
  store %buffer* %1990, %buffer** %codes1632, align 8
  %1992 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  %1993 = bitcast i8* %1992 to %sCLMethod**
  %method1633 = load %sCLMethod*, %sCLMethod** %1993, align 8
  %1994 = getelementptr inbounds %sCLMethod, %sCLMethod* %method1633, i32 0, i32 6
  %1995 = load i32, i32* %1994, align 4
  %var_num1634 = alloca i32
  %1996 = bitcast i32* %var_num1634 to i8*
  store i8* %1996, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 533), align 8
  store i32 %1995, i32* %var_num1634, align 4
  %result1635 = alloca %CLVALUE
  %1997 = bitcast %CLVALUE* %result1635 to i8*
  store i8* %1997, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 534), align 8
  %codes1636 = load %buffer*, %buffer** %codes1632, align 8
  %1998 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %1999 = bitcast i8* %1998 to %CLVALUE**
  %stack_ptr1637 = load %CLVALUE*, %CLVALUE** %1999, align 8
  %2000 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %2001 = bitcast i8* %2000 to i32*
  %num_params1638 = load i32, i32* %2001, align 4
  %var_num1639 = load i32, i32* %var_num1634, align 4
  %result1640 = load %CLVALUE, %CLVALUE* %result1635, align 8
  %2002 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2003 = bitcast i8* %2002 to %sVMInfo**
  %info1641 = load %sVMInfo*, %sVMInfo** %2003, align 8
  %2004 = call i1 @vm(%buffer* %codes1636, %CLVALUE* %stack_ptr1637, i32 %num_params1638, i32 %var_num1639, %CLVALUE* %result1635, %CLVALUE* null, %sVMInfo* %info1641)
  %LOGICAL_DIANEAL1642 = icmp eq i1 %2004, false
  br i1 %LOGICAL_DIANEAL1642, label %cond_jump_then1643, label %cond_end1644

cond_end1579:                                     ; preds = %cond_end1665, %cond_end1610
  br label %cond_end1425

cond_jump_then1585:                               ; preds = %cond_jump_then1577
  %2005 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2006 = bitcast i8* %2005 to %sVMInfo**
  %info1587 = load %sVMInfo*, %sVMInfo** %2006, align 8
  %2007 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1587, i32 0, i32 5
  %2008 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %2007, align 8
  %2009 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %2010 = bitcast i8* %2009 to %sCLStackFrame*
  %null_parent_stack_frame1588 = load %sCLStackFrame, %sCLStackFrame* %2010, align 8
  %2011 = call %sCLStackFrame @"pop_back_sCLStackFrame35_src/vm"(%vector__sCLStackFrame* %2008, %sCLStackFrame %null_parent_stack_frame1588)
  %2012 = bitcast [8192 x i8*]* %lvtable to i8*
  %2013 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %2012, i64 65536)
  ret i1 false

cond_end1586:                                     ; preds = %cond_jump_then1577
  %2014 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2015 = bitcast i8* %2014 to %CLVALUE**
  %stack_ptr1589 = load %CLVALUE*, %CLVALUE** %2015, align 8
  %2016 = ptrtoint %CLVALUE* %stack_ptr1589 to i64
  %subtmp1590 = sub nsw i64 %2016, 4
  %IntTOPtr4b1591 = inttoptr i64 %subtmp1590 to %CLVALUE*
  %derefference_value1592 = load %CLVALUE, %CLVALUE* %IntTOPtr4b1591, align 8
  %result_value = alloca %CLVALUE
  %2017 = bitcast %CLVALUE* %result_value to i8*
  store i8* %2017, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 532), align 8
  store %CLVALUE %derefference_value1592, %CLVALUE* %result_value, align 8
  %2018 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2019 = bitcast i8* %2018 to %CLVALUE**
  %stack_ptr1593 = load %CLVALUE*, %CLVALUE** %2019, align 8
  %2020 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %2021 = bitcast i8* %2020 to i32*
  %num_params1594 = load i32, i32* %2021, align 4
  %2022 = ptrtoint %CLVALUE* %stack_ptr1593 to i64
  %sextY1595 = sext i32 %num_params1594 to i64
  %multtmp1596 = mul nsw i64 %sextY1595, 4
  %subtmp1597 = sub nsw i64 %2022, %multtmp1596
  %IntTOPtr4b1598 = inttoptr i64 %subtmp1597 to %CLVALUE*
  %2023 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2024 = bitcast i8* %2023 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b1598, %CLVALUE** %2024, align 8
  %2025 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %2026 = bitcast i8* %2025 to i32*
  %num_params1599 = load i32, i32* %2026, align 4
  %2027 = ptrtoint %CLVALUE* %IntTOPtr4b1598 to i64
  %sextXYZ1600 = sext i32 %num_params1599 to i64
  %multtmp1601 = mul nsw i64 %sextXYZ1600, 4
  %addtmp1602 = add nsw i64 %2027, %multtmp1601
  %intToPtr21603 = inttoptr i64 %addtmp1602 to %CLVALUE*
  %2028 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  %2029 = bitcast i8* %2028 to %sCLMethod**
  %method1604 = load %sCLMethod*, %sCLMethod** %2029, align 8
  %2030 = getelementptr inbounds %sCLMethod, %sCLMethod* %method1604, i32 0, i32 3
  %2031 = load %sCLType*, %sCLType** %2030, align 8
  %2032 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2033 = bitcast i8* %2032 to %sVMInfo**
  %info1605 = load %sVMInfo*, %sVMInfo** %2033, align 8
  %2034 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1605, i32 0, i32 2
  %2035 = load %sParserInfo*, %sParserInfo** %2034, align 8
  %2036 = call i1 @type_identify_with_class_name(%sCLType* %2031, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.113, i32 0, i32 0), %sParserInfo* %2035)
  %LOGICAL_DIANEAL1606 = icmp eq i1 %2036, false
  %result_existance = alloca i1
  %2037 = bitcast i1* %result_existance to i8*
  store i8* %2037, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 533), align 8
  store i1 %LOGICAL_DIANEAL1606, i1* %result_existance, align 1
  %result_existance1607 = load i1, i1* %result_existance, align 1
  br i1 %result_existance1607, label %cond_jump_then1608, label %cond_else_block1609

cond_jump_then1608:                               ; preds = %cond_end1586
  %2038 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2039 = bitcast i8* %2038 to %CLVALUE**
  %stack_ptr1611 = load %CLVALUE*, %CLVALUE** %2039, align 8
  %2040 = ptrtoint %CLVALUE* %stack_ptr1611 to i64
  %subtmp1612 = sub nsw i64 %2040, 4
  %IntTOPtr4b1613 = inttoptr i64 %subtmp1612 to %CLVALUE*
  %2041 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2042 = bitcast i8* %2041 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b1613, %CLVALUE** %2042, align 8
  %2043 = ptrtoint %CLVALUE* %IntTOPtr4b1613 to i64
  %addtmp1614 = add nsw i64 %2043, 4
  %intToPtr21615 = inttoptr i64 %addtmp1614 to %CLVALUE*
  %2044 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2045 = bitcast i8* %2044 to %CLVALUE**
  %stack_ptr1616 = load %CLVALUE*, %CLVALUE** %2045, align 8
  %2046 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 532), align 8
  %2047 = bitcast i8* %2046 to %CLVALUE*
  %result_value1617 = load %CLVALUE, %CLVALUE* %2047, align 8
  store %CLVALUE %result_value1617, %CLVALUE* %stack_ptr1616, align 8
  %2048 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2049 = bitcast i8* %2048 to %CLVALUE**
  %stack_ptr1618 = load %CLVALUE*, %CLVALUE** %2049, align 8
  %2050 = ptrtoint %CLVALUE* %stack_ptr1618 to i64
  %addtmp1619 = add nsw i64 %2050, 4
  %intToPtr21620 = inttoptr i64 %addtmp1619 to %CLVALUE*
  %2051 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2052 = bitcast i8* %2051 to %CLVALUE**
  store %CLVALUE* %intToPtr21620, %CLVALUE** %2052, align 8
  %2053 = ptrtoint %CLVALUE* %intToPtr21620 to i64
  %subtmp1621 = sub nsw i64 %2053, 4
  %IntTOPtr4b1622 = inttoptr i64 %subtmp1621 to %CLVALUE*
  br label %cond_end1610

cond_else_block1609:                              ; preds = %cond_end1586
  %2054 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2055 = bitcast i8* %2054 to %CLVALUE**
  %stack_ptr1623 = load %CLVALUE*, %CLVALUE** %2055, align 8
  %derefference_value1624 = load %CLVALUE, %CLVALUE* %stack_ptr1623, align 8
  %2056 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2057 = bitcast i8* %2056 to %sVMInfo**
  %info1625 = load %sVMInfo*, %sVMInfo** %2057, align 8
  %2058 = call i32 @create_null_object(%sVMInfo* %info1625)
  %2059 = bitcast %CLVALUE* %stack_ptr1623 to i32*
  store i32 %2058, i32* %2059, align 4
  %2060 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2061 = bitcast i8* %2060 to %CLVALUE**
  %stack_ptr1626 = load %CLVALUE*, %CLVALUE** %2061, align 8
  %2062 = ptrtoint %CLVALUE* %stack_ptr1626 to i64
  %addtmp1627 = add nsw i64 %2062, 4
  %intToPtr21628 = inttoptr i64 %addtmp1627 to %CLVALUE*
  %2063 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2064 = bitcast i8* %2063 to %CLVALUE**
  store %CLVALUE* %intToPtr21628, %CLVALUE** %2064, align 8
  %2065 = ptrtoint %CLVALUE* %intToPtr21628 to i64
  %subtmp1629 = sub nsw i64 %2065, 4
  %IntTOPtr4b1630 = inttoptr i64 %subtmp1629 to %CLVALUE*
  br label %cond_end1610

cond_end1610:                                     ; preds = %cond_else_block1609, %cond_jump_then1608
  br label %cond_end1579

cond_jump_then1643:                               ; preds = %cond_else_block1578
  %2066 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2067 = bitcast i8* %2066 to %sVMInfo**
  %info1645 = load %sVMInfo*, %sVMInfo** %2067, align 8
  %2068 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1645, i32 0, i32 5
  %2069 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %2068, align 8
  %2070 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %2071 = bitcast i8* %2070 to %sCLStackFrame*
  %null_parent_stack_frame1646 = load %sCLStackFrame, %sCLStackFrame* %2071, align 8
  %2072 = call %sCLStackFrame @"pop_back_sCLStackFrame36_src/vm"(%vector__sCLStackFrame* %2069, %sCLStackFrame %null_parent_stack_frame1646)
  %2073 = bitcast [8192 x i8*]* %lvtable to i8*
  %2074 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %2073, i64 65536)
  ret i1 false

cond_end1644:                                     ; preds = %cond_else_block1578
  %2075 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2076 = bitcast i8* %2075 to %CLVALUE**
  %stack_ptr1647 = load %CLVALUE*, %CLVALUE** %2076, align 8
  %2077 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %2078 = bitcast i8* %2077 to i32*
  %num_params1648 = load i32, i32* %2078, align 4
  %2079 = ptrtoint %CLVALUE* %stack_ptr1647 to i64
  %sextY1649 = sext i32 %num_params1648 to i64
  %multtmp1650 = mul nsw i64 %sextY1649, 4
  %subtmp1651 = sub nsw i64 %2079, %multtmp1650
  %IntTOPtr4b1652 = inttoptr i64 %subtmp1651 to %CLVALUE*
  %2080 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2081 = bitcast i8* %2080 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b1652, %CLVALUE** %2081, align 8
  %2082 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %2083 = bitcast i8* %2082 to i32*
  %num_params1653 = load i32, i32* %2083, align 4
  %2084 = ptrtoint %CLVALUE* %IntTOPtr4b1652 to i64
  %sextXYZ1654 = sext i32 %num_params1653 to i64
  %multtmp1655 = mul nsw i64 %sextXYZ1654, 4
  %addtmp1656 = add nsw i64 %2084, %multtmp1655
  %intToPtr21657 = inttoptr i64 %addtmp1656 to %CLVALUE*
  %2085 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  %2086 = bitcast i8* %2085 to %sCLMethod**
  %method1658 = load %sCLMethod*, %sCLMethod** %2086, align 8
  %2087 = getelementptr inbounds %sCLMethod, %sCLMethod* %method1658, i32 0, i32 3
  %2088 = load %sCLType*, %sCLType** %2087, align 8
  %2089 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2090 = bitcast i8* %2089 to %sVMInfo**
  %info1659 = load %sVMInfo*, %sVMInfo** %2090, align 8
  %2091 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1659, i32 0, i32 2
  %2092 = load %sParserInfo*, %sParserInfo** %2091, align 8
  %2093 = call i1 @type_identify_with_class_name(%sCLType* %2088, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.114, i32 0, i32 0), %sParserInfo* %2092)
  %LOGICAL_DIANEAL1660 = icmp eq i1 %2093, false
  %result_existance1661 = alloca i1
  %2094 = bitcast i1* %result_existance1661 to i8*
  store i8* %2094, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  store i1 %LOGICAL_DIANEAL1660, i1* %result_existance1661, align 1
  %result_existance1662 = load i1, i1* %result_existance1661, align 1
  br i1 %result_existance1662, label %cond_jump_then1663, label %cond_else_block1664

cond_jump_then1663:                               ; preds = %cond_end1644
  %2095 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2096 = bitcast i8* %2095 to %CLVALUE**
  %stack_ptr1666 = load %CLVALUE*, %CLVALUE** %2096, align 8
  %2097 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 534), align 8
  %2098 = bitcast i8* %2097 to %CLVALUE*
  %result1667 = load %CLVALUE, %CLVALUE* %2098, align 8
  store %CLVALUE %result1667, %CLVALUE* %stack_ptr1666, align 8
  %2099 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2100 = bitcast i8* %2099 to %CLVALUE**
  %stack_ptr1668 = load %CLVALUE*, %CLVALUE** %2100, align 8
  %2101 = ptrtoint %CLVALUE* %stack_ptr1668 to i64
  %addtmp1669 = add nsw i64 %2101, 4
  %intToPtr21670 = inttoptr i64 %addtmp1669 to %CLVALUE*
  %2102 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2103 = bitcast i8* %2102 to %CLVALUE**
  store %CLVALUE* %intToPtr21670, %CLVALUE** %2103, align 8
  %2104 = ptrtoint %CLVALUE* %intToPtr21670 to i64
  %subtmp1671 = sub nsw i64 %2104, 4
  %IntTOPtr4b1672 = inttoptr i64 %subtmp1671 to %CLVALUE*
  br label %cond_end1665

cond_else_block1664:                              ; preds = %cond_end1644
  %2105 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2106 = bitcast i8* %2105 to %CLVALUE**
  %stack_ptr1673 = load %CLVALUE*, %CLVALUE** %2106, align 8
  %derefference_value1674 = load %CLVALUE, %CLVALUE* %stack_ptr1673, align 8
  %2107 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2108 = bitcast i8* %2107 to %sVMInfo**
  %info1675 = load %sVMInfo*, %sVMInfo** %2108, align 8
  %2109 = call i32 @create_null_object(%sVMInfo* %info1675)
  %2110 = bitcast %CLVALUE* %stack_ptr1673 to i32*
  store i32 %2109, i32* %2110, align 4
  %2111 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2112 = bitcast i8* %2111 to %CLVALUE**
  %stack_ptr1676 = load %CLVALUE*, %CLVALUE** %2112, align 8
  %2113 = ptrtoint %CLVALUE* %stack_ptr1676 to i64
  %addtmp1677 = add nsw i64 %2113, 4
  %intToPtr21678 = inttoptr i64 %addtmp1677 to %CLVALUE*
  %2114 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2115 = bitcast i8* %2114 to %CLVALUE**
  store %CLVALUE* %intToPtr21678, %CLVALUE** %2115, align 8
  %2116 = ptrtoint %CLVALUE* %intToPtr21678 to i64
  %subtmp1679 = sub nsw i64 %2116, 4
  %IntTOPtr4b1680 = inttoptr i64 %subtmp1679 to %CLVALUE*
  br label %cond_end1665

cond_end1665:                                     ; preds = %cond_else_block1664, %cond_jump_then1663
  br label %cond_end1579

after_break1681:                                  ; No predecessors!
  br label %cond_else_block1336

cond_then_block1682:                              ; preds = %cond_else_block1336
  %2117 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2118 = bitcast i8* %2117 to i32**
  %p1685 = load i32*, i32** %2118, align 8
  %derefference_value1686 = load i32, i32* %p1685, align 8
  %num_params1687 = alloca i32
  %2119 = bitcast i32* %num_params1687 to i8*
  store i8* %2119, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %derefference_value1686, i32* %num_params1687, align 4
  %2120 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2121 = bitcast i8* %2120 to i32**
  %p1688 = load i32*, i32** %2121, align 8
  %2122 = ptrtoint i32* %p1688 to i64
  %addtmp1689 = add nsw i64 %2122, 4
  %intToPtr21690 = inttoptr i64 %addtmp1689 to i32*
  %2123 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2124 = bitcast i8* %2123 to i32**
  store i32* %intToPtr21690, i32** %2124, align 8
  %2125 = ptrtoint i32* %intToPtr21690 to i64
  %subtmp1691 = sub nsw i64 %2125, 4
  %IntTOPtr4b1692 = inttoptr i64 %subtmp1691 to i32*
  %2126 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2127 = bitcast i8* %2126 to i32**
  %p1693 = load i32*, i32** %2127, align 8
  %derefference_value1694 = load i32, i32* %p1693, align 8
  %result_existance1695 = alloca i32
  %2128 = bitcast i32* %result_existance1695 to i8*
  store i8* %2128, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %derefference_value1694, i32* %result_existance1695, align 4
  %2129 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2130 = bitcast i8* %2129 to i32**
  %p1696 = load i32*, i32** %2130, align 8
  %2131 = ptrtoint i32* %p1696 to i64
  %addtmp1697 = add nsw i64 %2131, 4
  %intToPtr21698 = inttoptr i64 %addtmp1697 to i32*
  %2132 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2133 = bitcast i8* %2132 to i32**
  store i32* %intToPtr21698, i32** %2133, align 8
  %2134 = ptrtoint i32* %intToPtr21698 to i64
  %subtmp1699 = sub nsw i64 %2134, 4
  %IntTOPtr4b1700 = inttoptr i64 %subtmp1699 to i32*
  %2135 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2136 = bitcast i8* %2135 to %CLVALUE**
  %stack_ptr1701 = load %CLVALUE*, %CLVALUE** %2136, align 8
  %num_params1702 = load i32, i32* %num_params1687, align 4
  %2137 = ptrtoint %CLVALUE* %stack_ptr1701 to i64
  %sextY1703 = sext i32 %num_params1702 to i64
  %multtmp1704 = mul nsw i64 %sextY1703, 4
  %subtmp1705 = sub nsw i64 %2137, %multtmp1704
  %IntTOPtr4b1706 = inttoptr i64 %subtmp1705 to %CLVALUE*
  %2138 = ptrtoint %CLVALUE* %IntTOPtr4b1706 to i64
  %subtmp1707 = sub nsw i64 %2138, 4
  %IntTOPtr4b1708 = inttoptr i64 %subtmp1707 to %CLVALUE*
  %derefference_value1709 = load %CLVALUE, %CLVALUE* %IntTOPtr4b1708, align 8
  %2139 = bitcast %CLVALUE* %IntTOPtr4b1708 to i32*
  %2140 = load i32, i32* %2139, align 4
  %block_object = alloca i32
  %2141 = bitcast i32* %block_object to i8*
  store i8* %2141, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store i32 %2140, i32* %block_object, align 4
  %block_object1710 = load i32, i32* %block_object, align 4
  %result_existance1711 = load i32, i32* %result_existance1695, align 4
  %num_params1712 = load i32, i32* %num_params1687, align 4
  %2142 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2143 = bitcast i8* %2142 to %CLVALUE**
  %stack_ptr1713 = load %CLVALUE*, %CLVALUE** %2143, align 8
  %2144 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2145 = bitcast i8* %2144 to %sVMInfo**
  %info1714 = load %sVMInfo*, %sVMInfo** %2145, align 8
  %2146 = call i1 @invoke_block(i32 %block_object1710, i32 %result_existance1711, i32 %num_params1712, %CLVALUE** %2143, %sVMInfo* %info1714)
  %LOGICAL_DIANEAL1715 = icmp eq i1 %2146, false
  br i1 %LOGICAL_DIANEAL1715, label %cond_jump_then1716, label %cond_end1717

cond_else_block1683:                              ; preds = %after_break1720, %cond_else_block1336
  %eqtmpY1723 = icmp eq i32 %op64, 28
  br i1 %eqtmpY1723, label %cond_then_block1721, label %cond_else_block1722

cond_jump_then1716:                               ; preds = %cond_then_block1682
  %2147 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2148 = bitcast i8* %2147 to %sVMInfo**
  %info1718 = load %sVMInfo*, %sVMInfo** %2148, align 8
  %2149 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1718, i32 0, i32 5
  %2150 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %2149, align 8
  %2151 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %2152 = bitcast i8* %2151 to %sCLStackFrame*
  %null_parent_stack_frame1719 = load %sCLStackFrame, %sCLStackFrame* %2152, align 8
  %2153 = call %sCLStackFrame @"pop_back_sCLStackFrame37_src/vm"(%vector__sCLStackFrame* %2150, %sCLStackFrame %null_parent_stack_frame1719)
  %2154 = bitcast [8192 x i8*]* %lvtable to i8*
  %2155 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %2154, i64 65536)
  ret i1 false

cond_end1717:                                     ; preds = %cond_then_block1682
  br label %end_block

after_break1720:                                  ; No predecessors!
  br label %cond_else_block1683

cond_then_block1721:                              ; preds = %cond_else_block1683
  %2156 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2157 = bitcast i8* %2156 to i32**
  %p1724 = load i32*, i32** %2157, align 8
  %derefference_value1725 = load i32, i32* %p1724, align 8
  %field_index = alloca i32
  %2158 = bitcast i32* %field_index to i8*
  store i8* %2158, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %derefference_value1725, i32* %field_index, align 4
  %2159 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2160 = bitcast i8* %2159 to i32**
  %p1726 = load i32*, i32** %2160, align 8
  %2161 = ptrtoint i32* %p1726 to i64
  %addtmp1727 = add nsw i64 %2161, 4
  %intToPtr21728 = inttoptr i64 %addtmp1727 to i32*
  %2162 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2163 = bitcast i8* %2162 to i32**
  store i32* %intToPtr21728, i32** %2163, align 8
  %2164 = ptrtoint i32* %intToPtr21728 to i64
  %subtmp1729 = sub nsw i64 %2164, 4
  %IntTOPtr4b1730 = inttoptr i64 %subtmp1729 to i32*
  %2165 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2166 = bitcast i8* %2165 to %CLVALUE**
  %stack_ptr1731 = load %CLVALUE*, %CLVALUE** %2166, align 8
  %2167 = ptrtoint %CLVALUE* %stack_ptr1731 to i64
  %subtmp1732 = sub nsw i64 %2167, 8
  %IntTOPtr4b1733 = inttoptr i64 %subtmp1732 to %CLVALUE*
  %2168 = bitcast %CLVALUE* %IntTOPtr4b1733 to i32*
  %2169 = load i32, i32* %2168, align 4
  %obj1734 = alloca i32
  %2170 = bitcast i32* %obj1734 to i8*
  store i8* %2170, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %2169, i32* %obj1734, align 4
  %obj1735 = load i32, i32* %obj1734, align 4
  %eqtmpX1736 = icmp eq i32 %obj1735, 0
  br i1 %eqtmpX1736, label %cond_jump_then1737, label %cond_end1738

cond_else_block1722:                              ; preds = %after_break1798, %cond_else_block1683
  %eqtmpY1801 = icmp eq i32 %op64, 27
  br i1 %eqtmpY1801, label %cond_then_block1799, label %cond_else_block1800

cond_jump_then1737:                               ; preds = %cond_then_block1721
  %2171 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2172 = bitcast i8* %2171 to %CLVALUE**
  %stack_ptr1739 = load %CLVALUE*, %CLVALUE** %2172, align 8
  %2173 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2174 = bitcast i8* %2173 to %sVMInfo**
  %info1740 = load %sVMInfo*, %sVMInfo** %2174, align 8
  %2175 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %2176 = bitcast i8* %2175 to i32*
  %field_index1741 = load i32, i32* %2176, align 4
  %2177 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([60 x i8], [60 x i8]* @global_string.115, i32 0, i32 0), i32 %field_index1741)
  call void @vm_err_msg(%CLVALUE** %2172, %sVMInfo* %info1740, i8* %2177)
  %2178 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2179 = bitcast i8* %2178 to %sVMInfo**
  %info1742 = load %sVMInfo*, %sVMInfo** %2179, align 8
  %2180 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1742, i32 0, i32 5
  %2181 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %2180, align 8
  %2182 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %2183 = bitcast i8* %2182 to %sCLStackFrame*
  %null_parent_stack_frame1743 = load %sCLStackFrame, %sCLStackFrame* %2183, align 8
  %2184 = call %sCLStackFrame @"pop_back_sCLStackFrame38_src/vm"(%vector__sCLStackFrame* %2181, %sCLStackFrame %null_parent_stack_frame1743)
  %2185 = bitcast [8192 x i8*]* %lvtable to i8*
  %2186 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %2185, i64 65536)
  %2187 = ptrtoint i8* %2177 to i64
  %2188 = icmp ne i64 %2187, 0
  br i1 %2188, label %cond_then_block1744, label %cond_end1745

cond_end1738:                                     ; preds = %cond_then_block1721
  %2189 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2190 = bitcast i8* %2189 to %CLVALUE**
  %stack_ptr1746 = load %CLVALUE*, %CLVALUE** %2190, align 8
  %2191 = ptrtoint %CLVALUE* %stack_ptr1746 to i64
  %subtmp1747 = sub nsw i64 %2191, 4
  %IntTOPtr4b1748 = inttoptr i64 %subtmp1747 to %CLVALUE*
  %derefference_value1749 = load %CLVALUE, %CLVALUE* %IntTOPtr4b1748, align 8
  %value1750 = alloca %CLVALUE
  %2192 = bitcast %CLVALUE* %value1750 to i8*
  store i8* %2192, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %CLVALUE %derefference_value1749, %CLVALUE* %value1750, align 8
  %value1751 = load %CLVALUE, %CLVALUE* %value1750, align 8
  %2193 = bitcast %CLVALUE* %value1750 to i32*
  %2194 = load i32, i32* %2193, align 4
  %eqtmpX1752 = icmp eq i32 %2194, 0
  br i1 %eqtmpX1752, label %cond_jump_then1753, label %cond_end1754

cond_then_block1744:                              ; preds = %cond_jump_then1737
  br label %cond_end1745

cond_end1745:                                     ; preds = %cond_then_block1744, %cond_jump_then1737
  call void @ncfree(i8* %2177)
  ret i1 false

cond_jump_then1753:                               ; preds = %cond_end1738
  %2195 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2196 = bitcast i8* %2195 to %CLVALUE**
  %stack_ptr1755 = load %CLVALUE*, %CLVALUE** %2196, align 8
  %2197 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2198 = bitcast i8* %2197 to %sVMInfo**
  %info1756 = load %sVMInfo*, %sVMInfo** %2198, align 8
  %2199 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %2200 = bitcast i8* %2199 to i32*
  %field_index1757 = load i32, i32* %2200, align 4
  %2201 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([60 x i8], [60 x i8]* @global_string.116, i32 0, i32 0), i32 %field_index1757)
  call void @vm_err_msg(%CLVALUE** %2196, %sVMInfo* %info1756, i8* %2201)
  %2202 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2203 = bitcast i8* %2202 to %sVMInfo**
  %info1758 = load %sVMInfo*, %sVMInfo** %2203, align 8
  %2204 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1758, i32 0, i32 5
  %2205 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %2204, align 8
  %2206 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %2207 = bitcast i8* %2206 to %sCLStackFrame*
  %null_parent_stack_frame1759 = load %sCLStackFrame, %sCLStackFrame* %2207, align 8
  %2208 = call %sCLStackFrame @"pop_back_sCLStackFrame39_src/vm"(%vector__sCLStackFrame* %2205, %sCLStackFrame %null_parent_stack_frame1759)
  %2209 = bitcast [8192 x i8*]* %lvtable to i8*
  %2210 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %2209, i64 65536)
  %2211 = ptrtoint i8* %2201 to i64
  %2212 = icmp ne i64 %2211, 0
  br i1 %2212, label %cond_then_block1760, label %cond_end1761

cond_end1754:                                     ; preds = %cond_end1738
  %obj1762 = load i32, i32* %obj1734, align 4
  %2213 = call %sCLHeapMem* @get_object_pointer(i32 %obj1762)
  %2214 = bitcast %sCLHeapMem* %2213 to %sCLObject*
  %object_data1763 = alloca %sCLObject*
  %2215 = bitcast %sCLObject** %object_data1763 to i8*
  store i8* %2215, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store %sCLObject* %2214, %sCLObject** %object_data1763, align 8
  %field_index1764 = load i32, i32* %field_index, align 4
  %letmp1765 = icmp slt i32 %field_index1764, 0
  store i1 %letmp1765, i1* %andand_result_var1, align 1
  br i1 %letmp1765, label %cond_jump_end1767, label %cond_jump_then1766

cond_then_block1760:                              ; preds = %cond_jump_then1753
  br label %cond_end1761

cond_end1761:                                     ; preds = %cond_then_block1760, %cond_jump_then1753
  call void @ncfree(i8* %2201)
  ret i1 false

cond_jump_then1766:                               ; preds = %cond_end1754
  %field_index1768 = load i32, i32* %field_index, align 4
  %object_data1769 = load %sCLObject*, %sCLObject** %object_data1763, align 8
  %2216 = getelementptr inbounds %sCLObject, %sCLObject* %object_data1769, i32 0, i32 2
  %2217 = load i32, i32* %2216, align 4
  %getmp1770 = icmp sge i32 %field_index1768, %2217
  %oror1771 = or i1 %letmp1765, %getmp1770
  store i1 %oror1771, i1* %andand_result_var1, align 1
  br label %cond_jump_end1767

cond_jump_end1767:                                ; preds = %cond_jump_then1766, %cond_end1754
  %oror_result_value1772 = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value1772, label %cond_jump_then1773, label %cond_end1774

cond_jump_then1773:                               ; preds = %cond_jump_end1767
  %2218 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2219 = bitcast i8* %2218 to %CLVALUE**
  %stack_ptr1775 = load %CLVALUE*, %CLVALUE** %2219, align 8
  %2220 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2221 = bitcast i8* %2220 to %sVMInfo**
  %info1776 = load %sVMInfo*, %sVMInfo** %2221, align 8
  %2222 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %2223 = bitcast i8* %2222 to i32*
  %field_index1777 = load i32, i32* %2223, align 4
  %2224 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_string.117, i32 0, i32 0), i32 %field_index1777)
  call void @vm_err_msg(%CLVALUE** %2219, %sVMInfo* %info1776, i8* %2224)
  %2225 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2226 = bitcast i8* %2225 to %sVMInfo**
  %info1778 = load %sVMInfo*, %sVMInfo** %2226, align 8
  %2227 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1778, i32 0, i32 5
  %2228 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %2227, align 8
  %2229 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %2230 = bitcast i8* %2229 to %sCLStackFrame*
  %null_parent_stack_frame1779 = load %sCLStackFrame, %sCLStackFrame* %2230, align 8
  %2231 = call %sCLStackFrame @"pop_back_sCLStackFrame40_src/vm"(%vector__sCLStackFrame* %2228, %sCLStackFrame %null_parent_stack_frame1779)
  %2232 = bitcast [8192 x i8*]* %lvtable to i8*
  %2233 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %2232, i64 65536)
  %2234 = ptrtoint i8* %2224 to i64
  %2235 = icmp ne i64 %2234, 0
  br i1 %2235, label %cond_then_block1780, label %cond_end1781

cond_end1774:                                     ; preds = %cond_jump_end1767
  %object_data1782 = load %sCLObject*, %sCLObject** %object_data1763, align 8
  %2236 = getelementptr inbounds %sCLObject, %sCLObject* %object_data1782, i32 0, i32 3
  %2237 = load %anon93, %anon93* %2236, align 8
  %2238 = bitcast %anon93* %2236 to [32 x %CLVALUE]*
  %2239 = bitcast [32 x %CLVALUE]* %2238 to %CLVALUE*
  %field_index1783 = load i32, i32* %field_index, align 4
  %value1784 = load %CLVALUE, %CLVALUE* %value1750, align 8
  %element_addressD1785 = getelementptr %CLVALUE, %CLVALUE* %2239, i32 %field_index1783
  store %CLVALUE %value1784, %CLVALUE* %element_addressD1785, align 8
  %2240 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2241 = bitcast i8* %2240 to %CLVALUE**
  %stack_ptr1786 = load %CLVALUE*, %CLVALUE** %2241, align 8
  %2242 = ptrtoint %CLVALUE* %stack_ptr1786 to i64
  %subtmp1787 = sub nsw i64 %2242, 8
  %IntTOPtr4b1788 = inttoptr i64 %subtmp1787 to %CLVALUE*
  %2243 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2244 = bitcast i8* %2243 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b1788, %CLVALUE** %2244, align 8
  %2245 = ptrtoint %CLVALUE* %IntTOPtr4b1788 to i64
  %addtmp1789 = add nsw i64 %2245, 8
  %intToPtr21790 = inttoptr i64 %addtmp1789 to %CLVALUE*
  %2246 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2247 = bitcast i8* %2246 to %CLVALUE**
  %stack_ptr1791 = load %CLVALUE*, %CLVALUE** %2247, align 8
  %value1792 = load %CLVALUE, %CLVALUE* %value1750, align 8
  store %CLVALUE %value1792, %CLVALUE* %stack_ptr1791, align 8
  %2248 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2249 = bitcast i8* %2248 to %CLVALUE**
  %stack_ptr1793 = load %CLVALUE*, %CLVALUE** %2249, align 8
  %2250 = ptrtoint %CLVALUE* %stack_ptr1793 to i64
  %addtmp1794 = add nsw i64 %2250, 4
  %intToPtr21795 = inttoptr i64 %addtmp1794 to %CLVALUE*
  %2251 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2252 = bitcast i8* %2251 to %CLVALUE**
  store %CLVALUE* %intToPtr21795, %CLVALUE** %2252, align 8
  %2253 = ptrtoint %CLVALUE* %intToPtr21795 to i64
  %subtmp1796 = sub nsw i64 %2253, 4
  %IntTOPtr4b1797 = inttoptr i64 %subtmp1796 to %CLVALUE*
  br label %end_block

cond_then_block1780:                              ; preds = %cond_jump_then1773
  br label %cond_end1781

cond_end1781:                                     ; preds = %cond_then_block1780, %cond_jump_then1773
  call void @ncfree(i8* %2224)
  ret i1 false

after_break1798:                                  ; No predecessors!
  br label %cond_else_block1722

cond_then_block1799:                              ; preds = %cond_else_block1722
  %2254 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2255 = bitcast i8* %2254 to i32**
  %p1802 = load i32*, i32** %2255, align 8
  %derefference_value1803 = load i32, i32* %p1802, align 8
  %field_index1804 = alloca i32
  %2256 = bitcast i32* %field_index1804 to i8*
  store i8* %2256, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %derefference_value1803, i32* %field_index1804, align 4
  %2257 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2258 = bitcast i8* %2257 to i32**
  %p1805 = load i32*, i32** %2258, align 8
  %2259 = ptrtoint i32* %p1805 to i64
  %addtmp1806 = add nsw i64 %2259, 4
  %intToPtr21807 = inttoptr i64 %addtmp1806 to i32*
  %2260 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2261 = bitcast i8* %2260 to i32**
  store i32* %intToPtr21807, i32** %2261, align 8
  %2262 = ptrtoint i32* %intToPtr21807 to i64
  %subtmp1808 = sub nsw i64 %2262, 4
  %IntTOPtr4b1809 = inttoptr i64 %subtmp1808 to i32*
  %2263 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2264 = bitcast i8* %2263 to %CLVALUE**
  %stack_ptr1810 = load %CLVALUE*, %CLVALUE** %2264, align 8
  %2265 = ptrtoint %CLVALUE* %stack_ptr1810 to i64
  %subtmp1811 = sub nsw i64 %2265, 4
  %IntTOPtr4b1812 = inttoptr i64 %subtmp1811 to %CLVALUE*
  %2266 = bitcast %CLVALUE* %IntTOPtr4b1812 to i32*
  %2267 = load i32, i32* %2266, align 4
  %obj1813 = alloca i32
  %2268 = bitcast i32* %obj1813 to i8*
  store i8* %2268, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %2267, i32* %obj1813, align 4
  %obj1814 = load i32, i32* %obj1813, align 4
  %2269 = call %sCLHeapMem* @get_object_pointer(i32 %obj1814)
  %2270 = bitcast %sCLHeapMem* %2269 to %sCLObject*
  %object_data1815 = alloca %sCLObject*
  %2271 = bitcast %sCLObject** %object_data1815 to i8*
  store i8* %2271, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLObject* %2270, %sCLObject** %object_data1815, align 8
  %2272 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2273 = bitcast i8* %2272 to %CLVALUE**
  %stack_ptr1816 = load %CLVALUE*, %CLVALUE** %2273, align 8
  %2274 = ptrtoint %CLVALUE* %stack_ptr1816 to i64
  %subtmp1817 = sub nsw i64 %2274, 4
  %IntTOPtr4b1818 = inttoptr i64 %subtmp1817 to %CLVALUE*
  %2275 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2276 = bitcast i8* %2275 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b1818, %CLVALUE** %2276, align 8
  %2277 = ptrtoint %CLVALUE* %IntTOPtr4b1818 to i64
  %addtmp1819 = add nsw i64 %2277, 4
  %intToPtr21820 = inttoptr i64 %addtmp1819 to %CLVALUE*
  %2278 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2279 = bitcast i8* %2278 to %CLVALUE**
  %stack_ptr1821 = load %CLVALUE*, %CLVALUE** %2279, align 8
  %object_data1822 = load %sCLObject*, %sCLObject** %object_data1815, align 8
  %2280 = getelementptr inbounds %sCLObject, %sCLObject* %object_data1822, i32 0, i32 3
  %2281 = load %anon93, %anon93* %2280, align 8
  %2282 = bitcast %anon93* %2280 to [32 x %CLVALUE]*
  %2283 = bitcast [32 x %CLVALUE]* %2282 to %CLVALUE*
  %field_index1823 = load i32, i32* %field_index1804, align 4
  %element_addressB1824 = getelementptr %CLVALUE, %CLVALUE* %2283, i32 %field_index1823
  %element1825 = load %CLVALUE, %CLVALUE* %element_addressB1824, align 8
  store %CLVALUE %element1825, %CLVALUE* %stack_ptr1821, align 8
  %2284 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2285 = bitcast i8* %2284 to %CLVALUE**
  %stack_ptr1826 = load %CLVALUE*, %CLVALUE** %2285, align 8
  %2286 = ptrtoint %CLVALUE* %stack_ptr1826 to i64
  %addtmp1827 = add nsw i64 %2286, 4
  %intToPtr21828 = inttoptr i64 %addtmp1827 to %CLVALUE*
  %2287 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2288 = bitcast i8* %2287 to %CLVALUE**
  store %CLVALUE* %intToPtr21828, %CLVALUE** %2288, align 8
  %2289 = ptrtoint %CLVALUE* %intToPtr21828 to i64
  %subtmp1829 = sub nsw i64 %2289, 4
  %IntTOPtr4b1830 = inttoptr i64 %subtmp1829 to %CLVALUE*
  br label %end_block

cond_else_block1800:                              ; preds = %after_break1831, %cond_else_block1722
  %eqtmpY1834 = icmp eq i32 %op64, 34
  br i1 %eqtmpY1834, label %cond_then_block1832, label %cond_else_block1833

after_break1831:                                  ; No predecessors!
  br label %cond_else_block1800

cond_then_block1832:                              ; preds = %cond_else_block1800
  %2290 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2291 = bitcast i8* %2290 to i32**
  %p1835 = load i32*, i32** %2291, align 8
  %derefference_value1836 = load i32, i32* %p1835, align 8
  %try_codes_len = alloca i32
  %2292 = bitcast i32* %try_codes_len to i8*
  store i8* %2292, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 %derefference_value1836, i32* %try_codes_len, align 4
  %2293 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2294 = bitcast i8* %2293 to i32**
  %p1837 = load i32*, i32** %2294, align 8
  %2295 = ptrtoint i32* %p1837 to i64
  %addtmp1838 = add nsw i64 %2295, 4
  %intToPtr21839 = inttoptr i64 %addtmp1838 to i32*
  %2296 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2297 = bitcast i8* %2296 to i32**
  store i32* %intToPtr21839, i32** %2297, align 8
  %2298 = ptrtoint i32* %intToPtr21839 to i64
  %subtmp1840 = sub nsw i64 %2298, 4
  %IntTOPtr4b1841 = inttoptr i64 %subtmp1840 to i32*
  %2299 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2300 = bitcast i8* %2299 to i32**
  %p1842 = load i32*, i32** %2300, align 8
  %try_head_codes = alloca i32*
  %2301 = bitcast i32** %try_head_codes to i8*
  store i8* %2301, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32* %p1842, i32** %try_head_codes, align 8
  %2302 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2303 = bitcast i8* %2302 to i32**
  %p1843 = load i32*, i32** %2303, align 8
  %try_codes_len1844 = load i32, i32* %try_codes_len, align 4
  %divtmp1845 = sdiv i32 %try_codes_len1844, 4
  %2304 = ptrtoint i32* %p1843 to i64
  %sextXYZ1846 = sext i32 %divtmp1845 to i64
  %multtmp1847 = mul nsw i64 %sextXYZ1846, 4
  %addtmp1848 = add nsw i64 %2304, %multtmp1847
  %intToPtr21849 = inttoptr i64 %addtmp1848 to i32*
  %2305 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2306 = bitcast i8* %2305 to i32**
  store i32* %intToPtr21849, i32** %2306, align 8
  %try_codes_len1850 = load i32, i32* %try_codes_len, align 4
  %divtmp1851 = sdiv i32 %try_codes_len1850, 4
  %2307 = ptrtoint i32* %intToPtr21849 to i64
  %sextY1852 = sext i32 %divtmp1851 to i64
  %multtmp1853 = mul nsw i64 %sextY1852, 4
  %subtmp1854 = sub nsw i64 %2307, %multtmp1853
  %IntTOPtr4b1855 = inttoptr i64 %subtmp1854 to i32*
  %2308 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2309 = bitcast i8* %2308 to i32**
  %p1856 = load i32*, i32** %2309, align 8
  %derefference_value1857 = load i32, i32* %p1856, align 8
  %try_var_num = alloca i32
  %2310 = bitcast i32* %try_var_num to i8*
  store i8* %2310, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store i32 %derefference_value1857, i32* %try_var_num, align 4
  %2311 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2312 = bitcast i8* %2311 to i32**
  %p1858 = load i32*, i32** %2312, align 8
  %2313 = ptrtoint i32* %p1858 to i64
  %addtmp1859 = add nsw i64 %2313, 4
  %intToPtr21860 = inttoptr i64 %addtmp1859 to i32*
  %2314 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2315 = bitcast i8* %2314 to i32**
  store i32* %intToPtr21860, i32** %2315, align 8
  %2316 = ptrtoint i32* %intToPtr21860 to i64
  %subtmp1861 = sub nsw i64 %2316, 4
  %IntTOPtr4b1862 = inttoptr i64 %subtmp1861 to i32*
  %2317 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2318 = bitcast i8* %2317 to i32**
  %p1863 = load i32*, i32** %2318, align 8
  %derefference_value1864 = load i32, i32* %p1863, align 8
  %catch_codes_len = alloca i32
  %2319 = bitcast i32* %catch_codes_len to i8*
  store i8* %2319, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store i32 %derefference_value1864, i32* %catch_codes_len, align 4
  %2320 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2321 = bitcast i8* %2320 to i32**
  %p1865 = load i32*, i32** %2321, align 8
  %2322 = ptrtoint i32* %p1865 to i64
  %addtmp1866 = add nsw i64 %2322, 4
  %intToPtr21867 = inttoptr i64 %addtmp1866 to i32*
  %2323 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2324 = bitcast i8* %2323 to i32**
  store i32* %intToPtr21867, i32** %2324, align 8
  %2325 = ptrtoint i32* %intToPtr21867 to i64
  %subtmp1868 = sub nsw i64 %2325, 4
  %IntTOPtr4b1869 = inttoptr i64 %subtmp1868 to i32*
  %2326 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2327 = bitcast i8* %2326 to i32**
  %p1870 = load i32*, i32** %2327, align 8
  %catch_head_codes = alloca i32*
  %2328 = bitcast i32** %catch_head_codes to i8*
  store i8* %2328, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32* %p1870, i32** %catch_head_codes, align 8
  %2329 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2330 = bitcast i8* %2329 to i32**
  %p1871 = load i32*, i32** %2330, align 8
  %catch_codes_len1872 = load i32, i32* %catch_codes_len, align 4
  %divtmp1873 = sdiv i32 %catch_codes_len1872, 4
  %2331 = ptrtoint i32* %p1871 to i64
  %sextXYZ1874 = sext i32 %divtmp1873 to i64
  %multtmp1875 = mul nsw i64 %sextXYZ1874, 4
  %addtmp1876 = add nsw i64 %2331, %multtmp1875
  %intToPtr21877 = inttoptr i64 %addtmp1876 to i32*
  %2332 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2333 = bitcast i8* %2332 to i32**
  store i32* %intToPtr21877, i32** %2333, align 8
  %catch_codes_len1878 = load i32, i32* %catch_codes_len, align 4
  %divtmp1879 = sdiv i32 %catch_codes_len1878, 4
  %2334 = ptrtoint i32* %intToPtr21877 to i64
  %sextY1880 = sext i32 %divtmp1879 to i64
  %multtmp1881 = mul nsw i64 %sextY1880, 4
  %subtmp1882 = sub nsw i64 %2334, %multtmp1881
  %IntTOPtr4b1883 = inttoptr i64 %subtmp1882 to i32*
  %2335 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2336 = bitcast i8* %2335 to i32**
  %p1884 = load i32*, i32** %2336, align 8
  %derefference_value1885 = load i32, i32* %p1884, align 8
  %catch_var_num = alloca i32
  %2337 = bitcast i32* %catch_var_num to i8*
  store i8* %2337, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store i32 %derefference_value1885, i32* %catch_var_num, align 4
  %2338 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2339 = bitcast i8* %2338 to i32**
  %p1886 = load i32*, i32** %2339, align 8
  %2340 = ptrtoint i32* %p1886 to i64
  %addtmp1887 = add nsw i64 %2340, 4
  %intToPtr21888 = inttoptr i64 %addtmp1887 to i32*
  %2341 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %2342 = bitcast i8* %2341 to i32**
  store i32* %intToPtr21888, i32** %2342, align 8
  %2343 = ptrtoint i32* %intToPtr21888 to i64
  %subtmp1889 = sub nsw i64 %2343, 4
  %IntTOPtr4b1890 = inttoptr i64 %subtmp1889 to i32*
  %2344 = call i8* @nccalloc(i64 1, i64 16)
  %2345 = bitcast i8* %2344 to %buffer*
  %2346 = call %buffer* @buffer_initialize(%buffer* %2345)
  %try_codes = alloca %buffer*
  %2347 = bitcast %buffer** %try_codes to i8*
  store i8* %2347, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  store %buffer* %2346, %buffer** %try_codes, align 8
  %try_codes1891 = load %buffer*, %buffer** %try_codes, align 8
  %try_head_codes1892 = load i32*, i32** %try_head_codes, align 8
  %2348 = bitcast i32* %try_head_codes1892 to i8*
  %try_codes_len1893 = load i32, i32* %try_codes_len, align 4
  %sext141894 = zext i32 %try_codes_len1893 to i64
  call void @buffer_append(%buffer* %try_codes1891, i8* %2348, i64 %sext141894)
  %num_params1895 = alloca i32
  %2349 = bitcast i32* %num_params1895 to i8*
  store i8* %2349, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  store i32 0, i32* %num_params1895, align 4
  %try_var_num1896 = load i32, i32* %try_var_num, align 4
  %var_num1897 = alloca i32
  %2350 = bitcast i32* %var_num1897 to i8*
  store i8* %2350, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 529), align 8
  store i32 %try_var_num1896, i32* %var_num1897, align 4
  %result_obj = alloca %CLVALUE
  %2351 = bitcast %CLVALUE* %result_obj to i8*
  store i8* %2351, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  %2352 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2353 = bitcast i8* %2352 to %sVMInfo**
  %info1898 = load %sVMInfo*, %sVMInfo** %2353, align 8
  %2354 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1898, i32 0, i32 6
  %2355 = load %CLVALUE, %CLVALUE* %2354, align 8
  %2356 = bitcast %CLVALUE* %2354 to i32*
  store i32 0, i32* %2356, align 4
  %try_codes1899 = load %buffer*, %buffer** %try_codes, align 8
  %2357 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2358 = bitcast i8* %2357 to %CLVALUE**
  %stack_ptr1900 = load %CLVALUE*, %CLVALUE** %2358, align 8
  %num_params1901 = load i32, i32* %num_params1895, align 4
  %var_num1902 = load i32, i32* %var_num1897, align 4
  %result_obj1903 = load %CLVALUE, %CLVALUE* %result_obj, align 8
  %2359 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2360 = bitcast i8* %2359 to %sVMInfo**
  %info1904 = load %sVMInfo*, %sVMInfo** %2360, align 8
  %2361 = call i1 @vm(%buffer* %try_codes1899, %CLVALUE* %stack_ptr1900, i32 %num_params1901, i32 %var_num1902, %CLVALUE* %result_obj, %CLVALUE* null, %sVMInfo* %info1904)
  %result1905 = alloca i1
  %2362 = bitcast i1* %result1905 to i8*
  store i8* %2362, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 531), align 8
  store i1 %2361, i1* %result1905, align 1
  %result1906 = load i1, i1* %result1905, align 1
  %LOGICAL_DIANEAL1907 = icmp eq i1 %result1906, false
  br i1 %LOGICAL_DIANEAL1907, label %cond_jump_then1908, label %cond_end1909

cond_else_block1833:                              ; preds = %after_break1938, %cond_else_block1800
  %eqtmpY1941 = icmp eq i32 %op64, 30
  br i1 %eqtmpY1941, label %cond_then_block1939, label %cond_else_block1940

cond_jump_then1908:                               ; preds = %cond_then_block1832
  %2363 = call i8* @nccalloc(i64 1, i64 16)
  %2364 = bitcast i8* %2363 to %buffer*
  %2365 = call %buffer* @buffer_initialize(%buffer* %2364)
  %catch_codes = alloca %buffer*
  %2366 = bitcast %buffer** %catch_codes to i8*
  store i8* %2366, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 532), align 8
  store %buffer* %2365, %buffer** %catch_codes, align 8
  %catch_codes1910 = load %buffer*, %buffer** %catch_codes, align 8
  %2367 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %2368 = bitcast i8* %2367 to i32**
  %catch_head_codes1911 = load i32*, i32** %2368, align 8
  %2369 = bitcast i32* %catch_head_codes1911 to i8*
  %2370 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %2371 = bitcast i8* %2370 to i32*
  %catch_codes_len1912 = load i32, i32* %2371, align 4
  %sext141913 = zext i32 %catch_codes_len1912 to i64
  call void @buffer_append(%buffer* %catch_codes1910, i8* %2369, i64 %sext141913)
  %num_params1914 = alloca i32
  %2372 = bitcast i32* %num_params1914 to i8*
  store i8* %2372, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 533), align 8
  store i32 1, i32* %num_params1914, align 4
  %2373 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %2374 = bitcast i8* %2373 to i32*
  %catch_var_num1915 = load i32, i32* %2374, align 4
  %var_num1916 = alloca i32
  %2375 = bitcast i32* %var_num1916 to i8*
  store i8* %2375, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 534), align 8
  store i32 %catch_var_num1915, i32* %var_num1916, align 4
  %result_obj1917 = alloca %CLVALUE
  %2376 = bitcast %CLVALUE* %result_obj1917 to i8*
  store i8* %2376, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %catch_codes1918 = load %buffer*, %buffer** %catch_codes, align 8
  %2377 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2378 = bitcast i8* %2377 to %CLVALUE**
  %stack_ptr1919 = load %CLVALUE*, %CLVALUE** %2378, align 8
  %num_params1920 = load i32, i32* %num_params1914, align 4
  %var_num1921 = load i32, i32* %var_num1916, align 4
  %result_obj1922 = load %CLVALUE, %CLVALUE* %result_obj1917, align 8
  %2379 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2380 = bitcast i8* %2379 to %sVMInfo**
  %info1923 = load %sVMInfo*, %sVMInfo** %2380, align 8
  %2381 = call i1 @vm(%buffer* %catch_codes1918, %CLVALUE* %stack_ptr1919, i32 %num_params1920, i32 %var_num1921, %CLVALUE* %result_obj1917, %CLVALUE* null, %sVMInfo* %info1923)
  %LOGICAL_DIANEAL1924 = icmp eq i1 %2381, false
  br i1 %LOGICAL_DIANEAL1924, label %cond_jump_then1925, label %cond_end1926

cond_end1909:                                     ; preds = %cond_end1934, %cond_then_block1832
  %2382 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2383 = bitcast i8* %2382 to %sVMInfo**
  %info1935 = load %sVMInfo*, %sVMInfo** %2383, align 8
  %2384 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1935, i32 0, i32 6
  %2385 = load %CLVALUE, %CLVALUE* %2384, align 8
  %2386 = bitcast %CLVALUE* %2384 to i32*
  store i32 0, i32* %2386, align 4
  %2387 = load %buffer*, %buffer** %try_codes, align 8
  call void @buffer_finalize(%buffer* %2387)
  %2388 = ptrtoint %buffer* %2387 to i64
  %2389 = icmp ne i64 %2388, 0
  br i1 %2389, label %cond_then_block1936, label %cond_end1937

cond_jump_then1925:                               ; preds = %cond_jump_then1908
  %2390 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2391 = bitcast i8* %2390 to %sVMInfo**
  %info1927 = load %sVMInfo*, %sVMInfo** %2391, align 8
  %2392 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1927, i32 0, i32 5
  %2393 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %2392, align 8
  %2394 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %2395 = bitcast i8* %2394 to %sCLStackFrame*
  %null_parent_stack_frame1928 = load %sCLStackFrame, %sCLStackFrame* %2395, align 8
  %2396 = call %sCLStackFrame @"pop_back_sCLStackFrame41_src/vm"(%vector__sCLStackFrame* %2393, %sCLStackFrame %null_parent_stack_frame1928)
  %2397 = bitcast [8192 x i8*]* %lvtable to i8*
  %2398 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %2397, i64 65536)
  %2399 = load %buffer*, %buffer** %catch_codes, align 8
  call void @buffer_finalize(%buffer* %2399)
  %2400 = ptrtoint %buffer* %2399 to i64
  %2401 = icmp ne i64 %2400, 0
  br i1 %2401, label %cond_then_block1929, label %cond_end1930

cond_end1926:                                     ; preds = %cond_jump_then1908
  %2402 = load %buffer*, %buffer** %catch_codes, align 8
  call void @buffer_finalize(%buffer* %2402)
  %2403 = ptrtoint %buffer* %2402 to i64
  %2404 = icmp ne i64 %2403, 0
  br i1 %2404, label %cond_then_block1933, label %cond_end1934

cond_then_block1929:                              ; preds = %cond_jump_then1925
  br label %cond_end1930

cond_end1930:                                     ; preds = %cond_then_block1929, %cond_jump_then1925
  %2405 = bitcast %buffer* %2399 to i8*
  call void @ncfree(i8* %2405)
  %2406 = load %buffer*, %buffer** %try_codes, align 8
  call void @buffer_finalize(%buffer* %2406)
  %2407 = ptrtoint %buffer* %2406 to i64
  %2408 = icmp ne i64 %2407, 0
  br i1 %2408, label %cond_then_block1931, label %cond_end1932

cond_then_block1931:                              ; preds = %cond_end1930
  br label %cond_end1932

cond_end1932:                                     ; preds = %cond_then_block1931, %cond_end1930
  %2409 = bitcast %buffer* %2406 to i8*
  call void @ncfree(i8* %2409)
  ret i1 false

cond_then_block1933:                              ; preds = %cond_end1926
  br label %cond_end1934

cond_end1934:                                     ; preds = %cond_then_block1933, %cond_end1926
  %2410 = bitcast %buffer* %2402 to i8*
  call void @ncfree(i8* %2410)
  br label %cond_end1909

cond_then_block1936:                              ; preds = %cond_end1909
  br label %cond_end1937

cond_end1937:                                     ; preds = %cond_then_block1936, %cond_end1909
  %2411 = bitcast %buffer* %2387 to i8*
  call void @ncfree(i8* %2411)
  br label %end_block

after_break1938:                                  ; No predecessors!
  br label %cond_else_block1833

cond_then_block1939:                              ; preds = %cond_else_block1833
  %2412 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %2413 = bitcast i8* %2412 to %CLVALUE**
  %result1942 = load %CLVALUE*, %CLVALUE** %2413, align 8
  %2414 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2415 = bitcast i8* %2414 to %CLVALUE**
  %stack_ptr1943 = load %CLVALUE*, %CLVALUE** %2415, align 8
  %2416 = ptrtoint %CLVALUE* %stack_ptr1943 to i64
  %subtmp1944 = sub nsw i64 %2416, 4
  %IntTOPtr4b1945 = inttoptr i64 %subtmp1944 to %CLVALUE*
  %derefference_value1946 = load %CLVALUE, %CLVALUE* %IntTOPtr4b1945, align 8
  store %CLVALUE %derefference_value1946, %CLVALUE* %result1942, align 8
  %2417 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2418 = bitcast i8* %2417 to %sVMInfo**
  %info1947 = load %sVMInfo*, %sVMInfo** %2418, align 8
  %2419 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1947, i32 0, i32 5
  %2420 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %2419, align 8
  %2421 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %2422 = bitcast i8* %2421 to %sCLStackFrame*
  %null_parent_stack_frame1948 = load %sCLStackFrame, %sCLStackFrame* %2422, align 8
  %2423 = call %sCLStackFrame @"pop_back_sCLStackFrame42_src/vm"(%vector__sCLStackFrame* %2420, %sCLStackFrame %null_parent_stack_frame1948)
  %2424 = bitcast [8192 x i8*]* %lvtable to i8*
  %2425 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %2424, i64 65536)
  ret i1 true

cond_else_block1940:                              ; preds = %cond_else_block1833
  %eqtmpY1951 = icmp eq i32 %op64, 29
  br i1 %eqtmpY1951, label %cond_then_block1949, label %cond_else_block1950

cond_then_block1949:                              ; preds = %cond_else_block1940
  %2426 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2427 = bitcast i8* %2426 to %sVMInfo**
  %info1952 = load %sVMInfo*, %sVMInfo** %2427, align 8
  %2428 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2429 = bitcast i8* %2428 to %CLVALUE**
  %stack_ptr1953 = load %CLVALUE*, %CLVALUE** %2429, align 8
  %2430 = ptrtoint %CLVALUE* %stack_ptr1953 to i64
  %subtmp1954 = sub nsw i64 %2430, 4
  %IntTOPtr4b1955 = inttoptr i64 %subtmp1954 to %CLVALUE*
  %derefference_value1956 = load %CLVALUE, %CLVALUE* %IntTOPtr4b1955, align 8
  %2431 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1952, i32 0, i32 6
  store %CLVALUE %derefference_value1956, %CLVALUE* %2431, align 8
  %2432 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2433 = bitcast i8* %2432 to %CLVALUE**
  %stack_ptr1957 = load %CLVALUE*, %CLVALUE** %2433, align 8
  %2434 = ptrtoint %CLVALUE* %stack_ptr1957 to i64
  %subtmp1958 = sub nsw i64 %2434, 4
  %IntTOPtr4b1959 = inttoptr i64 %subtmp1958 to %CLVALUE*
  %2435 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %2436 = bitcast i8* %2435 to %CLVALUE**
  store %CLVALUE* %IntTOPtr4b1959, %CLVALUE** %2436, align 8
  %2437 = ptrtoint %CLVALUE* %IntTOPtr4b1959 to i64
  %addtmp1960 = add nsw i64 %2437, 4
  %intToPtr21961 = inttoptr i64 %addtmp1960 to %CLVALUE*
  %2438 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %2439 = bitcast i8* %2438 to %sVMInfo**
  %info1962 = load %sVMInfo*, %sVMInfo** %2439, align 8
  %2440 = getelementptr inbounds %sVMInfo, %sVMInfo* %info1962, i32 0, i32 5
  %2441 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %2440, align 8
  %2442 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %2443 = bitcast i8* %2442 to %sCLStackFrame*
  %null_parent_stack_frame1963 = load %sCLStackFrame, %sCLStackFrame* %2443, align 8
  %2444 = call %sCLStackFrame @"pop_back_sCLStackFrame43_src/vm"(%vector__sCLStackFrame* %2441, %sCLStackFrame %null_parent_stack_frame1963)
  %2445 = bitcast [8192 x i8*]* %lvtable to i8*
  %2446 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %2445, i64 65536)
  ret i1 false
  br label %end_block

cond_else_block1950:                              ; preds = %after_break1964, %cond_else_block1940
  br label %end_block

after_break1964:                                  ; No predecessors!
  br label %cond_else_block1950
}

define i1 @invoke_block(i32 %block_object, i32 %result_existance, i32 %num_params, %CLVALUE** %stack_ptr, %sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %block_object2 = alloca i32
  store i32 %block_object, i32* %block_object2, align 4
  %2 = bitcast i32* %block_object2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %result_existance3 = alloca i32
  store i32 %result_existance, i32* %result_existance3, align 4
  %3 = bitcast i32* %result_existance3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %num_params4 = alloca i32
  store i32 %num_params, i32* %num_params4, align 4
  %4 = bitcast i32* %num_params4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %stack_ptr5 = alloca %CLVALUE**
  store %CLVALUE** %stack_ptr, %CLVALUE*** %stack_ptr5, align 8
  %5 = bitcast %CLVALUE*** %stack_ptr5 to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %info6 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info6, align 8
  %6 = bitcast %sVMInfo** %info6 to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %block_object7 = load i32, i32* %block_object2, align 4
  %7 = call %sCLHeapMem* @get_object_pointer(i32 %block_object7)
  %8 = bitcast %sCLHeapMem* %7 to %sCLBlock*
  %block_data = alloca %sCLBlock*
  %9 = bitcast %sCLBlock** %block_data to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  store %sCLBlock* %8, %sCLBlock** %block_data, align 8
  %block_data8 = load %sCLBlock*, %sCLBlock** %block_data, align 8
  %10 = getelementptr inbounds %sCLBlock, %sCLBlock* %block_data8, i32 0, i32 3
  %11 = load i32*, i32** %10, align 8
  %codes = alloca i32*
  %12 = bitcast i32** %codes to i8*
  store i8* %12, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  store i32* %11, i32** %codes, align 8
  %block_data9 = load %sCLBlock*, %sCLBlock** %block_data, align 8
  %13 = getelementptr inbounds %sCLBlock, %sCLBlock* %block_data9, i32 0, i32 4
  %14 = load i32, i32* %13, align 4
  %codes_len = alloca i32
  %15 = bitcast i32* %codes_len to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  store i32 %14, i32* %codes_len, align 4
  %block_data10 = load %sCLBlock*, %sCLBlock** %block_data, align 8
  %16 = getelementptr inbounds %sCLBlock, %sCLBlock* %block_data10, i32 0, i32 5
  %17 = load i32, i32* %16, align 4
  %var_num = alloca i32
  %18 = bitcast i32* %var_num to i8*
  store i8* %18, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  store i32 %17, i32* %var_num, align 4
  %19 = call i8* @nccalloc(i64 1, i64 16)
  %20 = bitcast i8* %19 to %buffer*
  %21 = call %buffer* @buffer_initialize(%buffer* %20)
  %buffer = alloca %buffer*
  %22 = bitcast %buffer** %buffer to i8*
  store i8* %22, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  store %buffer* %21, %buffer** %buffer, align 8
  %buffer11 = load %buffer*, %buffer** %buffer, align 8
  %codes12 = load i32*, i32** %codes, align 8
  %23 = bitcast i32* %codes12 to i8*
  %codes_len13 = load i32, i32* %codes_len, align 4
  %sext14 = zext i32 %codes_len13 to i64
  call void @buffer_append(%buffer* %buffer11, i8* %23, i64 %sext14)
  %result = alloca %CLVALUE
  %24 = bitcast %CLVALUE* %result to i8*
  store i8* %24, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 516), align 8
  %buffer14 = load %buffer*, %buffer** %buffer, align 8
  %stack_ptr15 = load %CLVALUE**, %CLVALUE*** %stack_ptr5, align 8
  %derefference_value = load %CLVALUE*, %CLVALUE** %stack_ptr15, align 8
  %num_params16 = load i32, i32* %num_params4, align 4
  %var_num17 = load i32, i32* %var_num, align 4
  %result18 = load %CLVALUE, %CLVALUE* %result, align 8
  %info19 = load %sVMInfo*, %sVMInfo** %info6, align 8
  %25 = call i1 @vm(%buffer* %buffer14, %CLVALUE* %derefference_value, i32 %num_params16, i32 %var_num17, %CLVALUE* %result, %CLVALUE* null, %sVMInfo* %info19)
  %LOGICAL_DIANEAL = icmp eq i1 %25, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %26 = bitcast [8192 x i8*]* %lvtable to i8*
  %27 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %26, i64 65536)
  %28 = load %buffer*, %buffer** %buffer, align 8
  call void @buffer_finalize(%buffer* %28)
  %29 = ptrtoint %buffer* %28 to i64
  %30 = icmp ne i64 %29, 0
  br i1 %30, label %cond_then_block, label %cond_end20

cond_end:                                         ; preds = %entry
  %stack_ptr21 = load %CLVALUE**, %CLVALUE*** %stack_ptr5, align 8
  %derefference_value22 = load %CLVALUE*, %CLVALUE** %stack_ptr21, align 8
  %num_params23 = load i32, i32* %num_params4, align 4
  %addtmp = add nsw i32 %num_params23, 1
  %31 = ptrtoint %CLVALUE* %derefference_value22 to i64
  %sext5 = sext i32 %addtmp to i64
  %multtmp = mul nsw i64 %sext5, 4
  %subtmp = sub nsw i64 %31, %multtmp
  %IntToPtr8 = inttoptr i64 %subtmp to %CLVALUE*
  store %CLVALUE* %IntToPtr8, %CLVALUE** %stack_ptr21, align 8
  %result_existance24 = load i32, i32* %result_existance3, align 4
  %32 = icmp ne i32 %result_existance24, 0
  br i1 %32, label %cond_jump_then25, label %cond_else_block

cond_then_block:                                  ; preds = %cond_jump_then
  br label %cond_end20

cond_end20:                                       ; preds = %cond_then_block, %cond_jump_then
  %33 = bitcast %buffer* %28 to i8*
  call void @ncfree(i8* %33)
  ret i1 false

cond_jump_then25:                                 ; preds = %cond_end
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %35 = bitcast i8* %34 to %CLVALUE***
  %stack_ptr27 = load %CLVALUE**, %CLVALUE*** %35, align 8
  %derefference_value28 = load %CLVALUE*, %CLVALUE** %stack_ptr27, align 8
  %36 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 516), align 8
  %37 = bitcast i8* %36 to %CLVALUE*
  %result29 = load %CLVALUE, %CLVALUE* %37, align 8
  %38 = bitcast %CLVALUE* %37 to i32*
  %39 = load i32, i32* %38, align 4
  %40 = bitcast %CLVALUE* %derefference_value28 to i32*
  store i32 %39, i32* %40, align 4
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %42 = bitcast i8* %41 to %CLVALUE***
  %stack_ptr30 = load %CLVALUE**, %CLVALUE*** %42, align 8
  %derefference_value31 = load %CLVALUE*, %CLVALUE** %stack_ptr30, align 8
  %43 = ptrtoint %CLVALUE* %derefference_value31 to i64
  %adddtmp = add nsw i64 %43, 4
  %IntTOPtr5c = inttoptr i64 %adddtmp to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c, %CLVALUE** %stack_ptr30, align 8
  br label %cond_end26

cond_else_block:                                  ; preds = %cond_end
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %45 = bitcast i8* %44 to %CLVALUE***
  %stack_ptr32 = load %CLVALUE**, %CLVALUE*** %45, align 8
  %derefference_value33 = load %CLVALUE*, %CLVALUE** %stack_ptr32, align 8
  %46 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %47 = bitcast i8* %46 to %sVMInfo**
  %info34 = load %sVMInfo*, %sVMInfo** %47, align 8
  %48 = call i32 @create_null_object(%sVMInfo* %info34)
  %49 = bitcast %CLVALUE* %derefference_value33 to i32*
  store i32 %48, i32* %49, align 4
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %51 = bitcast i8* %50 to %CLVALUE***
  %stack_ptr35 = load %CLVALUE**, %CLVALUE*** %51, align 8
  %derefference_value36 = load %CLVALUE*, %CLVALUE** %stack_ptr35, align 8
  %52 = ptrtoint %CLVALUE* %derefference_value36 to i64
  %adddtmp37 = add nsw i64 %52, 4
  %IntTOPtr5c38 = inttoptr i64 %adddtmp37 to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c38, %CLVALUE** %stack_ptr35, align 8
  br label %cond_end26

cond_end26:                                       ; preds = %cond_else_block, %cond_jump_then25
  %53 = bitcast [8192 x i8*]* %lvtable to i8*
  %54 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %53, i64 65536)
  %55 = load %buffer*, %buffer** %buffer, align 8
  call void @buffer_finalize(%buffer* %55)
  %56 = ptrtoint %buffer* %55 to i64
  %57 = icmp ne i64 %56, 0
  br i1 %57, label %cond_then_block39, label %cond_end40

cond_then_block39:                                ; preds = %cond_end26
  br label %cond_end40

cond_end40:                                       ; preds = %cond_then_block39, %cond_end26
  %58 = bitcast %buffer* %55 to i8*
  call void @ncfree(i8* %58)
  ret i1 true
}

declare i32 @alloc_heap_mem(i32, %sCLType*, i32, %sVMInfo*)

declare void @heap_init(i32, i32)

declare void @heap_final()

declare %sCLHeapMem* @get_object_pointer(i32)

declare i32 @create_object(%sCLType*, %sVMInfo*)

declare i32 @create_type_object(%sCLType*, %sVMInfo*)

declare i32 @create_regex_object(%regex_struct*, %sVMInfo*)

declare i32 @create_list_object(%list__int*, %sVMInfo*)

declare i32 @create_class_object(i8*, %sVMInfo*)

declare i32 @create_buffer_object(%sVMInfo*)

declare i32 @create_null_object(%sVMInfo*)

declare i32 @create_int_object(i32, %sVMInfo*)

declare i32 @create_string_object(i8*, %sVMInfo*)

declare i32 @create_map_object(%sVMInfo*)

declare i8* @get_string_mem(i32)

declare %regex_struct* @get_regex_value(i32)

declare %list__int* @get_list_value(i32)

declare %map__charp_int* @get_map_value(i32)

declare %list__int* @get_map_keys(i32)

declare i32 @get_int_value(i32)

declare %buffer* @get_buffer_value(i32)

declare void @set_int_value(i32, i32)

declare void @set_string_value(i32, i8*)

declare void @set_regex_value(i32, %regex_struct*)

declare void @set_list_value(i32, %list__int*)

declare i32 @create_string_data_object(i8*, %sVMInfo*)

declare i32 @create_bool_object(i32, %sVMInfo*)

declare i32 @create_block_object(i8*, i32*, i32, i32, %sVMInfo*)

declare i32 @create_command_object(i8*, i32, i8*, i32, i32, i1, %sVMInfo*)

declare i32 @create_system_object(%sVMInfo*)

declare i32 @create_job_object(i8*, %termios*, i32, %sVMInfo*)

declare i32 @create_method_object(%sCLMethod*, %sVMInfo*)

declare i32 @create_field_object(%sCLField*, %sVMInfo*)

declare void @mark_object(i32, i8*, %sVMInfo*)

declare i1 @free_object(i32)

declare void @mark_belong_objects(i32, i8*, %sVMInfo*)

declare void @alignment(i32*)

declare i1 @parse_block(%sCLNodeBlock**, i32, %sCLParam*, %sParserInfo*)

declare i1 @compile_block(%sCLNodeBlock*, %sCompileInfo*)

declare i1 @load_class(i8*, %sParserInfo*)

declare i1 @save_class(%sCLClass*)

declare i1 @compiler(i8*)

declare i1 @compiler2(%buffer*)

declare void @set_signal()

declare void @set_signal_optc()

declare void @set_signal_shell()

declare void @sig_int_for_shell(i32)

declare void @shell(%vector__sCLTypep*)

declare void @clover3_init(i1)

declare void @clover3_final()

declare i1 @shell_eval_str(i8*, i8*, i1, %vector__sCLTypep*, %CLVALUE*, %vector__sCLStackFrame*, %vector__sVarTablep*, %vector__sVarp*, %CLVALUE*)

declare i1 @forground_job(i32)

declare void @shell_run_command(i8*, %vector__sCLTypep*, %CLVALUE*)

declare void @shell_commandline(i8*, i32, %vector__sCLTypep*, %CLVALUE*)

declare void @shell_commandline_without_to_string(i8*, i32, %vector__sCLTypep*, %CLVALUE*)

declare void @interpreter_init()

declare void @interpreter_final()

declare void @__assert_fail(i8*, i8*, i32, i8*)

declare void @__assert_perror_fail(i32, i8*, i32, i8*)

declare void @__assert(i8*, i8*, i32)

declare void (i32)* @__sysv_signal(i32, void (i32)*)

declare void (i32)* @signal(i32, void (i32)*)

declare i32 @kill(i32, i32)

declare i32 @killpg(i32, i32)

declare i32 @raise(i32)

declare void (i32)* @ssignal(i32, void (i32)*)

declare i32 @gsignal(i32)

declare void @psignal(i32, i8*)

declare void @psiginfo(%anon94*, i8*)

declare i32 @sigblock(i32)

declare i32 @sigsetmask(i32)

declare i32 @siggetmask()

declare i32 @sigemptyset(%anon6*)

declare i32 @sigfillset(%anon6*)

declare i32 @sigaddset(%anon6*, i32)

declare i32 @sigdelset(%anon6*, i32)

declare i32 @sigismember(%anon6*, i32)

declare i32 @sigprocmask(i32, %anon6*, %anon6*)

declare i32 @sigsuspend(%anon6*)

declare i32 @sigaction(i32, %sigaction*, %sigaction*)

declare i32 @sigpending(%anon6*)

declare i32 @sigwait(%anon6*, i32*)

declare i32 @sigwaitinfo(%anon6*, %anon94*)

declare i32 @sigtimedwait(%anon6*, %anon94*, %timespec*)

declare i32 @sigqueue(i32, i32, %sigval)

declare i32 @sigreturn(%sigcontext*)

declare i32 @siginterrupt(i32, i32)

declare i32 @sigaltstack(%anon111*, %anon111*)

declare i32 @sigstack(%sigstack*, %sigstack*)

declare i32 @pthread_sigmask(i32, %anon6*, %anon6*)

declare i32 @pthread_kill(i64, i32)

declare i32 @__libc_current_sigrtmin()

declare i32 @__libc_current_sigrtmax()

declare i32 @wait(i32*)

declare i32 @waitpid(i32, i32*, i32)

declare i32 @waitid(i32, i32, %anon94*, i32)

declare i32 @wait3(i32*, i32, %rusage*)

declare i32 @wait4(i32, i32*, i32, %rusage*)

define %map__charp_int* @"initialize_charp_int0_src/vm"(%map__charp_int* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %self3 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %3 = call i8* @nccalloc(i64 128, i64 8)
  %4 = bitcast i8* %3 to i8**
  %5 = getelementptr inbounds %map__charp_int, %map__charp_int* %self3, i32 0, i32 0
  store i8** %4, i8*** %5, align 8
  %self4 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %6 = call i8* @nccalloc(i64 128, i64 4)
  %7 = bitcast i8* %6 to i32*
  %8 = getelementptr inbounds %map__charp_int, %map__charp_int* %self4, i32 0, i32 2
  store i32* %7, i32** %8, align 8
  %self5 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %9 = call i8* @nccalloc(i64 128, i64 1)
  %10 = bitcast i8* %9 to i1*
  %11 = getelementptr inbounds %map__charp_int, %map__charp_int* %self5, i32 0, i32 1
  store i1* %10, i1** %11, align 8
  %i = alloca i32
  %12 = bitcast i32* %i to i8*
  store i8* %12, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_then_block, %entry
  %i6 = load i32, i32* %i, align 4
  %letmp = icmp slt i32 %i6, 128
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %14 = bitcast i8* %13 to %map__charp_int**
  %self7 = load %map__charp_int*, %map__charp_int** %14, align 8
  %15 = getelementptr inbounds %map__charp_int, %map__charp_int* %self7, i32 0, i32 1
  %16 = load i1*, i1** %15, align 8
  %i8 = load i32, i32* %i, align 4
  %element_addressD = getelementptr i1, i1* %16, i32 %i8
  store i1 false, i1* %element_addressD, align 1
  %i9 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i9, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %self10 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %17 = getelementptr inbounds %map__charp_int, %map__charp_int* %self10, i32 0, i32 3
  store i32 128, i32* %17, align 4
  %self11 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %18 = getelementptr inbounds %map__charp_int, %map__charp_int* %self11, i32 0, i32 4
  store i32 0, i32* %18, align 4
  %self12 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %19 = bitcast [8192 x i8*]* %lvtable to i8*
  %20 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %19, i64 65536)
  ret %map__charp_int* %self12
}

define void @"finalize_charp_int1_src/vm"(%map__charp_int* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %self3 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %eqtmpX = icmp eq %map__charp_int* %self3, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %3 = bitcast [8192 x i8*]* %lvtable to i8*
  %4 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %3, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  %i = alloca i32
  %5 = bitcast i32* %i to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end9, %cond_end
  %i4 = load i32, i32* %i, align 4
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %7 = bitcast i8* %6 to %map__charp_int**
  %self5 = load %map__charp_int*, %map__charp_int** %7, align 8
  %8 = getelementptr inbounds %map__charp_int, %map__charp_int* %self5, i32 0, i32 3
  %9 = load i32, i32* %8, align 4
  %letmp = icmp slt i32 %i4, %9
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %11 = bitcast i8* %10 to %map__charp_int**
  %self6 = load %map__charp_int*, %map__charp_int** %11, align 8
  %12 = getelementptr inbounds %map__charp_int, %map__charp_int* %self6, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %i7 = load i32, i32* %i, align 4
  %element_addressB = getelementptr i1, i1* %13, i32 %i7
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then8, label %cond_end9

cond_end_block:                                   ; preds = %loop_top_block
  %self17 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %14 = getelementptr inbounds %map__charp_int, %map__charp_int* %self17, i32 0, i32 2
  %15 = load i32*, i32** %14, align 8
  %16 = load i32*, i32** %14, align 8
  %17 = ptrtoint i32* %16 to i64
  %18 = icmp ne i64 %17, 0
  br i1 %18, label %cond_then_block18, label %cond_end19

cond_jump_then8:                                  ; preds = %cond_then_block
  br i1 false, label %cond_jump_then10, label %cond_end11

cond_end9:                                        ; preds = %cond_end11, %cond_then_block
  %i16 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i16, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_jump_then10:                                 ; preds = %cond_jump_then8
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %20 = bitcast i8* %19 to %map__charp_int**
  %self12 = load %map__charp_int*, %map__charp_int** %20, align 8
  %21 = getelementptr inbounds %map__charp_int, %map__charp_int* %self12, i32 0, i32 2
  %22 = load i32*, i32** %21, align 8
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %24 = bitcast i8* %23 to i32*
  %i13 = load i32, i32* %24, align 4
  %element_addressB14 = getelementptr i32, i32* %22, i32 %i13
  %element15 = load i32, i32* %element_addressB14, align 4
  %25 = load i32, i32* %element_addressB14, align 8
  br label %cond_end11

cond_end11:                                       ; preds = %cond_jump_then10, %cond_jump_then8
  br label %cond_end9

cond_then_block18:                                ; preds = %cond_end_block
  br label %cond_end19

cond_end19:                                       ; preds = %cond_then_block18, %cond_end_block
  %26 = bitcast i32* %16 to i8*
  call void @ncfree(i8* %26)
  %i20 = alloca i32
  %27 = bitcast i32* %i20 to i8*
  store i8* %27, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  store i32 0, i32* %i20, align 4
  br label %loop_top_block21

loop_top_block21:                                 ; preds = %cond_end32, %cond_end19
  %i22 = load i32, i32* %i20, align 4
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %29 = bitcast i8* %28 to %map__charp_int**
  %self23 = load %map__charp_int*, %map__charp_int** %29, align 8
  %30 = getelementptr inbounds %map__charp_int, %map__charp_int* %self23, i32 0, i32 3
  %31 = load i32, i32* %30, align 4
  %letmp24 = icmp slt i32 %i22, %31
  br i1 %letmp24, label %cond_then_block25, label %cond_end_block26

cond_then_block25:                                ; preds = %loop_top_block21
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %33 = bitcast i8* %32 to %map__charp_int**
  %self27 = load %map__charp_int*, %map__charp_int** %33, align 8
  %34 = getelementptr inbounds %map__charp_int, %map__charp_int* %self27, i32 0, i32 1
  %35 = load i1*, i1** %34, align 8
  %i28 = load i32, i32* %i20, align 4
  %element_addressB29 = getelementptr i1, i1* %35, i32 %i28
  %element30 = load i1, i1* %element_addressB29, align 1
  br i1 %element30, label %cond_jump_then31, label %cond_end32

cond_end_block26:                                 ; preds = %loop_top_block21
  %self44 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %36 = getelementptr inbounds %map__charp_int, %map__charp_int* %self44, i32 0, i32 0
  %37 = load i8**, i8*** %36, align 8
  %38 = load i8**, i8*** %36, align 8
  %39 = bitcast i8** %38 to i8*
  call void @ncfree(i8* %39)
  %self45 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %40 = getelementptr inbounds %map__charp_int, %map__charp_int* %self45, i32 0, i32 1
  %41 = load i1*, i1** %40, align 8
  %42 = load i1*, i1** %40, align 8
  %43 = ptrtoint i1* %42 to i64
  %44 = icmp ne i64 %43, 0
  br i1 %44, label %cond_then_block46, label %cond_end47

cond_jump_then31:                                 ; preds = %cond_then_block25
  br i1 true, label %cond_jump_then33, label %cond_end34

cond_end32:                                       ; preds = %cond_end34, %cond_then_block25
  %i41 = load i32, i32* %i20, align 4
  %addtmp42 = add nsw i32 %i41, 1
  store i32 %addtmp42, i32* %i20, align 4
  %subttmp43 = sub nsw i32 %addtmp42, 1
  br label %loop_top_block21

cond_jump_then33:                                 ; preds = %cond_jump_then31
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %46 = bitcast i8* %45 to %map__charp_int**
  %self35 = load %map__charp_int*, %map__charp_int** %46, align 8
  %47 = getelementptr inbounds %map__charp_int, %map__charp_int* %self35, i32 0, i32 0
  %48 = load i8**, i8*** %47, align 8
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %50 = bitcast i8* %49 to i32*
  %i36 = load i32, i32* %50, align 4
  %element_addressB37 = getelementptr i8*, i8** %48, i32 %i36
  %element38 = load i8*, i8** %element_addressB37, align 8
  %51 = load i8*, i8** %element_addressB37, align 8
  %52 = ptrtoint i8* %51 to i64
  %53 = icmp ne i64 %52, 0
  br i1 %53, label %cond_then_block39, label %cond_end40

cond_end34:                                       ; preds = %cond_end40, %cond_jump_then31
  br label %cond_end32

cond_then_block39:                                ; preds = %cond_jump_then33
  br label %cond_end40

cond_end40:                                       ; preds = %cond_then_block39, %cond_jump_then33
  call void @ncfree(i8* %51)
  br label %cond_end34

cond_then_block46:                                ; preds = %cond_end_block26
  br label %cond_end47

cond_end47:                                       ; preds = %cond_then_block46, %cond_end_block26
  %54 = bitcast i1* %42 to i8*
  call void @ncfree(i8* %54)
  %55 = bitcast [8192 x i8*]* %lvtable to i8*
  %56 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %55, i64 65536)
  ret void
}

define void @show_contents(%sCLObject* %object_data, i32 %obj) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %object_data2 = alloca %sCLObject*
  store %sCLObject* %object_data, %sCLObject** %object_data2, align 8
  %2 = bitcast %sCLObject** %object_data2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %obj3 = alloca i32
  store i32 %obj, i32* %obj3, align 4
  %3 = bitcast i32* %obj3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %object_data4 = load %sCLObject*, %sCLObject** %object_data2, align 8
  %4 = getelementptr inbounds %sCLObject, %sCLObject* %object_data4, i32 0, i32 0
  %5 = load %sCLType*, %sCLType** %4, align 8
  %6 = getelementptr inbounds %sCLType, %sCLType* %5, i32 0, i32 1
  %7 = load %sCLClass*, %sCLClass** %6, align 8
  %gClasses = load %map__charp_sCLClassp*, %map__charp_sCLClassp** @gClasses, align 8
  %8 = call %sCLClass* @"at_charp_sCLClassp2_src/vm"(%map__charp_sCLClassp* %gClasses, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_string.1, i32 0, i32 0), %sCLClass* null)
  %eqtmpX = icmp eq %sCLClass* %7, %8
  br i1 %eqtmpX, label %cond_jump_then, label %"cond_jump_elif0\0A"

cond_jump_then:                                   ; preds = %entry
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %10 = bitcast i8* %9 to %sCLObject**
  %object_data5 = load %sCLObject*, %sCLObject** %10, align 8
  %11 = bitcast %sCLObject* %object_data5 to %sCLInt*
  %object_data26 = alloca %sCLInt*
  %12 = bitcast %sCLInt** %object_data26 to i8*
  store i8* %12, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  store %sCLInt* %11, %sCLInt** %object_data26, align 8
  %object_data27 = load %sCLInt*, %sCLInt** %object_data26, align 8
  %13 = getelementptr inbounds %sCLInt, %sCLInt* %object_data27, i32 0, i32 3
  %14 = load i32, i32* %13, align 4
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_string.2, i32 0, i32 0), i32 %14)
  br label %cond_end

"cond_jump_elif0\0A":                             ; preds = %entry
  %object_data8 = load %sCLObject*, %sCLObject** %object_data2, align 8
  %16 = getelementptr inbounds %sCLObject, %sCLObject* %object_data8, i32 0, i32 0
  %17 = load %sCLType*, %sCLType** %16, align 8
  %18 = getelementptr inbounds %sCLType, %sCLType* %17, i32 0, i32 1
  %19 = load %sCLClass*, %sCLClass** %18, align 8
  %gClasses9 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** @gClasses, align 8
  %20 = call %sCLClass* @"at_charp_sCLClassp3_src/vm"(%map__charp_sCLClassp* %gClasses9, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.3, i32 0, i32 0), %sCLClass* null)
  %eqtmpX10 = icmp eq %sCLClass* %19, %20
  br i1 %eqtmpX10, label %"cond_jump_elif_then0\0A", label %"cond_jump_elif1\0A"

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %22 = bitcast i8* %21 to %sCLObject**
  %object_data11 = load %sCLObject*, %sCLObject** %22, align 8
  %23 = bitcast %sCLObject* %object_data11 to %sCLInt*
  %object_data212 = alloca %sCLInt*
  %24 = bitcast %sCLInt** %object_data212 to i8*
  store i8* %24, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  store %sCLInt* %23, %sCLInt** %object_data212, align 8
  %object_data213 = load %sCLInt*, %sCLInt** %object_data212, align 8
  %25 = getelementptr inbounds %sCLInt, %sCLInt* %object_data213, i32 0, i32 3
  %26 = load i32, i32* %25, align 4
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_string.4, i32 0, i32 0), i32 %26)
  br label %cond_end

"cond_jump_elif1\0A":                             ; preds = %"cond_jump_elif0\0A"
  %object_data14 = load %sCLObject*, %sCLObject** %object_data2, align 8
  %28 = getelementptr inbounds %sCLObject, %sCLObject* %object_data14, i32 0, i32 0
  %29 = load %sCLType*, %sCLType** %28, align 8
  %30 = getelementptr inbounds %sCLType, %sCLType* %29, i32 0, i32 1
  %31 = load %sCLClass*, %sCLClass** %30, align 8
  %gClasses15 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** @gClasses, align 8
  %32 = call %sCLClass* @"at_charp_sCLClassp4_src/vm"(%map__charp_sCLClassp* %gClasses15, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_string.5, i32 0, i32 0), %sCLClass* null)
  %eqtmpX16 = icmp eq %sCLClass* %31, %32
  br i1 %eqtmpX16, label %"cond_jump_elif_then1\0A", label %cond_end

"cond_jump_elif_then1\0A":                        ; preds = %"cond_jump_elif1\0A"
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %34 = bitcast i8* %33 to i32*
  %obj17 = load i32, i32* %34, align 4
  %35 = call i8* @get_string_mem(i32 %obj17)
  %value = alloca i8*
  %36 = bitcast i8** %value to i8*
  store i8* %36, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  store i8* %35, i8** %value, align 8
  %value18 = load i8*, i8** %value, align 8
  %37 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_string.6, i32 0, i32 0), i8* %value18)
  br label %cond_end

cond_end:                                         ; preds = %"cond_jump_elif_then1\0A", %"cond_jump_elif1\0A", %"cond_jump_elif_then0\0A", %cond_jump_then
  %38 = bitcast [8192 x i8*]* %lvtable to i8*
  %39 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %38, i64 65536)
  ret void
}

define %sCLClass* @"at_charp_sCLClassp2_src/vm"(%map__charp_sCLClassp* %self, i8* %key, %sCLClass* %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_sCLClassp*
  store %map__charp_sCLClassp* %self, %map__charp_sCLClassp** %self2, align 8
  %2 = bitcast %map__charp_sCLClassp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %default_value4 = alloca %sCLClass*
  store %sCLClass* %default_value, %sCLClass** %default_value4, align 8
  %4 = bitcast %sCLClass** %default_value4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %key5 = load i8*, i8** %key3, align 8
  %5 = call i32 @string_get_hash_key(i8* %key5)
  %self6 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %self2, align 8
  %6 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self6, i32 0, i32 3
  %7 = load i32, i32* %6, align 4
  %remtmp = srem i32 %5, %7
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash7 = load i32, i32* %hash, align 4
  %it = alloca i32
  %9 = bitcast i32* %it to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  store i32 %hash7, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %11 = bitcast i8* %10 to %map__charp_sCLClassp**
  %self8 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %11, align 8
  %12 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self8, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %15 = bitcast i8* %14 to i32*
  %it9 = load i32, i32* %15, align 4
  %element_addressB = getelementptr i1, i1* %13, i32 %it9
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then, label %cond_else_block

cond_end_block:                                   ; preds = %loop_top_block
  %default_value30 = load %sCLClass*, %sCLClass** %default_value4, align 8
  %16 = bitcast [8192 x i8*]* %lvtable to i8*
  %17 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %16, i64 65536)
  ret %sCLClass* %default_value30

cond_jump_then:                                   ; preds = %cond_then_block
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %19 = bitcast i8* %18 to %map__charp_sCLClassp**
  %self10 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %19, align 8
  %20 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self10, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %23 = bitcast i8* %22 to i32*
  %it11 = load i32, i32* %23, align 4
  %element_addressB12 = getelementptr i8*, i8** %21, i32 %it11
  %element13 = load i8*, i8** %element_addressB12, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %25 = bitcast i8* %24 to i8**
  %key14 = load i8*, i8** %25, align 8
  %26 = call i1 @string_equals(i8* %element13, i8* %key14)
  br i1 %26, label %cond_jump_then15, label %cond_end16

cond_else_block:                                  ; preds = %cond_then_block
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %28 = bitcast i8* %27 to %sCLClass**
  %default_value29 = load %sCLClass*, %sCLClass** %28, align 8
  %29 = bitcast [8192 x i8*]* %lvtable to i8*
  %30 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %29, i64 65536)
  ret %sCLClass* %default_value29

cond_end:                                         ; preds = %cond_end25
  br label %loop_top_block

cond_jump_then15:                                 ; preds = %cond_jump_then
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %32 = bitcast i8* %31 to %map__charp_sCLClassp**
  %self17 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %32, align 8
  %33 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self17, i32 0, i32 2
  %34 = load %sCLClass**, %sCLClass*** %33, align 8
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %36 = bitcast i8* %35 to i32*
  %it18 = load i32, i32* %36, align 4
  %element_addressB19 = getelementptr %sCLClass*, %sCLClass** %34, i32 %it18
  %element20 = load %sCLClass*, %sCLClass** %element_addressB19, align 8
  %37 = bitcast [8192 x i8*]* %lvtable to i8*
  %38 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %37, i64 65536)
  ret %sCLClass* %element20

cond_end16:                                       ; preds = %cond_jump_then
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %40 = bitcast i8* %39 to i32*
  %it21 = load i32, i32* %40, align 4
  %addtmp = add nsw i32 %it21, 1
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %42 = bitcast i8* %41 to i32*
  store i32 %addtmp, i32* %42, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %44 = bitcast i8* %43 to i32*
  %it22 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %46 = bitcast i8* %45 to %map__charp_sCLClassp**
  %self23 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %46, align 8
  %47 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self23, i32 0, i32 3
  %48 = load i32, i32* %47, align 4
  %getmp = icmp sge i32 %it22, %48
  br i1 %getmp, label %cond_jump_then24, label %"cond_jump_elif0\0A"

cond_jump_then24:                                 ; preds = %cond_end16
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %50 = bitcast i8* %49 to i32*
  store i32 0, i32* %50, align 4
  br label %cond_end25

"cond_jump_elif0\0A":                             ; preds = %cond_end16
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %52 = bitcast i8* %51 to i32*
  %it26 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  %54 = bitcast i8* %53 to i32*
  %hash27 = load i32, i32* %54, align 4
  %eqtmpX = icmp eq i32 %it26, %hash27
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end25

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %56 = bitcast i8* %55 to %sCLClass**
  %default_value28 = load %sCLClass*, %sCLClass** %56, align 8
  %57 = bitcast [8192 x i8*]* %lvtable to i8*
  %58 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %57, i64 65536)
  ret %sCLClass* %default_value28

cond_end25:                                       ; preds = %"cond_jump_elif0\0A", %cond_jump_then24
  br label %cond_end
}

define %sCLClass* @"at_charp_sCLClassp3_src/vm"(%map__charp_sCLClassp* %self, i8* %key, %sCLClass* %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_sCLClassp*
  store %map__charp_sCLClassp* %self, %map__charp_sCLClassp** %self2, align 8
  %2 = bitcast %map__charp_sCLClassp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %default_value4 = alloca %sCLClass*
  store %sCLClass* %default_value, %sCLClass** %default_value4, align 8
  %4 = bitcast %sCLClass** %default_value4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %key5 = load i8*, i8** %key3, align 8
  %5 = call i32 @string_get_hash_key(i8* %key5)
  %self6 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %self2, align 8
  %6 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self6, i32 0, i32 3
  %7 = load i32, i32* %6, align 4
  %remtmp = srem i32 %5, %7
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash7 = load i32, i32* %hash, align 4
  %it = alloca i32
  %9 = bitcast i32* %it to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  store i32 %hash7, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %11 = bitcast i8* %10 to %map__charp_sCLClassp**
  %self8 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %11, align 8
  %12 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self8, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %15 = bitcast i8* %14 to i32*
  %it9 = load i32, i32* %15, align 4
  %element_addressB = getelementptr i1, i1* %13, i32 %it9
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then, label %cond_else_block

cond_end_block:                                   ; preds = %loop_top_block
  %default_value30 = load %sCLClass*, %sCLClass** %default_value4, align 8
  %16 = bitcast [8192 x i8*]* %lvtable to i8*
  %17 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %16, i64 65536)
  ret %sCLClass* %default_value30

cond_jump_then:                                   ; preds = %cond_then_block
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %19 = bitcast i8* %18 to %map__charp_sCLClassp**
  %self10 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %19, align 8
  %20 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self10, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %23 = bitcast i8* %22 to i32*
  %it11 = load i32, i32* %23, align 4
  %element_addressB12 = getelementptr i8*, i8** %21, i32 %it11
  %element13 = load i8*, i8** %element_addressB12, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %25 = bitcast i8* %24 to i8**
  %key14 = load i8*, i8** %25, align 8
  %26 = call i1 @string_equals(i8* %element13, i8* %key14)
  br i1 %26, label %cond_jump_then15, label %cond_end16

cond_else_block:                                  ; preds = %cond_then_block
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %28 = bitcast i8* %27 to %sCLClass**
  %default_value29 = load %sCLClass*, %sCLClass** %28, align 8
  %29 = bitcast [8192 x i8*]* %lvtable to i8*
  %30 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %29, i64 65536)
  ret %sCLClass* %default_value29

cond_end:                                         ; preds = %cond_end25
  br label %loop_top_block

cond_jump_then15:                                 ; preds = %cond_jump_then
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %32 = bitcast i8* %31 to %map__charp_sCLClassp**
  %self17 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %32, align 8
  %33 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self17, i32 0, i32 2
  %34 = load %sCLClass**, %sCLClass*** %33, align 8
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %36 = bitcast i8* %35 to i32*
  %it18 = load i32, i32* %36, align 4
  %element_addressB19 = getelementptr %sCLClass*, %sCLClass** %34, i32 %it18
  %element20 = load %sCLClass*, %sCLClass** %element_addressB19, align 8
  %37 = bitcast [8192 x i8*]* %lvtable to i8*
  %38 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %37, i64 65536)
  ret %sCLClass* %element20

cond_end16:                                       ; preds = %cond_jump_then
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %40 = bitcast i8* %39 to i32*
  %it21 = load i32, i32* %40, align 4
  %addtmp = add nsw i32 %it21, 1
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %42 = bitcast i8* %41 to i32*
  store i32 %addtmp, i32* %42, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %44 = bitcast i8* %43 to i32*
  %it22 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %46 = bitcast i8* %45 to %map__charp_sCLClassp**
  %self23 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %46, align 8
  %47 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self23, i32 0, i32 3
  %48 = load i32, i32* %47, align 4
  %getmp = icmp sge i32 %it22, %48
  br i1 %getmp, label %cond_jump_then24, label %"cond_jump_elif0\0A"

cond_jump_then24:                                 ; preds = %cond_end16
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %50 = bitcast i8* %49 to i32*
  store i32 0, i32* %50, align 4
  br label %cond_end25

"cond_jump_elif0\0A":                             ; preds = %cond_end16
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %52 = bitcast i8* %51 to i32*
  %it26 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  %54 = bitcast i8* %53 to i32*
  %hash27 = load i32, i32* %54, align 4
  %eqtmpX = icmp eq i32 %it26, %hash27
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end25

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %56 = bitcast i8* %55 to %sCLClass**
  %default_value28 = load %sCLClass*, %sCLClass** %56, align 8
  %57 = bitcast [8192 x i8*]* %lvtable to i8*
  %58 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %57, i64 65536)
  ret %sCLClass* %default_value28

cond_end25:                                       ; preds = %"cond_jump_elif0\0A", %cond_jump_then24
  br label %cond_end
}

define %sCLClass* @"at_charp_sCLClassp4_src/vm"(%map__charp_sCLClassp* %self, i8* %key, %sCLClass* %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_sCLClassp*
  store %map__charp_sCLClassp* %self, %map__charp_sCLClassp** %self2, align 8
  %2 = bitcast %map__charp_sCLClassp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %default_value4 = alloca %sCLClass*
  store %sCLClass* %default_value, %sCLClass** %default_value4, align 8
  %4 = bitcast %sCLClass** %default_value4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %key5 = load i8*, i8** %key3, align 8
  %5 = call i32 @string_get_hash_key(i8* %key5)
  %self6 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %self2, align 8
  %6 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self6, i32 0, i32 3
  %7 = load i32, i32* %6, align 4
  %remtmp = srem i32 %5, %7
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash7 = load i32, i32* %hash, align 4
  %it = alloca i32
  %9 = bitcast i32* %it to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  store i32 %hash7, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %11 = bitcast i8* %10 to %map__charp_sCLClassp**
  %self8 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %11, align 8
  %12 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self8, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %15 = bitcast i8* %14 to i32*
  %it9 = load i32, i32* %15, align 4
  %element_addressB = getelementptr i1, i1* %13, i32 %it9
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then, label %cond_else_block

cond_end_block:                                   ; preds = %loop_top_block
  %default_value30 = load %sCLClass*, %sCLClass** %default_value4, align 8
  %16 = bitcast [8192 x i8*]* %lvtable to i8*
  %17 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %16, i64 65536)
  ret %sCLClass* %default_value30

cond_jump_then:                                   ; preds = %cond_then_block
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %19 = bitcast i8* %18 to %map__charp_sCLClassp**
  %self10 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %19, align 8
  %20 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self10, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %23 = bitcast i8* %22 to i32*
  %it11 = load i32, i32* %23, align 4
  %element_addressB12 = getelementptr i8*, i8** %21, i32 %it11
  %element13 = load i8*, i8** %element_addressB12, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %25 = bitcast i8* %24 to i8**
  %key14 = load i8*, i8** %25, align 8
  %26 = call i1 @string_equals(i8* %element13, i8* %key14)
  br i1 %26, label %cond_jump_then15, label %cond_end16

cond_else_block:                                  ; preds = %cond_then_block
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %28 = bitcast i8* %27 to %sCLClass**
  %default_value29 = load %sCLClass*, %sCLClass** %28, align 8
  %29 = bitcast [8192 x i8*]* %lvtable to i8*
  %30 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %29, i64 65536)
  ret %sCLClass* %default_value29

cond_end:                                         ; preds = %cond_end25
  br label %loop_top_block

cond_jump_then15:                                 ; preds = %cond_jump_then
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %32 = bitcast i8* %31 to %map__charp_sCLClassp**
  %self17 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %32, align 8
  %33 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self17, i32 0, i32 2
  %34 = load %sCLClass**, %sCLClass*** %33, align 8
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %36 = bitcast i8* %35 to i32*
  %it18 = load i32, i32* %36, align 4
  %element_addressB19 = getelementptr %sCLClass*, %sCLClass** %34, i32 %it18
  %element20 = load %sCLClass*, %sCLClass** %element_addressB19, align 8
  %37 = bitcast [8192 x i8*]* %lvtable to i8*
  %38 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %37, i64 65536)
  ret %sCLClass* %element20

cond_end16:                                       ; preds = %cond_jump_then
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %40 = bitcast i8* %39 to i32*
  %it21 = load i32, i32* %40, align 4
  %addtmp = add nsw i32 %it21, 1
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %42 = bitcast i8* %41 to i32*
  store i32 %addtmp, i32* %42, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %44 = bitcast i8* %43 to i32*
  %it22 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %46 = bitcast i8* %45 to %map__charp_sCLClassp**
  %self23 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %46, align 8
  %47 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self23, i32 0, i32 3
  %48 = load i32, i32* %47, align 4
  %getmp = icmp sge i32 %it22, %48
  br i1 %getmp, label %cond_jump_then24, label %"cond_jump_elif0\0A"

cond_jump_then24:                                 ; preds = %cond_end16
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %50 = bitcast i8* %49 to i32*
  store i32 0, i32* %50, align 4
  br label %cond_end25

"cond_jump_elif0\0A":                             ; preds = %cond_end16
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %52 = bitcast i8* %51 to i32*
  %it26 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  %54 = bitcast i8* %53 to i32*
  %hash27 = load i32, i32* %54, align 4
  %eqtmpX = icmp eq i32 %it26, %hash27
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end25

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %56 = bitcast i8* %55 to %sCLClass**
  %default_value28 = load %sCLClass*, %sCLClass** %56, align 8
  %57 = bitcast [8192 x i8*]* %lvtable to i8*
  %58 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %57, i64 65536)
  ret %sCLClass* %default_value28

cond_end25:                                       ; preds = %"cond_jump_elif0\0A", %cond_jump_then24
  br label %cond_end
}

define void @print_stack(%CLVALUE* %stack, %CLVALUE* %stack_ptr, i32 %var_num) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %stack2 = alloca %CLVALUE*
  store %CLVALUE* %stack, %CLVALUE** %stack2, align 8
  %2 = bitcast %CLVALUE** %stack2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %stack_ptr3 = alloca %CLVALUE*
  store %CLVALUE* %stack_ptr, %CLVALUE** %stack_ptr3, align 8
  %3 = bitcast %CLVALUE** %stack_ptr3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %var_num4 = alloca i32
  store i32 %var_num, i32* %var_num4, align 4
  %4 = bitcast i32* %var_num4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %stack5 = load %CLVALUE*, %CLVALUE** %stack2, align 8
  %p = alloca %CLVALUE*
  %5 = bitcast %CLVALUE** %p to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  store %CLVALUE* %stack5, %CLVALUE** %p, align 8
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %p6 = load %CLVALUE*, %CLVALUE** %p, align 8
  %stack_ptr7 = load %CLVALUE*, %CLVALUE** %stack_ptr3, align 8
  %letmp = icmp slt %CLVALUE* %p6, %stack_ptr7
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %7 = bitcast i8* %6 to %CLVALUE**
  %p8 = load %CLVALUE*, %CLVALUE** %7, align 8
  %8 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %9 = bitcast i8* %8 to %CLVALUE**
  %stack9 = load %CLVALUE*, %CLVALUE** %9, align 8
  %10 = ptrtoint %CLVALUE* %p8 to i64
  %11 = ptrtoint %CLVALUE* %stack9 to i64
  %subtmp = sub nsw i64 %10, %11
  %divtmp = sdiv i64 %subtmp, 4
  %12 = trunc i64 %divtmp to i32
  %index = alloca i32
  %13 = bitcast i32* %index to i8*
  store i8* %13, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  store i32 %12, i32* %index, align 4
  %index10 = load i32, i32* %index, align 4
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %15 = bitcast i8* %14 to i32*
  %var_num11 = load i32, i32* %15, align 4
  %letmp12 = icmp slt i32 %index10, %var_num11
  br i1 %letmp12, label %cond_jump_then, label %cond_else_block

cond_end_block:                                   ; preds = %loop_top_block
  %16 = bitcast [8192 x i8*]* %lvtable to i8*
  %17 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %16, i64 65536)
  ret void

cond_jump_then:                                   ; preds = %cond_then_block
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %19 = bitcast i8* %18 to i32*
  %index13 = load i32, i32* %19, align 4
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %21 = bitcast i8* %20 to %CLVALUE**
  %p14 = load %CLVALUE*, %CLVALUE** %21, align 8
  %22 = bitcast %CLVALUE* %p14 to i32*
  %23 = load i32, i32* %22, align 4
  %24 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_string.7, i32 0, i32 0), i32 %index13, i32 %23)
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %26 = bitcast i8* %25 to %CLVALUE**
  %p15 = load %CLVALUE*, %CLVALUE** %26, align 8
  %27 = bitcast %CLVALUE* %p15 to i32*
  %28 = load i32, i32* %27, align 4
  %29 = icmp ne i32 %28, 0
  br i1 %29, label %cond_jump_then16, label %cond_else_block17

cond_else_block:                                  ; preds = %cond_then_block
  %stderr23 = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %31 = bitcast i8* %30 to i32*
  %index24 = load i32, i32* %31, align 4
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %33 = bitcast i8* %32 to %CLVALUE**
  %p25 = load %CLVALUE*, %CLVALUE** %33, align 8
  %34 = bitcast %CLVALUE* %p25 to i32*
  %35 = load i32, i32* %34, align 4
  %36 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr23, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_string.9, i32 0, i32 0), i32 %index24, i32 %35)
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %38 = bitcast i8* %37 to %CLVALUE**
  %p26 = load %CLVALUE*, %CLVALUE** %38, align 8
  %39 = bitcast %CLVALUE* %p26 to i32*
  %40 = load i32, i32* %39, align 4
  %41 = icmp ne i32 %40, 0
  br i1 %41, label %cond_jump_then27, label %cond_else_block28

cond_end:                                         ; preds = %cond_end29, %cond_end18
  %42 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %43 = bitcast i8* %42 to %CLVALUE**
  %p35 = load %CLVALUE*, %CLVALUE** %43, align 8
  %44 = ptrtoint %CLVALUE* %p35 to i64
  %addtmp = add nsw i64 %44, 4
  %intToPtr2 = inttoptr i64 %addtmp to %CLVALUE*
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %46 = bitcast i8* %45 to %CLVALUE**
  store %CLVALUE* %intToPtr2, %CLVALUE** %46, align 8
  %47 = ptrtoint %CLVALUE* %intToPtr2 to i64
  %subtmp36 = sub nsw i64 %47, 4
  %IntTOPtr4b = inttoptr i64 %subtmp36 to %CLVALUE*
  br label %loop_top_block

cond_jump_then16:                                 ; preds = %cond_jump_then
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %49 = bitcast i8* %48 to %CLVALUE**
  %p19 = load %CLVALUE*, %CLVALUE** %49, align 8
  %50 = bitcast %CLVALUE* %p19 to i32*
  %51 = load i32, i32* %50, align 4
  %52 = call %sCLHeapMem* @get_object_pointer(i32 %51)
  %53 = bitcast %sCLHeapMem* %52 to %sCLObject*
  %object_data = alloca %sCLObject*
  %54 = bitcast %sCLObject** %object_data to i8*
  store i8* %54, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  store %sCLObject* %53, %sCLObject** %object_data, align 8
  %object_data20 = load %sCLObject*, %sCLObject** %object_data, align 8
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %56 = bitcast i8* %55 to %CLVALUE**
  %p21 = load %CLVALUE*, %CLVALUE** %56, align 8
  %57 = bitcast %CLVALUE* %p21 to i32*
  %58 = load i32, i32* %57, align 4
  call void @show_contents(%sCLObject* %object_data20, i32 %58)
  %object_data22 = load %sCLObject*, %sCLObject** %object_data, align 8
  %59 = getelementptr inbounds %sCLObject, %sCLObject* %object_data22, i32 0, i32 0
  %60 = load %sCLType*, %sCLType** %59, align 8
  call void @show_type(%sCLType* %60)
  br label %cond_end18

cond_else_block17:                                ; preds = %cond_jump_then
  %61 = call i32 @puts(i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.8, i32 0, i32 0))
  br label %cond_end18

cond_end18:                                       ; preds = %cond_else_block17, %cond_jump_then16
  br label %cond_end

cond_jump_then27:                                 ; preds = %cond_else_block
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %63 = bitcast i8* %62 to %CLVALUE**
  %p30 = load %CLVALUE*, %CLVALUE** %63, align 8
  %64 = bitcast %CLVALUE* %p30 to i32*
  %65 = load i32, i32* %64, align 4
  %66 = call %sCLHeapMem* @get_object_pointer(i32 %65)
  %67 = bitcast %sCLHeapMem* %66 to %sCLObject*
  %object_data31 = alloca %sCLObject*
  %68 = bitcast %sCLObject** %object_data31 to i8*
  store i8* %68, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  store %sCLObject* %67, %sCLObject** %object_data31, align 8
  %object_data32 = load %sCLObject*, %sCLObject** %object_data31, align 8
  %69 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %70 = bitcast i8* %69 to %CLVALUE**
  %p33 = load %CLVALUE*, %CLVALUE** %70, align 8
  %71 = bitcast %CLVALUE* %p33 to i32*
  %72 = load i32, i32* %71, align 4
  call void @show_contents(%sCLObject* %object_data32, i32 %72)
  %object_data34 = load %sCLObject*, %sCLObject** %object_data31, align 8
  %73 = getelementptr inbounds %sCLObject, %sCLObject* %object_data34, i32 0, i32 0
  %74 = load %sCLType*, %sCLType** %73, align 8
  call void @show_type(%sCLType* %74)
  br label %cond_end29

cond_else_block28:                                ; preds = %cond_else_block
  %75 = call i32 @puts(i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.10, i32 0, i32 0))
  br label %cond_end29

cond_end29:                                       ; preds = %cond_else_block28, %cond_jump_then27
  br label %cond_end
}

define void @print_method(%sCLClass* %klass, %sCLMethod* %method, i32 %num_params, i32 %var_num) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %klass2 = alloca %sCLClass*
  store %sCLClass* %klass, %sCLClass** %klass2, align 8
  %2 = bitcast %sCLClass** %klass2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %method3 = alloca %sCLMethod*
  store %sCLMethod* %method, %sCLMethod** %method3, align 8
  %3 = bitcast %sCLMethod** %method3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %num_params4 = alloca i32
  store i32 %num_params, i32* %num_params4, align 4
  %4 = bitcast i32* %num_params4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %var_num5 = alloca i32
  store i32 %var_num, i32* %var_num5, align 4
  %5 = bitcast i32* %var_num5 to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %klass6 = load %sCLClass*, %sCLClass** %klass2, align 8
  %6 = getelementptr inbounds %sCLClass, %sCLClass* %klass6, i32 0, i32 0
  %7 = load i8*, i8** %6, align 8
  %method7 = load %sCLMethod*, %sCLMethod** %method3, align 8
  %8 = getelementptr inbounds %sCLMethod, %sCLMethod* %method7, i32 0, i32 0
  %9 = load i8*, i8** %8, align 8
  %num_params8 = load i32, i32* %num_params4, align 4
  %var_num9 = load i32, i32* %var_num5, align 4
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([46 x i8], [46 x i8]* @global_string.11, i32 0, i32 0), i8* %7, i8* %9, i32 %num_params8, i32 %var_num9)
  %11 = bitcast [8192 x i8*]* %lvtable to i8*
  %12 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %11, i64 65536)
  ret void
}

define void @print_method_end(%sCLClass* %klass, %sCLMethod* %method, %CLVALUE %result) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %klass2 = alloca %sCLClass*
  store %sCLClass* %klass, %sCLClass** %klass2, align 8
  %2 = bitcast %sCLClass** %klass2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %method3 = alloca %sCLMethod*
  store %sCLMethod* %method, %sCLMethod** %method3, align 8
  %3 = bitcast %sCLMethod** %method3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %result4 = alloca %CLVALUE
  store %CLVALUE %result, %CLVALUE* %result4, align 8
  %4 = bitcast %CLVALUE* %result4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %klass5 = load %sCLClass*, %sCLClass** %klass2, align 8
  %5 = getelementptr inbounds %sCLClass, %sCLClass* %klass5, i32 0, i32 0
  %6 = load i8*, i8** %5, align 8
  %method6 = load %sCLMethod*, %sCLMethod** %method3, align 8
  %7 = getelementptr inbounds %sCLMethod, %sCLMethod* %method6, i32 0, i32 0
  %8 = load i8*, i8** %7, align 8
  %result7 = load %CLVALUE, %CLVALUE* %result4, align 8
  %9 = bitcast %CLVALUE* %result4 to i32*
  %10 = load i32, i32* %9, align 4
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_string.12, i32 0, i32 0), i8* %6, i8* %8, i32 %10)
  %12 = bitcast [8192 x i8*]* %lvtable to i8*
  %13 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %12, i64 65536)
  ret void
}

define void @print_block(i32 %num_params, i32 %var_num) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %num_params2 = alloca i32
  store i32 %num_params, i32* %num_params2, align 4
  %2 = bitcast i32* %num_params2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %var_num3 = alloca i32
  store i32 %var_num, i32* %var_num3, align 4
  %3 = bitcast i32* %var_num3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %num_params4 = load i32, i32* %num_params2, align 4
  %var_num5 = load i32, i32* %var_num3, align 4
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_string.13, i32 0, i32 0), i32 %num_params4, i32 %var_num5)
  %5 = bitcast [8192 x i8*]* %lvtable to i8*
  %6 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %5, i64 65536)
  ret void
}

define void @print_block_end(%CLVALUE %result) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %result2 = alloca %CLVALUE
  store %CLVALUE %result, %CLVALUE* %result2, align 8
  %2 = bitcast %CLVALUE* %result2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %result3 = load %CLVALUE, %CLVALUE* %result2, align 8
  %3 = bitcast %CLVALUE* %result2 to i32*
  %4 = load i32, i32* %3, align 4
  %5 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_string.14, i32 0, i32 0), i32 %4)
  %6 = bitcast [8192 x i8*]* %lvtable to i8*
  %7 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %6, i64 65536)
  ret void
}

define void @print_op(i32 %op, %_IO_FILE* %f) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %op2 = alloca i32
  store i32 %op, i32* %op2, align 4
  %2 = bitcast i32* %op2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %f3 = alloca %_IO_FILE*
  store %_IO_FILE* %f, %_IO_FILE** %f3, align 8
  %3 = bitcast %_IO_FILE** %f3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %op4 = load i32, i32* %op2, align 4
  %eqtmpY = icmp eq i32 %op4, 38
  br i1 %eqtmpY, label %cond_then_block, label %cond_else_block

end_block:                                        ; preds = %cond_else_block202, %cond_then_block201, %cond_then_block196, %cond_then_block191, %cond_then_block186, %cond_then_block181, %cond_then_block176, %cond_then_block171, %cond_then_block166, %cond_then_block161, %cond_then_block156, %cond_then_block151, %cond_then_block146, %cond_then_block141, %cond_then_block136, %cond_then_block131, %cond_then_block126, %cond_then_block121, %cond_then_block116, %cond_then_block111, %cond_then_block106, %cond_then_block101, %cond_then_block96, %cond_then_block91, %cond_then_block86, %cond_then_block81, %cond_then_block76, %cond_then_block71, %cond_then_block66, %cond_then_block61, %cond_then_block56, %cond_then_block51, %cond_then_block46, %cond_then_block41, %cond_then_block36, %cond_then_block31, %cond_then_block26, %cond_then_block21, %cond_then_block16, %cond_then_block11, %cond_then_block6, %cond_then_block
  %4 = bitcast [8192 x i8*]* %lvtable to i8*
  %5 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %4, i64 65536)
  ret void

cond_then_block:                                  ; preds = %entry
  %f5 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %6 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f5, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_string.15, i32 0, i32 0))
  br label %end_block

cond_else_block:                                  ; preds = %after_break, %entry
  %eqtmpY8 = icmp eq i32 %op4, 39
  br i1 %eqtmpY8, label %cond_then_block6, label %cond_else_block7

after_break:                                      ; No predecessors!
  br label %cond_else_block

cond_then_block6:                                 ; preds = %cond_else_block
  %f9 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %7 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f9, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_string.16, i32 0, i32 0))
  br label %end_block

cond_else_block7:                                 ; preds = %after_break10, %cond_else_block
  %eqtmpY13 = icmp eq i32 %op4, 37
  br i1 %eqtmpY13, label %cond_then_block11, label %cond_else_block12

after_break10:                                    ; No predecessors!
  br label %cond_else_block7

cond_then_block11:                                ; preds = %cond_else_block7
  %f14 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %8 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f14, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_string.17, i32 0, i32 0))
  br label %end_block

cond_else_block12:                                ; preds = %after_break15, %cond_else_block7
  %eqtmpY18 = icmp eq i32 %op4, 36
  br i1 %eqtmpY18, label %cond_then_block16, label %cond_else_block17

after_break15:                                    ; No predecessors!
  br label %cond_else_block12

cond_then_block16:                                ; preds = %cond_else_block12
  %f19 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %9 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f19, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_string.18, i32 0, i32 0))
  br label %end_block

cond_else_block17:                                ; preds = %after_break20, %cond_else_block12
  %eqtmpY23 = icmp eq i32 %op4, 0
  br i1 %eqtmpY23, label %cond_then_block21, label %cond_else_block22

after_break20:                                    ; No predecessors!
  br label %cond_else_block17

cond_then_block21:                                ; preds = %cond_else_block17
  %f24 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %10 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f24, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_string.19, i32 0, i32 0))
  br label %end_block

cond_else_block22:                                ; preds = %after_break25, %cond_else_block17
  %eqtmpY28 = icmp eq i32 %op4, 29
  br i1 %eqtmpY28, label %cond_then_block26, label %cond_else_block27

after_break25:                                    ; No predecessors!
  br label %cond_else_block22

cond_then_block26:                                ; preds = %cond_else_block22
  %f29 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %11 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f29, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_string.20, i32 0, i32 0))
  br label %end_block

cond_else_block27:                                ; preds = %after_break30, %cond_else_block22
  %eqtmpY33 = icmp eq i32 %op4, 42
  br i1 %eqtmpY33, label %cond_then_block31, label %cond_else_block32

after_break30:                                    ; No predecessors!
  br label %cond_else_block27

cond_then_block31:                                ; preds = %cond_else_block27
  %f34 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %12 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f34, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_string.21, i32 0, i32 0))
  br label %end_block

cond_else_block32:                                ; preds = %after_break35, %cond_else_block27
  %eqtmpY38 = icmp eq i32 %op4, 30
  br i1 %eqtmpY38, label %cond_then_block36, label %cond_else_block37

after_break35:                                    ; No predecessors!
  br label %cond_else_block32

cond_then_block36:                                ; preds = %cond_else_block32
  %f39 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %13 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f39, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_string.22, i32 0, i32 0))
  br label %end_block

cond_else_block37:                                ; preds = %after_break40, %cond_else_block32
  %eqtmpY43 = icmp eq i32 %op4, 1
  br i1 %eqtmpY43, label %cond_then_block41, label %cond_else_block42

after_break40:                                    ; No predecessors!
  br label %cond_else_block37

cond_then_block41:                                ; preds = %cond_else_block37
  %f44 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %14 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f44, i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_string.23, i32 0, i32 0))
  br label %end_block

cond_else_block42:                                ; preds = %after_break45, %cond_else_block37
  %eqtmpY48 = icmp eq i32 %op4, 2
  br i1 %eqtmpY48, label %cond_then_block46, label %cond_else_block47

after_break45:                                    ; No predecessors!
  br label %cond_else_block42

cond_then_block46:                                ; preds = %cond_else_block42
  %f49 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %15 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f49, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_string.24, i32 0, i32 0))
  br label %end_block

cond_else_block47:                                ; preds = %after_break50, %cond_else_block42
  %eqtmpY53 = icmp eq i32 %op4, 43
  br i1 %eqtmpY53, label %cond_then_block51, label %cond_else_block52

after_break50:                                    ; No predecessors!
  br label %cond_else_block47

cond_then_block51:                                ; preds = %cond_else_block47
  %f54 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %16 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f54, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_string.25, i32 0, i32 0))
  br label %end_block

cond_else_block52:                                ; preds = %after_break55, %cond_else_block47
  %eqtmpY58 = icmp eq i32 %op4, 42
  br i1 %eqtmpY58, label %cond_then_block56, label %cond_else_block57

after_break55:                                    ; No predecessors!
  br label %cond_else_block52

cond_then_block56:                                ; preds = %cond_else_block52
  %f59 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %17 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f59, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_string.26, i32 0, i32 0))
  br label %end_block

cond_else_block57:                                ; preds = %after_break60, %cond_else_block52
  %eqtmpY63 = icmp eq i32 %op4, 3
  br i1 %eqtmpY63, label %cond_then_block61, label %cond_else_block62

after_break60:                                    ; No predecessors!
  br label %cond_else_block57

cond_then_block61:                                ; preds = %cond_else_block57
  %f64 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %18 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f64, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_string.27, i32 0, i32 0))
  br label %end_block

cond_else_block62:                                ; preds = %after_break65, %cond_else_block57
  %eqtmpY68 = icmp eq i32 %op4, 4
  br i1 %eqtmpY68, label %cond_then_block66, label %cond_else_block67

after_break65:                                    ; No predecessors!
  br label %cond_else_block62

cond_then_block66:                                ; preds = %cond_else_block62
  %f69 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %19 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f69, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_string.28, i32 0, i32 0))
  br label %end_block

cond_else_block67:                                ; preds = %after_break70, %cond_else_block62
  %eqtmpY73 = icmp eq i32 %op4, 5
  br i1 %eqtmpY73, label %cond_then_block71, label %cond_else_block72

after_break70:                                    ; No predecessors!
  br label %cond_else_block67

cond_then_block71:                                ; preds = %cond_else_block67
  %f74 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %20 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f74, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_string.29, i32 0, i32 0))
  br label %end_block

cond_else_block72:                                ; preds = %after_break75, %cond_else_block67
  %eqtmpY78 = icmp eq i32 %op4, 6
  br i1 %eqtmpY78, label %cond_then_block76, label %cond_else_block77

after_break75:                                    ; No predecessors!
  br label %cond_else_block72

cond_then_block76:                                ; preds = %cond_else_block72
  %f79 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %21 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f79, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_string.30, i32 0, i32 0))
  br label %end_block

cond_else_block77:                                ; preds = %after_break80, %cond_else_block72
  %eqtmpY83 = icmp eq i32 %op4, 8
  br i1 %eqtmpY83, label %cond_then_block81, label %cond_else_block82

after_break80:                                    ; No predecessors!
  br label %cond_else_block77

cond_then_block81:                                ; preds = %cond_else_block77
  %f84 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %22 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f84, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_string.31, i32 0, i32 0))
  br label %end_block

cond_else_block82:                                ; preds = %after_break85, %cond_else_block77
  %eqtmpY88 = icmp eq i32 %op4, 11
  br i1 %eqtmpY88, label %cond_then_block86, label %cond_else_block87

after_break85:                                    ; No predecessors!
  br label %cond_else_block82

cond_then_block86:                                ; preds = %cond_else_block82
  %f89 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %23 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f89, i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_string.32, i32 0, i32 0))
  br label %end_block

cond_else_block87:                                ; preds = %after_break90, %cond_else_block82
  %eqtmpY93 = icmp eq i32 %op4, 34
  br i1 %eqtmpY93, label %cond_then_block91, label %cond_else_block92

after_break90:                                    ; No predecessors!
  br label %cond_else_block87

cond_then_block91:                                ; preds = %cond_else_block87
  %f94 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %24 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f94, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_string.33, i32 0, i32 0))
  br label %end_block

cond_else_block92:                                ; preds = %after_break95, %cond_else_block87
  %eqtmpY98 = icmp eq i32 %op4, 12
  br i1 %eqtmpY98, label %cond_then_block96, label %cond_else_block97

after_break95:                                    ; No predecessors!
  br label %cond_else_block92

cond_then_block96:                                ; preds = %cond_else_block92
  %f99 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %25 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f99, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_string.34, i32 0, i32 0))
  br label %end_block

cond_else_block97:                                ; preds = %after_break100, %cond_else_block92
  %eqtmpY103 = icmp eq i32 %op4, 13
  br i1 %eqtmpY103, label %cond_then_block101, label %cond_else_block102

after_break100:                                   ; No predecessors!
  br label %cond_else_block97

cond_then_block101:                               ; preds = %cond_else_block97
  %f104 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %26 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f104, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_string.35, i32 0, i32 0))
  br label %end_block

cond_else_block102:                               ; preds = %after_break105, %cond_else_block97
  %eqtmpY108 = icmp eq i32 %op4, 14
  br i1 %eqtmpY108, label %cond_then_block106, label %cond_else_block107

after_break105:                                   ; No predecessors!
  br label %cond_else_block102

cond_then_block106:                               ; preds = %cond_else_block102
  %f109 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %27 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f109, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_string.36, i32 0, i32 0))
  br label %end_block

cond_else_block107:                               ; preds = %after_break110, %cond_else_block102
  %eqtmpY113 = icmp eq i32 %op4, 16
  br i1 %eqtmpY113, label %cond_then_block111, label %cond_else_block112

after_break110:                                   ; No predecessors!
  br label %cond_else_block107

cond_then_block111:                               ; preds = %cond_else_block107
  %f114 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %28 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f114, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_string.37, i32 0, i32 0))
  br label %end_block

cond_else_block112:                               ; preds = %after_break115, %cond_else_block107
  %eqtmpY118 = icmp eq i32 %op4, 15
  br i1 %eqtmpY118, label %cond_then_block116, label %cond_else_block117

after_break115:                                   ; No predecessors!
  br label %cond_else_block112

cond_then_block116:                               ; preds = %cond_else_block112
  %f119 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %29 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f119, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_string.38, i32 0, i32 0))
  br label %end_block

cond_else_block117:                               ; preds = %after_break120, %cond_else_block112
  %eqtmpY123 = icmp eq i32 %op4, 17
  br i1 %eqtmpY123, label %cond_then_block121, label %cond_else_block122

after_break120:                                   ; No predecessors!
  br label %cond_else_block117

cond_then_block121:                               ; preds = %cond_else_block117
  %f124 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %30 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f124, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_string.39, i32 0, i32 0))
  br label %end_block

cond_else_block122:                               ; preds = %after_break125, %cond_else_block117
  %eqtmpY128 = icmp eq i32 %op4, 18
  br i1 %eqtmpY128, label %cond_then_block126, label %cond_else_block127

after_break125:                                   ; No predecessors!
  br label %cond_else_block122

cond_then_block126:                               ; preds = %cond_else_block122
  %f129 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %31 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f129, i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_string.40, i32 0, i32 0))
  br label %end_block

cond_else_block127:                               ; preds = %after_break130, %cond_else_block122
  %eqtmpY133 = icmp eq i32 %op4, 19
  br i1 %eqtmpY133, label %cond_then_block131, label %cond_else_block132

after_break130:                                   ; No predecessors!
  br label %cond_else_block127

cond_then_block131:                               ; preds = %cond_else_block127
  %f134 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %32 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f134, i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_string.41, i32 0, i32 0))
  br label %end_block

cond_else_block132:                               ; preds = %after_break135, %cond_else_block127
  %eqtmpY138 = icmp eq i32 %op4, 20
  br i1 %eqtmpY138, label %cond_then_block136, label %cond_else_block137

after_break135:                                   ; No predecessors!
  br label %cond_else_block132

cond_then_block136:                               ; preds = %cond_else_block132
  %f139 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %33 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f139, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_string.42, i32 0, i32 0))
  br label %end_block

cond_else_block137:                               ; preds = %after_break140, %cond_else_block132
  %eqtmpY143 = icmp eq i32 %op4, 21
  br i1 %eqtmpY143, label %cond_then_block141, label %cond_else_block142

after_break140:                                   ; No predecessors!
  br label %cond_else_block137

cond_then_block141:                               ; preds = %cond_else_block137
  %f144 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %34 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f144, i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_string.43, i32 0, i32 0))
  br label %end_block

cond_else_block142:                               ; preds = %after_break145, %cond_else_block137
  %eqtmpY148 = icmp eq i32 %op4, 22
  br i1 %eqtmpY148, label %cond_then_block146, label %cond_else_block147

after_break145:                                   ; No predecessors!
  br label %cond_else_block142

cond_then_block146:                               ; preds = %cond_else_block142
  %f149 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %35 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f149, i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_string.44, i32 0, i32 0))
  br label %end_block

cond_else_block147:                               ; preds = %after_break150, %cond_else_block142
  %eqtmpY153 = icmp eq i32 %op4, 31
  br i1 %eqtmpY153, label %cond_then_block151, label %cond_else_block152

after_break150:                                   ; No predecessors!
  br label %cond_else_block147

cond_then_block151:                               ; preds = %cond_else_block147
  %f154 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %36 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f154, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_string.45, i32 0, i32 0))
  br label %end_block

cond_else_block152:                               ; preds = %after_break155, %cond_else_block147
  %eqtmpY158 = icmp eq i32 %op4, 32
  br i1 %eqtmpY158, label %cond_then_block156, label %cond_else_block157

after_break155:                                   ; No predecessors!
  br label %cond_else_block152

cond_then_block156:                               ; preds = %cond_else_block152
  %f159 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %37 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f159, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_string.46, i32 0, i32 0))
  br label %end_block

cond_else_block157:                               ; preds = %after_break160, %cond_else_block152
  %eqtmpY163 = icmp eq i32 %op4, 23
  br i1 %eqtmpY163, label %cond_then_block161, label %cond_else_block162

after_break160:                                   ; No predecessors!
  br label %cond_else_block157

cond_then_block161:                               ; preds = %cond_else_block157
  %f164 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %38 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f164, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_string.47, i32 0, i32 0))
  br label %end_block

cond_else_block162:                               ; preds = %after_break165, %cond_else_block157
  %eqtmpY168 = icmp eq i32 %op4, 24
  br i1 %eqtmpY168, label %cond_then_block166, label %cond_else_block167

after_break165:                                   ; No predecessors!
  br label %cond_else_block162

cond_then_block166:                               ; preds = %cond_else_block162
  %f169 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %39 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f169, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_string.48, i32 0, i32 0))
  br label %end_block

cond_else_block167:                               ; preds = %after_break170, %cond_else_block162
  %eqtmpY173 = icmp eq i32 %op4, 28
  br i1 %eqtmpY173, label %cond_then_block171, label %cond_else_block172

after_break170:                                   ; No predecessors!
  br label %cond_else_block167

cond_then_block171:                               ; preds = %cond_else_block167
  %f174 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %40 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f174, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_string.49, i32 0, i32 0))
  br label %end_block

cond_else_block172:                               ; preds = %after_break175, %cond_else_block167
  %eqtmpY178 = icmp eq i32 %op4, 27
  br i1 %eqtmpY178, label %cond_then_block176, label %cond_else_block177

after_break175:                                   ; No predecessors!
  br label %cond_else_block172

cond_then_block176:                               ; preds = %cond_else_block172
  %f179 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %41 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f179, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_string.50, i32 0, i32 0))
  br label %end_block

cond_else_block177:                               ; preds = %after_break180, %cond_else_block172
  %eqtmpY183 = icmp eq i32 %op4, 35
  br i1 %eqtmpY183, label %cond_then_block181, label %cond_else_block182

after_break180:                                   ; No predecessors!
  br label %cond_else_block177

cond_then_block181:                               ; preds = %cond_else_block177
  %f184 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %42 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f184, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_string.51, i32 0, i32 0))
  br label %end_block

cond_else_block182:                               ; preds = %after_break185, %cond_else_block177
  %eqtmpY188 = icmp eq i32 %op4, 41
  br i1 %eqtmpY188, label %cond_then_block186, label %cond_else_block187

after_break185:                                   ; No predecessors!
  br label %cond_else_block182

cond_then_block186:                               ; preds = %cond_else_block182
  %f189 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %43 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f189, i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_string.52, i32 0, i32 0))
  br label %end_block

cond_else_block187:                               ; preds = %after_break190, %cond_else_block182
  %eqtmpY193 = icmp eq i32 %op4, 45
  br i1 %eqtmpY193, label %cond_then_block191, label %cond_else_block192

after_break190:                                   ; No predecessors!
  br label %cond_else_block187

cond_then_block191:                               ; preds = %cond_else_block187
  %f194 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %44 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f194, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_string.53, i32 0, i32 0))
  br label %end_block

cond_else_block192:                               ; preds = %after_break195, %cond_else_block187
  %eqtmpY198 = icmp eq i32 %op4, 40
  br i1 %eqtmpY198, label %cond_then_block196, label %cond_else_block197

after_break195:                                   ; No predecessors!
  br label %cond_else_block192

cond_then_block196:                               ; preds = %cond_else_block192
  %f199 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %45 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f199, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_string.54, i32 0, i32 0))
  br label %end_block

cond_else_block197:                               ; preds = %after_break200, %cond_else_block192
  br label %cond_then_block201

after_break200:                                   ; No predecessors!
  br label %cond_else_block197

cond_then_block201:                               ; preds = %cond_else_block197
  %f203 = load %_IO_FILE*, %_IO_FILE** %f3, align 8
  %op204 = load i32, i32* %op2, align 4
  %46 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %f203, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_string.55, i32 0, i32 0), i32 %op204)
  br label %end_block

cond_else_block202:                               ; preds = %after_break205
  br label %end_block

after_break205:                                   ; No predecessors!
  br label %cond_else_block202
}

define i1 @invoke_command_with_control_terminal(i8* %name, i8** %argv, i32 %num_params, %CLVALUE** %stack_ptr, %sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %name2 = alloca i8*
  store i8* %name, i8** %name2, align 8
  %2 = bitcast i8** %name2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %argv3 = alloca i8**
  store i8** %argv, i8*** %argv3, align 8
  %3 = bitcast i8*** %argv3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %num_params4 = alloca i32
  store i32 %num_params, i32* %num_params4, align 4
  %4 = bitcast i32* %num_params4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %stack_ptr5 = alloca %CLVALUE**
  store %CLVALUE** %stack_ptr, %CLVALUE*** %stack_ptr5, align 8
  %5 = bitcast %CLVALUE*** %stack_ptr5 to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %info6 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info6, align 8
  %6 = bitcast %sVMInfo** %info6 to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %7 = call i32 @fork()
  %pid = alloca i32
  %8 = bitcast i32* %pid to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  store i32 %7, i32* %pid, align 4
  %pid7 = load i32, i32* %pid, align 4
  %eqtmpX = icmp eq i32 %pid7, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %9 = call i32 @getpid()
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  %11 = bitcast i8* %10 to i32*
  store i32 %9, i32* %11, align 4
  %12 = call i32 @setpgid(i32 0, i32 0)
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  %14 = bitcast i8* %13 to i32*
  %pid8 = load i32, i32* %14, align 4
  %15 = call i32 @tcsetpgrp(i32 0, i32 %pid8)
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %17 = bitcast i8* %16 to i8**
  %name9 = load i8*, i8** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %19 = bitcast i8* %18 to i8***
  %argv10 = load i8**, i8*** %19, align 8
  %20 = call i32 @execvp(i8* %name9, i8** %argv10)
  %letmp = icmp slt i32 %20, 0
  br i1 %letmp, label %cond_jump_then11, label %cond_end12

cond_end:                                         ; preds = %cond_end12, %entry
  %pid13 = load i32, i32* %pid, align 4
  %pid14 = load i32, i32* %pid, align 4
  %21 = call i32 @setpgid(i32 %pid13, i32 %pid14)
  %pid15 = load i32, i32* %pid, align 4
  %22 = call i32 @tcsetpgrp(i32 0, i32 %pid15)
  %status = alloca i32
  %23 = bitcast i32* %status to i8*
  store i8* %23, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  store i32 0, i32* %status, align 4
  %pid16 = load i32, i32* %pid, align 4
  %status17 = load i32, i32* %status, align 4
  %24 = call i32 @waitpid(i32 %pid16, i32* %status, i32 2)
  %pid2 = alloca i32
  %25 = bitcast i32* %pid2 to i8*
  store i8* %25, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  store i32 %24, i32* %pid2, align 4
  %status18 = load i32, i32* %status, align 4
  %andtmp = and i32 %status18, 65280
  %rshifttmp = ashr i32 %andtmp, 8
  %eqtmpX19 = icmp eq i32 %rshifttmp, 64
  br i1 %eqtmpX19, label %cond_jump_then20, label %cond_end21

cond_jump_then11:                                 ; preds = %cond_jump_then
  call void @exit(i32 64)
  br label %cond_end12

cond_end12:                                       ; preds = %cond_jump_then11, %cond_jump_then
  call void @exit(i32 0)
  br label %cond_end

cond_jump_then20:                                 ; preds = %cond_end
  %26 = call i32 @getpid()
  %27 = call i32 @getpid()
  %28 = call i32 @setpgid(i32 %26, i32 %27)
  %29 = call i32 @getpid()
  %30 = call i32 @tcsetpgrp(i32 0, i32 %29)
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %32 = bitcast i8* %31 to %CLVALUE***
  %stack_ptr22 = load %CLVALUE**, %CLVALUE*** %32, align 8
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %34 = bitcast i8* %33 to %sVMInfo**
  %info23 = load %sVMInfo*, %sVMInfo** %34, align 8
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %36 = bitcast i8* %35 to i8**
  %name24 = load i8*, i8** %36, align 8
  %37 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_string.56, i32 0, i32 0), i8* %name24)
  call void @vm_err_msg(%CLVALUE** %stack_ptr22, %sVMInfo* %info23, i8* %37)
  %38 = bitcast [8192 x i8*]* %lvtable to i8*
  %39 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %38, i64 65536)
  %40 = ptrtoint i8* %37 to i64
  %41 = icmp ne i64 %40, 0
  br i1 %41, label %cond_then_block, label %cond_end25

cond_end21:                                       ; preds = %cond_end
  %status26 = load i32, i32* %status, align 4
  %andtmp27 = and i32 %status26, 255
  %eqtmpX28 = icmp eq i32 %andtmp27, 127
  br i1 %eqtmpX28, label %cond_jump_then29, label %"cond_jump_elif0\0A"

cond_then_block:                                  ; preds = %cond_jump_then20
  br label %cond_end25

cond_end25:                                       ; preds = %cond_then_block, %cond_jump_then20
  call void @ncfree(i8* %37)
  ret i1 false

cond_jump_then29:                                 ; preds = %cond_end21
  %42 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %43 = bitcast i8* %42 to i32*
  %status31 = load i32, i32* %43, align 4
  %andtmp32 = and i32 %status31, 65280
  %rshifttmp33 = ashr i32 %andtmp32, 8
  %addtmp = add nsw i32 %rshifttmp33, 128
  %rcode = alloca i32
  %44 = bitcast i32* %rcode to i8*
  store i8* %44, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  store i32 %addtmp, i32* %rcode, align 4
  %title = alloca [32 x i8]
  %45 = bitcast [32 x i8]* %title to i8*
  store i8* %45, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  %46 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %47 = bitcast i8* %46 to i8**
  %name34 = load i8*, i8** %47, align 8
  %48 = bitcast [32 x i8]* %title to i8*
  %49 = call i8* @xstrncpy(i8* %48, i8* %name34, i32 32)
  %i = alloca i32
  %50 = bitcast i32* %i to i8*
  store i8* %50, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  store i32 1, i32* %i, align 4
  br label %loop_top_block

"cond_jump_elif0\0A":                             ; preds = %cond_end21
  %status63 = load i32, i32* %status, align 4
  %andtmp64 = and i32 %status63, 127
  %addtmp65 = add nsw i32 %andtmp64, 1
  %51 = trunc i32 %addtmp65 to i8
  %rshifttmp66 = ashr i8 %51, 1
  %gttmp = icmp sgt i8 %rshifttmp66, 0
  br i1 %gttmp, label %"cond_jump_elif_then0\0A", label %cond_else_block

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  store i32 1, i32* @gSigInt, align 4
  %52 = call i32 @getpid()
  %53 = call i32 @getpid()
  %54 = call i32 @setpgid(i32 %52, i32 %53)
  %55 = call i32 @getpid()
  %56 = call i32 @tcsetpgrp(i32 0, i32 %55)
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %58 = bitcast i8* %57 to i32*
  %status67 = load i32, i32* %58, align 4
  %andtmp68 = and i32 %status67, 65280
  %rshifttmp69 = ashr i32 %andtmp68, 8
  %rcode70 = alloca i32
  %59 = bitcast i32* %rcode70 to i8*
  store i8* %59, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  store i32 %rshifttmp69, i32* %rcode70, align 4
  %60 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %61 = bitcast i8* %60 to %CLVALUE***
  %stack_ptr71 = load %CLVALUE**, %CLVALUE*** %61, align 8
  %derefference_value72 = load %CLVALUE*, %CLVALUE** %stack_ptr71, align 8
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %63 = bitcast i8* %62 to i32*
  %num_params73 = load i32, i32* %63, align 4
  %64 = ptrtoint %CLVALUE* %derefference_value72 to i64
  %sext574 = sext i32 %num_params73 to i64
  %multtmp75 = mul nsw i64 %sext574, 4
  %subtmp76 = sub nsw i64 %64, %multtmp75
  %IntToPtr877 = inttoptr i64 %subtmp76 to %CLVALUE*
  store %CLVALUE* %IntToPtr877, %CLVALUE** %stack_ptr71, align 8
  %65 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %66 = bitcast i8* %65 to %CLVALUE***
  %stack_ptr78 = load %CLVALUE**, %CLVALUE*** %66, align 8
  %derefference_value79 = load %CLVALUE*, %CLVALUE** %stack_ptr78, align 8
  %rcode80 = load i32, i32* %rcode70, align 4
  %67 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %68 = bitcast i8* %67 to %sVMInfo**
  %info81 = load %sVMInfo*, %sVMInfo** %68, align 8
  %69 = call i32 @create_command_object(i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.60, i32 0, i32 0), i32 1, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.61, i32 0, i32 0), i32 1, i32 %rcode80, i1 false, %sVMInfo* %info81)
  %70 = bitcast %CLVALUE* %derefference_value79 to i32*
  store i32 %69, i32* %70, align 4
  %71 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %72 = bitcast i8* %71 to %CLVALUE***
  %stack_ptr82 = load %CLVALUE**, %CLVALUE*** %72, align 8
  %derefference_value83 = load %CLVALUE*, %CLVALUE** %stack_ptr82, align 8
  %73 = ptrtoint %CLVALUE* %derefference_value83 to i64
  %adddtmp84 = add nsw i64 %73, 4
  %IntTOPtr5c85 = inttoptr i64 %adddtmp84 to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c85, %CLVALUE** %stack_ptr82, align 8
  br label %cond_end30

cond_else_block:                                  ; preds = %"cond_jump_elif0\0A"
  %74 = call i32 @getpid()
  %75 = call i32 @getpid()
  %76 = call i32 @setpgid(i32 %74, i32 %75)
  %77 = call i32 @getpid()
  %78 = call i32 @tcsetpgrp(i32 0, i32 %77)
  %79 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %80 = bitcast i8* %79 to i32*
  %status86 = load i32, i32* %80, align 4
  %andtmp87 = and i32 %status86, 65280
  %rshifttmp88 = ashr i32 %andtmp87, 8
  %rcode89 = alloca i32
  %81 = bitcast i32* %rcode89 to i8*
  store i8* %81, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  store i32 %rshifttmp88, i32* %rcode89, align 4
  %82 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %83 = bitcast i8* %82 to %CLVALUE***
  %stack_ptr90 = load %CLVALUE**, %CLVALUE*** %83, align 8
  %derefference_value91 = load %CLVALUE*, %CLVALUE** %stack_ptr90, align 8
  %84 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %85 = bitcast i8* %84 to i32*
  %num_params92 = load i32, i32* %85, align 4
  %86 = ptrtoint %CLVALUE* %derefference_value91 to i64
  %sext593 = sext i32 %num_params92 to i64
  %multtmp94 = mul nsw i64 %sext593, 4
  %subtmp95 = sub nsw i64 %86, %multtmp94
  %IntToPtr896 = inttoptr i64 %subtmp95 to %CLVALUE*
  store %CLVALUE* %IntToPtr896, %CLVALUE** %stack_ptr90, align 8
  %87 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %88 = bitcast i8* %87 to %CLVALUE***
  %stack_ptr97 = load %CLVALUE**, %CLVALUE*** %88, align 8
  %derefference_value98 = load %CLVALUE*, %CLVALUE** %stack_ptr97, align 8
  %rcode99 = load i32, i32* %rcode89, align 4
  %89 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %90 = bitcast i8* %89 to %sVMInfo**
  %info100 = load %sVMInfo*, %sVMInfo** %90, align 8
  %91 = call i32 @create_command_object(i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.62, i32 0, i32 0), i32 1, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.63, i32 0, i32 0), i32 1, i32 %rcode99, i1 false, %sVMInfo* %info100)
  %92 = bitcast %CLVALUE* %derefference_value98 to i32*
  store i32 %91, i32* %92, align 4
  %93 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %94 = bitcast i8* %93 to %CLVALUE***
  %stack_ptr101 = load %CLVALUE**, %CLVALUE*** %94, align 8
  %derefference_value102 = load %CLVALUE*, %CLVALUE** %stack_ptr101, align 8
  %95 = ptrtoint %CLVALUE* %derefference_value102 to i64
  %adddtmp103 = add nsw i64 %95, 4
  %IntTOPtr5c104 = inttoptr i64 %adddtmp103 to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c104, %CLVALUE** %stack_ptr101, align 8
  br label %cond_end30

cond_end30:                                       ; preds = %cond_else_block, %"cond_jump_elif_then0\0A", %cond_end46
  %96 = bitcast [8192 x i8*]* %lvtable to i8*
  %97 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %96, i64 65536)
  ret i1 true

loop_top_block:                                   ; preds = %cond_then_block38, %cond_jump_then29
  %i35 = load i32, i32* %i, align 4
  %98 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %99 = bitcast i8* %98 to i32*
  %num_params36 = load i32, i32* %99, align 4
  %letmp37 = icmp slt i32 %i35, %num_params36
  br i1 %letmp37, label %cond_then_block38, label %cond_end_block

cond_then_block38:                                ; preds = %loop_top_block
  %100 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  %101 = bitcast i8* %100 to [32 x i8]*
  %102 = bitcast [32 x i8]* %101 to i8*
  %103 = call i8* @xstrncat(i8* %102, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_string.57, i32 0, i32 0), i32 32)
  %104 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  %105 = bitcast i8* %104 to [32 x i8]*
  %106 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %107 = bitcast i8* %106 to i8***
  %argv39 = load i8**, i8*** %107, align 8
  %i40 = load i32, i32* %i, align 4
  %element_addressB = getelementptr i8*, i8** %argv39, i32 %i40
  %element = load i8*, i8** %element_addressB, align 8
  %108 = bitcast [32 x i8]* %105 to i8*
  %109 = call i8* @xstrncat(i8* %108, i8* %element, i32 32)
  %i41 = load i32, i32* %i, align 4
  %addtmp42 = add nsw i32 %i41, 1
  store i32 %addtmp42, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp42, 1
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %tinfo = alloca %termios
  %110 = bitcast %termios* %tinfo to i8*
  store i8* %110, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 516), align 8
  %tinfo43 = load %termios, %termios* %tinfo, align 8
  %111 = call i32 @tcgetattr(i32 0, %termios* %tinfo)
  %letmp44 = icmp slt i32 %111, 0
  br i1 %letmp44, label %cond_jump_then45, label %cond_end46

cond_jump_then45:                                 ; preds = %cond_end_block
  %112 = bitcast [8192 x i8*]* %lvtable to i8*
  %113 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %112, i64 65536)
  ret i1 false

cond_end46:                                       ; preds = %cond_end_block
  %114 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  %115 = bitcast i8* %114 to i32*
  %pid47 = load i32, i32* %115, align 4
  %pgrp = alloca i32
  %116 = bitcast i32* %pgrp to i8*
  store i8* %116, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  store i32 %pid47, i32* %pgrp, align 4
  %tinfo48 = load %termios, %termios* %tinfo, align 8
  %pgrp49 = load i32, i32* %pgrp, align 4
  %117 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %118 = bitcast i8* %117 to %sVMInfo**
  %info50 = load %sVMInfo*, %sVMInfo** %118, align 8
  %119 = bitcast [32 x i8]* %title to i8*
  %120 = call i32 @create_job_object(i8* %119, %termios* %tinfo, i32 %pgrp49, %sVMInfo* %info50)
  %job = alloca i32
  %121 = bitcast i32* %job to i8*
  store i8* %121, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 518), align 8
  store i32 %120, i32* %job, align 4
  %gJobs = load %list__int*, %list__int** @gJobs, align 8
  %job51 = load i32, i32* %job, align 4
  call void @"push_back_int5_src/vm"(%list__int* %gJobs, i32 %job51)
  %122 = call i32 @getpid()
  %123 = call i32 @getpid()
  %124 = call i32 @setpgid(i32 %122, i32 %123)
  %125 = call i32 @getpid()
  %126 = call i32 @tcsetpgrp(i32 0, i32 %125)
  %127 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %128 = bitcast i8* %127 to i32*
  %status52 = load i32, i32* %128, align 4
  %andtmp53 = and i32 %status52, 65280
  %rshifttmp54 = ashr i32 %andtmp53, 8
  %rcode2 = alloca i32
  %129 = bitcast i32* %rcode2 to i8*
  store i8* %129, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  store i32 %rshifttmp54, i32* %rcode2, align 4
  %130 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %131 = bitcast i8* %130 to %CLVALUE***
  %stack_ptr55 = load %CLVALUE**, %CLVALUE*** %131, align 8
  %derefference_value = load %CLVALUE*, %CLVALUE** %stack_ptr55, align 8
  %132 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %133 = bitcast i8* %132 to i32*
  %num_params56 = load i32, i32* %133, align 4
  %134 = ptrtoint %CLVALUE* %derefference_value to i64
  %sext5 = sext i32 %num_params56 to i64
  %multtmp = mul nsw i64 %sext5, 4
  %subtmp = sub nsw i64 %134, %multtmp
  %IntToPtr8 = inttoptr i64 %subtmp to %CLVALUE*
  store %CLVALUE* %IntToPtr8, %CLVALUE** %stack_ptr55, align 8
  %135 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %136 = bitcast i8* %135 to %CLVALUE***
  %stack_ptr57 = load %CLVALUE**, %CLVALUE*** %136, align 8
  %derefference_value58 = load %CLVALUE*, %CLVALUE** %stack_ptr57, align 8
  %rcode259 = load i32, i32* %rcode2, align 4
  %137 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %138 = bitcast i8* %137 to %sVMInfo**
  %info60 = load %sVMInfo*, %sVMInfo** %138, align 8
  %139 = call i32 @create_command_object(i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.58, i32 0, i32 0), i32 1, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.59, i32 0, i32 0), i32 1, i32 %rcode259, i1 false, %sVMInfo* %info60)
  %140 = bitcast %CLVALUE* %derefference_value58 to i32*
  store i32 %139, i32* %140, align 4
  %141 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %142 = bitcast i8* %141 to %CLVALUE***
  %stack_ptr61 = load %CLVALUE**, %CLVALUE*** %142, align 8
  %derefference_value62 = load %CLVALUE*, %CLVALUE** %stack_ptr61, align 8
  %143 = ptrtoint %CLVALUE* %derefference_value62 to i64
  %adddtmp = add nsw i64 %143, 4
  %IntTOPtr5c = inttoptr i64 %adddtmp to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c, %CLVALUE** %stack_ptr61, align 8
  br label %cond_end30
}

define void @"push_back_int5_src/vm"(%list__int* %self, i32 %item) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %list__int*
  store %list__int* %self, %list__int** %self2, align 8
  %2 = bitcast %list__int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %item3 = alloca i32
  store i32 %item, i32* %item3, align 4
  %3 = bitcast i32* %item3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %self4 = load %list__int*, %list__int** %self2, align 8
  %4 = getelementptr inbounds %list__int, %list__int* %self4, i32 0, i32 2
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %"cond_jump_elif0\0A"

cond_jump_then:                                   ; preds = %entry
  %6 = call i8* @nccalloc(i64 1, i64 24)
  %7 = bitcast i8* %6 to %list_item__int*
  %litem = alloca %list_item__int*
  %8 = bitcast %list_item__int** %litem to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store %list_item__int* %7, %list_item__int** %litem, align 8
  %litem5 = load %list_item__int*, %list_item__int** %litem, align 8
  %9 = getelementptr inbounds %list_item__int, %list_item__int* %litem5, i32 0, i32 1
  store %list_item__int* null, %list_item__int** %9, align 8
  %litem6 = load %list_item__int*, %list_item__int** %litem, align 8
  %10 = getelementptr inbounds %list_item__int, %list_item__int* %litem6, i32 0, i32 2
  store %list_item__int* null, %list_item__int** %10, align 8
  %litem7 = load %list_item__int*, %list_item__int** %litem, align 8
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %12 = bitcast i8* %11 to i32*
  %item8 = load i32, i32* %12, align 4
  %13 = getelementptr inbounds %list_item__int, %list_item__int* %litem7, i32 0, i32 0
  store i32 %item8, i32* %13, align 4
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %15 = bitcast i8* %14 to %list__int**
  %self9 = load %list__int*, %list__int** %15, align 8
  %litem10 = load %list_item__int*, %list_item__int** %litem, align 8
  %16 = getelementptr inbounds %list__int, %list__int* %self9, i32 0, i32 1
  store %list_item__int* %litem10, %list_item__int** %16, align 8
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %18 = bitcast i8* %17 to %list__int**
  %self11 = load %list__int*, %list__int** %18, align 8
  %litem12 = load %list_item__int*, %list_item__int** %litem, align 8
  %19 = getelementptr inbounds %list__int, %list__int* %self11, i32 0, i32 0
  store %list_item__int* %litem12, %list_item__int** %19, align 8
  br label %cond_end

"cond_jump_elif0\0A":                             ; preds = %entry
  %self13 = load %list__int*, %list__int** %self2, align 8
  %20 = getelementptr inbounds %list__int, %list__int* %self13, i32 0, i32 2
  %21 = load i32, i32* %20, align 4
  %eqtmpX14 = icmp eq i32 %21, 1
  br i1 %eqtmpX14, label %"cond_jump_elif_then0\0A", label %cond_else_block

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %22 = call i8* @nccalloc(i64 1, i64 24)
  %23 = bitcast i8* %22 to %list_item__int*
  %litem15 = alloca %list_item__int*
  %24 = bitcast %list_item__int** %litem15 to i8*
  store i8* %24, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store %list_item__int* %23, %list_item__int** %litem15, align 8
  %litem16 = load %list_item__int*, %list_item__int** %litem15, align 8
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %26 = bitcast i8* %25 to %list__int**
  %self17 = load %list__int*, %list__int** %26, align 8
  %27 = getelementptr inbounds %list__int, %list__int* %self17, i32 0, i32 0
  %28 = load %list_item__int*, %list_item__int** %27, align 8
  %29 = getelementptr inbounds %list_item__int, %list_item__int* %litem16, i32 0, i32 1
  store %list_item__int* %28, %list_item__int** %29, align 8
  %litem18 = load %list_item__int*, %list_item__int** %litem15, align 8
  %30 = getelementptr inbounds %list_item__int, %list_item__int* %litem18, i32 0, i32 2
  store %list_item__int* null, %list_item__int** %30, align 8
  %litem19 = load %list_item__int*, %list_item__int** %litem15, align 8
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %32 = bitcast i8* %31 to i32*
  %item20 = load i32, i32* %32, align 4
  %33 = getelementptr inbounds %list_item__int, %list_item__int* %litem19, i32 0, i32 0
  store i32 %item20, i32* %33, align 4
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %35 = bitcast i8* %34 to %list__int**
  %self21 = load %list__int*, %list__int** %35, align 8
  %litem22 = load %list_item__int*, %list_item__int** %litem15, align 8
  %36 = getelementptr inbounds %list__int, %list__int* %self21, i32 0, i32 1
  store %list_item__int* %litem22, %list_item__int** %36, align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %38 = bitcast i8* %37 to %list__int**
  %self23 = load %list__int*, %list__int** %38, align 8
  %39 = getelementptr inbounds %list__int, %list__int* %self23, i32 0, i32 0
  %40 = load %list_item__int*, %list_item__int** %39, align 8
  %litem24 = load %list_item__int*, %list_item__int** %litem15, align 8
  %41 = getelementptr inbounds %list_item__int, %list_item__int* %40, i32 0, i32 2
  store %list_item__int* %litem24, %list_item__int** %41, align 8
  br label %cond_end

cond_else_block:                                  ; preds = %"cond_jump_elif0\0A"
  %42 = call i8* @nccalloc(i64 1, i64 24)
  %43 = bitcast i8* %42 to %list_item__int*
  %litem25 = alloca %list_item__int*
  %44 = bitcast %list_item__int** %litem25 to i8*
  store i8* %44, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store %list_item__int* %43, %list_item__int** %litem25, align 8
  %litem26 = load %list_item__int*, %list_item__int** %litem25, align 8
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %46 = bitcast i8* %45 to %list__int**
  %self27 = load %list__int*, %list__int** %46, align 8
  %47 = getelementptr inbounds %list__int, %list__int* %self27, i32 0, i32 1
  %48 = load %list_item__int*, %list_item__int** %47, align 8
  %49 = getelementptr inbounds %list_item__int, %list_item__int* %litem26, i32 0, i32 1
  store %list_item__int* %48, %list_item__int** %49, align 8
  %litem28 = load %list_item__int*, %list_item__int** %litem25, align 8
  %50 = getelementptr inbounds %list_item__int, %list_item__int* %litem28, i32 0, i32 2
  store %list_item__int* null, %list_item__int** %50, align 8
  %litem29 = load %list_item__int*, %list_item__int** %litem25, align 8
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %52 = bitcast i8* %51 to i32*
  %item30 = load i32, i32* %52, align 4
  %53 = getelementptr inbounds %list_item__int, %list_item__int* %litem29, i32 0, i32 0
  store i32 %item30, i32* %53, align 4
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %55 = bitcast i8* %54 to %list__int**
  %self31 = load %list__int*, %list__int** %55, align 8
  %56 = getelementptr inbounds %list__int, %list__int* %self31, i32 0, i32 1
  %57 = load %list_item__int*, %list_item__int** %56, align 8
  %litem32 = load %list_item__int*, %list_item__int** %litem25, align 8
  %58 = getelementptr inbounds %list_item__int, %list_item__int* %57, i32 0, i32 2
  store %list_item__int* %litem32, %list_item__int** %58, align 8
  %59 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %60 = bitcast i8* %59 to %list__int**
  %self33 = load %list__int*, %list__int** %60, align 8
  %litem34 = load %list_item__int*, %list_item__int** %litem25, align 8
  %61 = getelementptr inbounds %list__int, %list__int* %self33, i32 0, i32 1
  store %list_item__int* %litem34, %list_item__int** %61, align 8
  br label %cond_end

cond_end:                                         ; preds = %cond_else_block, %"cond_jump_elif_then0\0A", %cond_jump_then
  %self35 = load %list__int*, %list__int** %self2, align 8
  %self36 = load %list__int*, %list__int** %self2, align 8
  %62 = getelementptr inbounds %list__int, %list__int* %self36, i32 0, i32 2
  %63 = load i32, i32* %62, align 4
  %addtmp = add nsw i32 %63, 1
  %64 = getelementptr inbounds %list__int, %list__int* %self35, i32 0, i32 2
  store i32 %addtmp, i32* %64, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %65 = bitcast [8192 x i8*]* %lvtable to i8*
  %66 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %65, i64 65536)
  ret void
}

define i1 @invoke_command(i8* %name, i8** %argv, %CLVALUE** %stack_ptr, i32 %num_params, %sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %name2 = alloca i8*
  store i8* %name, i8** %name2, align 8
  %2 = bitcast i8** %name2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %argv3 = alloca i8**
  store i8** %argv, i8*** %argv3, align 8
  %3 = bitcast i8*** %argv3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %stack_ptr4 = alloca %CLVALUE**
  store %CLVALUE** %stack_ptr, %CLVALUE*** %stack_ptr4, align 8
  %4 = bitcast %CLVALUE*** %stack_ptr4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %num_params5 = alloca i32
  store i32 %num_params, i32* %num_params5, align 4
  %5 = bitcast i32* %num_params5 to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %info6 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info6, align 8
  %6 = bitcast %sVMInfo** %info6 to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %child2parent_write_fd = alloca i32
  %7 = bitcast i32* %child2parent_write_fd to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  store i32 0, i32* %child2parent_write_fd, align 4
  %child2parent_read_fd = alloca i32
  %8 = bitcast i32* %child2parent_read_fd to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  store i32 0, i32* %child2parent_read_fd, align 4
  %parent2child_write_fd = alloca i32
  %9 = bitcast i32* %parent2child_write_fd to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  store i32 0, i32* %parent2child_write_fd, align 4
  %parent2child_read_fd = alloca i32
  %10 = bitcast i32* %parent2child_read_fd to i8*
  store i8* %10, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  store i32 0, i32* %parent2child_read_fd, align 4
  %child2parent_read_fd_err = alloca i32
  %11 = bitcast i32* %child2parent_read_fd_err to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  store i32 0, i32* %child2parent_read_fd_err, align 4
  %child2parent_write_fd_err = alloca i32
  %12 = bitcast i32* %child2parent_write_fd_err to i8*
  store i8* %12, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 516), align 8
  store i32 0, i32* %child2parent_write_fd_err, align 4
  %pipes = alloca [2 x i32]
  %13 = bitcast [2 x i32]* %pipes to i8*
  store i8* %13, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %14 = bitcast [2 x i32]* %pipes to i32*
  %15 = call i32 @pipe(i32* %14)
  %16 = bitcast [2 x i32]* %pipes to i32*
  %element_address = getelementptr i32, i32* %16, i32 0
  %element = load i32, i32* %element_address, align 4
  store i32 %element, i32* %child2parent_read_fd, align 4
  %17 = bitcast [2 x i32]* %pipes to i32*
  %element_address7 = getelementptr i32, i32* %17, i32 1
  %element8 = load i32, i32* %element_address7, align 4
  store i32 %element8, i32* %child2parent_write_fd, align 4
  %18 = bitcast [2 x i32]* %pipes to i32*
  %19 = call i32 @pipe(i32* %18)
  %20 = bitcast [2 x i32]* %pipes to i32*
  %element_address9 = getelementptr i32, i32* %20, i32 0
  %element10 = load i32, i32* %element_address9, align 4
  store i32 %element10, i32* %parent2child_read_fd, align 4
  %21 = bitcast [2 x i32]* %pipes to i32*
  %element_address11 = getelementptr i32, i32* %21, i32 1
  %element12 = load i32, i32* %element_address11, align 4
  store i32 %element12, i32* %parent2child_write_fd, align 4
  %22 = bitcast [2 x i32]* %pipes to i32*
  %23 = call i32 @pipe(i32* %22)
  %24 = bitcast [2 x i32]* %pipes to i32*
  %element_address13 = getelementptr i32, i32* %24, i32 0
  %element14 = load i32, i32* %element_address13, align 4
  store i32 %element14, i32* %child2parent_read_fd_err, align 4
  %25 = bitcast [2 x i32]* %pipes to i32*
  %element_address15 = getelementptr i32, i32* %25, i32 1
  %element16 = load i32, i32* %element_address15, align 4
  store i32 %element16, i32* %child2parent_write_fd_err, align 4
  %26 = call i32 @fork()
  %pid = alloca i32
  %27 = bitcast i32* %pid to i8*
  store i8* %27, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 518), align 8
  store i32 %26, i32* %pid, align 4
  %pid17 = load i32, i32* %pid, align 4
  %eqtmpX = icmp eq i32 %pid17, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %29 = bitcast i8* %28 to i32*
  %parent2child_write_fd18 = load i32, i32* %29, align 4
  %30 = call i32 @close(i32 %parent2child_write_fd18)
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %32 = bitcast i8* %31 to i32*
  %child2parent_read_fd19 = load i32, i32* %32, align 4
  %33 = call i32 @close(i32 %child2parent_read_fd19)
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  %35 = bitcast i8* %34 to i32*
  %child2parent_read_fd_err20 = load i32, i32* %35, align 4
  %36 = call i32 @close(i32 %child2parent_read_fd_err20)
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  %38 = bitcast i8* %37 to i32*
  %parent2child_read_fd21 = load i32, i32* %38, align 4
  %39 = call i32 @dup2(i32 %parent2child_read_fd21, i32 0)
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  %41 = bitcast i8* %40 to i32*
  %child2parent_write_fd22 = load i32, i32* %41, align 4
  %42 = call i32 @dup2(i32 %child2parent_write_fd22, i32 1)
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 516), align 8
  %44 = bitcast i8* %43 to i32*
  %child2parent_write_fd_err23 = load i32, i32* %44, align 4
  %45 = call i32 @dup2(i32 %child2parent_write_fd_err23, i32 2)
  %46 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  %47 = bitcast i8* %46 to i32*
  %parent2child_read_fd24 = load i32, i32* %47, align 4
  %48 = call i32 @close(i32 %parent2child_read_fd24)
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  %50 = bitcast i8* %49 to i32*
  %child2parent_write_fd25 = load i32, i32* %50, align 4
  %51 = call i32 @close(i32 %child2parent_write_fd25)
  %52 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 516), align 8
  %53 = bitcast i8* %52 to i32*
  %child2parent_write_fd_err26 = load i32, i32* %53, align 4
  %54 = call i32 @close(i32 %child2parent_write_fd_err26)
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %56 = bitcast i8* %55 to i8**
  %name27 = load i8*, i8** %56, align 8
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %58 = bitcast i8* %57 to i8***
  %argv28 = load i8**, i8*** %58, align 8
  %59 = call i32 @execvp(i8* %name27, i8** %argv28)
  %letmp = icmp slt i32 %59, 0
  br i1 %letmp, label %cond_jump_then29, label %cond_end30

cond_end:                                         ; preds = %cond_end30, %entry
  %parent2child_read_fd31 = load i32, i32* %parent2child_read_fd, align 4
  %60 = call i32 @close(i32 %parent2child_read_fd31)
  %child2parent_write_fd32 = load i32, i32* %child2parent_write_fd, align 4
  %61 = call i32 @close(i32 %child2parent_write_fd32)
  %child2parent_write_fd_err33 = load i32, i32* %child2parent_write_fd_err, align 4
  %62 = call i32 @close(i32 %child2parent_write_fd_err33)
  %parent2child_write_fd34 = load i32, i32* %parent2child_write_fd, align 4
  %63 = call i32 @close(i32 %parent2child_write_fd34)
  %64 = call i8* @nccalloc(i64 1, i64 16)
  %65 = bitcast i8* %64 to %buffer*
  %66 = call %buffer* @buffer_initialize(%buffer* %65)
  %child_output = alloca %buffer*
  %67 = bitcast %buffer** %child_output to i8*
  store i8* %67, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  store %buffer* %66, %buffer** %child_output, align 8
  %68 = call i8* @nccalloc(i64 1, i64 16)
  %69 = bitcast i8* %68 to %buffer*
  %70 = call %buffer* @buffer_initialize(%buffer* %69)
  %child_output_error = alloca %buffer*
  %71 = bitcast %buffer** %child_output_error to i8*
  store i8* %71, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  store %buffer* %70, %buffer** %child_output_error, align 8
  br label %loop_top_block

cond_jump_then29:                                 ; preds = %cond_jump_then
  call void @exit(i32 64)
  br label %cond_end30

cond_end30:                                       ; preds = %cond_jump_then29, %cond_jump_then
  call void @exit(i32 2)
  br label %cond_end

loop_top_block:                                   ; preds = %cond_end51, %cond_end
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %pipe_data = alloca [128 x i8]
  %72 = bitcast [128 x i8]* %pipe_data to i8*
  store i8* %72, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %73 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %74 = bitcast i8* %73 to i32*
  %child2parent_read_fd35 = load i32, i32* %74, align 4
  %75 = bitcast [128 x i8]* %pipe_data to i8*
  %76 = call i64 @read(i32 %child2parent_read_fd35, i8* %75, i64 128)
  %77 = trunc i64 %76 to i32
  %readed_byte = alloca i32
  %78 = bitcast i32* %readed_byte to i8*
  store i8* %78, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32 %77, i32* %readed_byte, align 4
  %pipe_data_err = alloca [128 x i8]
  %79 = bitcast [128 x i8]* %pipe_data_err to i8*
  store i8* %79, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %80 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  %81 = bitcast i8* %80 to i32*
  %child2parent_read_fd_err36 = load i32, i32* %81, align 4
  %82 = bitcast [128 x i8]* %pipe_data_err to i8*
  %83 = call i64 @read(i32 %child2parent_read_fd_err36, i8* %82, i64 128)
  %84 = trunc i64 %83 to i32
  %readed_byte_err = alloca i32
  %85 = bitcast i32* %readed_byte_err to i8*
  store i8* %85, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  store i32 %84, i32* %readed_byte_err, align 4
  %readed_byte37 = load i32, i32* %readed_byte, align 4
  %leeqtmp = icmp sle i32 %readed_byte37, 0
  store i1 %leeqtmp, i1* %andand_result_var, align 1
  br i1 %leeqtmp, label %cond_jump_then38, label %cond_jump_end

cond_end_block:                                   ; preds = %cond_jump_then41, %loop_top_block
  %child2parent_read_fd55 = load i32, i32* %child2parent_read_fd, align 4
  %86 = call i32 @close(i32 %child2parent_read_fd55)
  %child2parent_read_fd_err56 = load i32, i32* %child2parent_read_fd_err, align 4
  %87 = call i32 @close(i32 %child2parent_read_fd_err56)
  %status = alloca i32
  %88 = bitcast i32* %status to i8*
  store i8* %88, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store i32 0, i32* %status, align 4
  %pid57 = load i32, i32* %pid, align 4
  %status58 = load i32, i32* %status, align 4
  %89 = call i32 @waitpid(i32 %pid57, i32* %status, i32 2)
  %pid2 = alloca i32
  %90 = bitcast i32* %pid2 to i8*
  store i8* %90, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %89, i32* %pid2, align 4
  %status59 = load i32, i32* %status, align 4
  %andtmp = and i32 %status59, 65280
  %rshifttmp = ashr i32 %andtmp, 8
  %eqtmpX60 = icmp eq i32 %rshifttmp, 64
  br i1 %eqtmpX60, label %cond_jump_then61, label %cond_end62

cond_jump_then38:                                 ; preds = %cond_then_block
  %readed_byte_err39 = load i32, i32* %readed_byte_err, align 4
  %leeqtmp40 = icmp sle i32 %readed_byte_err39, 0
  %andand = and i1 %leeqtmp, %leeqtmp40
  store i1 %andand, i1* %andand_result_var, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then38, %cond_then_block
  %andand_result_value = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value, label %cond_jump_then41, label %cond_end42

cond_jump_then41:                                 ; preds = %cond_jump_end
  br label %cond_end_block

cond_end42:                                       ; preds = %after_break, %cond_jump_end
  %readed_byte43 = load i32, i32* %readed_byte, align 4
  %getmp = icmp sge i32 %readed_byte43, 0
  br i1 %getmp, label %cond_jump_then44, label %cond_end45

after_break:                                      ; No predecessors!
  br label %cond_end42

cond_jump_then44:                                 ; preds = %cond_end42
  %91 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  %92 = bitcast i8* %91 to %buffer**
  %child_output46 = load %buffer*, %buffer** %92, align 8
  %93 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %94 = bitcast i8* %93 to [128 x i8]*
  %95 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %96 = bitcast i8* %95 to i32*
  %readed_byte47 = load i32, i32* %96, align 4
  %97 = bitcast [128 x i8]* %94 to i8*
  %sext14 = zext i32 %readed_byte47 to i64
  call void @buffer_append(%buffer* %child_output46, i8* %97, i64 %sext14)
  br label %cond_end45

cond_end45:                                       ; preds = %cond_jump_then44, %cond_end42
  %readed_byte_err48 = load i32, i32* %readed_byte_err, align 4
  %getmp49 = icmp sge i32 %readed_byte_err48, 0
  br i1 %getmp49, label %cond_jump_then50, label %cond_end51

cond_jump_then50:                                 ; preds = %cond_end45
  %98 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %99 = bitcast i8* %98 to %buffer**
  %child_output_error52 = load %buffer*, %buffer** %99, align 8
  %100 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %101 = bitcast i8* %100 to [128 x i8]*
  %102 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %103 = bitcast i8* %102 to i32*
  %readed_byte_err53 = load i32, i32* %103, align 4
  %104 = bitcast [128 x i8]* %101 to i8*
  %sext1454 = zext i32 %readed_byte_err53 to i64
  call void @buffer_append(%buffer* %child_output_error52, i8* %104, i64 %sext1454)
  br label %cond_end51

cond_end51:                                       ; preds = %cond_jump_then50, %cond_end45
  br label %loop_top_block

cond_jump_then61:                                 ; preds = %cond_end_block
  %105 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %106 = bitcast i8* %105 to %CLVALUE***
  %stack_ptr63 = load %CLVALUE**, %CLVALUE*** %106, align 8
  %107 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %108 = bitcast i8* %107 to %sVMInfo**
  %info64 = load %sVMInfo*, %sVMInfo** %108, align 8
  %109 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %110 = bitcast i8* %109 to i8**
  %name65 = load i8*, i8** %110, align 8
  %111 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_string.64, i32 0, i32 0), i8* %name65)
  call void @vm_err_msg(%CLVALUE** %stack_ptr63, %sVMInfo* %info64, i8* %111)
  %112 = bitcast [8192 x i8*]* %lvtable to i8*
  %113 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %112, i64 65536)
  %114 = ptrtoint i8* %111 to i64
  %115 = icmp ne i64 %114, 0
  br i1 %115, label %cond_then_block66, label %cond_end67

cond_end62:                                       ; preds = %cond_end_block
  %stack_ptr72 = load %CLVALUE**, %CLVALUE*** %stack_ptr4, align 8
  %derefference_value = load %CLVALUE*, %CLVALUE** %stack_ptr72, align 8
  %num_params73 = load i32, i32* %num_params5, align 4
  %116 = ptrtoint %CLVALUE* %derefference_value to i64
  %sext5 = sext i32 %num_params73 to i64
  %multtmp = mul nsw i64 %sext5, 4
  %subtmp = sub nsw i64 %116, %multtmp
  %IntToPtr8 = inttoptr i64 %subtmp to %CLVALUE*
  store %CLVALUE* %IntToPtr8, %CLVALUE** %stack_ptr72, align 8
  %status74 = load i32, i32* %status, align 4
  %andtmp75 = and i32 %status74, 65280
  %rshifttmp76 = ashr i32 %andtmp75, 8
  %rcode = alloca i32
  %117 = bitcast i32* %rcode to i8*
  store i8* %117, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store i32 %rshifttmp76, i32* %rcode, align 4
  %stack_ptr77 = load %CLVALUE**, %CLVALUE*** %stack_ptr4, align 8
  %derefference_value78 = load %CLVALUE*, %CLVALUE** %stack_ptr77, align 8
  %child_output79 = load %buffer*, %buffer** %child_output, align 8
  %118 = getelementptr inbounds %buffer, %buffer* %child_output79, i32 0, i32 0
  %119 = load i8*, i8** %118, align 8
  %child_output80 = load %buffer*, %buffer** %child_output, align 8
  %120 = getelementptr inbounds %buffer, %buffer* %child_output80, i32 0, i32 1
  %121 = load i32, i32* %120, align 4
  %child_output_error81 = load %buffer*, %buffer** %child_output_error, align 8
  %122 = getelementptr inbounds %buffer, %buffer* %child_output_error81, i32 0, i32 0
  %123 = load i8*, i8** %122, align 8
  %child_output_error82 = load %buffer*, %buffer** %child_output_error, align 8
  %124 = getelementptr inbounds %buffer, %buffer* %child_output_error82, i32 0, i32 1
  %125 = load i32, i32* %124, align 4
  %rcode83 = load i32, i32* %rcode, align 4
  %info84 = load %sVMInfo*, %sVMInfo** %info6, align 8
  %126 = call i32 @create_command_object(i8* %119, i32 %121, i8* %123, i32 %125, i32 %rcode83, i1 false, %sVMInfo* %info84)
  %127 = bitcast %CLVALUE* %derefference_value78 to i32*
  store i32 %126, i32* %127, align 4
  %stack_ptr85 = load %CLVALUE**, %CLVALUE*** %stack_ptr4, align 8
  %derefference_value86 = load %CLVALUE*, %CLVALUE** %stack_ptr85, align 8
  %128 = ptrtoint %CLVALUE* %derefference_value86 to i64
  %adddtmp = add nsw i64 %128, 4
  %IntTOPtr5c = inttoptr i64 %adddtmp to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c, %CLVALUE** %stack_ptr85, align 8
  %status87 = load i32, i32* %status, align 4
  %andtmp88 = and i32 %status87, 127
  %addtmp = add nsw i32 %andtmp88, 1
  %129 = trunc i32 %addtmp to i8
  %rshifttmp89 = ashr i8 %129, 1
  %gttmp = icmp sgt i8 %rshifttmp89, 0
  br i1 %gttmp, label %cond_jump_then90, label %cond_end91

cond_then_block66:                                ; preds = %cond_jump_then61
  br label %cond_end67

cond_end67:                                       ; preds = %cond_then_block66, %cond_jump_then61
  call void @ncfree(i8* %111)
  %130 = load %buffer*, %buffer** %child_output, align 8
  call void @buffer_finalize(%buffer* %130)
  %131 = ptrtoint %buffer* %130 to i64
  %132 = icmp ne i64 %131, 0
  br i1 %132, label %cond_then_block68, label %cond_end69

cond_then_block68:                                ; preds = %cond_end67
  br label %cond_end69

cond_end69:                                       ; preds = %cond_then_block68, %cond_end67
  %133 = bitcast %buffer* %130 to i8*
  call void @ncfree(i8* %133)
  %134 = load %buffer*, %buffer** %child_output_error, align 8
  call void @buffer_finalize(%buffer* %134)
  %135 = ptrtoint %buffer* %134 to i64
  %136 = icmp ne i64 %135, 0
  br i1 %136, label %cond_then_block70, label %cond_end71

cond_then_block70:                                ; preds = %cond_end69
  br label %cond_end71

cond_end71:                                       ; preds = %cond_then_block70, %cond_end69
  %137 = bitcast %buffer* %134 to i8*
  call void @ncfree(i8* %137)
  ret i1 false

cond_jump_then90:                                 ; preds = %cond_end62
  store i32 1, i32* @gSigInt, align 4
  br label %cond_end91

cond_end91:                                       ; preds = %cond_jump_then90, %cond_end62
  %138 = bitcast [8192 x i8*]* %lvtable to i8*
  %139 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %138, i64 65536)
  %140 = load %buffer*, %buffer** %child_output, align 8
  call void @buffer_finalize(%buffer* %140)
  %141 = ptrtoint %buffer* %140 to i64
  %142 = icmp ne i64 %141, 0
  br i1 %142, label %cond_then_block92, label %cond_end93

cond_then_block92:                                ; preds = %cond_end91
  br label %cond_end93

cond_end93:                                       ; preds = %cond_then_block92, %cond_end91
  %143 = bitcast %buffer* %140 to i8*
  call void @ncfree(i8* %143)
  %144 = load %buffer*, %buffer** %child_output_error, align 8
  call void @buffer_finalize(%buffer* %144)
  %145 = ptrtoint %buffer* %144 to i64
  %146 = icmp ne i64 %145, 0
  br i1 %146, label %cond_then_block94, label %cond_end95

cond_then_block94:                                ; preds = %cond_end93
  br label %cond_end95

cond_end95:                                       ; preds = %cond_then_block94, %cond_end93
  %147 = bitcast %buffer* %144 to i8*
  call void @ncfree(i8* %147)
  ret i1 true
}

define i1 @invoke_command_with_control_terminal_and_pipe(i32 %parent_obj, i8* %name, i8** %argv, i32 %num_params, %CLVALUE** %stack_ptr, %sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %parent_obj2 = alloca i32
  store i32 %parent_obj, i32* %parent_obj2, align 4
  %2 = bitcast i32* %parent_obj2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %name3 = alloca i8*
  store i8* %name, i8** %name3, align 8
  %3 = bitcast i8** %name3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %argv4 = alloca i8**
  store i8** %argv, i8*** %argv4, align 8
  %4 = bitcast i8*** %argv4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %num_params5 = alloca i32
  store i32 %num_params, i32* %num_params5, align 4
  %5 = bitcast i32* %num_params5 to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %stack_ptr6 = alloca %CLVALUE**
  store %CLVALUE** %stack_ptr, %CLVALUE*** %stack_ptr6, align 8
  %6 = bitcast %CLVALUE*** %stack_ptr6 to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %info7 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info7, align 8
  %7 = bitcast %sVMInfo** %info7 to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  %parent2child_write_fd = alloca i32
  %8 = bitcast i32* %parent2child_write_fd to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  store i32 0, i32* %parent2child_write_fd, align 4
  %parent2child_read_fd = alloca i32
  %9 = bitcast i32* %parent2child_read_fd to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  store i32 0, i32* %parent2child_read_fd, align 4
  %pipes = alloca [2 x i32]
  %10 = bitcast [2 x i32]* %pipes to i8*
  store i8* %10, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  %11 = bitcast [2 x i32]* %pipes to i32*
  %12 = call i32 @pipe(i32* %11)
  %letmp = icmp slt i32 %12, 0
  br i1 %letmp, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %13 = bitcast [8192 x i8*]* %lvtable to i8*
  %14 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %13, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %entry
  %15 = bitcast [2 x i32]* %pipes to i32*
  %element_address = getelementptr i32, i32* %15, i32 0
  %element = load i32, i32* %element_address, align 4
  store i32 %element, i32* %parent2child_read_fd, align 4
  %16 = bitcast [2 x i32]* %pipes to i32*
  %element_address8 = getelementptr i32, i32* %16, i32 1
  %element9 = load i32, i32* %element_address8, align 4
  store i32 %element9, i32* %parent2child_write_fd, align 4
  %17 = call i32 @fork()
  %pid = alloca i32
  %18 = bitcast i32* %pid to i8*
  store i8* %18, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  store i32 %17, i32* %pid, align 4
  %pid10 = load i32, i32* %pid, align 4
  %eqtmpX = icmp eq i32 %pid10, 0
  br i1 %eqtmpX, label %cond_jump_then11, label %cond_end12

cond_jump_then11:                                 ; preds = %cond_end
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %20 = bitcast i8* %19 to i32*
  %parent2child_write_fd13 = load i32, i32* %20, align 4
  %21 = call i32 @close(i32 %parent2child_write_fd13)
  %22 = call i32 @getpid()
  %pid14 = alloca i32
  %23 = bitcast i32* %pid14 to i8*
  store i8* %23, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  store i32 %22, i32* %pid14, align 4
  %24 = call i32 @setpgid(i32 0, i32 0)
  %pid15 = load i32, i32* %pid14, align 4
  %25 = call i32 @tcsetpgrp(i32 0, i32 %pid15)
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %27 = bitcast i8* %26 to i32*
  %parent2child_read_fd16 = load i32, i32* %27, align 4
  %28 = call i32 @dup2(i32 %parent2child_read_fd16, i32 0)
  %letmp17 = icmp slt i32 %28, 0
  br i1 %letmp17, label %cond_jump_then18, label %cond_end19

cond_end12:                                       ; preds = %cond_end25, %cond_end
  %pid26 = load i32, i32* %pid, align 4
  %pid27 = load i32, i32* %pid, align 4
  %29 = call i32 @setpgid(i32 %pid26, i32 %pid27)
  %pid28 = load i32, i32* %pid, align 4
  %30 = call i32 @tcsetpgrp(i32 0, i32 %pid28)
  %parent2child_read_fd29 = load i32, i32* %parent2child_read_fd, align 4
  %31 = call i32 @close(i32 %parent2child_read_fd29)
  %stack_ptr30 = load %CLVALUE**, %CLVALUE*** %stack_ptr6, align 8
  %derefference_value = load %CLVALUE*, %CLVALUE** %stack_ptr30, align 8
  %num_params31 = load i32, i32* %num_params5, align 4
  %32 = ptrtoint %CLVALUE* %derefference_value to i64
  %sextY = sext i32 %num_params31 to i64
  %multtmp = mul nsw i64 %sextY, 4
  %subtmp = sub nsw i64 %32, %multtmp
  %IntTOPtr4b = inttoptr i64 %subtmp to %CLVALUE*
  %33 = bitcast %CLVALUE* %IntTOPtr4b to i32*
  %34 = load i32, i32* %33, align 4
  %obj = alloca i32
  %35 = bitcast i32* %obj to i8*
  store i8* %35, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 516), align 8
  store i32 %34, i32* %obj, align 4
  %obj32 = load i32, i32* %obj, align 4
  %36 = call %sCLHeapMem* @get_object_pointer(i32 %obj32)
  %37 = bitcast %sCLHeapMem* %36 to %sCLCommand*
  %command_data = alloca %sCLCommand*
  %38 = bitcast %sCLCommand** %command_data to i8*
  store i8* %38, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  store %sCLCommand* %37, %sCLCommand** %command_data, align 8
  %parent2child_write_fd33 = load i32, i32* %parent2child_write_fd, align 4
  %command_data34 = load %sCLCommand*, %sCLCommand** %command_data, align 8
  %39 = getelementptr inbounds %sCLCommand, %sCLCommand* %command_data34, i32 0, i32 4
  %40 = load i8*, i8** %39, align 8
  %command_data35 = load %sCLCommand*, %sCLCommand** %command_data, align 8
  %41 = getelementptr inbounds %sCLCommand, %sCLCommand* %command_data35, i32 0, i32 5
  %42 = load i32, i32* %41, align 4
  %sext14 = zext i32 %42 to i64
  %43 = call i64 @write(i32 %parent2child_write_fd33, i8* %40, i64 %sext14)
  %letmp36 = icmp slt i64 %43, 0
  br i1 %letmp36, label %cond_jump_then37, label %cond_end38

cond_jump_then18:                                 ; preds = %cond_jump_then11
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %44 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_string.65, i32 0, i32 0))
  call void @exit(i32 1)
  br label %cond_end19

cond_end19:                                       ; preds = %cond_jump_then18, %cond_jump_then11
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %46 = bitcast i8* %45 to i32*
  %parent2child_read_fd20 = load i32, i32* %46, align 4
  %47 = call i32 @close(i32 %parent2child_read_fd20)
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %49 = bitcast i8* %48 to i8**
  %name21 = load i8*, i8** %49, align 8
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %51 = bitcast i8* %50 to i8***
  %argv22 = load i8**, i8*** %51, align 8
  %52 = call i32 @execvp(i8* %name21, i8** %argv22)
  %letmp23 = icmp slt i32 %52, 0
  br i1 %letmp23, label %cond_jump_then24, label %cond_end25

cond_jump_then24:                                 ; preds = %cond_end19
  call void @exit(i32 64)
  br label %cond_end25

cond_end25:                                       ; preds = %cond_jump_then24, %cond_end19
  call void @exit(i32 0)
  br label %cond_end12

cond_jump_then37:                                 ; preds = %cond_end12
  %53 = bitcast [8192 x i8*]* %lvtable to i8*
  %54 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %53, i64 65536)
  ret i1 false

cond_end38:                                       ; preds = %cond_end12
  %parent2child_write_fd39 = load i32, i32* %parent2child_write_fd, align 4
  %55 = call i32 @close(i32 %parent2child_write_fd39)
  %status = alloca i32
  %56 = bitcast i32* %status to i8*
  store i8* %56, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 518), align 8
  store i32 0, i32* %status, align 4
  %pid40 = load i32, i32* %pid, align 4
  %status41 = load i32, i32* %status, align 4
  %57 = call i32 @waitpid(i32 %pid40, i32* %status, i32 2)
  %pid2 = alloca i32
  %58 = bitcast i32* %pid2 to i8*
  store i8* %58, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  store i32 %57, i32* %pid2, align 4
  %status42 = load i32, i32* %status, align 4
  %andtmp = and i32 %status42, 65280
  %rshifttmp = ashr i32 %andtmp, 8
  %eqtmpX43 = icmp eq i32 %rshifttmp, 64
  br i1 %eqtmpX43, label %cond_jump_then44, label %cond_end45

cond_jump_then44:                                 ; preds = %cond_end38
  %59 = call i32 @getpid()
  %60 = call i32 @getpid()
  %61 = call i32 @setpgid(i32 %59, i32 %60)
  %62 = call i32 @getpid()
  %63 = call i32 @tcsetpgrp(i32 0, i32 %62)
  %64 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %65 = bitcast i8* %64 to %CLVALUE***
  %stack_ptr46 = load %CLVALUE**, %CLVALUE*** %65, align 8
  %66 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  %67 = bitcast i8* %66 to %sVMInfo**
  %info47 = load %sVMInfo*, %sVMInfo** %67, align 8
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %69 = bitcast i8* %68 to i8**
  %name48 = load i8*, i8** %69, align 8
  %70 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_string.66, i32 0, i32 0), i8* %name48)
  call void @vm_err_msg(%CLVALUE** %stack_ptr46, %sVMInfo* %info47, i8* %70)
  %71 = bitcast [8192 x i8*]* %lvtable to i8*
  %72 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %71, i64 65536)
  %73 = ptrtoint i8* %70 to i64
  %74 = icmp ne i64 %73, 0
  br i1 %74, label %cond_then_block, label %cond_end49

cond_end45:                                       ; preds = %cond_end38
  %status50 = load i32, i32* %status, align 4
  %andtmp51 = and i32 %status50, 255
  %eqtmpX52 = icmp eq i32 %andtmp51, 127
  br i1 %eqtmpX52, label %cond_jump_then53, label %"cond_jump_elif0\0A"

cond_then_block:                                  ; preds = %cond_jump_then44
  br label %cond_end49

cond_end49:                                       ; preds = %cond_then_block, %cond_jump_then44
  call void @ncfree(i8* %70)
  ret i1 false

cond_jump_then53:                                 ; preds = %cond_end45
  %75 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 518), align 8
  %76 = bitcast i8* %75 to i32*
  %status55 = load i32, i32* %76, align 4
  %andtmp56 = and i32 %status55, 65280
  %rshifttmp57 = ashr i32 %andtmp56, 8
  %addtmp = add nsw i32 %rshifttmp57, 128
  %rcode = alloca i32
  %77 = bitcast i32* %rcode to i8*
  store i8* %77, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  store i32 %addtmp, i32* %rcode, align 4
  %title = alloca [32 x i8]
  %78 = bitcast [32 x i8]* %title to i8*
  store i8* %78, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %79 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %80 = bitcast i8* %79 to i8**
  %name58 = load i8*, i8** %80, align 8
  %81 = bitcast [32 x i8]* %title to i8*
  %82 = call i8* @xstrncpy(i8* %81, i8* %name58, i32 32)
  %i = alloca i32
  %83 = bitcast i32* %i to i8*
  store i8* %83, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store i32 1, i32* %i, align 4
  br label %loop_top_block

"cond_jump_elif0\0A":                             ; preds = %cond_end45
  %status91 = load i32, i32* %status, align 4
  %andtmp92 = and i32 %status91, 127
  %addtmp93 = add nsw i32 %andtmp92, 1
  %84 = trunc i32 %addtmp93 to i8
  %rshifttmp94 = ashr i8 %84, 1
  %gttmp = icmp sgt i8 %rshifttmp94, 0
  br i1 %gttmp, label %"cond_jump_elif_then0\0A", label %cond_else_block

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  store i32 1, i32* @gSigInt, align 4
  %85 = call i32 @getpid()
  %86 = call i32 @getpid()
  %87 = call i32 @setpgid(i32 %85, i32 %86)
  %88 = call i32 @getpid()
  %89 = call i32 @tcsetpgrp(i32 0, i32 %88)
  %90 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 518), align 8
  %91 = bitcast i8* %90 to i32*
  %status95 = load i32, i32* %91, align 4
  %andtmp96 = and i32 %status95, 65280
  %rshifttmp97 = ashr i32 %andtmp96, 8
  %rcode98 = alloca i32
  %92 = bitcast i32* %rcode98 to i8*
  store i8* %92, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  store i32 %rshifttmp97, i32* %rcode98, align 4
  %93 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %94 = bitcast i8* %93 to %CLVALUE***
  %stack_ptr99 = load %CLVALUE**, %CLVALUE*** %94, align 8
  %derefference_value100 = load %CLVALUE*, %CLVALUE** %stack_ptr99, align 8
  %95 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %96 = bitcast i8* %95 to i32*
  %num_params101 = load i32, i32* %96, align 4
  %97 = ptrtoint %CLVALUE* %derefference_value100 to i64
  %sext5102 = sext i32 %num_params101 to i64
  %multtmp103 = mul nsw i64 %sext5102, 4
  %subtmp104 = sub nsw i64 %97, %multtmp103
  %IntToPtr8105 = inttoptr i64 %subtmp104 to %CLVALUE*
  store %CLVALUE* %IntToPtr8105, %CLVALUE** %stack_ptr99, align 8
  %98 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %99 = bitcast i8* %98 to %CLVALUE***
  %stack_ptr106 = load %CLVALUE**, %CLVALUE*** %99, align 8
  %derefference_value107 = load %CLVALUE*, %CLVALUE** %stack_ptr106, align 8
  %rcode108 = load i32, i32* %rcode98, align 4
  %100 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  %101 = bitcast i8* %100 to %sVMInfo**
  %info109 = load %sVMInfo*, %sVMInfo** %101, align 8
  %102 = call i32 @create_command_object(i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.70, i32 0, i32 0), i32 1, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.71, i32 0, i32 0), i32 1, i32 %rcode108, i1 false, %sVMInfo* %info109)
  %103 = bitcast %CLVALUE* %derefference_value107 to i32*
  store i32 %102, i32* %103, align 4
  %104 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %105 = bitcast i8* %104 to %CLVALUE***
  %stack_ptr110 = load %CLVALUE**, %CLVALUE*** %105, align 8
  %derefference_value111 = load %CLVALUE*, %CLVALUE** %stack_ptr110, align 8
  %106 = ptrtoint %CLVALUE* %derefference_value111 to i64
  %adddtmp112 = add nsw i64 %106, 4
  %IntTOPtr5c113 = inttoptr i64 %adddtmp112 to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c113, %CLVALUE** %stack_ptr110, align 8
  br label %cond_end54

cond_else_block:                                  ; preds = %"cond_jump_elif0\0A"
  %107 = call i32 @getpid()
  %108 = call i32 @getpid()
  %109 = call i32 @setpgid(i32 %107, i32 %108)
  %110 = call i32 @getpid()
  %111 = call i32 @tcsetpgrp(i32 0, i32 %110)
  %112 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 518), align 8
  %113 = bitcast i8* %112 to i32*
  %status114 = load i32, i32* %113, align 4
  %andtmp115 = and i32 %status114, 65280
  %rshifttmp116 = ashr i32 %andtmp115, 8
  %rcode117 = alloca i32
  %114 = bitcast i32* %rcode117 to i8*
  store i8* %114, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  store i32 %rshifttmp116, i32* %rcode117, align 4
  %115 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %116 = bitcast i8* %115 to %CLVALUE***
  %stack_ptr118 = load %CLVALUE**, %CLVALUE*** %116, align 8
  %derefference_value119 = load %CLVALUE*, %CLVALUE** %stack_ptr118, align 8
  %117 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %118 = bitcast i8* %117 to i32*
  %num_params120 = load i32, i32* %118, align 4
  %119 = ptrtoint %CLVALUE* %derefference_value119 to i64
  %sext5121 = sext i32 %num_params120 to i64
  %multtmp122 = mul nsw i64 %sext5121, 4
  %subtmp123 = sub nsw i64 %119, %multtmp122
  %IntToPtr8124 = inttoptr i64 %subtmp123 to %CLVALUE*
  store %CLVALUE* %IntToPtr8124, %CLVALUE** %stack_ptr118, align 8
  %120 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %121 = bitcast i8* %120 to %CLVALUE***
  %stack_ptr125 = load %CLVALUE**, %CLVALUE*** %121, align 8
  %derefference_value126 = load %CLVALUE*, %CLVALUE** %stack_ptr125, align 8
  %rcode127 = load i32, i32* %rcode117, align 4
  %122 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  %123 = bitcast i8* %122 to %sVMInfo**
  %info128 = load %sVMInfo*, %sVMInfo** %123, align 8
  %124 = call i32 @create_command_object(i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.72, i32 0, i32 0), i32 1, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.73, i32 0, i32 0), i32 1, i32 %rcode127, i1 false, %sVMInfo* %info128)
  %125 = bitcast %CLVALUE* %derefference_value126 to i32*
  store i32 %124, i32* %125, align 4
  %126 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %127 = bitcast i8* %126 to %CLVALUE***
  %stack_ptr129 = load %CLVALUE**, %CLVALUE*** %127, align 8
  %derefference_value130 = load %CLVALUE*, %CLVALUE** %stack_ptr129, align 8
  %128 = ptrtoint %CLVALUE* %derefference_value130 to i64
  %adddtmp131 = add nsw i64 %128, 4
  %IntTOPtr5c132 = inttoptr i64 %adddtmp131 to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c132, %CLVALUE** %stack_ptr129, align 8
  br label %cond_end54

cond_end54:                                       ; preds = %cond_else_block, %"cond_jump_elif_then0\0A", %cond_end71
  %129 = bitcast [8192 x i8*]* %lvtable to i8*
  %130 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %129, i64 65536)
  ret i1 true

loop_top_block:                                   ; preds = %cond_then_block62, %cond_jump_then53
  %i59 = load i32, i32* %i, align 4
  %131 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %132 = bitcast i8* %131 to i32*
  %num_params60 = load i32, i32* %132, align 4
  %letmp61 = icmp slt i32 %i59, %num_params60
  br i1 %letmp61, label %cond_then_block62, label %cond_end_block

cond_then_block62:                                ; preds = %loop_top_block
  %133 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %134 = bitcast i8* %133 to [32 x i8]*
  %135 = bitcast [32 x i8]* %134 to i8*
  %136 = call i8* @xstrncat(i8* %135, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_string.67, i32 0, i32 0), i32 32)
  %137 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %138 = bitcast i8* %137 to [32 x i8]*
  %139 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %140 = bitcast i8* %139 to i8***
  %argv63 = load i8**, i8*** %140, align 8
  %i64 = load i32, i32* %i, align 4
  %element_addressB = getelementptr i8*, i8** %argv63, i32 %i64
  %element65 = load i8*, i8** %element_addressB, align 8
  %141 = bitcast [32 x i8]* %138 to i8*
  %142 = call i8* @xstrncat(i8* %141, i8* %element65, i32 32)
  %i66 = load i32, i32* %i, align 4
  %addtmp67 = add nsw i32 %i66, 1
  store i32 %addtmp67, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp67, 1
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %tinfo = alloca %termios
  %143 = bitcast %termios* %tinfo to i8*
  store i8* %143, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %tinfo68 = load %termios, %termios* %tinfo, align 8
  %144 = call i32 @tcgetattr(i32 0, %termios* %tinfo)
  %letmp69 = icmp slt i32 %144, 0
  br i1 %letmp69, label %cond_jump_then70, label %cond_end71

cond_jump_then70:                                 ; preds = %cond_end_block
  %145 = bitcast [8192 x i8*]* %lvtable to i8*
  %146 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %145, i64 65536)
  ret i1 false

cond_end71:                                       ; preds = %cond_end_block
  %147 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  %148 = bitcast i8* %147 to i32*
  %pid72 = load i32, i32* %148, align 4
  %pgrp = alloca i32
  %149 = bitcast i32* %pgrp to i8*
  store i8* %149, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store i32 %pid72, i32* %pgrp, align 4
  %tinfo73 = load %termios, %termios* %tinfo, align 8
  %pgrp74 = load i32, i32* %pgrp, align 4
  %150 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  %151 = bitcast i8* %150 to %sVMInfo**
  %info75 = load %sVMInfo*, %sVMInfo** %151, align 8
  %152 = bitcast [32 x i8]* %title to i8*
  %153 = call i32 @create_job_object(i8* %152, %termios* %tinfo, i32 %pgrp74, %sVMInfo* %info75)
  %job = alloca i32
  %154 = bitcast i32* %job to i8*
  store i8* %154, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store i32 %153, i32* %job, align 4
  %gJobs = load %list__int*, %list__int** @gJobs, align 8
  %job76 = load i32, i32* %job, align 4
  call void @"push_back_int6_src/vm"(%list__int* %gJobs, i32 %job76)
  %155 = call i32 @getpid()
  %156 = call i32 @getpid()
  %157 = call i32 @setpgid(i32 %155, i32 %156)
  %158 = call i32 @getpid()
  %159 = call i32 @tcsetpgrp(i32 0, i32 %158)
  %160 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 518), align 8
  %161 = bitcast i8* %160 to i32*
  %status77 = load i32, i32* %161, align 4
  %andtmp78 = and i32 %status77, 65280
  %rshifttmp79 = ashr i32 %andtmp78, 8
  %rcode2 = alloca i32
  %162 = bitcast i32* %rcode2 to i8*
  store i8* %162, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32 %rshifttmp79, i32* %rcode2, align 4
  %163 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %164 = bitcast i8* %163 to %CLVALUE***
  %stack_ptr80 = load %CLVALUE**, %CLVALUE*** %164, align 8
  %derefference_value81 = load %CLVALUE*, %CLVALUE** %stack_ptr80, align 8
  %165 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %166 = bitcast i8* %165 to i32*
  %num_params82 = load i32, i32* %166, align 4
  %167 = ptrtoint %CLVALUE* %derefference_value81 to i64
  %sext5 = sext i32 %num_params82 to i64
  %multtmp83 = mul nsw i64 %sext5, 4
  %subtmp84 = sub nsw i64 %167, %multtmp83
  %IntToPtr8 = inttoptr i64 %subtmp84 to %CLVALUE*
  store %CLVALUE* %IntToPtr8, %CLVALUE** %stack_ptr80, align 8
  %168 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %169 = bitcast i8* %168 to %CLVALUE***
  %stack_ptr85 = load %CLVALUE**, %CLVALUE*** %169, align 8
  %derefference_value86 = load %CLVALUE*, %CLVALUE** %stack_ptr85, align 8
  %rcode287 = load i32, i32* %rcode2, align 4
  %170 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  %171 = bitcast i8* %170 to %sVMInfo**
  %info88 = load %sVMInfo*, %sVMInfo** %171, align 8
  %172 = call i32 @create_command_object(i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.68, i32 0, i32 0), i32 1, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.69, i32 0, i32 0), i32 1, i32 %rcode287, i1 false, %sVMInfo* %info88)
  %173 = bitcast %CLVALUE* %derefference_value86 to i32*
  store i32 %172, i32* %173, align 4
  %174 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %175 = bitcast i8* %174 to %CLVALUE***
  %stack_ptr89 = load %CLVALUE**, %CLVALUE*** %175, align 8
  %derefference_value90 = load %CLVALUE*, %CLVALUE** %stack_ptr89, align 8
  %176 = ptrtoint %CLVALUE* %derefference_value90 to i64
  %adddtmp = add nsw i64 %176, 4
  %IntTOPtr5c = inttoptr i64 %adddtmp to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c, %CLVALUE** %stack_ptr89, align 8
  br label %cond_end54
}

define void @"push_back_int6_src/vm"(%list__int* %self, i32 %item) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %list__int*
  store %list__int* %self, %list__int** %self2, align 8
  %2 = bitcast %list__int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %item3 = alloca i32
  store i32 %item, i32* %item3, align 4
  %3 = bitcast i32* %item3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %self4 = load %list__int*, %list__int** %self2, align 8
  %4 = getelementptr inbounds %list__int, %list__int* %self4, i32 0, i32 2
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %"cond_jump_elif0\0A"

cond_jump_then:                                   ; preds = %entry
  %6 = call i8* @nccalloc(i64 1, i64 24)
  %7 = bitcast i8* %6 to %list_item__int*
  %litem = alloca %list_item__int*
  %8 = bitcast %list_item__int** %litem to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  store %list_item__int* %7, %list_item__int** %litem, align 8
  %litem5 = load %list_item__int*, %list_item__int** %litem, align 8
  %9 = getelementptr inbounds %list_item__int, %list_item__int* %litem5, i32 0, i32 1
  store %list_item__int* null, %list_item__int** %9, align 8
  %litem6 = load %list_item__int*, %list_item__int** %litem, align 8
  %10 = getelementptr inbounds %list_item__int, %list_item__int* %litem6, i32 0, i32 2
  store %list_item__int* null, %list_item__int** %10, align 8
  %litem7 = load %list_item__int*, %list_item__int** %litem, align 8
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %12 = bitcast i8* %11 to i32*
  %item8 = load i32, i32* %12, align 4
  %13 = getelementptr inbounds %list_item__int, %list_item__int* %litem7, i32 0, i32 0
  store i32 %item8, i32* %13, align 4
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %15 = bitcast i8* %14 to %list__int**
  %self9 = load %list__int*, %list__int** %15, align 8
  %litem10 = load %list_item__int*, %list_item__int** %litem, align 8
  %16 = getelementptr inbounds %list__int, %list__int* %self9, i32 0, i32 1
  store %list_item__int* %litem10, %list_item__int** %16, align 8
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %18 = bitcast i8* %17 to %list__int**
  %self11 = load %list__int*, %list__int** %18, align 8
  %litem12 = load %list_item__int*, %list_item__int** %litem, align 8
  %19 = getelementptr inbounds %list__int, %list__int* %self11, i32 0, i32 0
  store %list_item__int* %litem12, %list_item__int** %19, align 8
  br label %cond_end

"cond_jump_elif0\0A":                             ; preds = %entry
  %self13 = load %list__int*, %list__int** %self2, align 8
  %20 = getelementptr inbounds %list__int, %list__int* %self13, i32 0, i32 2
  %21 = load i32, i32* %20, align 4
  %eqtmpX14 = icmp eq i32 %21, 1
  br i1 %eqtmpX14, label %"cond_jump_elif_then0\0A", label %cond_else_block

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %22 = call i8* @nccalloc(i64 1, i64 24)
  %23 = bitcast i8* %22 to %list_item__int*
  %litem15 = alloca %list_item__int*
  %24 = bitcast %list_item__int** %litem15 to i8*
  store i8* %24, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  store %list_item__int* %23, %list_item__int** %litem15, align 8
  %litem16 = load %list_item__int*, %list_item__int** %litem15, align 8
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %26 = bitcast i8* %25 to %list__int**
  %self17 = load %list__int*, %list__int** %26, align 8
  %27 = getelementptr inbounds %list__int, %list__int* %self17, i32 0, i32 0
  %28 = load %list_item__int*, %list_item__int** %27, align 8
  %29 = getelementptr inbounds %list_item__int, %list_item__int* %litem16, i32 0, i32 1
  store %list_item__int* %28, %list_item__int** %29, align 8
  %litem18 = load %list_item__int*, %list_item__int** %litem15, align 8
  %30 = getelementptr inbounds %list_item__int, %list_item__int* %litem18, i32 0, i32 2
  store %list_item__int* null, %list_item__int** %30, align 8
  %litem19 = load %list_item__int*, %list_item__int** %litem15, align 8
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %32 = bitcast i8* %31 to i32*
  %item20 = load i32, i32* %32, align 4
  %33 = getelementptr inbounds %list_item__int, %list_item__int* %litem19, i32 0, i32 0
  store i32 %item20, i32* %33, align 4
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %35 = bitcast i8* %34 to %list__int**
  %self21 = load %list__int*, %list__int** %35, align 8
  %litem22 = load %list_item__int*, %list_item__int** %litem15, align 8
  %36 = getelementptr inbounds %list__int, %list__int* %self21, i32 0, i32 1
  store %list_item__int* %litem22, %list_item__int** %36, align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %38 = bitcast i8* %37 to %list__int**
  %self23 = load %list__int*, %list__int** %38, align 8
  %39 = getelementptr inbounds %list__int, %list__int* %self23, i32 0, i32 0
  %40 = load %list_item__int*, %list_item__int** %39, align 8
  %litem24 = load %list_item__int*, %list_item__int** %litem15, align 8
  %41 = getelementptr inbounds %list_item__int, %list_item__int* %40, i32 0, i32 2
  store %list_item__int* %litem24, %list_item__int** %41, align 8
  br label %cond_end

cond_else_block:                                  ; preds = %"cond_jump_elif0\0A"
  %42 = call i8* @nccalloc(i64 1, i64 24)
  %43 = bitcast i8* %42 to %list_item__int*
  %litem25 = alloca %list_item__int*
  %44 = bitcast %list_item__int** %litem25 to i8*
  store i8* %44, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  store %list_item__int* %43, %list_item__int** %litem25, align 8
  %litem26 = load %list_item__int*, %list_item__int** %litem25, align 8
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %46 = bitcast i8* %45 to %list__int**
  %self27 = load %list__int*, %list__int** %46, align 8
  %47 = getelementptr inbounds %list__int, %list__int* %self27, i32 0, i32 1
  %48 = load %list_item__int*, %list_item__int** %47, align 8
  %49 = getelementptr inbounds %list_item__int, %list_item__int* %litem26, i32 0, i32 1
  store %list_item__int* %48, %list_item__int** %49, align 8
  %litem28 = load %list_item__int*, %list_item__int** %litem25, align 8
  %50 = getelementptr inbounds %list_item__int, %list_item__int* %litem28, i32 0, i32 2
  store %list_item__int* null, %list_item__int** %50, align 8
  %litem29 = load %list_item__int*, %list_item__int** %litem25, align 8
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %52 = bitcast i8* %51 to i32*
  %item30 = load i32, i32* %52, align 4
  %53 = getelementptr inbounds %list_item__int, %list_item__int* %litem29, i32 0, i32 0
  store i32 %item30, i32* %53, align 4
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %55 = bitcast i8* %54 to %list__int**
  %self31 = load %list__int*, %list__int** %55, align 8
  %56 = getelementptr inbounds %list__int, %list__int* %self31, i32 0, i32 1
  %57 = load %list_item__int*, %list_item__int** %56, align 8
  %litem32 = load %list_item__int*, %list_item__int** %litem25, align 8
  %58 = getelementptr inbounds %list_item__int, %list_item__int* %57, i32 0, i32 2
  store %list_item__int* %litem32, %list_item__int** %58, align 8
  %59 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %60 = bitcast i8* %59 to %list__int**
  %self33 = load %list__int*, %list__int** %60, align 8
  %litem34 = load %list_item__int*, %list_item__int** %litem25, align 8
  %61 = getelementptr inbounds %list__int, %list__int* %self33, i32 0, i32 1
  store %list_item__int* %litem34, %list_item__int** %61, align 8
  br label %cond_end

cond_end:                                         ; preds = %cond_else_block, %"cond_jump_elif_then0\0A", %cond_jump_then
  %self35 = load %list__int*, %list__int** %self2, align 8
  %self36 = load %list__int*, %list__int** %self2, align 8
  %62 = getelementptr inbounds %list__int, %list__int* %self36, i32 0, i32 2
  %63 = load i32, i32* %62, align 4
  %addtmp = add nsw i32 %63, 1
  %64 = getelementptr inbounds %list__int, %list__int* %self35, i32 0, i32 2
  store i32 %addtmp, i32* %64, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %65 = bitcast [8192 x i8*]* %lvtable to i8*
  %66 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %65, i64 65536)
  ret void
}

define i1 @invoke_command_with_pipe(i32 %parent_obj, i8* %name, i8** %argv, %CLVALUE** %stack_ptr, i32 %num_params, %sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %parent_obj2 = alloca i32
  store i32 %parent_obj, i32* %parent_obj2, align 4
  %2 = bitcast i32* %parent_obj2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %name3 = alloca i8*
  store i8* %name, i8** %name3, align 8
  %3 = bitcast i8** %name3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %argv4 = alloca i8**
  store i8** %argv, i8*** %argv4, align 8
  %4 = bitcast i8*** %argv4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %stack_ptr5 = alloca %CLVALUE**
  store %CLVALUE** %stack_ptr, %CLVALUE*** %stack_ptr5, align 8
  %5 = bitcast %CLVALUE*** %stack_ptr5 to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %num_params6 = alloca i32
  store i32 %num_params, i32* %num_params6, align 4
  %6 = bitcast i32* %num_params6 to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %info7 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info7, align 8
  %7 = bitcast %sVMInfo** %info7 to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  %child2parent_write_fd = alloca i32
  %8 = bitcast i32* %child2parent_write_fd to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  store i32 0, i32* %child2parent_write_fd, align 4
  %child2parent_read_fd = alloca i32
  %9 = bitcast i32* %child2parent_read_fd to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  store i32 0, i32* %child2parent_read_fd, align 4
  %parent2child_write_fd = alloca i32
  %10 = bitcast i32* %parent2child_write_fd to i8*
  store i8* %10, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  store i32 0, i32* %parent2child_write_fd, align 4
  %parent2child_read_fd = alloca i32
  %11 = bitcast i32* %parent2child_read_fd to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  store i32 0, i32* %parent2child_read_fd, align 4
  %child2parent_read_fd_err = alloca i32
  %12 = bitcast i32* %child2parent_read_fd_err to i8*
  store i8* %12, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 516), align 8
  store i32 0, i32* %child2parent_read_fd_err, align 4
  %child2parent_write_fd_err = alloca i32
  %13 = bitcast i32* %child2parent_write_fd_err to i8*
  store i8* %13, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  store i32 0, i32* %child2parent_write_fd_err, align 4
  %pipes = alloca [2 x i32]
  %14 = bitcast [2 x i32]* %pipes to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 518), align 8
  %15 = bitcast [2 x i32]* %pipes to i32*
  %16 = call i32 @pipe(i32* %15)
  %17 = bitcast [2 x i32]* %pipes to i32*
  %element_address = getelementptr i32, i32* %17, i32 0
  %element = load i32, i32* %element_address, align 4
  store i32 %element, i32* %child2parent_read_fd, align 4
  %18 = bitcast [2 x i32]* %pipes to i32*
  %element_address8 = getelementptr i32, i32* %18, i32 1
  %element9 = load i32, i32* %element_address8, align 4
  store i32 %element9, i32* %child2parent_write_fd, align 4
  %19 = bitcast [2 x i32]* %pipes to i32*
  %20 = call i32 @pipe(i32* %19)
  %21 = bitcast [2 x i32]* %pipes to i32*
  %element_address10 = getelementptr i32, i32* %21, i32 0
  %element11 = load i32, i32* %element_address10, align 4
  store i32 %element11, i32* %parent2child_read_fd, align 4
  %22 = bitcast [2 x i32]* %pipes to i32*
  %element_address12 = getelementptr i32, i32* %22, i32 1
  %element13 = load i32, i32* %element_address12, align 4
  store i32 %element13, i32* %parent2child_write_fd, align 4
  %23 = bitcast [2 x i32]* %pipes to i32*
  %24 = call i32 @pipe(i32* %23)
  %25 = bitcast [2 x i32]* %pipes to i32*
  %element_address14 = getelementptr i32, i32* %25, i32 0
  %element15 = load i32, i32* %element_address14, align 4
  store i32 %element15, i32* %child2parent_read_fd_err, align 4
  %26 = bitcast [2 x i32]* %pipes to i32*
  %element_address16 = getelementptr i32, i32* %26, i32 1
  %element17 = load i32, i32* %element_address16, align 4
  store i32 %element17, i32* %child2parent_write_fd_err, align 4
  %27 = call i32 @fork()
  %pid = alloca i32
  %28 = bitcast i32* %pid to i8*
  store i8* %28, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 519), align 8
  store i32 %27, i32* %pid, align 4
  %pid18 = load i32, i32* %pid, align 4
  %eqtmpX = icmp eq i32 %pid18, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %29 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 514), align 8
  %30 = bitcast i8* %29 to i32*
  %parent2child_write_fd19 = load i32, i32* %30, align 4
  %31 = call i32 @close(i32 %parent2child_write_fd19)
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %33 = bitcast i8* %32 to i32*
  %child2parent_read_fd20 = load i32, i32* %33, align 4
  %34 = call i32 @close(i32 %child2parent_read_fd20)
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 516), align 8
  %36 = bitcast i8* %35 to i32*
  %child2parent_read_fd_err21 = load i32, i32* %36, align 4
  %37 = call i32 @close(i32 %child2parent_read_fd_err21)
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  %39 = bitcast i8* %38 to i32*
  %parent2child_read_fd22 = load i32, i32* %39, align 4
  %40 = call i32 @dup2(i32 %parent2child_read_fd22, i32 0)
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %42 = bitcast i8* %41 to i32*
  %child2parent_write_fd23 = load i32, i32* %42, align 4
  %43 = call i32 @dup2(i32 %child2parent_write_fd23, i32 1)
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %45 = bitcast i8* %44 to i32*
  %child2parent_write_fd_err24 = load i32, i32* %45, align 4
  %46 = call i32 @dup2(i32 %child2parent_write_fd_err24, i32 2)
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 515), align 8
  %48 = bitcast i8* %47 to i32*
  %parent2child_read_fd25 = load i32, i32* %48, align 4
  %49 = call i32 @close(i32 %parent2child_read_fd25)
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 512), align 8
  %51 = bitcast i8* %50 to i32*
  %child2parent_write_fd26 = load i32, i32* %51, align 4
  %52 = call i32 @close(i32 %child2parent_write_fd26)
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 517), align 8
  %54 = bitcast i8* %53 to i32*
  %child2parent_write_fd_err27 = load i32, i32* %54, align 4
  %55 = call i32 @close(i32 %child2parent_write_fd_err27)
  %56 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %57 = bitcast i8* %56 to i8**
  %name28 = load i8*, i8** %57, align 8
  %58 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %59 = bitcast i8* %58 to i8***
  %argv29 = load i8**, i8*** %59, align 8
  %60 = call i32 @execvp(i8* %name28, i8** %argv29)
  %letmp = icmp slt i32 %60, 0
  br i1 %letmp, label %cond_jump_then30, label %cond_end31

cond_end:                                         ; preds = %cond_end31, %entry
  %parent2child_read_fd32 = load i32, i32* %parent2child_read_fd, align 4
  %61 = call i32 @close(i32 %parent2child_read_fd32)
  %child2parent_write_fd33 = load i32, i32* %child2parent_write_fd, align 4
  %62 = call i32 @close(i32 %child2parent_write_fd33)
  %child2parent_write_fd_err34 = load i32, i32* %child2parent_write_fd_err, align 4
  %63 = call i32 @close(i32 %child2parent_write_fd_err34)
  %stack_ptr35 = load %CLVALUE**, %CLVALUE*** %stack_ptr5, align 8
  %derefference_value = load %CLVALUE*, %CLVALUE** %stack_ptr35, align 8
  %num_params36 = load i32, i32* %num_params6, align 4
  %64 = ptrtoint %CLVALUE* %derefference_value to i64
  %sextY = sext i32 %num_params36 to i64
  %multtmp = mul nsw i64 %sextY, 4
  %subtmp = sub nsw i64 %64, %multtmp
  %IntTOPtr4b = inttoptr i64 %subtmp to %CLVALUE*
  %65 = bitcast %CLVALUE* %IntTOPtr4b to i32*
  %66 = load i32, i32* %65, align 4
  %obj = alloca i32
  %67 = bitcast i32* %obj to i8*
  store i8* %67, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  store i32 %66, i32* %obj, align 4
  %obj37 = load i32, i32* %obj, align 4
  %68 = call %sCLHeapMem* @get_object_pointer(i32 %obj37)
  %69 = bitcast %sCLHeapMem* %68 to %sCLCommand*
  %command_data = alloca %sCLCommand*
  %70 = bitcast %sCLCommand** %command_data to i8*
  store i8* %70, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  store %sCLCommand* %69, %sCLCommand** %command_data, align 8
  %parent2child_write_fd38 = load i32, i32* %parent2child_write_fd, align 4
  %command_data39 = load %sCLCommand*, %sCLCommand** %command_data, align 8
  %71 = getelementptr inbounds %sCLCommand, %sCLCommand* %command_data39, i32 0, i32 4
  %72 = load i8*, i8** %71, align 8
  %command_data40 = load %sCLCommand*, %sCLCommand** %command_data, align 8
  %73 = getelementptr inbounds %sCLCommand, %sCLCommand* %command_data40, i32 0, i32 5
  %74 = load i32, i32* %73, align 4
  %sext14 = zext i32 %74 to i64
  %75 = call i64 @write(i32 %parent2child_write_fd38, i8* %72, i64 %sext14)
  %letmp41 = icmp slt i64 %75, 0
  br i1 %letmp41, label %cond_jump_then42, label %cond_end43

cond_jump_then30:                                 ; preds = %cond_jump_then
  call void @exit(i32 64)
  br label %cond_end31

cond_end31:                                       ; preds = %cond_jump_then30, %cond_jump_then
  call void @exit(i32 2)
  br label %cond_end

cond_jump_then42:                                 ; preds = %cond_end
  %76 = bitcast [8192 x i8*]* %lvtable to i8*
  %77 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %76, i64 65536)
  ret i1 false

cond_end43:                                       ; preds = %cond_end
  %parent2child_write_fd44 = load i32, i32* %parent2child_write_fd, align 4
  %78 = call i32 @close(i32 %parent2child_write_fd44)
  %79 = call i8* @nccalloc(i64 1, i64 16)
  %80 = bitcast i8* %79 to %buffer*
  %81 = call %buffer* @buffer_initialize(%buffer* %80)
  %child_output = alloca %buffer*
  %82 = bitcast %buffer** %child_output to i8*
  store i8* %82, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store %buffer* %81, %buffer** %child_output, align 8
  %83 = call i8* @nccalloc(i64 1, i64 16)
  %84 = bitcast i8* %83 to %buffer*
  %85 = call %buffer* @buffer_initialize(%buffer* %84)
  %child_output_error = alloca %buffer*
  %86 = bitcast %buffer** %child_output_error to i8*
  store i8* %86, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %buffer* %85, %buffer** %child_output_error, align 8
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end62, %cond_end43
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %pipe_data = alloca [128 x i8]
  %87 = bitcast [128 x i8]* %pipe_data to i8*
  store i8* %87, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %88 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 513), align 8
  %89 = bitcast i8* %88 to i32*
  %child2parent_read_fd45 = load i32, i32* %89, align 4
  %90 = bitcast [128 x i8]* %pipe_data to i8*
  %91 = call i64 @read(i32 %child2parent_read_fd45, i8* %90, i64 128)
  %92 = trunc i64 %91 to i32
  %readed_byte = alloca i32
  %93 = bitcast i32* %readed_byte to i8*
  store i8* %93, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  store i32 %92, i32* %readed_byte, align 4
  %pipe_data_err = alloca [128 x i8]
  %94 = bitcast [128 x i8]* %pipe_data_err to i8*
  store i8* %94, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 529), align 8
  %95 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 516), align 8
  %96 = bitcast i8* %95 to i32*
  %child2parent_read_fd_err46 = load i32, i32* %96, align 4
  %97 = bitcast [128 x i8]* %pipe_data_err to i8*
  %98 = call i64 @read(i32 %child2parent_read_fd_err46, i8* %97, i64 128)
  %99 = trunc i64 %98 to i32
  %readed_byte_err = alloca i32
  %100 = bitcast i32* %readed_byte_err to i8*
  store i8* %100, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  store i32 %99, i32* %readed_byte_err, align 4
  %readed_byte47 = load i32, i32* %readed_byte, align 4
  %leeqtmp = icmp sle i32 %readed_byte47, 0
  store i1 %leeqtmp, i1* %andand_result_var, align 1
  br i1 %leeqtmp, label %cond_jump_then48, label %cond_jump_end

cond_end_block:                                   ; preds = %cond_jump_then51, %loop_top_block
  %child2parent_read_fd66 = load i32, i32* %child2parent_read_fd, align 4
  %101 = call i32 @close(i32 %child2parent_read_fd66)
  %child2parent_read_fd_err67 = load i32, i32* %child2parent_read_fd_err, align 4
  %102 = call i32 @close(i32 %child2parent_read_fd_err67)
  %status = alloca i32
  %103 = bitcast i32* %status to i8*
  store i8* %103, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  store i32 0, i32* %status, align 4
  %pid68 = load i32, i32* %pid, align 4
  %status69 = load i32, i32* %status, align 4
  %104 = call i32 @waitpid(i32 %pid68, i32* %status, i32 2)
  %pid2 = alloca i32
  %105 = bitcast i32* %pid2 to i8*
  store i8* %105, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i32 %104, i32* %pid2, align 4
  %status70 = load i32, i32* %status, align 4
  %andtmp = and i32 %status70, 65280
  %rshifttmp = ashr i32 %andtmp, 8
  %eqtmpX71 = icmp eq i32 %rshifttmp, 64
  br i1 %eqtmpX71, label %cond_jump_then72, label %cond_end73

cond_jump_then48:                                 ; preds = %cond_then_block
  %readed_byte_err49 = load i32, i32* %readed_byte_err, align 4
  %leeqtmp50 = icmp sle i32 %readed_byte_err49, 0
  %andand = and i1 %leeqtmp, %leeqtmp50
  store i1 %andand, i1* %andand_result_var, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then48, %cond_then_block
  %andand_result_value = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value, label %cond_jump_then51, label %cond_end52

cond_jump_then51:                                 ; preds = %cond_jump_end
  br label %cond_end_block

cond_end52:                                       ; preds = %after_break, %cond_jump_end
  %readed_byte53 = load i32, i32* %readed_byte, align 4
  %getmp = icmp sge i32 %readed_byte53, 0
  br i1 %getmp, label %cond_jump_then54, label %cond_end55

after_break:                                      ; No predecessors!
  br label %cond_end52

cond_jump_then54:                                 ; preds = %cond_end52
  %106 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %107 = bitcast i8* %106 to %buffer**
  %child_output56 = load %buffer*, %buffer** %107, align 8
  %108 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %109 = bitcast i8* %108 to [128 x i8]*
  %110 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %111 = bitcast i8* %110 to i32*
  %readed_byte57 = load i32, i32* %111, align 4
  %112 = bitcast [128 x i8]* %109 to i8*
  %sext1458 = zext i32 %readed_byte57 to i64
  call void @buffer_append(%buffer* %child_output56, i8* %112, i64 %sext1458)
  br label %cond_end55

cond_end55:                                       ; preds = %cond_jump_then54, %cond_end52
  %readed_byte_err59 = load i32, i32* %readed_byte_err, align 4
  %getmp60 = icmp sge i32 %readed_byte_err59, 0
  br i1 %getmp60, label %cond_jump_then61, label %cond_end62

cond_jump_then61:                                 ; preds = %cond_end55
  %113 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %114 = bitcast i8* %113 to %buffer**
  %child_output_error63 = load %buffer*, %buffer** %114, align 8
  %115 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 529), align 8
  %116 = bitcast i8* %115 to [128 x i8]*
  %117 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  %118 = bitcast i8* %117 to i32*
  %readed_byte_err64 = load i32, i32* %118, align 4
  %119 = bitcast [128 x i8]* %116 to i8*
  %sext1465 = zext i32 %readed_byte_err64 to i64
  call void @buffer_append(%buffer* %child_output_error63, i8* %119, i64 %sext1465)
  br label %cond_end62

cond_end62:                                       ; preds = %cond_jump_then61, %cond_end55
  br label %loop_top_block

cond_jump_then72:                                 ; preds = %cond_end_block
  %120 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %121 = bitcast i8* %120 to %CLVALUE***
  %stack_ptr74 = load %CLVALUE**, %CLVALUE*** %121, align 8
  %122 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  %123 = bitcast i8* %122 to %sVMInfo**
  %info75 = load %sVMInfo*, %sVMInfo** %123, align 8
  %124 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %125 = bitcast i8* %124 to i8**
  %name76 = load i8*, i8** %125, align 8
  %126 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_string.74, i32 0, i32 0), i8* %name76)
  call void @vm_err_msg(%CLVALUE** %stack_ptr74, %sVMInfo* %info75, i8* %126)
  %127 = bitcast [8192 x i8*]* %lvtable to i8*
  %128 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %127, i64 65536)
  %129 = ptrtoint i8* %126 to i64
  %130 = icmp ne i64 %129, 0
  br i1 %130, label %cond_then_block77, label %cond_end78

cond_end73:                                       ; preds = %cond_end_block
  %stack_ptr83 = load %CLVALUE**, %CLVALUE*** %stack_ptr5, align 8
  %derefference_value84 = load %CLVALUE*, %CLVALUE** %stack_ptr83, align 8
  %num_params85 = load i32, i32* %num_params6, align 4
  %131 = ptrtoint %CLVALUE* %derefference_value84 to i64
  %sext5 = sext i32 %num_params85 to i64
  %multtmp86 = mul nsw i64 %sext5, 4
  %subtmp87 = sub nsw i64 %131, %multtmp86
  %IntToPtr8 = inttoptr i64 %subtmp87 to %CLVALUE*
  store %CLVALUE* %IntToPtr8, %CLVALUE** %stack_ptr83, align 8
  %status88 = load i32, i32* %status, align 4
  %andtmp89 = and i32 %status88, 65280
  %rshifttmp90 = ashr i32 %andtmp89, 8
  %rcode = alloca i32
  %132 = bitcast i32* %rcode to i8*
  store i8* %132, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store i32 %rshifttmp90, i32* %rcode, align 4
  %stack_ptr91 = load %CLVALUE**, %CLVALUE*** %stack_ptr5, align 8
  %derefference_value92 = load %CLVALUE*, %CLVALUE** %stack_ptr91, align 8
  %child_output93 = load %buffer*, %buffer** %child_output, align 8
  %133 = getelementptr inbounds %buffer, %buffer* %child_output93, i32 0, i32 0
  %134 = load i8*, i8** %133, align 8
  %child_output94 = load %buffer*, %buffer** %child_output, align 8
  %135 = getelementptr inbounds %buffer, %buffer* %child_output94, i32 0, i32 1
  %136 = load i32, i32* %135, align 4
  %child_output_error95 = load %buffer*, %buffer** %child_output_error, align 8
  %137 = getelementptr inbounds %buffer, %buffer* %child_output_error95, i32 0, i32 0
  %138 = load i8*, i8** %137, align 8
  %child_output_error96 = load %buffer*, %buffer** %child_output_error, align 8
  %139 = getelementptr inbounds %buffer, %buffer* %child_output_error96, i32 0, i32 1
  %140 = load i32, i32* %139, align 4
  %rcode97 = load i32, i32* %rcode, align 4
  %info98 = load %sVMInfo*, %sVMInfo** %info7, align 8
  %141 = call i32 @create_command_object(i8* %134, i32 %136, i8* %138, i32 %140, i32 %rcode97, i1 false, %sVMInfo* %info98)
  %142 = bitcast %CLVALUE* %derefference_value92 to i32*
  store i32 %141, i32* %142, align 4
  %stack_ptr99 = load %CLVALUE**, %CLVALUE*** %stack_ptr5, align 8
  %derefference_value100 = load %CLVALUE*, %CLVALUE** %stack_ptr99, align 8
  %143 = ptrtoint %CLVALUE* %derefference_value100 to i64
  %adddtmp = add nsw i64 %143, 4
  %IntTOPtr5c = inttoptr i64 %adddtmp to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c, %CLVALUE** %stack_ptr99, align 8
  %status101 = load i32, i32* %status, align 4
  %andtmp102 = and i32 %status101, 127
  %addtmp = add nsw i32 %andtmp102, 1
  %144 = trunc i32 %addtmp to i8
  %rshifttmp103 = ashr i8 %144, 1
  %gttmp = icmp sgt i8 %rshifttmp103, 0
  br i1 %gttmp, label %cond_jump_then104, label %cond_end105

cond_then_block77:                                ; preds = %cond_jump_then72
  br label %cond_end78

cond_end78:                                       ; preds = %cond_then_block77, %cond_jump_then72
  call void @ncfree(i8* %126)
  %145 = load %buffer*, %buffer** %child_output, align 8
  call void @buffer_finalize(%buffer* %145)
  %146 = ptrtoint %buffer* %145 to i64
  %147 = icmp ne i64 %146, 0
  br i1 %147, label %cond_then_block79, label %cond_end80

cond_then_block79:                                ; preds = %cond_end78
  br label %cond_end80

cond_end80:                                       ; preds = %cond_then_block79, %cond_end78
  %148 = bitcast %buffer* %145 to i8*
  call void @ncfree(i8* %148)
  %149 = load %buffer*, %buffer** %child_output_error, align 8
  call void @buffer_finalize(%buffer* %149)
  %150 = ptrtoint %buffer* %149 to i64
  %151 = icmp ne i64 %150, 0
  br i1 %151, label %cond_then_block81, label %cond_end82

cond_then_block81:                                ; preds = %cond_end80
  br label %cond_end82

cond_end82:                                       ; preds = %cond_then_block81, %cond_end80
  %152 = bitcast %buffer* %149 to i8*
  call void @ncfree(i8* %152)
  ret i1 false

cond_jump_then104:                                ; preds = %cond_end73
  store i32 1, i32* @gSigInt, align 4
  br label %cond_end105

cond_end105:                                      ; preds = %cond_jump_then104, %cond_end73
  %153 = bitcast [8192 x i8*]* %lvtable to i8*
  %154 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %153, i64 65536)
  %155 = load %buffer*, %buffer** %child_output, align 8
  call void @buffer_finalize(%buffer* %155)
  %156 = ptrtoint %buffer* %155 to i64
  %157 = icmp ne i64 %156, 0
  br i1 %157, label %cond_then_block106, label %cond_end107

cond_then_block106:                               ; preds = %cond_end105
  br label %cond_end107

cond_end107:                                      ; preds = %cond_then_block106, %cond_end105
  %158 = bitcast %buffer* %155 to i8*
  call void @ncfree(i8* %158)
  %159 = load %buffer*, %buffer** %child_output_error, align 8
  call void @buffer_finalize(%buffer* %159)
  %160 = ptrtoint %buffer* %159 to i64
  %161 = icmp ne i64 %160, 0
  br i1 %161, label %cond_then_block108, label %cond_end109

cond_then_block108:                               ; preds = %cond_end107
  br label %cond_end109

cond_end109:                                      ; preds = %cond_then_block108, %cond_end107
  %162 = bitcast %buffer* %159 to i8*
  call void @ncfree(i8* %162)
  ret i1 true
}

define void @ready_for_vm_stack(%CLVALUE* %stack, %CLVALUE* %parent_stack_ptr, i32 %num_params, i32 %var_num, %sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %stack2 = alloca %CLVALUE*
  store %CLVALUE* %stack, %CLVALUE** %stack2, align 8
  %2 = bitcast %CLVALUE** %stack2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %parent_stack_ptr3 = alloca %CLVALUE*
  store %CLVALUE* %parent_stack_ptr, %CLVALUE** %parent_stack_ptr3, align 8
  %3 = bitcast %CLVALUE** %parent_stack_ptr3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %num_params4 = alloca i32
  store i32 %num_params, i32* %num_params4, align 4
  %4 = bitcast i32* %num_params4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %var_num5 = alloca i32
  store i32 %var_num, i32* %var_num5, align 4
  %5 = bitcast i32* %var_num5 to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 509), align 8
  %info6 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info6, align 8
  %6 = bitcast %sVMInfo** %info6 to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %num_params7 = load i32, i32* %num_params4, align 4
  %gttmp = icmp sgt i32 %num_params7, 0
  br i1 %gttmp, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %i = alloca i32
  %7 = bitcast i32* %i to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 511), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

cond_end:                                         ; preds = %cond_end19, %entry
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret void

loop_top_block:                                   ; preds = %cond_then_block, %cond_jump_then
  %i8 = load i32, i32* %i, align 4
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %11 = bitcast i8* %10 to i32*
  %num_params9 = load i32, i32* %11, align 4
  %letmp = icmp slt i32 %i8, %num_params9
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %13 = bitcast i8* %12 to %CLVALUE**
  %stack10 = load %CLVALUE*, %CLVALUE** %13, align 8
  %i11 = load i32, i32* %i, align 4
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 507), align 8
  %15 = bitcast i8* %14 to %CLVALUE**
  %parent_stack_ptr12 = load %CLVALUE*, %CLVALUE** %15, align 8
  %i13 = load i32, i32* %i, align 4
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 508), align 8
  %17 = bitcast i8* %16 to i32*
  %num_params14 = load i32, i32* %17, align 4
  %subttmp = sub nsw i32 %i13, %num_params14
  %element_addressB = getelementptr %CLVALUE, %CLVALUE* %parent_stack_ptr12, i32 %subttmp
  %element = load %CLVALUE, %CLVALUE* %element_addressB, align 8
  %element_addressD = getelementptr %CLVALUE, %CLVALUE* %stack10, i32 %i11
  store %CLVALUE %element, %CLVALUE* %element_addressD, align 8
  %i15 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i15, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp16 = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %19 = bitcast i8* %18 to %sVMInfo**
  %info17 = load %sVMInfo*, %sVMInfo** %19, align 8
  %20 = getelementptr inbounds %sVMInfo, %sVMInfo* %info17, i32 0, i32 6
  %21 = load %CLVALUE, %CLVALUE* %20, align 8
  %22 = bitcast %CLVALUE* %20 to i32*
  %23 = load i32, i32* %22, align 4
  %24 = icmp ne i32 %23, 0
  br i1 %24, label %cond_jump_then18, label %cond_end19

cond_jump_then18:                                 ; preds = %cond_end_block
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 506), align 8
  %26 = bitcast i8* %25 to %CLVALUE**
  %stack20 = load %CLVALUE*, %CLVALUE** %26, align 8
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 510), align 8
  %28 = bitcast i8* %27 to %sVMInfo**
  %info21 = load %sVMInfo*, %sVMInfo** %28, align 8
  %29 = getelementptr inbounds %sVMInfo, %sVMInfo* %info21, i32 0, i32 6
  %30 = load %CLVALUE, %CLVALUE* %29, align 8
  %element_addressD22 = getelementptr %CLVALUE, %CLVALUE* %stack20, i32 0
  store %CLVALUE %30, %CLVALUE* %element_addressD22, align 8
  br label %cond_end19

cond_end19:                                       ; preds = %cond_jump_then18, %cond_end_block
  br label %cond_end
}

define i32 @"length_sCLStackFrame7_src/vm"(%vector__sCLStackFrame* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %self3 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %3 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self3, i32 0, i32 1
  %4 = load i32, i32* %3, align 4
  %5 = bitcast [8192 x i8*]* %lvtable to i8*
  %6 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %5, i64 65536)
  ret i32 %4
}

define void @"push_back_sCLStackFrame8_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %item) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %item3 = alloca %sCLStackFrame
  store %sCLStackFrame %item, %sCLStackFrame* %item3, align 8
  %3 = bitcast %sCLStackFrame* %item3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %self5 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %6 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self5, i32 0, i32 2
  %7 = load i32, i32* %6, align 4
  %eqtmpX = icmp eq i32 %5, %7
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %8 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %9 = bitcast i8* %8 to %vector__sCLStackFrame**
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %9, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 2
  %11 = load i32, i32* %10, align 4
  %multtmp = mul nsw i32 %11, 2
  %new_size = alloca i32
  %12 = bitcast i32* %new_size to i8*
  store i8* %12, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %multtmp, i32* %new_size, align 4
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %14 = bitcast i8* %13 to %vector__sCLStackFrame**
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %14, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 0
  %16 = load %sCLStackFrame*, %sCLStackFrame** %15, align 8
  %items = alloca %sCLStackFrame*
  %17 = bitcast %sCLStackFrame** %items to i8*
  store i8* %17, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLStackFrame* %16, %sCLStackFrame** %items, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %19 = bitcast i8* %18 to %vector__sCLStackFrame**
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %19, align 8
  %new_size9 = load i32, i32* %new_size, align 4
  %sext14 = zext i32 %new_size9 to i64
  %20 = call i8* @nccalloc(i64 %sext14, i64 32)
  %21 = bitcast i8* %20 to %sCLStackFrame*
  %22 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 0
  store %sCLStackFrame* %21, %sCLStackFrame** %22, align 8
  %i = alloca i32
  %23 = bitcast i32* %i to i8*
  store i8* %23, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %25 = bitcast i8* %24 to i32*
  store i32 0, i32* %25, align 4
  br label %loop_top_block

cond_end:                                         ; preds = %cond_end21, %entry
  %self22 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %26 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self22, i32 0, i32 0
  %27 = load %sCLStackFrame*, %sCLStackFrame** %26, align 8
  %self23 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %28 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self23, i32 0, i32 1
  %29 = load i32, i32* %28, align 4
  %item24 = load %sCLStackFrame, %sCLStackFrame* %item3, align 8
  %element_addressD25 = getelementptr %sCLStackFrame, %sCLStackFrame* %27, i32 %29
  store %sCLStackFrame %item24, %sCLStackFrame* %element_addressD25, align 8
  %self26 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self27 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %30 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self27, i32 0, i32 1
  %31 = load i32, i32* %30, align 4
  %addtmp28 = add nsw i32 %31, 1
  %32 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self26, i32 0, i32 1
  store i32 %addtmp28, i32* %32, align 4
  %subttmp29 = sub nsw i32 %addtmp28, 1
  %33 = bitcast [8192 x i8*]* %lvtable to i8*
  %34 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %33, i64 65536)
  ret void

loop_top_block:                                   ; preds = %cond_then_block, %cond_jump_then
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %36 = bitcast i8* %35 to i32*
  %i10 = load i32, i32* %36, align 4
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %38 = bitcast i8* %37 to %vector__sCLStackFrame**
  %self11 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %38, align 8
  %39 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self11, i32 0, i32 2
  %40 = load i32, i32* %39, align 4
  %letmp = icmp slt i32 %i10, %40
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %42 = bitcast i8* %41 to %vector__sCLStackFrame**
  %self12 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %42, align 8
  %43 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self12, i32 0, i32 0
  %44 = load %sCLStackFrame*, %sCLStackFrame** %43, align 8
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %46 = bitcast i8* %45 to i32*
  %i13 = load i32, i32* %46, align 4
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %48 = bitcast i8* %47 to %sCLStackFrame**
  %items14 = load %sCLStackFrame*, %sCLStackFrame** %48, align 8
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %50 = bitcast i8* %49 to i32*
  %i15 = load i32, i32* %50, align 4
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %items14, i32 %i15
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %element_addressD = getelementptr %sCLStackFrame, %sCLStackFrame* %44, i32 %i13
  store %sCLStackFrame %element, %sCLStackFrame* %element_addressD, align 8
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %52 = bitcast i8* %51 to i32*
  %i16 = load i32, i32* %52, align 4
  %addtmp = add nsw i32 %i16, 1
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %54 = bitcast i8* %53 to i32*
  store i32 %addtmp, i32* %54, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %56 = bitcast i8* %55 to %vector__sCLStackFrame**
  %self17 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %56, align 8
  %new_size18 = load i32, i32* %new_size, align 4
  %57 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self17, i32 0, i32 2
  store i32 %new_size18, i32* %57, align 4
  %items19 = load %sCLStackFrame*, %sCLStackFrame** %items, align 8
  %58 = load %sCLStackFrame*, %sCLStackFrame** %items, align 8
  %59 = ptrtoint %sCLStackFrame* %58 to i64
  %60 = icmp ne i64 %59, 0
  br i1 %60, label %cond_then_block20, label %cond_end21

cond_then_block20:                                ; preds = %cond_end_block
  br label %cond_end21

cond_end21:                                       ; preds = %cond_then_block20, %cond_end_block
  %61 = bitcast %sCLStackFrame* %58 to i8*
  call void @ncfree(i8* %61)
  br label %cond_end
}

define i32 @"length_sCLStackFrame9_src/vm"(%vector__sCLStackFrame* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %self3 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %3 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self3, i32 0, i32 1
  %4 = load i32, i32* %3, align 4
  %5 = bitcast [8192 x i8*]* %lvtable to i8*
  %6 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %5, i64 65536)
  ret i32 %4
}

define void @"push_back_sCLStackFrame10_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %item) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %item3 = alloca %sCLStackFrame
  store %sCLStackFrame %item, %sCLStackFrame* %item3, align 8
  %3 = bitcast %sCLStackFrame* %item3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %self5 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %6 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self5, i32 0, i32 2
  %7 = load i32, i32* %6, align 4
  %eqtmpX = icmp eq i32 %5, %7
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %8 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %9 = bitcast i8* %8 to %vector__sCLStackFrame**
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %9, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 2
  %11 = load i32, i32* %10, align 4
  %multtmp = mul nsw i32 %11, 2
  %new_size = alloca i32
  %12 = bitcast i32* %new_size to i8*
  store i8* %12, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store i32 %multtmp, i32* %new_size, align 4
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %14 = bitcast i8* %13 to %vector__sCLStackFrame**
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %14, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 0
  %16 = load %sCLStackFrame*, %sCLStackFrame** %15, align 8
  %items = alloca %sCLStackFrame*
  %17 = bitcast %sCLStackFrame** %items to i8*
  store i8* %17, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLStackFrame* %16, %sCLStackFrame** %items, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %19 = bitcast i8* %18 to %vector__sCLStackFrame**
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %19, align 8
  %new_size9 = load i32, i32* %new_size, align 4
  %sext14 = zext i32 %new_size9 to i64
  %20 = call i8* @nccalloc(i64 %sext14, i64 32)
  %21 = bitcast i8* %20 to %sCLStackFrame*
  %22 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 0
  store %sCLStackFrame* %21, %sCLStackFrame** %22, align 8
  %i = alloca i32
  %23 = bitcast i32* %i to i8*
  store i8* %23, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %25 = bitcast i8* %24 to i32*
  store i32 0, i32* %25, align 4
  br label %loop_top_block

cond_end:                                         ; preds = %cond_end21, %entry
  %self22 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %26 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self22, i32 0, i32 0
  %27 = load %sCLStackFrame*, %sCLStackFrame** %26, align 8
  %self23 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %28 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self23, i32 0, i32 1
  %29 = load i32, i32* %28, align 4
  %item24 = load %sCLStackFrame, %sCLStackFrame* %item3, align 8
  %element_addressD25 = getelementptr %sCLStackFrame, %sCLStackFrame* %27, i32 %29
  store %sCLStackFrame %item24, %sCLStackFrame* %element_addressD25, align 8
  %self26 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self27 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %30 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self27, i32 0, i32 1
  %31 = load i32, i32* %30, align 4
  %addtmp28 = add nsw i32 %31, 1
  %32 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self26, i32 0, i32 1
  store i32 %addtmp28, i32* %32, align 4
  %subttmp29 = sub nsw i32 %addtmp28, 1
  %33 = bitcast [8192 x i8*]* %lvtable to i8*
  %34 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %33, i64 65536)
  ret void

loop_top_block:                                   ; preds = %cond_then_block, %cond_jump_then
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %36 = bitcast i8* %35 to i32*
  %i10 = load i32, i32* %36, align 4
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %38 = bitcast i8* %37 to %vector__sCLStackFrame**
  %self11 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %38, align 8
  %39 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self11, i32 0, i32 2
  %40 = load i32, i32* %39, align 4
  %letmp = icmp slt i32 %i10, %40
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %42 = bitcast i8* %41 to %vector__sCLStackFrame**
  %self12 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %42, align 8
  %43 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self12, i32 0, i32 0
  %44 = load %sCLStackFrame*, %sCLStackFrame** %43, align 8
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %46 = bitcast i8* %45 to i32*
  %i13 = load i32, i32* %46, align 4
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %48 = bitcast i8* %47 to %sCLStackFrame**
  %items14 = load %sCLStackFrame*, %sCLStackFrame** %48, align 8
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %50 = bitcast i8* %49 to i32*
  %i15 = load i32, i32* %50, align 4
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %items14, i32 %i15
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %element_addressD = getelementptr %sCLStackFrame, %sCLStackFrame* %44, i32 %i13
  store %sCLStackFrame %element, %sCLStackFrame* %element_addressD, align 8
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %52 = bitcast i8* %51 to i32*
  %i16 = load i32, i32* %52, align 4
  %addtmp = add nsw i32 %i16, 1
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %54 = bitcast i8* %53 to i32*
  store i32 %addtmp, i32* %54, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %56 = bitcast i8* %55 to %vector__sCLStackFrame**
  %self17 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %56, align 8
  %new_size18 = load i32, i32* %new_size, align 4
  %57 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self17, i32 0, i32 2
  store i32 %new_size18, i32* %57, align 4
  %items19 = load %sCLStackFrame*, %sCLStackFrame** %items, align 8
  %58 = load %sCLStackFrame*, %sCLStackFrame** %items, align 8
  %59 = ptrtoint %sCLStackFrame* %58 to i64
  %60 = icmp ne i64 %59, 0
  br i1 %60, label %cond_then_block20, label %cond_end21

cond_then_block20:                                ; preds = %cond_end_block
  br label %cond_end21

cond_end21:                                       ; preds = %cond_then_block20, %cond_end_block
  %61 = bitcast %sCLStackFrame* %58 to i8*
  call void @ncfree(i8* %61)
  br label %cond_end
}

define %sCLStackFrame @"pop_back_sCLStackFrame11_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %list__int* @"initialize_int12_src/vm"(%list__int* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %list__int*
  store %list__int* %self, %list__int** %self2, align 8
  %2 = bitcast %list__int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %self3 = load %list__int*, %list__int** %self2, align 8
  %3 = getelementptr inbounds %list__int, %list__int* %self3, i32 0, i32 0
  store %list_item__int* null, %list_item__int** %3, align 8
  %self4 = load %list__int*, %list__int** %self2, align 8
  %4 = getelementptr inbounds %list__int, %list__int* %self4, i32 0, i32 1
  store %list_item__int* null, %list_item__int** %4, align 8
  %self5 = load %list__int*, %list__int** %self2, align 8
  %5 = getelementptr inbounds %list__int, %list__int* %self5, i32 0, i32 2
  store i32 0, i32* %5, align 4
  %self6 = load %list__int*, %list__int** %self2, align 8
  %6 = bitcast [8192 x i8*]* %lvtable to i8*
  %7 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %6, i64 65536)
  ret %list__int* %self6
}

define void @"push_back_int13_src/vm"(%list__int* %self, i32 %item) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %list__int*
  store %list__int* %self, %list__int** %self2, align 8
  %2 = bitcast %list__int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %item3 = alloca i32
  store i32 %item, i32* %item3, align 4
  %3 = bitcast i32* %item3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %self4 = load %list__int*, %list__int** %self2, align 8
  %4 = getelementptr inbounds %list__int, %list__int* %self4, i32 0, i32 2
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %"cond_jump_elif0\0A"

cond_jump_then:                                   ; preds = %entry
  %6 = call i8* @nccalloc(i64 1, i64 24)
  %7 = bitcast i8* %6 to %list_item__int*
  %litem = alloca %list_item__int*
  %8 = bitcast %list_item__int** %litem to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  store %list_item__int* %7, %list_item__int** %litem, align 8
  %litem5 = load %list_item__int*, %list_item__int** %litem, align 8
  %9 = getelementptr inbounds %list_item__int, %list_item__int* %litem5, i32 0, i32 1
  store %list_item__int* null, %list_item__int** %9, align 8
  %litem6 = load %list_item__int*, %list_item__int** %litem, align 8
  %10 = getelementptr inbounds %list_item__int, %list_item__int* %litem6, i32 0, i32 2
  store %list_item__int* null, %list_item__int** %10, align 8
  %litem7 = load %list_item__int*, %list_item__int** %litem, align 8
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %12 = bitcast i8* %11 to i32*
  %item8 = load i32, i32* %12, align 4
  %13 = getelementptr inbounds %list_item__int, %list_item__int* %litem7, i32 0, i32 0
  store i32 %item8, i32* %13, align 4
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %15 = bitcast i8* %14 to %list__int**
  %self9 = load %list__int*, %list__int** %15, align 8
  %litem10 = load %list_item__int*, %list_item__int** %litem, align 8
  %16 = getelementptr inbounds %list__int, %list__int* %self9, i32 0, i32 1
  store %list_item__int* %litem10, %list_item__int** %16, align 8
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %18 = bitcast i8* %17 to %list__int**
  %self11 = load %list__int*, %list__int** %18, align 8
  %litem12 = load %list_item__int*, %list_item__int** %litem, align 8
  %19 = getelementptr inbounds %list__int, %list__int* %self11, i32 0, i32 0
  store %list_item__int* %litem12, %list_item__int** %19, align 8
  br label %cond_end

"cond_jump_elif0\0A":                             ; preds = %entry
  %self13 = load %list__int*, %list__int** %self2, align 8
  %20 = getelementptr inbounds %list__int, %list__int* %self13, i32 0, i32 2
  %21 = load i32, i32* %20, align 4
  %eqtmpX14 = icmp eq i32 %21, 1
  br i1 %eqtmpX14, label %"cond_jump_elif_then0\0A", label %cond_else_block

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %22 = call i8* @nccalloc(i64 1, i64 24)
  %23 = bitcast i8* %22 to %list_item__int*
  %litem15 = alloca %list_item__int*
  %24 = bitcast %list_item__int** %litem15 to i8*
  store i8* %24, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  store %list_item__int* %23, %list_item__int** %litem15, align 8
  %litem16 = load %list_item__int*, %list_item__int** %litem15, align 8
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %26 = bitcast i8* %25 to %list__int**
  %self17 = load %list__int*, %list__int** %26, align 8
  %27 = getelementptr inbounds %list__int, %list__int* %self17, i32 0, i32 0
  %28 = load %list_item__int*, %list_item__int** %27, align 8
  %29 = getelementptr inbounds %list_item__int, %list_item__int* %litem16, i32 0, i32 1
  store %list_item__int* %28, %list_item__int** %29, align 8
  %litem18 = load %list_item__int*, %list_item__int** %litem15, align 8
  %30 = getelementptr inbounds %list_item__int, %list_item__int* %litem18, i32 0, i32 2
  store %list_item__int* null, %list_item__int** %30, align 8
  %litem19 = load %list_item__int*, %list_item__int** %litem15, align 8
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %32 = bitcast i8* %31 to i32*
  %item20 = load i32, i32* %32, align 4
  %33 = getelementptr inbounds %list_item__int, %list_item__int* %litem19, i32 0, i32 0
  store i32 %item20, i32* %33, align 4
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %35 = bitcast i8* %34 to %list__int**
  %self21 = load %list__int*, %list__int** %35, align 8
  %litem22 = load %list_item__int*, %list_item__int** %litem15, align 8
  %36 = getelementptr inbounds %list__int, %list__int* %self21, i32 0, i32 1
  store %list_item__int* %litem22, %list_item__int** %36, align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %38 = bitcast i8* %37 to %list__int**
  %self23 = load %list__int*, %list__int** %38, align 8
  %39 = getelementptr inbounds %list__int, %list__int* %self23, i32 0, i32 0
  %40 = load %list_item__int*, %list_item__int** %39, align 8
  %litem24 = load %list_item__int*, %list_item__int** %litem15, align 8
  %41 = getelementptr inbounds %list_item__int, %list_item__int* %40, i32 0, i32 2
  store %list_item__int* %litem24, %list_item__int** %41, align 8
  br label %cond_end

cond_else_block:                                  ; preds = %"cond_jump_elif0\0A"
  %42 = call i8* @nccalloc(i64 1, i64 24)
  %43 = bitcast i8* %42 to %list_item__int*
  %litem25 = alloca %list_item__int*
  %44 = bitcast %list_item__int** %litem25 to i8*
  store i8* %44, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  store %list_item__int* %43, %list_item__int** %litem25, align 8
  %litem26 = load %list_item__int*, %list_item__int** %litem25, align 8
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %46 = bitcast i8* %45 to %list__int**
  %self27 = load %list__int*, %list__int** %46, align 8
  %47 = getelementptr inbounds %list__int, %list__int* %self27, i32 0, i32 1
  %48 = load %list_item__int*, %list_item__int** %47, align 8
  %49 = getelementptr inbounds %list_item__int, %list_item__int* %litem26, i32 0, i32 1
  store %list_item__int* %48, %list_item__int** %49, align 8
  %litem28 = load %list_item__int*, %list_item__int** %litem25, align 8
  %50 = getelementptr inbounds %list_item__int, %list_item__int* %litem28, i32 0, i32 2
  store %list_item__int* null, %list_item__int** %50, align 8
  %litem29 = load %list_item__int*, %list_item__int** %litem25, align 8
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %52 = bitcast i8* %51 to i32*
  %item30 = load i32, i32* %52, align 4
  %53 = getelementptr inbounds %list_item__int, %list_item__int* %litem29, i32 0, i32 0
  store i32 %item30, i32* %53, align 4
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %55 = bitcast i8* %54 to %list__int**
  %self31 = load %list__int*, %list__int** %55, align 8
  %56 = getelementptr inbounds %list__int, %list__int* %self31, i32 0, i32 1
  %57 = load %list_item__int*, %list_item__int** %56, align 8
  %litem32 = load %list_item__int*, %list_item__int** %litem25, align 8
  %58 = getelementptr inbounds %list_item__int, %list_item__int* %57, i32 0, i32 2
  store %list_item__int* %litem32, %list_item__int** %58, align 8
  %59 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %60 = bitcast i8* %59 to %list__int**
  %self33 = load %list__int*, %list__int** %60, align 8
  %litem34 = load %list_item__int*, %list_item__int** %litem25, align 8
  %61 = getelementptr inbounds %list__int, %list__int* %self33, i32 0, i32 1
  store %list_item__int* %litem34, %list_item__int** %61, align 8
  br label %cond_end

cond_end:                                         ; preds = %cond_else_block, %"cond_jump_elif_then0\0A", %cond_jump_then
  %self35 = load %list__int*, %list__int** %self2, align 8
  %self36 = load %list__int*, %list__int** %self2, align 8
  %62 = getelementptr inbounds %list__int, %list__int* %self36, i32 0, i32 2
  %63 = load i32, i32* %62, align 4
  %addtmp = add nsw i32 %63, 1
  %64 = getelementptr inbounds %list__int, %list__int* %self35, i32 0, i32 2
  store i32 %addtmp, i32* %64, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %65 = bitcast [8192 x i8*]* %lvtable to i8*
  %66 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %65, i64 65536)
  ret void
}

define void @"finalize_int14_src/vm"(%list__int* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %list__int*
  store %list__int* %self, %list__int** %self2, align 8
  %2 = bitcast %list__int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %self3 = load %list__int*, %list__int** %self2, align 8
  %eqtmpX = icmp eq %list__int* %self3, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %3 = bitcast [8192 x i8*]* %lvtable to i8*
  %4 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %3, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  %self4 = load %list__int*, %list__int** %self2, align 8
  %5 = getelementptr inbounds %list__int, %list__int* %self4, i32 0, i32 0
  %6 = load %list_item__int*, %list_item__int** %5, align 8
  %it = alloca %list_item__int*
  %7 = bitcast %list_item__int** %it to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store %list_item__int* %6, %list_item__int** %it, align 8
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end13, %cond_end
  %it5 = load %list_item__int*, %list_item__int** %it, align 8
  %noteqtmp = icmp ne %list_item__int* %it5, null
  br i1 %noteqtmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  br i1 false, label %cond_jump_then6, label %cond_end7

cond_end_block:                                   ; preds = %loop_top_block
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret void

cond_jump_then6:                                  ; preds = %cond_then_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %11 = bitcast i8* %10 to %list_item__int**
  %it8 = load %list_item__int*, %list_item__int** %11, align 8
  %12 = getelementptr inbounds %list_item__int, %list_item__int* %it8, i32 0, i32 0
  %13 = load i32, i32* %12, align 4
  %14 = load i32, i32* %12, align 8
  br label %cond_end7

cond_end7:                                        ; preds = %cond_jump_then6, %cond_then_block
  %15 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %16 = bitcast i8* %15 to %list_item__int**
  %it9 = load %list_item__int*, %list_item__int** %16, align 8
  %prev_it = alloca %list_item__int*
  %17 = bitcast %list_item__int** %prev_it to i8*
  store i8* %17, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store %list_item__int* %it9, %list_item__int** %prev_it, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %19 = bitcast i8* %18 to %list_item__int**
  %it10 = load %list_item__int*, %list_item__int** %19, align 8
  %20 = getelementptr inbounds %list_item__int, %list_item__int* %it10, i32 0, i32 2
  %21 = load %list_item__int*, %list_item__int** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %23 = bitcast i8* %22 to %list_item__int**
  store %list_item__int* %21, %list_item__int** %23, align 8
  %prev_it11 = load %list_item__int*, %list_item__int** %prev_it, align 8
  %24 = load %list_item__int*, %list_item__int** %prev_it, align 8
  %25 = ptrtoint %list_item__int* %24 to i64
  %26 = icmp ne i64 %25, 0
  br i1 %26, label %cond_then_block12, label %cond_end13

cond_then_block12:                                ; preds = %cond_end7
  br label %cond_end13

cond_end13:                                       ; preds = %cond_then_block12, %cond_end7
  %27 = bitcast %list_item__int* %24 to i8*
  call void @ncfree(i8* %27)
  br label %loop_top_block
}

define %sCLStackFrame @"pop_back_sCLStackFrame16_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame17_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 529), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame18_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 529), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame19_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 529), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define void @"insert_charp_int20_src/vm"(%map__charp_int* %self, i8* %key, i32 %item) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %item4 = alloca i32
  store i32 %item, i32* %item4, align 4
  %4 = bitcast i32* %item4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %self5 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %5 = getelementptr inbounds %map__charp_int, %map__charp_int* %self5, i32 0, i32 4
  %6 = load i32, i32* %5, align 4
  %multtmp = mul nsw i32 %6, 2
  %self6 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %7 = getelementptr inbounds %map__charp_int, %map__charp_int* %self6, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %getmp = icmp sge i32 %multtmp, %8
  br i1 %getmp, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %10 = bitcast i8* %9 to %map__charp_int**
  %self7 = load %map__charp_int*, %map__charp_int** %10, align 8
  call void @"rehash_charp_int21_src/vm"(%map__charp_int* %self7)
  br label %cond_end

cond_end:                                         ; preds = %cond_jump_then, %entry
  %key8 = load i8*, i8** %key3, align 8
  %11 = call i32 @string_get_hash_key(i8* %key8)
  %self9 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %12 = getelementptr inbounds %map__charp_int, %map__charp_int* %self9, i32 0, i32 3
  %13 = load i32, i32* %12, align 4
  %remtmp = srem i32 %11, %13
  %hash = alloca i32
  %14 = bitcast i32* %hash to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash10 = load i32, i32* %hash, align 4
  %it = alloca i32
  %15 = bitcast i32* %it to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  store i32 %hash10, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end14, %cond_end
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %17 = bitcast i8* %16 to %map__charp_int**
  %self11 = load %map__charp_int*, %map__charp_int** %17, align 8
  %18 = getelementptr inbounds %map__charp_int, %map__charp_int* %self11, i32 0, i32 1
  %19 = load i1*, i1** %18, align 8
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %21 = bitcast i8* %20 to i32*
  %it12 = load i32, i32* %21, align 4
  %element_addressB = getelementptr i1, i1* %19, i32 %it12
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then13, label %cond_else_block

cond_end_block:                                   ; preds = %cond_else_block, %cond_end31, %loop_top_block
  %22 = bitcast [8192 x i8*]* %lvtable to i8*
  %23 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %22, i64 65536)
  ret void

cond_jump_then13:                                 ; preds = %cond_then_block
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %25 = bitcast i8* %24 to %map__charp_int**
  %self15 = load %map__charp_int*, %map__charp_int** %25, align 8
  %26 = getelementptr inbounds %map__charp_int, %map__charp_int* %self15, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %29 = bitcast i8* %28 to i32*
  %it16 = load i32, i32* %29, align 4
  %element_addressB17 = getelementptr i8*, i8** %27, i32 %it16
  %element18 = load i8*, i8** %element_addressB17, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %31 = bitcast i8* %30 to i8**
  %key19 = load i8*, i8** %31, align 8
  %32 = call i1 @string_equals(i8* %element18, i8* %key19)
  br i1 %32, label %cond_jump_then20, label %cond_end21

cond_else_block:                                  ; preds = %cond_then_block
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %34 = bitcast i8* %33 to %map__charp_int**
  %self51 = load %map__charp_int*, %map__charp_int** %34, align 8
  %35 = getelementptr inbounds %map__charp_int, %map__charp_int* %self51, i32 0, i32 1
  %36 = load i1*, i1** %35, align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %38 = bitcast i8* %37 to i32*
  %it52 = load i32, i32* %38, align 4
  %element_addressD53 = getelementptr i1, i1* %36, i32 %it52
  store i1 true, i1* %element_addressD53, align 1
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %40 = bitcast i8* %39 to %map__charp_int**
  %self54 = load %map__charp_int*, %map__charp_int** %40, align 8
  %41 = getelementptr inbounds %map__charp_int, %map__charp_int* %self54, i32 0, i32 0
  %42 = load i8**, i8*** %41, align 8
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %44 = bitcast i8* %43 to i32*
  %it55 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %46 = bitcast i8* %45 to i8**
  %key56 = load i8*, i8** %46, align 8
  %element_addressD57 = getelementptr i8*, i8** %42, i32 %it55
  store i8* %key56, i8** %element_addressD57, align 8
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %48 = bitcast i8* %47 to %map__charp_int**
  %self58 = load %map__charp_int*, %map__charp_int** %48, align 8
  %49 = getelementptr inbounds %map__charp_int, %map__charp_int* %self58, i32 0, i32 2
  %50 = load i32*, i32** %49, align 8
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %52 = bitcast i8* %51 to i32*
  %it59 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %54 = bitcast i8* %53 to i32*
  %item60 = load i32, i32* %54, align 4
  %element_addressD61 = getelementptr i32, i32* %50, i32 %it59
  store i32 %item60, i32* %element_addressD61, align 4
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %56 = bitcast i8* %55 to %map__charp_int**
  %self62 = load %map__charp_int*, %map__charp_int** %56, align 8
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %58 = bitcast i8* %57 to %map__charp_int**
  %self63 = load %map__charp_int*, %map__charp_int** %58, align 8
  %59 = getelementptr inbounds %map__charp_int, %map__charp_int* %self63, i32 0, i32 4
  %60 = load i32, i32* %59, align 4
  %addtmp64 = add nsw i32 %60, 1
  %61 = getelementptr inbounds %map__charp_int, %map__charp_int* %self62, i32 0, i32 4
  store i32 %addtmp64, i32* %61, align 4
  %subttmp65 = sub nsw i32 %addtmp64, 1
  br label %cond_end_block

cond_end14:                                       ; preds = %after_break66, %cond_end48
  br label %loop_top_block

cond_jump_then20:                                 ; preds = %cond_jump_then13
  br i1 true, label %cond_jump_then22, label %cond_end23

cond_end21:                                       ; preds = %after_break, %cond_jump_then13
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %63 = bitcast i8* %62 to i32*
  %it43 = load i32, i32* %63, align 4
  %addtmp = add nsw i32 %it43, 1
  %64 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %65 = bitcast i8* %64 to i32*
  store i32 %addtmp, i32* %65, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %66 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %67 = bitcast i8* %66 to i32*
  %it44 = load i32, i32* %67, align 4
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %69 = bitcast i8* %68 to %map__charp_int**
  %self45 = load %map__charp_int*, %map__charp_int** %69, align 8
  %70 = getelementptr inbounds %map__charp_int, %map__charp_int* %self45, i32 0, i32 3
  %71 = load i32, i32* %70, align 4
  %getmp46 = icmp sge i32 %it44, %71
  br i1 %getmp46, label %cond_jump_then47, label %"cond_jump_elif0\0A"

cond_jump_then22:                                 ; preds = %cond_jump_then20
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %73 = bitcast i8* %72 to %map__charp_int**
  %self24 = load %map__charp_int*, %map__charp_int** %73, align 8
  %74 = getelementptr inbounds %map__charp_int, %map__charp_int* %self24, i32 0, i32 0
  %75 = load i8**, i8*** %74, align 8
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %77 = bitcast i8* %76 to i32*
  %it25 = load i32, i32* %77, align 4
  %element_addressB26 = getelementptr i8*, i8** %75, i32 %it25
  %element27 = load i8*, i8** %element_addressB26, align 8
  %78 = load i8*, i8** %element_addressB26, align 8
  %79 = ptrtoint i8* %78 to i64
  %80 = icmp ne i64 %79, 0
  br i1 %80, label %cond_then_block28, label %cond_end29

cond_end23:                                       ; preds = %cond_end29, %cond_jump_then20
  br i1 false, label %cond_jump_then30, label %cond_end31

cond_then_block28:                                ; preds = %cond_jump_then22
  br label %cond_end29

cond_end29:                                       ; preds = %cond_then_block28, %cond_jump_then22
  call void @ncfree(i8* %78)
  br label %cond_end23

cond_jump_then30:                                 ; preds = %cond_end23
  %81 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %82 = bitcast i8* %81 to %map__charp_int**
  %self32 = load %map__charp_int*, %map__charp_int** %82, align 8
  %83 = getelementptr inbounds %map__charp_int, %map__charp_int* %self32, i32 0, i32 2
  %84 = load i32*, i32** %83, align 8
  %85 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %86 = bitcast i8* %85 to i32*
  %it33 = load i32, i32* %86, align 4
  %element_addressB34 = getelementptr i32, i32* %84, i32 %it33
  %element35 = load i32, i32* %element_addressB34, align 4
  %87 = load i32, i32* %element_addressB34, align 8
  br label %cond_end31

cond_end31:                                       ; preds = %cond_jump_then30, %cond_end23
  %88 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %89 = bitcast i8* %88 to %map__charp_int**
  %self36 = load %map__charp_int*, %map__charp_int** %89, align 8
  %90 = getelementptr inbounds %map__charp_int, %map__charp_int* %self36, i32 0, i32 0
  %91 = load i8**, i8*** %90, align 8
  %92 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %93 = bitcast i8* %92 to i32*
  %it37 = load i32, i32* %93, align 4
  %94 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %95 = bitcast i8* %94 to i8**
  %key38 = load i8*, i8** %95, align 8
  %element_addressD = getelementptr i8*, i8** %91, i32 %it37
  store i8* %key38, i8** %element_addressD, align 8
  %96 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %97 = bitcast i8* %96 to %map__charp_int**
  %self39 = load %map__charp_int*, %map__charp_int** %97, align 8
  %98 = getelementptr inbounds %map__charp_int, %map__charp_int* %self39, i32 0, i32 2
  %99 = load i32*, i32** %98, align 8
  %100 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %101 = bitcast i8* %100 to i32*
  %it40 = load i32, i32* %101, align 4
  %102 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %103 = bitcast i8* %102 to i32*
  %item41 = load i32, i32* %103, align 4
  %element_addressD42 = getelementptr i32, i32* %99, i32 %it40
  store i32 %item41, i32* %element_addressD42, align 4
  br label %cond_end_block

after_break:                                      ; No predecessors!
  br label %cond_end21

cond_jump_then47:                                 ; preds = %cond_end21
  %104 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %105 = bitcast i8* %104 to i32*
  store i32 0, i32* %105, align 4
  br label %cond_end48

"cond_jump_elif0\0A":                             ; preds = %cond_end21
  %106 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %107 = bitcast i8* %106 to i32*
  %it49 = load i32, i32* %107, align 4
  %108 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %109 = bitcast i8* %108 to i32*
  %hash50 = load i32, i32* %109, align 4
  %eqtmpX = icmp eq i32 %it49, %hash50
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end48

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %110 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_string.101, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end48

cond_end48:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then47
  br label %cond_end14

after_break66:                                    ; No predecessors!
  br label %cond_end14
}

define void @"rehash_charp_int21_src/vm"(%map__charp_int* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 529), align 8
  %self3 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %3 = getelementptr inbounds %map__charp_int, %map__charp_int* %self3, i32 0, i32 3
  %4 = load i32, i32* %3, align 4
  %multtmp = mul nsw i32 %4, 3
  %size = alloca i32
  %5 = bitcast i32* %size to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  store i32 %multtmp, i32* %size, align 4
  %size4 = load i32, i32* %size, align 4
  %sext14 = zext i32 %size4 to i64
  %6 = call i8* @nccalloc(i64 %sext14, i64 8)
  %7 = bitcast i8* %6 to i8**
  %keys = alloca i8**
  %8 = bitcast i8*** %keys to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 531), align 8
  store i8** %7, i8*** %keys, align 8
  %size5 = load i32, i32* %size, align 4
  %sext146 = zext i32 %size5 to i64
  %9 = call i8* @nccalloc(i64 %sext146, i64 4)
  %10 = bitcast i8* %9 to i32*
  %items = alloca i32*
  %11 = bitcast i32** %items to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 532), align 8
  store i32* %10, i32** %items, align 8
  %size7 = load i32, i32* %size, align 4
  %sext148 = zext i32 %size7 to i64
  %12 = call i8* @nccalloc(i64 %sext148, i64 1)
  %13 = bitcast i8* %12 to i1*
  %item_existance = alloca i1*
  %14 = bitcast i1** %item_existance to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 533), align 8
  store i1* %13, i1** %item_existance, align 8
  %len = alloca i32
  %15 = bitcast i32* %len to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 534), align 8
  store i32 0, i32* %len, align 4
  %self9 = load %map__charp_int*, %map__charp_int** %self2, align 8
  call void @"each_charp_int22_src/vm"(%map__charp_int* %self9, void (i8*, i32, i1*)* @vm_lambda0)
  %self10 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %16 = getelementptr inbounds %map__charp_int, %map__charp_int* %self10, i32 0, i32 2
  %17 = load i32*, i32** %16, align 8
  %18 = load i32*, i32** %16, align 8
  %19 = ptrtoint i32* %18 to i64
  %20 = icmp ne i64 %19, 0
  br i1 %20, label %cond_then_block, label %cond_end

cond_then_block:                                  ; preds = %entry
  br label %cond_end

cond_end:                                         ; preds = %cond_then_block, %entry
  %21 = bitcast i32* %18 to i8*
  call void @ncfree(i8* %21)
  %self11 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %22 = getelementptr inbounds %map__charp_int, %map__charp_int* %self11, i32 0, i32 1
  %23 = load i1*, i1** %22, align 8
  %24 = load i1*, i1** %22, align 8
  %25 = ptrtoint i1* %24 to i64
  %26 = icmp ne i64 %25, 0
  br i1 %26, label %cond_then_block12, label %cond_end13

cond_then_block12:                                ; preds = %cond_end
  br label %cond_end13

cond_end13:                                       ; preds = %cond_then_block12, %cond_end
  %27 = bitcast i1* %24 to i8*
  call void @ncfree(i8* %27)
  %self14 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %28 = getelementptr inbounds %map__charp_int, %map__charp_int* %self14, i32 0, i32 0
  %29 = load i8**, i8*** %28, align 8
  %30 = load i8**, i8*** %28, align 8
  %31 = bitcast i8** %30 to i8*
  call void @ncfree(i8* %31)
  %self15 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %keys16 = load i8**, i8*** %keys, align 8
  %32 = getelementptr inbounds %map__charp_int, %map__charp_int* %self15, i32 0, i32 0
  store i8** %keys16, i8*** %32, align 8
  %self17 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %items18 = load i32*, i32** %items, align 8
  %33 = getelementptr inbounds %map__charp_int, %map__charp_int* %self17, i32 0, i32 2
  store i32* %items18, i32** %33, align 8
  %self19 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %item_existance20 = load i1*, i1** %item_existance, align 8
  %34 = getelementptr inbounds %map__charp_int, %map__charp_int* %self19, i32 0, i32 1
  store i1* %item_existance20, i1** %34, align 8
  %self21 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %size22 = load i32, i32* %size, align 4
  %35 = getelementptr inbounds %map__charp_int, %map__charp_int* %self21, i32 0, i32 3
  store i32 %size22, i32* %35, align 4
  %self23 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %len24 = load i32, i32* %len, align 4
  %36 = getelementptr inbounds %map__charp_int, %map__charp_int* %self23, i32 0, i32 4
  store i32 %len24, i32* %36, align 4
  %37 = bitcast [8192 x i8*]* %lvtable to i8*
  %38 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %37, i64 65536)
  ret void
}

define void @vm_lambda0(i8* %it, i32 %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i8*
  store i8* %it, i8** %it4, align 8
  %2 = bitcast i8** %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %it25 = alloca i32
  store i32 %it2, i32* %it25, align 4
  %3 = bitcast i32* %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 536), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 537), align 8
  %it7 = load i8*, i8** %it4, align 8
  %5 = call i32 @string_get_hash_key(i8* %it7)
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  %7 = bitcast i8* %6 to i32*
  %size = load i32, i32* %7, align 4
  %remtmp = srem i32 %5, %size
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 538), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash8 = load i32, i32* %hash, align 4
  %n = alloca i32
  %9 = bitcast i32* %n to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 539), align 8
  store i32 %hash8, i32* %n, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 533), align 8
  %11 = bitcast i8* %10 to i1**
  %item_existance = load i1*, i1** %11, align 8
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 539), align 8
  %13 = bitcast i8* %12 to i32*
  %n9 = load i32, i32* %13, align 4
  %element_addressB = getelementptr i1, i1* %item_existance, i32 %n9
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then, label %cond_else_block

cond_end_block:                                   ; preds = %cond_else_block, %loop_top_block
  %14 = bitcast [8192 x i8*]* %lvtable to i8*
  %15 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %14, i64 65536)
  ret void

cond_jump_then:                                   ; preds = %cond_then_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 539), align 8
  %17 = bitcast i8* %16 to i32*
  %n10 = load i32, i32* %17, align 4
  %addtmp = add nsw i32 %n10, 1
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 539), align 8
  %19 = bitcast i8* %18 to i32*
  store i32 %addtmp, i32* %19, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 539), align 8
  %21 = bitcast i8* %20 to i32*
  %n11 = load i32, i32* %21, align 4
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  %23 = bitcast i8* %22 to i32*
  %size12 = load i32, i32* %23, align 4
  %getmp = icmp sge i32 %n11, %size12
  br i1 %getmp, label %cond_jump_then13, label %"cond_jump_elif0\0A"

cond_else_block:                                  ; preds = %cond_then_block
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 533), align 8
  %25 = bitcast i8* %24 to i1**
  %item_existance17 = load i1*, i1** %25, align 8
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 539), align 8
  %27 = bitcast i8* %26 to i32*
  %n18 = load i32, i32* %27, align 4
  %element_addressD = getelementptr i1, i1* %item_existance17, i32 %n18
  store i1 true, i1* %element_addressD, align 1
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 531), align 8
  %29 = bitcast i8* %28 to i8***
  %keys = load i8**, i8*** %29, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 539), align 8
  %31 = bitcast i8* %30 to i32*
  %n19 = load i32, i32* %31, align 4
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %33 = bitcast i8* %32 to i8**
  %it20 = load i8*, i8** %33, align 8
  %element_addressD21 = getelementptr i8*, i8** %keys, i32 %n19
  store i8* %it20, i8** %element_addressD21, align 8
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 532), align 8
  %35 = bitcast i8* %34 to i32**
  %items = load i32*, i32** %35, align 8
  %36 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 539), align 8
  %37 = bitcast i8* %36 to i32*
  %n22 = load i32, i32* %37, align 4
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 536), align 8
  %39 = bitcast i8* %38 to i32*
  %it223 = load i32, i32* %39, align 4
  %element_addressD24 = getelementptr i32, i32* %items, i32 %n22
  store i32 %it223, i32* %element_addressD24, align 4
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 534), align 8
  %41 = bitcast i8* %40 to i32*
  %len = load i32, i32* %41, align 4
  %addtmp25 = add nsw i32 %len, 1
  %42 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 534), align 8
  %43 = bitcast i8* %42 to i32*
  store i32 %addtmp25, i32* %43, align 4
  %subttmp26 = sub nsw i32 %addtmp25, 1
  br label %cond_end_block

cond_end:                                         ; preds = %after_break, %cond_end14
  br label %loop_top_block

cond_jump_then13:                                 ; preds = %cond_jump_then
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 539), align 8
  %45 = bitcast i8* %44 to i32*
  store i32 0, i32* %45, align 4
  br label %cond_end14

"cond_jump_elif0\0A":                             ; preds = %cond_jump_then
  %46 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 539), align 8
  %47 = bitcast i8* %46 to i32*
  %n15 = load i32, i32* %47, align 4
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 538), align 8
  %49 = bitcast i8* %48 to i32*
  %hash16 = load i32, i32* %49, align 4
  %eqtmpX = icmp eq i32 %n15, %hash16
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end14

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %50 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.100, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end14

cond_end14:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then13
  br label %cond_end

after_break:                                      ; No predecessors!
  br label %cond_end
}

define void @"each_charp_int22_src/vm"(%map__charp_int* %self, void (i8*, i32, i1*)* %block_) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %block_3 = alloca void (i8*, i32, i1*)*
  store void (i8*, i32, i1*)* %block_, void (i8*, i32, i1*)** %block_3, align 8
  %3 = bitcast void (i8*, i32, i1*)** %block_3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 536), align 8
  %i_ = alloca i32
  %4 = bitcast i32* %i_ to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 537), align 8
  store i32 0, i32* %i_, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %i_4 = load i32, i32* %i_, align 4
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %6 = bitcast i8* %5 to %map__charp_int**
  %self5 = load %map__charp_int*, %map__charp_int** %6, align 8
  %7 = getelementptr inbounds %map__charp_int, %map__charp_int* %self5, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %letmp = icmp slt i32 %i_4, %8
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %10 = bitcast i8* %9 to %map__charp_int**
  %self6 = load %map__charp_int*, %map__charp_int** %10, align 8
  %11 = getelementptr inbounds %map__charp_int, %map__charp_int* %self6, i32 0, i32 1
  %12 = load i1*, i1** %11, align 8
  %i_7 = load i32, i32* %i_, align 4
  %element_addressB = getelementptr i1, i1* %12, i32 %i_7
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then, label %cond_end

cond_end_block:                                   ; preds = %cond_jump_then19, %loop_top_block
  %13 = bitcast [8192 x i8*]* %lvtable to i8*
  %14 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %13, i64 65536)
  ret void

cond_jump_then:                                   ; preds = %cond_then_block
  %end_flag_ = alloca i1
  %15 = bitcast i1* %end_flag_ to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 538), align 8
  store i1 false, i1* %end_flag_, align 1
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 536), align 8
  %17 = bitcast i8* %16 to void (i8*, i32, i1*)**
  %block_8 = load void (i8*, i32, i1*)*, void (i8*, i32, i1*)** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %19 = bitcast i8* %18 to %map__charp_int**
  %self9 = load %map__charp_int*, %map__charp_int** %19, align 8
  %20 = getelementptr inbounds %map__charp_int, %map__charp_int* %self9, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 537), align 8
  %23 = bitcast i8* %22 to i32*
  %i_10 = load i32, i32* %23, align 4
  %element_addressB11 = getelementptr i8*, i8** %21, i32 %i_10
  %element12 = load i8*, i8** %element_addressB11, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %25 = bitcast i8* %24 to %map__charp_int**
  %self13 = load %map__charp_int*, %map__charp_int** %25, align 8
  %26 = getelementptr inbounds %map__charp_int, %map__charp_int* %self13, i32 0, i32 2
  %27 = load i32*, i32** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 537), align 8
  %29 = bitcast i8* %28 to i32*
  %i_14 = load i32, i32* %29, align 4
  %element_addressB15 = getelementptr i32, i32* %27, i32 %i_14
  %element16 = load i32, i32* %element_addressB15, align 4
  %end_flag_17 = load i1, i1* %end_flag_, align 1
  call void %block_8(i8* %element12, i32 %element16, i1* %end_flag_)
  %end_flag_18 = load i1, i1* %end_flag_, align 1
  %eqtmpX = icmp eq i1 %end_flag_18, true
  br i1 %eqtmpX, label %cond_jump_then19, label %cond_end20

cond_end:                                         ; preds = %cond_end20, %cond_then_block
  %i_21 = load i32, i32* %i_, align 4
  %addtmp = add nsw i32 %i_21, 1
  store i32 %addtmp, i32* %i_, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_jump_then19:                                 ; preds = %cond_jump_then
  br label %cond_end_block

cond_end20:                                       ; preds = %after_break, %cond_jump_then
  br label %cond_end

after_break:                                      ; No predecessors!
  br label %cond_end20
}

define i32 @"at_charp_int23_src/vm"(%map__charp_int* %self, i8* %key, i32 %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %default_value4 = alloca i32
  store i32 %default_value, i32* %default_value4, align 4
  %4 = bitcast i32* %default_value4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %key5 = load i8*, i8** %key3, align 8
  %5 = call i32 @string_get_hash_key(i8* %key5)
  %self6 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %6 = getelementptr inbounds %map__charp_int, %map__charp_int* %self6, i32 0, i32 3
  %7 = load i32, i32* %6, align 4
  %remtmp = srem i32 %5, %7
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash7 = load i32, i32* %hash, align 4
  %it = alloca i32
  %9 = bitcast i32* %it to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  store i32 %hash7, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %11 = bitcast i8* %10 to %map__charp_int**
  %self8 = load %map__charp_int*, %map__charp_int** %11, align 8
  %12 = getelementptr inbounds %map__charp_int, %map__charp_int* %self8, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %15 = bitcast i8* %14 to i32*
  %it9 = load i32, i32* %15, align 4
  %element_addressB = getelementptr i1, i1* %13, i32 %it9
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then, label %cond_else_block

cond_end_block:                                   ; preds = %loop_top_block
  %default_value30 = load i32, i32* %default_value4, align 4
  %16 = bitcast [8192 x i8*]* %lvtable to i8*
  %17 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %16, i64 65536)
  ret i32 %default_value30

cond_jump_then:                                   ; preds = %cond_then_block
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %19 = bitcast i8* %18 to %map__charp_int**
  %self10 = load %map__charp_int*, %map__charp_int** %19, align 8
  %20 = getelementptr inbounds %map__charp_int, %map__charp_int* %self10, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %23 = bitcast i8* %22 to i32*
  %it11 = load i32, i32* %23, align 4
  %element_addressB12 = getelementptr i8*, i8** %21, i32 %it11
  %element13 = load i8*, i8** %element_addressB12, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %25 = bitcast i8* %24 to i8**
  %key14 = load i8*, i8** %25, align 8
  %26 = call i1 @string_equals(i8* %element13, i8* %key14)
  br i1 %26, label %cond_jump_then15, label %cond_end16

cond_else_block:                                  ; preds = %cond_then_block
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %28 = bitcast i8* %27 to i32*
  %default_value29 = load i32, i32* %28, align 4
  %29 = bitcast [8192 x i8*]* %lvtable to i8*
  %30 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %29, i64 65536)
  ret i32 %default_value29

cond_end:                                         ; preds = %cond_end25
  br label %loop_top_block

cond_jump_then15:                                 ; preds = %cond_jump_then
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %32 = bitcast i8* %31 to %map__charp_int**
  %self17 = load %map__charp_int*, %map__charp_int** %32, align 8
  %33 = getelementptr inbounds %map__charp_int, %map__charp_int* %self17, i32 0, i32 2
  %34 = load i32*, i32** %33, align 8
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %36 = bitcast i8* %35 to i32*
  %it18 = load i32, i32* %36, align 4
  %element_addressB19 = getelementptr i32, i32* %34, i32 %it18
  %element20 = load i32, i32* %element_addressB19, align 4
  %37 = bitcast [8192 x i8*]* %lvtable to i8*
  %38 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %37, i64 65536)
  ret i32 %element20

cond_end16:                                       ; preds = %cond_jump_then
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %40 = bitcast i8* %39 to i32*
  %it21 = load i32, i32* %40, align 4
  %addtmp = add nsw i32 %it21, 1
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %42 = bitcast i8* %41 to i32*
  store i32 %addtmp, i32* %42, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %44 = bitcast i8* %43 to i32*
  %it22 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %46 = bitcast i8* %45 to %map__charp_int**
  %self23 = load %map__charp_int*, %map__charp_int** %46, align 8
  %47 = getelementptr inbounds %map__charp_int, %map__charp_int* %self23, i32 0, i32 3
  %48 = load i32, i32* %47, align 4
  %getmp = icmp sge i32 %it22, %48
  br i1 %getmp, label %cond_jump_then24, label %"cond_jump_elif0\0A"

cond_jump_then24:                                 ; preds = %cond_end16
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %50 = bitcast i8* %49 to i32*
  store i32 0, i32* %50, align 4
  br label %cond_end25

"cond_jump_elif0\0A":                             ; preds = %cond_end16
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %52 = bitcast i8* %51 to i32*
  %it26 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %54 = bitcast i8* %53 to i32*
  %hash27 = load i32, i32* %54, align 4
  %eqtmpX = icmp eq i32 %it26, %hash27
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end25

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %56 = bitcast i8* %55 to i32*
  %default_value28 = load i32, i32* %56, align 4
  %57 = bitcast [8192 x i8*]* %lvtable to i8*
  %58 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %57, i64 65536)
  ret i32 %default_value28

cond_end25:                                       ; preds = %"cond_jump_elif0\0A", %cond_jump_then24
  br label %cond_end
}

define %sCLStackFrame @"pop_back_sCLStackFrame24_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 531), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 532), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 532), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 533), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame25_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 531), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 532), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 532), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 533), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLMethod* @"at_charp_sCLMethodp26_src/vm"(%map__charp_sCLMethodp* %self, i8* %key, %sCLMethod* %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_sCLMethodp*
  store %map__charp_sCLMethodp* %self, %map__charp_sCLMethodp** %self2, align 8
  %2 = bitcast %map__charp_sCLMethodp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 531), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 532), align 8
  %default_value4 = alloca %sCLMethod*
  store %sCLMethod* %default_value, %sCLMethod** %default_value4, align 8
  %4 = bitcast %sCLMethod** %default_value4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 533), align 8
  %key5 = load i8*, i8** %key3, align 8
  %5 = call i32 @string_get_hash_key(i8* %key5)
  %self6 = load %map__charp_sCLMethodp*, %map__charp_sCLMethodp** %self2, align 8
  %6 = getelementptr inbounds %map__charp_sCLMethodp, %map__charp_sCLMethodp* %self6, i32 0, i32 3
  %7 = load i32, i32* %6, align 4
  %remtmp = srem i32 %5, %7
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 534), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash7 = load i32, i32* %hash, align 4
  %it = alloca i32
  %9 = bitcast i32* %it to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  store i32 %hash7, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 531), align 8
  %11 = bitcast i8* %10 to %map__charp_sCLMethodp**
  %self8 = load %map__charp_sCLMethodp*, %map__charp_sCLMethodp** %11, align 8
  %12 = getelementptr inbounds %map__charp_sCLMethodp, %map__charp_sCLMethodp* %self8, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %15 = bitcast i8* %14 to i32*
  %it9 = load i32, i32* %15, align 4
  %element_addressB = getelementptr i1, i1* %13, i32 %it9
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then, label %cond_else_block

cond_end_block:                                   ; preds = %loop_top_block
  %default_value30 = load %sCLMethod*, %sCLMethod** %default_value4, align 8
  %16 = bitcast [8192 x i8*]* %lvtable to i8*
  %17 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %16, i64 65536)
  ret %sCLMethod* %default_value30

cond_jump_then:                                   ; preds = %cond_then_block
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 531), align 8
  %19 = bitcast i8* %18 to %map__charp_sCLMethodp**
  %self10 = load %map__charp_sCLMethodp*, %map__charp_sCLMethodp** %19, align 8
  %20 = getelementptr inbounds %map__charp_sCLMethodp, %map__charp_sCLMethodp* %self10, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %23 = bitcast i8* %22 to i32*
  %it11 = load i32, i32* %23, align 4
  %element_addressB12 = getelementptr i8*, i8** %21, i32 %it11
  %element13 = load i8*, i8** %element_addressB12, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 532), align 8
  %25 = bitcast i8* %24 to i8**
  %key14 = load i8*, i8** %25, align 8
  %26 = call i1 @string_equals(i8* %element13, i8* %key14)
  br i1 %26, label %cond_jump_then15, label %cond_end16

cond_else_block:                                  ; preds = %cond_then_block
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 533), align 8
  %28 = bitcast i8* %27 to %sCLMethod**
  %default_value29 = load %sCLMethod*, %sCLMethod** %28, align 8
  %29 = bitcast [8192 x i8*]* %lvtable to i8*
  %30 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %29, i64 65536)
  ret %sCLMethod* %default_value29

cond_end:                                         ; preds = %cond_end25
  br label %loop_top_block

cond_jump_then15:                                 ; preds = %cond_jump_then
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 531), align 8
  %32 = bitcast i8* %31 to %map__charp_sCLMethodp**
  %self17 = load %map__charp_sCLMethodp*, %map__charp_sCLMethodp** %32, align 8
  %33 = getelementptr inbounds %map__charp_sCLMethodp, %map__charp_sCLMethodp* %self17, i32 0, i32 2
  %34 = load %sCLMethod**, %sCLMethod*** %33, align 8
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %36 = bitcast i8* %35 to i32*
  %it18 = load i32, i32* %36, align 4
  %element_addressB19 = getelementptr %sCLMethod*, %sCLMethod** %34, i32 %it18
  %element20 = load %sCLMethod*, %sCLMethod** %element_addressB19, align 8
  %37 = bitcast [8192 x i8*]* %lvtable to i8*
  %38 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %37, i64 65536)
  ret %sCLMethod* %element20

cond_end16:                                       ; preds = %cond_jump_then
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %40 = bitcast i8* %39 to i32*
  %it21 = load i32, i32* %40, align 4
  %addtmp = add nsw i32 %it21, 1
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %42 = bitcast i8* %41 to i32*
  store i32 %addtmp, i32* %42, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %44 = bitcast i8* %43 to i32*
  %it22 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 531), align 8
  %46 = bitcast i8* %45 to %map__charp_sCLMethodp**
  %self23 = load %map__charp_sCLMethodp*, %map__charp_sCLMethodp** %46, align 8
  %47 = getelementptr inbounds %map__charp_sCLMethodp, %map__charp_sCLMethodp* %self23, i32 0, i32 3
  %48 = load i32, i32* %47, align 4
  %getmp = icmp sge i32 %it22, %48
  br i1 %getmp, label %cond_jump_then24, label %"cond_jump_elif0\0A"

cond_jump_then24:                                 ; preds = %cond_end16
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %50 = bitcast i8* %49 to i32*
  store i32 0, i32* %50, align 4
  br label %cond_end25

"cond_jump_elif0\0A":                             ; preds = %cond_end16
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %52 = bitcast i8* %51 to i32*
  %it26 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 534), align 8
  %54 = bitcast i8* %53 to i32*
  %hash27 = load i32, i32* %54, align 4
  %eqtmpX = icmp eq i32 %it26, %hash27
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end25

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 533), align 8
  %56 = bitcast i8* %55 to %sCLMethod**
  %default_value28 = load %sCLMethod*, %sCLMethod** %56, align 8
  %57 = bitcast [8192 x i8*]* %lvtable to i8*
  %58 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %57, i64 65536)
  ret %sCLMethod* %default_value28

cond_end25:                                       ; preds = %"cond_jump_elif0\0A", %cond_jump_then24
  br label %cond_end
}

define %sCLStackFrame @"pop_back_sCLStackFrame27_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 539), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 540), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 540), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 541), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame28_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 536), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 536), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 537), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame29_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 536), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 536), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 537), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame30_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 536), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 536), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 537), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame31_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 536), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 536), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 537), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame32_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 536), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 536), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 537), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame33_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 532), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 533), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 533), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 534), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame34_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 532), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 533), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 533), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 534), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame35_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 534), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 535), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 536), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame36_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 536), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 537), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 537), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 538), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame37_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame38_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame39_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame40_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame41_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 536), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 537), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 537), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 538), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame42_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame43_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

define %sCLStackFrame @"pop_back_sCLStackFrame44_src/vm"(%vector__sCLStackFrame* %self, %sCLStackFrame %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLStackFrame*
  store %vector__sCLStackFrame* %self, %vector__sCLStackFrame** %self2, align 8
  %2 = bitcast %vector__sCLStackFrame** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 520), align 8
  %default_value3 = alloca %sCLStackFrame
  store %sCLStackFrame %default_value, %sCLStackFrame* %default_value3, align 8
  %3 = bitcast %sCLStackFrame* %default_value3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %self4 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self4, i32 0, i32 1
  %5 = load i32, i32* %4, align 4
  %eqtmpX = icmp eq i32 %5, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 521), align 8
  %7 = bitcast i8* %6 to %sCLStackFrame*
  %default_value5 = load %sCLStackFrame, %sCLStackFrame* %7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret %sCLStackFrame %default_value5

cond_end:                                         ; preds = %entry
  %self6 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %10 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self6, i32 0, i32 0
  %11 = load %sCLStackFrame*, %sCLStackFrame** %10, align 8
  %self7 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %12 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self7, i32 0, i32 1
  %13 = load i32, i32* %12, align 4
  %subttmp = sub nsw i32 %13, 1
  %element_addressB = getelementptr %sCLStackFrame, %sCLStackFrame* %11, i32 %subttmp
  %element = load %sCLStackFrame, %sCLStackFrame* %element_addressB, align 8
  %result = alloca %sCLStackFrame
  %14 = bitcast %sCLStackFrame* %result to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  store %sCLStackFrame %element, %sCLStackFrame* %result, align 8
  %self8 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %self9 = load %vector__sCLStackFrame*, %vector__sCLStackFrame** %self2, align 8
  %15 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self9, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp10 = sub nsw i32 %16, 1
  %17 = getelementptr inbounds %vector__sCLStackFrame, %vector__sCLStackFrame* %self8, i32 0, i32 1
  store i32 %subttmp10, i32* %17, align 4
  %addtmp = add nsw i32 %subttmp10, 1
  %result11 = load %sCLStackFrame, %sCLStackFrame* %result, align 8
  %18 = bitcast [8192 x i8*]* %lvtable to i8*
  %19 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %18, i64 65536)
  ret %sCLStackFrame %result11
}

attributes #0 = { nounwind }
attributes #1 = { argmemonly nounwind }

!llvm.dbg.cu = !{!0}

!0 = distinct !DICompileUnit(language: DW_LANG_C, file: !1, producer: "neo-c", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, enums: !2)
!1 = !DIFile(filename: "src/vm.nc", directory: "/home/ab25cq/repo/neo-c/clover3")
!2 = !{}
