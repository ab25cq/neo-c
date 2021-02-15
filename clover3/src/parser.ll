; ModuleID = 'Module parser'
source_filename = "Module parser"

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
%map__charp_int = type { i8**, i1*, i32*, i32, i32 }
%list__charp = type { %list_item__charp*, %list_item__charp*, i32 }
%list_item__charp = type { i8*, %list_item__charp*, %list_item__charp* }
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
@gGlobalVars = external externally_initialized global %map__charp_int*, align 8
@match_index = external externally_initialized global i32, align 4
@matches = external externally_initialized global %list__charp*, align 8
@gSigInt = external externally_initialized global i32, align 4
@global_string = private constant [11 x i8] c"%s:%d: %s\0A\00", align 1
@global_string.1 = private constant [27 x i8] c"overflow node of number %d\00", align 1
@global_string.2 = private constant [28 x i8] c"require digits after + or -\00", align 1
@global_string.3 = private constant [61 x i8] c"expects next character %c, but it is (character code %d)(%c)\00", align 1
@global_string.4 = private constant [5 x i8] c"elif\00", align 1
@global_string.5 = private constant [21 x i8] c"overflow elif number\00", align 1
@global_string.6 = private constant [5 x i8] c"else\00", align 1
@global_string.7 = private constant [5 x i8] c"elif\00", align 1
@global_string.8 = private constant [5 x i8] c"else\00", align 1
@global_string.9 = private constant [5 x i8] c"else\00", align 1
@global_string.10 = private constant [3 x i8] c"it\00", align 1
@global_string.11 = private constant [4 x i8] c"any\00", align 1
@global_string.12 = private constant [16 x i8] c"generics_type%d\00", align 1
@global_string.13 = private constant [7 x i8] c"lambda\00", align 1
@global_string.14 = private constant [22 x i8] c"invalid type name(%s)\00", align 1
@global_string.15 = private constant [7 x i8] c"class \00", align 1
@global_string.16 = private constant [49 x i8] c"unexpexted the source end in generics type names\00", align 1
@global_string.17 = private constant [27 x i8] c"unexpected the source end\0A\00", align 1
@global_string.18 = private constant [22 x i8] c"overflow pram number\0A\00", align 1
@global_string.19 = private constant [22 x i8] c"overflow pram number\0A\00", align 1
@global_string.20 = private constant [22 x i8] c"overflow pram number\0A\00", align 1
@global_string.21 = private constant [27 x i8] c"require close string value\00", align 1
@global_string.22 = private constant [26 x i8] c"require close regex value\00", align 1
@global_string.23 = private constant [25 x i8] c"require close list value\00", align 1
@global_string.24 = private constant [30 x i8] c"overflow list element number\0A\00", align 1
@global_string.25 = private constant [7 x i8] c"system\00", align 1
@global_string.26 = private constant [26 x i8] c"require right value for -\00", align 1
@global_string.27 = private constant [26 x i8] c"require right value for +\00", align 1
@global_string.28 = private constant [32 x i8] c"require expression as ( operand\00", align 1
@global_string.29 = private constant [20 x i8] c"require value for !\00", align 1
@global_string.30 = private constant [44 x i8] c"require method call after . (reading stdin)\00", align 1
@global_string.31 = private constant [17 x i8] c"require var name\00", align 1
@global_string.32 = private constant [4 x i8] c"var\00", align 1
@global_string.33 = private constant [48 x i8] c"require right value for the definition variable\00", align 1
@global_string.34 = private constant [17 x i8] c"require var name\00", align 1
@global_string.35 = private constant [5 x i8] c"true\00", align 1
@global_string.36 = private constant [6 x i8] c"false\00", align 1
@global_string.37 = private constant [5 x i8] c"null\00", align 1
@global_string.38 = private constant [3 x i8] c"if\00", align 1
@global_string.39 = private constant [6 x i8] c"break\00", align 1
@global_string.40 = private constant [6 x i8] c"while\00", align 1
@global_string.41 = private constant [6 x i8] c"throw\00", align 1
@global_string.42 = private constant [4 x i8] c"try\00", align 1
@global_string.43 = private constant [7 x i8] c"lambda\00", align 1
@global_string.44 = private constant [6 x i8] c"class\00", align 1
@global_string.45 = private constant [6 x i8] c"macro\00", align 1
@global_string.46 = private constant [7 x i8] c"return\00", align 1
@global_string.47 = private constant [4 x i8] c"new\00", align 1
@global_string.48 = private constant [11 x i8] c"initialize\00", align 1
@global_string.49 = private constant [11 x i8] c"save_class\00", align 1
@global_string.50 = private constant [19 x i8] c"saving %s class...\00", align 1
@global_string.51 = private constant [6 x i8] c"error\00", align 1
@global_string.52 = private constant [3 x i8] c"ok\00", align 1
@global_string.53 = private constant [11 x i8] c"load_class\00", align 1
@global_string.54 = private constant [5 x i8] c"exit\00", align 1
@global_string.55 = private constant [1 x i8] zeroinitializer, align 1
@global_string.56 = private constant [1 x i8] zeroinitializer, align 1
@global_string.57 = private constant [7 x i8] c"system\00", align 1
@global_string.58 = private constant [1 x i8] zeroinitializer, align 1
@global_string.59 = private constant [24 x i8] c"unexpected character %c\00", align 1
@global_string.60 = private constant [35 x i8] c"require right value for operator *\00", align 1
@global_string.61 = private constant [36 x i8] c"require right value for operator \5C*\00", align 1
@global_string.62 = private constant [35 x i8] c"require right value for operator /\00", align 1
@global_string.63 = private constant [36 x i8] c"require right value for operator \5C/\00", align 1
@global_string.64 = private constant [35 x i8] c"require right value for operator %\00", align 1
@global_string.65 = private constant [36 x i8] c"require right value for operator \5C%\00", align 1
@global_string.66 = private constant [35 x i8] c"require right value for operator +\00", align 1
@global_string.67 = private constant [36 x i8] c"require right value for operator \5C+\00", align 1
@global_string.68 = private constant [35 x i8] c"require right value for operator -\00", align 1
@global_string.69 = private constant [36 x i8] c"require right value for operator \5C-\00", align 1
@global_string.70 = private constant [36 x i8] c"require right value for >= operator\00", align 1
@global_string.71 = private constant [36 x i8] c"require right value for >= operator\00", align 1
@global_string.72 = private constant [36 x i8] c"require right value for <= operator\00", align 1
@global_string.73 = private constant [36 x i8] c"require right value for <= operator\00", align 1
@global_string.74 = private constant [35 x i8] c"require right value for > operator\00", align 1
@global_string.75 = private constant [35 x i8] c"require right value for > operator\00", align 1
@global_string.76 = private constant [35 x i8] c"require right value for < operator\00", align 1
@global_string.77 = private constant [35 x i8] c"require right value for < operator\00", align 1
@global_string.78 = private constant [35 x i8] c"require right value for operator +\00", align 1
@global_string.79 = private constant [35 x i8] c"require right value for operator +\00", align 1
@global_string.80 = private constant [35 x i8] c"require right value for operator +\00", align 1
@global_string.81 = private constant [35 x i8] c"require right value for operator +\00", align 1
@global_string.82 = private constant [36 x i8] c"require right value for && operator\00", align 1
@global_string.83 = private constant [36 x i8] c"require right value for operator ||\00", align 1

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

define void @parser_err_msg(%sParserInfo* %info, i8* %msg) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %info2 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info2, align 8
  %2 = bitcast %sParserInfo** %info2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %msg3 = alloca i8*
  store i8* %msg, i8** %msg3, align 8
  %3 = bitcast i8** %msg3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %info4 = load %sParserInfo*, %sParserInfo** %info2, align 8
  %4 = getelementptr inbounds %sParserInfo, %sParserInfo* %info4, i32 0, i32 0
  %5 = bitcast [4096 x i8]* %4 to i8*
  %info5 = load %sParserInfo*, %sParserInfo** %info2, align 8
  %6 = getelementptr inbounds %sParserInfo, %sParserInfo* %info5, i32 0, i32 1
  %7 = load i32, i32* %6, align 4
  %msg6 = load i8*, i8** %msg3, align 8
  %8 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_string, i32 0, i32 0), i8* %5, i32 %7, i8* %msg6)
  %info7 = load %sParserInfo*, %sParserInfo** %info2, align 8
  %info8 = load %sParserInfo*, %sParserInfo** %info2, align 8
  %9 = getelementptr inbounds %sParserInfo, %sParserInfo* %info8, i32 0, i32 2
  %10 = load i32, i32* %9, align 4
  %addtmp = add nsw i32 %10, 1
  %11 = getelementptr inbounds %sParserInfo, %sParserInfo* %info7, i32 0, i32 2
  store i32 %addtmp, i32* %11, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %info9 = load %sParserInfo*, %sParserInfo** %info2, align 8
  %info10 = load %sParserInfo*, %sParserInfo** %info2, align 8
  %12 = getelementptr inbounds %sParserInfo, %sParserInfo* %info10, i32 0, i32 3
  %13 = load i32, i32* %12, align 4
  %addtmp11 = add nsw i32 %13, 1
  %14 = getelementptr inbounds %sParserInfo, %sParserInfo* %info9, i32 0, i32 3
  store i32 %addtmp11, i32* %14, align 4
  %subttmp12 = sub nsw i32 %addtmp11, 1
  %15 = bitcast [8192 x i8*]* %lvtable to i8*
  %16 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %15, i64 65536)
  ret void
}

define void @skip_spaces_and_lf(%sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %info2 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info2, align 8
  %2 = bitcast %sParserInfo** %info2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = load %sParserInfo*, %sParserInfo** %info2, align 8
  call void @parse_comment(%sParserInfo* %info3)
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %3 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %4 = bitcast i8* %3 to %sParserInfo**
  %info4 = load %sParserInfo*, %sParserInfo** %4, align 8
  %5 = getelementptr inbounds %sParserInfo, %sParserInfo* %info4, i32 0, i32 4
  %6 = load i8*, i8** %5, align 8
  %derefference_value = load i8, i8* %6, align 8
  %eqtmpX = icmp eq i8 %derefference_value, 32
  store i1 %eqtmpX, i1* %andand_result_var1, align 1
  br i1 %eqtmpX, label %cond_jump_end, label %cond_jump_then

cond_end_block:                                   ; preds = %cond_else_block, %loop_top_block
  %info23 = load %sParserInfo*, %sParserInfo** %info2, align 8
  call void @parse_comment(%sParserInfo* %info23)
  %7 = bitcast [8192 x i8*]* %lvtable to i8*
  %8 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %7, i64 65536)
  ret void

cond_jump_then:                                   ; preds = %cond_then_block
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %10 = bitcast i8* %9 to %sParserInfo**
  %info5 = load %sParserInfo*, %sParserInfo** %10, align 8
  %11 = getelementptr inbounds %sParserInfo, %sParserInfo* %info5, i32 0, i32 4
  %12 = load i8*, i8** %11, align 8
  %derefference_value6 = load i8, i8* %12, align 8
  %eqtmpX7 = icmp eq i8 %derefference_value6, 9
  %oror = or i1 %eqtmpX, %eqtmpX7
  store i1 %oror, i1* %andand_result_var1, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then, %cond_then_block
  %oror_result_value = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value, label %cond_jump_then8, label %"cond_jump_elif0\0A"

cond_jump_then8:                                  ; preds = %cond_jump_end
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %14 = bitcast i8* %13 to %sParserInfo**
  %info9 = load %sParserInfo*, %sParserInfo** %14, align 8
  %15 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %16 = bitcast i8* %15 to %sParserInfo**
  %info10 = load %sParserInfo*, %sParserInfo** %16, align 8
  %17 = getelementptr inbounds %sParserInfo, %sParserInfo* %info10, i32 0, i32 4
  %18 = load i8*, i8** %17, align 8
  %19 = ptrtoint i8* %18 to i64
  %addtmp = add nsw i64 %19, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %20 = getelementptr inbounds %sParserInfo, %sParserInfo* %info9, i32 0, i32 4
  store i8* %intToPtr2, i8** %20, align 8
  %21 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %21, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  br label %cond_end

"cond_jump_elif0\0A":                             ; preds = %cond_jump_end
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %23 = bitcast i8* %22 to %sParserInfo**
  %info11 = load %sParserInfo*, %sParserInfo** %23, align 8
  %24 = getelementptr inbounds %sParserInfo, %sParserInfo* %info11, i32 0, i32 4
  %25 = load i8*, i8** %24, align 8
  %derefference_value12 = load i8, i8* %25, align 8
  %eqtmpX13 = icmp eq i8 %derefference_value12, 10
  br i1 %eqtmpX13, label %"cond_jump_elif_then0\0A", label %cond_else_block

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %27 = bitcast i8* %26 to %sParserInfo**
  %info14 = load %sParserInfo*, %sParserInfo** %27, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %29 = bitcast i8* %28 to %sParserInfo**
  %info15 = load %sParserInfo*, %sParserInfo** %29, align 8
  %30 = getelementptr inbounds %sParserInfo, %sParserInfo* %info15, i32 0, i32 4
  %31 = load i8*, i8** %30, align 8
  %32 = ptrtoint i8* %31 to i64
  %addtmp16 = add nsw i64 %32, 1
  %intToPtr217 = inttoptr i64 %addtmp16 to i8*
  %33 = getelementptr inbounds %sParserInfo, %sParserInfo* %info14, i32 0, i32 4
  store i8* %intToPtr217, i8** %33, align 8
  %34 = ptrtoint i8* %intToPtr217 to i64
  %subtmp18 = sub nsw i64 %34, 1
  %IntTOPtr4b19 = inttoptr i64 %subtmp18 to i8*
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %36 = bitcast i8* %35 to %sParserInfo**
  %info20 = load %sParserInfo*, %sParserInfo** %36, align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %38 = bitcast i8* %37 to %sParserInfo**
  %info21 = load %sParserInfo*, %sParserInfo** %38, align 8
  %39 = getelementptr inbounds %sParserInfo, %sParserInfo* %info21, i32 0, i32 1
  %40 = load i32, i32* %39, align 4
  %addtmp22 = add nsw i32 %40, 1
  %41 = getelementptr inbounds %sParserInfo, %sParserInfo* %info20, i32 0, i32 1
  store i32 %addtmp22, i32* %41, align 4
  %subttmp = sub nsw i32 %addtmp22, 1
  br label %cond_end

cond_else_block:                                  ; preds = %"cond_jump_elif0\0A"
  br label %cond_end_block

cond_end:                                         ; preds = %after_break, %"cond_jump_elif_then0\0A", %cond_jump_then8
  br label %loop_top_block

after_break:                                      ; No predecessors!
  br label %cond_end
}

define i1 @parse_params(%sCLParam* %params, i32* %num_params, %sParserInfo* %info, %vector__sCLTypep* %types) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %params2 = alloca %sCLParam*
  store %sCLParam* %params, %sCLParam** %params2, align 8
  %2 = bitcast %sCLParam** %params2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %num_params3 = alloca i32*
  store i32* %num_params, i32** %num_params3, align 8
  %3 = bitcast i32** %num_params3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %info4 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info4, align 8
  %4 = bitcast %sParserInfo** %info4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %types5 = alloca %vector__sCLTypep*
  store %vector__sCLTypep* %types, %vector__sCLTypep** %types5, align 8
  %5 = bitcast %vector__sCLTypep** %types5 to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %info6 = load %sParserInfo*, %sParserInfo** %info4, align 8
  call void @expected_next_character(i8 40, %sParserInfo* %info6)
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end51, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %7 = bitcast i8* %6 to %sParserInfo**
  %info7 = load %sParserInfo*, %sParserInfo** %7, align 8
  %8 = getelementptr inbounds %sParserInfo, %sParserInfo* %info7, i32 0, i32 4
  %9 = load i8*, i8** %8, align 8
  %derefference_value = load i8, i8* %9, align 8
  %eqtmpX = icmp eq i8 %derefference_value, 41
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_end_block:                                   ; preds = %cond_end48, %cond_end42, %cond_jump_then, %loop_top_block
  %info52 = load %sParserInfo*, %sParserInfo** %info4, align 8
  call void @expected_next_character(i8 41, %sParserInfo* %info52)
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret i1 true

cond_jump_then:                                   ; preds = %cond_then_block
  br label %cond_end_block

cond_end:                                         ; preds = %after_break, %cond_then_block
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %13 = bitcast i8* %12 to %sParserInfo**
  %info8 = load %sParserInfo*, %sParserInfo** %13, align 8
  %14 = call i8* @parse_word(%sParserInfo* %info8)
  %var_name = alloca i8*
  %15 = bitcast i8** %var_name to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i8* %14, i8** %var_name, align 8
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %17 = bitcast i8* %16 to %sParserInfo**
  %info9 = load %sParserInfo*, %sParserInfo** %17, align 8
  call void @expected_next_character(i8 58, %sParserInfo* %info9)
  %type = alloca %sCLType*
  %18 = bitcast %sCLType** %type to i8*
  store i8* %18, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store %sCLType* null, %sCLType** %type, align 8
  %type10 = load %sCLType*, %sCLType** %type, align 8
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %20 = bitcast i8* %19 to %sParserInfo**
  %info11 = load %sParserInfo*, %sParserInfo** %20, align 8
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %22 = bitcast i8* %21 to %vector__sCLTypep**
  %types12 = load %vector__sCLTypep*, %vector__sCLTypep** %22, align 8
  %23 = call i1 @parse_type(%sCLType** %type, %sParserInfo* %info11, %vector__sCLTypep* %types12)
  %LOGICAL_DIANEAL = icmp eq i1 %23, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then13, label %cond_end14

after_break:                                      ; No predecessors!
  br label %cond_end

cond_jump_then13:                                 ; preds = %cond_end
  %24 = bitcast [8192 x i8*]* %lvtable to i8*
  %25 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %24, i64 65536)
  %26 = load i8*, i8** %var_name, align 8
  %27 = ptrtoint i8* %26 to i64
  %28 = icmp ne i64 %27, 0
  br i1 %28, label %cond_then_block15, label %cond_end16

cond_end14:                                       ; preds = %cond_end
  %29 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %30 = bitcast i8* %29 to %sCLParam**
  %params17 = load %sCLParam*, %sCLParam** %30, align 8
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %32 = bitcast i8* %31 to i32**
  %num_params18 = load i32*, i32** %32, align 8
  %derefference_value19 = load i32, i32* %num_params18, align 8
  %element_addressB = getelementptr %sCLParam, %sCLParam* %params17, i32 %derefference_value19
  %element = load %sCLParam, %sCLParam* %element_addressB, align 8
  %33 = getelementptr inbounds %sCLParam, %sCLParam* %element_addressB, i32 0, i32 0
  %34 = bitcast [128 x i8]* %33 to i8*
  %var_name20 = load i8*, i8** %var_name, align 8
  %35 = call i8* @xstrncpy(i8* %34, i8* %var_name20, i32 128)
  %36 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %37 = bitcast i8* %36 to %sCLParam**
  %params21 = load %sCLParam*, %sCLParam** %37, align 8
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %39 = bitcast i8* %38 to i32**
  %num_params22 = load i32*, i32** %39, align 8
  %derefference_value23 = load i32, i32* %num_params22, align 8
  %element_addressB24 = getelementptr %sCLParam, %sCLParam* %params21, i32 %derefference_value23
  %element25 = load %sCLParam, %sCLParam* %element_addressB24, align 8
  %type26 = load %sCLType*, %sCLType** %type, align 8
  %40 = getelementptr inbounds %sCLParam, %sCLParam* %element_addressB24, i32 0, i32 1
  store %sCLType* %type26, %sCLType** %40, align 8
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %42 = bitcast i8* %41 to i32**
  %num_params27 = load i32*, i32** %42, align 8
  %derefference_value28 = load i32, i32* %num_params27, align 8
  %43 = load i32, i32* %num_params27, align 4
  %addtmp = add nsw i32 %43, 1
  store i32 %addtmp, i32* %num_params27, align 8
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %45 = bitcast i8* %44 to %sParserInfo**
  %info29 = load %sParserInfo*, %sParserInfo** %45, align 8
  %46 = getelementptr inbounds %sParserInfo, %sParserInfo* %info29, i32 0, i32 4
  %47 = load i8*, i8** %46, align 8
  %derefference_value30 = load i8, i8* %47, align 8
  %eqtmpX31 = icmp eq i8 %derefference_value30, 44
  br i1 %eqtmpX31, label %cond_jump_then32, label %"cond_jump_elif0\0A"

cond_then_block15:                                ; preds = %cond_jump_then13
  br label %cond_end16

cond_end16:                                       ; preds = %cond_then_block15, %cond_jump_then13
  call void @ncfree(i8* %26)
  ret i1 false

cond_jump_then32:                                 ; preds = %cond_end14
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %49 = bitcast i8* %48 to %sParserInfo**
  %info34 = load %sParserInfo*, %sParserInfo** %49, align 8
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %51 = bitcast i8* %50 to %sParserInfo**
  %info35 = load %sParserInfo*, %sParserInfo** %51, align 8
  %52 = getelementptr inbounds %sParserInfo, %sParserInfo* %info35, i32 0, i32 4
  %53 = load i8*, i8** %52, align 8
  %54 = ptrtoint i8* %53 to i64
  %addtmp36 = add nsw i64 %54, 1
  %intToPtr2 = inttoptr i64 %addtmp36 to i8*
  %55 = getelementptr inbounds %sParserInfo, %sParserInfo* %info34, i32 0, i32 4
  store i8* %intToPtr2, i8** %55, align 8
  %56 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %56, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %58 = bitcast i8* %57 to %sParserInfo**
  %info37 = load %sParserInfo*, %sParserInfo** %58, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info37)
  br label %cond_end33

"cond_jump_elif0\0A":                             ; preds = %cond_end14
  %59 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %60 = bitcast i8* %59 to %sParserInfo**
  %info38 = load %sParserInfo*, %sParserInfo** %60, align 8
  %61 = getelementptr inbounds %sParserInfo, %sParserInfo* %info38, i32 0, i32 4
  %62 = load i8*, i8** %61, align 8
  %derefference_value39 = load i8, i8* %62, align 8
  %eqtmpX40 = icmp eq i8 %derefference_value39, 41
  br i1 %eqtmpX40, label %"cond_jump_elif_then0\0A", label %"cond_jump_elif1\0A"

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %63 = load i8*, i8** %var_name, align 8
  %64 = ptrtoint i8* %63 to i64
  %65 = icmp ne i64 %64, 0
  br i1 %65, label %cond_then_block41, label %cond_end42

"cond_jump_elif1\0A":                             ; preds = %"cond_jump_elif0\0A"
  %66 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %67 = bitcast i8* %66 to %sParserInfo**
  %info44 = load %sParserInfo*, %sParserInfo** %67, align 8
  %68 = getelementptr inbounds %sParserInfo, %sParserInfo* %info44, i32 0, i32 4
  %69 = load i8*, i8** %68, align 8
  %derefference_value45 = load i8, i8* %69, align 8
  %eqtmpX46 = icmp eq i8 %derefference_value45, 0
  br i1 %eqtmpX46, label %"cond_jump_elif_then1\0A", label %cond_end33

"cond_jump_elif_then1\0A":                        ; preds = %"cond_jump_elif1\0A"
  %70 = load i8*, i8** %var_name, align 8
  %71 = ptrtoint i8* %70 to i64
  %72 = icmp ne i64 %71, 0
  br i1 %72, label %cond_then_block47, label %cond_end48

cond_end33:                                       ; preds = %after_break49, %"cond_jump_elif1\0A", %after_break43, %cond_jump_then32
  %73 = load i8*, i8** %var_name, align 8
  %74 = ptrtoint i8* %73 to i64
  %75 = icmp ne i64 %74, 0
  br i1 %75, label %cond_then_block50, label %cond_end51

cond_then_block41:                                ; preds = %"cond_jump_elif_then0\0A"
  br label %cond_end42

cond_end42:                                       ; preds = %cond_then_block41, %"cond_jump_elif_then0\0A"
  call void @ncfree(i8* %63)
  br label %cond_end_block

after_break43:                                    ; No predecessors!
  br label %cond_end33

cond_then_block47:                                ; preds = %"cond_jump_elif_then1\0A"
  br label %cond_end48

cond_end48:                                       ; preds = %cond_then_block47, %"cond_jump_elif_then1\0A"
  call void @ncfree(i8* %70)
  br label %cond_end_block

after_break49:                                    ; No predecessors!
  br label %cond_end33

cond_then_block50:                                ; preds = %cond_end33
  br label %cond_end51

cond_end51:                                       ; preds = %cond_then_block50, %cond_end33
  call void @ncfree(i8* %73)
  br label %loop_top_block
}

define i8* @parse_word(%sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %info2 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info2, align 8
  %2 = bitcast %sParserInfo** %info2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = load %sParserInfo*, %sParserInfo** %info2, align 8
  call void @parse_comment(%sParserInfo* %info3)
  %3 = call i8* @nccalloc(i64 1, i64 16)
  %4 = bitcast i8* %3 to %buffer*
  %5 = call %buffer* @buffer_initialize(%buffer* %4)
  %result = alloca %buffer*
  %6 = bitcast %buffer** %result to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  store %buffer* %5, %buffer** %result, align 8
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_then_block, %entry
  %7 = call i16** @__ctype_b_loc()
  %derefference_value = load i16*, i16** %7, align 8
  %info4 = load %sParserInfo*, %sParserInfo** %info2, align 8
  %8 = getelementptr inbounds %sParserInfo, %sParserInfo* %info4, i32 0, i32 4
  %9 = load i8*, i8** %8, align 8
  %derefference_value5 = load i8, i8* %9, align 8
  %sext13 = zext i8 %derefference_value5 to i32
  %element_addressB = getelementptr i16, i16* %derefference_value, i32 %sext13
  %element = load i16, i16* %element_addressB, align 2
  %andtmp = and i16 %element, 8
  %10 = icmp ne i16 %andtmp, 0
  store i1 %10, i1* %andand_result_var1, align 1
  br i1 %10, label %cond_jump_end, label %cond_jump_then

cond_jump_then:                                   ; preds = %loop_top_block
  %info6 = load %sParserInfo*, %sParserInfo** %info2, align 8
  %11 = getelementptr inbounds %sParserInfo, %sParserInfo* %info6, i32 0, i32 4
  %12 = load i8*, i8** %11, align 8
  %derefference_value7 = load i8, i8* %12, align 8
  %eqtmpX = icmp eq i8 %derefference_value7, 95
  %oror = or i1 %10, %eqtmpX
  store i1 %oror, i1* %andand_result_var1, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then, %loop_top_block
  %oror_result_value = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %cond_jump_end
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %14 = bitcast i8* %13 to %buffer**
  %result8 = load %buffer*, %buffer** %14, align 8
  %15 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %16 = bitcast i8* %15 to %sParserInfo**
  %info9 = load %sParserInfo*, %sParserInfo** %16, align 8
  %17 = getelementptr inbounds %sParserInfo, %sParserInfo* %info9, i32 0, i32 4
  %18 = load i8*, i8** %17, align 8
  %derefference_value10 = load i8, i8* %18, align 8
  call void @buffer_append_char(%buffer* %result8, i8 %derefference_value10)
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %20 = bitcast i8* %19 to %sParserInfo**
  %info11 = load %sParserInfo*, %sParserInfo** %20, align 8
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %22 = bitcast i8* %21 to %sParserInfo**
  %info12 = load %sParserInfo*, %sParserInfo** %22, align 8
  %23 = getelementptr inbounds %sParserInfo, %sParserInfo* %info12, i32 0, i32 4
  %24 = load i8*, i8** %23, align 8
  %25 = ptrtoint i8* %24 to i64
  %addtmp = add nsw i64 %25, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %26 = getelementptr inbounds %sParserInfo, %sParserInfo* %info11, i32 0, i32 4
  store i8* %intToPtr2, i8** %26, align 8
  %27 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %27, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  br label %loop_top_block

cond_end_block:                                   ; preds = %cond_jump_end
  %info13 = load %sParserInfo*, %sParserInfo** %info2, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info13)
  %result14 = load %buffer*, %buffer** %result, align 8
  %28 = call i8* @buffer_to_string(%buffer* %result14)
  %29 = bitcast [8192 x i8*]* %lvtable to i8*
  %30 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %29, i64 65536)
  %31 = load %buffer*, %buffer** %result, align 8
  call void @buffer_finalize(%buffer* %31)
  %32 = ptrtoint %buffer* %31 to i64
  %33 = icmp ne i64 %32, 0
  br i1 %33, label %cond_then_block15, label %cond_end

cond_then_block15:                                ; preds = %cond_end_block
  br label %cond_end

cond_end:                                         ; preds = %cond_then_block15, %cond_end_block
  %34 = bitcast %buffer* %31 to i8*
  call void @ncfree(i8* %34)
  ret i8* %28
}

define i1 @parse_type(%sCLType** %type, %sParserInfo* %info, %vector__sCLTypep* %types) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %type2 = alloca %sCLType**
  store %sCLType** %type, %sCLType*** %type2, align 8
  %2 = bitcast %sCLType*** %type2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %types4 = alloca %vector__sCLTypep*
  store %vector__sCLTypep* %types, %vector__sCLTypep** %types4, align 8
  %4 = bitcast %vector__sCLTypep** %types4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %info5 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %5 = call i8* @parse_word(%sParserInfo* %info5)
  %name = alloca i8*
  %6 = bitcast i8** %name to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i8* %5, i8** %name, align 8
  %info6 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %7 = getelementptr inbounds %sParserInfo, %sParserInfo* %info6, i32 0, i32 5
  %8 = load %vector__charp*, %vector__charp** %7, align 8
  %noteqtmp = icmp ne %vector__charp* %8, null
  br i1 %noteqtmp, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %i = alloca i32
  %9 = bitcast i32* %i to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

cond_end:                                         ; preds = %cond_end_block, %entry
  %type33 = load %sCLType**, %sCLType*** %type2, align 8
  %name34 = load i8*, i8** %name, align 8
  %types35 = load %vector__sCLTypep*, %vector__sCLTypep** %types4, align 8
  %10 = call %sCLType* @create_type(i8* %name34, %vector__sCLTypep* %types35)
  store %sCLType* %10, %sCLType** %type33, align 8
  %name36 = load i8*, i8** %name, align 8
  %11 = call i32 @strcmp(i8* %name36, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_string.13, i32 0, i32 0))
  %eqtmpX37 = icmp eq i32 %11, 0
  br i1 %eqtmpX37, label %cond_jump_then38, label %cond_end39

loop_top_block:                                   ; preds = %cond_end13, %cond_jump_then
  %i7 = load i32, i32* %i, align 4
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %13 = bitcast i8* %12 to %sParserInfo**
  %info8 = load %sParserInfo*, %sParserInfo** %13, align 8
  %14 = getelementptr inbounds %sParserInfo, %sParserInfo* %info8, i32 0, i32 5
  %15 = load %vector__charp*, %vector__charp** %14, align 8
  %16 = call i32 @"length_charp10_src/parser"(%vector__charp* %15)
  %letmp = icmp slt i32 %i7, %16
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %18 = bitcast i8* %17 to i8**
  %name9 = load i8*, i8** %18, align 8
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %20 = bitcast i8* %19 to %sParserInfo**
  %info10 = load %sParserInfo*, %sParserInfo** %20, align 8
  %21 = getelementptr inbounds %sParserInfo, %sParserInfo* %info10, i32 0, i32 5
  %22 = load %vector__charp*, %vector__charp** %21, align 8
  %i11 = load i32, i32* %i, align 4
  %23 = call i8* @"item_charp11_src/parser"(%vector__charp* %22, i32 %i11, i8* null)
  %24 = call i32 @strcmp(i8* %name9, i8* %23)
  %eqtmpX = icmp eq i32 %24, 0
  br i1 %eqtmpX, label %cond_jump_then12, label %cond_end13

cond_end_block:                                   ; preds = %loop_top_block
  br label %cond_end

cond_jump_then12:                                 ; preds = %cond_then_block
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %26 = bitcast i8* %25 to i32*
  %i14 = load i32, i32* %26, align 4
  %27 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_string.12, i32 0, i32 0), i32 %i14)
  %generics_type_name = alloca i8*
  %28 = bitcast i8** %generics_type_name to i8*
  store i8* %28, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i8* %27, i8** %generics_type_name, align 8
  %29 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %30 = bitcast i8* %29 to %sCLType***
  %type15 = load %sCLType**, %sCLType*** %30, align 8
  %generics_type_name16 = load i8*, i8** %generics_type_name, align 8
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %32 = bitcast i8* %31 to %vector__sCLTypep**
  %types17 = load %vector__sCLTypep*, %vector__sCLTypep** %32, align 8
  %33 = call %sCLType* @create_type(i8* %generics_type_name16, %vector__sCLTypep* %types17)
  store %sCLType* %33, %sCLType** %type15, align 8
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %35 = bitcast i8* %34 to %sParserInfo**
  %info18 = load %sParserInfo*, %sParserInfo** %35, align 8
  %36 = getelementptr inbounds %sParserInfo, %sParserInfo* %info18, i32 0, i32 4
  %37 = load i8*, i8** %36, align 8
  %derefference_value = load i8, i8* %37, align 8
  %eqtmpX19 = icmp eq i8 %derefference_value, 63
  br i1 %eqtmpX19, label %cond_jump_then20, label %cond_end21

cond_end13:                                       ; preds = %cond_then_block
  %i31 = load i32, i32* %i, align 4
  %addtmp32 = add nsw i32 %i31, 1
  store i32 %addtmp32, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp32, 1
  br label %loop_top_block

cond_jump_then20:                                 ; preds = %cond_jump_then12
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %39 = bitcast i8* %38 to %sParserInfo**
  %info22 = load %sParserInfo*, %sParserInfo** %39, align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %41 = bitcast i8* %40 to %sParserInfo**
  %info23 = load %sParserInfo*, %sParserInfo** %41, align 8
  %42 = getelementptr inbounds %sParserInfo, %sParserInfo* %info23, i32 0, i32 4
  %43 = load i8*, i8** %42, align 8
  %44 = ptrtoint i8* %43 to i64
  %addtmp = add nsw i64 %44, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %45 = getelementptr inbounds %sParserInfo, %sParserInfo* %info22, i32 0, i32 4
  store i8* %intToPtr2, i8** %45, align 8
  %46 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %46, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %48 = bitcast i8* %47 to %sParserInfo**
  %info24 = load %sParserInfo*, %sParserInfo** %48, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info24)
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %50 = bitcast i8* %49 to %sCLType***
  %type25 = load %sCLType**, %sCLType*** %50, align 8
  %derefference_value26 = load %sCLType*, %sCLType** %type25, align 8
  %51 = getelementptr inbounds %sCLType, %sCLType* %derefference_value26, i32 0, i32 4
  store i1 true, i1* %51, align 1
  br label %cond_end21

cond_end21:                                       ; preds = %cond_jump_then20, %cond_jump_then12
  %52 = bitcast [8192 x i8*]* %lvtable to i8*
  %53 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %52, i64 65536)
  %54 = load i8*, i8** %generics_type_name, align 8
  %55 = ptrtoint i8* %54 to i64
  %56 = icmp ne i64 %55, 0
  br i1 %56, label %cond_then_block27, label %cond_end28

cond_then_block27:                                ; preds = %cond_end21
  br label %cond_end28

cond_end28:                                       ; preds = %cond_then_block27, %cond_end21
  call void @ncfree(i8* %54)
  %57 = load i8*, i8** %name, align 8
  %58 = ptrtoint i8* %57 to i64
  %59 = icmp ne i64 %58, 0
  br i1 %59, label %cond_then_block29, label %cond_end30

cond_then_block29:                                ; preds = %cond_end28
  br label %cond_end30

cond_end30:                                       ; preds = %cond_then_block29, %cond_end28
  call void @ncfree(i8* %57)
  ret i1 true

cond_jump_then38:                                 ; preds = %cond_end
  %params = alloca [32 x %sCLParam]
  %60 = bitcast [32 x %sCLParam]* %params to i8*
  store i8* %60, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %num_params = alloca i32
  %61 = bitcast i32* %num_params to i8*
  store i8* %61, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i32 0, i32* %num_params, align 4
  %num_params40 = load i32, i32* %num_params, align 4
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %63 = bitcast i8* %62 to %sParserInfo**
  %info41 = load %sParserInfo*, %sParserInfo** %63, align 8
  %64 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %65 = bitcast i8* %64 to %vector__sCLTypep**
  %types42 = load %vector__sCLTypep*, %vector__sCLTypep** %65, align 8
  %66 = bitcast [32 x %sCLParam]* %params to %sCLParam*
  %67 = call i1 @parse_params(%sCLParam* %66, i32* %num_params, %sParserInfo* %info41, %vector__sCLTypep* %types42)
  %LOGICAL_DIANEAL = icmp eq i1 %67, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then43, label %cond_end44

cond_end39:                                       ; preds = %cond_end
  %type87 = load %sCLType**, %sCLType*** %type2, align 8
  %derefference_value88 = load %sCLType*, %sCLType** %type87, align 8
  %68 = getelementptr inbounds %sCLType, %sCLType* %derefference_value88, i32 0, i32 2
  store i32 0, i32* %68, align 4
  %info89 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %69 = getelementptr inbounds %sParserInfo, %sParserInfo* %info89, i32 0, i32 4
  %70 = load i8*, i8** %69, align 8
  %derefference_value90 = load i8, i8* %70, align 8
  %eqtmpX91 = icmp eq i8 %derefference_value90, 60
  br i1 %eqtmpX91, label %cond_jump_then92, label %cond_end93

cond_jump_then43:                                 ; preds = %cond_jump_then38
  %71 = bitcast [8192 x i8*]* %lvtable to i8*
  %72 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %71, i64 65536)
  %73 = load i8*, i8** %name, align 8
  %74 = ptrtoint i8* %73 to i64
  %75 = icmp ne i64 %74, 0
  br i1 %75, label %cond_then_block45, label %cond_end46

cond_end44:                                       ; preds = %cond_jump_then38
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %77 = bitcast i8* %76 to %sCLType***
  %type47 = load %sCLType**, %sCLType*** %77, align 8
  %derefference_value48 = load %sCLType*, %sCLType** %type47, align 8
  %num_params49 = load i32, i32* %num_params, align 4
  %78 = getelementptr inbounds %sCLType, %sCLType* %derefference_value48, i32 0, i32 6
  store i32 %num_params49, i32* %78, align 4
  %i50 = alloca i32
  %79 = bitcast i32* %i50 to i8*
  store i8* %79, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 0, i32* %i50, align 4
  br label %loop_top_block51

cond_then_block45:                                ; preds = %cond_jump_then43
  br label %cond_end46

cond_end46:                                       ; preds = %cond_then_block45, %cond_jump_then43
  call void @ncfree(i8* %73)
  ret i1 false

loop_top_block51:                                 ; preds = %cond_then_block55, %cond_end44
  %i52 = load i32, i32* %i50, align 4
  %80 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %81 = bitcast i8* %80 to i32*
  %num_params53 = load i32, i32* %81, align 4
  %letmp54 = icmp slt i32 %i52, %num_params53
  br i1 %letmp54, label %cond_then_block55, label %cond_end_block56

cond_then_block55:                                ; preds = %loop_top_block51
  %82 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %83 = bitcast i8* %82 to %sCLType***
  %type57 = load %sCLType**, %sCLType*** %83, align 8
  %derefference_value58 = load %sCLType*, %sCLType** %type57, align 8
  %84 = getelementptr inbounds %sCLType, %sCLType* %derefference_value58, i32 0, i32 5
  %85 = bitcast [32 x %sCLParam]* %84 to %sCLParam*
  %i59 = load i32, i32* %i50, align 4
  %86 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %87 = bitcast i8* %86 to [32 x %sCLParam]*
  %i60 = load i32, i32* %i50, align 4
  %88 = bitcast [32 x %sCLParam]* %87 to %sCLParam*
  %element_address = getelementptr %sCLParam, %sCLParam* %88, i32 %i60
  %element = load %sCLParam, %sCLParam* %element_address, align 8
  %element_addressD = getelementptr %sCLParam, %sCLParam* %85, i32 %i59
  store %sCLParam %element, %sCLParam* %element_addressD, align 8
  %i61 = load i32, i32* %i50, align 4
  %addtmp62 = add nsw i32 %i61, 1
  store i32 %addtmp62, i32* %i50, align 4
  %subttmp63 = sub nsw i32 %addtmp62, 1
  br label %loop_top_block51

cond_end_block56:                                 ; preds = %loop_top_block51
  %89 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %90 = bitcast i8* %89 to %sParserInfo**
  %info64 = load %sParserInfo*, %sParserInfo** %90, align 8
  call void @expected_next_character(i8 58, %sParserInfo* %info64)
  %result_type = alloca %sCLType*
  %91 = bitcast %sCLType** %result_type to i8*
  store i8* %91, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store %sCLType* null, %sCLType** %result_type, align 8
  %result_type65 = load %sCLType*, %sCLType** %result_type, align 8
  %92 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %93 = bitcast i8* %92 to %sParserInfo**
  %info66 = load %sParserInfo*, %sParserInfo** %93, align 8
  %94 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %95 = bitcast i8* %94 to %vector__sCLTypep**
  %types67 = load %vector__sCLTypep*, %vector__sCLTypep** %95, align 8
  %96 = call i1 @parse_type(%sCLType** %result_type, %sParserInfo* %info66, %vector__sCLTypep* %types67)
  %LOGICAL_DIANEAL68 = icmp eq i1 %96, false
  br i1 %LOGICAL_DIANEAL68, label %cond_jump_then69, label %cond_end70

cond_jump_then69:                                 ; preds = %cond_end_block56
  %97 = bitcast [8192 x i8*]* %lvtable to i8*
  %98 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %97, i64 65536)
  %99 = load i8*, i8** %name, align 8
  %100 = ptrtoint i8* %99 to i64
  %101 = icmp ne i64 %100, 0
  br i1 %101, label %cond_then_block71, label %cond_end72

cond_end70:                                       ; preds = %cond_end_block56
  %102 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %103 = bitcast i8* %102 to %sCLType***
  %type73 = load %sCLType**, %sCLType*** %103, align 8
  %derefference_value74 = load %sCLType*, %sCLType** %type73, align 8
  %result_type75 = load %sCLType*, %sCLType** %result_type, align 8
  %104 = getelementptr inbounds %sCLType, %sCLType* %derefference_value74, i32 0, i32 7
  store %sCLType* %result_type75, %sCLType** %104, align 8
  %105 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %106 = bitcast i8* %105 to %sCLType***
  %type76 = load %sCLType**, %sCLType*** %106, align 8
  %derefference_value77 = load %sCLType*, %sCLType** %type76, align 8
  %107 = getelementptr inbounds %sCLType, %sCLType* %derefference_value77, i32 0, i32 1
  %108 = load %sCLClass*, %sCLClass** %107, align 8
  %eqtmpX78 = icmp eq %sCLClass* %108, null
  br i1 %eqtmpX78, label %cond_jump_then79, label %cond_end80

cond_then_block71:                                ; preds = %cond_jump_then69
  br label %cond_end72

cond_end72:                                       ; preds = %cond_then_block71, %cond_jump_then69
  call void @ncfree(i8* %99)
  ret i1 false

cond_jump_then79:                                 ; preds = %cond_end70
  %109 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %110 = bitcast i8* %109 to %sParserInfo**
  %info81 = load %sParserInfo*, %sParserInfo** %110, align 8
  %111 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %112 = bitcast i8* %111 to i8**
  %name82 = load i8*, i8** %112, align 8
  %113 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @global_string.14, i32 0, i32 0), i8* %name82)
  call void @parser_err_msg(%sParserInfo* %info81, i8* %113)
  %114 = ptrtoint i8* %113 to i64
  %115 = icmp ne i64 %114, 0
  br i1 %115, label %cond_then_block83, label %cond_end84

cond_end80:                                       ; preds = %cond_end84, %cond_end70
  %116 = bitcast [8192 x i8*]* %lvtable to i8*
  %117 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %116, i64 65536)
  %118 = load i8*, i8** %name, align 8
  %119 = ptrtoint i8* %118 to i64
  %120 = icmp ne i64 %119, 0
  br i1 %120, label %cond_then_block85, label %cond_end86

cond_then_block83:                                ; preds = %cond_jump_then79
  br label %cond_end84

cond_end84:                                       ; preds = %cond_then_block83, %cond_jump_then79
  call void @ncfree(i8* %113)
  br label %cond_end80

cond_then_block85:                                ; preds = %cond_end80
  br label %cond_end86

cond_end86:                                       ; preds = %cond_then_block85, %cond_end80
  call void @ncfree(i8* %118)
  ret i1 true

cond_jump_then92:                                 ; preds = %cond_end39
  %121 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %122 = bitcast i8* %121 to %sParserInfo**
  %info94 = load %sParserInfo*, %sParserInfo** %122, align 8
  %123 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %124 = bitcast i8* %123 to %sParserInfo**
  %info95 = load %sParserInfo*, %sParserInfo** %124, align 8
  %125 = getelementptr inbounds %sParserInfo, %sParserInfo* %info95, i32 0, i32 4
  %126 = load i8*, i8** %125, align 8
  %127 = ptrtoint i8* %126 to i64
  %addtmp96 = add nsw i64 %127, 1
  %intToPtr297 = inttoptr i64 %addtmp96 to i8*
  %128 = getelementptr inbounds %sParserInfo, %sParserInfo* %info94, i32 0, i32 4
  store i8* %intToPtr297, i8** %128, align 8
  %129 = ptrtoint i8* %intToPtr297 to i64
  %subtmp98 = sub nsw i64 %129, 1
  %IntTOPtr4b99 = inttoptr i64 %subtmp98 to i8*
  %130 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %131 = bitcast i8* %130 to %sParserInfo**
  %info100 = load %sParserInfo*, %sParserInfo** %131, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info100)
  %i101 = alloca i32
  %132 = bitcast i32* %i101 to i8*
  store i8* %132, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i32 0, i32* %i101, align 4
  br label %loop_top_block102

cond_end93:                                       ; preds = %cond_end_block106, %cond_end39
  %info150 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %133 = getelementptr inbounds %sParserInfo, %sParserInfo* %info150, i32 0, i32 4
  %134 = load i8*, i8** %133, align 8
  %derefference_value151 = load i8, i8* %134, align 8
  %eqtmpX152 = icmp eq i8 %derefference_value151, 63
  br i1 %eqtmpX152, label %cond_jump_then153, label %cond_end154

loop_top_block102:                                ; preds = %cond_end129, %cond_jump_then92
  %i103 = load i32, i32* %i101, align 4
  %letmp104 = icmp slt i32 %i103, 32
  br i1 %letmp104, label %cond_then_block105, label %cond_end_block106

cond_then_block105:                               ; preds = %loop_top_block102
  %135 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %136 = bitcast i8* %135 to %sCLType***
  %type107 = load %sCLType**, %sCLType*** %136, align 8
  %derefference_value108 = load %sCLType*, %sCLType** %type107, align 8
  %137 = getelementptr inbounds %sCLType, %sCLType* %derefference_value108, i32 0, i32 3
  %138 = bitcast [32 x %sCLType*]* %137 to %sCLType**
  %i109 = load i32, i32* %i101, align 4
  %139 = ptrtoint %sCLType** %138 to i64
  %sextXYZ = sext i32 %i109 to i64
  %multtmp = mul nsw i64 %sextXYZ, 8
  %addtmp110 = add nsw i64 %139, %multtmp
  %intToPtr2111 = inttoptr i64 %addtmp110 to %sCLType**
  %140 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %141 = bitcast i8* %140 to %sParserInfo**
  %info112 = load %sParserInfo*, %sParserInfo** %141, align 8
  %142 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %143 = bitcast i8* %142 to %vector__sCLTypep**
  %types113 = load %vector__sCLTypep*, %vector__sCLTypep** %143, align 8
  %144 = call i1 @parse_type(%sCLType** %intToPtr2111, %sParserInfo* %info112, %vector__sCLTypep* %types113)
  %LOGICAL_DIANEAL114 = icmp eq i1 %144, false
  br i1 %LOGICAL_DIANEAL114, label %cond_jump_then115, label %cond_end116

cond_end_block106:                                ; preds = %"cond_jump_elif_then0\0A", %loop_top_block102
  br label %cond_end93

cond_jump_then115:                                ; preds = %cond_then_block105
  %145 = bitcast [8192 x i8*]* %lvtable to i8*
  %146 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %145, i64 65536)
  %147 = load i8*, i8** %name, align 8
  %148 = ptrtoint i8* %147 to i64
  %149 = icmp ne i64 %148, 0
  br i1 %149, label %cond_then_block117, label %cond_end118

cond_end116:                                      ; preds = %cond_then_block105
  %150 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %151 = bitcast i8* %150 to %sCLType***
  %type119 = load %sCLType**, %sCLType*** %151, align 8
  %derefference_value120 = load %sCLType*, %sCLType** %type119, align 8
  %152 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %153 = bitcast i8* %152 to %sCLType***
  %type121 = load %sCLType**, %sCLType*** %153, align 8
  %derefference_value122 = load %sCLType*, %sCLType** %type121, align 8
  %154 = getelementptr inbounds %sCLType, %sCLType* %derefference_value122, i32 0, i32 2
  %155 = load i32, i32* %154, align 4
  %addtmp123 = add nsw i32 %155, 1
  %156 = getelementptr inbounds %sCLType, %sCLType* %derefference_value120, i32 0, i32 2
  store i32 %addtmp123, i32* %156, align 4
  %subttmp124 = sub nsw i32 %addtmp123, 1
  %157 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %158 = bitcast i8* %157 to %sParserInfo**
  %info125 = load %sParserInfo*, %sParserInfo** %158, align 8
  %159 = getelementptr inbounds %sParserInfo, %sParserInfo* %info125, i32 0, i32 4
  %160 = load i8*, i8** %159, align 8
  %derefference_value126 = load i8, i8* %160, align 8
  %eqtmpX127 = icmp eq i8 %derefference_value126, 44
  br i1 %eqtmpX127, label %cond_jump_then128, label %"cond_jump_elif0\0A"

cond_then_block117:                               ; preds = %cond_jump_then115
  br label %cond_end118

cond_end118:                                      ; preds = %cond_then_block117, %cond_jump_then115
  call void @ncfree(i8* %147)
  ret i1 false

cond_jump_then128:                                ; preds = %cond_end116
  %161 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %162 = bitcast i8* %161 to %sParserInfo**
  %info130 = load %sParserInfo*, %sParserInfo** %162, align 8
  %163 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %164 = bitcast i8* %163 to %sParserInfo**
  %info131 = load %sParserInfo*, %sParserInfo** %164, align 8
  %165 = getelementptr inbounds %sParserInfo, %sParserInfo* %info131, i32 0, i32 4
  %166 = load i8*, i8** %165, align 8
  %167 = ptrtoint i8* %166 to i64
  %addtmp132 = add nsw i64 %167, 1
  %intToPtr2133 = inttoptr i64 %addtmp132 to i8*
  %168 = getelementptr inbounds %sParserInfo, %sParserInfo* %info130, i32 0, i32 4
  store i8* %intToPtr2133, i8** %168, align 8
  %169 = ptrtoint i8* %intToPtr2133 to i64
  %subtmp134 = sub nsw i64 %169, 1
  %IntTOPtr4b135 = inttoptr i64 %subtmp134 to i8*
  %170 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %171 = bitcast i8* %170 to %sParserInfo**
  %info136 = load %sParserInfo*, %sParserInfo** %171, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info136)
  br label %cond_end129

"cond_jump_elif0\0A":                             ; preds = %cond_end116
  %172 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %173 = bitcast i8* %172 to %sParserInfo**
  %info137 = load %sParserInfo*, %sParserInfo** %173, align 8
  %174 = getelementptr inbounds %sParserInfo, %sParserInfo* %info137, i32 0, i32 4
  %175 = load i8*, i8** %174, align 8
  %derefference_value138 = load i8, i8* %175, align 8
  %eqtmpX139 = icmp eq i8 %derefference_value138, 62
  br i1 %eqtmpX139, label %"cond_jump_elif_then0\0A", label %cond_end129

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %176 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %177 = bitcast i8* %176 to %sParserInfo**
  %info140 = load %sParserInfo*, %sParserInfo** %177, align 8
  %178 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %179 = bitcast i8* %178 to %sParserInfo**
  %info141 = load %sParserInfo*, %sParserInfo** %179, align 8
  %180 = getelementptr inbounds %sParserInfo, %sParserInfo* %info141, i32 0, i32 4
  %181 = load i8*, i8** %180, align 8
  %182 = ptrtoint i8* %181 to i64
  %addtmp142 = add nsw i64 %182, 1
  %intToPtr2143 = inttoptr i64 %addtmp142 to i8*
  %183 = getelementptr inbounds %sParserInfo, %sParserInfo* %info140, i32 0, i32 4
  store i8* %intToPtr2143, i8** %183, align 8
  %184 = ptrtoint i8* %intToPtr2143 to i64
  %subtmp144 = sub nsw i64 %184, 1
  %IntTOPtr4b145 = inttoptr i64 %subtmp144 to i8*
  %185 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %186 = bitcast i8* %185 to %sParserInfo**
  %info146 = load %sParserInfo*, %sParserInfo** %186, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info146)
  br label %cond_end_block106

cond_end129:                                      ; preds = %after_break, %"cond_jump_elif0\0A", %cond_jump_then128
  %i147 = load i32, i32* %i101, align 4
  %addtmp148 = add nsw i32 %i147, 1
  store i32 %addtmp148, i32* %i101, align 4
  %subttmp149 = sub nsw i32 %addtmp148, 1
  br label %loop_top_block102

after_break:                                      ; No predecessors!
  br label %cond_end129

cond_jump_then153:                                ; preds = %cond_end93
  %187 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %188 = bitcast i8* %187 to %sParserInfo**
  %info155 = load %sParserInfo*, %sParserInfo** %188, align 8
  %189 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %190 = bitcast i8* %189 to %sParserInfo**
  %info156 = load %sParserInfo*, %sParserInfo** %190, align 8
  %191 = getelementptr inbounds %sParserInfo, %sParserInfo* %info156, i32 0, i32 4
  %192 = load i8*, i8** %191, align 8
  %193 = ptrtoint i8* %192 to i64
  %addtmp157 = add nsw i64 %193, 1
  %intToPtr2158 = inttoptr i64 %addtmp157 to i8*
  %194 = getelementptr inbounds %sParserInfo, %sParserInfo* %info155, i32 0, i32 4
  store i8* %intToPtr2158, i8** %194, align 8
  %195 = ptrtoint i8* %intToPtr2158 to i64
  %subtmp159 = sub nsw i64 %195, 1
  %IntTOPtr4b160 = inttoptr i64 %subtmp159 to i8*
  %196 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %197 = bitcast i8* %196 to %sParserInfo**
  %info161 = load %sParserInfo*, %sParserInfo** %197, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info161)
  %198 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %199 = bitcast i8* %198 to %sCLType***
  %type162 = load %sCLType**, %sCLType*** %199, align 8
  %derefference_value163 = load %sCLType*, %sCLType** %type162, align 8
  %200 = getelementptr inbounds %sCLType, %sCLType* %derefference_value163, i32 0, i32 4
  store i1 true, i1* %200, align 1
  br label %cond_end154

cond_end154:                                      ; preds = %cond_jump_then153, %cond_end93
  %201 = bitcast [8192 x i8*]* %lvtable to i8*
  %202 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %201, i64 65536)
  %203 = load i8*, i8** %name, align 8
  %204 = ptrtoint i8* %203 to i64
  %205 = icmp ne i64 %204, 0
  br i1 %205, label %cond_then_block164, label %cond_end165

cond_then_block164:                               ; preds = %cond_end154
  br label %cond_end165

cond_end165:                                      ; preds = %cond_then_block164, %cond_end154
  call void @ncfree(i8* %203)
  ret i1 true
}

define void @expected_next_character(i8 %c, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %c2 = alloca i8
  store i8 %c, i8* %c2, align 1
  store i8* %c2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %2 = bitcast %sParserInfo** %info3 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %info4 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @parse_comment(%sParserInfo* %info4)
  %info5 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %3 = getelementptr inbounds %sParserInfo, %sParserInfo* %info5, i32 0, i32 4
  %4 = load i8*, i8** %3, align 8
  %derefference_value = load i8, i8* %4, align 8
  %eqtmpX = icmp eq i8 %derefference_value, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %5 = bitcast [8192 x i8*]* %lvtable to i8*
  %6 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %5, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  %info6 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %7 = getelementptr inbounds %sParserInfo, %sParserInfo* %info6, i32 0, i32 4
  %8 = load i8*, i8** %7, align 8
  %derefference_value7 = load i8, i8* %8, align 8
  %c8 = load i8, i8* %c2, align 1
  %eqtmpX9 = icmp eq i8 %derefference_value7, %c8
  br i1 %eqtmpX9, label %cond_jump_then10, label %cond_else_block

cond_jump_then10:                                 ; preds = %cond_end
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %10 = bitcast i8* %9 to %sParserInfo**
  %info12 = load %sParserInfo*, %sParserInfo** %10, align 8
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %12 = bitcast i8* %11 to %sParserInfo**
  %info13 = load %sParserInfo*, %sParserInfo** %12, align 8
  %13 = getelementptr inbounds %sParserInfo, %sParserInfo* %info13, i32 0, i32 4
  %14 = load i8*, i8** %13, align 8
  %15 = ptrtoint i8* %14 to i64
  %addtmp = add nsw i64 %15, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %16 = getelementptr inbounds %sParserInfo, %sParserInfo* %info12, i32 0, i32 4
  store i8* %intToPtr2, i8** %16, align 8
  %17 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %17, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %19 = bitcast i8* %18 to %sParserInfo**
  %info14 = load %sParserInfo*, %sParserInfo** %19, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info14)
  br label %cond_end11

cond_else_block:                                  ; preds = %cond_end
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %21 = bitcast i8* %20 to %sParserInfo**
  %info15 = load %sParserInfo*, %sParserInfo** %21, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %c16 = load i8, i8* %22, align 1
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %24 = bitcast i8* %23 to %sParserInfo**
  %info17 = load %sParserInfo*, %sParserInfo** %24, align 8
  %25 = getelementptr inbounds %sParserInfo, %sParserInfo* %info17, i32 0, i32 4
  %26 = load i8*, i8** %25, align 8
  %derefference_value18 = load i8, i8* %26, align 8
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %28 = bitcast i8* %27 to %sParserInfo**
  %info19 = load %sParserInfo*, %sParserInfo** %28, align 8
  %29 = getelementptr inbounds %sParserInfo, %sParserInfo* %info19, i32 0, i32 4
  %30 = load i8*, i8** %29, align 8
  %derefference_value20 = load i8, i8* %30, align 8
  %31 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([61 x i8], [61 x i8]* @global_string.3, i32 0, i32 0), i8 %c16, i8 %derefference_value18, i8 %derefference_value20)
  call void @parser_err_msg(%sParserInfo* %info15, i8* %31)
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %33 = bitcast i8* %32 to %sParserInfo**
  %info21 = load %sParserInfo*, %sParserInfo** %33, align 8
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %35 = bitcast i8* %34 to %sParserInfo**
  %info22 = load %sParserInfo*, %sParserInfo** %35, align 8
  %36 = getelementptr inbounds %sParserInfo, %sParserInfo* %info22, i32 0, i32 4
  %37 = load i8*, i8** %36, align 8
  %38 = ptrtoint i8* %37 to i64
  %addtmp23 = add nsw i64 %38, 1
  %intToPtr224 = inttoptr i64 %addtmp23 to i8*
  %39 = getelementptr inbounds %sParserInfo, %sParserInfo* %info21, i32 0, i32 4
  store i8* %intToPtr224, i8** %39, align 8
  %40 = ptrtoint i8* %intToPtr224 to i64
  %subtmp25 = sub nsw i64 %40, 1
  %IntTOPtr4b26 = inttoptr i64 %subtmp25 to i8*
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %42 = bitcast i8* %41 to %sParserInfo**
  %info27 = load %sParserInfo*, %sParserInfo** %42, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info27)
  %43 = ptrtoint i8* %31 to i64
  %44 = icmp ne i64 %43, 0
  br i1 %44, label %cond_then_block, label %cond_end28

cond_end11:                                       ; preds = %cond_end28, %cond_jump_then10
  %45 = bitcast [8192 x i8*]* %lvtable to i8*
  %46 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %45, i64 65536)
  ret void

cond_then_block:                                  ; preds = %cond_else_block
  br label %cond_end28

cond_end28:                                       ; preds = %cond_then_block, %cond_else_block
  call void @ncfree(i8* %31)
  br label %cond_end11
}

define void @parse_comment(%sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %info2 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info2, align 8
  %2 = bitcast %sParserInfo** %info2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end_block8, %entry
  %info3 = load %sParserInfo*, %sParserInfo** %info2, align 8
  %3 = getelementptr inbounds %sParserInfo, %sParserInfo* %info3, i32 0, i32 4
  %4 = load i8*, i8** %3, align 8
  %derefference_value = load i8, i8* %4, align 8
  %eqtmpX = icmp eq i8 %derefference_value, 35
  br i1 %eqtmpX, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %6 = bitcast i8* %5 to %sParserInfo**
  %info4 = load %sParserInfo*, %sParserInfo** %6, align 8
  %7 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %8 = bitcast i8* %7 to %sParserInfo**
  %info5 = load %sParserInfo*, %sParserInfo** %8, align 8
  %9 = getelementptr inbounds %sParserInfo, %sParserInfo* %info5, i32 0, i32 4
  %10 = load i8*, i8** %9, align 8
  %11 = ptrtoint i8* %10 to i64
  %addtmp = add nsw i64 %11, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %12 = getelementptr inbounds %sParserInfo, %sParserInfo* %info4, i32 0, i32 4
  store i8* %intToPtr2, i8** %12, align 8
  %13 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %13, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  br label %loop_top_block6

cond_end_block:                                   ; preds = %loop_top_block
  %14 = bitcast [8192 x i8*]* %lvtable to i8*
  %15 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %14, i64 65536)
  ret void

loop_top_block6:                                  ; preds = %cond_end, %cond_then_block
  br i1 true, label %cond_then_block7, label %cond_end_block8

cond_then_block7:                                 ; preds = %loop_top_block6
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %17 = bitcast i8* %16 to %sParserInfo**
  %info9 = load %sParserInfo*, %sParserInfo** %17, align 8
  %18 = getelementptr inbounds %sParserInfo, %sParserInfo* %info9, i32 0, i32 4
  %19 = load i8*, i8** %18, align 8
  %derefference_value10 = load i8, i8* %19, align 8
  %eqtmpX11 = icmp eq i8 %derefference_value10, 10
  br i1 %eqtmpX11, label %cond_jump_then, label %"cond_jump_elif0\0A"

cond_end_block8:                                  ; preds = %"cond_jump_elif_then0\0A", %cond_end_block23, %loop_top_block6
  br label %loop_top_block

cond_jump_then:                                   ; preds = %cond_then_block7
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %21 = bitcast i8* %20 to %sParserInfo**
  %info12 = load %sParserInfo*, %sParserInfo** %21, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %23 = bitcast i8* %22 to %sParserInfo**
  %info13 = load %sParserInfo*, %sParserInfo** %23, align 8
  %24 = getelementptr inbounds %sParserInfo, %sParserInfo* %info13, i32 0, i32 4
  %25 = load i8*, i8** %24, align 8
  %26 = ptrtoint i8* %25 to i64
  %addtmp14 = add nsw i64 %26, 1
  %intToPtr215 = inttoptr i64 %addtmp14 to i8*
  %27 = getelementptr inbounds %sParserInfo, %sParserInfo* %info12, i32 0, i32 4
  store i8* %intToPtr215, i8** %27, align 8
  %28 = ptrtoint i8* %intToPtr215 to i64
  %subtmp16 = sub nsw i64 %28, 1
  %IntTOPtr4b17 = inttoptr i64 %subtmp16 to i8*
  %29 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %30 = bitcast i8* %29 to %sParserInfo**
  %info18 = load %sParserInfo*, %sParserInfo** %30, align 8
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %32 = bitcast i8* %31 to %sParserInfo**
  %info19 = load %sParserInfo*, %sParserInfo** %32, align 8
  %33 = getelementptr inbounds %sParserInfo, %sParserInfo* %info19, i32 0, i32 1
  %34 = load i32, i32* %33, align 4
  %addtmp20 = add nsw i32 %34, 1
  %35 = getelementptr inbounds %sParserInfo, %sParserInfo* %info18, i32 0, i32 1
  store i32 %addtmp20, i32* %35, align 4
  %subttmp = sub nsw i32 %addtmp20, 1
  br label %loop_top_block21

"cond_jump_elif0\0A":                             ; preds = %cond_then_block7
  %36 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %37 = bitcast i8* %36 to %sParserInfo**
  %info56 = load %sParserInfo*, %sParserInfo** %37, align 8
  %38 = getelementptr inbounds %sParserInfo, %sParserInfo* %info56, i32 0, i32 4
  %39 = load i8*, i8** %38, align 8
  %derefference_value57 = load i8, i8* %39, align 8
  %eqtmpX58 = icmp eq i8 %derefference_value57, 0
  br i1 %eqtmpX58, label %"cond_jump_elif_then0\0A", label %cond_else_block

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  br label %cond_end_block8

cond_else_block:                                  ; preds = %"cond_jump_elif0\0A"
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %41 = bitcast i8* %40 to %sParserInfo**
  %info60 = load %sParserInfo*, %sParserInfo** %41, align 8
  %42 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %43 = bitcast i8* %42 to %sParserInfo**
  %info61 = load %sParserInfo*, %sParserInfo** %43, align 8
  %44 = getelementptr inbounds %sParserInfo, %sParserInfo* %info61, i32 0, i32 4
  %45 = load i8*, i8** %44, align 8
  %46 = ptrtoint i8* %45 to i64
  %addtmp62 = add nsw i64 %46, 1
  %intToPtr263 = inttoptr i64 %addtmp62 to i8*
  %47 = getelementptr inbounds %sParserInfo, %sParserInfo* %info60, i32 0, i32 4
  store i8* %intToPtr263, i8** %47, align 8
  %48 = ptrtoint i8* %intToPtr263 to i64
  %subtmp64 = sub nsw i64 %48, 1
  %IntTOPtr4b65 = inttoptr i64 %subtmp64 to i8*
  br label %cond_end

cond_end:                                         ; preds = %cond_else_block, %after_break59, %after_break55
  br label %loop_top_block6

loop_top_block21:                                 ; preds = %cond_end35, %cond_jump_then
  br i1 true, label %cond_then_block22, label %cond_end_block23

cond_then_block22:                                ; preds = %loop_top_block21
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %50 = bitcast i8* %49 to %sParserInfo**
  %info24 = load %sParserInfo*, %sParserInfo** %50, align 8
  %51 = getelementptr inbounds %sParserInfo, %sParserInfo* %info24, i32 0, i32 4
  %52 = load i8*, i8** %51, align 8
  %derefference_value25 = load i8, i8* %52, align 8
  %eqtmpX26 = icmp eq i8 %derefference_value25, 32
  store i1 %eqtmpX26, i1* %andand_result_var1, align 1
  br i1 %eqtmpX26, label %cond_jump_end, label %cond_jump_then27

cond_end_block23:                                 ; preds = %cond_else_block34, %loop_top_block21
  br label %cond_end_block8

cond_jump_then27:                                 ; preds = %cond_then_block22
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %54 = bitcast i8* %53 to %sParserInfo**
  %info28 = load %sParserInfo*, %sParserInfo** %54, align 8
  %55 = getelementptr inbounds %sParserInfo, %sParserInfo* %info28, i32 0, i32 4
  %56 = load i8*, i8** %55, align 8
  %derefference_value29 = load i8, i8* %56, align 8
  %eqtmpX30 = icmp eq i8 %derefference_value29, 9
  %oror = or i1 %eqtmpX26, %eqtmpX30
  store i1 %oror, i1* %andand_result_var1, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then27, %cond_then_block22
  %oror_result_value = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value, label %cond_jump_then31, label %"cond_jump_elif0\0A32"

cond_jump_then31:                                 ; preds = %cond_jump_end
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %58 = bitcast i8* %57 to %sParserInfo**
  %info36 = load %sParserInfo*, %sParserInfo** %58, align 8
  %59 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %60 = bitcast i8* %59 to %sParserInfo**
  %info37 = load %sParserInfo*, %sParserInfo** %60, align 8
  %61 = getelementptr inbounds %sParserInfo, %sParserInfo* %info37, i32 0, i32 4
  %62 = load i8*, i8** %61, align 8
  %63 = ptrtoint i8* %62 to i64
  %addtmp38 = add nsw i64 %63, 1
  %intToPtr239 = inttoptr i64 %addtmp38 to i8*
  %64 = getelementptr inbounds %sParserInfo, %sParserInfo* %info36, i32 0, i32 4
  store i8* %intToPtr239, i8** %64, align 8
  %65 = ptrtoint i8* %intToPtr239 to i64
  %subtmp40 = sub nsw i64 %65, 1
  %IntTOPtr4b41 = inttoptr i64 %subtmp40 to i8*
  br label %cond_end35

"cond_jump_elif0\0A32":                           ; preds = %cond_jump_end
  %66 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %67 = bitcast i8* %66 to %sParserInfo**
  %info42 = load %sParserInfo*, %sParserInfo** %67, align 8
  %68 = getelementptr inbounds %sParserInfo, %sParserInfo* %info42, i32 0, i32 4
  %69 = load i8*, i8** %68, align 8
  %derefference_value43 = load i8, i8* %69, align 8
  %eqtmpX44 = icmp eq i8 %derefference_value43, 10
  br i1 %eqtmpX44, label %"cond_jump_elif_then0\0A33", label %cond_else_block34

"cond_jump_elif_then0\0A33":                      ; preds = %"cond_jump_elif0\0A32"
  %70 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %71 = bitcast i8* %70 to %sParserInfo**
  %info45 = load %sParserInfo*, %sParserInfo** %71, align 8
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %73 = bitcast i8* %72 to %sParserInfo**
  %info46 = load %sParserInfo*, %sParserInfo** %73, align 8
  %74 = getelementptr inbounds %sParserInfo, %sParserInfo* %info46, i32 0, i32 4
  %75 = load i8*, i8** %74, align 8
  %76 = ptrtoint i8* %75 to i64
  %addtmp47 = add nsw i64 %76, 1
  %intToPtr248 = inttoptr i64 %addtmp47 to i8*
  %77 = getelementptr inbounds %sParserInfo, %sParserInfo* %info45, i32 0, i32 4
  store i8* %intToPtr248, i8** %77, align 8
  %78 = ptrtoint i8* %intToPtr248 to i64
  %subtmp49 = sub nsw i64 %78, 1
  %IntTOPtr4b50 = inttoptr i64 %subtmp49 to i8*
  %79 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %80 = bitcast i8* %79 to %sParserInfo**
  %info51 = load %sParserInfo*, %sParserInfo** %80, align 8
  %81 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %82 = bitcast i8* %81 to %sParserInfo**
  %info52 = load %sParserInfo*, %sParserInfo** %82, align 8
  %83 = getelementptr inbounds %sParserInfo, %sParserInfo* %info52, i32 0, i32 1
  %84 = load i32, i32* %83, align 4
  %addtmp53 = add nsw i32 %84, 1
  %85 = getelementptr inbounds %sParserInfo, %sParserInfo* %info51, i32 0, i32 1
  store i32 %addtmp53, i32* %85, align 4
  %subttmp54 = sub nsw i32 %addtmp53, 1
  br label %cond_end35

cond_else_block34:                                ; preds = %"cond_jump_elif0\0A32"
  br label %cond_end_block23

cond_end35:                                       ; preds = %after_break, %"cond_jump_elif_then0\0A33", %cond_jump_then31
  br label %loop_top_block21

after_break:                                      ; No predecessors!
  br label %cond_end35

after_break55:                                    ; No predecessors!
  br label %cond_end

after_break59:                                    ; No predecessors!
  br label %cond_end
}

define i1 @expression(%sCLNode** %node, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %node2 = alloca %sCLNode**
  store %sCLNode** %node, %sCLNode*** %node2, align 8
  %2 = bitcast %sCLNode*** %node2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %info4 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @parse_comment(%sParserInfo* %info4)
  %info5 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info5)
  %node6 = load %sCLNode**, %sCLNode*** %node2, align 8
  %info7 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %4 = call i1 @expression_and_and_or_or(%sCLNode** %node6, %sParserInfo* %info7)
  %LOGICAL_DIANEAL = icmp eq i1 %4, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %5 = bitcast [8192 x i8*]* %lvtable to i8*
  %6 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %5, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %entry
  %info8 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @parse_comment(%sParserInfo* %info8)
  %7 = bitcast [8192 x i8*]* %lvtable to i8*
  %8 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %7, i64 65536)
  ret i1 true
}

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

declare void @vm_init()

declare void @vm_final()

declare void @vm_err_msg(%CLVALUE**, %sVMInfo*, i8*)

declare i1 @param_check(%sCLParam*, i32, %CLVALUE*, %sCLType*, %sVMInfo*)

declare i1 @vm(%buffer*, %CLVALUE*, i32, i32, %CLVALUE*, %CLVALUE*, %sVMInfo*)

declare i1 @invoke_block(i32, i32, i32, %CLVALUE**, %sVMInfo*)

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

define i1 @xisdigit(i8 %c) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %c2 = alloca i8
  store i8 %c, i8* %c2, align 1
  store i8* %c2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %c3 = load i8, i8* %c2, align 1
  %getmp = icmp sge i8 %c3, 48
  store i1 %getmp, i1* %andand_result_var, align 1
  br i1 %getmp, label %cond_jump_then, label %cond_jump_end

cond_jump_then:                                   ; preds = %entry
  %c4 = load i8, i8* %c2, align 1
  %leeqtmp = icmp sle i8 %c4, 57
  %andand = and i1 %getmp, %leeqtmp
  store i1 %andand, i1* %andand_result_var, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then, %entry
  %andand_result_value = load i1, i1* %andand_result_var, align 1
  %2 = bitcast [8192 x i8*]* %lvtable to i8*
  %3 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %2, i64 65536)
  ret i1 %andand_result_value
}

define void @skip_spaces(%sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %info2 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info2, align 8
  %2 = bitcast %sParserInfo** %info2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = load %sParserInfo*, %sParserInfo** %info2, align 8
  call void @parse_comment(%sParserInfo* %info3)
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_then_block, %entry
  %info4 = load %sParserInfo*, %sParserInfo** %info2, align 8
  %3 = getelementptr inbounds %sParserInfo, %sParserInfo* %info4, i32 0, i32 4
  %4 = load i8*, i8** %3, align 8
  %derefference_value = load i8, i8* %4, align 8
  %eqtmpX = icmp eq i8 %derefference_value, 32
  store i1 %eqtmpX, i1* %andand_result_var1, align 1
  br i1 %eqtmpX, label %cond_jump_end, label %cond_jump_then

cond_jump_then:                                   ; preds = %loop_top_block
  %info5 = load %sParserInfo*, %sParserInfo** %info2, align 8
  %5 = getelementptr inbounds %sParserInfo, %sParserInfo* %info5, i32 0, i32 4
  %6 = load i8*, i8** %5, align 8
  %derefference_value6 = load i8, i8* %6, align 8
  %eqtmpX7 = icmp eq i8 %derefference_value6, 9
  %oror = or i1 %eqtmpX, %eqtmpX7
  store i1 %oror, i1* %andand_result_var1, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then, %loop_top_block
  %oror_result_value = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %cond_jump_end
  %7 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %8 = bitcast i8* %7 to %sParserInfo**
  %info8 = load %sParserInfo*, %sParserInfo** %8, align 8
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %10 = bitcast i8* %9 to %sParserInfo**
  %info9 = load %sParserInfo*, %sParserInfo** %10, align 8
  %11 = getelementptr inbounds %sParserInfo, %sParserInfo* %info9, i32 0, i32 4
  %12 = load i8*, i8** %11, align 8
  %13 = ptrtoint i8* %12 to i64
  %addtmp = add nsw i64 %13, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %14 = getelementptr inbounds %sParserInfo, %sParserInfo* %info8, i32 0, i32 4
  store i8* %intToPtr2, i8** %14, align 8
  %15 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %15, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  br label %loop_top_block

cond_end_block:                                   ; preds = %cond_jump_end
  %info10 = load %sParserInfo*, %sParserInfo** %info2, align 8
  call void @parse_comment(%sParserInfo* %info10)
  %16 = bitcast [8192 x i8*]* %lvtable to i8*
  %17 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %16, i64 65536)
  ret void
}

define internal i1 @get_number(i1 %minus, %sCLNode** %node, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %minus2 = alloca i1
  store i1 %minus, i1* %minus2, align 1
  %2 = bitcast i1* %minus2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %node3 = alloca %sCLNode**
  store %sCLNode** %node, %sCLNode*** %node3, align 8
  %3 = bitcast %sCLNode*** %node3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %info4 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info4, align 8
  %4 = bitcast %sParserInfo** %info4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %buf_size = alloca i32
  %5 = bitcast i32* %buf_size to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 128, i32* %buf_size, align 4
  %buf = alloca [129 x i8]
  %6 = bitcast [129 x i8]* %buf to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %7 = bitcast [129 x i8]* %buf to i8*
  %p2 = alloca i8*
  %8 = bitcast i8** %p2 to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i8* %7, i8** %p2, align 8
  %minus5 = load i1, i1* %minus2, align 1
  br i1 %minus5, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %10 = bitcast i8* %9 to i8**
  %p26 = load i8*, i8** %10, align 8
  store i8 45, i8* %p26, align 1
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %12 = bitcast i8* %11 to i8**
  %p27 = load i8*, i8** %12, align 8
  %13 = ptrtoint i8* %p27 to i64
  %addtmp = add nsw i64 %13, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %15 = bitcast i8* %14 to i8**
  store i8* %intToPtr2, i8** %15, align 8
  %16 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %16, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  br label %cond_end

cond_end:                                         ; preds = %cond_jump_then, %entry
  %info8 = load %sParserInfo*, %sParserInfo** %info4, align 8
  %17 = getelementptr inbounds %sParserInfo, %sParserInfo* %info8, i32 0, i32 4
  %18 = load i8*, i8** %17, align 8
  %derefference_value = load i8, i8* %18, align 8
  %19 = call i1 @xisdigit(i8 %derefference_value)
  br i1 %19, label %cond_jump_then9, label %cond_else_block

cond_jump_then9:                                  ; preds = %cond_end
  br label %loop_top_block

cond_else_block:                                  ; preds = %cond_end
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %21 = bitcast i8* %20 to %sParserInfo**
  %info55 = load %sParserInfo*, %sParserInfo** %21, align 8
  call void @parser_err_msg(%sParserInfo* %info55, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_string.2, i32 0, i32 0))
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %23 = bitcast i8* %22 to %sCLNode***
  %node56 = load %sCLNode**, %sCLNode*** %23, align 8
  store %sCLNode* null, %sCLNode** %node56, align 8
  br label %cond_end10

cond_end10:                                       ; preds = %cond_else_block, %cond_end_block
  %24 = bitcast [8192 x i8*]* %lvtable to i8*
  %25 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %24, i64 65536)
  ret i1 true

loop_top_block:                                   ; preds = %cond_end45, %cond_jump_then9
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %27 = bitcast i8* %26 to %sParserInfo**
  %info11 = load %sParserInfo*, %sParserInfo** %27, align 8
  %28 = getelementptr inbounds %sParserInfo, %sParserInfo* %info11, i32 0, i32 4
  %29 = load i8*, i8** %28, align 8
  %derefference_value12 = load i8, i8* %29, align 8
  %30 = call i1 @xisdigit(i8 %derefference_value12)
  store i1 %30, i1* %andand_result_var1, align 1
  br i1 %30, label %cond_jump_end, label %cond_jump_then13

cond_jump_then13:                                 ; preds = %loop_top_block
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %32 = bitcast i8* %31 to %sParserInfo**
  %info14 = load %sParserInfo*, %sParserInfo** %32, align 8
  %33 = getelementptr inbounds %sParserInfo, %sParserInfo* %info14, i32 0, i32 4
  %34 = load i8*, i8** %33, align 8
  %derefference_value15 = load i8, i8* %34, align 8
  %eqtmpX = icmp eq i8 %derefference_value15, 95
  %oror = or i1 %30, %eqtmpX
  store i1 %oror, i1* %andand_result_var1, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then13, %loop_top_block
  %oror_result_value = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %cond_jump_end
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %36 = bitcast i8* %35 to %sParserInfo**
  %info16 = load %sParserInfo*, %sParserInfo** %36, align 8
  %37 = getelementptr inbounds %sParserInfo, %sParserInfo* %info16, i32 0, i32 4
  %38 = load i8*, i8** %37, align 8
  %derefference_value17 = load i8, i8* %38, align 8
  %eqtmpX18 = icmp eq i8 %derefference_value17, 95
  br i1 %eqtmpX18, label %cond_jump_then19, label %cond_else_block20

cond_end_block:                                   ; preds = %cond_jump_end
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %40 = bitcast i8* %39 to i8**
  %p251 = load i8*, i8** %40, align 8
  store i8 0, i8* %p251, align 1
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %42 = bitcast i8* %41 to %sParserInfo**
  %info52 = load %sParserInfo*, %sParserInfo** %42, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info52)
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %44 = bitcast i8* %43 to %sCLNode***
  %node53 = load %sCLNode**, %sCLNode*** %44, align 8
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %46 = bitcast i8* %45 to [129 x i8]*
  %47 = bitcast [129 x i8]* %46 to i8*
  %48 = call i32 @atoi(i8* %47)
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %50 = bitcast i8* %49 to %sParserInfo**
  %info54 = load %sParserInfo*, %sParserInfo** %50, align 8
  %51 = call %sCLNode* @sNodeTree_create_int_value(i32 %48, %sParserInfo* %info54)
  store %sCLNode* %51, %sCLNode** %node53, align 8
  br label %cond_end10

cond_jump_then19:                                 ; preds = %cond_then_block
  %52 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %53 = bitcast i8* %52 to %sParserInfo**
  %info22 = load %sParserInfo*, %sParserInfo** %53, align 8
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %55 = bitcast i8* %54 to %sParserInfo**
  %info23 = load %sParserInfo*, %sParserInfo** %55, align 8
  %56 = getelementptr inbounds %sParserInfo, %sParserInfo* %info23, i32 0, i32 4
  %57 = load i8*, i8** %56, align 8
  %58 = ptrtoint i8* %57 to i64
  %addtmp24 = add nsw i64 %58, 1
  %intToPtr225 = inttoptr i64 %addtmp24 to i8*
  %59 = getelementptr inbounds %sParserInfo, %sParserInfo* %info22, i32 0, i32 4
  store i8* %intToPtr225, i8** %59, align 8
  %60 = ptrtoint i8* %intToPtr225 to i64
  %subtmp26 = sub nsw i64 %60, 1
  %IntTOPtr4b27 = inttoptr i64 %subtmp26 to i8*
  br label %cond_end21

cond_else_block20:                                ; preds = %cond_then_block
  %61 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %62 = bitcast i8* %61 to i8**
  %p228 = load i8*, i8** %62, align 8
  %63 = ptrtoint i8* %p228 to i64
  %addtmp29 = add nsw i64 %63, 1
  %intToPtr230 = inttoptr i64 %addtmp29 to i8*
  %64 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %65 = bitcast i8* %64 to i8**
  store i8* %intToPtr230, i8** %65, align 8
  %66 = ptrtoint i8* %intToPtr230 to i64
  %subtmp31 = sub nsw i64 %66, 1
  %IntTOPtr4b32 = inttoptr i64 %subtmp31 to i8*
  %67 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %68 = bitcast i8* %67 to %sParserInfo**
  %info33 = load %sParserInfo*, %sParserInfo** %68, align 8
  %69 = getelementptr inbounds %sParserInfo, %sParserInfo* %info33, i32 0, i32 4
  %70 = load i8*, i8** %69, align 8
  %derefference_value34 = load i8, i8* %70, align 8
  store i8 %derefference_value34, i8* %IntTOPtr4b32, align 1
  %71 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %72 = bitcast i8* %71 to %sParserInfo**
  %info35 = load %sParserInfo*, %sParserInfo** %72, align 8
  %73 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %74 = bitcast i8* %73 to %sParserInfo**
  %info36 = load %sParserInfo*, %sParserInfo** %74, align 8
  %75 = getelementptr inbounds %sParserInfo, %sParserInfo* %info36, i32 0, i32 4
  %76 = load i8*, i8** %75, align 8
  %77 = ptrtoint i8* %76 to i64
  %addtmp37 = add nsw i64 %77, 1
  %intToPtr238 = inttoptr i64 %addtmp37 to i8*
  %78 = getelementptr inbounds %sParserInfo, %sParserInfo* %info35, i32 0, i32 4
  store i8* %intToPtr238, i8** %78, align 8
  %79 = ptrtoint i8* %intToPtr238 to i64
  %subtmp39 = sub nsw i64 %79, 1
  %IntTOPtr4b40 = inttoptr i64 %subtmp39 to i8*
  br label %cond_end21

cond_end21:                                       ; preds = %cond_else_block20, %cond_jump_then19
  %80 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %81 = bitcast i8* %80 to i8**
  %p241 = load i8*, i8** %81, align 8
  %82 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %83 = bitcast i8* %82 to [129 x i8]*
  %84 = bitcast [129 x i8]* %83 to i8*
  %85 = ptrtoint i8* %p241 to i64
  %86 = ptrtoint i8* %84 to i64
  %subtmp42 = sub nsw i64 %85, %86
  %87 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %88 = bitcast i8* %87 to i32*
  %buf_size43 = load i32, i32* %88, align 4
  %sext14 = zext i32 %buf_size43 to i64
  %getmp = icmp sge i64 %subtmp42, %sext14
  br i1 %getmp, label %cond_jump_then44, label %cond_end45

cond_jump_then44:                                 ; preds = %cond_end21
  %89 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %90 = bitcast i8* %89 to %sParserInfo**
  %info46 = load %sParserInfo*, %sParserInfo** %90, align 8
  %91 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %92 = bitcast i8* %91 to %sParserInfo**
  %info47 = load %sParserInfo*, %sParserInfo** %92, align 8
  %93 = getelementptr inbounds %sParserInfo, %sParserInfo* %info47, i32 0, i32 4
  %94 = load i8*, i8** %93, align 8
  %derefference_value48 = load i8, i8* %94, align 8
  %95 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_string.1, i32 0, i32 0), i8 %derefference_value48)
  call void @parser_err_msg(%sParserInfo* %info46, i8* %95)
  %96 = bitcast [8192 x i8*]* %lvtable to i8*
  %97 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %96, i64 65536)
  %98 = ptrtoint i8* %95 to i64
  %99 = icmp ne i64 %98, 0
  br i1 %99, label %cond_then_block49, label %cond_end50

cond_end45:                                       ; preds = %cond_end21
  br label %loop_top_block

cond_then_block49:                                ; preds = %cond_jump_then44
  br label %cond_end50

cond_end50:                                       ; preds = %cond_then_block49, %cond_jump_then44
  call void @ncfree(i8* %95)
  ret i1 false
}

define i8* @parse_word_for_shell(%sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %info2 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info2, align 8
  %2 = bitcast %sParserInfo** %info2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = load %sParserInfo*, %sParserInfo** %info2, align 8
  call void @parse_comment(%sParserInfo* %info3)
  %3 = call i8* @nccalloc(i64 1, i64 16)
  %4 = bitcast i8* %3 to %buffer*
  %5 = call %buffer* @buffer_initialize(%buffer* %4)
  %result = alloca %buffer*
  %6 = bitcast %buffer** %result to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  store %buffer* %5, %buffer** %result, align 8
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_then_block, %entry
  %7 = call i16** @__ctype_b_loc()
  %derefference_value = load i16*, i16** %7, align 8
  %info4 = load %sParserInfo*, %sParserInfo** %info2, align 8
  %8 = getelementptr inbounds %sParserInfo, %sParserInfo* %info4, i32 0, i32 4
  %9 = load i8*, i8** %8, align 8
  %derefference_value5 = load i8, i8* %9, align 8
  %sext13 = zext i8 %derefference_value5 to i32
  %element_addressB = getelementptr i16, i16* %derefference_value, i32 %sext13
  %element = load i16, i16* %element_addressB, align 2
  %andtmp = and i16 %element, 8
  %10 = icmp ne i16 %andtmp, 0
  store i1 %10, i1* %andand_result_var1, align 1
  br i1 %10, label %cond_jump_end, label %cond_jump_then

cond_jump_then:                                   ; preds = %loop_top_block
  %info6 = load %sParserInfo*, %sParserInfo** %info2, align 8
  %11 = getelementptr inbounds %sParserInfo, %sParserInfo* %info6, i32 0, i32 4
  %12 = load i8*, i8** %11, align 8
  %derefference_value7 = load i8, i8* %12, align 8
  %eqtmpX = icmp eq i8 %derefference_value7, 95
  %oror = or i1 %10, %eqtmpX
  store i1 %oror, i1* %andand_result_var1, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then, %loop_top_block
  %oror_result_value = load i1, i1* %andand_result_var1, align 1
  store i1 %oror_result_value, i1* %andand_result_var1, align 1
  br i1 %oror_result_value, label %cond_jump_end9, label %cond_jump_then8

cond_jump_then8:                                  ; preds = %cond_jump_end
  %info10 = load %sParserInfo*, %sParserInfo** %info2, align 8
  %13 = getelementptr inbounds %sParserInfo, %sParserInfo* %info10, i32 0, i32 4
  %14 = load i8*, i8** %13, align 8
  %derefference_value11 = load i8, i8* %14, align 8
  %eqtmpX12 = icmp eq i8 %derefference_value11, 45
  %oror13 = or i1 %oror_result_value, %eqtmpX12
  store i1 %oror13, i1* %andand_result_var1, align 1
  br label %cond_jump_end9

cond_jump_end9:                                   ; preds = %cond_jump_then8, %cond_jump_end
  %oror_result_value14 = load i1, i1* %andand_result_var1, align 1
  store i1 %oror_result_value14, i1* %andand_result_var1, align 1
  br i1 %oror_result_value14, label %cond_jump_end16, label %cond_jump_then15

cond_jump_then15:                                 ; preds = %cond_jump_end9
  %info17 = load %sParserInfo*, %sParserInfo** %info2, align 8
  %15 = getelementptr inbounds %sParserInfo, %sParserInfo* %info17, i32 0, i32 4
  %16 = load i8*, i8** %15, align 8
  %derefference_value18 = load i8, i8* %16, align 8
  %eqtmpX19 = icmp eq i8 %derefference_value18, 47
  %oror20 = or i1 %oror_result_value14, %eqtmpX19
  store i1 %oror20, i1* %andand_result_var1, align 1
  br label %cond_jump_end16

cond_jump_end16:                                  ; preds = %cond_jump_then15, %cond_jump_end9
  %oror_result_value21 = load i1, i1* %andand_result_var1, align 1
  store i1 %oror_result_value21, i1* %andand_result_var1, align 1
  br i1 %oror_result_value21, label %cond_jump_end23, label %cond_jump_then22

cond_jump_then22:                                 ; preds = %cond_jump_end16
  %info24 = load %sParserInfo*, %sParserInfo** %info2, align 8
  %17 = getelementptr inbounds %sParserInfo, %sParserInfo* %info24, i32 0, i32 4
  %18 = load i8*, i8** %17, align 8
  %derefference_value25 = load i8, i8* %18, align 8
  %eqtmpX26 = icmp eq i8 %derefference_value25, 46
  %oror27 = or i1 %oror_result_value21, %eqtmpX26
  store i1 %oror27, i1* %andand_result_var1, align 1
  br label %cond_jump_end23

cond_jump_end23:                                  ; preds = %cond_jump_then22, %cond_jump_end16
  %oror_result_value28 = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value28, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %cond_jump_end23
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %20 = bitcast i8* %19 to %buffer**
  %result29 = load %buffer*, %buffer** %20, align 8
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %22 = bitcast i8* %21 to %sParserInfo**
  %info30 = load %sParserInfo*, %sParserInfo** %22, align 8
  %23 = getelementptr inbounds %sParserInfo, %sParserInfo* %info30, i32 0, i32 4
  %24 = load i8*, i8** %23, align 8
  %derefference_value31 = load i8, i8* %24, align 8
  call void @buffer_append_char(%buffer* %result29, i8 %derefference_value31)
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %26 = bitcast i8* %25 to %sParserInfo**
  %info32 = load %sParserInfo*, %sParserInfo** %26, align 8
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %28 = bitcast i8* %27 to %sParserInfo**
  %info33 = load %sParserInfo*, %sParserInfo** %28, align 8
  %29 = getelementptr inbounds %sParserInfo, %sParserInfo* %info33, i32 0, i32 4
  %30 = load i8*, i8** %29, align 8
  %31 = ptrtoint i8* %30 to i64
  %addtmp = add nsw i64 %31, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %32 = getelementptr inbounds %sParserInfo, %sParserInfo* %info32, i32 0, i32 4
  store i8* %intToPtr2, i8** %32, align 8
  %33 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %33, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  br label %loop_top_block

cond_end_block:                                   ; preds = %cond_jump_end23
  %info34 = load %sParserInfo*, %sParserInfo** %info2, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info34)
  %result35 = load %buffer*, %buffer** %result, align 8
  %34 = call i8* @buffer_to_string(%buffer* %result35)
  %35 = bitcast [8192 x i8*]* %lvtable to i8*
  %36 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %35, i64 65536)
  %37 = load %buffer*, %buffer** %result, align 8
  call void @buffer_finalize(%buffer* %37)
  %38 = ptrtoint %buffer* %37 to i64
  %39 = icmp ne i64 %38, 0
  br i1 %39, label %cond_then_block36, label %cond_end

cond_then_block36:                                ; preds = %cond_end_block
  br label %cond_end

cond_end:                                         ; preds = %cond_then_block36, %cond_end_block
  %40 = bitcast %buffer* %37 to i8*
  call void @ncfree(i8* %40)
  ret i8* %34
}

define i1 @parse_if_expression(%sCLNode** %node, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %node2 = alloca %sCLNode**
  store %sCLNode** %node, %sCLNode*** %node2, align 8
  %2 = bitcast %sCLNode*** %node2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %info4 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @expected_next_character(i8 40, %sParserInfo* %info4)
  %exp = alloca %sCLNode*
  %4 = bitcast %sCLNode** %exp to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %exp, align 8
  %exp5 = load %sCLNode*, %sCLNode** %exp, align 8
  %info6 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %5 = call i1 @expression(%sCLNode** %exp, %sParserInfo* %info6)
  %LOGICAL_DIANEAL = icmp eq i1 %5, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = bitcast [8192 x i8*]* %lvtable to i8*
  %7 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %6, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %entry
  %info7 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @expected_next_character(i8 41, %sParserInfo* %info7)
  %info8 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @expected_next_character(i8 123, %sParserInfo* %info8)
  %node_block = alloca %sCLNodeBlock*
  %8 = bitcast %sCLNodeBlock** %node_block to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store %sCLNodeBlock* null, %sCLNodeBlock** %node_block, align 8
  %node_block9 = load %sCLNodeBlock*, %sCLNodeBlock** %node_block, align 8
  %info10 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %9 = call i1 @parse_block(%sCLNodeBlock** %node_block, i32 0, %sCLParam* null, %sParserInfo* %info10)
  %LOGICAL_DIANEAL11 = icmp eq i1 %9, false
  br i1 %LOGICAL_DIANEAL11, label %cond_jump_then12, label %cond_end13

cond_jump_then12:                                 ; preds = %cond_end
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret i1 false

cond_end13:                                       ; preds = %cond_end
  %info14 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @expected_next_character(i8 125, %sParserInfo* %info14)
  %info15 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %12 = getelementptr inbounds %sParserInfo, %sParserInfo* %info15, i32 0, i32 4
  %13 = load i8*, i8** %12, align 8
  %p_before = alloca i8*
  %14 = bitcast i8** %p_before to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i8* %13, i8** %p_before, align 8
  %info16 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %15 = getelementptr inbounds %sParserInfo, %sParserInfo* %info16, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %sline_before = alloca i32
  %17 = bitcast i32* %sline_before to i8*
  store i8* %17, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i32 %16, i32* %sline_before, align 4
  %info17 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %18 = call i8* @parse_word(%sParserInfo* %info17)
  %word = alloca i8*
  %19 = bitcast i8** %word to i8*
  store i8* %19, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i8* %18, i8** %word, align 8
  %num_elif = alloca i32
  %20 = bitcast i32* %num_elif to i8*
  store i8* %20, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 0, i32* %num_elif, align 4
  %elif_expressions = alloca [64 x %sCLNode*]
  %21 = bitcast [64 x %sCLNode*]* %elif_expressions to i8*
  store i8* %21, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %elif_blocks = alloca [64 x %sCLNodeBlock*]
  %22 = bitcast [64 x %sCLNodeBlock*]* %elif_blocks to i8*
  store i8* %22, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %word18 = load i8*, i8** %word, align 8
  %23 = call i32 @strcmp(i8* %word18, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.4, i32 0, i32 0))
  %eqtmpX = icmp eq i32 %23, 0
  br i1 %eqtmpX, label %cond_jump_then19, label %"cond_jump_elif0\0A"

cond_jump_then19:                                 ; preds = %cond_end13
  br label %loop_top_block

"cond_jump_elif0\0A":                             ; preds = %cond_end13
  %word69 = load i8*, i8** %word, align 8
  %24 = call i32 @strcmp(i8* %word69, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.8, i32 0, i32 0))
  %eqtmpX70 = icmp eq i32 %24, 0
  br i1 %eqtmpX70, label %"cond_jump_elif_then0\0A", label %cond_else_block

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  br label %cond_end20

cond_else_block:                                  ; preds = %"cond_jump_elif0\0A"
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %26 = bitcast i8* %25 to %sParserInfo**
  %info71 = load %sParserInfo*, %sParserInfo** %26, align 8
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %28 = bitcast i8* %27 to i8**
  %p_before72 = load i8*, i8** %28, align 8
  %29 = getelementptr inbounds %sParserInfo, %sParserInfo* %info71, i32 0, i32 4
  store i8* %p_before72, i8** %29, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %31 = bitcast i8* %30 to %sParserInfo**
  %info73 = load %sParserInfo*, %sParserInfo** %31, align 8
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %33 = bitcast i8* %32 to i32*
  %sline_before74 = load i32, i32* %33, align 4
  %34 = getelementptr inbounds %sParserInfo, %sParserInfo* %info73, i32 0, i32 1
  store i32 %sline_before74, i32* %34, align 4
  br label %cond_end20

cond_end20:                                       ; preds = %cond_else_block, %"cond_jump_elif_then0\0A", %cond_end_block
  %info75 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %35 = getelementptr inbounds %sParserInfo, %sParserInfo* %info75, i32 0, i32 4
  %36 = load i8*, i8** %35, align 8
  store i8* %36, i8** %p_before, align 8
  %info76 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %37 = getelementptr inbounds %sParserInfo, %sParserInfo* %info76, i32 0, i32 1
  %38 = load i32, i32* %37, align 4
  store i32 %38, i32* %sline_before, align 4
  %else_block = alloca %sCLNodeBlock*
  %39 = bitcast %sCLNodeBlock** %else_block to i8*
  store i8* %39, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store %sCLNodeBlock* null, %sCLNodeBlock** %else_block, align 8
  %word77 = load i8*, i8** %word, align 8
  %40 = call i32 @strcmp(i8* %word77, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.9, i32 0, i32 0))
  %eqtmpX78 = icmp eq i32 %40, 0
  br i1 %eqtmpX78, label %cond_jump_then79, label %cond_else_block80

loop_top_block:                                   ; preds = %cond_end62, %cond_jump_then19
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %42 = bitcast i8* %41 to %sParserInfo**
  %info21 = load %sParserInfo*, %sParserInfo** %42, align 8
  call void @expected_next_character(i8 40, %sParserInfo* %info21)
  %exp22 = alloca %sCLNode*
  %43 = bitcast %sCLNode** %exp22 to i8*
  store i8* %43, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store %sCLNode* null, %sCLNode** %exp22, align 8
  %exp23 = load %sCLNode*, %sCLNode** %exp22, align 8
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %45 = bitcast i8* %44 to %sParserInfo**
  %info24 = load %sParserInfo*, %sParserInfo** %45, align 8
  %46 = call i1 @expression(%sCLNode** %exp22, %sParserInfo* %info24)
  %LOGICAL_DIANEAL25 = icmp eq i1 %46, false
  br i1 %LOGICAL_DIANEAL25, label %cond_jump_then26, label %cond_end27

cond_end_block:                                   ; preds = %"cond_jump_elif_then0\0A61", %cond_jump_then59, %loop_top_block
  br label %cond_end20

cond_jump_then26:                                 ; preds = %cond_then_block
  %47 = bitcast [8192 x i8*]* %lvtable to i8*
  %48 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %47, i64 65536)
  %49 = load i8*, i8** %word, align 8
  %50 = ptrtoint i8* %49 to i64
  %51 = icmp ne i64 %50, 0
  br i1 %51, label %cond_then_block28, label %cond_end29

cond_end27:                                       ; preds = %cond_then_block
  %52 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %53 = bitcast i8* %52 to %sParserInfo**
  %info30 = load %sParserInfo*, %sParserInfo** %53, align 8
  call void @expected_next_character(i8 41, %sParserInfo* %info30)
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %55 = bitcast i8* %54 to %sParserInfo**
  %info31 = load %sParserInfo*, %sParserInfo** %55, align 8
  call void @expected_next_character(i8 123, %sParserInfo* %info31)
  %node_block32 = alloca %sCLNodeBlock*
  %56 = bitcast %sCLNodeBlock** %node_block32 to i8*
  store i8* %56, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  store %sCLNodeBlock* null, %sCLNodeBlock** %node_block32, align 8
  %node_block33 = load %sCLNodeBlock*, %sCLNodeBlock** %node_block32, align 8
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %58 = bitcast i8* %57 to %sParserInfo**
  %info34 = load %sParserInfo*, %sParserInfo** %58, align 8
  %59 = call i1 @parse_block(%sCLNodeBlock** %node_block32, i32 0, %sCLParam* null, %sParserInfo* %info34)
  %LOGICAL_DIANEAL35 = icmp eq i1 %59, false
  br i1 %LOGICAL_DIANEAL35, label %cond_jump_then36, label %cond_end37

cond_then_block28:                                ; preds = %cond_jump_then26
  br label %cond_end29

cond_end29:                                       ; preds = %cond_then_block28, %cond_jump_then26
  call void @ncfree(i8* %49)
  ret i1 false

cond_jump_then36:                                 ; preds = %cond_end27
  %60 = bitcast [8192 x i8*]* %lvtable to i8*
  %61 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %60, i64 65536)
  %62 = load i8*, i8** %word, align 8
  %63 = ptrtoint i8* %62 to i64
  %64 = icmp ne i64 %63, 0
  br i1 %64, label %cond_then_block38, label %cond_end39

cond_end37:                                       ; preds = %cond_end27
  %65 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %66 = bitcast i8* %65 to %sParserInfo**
  %info40 = load %sParserInfo*, %sParserInfo** %66, align 8
  call void @expected_next_character(i8 125, %sParserInfo* %info40)
  %67 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %68 = bitcast i8* %67 to [64 x %sCLNode*]*
  %69 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %70 = bitcast i8* %69 to i32*
  %num_elif41 = load i32, i32* %70, align 4
  %exp42 = load %sCLNode*, %sCLNode** %exp22, align 8
  %71 = bitcast [64 x %sCLNode*]* %68 to %sCLNode**
  %element_addressC = getelementptr %sCLNode*, %sCLNode** %71, i32 %num_elif41
  store %sCLNode* %exp42, %sCLNode** %element_addressC, align 8
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %73 = bitcast i8* %72 to [64 x %sCLNodeBlock*]*
  %74 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %75 = bitcast i8* %74 to i32*
  %num_elif43 = load i32, i32* %75, align 4
  %node_block44 = load %sCLNodeBlock*, %sCLNodeBlock** %node_block32, align 8
  %76 = bitcast [64 x %sCLNodeBlock*]* %73 to %sCLNodeBlock**
  %element_addressC45 = getelementptr %sCLNodeBlock*, %sCLNodeBlock** %76, i32 %num_elif43
  store %sCLNodeBlock* %node_block44, %sCLNodeBlock** %element_addressC45, align 8
  %77 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %78 = bitcast i8* %77 to i32*
  %num_elif46 = load i32, i32* %78, align 4
  %addtmp = add nsw i32 %num_elif46, 1
  %79 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %80 = bitcast i8* %79 to i32*
  store i32 %addtmp, i32* %80, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %81 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %82 = bitcast i8* %81 to i32*
  %num_elif47 = load i32, i32* %82, align 4
  %getmp = icmp sge i32 %num_elif47, 64
  br i1 %getmp, label %cond_jump_then48, label %cond_end49

cond_then_block38:                                ; preds = %cond_jump_then36
  br label %cond_end39

cond_end39:                                       ; preds = %cond_then_block38, %cond_jump_then36
  call void @ncfree(i8* %62)
  ret i1 false

cond_jump_then48:                                 ; preds = %cond_end37
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %83 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_string.5, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end49

cond_end49:                                       ; preds = %cond_jump_then48, %cond_end37
  %84 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %85 = bitcast i8* %84 to %sParserInfo**
  %info50 = load %sParserInfo*, %sParserInfo** %85, align 8
  %86 = getelementptr inbounds %sParserInfo, %sParserInfo* %info50, i32 0, i32 4
  %87 = load i8*, i8** %86, align 8
  %p_before51 = alloca i8*
  %88 = bitcast i8** %p_before51 to i8*
  store i8* %88, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  store i8* %87, i8** %p_before51, align 8
  %89 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %90 = bitcast i8* %89 to %sParserInfo**
  %info52 = load %sParserInfo*, %sParserInfo** %90, align 8
  %91 = getelementptr inbounds %sParserInfo, %sParserInfo* %info52, i32 0, i32 1
  %92 = load i32, i32* %91, align 4
  %sline_before53 = alloca i32
  %93 = bitcast i32* %sline_before53 to i8*
  store i8* %93, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i32 %92, i32* %sline_before53, align 4
  %94 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %95 = bitcast i8* %94 to %sParserInfo**
  %info54 = load %sParserInfo*, %sParserInfo** %95, align 8
  %96 = call i8* @parse_word(%sParserInfo* %info54)
  %97 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %98 = bitcast i8* %97 to i8**
  %99 = load i8*, i8** %98, align 8
  %100 = ptrtoint i8* %99 to i64
  %101 = icmp ne i64 %100, 0
  br i1 %101, label %cond_then_block55, label %cond_end56

cond_then_block55:                                ; preds = %cond_end49
  br label %cond_end56

cond_end56:                                       ; preds = %cond_then_block55, %cond_end49
  call void @ncfree(i8* %99)
  store i8* %96, i8** %98, align 8
  %102 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %103 = bitcast i8* %102 to i8**
  %word57 = load i8*, i8** %103, align 8
  %104 = call i32 @strcmp(i8* %word57, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.6, i32 0, i32 0))
  %eqtmpX58 = icmp eq i32 %104, 0
  br i1 %eqtmpX58, label %cond_jump_then59, label %"cond_jump_elif0\0A60"

cond_jump_then59:                                 ; preds = %cond_end56
  br label %cond_end_block

"cond_jump_elif0\0A60":                           ; preds = %cond_end56
  %105 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %106 = bitcast i8* %105 to i8**
  %word63 = load i8*, i8** %106, align 8
  %107 = call i32 @strcmp(i8* %word63, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.7, i32 0, i32 0))
  %noteqtmp = icmp ne i32 %107, 0
  br i1 %noteqtmp, label %"cond_jump_elif_then0\0A61", label %cond_end62

"cond_jump_elif_then0\0A61":                      ; preds = %"cond_jump_elif0\0A60"
  %108 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %109 = bitcast i8* %108 to %sParserInfo**
  %info64 = load %sParserInfo*, %sParserInfo** %109, align 8
  %110 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %111 = bitcast i8* %110 to i8**
  %p_before65 = load i8*, i8** %111, align 8
  %112 = getelementptr inbounds %sParserInfo, %sParserInfo* %info64, i32 0, i32 4
  store i8* %p_before65, i8** %112, align 8
  %113 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %114 = bitcast i8* %113 to %sParserInfo**
  %info66 = load %sParserInfo*, %sParserInfo** %114, align 8
  %115 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %116 = bitcast i8* %115 to i32*
  %sline_before67 = load i32, i32* %116, align 4
  %117 = getelementptr inbounds %sParserInfo, %sParserInfo* %info66, i32 0, i32 1
  store i32 %sline_before67, i32* %117, align 4
  br label %cond_end_block

cond_end62:                                       ; preds = %after_break68, %"cond_jump_elif0\0A60", %after_break
  br label %loop_top_block

after_break:                                      ; No predecessors!
  br label %cond_end62

after_break68:                                    ; No predecessors!
  br label %cond_end62

cond_jump_then79:                                 ; preds = %cond_end20
  %118 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %119 = bitcast i8* %118 to %sParserInfo**
  %info82 = load %sParserInfo*, %sParserInfo** %119, align 8
  call void @expected_next_character(i8 123, %sParserInfo* %info82)
  %node_block83 = alloca %sCLNodeBlock*
  %120 = bitcast %sCLNodeBlock** %node_block83 to i8*
  store i8* %120, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store %sCLNodeBlock* null, %sCLNodeBlock** %node_block83, align 8
  %node_block84 = load %sCLNodeBlock*, %sCLNodeBlock** %node_block83, align 8
  %121 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %122 = bitcast i8* %121 to %sParserInfo**
  %info85 = load %sParserInfo*, %sParserInfo** %122, align 8
  %123 = call i1 @parse_block(%sCLNodeBlock** %node_block83, i32 0, %sCLParam* null, %sParserInfo* %info85)
  %LOGICAL_DIANEAL86 = icmp eq i1 %123, false
  br i1 %LOGICAL_DIANEAL86, label %cond_jump_then87, label %cond_end88

cond_else_block80:                                ; preds = %cond_end20
  %124 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %125 = bitcast i8* %124 to %sParserInfo**
  %info93 = load %sParserInfo*, %sParserInfo** %125, align 8
  %126 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %127 = bitcast i8* %126 to i8**
  %p_before94 = load i8*, i8** %127, align 8
  %128 = getelementptr inbounds %sParserInfo, %sParserInfo* %info93, i32 0, i32 4
  store i8* %p_before94, i8** %128, align 8
  %129 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %130 = bitcast i8* %129 to %sParserInfo**
  %info95 = load %sParserInfo*, %sParserInfo** %130, align 8
  %131 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %132 = bitcast i8* %131 to i32*
  %sline_before96 = load i32, i32* %132, align 4
  %133 = getelementptr inbounds %sParserInfo, %sParserInfo* %info95, i32 0, i32 1
  store i32 %sline_before96, i32* %133, align 4
  br label %cond_end81

cond_end81:                                       ; preds = %cond_else_block80, %cond_end88
  %node97 = load %sCLNode**, %sCLNode*** %node2, align 8
  %exp98 = load %sCLNode*, %sCLNode** %exp, align 8
  %node_block99 = load %sCLNodeBlock*, %sCLNodeBlock** %node_block, align 8
  %num_elif100 = load i32, i32* %num_elif, align 4
  %else_block101 = load %sCLNodeBlock*, %sCLNodeBlock** %else_block, align 8
  %info102 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %134 = bitcast [64 x %sCLNode*]* %elif_expressions to %sCLNode**
  %135 = bitcast [64 x %sCLNodeBlock*]* %elif_blocks to %sCLNodeBlock**
  %136 = call %sCLNode* @sNodeTree_create_if_expression(%sCLNode* %exp98, %sCLNodeBlock* %node_block99, i32 %num_elif100, %sCLNode** %134, %sCLNodeBlock** %135, %sCLNodeBlock* %else_block101, %sParserInfo* %info102)
  store %sCLNode* %136, %sCLNode** %node97, align 8
  %137 = bitcast [8192 x i8*]* %lvtable to i8*
  %138 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %137, i64 65536)
  %139 = load i8*, i8** %word, align 8
  %140 = ptrtoint i8* %139 to i64
  %141 = icmp ne i64 %140, 0
  br i1 %141, label %cond_then_block103, label %cond_end104

cond_jump_then87:                                 ; preds = %cond_jump_then79
  %142 = bitcast [8192 x i8*]* %lvtable to i8*
  %143 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %142, i64 65536)
  %144 = load i8*, i8** %word, align 8
  %145 = ptrtoint i8* %144 to i64
  %146 = icmp ne i64 %145, 0
  br i1 %146, label %cond_then_block89, label %cond_end90

cond_end88:                                       ; preds = %cond_jump_then79
  %147 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %148 = bitcast i8* %147 to %sParserInfo**
  %info91 = load %sParserInfo*, %sParserInfo** %148, align 8
  call void @expected_next_character(i8 125, %sParserInfo* %info91)
  %node_block92 = load %sCLNodeBlock*, %sCLNodeBlock** %node_block83, align 8
  %149 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %150 = bitcast i8* %149 to %sCLNodeBlock**
  store %sCLNodeBlock* %node_block92, %sCLNodeBlock** %150, align 8
  br label %cond_end81

cond_then_block89:                                ; preds = %cond_jump_then87
  br label %cond_end90

cond_end90:                                       ; preds = %cond_then_block89, %cond_jump_then87
  call void @ncfree(i8* %144)
  ret i1 false

cond_then_block103:                               ; preds = %cond_end81
  br label %cond_end104

cond_end104:                                      ; preds = %cond_then_block103, %cond_end81
  call void @ncfree(i8* %139)
  ret i1 true
}

define i1 @parse_while_expression(%sCLNode** %node, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %node2 = alloca %sCLNode**
  store %sCLNode** %node, %sCLNode*** %node2, align 8
  %2 = bitcast %sCLNode*** %node2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %info4 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @expected_next_character(i8 40, %sParserInfo* %info4)
  %exp = alloca %sCLNode*
  %4 = bitcast %sCLNode** %exp to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %exp, align 8
  %exp5 = load %sCLNode*, %sCLNode** %exp, align 8
  %info6 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %5 = call i1 @expression(%sCLNode** %exp, %sParserInfo* %info6)
  %LOGICAL_DIANEAL = icmp eq i1 %5, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = bitcast [8192 x i8*]* %lvtable to i8*
  %7 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %6, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %entry
  %info7 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @expected_next_character(i8 41, %sParserInfo* %info7)
  %info8 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @expected_next_character(i8 123, %sParserInfo* %info8)
  %node_block = alloca %sCLNodeBlock*
  %8 = bitcast %sCLNodeBlock** %node_block to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store %sCLNodeBlock* null, %sCLNodeBlock** %node_block, align 8
  %node_block9 = load %sCLNodeBlock*, %sCLNodeBlock** %node_block, align 8
  %info10 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %9 = call i1 @parse_block(%sCLNodeBlock** %node_block, i32 0, %sCLParam* null, %sParserInfo* %info10)
  %LOGICAL_DIANEAL11 = icmp eq i1 %9, false
  br i1 %LOGICAL_DIANEAL11, label %cond_jump_then12, label %cond_end13

cond_jump_then12:                                 ; preds = %cond_end
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret i1 false

cond_end13:                                       ; preds = %cond_end
  %info14 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @expected_next_character(i8 125, %sParserInfo* %info14)
  %node15 = load %sCLNode**, %sCLNode*** %node2, align 8
  %exp16 = load %sCLNode*, %sCLNode** %exp, align 8
  %node_block17 = load %sCLNodeBlock*, %sCLNodeBlock** %node_block, align 8
  %info18 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %12 = call %sCLNode* @sNodeTree_create_while_expression(%sCLNode* %exp16, %sCLNodeBlock* %node_block17, %sParserInfo* %info18)
  store %sCLNode* %12, %sCLNode** %node15, align 8
  %13 = bitcast [8192 x i8*]* %lvtable to i8*
  %14 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %13, i64 65536)
  ret i1 true
}

define i1 @parse_try(%sCLNode** %node, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %node2 = alloca %sCLNode**
  store %sCLNode** %node, %sCLNode*** %node2, align 8
  %2 = bitcast %sCLNode*** %node2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %info4 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @expected_next_character(i8 123, %sParserInfo* %info4)
  %node_block = alloca %sCLNodeBlock*
  %4 = bitcast %sCLNodeBlock** %node_block to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNodeBlock* null, %sCLNodeBlock** %node_block, align 8
  %info5 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %5 = getelementptr inbounds %sParserInfo, %sParserInfo* %info5, i32 0, i32 7
  %6 = load %vector__sVarTablep*, %vector__sVarTablep** %5, align 8
  %vtables_before = alloca %vector__sVarTablep*
  %7 = bitcast %vector__sVarTablep** %vtables_before to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store %vector__sVarTablep* %6, %vector__sVarTablep** %vtables_before, align 8
  %info6 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %8 = call i8* @nccalloc(i64 1, i64 16)
  %9 = bitcast i8* %8 to %vector__sVarTablep*
  %10 = call %vector__sVarTablep* @"initialize_sVarTablep0_src/parser"(%vector__sVarTablep* %9)
  %11 = getelementptr inbounds %sParserInfo, %sParserInfo* %info6, i32 0, i32 7
  store %vector__sVarTablep* %10, %vector__sVarTablep** %11, align 8
  %info7 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %12 = getelementptr inbounds %sParserInfo, %sParserInfo* %info7, i32 0, i32 11
  %13 = load i32, i32* %12, align 4
  %max_var_num = alloca i32
  %14 = bitcast i32* %max_var_num to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i32 %13, i32* %max_var_num, align 4
  %node_block8 = load %sCLNodeBlock*, %sCLNodeBlock** %node_block, align 8
  %info9 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %15 = call i1 @parse_block(%sCLNodeBlock** %node_block, i32 0, %sCLParam* null, %sParserInfo* %info9)
  %LOGICAL_DIANEAL = icmp eq i1 %15, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %17 = bitcast i8* %16 to %sParserInfo**
  %info10 = load %sParserInfo*, %sParserInfo** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %19 = bitcast i8* %18 to i32*
  %max_var_num11 = load i32, i32* %19, align 4
  %20 = getelementptr inbounds %sParserInfo, %sParserInfo* %info10, i32 0, i32 11
  store i32 %max_var_num11, i32* %20, align 4
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %22 = bitcast i8* %21 to %sParserInfo**
  %info12 = load %sParserInfo*, %sParserInfo** %22, align 8
  %23 = getelementptr inbounds %sParserInfo, %sParserInfo* %info12, i32 0, i32 7
  %24 = load %vector__sVarTablep*, %vector__sVarTablep** %23, align 8
  %25 = load %vector__sVarTablep*, %vector__sVarTablep** %23, align 8
  call void @"finalize_sVarTablep1_src/parser"(%vector__sVarTablep* %25)
  %26 = ptrtoint %vector__sVarTablep* %25 to i64
  %27 = icmp ne i64 %26, 0
  br i1 %27, label %cond_then_block, label %cond_end13

cond_end:                                         ; preds = %entry
  %info16 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %max_var_num17 = load i32, i32* %max_var_num, align 4
  %28 = getelementptr inbounds %sParserInfo, %sParserInfo* %info16, i32 0, i32 11
  store i32 %max_var_num17, i32* %28, align 4
  %info18 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %29 = getelementptr inbounds %sParserInfo, %sParserInfo* %info18, i32 0, i32 7
  %30 = load %vector__sVarTablep*, %vector__sVarTablep** %29, align 8
  %31 = load %vector__sVarTablep*, %vector__sVarTablep** %29, align 8
  call void @"finalize_sVarTablep3_src/parser"(%vector__sVarTablep* %31)
  %32 = ptrtoint %vector__sVarTablep* %31 to i64
  %33 = icmp ne i64 %32, 0
  br i1 %33, label %cond_then_block19, label %cond_end20

cond_then_block:                                  ; preds = %cond_jump_then
  br label %cond_end13

cond_end13:                                       ; preds = %cond_then_block, %cond_jump_then
  %34 = bitcast %vector__sVarTablep* %25 to i8*
  call void @ncfree(i8* %34)
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %36 = bitcast i8* %35 to %sParserInfo**
  %info14 = load %sParserInfo*, %sParserInfo** %36, align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %38 = bitcast i8* %37 to %vector__sVarTablep**
  %vtables_before15 = load %vector__sVarTablep*, %vector__sVarTablep** %38, align 8
  %39 = getelementptr inbounds %sParserInfo, %sParserInfo* %info14, i32 0, i32 7
  store %vector__sVarTablep* %vtables_before15, %vector__sVarTablep** %39, align 8
  %40 = bitcast [8192 x i8*]* %lvtable to i8*
  %41 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %40, i64 65536)
  ret i1 false

cond_then_block19:                                ; preds = %cond_end
  br label %cond_end20

cond_end20:                                       ; preds = %cond_then_block19, %cond_end
  %42 = bitcast %vector__sVarTablep* %31 to i8*
  call void @ncfree(i8* %42)
  %info21 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %vtables_before22 = load %vector__sVarTablep*, %vector__sVarTablep** %vtables_before, align 8
  %43 = getelementptr inbounds %sParserInfo, %sParserInfo* %info21, i32 0, i32 7
  store %vector__sVarTablep* %vtables_before22, %vector__sVarTablep** %43, align 8
  %info23 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @expected_next_character(i8 125, %sParserInfo* %info23)
  %info24 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %44 = call i8* @parse_word(%sParserInfo* %info24)
  %name = alloca i8*
  %45 = bitcast i8** %name to i8*
  store i8* %45, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i8* %44, i8** %name, align 8
  %info25 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @expected_next_character(i8 123, %sParserInfo* %info25)
  %params = alloca [32 x %sCLParam]
  %46 = bitcast [32 x %sCLParam]* %params to i8*
  store i8* %46, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %num_params = alloca i32
  %47 = bitcast i32* %num_params to i8*
  store i8* %47, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 0, i32* %num_params, align 4
  %48 = bitcast [32 x %sCLParam]* %params to %sCLParam*
  %element_address = getelementptr %sCLParam, %sCLParam* %48, i32 0
  %element = load %sCLParam, %sCLParam* %element_address, align 8
  %49 = getelementptr inbounds %sCLParam, %sCLParam* %element_address, i32 0, i32 0
  %50 = bitcast [128 x i8]* %49 to i8*
  %51 = call i8* @xstrncpy(i8* %50, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_string.10, i32 0, i32 0), i32 128)
  %52 = bitcast [32 x %sCLParam]* %params to %sCLParam*
  %element_address26 = getelementptr %sCLParam, %sCLParam* %52, i32 0
  %element27 = load %sCLParam, %sCLParam* %element_address26, align 8
  %info28 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %53 = getelementptr inbounds %sParserInfo, %sParserInfo* %info28, i32 0, i32 9
  %54 = load %vector__sCLTypep*, %vector__sCLTypep** %53, align 8
  %55 = call %sCLType* @create_type(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_string.11, i32 0, i32 0), %vector__sCLTypep* %54)
  %56 = getelementptr inbounds %sCLParam, %sCLParam* %element_address26, i32 0, i32 1
  store %sCLType* %55, %sCLType** %56, align 8
  %num_params29 = load i32, i32* %num_params, align 4
  %addtmp = add nsw i32 %num_params29, 1
  store i32 %addtmp, i32* %num_params, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %node_block2 = alloca %sCLNodeBlock*
  %57 = bitcast %sCLNodeBlock** %node_block2 to i8*
  store i8* %57, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store %sCLNodeBlock* null, %sCLNodeBlock** %node_block2, align 8
  %info30 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %58 = getelementptr inbounds %sParserInfo, %sParserInfo* %info30, i32 0, i32 7
  %59 = load %vector__sVarTablep*, %vector__sVarTablep** %58, align 8
  store %vector__sVarTablep* %59, %vector__sVarTablep** %vtables_before, align 8
  %info31 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %60 = call i8* @nccalloc(i64 1, i64 16)
  %61 = bitcast i8* %60 to %vector__sVarTablep*
  %62 = call %vector__sVarTablep* @"initialize_sVarTablep5_src/parser"(%vector__sVarTablep* %61)
  %63 = getelementptr inbounds %sParserInfo, %sParserInfo* %info31, i32 0, i32 7
  store %vector__sVarTablep* %62, %vector__sVarTablep** %63, align 8
  %info32 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %64 = getelementptr inbounds %sParserInfo, %sParserInfo* %info32, i32 0, i32 11
  %65 = load i32, i32* %64, align 4
  store i32 %65, i32* %max_var_num, align 4
  %node_block233 = load %sCLNodeBlock*, %sCLNodeBlock** %node_block2, align 8
  %num_params34 = load i32, i32* %num_params, align 4
  %info35 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %66 = bitcast [32 x %sCLParam]* %params to %sCLParam*
  %67 = call i1 @parse_block(%sCLNodeBlock** %node_block2, i32 %num_params34, %sCLParam* %66, %sParserInfo* %info35)
  %LOGICAL_DIANEAL36 = icmp eq i1 %67, false
  br i1 %LOGICAL_DIANEAL36, label %cond_jump_then37, label %cond_end38

cond_jump_then37:                                 ; preds = %cond_end20
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %69 = bitcast i8* %68 to %sParserInfo**
  %info39 = load %sParserInfo*, %sParserInfo** %69, align 8
  %70 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %71 = bitcast i8* %70 to i32*
  %max_var_num40 = load i32, i32* %71, align 4
  %72 = getelementptr inbounds %sParserInfo, %sParserInfo* %info39, i32 0, i32 11
  store i32 %max_var_num40, i32* %72, align 4
  %73 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %74 = bitcast i8* %73 to %sParserInfo**
  %info41 = load %sParserInfo*, %sParserInfo** %74, align 8
  %75 = getelementptr inbounds %sParserInfo, %sParserInfo* %info41, i32 0, i32 7
  %76 = load %vector__sVarTablep*, %vector__sVarTablep** %75, align 8
  %77 = load %vector__sVarTablep*, %vector__sVarTablep** %75, align 8
  call void @"finalize_sVarTablep6_src/parser"(%vector__sVarTablep* %77)
  %78 = ptrtoint %vector__sVarTablep* %77 to i64
  %79 = icmp ne i64 %78, 0
  br i1 %79, label %cond_then_block42, label %cond_end43

cond_end38:                                       ; preds = %cond_end20
  %info48 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %max_var_num49 = load i32, i32* %max_var_num, align 4
  %80 = getelementptr inbounds %sParserInfo, %sParserInfo* %info48, i32 0, i32 11
  store i32 %max_var_num49, i32* %80, align 4
  %info50 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %81 = getelementptr inbounds %sParserInfo, %sParserInfo* %info50, i32 0, i32 7
  %82 = load %vector__sVarTablep*, %vector__sVarTablep** %81, align 8
  %83 = load %vector__sVarTablep*, %vector__sVarTablep** %81, align 8
  call void @"finalize_sVarTablep8_src/parser"(%vector__sVarTablep* %83)
  %84 = ptrtoint %vector__sVarTablep* %83 to i64
  %85 = icmp ne i64 %84, 0
  br i1 %85, label %cond_then_block51, label %cond_end52

cond_then_block42:                                ; preds = %cond_jump_then37
  br label %cond_end43

cond_end43:                                       ; preds = %cond_then_block42, %cond_jump_then37
  %86 = bitcast %vector__sVarTablep* %77 to i8*
  call void @ncfree(i8* %86)
  %87 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %88 = bitcast i8* %87 to %sParserInfo**
  %info44 = load %sParserInfo*, %sParserInfo** %88, align 8
  %89 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %90 = bitcast i8* %89 to %vector__sVarTablep**
  %vtables_before45 = load %vector__sVarTablep*, %vector__sVarTablep** %90, align 8
  %91 = getelementptr inbounds %sParserInfo, %sParserInfo* %info44, i32 0, i32 7
  store %vector__sVarTablep* %vtables_before45, %vector__sVarTablep** %91, align 8
  %92 = bitcast [8192 x i8*]* %lvtable to i8*
  %93 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %92, i64 65536)
  %94 = load i8*, i8** %name, align 8
  %95 = ptrtoint i8* %94 to i64
  %96 = icmp ne i64 %95, 0
  br i1 %96, label %cond_then_block46, label %cond_end47

cond_then_block46:                                ; preds = %cond_end43
  br label %cond_end47

cond_end47:                                       ; preds = %cond_then_block46, %cond_end43
  call void @ncfree(i8* %94)
  ret i1 false

cond_then_block51:                                ; preds = %cond_end38
  br label %cond_end52

cond_end52:                                       ; preds = %cond_then_block51, %cond_end38
  %97 = bitcast %vector__sVarTablep* %83 to i8*
  call void @ncfree(i8* %97)
  %info53 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %vtables_before54 = load %vector__sVarTablep*, %vector__sVarTablep** %vtables_before, align 8
  %98 = getelementptr inbounds %sParserInfo, %sParserInfo* %info53, i32 0, i32 7
  store %vector__sVarTablep* %vtables_before54, %vector__sVarTablep** %98, align 8
  %info55 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @expected_next_character(i8 125, %sParserInfo* %info55)
  %node56 = load %sCLNode**, %sCLNode*** %node2, align 8
  %node_block57 = load %sCLNodeBlock*, %sCLNodeBlock** %node_block, align 8
  %node_block258 = load %sCLNodeBlock*, %sCLNodeBlock** %node_block2, align 8
  %info59 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %99 = call %sCLNode* @sNodeTree_create_try(%sCLNodeBlock* %node_block57, %sCLNodeBlock* %node_block258, %sParserInfo* %info59)
  store %sCLNode* %99, %sCLNode** %node56, align 8
  %100 = bitcast [8192 x i8*]* %lvtable to i8*
  %101 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %100, i64 65536)
  %102 = load i8*, i8** %name, align 8
  %103 = ptrtoint i8* %102 to i64
  %104 = icmp ne i64 %103, 0
  br i1 %104, label %cond_then_block60, label %cond_end61

cond_then_block60:                                ; preds = %cond_end52
  br label %cond_end61

cond_end61:                                       ; preds = %cond_then_block60, %cond_end52
  call void @ncfree(i8* %102)
  ret i1 true
}

define %vector__sVarTablep* @"initialize_sVarTablep0_src/parser"(%vector__sVarTablep* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sVarTablep*
  store %vector__sVarTablep* %self, %vector__sVarTablep** %self2, align 8
  %2 = bitcast %vector__sVarTablep** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %self3 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %3 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self3, i32 0, i32 2
  store i32 16, i32* %3, align 4
  %self4 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %4 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self4, i32 0, i32 1
  store i32 0, i32* %4, align 4
  %self5 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %self6 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %5 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self6, i32 0, i32 2
  %6 = load i32, i32* %5, align 4
  %sext14 = zext i32 %6 to i64
  %7 = call i8* @nccalloc(i64 %sext14, i64 8)
  %8 = bitcast i8* %7 to %sVarTable**
  %9 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self5, i32 0, i32 0
  store %sVarTable** %8, %sVarTable*** %9, align 8
  %self7 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret %vector__sVarTablep* %self7
}

define void @"finalize_sVarTablep1_src/parser"(%vector__sVarTablep* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sVarTablep*
  store %vector__sVarTablep* %self, %vector__sVarTablep** %self2, align 8
  %2 = bitcast %vector__sVarTablep** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %self3 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %eqtmpX = icmp eq %vector__sVarTablep* %self3, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %3 = bitcast [8192 x i8*]* %lvtable to i8*
  %4 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %3, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  br i1 true, label %cond_jump_then4, label %cond_end5

cond_jump_then4:                                  ; preds = %cond_end
  %i = alloca i32
  %5 = bitcast i32* %i to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

cond_end5:                                        ; preds = %cond_end_block, %cond_end
  %self15 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %6 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self15, i32 0, i32 0
  %7 = load %sVarTable**, %sVarTable*** %6, align 8
  %8 = load %sVarTable**, %sVarTable*** %6, align 8
  %9 = bitcast %sVarTable** %8 to i8*
  call void @ncfree(i8* %9)
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret void

loop_top_block:                                   ; preds = %cond_end11, %cond_jump_then4
  %i6 = load i32, i32* %i, align 4
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %13 = bitcast i8* %12 to %vector__sVarTablep**
  %self7 = load %vector__sVarTablep*, %vector__sVarTablep** %13, align 8
  %14 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self7, i32 0, i32 1
  %15 = load i32, i32* %14, align 4
  %letmp = icmp slt i32 %i6, %15
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %17 = bitcast i8* %16 to %vector__sVarTablep**
  %self8 = load %vector__sVarTablep*, %vector__sVarTablep** %17, align 8
  %18 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self8, i32 0, i32 0
  %19 = load %sVarTable**, %sVarTable*** %18, align 8
  %i9 = load i32, i32* %i, align 4
  %element_addressB = getelementptr %sVarTable*, %sVarTable** %19, i32 %i9
  %element = load %sVarTable*, %sVarTable** %element_addressB, align 8
  %20 = load %sVarTable*, %sVarTable** %element_addressB, align 8
  %21 = ptrtoint %sVarTable* %20 to i64
  %22 = icmp ne i64 %21, 0
  br i1 %22, label %cond_then_block10, label %cond_end11

cond_end_block:                                   ; preds = %loop_top_block
  br label %cond_end5

cond_then_block10:                                ; preds = %cond_then_block
  %23 = getelementptr inbounds %sVarTable, %sVarTable* %20, i32 0, i32 0
  %24 = load %map__charp_sVarp*, %map__charp_sVarp** %23, align 8
  call void @"finalize_charp_sVarp2_src/parser"(%map__charp_sVarp* %24)
  %25 = ptrtoint %map__charp_sVarp* %24 to i64
  %26 = icmp ne i64 %25, 0
  br i1 %26, label %cond_then_block12, label %cond_end13

cond_end11:                                       ; preds = %cond_end13, %cond_then_block
  %27 = bitcast %sVarTable* %20 to i8*
  call void @ncfree(i8* %27)
  %i14 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i14, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_then_block12:                                ; preds = %cond_then_block10
  br label %cond_end13

cond_end13:                                       ; preds = %cond_then_block12, %cond_then_block10
  %28 = bitcast %map__charp_sVarp* %24 to i8*
  call void @ncfree(i8* %28)
  br label %cond_end11
}

define void @"finalize_charp_sVarp2_src/parser"(%map__charp_sVarp* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_sVarp*
  store %map__charp_sVarp* %self, %map__charp_sVarp** %self2, align 8
  %2 = bitcast %map__charp_sVarp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %self3 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %eqtmpX = icmp eq %map__charp_sVarp* %self3, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %3 = bitcast [8192 x i8*]* %lvtable to i8*
  %4 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %3, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  %i = alloca i32
  %5 = bitcast i32* %i to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end9, %cond_end
  %i4 = load i32, i32* %i, align 4
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %7 = bitcast i8* %6 to %map__charp_sVarp**
  %self5 = load %map__charp_sVarp*, %map__charp_sVarp** %7, align 8
  %8 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self5, i32 0, i32 3
  %9 = load i32, i32* %8, align 4
  %letmp = icmp slt i32 %i4, %9
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %11 = bitcast i8* %10 to %map__charp_sVarp**
  %self6 = load %map__charp_sVarp*, %map__charp_sVarp** %11, align 8
  %12 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self6, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %i7 = load i32, i32* %i, align 4
  %element_addressB = getelementptr i1, i1* %13, i32 %i7
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then8, label %cond_end9

cond_end_block:                                   ; preds = %loop_top_block
  %self21 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %14 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self21, i32 0, i32 2
  %15 = load %sVar**, %sVar*** %14, align 8
  %16 = load %sVar**, %sVar*** %14, align 8
  %17 = bitcast %sVar** %16 to i8*
  call void @ncfree(i8* %17)
  %i22 = alloca i32
  %18 = bitcast i32* %i22 to i8*
  store i8* %18, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  store i32 0, i32* %i22, align 4
  br label %loop_top_block23

cond_jump_then8:                                  ; preds = %cond_then_block
  br i1 false, label %cond_jump_then10, label %cond_end11

cond_end9:                                        ; preds = %cond_end11, %cond_then_block
  %i20 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i20, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_jump_then10:                                 ; preds = %cond_jump_then8
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %20 = bitcast i8* %19 to %map__charp_sVarp**
  %self12 = load %map__charp_sVarp*, %map__charp_sVarp** %20, align 8
  %21 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self12, i32 0, i32 2
  %22 = load %sVar**, %sVar*** %21, align 8
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %24 = bitcast i8* %23 to i32*
  %i13 = load i32, i32* %24, align 4
  %element_addressB14 = getelementptr %sVar*, %sVar** %22, i32 %i13
  %element15 = load %sVar*, %sVar** %element_addressB14, align 8
  %25 = load %sVar*, %sVar** %element_addressB14, align 8
  %26 = ptrtoint %sVar* %25 to i64
  %27 = icmp ne i64 %26, 0
  br i1 %27, label %cond_then_block16, label %cond_end17

cond_end11:                                       ; preds = %cond_end17, %cond_jump_then8
  br label %cond_end9

cond_then_block16:                                ; preds = %cond_jump_then10
  %28 = getelementptr inbounds %sVar, %sVar* %25, i32 0, i32 0
  %29 = load i8*, i8** %28, align 8
  %30 = ptrtoint i8* %29 to i64
  %31 = icmp ne i64 %30, 0
  br i1 %31, label %cond_then_block18, label %cond_end19

cond_end17:                                       ; preds = %cond_end19, %cond_jump_then10
  %32 = bitcast %sVar* %25 to i8*
  call void @ncfree(i8* %32)
  br label %cond_end11

cond_then_block18:                                ; preds = %cond_then_block16
  br label %cond_end19

cond_end19:                                       ; preds = %cond_then_block18, %cond_then_block16
  call void @ncfree(i8* %29)
  br label %cond_end17

loop_top_block23:                                 ; preds = %cond_end34, %cond_end_block
  %i24 = load i32, i32* %i22, align 4
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %34 = bitcast i8* %33 to %map__charp_sVarp**
  %self25 = load %map__charp_sVarp*, %map__charp_sVarp** %34, align 8
  %35 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self25, i32 0, i32 3
  %36 = load i32, i32* %35, align 4
  %letmp26 = icmp slt i32 %i24, %36
  br i1 %letmp26, label %cond_then_block27, label %cond_end_block28

cond_then_block27:                                ; preds = %loop_top_block23
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %38 = bitcast i8* %37 to %map__charp_sVarp**
  %self29 = load %map__charp_sVarp*, %map__charp_sVarp** %38, align 8
  %39 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self29, i32 0, i32 1
  %40 = load i1*, i1** %39, align 8
  %i30 = load i32, i32* %i22, align 4
  %element_addressB31 = getelementptr i1, i1* %40, i32 %i30
  %element32 = load i1, i1* %element_addressB31, align 1
  br i1 %element32, label %cond_jump_then33, label %cond_end34

cond_end_block28:                                 ; preds = %loop_top_block23
  %self46 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %41 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self46, i32 0, i32 0
  %42 = load i8**, i8*** %41, align 8
  %43 = load i8**, i8*** %41, align 8
  %44 = bitcast i8** %43 to i8*
  call void @ncfree(i8* %44)
  %self47 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %45 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self47, i32 0, i32 1
  %46 = load i1*, i1** %45, align 8
  %47 = load i1*, i1** %45, align 8
  %48 = ptrtoint i1* %47 to i64
  %49 = icmp ne i64 %48, 0
  br i1 %49, label %cond_then_block48, label %cond_end49

cond_jump_then33:                                 ; preds = %cond_then_block27
  br i1 true, label %cond_jump_then35, label %cond_end36

cond_end34:                                       ; preds = %cond_end36, %cond_then_block27
  %i43 = load i32, i32* %i22, align 4
  %addtmp44 = add nsw i32 %i43, 1
  store i32 %addtmp44, i32* %i22, align 4
  %subttmp45 = sub nsw i32 %addtmp44, 1
  br label %loop_top_block23

cond_jump_then35:                                 ; preds = %cond_jump_then33
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %51 = bitcast i8* %50 to %map__charp_sVarp**
  %self37 = load %map__charp_sVarp*, %map__charp_sVarp** %51, align 8
  %52 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self37, i32 0, i32 0
  %53 = load i8**, i8*** %52, align 8
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %55 = bitcast i8* %54 to i32*
  %i38 = load i32, i32* %55, align 4
  %element_addressB39 = getelementptr i8*, i8** %53, i32 %i38
  %element40 = load i8*, i8** %element_addressB39, align 8
  %56 = load i8*, i8** %element_addressB39, align 8
  %57 = ptrtoint i8* %56 to i64
  %58 = icmp ne i64 %57, 0
  br i1 %58, label %cond_then_block41, label %cond_end42

cond_end36:                                       ; preds = %cond_end42, %cond_jump_then33
  br label %cond_end34

cond_then_block41:                                ; preds = %cond_jump_then35
  br label %cond_end42

cond_end42:                                       ; preds = %cond_then_block41, %cond_jump_then35
  call void @ncfree(i8* %56)
  br label %cond_end36

cond_then_block48:                                ; preds = %cond_end_block28
  br label %cond_end49

cond_end49:                                       ; preds = %cond_then_block48, %cond_end_block28
  %59 = bitcast i1* %47 to i8*
  call void @ncfree(i8* %59)
  %60 = bitcast [8192 x i8*]* %lvtable to i8*
  %61 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %60, i64 65536)
  ret void
}

define void @"finalize_sVarTablep3_src/parser"(%vector__sVarTablep* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sVarTablep*
  store %vector__sVarTablep* %self, %vector__sVarTablep** %self2, align 8
  %2 = bitcast %vector__sVarTablep** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %self3 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %eqtmpX = icmp eq %vector__sVarTablep* %self3, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %3 = bitcast [8192 x i8*]* %lvtable to i8*
  %4 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %3, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  br i1 true, label %cond_jump_then4, label %cond_end5

cond_jump_then4:                                  ; preds = %cond_end
  %i = alloca i32
  %5 = bitcast i32* %i to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

cond_end5:                                        ; preds = %cond_end_block, %cond_end
  %self15 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %6 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self15, i32 0, i32 0
  %7 = load %sVarTable**, %sVarTable*** %6, align 8
  %8 = load %sVarTable**, %sVarTable*** %6, align 8
  %9 = bitcast %sVarTable** %8 to i8*
  call void @ncfree(i8* %9)
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret void

loop_top_block:                                   ; preds = %cond_end11, %cond_jump_then4
  %i6 = load i32, i32* %i, align 4
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %13 = bitcast i8* %12 to %vector__sVarTablep**
  %self7 = load %vector__sVarTablep*, %vector__sVarTablep** %13, align 8
  %14 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self7, i32 0, i32 1
  %15 = load i32, i32* %14, align 4
  %letmp = icmp slt i32 %i6, %15
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %17 = bitcast i8* %16 to %vector__sVarTablep**
  %self8 = load %vector__sVarTablep*, %vector__sVarTablep** %17, align 8
  %18 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self8, i32 0, i32 0
  %19 = load %sVarTable**, %sVarTable*** %18, align 8
  %i9 = load i32, i32* %i, align 4
  %element_addressB = getelementptr %sVarTable*, %sVarTable** %19, i32 %i9
  %element = load %sVarTable*, %sVarTable** %element_addressB, align 8
  %20 = load %sVarTable*, %sVarTable** %element_addressB, align 8
  %21 = ptrtoint %sVarTable* %20 to i64
  %22 = icmp ne i64 %21, 0
  br i1 %22, label %cond_then_block10, label %cond_end11

cond_end_block:                                   ; preds = %loop_top_block
  br label %cond_end5

cond_then_block10:                                ; preds = %cond_then_block
  %23 = getelementptr inbounds %sVarTable, %sVarTable* %20, i32 0, i32 0
  %24 = load %map__charp_sVarp*, %map__charp_sVarp** %23, align 8
  call void @"finalize_charp_sVarp4_src/parser"(%map__charp_sVarp* %24)
  %25 = ptrtoint %map__charp_sVarp* %24 to i64
  %26 = icmp ne i64 %25, 0
  br i1 %26, label %cond_then_block12, label %cond_end13

cond_end11:                                       ; preds = %cond_end13, %cond_then_block
  %27 = bitcast %sVarTable* %20 to i8*
  call void @ncfree(i8* %27)
  %i14 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i14, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_then_block12:                                ; preds = %cond_then_block10
  br label %cond_end13

cond_end13:                                       ; preds = %cond_then_block12, %cond_then_block10
  %28 = bitcast %map__charp_sVarp* %24 to i8*
  call void @ncfree(i8* %28)
  br label %cond_end11
}

define void @"finalize_charp_sVarp4_src/parser"(%map__charp_sVarp* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_sVarp*
  store %map__charp_sVarp* %self, %map__charp_sVarp** %self2, align 8
  %2 = bitcast %map__charp_sVarp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %self3 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %eqtmpX = icmp eq %map__charp_sVarp* %self3, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %3 = bitcast [8192 x i8*]* %lvtable to i8*
  %4 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %3, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  %i = alloca i32
  %5 = bitcast i32* %i to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end9, %cond_end
  %i4 = load i32, i32* %i, align 4
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %7 = bitcast i8* %6 to %map__charp_sVarp**
  %self5 = load %map__charp_sVarp*, %map__charp_sVarp** %7, align 8
  %8 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self5, i32 0, i32 3
  %9 = load i32, i32* %8, align 4
  %letmp = icmp slt i32 %i4, %9
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %11 = bitcast i8* %10 to %map__charp_sVarp**
  %self6 = load %map__charp_sVarp*, %map__charp_sVarp** %11, align 8
  %12 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self6, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %i7 = load i32, i32* %i, align 4
  %element_addressB = getelementptr i1, i1* %13, i32 %i7
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then8, label %cond_end9

cond_end_block:                                   ; preds = %loop_top_block
  %self21 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %14 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self21, i32 0, i32 2
  %15 = load %sVar**, %sVar*** %14, align 8
  %16 = load %sVar**, %sVar*** %14, align 8
  %17 = bitcast %sVar** %16 to i8*
  call void @ncfree(i8* %17)
  %i22 = alloca i32
  %18 = bitcast i32* %i22 to i8*
  store i8* %18, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  store i32 0, i32* %i22, align 4
  br label %loop_top_block23

cond_jump_then8:                                  ; preds = %cond_then_block
  br i1 false, label %cond_jump_then10, label %cond_end11

cond_end9:                                        ; preds = %cond_end11, %cond_then_block
  %i20 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i20, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_jump_then10:                                 ; preds = %cond_jump_then8
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %20 = bitcast i8* %19 to %map__charp_sVarp**
  %self12 = load %map__charp_sVarp*, %map__charp_sVarp** %20, align 8
  %21 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self12, i32 0, i32 2
  %22 = load %sVar**, %sVar*** %21, align 8
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %24 = bitcast i8* %23 to i32*
  %i13 = load i32, i32* %24, align 4
  %element_addressB14 = getelementptr %sVar*, %sVar** %22, i32 %i13
  %element15 = load %sVar*, %sVar** %element_addressB14, align 8
  %25 = load %sVar*, %sVar** %element_addressB14, align 8
  %26 = ptrtoint %sVar* %25 to i64
  %27 = icmp ne i64 %26, 0
  br i1 %27, label %cond_then_block16, label %cond_end17

cond_end11:                                       ; preds = %cond_end17, %cond_jump_then8
  br label %cond_end9

cond_then_block16:                                ; preds = %cond_jump_then10
  %28 = getelementptr inbounds %sVar, %sVar* %25, i32 0, i32 0
  %29 = load i8*, i8** %28, align 8
  %30 = ptrtoint i8* %29 to i64
  %31 = icmp ne i64 %30, 0
  br i1 %31, label %cond_then_block18, label %cond_end19

cond_end17:                                       ; preds = %cond_end19, %cond_jump_then10
  %32 = bitcast %sVar* %25 to i8*
  call void @ncfree(i8* %32)
  br label %cond_end11

cond_then_block18:                                ; preds = %cond_then_block16
  br label %cond_end19

cond_end19:                                       ; preds = %cond_then_block18, %cond_then_block16
  call void @ncfree(i8* %29)
  br label %cond_end17

loop_top_block23:                                 ; preds = %cond_end34, %cond_end_block
  %i24 = load i32, i32* %i22, align 4
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %34 = bitcast i8* %33 to %map__charp_sVarp**
  %self25 = load %map__charp_sVarp*, %map__charp_sVarp** %34, align 8
  %35 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self25, i32 0, i32 3
  %36 = load i32, i32* %35, align 4
  %letmp26 = icmp slt i32 %i24, %36
  br i1 %letmp26, label %cond_then_block27, label %cond_end_block28

cond_then_block27:                                ; preds = %loop_top_block23
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %38 = bitcast i8* %37 to %map__charp_sVarp**
  %self29 = load %map__charp_sVarp*, %map__charp_sVarp** %38, align 8
  %39 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self29, i32 0, i32 1
  %40 = load i1*, i1** %39, align 8
  %i30 = load i32, i32* %i22, align 4
  %element_addressB31 = getelementptr i1, i1* %40, i32 %i30
  %element32 = load i1, i1* %element_addressB31, align 1
  br i1 %element32, label %cond_jump_then33, label %cond_end34

cond_end_block28:                                 ; preds = %loop_top_block23
  %self46 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %41 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self46, i32 0, i32 0
  %42 = load i8**, i8*** %41, align 8
  %43 = load i8**, i8*** %41, align 8
  %44 = bitcast i8** %43 to i8*
  call void @ncfree(i8* %44)
  %self47 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %45 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self47, i32 0, i32 1
  %46 = load i1*, i1** %45, align 8
  %47 = load i1*, i1** %45, align 8
  %48 = ptrtoint i1* %47 to i64
  %49 = icmp ne i64 %48, 0
  br i1 %49, label %cond_then_block48, label %cond_end49

cond_jump_then33:                                 ; preds = %cond_then_block27
  br i1 true, label %cond_jump_then35, label %cond_end36

cond_end34:                                       ; preds = %cond_end36, %cond_then_block27
  %i43 = load i32, i32* %i22, align 4
  %addtmp44 = add nsw i32 %i43, 1
  store i32 %addtmp44, i32* %i22, align 4
  %subttmp45 = sub nsw i32 %addtmp44, 1
  br label %loop_top_block23

cond_jump_then35:                                 ; preds = %cond_jump_then33
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %51 = bitcast i8* %50 to %map__charp_sVarp**
  %self37 = load %map__charp_sVarp*, %map__charp_sVarp** %51, align 8
  %52 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self37, i32 0, i32 0
  %53 = load i8**, i8*** %52, align 8
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %55 = bitcast i8* %54 to i32*
  %i38 = load i32, i32* %55, align 4
  %element_addressB39 = getelementptr i8*, i8** %53, i32 %i38
  %element40 = load i8*, i8** %element_addressB39, align 8
  %56 = load i8*, i8** %element_addressB39, align 8
  %57 = ptrtoint i8* %56 to i64
  %58 = icmp ne i64 %57, 0
  br i1 %58, label %cond_then_block41, label %cond_end42

cond_end36:                                       ; preds = %cond_end42, %cond_jump_then33
  br label %cond_end34

cond_then_block41:                                ; preds = %cond_jump_then35
  br label %cond_end42

cond_end42:                                       ; preds = %cond_then_block41, %cond_jump_then35
  call void @ncfree(i8* %56)
  br label %cond_end36

cond_then_block48:                                ; preds = %cond_end_block28
  br label %cond_end49

cond_end49:                                       ; preds = %cond_then_block48, %cond_end_block28
  %59 = bitcast i1* %47 to i8*
  call void @ncfree(i8* %59)
  %60 = bitcast [8192 x i8*]* %lvtable to i8*
  %61 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %60, i64 65536)
  ret void
}

define %vector__sVarTablep* @"initialize_sVarTablep5_src/parser"(%vector__sVarTablep* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sVarTablep*
  store %vector__sVarTablep* %self, %vector__sVarTablep** %self2, align 8
  %2 = bitcast %vector__sVarTablep** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %self3 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %3 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self3, i32 0, i32 2
  store i32 16, i32* %3, align 4
  %self4 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %4 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self4, i32 0, i32 1
  store i32 0, i32* %4, align 4
  %self5 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %self6 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %5 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self6, i32 0, i32 2
  %6 = load i32, i32* %5, align 4
  %sext14 = zext i32 %6 to i64
  %7 = call i8* @nccalloc(i64 %sext14, i64 8)
  %8 = bitcast i8* %7 to %sVarTable**
  %9 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self5, i32 0, i32 0
  store %sVarTable** %8, %sVarTable*** %9, align 8
  %self7 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret %vector__sVarTablep* %self7
}

define void @"finalize_sVarTablep6_src/parser"(%vector__sVarTablep* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sVarTablep*
  store %vector__sVarTablep* %self, %vector__sVarTablep** %self2, align 8
  %2 = bitcast %vector__sVarTablep** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %self3 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %eqtmpX = icmp eq %vector__sVarTablep* %self3, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %3 = bitcast [8192 x i8*]* %lvtable to i8*
  %4 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %3, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  br i1 true, label %cond_jump_then4, label %cond_end5

cond_jump_then4:                                  ; preds = %cond_end
  %i = alloca i32
  %5 = bitcast i32* %i to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

cond_end5:                                        ; preds = %cond_end_block, %cond_end
  %self15 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %6 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self15, i32 0, i32 0
  %7 = load %sVarTable**, %sVarTable*** %6, align 8
  %8 = load %sVarTable**, %sVarTable*** %6, align 8
  %9 = bitcast %sVarTable** %8 to i8*
  call void @ncfree(i8* %9)
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret void

loop_top_block:                                   ; preds = %cond_end11, %cond_jump_then4
  %i6 = load i32, i32* %i, align 4
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %13 = bitcast i8* %12 to %vector__sVarTablep**
  %self7 = load %vector__sVarTablep*, %vector__sVarTablep** %13, align 8
  %14 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self7, i32 0, i32 1
  %15 = load i32, i32* %14, align 4
  %letmp = icmp slt i32 %i6, %15
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %17 = bitcast i8* %16 to %vector__sVarTablep**
  %self8 = load %vector__sVarTablep*, %vector__sVarTablep** %17, align 8
  %18 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self8, i32 0, i32 0
  %19 = load %sVarTable**, %sVarTable*** %18, align 8
  %i9 = load i32, i32* %i, align 4
  %element_addressB = getelementptr %sVarTable*, %sVarTable** %19, i32 %i9
  %element = load %sVarTable*, %sVarTable** %element_addressB, align 8
  %20 = load %sVarTable*, %sVarTable** %element_addressB, align 8
  %21 = ptrtoint %sVarTable* %20 to i64
  %22 = icmp ne i64 %21, 0
  br i1 %22, label %cond_then_block10, label %cond_end11

cond_end_block:                                   ; preds = %loop_top_block
  br label %cond_end5

cond_then_block10:                                ; preds = %cond_then_block
  %23 = getelementptr inbounds %sVarTable, %sVarTable* %20, i32 0, i32 0
  %24 = load %map__charp_sVarp*, %map__charp_sVarp** %23, align 8
  call void @"finalize_charp_sVarp7_src/parser"(%map__charp_sVarp* %24)
  %25 = ptrtoint %map__charp_sVarp* %24 to i64
  %26 = icmp ne i64 %25, 0
  br i1 %26, label %cond_then_block12, label %cond_end13

cond_end11:                                       ; preds = %cond_end13, %cond_then_block
  %27 = bitcast %sVarTable* %20 to i8*
  call void @ncfree(i8* %27)
  %i14 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i14, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_then_block12:                                ; preds = %cond_then_block10
  br label %cond_end13

cond_end13:                                       ; preds = %cond_then_block12, %cond_then_block10
  %28 = bitcast %map__charp_sVarp* %24 to i8*
  call void @ncfree(i8* %28)
  br label %cond_end11
}

define void @"finalize_charp_sVarp7_src/parser"(%map__charp_sVarp* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_sVarp*
  store %map__charp_sVarp* %self, %map__charp_sVarp** %self2, align 8
  %2 = bitcast %map__charp_sVarp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %self3 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %eqtmpX = icmp eq %map__charp_sVarp* %self3, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %3 = bitcast [8192 x i8*]* %lvtable to i8*
  %4 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %3, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  %i = alloca i32
  %5 = bitcast i32* %i to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end9, %cond_end
  %i4 = load i32, i32* %i, align 4
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %7 = bitcast i8* %6 to %map__charp_sVarp**
  %self5 = load %map__charp_sVarp*, %map__charp_sVarp** %7, align 8
  %8 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self5, i32 0, i32 3
  %9 = load i32, i32* %8, align 4
  %letmp = icmp slt i32 %i4, %9
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %11 = bitcast i8* %10 to %map__charp_sVarp**
  %self6 = load %map__charp_sVarp*, %map__charp_sVarp** %11, align 8
  %12 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self6, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %i7 = load i32, i32* %i, align 4
  %element_addressB = getelementptr i1, i1* %13, i32 %i7
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then8, label %cond_end9

cond_end_block:                                   ; preds = %loop_top_block
  %self21 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %14 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self21, i32 0, i32 2
  %15 = load %sVar**, %sVar*** %14, align 8
  %16 = load %sVar**, %sVar*** %14, align 8
  %17 = bitcast %sVar** %16 to i8*
  call void @ncfree(i8* %17)
  %i22 = alloca i32
  %18 = bitcast i32* %i22 to i8*
  store i8* %18, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  store i32 0, i32* %i22, align 4
  br label %loop_top_block23

cond_jump_then8:                                  ; preds = %cond_then_block
  br i1 false, label %cond_jump_then10, label %cond_end11

cond_end9:                                        ; preds = %cond_end11, %cond_then_block
  %i20 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i20, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_jump_then10:                                 ; preds = %cond_jump_then8
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %20 = bitcast i8* %19 to %map__charp_sVarp**
  %self12 = load %map__charp_sVarp*, %map__charp_sVarp** %20, align 8
  %21 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self12, i32 0, i32 2
  %22 = load %sVar**, %sVar*** %21, align 8
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %24 = bitcast i8* %23 to i32*
  %i13 = load i32, i32* %24, align 4
  %element_addressB14 = getelementptr %sVar*, %sVar** %22, i32 %i13
  %element15 = load %sVar*, %sVar** %element_addressB14, align 8
  %25 = load %sVar*, %sVar** %element_addressB14, align 8
  %26 = ptrtoint %sVar* %25 to i64
  %27 = icmp ne i64 %26, 0
  br i1 %27, label %cond_then_block16, label %cond_end17

cond_end11:                                       ; preds = %cond_end17, %cond_jump_then8
  br label %cond_end9

cond_then_block16:                                ; preds = %cond_jump_then10
  %28 = getelementptr inbounds %sVar, %sVar* %25, i32 0, i32 0
  %29 = load i8*, i8** %28, align 8
  %30 = ptrtoint i8* %29 to i64
  %31 = icmp ne i64 %30, 0
  br i1 %31, label %cond_then_block18, label %cond_end19

cond_end17:                                       ; preds = %cond_end19, %cond_jump_then10
  %32 = bitcast %sVar* %25 to i8*
  call void @ncfree(i8* %32)
  br label %cond_end11

cond_then_block18:                                ; preds = %cond_then_block16
  br label %cond_end19

cond_end19:                                       ; preds = %cond_then_block18, %cond_then_block16
  call void @ncfree(i8* %29)
  br label %cond_end17

loop_top_block23:                                 ; preds = %cond_end34, %cond_end_block
  %i24 = load i32, i32* %i22, align 4
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %34 = bitcast i8* %33 to %map__charp_sVarp**
  %self25 = load %map__charp_sVarp*, %map__charp_sVarp** %34, align 8
  %35 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self25, i32 0, i32 3
  %36 = load i32, i32* %35, align 4
  %letmp26 = icmp slt i32 %i24, %36
  br i1 %letmp26, label %cond_then_block27, label %cond_end_block28

cond_then_block27:                                ; preds = %loop_top_block23
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %38 = bitcast i8* %37 to %map__charp_sVarp**
  %self29 = load %map__charp_sVarp*, %map__charp_sVarp** %38, align 8
  %39 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self29, i32 0, i32 1
  %40 = load i1*, i1** %39, align 8
  %i30 = load i32, i32* %i22, align 4
  %element_addressB31 = getelementptr i1, i1* %40, i32 %i30
  %element32 = load i1, i1* %element_addressB31, align 1
  br i1 %element32, label %cond_jump_then33, label %cond_end34

cond_end_block28:                                 ; preds = %loop_top_block23
  %self46 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %41 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self46, i32 0, i32 0
  %42 = load i8**, i8*** %41, align 8
  %43 = load i8**, i8*** %41, align 8
  %44 = bitcast i8** %43 to i8*
  call void @ncfree(i8* %44)
  %self47 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %45 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self47, i32 0, i32 1
  %46 = load i1*, i1** %45, align 8
  %47 = load i1*, i1** %45, align 8
  %48 = ptrtoint i1* %47 to i64
  %49 = icmp ne i64 %48, 0
  br i1 %49, label %cond_then_block48, label %cond_end49

cond_jump_then33:                                 ; preds = %cond_then_block27
  br i1 true, label %cond_jump_then35, label %cond_end36

cond_end34:                                       ; preds = %cond_end36, %cond_then_block27
  %i43 = load i32, i32* %i22, align 4
  %addtmp44 = add nsw i32 %i43, 1
  store i32 %addtmp44, i32* %i22, align 4
  %subttmp45 = sub nsw i32 %addtmp44, 1
  br label %loop_top_block23

cond_jump_then35:                                 ; preds = %cond_jump_then33
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %51 = bitcast i8* %50 to %map__charp_sVarp**
  %self37 = load %map__charp_sVarp*, %map__charp_sVarp** %51, align 8
  %52 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self37, i32 0, i32 0
  %53 = load i8**, i8*** %52, align 8
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %55 = bitcast i8* %54 to i32*
  %i38 = load i32, i32* %55, align 4
  %element_addressB39 = getelementptr i8*, i8** %53, i32 %i38
  %element40 = load i8*, i8** %element_addressB39, align 8
  %56 = load i8*, i8** %element_addressB39, align 8
  %57 = ptrtoint i8* %56 to i64
  %58 = icmp ne i64 %57, 0
  br i1 %58, label %cond_then_block41, label %cond_end42

cond_end36:                                       ; preds = %cond_end42, %cond_jump_then33
  br label %cond_end34

cond_then_block41:                                ; preds = %cond_jump_then35
  br label %cond_end42

cond_end42:                                       ; preds = %cond_then_block41, %cond_jump_then35
  call void @ncfree(i8* %56)
  br label %cond_end36

cond_then_block48:                                ; preds = %cond_end_block28
  br label %cond_end49

cond_end49:                                       ; preds = %cond_then_block48, %cond_end_block28
  %59 = bitcast i1* %47 to i8*
  call void @ncfree(i8* %59)
  %60 = bitcast [8192 x i8*]* %lvtable to i8*
  %61 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %60, i64 65536)
  ret void
}

define void @"finalize_sVarTablep8_src/parser"(%vector__sVarTablep* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sVarTablep*
  store %vector__sVarTablep* %self, %vector__sVarTablep** %self2, align 8
  %2 = bitcast %vector__sVarTablep** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %self3 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %eqtmpX = icmp eq %vector__sVarTablep* %self3, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %3 = bitcast [8192 x i8*]* %lvtable to i8*
  %4 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %3, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  br i1 true, label %cond_jump_then4, label %cond_end5

cond_jump_then4:                                  ; preds = %cond_end
  %i = alloca i32
  %5 = bitcast i32* %i to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

cond_end5:                                        ; preds = %cond_end_block, %cond_end
  %self15 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %6 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self15, i32 0, i32 0
  %7 = load %sVarTable**, %sVarTable*** %6, align 8
  %8 = load %sVarTable**, %sVarTable*** %6, align 8
  %9 = bitcast %sVarTable** %8 to i8*
  call void @ncfree(i8* %9)
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret void

loop_top_block:                                   ; preds = %cond_end11, %cond_jump_then4
  %i6 = load i32, i32* %i, align 4
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %13 = bitcast i8* %12 to %vector__sVarTablep**
  %self7 = load %vector__sVarTablep*, %vector__sVarTablep** %13, align 8
  %14 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self7, i32 0, i32 1
  %15 = load i32, i32* %14, align 4
  %letmp = icmp slt i32 %i6, %15
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %17 = bitcast i8* %16 to %vector__sVarTablep**
  %self8 = load %vector__sVarTablep*, %vector__sVarTablep** %17, align 8
  %18 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self8, i32 0, i32 0
  %19 = load %sVarTable**, %sVarTable*** %18, align 8
  %i9 = load i32, i32* %i, align 4
  %element_addressB = getelementptr %sVarTable*, %sVarTable** %19, i32 %i9
  %element = load %sVarTable*, %sVarTable** %element_addressB, align 8
  %20 = load %sVarTable*, %sVarTable** %element_addressB, align 8
  %21 = ptrtoint %sVarTable* %20 to i64
  %22 = icmp ne i64 %21, 0
  br i1 %22, label %cond_then_block10, label %cond_end11

cond_end_block:                                   ; preds = %loop_top_block
  br label %cond_end5

cond_then_block10:                                ; preds = %cond_then_block
  %23 = getelementptr inbounds %sVarTable, %sVarTable* %20, i32 0, i32 0
  %24 = load %map__charp_sVarp*, %map__charp_sVarp** %23, align 8
  call void @"finalize_charp_sVarp9_src/parser"(%map__charp_sVarp* %24)
  %25 = ptrtoint %map__charp_sVarp* %24 to i64
  %26 = icmp ne i64 %25, 0
  br i1 %26, label %cond_then_block12, label %cond_end13

cond_end11:                                       ; preds = %cond_end13, %cond_then_block
  %27 = bitcast %sVarTable* %20 to i8*
  call void @ncfree(i8* %27)
  %i14 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i14, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_then_block12:                                ; preds = %cond_then_block10
  br label %cond_end13

cond_end13:                                       ; preds = %cond_then_block12, %cond_then_block10
  %28 = bitcast %map__charp_sVarp* %24 to i8*
  call void @ncfree(i8* %28)
  br label %cond_end11
}

define void @"finalize_charp_sVarp9_src/parser"(%map__charp_sVarp* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_sVarp*
  store %map__charp_sVarp* %self, %map__charp_sVarp** %self2, align 8
  %2 = bitcast %map__charp_sVarp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %self3 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %eqtmpX = icmp eq %map__charp_sVarp* %self3, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %3 = bitcast [8192 x i8*]* %lvtable to i8*
  %4 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %3, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  %i = alloca i32
  %5 = bitcast i32* %i to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end9, %cond_end
  %i4 = load i32, i32* %i, align 4
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %7 = bitcast i8* %6 to %map__charp_sVarp**
  %self5 = load %map__charp_sVarp*, %map__charp_sVarp** %7, align 8
  %8 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self5, i32 0, i32 3
  %9 = load i32, i32* %8, align 4
  %letmp = icmp slt i32 %i4, %9
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %11 = bitcast i8* %10 to %map__charp_sVarp**
  %self6 = load %map__charp_sVarp*, %map__charp_sVarp** %11, align 8
  %12 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self6, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %i7 = load i32, i32* %i, align 4
  %element_addressB = getelementptr i1, i1* %13, i32 %i7
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then8, label %cond_end9

cond_end_block:                                   ; preds = %loop_top_block
  %self21 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %14 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self21, i32 0, i32 2
  %15 = load %sVar**, %sVar*** %14, align 8
  %16 = load %sVar**, %sVar*** %14, align 8
  %17 = bitcast %sVar** %16 to i8*
  call void @ncfree(i8* %17)
  %i22 = alloca i32
  %18 = bitcast i32* %i22 to i8*
  store i8* %18, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  store i32 0, i32* %i22, align 4
  br label %loop_top_block23

cond_jump_then8:                                  ; preds = %cond_then_block
  br i1 false, label %cond_jump_then10, label %cond_end11

cond_end9:                                        ; preds = %cond_end11, %cond_then_block
  %i20 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i20, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_jump_then10:                                 ; preds = %cond_jump_then8
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %20 = bitcast i8* %19 to %map__charp_sVarp**
  %self12 = load %map__charp_sVarp*, %map__charp_sVarp** %20, align 8
  %21 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self12, i32 0, i32 2
  %22 = load %sVar**, %sVar*** %21, align 8
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %24 = bitcast i8* %23 to i32*
  %i13 = load i32, i32* %24, align 4
  %element_addressB14 = getelementptr %sVar*, %sVar** %22, i32 %i13
  %element15 = load %sVar*, %sVar** %element_addressB14, align 8
  %25 = load %sVar*, %sVar** %element_addressB14, align 8
  %26 = ptrtoint %sVar* %25 to i64
  %27 = icmp ne i64 %26, 0
  br i1 %27, label %cond_then_block16, label %cond_end17

cond_end11:                                       ; preds = %cond_end17, %cond_jump_then8
  br label %cond_end9

cond_then_block16:                                ; preds = %cond_jump_then10
  %28 = getelementptr inbounds %sVar, %sVar* %25, i32 0, i32 0
  %29 = load i8*, i8** %28, align 8
  %30 = ptrtoint i8* %29 to i64
  %31 = icmp ne i64 %30, 0
  br i1 %31, label %cond_then_block18, label %cond_end19

cond_end17:                                       ; preds = %cond_end19, %cond_jump_then10
  %32 = bitcast %sVar* %25 to i8*
  call void @ncfree(i8* %32)
  br label %cond_end11

cond_then_block18:                                ; preds = %cond_then_block16
  br label %cond_end19

cond_end19:                                       ; preds = %cond_then_block18, %cond_then_block16
  call void @ncfree(i8* %29)
  br label %cond_end17

loop_top_block23:                                 ; preds = %cond_end34, %cond_end_block
  %i24 = load i32, i32* %i22, align 4
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %34 = bitcast i8* %33 to %map__charp_sVarp**
  %self25 = load %map__charp_sVarp*, %map__charp_sVarp** %34, align 8
  %35 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self25, i32 0, i32 3
  %36 = load i32, i32* %35, align 4
  %letmp26 = icmp slt i32 %i24, %36
  br i1 %letmp26, label %cond_then_block27, label %cond_end_block28

cond_then_block27:                                ; preds = %loop_top_block23
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %38 = bitcast i8* %37 to %map__charp_sVarp**
  %self29 = load %map__charp_sVarp*, %map__charp_sVarp** %38, align 8
  %39 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self29, i32 0, i32 1
  %40 = load i1*, i1** %39, align 8
  %i30 = load i32, i32* %i22, align 4
  %element_addressB31 = getelementptr i1, i1* %40, i32 %i30
  %element32 = load i1, i1* %element_addressB31, align 1
  br i1 %element32, label %cond_jump_then33, label %cond_end34

cond_end_block28:                                 ; preds = %loop_top_block23
  %self46 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %41 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self46, i32 0, i32 0
  %42 = load i8**, i8*** %41, align 8
  %43 = load i8**, i8*** %41, align 8
  %44 = bitcast i8** %43 to i8*
  call void @ncfree(i8* %44)
  %self47 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %45 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self47, i32 0, i32 1
  %46 = load i1*, i1** %45, align 8
  %47 = load i1*, i1** %45, align 8
  %48 = ptrtoint i1* %47 to i64
  %49 = icmp ne i64 %48, 0
  br i1 %49, label %cond_then_block48, label %cond_end49

cond_jump_then33:                                 ; preds = %cond_then_block27
  br i1 true, label %cond_jump_then35, label %cond_end36

cond_end34:                                       ; preds = %cond_end36, %cond_then_block27
  %i43 = load i32, i32* %i22, align 4
  %addtmp44 = add nsw i32 %i43, 1
  store i32 %addtmp44, i32* %i22, align 4
  %subttmp45 = sub nsw i32 %addtmp44, 1
  br label %loop_top_block23

cond_jump_then35:                                 ; preds = %cond_jump_then33
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %51 = bitcast i8* %50 to %map__charp_sVarp**
  %self37 = load %map__charp_sVarp*, %map__charp_sVarp** %51, align 8
  %52 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self37, i32 0, i32 0
  %53 = load i8**, i8*** %52, align 8
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %55 = bitcast i8* %54 to i32*
  %i38 = load i32, i32* %55, align 4
  %element_addressB39 = getelementptr i8*, i8** %53, i32 %i38
  %element40 = load i8*, i8** %element_addressB39, align 8
  %56 = load i8*, i8** %element_addressB39, align 8
  %57 = ptrtoint i8* %56 to i64
  %58 = icmp ne i64 %57, 0
  br i1 %58, label %cond_then_block41, label %cond_end42

cond_end36:                                       ; preds = %cond_end42, %cond_jump_then33
  br label %cond_end34

cond_then_block41:                                ; preds = %cond_jump_then35
  br label %cond_end42

cond_end42:                                       ; preds = %cond_then_block41, %cond_jump_then35
  call void @ncfree(i8* %56)
  br label %cond_end36

cond_then_block48:                                ; preds = %cond_end_block28
  br label %cond_end49

cond_end49:                                       ; preds = %cond_then_block48, %cond_end_block28
  %59 = bitcast i1* %47 to i8*
  call void @ncfree(i8* %59)
  %60 = bitcast [8192 x i8*]* %lvtable to i8*
  %61 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %60, i64 65536)
  ret void
}

define i1 @parse_break_expression(%sCLNode** %node, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %node2 = alloca %sCLNode**
  store %sCLNode** %node, %sCLNode*** %node2, align 8
  %2 = bitcast %sCLNode*** %node2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %node4 = load %sCLNode**, %sCLNode*** %node2, align 8
  %info5 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %4 = call %sCLNode* @sNodeTree_create_break(%sParserInfo* %info5)
  store %sCLNode* %4, %sCLNode** %node4, align 8
  %5 = bitcast [8192 x i8*]* %lvtable to i8*
  %6 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %5, i64 65536)
  ret i1 true
}

define i1 @parse_throw(%sCLNode** %node, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %node2 = alloca %sCLNode**
  store %sCLNode** %node, %sCLNode*** %node2, align 8
  %2 = bitcast %sCLNode*** %node2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %obj = alloca %sCLNode*
  %4 = bitcast %sCLNode** %obj to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %obj, align 8
  %obj4 = load %sCLNode*, %sCLNode** %obj, align 8
  %info5 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %5 = call i1 @expression(%sCLNode** %obj, %sParserInfo* %info5)
  %LOGICAL_DIANEAL = icmp eq i1 %5, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %6 = bitcast [8192 x i8*]* %lvtable to i8*
  %7 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %6, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %entry
  %node6 = load %sCLNode**, %sCLNode*** %node2, align 8
  %obj7 = load %sCLNode*, %sCLNode** %obj, align 8
  %info8 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %8 = call %sCLNode* @sNodeTree_create_throw_exception(%sCLNode* %obj7, %sParserInfo* %info8)
  store %sCLNode* %8, %sCLNode** %node6, align 8
  %9 = bitcast [8192 x i8*]* %lvtable to i8*
  %10 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %9, i64 65536)
  ret i1 true
}

define i32 @"length_charp10_src/parser"(%vector__charp* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__charp*
  store %vector__charp* %self, %vector__charp** %self2, align 8
  %2 = bitcast %vector__charp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %self3 = load %vector__charp*, %vector__charp** %self2, align 8
  %3 = getelementptr inbounds %vector__charp, %vector__charp* %self3, i32 0, i32 1
  %4 = load i32, i32* %3, align 4
  %5 = bitcast [8192 x i8*]* %lvtable to i8*
  %6 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %5, i64 65536)
  ret i32 %4
}

define i8* @"item_charp11_src/parser"(%vector__charp* %self, i32 %index, i8* %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__charp*
  store %vector__charp* %self, %vector__charp** %self2, align 8
  %2 = bitcast %vector__charp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %index3 = alloca i32
  store i32 %index, i32* %index3, align 4
  %3 = bitcast i32* %index3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %default_value4 = alloca i8*
  store i8* %default_value, i8** %default_value4, align 8
  %4 = bitcast i8** %default_value4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %index5 = load i32, i32* %index3, align 4
  %letmp = icmp slt i32 %index5, 0
  br i1 %letmp, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %6 = bitcast i8* %5 to i32*
  %index6 = load i32, i32* %6, align 4
  %7 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %8 = bitcast i8* %7 to %vector__charp**
  %self7 = load %vector__charp*, %vector__charp** %8, align 8
  %9 = getelementptr inbounds %vector__charp, %vector__charp* %self7, i32 0, i32 1
  %10 = load i32, i32* %9, align 4
  %addtmp = add nsw i32 %index6, %10
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %12 = bitcast i8* %11 to i32*
  store i32 %addtmp, i32* %12, align 4
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %14 = bitcast i8* %13 to %vector__charp**
  %self8 = load %vector__charp*, %vector__charp** %14, align 8
  %15 = getelementptr inbounds %vector__charp, %vector__charp* %self8, i32 0, i32 1
  %16 = load i32, i32* %15, align 4
  %subttmp = sub nsw i32 %addtmp, %16
  br label %cond_end

cond_end:                                         ; preds = %cond_jump_then, %entry
  %index9 = load i32, i32* %index3, align 4
  %getmp = icmp sge i32 %index9, 0
  store i1 %getmp, i1* %andand_result_var, align 1
  br i1 %getmp, label %cond_jump_then10, label %cond_jump_end

cond_jump_then10:                                 ; preds = %cond_end
  %index11 = load i32, i32* %index3, align 4
  %self12 = load %vector__charp*, %vector__charp** %self2, align 8
  %17 = getelementptr inbounds %vector__charp, %vector__charp* %self12, i32 0, i32 1
  %18 = load i32, i32* %17, align 4
  %letmp13 = icmp slt i32 %index11, %18
  %andand = and i1 %getmp, %letmp13
  store i1 %andand, i1* %andand_result_var, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then10, %cond_end
  %andand_result_value = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value, label %cond_jump_then14, label %cond_end15

cond_jump_then14:                                 ; preds = %cond_jump_end
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %20 = bitcast i8* %19 to %vector__charp**
  %self16 = load %vector__charp*, %vector__charp** %20, align 8
  %21 = getelementptr inbounds %vector__charp, %vector__charp* %self16, i32 0, i32 0
  %22 = load i8**, i8*** %21, align 8
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %24 = bitcast i8* %23 to i32*
  %index17 = load i32, i32* %24, align 4
  %element_addressB = getelementptr i8*, i8** %22, i32 %index17
  %element = load i8*, i8** %element_addressB, align 8
  %25 = bitcast [8192 x i8*]* %lvtable to i8*
  %26 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %25, i64 65536)
  ret i8* %element

cond_end15:                                       ; preds = %cond_jump_end
  %default_value18 = load i8*, i8** %default_value4, align 8
  %27 = bitcast [8192 x i8*]* %lvtable to i8*
  %28 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %27, i64 65536)
  ret i8* %default_value18
}

define i1 @parse_lambda_expression(%sCLNode** %node, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %node2 = alloca %sCLNode**
  store %sCLNode** %node, %sCLNode*** %node2, align 8
  %2 = bitcast %sCLNode*** %node2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %params = alloca [32 x %sCLParam]
  %4 = bitcast [32 x %sCLParam]* %params to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %num_params = alloca i32
  %5 = bitcast i32* %num_params to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 0, i32* %num_params, align 4
  %num_params4 = load i32, i32* %num_params, align 4
  %info5 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %info6 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %6 = getelementptr inbounds %sParserInfo, %sParserInfo* %info6, i32 0, i32 9
  %7 = load %vector__sCLTypep*, %vector__sCLTypep** %6, align 8
  %8 = bitcast [32 x %sCLParam]* %params to %sCLParam*
  %9 = call i1 @parse_params(%sCLParam* %8, i32* %num_params, %sParserInfo* %info5, %vector__sCLTypep* %7)
  %LOGICAL_DIANEAL = icmp eq i1 %9, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %entry
  %info7 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @expected_next_character(i8 58, %sParserInfo* %info7)
  %block_type = alloca %sCLType*
  %12 = bitcast %sCLType** %block_type to i8*
  store i8* %12, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store %sCLType* null, %sCLType** %block_type, align 8
  %block_type8 = load %sCLType*, %sCLType** %block_type, align 8
  %info9 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %info10 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %13 = getelementptr inbounds %sParserInfo, %sParserInfo* %info10, i32 0, i32 9
  %14 = load %vector__sCLTypep*, %vector__sCLTypep** %13, align 8
  %15 = call i1 @parse_type(%sCLType** %block_type, %sParserInfo* %info9, %vector__sCLTypep* %14)
  %LOGICAL_DIANEAL11 = icmp eq i1 %15, false
  br i1 %LOGICAL_DIANEAL11, label %cond_jump_then12, label %cond_end13

cond_jump_then12:                                 ; preds = %cond_end
  %16 = bitcast [8192 x i8*]* %lvtable to i8*
  %17 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %16, i64 65536)
  ret i1 false

cond_end13:                                       ; preds = %cond_end
  %info14 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @expected_next_character(i8 123, %sParserInfo* %info14)
  %node_block = alloca %sCLNodeBlock*
  %18 = bitcast %sCLNodeBlock** %node_block to i8*
  store i8* %18, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store %sCLNodeBlock* null, %sCLNodeBlock** %node_block, align 8
  %info15 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %19 = getelementptr inbounds %sParserInfo, %sParserInfo* %info15, i32 0, i32 7
  %20 = load %vector__sVarTablep*, %vector__sVarTablep** %19, align 8
  %vtables_before = alloca %vector__sVarTablep*
  %21 = bitcast %vector__sVarTablep** %vtables_before to i8*
  store i8* %21, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store %vector__sVarTablep* %20, %vector__sVarTablep** %vtables_before, align 8
  %info16 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %22 = call i8* @nccalloc(i64 1, i64 16)
  %23 = bitcast i8* %22 to %vector__sVarTablep*
  %24 = call %vector__sVarTablep* @"initialize_sVarTablep12_src/parser"(%vector__sVarTablep* %23)
  %25 = getelementptr inbounds %sParserInfo, %sParserInfo* %info16, i32 0, i32 7
  store %vector__sVarTablep* %24, %vector__sVarTablep** %25, align 8
  %info17 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %26 = getelementptr inbounds %sParserInfo, %sParserInfo* %info17, i32 0, i32 11
  %27 = load i32, i32* %26, align 4
  %max_var_num = alloca i32
  %28 = bitcast i32* %max_var_num to i8*
  store i8* %28, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 %27, i32* %max_var_num, align 4
  %node_block18 = load %sCLNodeBlock*, %sCLNodeBlock** %node_block, align 8
  %num_params19 = load i32, i32* %num_params, align 4
  %info20 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %29 = bitcast [32 x %sCLParam]* %params to %sCLParam*
  %30 = call i1 @parse_block(%sCLNodeBlock** %node_block, i32 %num_params19, %sCLParam* %29, %sParserInfo* %info20)
  %LOGICAL_DIANEAL21 = icmp eq i1 %30, false
  br i1 %LOGICAL_DIANEAL21, label %cond_jump_then22, label %cond_end23

cond_jump_then22:                                 ; preds = %cond_end13
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %32 = bitcast i8* %31 to %sParserInfo**
  %info24 = load %sParserInfo*, %sParserInfo** %32, align 8
  %33 = getelementptr inbounds %sParserInfo, %sParserInfo* %info24, i32 0, i32 7
  %34 = load %vector__sVarTablep*, %vector__sVarTablep** %33, align 8
  %35 = load %vector__sVarTablep*, %vector__sVarTablep** %33, align 8
  call void @"finalize_sVarTablep13_src/parser"(%vector__sVarTablep* %35)
  %36 = ptrtoint %vector__sVarTablep* %35 to i64
  %37 = icmp ne i64 %36, 0
  br i1 %37, label %cond_then_block, label %cond_end25

cond_end23:                                       ; preds = %cond_end13
  %info30 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %max_var_num31 = load i32, i32* %max_var_num, align 4
  %38 = getelementptr inbounds %sParserInfo, %sParserInfo* %info30, i32 0, i32 11
  store i32 %max_var_num31, i32* %38, align 4
  %info32 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %39 = getelementptr inbounds %sParserInfo, %sParserInfo* %info32, i32 0, i32 7
  %40 = load %vector__sVarTablep*, %vector__sVarTablep** %39, align 8
  %41 = load %vector__sVarTablep*, %vector__sVarTablep** %39, align 8
  call void @"finalize_sVarTablep15_src/parser"(%vector__sVarTablep* %41)
  %42 = ptrtoint %vector__sVarTablep* %41 to i64
  %43 = icmp ne i64 %42, 0
  br i1 %43, label %cond_then_block33, label %cond_end34

cond_then_block:                                  ; preds = %cond_jump_then22
  br label %cond_end25

cond_end25:                                       ; preds = %cond_then_block, %cond_jump_then22
  %44 = bitcast %vector__sVarTablep* %35 to i8*
  call void @ncfree(i8* %44)
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %46 = bitcast i8* %45 to %sParserInfo**
  %info26 = load %sParserInfo*, %sParserInfo** %46, align 8
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %48 = bitcast i8* %47 to %vector__sVarTablep**
  %vtables_before27 = load %vector__sVarTablep*, %vector__sVarTablep** %48, align 8
  %49 = getelementptr inbounds %sParserInfo, %sParserInfo* %info26, i32 0, i32 7
  store %vector__sVarTablep* %vtables_before27, %vector__sVarTablep** %49, align 8
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %51 = bitcast i8* %50 to %sParserInfo**
  %info28 = load %sParserInfo*, %sParserInfo** %51, align 8
  %52 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %53 = bitcast i8* %52 to i32*
  %max_var_num29 = load i32, i32* %53, align 4
  %54 = getelementptr inbounds %sParserInfo, %sParserInfo* %info28, i32 0, i32 11
  store i32 %max_var_num29, i32* %54, align 4
  %55 = bitcast [8192 x i8*]* %lvtable to i8*
  %56 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %55, i64 65536)
  ret i1 false

cond_then_block33:                                ; preds = %cond_end23
  br label %cond_end34

cond_end34:                                       ; preds = %cond_then_block33, %cond_end23
  %57 = bitcast %vector__sVarTablep* %41 to i8*
  call void @ncfree(i8* %57)
  %info35 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %vtables_before36 = load %vector__sVarTablep*, %vector__sVarTablep** %vtables_before, align 8
  %58 = getelementptr inbounds %sParserInfo, %sParserInfo* %info35, i32 0, i32 7
  store %vector__sVarTablep* %vtables_before36, %vector__sVarTablep** %58, align 8
  %info37 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @expected_next_character(i8 125, %sParserInfo* %info37)
  %node38 = load %sCLNode**, %sCLNode*** %node2, align 8
  %num_params39 = load i32, i32* %num_params, align 4
  %node_block40 = load %sCLNodeBlock*, %sCLNodeBlock** %node_block, align 8
  %block_type41 = load %sCLType*, %sCLType** %block_type, align 8
  %info42 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %59 = bitcast [32 x %sCLParam]* %params to %sCLParam*
  %60 = call %sCLNode* @sNodeTree_create_lambda(i32 %num_params39, %sCLParam* %59, %sCLNodeBlock* %node_block40, %sCLType* %block_type41, %sParserInfo* %info42)
  store %sCLNode* %60, %sCLNode** %node38, align 8
  %61 = bitcast [8192 x i8*]* %lvtable to i8*
  %62 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %61, i64 65536)
  ret i1 true
}

define %vector__sVarTablep* @"initialize_sVarTablep12_src/parser"(%vector__sVarTablep* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sVarTablep*
  store %vector__sVarTablep* %self, %vector__sVarTablep** %self2, align 8
  %2 = bitcast %vector__sVarTablep** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %self3 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %3 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self3, i32 0, i32 2
  store i32 16, i32* %3, align 4
  %self4 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %4 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self4, i32 0, i32 1
  store i32 0, i32* %4, align 4
  %self5 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %self6 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %5 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self6, i32 0, i32 2
  %6 = load i32, i32* %5, align 4
  %sext14 = zext i32 %6 to i64
  %7 = call i8* @nccalloc(i64 %sext14, i64 8)
  %8 = bitcast i8* %7 to %sVarTable**
  %9 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self5, i32 0, i32 0
  store %sVarTable** %8, %sVarTable*** %9, align 8
  %self7 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret %vector__sVarTablep* %self7
}

define void @"finalize_sVarTablep13_src/parser"(%vector__sVarTablep* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sVarTablep*
  store %vector__sVarTablep* %self, %vector__sVarTablep** %self2, align 8
  %2 = bitcast %vector__sVarTablep** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %self3 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %eqtmpX = icmp eq %vector__sVarTablep* %self3, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %3 = bitcast [8192 x i8*]* %lvtable to i8*
  %4 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %3, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  br i1 true, label %cond_jump_then4, label %cond_end5

cond_jump_then4:                                  ; preds = %cond_end
  %i = alloca i32
  %5 = bitcast i32* %i to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

cond_end5:                                        ; preds = %cond_end_block, %cond_end
  %self15 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %6 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self15, i32 0, i32 0
  %7 = load %sVarTable**, %sVarTable*** %6, align 8
  %8 = load %sVarTable**, %sVarTable*** %6, align 8
  %9 = bitcast %sVarTable** %8 to i8*
  call void @ncfree(i8* %9)
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret void

loop_top_block:                                   ; preds = %cond_end11, %cond_jump_then4
  %i6 = load i32, i32* %i, align 4
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %13 = bitcast i8* %12 to %vector__sVarTablep**
  %self7 = load %vector__sVarTablep*, %vector__sVarTablep** %13, align 8
  %14 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self7, i32 0, i32 1
  %15 = load i32, i32* %14, align 4
  %letmp = icmp slt i32 %i6, %15
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %17 = bitcast i8* %16 to %vector__sVarTablep**
  %self8 = load %vector__sVarTablep*, %vector__sVarTablep** %17, align 8
  %18 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self8, i32 0, i32 0
  %19 = load %sVarTable**, %sVarTable*** %18, align 8
  %i9 = load i32, i32* %i, align 4
  %element_addressB = getelementptr %sVarTable*, %sVarTable** %19, i32 %i9
  %element = load %sVarTable*, %sVarTable** %element_addressB, align 8
  %20 = load %sVarTable*, %sVarTable** %element_addressB, align 8
  %21 = ptrtoint %sVarTable* %20 to i64
  %22 = icmp ne i64 %21, 0
  br i1 %22, label %cond_then_block10, label %cond_end11

cond_end_block:                                   ; preds = %loop_top_block
  br label %cond_end5

cond_then_block10:                                ; preds = %cond_then_block
  %23 = getelementptr inbounds %sVarTable, %sVarTable* %20, i32 0, i32 0
  %24 = load %map__charp_sVarp*, %map__charp_sVarp** %23, align 8
  call void @"finalize_charp_sVarp14_src/parser"(%map__charp_sVarp* %24)
  %25 = ptrtoint %map__charp_sVarp* %24 to i64
  %26 = icmp ne i64 %25, 0
  br i1 %26, label %cond_then_block12, label %cond_end13

cond_end11:                                       ; preds = %cond_end13, %cond_then_block
  %27 = bitcast %sVarTable* %20 to i8*
  call void @ncfree(i8* %27)
  %i14 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i14, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_then_block12:                                ; preds = %cond_then_block10
  br label %cond_end13

cond_end13:                                       ; preds = %cond_then_block12, %cond_then_block10
  %28 = bitcast %map__charp_sVarp* %24 to i8*
  call void @ncfree(i8* %28)
  br label %cond_end11
}

define void @"finalize_charp_sVarp14_src/parser"(%map__charp_sVarp* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_sVarp*
  store %map__charp_sVarp* %self, %map__charp_sVarp** %self2, align 8
  %2 = bitcast %map__charp_sVarp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %self3 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %eqtmpX = icmp eq %map__charp_sVarp* %self3, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %3 = bitcast [8192 x i8*]* %lvtable to i8*
  %4 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %3, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  %i = alloca i32
  %5 = bitcast i32* %i to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end9, %cond_end
  %i4 = load i32, i32* %i, align 4
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %7 = bitcast i8* %6 to %map__charp_sVarp**
  %self5 = load %map__charp_sVarp*, %map__charp_sVarp** %7, align 8
  %8 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self5, i32 0, i32 3
  %9 = load i32, i32* %8, align 4
  %letmp = icmp slt i32 %i4, %9
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %11 = bitcast i8* %10 to %map__charp_sVarp**
  %self6 = load %map__charp_sVarp*, %map__charp_sVarp** %11, align 8
  %12 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self6, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %i7 = load i32, i32* %i, align 4
  %element_addressB = getelementptr i1, i1* %13, i32 %i7
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then8, label %cond_end9

cond_end_block:                                   ; preds = %loop_top_block
  %self21 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %14 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self21, i32 0, i32 2
  %15 = load %sVar**, %sVar*** %14, align 8
  %16 = load %sVar**, %sVar*** %14, align 8
  %17 = bitcast %sVar** %16 to i8*
  call void @ncfree(i8* %17)
  %i22 = alloca i32
  %18 = bitcast i32* %i22 to i8*
  store i8* %18, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store i32 0, i32* %i22, align 4
  br label %loop_top_block23

cond_jump_then8:                                  ; preds = %cond_then_block
  br i1 false, label %cond_jump_then10, label %cond_end11

cond_end9:                                        ; preds = %cond_end11, %cond_then_block
  %i20 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i20, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_jump_then10:                                 ; preds = %cond_jump_then8
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %20 = bitcast i8* %19 to %map__charp_sVarp**
  %self12 = load %map__charp_sVarp*, %map__charp_sVarp** %20, align 8
  %21 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self12, i32 0, i32 2
  %22 = load %sVar**, %sVar*** %21, align 8
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %24 = bitcast i8* %23 to i32*
  %i13 = load i32, i32* %24, align 4
  %element_addressB14 = getelementptr %sVar*, %sVar** %22, i32 %i13
  %element15 = load %sVar*, %sVar** %element_addressB14, align 8
  %25 = load %sVar*, %sVar** %element_addressB14, align 8
  %26 = ptrtoint %sVar* %25 to i64
  %27 = icmp ne i64 %26, 0
  br i1 %27, label %cond_then_block16, label %cond_end17

cond_end11:                                       ; preds = %cond_end17, %cond_jump_then8
  br label %cond_end9

cond_then_block16:                                ; preds = %cond_jump_then10
  %28 = getelementptr inbounds %sVar, %sVar* %25, i32 0, i32 0
  %29 = load i8*, i8** %28, align 8
  %30 = ptrtoint i8* %29 to i64
  %31 = icmp ne i64 %30, 0
  br i1 %31, label %cond_then_block18, label %cond_end19

cond_end17:                                       ; preds = %cond_end19, %cond_jump_then10
  %32 = bitcast %sVar* %25 to i8*
  call void @ncfree(i8* %32)
  br label %cond_end11

cond_then_block18:                                ; preds = %cond_then_block16
  br label %cond_end19

cond_end19:                                       ; preds = %cond_then_block18, %cond_then_block16
  call void @ncfree(i8* %29)
  br label %cond_end17

loop_top_block23:                                 ; preds = %cond_end34, %cond_end_block
  %i24 = load i32, i32* %i22, align 4
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %34 = bitcast i8* %33 to %map__charp_sVarp**
  %self25 = load %map__charp_sVarp*, %map__charp_sVarp** %34, align 8
  %35 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self25, i32 0, i32 3
  %36 = load i32, i32* %35, align 4
  %letmp26 = icmp slt i32 %i24, %36
  br i1 %letmp26, label %cond_then_block27, label %cond_end_block28

cond_then_block27:                                ; preds = %loop_top_block23
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %38 = bitcast i8* %37 to %map__charp_sVarp**
  %self29 = load %map__charp_sVarp*, %map__charp_sVarp** %38, align 8
  %39 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self29, i32 0, i32 1
  %40 = load i1*, i1** %39, align 8
  %i30 = load i32, i32* %i22, align 4
  %element_addressB31 = getelementptr i1, i1* %40, i32 %i30
  %element32 = load i1, i1* %element_addressB31, align 1
  br i1 %element32, label %cond_jump_then33, label %cond_end34

cond_end_block28:                                 ; preds = %loop_top_block23
  %self46 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %41 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self46, i32 0, i32 0
  %42 = load i8**, i8*** %41, align 8
  %43 = load i8**, i8*** %41, align 8
  %44 = bitcast i8** %43 to i8*
  call void @ncfree(i8* %44)
  %self47 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %45 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self47, i32 0, i32 1
  %46 = load i1*, i1** %45, align 8
  %47 = load i1*, i1** %45, align 8
  %48 = ptrtoint i1* %47 to i64
  %49 = icmp ne i64 %48, 0
  br i1 %49, label %cond_then_block48, label %cond_end49

cond_jump_then33:                                 ; preds = %cond_then_block27
  br i1 true, label %cond_jump_then35, label %cond_end36

cond_end34:                                       ; preds = %cond_end36, %cond_then_block27
  %i43 = load i32, i32* %i22, align 4
  %addtmp44 = add nsw i32 %i43, 1
  store i32 %addtmp44, i32* %i22, align 4
  %subttmp45 = sub nsw i32 %addtmp44, 1
  br label %loop_top_block23

cond_jump_then35:                                 ; preds = %cond_jump_then33
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %51 = bitcast i8* %50 to %map__charp_sVarp**
  %self37 = load %map__charp_sVarp*, %map__charp_sVarp** %51, align 8
  %52 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self37, i32 0, i32 0
  %53 = load i8**, i8*** %52, align 8
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %55 = bitcast i8* %54 to i32*
  %i38 = load i32, i32* %55, align 4
  %element_addressB39 = getelementptr i8*, i8** %53, i32 %i38
  %element40 = load i8*, i8** %element_addressB39, align 8
  %56 = load i8*, i8** %element_addressB39, align 8
  %57 = ptrtoint i8* %56 to i64
  %58 = icmp ne i64 %57, 0
  br i1 %58, label %cond_then_block41, label %cond_end42

cond_end36:                                       ; preds = %cond_end42, %cond_jump_then33
  br label %cond_end34

cond_then_block41:                                ; preds = %cond_jump_then35
  br label %cond_end42

cond_end42:                                       ; preds = %cond_then_block41, %cond_jump_then35
  call void @ncfree(i8* %56)
  br label %cond_end36

cond_then_block48:                                ; preds = %cond_end_block28
  br label %cond_end49

cond_end49:                                       ; preds = %cond_then_block48, %cond_end_block28
  %59 = bitcast i1* %47 to i8*
  call void @ncfree(i8* %59)
  %60 = bitcast [8192 x i8*]* %lvtable to i8*
  %61 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %60, i64 65536)
  ret void
}

define void @"finalize_sVarTablep15_src/parser"(%vector__sVarTablep* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sVarTablep*
  store %vector__sVarTablep* %self, %vector__sVarTablep** %self2, align 8
  %2 = bitcast %vector__sVarTablep** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %self3 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %eqtmpX = icmp eq %vector__sVarTablep* %self3, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %3 = bitcast [8192 x i8*]* %lvtable to i8*
  %4 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %3, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  br i1 true, label %cond_jump_then4, label %cond_end5

cond_jump_then4:                                  ; preds = %cond_end
  %i = alloca i32
  %5 = bitcast i32* %i to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

cond_end5:                                        ; preds = %cond_end_block, %cond_end
  %self15 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %6 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self15, i32 0, i32 0
  %7 = load %sVarTable**, %sVarTable*** %6, align 8
  %8 = load %sVarTable**, %sVarTable*** %6, align 8
  %9 = bitcast %sVarTable** %8 to i8*
  call void @ncfree(i8* %9)
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret void

loop_top_block:                                   ; preds = %cond_end11, %cond_jump_then4
  %i6 = load i32, i32* %i, align 4
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %13 = bitcast i8* %12 to %vector__sVarTablep**
  %self7 = load %vector__sVarTablep*, %vector__sVarTablep** %13, align 8
  %14 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self7, i32 0, i32 1
  %15 = load i32, i32* %14, align 4
  %letmp = icmp slt i32 %i6, %15
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %17 = bitcast i8* %16 to %vector__sVarTablep**
  %self8 = load %vector__sVarTablep*, %vector__sVarTablep** %17, align 8
  %18 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self8, i32 0, i32 0
  %19 = load %sVarTable**, %sVarTable*** %18, align 8
  %i9 = load i32, i32* %i, align 4
  %element_addressB = getelementptr %sVarTable*, %sVarTable** %19, i32 %i9
  %element = load %sVarTable*, %sVarTable** %element_addressB, align 8
  %20 = load %sVarTable*, %sVarTable** %element_addressB, align 8
  %21 = ptrtoint %sVarTable* %20 to i64
  %22 = icmp ne i64 %21, 0
  br i1 %22, label %cond_then_block10, label %cond_end11

cond_end_block:                                   ; preds = %loop_top_block
  br label %cond_end5

cond_then_block10:                                ; preds = %cond_then_block
  %23 = getelementptr inbounds %sVarTable, %sVarTable* %20, i32 0, i32 0
  %24 = load %map__charp_sVarp*, %map__charp_sVarp** %23, align 8
  call void @"finalize_charp_sVarp16_src/parser"(%map__charp_sVarp* %24)
  %25 = ptrtoint %map__charp_sVarp* %24 to i64
  %26 = icmp ne i64 %25, 0
  br i1 %26, label %cond_then_block12, label %cond_end13

cond_end11:                                       ; preds = %cond_end13, %cond_then_block
  %27 = bitcast %sVarTable* %20 to i8*
  call void @ncfree(i8* %27)
  %i14 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i14, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_then_block12:                                ; preds = %cond_then_block10
  br label %cond_end13

cond_end13:                                       ; preds = %cond_then_block12, %cond_then_block10
  %28 = bitcast %map__charp_sVarp* %24 to i8*
  call void @ncfree(i8* %28)
  br label %cond_end11
}

define void @"finalize_charp_sVarp16_src/parser"(%map__charp_sVarp* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_sVarp*
  store %map__charp_sVarp* %self, %map__charp_sVarp** %self2, align 8
  %2 = bitcast %map__charp_sVarp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %self3 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %eqtmpX = icmp eq %map__charp_sVarp* %self3, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %3 = bitcast [8192 x i8*]* %lvtable to i8*
  %4 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %3, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  %i = alloca i32
  %5 = bitcast i32* %i to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end9, %cond_end
  %i4 = load i32, i32* %i, align 4
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %7 = bitcast i8* %6 to %map__charp_sVarp**
  %self5 = load %map__charp_sVarp*, %map__charp_sVarp** %7, align 8
  %8 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self5, i32 0, i32 3
  %9 = load i32, i32* %8, align 4
  %letmp = icmp slt i32 %i4, %9
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %11 = bitcast i8* %10 to %map__charp_sVarp**
  %self6 = load %map__charp_sVarp*, %map__charp_sVarp** %11, align 8
  %12 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self6, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %i7 = load i32, i32* %i, align 4
  %element_addressB = getelementptr i1, i1* %13, i32 %i7
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then8, label %cond_end9

cond_end_block:                                   ; preds = %loop_top_block
  %self21 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %14 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self21, i32 0, i32 2
  %15 = load %sVar**, %sVar*** %14, align 8
  %16 = load %sVar**, %sVar*** %14, align 8
  %17 = bitcast %sVar** %16 to i8*
  call void @ncfree(i8* %17)
  %i22 = alloca i32
  %18 = bitcast i32* %i22 to i8*
  store i8* %18, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store i32 0, i32* %i22, align 4
  br label %loop_top_block23

cond_jump_then8:                                  ; preds = %cond_then_block
  br i1 false, label %cond_jump_then10, label %cond_end11

cond_end9:                                        ; preds = %cond_end11, %cond_then_block
  %i20 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i20, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_jump_then10:                                 ; preds = %cond_jump_then8
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %20 = bitcast i8* %19 to %map__charp_sVarp**
  %self12 = load %map__charp_sVarp*, %map__charp_sVarp** %20, align 8
  %21 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self12, i32 0, i32 2
  %22 = load %sVar**, %sVar*** %21, align 8
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %24 = bitcast i8* %23 to i32*
  %i13 = load i32, i32* %24, align 4
  %element_addressB14 = getelementptr %sVar*, %sVar** %22, i32 %i13
  %element15 = load %sVar*, %sVar** %element_addressB14, align 8
  %25 = load %sVar*, %sVar** %element_addressB14, align 8
  %26 = ptrtoint %sVar* %25 to i64
  %27 = icmp ne i64 %26, 0
  br i1 %27, label %cond_then_block16, label %cond_end17

cond_end11:                                       ; preds = %cond_end17, %cond_jump_then8
  br label %cond_end9

cond_then_block16:                                ; preds = %cond_jump_then10
  %28 = getelementptr inbounds %sVar, %sVar* %25, i32 0, i32 0
  %29 = load i8*, i8** %28, align 8
  %30 = ptrtoint i8* %29 to i64
  %31 = icmp ne i64 %30, 0
  br i1 %31, label %cond_then_block18, label %cond_end19

cond_end17:                                       ; preds = %cond_end19, %cond_jump_then10
  %32 = bitcast %sVar* %25 to i8*
  call void @ncfree(i8* %32)
  br label %cond_end11

cond_then_block18:                                ; preds = %cond_then_block16
  br label %cond_end19

cond_end19:                                       ; preds = %cond_then_block18, %cond_then_block16
  call void @ncfree(i8* %29)
  br label %cond_end17

loop_top_block23:                                 ; preds = %cond_end34, %cond_end_block
  %i24 = load i32, i32* %i22, align 4
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %34 = bitcast i8* %33 to %map__charp_sVarp**
  %self25 = load %map__charp_sVarp*, %map__charp_sVarp** %34, align 8
  %35 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self25, i32 0, i32 3
  %36 = load i32, i32* %35, align 4
  %letmp26 = icmp slt i32 %i24, %36
  br i1 %letmp26, label %cond_then_block27, label %cond_end_block28

cond_then_block27:                                ; preds = %loop_top_block23
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %38 = bitcast i8* %37 to %map__charp_sVarp**
  %self29 = load %map__charp_sVarp*, %map__charp_sVarp** %38, align 8
  %39 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self29, i32 0, i32 1
  %40 = load i1*, i1** %39, align 8
  %i30 = load i32, i32* %i22, align 4
  %element_addressB31 = getelementptr i1, i1* %40, i32 %i30
  %element32 = load i1, i1* %element_addressB31, align 1
  br i1 %element32, label %cond_jump_then33, label %cond_end34

cond_end_block28:                                 ; preds = %loop_top_block23
  %self46 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %41 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self46, i32 0, i32 0
  %42 = load i8**, i8*** %41, align 8
  %43 = load i8**, i8*** %41, align 8
  %44 = bitcast i8** %43 to i8*
  call void @ncfree(i8* %44)
  %self47 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %45 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self47, i32 0, i32 1
  %46 = load i1*, i1** %45, align 8
  %47 = load i1*, i1** %45, align 8
  %48 = ptrtoint i1* %47 to i64
  %49 = icmp ne i64 %48, 0
  br i1 %49, label %cond_then_block48, label %cond_end49

cond_jump_then33:                                 ; preds = %cond_then_block27
  br i1 true, label %cond_jump_then35, label %cond_end36

cond_end34:                                       ; preds = %cond_end36, %cond_then_block27
  %i43 = load i32, i32* %i22, align 4
  %addtmp44 = add nsw i32 %i43, 1
  store i32 %addtmp44, i32* %i22, align 4
  %subttmp45 = sub nsw i32 %addtmp44, 1
  br label %loop_top_block23

cond_jump_then35:                                 ; preds = %cond_jump_then33
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %51 = bitcast i8* %50 to %map__charp_sVarp**
  %self37 = load %map__charp_sVarp*, %map__charp_sVarp** %51, align 8
  %52 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self37, i32 0, i32 0
  %53 = load i8**, i8*** %52, align 8
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %55 = bitcast i8* %54 to i32*
  %i38 = load i32, i32* %55, align 4
  %element_addressB39 = getelementptr i8*, i8** %53, i32 %i38
  %element40 = load i8*, i8** %element_addressB39, align 8
  %56 = load i8*, i8** %element_addressB39, align 8
  %57 = ptrtoint i8* %56 to i64
  %58 = icmp ne i64 %57, 0
  br i1 %58, label %cond_then_block41, label %cond_end42

cond_end36:                                       ; preds = %cond_end42, %cond_jump_then33
  br label %cond_end34

cond_then_block41:                                ; preds = %cond_jump_then35
  br label %cond_end42

cond_end42:                                       ; preds = %cond_then_block41, %cond_jump_then35
  call void @ncfree(i8* %56)
  br label %cond_end36

cond_then_block48:                                ; preds = %cond_end_block28
  br label %cond_end49

cond_end49:                                       ; preds = %cond_then_block48, %cond_end_block28
  %59 = bitcast i1* %47 to i8*
  call void @ncfree(i8* %59)
  %60 = bitcast [8192 x i8*]* %lvtable to i8*
  %61 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %60, i64 65536)
  ret void
}

define internal i1 @get_block_text(%buffer* %buf, i8 %begin, i8 %end, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %buf2 = alloca %buffer*
  store %buffer* %buf, %buffer** %buf2, align 8
  %2 = bitcast %buffer** %buf2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %begin3 = alloca i8
  store i8 %begin, i8* %begin3, align 1
  store i8* %begin3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %end4 = alloca i8
  store i8 %end, i8* %end4, align 1
  store i8* %end4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %info5 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info5, align 8
  %3 = bitcast %sParserInfo** %info5 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %dquort = alloca i1
  %4 = bitcast i1* %dquort to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i1 false, i1* %dquort, align 1
  %nest = alloca i32
  %5 = bitcast i32* %nest to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i32 0, i32* %nest, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %7 = bitcast i8* %6 to %sParserInfo**
  %info6 = load %sParserInfo*, %sParserInfo** %7, align 8
  %8 = getelementptr inbounds %sParserInfo, %sParserInfo* %info6, i32 0, i32 4
  %9 = load i8*, i8** %8, align 8
  %derefference_value = load i8, i8* %9, align 8
  %eqtmpX = icmp eq i8 %derefference_value, 0
  br i1 %eqtmpX, label %cond_jump_then, label %"cond_jump_elif0\0A"

cond_end_block:                                   ; preds = %cond_jump_then133, %cond_jump_then, %loop_top_block
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret i1 true

cond_jump_then:                                   ; preds = %cond_then_block
  br label %cond_end_block

"cond_jump_elif0\0A":                             ; preds = %cond_then_block
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %13 = bitcast i8* %12 to i1*
  %dquort7 = load i1, i1* %13, align 1
  store i1 %dquort7, i1* %andand_result_var, align 1
  br i1 %dquort7, label %cond_jump_then8, label %cond_jump_end

"cond_jump_elif_then0\0A":                        ; preds = %cond_jump_end
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %15 = bitcast i8* %14 to %buffer**
  %buf12 = load %buffer*, %buffer** %15, align 8
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %17 = bitcast i8* %16 to %sParserInfo**
  %info13 = load %sParserInfo*, %sParserInfo** %17, align 8
  %18 = getelementptr inbounds %sParserInfo, %sParserInfo* %info13, i32 0, i32 4
  %19 = load i8*, i8** %18, align 8
  %derefference_value14 = load i8, i8* %19, align 8
  call void @buffer_append_char(%buffer* %buf12, i8 %derefference_value14)
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %21 = bitcast i8* %20 to %sParserInfo**
  %info15 = load %sParserInfo*, %sParserInfo** %21, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %23 = bitcast i8* %22 to %sParserInfo**
  %info16 = load %sParserInfo*, %sParserInfo** %23, align 8
  %24 = getelementptr inbounds %sParserInfo, %sParserInfo* %info16, i32 0, i32 4
  %25 = load i8*, i8** %24, align 8
  %26 = ptrtoint i8* %25 to i64
  %addtmp = add nsw i64 %26, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %27 = getelementptr inbounds %sParserInfo, %sParserInfo* %info15, i32 0, i32 4
  store i8* %intToPtr2, i8** %27, align 8
  %28 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %28, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  %29 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %30 = bitcast i8* %29 to %sParserInfo**
  %info17 = load %sParserInfo*, %sParserInfo** %30, align 8
  %31 = getelementptr inbounds %sParserInfo, %sParserInfo* %info17, i32 0, i32 4
  %32 = load i8*, i8** %31, align 8
  %derefference_value18 = load i8, i8* %32, align 8
  %eqtmpX19 = icmp eq i8 %derefference_value18, 10
  br i1 %eqtmpX19, label %cond_jump_then20, label %cond_end21

"cond_jump_elif1\0A":                             ; preds = %cond_jump_end
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %34 = bitcast i8* %33 to i1*
  %dquort34 = load i1, i1* %34, align 1
  %LOGICAL_DIANEAL = icmp eq i1 %dquort34, false
  store i1 %LOGICAL_DIANEAL, i1* %andand_result_var, align 1
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then35, label %cond_jump_end36

"cond_jump_elif_then1\0A":                        ; preds = %cond_jump_end36
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %36 = bitcast i8* %35 to %buffer**
  %buf42 = load %buffer*, %buffer** %36, align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %38 = bitcast i8* %37 to %sParserInfo**
  %info43 = load %sParserInfo*, %sParserInfo** %38, align 8
  %39 = getelementptr inbounds %sParserInfo, %sParserInfo* %info43, i32 0, i32 4
  %40 = load i8*, i8** %39, align 8
  %derefference_value44 = load i8, i8* %40, align 8
  call void @buffer_append_char(%buffer* %buf42, i8 %derefference_value44)
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %42 = bitcast i8* %41 to %sParserInfo**
  %info45 = load %sParserInfo*, %sParserInfo** %42, align 8
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %44 = bitcast i8* %43 to %sParserInfo**
  %info46 = load %sParserInfo*, %sParserInfo** %44, align 8
  %45 = getelementptr inbounds %sParserInfo, %sParserInfo* %info46, i32 0, i32 4
  %46 = load i8*, i8** %45, align 8
  %47 = ptrtoint i8* %46 to i64
  %addtmp47 = add nsw i64 %47, 1
  %intToPtr248 = inttoptr i64 %addtmp47 to i8*
  %48 = getelementptr inbounds %sParserInfo, %sParserInfo* %info45, i32 0, i32 4
  store i8* %intToPtr248, i8** %48, align 8
  %49 = ptrtoint i8* %intToPtr248 to i64
  %subtmp49 = sub nsw i64 %49, 1
  %IntTOPtr4b50 = inttoptr i64 %subtmp49 to i8*
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %51 = bitcast i8* %50 to %sParserInfo**
  %info51 = load %sParserInfo*, %sParserInfo** %51, align 8
  %52 = getelementptr inbounds %sParserInfo, %sParserInfo* %info51, i32 0, i32 4
  %53 = load i8*, i8** %52, align 8
  %derefference_value52 = load i8, i8* %53, align 8
  %eqtmpX53 = icmp eq i8 %derefference_value52, 10
  br i1 %eqtmpX53, label %cond_jump_then54, label %cond_end55

"cond_jump_elif2\0A":                             ; preds = %cond_jump_end36
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %55 = bitcast i8* %54 to %sParserInfo**
  %info69 = load %sParserInfo*, %sParserInfo** %55, align 8
  %56 = getelementptr inbounds %sParserInfo, %sParserInfo* %info69, i32 0, i32 4
  %57 = load i8*, i8** %56, align 8
  %derefference_value70 = load i8, i8* %57, align 8
  %eqtmpX71 = icmp eq i8 %derefference_value70, 34
  br i1 %eqtmpX71, label %"cond_jump_elif_then2\0A", label %"cond_jump_elif3\0A"

"cond_jump_elif_then2\0A":                        ; preds = %"cond_jump_elif2\0A"
  %58 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %59 = bitcast i8* %58 to i1*
  %dquort72 = load i1, i1* %59, align 1
  %LOGICAL_DIANEAL73 = icmp eq i1 %dquort72, false
  %60 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %61 = bitcast i8* %60 to i1*
  store i1 %LOGICAL_DIANEAL73, i1* %61, align 1
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %63 = bitcast i8* %62 to %buffer**
  %buf74 = load %buffer*, %buffer** %63, align 8
  %64 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %65 = bitcast i8* %64 to %sParserInfo**
  %info75 = load %sParserInfo*, %sParserInfo** %65, align 8
  %66 = getelementptr inbounds %sParserInfo, %sParserInfo* %info75, i32 0, i32 4
  %67 = load i8*, i8** %66, align 8
  %derefference_value76 = load i8, i8* %67, align 8
  call void @buffer_append_char(%buffer* %buf74, i8 %derefference_value76)
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %69 = bitcast i8* %68 to %sParserInfo**
  %info77 = load %sParserInfo*, %sParserInfo** %69, align 8
  %70 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %71 = bitcast i8* %70 to %sParserInfo**
  %info78 = load %sParserInfo*, %sParserInfo** %71, align 8
  %72 = getelementptr inbounds %sParserInfo, %sParserInfo* %info78, i32 0, i32 4
  %73 = load i8*, i8** %72, align 8
  %74 = ptrtoint i8* %73 to i64
  %addtmp79 = add nsw i64 %74, 1
  %intToPtr280 = inttoptr i64 %addtmp79 to i8*
  %75 = getelementptr inbounds %sParserInfo, %sParserInfo* %info77, i32 0, i32 4
  store i8* %intToPtr280, i8** %75, align 8
  %76 = ptrtoint i8* %intToPtr280 to i64
  %subtmp81 = sub nsw i64 %76, 1
  %IntTOPtr4b82 = inttoptr i64 %subtmp81 to i8*
  br label %cond_end

"cond_jump_elif3\0A":                             ; preds = %"cond_jump_elif2\0A"
  %77 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %78 = bitcast i8* %77 to i1*
  %dquort83 = load i1, i1* %78, align 1
  br i1 %dquort83, label %"cond_jump_elif_then3\0A", label %"cond_jump_elif4\0A"

"cond_jump_elif_then3\0A":                        ; preds = %"cond_jump_elif3\0A"
  %79 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %80 = bitcast i8* %79 to %sParserInfo**
  %info84 = load %sParserInfo*, %sParserInfo** %80, align 8
  %81 = getelementptr inbounds %sParserInfo, %sParserInfo* %info84, i32 0, i32 4
  %82 = load i8*, i8** %81, align 8
  %derefference_value85 = load i8, i8* %82, align 8
  %eqtmpX86 = icmp eq i8 %derefference_value85, 10
  br i1 %eqtmpX86, label %cond_jump_then87, label %cond_end88

"cond_jump_elif4\0A":                             ; preds = %"cond_jump_elif3\0A"
  %83 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %84 = bitcast i8* %83 to %sParserInfo**
  %info102 = load %sParserInfo*, %sParserInfo** %84, align 8
  %85 = getelementptr inbounds %sParserInfo, %sParserInfo* %info102, i32 0, i32 4
  %86 = load i8*, i8** %85, align 8
  %derefference_value103 = load i8, i8* %86, align 8
  %87 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %begin104 = load i8, i8* %87, align 1
  %eqtmpX105 = icmp eq i8 %derefference_value103, %begin104
  br i1 %eqtmpX105, label %"cond_jump_elif_then4\0A", label %"cond_jump_elif5\0A"

"cond_jump_elif_then4\0A":                        ; preds = %"cond_jump_elif4\0A"
  %88 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %89 = bitcast i8* %88 to %buffer**
  %buf106 = load %buffer*, %buffer** %89, align 8
  %90 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %91 = bitcast i8* %90 to %sParserInfo**
  %info107 = load %sParserInfo*, %sParserInfo** %91, align 8
  %92 = getelementptr inbounds %sParserInfo, %sParserInfo* %info107, i32 0, i32 4
  %93 = load i8*, i8** %92, align 8
  %derefference_value108 = load i8, i8* %93, align 8
  call void @buffer_append_char(%buffer* %buf106, i8 %derefference_value108)
  %94 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %95 = bitcast i8* %94 to %sParserInfo**
  %info109 = load %sParserInfo*, %sParserInfo** %95, align 8
  %96 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %97 = bitcast i8* %96 to %sParserInfo**
  %info110 = load %sParserInfo*, %sParserInfo** %97, align 8
  %98 = getelementptr inbounds %sParserInfo, %sParserInfo* %info110, i32 0, i32 4
  %99 = load i8*, i8** %98, align 8
  %100 = ptrtoint i8* %99 to i64
  %addtmp111 = add nsw i64 %100, 1
  %intToPtr2112 = inttoptr i64 %addtmp111 to i8*
  %101 = getelementptr inbounds %sParserInfo, %sParserInfo* %info109, i32 0, i32 4
  store i8* %intToPtr2112, i8** %101, align 8
  %102 = ptrtoint i8* %intToPtr2112 to i64
  %subtmp113 = sub nsw i64 %102, 1
  %IntTOPtr4b114 = inttoptr i64 %subtmp113 to i8*
  %103 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %104 = bitcast i8* %103 to i32*
  %nest115 = load i32, i32* %104, align 4
  %addtmp116 = add nsw i32 %nest115, 1
  %105 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %106 = bitcast i8* %105 to i32*
  store i32 %addtmp116, i32* %106, align 4
  %subttmp117 = sub nsw i32 %addtmp116, 1
  br label %cond_end

"cond_jump_elif5\0A":                             ; preds = %"cond_jump_elif4\0A"
  %107 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %108 = bitcast i8* %107 to %sParserInfo**
  %info118 = load %sParserInfo*, %sParserInfo** %108, align 8
  %109 = getelementptr inbounds %sParserInfo, %sParserInfo* %info118, i32 0, i32 4
  %110 = load i8*, i8** %109, align 8
  %derefference_value119 = load i8, i8* %110, align 8
  %111 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %end120 = load i8, i8* %111, align 1
  %eqtmpX121 = icmp eq i8 %derefference_value119, %end120
  br i1 %eqtmpX121, label %"cond_jump_elif_then5\0A", label %cond_else_block

"cond_jump_elif_then5\0A":                        ; preds = %"cond_jump_elif5\0A"
  %112 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %113 = bitcast i8* %112 to %buffer**
  %buf122 = load %buffer*, %buffer** %113, align 8
  %114 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %115 = bitcast i8* %114 to %sParserInfo**
  %info123 = load %sParserInfo*, %sParserInfo** %115, align 8
  %116 = getelementptr inbounds %sParserInfo, %sParserInfo* %info123, i32 0, i32 4
  %117 = load i8*, i8** %116, align 8
  %derefference_value124 = load i8, i8* %117, align 8
  call void @buffer_append_char(%buffer* %buf122, i8 %derefference_value124)
  %118 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %119 = bitcast i8* %118 to %sParserInfo**
  %info125 = load %sParserInfo*, %sParserInfo** %119, align 8
  %120 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %121 = bitcast i8* %120 to %sParserInfo**
  %info126 = load %sParserInfo*, %sParserInfo** %121, align 8
  %122 = getelementptr inbounds %sParserInfo, %sParserInfo* %info126, i32 0, i32 4
  %123 = load i8*, i8** %122, align 8
  %124 = ptrtoint i8* %123 to i64
  %addtmp127 = add nsw i64 %124, 1
  %intToPtr2128 = inttoptr i64 %addtmp127 to i8*
  %125 = getelementptr inbounds %sParserInfo, %sParserInfo* %info125, i32 0, i32 4
  store i8* %intToPtr2128, i8** %125, align 8
  %126 = ptrtoint i8* %intToPtr2128 to i64
  %subtmp129 = sub nsw i64 %126, 1
  %IntTOPtr4b130 = inttoptr i64 %subtmp129 to i8*
  %127 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %128 = bitcast i8* %127 to i32*
  %nest131 = load i32, i32* %128, align 4
  %eqtmpX132 = icmp eq i32 %nest131, 0
  br i1 %eqtmpX132, label %cond_jump_then133, label %cond_end134

cond_else_block:                                  ; preds = %"cond_jump_elif5\0A"
  %129 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %130 = bitcast i8* %129 to %sParserInfo**
  %info140 = load %sParserInfo*, %sParserInfo** %130, align 8
  %131 = getelementptr inbounds %sParserInfo, %sParserInfo* %info140, i32 0, i32 4
  %132 = load i8*, i8** %131, align 8
  %derefference_value141 = load i8, i8* %132, align 8
  %eqtmpX142 = icmp eq i8 %derefference_value141, 10
  br i1 %eqtmpX142, label %cond_jump_then143, label %cond_end144

cond_end:                                         ; preds = %cond_end144, %cond_end134, %"cond_jump_elif_then4\0A", %cond_end88, %"cond_jump_elif_then2\0A", %cond_end55, %cond_end21, %after_break
  br label %loop_top_block

after_break:                                      ; No predecessors!
  br label %cond_end

cond_jump_then8:                                  ; preds = %"cond_jump_elif0\0A"
  %133 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %134 = bitcast i8* %133 to %sParserInfo**
  %info9 = load %sParserInfo*, %sParserInfo** %134, align 8
  %135 = getelementptr inbounds %sParserInfo, %sParserInfo* %info9, i32 0, i32 4
  %136 = load i8*, i8** %135, align 8
  %derefference_value10 = load i8, i8* %136, align 8
  %eqtmpX11 = icmp eq i8 %derefference_value10, 92
  %andand = and i1 %dquort7, %eqtmpX11
  store i1 %andand, i1* %andand_result_var, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then8, %"cond_jump_elif0\0A"
  %andand_result_value = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value, label %"cond_jump_elif_then0\0A", label %"cond_jump_elif1\0A"

cond_jump_then20:                                 ; preds = %"cond_jump_elif_then0\0A"
  %137 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %138 = bitcast i8* %137 to %sParserInfo**
  %info22 = load %sParserInfo*, %sParserInfo** %138, align 8
  %139 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %140 = bitcast i8* %139 to %sParserInfo**
  %info23 = load %sParserInfo*, %sParserInfo** %140, align 8
  %141 = getelementptr inbounds %sParserInfo, %sParserInfo* %info23, i32 0, i32 1
  %142 = load i32, i32* %141, align 4
  %addtmp24 = add nsw i32 %142, 1
  %143 = getelementptr inbounds %sParserInfo, %sParserInfo* %info22, i32 0, i32 1
  store i32 %addtmp24, i32* %143, align 4
  %subttmp = sub nsw i32 %addtmp24, 1
  br label %cond_end21

cond_end21:                                       ; preds = %cond_jump_then20, %"cond_jump_elif_then0\0A"
  %144 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %145 = bitcast i8* %144 to %buffer**
  %buf25 = load %buffer*, %buffer** %145, align 8
  %146 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %147 = bitcast i8* %146 to %sParserInfo**
  %info26 = load %sParserInfo*, %sParserInfo** %147, align 8
  %148 = getelementptr inbounds %sParserInfo, %sParserInfo* %info26, i32 0, i32 4
  %149 = load i8*, i8** %148, align 8
  %derefference_value27 = load i8, i8* %149, align 8
  call void @buffer_append_char(%buffer* %buf25, i8 %derefference_value27)
  %150 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %151 = bitcast i8* %150 to %sParserInfo**
  %info28 = load %sParserInfo*, %sParserInfo** %151, align 8
  %152 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %153 = bitcast i8* %152 to %sParserInfo**
  %info29 = load %sParserInfo*, %sParserInfo** %153, align 8
  %154 = getelementptr inbounds %sParserInfo, %sParserInfo* %info29, i32 0, i32 4
  %155 = load i8*, i8** %154, align 8
  %156 = ptrtoint i8* %155 to i64
  %addtmp30 = add nsw i64 %156, 1
  %intToPtr231 = inttoptr i64 %addtmp30 to i8*
  %157 = getelementptr inbounds %sParserInfo, %sParserInfo* %info28, i32 0, i32 4
  store i8* %intToPtr231, i8** %157, align 8
  %158 = ptrtoint i8* %intToPtr231 to i64
  %subtmp32 = sub nsw i64 %158, 1
  %IntTOPtr4b33 = inttoptr i64 %subtmp32 to i8*
  br label %cond_end

cond_jump_then35:                                 ; preds = %"cond_jump_elif1\0A"
  %159 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %160 = bitcast i8* %159 to %sParserInfo**
  %info37 = load %sParserInfo*, %sParserInfo** %160, align 8
  %161 = getelementptr inbounds %sParserInfo, %sParserInfo* %info37, i32 0, i32 4
  %162 = load i8*, i8** %161, align 8
  %derefference_value38 = load i8, i8* %162, align 8
  %eqtmpX39 = icmp eq i8 %derefference_value38, 39
  %andand40 = and i1 %LOGICAL_DIANEAL, %eqtmpX39
  store i1 %andand40, i1* %andand_result_var, align 1
  br label %cond_jump_end36

cond_jump_end36:                                  ; preds = %cond_jump_then35, %"cond_jump_elif1\0A"
  %andand_result_value41 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value41, label %"cond_jump_elif_then1\0A", label %"cond_jump_elif2\0A"

cond_jump_then54:                                 ; preds = %"cond_jump_elif_then1\0A"
  %163 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %164 = bitcast i8* %163 to %sParserInfo**
  %info56 = load %sParserInfo*, %sParserInfo** %164, align 8
  %165 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %166 = bitcast i8* %165 to %sParserInfo**
  %info57 = load %sParserInfo*, %sParserInfo** %166, align 8
  %167 = getelementptr inbounds %sParserInfo, %sParserInfo* %info57, i32 0, i32 1
  %168 = load i32, i32* %167, align 4
  %addtmp58 = add nsw i32 %168, 1
  %169 = getelementptr inbounds %sParserInfo, %sParserInfo* %info56, i32 0, i32 1
  store i32 %addtmp58, i32* %169, align 4
  %subttmp59 = sub nsw i32 %addtmp58, 1
  br label %cond_end55

cond_end55:                                       ; preds = %cond_jump_then54, %"cond_jump_elif_then1\0A"
  %170 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %171 = bitcast i8* %170 to %buffer**
  %buf60 = load %buffer*, %buffer** %171, align 8
  %172 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %173 = bitcast i8* %172 to %sParserInfo**
  %info61 = load %sParserInfo*, %sParserInfo** %173, align 8
  %174 = getelementptr inbounds %sParserInfo, %sParserInfo* %info61, i32 0, i32 4
  %175 = load i8*, i8** %174, align 8
  %derefference_value62 = load i8, i8* %175, align 8
  call void @buffer_append_char(%buffer* %buf60, i8 %derefference_value62)
  %176 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %177 = bitcast i8* %176 to %sParserInfo**
  %info63 = load %sParserInfo*, %sParserInfo** %177, align 8
  %178 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %179 = bitcast i8* %178 to %sParserInfo**
  %info64 = load %sParserInfo*, %sParserInfo** %179, align 8
  %180 = getelementptr inbounds %sParserInfo, %sParserInfo* %info64, i32 0, i32 4
  %181 = load i8*, i8** %180, align 8
  %182 = ptrtoint i8* %181 to i64
  %addtmp65 = add nsw i64 %182, 1
  %intToPtr266 = inttoptr i64 %addtmp65 to i8*
  %183 = getelementptr inbounds %sParserInfo, %sParserInfo* %info63, i32 0, i32 4
  store i8* %intToPtr266, i8** %183, align 8
  %184 = ptrtoint i8* %intToPtr266 to i64
  %subtmp67 = sub nsw i64 %184, 1
  %IntTOPtr4b68 = inttoptr i64 %subtmp67 to i8*
  br label %cond_end

cond_jump_then87:                                 ; preds = %"cond_jump_elif_then3\0A"
  %185 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %186 = bitcast i8* %185 to %sParserInfo**
  %info89 = load %sParserInfo*, %sParserInfo** %186, align 8
  %187 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %188 = bitcast i8* %187 to %sParserInfo**
  %info90 = load %sParserInfo*, %sParserInfo** %188, align 8
  %189 = getelementptr inbounds %sParserInfo, %sParserInfo* %info90, i32 0, i32 1
  %190 = load i32, i32* %189, align 4
  %addtmp91 = add nsw i32 %190, 1
  %191 = getelementptr inbounds %sParserInfo, %sParserInfo* %info89, i32 0, i32 1
  store i32 %addtmp91, i32* %191, align 4
  %subttmp92 = sub nsw i32 %addtmp91, 1
  br label %cond_end88

cond_end88:                                       ; preds = %cond_jump_then87, %"cond_jump_elif_then3\0A"
  %192 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %193 = bitcast i8* %192 to %buffer**
  %buf93 = load %buffer*, %buffer** %193, align 8
  %194 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %195 = bitcast i8* %194 to %sParserInfo**
  %info94 = load %sParserInfo*, %sParserInfo** %195, align 8
  %196 = getelementptr inbounds %sParserInfo, %sParserInfo* %info94, i32 0, i32 4
  %197 = load i8*, i8** %196, align 8
  %derefference_value95 = load i8, i8* %197, align 8
  call void @buffer_append_char(%buffer* %buf93, i8 %derefference_value95)
  %198 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %199 = bitcast i8* %198 to %sParserInfo**
  %info96 = load %sParserInfo*, %sParserInfo** %199, align 8
  %200 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %201 = bitcast i8* %200 to %sParserInfo**
  %info97 = load %sParserInfo*, %sParserInfo** %201, align 8
  %202 = getelementptr inbounds %sParserInfo, %sParserInfo* %info97, i32 0, i32 4
  %203 = load i8*, i8** %202, align 8
  %204 = ptrtoint i8* %203 to i64
  %addtmp98 = add nsw i64 %204, 1
  %intToPtr299 = inttoptr i64 %addtmp98 to i8*
  %205 = getelementptr inbounds %sParserInfo, %sParserInfo* %info96, i32 0, i32 4
  store i8* %intToPtr299, i8** %205, align 8
  %206 = ptrtoint i8* %intToPtr299 to i64
  %subtmp100 = sub nsw i64 %206, 1
  %IntTOPtr4b101 = inttoptr i64 %subtmp100 to i8*
  br label %cond_end

cond_jump_then133:                                ; preds = %"cond_jump_elif_then5\0A"
  %207 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %208 = bitcast i8* %207 to %sParserInfo**
  %info135 = load %sParserInfo*, %sParserInfo** %208, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info135)
  br label %cond_end_block

cond_end134:                                      ; preds = %after_break136, %"cond_jump_elif_then5\0A"
  %209 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %210 = bitcast i8* %209 to i32*
  %nest137 = load i32, i32* %210, align 4
  %subttmp138 = sub nsw i32 %nest137, 1
  %211 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %212 = bitcast i8* %211 to i32*
  store i32 %subttmp138, i32* %212, align 4
  %addtmp139 = add nsw i32 %subttmp138, 1
  br label %cond_end

after_break136:                                   ; No predecessors!
  br label %cond_end134

cond_jump_then143:                                ; preds = %cond_else_block
  %213 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %214 = bitcast i8* %213 to %sParserInfo**
  %info145 = load %sParserInfo*, %sParserInfo** %214, align 8
  %215 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %216 = bitcast i8* %215 to %sParserInfo**
  %info146 = load %sParserInfo*, %sParserInfo** %216, align 8
  %217 = getelementptr inbounds %sParserInfo, %sParserInfo* %info146, i32 0, i32 1
  %218 = load i32, i32* %217, align 4
  %addtmp147 = add nsw i32 %218, 1
  %219 = getelementptr inbounds %sParserInfo, %sParserInfo* %info145, i32 0, i32 1
  store i32 %addtmp147, i32* %219, align 4
  %subttmp148 = sub nsw i32 %addtmp147, 1
  br label %cond_end144

cond_end144:                                      ; preds = %cond_jump_then143, %cond_else_block
  %220 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %221 = bitcast i8* %220 to %buffer**
  %buf149 = load %buffer*, %buffer** %221, align 8
  %222 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %223 = bitcast i8* %222 to %sParserInfo**
  %info150 = load %sParserInfo*, %sParserInfo** %223, align 8
  %224 = getelementptr inbounds %sParserInfo, %sParserInfo* %info150, i32 0, i32 4
  %225 = load i8*, i8** %224, align 8
  %derefference_value151 = load i8, i8* %225, align 8
  call void @buffer_append_char(%buffer* %buf149, i8 %derefference_value151)
  %226 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %227 = bitcast i8* %226 to %sParserInfo**
  %info152 = load %sParserInfo*, %sParserInfo** %227, align 8
  %228 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %229 = bitcast i8* %228 to %sParserInfo**
  %info153 = load %sParserInfo*, %sParserInfo** %229, align 8
  %230 = getelementptr inbounds %sParserInfo, %sParserInfo* %info153, i32 0, i32 4
  %231 = load i8*, i8** %230, align 8
  %232 = ptrtoint i8* %231 to i64
  %addtmp154 = add nsw i64 %232, 1
  %intToPtr2155 = inttoptr i64 %addtmp154 to i8*
  %233 = getelementptr inbounds %sParserInfo, %sParserInfo* %info152, i32 0, i32 4
  store i8* %intToPtr2155, i8** %233, align 8
  %234 = ptrtoint i8* %intToPtr2155 to i64
  %subtmp156 = sub nsw i64 %234, 1
  %IntTOPtr4b157 = inttoptr i64 %subtmp156 to i8*
  br label %cond_end
}

define i1 @parse_class(%sCLNode** %node, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %node2 = alloca %sCLNode**
  store %sCLNode** %node, %sCLNode*** %node2, align 8
  %2 = bitcast %sCLNode*** %node2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %4 = call i8* @nccalloc(i64 1, i64 16)
  %5 = bitcast i8* %4 to %buffer*
  %6 = call %buffer* @buffer_initialize(%buffer* %5)
  %block_text = alloca %buffer*
  %7 = bitcast %buffer** %block_text to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %buffer* %6, %buffer** %block_text, align 8
  %block_text4 = load %buffer*, %buffer** %block_text, align 8
  call void @buffer_append_str(%buffer* %block_text4, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_string.15, i32 0, i32 0))
  %info5 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %8 = getelementptr inbounds %sParserInfo, %sParserInfo* %info5, i32 0, i32 1
  %9 = load i32, i32* %8, align 4
  %sline = alloca i32
  %10 = bitcast i32* %sline to i8*
  store i8* %10, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 %9, i32* %sline, align 4
  %info6 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %11 = call i8* @parse_word(%sParserInfo* %info6)
  %name = alloca i8*
  %12 = bitcast i8** %name to i8*
  store i8* %12, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i8* %11, i8** %name, align 8
  %block_text7 = load %buffer*, %buffer** %block_text, align 8
  %name8 = load i8*, i8** %name, align 8
  call void @buffer_append_str(%buffer* %block_text7, i8* %name8)
  %block_text9 = load %buffer*, %buffer** %block_text, align 8
  call void @buffer_append_char(%buffer* %block_text9, i8 32)
  %info10 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %13 = getelementptr inbounds %sParserInfo, %sParserInfo* %info10, i32 0, i32 4
  %14 = load i8*, i8** %13, align 8
  %derefference_value = load i8, i8* %14, align 8
  %eqtmpX = icmp eq i8 %derefference_value, 60
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  br label %loop_top_block

cond_end:                                         ; preds = %cond_end_block, %entry
  %info40 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %15 = getelementptr inbounds %sParserInfo, %sParserInfo* %info40, i32 0, i32 4
  %16 = load i8*, i8** %15, align 8
  %derefference_value41 = load i8, i8* %16, align 8
  %eqtmpX42 = icmp eq i8 %derefference_value41, 101
  br i1 %eqtmpX42, label %cond_jump_then43, label %cond_end44

loop_top_block:                                   ; preds = %cond_end21, %cond_jump_then
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %18 = bitcast i8* %17 to %buffer**
  %block_text11 = load %buffer*, %buffer** %18, align 8
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %20 = bitcast i8* %19 to %sParserInfo**
  %info12 = load %sParserInfo*, %sParserInfo** %20, align 8
  %21 = getelementptr inbounds %sParserInfo, %sParserInfo* %info12, i32 0, i32 4
  %22 = load i8*, i8** %21, align 8
  %derefference_value13 = load i8, i8* %22, align 8
  call void @buffer_append_char(%buffer* %block_text11, i8 %derefference_value13)
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %24 = bitcast i8* %23 to %sParserInfo**
  %info14 = load %sParserInfo*, %sParserInfo** %24, align 8
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %26 = bitcast i8* %25 to %sParserInfo**
  %info15 = load %sParserInfo*, %sParserInfo** %26, align 8
  %27 = getelementptr inbounds %sParserInfo, %sParserInfo* %info15, i32 0, i32 4
  %28 = load i8*, i8** %27, align 8
  %29 = ptrtoint i8* %28 to i64
  %addtmp = add nsw i64 %29, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %30 = getelementptr inbounds %sParserInfo, %sParserInfo* %info14, i32 0, i32 4
  store i8* %intToPtr2, i8** %30, align 8
  %31 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %31, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %33 = bitcast i8* %32 to %sParserInfo**
  %info16 = load %sParserInfo*, %sParserInfo** %33, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info16)
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %35 = bitcast i8* %34 to %sParserInfo**
  %info17 = load %sParserInfo*, %sParserInfo** %35, align 8
  %36 = getelementptr inbounds %sParserInfo, %sParserInfo* %info17, i32 0, i32 4
  %37 = load i8*, i8** %36, align 8
  %derefference_value18 = load i8, i8* %37, align 8
  %eqtmpX19 = icmp eq i8 %derefference_value18, 62
  br i1 %eqtmpX19, label %cond_jump_then20, label %"cond_jump_elif0\0A"

cond_end_block:                                   ; preds = %cond_jump_then20, %loop_top_block
  br label %cond_end

cond_jump_then20:                                 ; preds = %cond_then_block
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %39 = bitcast i8* %38 to %buffer**
  %block_text22 = load %buffer*, %buffer** %39, align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %41 = bitcast i8* %40 to %sParserInfo**
  %info23 = load %sParserInfo*, %sParserInfo** %41, align 8
  %42 = getelementptr inbounds %sParserInfo, %sParserInfo* %info23, i32 0, i32 4
  %43 = load i8*, i8** %42, align 8
  %derefference_value24 = load i8, i8* %43, align 8
  call void @buffer_append_char(%buffer* %block_text22, i8 %derefference_value24)
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %45 = bitcast i8* %44 to %sParserInfo**
  %info25 = load %sParserInfo*, %sParserInfo** %45, align 8
  %46 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %47 = bitcast i8* %46 to %sParserInfo**
  %info26 = load %sParserInfo*, %sParserInfo** %47, align 8
  %48 = getelementptr inbounds %sParserInfo, %sParserInfo* %info26, i32 0, i32 4
  %49 = load i8*, i8** %48, align 8
  %50 = ptrtoint i8* %49 to i64
  %addtmp27 = add nsw i64 %50, 1
  %intToPtr228 = inttoptr i64 %addtmp27 to i8*
  %51 = getelementptr inbounds %sParserInfo, %sParserInfo* %info25, i32 0, i32 4
  store i8* %intToPtr228, i8** %51, align 8
  %52 = ptrtoint i8* %intToPtr228 to i64
  %subtmp29 = sub nsw i64 %52, 1
  %IntTOPtr4b30 = inttoptr i64 %subtmp29 to i8*
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %54 = bitcast i8* %53 to %sParserInfo**
  %info31 = load %sParserInfo*, %sParserInfo** %54, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info31)
  br label %cond_end_block

"cond_jump_elif0\0A":                             ; preds = %cond_then_block
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %56 = bitcast i8* %55 to %sParserInfo**
  %info32 = load %sParserInfo*, %sParserInfo** %56, align 8
  %57 = getelementptr inbounds %sParserInfo, %sParserInfo* %info32, i32 0, i32 4
  %58 = load i8*, i8** %57, align 8
  %derefference_value33 = load i8, i8* %58, align 8
  %eqtmpX34 = icmp eq i8 %derefference_value33, 0
  br i1 %eqtmpX34, label %"cond_jump_elif_then0\0A", label %cond_end21

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %59 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %60 = bitcast i8* %59 to %sParserInfo**
  %info35 = load %sParserInfo*, %sParserInfo** %60, align 8
  call void @parser_err_msg(%sParserInfo* %info35, i8* getelementptr inbounds ([49 x i8], [49 x i8]* @global_string.16, i32 0, i32 0))
  %61 = bitcast [8192 x i8*]* %lvtable to i8*
  %62 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %61, i64 65536)
  %63 = load i8*, i8** %name, align 8
  %64 = ptrtoint i8* %63 to i64
  %65 = icmp ne i64 %64, 0
  br i1 %65, label %cond_then_block36, label %cond_end37

cond_end21:                                       ; preds = %"cond_jump_elif0\0A", %after_break
  br label %loop_top_block

after_break:                                      ; No predecessors!
  br label %cond_end21

cond_then_block36:                                ; preds = %"cond_jump_elif_then0\0A"
  br label %cond_end37

cond_end37:                                       ; preds = %cond_then_block36, %"cond_jump_elif_then0\0A"
  call void @ncfree(i8* %63)
  %66 = load %buffer*, %buffer** %block_text, align 8
  call void @buffer_finalize(%buffer* %66)
  %67 = ptrtoint %buffer* %66 to i64
  %68 = icmp ne i64 %67, 0
  br i1 %68, label %cond_then_block38, label %cond_end39

cond_then_block38:                                ; preds = %cond_end37
  br label %cond_end39

cond_end39:                                       ; preds = %cond_then_block38, %cond_end37
  %69 = bitcast %buffer* %66 to i8*
  call void @ncfree(i8* %69)
  ret i1 false

cond_jump_then43:                                 ; preds = %cond_end
  br label %loop_top_block45

cond_end44:                                       ; preds = %cond_end_block47, %cond_end
  %block_text68 = load %buffer*, %buffer** %block_text, align 8
  call void @buffer_append_char(%buffer* %block_text68, i8 10)
  %info69 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @expected_next_character(i8 123, %sParserInfo* %info69)
  %block_text70 = load %buffer*, %buffer** %block_text, align 8
  call void @buffer_append_char(%buffer* %block_text70, i8 123)
  %block_text71 = load %buffer*, %buffer** %block_text, align 8
  %info72 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %70 = call i1 @get_block_text(%buffer* %block_text71, i8 123, i8 125, %sParserInfo* %info72)
  %LOGICAL_DIANEAL = icmp eq i1 %70, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then73, label %cond_end74

loop_top_block45:                                 ; preds = %cond_end54, %cond_jump_then43
  br i1 true, label %cond_then_block46, label %cond_end_block47

cond_then_block46:                                ; preds = %loop_top_block45
  %71 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %72 = bitcast i8* %71 to %sParserInfo**
  %info48 = load %sParserInfo*, %sParserInfo** %72, align 8
  %73 = getelementptr inbounds %sParserInfo, %sParserInfo* %info48, i32 0, i32 4
  %74 = load i8*, i8** %73, align 8
  %derefference_value49 = load i8, i8* %74, align 8
  %eqtmpX50 = icmp eq i8 %derefference_value49, 123
  br i1 %eqtmpX50, label %cond_jump_then51, label %"cond_jump_elif0\0A52"

cond_end_block47:                                 ; preds = %cond_jump_then51, %loop_top_block45
  br label %cond_end44

cond_jump_then51:                                 ; preds = %cond_then_block46
  br label %cond_end_block47

"cond_jump_elif0\0A52":                           ; preds = %cond_then_block46
  %75 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %76 = bitcast i8* %75 to %sParserInfo**
  %info56 = load %sParserInfo*, %sParserInfo** %76, align 8
  %77 = getelementptr inbounds %sParserInfo, %sParserInfo* %info56, i32 0, i32 4
  %78 = load i8*, i8** %77, align 8
  %derefference_value57 = load i8, i8* %78, align 8
  %eqtmpX58 = icmp eq i8 %derefference_value57, 0
  br i1 %eqtmpX58, label %"cond_jump_elif_then0\0A53", label %cond_else_block

"cond_jump_elif_then0\0A53":                      ; preds = %"cond_jump_elif0\0A52"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %79 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_string.17, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end54

cond_else_block:                                  ; preds = %"cond_jump_elif0\0A52"
  %80 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %81 = bitcast i8* %80 to %buffer**
  %block_text59 = load %buffer*, %buffer** %81, align 8
  %82 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %83 = bitcast i8* %82 to %sParserInfo**
  %info60 = load %sParserInfo*, %sParserInfo** %83, align 8
  %84 = getelementptr inbounds %sParserInfo, %sParserInfo* %info60, i32 0, i32 4
  %85 = load i8*, i8** %84, align 8
  %derefference_value61 = load i8, i8* %85, align 8
  call void @buffer_append_char(%buffer* %block_text59, i8 %derefference_value61)
  %86 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %87 = bitcast i8* %86 to %sParserInfo**
  %info62 = load %sParserInfo*, %sParserInfo** %87, align 8
  %88 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %89 = bitcast i8* %88 to %sParserInfo**
  %info63 = load %sParserInfo*, %sParserInfo** %89, align 8
  %90 = getelementptr inbounds %sParserInfo, %sParserInfo* %info63, i32 0, i32 4
  %91 = load i8*, i8** %90, align 8
  %92 = ptrtoint i8* %91 to i64
  %addtmp64 = add nsw i64 %92, 1
  %intToPtr265 = inttoptr i64 %addtmp64 to i8*
  %93 = getelementptr inbounds %sParserInfo, %sParserInfo* %info62, i32 0, i32 4
  store i8* %intToPtr265, i8** %93, align 8
  %94 = ptrtoint i8* %intToPtr265 to i64
  %subtmp66 = sub nsw i64 %94, 1
  %IntTOPtr4b67 = inttoptr i64 %subtmp66 to i8*
  br label %cond_end54

cond_end54:                                       ; preds = %cond_else_block, %"cond_jump_elif_then0\0A53", %after_break55
  br label %loop_top_block45

after_break55:                                    ; No predecessors!
  br label %cond_end54

cond_jump_then73:                                 ; preds = %cond_end44
  %95 = bitcast [8192 x i8*]* %lvtable to i8*
  %96 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %95, i64 65536)
  %97 = load i8*, i8** %name, align 8
  %98 = ptrtoint i8* %97 to i64
  %99 = icmp ne i64 %98, 0
  br i1 %99, label %cond_then_block75, label %cond_end76

cond_end74:                                       ; preds = %cond_end44
  %node79 = load %sCLNode**, %sCLNode*** %node2, align 8
  %block_text80 = load %buffer*, %buffer** %block_text, align 8
  %100 = getelementptr inbounds %buffer, %buffer* %block_text80, i32 0, i32 0
  %101 = load i8*, i8** %100, align 8
  %info81 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %102 = getelementptr inbounds %sParserInfo, %sParserInfo* %info81, i32 0, i32 0
  %103 = bitcast [4096 x i8]* %102 to i8*
  %sline82 = load i32, i32* %sline, align 4
  %info83 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %104 = call %sCLNode* @sNodeTree_create_class(i8* %101, i8* %103, i32 %sline82, %sParserInfo* %info83)
  store %sCLNode* %104, %sCLNode** %node79, align 8
  %105 = bitcast [8192 x i8*]* %lvtable to i8*
  %106 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %105, i64 65536)
  %107 = load i8*, i8** %name, align 8
  %108 = ptrtoint i8* %107 to i64
  %109 = icmp ne i64 %108, 0
  br i1 %109, label %cond_then_block84, label %cond_end85

cond_then_block75:                                ; preds = %cond_jump_then73
  br label %cond_end76

cond_end76:                                       ; preds = %cond_then_block75, %cond_jump_then73
  call void @ncfree(i8* %97)
  %110 = load %buffer*, %buffer** %block_text, align 8
  call void @buffer_finalize(%buffer* %110)
  %111 = ptrtoint %buffer* %110 to i64
  %112 = icmp ne i64 %111, 0
  br i1 %112, label %cond_then_block77, label %cond_end78

cond_then_block77:                                ; preds = %cond_end76
  br label %cond_end78

cond_end78:                                       ; preds = %cond_then_block77, %cond_end76
  %113 = bitcast %buffer* %110 to i8*
  call void @ncfree(i8* %113)
  ret i1 false

cond_then_block84:                                ; preds = %cond_end74
  br label %cond_end85

cond_end85:                                       ; preds = %cond_then_block84, %cond_end74
  call void @ncfree(i8* %107)
  %114 = load %buffer*, %buffer** %block_text, align 8
  call void @buffer_finalize(%buffer* %114)
  %115 = ptrtoint %buffer* %114 to i64
  %116 = icmp ne i64 %115, 0
  br i1 %116, label %cond_then_block86, label %cond_end87

cond_then_block86:                                ; preds = %cond_end85
  br label %cond_end87

cond_end87:                                       ; preds = %cond_then_block86, %cond_end85
  %117 = bitcast %buffer* %114 to i8*
  call void @ncfree(i8* %117)
  ret i1 true
}

define i1 @parse_macro(%sCLNode** %node, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %node2 = alloca %sCLNode**
  store %sCLNode** %node, %sCLNode*** %node2, align 8
  %2 = bitcast %sCLNode*** %node2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %info4 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %4 = call i8* @parse_word(%sParserInfo* %info4)
  %name = alloca i8*
  %5 = bitcast i8** %name to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store i8* %4, i8** %name, align 8
  %info5 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @expected_next_character(i8 123, %sParserInfo* %info5)
  %6 = call i8* @nccalloc(i64 1, i64 16)
  %7 = bitcast i8* %6 to %buffer*
  %8 = call %buffer* @buffer_initialize(%buffer* %7)
  %block_text = alloca %buffer*
  %9 = bitcast %buffer** %block_text to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store %buffer* %8, %buffer** %block_text, align 8
  %block_text6 = load %buffer*, %buffer** %block_text, align 8
  %info7 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %10 = call i1 @get_block_text(%buffer* %block_text6, i8 123, i8 125, %sParserInfo* %info7)
  %LOGICAL_DIANEAL = icmp eq i1 %10, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %11 = bitcast [8192 x i8*]* %lvtable to i8*
  %12 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %11, i64 65536)
  %13 = load i8*, i8** %name, align 8
  %14 = ptrtoint i8* %13 to i64
  %15 = icmp ne i64 %14, 0
  br i1 %15, label %cond_then_block, label %cond_end8

cond_end:                                         ; preds = %entry
  %node11 = load %sCLNode**, %sCLNode*** %node2, align 8
  %name12 = load i8*, i8** %name, align 8
  %block_text13 = load %buffer*, %buffer** %block_text, align 8
  %16 = getelementptr inbounds %buffer, %buffer* %block_text13, i32 0, i32 0
  %17 = load i8*, i8** %16, align 8
  %18 = call i8* @string(i8* %17)
  %19 = call i8* @string_substring(i8* %18, i32 0, i32 -2)
  %info14 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %20 = call %sCLNode* @sNodeTree_create_macro(i8* %name12, i8* %19, %sParserInfo* %info14)
  store %sCLNode* %20, %sCLNode** %node11, align 8
  %21 = bitcast [8192 x i8*]* %lvtable to i8*
  %22 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %21, i64 65536)
  %23 = ptrtoint i8* %18 to i64
  %24 = icmp ne i64 %23, 0
  br i1 %24, label %cond_then_block15, label %cond_end16

cond_then_block:                                  ; preds = %cond_jump_then
  br label %cond_end8

cond_end8:                                        ; preds = %cond_then_block, %cond_jump_then
  call void @ncfree(i8* %13)
  %25 = load %buffer*, %buffer** %block_text, align 8
  call void @buffer_finalize(%buffer* %25)
  %26 = ptrtoint %buffer* %25 to i64
  %27 = icmp ne i64 %26, 0
  br i1 %27, label %cond_then_block9, label %cond_end10

cond_then_block9:                                 ; preds = %cond_end8
  br label %cond_end10

cond_end10:                                       ; preds = %cond_then_block9, %cond_end8
  %28 = bitcast %buffer* %25 to i8*
  call void @ncfree(i8* %28)
  ret i1 false

cond_then_block15:                                ; preds = %cond_end
  br label %cond_end16

cond_end16:                                       ; preds = %cond_then_block15, %cond_end
  call void @ncfree(i8* %18)
  %29 = ptrtoint i8* %19 to i64
  %30 = icmp ne i64 %29, 0
  br i1 %30, label %cond_then_block17, label %cond_end18

cond_then_block17:                                ; preds = %cond_end16
  br label %cond_end18

cond_end18:                                       ; preds = %cond_then_block17, %cond_end16
  call void @ncfree(i8* %19)
  %31 = load i8*, i8** %name, align 8
  %32 = ptrtoint i8* %31 to i64
  %33 = icmp ne i64 %32, 0
  br i1 %33, label %cond_then_block19, label %cond_end20

cond_then_block19:                                ; preds = %cond_end18
  br label %cond_end20

cond_end20:                                       ; preds = %cond_then_block19, %cond_end18
  call void @ncfree(i8* %31)
  %34 = load %buffer*, %buffer** %block_text, align 8
  call void @buffer_finalize(%buffer* %34)
  %35 = ptrtoint %buffer* %34 to i64
  %36 = icmp ne i64 %35, 0
  br i1 %36, label %cond_then_block21, label %cond_end22

cond_then_block21:                                ; preds = %cond_end20
  br label %cond_end22

cond_end22:                                       ; preds = %cond_then_block21, %cond_end20
  %37 = bitcast %buffer* %34 to i8*
  call void @ncfree(i8* %37)
  ret i1 true
}

define i1 @parse_calling_params(i32* %num_params, %sCLNode** %params, i1* %param_closed, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %num_params2 = alloca i32*
  store i32* %num_params, i32** %num_params2, align 8
  %2 = bitcast i32** %num_params2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %params3 = alloca %sCLNode**
  store %sCLNode** %params, %sCLNode*** %params3, align 8
  %3 = bitcast %sCLNode*** %params3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %param_closed4 = alloca i1*
  store i1* %param_closed, i1** %param_closed4, align 8
  %4 = bitcast i1** %param_closed4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %info5 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info5, align 8
  %5 = bitcast %sParserInfo** %info5 to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %info6 = load %sParserInfo*, %sParserInfo** %info5, align 8
  %6 = getelementptr inbounds %sParserInfo, %sParserInfo* %info6, i32 0, i32 4
  %7 = load i8*, i8** %6, align 8
  %derefference_value = load i8, i8* %7, align 8
  %eqtmpX = icmp eq i8 %derefference_value, 40
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %8 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %9 = bitcast i8* %8 to %sParserInfo**
  %info7 = load %sParserInfo*, %sParserInfo** %9, align 8
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %11 = bitcast i8* %10 to %sParserInfo**
  %info8 = load %sParserInfo*, %sParserInfo** %11, align 8
  %12 = getelementptr inbounds %sParserInfo, %sParserInfo* %info8, i32 0, i32 4
  %13 = load i8*, i8** %12, align 8
  %14 = ptrtoint i8* %13 to i64
  %addtmp = add nsw i64 %14, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %15 = getelementptr inbounds %sParserInfo, %sParserInfo* %info7, i32 0, i32 4
  store i8* %intToPtr2, i8** %15, align 8
  %16 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %16, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %18 = bitcast i8* %17 to %sParserInfo**
  %info9 = load %sParserInfo*, %sParserInfo** %18, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info9)
  br label %loop_top_block

cond_end:                                         ; preds = %cond_end_block, %entry
  %info62 = load %sParserInfo*, %sParserInfo** %info5, align 8
  %19 = getelementptr inbounds %sParserInfo, %sParserInfo* %info62, i32 0, i32 4
  %20 = load i8*, i8** %19, align 8
  %derefference_value63 = load i8, i8* %20, align 8
  %eqtmpX64 = icmp eq i8 %derefference_value63, 123
  br i1 %eqtmpX64, label %cond_jump_then65, label %cond_end66

loop_top_block:                                   ; preds = %cond_end43, %cond_jump_then
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %22 = bitcast i8* %21 to %sParserInfo**
  %info10 = load %sParserInfo*, %sParserInfo** %22, align 8
  %23 = getelementptr inbounds %sParserInfo, %sParserInfo* %info10, i32 0, i32 4
  %24 = load i8*, i8** %23, align 8
  %derefference_value11 = load i8, i8* %24, align 8
  %eqtmpX12 = icmp eq i8 %derefference_value11, 0
  br i1 %eqtmpX12, label %cond_jump_then13, label %cond_end14

cond_end_block:                                   ; preds = %"cond_jump_elif_then0\0A", %cond_jump_then42, %cond_jump_then19, %cond_jump_then13, %loop_top_block
  br label %cond_end

cond_jump_then13:                                 ; preds = %cond_then_block
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %26 = bitcast i8* %25 to i1**
  %param_closed15 = load i1*, i1** %26, align 8
  store i1 false, i1* %param_closed15, align 1
  br label %cond_end_block

cond_end14:                                       ; preds = %after_break, %cond_then_block
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %28 = bitcast i8* %27 to %sParserInfo**
  %info16 = load %sParserInfo*, %sParserInfo** %28, align 8
  %29 = getelementptr inbounds %sParserInfo, %sParserInfo* %info16, i32 0, i32 4
  %30 = load i8*, i8** %29, align 8
  %derefference_value17 = load i8, i8* %30, align 8
  %eqtmpX18 = icmp eq i8 %derefference_value17, 41
  br i1 %eqtmpX18, label %cond_jump_then19, label %cond_end20

after_break:                                      ; No predecessors!
  br label %cond_end14

cond_jump_then19:                                 ; preds = %cond_end14
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %32 = bitcast i8* %31 to %sParserInfo**
  %info21 = load %sParserInfo*, %sParserInfo** %32, align 8
  call void @expected_next_character(i8 41, %sParserInfo* %info21)
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %34 = bitcast i8* %33 to i1**
  %param_closed22 = load i1*, i1** %34, align 8
  store i1 true, i1* %param_closed22, align 1
  br label %cond_end_block

cond_end20:                                       ; preds = %after_break23, %cond_end14
  %node = alloca %sCLNode*
  %35 = bitcast %sCLNode** %node to i8*
  store i8* %35, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store %sCLNode* null, %sCLNode** %node, align 8
  %node24 = load %sCLNode*, %sCLNode** %node, align 8
  %36 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %37 = bitcast i8* %36 to %sParserInfo**
  %info25 = load %sParserInfo*, %sParserInfo** %37, align 8
  %38 = call i1 @expression(%sCLNode** %node, %sParserInfo* %info25)
  %LOGICAL_DIANEAL = icmp eq i1 %38, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then26, label %cond_end27

after_break23:                                    ; No predecessors!
  br label %cond_end20

cond_jump_then26:                                 ; preds = %cond_end20
  %39 = bitcast [8192 x i8*]* %lvtable to i8*
  %40 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %39, i64 65536)
  ret i1 false

cond_end27:                                       ; preds = %cond_end20
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %42 = bitcast i8* %41 to %sCLNode***
  %params28 = load %sCLNode**, %sCLNode*** %42, align 8
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %44 = bitcast i8* %43 to i32**
  %num_params29 = load i32*, i32** %44, align 8
  %derefference_value30 = load i32, i32* %num_params29, align 8
  %node31 = load %sCLNode*, %sCLNode** %node, align 8
  %element_addressD = getelementptr %sCLNode*, %sCLNode** %params28, i32 %derefference_value30
  store %sCLNode* %node31, %sCLNode** %element_addressD, align 8
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %46 = bitcast i8* %45 to i32**
  %num_params32 = load i32*, i32** %46, align 8
  %derefference_value33 = load i32, i32* %num_params32, align 8
  %47 = load i32, i32* %num_params32, align 4
  %addtmp34 = add nsw i32 %47, 1
  store i32 %addtmp34, i32* %num_params32, align 8
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %49 = bitcast i8* %48 to i32**
  %num_params35 = load i32*, i32** %49, align 8
  %derefference_value36 = load i32, i32* %num_params35, align 8
  %getmp = icmp sge i32 %derefference_value36, 32
  br i1 %getmp, label %cond_jump_then37, label %cond_end38

cond_jump_then37:                                 ; preds = %cond_end27
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %50 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([22 x i8], [22 x i8]* @global_string.18, i32 0, i32 0))
  call void @exit(i32 1)
  br label %cond_end38

cond_end38:                                       ; preds = %cond_jump_then37, %cond_end27
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %52 = bitcast i8* %51 to %sParserInfo**
  %info39 = load %sParserInfo*, %sParserInfo** %52, align 8
  %53 = getelementptr inbounds %sParserInfo, %sParserInfo* %info39, i32 0, i32 4
  %54 = load i8*, i8** %53, align 8
  %derefference_value40 = load i8, i8* %54, align 8
  %eqtmpX41 = icmp eq i8 %derefference_value40, 41
  br i1 %eqtmpX41, label %cond_jump_then42, label %"cond_jump_elif0\0A"

cond_jump_then42:                                 ; preds = %cond_end38
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %56 = bitcast i8* %55 to %sParserInfo**
  %info44 = load %sParserInfo*, %sParserInfo** %56, align 8
  call void @expected_next_character(i8 41, %sParserInfo* %info44)
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %58 = bitcast i8* %57 to i1**
  %param_closed45 = load i1*, i1** %58, align 8
  store i1 true, i1* %param_closed45, align 1
  br label %cond_end_block

"cond_jump_elif0\0A":                             ; preds = %cond_end38
  %59 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %60 = bitcast i8* %59 to %sParserInfo**
  %info47 = load %sParserInfo*, %sParserInfo** %60, align 8
  %61 = getelementptr inbounds %sParserInfo, %sParserInfo* %info47, i32 0, i32 4
  %62 = load i8*, i8** %61, align 8
  %derefference_value48 = load i8, i8* %62, align 8
  %eqtmpX49 = icmp eq i8 %derefference_value48, 0
  br i1 %eqtmpX49, label %"cond_jump_elif_then0\0A", label %"cond_jump_elif1\0A"

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %63 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %64 = bitcast i8* %63 to i1**
  %param_closed50 = load i1*, i1** %64, align 8
  store i1 false, i1* %param_closed50, align 1
  br label %cond_end_block

"cond_jump_elif1\0A":                             ; preds = %"cond_jump_elif0\0A"
  %65 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %66 = bitcast i8* %65 to %sParserInfo**
  %info52 = load %sParserInfo*, %sParserInfo** %66, align 8
  %67 = getelementptr inbounds %sParserInfo, %sParserInfo* %info52, i32 0, i32 4
  %68 = load i8*, i8** %67, align 8
  %derefference_value53 = load i8, i8* %68, align 8
  %eqtmpX54 = icmp eq i8 %derefference_value53, 44
  br i1 %eqtmpX54, label %"cond_jump_elif_then1\0A", label %cond_end43

"cond_jump_elif_then1\0A":                        ; preds = %"cond_jump_elif1\0A"
  %69 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %70 = bitcast i8* %69 to %sParserInfo**
  %info55 = load %sParserInfo*, %sParserInfo** %70, align 8
  %71 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %72 = bitcast i8* %71 to %sParserInfo**
  %info56 = load %sParserInfo*, %sParserInfo** %72, align 8
  %73 = getelementptr inbounds %sParserInfo, %sParserInfo* %info56, i32 0, i32 4
  %74 = load i8*, i8** %73, align 8
  %75 = ptrtoint i8* %74 to i64
  %addtmp57 = add nsw i64 %75, 1
  %intToPtr258 = inttoptr i64 %addtmp57 to i8*
  %76 = getelementptr inbounds %sParserInfo, %sParserInfo* %info55, i32 0, i32 4
  store i8* %intToPtr258, i8** %76, align 8
  %77 = ptrtoint i8* %intToPtr258 to i64
  %subtmp59 = sub nsw i64 %77, 1
  %IntTOPtr4b60 = inttoptr i64 %subtmp59 to i8*
  %78 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %79 = bitcast i8* %78 to %sParserInfo**
  %info61 = load %sParserInfo*, %sParserInfo** %79, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info61)
  br label %cond_end43

cond_end43:                                       ; preds = %"cond_jump_elif_then1\0A", %"cond_jump_elif1\0A", %after_break51, %after_break46
  br label %loop_top_block

after_break46:                                    ; No predecessors!
  br label %cond_end43

after_break51:                                    ; No predecessors!
  br label %cond_end43

cond_jump_then65:                                 ; preds = %cond_end
  %80 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %81 = bitcast i8* %80 to %sParserInfo**
  %info67 = load %sParserInfo*, %sParserInfo** %81, align 8
  %82 = getelementptr inbounds %sParserInfo, %sParserInfo* %info67, i32 0, i32 1
  %83 = load i32, i32* %82, align 4
  %sline = alloca i32
  %84 = bitcast i32* %sline to i8*
  store i8* %84, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i32 %83, i32* %sline, align 4
  %85 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %86 = bitcast i8* %85 to %sParserInfo**
  %info68 = load %sParserInfo*, %sParserInfo** %86, align 8
  call void @expected_next_character(i8 123, %sParserInfo* %info68)
  %87 = call i8* @nccalloc(i64 1, i64 16)
  %88 = bitcast i8* %87 to %buffer*
  %89 = call %buffer* @buffer_initialize(%buffer* %88)
  %block_text = alloca %buffer*
  %90 = bitcast %buffer** %block_text to i8*
  store i8* %90, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store %buffer* %89, %buffer** %block_text, align 8
  %block_text69 = load %buffer*, %buffer** %block_text, align 8
  %91 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %92 = bitcast i8* %91 to %sParserInfo**
  %info70 = load %sParserInfo*, %sParserInfo** %92, align 8
  %93 = call i1 @get_block_text(%buffer* %block_text69, i8 123, i8 125, %sParserInfo* %info70)
  %LOGICAL_DIANEAL71 = icmp eq i1 %93, false
  br i1 %LOGICAL_DIANEAL71, label %cond_jump_then72, label %cond_end73

cond_end66:                                       ; preds = %cond_end91, %cond_end
  %94 = bitcast [8192 x i8*]* %lvtable to i8*
  %95 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %94, i64 65536)
  ret i1 true

cond_jump_then72:                                 ; preds = %cond_jump_then65
  %96 = bitcast [8192 x i8*]* %lvtable to i8*
  %97 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %96, i64 65536)
  %98 = load %buffer*, %buffer** %block_text, align 8
  call void @buffer_finalize(%buffer* %98)
  %99 = ptrtoint %buffer* %98 to i64
  %100 = icmp ne i64 %99, 0
  br i1 %100, label %cond_then_block74, label %cond_end75

cond_end73:                                       ; preds = %cond_jump_then65
  %101 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %102 = bitcast i8* %101 to %sCLNode***
  %params76 = load %sCLNode**, %sCLNode*** %102, align 8
  %103 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %104 = bitcast i8* %103 to i32**
  %num_params77 = load i32*, i32** %104, align 8
  %derefference_value78 = load i32, i32* %num_params77, align 8
  %105 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %106 = bitcast i8* %105 to %sParserInfo**
  %info79 = load %sParserInfo*, %sParserInfo** %106, align 8
  %107 = getelementptr inbounds %sParserInfo, %sParserInfo* %info79, i32 0, i32 0
  %108 = bitcast [4096 x i8]* %107 to i8*
  %sline80 = load i32, i32* %sline, align 4
  %block_text81 = load %buffer*, %buffer** %block_text, align 8
  %109 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %110 = bitcast i8* %109 to %sParserInfo**
  %info82 = load %sParserInfo*, %sParserInfo** %110, align 8
  %111 = call %sCLNode* @sNodeTree_create_method_block(i8* %108, i32 %sline80, %buffer* %block_text81, %sParserInfo* %info82)
  %element_addressD83 = getelementptr %sCLNode*, %sCLNode** %params76, i32 %derefference_value78
  store %sCLNode* %111, %sCLNode** %element_addressD83, align 8
  %112 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %113 = bitcast i8* %112 to i32**
  %num_params84 = load i32*, i32** %113, align 8
  %derefference_value85 = load i32, i32* %num_params84, align 8
  %114 = load i32, i32* %num_params84, align 4
  %addtmp86 = add nsw i32 %114, 1
  store i32 %addtmp86, i32* %num_params84, align 8
  %115 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %116 = bitcast i8* %115 to i32**
  %num_params87 = load i32*, i32** %116, align 8
  %derefference_value88 = load i32, i32* %num_params87, align 8
  %getmp89 = icmp sge i32 %derefference_value88, 32
  br i1 %getmp89, label %cond_jump_then90, label %cond_end91

cond_then_block74:                                ; preds = %cond_jump_then72
  br label %cond_end75

cond_end75:                                       ; preds = %cond_then_block74, %cond_jump_then72
  %117 = bitcast %buffer* %98 to i8*
  call void @ncfree(i8* %117)
  ret i1 false

cond_jump_then90:                                 ; preds = %cond_end73
  %stderr92 = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %118 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr92, i8* getelementptr inbounds ([22 x i8], [22 x i8]* @global_string.19, i32 0, i32 0))
  call void @exit(i32 1)
  br label %cond_end91

cond_end91:                                       ; preds = %cond_jump_then90, %cond_end73
  br label %cond_end66
}

define i1 @parse_shell_params(i32* %num_params, %sCLNode** %params, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %num_params2 = alloca i32*
  store i32* %num_params, i32** %num_params2, align 8
  %2 = bitcast i32** %num_params2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %params3 = alloca %sCLNode**
  store %sCLNode** %params, %sCLNode*** %params3, align 8
  %3 = bitcast %sCLNode*** %params3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %info4 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info4, align 8
  %4 = bitcast %sParserInfo** %info4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end103, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %6 = bitcast i8* %5 to %sParserInfo**
  %info5 = load %sParserInfo*, %sParserInfo** %6, align 8
  %7 = getelementptr inbounds %sParserInfo, %sParserInfo* %info5, i32 0, i32 4
  %8 = load i8*, i8** %7, align 8
  %derefference_value = load i8, i8* %8, align 8
  %eqtmpX = icmp eq i8 %derefference_value, 0
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_end_block:                                   ; preds = %cond_end98, %cond_end90, %cond_end82, %cond_jump_then16, %cond_jump_then9, %cond_jump_then, %loop_top_block
  %9 = bitcast [8192 x i8*]* %lvtable to i8*
  %10 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %9, i64 65536)
  ret i1 true

cond_jump_then:                                   ; preds = %cond_then_block
  br label %cond_end_block

cond_end:                                         ; preds = %after_break, %cond_then_block
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %12 = bitcast i8* %11 to %sParserInfo**
  %info6 = load %sParserInfo*, %sParserInfo** %12, align 8
  %13 = getelementptr inbounds %sParserInfo, %sParserInfo* %info6, i32 0, i32 4
  %14 = load i8*, i8** %13, align 8
  %derefference_value7 = load i8, i8* %14, align 8
  %eqtmpX8 = icmp eq i8 %derefference_value7, 59
  br i1 %eqtmpX8, label %cond_jump_then9, label %cond_end10

after_break:                                      ; No predecessors!
  br label %cond_end

cond_jump_then9:                                  ; preds = %cond_end
  %15 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %16 = bitcast i8* %15 to %sParserInfo**
  %info11 = load %sParserInfo*, %sParserInfo** %16, align 8
  call void @expected_next_character(i8 59, %sParserInfo* %info11)
  br label %cond_end_block

cond_end10:                                       ; preds = %after_break12, %cond_end
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %18 = bitcast i8* %17 to %sParserInfo**
  %info13 = load %sParserInfo*, %sParserInfo** %18, align 8
  %19 = getelementptr inbounds %sParserInfo, %sParserInfo* %info13, i32 0, i32 4
  %20 = load i8*, i8** %19, align 8
  %derefference_value14 = load i8, i8* %20, align 8
  %eqtmpX15 = icmp eq i8 %derefference_value14, 125
  br i1 %eqtmpX15, label %cond_jump_then16, label %cond_end17

after_break12:                                    ; No predecessors!
  br label %cond_end10

cond_jump_then16:                                 ; preds = %cond_end10
  br label %cond_end_block

cond_end17:                                       ; preds = %after_break18, %cond_end10
  %21 = call i8* @nccalloc(i64 1, i64 16)
  %22 = bitcast i8* %21 to %buffer*
  %23 = call %buffer* @buffer_initialize(%buffer* %22)
  %buf = alloca %buffer*
  %24 = bitcast %buffer** %buf to i8*
  store i8* %24, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store %buffer* %23, %buffer** %buf, align 8
  br label %loop_top_block19

after_break18:                                    ; No predecessors!
  br label %cond_end17

loop_top_block19:                                 ; preds = %cond_then_block40, %cond_end17
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %26 = bitcast i8* %25 to %sParserInfo**
  %info20 = load %sParserInfo*, %sParserInfo** %26, align 8
  %27 = getelementptr inbounds %sParserInfo, %sParserInfo* %info20, i32 0, i32 4
  %28 = load i8*, i8** %27, align 8
  %derefference_value21 = load i8, i8* %28, align 8
  %noteqtmp = icmp ne i8 %derefference_value21, 0
  store i1 %noteqtmp, i1* %andand_result_var, align 1
  br i1 %noteqtmp, label %cond_jump_then22, label %cond_jump_end

cond_jump_then22:                                 ; preds = %loop_top_block19
  %29 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %30 = bitcast i8* %29 to %sParserInfo**
  %info23 = load %sParserInfo*, %sParserInfo** %30, align 8
  %31 = getelementptr inbounds %sParserInfo, %sParserInfo* %info23, i32 0, i32 4
  %32 = load i8*, i8** %31, align 8
  %derefference_value24 = load i8, i8* %32, align 8
  %noteqtmp25 = icmp ne i8 %derefference_value24, 32
  %andand = and i1 %noteqtmp, %noteqtmp25
  store i1 %andand, i1* %andand_result_var, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then22, %loop_top_block19
  %andand_result_value = load i1, i1* %andand_result_var, align 1
  store i1 %andand_result_value, i1* %andand_result_var, align 1
  br i1 %andand_result_value, label %cond_jump_then26, label %cond_jump_end27

cond_jump_then26:                                 ; preds = %cond_jump_end
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %34 = bitcast i8* %33 to %sParserInfo**
  %info28 = load %sParserInfo*, %sParserInfo** %34, align 8
  %35 = getelementptr inbounds %sParserInfo, %sParserInfo* %info28, i32 0, i32 4
  %36 = load i8*, i8** %35, align 8
  %derefference_value29 = load i8, i8* %36, align 8
  %noteqtmp30 = icmp ne i8 %derefference_value29, 125
  %andand31 = and i1 %andand_result_value, %noteqtmp30
  store i1 %andand31, i1* %andand_result_var, align 1
  br label %cond_jump_end27

cond_jump_end27:                                  ; preds = %cond_jump_then26, %cond_jump_end
  %andand_result_value32 = load i1, i1* %andand_result_var, align 1
  store i1 %andand_result_value32, i1* %andand_result_var, align 1
  br i1 %andand_result_value32, label %cond_jump_then33, label %cond_jump_end34

cond_jump_then33:                                 ; preds = %cond_jump_end27
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %38 = bitcast i8* %37 to %sParserInfo**
  %info35 = load %sParserInfo*, %sParserInfo** %38, align 8
  %39 = getelementptr inbounds %sParserInfo, %sParserInfo* %info35, i32 0, i32 4
  %40 = load i8*, i8** %39, align 8
  %derefference_value36 = load i8, i8* %40, align 8
  %noteqtmp37 = icmp ne i8 %derefference_value36, 59
  %andand38 = and i1 %andand_result_value32, %noteqtmp37
  store i1 %andand38, i1* %andand_result_var, align 1
  br label %cond_jump_end34

cond_jump_end34:                                  ; preds = %cond_jump_then33, %cond_jump_end27
  %andand_result_value39 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value39, label %cond_then_block40, label %cond_end_block41

cond_then_block40:                                ; preds = %cond_jump_end34
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %42 = bitcast i8* %41 to %buffer**
  %buf42 = load %buffer*, %buffer** %42, align 8
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %44 = bitcast i8* %43 to %sParserInfo**
  %info43 = load %sParserInfo*, %sParserInfo** %44, align 8
  %45 = getelementptr inbounds %sParserInfo, %sParserInfo* %info43, i32 0, i32 4
  %46 = load i8*, i8** %45, align 8
  %derefference_value44 = load i8, i8* %46, align 8
  call void @buffer_append_char(%buffer* %buf42, i8 %derefference_value44)
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %48 = bitcast i8* %47 to %sParserInfo**
  %info45 = load %sParserInfo*, %sParserInfo** %48, align 8
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %50 = bitcast i8* %49 to %sParserInfo**
  %info46 = load %sParserInfo*, %sParserInfo** %50, align 8
  %51 = getelementptr inbounds %sParserInfo, %sParserInfo* %info46, i32 0, i32 4
  %52 = load i8*, i8** %51, align 8
  %53 = ptrtoint i8* %52 to i64
  %addtmp = add nsw i64 %53, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %54 = getelementptr inbounds %sParserInfo, %sParserInfo* %info45, i32 0, i32 4
  store i8* %intToPtr2, i8** %54, align 8
  %55 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %55, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  br label %loop_top_block19

cond_end_block41:                                 ; preds = %cond_jump_end34
  br label %loop_top_block47

loop_top_block47:                                 ; preds = %cond_then_block51, %cond_end_block41
  %56 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %57 = bitcast i8* %56 to %sParserInfo**
  %info48 = load %sParserInfo*, %sParserInfo** %57, align 8
  %58 = getelementptr inbounds %sParserInfo, %sParserInfo* %info48, i32 0, i32 4
  %59 = load i8*, i8** %58, align 8
  %derefference_value49 = load i8, i8* %59, align 8
  %eqtmpX50 = icmp eq i8 %derefference_value49, 32
  br i1 %eqtmpX50, label %cond_then_block51, label %cond_end_block52

cond_then_block51:                                ; preds = %loop_top_block47
  %60 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %61 = bitcast i8* %60 to %sParserInfo**
  %info53 = load %sParserInfo*, %sParserInfo** %61, align 8
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %63 = bitcast i8* %62 to %sParserInfo**
  %info54 = load %sParserInfo*, %sParserInfo** %63, align 8
  %64 = getelementptr inbounds %sParserInfo, %sParserInfo* %info54, i32 0, i32 4
  %65 = load i8*, i8** %64, align 8
  %66 = ptrtoint i8* %65 to i64
  %addtmp55 = add nsw i64 %66, 1
  %intToPtr256 = inttoptr i64 %addtmp55 to i8*
  %67 = getelementptr inbounds %sParserInfo, %sParserInfo* %info53, i32 0, i32 4
  store i8* %intToPtr256, i8** %67, align 8
  %68 = ptrtoint i8* %intToPtr256 to i64
  %subtmp57 = sub nsw i64 %68, 1
  %IntTOPtr4b58 = inttoptr i64 %subtmp57 to i8*
  br label %loop_top_block47

cond_end_block52:                                 ; preds = %loop_top_block47
  %buf59 = load %buffer*, %buffer** %buf, align 8
  %69 = call i8* @buffer_to_string(%buffer* %buf59)
  %str = alloca i8*
  %70 = bitcast i8** %str to i8*
  store i8* %70, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i8* %69, i8** %str, align 8
  %str60 = load i8*, i8** %str, align 8
  %71 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %72 = bitcast i8* %71 to %sParserInfo**
  %info61 = load %sParserInfo*, %sParserInfo** %72, align 8
  %73 = call %sCLNode* @sNodeTree_create_string_value(i8* %str60, %sParserInfo* %info61)
  %node = alloca %sCLNode*
  %74 = bitcast %sCLNode** %node to i8*
  store i8* %74, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store %sCLNode* %73, %sCLNode** %node, align 8
  %75 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %76 = bitcast i8* %75 to %sCLNode***
  %params62 = load %sCLNode**, %sCLNode*** %76, align 8
  %77 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %78 = bitcast i8* %77 to i32**
  %num_params63 = load i32*, i32** %78, align 8
  %derefference_value64 = load i32, i32* %num_params63, align 8
  %node65 = load %sCLNode*, %sCLNode** %node, align 8
  %element_addressD = getelementptr %sCLNode*, %sCLNode** %params62, i32 %derefference_value64
  store %sCLNode* %node65, %sCLNode** %element_addressD, align 8
  %79 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %80 = bitcast i8* %79 to i32**
  %num_params66 = load i32*, i32** %80, align 8
  %derefference_value67 = load i32, i32* %num_params66, align 8
  %81 = load i32, i32* %num_params66, align 4
  %addtmp68 = add nsw i32 %81, 1
  store i32 %addtmp68, i32* %num_params66, align 8
  %82 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %83 = bitcast i8* %82 to i32**
  %num_params69 = load i32*, i32** %83, align 8
  %derefference_value70 = load i32, i32* %num_params69, align 8
  %getmp = icmp sge i32 %derefference_value70, 32
  br i1 %getmp, label %cond_jump_then71, label %cond_end72

cond_jump_then71:                                 ; preds = %cond_end_block52
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %84 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([22 x i8], [22 x i8]* @global_string.20, i32 0, i32 0))
  call void @exit(i32 1)
  br label %cond_end72

cond_end72:                                       ; preds = %cond_jump_then71, %cond_end_block52
  %85 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %86 = bitcast i8* %85 to %sParserInfo**
  %info73 = load %sParserInfo*, %sParserInfo** %86, align 8
  %87 = getelementptr inbounds %sParserInfo, %sParserInfo* %info73, i32 0, i32 4
  %88 = load i8*, i8** %87, align 8
  %derefference_value74 = load i8, i8* %88, align 8
  %eqtmpX75 = icmp eq i8 %derefference_value74, 59
  br i1 %eqtmpX75, label %cond_jump_then76, label %"cond_jump_elif0\0A"

cond_jump_then76:                                 ; preds = %cond_end72
  %89 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %90 = bitcast i8* %89 to %sParserInfo**
  %info78 = load %sParserInfo*, %sParserInfo** %90, align 8
  call void @expected_next_character(i8 59, %sParserInfo* %info78)
  %91 = load %buffer*, %buffer** %buf, align 8
  call void @buffer_finalize(%buffer* %91)
  %92 = ptrtoint %buffer* %91 to i64
  %93 = icmp ne i64 %92, 0
  br i1 %93, label %cond_then_block79, label %cond_end80

"cond_jump_elif0\0A":                             ; preds = %cond_end72
  %94 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %95 = bitcast i8* %94 to %sParserInfo**
  %info84 = load %sParserInfo*, %sParserInfo** %95, align 8
  %96 = getelementptr inbounds %sParserInfo, %sParserInfo* %info84, i32 0, i32 4
  %97 = load i8*, i8** %96, align 8
  %derefference_value85 = load i8, i8* %97, align 8
  %eqtmpX86 = icmp eq i8 %derefference_value85, 0
  br i1 %eqtmpX86, label %"cond_jump_elif_then0\0A", label %"cond_jump_elif1\0A"

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %98 = load %buffer*, %buffer** %buf, align 8
  call void @buffer_finalize(%buffer* %98)
  %99 = ptrtoint %buffer* %98 to i64
  %100 = icmp ne i64 %99, 0
  br i1 %100, label %cond_then_block87, label %cond_end88

"cond_jump_elif1\0A":                             ; preds = %"cond_jump_elif0\0A"
  %101 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %102 = bitcast i8* %101 to %sParserInfo**
  %info92 = load %sParserInfo*, %sParserInfo** %102, align 8
  %103 = getelementptr inbounds %sParserInfo, %sParserInfo* %info92, i32 0, i32 4
  %104 = load i8*, i8** %103, align 8
  %derefference_value93 = load i8, i8* %104, align 8
  %eqtmpX94 = icmp eq i8 %derefference_value93, 125
  br i1 %eqtmpX94, label %"cond_jump_elif_then1\0A", label %cond_end77

"cond_jump_elif_then1\0A":                        ; preds = %"cond_jump_elif1\0A"
  %105 = load %buffer*, %buffer** %buf, align 8
  call void @buffer_finalize(%buffer* %105)
  %106 = ptrtoint %buffer* %105 to i64
  %107 = icmp ne i64 %106, 0
  br i1 %107, label %cond_then_block95, label %cond_end96

cond_end77:                                       ; preds = %after_break99, %"cond_jump_elif1\0A", %after_break91, %after_break83
  %108 = load %buffer*, %buffer** %buf, align 8
  call void @buffer_finalize(%buffer* %108)
  %109 = ptrtoint %buffer* %108 to i64
  %110 = icmp ne i64 %109, 0
  br i1 %110, label %cond_then_block100, label %cond_end101

cond_then_block79:                                ; preds = %cond_jump_then76
  br label %cond_end80

cond_end80:                                       ; preds = %cond_then_block79, %cond_jump_then76
  %111 = bitcast %buffer* %91 to i8*
  call void @ncfree(i8* %111)
  %112 = load i8*, i8** %str, align 8
  %113 = ptrtoint i8* %112 to i64
  %114 = icmp ne i64 %113, 0
  br i1 %114, label %cond_then_block81, label %cond_end82

cond_then_block81:                                ; preds = %cond_end80
  br label %cond_end82

cond_end82:                                       ; preds = %cond_then_block81, %cond_end80
  call void @ncfree(i8* %112)
  br label %cond_end_block

after_break83:                                    ; No predecessors!
  br label %cond_end77

cond_then_block87:                                ; preds = %"cond_jump_elif_then0\0A"
  br label %cond_end88

cond_end88:                                       ; preds = %cond_then_block87, %"cond_jump_elif_then0\0A"
  %115 = bitcast %buffer* %98 to i8*
  call void @ncfree(i8* %115)
  %116 = load i8*, i8** %str, align 8
  %117 = ptrtoint i8* %116 to i64
  %118 = icmp ne i64 %117, 0
  br i1 %118, label %cond_then_block89, label %cond_end90

cond_then_block89:                                ; preds = %cond_end88
  br label %cond_end90

cond_end90:                                       ; preds = %cond_then_block89, %cond_end88
  call void @ncfree(i8* %116)
  br label %cond_end_block

after_break91:                                    ; No predecessors!
  br label %cond_end77

cond_then_block95:                                ; preds = %"cond_jump_elif_then1\0A"
  br label %cond_end96

cond_end96:                                       ; preds = %cond_then_block95, %"cond_jump_elif_then1\0A"
  %119 = bitcast %buffer* %105 to i8*
  call void @ncfree(i8* %119)
  %120 = load i8*, i8** %str, align 8
  %121 = ptrtoint i8* %120 to i64
  %122 = icmp ne i64 %121, 0
  br i1 %122, label %cond_then_block97, label %cond_end98

cond_then_block97:                                ; preds = %cond_end96
  br label %cond_end98

cond_end98:                                       ; preds = %cond_then_block97, %cond_end96
  call void @ncfree(i8* %120)
  br label %cond_end_block

after_break99:                                    ; No predecessors!
  br label %cond_end77

cond_then_block100:                               ; preds = %cond_end77
  br label %cond_end101

cond_end101:                                      ; preds = %cond_then_block100, %cond_end77
  %123 = bitcast %buffer* %108 to i8*
  call void @ncfree(i8* %123)
  %124 = load i8*, i8** %str, align 8
  %125 = ptrtoint i8* %124 to i64
  %126 = icmp ne i64 %125, 0
  br i1 %126, label %cond_then_block102, label %cond_end103

cond_then_block102:                               ; preds = %cond_end101
  br label %cond_end103

cond_end103:                                      ; preds = %cond_then_block102, %cond_end101
  call void @ncfree(i8* %124)
  br label %loop_top_block
}

define internal i1 @postposition_operator(%sCLNode** %node, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %node2 = alloca %sCLNode**
  store %sCLNode** %node, %sCLNode*** %node2, align 8
  %2 = bitcast %sCLNode*** %node2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %node4 = load %sCLNode**, %sCLNode*** %node2, align 8
  %derefference_value = load %sCLNode*, %sCLNode** %node4, align 8
  %eqtmpX = icmp eq %sCLNode* %derefference_value, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %4 = bitcast [8192 x i8*]* %lvtable to i8*
  %5 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %4, i64 65536)
  ret i1 true

cond_end:                                         ; preds = %entry
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end11, %cond_end
  %info5 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %6 = getelementptr inbounds %sParserInfo, %sParserInfo* %info5, i32 0, i32 4
  %7 = load i8*, i8** %6, align 8
  %derefference_value6 = load i8, i8* %7, align 8
  %8 = icmp ne i8 %derefference_value6, 0
  br i1 %8, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %10 = bitcast i8* %9 to %sParserInfo**
  %info7 = load %sParserInfo*, %sParserInfo** %10, align 8
  %11 = getelementptr inbounds %sParserInfo, %sParserInfo* %info7, i32 0, i32 4
  %12 = load i8*, i8** %11, align 8
  %derefference_value8 = load i8, i8* %12, align 8
  %eqtmpX9 = icmp eq i8 %derefference_value8, 46
  br i1 %eqtmpX9, label %cond_jump_then10, label %"cond_jump_elif0\0A"

cond_end_block:                                   ; preds = %cond_else_block, %loop_top_block
  %13 = bitcast [8192 x i8*]* %lvtable to i8*
  %14 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %13, i64 65536)
  ret i1 true

cond_jump_then10:                                 ; preds = %cond_then_block
  %15 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %16 = bitcast i8* %15 to %sParserInfo**
  %info12 = load %sParserInfo*, %sParserInfo** %16, align 8
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %18 = bitcast i8* %17 to %sParserInfo**
  %info13 = load %sParserInfo*, %sParserInfo** %18, align 8
  %19 = getelementptr inbounds %sParserInfo, %sParserInfo* %info13, i32 0, i32 4
  %20 = load i8*, i8** %19, align 8
  %21 = ptrtoint i8* %20 to i64
  %addtmp = add nsw i64 %21, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %22 = getelementptr inbounds %sParserInfo, %sParserInfo* %info12, i32 0, i32 4
  store i8* %intToPtr2, i8** %22, align 8
  %23 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %23, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %25 = bitcast i8* %24 to %sParserInfo**
  %info14 = load %sParserInfo*, %sParserInfo** %25, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info14)
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %27 = bitcast i8* %26 to %sParserInfo**
  %info15 = load %sParserInfo*, %sParserInfo** %27, align 8
  %28 = call i8* @parse_word(%sParserInfo* %info15)
  %name = alloca i8*
  %29 = bitcast i8** %name to i8*
  store i8* %29, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store i8* %28, i8** %name, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %31 = bitcast i8* %30 to %sParserInfo**
  %info16 = load %sParserInfo*, %sParserInfo** %31, align 8
  %32 = getelementptr inbounds %sParserInfo, %sParserInfo* %info16, i32 0, i32 4
  %33 = load i8*, i8** %32, align 8
  %derefference_value17 = load i8, i8* %33, align 8
  %eqtmpX18 = icmp eq i8 %derefference_value17, 40
  store i1 %eqtmpX18, i1* %andand_result_var1, align 1
  br i1 %eqtmpX18, label %cond_jump_end, label %cond_jump_then19

"cond_jump_elif0\0A":                             ; preds = %cond_then_block
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %35 = bitcast i8* %34 to %sParserInfo**
  %info220 = load %sParserInfo*, %sParserInfo** %35, align 8
  %36 = getelementptr inbounds %sParserInfo, %sParserInfo* %info220, i32 0, i32 4
  %37 = load i8*, i8** %36, align 8
  %derefference_value221 = load i8, i8* %37, align 8
  %eqtmpX222 = icmp eq i8 %derefference_value221, 40
  br i1 %eqtmpX222, label %"cond_jump_elif_then0\0A", label %cond_else_block

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %num_params223 = alloca i32
  %38 = bitcast i32* %num_params223 to i8*
  store i8* %38, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store i32 0, i32* %num_params223, align 4
  %params224 = alloca [32 x %sCLNode*]
  %39 = bitcast [32 x %sCLNode*]* %params224 to i8*
  store i8* %39, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %41 = bitcast i8* %40 to %sCLNode***
  %node225 = load %sCLNode**, %sCLNode*** %41, align 8
  %derefference_value226 = load %sCLNode*, %sCLNode** %node225, align 8
  %42 = bitcast [32 x %sCLNode*]* %params224 to %sCLNode**
  %element_addressC227 = getelementptr %sCLNode*, %sCLNode** %42, i32 0
  store %sCLNode* %derefference_value226, %sCLNode** %element_addressC227, align 8
  store i32 1, i32* %num_params223, align 4
  %param_closed228 = alloca i1
  %43 = bitcast i1* %param_closed228 to i8*
  store i8* %43, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i1 false, i1* %param_closed228, align 1
  %num_params229 = load i32, i32* %num_params223, align 4
  %param_closed230 = load i1, i1* %param_closed228, align 1
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %45 = bitcast i8* %44 to %sParserInfo**
  %info231 = load %sParserInfo*, %sParserInfo** %45, align 8
  %46 = bitcast [32 x %sCLNode*]* %params224 to %sCLNode**
  %47 = call i1 @parse_calling_params(i32* %num_params223, %sCLNode** %46, i1* %param_closed228, %sParserInfo* %info231)
  %LOGICAL_DIANEAL232 = icmp eq i1 %47, false
  br i1 %LOGICAL_DIANEAL232, label %cond_jump_then233, label %cond_end234

cond_else_block:                                  ; preds = %"cond_jump_elif0\0A"
  br label %cond_end_block

cond_end11:                                       ; preds = %after_break, %cond_end234, %cond_end219
  br label %loop_top_block

cond_jump_then19:                                 ; preds = %cond_jump_then10
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %49 = bitcast i8* %48 to %sParserInfo**
  %info20 = load %sParserInfo*, %sParserInfo** %49, align 8
  %50 = getelementptr inbounds %sParserInfo, %sParserInfo* %info20, i32 0, i32 4
  %51 = load i8*, i8** %50, align 8
  %derefference_value21 = load i8, i8* %51, align 8
  %eqtmpX22 = icmp eq i8 %derefference_value21, 123
  %oror = or i1 %eqtmpX18, %eqtmpX22
  store i1 %oror, i1* %andand_result_var1, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then19, %cond_jump_then10
  %oror_result_value = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value, label %cond_jump_then23, label %cond_else_block24

cond_jump_then23:                                 ; preds = %cond_jump_end
  %num_params = alloca i32
  %52 = bitcast i32* %num_params to i8*
  store i8* %52, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 0, i32* %num_params, align 4
  %params = alloca [32 x %sCLNode*]
  %53 = bitcast [32 x %sCLNode*]* %params to i8*
  store i8* %53, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %55 = bitcast i8* %54 to %sCLNode***
  %node26 = load %sCLNode**, %sCLNode*** %55, align 8
  %derefference_value27 = load %sCLNode*, %sCLNode** %node26, align 8
  %56 = bitcast [32 x %sCLNode*]* %params to %sCLNode**
  %element_addressC = getelementptr %sCLNode*, %sCLNode** %56, i32 0
  store %sCLNode* %derefference_value27, %sCLNode** %element_addressC, align 8
  store i32 1, i32* %num_params, align 4
  %param_closed = alloca i1
  %57 = bitcast i1* %param_closed to i8*
  store i8* %57, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i1 false, i1* %param_closed, align 1
  %num_params28 = load i32, i32* %num_params, align 4
  %param_closed29 = load i1, i1* %param_closed, align 1
  %58 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %59 = bitcast i8* %58 to %sParserInfo**
  %info30 = load %sParserInfo*, %sParserInfo** %59, align 8
  %60 = bitcast [32 x %sCLNode*]* %params to %sCLNode**
  %61 = call i1 @parse_calling_params(i32* %num_params, %sCLNode** %60, i1* %param_closed, %sParserInfo* %info30)
  %LOGICAL_DIANEAL = icmp eq i1 %61, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then31, label %cond_end32

cond_else_block24:                                ; preds = %cond_jump_end
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %63 = bitcast i8* %62 to %sParserInfo**
  %info40 = load %sParserInfo*, %sParserInfo** %63, align 8
  %64 = getelementptr inbounds %sParserInfo, %sParserInfo* %info40, i32 0, i32 4
  %65 = load i8*, i8** %64, align 8
  %derefference_value41 = load i8, i8* %65, align 8
  %eqtmpX42 = icmp eq i8 %derefference_value41, 61
  store i1 %eqtmpX42, i1* %andand_result_var, align 1
  br i1 %eqtmpX42, label %cond_jump_then43, label %cond_jump_end44

cond_end25:                                       ; preds = %cond_end51, %cond_end32
  %66 = load i8*, i8** %name, align 8
  %67 = ptrtoint i8* %66 to i64
  %68 = icmp ne i64 %67, 0
  br i1 %68, label %cond_then_block218, label %cond_end219

cond_jump_then31:                                 ; preds = %cond_jump_then23
  %69 = bitcast [8192 x i8*]* %lvtable to i8*
  %70 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %69, i64 65536)
  %71 = load i8*, i8** %name, align 8
  %72 = ptrtoint i8* %71 to i64
  %73 = icmp ne i64 %72, 0
  br i1 %73, label %cond_then_block33, label %cond_end34

cond_end32:                                       ; preds = %cond_jump_then23
  %74 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %75 = bitcast i8* %74 to %sCLNode***
  %node35 = load %sCLNode**, %sCLNode*** %75, align 8
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %77 = bitcast i8* %76 to i8**
  %name36 = load i8*, i8** %77, align 8
  %num_params37 = load i32, i32* %num_params, align 4
  %param_closed38 = load i1, i1* %param_closed, align 1
  %78 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %79 = bitcast i8* %78 to %sParserInfo**
  %info39 = load %sParserInfo*, %sParserInfo** %79, align 8
  %80 = bitcast [32 x %sCLNode*]* %params to %sCLNode**
  %81 = call %sCLNode* @sNodeTree_create_method_call(i8* %name36, i32 %num_params37, %sCLNode** %80, i1 %param_closed38, %sParserInfo* %info39)
  store %sCLNode* %81, %sCLNode** %node35, align 8
  br label %cond_end25

cond_then_block33:                                ; preds = %cond_jump_then31
  br label %cond_end34

cond_end34:                                       ; preds = %cond_then_block33, %cond_jump_then31
  call void @ncfree(i8* %71)
  ret i1 false

cond_jump_then43:                                 ; preds = %cond_else_block24
  %82 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %83 = bitcast i8* %82 to %sParserInfo**
  %info45 = load %sParserInfo*, %sParserInfo** %83, align 8
  %84 = getelementptr inbounds %sParserInfo, %sParserInfo* %info45, i32 0, i32 4
  %85 = load i8*, i8** %84, align 8
  %86 = ptrtoint i8* %85 to i64
  %addtmp46 = add nsw i64 %86, 1
  %intToPtr247 = inttoptr i64 %addtmp46 to i8*
  %derefference_value48 = load i8, i8* %intToPtr247, align 8
  %noteqtmp = icmp ne i8 %derefference_value48, 61
  %andand = and i1 %eqtmpX42, %noteqtmp
  store i1 %andand, i1* %andand_result_var, align 1
  br label %cond_jump_end44

cond_jump_end44:                                  ; preds = %cond_jump_then43, %cond_else_block24
  %andand_result_value = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value, label %cond_jump_then49, label %cond_else_block50

cond_jump_then49:                                 ; preds = %cond_jump_end44
  %87 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %88 = bitcast i8* %87 to %sParserInfo**
  %info52 = load %sParserInfo*, %sParserInfo** %88, align 8
  %89 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %90 = bitcast i8* %89 to %sParserInfo**
  %info53 = load %sParserInfo*, %sParserInfo** %90, align 8
  %91 = getelementptr inbounds %sParserInfo, %sParserInfo* %info53, i32 0, i32 4
  %92 = load i8*, i8** %91, align 8
  %93 = ptrtoint i8* %92 to i64
  %addtmp54 = add nsw i64 %93, 1
  %intToPtr255 = inttoptr i64 %addtmp54 to i8*
  %94 = getelementptr inbounds %sParserInfo, %sParserInfo* %info52, i32 0, i32 4
  store i8* %intToPtr255, i8** %94, align 8
  %95 = ptrtoint i8* %intToPtr255 to i64
  %subtmp56 = sub nsw i64 %95, 1
  %IntTOPtr4b57 = inttoptr i64 %subtmp56 to i8*
  %96 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %97 = bitcast i8* %96 to %sParserInfo**
  %info58 = load %sParserInfo*, %sParserInfo** %97, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info58)
  %exp = alloca %sCLNode*
  %98 = bitcast %sCLNode** %exp to i8*
  store i8* %98, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store %sCLNode* null, %sCLNode** %exp, align 8
  %exp59 = load %sCLNode*, %sCLNode** %exp, align 8
  %99 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %100 = bitcast i8* %99 to %sParserInfo**
  %info60 = load %sParserInfo*, %sParserInfo** %100, align 8
  %101 = call i1 @expression(%sCLNode** %exp, %sParserInfo* %info60)
  %LOGICAL_DIANEAL61 = icmp eq i1 %101, false
  br i1 %LOGICAL_DIANEAL61, label %cond_jump_then62, label %cond_end63

cond_else_block50:                                ; preds = %cond_jump_end44
  %102 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %103 = bitcast i8* %102 to %sCLNode***
  %node72 = load %sCLNode**, %sCLNode*** %103, align 8
  %derefference_value73 = load %sCLNode*, %sCLNode** %node72, align 8
  %obj_node = alloca %sCLNode*
  %104 = bitcast %sCLNode** %obj_node to i8*
  store i8* %104, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store %sCLNode* %derefference_value73, %sCLNode** %obj_node, align 8
  %105 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %106 = bitcast i8* %105 to %sCLNode***
  %node74 = load %sCLNode**, %sCLNode*** %106, align 8
  %107 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %108 = bitcast i8* %107 to %sCLNode***
  %node75 = load %sCLNode**, %sCLNode*** %108, align 8
  %derefference_value76 = load %sCLNode*, %sCLNode** %node75, align 8
  %109 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %110 = bitcast i8* %109 to i8**
  %name77 = load i8*, i8** %110, align 8
  %111 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %112 = bitcast i8* %111 to %sParserInfo**
  %info78 = load %sParserInfo*, %sParserInfo** %112, align 8
  %113 = call %sCLNode* @sNodeTree_create_load_field(%sCLNode* %derefference_value76, i8* %name77, %sParserInfo* %info78)
  store %sCLNode* %113, %sCLNode** %node74, align 8
  %114 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %115 = bitcast i8* %114 to %sParserInfo**
  %info79 = load %sParserInfo*, %sParserInfo** %115, align 8
  %116 = getelementptr inbounds %sParserInfo, %sParserInfo* %info79, i32 0, i32 4
  %117 = load i8*, i8** %116, align 8
  %derefference_value80 = load i8, i8* %117, align 8
  %eqtmpX81 = icmp eq i8 %derefference_value80, 43
  store i1 %eqtmpX81, i1* %andand_result_var, align 1
  br i1 %eqtmpX81, label %cond_jump_then82, label %cond_jump_end83

cond_end51:                                       ; preds = %cond_end94, %cond_end63
  br label %cond_end25

cond_jump_then62:                                 ; preds = %cond_jump_then49
  %118 = bitcast [8192 x i8*]* %lvtable to i8*
  %119 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %118, i64 65536)
  %120 = load i8*, i8** %name, align 8
  %121 = ptrtoint i8* %120 to i64
  %122 = icmp ne i64 %121, 0
  br i1 %122, label %cond_then_block64, label %cond_end65

cond_end63:                                       ; preds = %cond_jump_then49
  %123 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %124 = bitcast i8* %123 to %sCLNode***
  %node66 = load %sCLNode**, %sCLNode*** %124, align 8
  %125 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %126 = bitcast i8* %125 to %sCLNode***
  %node67 = load %sCLNode**, %sCLNode*** %126, align 8
  %derefference_value68 = load %sCLNode*, %sCLNode** %node67, align 8
  %127 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %128 = bitcast i8* %127 to i8**
  %name69 = load i8*, i8** %128, align 8
  %exp70 = load %sCLNode*, %sCLNode** %exp, align 8
  %129 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %130 = bitcast i8* %129 to %sParserInfo**
  %info71 = load %sParserInfo*, %sParserInfo** %130, align 8
  %131 = call %sCLNode* @sNodeTree_create_store_field(%sCLNode* %derefference_value68, i8* %name69, %sCLNode* %exp70, %sParserInfo* %info71)
  store %sCLNode* %131, %sCLNode** %node66, align 8
  br label %cond_end51

cond_then_block64:                                ; preds = %cond_jump_then62
  br label %cond_end65

cond_end65:                                       ; preds = %cond_then_block64, %cond_jump_then62
  call void @ncfree(i8* %120)
  ret i1 false

cond_jump_then82:                                 ; preds = %cond_else_block50
  %132 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %133 = bitcast i8* %132 to %sParserInfo**
  %info84 = load %sParserInfo*, %sParserInfo** %133, align 8
  %134 = getelementptr inbounds %sParserInfo, %sParserInfo* %info84, i32 0, i32 4
  %135 = load i8*, i8** %134, align 8
  %136 = ptrtoint i8* %135 to i64
  %addtmp85 = add nsw i64 %136, 1
  %intToPtr286 = inttoptr i64 %addtmp85 to i8*
  %derefference_value87 = load i8, i8* %intToPtr286, align 8
  %eqtmpX88 = icmp eq i8 %derefference_value87, 43
  %andand89 = and i1 %eqtmpX81, %eqtmpX88
  store i1 %andand89, i1* %andand_result_var, align 1
  br label %cond_jump_end83

cond_jump_end83:                                  ; preds = %cond_jump_then82, %cond_else_block50
  %andand_result_value90 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value90, label %cond_jump_then91, label %"cond_jump_elif0\0A92"

cond_jump_then91:                                 ; preds = %cond_jump_end83
  %137 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %138 = bitcast i8* %137 to %sParserInfo**
  %info95 = load %sParserInfo*, %sParserInfo** %138, align 8
  %139 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %140 = bitcast i8* %139 to %sParserInfo**
  %info96 = load %sParserInfo*, %sParserInfo** %140, align 8
  %141 = getelementptr inbounds %sParserInfo, %sParserInfo* %info96, i32 0, i32 4
  %142 = load i8*, i8** %141, align 8
  %143 = ptrtoint i8* %142 to i64
  %addtmp97 = add nsw i64 %143, 2
  %intToPtr298 = inttoptr i64 %addtmp97 to i8*
  %144 = getelementptr inbounds %sParserInfo, %sParserInfo* %info95, i32 0, i32 4
  store i8* %intToPtr298, i8** %144, align 8
  %145 = ptrtoint i8* %intToPtr298 to i64
  %subtmp99 = sub nsw i64 %145, 2
  %IntTOPtr4b100 = inttoptr i64 %subtmp99 to i8*
  %146 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %147 = bitcast i8* %146 to %sParserInfo**
  %info101 = load %sParserInfo*, %sParserInfo** %147, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info101)
  %148 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %149 = bitcast i8* %148 to %sParserInfo**
  %info102 = load %sParserInfo*, %sParserInfo** %149, align 8
  %150 = call %sCLNode* @sNodeTree_create_int_value(i32 1, %sParserInfo* %info102)
  %right = alloca %sCLNode*
  %151 = bitcast %sCLNode** %right to i8*
  store i8* %151, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store %sCLNode* %150, %sCLNode** %right, align 8
  %152 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %153 = bitcast i8* %152 to %sCLNode***
  %node103 = load %sCLNode**, %sCLNode*** %153, align 8
  %derefference_value104 = load %sCLNode*, %sCLNode** %node103, align 8
  %right105 = load %sCLNode*, %sCLNode** %right, align 8
  %154 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %155 = bitcast i8* %154 to %sParserInfo**
  %info106 = load %sParserInfo*, %sParserInfo** %155, align 8
  %156 = call %sCLNode* @sNodeTree_create_plus(%sCLNode* %derefference_value104, %sCLNode* %right105, %sParserInfo* %info106)
  %exp107 = alloca %sCLNode*
  %157 = bitcast %sCLNode** %exp107 to i8*
  store i8* %157, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store %sCLNode* %156, %sCLNode** %exp107, align 8
  %158 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %159 = bitcast i8* %158 to %sCLNode***
  %node108 = load %sCLNode**, %sCLNode*** %159, align 8
  %160 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %161 = bitcast i8* %160 to %sCLNode**
  %obj_node109 = load %sCLNode*, %sCLNode** %161, align 8
  %162 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %163 = bitcast i8* %162 to i8**
  %name110 = load i8*, i8** %163, align 8
  %exp111 = load %sCLNode*, %sCLNode** %exp107, align 8
  %164 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %165 = bitcast i8* %164 to %sParserInfo**
  %info112 = load %sParserInfo*, %sParserInfo** %165, align 8
  %166 = call %sCLNode* @sNodeTree_create_store_field(%sCLNode* %obj_node109, i8* %name110, %sCLNode* %exp111, %sParserInfo* %info112)
  store %sCLNode* %166, %sCLNode** %node108, align 8
  br label %cond_end94

"cond_jump_elif0\0A92":                           ; preds = %cond_jump_end83
  %167 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %168 = bitcast i8* %167 to %sParserInfo**
  %info113 = load %sParserInfo*, %sParserInfo** %168, align 8
  %169 = getelementptr inbounds %sParserInfo, %sParserInfo* %info113, i32 0, i32 4
  %170 = load i8*, i8** %169, align 8
  %derefference_value114 = load i8, i8* %170, align 8
  %eqtmpX115 = icmp eq i8 %derefference_value114, 45
  store i1 %eqtmpX115, i1* %andand_result_var, align 1
  br i1 %eqtmpX115, label %cond_jump_then116, label %cond_jump_end117

"cond_jump_elif_then0\0A93":                      ; preds = %cond_jump_end117
  %171 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %172 = bitcast i8* %171 to %sParserInfo**
  %info125 = load %sParserInfo*, %sParserInfo** %172, align 8
  %173 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %174 = bitcast i8* %173 to %sParserInfo**
  %info126 = load %sParserInfo*, %sParserInfo** %174, align 8
  %175 = getelementptr inbounds %sParserInfo, %sParserInfo* %info126, i32 0, i32 4
  %176 = load i8*, i8** %175, align 8
  %177 = ptrtoint i8* %176 to i64
  %addtmp127 = add nsw i64 %177, 2
  %intToPtr2128 = inttoptr i64 %addtmp127 to i8*
  %178 = getelementptr inbounds %sParserInfo, %sParserInfo* %info125, i32 0, i32 4
  store i8* %intToPtr2128, i8** %178, align 8
  %179 = ptrtoint i8* %intToPtr2128 to i64
  %subtmp129 = sub nsw i64 %179, 2
  %IntTOPtr4b130 = inttoptr i64 %subtmp129 to i8*
  %180 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %181 = bitcast i8* %180 to %sParserInfo**
  %info131 = load %sParserInfo*, %sParserInfo** %181, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info131)
  %182 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %183 = bitcast i8* %182 to %sParserInfo**
  %info132 = load %sParserInfo*, %sParserInfo** %183, align 8
  %184 = call %sCLNode* @sNodeTree_create_int_value(i32 1, %sParserInfo* %info132)
  %right133 = alloca %sCLNode*
  %185 = bitcast %sCLNode** %right133 to i8*
  store i8* %185, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store %sCLNode* %184, %sCLNode** %right133, align 8
  %186 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %187 = bitcast i8* %186 to %sCLNode***
  %node134 = load %sCLNode**, %sCLNode*** %187, align 8
  %derefference_value135 = load %sCLNode*, %sCLNode** %node134, align 8
  %right136 = load %sCLNode*, %sCLNode** %right133, align 8
  %188 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %189 = bitcast i8* %188 to %sParserInfo**
  %info137 = load %sParserInfo*, %sParserInfo** %189, align 8
  %190 = call %sCLNode* @sNodeTree_create_minus(%sCLNode* %derefference_value135, %sCLNode* %right136, %sParserInfo* %info137)
  %exp138 = alloca %sCLNode*
  %191 = bitcast %sCLNode** %exp138 to i8*
  store i8* %191, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store %sCLNode* %190, %sCLNode** %exp138, align 8
  %192 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %193 = bitcast i8* %192 to %sCLNode***
  %node139 = load %sCLNode**, %sCLNode*** %193, align 8
  %194 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %195 = bitcast i8* %194 to %sCLNode**
  %obj_node140 = load %sCLNode*, %sCLNode** %195, align 8
  %196 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %197 = bitcast i8* %196 to i8**
  %name141 = load i8*, i8** %197, align 8
  %exp142 = load %sCLNode*, %sCLNode** %exp138, align 8
  %198 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %199 = bitcast i8* %198 to %sParserInfo**
  %info143 = load %sParserInfo*, %sParserInfo** %199, align 8
  %200 = call %sCLNode* @sNodeTree_create_store_field(%sCLNode* %obj_node140, i8* %name141, %sCLNode* %exp142, %sParserInfo* %info143)
  store %sCLNode* %200, %sCLNode** %node139, align 8
  br label %cond_end94

"cond_jump_elif1\0A":                             ; preds = %cond_jump_end117
  %201 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %202 = bitcast i8* %201 to %sParserInfo**
  %info144 = load %sParserInfo*, %sParserInfo** %202, align 8
  %203 = getelementptr inbounds %sParserInfo, %sParserInfo* %info144, i32 0, i32 4
  %204 = load i8*, i8** %203, align 8
  %derefference_value145 = load i8, i8* %204, align 8
  %eqtmpX146 = icmp eq i8 %derefference_value145, 43
  store i1 %eqtmpX146, i1* %andand_result_var, align 1
  br i1 %eqtmpX146, label %cond_jump_then147, label %cond_jump_end148

"cond_jump_elif_then1\0A":                        ; preds = %cond_jump_end148
  %205 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %206 = bitcast i8* %205 to %sParserInfo**
  %info156 = load %sParserInfo*, %sParserInfo** %206, align 8
  %207 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %208 = bitcast i8* %207 to %sParserInfo**
  %info157 = load %sParserInfo*, %sParserInfo** %208, align 8
  %209 = getelementptr inbounds %sParserInfo, %sParserInfo* %info157, i32 0, i32 4
  %210 = load i8*, i8** %209, align 8
  %211 = ptrtoint i8* %210 to i64
  %addtmp158 = add nsw i64 %211, 2
  %intToPtr2159 = inttoptr i64 %addtmp158 to i8*
  %212 = getelementptr inbounds %sParserInfo, %sParserInfo* %info156, i32 0, i32 4
  store i8* %intToPtr2159, i8** %212, align 8
  %213 = ptrtoint i8* %intToPtr2159 to i64
  %subtmp160 = sub nsw i64 %213, 2
  %IntTOPtr4b161 = inttoptr i64 %subtmp160 to i8*
  %214 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %215 = bitcast i8* %214 to %sParserInfo**
  %info162 = load %sParserInfo*, %sParserInfo** %215, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info162)
  %right163 = alloca %sCLNode*
  %216 = bitcast %sCLNode** %right163 to i8*
  store i8* %216, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store %sCLNode* null, %sCLNode** %right163, align 8
  %right164 = load %sCLNode*, %sCLNode** %right163, align 8
  %217 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %218 = bitcast i8* %217 to %sParserInfo**
  %info165 = load %sParserInfo*, %sParserInfo** %218, align 8
  %219 = call i1 @expression(%sCLNode** %right163, %sParserInfo* %info165)
  %LOGICAL_DIANEAL166 = icmp eq i1 %219, false
  br i1 %LOGICAL_DIANEAL166, label %cond_jump_then167, label %cond_end168

"cond_jump_elif2\0A":                             ; preds = %cond_jump_end148
  %220 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %221 = bitcast i8* %220 to %sParserInfo**
  %info181 = load %sParserInfo*, %sParserInfo** %221, align 8
  %222 = getelementptr inbounds %sParserInfo, %sParserInfo* %info181, i32 0, i32 4
  %223 = load i8*, i8** %222, align 8
  %derefference_value182 = load i8, i8* %223, align 8
  %eqtmpX183 = icmp eq i8 %derefference_value182, 45
  store i1 %eqtmpX183, i1* %andand_result_var, align 1
  br i1 %eqtmpX183, label %cond_jump_then184, label %cond_jump_end185

"cond_jump_elif_then2\0A":                        ; preds = %cond_jump_end185
  %224 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %225 = bitcast i8* %224 to %sParserInfo**
  %info193 = load %sParserInfo*, %sParserInfo** %225, align 8
  %226 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %227 = bitcast i8* %226 to %sParserInfo**
  %info194 = load %sParserInfo*, %sParserInfo** %227, align 8
  %228 = getelementptr inbounds %sParserInfo, %sParserInfo* %info194, i32 0, i32 4
  %229 = load i8*, i8** %228, align 8
  %230 = ptrtoint i8* %229 to i64
  %addtmp195 = add nsw i64 %230, 2
  %intToPtr2196 = inttoptr i64 %addtmp195 to i8*
  %231 = getelementptr inbounds %sParserInfo, %sParserInfo* %info193, i32 0, i32 4
  store i8* %intToPtr2196, i8** %231, align 8
  %232 = ptrtoint i8* %intToPtr2196 to i64
  %subtmp197 = sub nsw i64 %232, 2
  %IntTOPtr4b198 = inttoptr i64 %subtmp197 to i8*
  %233 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %234 = bitcast i8* %233 to %sParserInfo**
  %info199 = load %sParserInfo*, %sParserInfo** %234, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info199)
  %right200 = alloca %sCLNode*
  %235 = bitcast %sCLNode** %right200 to i8*
  store i8* %235, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store %sCLNode* null, %sCLNode** %right200, align 8
  %right201 = load %sCLNode*, %sCLNode** %right200, align 8
  %236 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %237 = bitcast i8* %236 to %sParserInfo**
  %info202 = load %sParserInfo*, %sParserInfo** %237, align 8
  %238 = call i1 @expression(%sCLNode** %right200, %sParserInfo* %info202)
  %LOGICAL_DIANEAL203 = icmp eq i1 %238, false
  br i1 %LOGICAL_DIANEAL203, label %cond_jump_then204, label %cond_end205

cond_end94:                                       ; preds = %cond_end205, %cond_jump_end185, %cond_end168, %"cond_jump_elif_then0\0A93", %cond_jump_then91
  br label %cond_end51

cond_jump_then116:                                ; preds = %"cond_jump_elif0\0A92"
  %239 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %240 = bitcast i8* %239 to %sParserInfo**
  %info118 = load %sParserInfo*, %sParserInfo** %240, align 8
  %241 = getelementptr inbounds %sParserInfo, %sParserInfo* %info118, i32 0, i32 4
  %242 = load i8*, i8** %241, align 8
  %243 = ptrtoint i8* %242 to i64
  %addtmp119 = add nsw i64 %243, 1
  %intToPtr2120 = inttoptr i64 %addtmp119 to i8*
  %derefference_value121 = load i8, i8* %intToPtr2120, align 8
  %eqtmpX122 = icmp eq i8 %derefference_value121, 45
  %andand123 = and i1 %eqtmpX115, %eqtmpX122
  store i1 %andand123, i1* %andand_result_var, align 1
  br label %cond_jump_end117

cond_jump_end117:                                 ; preds = %cond_jump_then116, %"cond_jump_elif0\0A92"
  %andand_result_value124 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value124, label %"cond_jump_elif_then0\0A93", label %"cond_jump_elif1\0A"

cond_jump_then147:                                ; preds = %"cond_jump_elif1\0A"
  %244 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %245 = bitcast i8* %244 to %sParserInfo**
  %info149 = load %sParserInfo*, %sParserInfo** %245, align 8
  %246 = getelementptr inbounds %sParserInfo, %sParserInfo* %info149, i32 0, i32 4
  %247 = load i8*, i8** %246, align 8
  %248 = ptrtoint i8* %247 to i64
  %addtmp150 = add nsw i64 %248, 1
  %intToPtr2151 = inttoptr i64 %addtmp150 to i8*
  %derefference_value152 = load i8, i8* %intToPtr2151, align 8
  %eqtmpX153 = icmp eq i8 %derefference_value152, 61
  %andand154 = and i1 %eqtmpX146, %eqtmpX153
  store i1 %andand154, i1* %andand_result_var, align 1
  br label %cond_jump_end148

cond_jump_end148:                                 ; preds = %cond_jump_then147, %"cond_jump_elif1\0A"
  %andand_result_value155 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value155, label %"cond_jump_elif_then1\0A", label %"cond_jump_elif2\0A"

cond_jump_then167:                                ; preds = %"cond_jump_elif_then1\0A"
  %249 = bitcast [8192 x i8*]* %lvtable to i8*
  %250 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %249, i64 65536)
  %251 = load i8*, i8** %name, align 8
  %252 = ptrtoint i8* %251 to i64
  %253 = icmp ne i64 %252, 0
  br i1 %253, label %cond_then_block169, label %cond_end170

cond_end168:                                      ; preds = %"cond_jump_elif_then1\0A"
  %254 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %255 = bitcast i8* %254 to %sCLNode***
  %node171 = load %sCLNode**, %sCLNode*** %255, align 8
  %derefference_value172 = load %sCLNode*, %sCLNode** %node171, align 8
  %right173 = load %sCLNode*, %sCLNode** %right163, align 8
  %256 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %257 = bitcast i8* %256 to %sParserInfo**
  %info174 = load %sParserInfo*, %sParserInfo** %257, align 8
  %258 = call %sCLNode* @sNodeTree_create_plus(%sCLNode* %derefference_value172, %sCLNode* %right173, %sParserInfo* %info174)
  %exp175 = alloca %sCLNode*
  %259 = bitcast %sCLNode** %exp175 to i8*
  store i8* %259, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store %sCLNode* %258, %sCLNode** %exp175, align 8
  %260 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %261 = bitcast i8* %260 to %sCLNode***
  %node176 = load %sCLNode**, %sCLNode*** %261, align 8
  %262 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %263 = bitcast i8* %262 to %sCLNode**
  %obj_node177 = load %sCLNode*, %sCLNode** %263, align 8
  %264 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %265 = bitcast i8* %264 to i8**
  %name178 = load i8*, i8** %265, align 8
  %exp179 = load %sCLNode*, %sCLNode** %exp175, align 8
  %266 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %267 = bitcast i8* %266 to %sParserInfo**
  %info180 = load %sParserInfo*, %sParserInfo** %267, align 8
  %268 = call %sCLNode* @sNodeTree_create_store_field(%sCLNode* %obj_node177, i8* %name178, %sCLNode* %exp179, %sParserInfo* %info180)
  store %sCLNode* %268, %sCLNode** %node176, align 8
  br label %cond_end94

cond_then_block169:                               ; preds = %cond_jump_then167
  br label %cond_end170

cond_end170:                                      ; preds = %cond_then_block169, %cond_jump_then167
  call void @ncfree(i8* %251)
  ret i1 false

cond_jump_then184:                                ; preds = %"cond_jump_elif2\0A"
  %269 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %270 = bitcast i8* %269 to %sParserInfo**
  %info186 = load %sParserInfo*, %sParserInfo** %270, align 8
  %271 = getelementptr inbounds %sParserInfo, %sParserInfo* %info186, i32 0, i32 4
  %272 = load i8*, i8** %271, align 8
  %273 = ptrtoint i8* %272 to i64
  %addtmp187 = add nsw i64 %273, 1
  %intToPtr2188 = inttoptr i64 %addtmp187 to i8*
  %derefference_value189 = load i8, i8* %intToPtr2188, align 8
  %eqtmpX190 = icmp eq i8 %derefference_value189, 61
  %andand191 = and i1 %eqtmpX183, %eqtmpX190
  store i1 %andand191, i1* %andand_result_var, align 1
  br label %cond_jump_end185

cond_jump_end185:                                 ; preds = %cond_jump_then184, %"cond_jump_elif2\0A"
  %andand_result_value192 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value192, label %"cond_jump_elif_then2\0A", label %cond_end94

cond_jump_then204:                                ; preds = %"cond_jump_elif_then2\0A"
  %274 = bitcast [8192 x i8*]* %lvtable to i8*
  %275 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %274, i64 65536)
  %276 = load i8*, i8** %name, align 8
  %277 = ptrtoint i8* %276 to i64
  %278 = icmp ne i64 %277, 0
  br i1 %278, label %cond_then_block206, label %cond_end207

cond_end205:                                      ; preds = %"cond_jump_elif_then2\0A"
  %279 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %280 = bitcast i8* %279 to %sCLNode***
  %node208 = load %sCLNode**, %sCLNode*** %280, align 8
  %derefference_value209 = load %sCLNode*, %sCLNode** %node208, align 8
  %right210 = load %sCLNode*, %sCLNode** %right200, align 8
  %281 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %282 = bitcast i8* %281 to %sParserInfo**
  %info211 = load %sParserInfo*, %sParserInfo** %282, align 8
  %283 = call %sCLNode* @sNodeTree_create_minus(%sCLNode* %derefference_value209, %sCLNode* %right210, %sParserInfo* %info211)
  %exp212 = alloca %sCLNode*
  %284 = bitcast %sCLNode** %exp212 to i8*
  store i8* %284, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store %sCLNode* %283, %sCLNode** %exp212, align 8
  %285 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %286 = bitcast i8* %285 to %sCLNode***
  %node213 = load %sCLNode**, %sCLNode*** %286, align 8
  %287 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %288 = bitcast i8* %287 to %sCLNode**
  %obj_node214 = load %sCLNode*, %sCLNode** %288, align 8
  %289 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %290 = bitcast i8* %289 to i8**
  %name215 = load i8*, i8** %290, align 8
  %exp216 = load %sCLNode*, %sCLNode** %exp212, align 8
  %291 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %292 = bitcast i8* %291 to %sParserInfo**
  %info217 = load %sParserInfo*, %sParserInfo** %292, align 8
  %293 = call %sCLNode* @sNodeTree_create_store_field(%sCLNode* %obj_node214, i8* %name215, %sCLNode* %exp216, %sParserInfo* %info217)
  store %sCLNode* %293, %sCLNode** %node213, align 8
  br label %cond_end94

cond_then_block206:                               ; preds = %cond_jump_then204
  br label %cond_end207

cond_end207:                                      ; preds = %cond_then_block206, %cond_jump_then204
  call void @ncfree(i8* %276)
  ret i1 false

cond_then_block218:                               ; preds = %cond_end25
  br label %cond_end219

cond_end219:                                      ; preds = %cond_then_block218, %cond_end25
  call void @ncfree(i8* %66)
  br label %cond_end11

cond_jump_then233:                                ; preds = %"cond_jump_elif_then0\0A"
  %294 = bitcast [8192 x i8*]* %lvtable to i8*
  %295 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %294, i64 65536)
  ret i1 false

cond_end234:                                      ; preds = %"cond_jump_elif_then0\0A"
  %296 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %297 = bitcast i8* %296 to %sCLNode***
  %node235 = load %sCLNode**, %sCLNode*** %297, align 8
  %num_params236 = load i32, i32* %num_params223, align 4
  %298 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %299 = bitcast i8* %298 to %sParserInfo**
  %info237 = load %sParserInfo*, %sParserInfo** %299, align 8
  %300 = bitcast [32 x %sCLNode*]* %params224 to %sCLNode**
  %301 = call %sCLNode* @sNodeTree_create_block_object_call(i32 %num_params236, %sCLNode** %300, %sParserInfo* %info237)
  store %sCLNode* %301, %sCLNode** %node235, align 8
  br label %cond_end11

after_break:                                      ; No predecessors!
  br label %cond_end11
}

define i1 @is_local_variable(i8* %word, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %word2 = alloca i8*
  store i8* %word, i8** %word2, align 8
  %2 = bitcast i8** %word2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %info4 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %word5 = load i8*, i8** %word2, align 8
  %4 = call %sVar* @get_variable_from_table(%sParserInfo* %info4, i8* %word5)
  %v = alloca %sVar*
  %5 = bitcast %sVar** %v to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sVar* %4, %sVar** %v, align 8
  %v6 = load %sVar*, %sVar** %v, align 8
  %noteqtmp = icmp ne %sVar* %v6, null
  %6 = bitcast [8192 x i8*]* %lvtable to i8*
  %7 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %6, i64 65536)
  ret i1 %noteqtmp
}

define i1 @parse_string(%buffer* %buf, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %buf2 = alloca %buffer*
  store %buffer* %buf, %buffer** %buf2, align 8
  %2 = bitcast %buffer** %buf2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %4 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %5 = bitcast i8* %4 to %sParserInfo**
  %info4 = load %sParserInfo*, %sParserInfo** %5, align 8
  %6 = getelementptr inbounds %sParserInfo, %sParserInfo* %info4, i32 0, i32 4
  %7 = load i8*, i8** %6, align 8
  %derefference_value = load i8, i8* %7, align 8
  %eqtmpX = icmp eq i8 %derefference_value, 34
  br i1 %eqtmpX, label %cond_jump_then, label %"cond_jump_elif0\0A"

cond_end_block:                                   ; preds = %"cond_jump_elif_then0\0A", %cond_jump_then, %loop_top_block
  %info120 = load %sParserInfo*, %sParserInfo** %info3, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info120)
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret i1 true

cond_jump_then:                                   ; preds = %cond_then_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %11 = bitcast i8* %10 to %sParserInfo**
  %info5 = load %sParserInfo*, %sParserInfo** %11, align 8
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %13 = bitcast i8* %12 to %sParserInfo**
  %info6 = load %sParserInfo*, %sParserInfo** %13, align 8
  %14 = getelementptr inbounds %sParserInfo, %sParserInfo* %info6, i32 0, i32 4
  %15 = load i8*, i8** %14, align 8
  %16 = ptrtoint i8* %15 to i64
  %addtmp = add nsw i64 %16, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %17 = getelementptr inbounds %sParserInfo, %sParserInfo* %info5, i32 0, i32 4
  store i8* %intToPtr2, i8** %17, align 8
  %18 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %18, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %20 = bitcast i8* %19 to %sParserInfo**
  %info7 = load %sParserInfo*, %sParserInfo** %20, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info7)
  br label %cond_end_block

"cond_jump_elif0\0A":                             ; preds = %cond_then_block
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %22 = bitcast i8* %21 to %sParserInfo**
  %info8 = load %sParserInfo*, %sParserInfo** %22, align 8
  %23 = getelementptr inbounds %sParserInfo, %sParserInfo* %info8, i32 0, i32 4
  %24 = load i8*, i8** %23, align 8
  %derefference_value9 = load i8, i8* %24, align 8
  %eqtmpX10 = icmp eq i8 %derefference_value9, 0
  br i1 %eqtmpX10, label %"cond_jump_elif_then0\0A", label %"cond_jump_elif1\0A"

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %26 = bitcast i8* %25 to %sParserInfo**
  %info11 = load %sParserInfo*, %sParserInfo** %26, align 8
  call void @parser_err_msg(%sParserInfo* %info11, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_string.21, i32 0, i32 0))
  br label %cond_end_block

"cond_jump_elif1\0A":                             ; preds = %"cond_jump_elif0\0A"
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %28 = bitcast i8* %27 to %sParserInfo**
  %info13 = load %sParserInfo*, %sParserInfo** %28, align 8
  %29 = getelementptr inbounds %sParserInfo, %sParserInfo* %info13, i32 0, i32 4
  %30 = load i8*, i8** %29, align 8
  %derefference_value14 = load i8, i8* %30, align 8
  %eqtmpX15 = icmp eq i8 %derefference_value14, 92
  br i1 %eqtmpX15, label %"cond_jump_elif_then1\0A", label %"cond_jump_elif2\0A"

"cond_jump_elif_then1\0A":                        ; preds = %"cond_jump_elif1\0A"
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %32 = bitcast i8* %31 to %sParserInfo**
  %info16 = load %sParserInfo*, %sParserInfo** %32, align 8
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %34 = bitcast i8* %33 to %sParserInfo**
  %info17 = load %sParserInfo*, %sParserInfo** %34, align 8
  %35 = getelementptr inbounds %sParserInfo, %sParserInfo* %info17, i32 0, i32 4
  %36 = load i8*, i8** %35, align 8
  %37 = ptrtoint i8* %36 to i64
  %addtmp18 = add nsw i64 %37, 1
  %intToPtr219 = inttoptr i64 %addtmp18 to i8*
  %38 = getelementptr inbounds %sParserInfo, %sParserInfo* %info16, i32 0, i32 4
  store i8* %intToPtr219, i8** %38, align 8
  %39 = ptrtoint i8* %intToPtr219 to i64
  %subtmp20 = sub nsw i64 %39, 1
  %IntTOPtr4b21 = inttoptr i64 %subtmp20 to i8*
  %c = alloca i8
  store i8* %c, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %41 = bitcast i8* %40 to %sParserInfo**
  %info22 = load %sParserInfo*, %sParserInfo** %41, align 8
  %42 = getelementptr inbounds %sParserInfo, %sParserInfo* %info22, i32 0, i32 4
  %43 = load i8*, i8** %42, align 8
  %derefference_value23 = load i8, i8* %43, align 8
  %eqtmpY = icmp eq i8 %derefference_value23, 110
  br i1 %eqtmpY, label %cond_then_block24, label %cond_else_block25

"cond_jump_elif2\0A":                             ; preds = %"cond_jump_elif1\0A"
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %45 = bitcast i8* %44 to %sParserInfo**
  %info96 = load %sParserInfo*, %sParserInfo** %45, align 8
  %46 = getelementptr inbounds %sParserInfo, %sParserInfo* %info96, i32 0, i32 4
  %47 = load i8*, i8** %46, align 8
  %derefference_value97 = load i8, i8* %47, align 8
  %eqtmpX98 = icmp eq i8 %derefference_value97, 10
  br i1 %eqtmpX98, label %"cond_jump_elif_then2\0A", label %cond_else_block

"cond_jump_elif_then2\0A":                        ; preds = %"cond_jump_elif2\0A"
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %49 = bitcast i8* %48 to %sParserInfo**
  %info99 = load %sParserInfo*, %sParserInfo** %49, align 8
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %51 = bitcast i8* %50 to %sParserInfo**
  %info100 = load %sParserInfo*, %sParserInfo** %51, align 8
  %52 = getelementptr inbounds %sParserInfo, %sParserInfo* %info100, i32 0, i32 1
  %53 = load i32, i32* %52, align 4
  %addtmp101 = add nsw i32 %53, 1
  %54 = getelementptr inbounds %sParserInfo, %sParserInfo* %info99, i32 0, i32 1
  store i32 %addtmp101, i32* %54, align 4
  %subttmp = sub nsw i32 %addtmp101, 1
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %56 = bitcast i8* %55 to %buffer**
  %buf102 = load %buffer*, %buffer** %56, align 8
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %58 = bitcast i8* %57 to %sParserInfo**
  %info103 = load %sParserInfo*, %sParserInfo** %58, align 8
  %59 = getelementptr inbounds %sParserInfo, %sParserInfo* %info103, i32 0, i32 4
  %60 = load i8*, i8** %59, align 8
  %derefference_value104 = load i8, i8* %60, align 8
  call void @buffer_append_char(%buffer* %buf102, i8 %derefference_value104)
  %61 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %62 = bitcast i8* %61 to %sParserInfo**
  %info105 = load %sParserInfo*, %sParserInfo** %62, align 8
  %63 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %64 = bitcast i8* %63 to %sParserInfo**
  %info106 = load %sParserInfo*, %sParserInfo** %64, align 8
  %65 = getelementptr inbounds %sParserInfo, %sParserInfo* %info106, i32 0, i32 4
  %66 = load i8*, i8** %65, align 8
  %67 = ptrtoint i8* %66 to i64
  %addtmp107 = add nsw i64 %67, 1
  %intToPtr2108 = inttoptr i64 %addtmp107 to i8*
  %68 = getelementptr inbounds %sParserInfo, %sParserInfo* %info105, i32 0, i32 4
  store i8* %intToPtr2108, i8** %68, align 8
  %69 = ptrtoint i8* %intToPtr2108 to i64
  %subtmp109 = sub nsw i64 %69, 1
  %IntTOPtr4b110 = inttoptr i64 %subtmp109 to i8*
  br label %cond_end

cond_else_block:                                  ; preds = %"cond_jump_elif2\0A"
  %70 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %71 = bitcast i8* %70 to %buffer**
  %buf111 = load %buffer*, %buffer** %71, align 8
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %73 = bitcast i8* %72 to %sParserInfo**
  %info112 = load %sParserInfo*, %sParserInfo** %73, align 8
  %74 = getelementptr inbounds %sParserInfo, %sParserInfo* %info112, i32 0, i32 4
  %75 = load i8*, i8** %74, align 8
  %derefference_value113 = load i8, i8* %75, align 8
  call void @buffer_append_char(%buffer* %buf111, i8 %derefference_value113)
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %77 = bitcast i8* %76 to %sParserInfo**
  %info114 = load %sParserInfo*, %sParserInfo** %77, align 8
  %78 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %79 = bitcast i8* %78 to %sParserInfo**
  %info115 = load %sParserInfo*, %sParserInfo** %79, align 8
  %80 = getelementptr inbounds %sParserInfo, %sParserInfo* %info115, i32 0, i32 4
  %81 = load i8*, i8** %80, align 8
  %82 = ptrtoint i8* %81 to i64
  %addtmp116 = add nsw i64 %82, 1
  %intToPtr2117 = inttoptr i64 %addtmp116 to i8*
  %83 = getelementptr inbounds %sParserInfo, %sParserInfo* %info114, i32 0, i32 4
  store i8* %intToPtr2117, i8** %83, align 8
  %84 = ptrtoint i8* %intToPtr2117 to i64
  %subtmp118 = sub nsw i64 %84, 1
  %IntTOPtr4b119 = inttoptr i64 %subtmp118 to i8*
  br label %cond_end

cond_end:                                         ; preds = %cond_else_block, %"cond_jump_elif_then2\0A", %end_block, %after_break12, %after_break
  br label %loop_top_block

after_break:                                      ; No predecessors!
  br label %cond_end

after_break12:                                    ; No predecessors!
  br label %cond_end

end_block:                                        ; preds = %cond_else_block84, %cond_then_block83, %cond_then_block73, %cond_then_block63, %cond_then_block53, %cond_then_block43, %cond_then_block33, %cond_then_block24
  %85 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %86 = bitcast i8* %85 to %buffer**
  %buf94 = load %buffer*, %buffer** %86, align 8
  %c95 = load i8, i8* %c, align 1
  call void @buffer_append_char(%buffer* %buf94, i8 %c95)
  br label %cond_end

cond_then_block24:                                ; preds = %"cond_jump_elif_then1\0A"
  store i8 10, i8* %c, align 1
  %87 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %88 = bitcast i8* %87 to %sParserInfo**
  %info26 = load %sParserInfo*, %sParserInfo** %88, align 8
  %89 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %90 = bitcast i8* %89 to %sParserInfo**
  %info27 = load %sParserInfo*, %sParserInfo** %90, align 8
  %91 = getelementptr inbounds %sParserInfo, %sParserInfo* %info27, i32 0, i32 4
  %92 = load i8*, i8** %91, align 8
  %93 = ptrtoint i8* %92 to i64
  %addtmp28 = add nsw i64 %93, 1
  %intToPtr229 = inttoptr i64 %addtmp28 to i8*
  %94 = getelementptr inbounds %sParserInfo, %sParserInfo* %info26, i32 0, i32 4
  store i8* %intToPtr229, i8** %94, align 8
  %95 = ptrtoint i8* %intToPtr229 to i64
  %subtmp30 = sub nsw i64 %95, 1
  %IntTOPtr4b31 = inttoptr i64 %subtmp30 to i8*
  br label %end_block

cond_else_block25:                                ; preds = %after_break32, %"cond_jump_elif_then1\0A"
  %eqtmpY35 = icmp eq i8 %derefference_value23, 116
  br i1 %eqtmpY35, label %cond_then_block33, label %cond_else_block34

after_break32:                                    ; No predecessors!
  br label %cond_else_block25

cond_then_block33:                                ; preds = %cond_else_block25
  store i8 9, i8* %c, align 1
  %96 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %97 = bitcast i8* %96 to %sParserInfo**
  %info36 = load %sParserInfo*, %sParserInfo** %97, align 8
  %98 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %99 = bitcast i8* %98 to %sParserInfo**
  %info37 = load %sParserInfo*, %sParserInfo** %99, align 8
  %100 = getelementptr inbounds %sParserInfo, %sParserInfo* %info37, i32 0, i32 4
  %101 = load i8*, i8** %100, align 8
  %102 = ptrtoint i8* %101 to i64
  %addtmp38 = add nsw i64 %102, 1
  %intToPtr239 = inttoptr i64 %addtmp38 to i8*
  %103 = getelementptr inbounds %sParserInfo, %sParserInfo* %info36, i32 0, i32 4
  store i8* %intToPtr239, i8** %103, align 8
  %104 = ptrtoint i8* %intToPtr239 to i64
  %subtmp40 = sub nsw i64 %104, 1
  %IntTOPtr4b41 = inttoptr i64 %subtmp40 to i8*
  br label %end_block

cond_else_block34:                                ; preds = %after_break42, %cond_else_block25
  %eqtmpY45 = icmp eq i8 %derefference_value23, 114
  br i1 %eqtmpY45, label %cond_then_block43, label %cond_else_block44

after_break42:                                    ; No predecessors!
  br label %cond_else_block34

cond_then_block43:                                ; preds = %cond_else_block34
  store i8 13, i8* %c, align 1
  %105 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %106 = bitcast i8* %105 to %sParserInfo**
  %info46 = load %sParserInfo*, %sParserInfo** %106, align 8
  %107 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %108 = bitcast i8* %107 to %sParserInfo**
  %info47 = load %sParserInfo*, %sParserInfo** %108, align 8
  %109 = getelementptr inbounds %sParserInfo, %sParserInfo* %info47, i32 0, i32 4
  %110 = load i8*, i8** %109, align 8
  %111 = ptrtoint i8* %110 to i64
  %addtmp48 = add nsw i64 %111, 1
  %intToPtr249 = inttoptr i64 %addtmp48 to i8*
  %112 = getelementptr inbounds %sParserInfo, %sParserInfo* %info46, i32 0, i32 4
  store i8* %intToPtr249, i8** %112, align 8
  %113 = ptrtoint i8* %intToPtr249 to i64
  %subtmp50 = sub nsw i64 %113, 1
  %IntTOPtr4b51 = inttoptr i64 %subtmp50 to i8*
  br label %end_block

cond_else_block44:                                ; preds = %after_break52, %cond_else_block34
  %eqtmpY55 = icmp eq i8 %derefference_value23, 97
  br i1 %eqtmpY55, label %cond_then_block53, label %cond_else_block54

after_break52:                                    ; No predecessors!
  br label %cond_else_block44

cond_then_block53:                                ; preds = %cond_else_block44
  store i8 7, i8* %c, align 1
  %114 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %115 = bitcast i8* %114 to %sParserInfo**
  %info56 = load %sParserInfo*, %sParserInfo** %115, align 8
  %116 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %117 = bitcast i8* %116 to %sParserInfo**
  %info57 = load %sParserInfo*, %sParserInfo** %117, align 8
  %118 = getelementptr inbounds %sParserInfo, %sParserInfo* %info57, i32 0, i32 4
  %119 = load i8*, i8** %118, align 8
  %120 = ptrtoint i8* %119 to i64
  %addtmp58 = add nsw i64 %120, 1
  %intToPtr259 = inttoptr i64 %addtmp58 to i8*
  %121 = getelementptr inbounds %sParserInfo, %sParserInfo* %info56, i32 0, i32 4
  store i8* %intToPtr259, i8** %121, align 8
  %122 = ptrtoint i8* %intToPtr259 to i64
  %subtmp60 = sub nsw i64 %122, 1
  %IntTOPtr4b61 = inttoptr i64 %subtmp60 to i8*
  br label %end_block

cond_else_block54:                                ; preds = %after_break62, %cond_else_block44
  %eqtmpY65 = icmp eq i8 %derefference_value23, 92
  br i1 %eqtmpY65, label %cond_then_block63, label %cond_else_block64

after_break62:                                    ; No predecessors!
  br label %cond_else_block54

cond_then_block63:                                ; preds = %cond_else_block54
  store i8 92, i8* %c, align 1
  %123 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %124 = bitcast i8* %123 to %sParserInfo**
  %info66 = load %sParserInfo*, %sParserInfo** %124, align 8
  %125 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %126 = bitcast i8* %125 to %sParserInfo**
  %info67 = load %sParserInfo*, %sParserInfo** %126, align 8
  %127 = getelementptr inbounds %sParserInfo, %sParserInfo* %info67, i32 0, i32 4
  %128 = load i8*, i8** %127, align 8
  %129 = ptrtoint i8* %128 to i64
  %addtmp68 = add nsw i64 %129, 1
  %intToPtr269 = inttoptr i64 %addtmp68 to i8*
  %130 = getelementptr inbounds %sParserInfo, %sParserInfo* %info66, i32 0, i32 4
  store i8* %intToPtr269, i8** %130, align 8
  %131 = ptrtoint i8* %intToPtr269 to i64
  %subtmp70 = sub nsw i64 %131, 1
  %IntTOPtr4b71 = inttoptr i64 %subtmp70 to i8*
  br label %end_block

cond_else_block64:                                ; preds = %after_break72, %cond_else_block54
  %eqtmpY75 = icmp eq i8 %derefference_value23, 48
  br i1 %eqtmpY75, label %cond_then_block73, label %cond_else_block74

after_break72:                                    ; No predecessors!
  br label %cond_else_block64

cond_then_block73:                                ; preds = %cond_else_block64
  store i8 0, i8* %c, align 1
  %132 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %133 = bitcast i8* %132 to %sParserInfo**
  %info76 = load %sParserInfo*, %sParserInfo** %133, align 8
  %134 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %135 = bitcast i8* %134 to %sParserInfo**
  %info77 = load %sParserInfo*, %sParserInfo** %135, align 8
  %136 = getelementptr inbounds %sParserInfo, %sParserInfo* %info77, i32 0, i32 4
  %137 = load i8*, i8** %136, align 8
  %138 = ptrtoint i8* %137 to i64
  %addtmp78 = add nsw i64 %138, 1
  %intToPtr279 = inttoptr i64 %addtmp78 to i8*
  %139 = getelementptr inbounds %sParserInfo, %sParserInfo* %info76, i32 0, i32 4
  store i8* %intToPtr279, i8** %139, align 8
  %140 = ptrtoint i8* %intToPtr279 to i64
  %subtmp80 = sub nsw i64 %140, 1
  %IntTOPtr4b81 = inttoptr i64 %subtmp80 to i8*
  br label %end_block

cond_else_block74:                                ; preds = %after_break82, %cond_else_block64
  br label %cond_then_block83

after_break82:                                    ; No predecessors!
  br label %cond_else_block74

cond_then_block83:                                ; preds = %cond_else_block74
  %141 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %142 = bitcast i8* %141 to %sParserInfo**
  %info85 = load %sParserInfo*, %sParserInfo** %142, align 8
  %143 = getelementptr inbounds %sParserInfo, %sParserInfo* %info85, i32 0, i32 4
  %144 = load i8*, i8** %143, align 8
  %derefference_value86 = load i8, i8* %144, align 8
  store i8 %derefference_value86, i8* %c, align 1
  %145 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %146 = bitcast i8* %145 to %sParserInfo**
  %info87 = load %sParserInfo*, %sParserInfo** %146, align 8
  %147 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %148 = bitcast i8* %147 to %sParserInfo**
  %info88 = load %sParserInfo*, %sParserInfo** %148, align 8
  %149 = getelementptr inbounds %sParserInfo, %sParserInfo* %info88, i32 0, i32 4
  %150 = load i8*, i8** %149, align 8
  %151 = ptrtoint i8* %150 to i64
  %addtmp89 = add nsw i64 %151, 1
  %intToPtr290 = inttoptr i64 %addtmp89 to i8*
  %152 = getelementptr inbounds %sParserInfo, %sParserInfo* %info87, i32 0, i32 4
  store i8* %intToPtr290, i8** %152, align 8
  %153 = ptrtoint i8* %intToPtr290 to i64
  %subtmp91 = sub nsw i64 %153, 1
  %IntTOPtr4b92 = inttoptr i64 %subtmp91 to i8*
  br label %end_block

cond_else_block84:                                ; preds = %after_break93
  br label %end_block

after_break93:                                    ; No predecessors!
  br label %cond_else_block84
}

define i1 @parse_regex(%buffer* %buf, i1* %ignore_case, i1* %global, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %buf2 = alloca %buffer*
  store %buffer* %buf, %buffer** %buf2, align 8
  %2 = bitcast %buffer** %buf2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %ignore_case3 = alloca i1*
  store i1* %ignore_case, i1** %ignore_case3, align 8
  %3 = bitcast i1** %ignore_case3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %global4 = alloca i1*
  store i1* %global, i1** %global4, align 8
  %4 = bitcast i1** %global4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %info5 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info5, align 8
  %5 = bitcast %sParserInfo** %info5 to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %7 = bitcast i8* %6 to %sParserInfo**
  %info6 = load %sParserInfo*, %sParserInfo** %7, align 8
  %8 = getelementptr inbounds %sParserInfo, %sParserInfo* %info6, i32 0, i32 4
  %9 = load i8*, i8** %8, align 8
  %derefference_value = load i8, i8* %9, align 8
  %eqtmpX = icmp eq i8 %derefference_value, 47
  br i1 %eqtmpX, label %cond_jump_then, label %"cond_jump_elif0\0A"

cond_end_block:                                   ; preds = %"cond_jump_elif_then0\0A", %cond_jump_then, %loop_top_block
  br label %loop_top_block122

cond_jump_then:                                   ; preds = %cond_then_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %11 = bitcast i8* %10 to %sParserInfo**
  %info7 = load %sParserInfo*, %sParserInfo** %11, align 8
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %13 = bitcast i8* %12 to %sParserInfo**
  %info8 = load %sParserInfo*, %sParserInfo** %13, align 8
  %14 = getelementptr inbounds %sParserInfo, %sParserInfo* %info8, i32 0, i32 4
  %15 = load i8*, i8** %14, align 8
  %16 = ptrtoint i8* %15 to i64
  %addtmp = add nsw i64 %16, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %17 = getelementptr inbounds %sParserInfo, %sParserInfo* %info7, i32 0, i32 4
  store i8* %intToPtr2, i8** %17, align 8
  %18 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %18, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %20 = bitcast i8* %19 to %sParserInfo**
  %info9 = load %sParserInfo*, %sParserInfo** %20, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info9)
  br label %cond_end_block

"cond_jump_elif0\0A":                             ; preds = %cond_then_block
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %22 = bitcast i8* %21 to %sParserInfo**
  %info10 = load %sParserInfo*, %sParserInfo** %22, align 8
  %23 = getelementptr inbounds %sParserInfo, %sParserInfo* %info10, i32 0, i32 4
  %24 = load i8*, i8** %23, align 8
  %derefference_value11 = load i8, i8* %24, align 8
  %eqtmpX12 = icmp eq i8 %derefference_value11, 0
  br i1 %eqtmpX12, label %"cond_jump_elif_then0\0A", label %"cond_jump_elif1\0A"

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %26 = bitcast i8* %25 to %sParserInfo**
  %info13 = load %sParserInfo*, %sParserInfo** %26, align 8
  call void @parser_err_msg(%sParserInfo* %info13, i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_string.22, i32 0, i32 0))
  br label %cond_end_block

"cond_jump_elif1\0A":                             ; preds = %"cond_jump_elif0\0A"
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %28 = bitcast i8* %27 to %sParserInfo**
  %info15 = load %sParserInfo*, %sParserInfo** %28, align 8
  %29 = getelementptr inbounds %sParserInfo, %sParserInfo* %info15, i32 0, i32 4
  %30 = load i8*, i8** %29, align 8
  %derefference_value16 = load i8, i8* %30, align 8
  %eqtmpX17 = icmp eq i8 %derefference_value16, 92
  br i1 %eqtmpX17, label %"cond_jump_elif_then1\0A", label %"cond_jump_elif2\0A"

"cond_jump_elif_then1\0A":                        ; preds = %"cond_jump_elif1\0A"
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %32 = bitcast i8* %31 to %sParserInfo**
  %info18 = load %sParserInfo*, %sParserInfo** %32, align 8
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %34 = bitcast i8* %33 to %sParserInfo**
  %info19 = load %sParserInfo*, %sParserInfo** %34, align 8
  %35 = getelementptr inbounds %sParserInfo, %sParserInfo* %info19, i32 0, i32 4
  %36 = load i8*, i8** %35, align 8
  %37 = ptrtoint i8* %36 to i64
  %addtmp20 = add nsw i64 %37, 1
  %intToPtr221 = inttoptr i64 %addtmp20 to i8*
  %38 = getelementptr inbounds %sParserInfo, %sParserInfo* %info18, i32 0, i32 4
  store i8* %intToPtr221, i8** %38, align 8
  %39 = ptrtoint i8* %intToPtr221 to i64
  %subtmp22 = sub nsw i64 %39, 1
  %IntTOPtr4b23 = inttoptr i64 %subtmp22 to i8*
  %c = alloca i8
  store i8* %c, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %41 = bitcast i8* %40 to %sParserInfo**
  %info24 = load %sParserInfo*, %sParserInfo** %41, align 8
  %42 = getelementptr inbounds %sParserInfo, %sParserInfo* %info24, i32 0, i32 4
  %43 = load i8*, i8** %42, align 8
  %derefference_value25 = load i8, i8* %43, align 8
  %eqtmpY = icmp eq i8 %derefference_value25, 110
  br i1 %eqtmpY, label %cond_then_block26, label %cond_else_block27

"cond_jump_elif2\0A":                             ; preds = %"cond_jump_elif1\0A"
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %45 = bitcast i8* %44 to %sParserInfo**
  %info98 = load %sParserInfo*, %sParserInfo** %45, align 8
  %46 = getelementptr inbounds %sParserInfo, %sParserInfo* %info98, i32 0, i32 4
  %47 = load i8*, i8** %46, align 8
  %derefference_value99 = load i8, i8* %47, align 8
  %eqtmpX100 = icmp eq i8 %derefference_value99, 10
  br i1 %eqtmpX100, label %"cond_jump_elif_then2\0A", label %cond_else_block

"cond_jump_elif_then2\0A":                        ; preds = %"cond_jump_elif2\0A"
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %49 = bitcast i8* %48 to %sParserInfo**
  %info101 = load %sParserInfo*, %sParserInfo** %49, align 8
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %51 = bitcast i8* %50 to %sParserInfo**
  %info102 = load %sParserInfo*, %sParserInfo** %51, align 8
  %52 = getelementptr inbounds %sParserInfo, %sParserInfo* %info102, i32 0, i32 1
  %53 = load i32, i32* %52, align 4
  %addtmp103 = add nsw i32 %53, 1
  %54 = getelementptr inbounds %sParserInfo, %sParserInfo* %info101, i32 0, i32 1
  store i32 %addtmp103, i32* %54, align 4
  %subttmp = sub nsw i32 %addtmp103, 1
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %56 = bitcast i8* %55 to %buffer**
  %buf104 = load %buffer*, %buffer** %56, align 8
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %58 = bitcast i8* %57 to %sParserInfo**
  %info105 = load %sParserInfo*, %sParserInfo** %58, align 8
  %59 = getelementptr inbounds %sParserInfo, %sParserInfo* %info105, i32 0, i32 4
  %60 = load i8*, i8** %59, align 8
  %derefference_value106 = load i8, i8* %60, align 8
  call void @buffer_append_char(%buffer* %buf104, i8 %derefference_value106)
  %61 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %62 = bitcast i8* %61 to %sParserInfo**
  %info107 = load %sParserInfo*, %sParserInfo** %62, align 8
  %63 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %64 = bitcast i8* %63 to %sParserInfo**
  %info108 = load %sParserInfo*, %sParserInfo** %64, align 8
  %65 = getelementptr inbounds %sParserInfo, %sParserInfo* %info108, i32 0, i32 4
  %66 = load i8*, i8** %65, align 8
  %67 = ptrtoint i8* %66 to i64
  %addtmp109 = add nsw i64 %67, 1
  %intToPtr2110 = inttoptr i64 %addtmp109 to i8*
  %68 = getelementptr inbounds %sParserInfo, %sParserInfo* %info107, i32 0, i32 4
  store i8* %intToPtr2110, i8** %68, align 8
  %69 = ptrtoint i8* %intToPtr2110 to i64
  %subtmp111 = sub nsw i64 %69, 1
  %IntTOPtr4b112 = inttoptr i64 %subtmp111 to i8*
  br label %cond_end

cond_else_block:                                  ; preds = %"cond_jump_elif2\0A"
  %70 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %71 = bitcast i8* %70 to %buffer**
  %buf113 = load %buffer*, %buffer** %71, align 8
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %73 = bitcast i8* %72 to %sParserInfo**
  %info114 = load %sParserInfo*, %sParserInfo** %73, align 8
  %74 = getelementptr inbounds %sParserInfo, %sParserInfo* %info114, i32 0, i32 4
  %75 = load i8*, i8** %74, align 8
  %derefference_value115 = load i8, i8* %75, align 8
  call void @buffer_append_char(%buffer* %buf113, i8 %derefference_value115)
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %77 = bitcast i8* %76 to %sParserInfo**
  %info116 = load %sParserInfo*, %sParserInfo** %77, align 8
  %78 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %79 = bitcast i8* %78 to %sParserInfo**
  %info117 = load %sParserInfo*, %sParserInfo** %79, align 8
  %80 = getelementptr inbounds %sParserInfo, %sParserInfo* %info117, i32 0, i32 4
  %81 = load i8*, i8** %80, align 8
  %82 = ptrtoint i8* %81 to i64
  %addtmp118 = add nsw i64 %82, 1
  %intToPtr2119 = inttoptr i64 %addtmp118 to i8*
  %83 = getelementptr inbounds %sParserInfo, %sParserInfo* %info116, i32 0, i32 4
  store i8* %intToPtr2119, i8** %83, align 8
  %84 = ptrtoint i8* %intToPtr2119 to i64
  %subtmp120 = sub nsw i64 %84, 1
  %IntTOPtr4b121 = inttoptr i64 %subtmp120 to i8*
  br label %cond_end

cond_end:                                         ; preds = %cond_else_block, %"cond_jump_elif_then2\0A", %end_block, %after_break14, %after_break
  br label %loop_top_block

after_break:                                      ; No predecessors!
  br label %cond_end

after_break14:                                    ; No predecessors!
  br label %cond_end

end_block:                                        ; preds = %cond_else_block86, %cond_then_block85, %cond_then_block75, %cond_then_block65, %cond_then_block55, %cond_then_block45, %cond_then_block35, %cond_then_block26
  %85 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %86 = bitcast i8* %85 to %buffer**
  %buf96 = load %buffer*, %buffer** %86, align 8
  %c97 = load i8, i8* %c, align 1
  call void @buffer_append_char(%buffer* %buf96, i8 %c97)
  br label %cond_end

cond_then_block26:                                ; preds = %"cond_jump_elif_then1\0A"
  store i8 10, i8* %c, align 1
  %87 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %88 = bitcast i8* %87 to %sParserInfo**
  %info28 = load %sParserInfo*, %sParserInfo** %88, align 8
  %89 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %90 = bitcast i8* %89 to %sParserInfo**
  %info29 = load %sParserInfo*, %sParserInfo** %90, align 8
  %91 = getelementptr inbounds %sParserInfo, %sParserInfo* %info29, i32 0, i32 4
  %92 = load i8*, i8** %91, align 8
  %93 = ptrtoint i8* %92 to i64
  %addtmp30 = add nsw i64 %93, 1
  %intToPtr231 = inttoptr i64 %addtmp30 to i8*
  %94 = getelementptr inbounds %sParserInfo, %sParserInfo* %info28, i32 0, i32 4
  store i8* %intToPtr231, i8** %94, align 8
  %95 = ptrtoint i8* %intToPtr231 to i64
  %subtmp32 = sub nsw i64 %95, 1
  %IntTOPtr4b33 = inttoptr i64 %subtmp32 to i8*
  br label %end_block

cond_else_block27:                                ; preds = %after_break34, %"cond_jump_elif_then1\0A"
  %eqtmpY37 = icmp eq i8 %derefference_value25, 116
  br i1 %eqtmpY37, label %cond_then_block35, label %cond_else_block36

after_break34:                                    ; No predecessors!
  br label %cond_else_block27

cond_then_block35:                                ; preds = %cond_else_block27
  store i8 9, i8* %c, align 1
  %96 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %97 = bitcast i8* %96 to %sParserInfo**
  %info38 = load %sParserInfo*, %sParserInfo** %97, align 8
  %98 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %99 = bitcast i8* %98 to %sParserInfo**
  %info39 = load %sParserInfo*, %sParserInfo** %99, align 8
  %100 = getelementptr inbounds %sParserInfo, %sParserInfo* %info39, i32 0, i32 4
  %101 = load i8*, i8** %100, align 8
  %102 = ptrtoint i8* %101 to i64
  %addtmp40 = add nsw i64 %102, 1
  %intToPtr241 = inttoptr i64 %addtmp40 to i8*
  %103 = getelementptr inbounds %sParserInfo, %sParserInfo* %info38, i32 0, i32 4
  store i8* %intToPtr241, i8** %103, align 8
  %104 = ptrtoint i8* %intToPtr241 to i64
  %subtmp42 = sub nsw i64 %104, 1
  %IntTOPtr4b43 = inttoptr i64 %subtmp42 to i8*
  br label %end_block

cond_else_block36:                                ; preds = %after_break44, %cond_else_block27
  %eqtmpY47 = icmp eq i8 %derefference_value25, 114
  br i1 %eqtmpY47, label %cond_then_block45, label %cond_else_block46

after_break44:                                    ; No predecessors!
  br label %cond_else_block36

cond_then_block45:                                ; preds = %cond_else_block36
  store i8 13, i8* %c, align 1
  %105 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %106 = bitcast i8* %105 to %sParserInfo**
  %info48 = load %sParserInfo*, %sParserInfo** %106, align 8
  %107 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %108 = bitcast i8* %107 to %sParserInfo**
  %info49 = load %sParserInfo*, %sParserInfo** %108, align 8
  %109 = getelementptr inbounds %sParserInfo, %sParserInfo* %info49, i32 0, i32 4
  %110 = load i8*, i8** %109, align 8
  %111 = ptrtoint i8* %110 to i64
  %addtmp50 = add nsw i64 %111, 1
  %intToPtr251 = inttoptr i64 %addtmp50 to i8*
  %112 = getelementptr inbounds %sParserInfo, %sParserInfo* %info48, i32 0, i32 4
  store i8* %intToPtr251, i8** %112, align 8
  %113 = ptrtoint i8* %intToPtr251 to i64
  %subtmp52 = sub nsw i64 %113, 1
  %IntTOPtr4b53 = inttoptr i64 %subtmp52 to i8*
  br label %end_block

cond_else_block46:                                ; preds = %after_break54, %cond_else_block36
  %eqtmpY57 = icmp eq i8 %derefference_value25, 97
  br i1 %eqtmpY57, label %cond_then_block55, label %cond_else_block56

after_break54:                                    ; No predecessors!
  br label %cond_else_block46

cond_then_block55:                                ; preds = %cond_else_block46
  store i8 7, i8* %c, align 1
  %114 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %115 = bitcast i8* %114 to %sParserInfo**
  %info58 = load %sParserInfo*, %sParserInfo** %115, align 8
  %116 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %117 = bitcast i8* %116 to %sParserInfo**
  %info59 = load %sParserInfo*, %sParserInfo** %117, align 8
  %118 = getelementptr inbounds %sParserInfo, %sParserInfo* %info59, i32 0, i32 4
  %119 = load i8*, i8** %118, align 8
  %120 = ptrtoint i8* %119 to i64
  %addtmp60 = add nsw i64 %120, 1
  %intToPtr261 = inttoptr i64 %addtmp60 to i8*
  %121 = getelementptr inbounds %sParserInfo, %sParserInfo* %info58, i32 0, i32 4
  store i8* %intToPtr261, i8** %121, align 8
  %122 = ptrtoint i8* %intToPtr261 to i64
  %subtmp62 = sub nsw i64 %122, 1
  %IntTOPtr4b63 = inttoptr i64 %subtmp62 to i8*
  br label %end_block

cond_else_block56:                                ; preds = %after_break64, %cond_else_block46
  %eqtmpY67 = icmp eq i8 %derefference_value25, 92
  br i1 %eqtmpY67, label %cond_then_block65, label %cond_else_block66

after_break64:                                    ; No predecessors!
  br label %cond_else_block56

cond_then_block65:                                ; preds = %cond_else_block56
  store i8 92, i8* %c, align 1
  %123 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %124 = bitcast i8* %123 to %sParserInfo**
  %info68 = load %sParserInfo*, %sParserInfo** %124, align 8
  %125 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %126 = bitcast i8* %125 to %sParserInfo**
  %info69 = load %sParserInfo*, %sParserInfo** %126, align 8
  %127 = getelementptr inbounds %sParserInfo, %sParserInfo* %info69, i32 0, i32 4
  %128 = load i8*, i8** %127, align 8
  %129 = ptrtoint i8* %128 to i64
  %addtmp70 = add nsw i64 %129, 1
  %intToPtr271 = inttoptr i64 %addtmp70 to i8*
  %130 = getelementptr inbounds %sParserInfo, %sParserInfo* %info68, i32 0, i32 4
  store i8* %intToPtr271, i8** %130, align 8
  %131 = ptrtoint i8* %intToPtr271 to i64
  %subtmp72 = sub nsw i64 %131, 1
  %IntTOPtr4b73 = inttoptr i64 %subtmp72 to i8*
  br label %end_block

cond_else_block66:                                ; preds = %after_break74, %cond_else_block56
  %eqtmpY77 = icmp eq i8 %derefference_value25, 48
  br i1 %eqtmpY77, label %cond_then_block75, label %cond_else_block76

after_break74:                                    ; No predecessors!
  br label %cond_else_block66

cond_then_block75:                                ; preds = %cond_else_block66
  store i8 0, i8* %c, align 1
  %132 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %133 = bitcast i8* %132 to %sParserInfo**
  %info78 = load %sParserInfo*, %sParserInfo** %133, align 8
  %134 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %135 = bitcast i8* %134 to %sParserInfo**
  %info79 = load %sParserInfo*, %sParserInfo** %135, align 8
  %136 = getelementptr inbounds %sParserInfo, %sParserInfo* %info79, i32 0, i32 4
  %137 = load i8*, i8** %136, align 8
  %138 = ptrtoint i8* %137 to i64
  %addtmp80 = add nsw i64 %138, 1
  %intToPtr281 = inttoptr i64 %addtmp80 to i8*
  %139 = getelementptr inbounds %sParserInfo, %sParserInfo* %info78, i32 0, i32 4
  store i8* %intToPtr281, i8** %139, align 8
  %140 = ptrtoint i8* %intToPtr281 to i64
  %subtmp82 = sub nsw i64 %140, 1
  %IntTOPtr4b83 = inttoptr i64 %subtmp82 to i8*
  br label %end_block

cond_else_block76:                                ; preds = %after_break84, %cond_else_block66
  br label %cond_then_block85

after_break84:                                    ; No predecessors!
  br label %cond_else_block76

cond_then_block85:                                ; preds = %cond_else_block76
  %141 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %142 = bitcast i8* %141 to %sParserInfo**
  %info87 = load %sParserInfo*, %sParserInfo** %142, align 8
  %143 = getelementptr inbounds %sParserInfo, %sParserInfo* %info87, i32 0, i32 4
  %144 = load i8*, i8** %143, align 8
  %derefference_value88 = load i8, i8* %144, align 8
  store i8 %derefference_value88, i8* %c, align 1
  %145 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %146 = bitcast i8* %145 to %sParserInfo**
  %info89 = load %sParserInfo*, %sParserInfo** %146, align 8
  %147 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %148 = bitcast i8* %147 to %sParserInfo**
  %info90 = load %sParserInfo*, %sParserInfo** %148, align 8
  %149 = getelementptr inbounds %sParserInfo, %sParserInfo* %info90, i32 0, i32 4
  %150 = load i8*, i8** %149, align 8
  %151 = ptrtoint i8* %150 to i64
  %addtmp91 = add nsw i64 %151, 1
  %intToPtr292 = inttoptr i64 %addtmp91 to i8*
  %152 = getelementptr inbounds %sParserInfo, %sParserInfo* %info89, i32 0, i32 4
  store i8* %intToPtr292, i8** %152, align 8
  %153 = ptrtoint i8* %intToPtr292 to i64
  %subtmp93 = sub nsw i64 %153, 1
  %IntTOPtr4b94 = inttoptr i64 %subtmp93 to i8*
  br label %end_block

cond_else_block86:                                ; preds = %after_break95
  br label %end_block

after_break95:                                    ; No predecessors!
  br label %cond_else_block86

loop_top_block122:                                ; preds = %cond_end132, %cond_end_block
  br i1 true, label %cond_then_block123, label %cond_end_block124

cond_then_block123:                               ; preds = %loop_top_block122
  %154 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %155 = bitcast i8* %154 to %sParserInfo**
  %info125 = load %sParserInfo*, %sParserInfo** %155, align 8
  %156 = getelementptr inbounds %sParserInfo, %sParserInfo* %info125, i32 0, i32 4
  %157 = load i8*, i8** %156, align 8
  %derefference_value126 = load i8, i8* %157, align 8
  %eqtmpX127 = icmp eq i8 %derefference_value126, 103
  br i1 %eqtmpX127, label %cond_jump_then128, label %"cond_jump_elif0\0A129"

cond_end_block124:                                ; preds = %cond_else_block131, %loop_top_block122
  %info151 = load %sParserInfo*, %sParserInfo** %info5, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info151)
  %158 = bitcast [8192 x i8*]* %lvtable to i8*
  %159 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %158, i64 65536)
  ret i1 true

cond_jump_then128:                                ; preds = %cond_then_block123
  %160 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %161 = bitcast i8* %160 to %sParserInfo**
  %info133 = load %sParserInfo*, %sParserInfo** %161, align 8
  %162 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %163 = bitcast i8* %162 to %sParserInfo**
  %info134 = load %sParserInfo*, %sParserInfo** %163, align 8
  %164 = getelementptr inbounds %sParserInfo, %sParserInfo* %info134, i32 0, i32 4
  %165 = load i8*, i8** %164, align 8
  %166 = ptrtoint i8* %165 to i64
  %addtmp135 = add nsw i64 %166, 1
  %intToPtr2136 = inttoptr i64 %addtmp135 to i8*
  %167 = getelementptr inbounds %sParserInfo, %sParserInfo* %info133, i32 0, i32 4
  store i8* %intToPtr2136, i8** %167, align 8
  %168 = ptrtoint i8* %intToPtr2136 to i64
  %subtmp137 = sub nsw i64 %168, 1
  %IntTOPtr4b138 = inttoptr i64 %subtmp137 to i8*
  %169 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %170 = bitcast i8* %169 to i1**
  %global139 = load i1*, i1** %170, align 8
  store i1 true, i1* %global139, align 1
  br label %cond_end132

"cond_jump_elif0\0A129":                          ; preds = %cond_then_block123
  %171 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %172 = bitcast i8* %171 to %sParserInfo**
  %info140 = load %sParserInfo*, %sParserInfo** %172, align 8
  %173 = getelementptr inbounds %sParserInfo, %sParserInfo* %info140, i32 0, i32 4
  %174 = load i8*, i8** %173, align 8
  %derefference_value141 = load i8, i8* %174, align 8
  %eqtmpX142 = icmp eq i8 %derefference_value141, 105
  br i1 %eqtmpX142, label %"cond_jump_elif_then0\0A130", label %cond_else_block131

"cond_jump_elif_then0\0A130":                     ; preds = %"cond_jump_elif0\0A129"
  %175 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %176 = bitcast i8* %175 to %sParserInfo**
  %info143 = load %sParserInfo*, %sParserInfo** %176, align 8
  %177 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %178 = bitcast i8* %177 to %sParserInfo**
  %info144 = load %sParserInfo*, %sParserInfo** %178, align 8
  %179 = getelementptr inbounds %sParserInfo, %sParserInfo* %info144, i32 0, i32 4
  %180 = load i8*, i8** %179, align 8
  %181 = ptrtoint i8* %180 to i64
  %addtmp145 = add nsw i64 %181, 1
  %intToPtr2146 = inttoptr i64 %addtmp145 to i8*
  %182 = getelementptr inbounds %sParserInfo, %sParserInfo* %info143, i32 0, i32 4
  store i8* %intToPtr2146, i8** %182, align 8
  %183 = ptrtoint i8* %intToPtr2146 to i64
  %subtmp147 = sub nsw i64 %183, 1
  %IntTOPtr4b148 = inttoptr i64 %subtmp147 to i8*
  %184 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %185 = bitcast i8* %184 to i1**
  %ignore_case149 = load i1*, i1** %185, align 8
  store i1 true, i1* %ignore_case149, align 1
  br label %cond_end132

cond_else_block131:                               ; preds = %"cond_jump_elif0\0A129"
  br label %cond_end_block124

cond_end132:                                      ; preds = %after_break150, %"cond_jump_elif_then0\0A130", %cond_jump_then128
  br label %loop_top_block122

after_break150:                                   ; No predecessors!
  br label %cond_end132
}

define internal i1 @parse_list(%sCLNode** %elements, i32* %num_elements, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %elements2 = alloca %sCLNode**
  store %sCLNode** %elements, %sCLNode*** %elements2, align 8
  %2 = bitcast %sCLNode*** %elements2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %num_elements3 = alloca i32*
  store i32* %num_elements, i32** %num_elements3, align 8
  %3 = bitcast i32** %num_elements3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %info4 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info4, align 8
  %4 = bitcast %sParserInfo** %info4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %6 = bitcast i8* %5 to %sParserInfo**
  %info5 = load %sParserInfo*, %sParserInfo** %6, align 8
  %7 = getelementptr inbounds %sParserInfo, %sParserInfo* %info5, i32 0, i32 4
  %8 = load i8*, i8** %7, align 8
  %derefference_value = load i8, i8* %8, align 8
  %eqtmpX = icmp eq i8 %derefference_value, 93
  br i1 %eqtmpX, label %cond_jump_then, label %"cond_jump_elif0\0A"

cond_end_block:                                   ; preds = %"cond_jump_elif_then0\0A", %cond_jump_then, %loop_top_block
  %9 = bitcast [8192 x i8*]* %lvtable to i8*
  %10 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %9, i64 65536)
  ret i1 true

cond_jump_then:                                   ; preds = %cond_then_block
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %12 = bitcast i8* %11 to %sParserInfo**
  %info6 = load %sParserInfo*, %sParserInfo** %12, align 8
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %14 = bitcast i8* %13 to %sParserInfo**
  %info7 = load %sParserInfo*, %sParserInfo** %14, align 8
  %15 = getelementptr inbounds %sParserInfo, %sParserInfo* %info7, i32 0, i32 4
  %16 = load i8*, i8** %15, align 8
  %17 = ptrtoint i8* %16 to i64
  %addtmp = add nsw i64 %17, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %18 = getelementptr inbounds %sParserInfo, %sParserInfo* %info6, i32 0, i32 4
  store i8* %intToPtr2, i8** %18, align 8
  %19 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %19, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %21 = bitcast i8* %20 to %sParserInfo**
  %info8 = load %sParserInfo*, %sParserInfo** %21, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info8)
  br label %cond_end_block

"cond_jump_elif0\0A":                             ; preds = %cond_then_block
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %23 = bitcast i8* %22 to %sParserInfo**
  %info9 = load %sParserInfo*, %sParserInfo** %23, align 8
  %24 = getelementptr inbounds %sParserInfo, %sParserInfo* %info9, i32 0, i32 4
  %25 = load i8*, i8** %24, align 8
  %derefference_value10 = load i8, i8* %25, align 8
  %eqtmpX11 = icmp eq i8 %derefference_value10, 0
  br i1 %eqtmpX11, label %"cond_jump_elif_then0\0A", label %cond_else_block

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %27 = bitcast i8* %26 to %sParserInfo**
  %info12 = load %sParserInfo*, %sParserInfo** %27, align 8
  call void @parser_err_msg(%sParserInfo* %info12, i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_string.23, i32 0, i32 0))
  br label %cond_end_block

cond_else_block:                                  ; preds = %"cond_jump_elif0\0A"
  %exp = alloca %sCLNode*
  %28 = bitcast %sCLNode** %exp to i8*
  store i8* %28, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store %sCLNode* null, %sCLNode** %exp, align 8
  %exp14 = load %sCLNode*, %sCLNode** %exp, align 8
  %29 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %30 = bitcast i8* %29 to %sParserInfo**
  %info15 = load %sParserInfo*, %sParserInfo** %30, align 8
  %31 = call i1 @expression(%sCLNode** %exp, %sParserInfo* %info15)
  %LOGICAL_DIANEAL = icmp eq i1 %31, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then16, label %cond_end17

cond_end:                                         ; preds = %cond_end33, %after_break13, %after_break
  br label %loop_top_block

after_break:                                      ; No predecessors!
  br label %cond_end

after_break13:                                    ; No predecessors!
  br label %cond_end

cond_jump_then16:                                 ; preds = %cond_else_block
  %32 = bitcast [8192 x i8*]* %lvtable to i8*
  %33 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %32, i64 65536)
  ret i1 false

cond_end17:                                       ; preds = %cond_else_block
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %35 = bitcast i8* %34 to %sCLNode***
  %elements18 = load %sCLNode**, %sCLNode*** %35, align 8
  %36 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %37 = bitcast i8* %36 to i32**
  %num_elements19 = load i32*, i32** %37, align 8
  %derefference_value20 = load i32, i32* %num_elements19, align 8
  %exp21 = load %sCLNode*, %sCLNode** %exp, align 8
  %element_addressD = getelementptr %sCLNode*, %sCLNode** %elements18, i32 %derefference_value20
  store %sCLNode* %exp21, %sCLNode** %element_addressD, align 8
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %39 = bitcast i8* %38 to i32**
  %num_elements22 = load i32*, i32** %39, align 8
  %derefference_value23 = load i32, i32* %num_elements22, align 8
  %40 = load i32, i32* %num_elements22, align 4
  %addtmp24 = add nsw i32 %40, 1
  store i32 %addtmp24, i32* %num_elements22, align 8
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %42 = bitcast i8* %41 to i32**
  %num_elements25 = load i32*, i32** %42, align 8
  %derefference_value26 = load i32, i32* %num_elements25, align 8
  %getmp = icmp sge i32 %derefference_value26, 128
  br i1 %getmp, label %cond_jump_then27, label %cond_end28

cond_jump_then27:                                 ; preds = %cond_end17
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %43 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_string.24, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end28

cond_end28:                                       ; preds = %cond_jump_then27, %cond_end17
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %45 = bitcast i8* %44 to %sParserInfo**
  %info29 = load %sParserInfo*, %sParserInfo** %45, align 8
  %46 = getelementptr inbounds %sParserInfo, %sParserInfo* %info29, i32 0, i32 4
  %47 = load i8*, i8** %46, align 8
  %derefference_value30 = load i8, i8* %47, align 8
  %eqtmpX31 = icmp eq i8 %derefference_value30, 44
  br i1 %eqtmpX31, label %cond_jump_then32, label %cond_end33

cond_jump_then32:                                 ; preds = %cond_end28
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %49 = bitcast i8* %48 to %sParserInfo**
  %info34 = load %sParserInfo*, %sParserInfo** %49, align 8
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %51 = bitcast i8* %50 to %sParserInfo**
  %info35 = load %sParserInfo*, %sParserInfo** %51, align 8
  %52 = getelementptr inbounds %sParserInfo, %sParserInfo* %info35, i32 0, i32 4
  %53 = load i8*, i8** %52, align 8
  %54 = ptrtoint i8* %53 to i64
  %addtmp36 = add nsw i64 %54, 1
  %intToPtr237 = inttoptr i64 %addtmp36 to i8*
  %55 = getelementptr inbounds %sParserInfo, %sParserInfo* %info34, i32 0, i32 4
  store i8* %intToPtr237, i8** %55, align 8
  %56 = ptrtoint i8* %intToPtr237 to i64
  %subtmp38 = sub nsw i64 %56, 1
  %IntTOPtr4b39 = inttoptr i64 %subtmp38 to i8*
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %58 = bitcast i8* %57 to %sParserInfo**
  %info40 = load %sParserInfo*, %sParserInfo** %58, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info40)
  br label %cond_end33

cond_end33:                                       ; preds = %cond_jump_then32, %cond_end28
  br label %cond_end
}

define i1 @read_stdin(%buffer* %buf) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %buf2 = alloca %buffer*
  store %buffer* %buf, %buffer** %buf2, align 8
  %2 = bitcast %buffer** %buf2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_then_block, %entry
  %stdin = load %_IO_FILE*, %_IO_FILE** @stdin, align 8
  %3 = call i32 @feof(%_IO_FILE* %stdin)
  %4 = icmp ne i32 %3, 0
  %LOGICAL_DIANEAL = icmp eq i1 %4, false
  br i1 %LOGICAL_DIANEAL, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %buf23 = alloca i8*
  %5 = bitcast i8** %buf23 to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %element_memory = alloca i8, i32 8192
  store i8* %element_memory, i8** %buf23, align 8
  %buf24 = load i8*, i8** %buf23, align 8
  %stdin5 = load %_IO_FILE*, %_IO_FILE** @stdin, align 8
  %6 = call i8* @fgets(i8* %buf24, i32 8192, %_IO_FILE* %stdin5)
  %7 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %8 = bitcast i8* %7 to %buffer**
  %buf6 = load %buffer*, %buffer** %8, align 8
  %buf27 = load i8*, i8** %buf23, align 8
  call void @buffer_append_str(%buffer* %buf6, i8* %buf27)
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %9 = bitcast [8192 x i8*]* %lvtable to i8*
  %10 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %9, i64 65536)
  ret i1 true
}

define i1 @is_system_method(i8* %method_name) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %method_name2 = alloca i8*
  store i8* %method_name, i8** %method_name2, align 8
  %2 = bitcast i8** %method_name2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %gClasses = load %map__charp_sCLClassp*, %map__charp_sCLClassp** @gClasses, align 8
  %3 = call %sCLClass* @"at_charp_sCLClassp17_src/parser"(%map__charp_sCLClassp* %gClasses, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_string.25, i32 0, i32 0), %sCLClass* null)
  %system_class = alloca %sCLClass*
  %4 = bitcast %sCLClass** %system_class to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  store %sCLClass* %3, %sCLClass** %system_class, align 8
  %system_class3 = load %sCLClass*, %sCLClass** %system_class, align 8
  %eqtmpX = icmp eq %sCLClass* %system_class3, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %5 = bitcast [8192 x i8*]* %lvtable to i8*
  %6 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %5, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %entry
  %system_class4 = load %sCLClass*, %sCLClass** %system_class, align 8
  %7 = getelementptr inbounds %sCLClass, %sCLClass* %system_class4, i32 0, i32 1
  %8 = load %map__charp_sCLMethodp*, %map__charp_sCLMethodp** %7, align 8
  %method_name5 = load i8*, i8** %method_name2, align 8
  %9 = call %sCLMethod* @"at_charp_sCLMethodp18_src/parser"(%map__charp_sCLMethodp* %8, i8* %method_name5, %sCLMethod* null)
  %noteqtmp = icmp ne %sCLMethod* %9, null
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret i1 %noteqtmp
}

define %sCLClass* @"at_charp_sCLClassp17_src/parser"(%map__charp_sCLClassp* %self, i8* %key, %sCLClass* %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_sCLClassp*
  store %map__charp_sCLClassp* %self, %map__charp_sCLClassp** %self2, align 8
  %2 = bitcast %map__charp_sCLClassp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %default_value4 = alloca %sCLClass*
  store %sCLClass* %default_value, %sCLClass** %default_value4, align 8
  %4 = bitcast %sCLClass** %default_value4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %key5 = load i8*, i8** %key3, align 8
  %5 = call i32 @string_get_hash_key(i8* %key5)
  %self6 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %self2, align 8
  %6 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self6, i32 0, i32 3
  %7 = load i32, i32* %6, align 4
  %remtmp = srem i32 %5, %7
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash7 = load i32, i32* %hash, align 4
  %it = alloca i32
  %9 = bitcast i32* %it to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i32 %hash7, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %11 = bitcast i8* %10 to %map__charp_sCLClassp**
  %self8 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %11, align 8
  %12 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self8, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
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
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %19 = bitcast i8* %18 to %map__charp_sCLClassp**
  %self10 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %19, align 8
  %20 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self10, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %23 = bitcast i8* %22 to i32*
  %it11 = load i32, i32* %23, align 4
  %element_addressB12 = getelementptr i8*, i8** %21, i32 %it11
  %element13 = load i8*, i8** %element_addressB12, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %25 = bitcast i8* %24 to i8**
  %key14 = load i8*, i8** %25, align 8
  %26 = call i1 @string_equals(i8* %element13, i8* %key14)
  br i1 %26, label %cond_jump_then15, label %cond_end16

cond_else_block:                                  ; preds = %cond_then_block
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %28 = bitcast i8* %27 to %sCLClass**
  %default_value29 = load %sCLClass*, %sCLClass** %28, align 8
  %29 = bitcast [8192 x i8*]* %lvtable to i8*
  %30 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %29, i64 65536)
  ret %sCLClass* %default_value29

cond_end:                                         ; preds = %cond_end25
  br label %loop_top_block

cond_jump_then15:                                 ; preds = %cond_jump_then
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %32 = bitcast i8* %31 to %map__charp_sCLClassp**
  %self17 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %32, align 8
  %33 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self17, i32 0, i32 2
  %34 = load %sCLClass**, %sCLClass*** %33, align 8
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %36 = bitcast i8* %35 to i32*
  %it18 = load i32, i32* %36, align 4
  %element_addressB19 = getelementptr %sCLClass*, %sCLClass** %34, i32 %it18
  %element20 = load %sCLClass*, %sCLClass** %element_addressB19, align 8
  %37 = bitcast [8192 x i8*]* %lvtable to i8*
  %38 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %37, i64 65536)
  ret %sCLClass* %element20

cond_end16:                                       ; preds = %cond_jump_then
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %40 = bitcast i8* %39 to i32*
  %it21 = load i32, i32* %40, align 4
  %addtmp = add nsw i32 %it21, 1
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %42 = bitcast i8* %41 to i32*
  store i32 %addtmp, i32* %42, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %44 = bitcast i8* %43 to i32*
  %it22 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %46 = bitcast i8* %45 to %map__charp_sCLClassp**
  %self23 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %46, align 8
  %47 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self23, i32 0, i32 3
  %48 = load i32, i32* %47, align 4
  %getmp = icmp sge i32 %it22, %48
  br i1 %getmp, label %cond_jump_then24, label %"cond_jump_elif0\0A"

cond_jump_then24:                                 ; preds = %cond_end16
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %50 = bitcast i8* %49 to i32*
  store i32 0, i32* %50, align 4
  br label %cond_end25

"cond_jump_elif0\0A":                             ; preds = %cond_end16
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %52 = bitcast i8* %51 to i32*
  %it26 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %54 = bitcast i8* %53 to i32*
  %hash27 = load i32, i32* %54, align 4
  %eqtmpX = icmp eq i32 %it26, %hash27
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end25

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %56 = bitcast i8* %55 to %sCLClass**
  %default_value28 = load %sCLClass*, %sCLClass** %56, align 8
  %57 = bitcast [8192 x i8*]* %lvtable to i8*
  %58 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %57, i64 65536)
  ret %sCLClass* %default_value28

cond_end25:                                       ; preds = %"cond_jump_elif0\0A", %cond_jump_then24
  br label %cond_end
}

define %sCLMethod* @"at_charp_sCLMethodp18_src/parser"(%map__charp_sCLMethodp* %self, i8* %key, %sCLMethod* %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_sCLMethodp*
  store %map__charp_sCLMethodp* %self, %map__charp_sCLMethodp** %self2, align 8
  %2 = bitcast %map__charp_sCLMethodp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %default_value4 = alloca %sCLMethod*
  store %sCLMethod* %default_value, %sCLMethod** %default_value4, align 8
  %4 = bitcast %sCLMethod** %default_value4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %key5 = load i8*, i8** %key3, align 8
  %5 = call i32 @string_get_hash_key(i8* %key5)
  %self6 = load %map__charp_sCLMethodp*, %map__charp_sCLMethodp** %self2, align 8
  %6 = getelementptr inbounds %map__charp_sCLMethodp, %map__charp_sCLMethodp* %self6, i32 0, i32 3
  %7 = load i32, i32* %6, align 4
  %remtmp = srem i32 %5, %7
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash7 = load i32, i32* %hash, align 4
  %it = alloca i32
  %9 = bitcast i32* %it to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i32 %hash7, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %11 = bitcast i8* %10 to %map__charp_sCLMethodp**
  %self8 = load %map__charp_sCLMethodp*, %map__charp_sCLMethodp** %11, align 8
  %12 = getelementptr inbounds %map__charp_sCLMethodp, %map__charp_sCLMethodp* %self8, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
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
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %19 = bitcast i8* %18 to %map__charp_sCLMethodp**
  %self10 = load %map__charp_sCLMethodp*, %map__charp_sCLMethodp** %19, align 8
  %20 = getelementptr inbounds %map__charp_sCLMethodp, %map__charp_sCLMethodp* %self10, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %23 = bitcast i8* %22 to i32*
  %it11 = load i32, i32* %23, align 4
  %element_addressB12 = getelementptr i8*, i8** %21, i32 %it11
  %element13 = load i8*, i8** %element_addressB12, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %25 = bitcast i8* %24 to i8**
  %key14 = load i8*, i8** %25, align 8
  %26 = call i1 @string_equals(i8* %element13, i8* %key14)
  br i1 %26, label %cond_jump_then15, label %cond_end16

cond_else_block:                                  ; preds = %cond_then_block
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %28 = bitcast i8* %27 to %sCLMethod**
  %default_value29 = load %sCLMethod*, %sCLMethod** %28, align 8
  %29 = bitcast [8192 x i8*]* %lvtable to i8*
  %30 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %29, i64 65536)
  ret %sCLMethod* %default_value29

cond_end:                                         ; preds = %cond_end25
  br label %loop_top_block

cond_jump_then15:                                 ; preds = %cond_jump_then
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %32 = bitcast i8* %31 to %map__charp_sCLMethodp**
  %self17 = load %map__charp_sCLMethodp*, %map__charp_sCLMethodp** %32, align 8
  %33 = getelementptr inbounds %map__charp_sCLMethodp, %map__charp_sCLMethodp* %self17, i32 0, i32 2
  %34 = load %sCLMethod**, %sCLMethod*** %33, align 8
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %36 = bitcast i8* %35 to i32*
  %it18 = load i32, i32* %36, align 4
  %element_addressB19 = getelementptr %sCLMethod*, %sCLMethod** %34, i32 %it18
  %element20 = load %sCLMethod*, %sCLMethod** %element_addressB19, align 8
  %37 = bitcast [8192 x i8*]* %lvtable to i8*
  %38 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %37, i64 65536)
  ret %sCLMethod* %element20

cond_end16:                                       ; preds = %cond_jump_then
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %40 = bitcast i8* %39 to i32*
  %it21 = load i32, i32* %40, align 4
  %addtmp = add nsw i32 %it21, 1
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %42 = bitcast i8* %41 to i32*
  store i32 %addtmp, i32* %42, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %44 = bitcast i8* %43 to i32*
  %it22 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %46 = bitcast i8* %45 to %map__charp_sCLMethodp**
  %self23 = load %map__charp_sCLMethodp*, %map__charp_sCLMethodp** %46, align 8
  %47 = getelementptr inbounds %map__charp_sCLMethodp, %map__charp_sCLMethodp* %self23, i32 0, i32 3
  %48 = load i32, i32* %47, align 4
  %getmp = icmp sge i32 %it22, %48
  br i1 %getmp, label %cond_jump_then24, label %"cond_jump_elif0\0A"

cond_jump_then24:                                 ; preds = %cond_end16
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %50 = bitcast i8* %49 to i32*
  store i32 0, i32* %50, align 4
  br label %cond_end25

"cond_jump_elif0\0A":                             ; preds = %cond_end16
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %52 = bitcast i8* %51 to i32*
  %it26 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %54 = bitcast i8* %53 to i32*
  %hash27 = load i32, i32* %54, align 4
  %eqtmpX = icmp eq i32 %it26, %hash27
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end25

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %56 = bitcast i8* %55 to %sCLMethod**
  %default_value28 = load %sCLMethod*, %sCLMethod** %56, align 8
  %57 = bitcast [8192 x i8*]* %lvtable to i8*
  %58 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %57, i64 65536)
  ret %sCLMethod* %default_value28

cond_end25:                                       ; preds = %"cond_jump_elif0\0A", %cond_jump_then24
  br label %cond_end
}

define internal i1 @expression_node(%sCLNode** %node, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %node2 = alloca %sCLNode**
  store %sCLNode** %node, %sCLNode*** %node2, align 8
  %2 = bitcast %sCLNode*** %node2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %num_method_chains = alloca i32
  %4 = bitcast i32* %num_method_chains to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store i32 0, i32* %num_method_chains, align 4
  %info4 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %5 = getelementptr inbounds %sParserInfo, %sParserInfo* %info4, i32 0, i32 4
  %6 = load i8*, i8** %5, align 8
  %derefference_value = load i8, i8* %6, align 8
  %eqtmpX = icmp eq i8 %derefference_value, 45
  store i1 %eqtmpX, i1* %andand_result_var, align 1
  br i1 %eqtmpX, label %cond_jump_then, label %cond_jump_end

cond_jump_then:                                   ; preds = %entry
  %info5 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %7 = getelementptr inbounds %sParserInfo, %sParserInfo* %info5, i32 0, i32 4
  %8 = load i8*, i8** %7, align 8
  %9 = ptrtoint i8* %8 to i64
  %addtmp = add nsw i64 %9, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %derefference_value6 = load i8, i8* %intToPtr2, align 8
  %noteqtmp = icmp ne i8 %derefference_value6, 61
  %andand = and i1 %eqtmpX, %noteqtmp
  store i1 %andand, i1* %andand_result_var, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then, %entry
  %andand_result_value = load i1, i1* %andand_result_var, align 1
  store i1 %andand_result_value, i1* %andand_result_var, align 1
  br i1 %andand_result_value, label %cond_jump_then7, label %cond_jump_end8

cond_jump_then7:                                  ; preds = %cond_jump_end
  %info9 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %10 = getelementptr inbounds %sParserInfo, %sParserInfo* %info9, i32 0, i32 4
  %11 = load i8*, i8** %10, align 8
  %12 = ptrtoint i8* %11 to i64
  %addtmp10 = add nsw i64 %12, 1
  %intToPtr211 = inttoptr i64 %addtmp10 to i8*
  %derefference_value12 = load i8, i8* %intToPtr211, align 8
  %noteqtmp13 = icmp ne i8 %derefference_value12, 45
  %andand14 = and i1 %andand_result_value, %noteqtmp13
  store i1 %andand14, i1* %andand_result_var, align 1
  br label %cond_jump_end8

cond_jump_end8:                                   ; preds = %cond_jump_then7, %cond_jump_end
  %andand_result_value15 = load i1, i1* %andand_result_var, align 1
  store i1 %andand_result_value15, i1* %andand_result_var, align 1
  br i1 %andand_result_value15, label %cond_jump_then16, label %cond_jump_end17

cond_jump_then16:                                 ; preds = %cond_jump_end8
  %info18 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %13 = getelementptr inbounds %sParserInfo, %sParserInfo* %info18, i32 0, i32 4
  %14 = load i8*, i8** %13, align 8
  %15 = ptrtoint i8* %14 to i64
  %addtmp19 = add nsw i64 %15, 1
  %intToPtr220 = inttoptr i64 %addtmp19 to i8*
  %derefference_value21 = load i8, i8* %intToPtr220, align 8
  %noteqtmp22 = icmp ne i8 %derefference_value21, 62
  %andand23 = and i1 %andand_result_value15, %noteqtmp22
  store i1 %andand23, i1* %andand_result_var, align 1
  br label %cond_jump_end17

cond_jump_end17:                                  ; preds = %cond_jump_then16, %cond_jump_end8
  %andand_result_value24 = load i1, i1* %andand_result_var, align 1
  store i1 %andand_result_value24, i1* %andand_result_var1, align 1
  br i1 %andand_result_value24, label %cond_jump_end26, label %cond_jump_then25

cond_jump_then25:                                 ; preds = %cond_jump_end17
  %info27 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %16 = getelementptr inbounds %sParserInfo, %sParserInfo* %info27, i32 0, i32 4
  %17 = load i8*, i8** %16, align 8
  %derefference_value28 = load i8, i8* %17, align 8
  %eqtmpX29 = icmp eq i8 %derefference_value28, 43
  store i1 %eqtmpX29, i1* %andand_result_var, align 1
  br i1 %eqtmpX29, label %cond_jump_then30, label %cond_jump_end31

cond_jump_end26:                                  ; preds = %cond_jump_end40, %cond_jump_end17
  %oror_result_value = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value, label %cond_jump_then48, label %"cond_jump_elif0\0A"

cond_jump_then30:                                 ; preds = %cond_jump_then25
  %info32 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %18 = getelementptr inbounds %sParserInfo, %sParserInfo* %info32, i32 0, i32 4
  %19 = load i8*, i8** %18, align 8
  %20 = ptrtoint i8* %19 to i64
  %addtmp33 = add nsw i64 %20, 1
  %intToPtr234 = inttoptr i64 %addtmp33 to i8*
  %derefference_value35 = load i8, i8* %intToPtr234, align 8
  %noteqtmp36 = icmp ne i8 %derefference_value35, 61
  %andand37 = and i1 %eqtmpX29, %noteqtmp36
  store i1 %andand37, i1* %andand_result_var, align 1
  br label %cond_jump_end31

cond_jump_end31:                                  ; preds = %cond_jump_then30, %cond_jump_then25
  %andand_result_value38 = load i1, i1* %andand_result_var, align 1
  store i1 %andand_result_value38, i1* %andand_result_var, align 1
  br i1 %andand_result_value38, label %cond_jump_then39, label %cond_jump_end40

cond_jump_then39:                                 ; preds = %cond_jump_end31
  %info41 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %21 = getelementptr inbounds %sParserInfo, %sParserInfo* %info41, i32 0, i32 4
  %22 = load i8*, i8** %21, align 8
  %23 = ptrtoint i8* %22 to i64
  %addtmp42 = add nsw i64 %23, 1
  %intToPtr243 = inttoptr i64 %addtmp42 to i8*
  %derefference_value44 = load i8, i8* %intToPtr243, align 8
  %noteqtmp45 = icmp ne i8 %derefference_value44, 43
  %andand46 = and i1 %andand_result_value38, %noteqtmp45
  store i1 %andand46, i1* %andand_result_var, align 1
  br label %cond_jump_end40

cond_jump_end40:                                  ; preds = %cond_jump_then39, %cond_jump_end31
  %andand_result_value47 = load i1, i1* %andand_result_var, align 1
  %oror = or i1 %andand_result_value24, %andand_result_value47
  store i1 %oror, i1* %andand_result_var1, align 1
  br label %cond_jump_end26

cond_jump_then48:                                 ; preds = %cond_jump_end26
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %25 = bitcast i8* %24 to %sParserInfo**
  %info49 = load %sParserInfo*, %sParserInfo** %25, align 8
  %26 = getelementptr inbounds %sParserInfo, %sParserInfo* %info49, i32 0, i32 4
  %27 = load i8*, i8** %26, align 8
  %derefference_value50 = load i8, i8* %27, align 8
  %eqtmpX51 = icmp eq i8 %derefference_value50, 45
  br i1 %eqtmpX51, label %cond_jump_then52, label %"cond_jump_elif0\0A53"

"cond_jump_elif0\0A":                             ; preds = %cond_jump_end26
  %info112 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %28 = getelementptr inbounds %sParserInfo, %sParserInfo* %info112, i32 0, i32 4
  %29 = load i8*, i8** %28, align 8
  %derefference_value113 = load i8, i8* %29, align 8
  %eqtmpX114 = icmp eq i8 %derefference_value113, 34
  br i1 %eqtmpX114, label %"cond_jump_elif_then0\0A", label %"cond_jump_elif1\0A"

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %31 = bitcast i8* %30 to %sParserInfo**
  %info115 = load %sParserInfo*, %sParserInfo** %31, align 8
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %33 = bitcast i8* %32 to %sParserInfo**
  %info116 = load %sParserInfo*, %sParserInfo** %33, align 8
  %34 = getelementptr inbounds %sParserInfo, %sParserInfo* %info116, i32 0, i32 4
  %35 = load i8*, i8** %34, align 8
  %36 = ptrtoint i8* %35 to i64
  %addtmp117 = add nsw i64 %36, 1
  %intToPtr2118 = inttoptr i64 %addtmp117 to i8*
  %37 = getelementptr inbounds %sParserInfo, %sParserInfo* %info115, i32 0, i32 4
  store i8* %intToPtr2118, i8** %37, align 8
  %38 = ptrtoint i8* %intToPtr2118 to i64
  %subtmp119 = sub nsw i64 %38, 1
  %IntTOPtr4b120 = inttoptr i64 %subtmp119 to i8*
  %39 = call i8* @nccalloc(i64 1, i64 16)
  %40 = bitcast i8* %39 to %buffer*
  %41 = call %buffer* @buffer_initialize(%buffer* %40)
  %buf = alloca %buffer*
  %42 = bitcast %buffer** %buf to i8*
  store i8* %42, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store %buffer* %41, %buffer** %buf, align 8
  %buf121 = load %buffer*, %buffer** %buf, align 8
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %44 = bitcast i8* %43 to %sParserInfo**
  %info122 = load %sParserInfo*, %sParserInfo** %44, align 8
  %45 = call i1 @parse_string(%buffer* %buf121, %sParserInfo* %info122)
  %LOGICAL_DIANEAL123 = icmp eq i1 %45, false
  br i1 %LOGICAL_DIANEAL123, label %cond_jump_then124, label %cond_end125

"cond_jump_elif1\0A":                             ; preds = %"cond_jump_elif0\0A"
  %info135 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %46 = getelementptr inbounds %sParserInfo, %sParserInfo* %info135, i32 0, i32 4
  %47 = load i8*, i8** %46, align 8
  %derefference_value136 = load i8, i8* %47, align 8
  %eqtmpX137 = icmp eq i8 %derefference_value136, 47
  br i1 %eqtmpX137, label %"cond_jump_elif_then1\0A", label %"cond_jump_elif2\0A"

"cond_jump_elif_then1\0A":                        ; preds = %"cond_jump_elif1\0A"
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %49 = bitcast i8* %48 to %sParserInfo**
  %info138 = load %sParserInfo*, %sParserInfo** %49, align 8
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %51 = bitcast i8* %50 to %sParserInfo**
  %info139 = load %sParserInfo*, %sParserInfo** %51, align 8
  %52 = getelementptr inbounds %sParserInfo, %sParserInfo* %info139, i32 0, i32 4
  %53 = load i8*, i8** %52, align 8
  %54 = ptrtoint i8* %53 to i64
  %addtmp140 = add nsw i64 %54, 1
  %intToPtr2141 = inttoptr i64 %addtmp140 to i8*
  %55 = getelementptr inbounds %sParserInfo, %sParserInfo* %info138, i32 0, i32 4
  store i8* %intToPtr2141, i8** %55, align 8
  %56 = ptrtoint i8* %intToPtr2141 to i64
  %subtmp142 = sub nsw i64 %56, 1
  %IntTOPtr4b143 = inttoptr i64 %subtmp142 to i8*
  %57 = call i8* @nccalloc(i64 1, i64 16)
  %58 = bitcast i8* %57 to %buffer*
  %59 = call %buffer* @buffer_initialize(%buffer* %58)
  %buf144 = alloca %buffer*
  %60 = bitcast %buffer** %buf144 to i8*
  store i8* %60, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store %buffer* %59, %buffer** %buf144, align 8
  %ignore_case = alloca i1
  %61 = bitcast i1* %ignore_case to i8*
  store i8* %61, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i1 false, i1* %ignore_case, align 1
  %global = alloca i1
  %62 = bitcast i1* %global to i8*
  store i8* %62, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i1 false, i1* %global, align 1
  %buf145 = load %buffer*, %buffer** %buf144, align 8
  %ignore_case146 = load i1, i1* %ignore_case, align 1
  %global147 = load i1, i1* %global, align 1
  %63 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %64 = bitcast i8* %63 to %sParserInfo**
  %info148 = load %sParserInfo*, %sParserInfo** %64, align 8
  %65 = call i1 @parse_regex(%buffer* %buf145, i1* %ignore_case, i1* %global, %sParserInfo* %info148)
  %LOGICAL_DIANEAL149 = icmp eq i1 %65, false
  br i1 %LOGICAL_DIANEAL149, label %cond_jump_then150, label %cond_end151

"cond_jump_elif2\0A":                             ; preds = %"cond_jump_elif1\0A"
  %info165 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %66 = getelementptr inbounds %sParserInfo, %sParserInfo* %info165, i32 0, i32 4
  %67 = load i8*, i8** %66, align 8
  %derefference_value166 = load i8, i8* %67, align 8
  %eqtmpX167 = icmp eq i8 %derefference_value166, 91
  br i1 %eqtmpX167, label %"cond_jump_elif_then2\0A", label %"cond_jump_elif3\0A"

"cond_jump_elif_then2\0A":                        ; preds = %"cond_jump_elif2\0A"
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %69 = bitcast i8* %68 to %sParserInfo**
  %info168 = load %sParserInfo*, %sParserInfo** %69, align 8
  %70 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %71 = bitcast i8* %70 to %sParserInfo**
  %info169 = load %sParserInfo*, %sParserInfo** %71, align 8
  %72 = getelementptr inbounds %sParserInfo, %sParserInfo* %info169, i32 0, i32 4
  %73 = load i8*, i8** %72, align 8
  %74 = ptrtoint i8* %73 to i64
  %addtmp170 = add nsw i64 %74, 1
  %intToPtr2171 = inttoptr i64 %addtmp170 to i8*
  %75 = getelementptr inbounds %sParserInfo, %sParserInfo* %info168, i32 0, i32 4
  store i8* %intToPtr2171, i8** %75, align 8
  %76 = ptrtoint i8* %intToPtr2171 to i64
  %subtmp172 = sub nsw i64 %76, 1
  %IntTOPtr4b173 = inttoptr i64 %subtmp172 to i8*
  %elements = alloca [128 x %sCLNode*]
  %77 = bitcast [128 x %sCLNode*]* %elements to i8*
  store i8* %77, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %num_elements = alloca i32
  %78 = bitcast i32* %num_elements to i8*
  store i8* %78, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i32 0, i32* %num_elements, align 4
  %num_elements174 = load i32, i32* %num_elements, align 4
  %79 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %80 = bitcast i8* %79 to %sParserInfo**
  %info175 = load %sParserInfo*, %sParserInfo** %80, align 8
  %81 = bitcast [128 x %sCLNode*]* %elements to %sCLNode**
  %82 = call i1 @parse_list(%sCLNode** %81, i32* %num_elements, %sParserInfo* %info175)
  %LOGICAL_DIANEAL176 = icmp eq i1 %82, false
  br i1 %LOGICAL_DIANEAL176, label %cond_jump_then177, label %cond_end178

"cond_jump_elif3\0A":                             ; preds = %"cond_jump_elif2\0A"
  %info182 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %83 = getelementptr inbounds %sParserInfo, %sParserInfo* %info182, i32 0, i32 4
  %84 = load i8*, i8** %83, align 8
  %derefference_value183 = load i8, i8* %84, align 8
  %eqtmpX184 = icmp eq i8 %derefference_value183, 35
  br i1 %eqtmpX184, label %"cond_jump_elif_then3\0A", label %"cond_jump_elif4\0A"

"cond_jump_elif_then3\0A":                        ; preds = %"cond_jump_elif3\0A"
  %85 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %86 = bitcast i8* %85 to %sParserInfo**
  %info185 = load %sParserInfo*, %sParserInfo** %86, align 8
  call void @parse_comment(%sParserInfo* %info185)
  %node2186 = alloca %sCLNode*
  %87 = bitcast %sCLNode** %node2186 to i8*
  store i8* %87, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store %sCLNode* null, %sCLNode** %node2186, align 8
  %node2187 = load %sCLNode*, %sCLNode** %node2186, align 8
  %88 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %89 = bitcast i8* %88 to %sParserInfo**
  %info188 = load %sParserInfo*, %sParserInfo** %89, align 8
  %90 = call i1 @expression(%sCLNode** %node2186, %sParserInfo* %info188)
  %LOGICAL_DIANEAL189 = icmp eq i1 %90, false
  br i1 %LOGICAL_DIANEAL189, label %cond_jump_then190, label %cond_end191

"cond_jump_elif4\0A":                             ; preds = %"cond_jump_elif3\0A"
  %info194 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %91 = getelementptr inbounds %sParserInfo, %sParserInfo* %info194, i32 0, i32 4
  %92 = load i8*, i8** %91, align 8
  %derefference_value195 = load i8, i8* %92, align 8
  %eqtmpX196 = icmp eq i8 %derefference_value195, 40
  br i1 %eqtmpX196, label %"cond_jump_elif_then4\0A", label %"cond_jump_elif5\0A"

"cond_jump_elif_then4\0A":                        ; preds = %"cond_jump_elif4\0A"
  %93 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %94 = bitcast i8* %93 to %sParserInfo**
  %info197 = load %sParserInfo*, %sParserInfo** %94, align 8
  %95 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %96 = bitcast i8* %95 to %sParserInfo**
  %info198 = load %sParserInfo*, %sParserInfo** %96, align 8
  %97 = getelementptr inbounds %sParserInfo, %sParserInfo* %info198, i32 0, i32 4
  %98 = load i8*, i8** %97, align 8
  %99 = ptrtoint i8* %98 to i64
  %addtmp199 = add nsw i64 %99, 1
  %intToPtr2200 = inttoptr i64 %addtmp199 to i8*
  %100 = getelementptr inbounds %sParserInfo, %sParserInfo* %info197, i32 0, i32 4
  store i8* %intToPtr2200, i8** %100, align 8
  %101 = ptrtoint i8* %intToPtr2200 to i64
  %subtmp201 = sub nsw i64 %101, 1
  %IntTOPtr4b202 = inttoptr i64 %subtmp201 to i8*
  %102 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %103 = bitcast i8* %102 to %sParserInfo**
  %info203 = load %sParserInfo*, %sParserInfo** %103, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info203)
  %104 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %105 = bitcast i8* %104 to %sCLNode***
  %node204 = load %sCLNode**, %sCLNode*** %105, align 8
  %106 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %107 = bitcast i8* %106 to %sParserInfo**
  %info205 = load %sParserInfo*, %sParserInfo** %107, align 8
  %108 = call i1 @expression(%sCLNode** %node204, %sParserInfo* %info205)
  %LOGICAL_DIANEAL206 = icmp eq i1 %108, false
  br i1 %LOGICAL_DIANEAL206, label %cond_jump_then207, label %cond_end208

"cond_jump_elif5\0A":                             ; preds = %"cond_jump_elif4\0A"
  %info217 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %109 = getelementptr inbounds %sParserInfo, %sParserInfo* %info217, i32 0, i32 4
  %110 = load i8*, i8** %109, align 8
  %derefference_value218 = load i8, i8* %110, align 8
  %eqtmpX219 = icmp eq i8 %derefference_value218, 33
  br i1 %eqtmpX219, label %"cond_jump_elif_then5\0A", label %"cond_jump_elif6\0A"

"cond_jump_elif_then5\0A":                        ; preds = %"cond_jump_elif5\0A"
  %111 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %112 = bitcast i8* %111 to %sParserInfo**
  %info220 = load %sParserInfo*, %sParserInfo** %112, align 8
  %113 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %114 = bitcast i8* %113 to %sParserInfo**
  %info221 = load %sParserInfo*, %sParserInfo** %114, align 8
  %115 = getelementptr inbounds %sParserInfo, %sParserInfo* %info221, i32 0, i32 4
  %116 = load i8*, i8** %115, align 8
  %117 = ptrtoint i8* %116 to i64
  %addtmp222 = add nsw i64 %117, 1
  %intToPtr2223 = inttoptr i64 %addtmp222 to i8*
  %118 = getelementptr inbounds %sParserInfo, %sParserInfo* %info220, i32 0, i32 4
  store i8* %intToPtr2223, i8** %118, align 8
  %119 = ptrtoint i8* %intToPtr2223 to i64
  %subtmp224 = sub nsw i64 %119, 1
  %IntTOPtr4b225 = inttoptr i64 %subtmp224 to i8*
  %120 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %121 = bitcast i8* %120 to %sParserInfo**
  %info226 = load %sParserInfo*, %sParserInfo** %121, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info226)
  %122 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %123 = bitcast i8* %122 to %sCLNode***
  %node227 = load %sCLNode**, %sCLNode*** %123, align 8
  %124 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %125 = bitcast i8* %124 to %sParserInfo**
  %info228 = load %sParserInfo*, %sParserInfo** %125, align 8
  %126 = call i1 @expression_node(%sCLNode** %node227, %sParserInfo* %info228)
  %LOGICAL_DIANEAL229 = icmp eq i1 %126, false
  br i1 %LOGICAL_DIANEAL229, label %cond_jump_then230, label %cond_end231

"cond_jump_elif6\0A":                             ; preds = %"cond_jump_elif5\0A"
  %info242 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %127 = getelementptr inbounds %sParserInfo, %sParserInfo* %info242, i32 0, i32 4
  %128 = load i8*, i8** %127, align 8
  %derefference_value243 = load i8, i8* %128, align 8
  %eqtmpX244 = icmp eq i8 %derefference_value243, 123
  br i1 %eqtmpX244, label %"cond_jump_elif_then6\0A", label %"cond_jump_elif7\0A"

"cond_jump_elif_then6\0A":                        ; preds = %"cond_jump_elif6\0A"
  %129 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %130 = bitcast i8* %129 to %sParserInfo**
  %info245 = load %sParserInfo*, %sParserInfo** %130, align 8
  call void @expected_next_character(i8 123, %sParserInfo* %info245)
  %131 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %132 = bitcast i8* %131 to %sParserInfo**
  %info246 = load %sParserInfo*, %sParserInfo** %132, align 8
  %133 = getelementptr inbounds %sParserInfo, %sParserInfo* %info246, i32 0, i32 7
  %134 = load %vector__sVarTablep*, %vector__sVarTablep** %133, align 8
  %vtables_before = alloca %vector__sVarTablep*
  %135 = bitcast %vector__sVarTablep** %vtables_before to i8*
  store i8* %135, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store %vector__sVarTablep* %134, %vector__sVarTablep** %vtables_before, align 8
  %136 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %137 = bitcast i8* %136 to %sParserInfo**
  %info247 = load %sParserInfo*, %sParserInfo** %137, align 8
  %138 = call i8* @nccalloc(i64 1, i64 16)
  %139 = bitcast i8* %138 to %vector__sVarTablep*
  %140 = call %vector__sVarTablep* @"initialize_sVarTablep19_src/parser"(%vector__sVarTablep* %139)
  %141 = getelementptr inbounds %sParserInfo, %sParserInfo* %info247, i32 0, i32 7
  store %vector__sVarTablep* %140, %vector__sVarTablep** %141, align 8
  %142 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %143 = bitcast i8* %142 to %sParserInfo**
  %info248 = load %sParserInfo*, %sParserInfo** %143, align 8
  %144 = getelementptr inbounds %sParserInfo, %sParserInfo* %info248, i32 0, i32 11
  %145 = load i32, i32* %144, align 4
  %max_var_num = alloca i32
  %146 = bitcast i32* %max_var_num to i8*
  store i8* %146, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i32 %145, i32* %max_var_num, align 4
  %node_block = alloca %sCLNodeBlock*
  %147 = bitcast %sCLNodeBlock** %node_block to i8*
  store i8* %147, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store %sCLNodeBlock* null, %sCLNodeBlock** %node_block, align 8
  %node_block249 = load %sCLNodeBlock*, %sCLNodeBlock** %node_block, align 8
  %148 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %149 = bitcast i8* %148 to %sParserInfo**
  %info250 = load %sParserInfo*, %sParserInfo** %149, align 8
  %150 = call i1 @parse_block(%sCLNodeBlock** %node_block, i32 0, %sCLParam* null, %sParserInfo* %info250)
  %LOGICAL_DIANEAL251 = icmp eq i1 %150, false
  br i1 %LOGICAL_DIANEAL251, label %cond_jump_then252, label %cond_end253

"cond_jump_elif7\0A":                             ; preds = %"cond_jump_elif6\0A"
  %info272 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %151 = getelementptr inbounds %sParserInfo, %sParserInfo* %info272, i32 0, i32 4
  %152 = load i8*, i8** %151, align 8
  %derefference_value273 = load i8, i8* %152, align 8
  %eqtmpX274 = icmp eq i8 %derefference_value273, 92
  store i1 %eqtmpX274, i1* %andand_result_var, align 1
  br i1 %eqtmpX274, label %cond_jump_then275, label %cond_jump_end276

"cond_jump_elif_then7\0A":                        ; preds = %cond_jump_end276
  %153 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %154 = bitcast i8* %153 to %sParserInfo**
  %info284 = load %sParserInfo*, %sParserInfo** %154, align 8
  %155 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %156 = bitcast i8* %155 to %sParserInfo**
  %info285 = load %sParserInfo*, %sParserInfo** %156, align 8
  %157 = getelementptr inbounds %sParserInfo, %sParserInfo* %info285, i32 0, i32 4
  %158 = load i8*, i8** %157, align 8
  %159 = ptrtoint i8* %158 to i64
  %addtmp286 = add nsw i64 %159, 1
  %intToPtr2287 = inttoptr i64 %addtmp286 to i8*
  %160 = getelementptr inbounds %sParserInfo, %sParserInfo* %info284, i32 0, i32 4
  store i8* %intToPtr2287, i8** %160, align 8
  %161 = ptrtoint i8* %intToPtr2287 to i64
  %subtmp288 = sub nsw i64 %161, 1
  %IntTOPtr4b289 = inttoptr i64 %subtmp288 to i8*
  %162 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %163 = bitcast i8* %162 to %sParserInfo**
  %info290 = load %sParserInfo*, %sParserInfo** %163, align 8
  call void @expected_next_character(i8 123, %sParserInfo* %info290)
  %exp = alloca %sCLNode*
  %164 = bitcast %sCLNode** %exp to i8*
  store i8* %164, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store %sCLNode* null, %sCLNode** %exp, align 8
  %exp291 = load %sCLNode*, %sCLNode** %exp, align 8
  %165 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %166 = bitcast i8* %165 to %sParserInfo**
  %info292 = load %sParserInfo*, %sParserInfo** %166, align 8
  %167 = call i1 @expression(%sCLNode** %exp, %sParserInfo* %info292)
  %LOGICAL_DIANEAL293 = icmp eq i1 %167, false
  br i1 %LOGICAL_DIANEAL293, label %cond_jump_then294, label %cond_end295

"cond_jump_elif8\0A":                             ; preds = %cond_jump_end276
  %168 = call i32 @isatty(i32 0)
  %eqtmpX299 = icmp eq i32 %168, 0
  store i1 %eqtmpX299, i1* %andand_result_var, align 1
  br i1 %eqtmpX299, label %cond_jump_then300, label %cond_jump_end301

"cond_jump_elif_then8\0A":                        ; preds = %cond_jump_end301
  %169 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %170 = bitcast i8* %169 to %sParserInfo**
  %info307 = load %sParserInfo*, %sParserInfo** %170, align 8
  %171 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %172 = bitcast i8* %171 to %sParserInfo**
  %info308 = load %sParserInfo*, %sParserInfo** %172, align 8
  %173 = getelementptr inbounds %sParserInfo, %sParserInfo* %info308, i32 0, i32 4
  %174 = load i8*, i8** %173, align 8
  %175 = ptrtoint i8* %174 to i64
  %addtmp309 = add nsw i64 %175, 1
  %intToPtr2310 = inttoptr i64 %addtmp309 to i8*
  %176 = getelementptr inbounds %sParserInfo, %sParserInfo* %info307, i32 0, i32 4
  store i8* %intToPtr2310, i8** %176, align 8
  %177 = ptrtoint i8* %intToPtr2310 to i64
  %subtmp311 = sub nsw i64 %177, 1
  %IntTOPtr4b312 = inttoptr i64 %subtmp311 to i8*
  %178 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %179 = bitcast i8* %178 to %sParserInfo**
  %info313 = load %sParserInfo*, %sParserInfo** %179, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info313)
  %180 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %181 = bitcast i8* %180 to %sParserInfo**
  %info314 = load %sParserInfo*, %sParserInfo** %181, align 8
  %182 = call i8* @parse_word(%sParserInfo* %info314)
  %word = alloca i8*
  %183 = bitcast i8** %word to i8*
  store i8* %183, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i8* %182, i8** %word, align 8
  %184 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %185 = bitcast i8* %184 to %sParserInfo**
  %info315 = load %sParserInfo*, %sParserInfo** %185, align 8
  %186 = getelementptr inbounds %sParserInfo, %sParserInfo* %info315, i32 0, i32 4
  %187 = load i8*, i8** %186, align 8
  %derefference_value316 = load i8, i8* %187, align 8
  %eqtmpX317 = icmp eq i8 %derefference_value316, 40
  store i1 %eqtmpX317, i1* %andand_result_var1, align 1
  br i1 %eqtmpX317, label %cond_jump_end319, label %cond_jump_then318

"cond_jump_elif9\0A":                             ; preds = %cond_jump_end301
  %info367 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %188 = getelementptr inbounds %sParserInfo, %sParserInfo* %info367, i32 0, i32 4
  %189 = load i8*, i8** %188, align 8
  %derefference_value368 = load i8, i8* %189, align 8
  %eqtmpX369 = icmp eq i8 %derefference_value368, 36
  br i1 %eqtmpX369, label %"cond_jump_elif_then9\0A", label %"cond_jump_elif10\0A"

"cond_jump_elif_then9\0A":                        ; preds = %"cond_jump_elif9\0A"
  %190 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %191 = bitcast i8* %190 to %sParserInfo**
  %info370 = load %sParserInfo*, %sParserInfo** %191, align 8
  %192 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %193 = bitcast i8* %192 to %sParserInfo**
  %info371 = load %sParserInfo*, %sParserInfo** %193, align 8
  %194 = getelementptr inbounds %sParserInfo, %sParserInfo* %info371, i32 0, i32 4
  %195 = load i8*, i8** %194, align 8
  %196 = ptrtoint i8* %195 to i64
  %addtmp372 = add nsw i64 %196, 1
  %intToPtr2373 = inttoptr i64 %addtmp372 to i8*
  %197 = getelementptr inbounds %sParserInfo, %sParserInfo* %info370, i32 0, i32 4
  store i8* %intToPtr2373, i8** %197, align 8
  %198 = ptrtoint i8* %intToPtr2373 to i64
  %subtmp374 = sub nsw i64 %198, 1
  %IntTOPtr4b375 = inttoptr i64 %subtmp374 to i8*
  %199 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %200 = bitcast i8* %199 to %sParserInfo**
  %info376 = load %sParserInfo*, %sParserInfo** %200, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info376)
  %201 = call i16** @__ctype_b_loc()
  %derefference_value377 = load i16*, i16** %201, align 8
  %202 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %203 = bitcast i8* %202 to %sParserInfo**
  %info378 = load %sParserInfo*, %sParserInfo** %203, align 8
  %204 = getelementptr inbounds %sParserInfo, %sParserInfo* %info378, i32 0, i32 4
  %205 = load i8*, i8** %204, align 8
  %derefference_value379 = load i8, i8* %205, align 8
  %sext13 = zext i8 %derefference_value379 to i32
  %element_addressB = getelementptr i16, i16* %derefference_value377, i32 %sext13
  %element = load i16, i16* %element_addressB, align 2
  %andtmp = and i16 %element, 1024
  %206 = icmp ne i16 %andtmp, 0
  store i1 %206, i1* %andand_result_var1, align 1
  br i1 %206, label %cond_jump_end381, label %cond_jump_then380

"cond_jump_elif10\0A":                            ; preds = %"cond_jump_elif9\0A"
  %info422 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %207 = getelementptr inbounds %sParserInfo, %sParserInfo* %info422, i32 0, i32 4
  %208 = load i8*, i8** %207, align 8
  %derefference_value423 = load i8, i8* %208, align 8
  %getmp = icmp sge i8 %derefference_value423, 97
  store i1 %getmp, i1* %andand_result_var, align 1
  br i1 %getmp, label %cond_jump_then424, label %cond_jump_end425

"cond_jump_elif_then10\0A":                       ; preds = %cond_jump_end445
  %209 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %210 = bitcast i8* %209 to %sParserInfo**
  %info451 = load %sParserInfo*, %sParserInfo** %210, align 8
  %211 = getelementptr inbounds %sParserInfo, %sParserInfo* %info451, i32 0, i32 4
  %212 = load i8*, i8** %211, align 8
  %p = alloca i8*
  %213 = bitcast i8** %p to i8*
  store i8* %213, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i8* %212, i8** %p, align 8
  %214 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %215 = bitcast i8* %214 to %sParserInfo**
  %info452 = load %sParserInfo*, %sParserInfo** %215, align 8
  %216 = getelementptr inbounds %sParserInfo, %sParserInfo* %info452, i32 0, i32 1
  %217 = load i32, i32* %216, align 4
  %sline = alloca i32
  %218 = bitcast i32* %sline to i8*
  store i8* %218, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i32 %217, i32* %sline, align 4
  %219 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %220 = bitcast i8* %219 to %sParserInfo**
  %info453 = load %sParserInfo*, %sParserInfo** %220, align 8
  %221 = call i8* @parse_word(%sParserInfo* %info453)
  %word454 = alloca i8*
  %222 = bitcast i8** %word454 to i8*
  store i8* %222, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i8* %221, i8** %word454, align 8
  %word455 = load i8*, i8** %word454, align 8
  %223 = call i32 @strcmp(i8* %word455, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_string.32, i32 0, i32 0))
  %eqtmpX456 = icmp eq i32 %223, 0
  br i1 %eqtmpX456, label %cond_jump_then457, label %"cond_jump_elif0\0A458"

"cond_jump_elif11\0A":                            ; preds = %cond_jump_end445
  %info1104 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %224 = getelementptr inbounds %sParserInfo, %sParserInfo* %info1104, i32 0, i32 4
  %225 = load i8*, i8** %224, align 8
  %derefference_value1105 = load i8, i8* %225, align 8
  %226 = call i1 @xisdigit(i8 %derefference_value1105)
  br i1 %226, label %"cond_jump_elif_then11\0A", label %cond_else_block

"cond_jump_elif_then11\0A":                       ; preds = %"cond_jump_elif11\0A"
  %227 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %228 = bitcast i8* %227 to %sCLNode***
  %node1106 = load %sCLNode**, %sCLNode*** %228, align 8
  %229 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %230 = bitcast i8* %229 to %sParserInfo**
  %info1107 = load %sParserInfo*, %sParserInfo** %230, align 8
  %231 = call i1 @get_number(i1 false, %sCLNode** %node1106, %sParserInfo* %info1107)
  %LOGICAL_DIANEAL1108 = icmp eq i1 %231, false
  br i1 %LOGICAL_DIANEAL1108, label %cond_jump_then1109, label %cond_end1110

cond_else_block:                                  ; preds = %"cond_jump_elif11\0A"
  %232 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %233 = bitcast i8* %232 to %sParserInfo**
  %info1111 = load %sParserInfo*, %sParserInfo** %233, align 8
  %234 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %235 = bitcast i8* %234 to %sParserInfo**
  %info1112 = load %sParserInfo*, %sParserInfo** %235, align 8
  %236 = getelementptr inbounds %sParserInfo, %sParserInfo* %info1112, i32 0, i32 4
  %237 = load i8*, i8** %236, align 8
  %derefference_value1113 = load i8, i8* %237, align 8
  %238 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_string.59, i32 0, i32 0), i8 %derefference_value1113)
  call void @parser_err_msg(%sParserInfo* %info1111, i8* %238)
  %239 = bitcast [8192 x i8*]* %lvtable to i8*
  %240 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %239, i64 65536)
  %241 = ptrtoint i8* %238 to i64
  %242 = icmp ne i64 %241, 0
  br i1 %242, label %cond_then_block1114, label %cond_end1115

cond_end:                                         ; preds = %cond_end1110, %cond_end1103, %cond_end389, %cond_end366, %cond_end295, %cond_end265, %cond_end236, %cond_end214, %cond_end191, %cond_end178, %cond_end164, %cond_end134, %cond_end55
  %node1116 = load %sCLNode**, %sCLNode*** %node2, align 8
  %info1117 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %243 = call i1 @postposition_operator(%sCLNode** %node1116, %sParserInfo* %info1117)
  %LOGICAL_DIANEAL1118 = icmp eq i1 %243, false
  br i1 %LOGICAL_DIANEAL1118, label %cond_jump_then1119, label %cond_end1120

cond_jump_then52:                                 ; preds = %cond_jump_then48
  %244 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %245 = bitcast i8* %244 to %sParserInfo**
  %info56 = load %sParserInfo*, %sParserInfo** %245, align 8
  %246 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %247 = bitcast i8* %246 to %sParserInfo**
  %info57 = load %sParserInfo*, %sParserInfo** %247, align 8
  %248 = getelementptr inbounds %sParserInfo, %sParserInfo* %info57, i32 0, i32 4
  %249 = load i8*, i8** %248, align 8
  %250 = ptrtoint i8* %249 to i64
  %addtmp58 = add nsw i64 %250, 1
  %intToPtr259 = inttoptr i64 %addtmp58 to i8*
  %251 = getelementptr inbounds %sParserInfo, %sParserInfo* %info56, i32 0, i32 4
  store i8* %intToPtr259, i8** %251, align 8
  %252 = ptrtoint i8* %intToPtr259 to i64
  %subtmp = sub nsw i64 %252, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  %253 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %254 = bitcast i8* %253 to %sParserInfo**
  %info60 = load %sParserInfo*, %sParserInfo** %254, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info60)
  %255 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %256 = bitcast i8* %255 to %sParserInfo**
  %info61 = load %sParserInfo*, %sParserInfo** %256, align 8
  %257 = getelementptr inbounds %sParserInfo, %sParserInfo* %info61, i32 0, i32 4
  %258 = load i8*, i8** %257, align 8
  %derefference_value62 = load i8, i8* %258, align 8
  %259 = call i1 @xisdigit(i8 %derefference_value62)
  br i1 %259, label %cond_jump_then63, label %cond_else_block64

"cond_jump_elif0\0A53":                           ; preds = %cond_jump_then48
  %260 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %261 = bitcast i8* %260 to %sParserInfo**
  %info81 = load %sParserInfo*, %sParserInfo** %261, align 8
  %262 = getelementptr inbounds %sParserInfo, %sParserInfo* %info81, i32 0, i32 4
  %263 = load i8*, i8** %262, align 8
  %derefference_value82 = load i8, i8* %263, align 8
  %eqtmpX83 = icmp eq i8 %derefference_value82, 43
  br i1 %eqtmpX83, label %"cond_jump_elif_then0\0A54", label %cond_end55

"cond_jump_elif_then0\0A54":                      ; preds = %"cond_jump_elif0\0A53"
  %264 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %265 = bitcast i8* %264 to %sParserInfo**
  %info84 = load %sParserInfo*, %sParserInfo** %265, align 8
  %266 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %267 = bitcast i8* %266 to %sParserInfo**
  %info85 = load %sParserInfo*, %sParserInfo** %267, align 8
  %268 = getelementptr inbounds %sParserInfo, %sParserInfo* %info85, i32 0, i32 4
  %269 = load i8*, i8** %268, align 8
  %270 = ptrtoint i8* %269 to i64
  %addtmp86 = add nsw i64 %270, 1
  %intToPtr287 = inttoptr i64 %addtmp86 to i8*
  %271 = getelementptr inbounds %sParserInfo, %sParserInfo* %info84, i32 0, i32 4
  store i8* %intToPtr287, i8** %271, align 8
  %272 = ptrtoint i8* %intToPtr287 to i64
  %subtmp88 = sub nsw i64 %272, 1
  %IntTOPtr4b89 = inttoptr i64 %subtmp88 to i8*
  %273 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %274 = bitcast i8* %273 to %sParserInfo**
  %info90 = load %sParserInfo*, %sParserInfo** %274, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info90)
  %275 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %276 = bitcast i8* %275 to %sParserInfo**
  %info91 = load %sParserInfo*, %sParserInfo** %276, align 8
  %277 = getelementptr inbounds %sParserInfo, %sParserInfo* %info91, i32 0, i32 4
  %278 = load i8*, i8** %277, align 8
  %derefference_value92 = load i8, i8* %278, align 8
  %279 = call i1 @xisdigit(i8 %derefference_value92)
  br i1 %279, label %cond_jump_then93, label %cond_else_block94

cond_end55:                                       ; preds = %cond_end95, %"cond_jump_elif0\0A53", %cond_end65
  br label %cond_end

cond_jump_then63:                                 ; preds = %cond_jump_then52
  %280 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %281 = bitcast i8* %280 to %sCLNode***
  %node66 = load %sCLNode**, %sCLNode*** %281, align 8
  %282 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %283 = bitcast i8* %282 to %sParserInfo**
  %info67 = load %sParserInfo*, %sParserInfo** %283, align 8
  %284 = call i1 @get_number(i1 true, %sCLNode** %node66, %sParserInfo* %info67)
  %LOGICAL_DIANEAL = icmp eq i1 %284, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then68, label %cond_end69

cond_else_block64:                                ; preds = %cond_jump_then52
  %285 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %286 = bitcast i8* %285 to %sCLNode***
  %node70 = load %sCLNode**, %sCLNode*** %286, align 8
  %287 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %288 = bitcast i8* %287 to %sParserInfo**
  %info71 = load %sParserInfo*, %sParserInfo** %288, align 8
  %289 = call i1 @expression_node(%sCLNode** %node70, %sParserInfo* %info71)
  %LOGICAL_DIANEAL72 = icmp eq i1 %289, false
  br i1 %LOGICAL_DIANEAL72, label %cond_jump_then73, label %cond_end74

cond_end65:                                       ; preds = %cond_end79, %cond_end69
  br label %cond_end55

cond_jump_then68:                                 ; preds = %cond_jump_then63
  %290 = bitcast [8192 x i8*]* %lvtable to i8*
  %291 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %290, i64 65536)
  ret i1 false

cond_end69:                                       ; preds = %cond_jump_then63
  br label %cond_end65

cond_jump_then73:                                 ; preds = %cond_else_block64
  %292 = bitcast [8192 x i8*]* %lvtable to i8*
  %293 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %292, i64 65536)
  ret i1 false

cond_end74:                                       ; preds = %cond_else_block64
  %294 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %295 = bitcast i8* %294 to %sCLNode***
  %node75 = load %sCLNode**, %sCLNode*** %295, align 8
  %derefference_value76 = load %sCLNode*, %sCLNode** %node75, align 8
  %eqtmpX77 = icmp eq %sCLNode* %derefference_value76, null
  br i1 %eqtmpX77, label %cond_jump_then78, label %cond_end79

cond_jump_then78:                                 ; preds = %cond_end74
  %296 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %297 = bitcast i8* %296 to %sParserInfo**
  %info80 = load %sParserInfo*, %sParserInfo** %297, align 8
  call void @parser_err_msg(%sParserInfo* %info80, i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_string.26, i32 0, i32 0))
  br label %cond_end79

cond_end79:                                       ; preds = %cond_jump_then78, %cond_end74
  br label %cond_end65

cond_jump_then93:                                 ; preds = %"cond_jump_elif_then0\0A54"
  %298 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %299 = bitcast i8* %298 to %sCLNode***
  %node96 = load %sCLNode**, %sCLNode*** %299, align 8
  %300 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %301 = bitcast i8* %300 to %sParserInfo**
  %info97 = load %sParserInfo*, %sParserInfo** %301, align 8
  %302 = call i1 @get_number(i1 false, %sCLNode** %node96, %sParserInfo* %info97)
  %LOGICAL_DIANEAL98 = icmp eq i1 %302, false
  br i1 %LOGICAL_DIANEAL98, label %cond_jump_then99, label %cond_end100

cond_else_block94:                                ; preds = %"cond_jump_elif_then0\0A54"
  %303 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %304 = bitcast i8* %303 to %sCLNode***
  %node101 = load %sCLNode**, %sCLNode*** %304, align 8
  %305 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %306 = bitcast i8* %305 to %sParserInfo**
  %info102 = load %sParserInfo*, %sParserInfo** %306, align 8
  %307 = call i1 @expression_node(%sCLNode** %node101, %sParserInfo* %info102)
  %LOGICAL_DIANEAL103 = icmp eq i1 %307, false
  br i1 %LOGICAL_DIANEAL103, label %cond_jump_then104, label %cond_end105

cond_end95:                                       ; preds = %cond_end110, %cond_end100
  br label %cond_end55

cond_jump_then99:                                 ; preds = %cond_jump_then93
  %308 = bitcast [8192 x i8*]* %lvtable to i8*
  %309 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %308, i64 65536)
  ret i1 false

cond_end100:                                      ; preds = %cond_jump_then93
  br label %cond_end95

cond_jump_then104:                                ; preds = %cond_else_block94
  %310 = bitcast [8192 x i8*]* %lvtable to i8*
  %311 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %310, i64 65536)
  ret i1 false

cond_end105:                                      ; preds = %cond_else_block94
  %312 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %313 = bitcast i8* %312 to %sCLNode***
  %node106 = load %sCLNode**, %sCLNode*** %313, align 8
  %derefference_value107 = load %sCLNode*, %sCLNode** %node106, align 8
  %eqtmpX108 = icmp eq %sCLNode* %derefference_value107, null
  br i1 %eqtmpX108, label %cond_jump_then109, label %cond_end110

cond_jump_then109:                                ; preds = %cond_end105
  %314 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %315 = bitcast i8* %314 to %sParserInfo**
  %info111 = load %sParserInfo*, %sParserInfo** %315, align 8
  call void @parser_err_msg(%sParserInfo* %info111, i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_string.27, i32 0, i32 0))
  br label %cond_end110

cond_end110:                                      ; preds = %cond_jump_then109, %cond_end105
  br label %cond_end95

cond_jump_then124:                                ; preds = %"cond_jump_elif_then0\0A"
  %316 = bitcast [8192 x i8*]* %lvtable to i8*
  %317 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %316, i64 65536)
  %318 = load %buffer*, %buffer** %buf, align 8
  call void @buffer_finalize(%buffer* %318)
  %319 = ptrtoint %buffer* %318 to i64
  %320 = icmp ne i64 %319, 0
  br i1 %320, label %cond_then_block, label %cond_end126

cond_end125:                                      ; preds = %"cond_jump_elif_then0\0A"
  %buf127 = load %buffer*, %buffer** %buf, align 8
  %321 = call i8* @buffer_to_string(%buffer* %buf127)
  %str = alloca i8*
  %322 = bitcast i8** %str to i8*
  store i8* %322, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i8* %321, i8** %str, align 8
  %323 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %324 = bitcast i8* %323 to %sCLNode***
  %node128 = load %sCLNode**, %sCLNode*** %324, align 8
  %str129 = load i8*, i8** %str, align 8
  %325 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %326 = bitcast i8* %325 to %sParserInfo**
  %info130 = load %sParserInfo*, %sParserInfo** %326, align 8
  %327 = call %sCLNode* @sNodeTree_create_string_value(i8* %str129, %sParserInfo* %info130)
  store %sCLNode* %327, %sCLNode** %node128, align 8
  %328 = load %buffer*, %buffer** %buf, align 8
  call void @buffer_finalize(%buffer* %328)
  %329 = ptrtoint %buffer* %328 to i64
  %330 = icmp ne i64 %329, 0
  br i1 %330, label %cond_then_block131, label %cond_end132

cond_then_block:                                  ; preds = %cond_jump_then124
  br label %cond_end126

cond_end126:                                      ; preds = %cond_then_block, %cond_jump_then124
  %331 = bitcast %buffer* %318 to i8*
  call void @ncfree(i8* %331)
  ret i1 false

cond_then_block131:                               ; preds = %cond_end125
  br label %cond_end132

cond_end132:                                      ; preds = %cond_then_block131, %cond_end125
  %332 = bitcast %buffer* %328 to i8*
  call void @ncfree(i8* %332)
  %333 = load i8*, i8** %str, align 8
  %334 = ptrtoint i8* %333 to i64
  %335 = icmp ne i64 %334, 0
  br i1 %335, label %cond_then_block133, label %cond_end134

cond_then_block133:                               ; preds = %cond_end132
  br label %cond_end134

cond_end134:                                      ; preds = %cond_then_block133, %cond_end132
  call void @ncfree(i8* %333)
  br label %cond_end

cond_jump_then150:                                ; preds = %"cond_jump_elif_then1\0A"
  %336 = bitcast [8192 x i8*]* %lvtable to i8*
  %337 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %336, i64 65536)
  %338 = load %buffer*, %buffer** %buf144, align 8
  call void @buffer_finalize(%buffer* %338)
  %339 = ptrtoint %buffer* %338 to i64
  %340 = icmp ne i64 %339, 0
  br i1 %340, label %cond_then_block152, label %cond_end153

cond_end151:                                      ; preds = %"cond_jump_elif_then1\0A"
  %buf154 = load %buffer*, %buffer** %buf144, align 8
  %341 = call i8* @buffer_to_string(%buffer* %buf154)
  %str155 = alloca i8*
  %342 = bitcast i8** %str155 to i8*
  store i8* %342, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i8* %341, i8** %str155, align 8
  %343 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %344 = bitcast i8* %343 to %sCLNode***
  %node156 = load %sCLNode**, %sCLNode*** %344, align 8
  %str157 = load i8*, i8** %str155, align 8
  %ignore_case158 = load i1, i1* %ignore_case, align 1
  %global159 = load i1, i1* %global, align 1
  %345 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %346 = bitcast i8* %345 to %sParserInfo**
  %info160 = load %sParserInfo*, %sParserInfo** %346, align 8
  %347 = call %sCLNode* @sNodeTree_create_regex_value(i8* %str157, i1 %ignore_case158, i1 %global159, %sParserInfo* %info160)
  store %sCLNode* %347, %sCLNode** %node156, align 8
  %348 = load %buffer*, %buffer** %buf144, align 8
  call void @buffer_finalize(%buffer* %348)
  %349 = ptrtoint %buffer* %348 to i64
  %350 = icmp ne i64 %349, 0
  br i1 %350, label %cond_then_block161, label %cond_end162

cond_then_block152:                               ; preds = %cond_jump_then150
  br label %cond_end153

cond_end153:                                      ; preds = %cond_then_block152, %cond_jump_then150
  %351 = bitcast %buffer* %338 to i8*
  call void @ncfree(i8* %351)
  ret i1 false

cond_then_block161:                               ; preds = %cond_end151
  br label %cond_end162

cond_end162:                                      ; preds = %cond_then_block161, %cond_end151
  %352 = bitcast %buffer* %348 to i8*
  call void @ncfree(i8* %352)
  %353 = load i8*, i8** %str155, align 8
  %354 = ptrtoint i8* %353 to i64
  %355 = icmp ne i64 %354, 0
  br i1 %355, label %cond_then_block163, label %cond_end164

cond_then_block163:                               ; preds = %cond_end162
  br label %cond_end164

cond_end164:                                      ; preds = %cond_then_block163, %cond_end162
  call void @ncfree(i8* %353)
  br label %cond_end

cond_jump_then177:                                ; preds = %"cond_jump_elif_then2\0A"
  %356 = bitcast [8192 x i8*]* %lvtable to i8*
  %357 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %356, i64 65536)
  ret i1 false

cond_end178:                                      ; preds = %"cond_jump_elif_then2\0A"
  %358 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %359 = bitcast i8* %358 to %sCLNode***
  %node179 = load %sCLNode**, %sCLNode*** %359, align 8
  %num_elements180 = load i32, i32* %num_elements, align 4
  %360 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %361 = bitcast i8* %360 to %sParserInfo**
  %info181 = load %sParserInfo*, %sParserInfo** %361, align 8
  %362 = bitcast [128 x %sCLNode*]* %elements to %sCLNode**
  %363 = call %sCLNode* @sNodeTree_create_list_value(i32 %num_elements180, %sCLNode** %362, %sParserInfo* %info181)
  store %sCLNode* %363, %sCLNode** %node179, align 8
  br label %cond_end

cond_jump_then190:                                ; preds = %"cond_jump_elif_then3\0A"
  %364 = bitcast [8192 x i8*]* %lvtable to i8*
  %365 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %364, i64 65536)
  ret i1 false

cond_end191:                                      ; preds = %"cond_jump_elif_then3\0A"
  %366 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %367 = bitcast i8* %366 to %sCLNode***
  %node192 = load %sCLNode**, %sCLNode*** %367, align 8
  %node2193 = load %sCLNode*, %sCLNode** %node2186, align 8
  store %sCLNode* %node2193, %sCLNode** %node192, align 8
  br label %cond_end

cond_jump_then207:                                ; preds = %"cond_jump_elif_then4\0A"
  %368 = bitcast [8192 x i8*]* %lvtable to i8*
  %369 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %368, i64 65536)
  ret i1 false

cond_end208:                                      ; preds = %"cond_jump_elif_then4\0A"
  %370 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %371 = bitcast i8* %370 to %sParserInfo**
  %info209 = load %sParserInfo*, %sParserInfo** %371, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info209)
  %372 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %373 = bitcast i8* %372 to %sCLNode***
  %node210 = load %sCLNode**, %sCLNode*** %373, align 8
  %derefference_value211 = load %sCLNode*, %sCLNode** %node210, align 8
  %eqtmpX212 = icmp eq %sCLNode* %derefference_value211, null
  br i1 %eqtmpX212, label %cond_jump_then213, label %cond_end214

cond_jump_then213:                                ; preds = %cond_end208
  %374 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %375 = bitcast i8* %374 to %sParserInfo**
  %info215 = load %sParserInfo*, %sParserInfo** %375, align 8
  call void @parser_err_msg(%sParserInfo* %info215, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_string.28, i32 0, i32 0))
  br label %cond_end214

cond_end214:                                      ; preds = %cond_jump_then213, %cond_end208
  %376 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %377 = bitcast i8* %376 to %sParserInfo**
  %info216 = load %sParserInfo*, %sParserInfo** %377, align 8
  call void @expected_next_character(i8 41, %sParserInfo* %info216)
  br label %cond_end

cond_jump_then230:                                ; preds = %"cond_jump_elif_then5\0A"
  %378 = bitcast [8192 x i8*]* %lvtable to i8*
  %379 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %378, i64 65536)
  ret i1 false

cond_end231:                                      ; preds = %"cond_jump_elif_then5\0A"
  %380 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %381 = bitcast i8* %380 to %sCLNode***
  %node232 = load %sCLNode**, %sCLNode*** %381, align 8
  %derefference_value233 = load %sCLNode*, %sCLNode** %node232, align 8
  %eqtmpX234 = icmp eq %sCLNode* %derefference_value233, null
  br i1 %eqtmpX234, label %cond_jump_then235, label %cond_end236

cond_jump_then235:                                ; preds = %cond_end231
  %382 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %383 = bitcast i8* %382 to %sParserInfo**
  %info237 = load %sParserInfo*, %sParserInfo** %383, align 8
  call void @parser_err_msg(%sParserInfo* %info237, i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_string.29, i32 0, i32 0))
  br label %cond_end236

cond_end236:                                      ; preds = %cond_jump_then235, %cond_end231
  %384 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %385 = bitcast i8* %384 to %sCLNode***
  %node238 = load %sCLNode**, %sCLNode*** %385, align 8
  %386 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %387 = bitcast i8* %386 to %sCLNode***
  %node239 = load %sCLNode**, %sCLNode*** %387, align 8
  %derefference_value240 = load %sCLNode*, %sCLNode** %node239, align 8
  %388 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %389 = bitcast i8* %388 to %sParserInfo**
  %info241 = load %sParserInfo*, %sParserInfo** %389, align 8
  %390 = call %sCLNode* @sNodeTree_create_logical_denial(%sCLNode* %derefference_value240, %sParserInfo* %info241)
  store %sCLNode* %390, %sCLNode** %node238, align 8
  br label %cond_end

cond_jump_then252:                                ; preds = %"cond_jump_elif_then6\0A"
  %391 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %392 = bitcast i8* %391 to %sParserInfo**
  %info254 = load %sParserInfo*, %sParserInfo** %392, align 8
  %393 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %394 = bitcast i8* %393 to i32*
  %max_var_num255 = load i32, i32* %394, align 4
  %395 = getelementptr inbounds %sParserInfo, %sParserInfo* %info254, i32 0, i32 11
  store i32 %max_var_num255, i32* %395, align 4
  %396 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %397 = bitcast i8* %396 to %sParserInfo**
  %info256 = load %sParserInfo*, %sParserInfo** %397, align 8
  %398 = getelementptr inbounds %sParserInfo, %sParserInfo* %info256, i32 0, i32 7
  %399 = load %vector__sVarTablep*, %vector__sVarTablep** %398, align 8
  %400 = load %vector__sVarTablep*, %vector__sVarTablep** %398, align 8
  call void @"finalize_sVarTablep20_src/parser"(%vector__sVarTablep* %400)
  %401 = ptrtoint %vector__sVarTablep* %400 to i64
  %402 = icmp ne i64 %401, 0
  br i1 %402, label %cond_then_block257, label %cond_end258

cond_end253:                                      ; preds = %"cond_jump_elif_then6\0A"
  %403 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %404 = bitcast i8* %403 to %sParserInfo**
  %info261 = load %sParserInfo*, %sParserInfo** %404, align 8
  %max_var_num262 = load i32, i32* %max_var_num, align 4
  %405 = getelementptr inbounds %sParserInfo, %sParserInfo* %info261, i32 0, i32 11
  store i32 %max_var_num262, i32* %405, align 4
  %406 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %407 = bitcast i8* %406 to %sParserInfo**
  %info263 = load %sParserInfo*, %sParserInfo** %407, align 8
  %408 = getelementptr inbounds %sParserInfo, %sParserInfo* %info263, i32 0, i32 7
  %409 = load %vector__sVarTablep*, %vector__sVarTablep** %408, align 8
  %410 = load %vector__sVarTablep*, %vector__sVarTablep** %408, align 8
  call void @"finalize_sVarTablep22_src/parser"(%vector__sVarTablep* %410)
  %411 = ptrtoint %vector__sVarTablep* %410 to i64
  %412 = icmp ne i64 %411, 0
  br i1 %412, label %cond_then_block264, label %cond_end265

cond_then_block257:                               ; preds = %cond_jump_then252
  br label %cond_end258

cond_end258:                                      ; preds = %cond_then_block257, %cond_jump_then252
  %413 = bitcast %vector__sVarTablep* %400 to i8*
  call void @ncfree(i8* %413)
  %414 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %415 = bitcast i8* %414 to %sParserInfo**
  %info259 = load %sParserInfo*, %sParserInfo** %415, align 8
  %416 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %417 = bitcast i8* %416 to %vector__sVarTablep**
  %vtables_before260 = load %vector__sVarTablep*, %vector__sVarTablep** %417, align 8
  %418 = getelementptr inbounds %sParserInfo, %sParserInfo* %info259, i32 0, i32 7
  store %vector__sVarTablep* %vtables_before260, %vector__sVarTablep** %418, align 8
  %419 = bitcast [8192 x i8*]* %lvtable to i8*
  %420 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %419, i64 65536)
  ret i1 false

cond_then_block264:                               ; preds = %cond_end253
  br label %cond_end265

cond_end265:                                      ; preds = %cond_then_block264, %cond_end253
  %421 = bitcast %vector__sVarTablep* %410 to i8*
  call void @ncfree(i8* %421)
  %422 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %423 = bitcast i8* %422 to %sParserInfo**
  %info266 = load %sParserInfo*, %sParserInfo** %423, align 8
  %vtables_before267 = load %vector__sVarTablep*, %vector__sVarTablep** %vtables_before, align 8
  %424 = getelementptr inbounds %sParserInfo, %sParserInfo* %info266, i32 0, i32 7
  store %vector__sVarTablep* %vtables_before267, %vector__sVarTablep** %424, align 8
  %425 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %426 = bitcast i8* %425 to %sParserInfo**
  %info268 = load %sParserInfo*, %sParserInfo** %426, align 8
  call void @expected_next_character(i8 125, %sParserInfo* %info268)
  %427 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %428 = bitcast i8* %427 to %sCLNode***
  %node269 = load %sCLNode**, %sCLNode*** %428, align 8
  %node_block270 = load %sCLNodeBlock*, %sCLNodeBlock** %node_block, align 8
  %429 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %430 = bitcast i8* %429 to %sParserInfo**
  %info271 = load %sParserInfo*, %sParserInfo** %430, align 8
  %431 = call %sCLNode* @sNodeTree_create_normal_block(%sCLNodeBlock* %node_block270, %sParserInfo* %info271)
  store %sCLNode* %431, %sCLNode** %node269, align 8
  br label %cond_end

cond_jump_then275:                                ; preds = %"cond_jump_elif7\0A"
  %info277 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %432 = getelementptr inbounds %sParserInfo, %sParserInfo* %info277, i32 0, i32 4
  %433 = load i8*, i8** %432, align 8
  %434 = ptrtoint i8* %433 to i64
  %addtmp278 = add nsw i64 %434, 1
  %intToPtr2279 = inttoptr i64 %addtmp278 to i8*
  %derefference_value280 = load i8, i8* %intToPtr2279, align 8
  %eqtmpX281 = icmp eq i8 %derefference_value280, 123
  %andand282 = and i1 %eqtmpX274, %eqtmpX281
  store i1 %andand282, i1* %andand_result_var, align 1
  br label %cond_jump_end276

cond_jump_end276:                                 ; preds = %cond_jump_then275, %"cond_jump_elif7\0A"
  %andand_result_value283 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value283, label %"cond_jump_elif_then7\0A", label %"cond_jump_elif8\0A"

cond_jump_then294:                                ; preds = %"cond_jump_elif_then7\0A"
  %435 = bitcast [8192 x i8*]* %lvtable to i8*
  %436 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %435, i64 65536)
  ret i1 false

cond_end295:                                      ; preds = %"cond_jump_elif_then7\0A"
  %437 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %438 = bitcast i8* %437 to %sParserInfo**
  %info296 = load %sParserInfo*, %sParserInfo** %438, align 8
  call void @expected_next_character(i8 125, %sParserInfo* %info296)
  %439 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %440 = bitcast i8* %439 to %sCLNode***
  %node297 = load %sCLNode**, %sCLNode*** %440, align 8
  %exp298 = load %sCLNode*, %sCLNode** %exp, align 8
  store %sCLNode* %exp298, %sCLNode** %node297, align 8
  br label %cond_end

cond_jump_then300:                                ; preds = %"cond_jump_elif8\0A"
  %info302 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %441 = getelementptr inbounds %sParserInfo, %sParserInfo* %info302, i32 0, i32 4
  %442 = load i8*, i8** %441, align 8
  %derefference_value303 = load i8, i8* %442, align 8
  %eqtmpX304 = icmp eq i8 %derefference_value303, 46
  %andand305 = and i1 %eqtmpX299, %eqtmpX304
  store i1 %andand305, i1* %andand_result_var, align 1
  br label %cond_jump_end301

cond_jump_end301:                                 ; preds = %cond_jump_then300, %"cond_jump_elif8\0A"
  %andand_result_value306 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value306, label %"cond_jump_elif_then8\0A", label %"cond_jump_elif9\0A"

cond_jump_then318:                                ; preds = %"cond_jump_elif_then8\0A"
  %443 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %444 = bitcast i8* %443 to %sParserInfo**
  %info320 = load %sParserInfo*, %sParserInfo** %444, align 8
  %445 = getelementptr inbounds %sParserInfo, %sParserInfo* %info320, i32 0, i32 4
  %446 = load i8*, i8** %445, align 8
  %derefference_value321 = load i8, i8* %446, align 8
  %eqtmpX322 = icmp eq i8 %derefference_value321, 123
  %oror323 = or i1 %eqtmpX317, %eqtmpX322
  store i1 %oror323, i1* %andand_result_var1, align 1
  br label %cond_jump_end319

cond_jump_end319:                                 ; preds = %cond_jump_then318, %"cond_jump_elif_then8\0A"
  %oror_result_value324 = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value324, label %cond_jump_then325, label %cond_else_block326

cond_jump_then325:                                ; preds = %cond_jump_end319
  %params = alloca [32 x %sCLNode*]
  %447 = bitcast [32 x %sCLNode*]* %params to i8*
  store i8* %447, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %448 = call i8* @nccalloc(i64 1, i64 16)
  %449 = bitcast i8* %448 to %buffer*
  %450 = call %buffer* @buffer_initialize(%buffer* %449)
  %buf328 = alloca %buffer*
  %451 = bitcast %buffer** %buf328 to i8*
  store i8* %451, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store %buffer* %450, %buffer** %buf328, align 8
  %buf329 = load %buffer*, %buffer** %buf328, align 8
  %452 = call i1 @read_stdin(%buffer* %buf329)
  %LOGICAL_DIANEAL330 = icmp eq i1 %452, false
  br i1 %LOGICAL_DIANEAL330, label %cond_jump_then331, label %cond_end332

cond_else_block326:                               ; preds = %cond_jump_end319
  %453 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %454 = bitcast i8* %453 to %sParserInfo**
  %info362 = load %sParserInfo*, %sParserInfo** %454, align 8
  call void @parser_err_msg(%sParserInfo* %info362, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_string.30, i32 0, i32 0))
  %455 = bitcast [8192 x i8*]* %lvtable to i8*
  %456 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %455, i64 65536)
  %457 = load i8*, i8** %word, align 8
  %458 = ptrtoint i8* %457 to i64
  %459 = icmp ne i64 %458, 0
  br i1 %459, label %cond_then_block363, label %cond_end364

cond_end327:                                      ; preds = %cond_end361
  %460 = load i8*, i8** %word, align 8
  %461 = ptrtoint i8* %460 to i64
  %462 = icmp ne i64 %461, 0
  br i1 %462, label %cond_then_block365, label %cond_end366

cond_jump_then331:                                ; preds = %cond_jump_then325
  %463 = bitcast [8192 x i8*]* %lvtable to i8*
  %464 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %463, i64 65536)
  %465 = load %buffer*, %buffer** %buf328, align 8
  call void @buffer_finalize(%buffer* %465)
  %466 = ptrtoint %buffer* %465 to i64
  %467 = icmp ne i64 %466, 0
  br i1 %467, label %cond_then_block333, label %cond_end334

cond_end332:                                      ; preds = %cond_jump_then325
  %buf337 = load %buffer*, %buffer** %buf328, align 8
  %468 = call i8* @buffer_to_string(%buffer* %buf337)
  %str338 = alloca i8*
  %469 = bitcast i8** %str338 to i8*
  store i8* %469, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i8* %468, i8** %str338, align 8
  %str339 = load i8*, i8** %str338, align 8
  %470 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %471 = bitcast i8* %470 to %sParserInfo**
  %info340 = load %sParserInfo*, %sParserInfo** %471, align 8
  %472 = call %sCLNode* @sNodeTree_create_command_value(i8* %str339, %sParserInfo* %info340)
  %473 = bitcast [32 x %sCLNode*]* %params to %sCLNode**
  %element_addressC = getelementptr %sCLNode*, %sCLNode** %473, i32 0
  store %sCLNode* %472, %sCLNode** %element_addressC, align 8
  %num_params = alloca i32
  %474 = bitcast i32* %num_params to i8*
  store i8* %474, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 1, i32* %num_params, align 4
  %param_closed = alloca i1
  %475 = bitcast i1* %param_closed to i8*
  store i8* %475, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i1 false, i1* %param_closed, align 1
  %num_params341 = load i32, i32* %num_params, align 4
  %param_closed342 = load i1, i1* %param_closed, align 1
  %476 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %477 = bitcast i8* %476 to %sParserInfo**
  %info343 = load %sParserInfo*, %sParserInfo** %477, align 8
  %478 = bitcast [32 x %sCLNode*]* %params to %sCLNode**
  %479 = call i1 @parse_calling_params(i32* %num_params, %sCLNode** %478, i1* %param_closed, %sParserInfo* %info343)
  %LOGICAL_DIANEAL344 = icmp eq i1 %479, false
  br i1 %LOGICAL_DIANEAL344, label %cond_jump_then345, label %cond_end346

cond_then_block333:                               ; preds = %cond_jump_then331
  br label %cond_end334

cond_end334:                                      ; preds = %cond_then_block333, %cond_jump_then331
  %480 = bitcast %buffer* %465 to i8*
  call void @ncfree(i8* %480)
  %481 = load i8*, i8** %word, align 8
  %482 = ptrtoint i8* %481 to i64
  %483 = icmp ne i64 %482, 0
  br i1 %483, label %cond_then_block335, label %cond_end336

cond_then_block335:                               ; preds = %cond_end334
  br label %cond_end336

cond_end336:                                      ; preds = %cond_then_block335, %cond_end334
  call void @ncfree(i8* %481)
  ret i1 false

cond_jump_then345:                                ; preds = %cond_end332
  %484 = bitcast [8192 x i8*]* %lvtable to i8*
  %485 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %484, i64 65536)
  %486 = load %buffer*, %buffer** %buf328, align 8
  call void @buffer_finalize(%buffer* %486)
  %487 = ptrtoint %buffer* %486 to i64
  %488 = icmp ne i64 %487, 0
  br i1 %488, label %cond_then_block347, label %cond_end348

cond_end346:                                      ; preds = %cond_end332
  %489 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %490 = bitcast i8* %489 to %sCLNode***
  %node353 = load %sCLNode**, %sCLNode*** %490, align 8
  %491 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %492 = bitcast i8* %491 to i8**
  %word354 = load i8*, i8** %492, align 8
  %num_params355 = load i32, i32* %num_params, align 4
  %param_closed356 = load i1, i1* %param_closed, align 1
  %493 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %494 = bitcast i8* %493 to %sParserInfo**
  %info357 = load %sParserInfo*, %sParserInfo** %494, align 8
  %495 = bitcast [32 x %sCLNode*]* %params to %sCLNode**
  %496 = call %sCLNode* @sNodeTree_create_method_call(i8* %word354, i32 %num_params355, %sCLNode** %495, i1 %param_closed356, %sParserInfo* %info357)
  store %sCLNode* %496, %sCLNode** %node353, align 8
  %497 = load %buffer*, %buffer** %buf328, align 8
  call void @buffer_finalize(%buffer* %497)
  %498 = ptrtoint %buffer* %497 to i64
  %499 = icmp ne i64 %498, 0
  br i1 %499, label %cond_then_block358, label %cond_end359

cond_then_block347:                               ; preds = %cond_jump_then345
  br label %cond_end348

cond_end348:                                      ; preds = %cond_then_block347, %cond_jump_then345
  %500 = bitcast %buffer* %486 to i8*
  call void @ncfree(i8* %500)
  %501 = load i8*, i8** %str338, align 8
  %502 = ptrtoint i8* %501 to i64
  %503 = icmp ne i64 %502, 0
  br i1 %503, label %cond_then_block349, label %cond_end350

cond_then_block349:                               ; preds = %cond_end348
  br label %cond_end350

cond_end350:                                      ; preds = %cond_then_block349, %cond_end348
  call void @ncfree(i8* %501)
  %504 = load i8*, i8** %word, align 8
  %505 = ptrtoint i8* %504 to i64
  %506 = icmp ne i64 %505, 0
  br i1 %506, label %cond_then_block351, label %cond_end352

cond_then_block351:                               ; preds = %cond_end350
  br label %cond_end352

cond_end352:                                      ; preds = %cond_then_block351, %cond_end350
  call void @ncfree(i8* %504)
  ret i1 false

cond_then_block358:                               ; preds = %cond_end346
  br label %cond_end359

cond_end359:                                      ; preds = %cond_then_block358, %cond_end346
  %507 = bitcast %buffer* %497 to i8*
  call void @ncfree(i8* %507)
  %508 = load i8*, i8** %str338, align 8
  %509 = ptrtoint i8* %508 to i64
  %510 = icmp ne i64 %509, 0
  br i1 %510, label %cond_then_block360, label %cond_end361

cond_then_block360:                               ; preds = %cond_end359
  br label %cond_end361

cond_end361:                                      ; preds = %cond_then_block360, %cond_end359
  call void @ncfree(i8* %508)
  br label %cond_end327

cond_then_block363:                               ; preds = %cond_else_block326
  br label %cond_end364

cond_end364:                                      ; preds = %cond_then_block363, %cond_else_block326
  call void @ncfree(i8* %457)
  ret i1 false

cond_then_block365:                               ; preds = %cond_end327
  br label %cond_end366

cond_end366:                                      ; preds = %cond_then_block365, %cond_end327
  call void @ncfree(i8* %460)
  br label %cond_end

cond_jump_then380:                                ; preds = %"cond_jump_elif_then9\0A"
  %511 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %512 = bitcast i8* %511 to %sParserInfo**
  %info382 = load %sParserInfo*, %sParserInfo** %512, align 8
  %513 = getelementptr inbounds %sParserInfo, %sParserInfo* %info382, i32 0, i32 4
  %514 = load i8*, i8** %513, align 8
  %derefference_value383 = load i8, i8* %514, align 8
  %eqtmpX384 = icmp eq i8 %derefference_value383, 95
  %oror385 = or i1 %206, %eqtmpX384
  store i1 %oror385, i1* %andand_result_var1, align 1
  br label %cond_jump_end381

cond_jump_end381:                                 ; preds = %cond_jump_then380, %"cond_jump_elif_then9\0A"
  %oror_result_value386 = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value386, label %cond_jump_then387, label %cond_else_block388

cond_jump_then387:                                ; preds = %cond_jump_end381
  %515 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %516 = bitcast i8* %515 to %sParserInfo**
  %info390 = load %sParserInfo*, %sParserInfo** %516, align 8
  %517 = call i8* @parse_word(%sParserInfo* %info390)
  %var_name = alloca i8*
  %518 = bitcast i8** %var_name to i8*
  store i8* %518, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i8* %517, i8** %var_name, align 8
  %519 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %520 = bitcast i8* %519 to %sParserInfo**
  %info391 = load %sParserInfo*, %sParserInfo** %520, align 8
  %521 = getelementptr inbounds %sParserInfo, %sParserInfo* %info391, i32 0, i32 4
  %522 = load i8*, i8** %521, align 8
  %derefference_value392 = load i8, i8* %522, align 8
  %eqtmpX393 = icmp eq i8 %derefference_value392, 61
  br i1 %eqtmpX393, label %cond_jump_then394, label %cond_else_block395

cond_else_block388:                               ; preds = %cond_jump_end381
  %523 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %524 = bitcast i8* %523 to %sParserInfo**
  %info421 = load %sParserInfo*, %sParserInfo** %524, align 8
  call void @parser_err_msg(%sParserInfo* %info421, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_string.31, i32 0, i32 0))
  br label %cond_end389

cond_end389:                                      ; preds = %cond_else_block388, %cond_end420
  br label %cond_end

cond_jump_then394:                                ; preds = %cond_jump_then387
  %525 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %526 = bitcast i8* %525 to %sParserInfo**
  %info397 = load %sParserInfo*, %sParserInfo** %526, align 8
  %527 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %528 = bitcast i8* %527 to %sParserInfo**
  %info398 = load %sParserInfo*, %sParserInfo** %528, align 8
  %529 = getelementptr inbounds %sParserInfo, %sParserInfo* %info398, i32 0, i32 4
  %530 = load i8*, i8** %529, align 8
  %531 = ptrtoint i8* %530 to i64
  %addtmp399 = add nsw i64 %531, 1
  %intToPtr2400 = inttoptr i64 %addtmp399 to i8*
  %532 = getelementptr inbounds %sParserInfo, %sParserInfo* %info397, i32 0, i32 4
  store i8* %intToPtr2400, i8** %532, align 8
  %533 = ptrtoint i8* %intToPtr2400 to i64
  %subtmp401 = sub nsw i64 %533, 1
  %IntTOPtr4b402 = inttoptr i64 %subtmp401 to i8*
  %534 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %535 = bitcast i8* %534 to %sParserInfo**
  %info403 = load %sParserInfo*, %sParserInfo** %535, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info403)
  %exp404 = alloca %sCLNode*
  %536 = bitcast %sCLNode** %exp404 to i8*
  store i8* %536, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store %sCLNode* null, %sCLNode** %exp404, align 8
  %exp405 = load %sCLNode*, %sCLNode** %exp404, align 8
  %537 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %538 = bitcast i8* %537 to %sParserInfo**
  %info406 = load %sParserInfo*, %sParserInfo** %538, align 8
  %539 = call i1 @expression(%sCLNode** %exp404, %sParserInfo* %info406)
  %LOGICAL_DIANEAL407 = icmp eq i1 %539, false
  br i1 %LOGICAL_DIANEAL407, label %cond_jump_then408, label %cond_end409

cond_else_block395:                               ; preds = %cond_jump_then387
  %540 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %541 = bitcast i8* %540 to %sCLNode***
  %node416 = load %sCLNode**, %sCLNode*** %541, align 8
  %542 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %543 = bitcast i8* %542 to i8**
  %var_name417 = load i8*, i8** %543, align 8
  %544 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %545 = bitcast i8* %544 to %sParserInfo**
  %info418 = load %sParserInfo*, %sParserInfo** %545, align 8
  %546 = call %sCLNode* @sNodeTree_create_load_global_variable(i8* %var_name417, %sParserInfo* %info418)
  store %sCLNode* %546, %sCLNode** %node416, align 8
  br label %cond_end396

cond_end396:                                      ; preds = %cond_else_block395, %cond_end409
  %547 = load i8*, i8** %var_name, align 8
  %548 = ptrtoint i8* %547 to i64
  %549 = icmp ne i64 %548, 0
  br i1 %549, label %cond_then_block419, label %cond_end420

cond_jump_then408:                                ; preds = %cond_jump_then394
  %550 = bitcast [8192 x i8*]* %lvtable to i8*
  %551 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %550, i64 65536)
  %552 = load i8*, i8** %var_name, align 8
  %553 = ptrtoint i8* %552 to i64
  %554 = icmp ne i64 %553, 0
  br i1 %554, label %cond_then_block410, label %cond_end411

cond_end409:                                      ; preds = %cond_jump_then394
  %555 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %556 = bitcast i8* %555 to %sCLNode***
  %node412 = load %sCLNode**, %sCLNode*** %556, align 8
  %557 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %558 = bitcast i8* %557 to i8**
  %var_name413 = load i8*, i8** %558, align 8
  %exp414 = load %sCLNode*, %sCLNode** %exp404, align 8
  %559 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %560 = bitcast i8* %559 to %sParserInfo**
  %info415 = load %sParserInfo*, %sParserInfo** %560, align 8
  %561 = call %sCLNode* @sNodeTree_create_store_global_variable(i8* %var_name413, %sCLNode* %exp414, %sParserInfo* %info415)
  store %sCLNode* %561, %sCLNode** %node412, align 8
  br label %cond_end396

cond_then_block410:                               ; preds = %cond_jump_then408
  br label %cond_end411

cond_end411:                                      ; preds = %cond_then_block410, %cond_jump_then408
  call void @ncfree(i8* %552)
  ret i1 false

cond_then_block419:                               ; preds = %cond_end396
  br label %cond_end420

cond_end420:                                      ; preds = %cond_then_block419, %cond_end396
  call void @ncfree(i8* %547)
  br label %cond_end389

cond_jump_then424:                                ; preds = %"cond_jump_elif10\0A"
  %info426 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %562 = getelementptr inbounds %sParserInfo, %sParserInfo* %info426, i32 0, i32 4
  %563 = load i8*, i8** %562, align 8
  %derefference_value427 = load i8, i8* %563, align 8
  %leeqtmp = icmp sle i8 %derefference_value427, 122
  %andand428 = and i1 %getmp, %leeqtmp
  store i1 %andand428, i1* %andand_result_var, align 1
  br label %cond_jump_end425

cond_jump_end425:                                 ; preds = %cond_jump_then424, %"cond_jump_elif10\0A"
  %andand_result_value429 = load i1, i1* %andand_result_var, align 1
  store i1 %andand_result_value429, i1* %andand_result_var1, align 1
  br i1 %andand_result_value429, label %cond_jump_end431, label %cond_jump_then430

cond_jump_then430:                                ; preds = %cond_jump_end425
  %info432 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %564 = getelementptr inbounds %sParserInfo, %sParserInfo* %info432, i32 0, i32 4
  %565 = load i8*, i8** %564, align 8
  %derefference_value433 = load i8, i8* %565, align 8
  %getmp434 = icmp sge i8 %derefference_value433, 65
  store i1 %getmp434, i1* %andand_result_var, align 1
  br i1 %getmp434, label %cond_jump_then435, label %cond_jump_end436

cond_jump_end431:                                 ; preds = %cond_jump_end436, %cond_jump_end425
  %oror_result_value443 = load i1, i1* %andand_result_var1, align 1
  store i1 %oror_result_value443, i1* %andand_result_var1, align 1
  br i1 %oror_result_value443, label %cond_jump_end445, label %cond_jump_then444

cond_jump_then435:                                ; preds = %cond_jump_then430
  %info437 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %566 = getelementptr inbounds %sParserInfo, %sParserInfo* %info437, i32 0, i32 4
  %567 = load i8*, i8** %566, align 8
  %derefference_value438 = load i8, i8* %567, align 8
  %leeqtmp439 = icmp sle i8 %derefference_value438, 90
  %andand440 = and i1 %getmp434, %leeqtmp439
  store i1 %andand440, i1* %andand_result_var, align 1
  br label %cond_jump_end436

cond_jump_end436:                                 ; preds = %cond_jump_then435, %cond_jump_then430
  %andand_result_value441 = load i1, i1* %andand_result_var, align 1
  %oror442 = or i1 %andand_result_value429, %andand_result_value441
  store i1 %oror442, i1* %andand_result_var1, align 1
  br label %cond_jump_end431

cond_jump_then444:                                ; preds = %cond_jump_end431
  %info446 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %568 = getelementptr inbounds %sParserInfo, %sParserInfo* %info446, i32 0, i32 4
  %569 = load i8*, i8** %568, align 8
  %derefference_value447 = load i8, i8* %569, align 8
  %eqtmpX448 = icmp eq i8 %derefference_value447, 95
  %oror449 = or i1 %oror_result_value443, %eqtmpX448
  store i1 %oror449, i1* %andand_result_var1, align 1
  br label %cond_jump_end445

cond_jump_end445:                                 ; preds = %cond_jump_then444, %cond_jump_end431
  %oror_result_value450 = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value450, label %"cond_jump_elif_then10\0A", label %"cond_jump_elif11\0A"

cond_jump_then457:                                ; preds = %"cond_jump_elif_then10\0A"
  %570 = call i16** @__ctype_b_loc()
  %derefference_value484 = load i16*, i16** %570, align 8
  %571 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %572 = bitcast i8* %571 to %sParserInfo**
  %info485 = load %sParserInfo*, %sParserInfo** %572, align 8
  %573 = getelementptr inbounds %sParserInfo, %sParserInfo* %info485, i32 0, i32 4
  %574 = load i8*, i8** %573, align 8
  %derefference_value486 = load i8, i8* %574, align 8
  %sext13487 = zext i8 %derefference_value486 to i32
  %element_addressB488 = getelementptr i16, i16* %derefference_value484, i32 %sext13487
  %element489 = load i16, i16* %element_addressB488, align 2
  %andtmp490 = and i16 %element489, 1024
  %575 = icmp ne i16 %andtmp490, 0
  store i1 %575, i1* %andand_result_var1, align 1
  br i1 %575, label %cond_jump_end492, label %cond_jump_then491

"cond_jump_elif0\0A458":                          ; preds = %"cond_jump_elif_then10\0A"
  %word561 = load i8*, i8** %word454, align 8
  %576 = call i32 @strcmp(i8* %word561, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.35, i32 0, i32 0))
  %eqtmpX562 = icmp eq i32 %576, 0
  br i1 %eqtmpX562, label %"cond_jump_elif_then0\0A459", label %"cond_jump_elif1\0A460"

"cond_jump_elif_then0\0A459":                     ; preds = %"cond_jump_elif0\0A458"
  %577 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %578 = bitcast i8* %577 to %sCLNode***
  %node563 = load %sCLNode**, %sCLNode*** %578, align 8
  %579 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %580 = bitcast i8* %579 to %sParserInfo**
  %info564 = load %sParserInfo*, %sParserInfo** %580, align 8
  %581 = call %sCLNode* @sNodeTree_create_true_value(%sParserInfo* %info564)
  store %sCLNode* %581, %sCLNode** %node563, align 8
  br label %cond_end483

"cond_jump_elif1\0A460":                          ; preds = %"cond_jump_elif0\0A458"
  %word565 = load i8*, i8** %word454, align 8
  %582 = call i32 @strcmp(i8* %word565, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_string.36, i32 0, i32 0))
  %eqtmpX566 = icmp eq i32 %582, 0
  br i1 %eqtmpX566, label %"cond_jump_elif_then1\0A461", label %"cond_jump_elif2\0A462"

"cond_jump_elif_then1\0A461":                     ; preds = %"cond_jump_elif1\0A460"
  %583 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %584 = bitcast i8* %583 to %sCLNode***
  %node567 = load %sCLNode**, %sCLNode*** %584, align 8
  %585 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %586 = bitcast i8* %585 to %sParserInfo**
  %info568 = load %sParserInfo*, %sParserInfo** %586, align 8
  %587 = call %sCLNode* @sNodeTree_create_false_value(%sParserInfo* %info568)
  store %sCLNode* %587, %sCLNode** %node567, align 8
  br label %cond_end483

"cond_jump_elif2\0A462":                          ; preds = %"cond_jump_elif1\0A460"
  %word569 = load i8*, i8** %word454, align 8
  %588 = call i32 @strcmp(i8* %word569, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.37, i32 0, i32 0))
  %eqtmpX570 = icmp eq i32 %588, 0
  br i1 %eqtmpX570, label %"cond_jump_elif_then2\0A463", label %"cond_jump_elif3\0A464"

"cond_jump_elif_then2\0A463":                     ; preds = %"cond_jump_elif2\0A462"
  %589 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %590 = bitcast i8* %589 to %sCLNode***
  %node571 = load %sCLNode**, %sCLNode*** %590, align 8
  %591 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %592 = bitcast i8* %591 to %sParserInfo**
  %info572 = load %sParserInfo*, %sParserInfo** %592, align 8
  %593 = call %sCLNode* @sNodeTree_create_null_value(%sParserInfo* %info572)
  store %sCLNode* %593, %sCLNode** %node571, align 8
  br label %cond_end483

"cond_jump_elif3\0A464":                          ; preds = %"cond_jump_elif2\0A462"
  %word573 = load i8*, i8** %word454, align 8
  %594 = call i32 @strcmp(i8* %word573, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_string.38, i32 0, i32 0))
  %eqtmpX574 = icmp eq i32 %594, 0
  br i1 %eqtmpX574, label %"cond_jump_elif_then3\0A465", label %"cond_jump_elif4\0A466"

"cond_jump_elif_then3\0A465":                     ; preds = %"cond_jump_elif3\0A464"
  %595 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %596 = bitcast i8* %595 to %sCLNode***
  %node575 = load %sCLNode**, %sCLNode*** %596, align 8
  %597 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %598 = bitcast i8* %597 to %sParserInfo**
  %info576 = load %sParserInfo*, %sParserInfo** %598, align 8
  %599 = call i1 @parse_if_expression(%sCLNode** %node575, %sParserInfo* %info576)
  %LOGICAL_DIANEAL577 = icmp eq i1 %599, false
  br i1 %LOGICAL_DIANEAL577, label %cond_jump_then578, label %cond_end579

"cond_jump_elif4\0A466":                          ; preds = %"cond_jump_elif3\0A464"
  %word582 = load i8*, i8** %word454, align 8
  %600 = call i32 @strcmp(i8* %word582, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_string.39, i32 0, i32 0))
  %eqtmpX583 = icmp eq i32 %600, 0
  br i1 %eqtmpX583, label %"cond_jump_elif_then4\0A467", label %"cond_jump_elif5\0A468"

"cond_jump_elif_then4\0A467":                     ; preds = %"cond_jump_elif4\0A466"
  %601 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %602 = bitcast i8* %601 to %sCLNode***
  %node584 = load %sCLNode**, %sCLNode*** %602, align 8
  %603 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %604 = bitcast i8* %603 to %sParserInfo**
  %info585 = load %sParserInfo*, %sParserInfo** %604, align 8
  %605 = call i1 @parse_break_expression(%sCLNode** %node584, %sParserInfo* %info585)
  %LOGICAL_DIANEAL586 = icmp eq i1 %605, false
  br i1 %LOGICAL_DIANEAL586, label %cond_jump_then587, label %cond_end588

"cond_jump_elif5\0A468":                          ; preds = %"cond_jump_elif4\0A466"
  %word591 = load i8*, i8** %word454, align 8
  %606 = call i32 @strcmp(i8* %word591, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_string.40, i32 0, i32 0))
  %eqtmpX592 = icmp eq i32 %606, 0
  br i1 %eqtmpX592, label %"cond_jump_elif_then5\0A469", label %"cond_jump_elif6\0A470"

"cond_jump_elif_then5\0A469":                     ; preds = %"cond_jump_elif5\0A468"
  %607 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %608 = bitcast i8* %607 to %sCLNode***
  %node593 = load %sCLNode**, %sCLNode*** %608, align 8
  %609 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %610 = bitcast i8* %609 to %sParserInfo**
  %info594 = load %sParserInfo*, %sParserInfo** %610, align 8
  %611 = call i1 @parse_while_expression(%sCLNode** %node593, %sParserInfo* %info594)
  %LOGICAL_DIANEAL595 = icmp eq i1 %611, false
  br i1 %LOGICAL_DIANEAL595, label %cond_jump_then596, label %cond_end597

"cond_jump_elif6\0A470":                          ; preds = %"cond_jump_elif5\0A468"
  %word600 = load i8*, i8** %word454, align 8
  %612 = call i32 @strcmp(i8* %word600, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_string.41, i32 0, i32 0))
  %eqtmpX601 = icmp eq i32 %612, 0
  br i1 %eqtmpX601, label %"cond_jump_elif_then6\0A471", label %"cond_jump_elif7\0A472"

"cond_jump_elif_then6\0A471":                     ; preds = %"cond_jump_elif6\0A470"
  %613 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %614 = bitcast i8* %613 to %sCLNode***
  %node602 = load %sCLNode**, %sCLNode*** %614, align 8
  %615 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %616 = bitcast i8* %615 to %sParserInfo**
  %info603 = load %sParserInfo*, %sParserInfo** %616, align 8
  %617 = call i1 @parse_throw(%sCLNode** %node602, %sParserInfo* %info603)
  %LOGICAL_DIANEAL604 = icmp eq i1 %617, false
  br i1 %LOGICAL_DIANEAL604, label %cond_jump_then605, label %cond_end606

"cond_jump_elif7\0A472":                          ; preds = %"cond_jump_elif6\0A470"
  %word609 = load i8*, i8** %word454, align 8
  %618 = call i32 @strcmp(i8* %word609, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_string.42, i32 0, i32 0))
  %eqtmpX610 = icmp eq i32 %618, 0
  br i1 %eqtmpX610, label %"cond_jump_elif_then7\0A473", label %"cond_jump_elif8\0A474"

"cond_jump_elif_then7\0A473":                     ; preds = %"cond_jump_elif7\0A472"
  %619 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %620 = bitcast i8* %619 to %sCLNode***
  %node611 = load %sCLNode**, %sCLNode*** %620, align 8
  %621 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %622 = bitcast i8* %621 to %sParserInfo**
  %info612 = load %sParserInfo*, %sParserInfo** %622, align 8
  %623 = call i1 @parse_try(%sCLNode** %node611, %sParserInfo* %info612)
  %LOGICAL_DIANEAL613 = icmp eq i1 %623, false
  br i1 %LOGICAL_DIANEAL613, label %cond_jump_then614, label %cond_end615

"cond_jump_elif8\0A474":                          ; preds = %"cond_jump_elif7\0A472"
  %word618 = load i8*, i8** %word454, align 8
  %624 = call i32 @strcmp(i8* %word618, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_string.43, i32 0, i32 0))
  %eqtmpX619 = icmp eq i32 %624, 0
  br i1 %eqtmpX619, label %"cond_jump_elif_then8\0A475", label %"cond_jump_elif9\0A476"

"cond_jump_elif_then8\0A475":                     ; preds = %"cond_jump_elif8\0A474"
  %625 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %626 = bitcast i8* %625 to %sCLNode***
  %node620 = load %sCLNode**, %sCLNode*** %626, align 8
  %627 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %628 = bitcast i8* %627 to %sParserInfo**
  %info621 = load %sParserInfo*, %sParserInfo** %628, align 8
  %629 = call i1 @parse_lambda_expression(%sCLNode** %node620, %sParserInfo* %info621)
  %LOGICAL_DIANEAL622 = icmp eq i1 %629, false
  br i1 %LOGICAL_DIANEAL622, label %cond_jump_then623, label %cond_end624

"cond_jump_elif9\0A476":                          ; preds = %"cond_jump_elif8\0A474"
  %word627 = load i8*, i8** %word454, align 8
  %630 = call i32 @strcmp(i8* %word627, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_string.44, i32 0, i32 0))
  %eqtmpX628 = icmp eq i32 %630, 0
  br i1 %eqtmpX628, label %"cond_jump_elif_then9\0A477", label %"cond_jump_elif10\0A478"

"cond_jump_elif_then9\0A477":                     ; preds = %"cond_jump_elif9\0A476"
  %631 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %632 = bitcast i8* %631 to %sCLNode***
  %node629 = load %sCLNode**, %sCLNode*** %632, align 8
  %633 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %634 = bitcast i8* %633 to %sParserInfo**
  %info630 = load %sParserInfo*, %sParserInfo** %634, align 8
  %635 = call i1 @parse_class(%sCLNode** %node629, %sParserInfo* %info630)
  %LOGICAL_DIANEAL631 = icmp eq i1 %635, false
  br i1 %LOGICAL_DIANEAL631, label %cond_jump_then632, label %cond_end633

"cond_jump_elif10\0A478":                         ; preds = %"cond_jump_elif9\0A476"
  %word636 = load i8*, i8** %word454, align 8
  %636 = call i32 @strcmp(i8* %word636, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_string.45, i32 0, i32 0))
  %eqtmpX637 = icmp eq i32 %636, 0
  br i1 %eqtmpX637, label %"cond_jump_elif_then10\0A479", label %"cond_jump_elif11\0A480"

"cond_jump_elif_then10\0A479":                    ; preds = %"cond_jump_elif10\0A478"
  %637 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %638 = bitcast i8* %637 to %sCLNode***
  %node638 = load %sCLNode**, %sCLNode*** %638, align 8
  %639 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %640 = bitcast i8* %639 to %sParserInfo**
  %info639 = load %sParserInfo*, %sParserInfo** %640, align 8
  %641 = call i1 @parse_macro(%sCLNode** %node638, %sParserInfo* %info639)
  %LOGICAL_DIANEAL640 = icmp eq i1 %641, false
  br i1 %LOGICAL_DIANEAL640, label %cond_jump_then641, label %cond_end642

"cond_jump_elif11\0A480":                         ; preds = %"cond_jump_elif10\0A478"
  %word645 = load i8*, i8** %word454, align 8
  %642 = call i32 @strcmp(i8* %word645, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_string.46, i32 0, i32 0))
  %eqtmpX646 = icmp eq i32 %642, 0
  br i1 %eqtmpX646, label %"cond_jump_elif_then11\0A481", label %"cond_jump_elif12\0A"

"cond_jump_elif_then11\0A481":                    ; preds = %"cond_jump_elif11\0A480"
  %643 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %644 = bitcast i8* %643 to %sCLNode***
  %node647 = load %sCLNode**, %sCLNode*** %644, align 8
  %645 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %646 = bitcast i8* %645 to %sParserInfo**
  %info648 = load %sParserInfo*, %sParserInfo** %646, align 8
  %647 = call i1 @expression(%sCLNode** %node647, %sParserInfo* %info648)
  %LOGICAL_DIANEAL649 = icmp eq i1 %647, false
  br i1 %LOGICAL_DIANEAL649, label %cond_jump_then650, label %cond_end651

"cond_jump_elif12\0A":                            ; preds = %"cond_jump_elif11\0A480"
  %word658 = load i8*, i8** %word454, align 8
  %648 = call i32 @strcmp(i8* %word658, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_string.47, i32 0, i32 0))
  %eqtmpX659 = icmp eq i32 %648, 0
  br i1 %eqtmpX659, label %"cond_jump_elif_then12\0A", label %"cond_jump_elif13\0A"

"cond_jump_elif_then12\0A":                       ; preds = %"cond_jump_elif12\0A"
  %type660 = alloca %sCLType*
  %649 = bitcast %sCLType** %type660 to i8*
  store i8* %649, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store %sCLType* null, %sCLType** %type660, align 8
  %type661 = load %sCLType*, %sCLType** %type660, align 8
  %650 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %651 = bitcast i8* %650 to %sParserInfo**
  %info662 = load %sParserInfo*, %sParserInfo** %651, align 8
  %652 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %653 = bitcast i8* %652 to %sParserInfo**
  %info663 = load %sParserInfo*, %sParserInfo** %653, align 8
  %654 = getelementptr inbounds %sParserInfo, %sParserInfo* %info663, i32 0, i32 9
  %655 = load %vector__sCLTypep*, %vector__sCLTypep** %654, align 8
  %656 = call i1 @parse_type(%sCLType** %type660, %sParserInfo* %info662, %vector__sCLTypep* %655)
  %LOGICAL_DIANEAL664 = icmp eq i1 %656, false
  br i1 %LOGICAL_DIANEAL664, label %cond_jump_then665, label %cond_end666

"cond_jump_elif13\0A":                            ; preds = %"cond_jump_elif12\0A"
  %word703 = load i8*, i8** %word454, align 8
  %657 = call i32 @strcmp(i8* %word703, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_string.49, i32 0, i32 0))
  %eqtmpX704 = icmp eq i32 %657, 0
  br i1 %eqtmpX704, label %"cond_jump_elif_then13\0A", label %"cond_jump_elif14\0A"

"cond_jump_elif_then13\0A":                       ; preds = %"cond_jump_elif13\0A"
  %658 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %659 = bitcast i8* %658 to %sParserInfo**
  %info705 = load %sParserInfo*, %sParserInfo** %659, align 8
  %660 = call i8* @parse_word(%sParserInfo* %info705)
  %klass_name = alloca i8*
  %661 = bitcast i8** %klass_name to i8*
  store i8* %661, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i8* %660, i8** %klass_name, align 8
  %gClasses = load %map__charp_sCLClassp*, %map__charp_sCLClassp** @gClasses, align 8
  %klass_name706 = load i8*, i8** %klass_name, align 8
  %662 = call %sCLClass* @"at_charp_sCLClassp24_src/parser"(%map__charp_sCLClassp* %gClasses, i8* %klass_name706, %sCLClass* null)
  %klass = alloca %sCLClass*
  %663 = bitcast %sCLClass** %klass to i8*
  store i8* %663, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store %sCLClass* %662, %sCLClass** %klass, align 8
  %klass707 = load %sCLClass*, %sCLClass** %klass, align 8
  %664 = ptrtoint %sCLClass* %klass707 to i64
  %665 = icmp ne i64 %664, 0
  br i1 %665, label %cond_jump_then708, label %cond_end709

"cond_jump_elif14\0A":                            ; preds = %"cond_jump_elif13\0A"
  %word720 = load i8*, i8** %word454, align 8
  %666 = call i32 @strcmp(i8* %word720, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_string.53, i32 0, i32 0))
  %eqtmpX721 = icmp eq i32 %666, 0
  br i1 %eqtmpX721, label %"cond_jump_elif_then14\0A", label %"cond_jump_elif15\0A"

"cond_jump_elif_then14\0A":                       ; preds = %"cond_jump_elif14\0A"
  %667 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %668 = bitcast i8* %667 to %sParserInfo**
  %info722 = load %sParserInfo*, %sParserInfo** %668, align 8
  %669 = call i8* @parse_word(%sParserInfo* %info722)
  %klass_name723 = alloca i8*
  %670 = bitcast i8** %klass_name723 to i8*
  store i8* %670, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i8* %669, i8** %klass_name723, align 8
  %klass_name724 = load i8*, i8** %klass_name723, align 8
  %671 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %672 = bitcast i8* %671 to %sParserInfo**
  %info725 = load %sParserInfo*, %sParserInfo** %672, align 8
  %673 = call i1 @load_class(i8* %klass_name724, %sParserInfo* %info725)
  %LOGICAL_DIANEAL726 = icmp eq i1 %673, false
  br i1 %LOGICAL_DIANEAL726, label %cond_jump_then727, label %cond_else_block728

"cond_jump_elif15\0A":                            ; preds = %"cond_jump_elif14\0A"
  %word734 = load i8*, i8** %word454, align 8
  %674 = call i32 @strcmp(i8* %word734, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.54, i32 0, i32 0))
  %eqtmpX735 = icmp eq i32 %674, 0
  br i1 %eqtmpX735, label %"cond_jump_elif_then15\0A", label %"cond_jump_elif16\0A"

"cond_jump_elif_then15\0A":                       ; preds = %"cond_jump_elif15\0A"
  %params736 = alloca [32 x %sCLNode*]
  %675 = bitcast [32 x %sCLNode*]* %params736 to i8*
  store i8* %675, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %676 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %677 = bitcast i8* %676 to %sCLNode***
  %node737 = load %sCLNode**, %sCLNode*** %677, align 8
  %derefference_value738 = load %sCLNode*, %sCLNode** %node737, align 8
  %eqtmpX739 = icmp eq %sCLNode* %derefference_value738, null
  br i1 %eqtmpX739, label %cond_jump_then740, label %cond_else_block741

"cond_jump_elif16\0A":                            ; preds = %"cond_jump_elif15\0A"
  %678 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %679 = bitcast i8* %678 to %sParserInfo**
  %info763 = load %sParserInfo*, %sParserInfo** %679, align 8
  %680 = getelementptr inbounds %sParserInfo, %sParserInfo* %info763, i32 0, i32 4
  %681 = load i8*, i8** %680, align 8
  %derefference_value764 = load i8, i8* %681, align 8
  %eqtmpX765 = icmp eq i8 %derefference_value764, 33
  store i1 %eqtmpX765, i1* %andand_result_var, align 1
  br i1 %eqtmpX765, label %cond_jump_then766, label %cond_jump_end767

"cond_jump_elif_then16\0A":                       ; preds = %cond_jump_end767
  %682 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %683 = bitcast i8* %682 to %sParserInfo**
  %info775 = load %sParserInfo*, %sParserInfo** %683, align 8
  %684 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %685 = bitcast i8* %684 to %sParserInfo**
  %info776 = load %sParserInfo*, %sParserInfo** %685, align 8
  %686 = getelementptr inbounds %sParserInfo, %sParserInfo* %info776, i32 0, i32 4
  %687 = load i8*, i8** %686, align 8
  %688 = ptrtoint i8* %687 to i64
  %addtmp777 = add nsw i64 %688, 2
  %intToPtr2778 = inttoptr i64 %addtmp777 to i8*
  %689 = getelementptr inbounds %sParserInfo, %sParserInfo* %info775, i32 0, i32 4
  store i8* %intToPtr2778, i8** %689, align 8
  %690 = ptrtoint i8* %intToPtr2778 to i64
  %subtmp779 = sub nsw i64 %690, 2
  %IntTOPtr4b780 = inttoptr i64 %subtmp779 to i8*
  %691 = call i8* @nccalloc(i64 1, i64 16)
  %692 = bitcast i8* %691 to %buffer*
  %693 = call %buffer* @buffer_initialize(%buffer* %692)
  %block_text = alloca %buffer*
  %694 = bitcast %buffer** %block_text to i8*
  store i8* %694, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store %buffer* %693, %buffer** %block_text, align 8
  %block_text781 = load %buffer*, %buffer** %block_text, align 8
  %695 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %696 = bitcast i8* %695 to %sParserInfo**
  %info782 = load %sParserInfo*, %sParserInfo** %696, align 8
  %697 = call i1 @get_block_text(%buffer* %block_text781, i8 40, i8 41, %sParserInfo* %info782)
  %LOGICAL_DIANEAL783 = icmp eq i1 %697, false
  br i1 %LOGICAL_DIANEAL783, label %cond_jump_then784, label %cond_end785

cond_else_block482:                               ; preds = %cond_jump_end767
  %698 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %699 = bitcast i8* %698 to %sParserInfo**
  %info811 = load %sParserInfo*, %sParserInfo** %699, align 8
  %700 = getelementptr inbounds %sParserInfo, %sParserInfo* %info811, i32 0, i32 4
  %701 = load i8*, i8** %700, align 8
  %derefference_value812 = load i8, i8* %701, align 8
  %eqtmpX813 = icmp eq i8 %derefference_value812, 61
  store i1 %eqtmpX813, i1* %andand_result_var, align 1
  br i1 %eqtmpX813, label %cond_jump_then814, label %cond_jump_end815

cond_end483:                                      ; preds = %cond_end829, %cond_end810, %cond_end755, %cond_end733, %cond_end719, %cond_end683, %cond_end651, %cond_end642, %cond_end633, %cond_end624, %cond_end615, %cond_end606, %cond_end597, %cond_end588, %cond_end579, %"cond_jump_elif_then2\0A463", %"cond_jump_elif_then1\0A461", %"cond_jump_elif_then0\0A459", %cond_end500
  %702 = load i8*, i8** %word454, align 8
  %703 = ptrtoint i8* %702 to i64
  %704 = icmp ne i64 %703, 0
  br i1 %704, label %cond_then_block1102, label %cond_end1103

cond_jump_then491:                                ; preds = %cond_jump_then457
  %705 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %706 = bitcast i8* %705 to %sParserInfo**
  %info493 = load %sParserInfo*, %sParserInfo** %706, align 8
  %707 = getelementptr inbounds %sParserInfo, %sParserInfo* %info493, i32 0, i32 4
  %708 = load i8*, i8** %707, align 8
  %derefference_value494 = load i8, i8* %708, align 8
  %eqtmpX495 = icmp eq i8 %derefference_value494, 95
  %oror496 = or i1 %575, %eqtmpX495
  store i1 %oror496, i1* %andand_result_var1, align 1
  br label %cond_jump_end492

cond_jump_end492:                                 ; preds = %cond_jump_then491, %cond_jump_then457
  %oror_result_value497 = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value497, label %cond_jump_then498, label %cond_else_block499

cond_jump_then498:                                ; preds = %cond_jump_end492
  %709 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %710 = bitcast i8* %709 to %sParserInfo**
  %info501 = load %sParserInfo*, %sParserInfo** %710, align 8
  %711 = call i8* @parse_word(%sParserInfo* %info501)
  %var_name502 = alloca i8*
  %712 = bitcast i8** %var_name502 to i8*
  store i8* %712, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i8* %711, i8** %var_name502, align 8
  %type = alloca %sCLType*
  %713 = bitcast %sCLType** %type to i8*
  store i8* %713, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store %sCLType* null, %sCLType** %type, align 8
  %714 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %715 = bitcast i8* %714 to %sParserInfo**
  %info503 = load %sParserInfo*, %sParserInfo** %715, align 8
  %716 = getelementptr inbounds %sParserInfo, %sParserInfo* %info503, i32 0, i32 4
  %717 = load i8*, i8** %716, align 8
  %derefference_value504 = load i8, i8* %717, align 8
  %eqtmpX505 = icmp eq i8 %derefference_value504, 58
  br i1 %eqtmpX505, label %cond_jump_then506, label %cond_end507

cond_else_block499:                               ; preds = %cond_jump_end492
  %718 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %719 = bitcast i8* %718 to %sParserInfo**
  %info560 = load %sParserInfo*, %sParserInfo** %719, align 8
  call void @parser_err_msg(%sParserInfo* %info560, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_string.34, i32 0, i32 0))
  br label %cond_end500

cond_end500:                                      ; preds = %cond_else_block499, %cond_end559
  br label %cond_end483

cond_jump_then506:                                ; preds = %cond_jump_then498
  %720 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %721 = bitcast i8* %720 to %sParserInfo**
  %info508 = load %sParserInfo*, %sParserInfo** %721, align 8
  %722 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %723 = bitcast i8* %722 to %sParserInfo**
  %info509 = load %sParserInfo*, %sParserInfo** %723, align 8
  %724 = getelementptr inbounds %sParserInfo, %sParserInfo* %info509, i32 0, i32 4
  %725 = load i8*, i8** %724, align 8
  %726 = ptrtoint i8* %725 to i64
  %addtmp510 = add nsw i64 %726, 1
  %intToPtr2511 = inttoptr i64 %addtmp510 to i8*
  %727 = getelementptr inbounds %sParserInfo, %sParserInfo* %info508, i32 0, i32 4
  store i8* %intToPtr2511, i8** %727, align 8
  %728 = ptrtoint i8* %intToPtr2511 to i64
  %subtmp512 = sub nsw i64 %728, 1
  %IntTOPtr4b513 = inttoptr i64 %subtmp512 to i8*
  %729 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %730 = bitcast i8* %729 to %sParserInfo**
  %info514 = load %sParserInfo*, %sParserInfo** %730, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info514)
  %731 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %732 = bitcast i8* %731 to %sCLType**
  %type515 = load %sCLType*, %sCLType** %732, align 8
  %733 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %734 = bitcast i8* %733 to %sParserInfo**
  %info516 = load %sParserInfo*, %sParserInfo** %734, align 8
  %735 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %736 = bitcast i8* %735 to %sParserInfo**
  %info517 = load %sParserInfo*, %sParserInfo** %736, align 8
  %737 = getelementptr inbounds %sParserInfo, %sParserInfo* %info517, i32 0, i32 9
  %738 = load %vector__sCLTypep*, %vector__sCLTypep** %737, align 8
  %739 = call i1 @parse_type(%sCLType** %732, %sParserInfo* %info516, %vector__sCLTypep* %738)
  %LOGICAL_DIANEAL518 = icmp eq i1 %739, false
  br i1 %LOGICAL_DIANEAL518, label %cond_jump_then519, label %cond_end520

cond_end507:                                      ; preds = %cond_end520, %cond_jump_then498
  %740 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %741 = bitcast i8* %740 to %sParserInfo**
  %info525 = load %sParserInfo*, %sParserInfo** %741, align 8
  %var_name526 = load i8*, i8** %var_name502, align 8
  call void @check_already_added_variable(%sParserInfo* %info525, i8* %var_name526)
  %742 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %743 = bitcast i8* %742 to %sParserInfo**
  %info527 = load %sParserInfo*, %sParserInfo** %743, align 8
  %var_name528 = load i8*, i8** %var_name502, align 8
  %type529 = load %sCLType*, %sCLType** %type, align 8
  call void @add_variable_to_table(%sParserInfo* %info527, i8* %var_name528, %sCLType* %type529, i1 false)
  %744 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %745 = bitcast i8* %744 to %sParserInfo**
  %info530 = load %sParserInfo*, %sParserInfo** %745, align 8
  %746 = getelementptr inbounds %sParserInfo, %sParserInfo* %info530, i32 0, i32 4
  %747 = load i8*, i8** %746, align 8
  %derefference_value531 = load i8, i8* %747, align 8
  %eqtmpX532 = icmp eq i8 %derefference_value531, 61
  br i1 %eqtmpX532, label %cond_jump_then533, label %cond_else_block534

cond_jump_then519:                                ; preds = %cond_jump_then506
  %748 = bitcast [8192 x i8*]* %lvtable to i8*
  %749 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %748, i64 65536)
  %750 = load i8*, i8** %var_name502, align 8
  %751 = ptrtoint i8* %750 to i64
  %752 = icmp ne i64 %751, 0
  br i1 %752, label %cond_then_block521, label %cond_end522

cond_end520:                                      ; preds = %cond_jump_then506
  br label %cond_end507

cond_then_block521:                               ; preds = %cond_jump_then519
  br label %cond_end522

cond_end522:                                      ; preds = %cond_then_block521, %cond_jump_then519
  call void @ncfree(i8* %750)
  %753 = load i8*, i8** %word454, align 8
  %754 = ptrtoint i8* %753 to i64
  %755 = icmp ne i64 %754, 0
  br i1 %755, label %cond_then_block523, label %cond_end524

cond_then_block523:                               ; preds = %cond_end522
  br label %cond_end524

cond_end524:                                      ; preds = %cond_then_block523, %cond_end522
  call void @ncfree(i8* %753)
  ret i1 false

cond_jump_then533:                                ; preds = %cond_end507
  %756 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %757 = bitcast i8* %756 to %sParserInfo**
  %info536 = load %sParserInfo*, %sParserInfo** %757, align 8
  %758 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %759 = bitcast i8* %758 to %sParserInfo**
  %info537 = load %sParserInfo*, %sParserInfo** %759, align 8
  %760 = getelementptr inbounds %sParserInfo, %sParserInfo* %info537, i32 0, i32 4
  %761 = load i8*, i8** %760, align 8
  %762 = ptrtoint i8* %761 to i64
  %addtmp538 = add nsw i64 %762, 1
  %intToPtr2539 = inttoptr i64 %addtmp538 to i8*
  %763 = getelementptr inbounds %sParserInfo, %sParserInfo* %info536, i32 0, i32 4
  store i8* %intToPtr2539, i8** %763, align 8
  %764 = ptrtoint i8* %intToPtr2539 to i64
  %subtmp540 = sub nsw i64 %764, 1
  %IntTOPtr4b541 = inttoptr i64 %subtmp540 to i8*
  %765 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %766 = bitcast i8* %765 to %sParserInfo**
  %info542 = load %sParserInfo*, %sParserInfo** %766, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info542)
  %exp543 = alloca %sCLNode*
  %767 = bitcast %sCLNode** %exp543 to i8*
  store i8* %767, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store %sCLNode* null, %sCLNode** %exp543, align 8
  %exp544 = load %sCLNode*, %sCLNode** %exp543, align 8
  %768 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %769 = bitcast i8* %768 to %sParserInfo**
  %info545 = load %sParserInfo*, %sParserInfo** %769, align 8
  %770 = call i1 @expression(%sCLNode** %exp543, %sParserInfo* %info545)
  %LOGICAL_DIANEAL546 = icmp eq i1 %770, false
  br i1 %LOGICAL_DIANEAL546, label %cond_jump_then547, label %cond_end548

cond_else_block534:                               ; preds = %cond_end507
  %771 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %772 = bitcast i8* %771 to %sParserInfo**
  %info557 = load %sParserInfo*, %sParserInfo** %772, align 8
  call void @parser_err_msg(%sParserInfo* %info557, i8* getelementptr inbounds ([48 x i8], [48 x i8]* @global_string.33, i32 0, i32 0))
  br label %cond_end535

cond_end535:                                      ; preds = %cond_else_block534, %cond_end548
  %773 = load i8*, i8** %var_name502, align 8
  %774 = ptrtoint i8* %773 to i64
  %775 = icmp ne i64 %774, 0
  br i1 %775, label %cond_then_block558, label %cond_end559

cond_jump_then547:                                ; preds = %cond_jump_then533
  %776 = bitcast [8192 x i8*]* %lvtable to i8*
  %777 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %776, i64 65536)
  %778 = load i8*, i8** %var_name502, align 8
  %779 = ptrtoint i8* %778 to i64
  %780 = icmp ne i64 %779, 0
  br i1 %780, label %cond_then_block549, label %cond_end550

cond_end548:                                      ; preds = %cond_jump_then533
  %781 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %782 = bitcast i8* %781 to %sCLNode***
  %node553 = load %sCLNode**, %sCLNode*** %782, align 8
  %783 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %784 = bitcast i8* %783 to i8**
  %var_name554 = load i8*, i8** %784, align 8
  %exp555 = load %sCLNode*, %sCLNode** %exp543, align 8
  %785 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %786 = bitcast i8* %785 to %sParserInfo**
  %info556 = load %sParserInfo*, %sParserInfo** %786, align 8
  %787 = call %sCLNode* @sNodeTree_create_store_variable(i8* %var_name554, %sCLNode* %exp555, %sParserInfo* %info556)
  store %sCLNode* %787, %sCLNode** %node553, align 8
  br label %cond_end535

cond_then_block549:                               ; preds = %cond_jump_then547
  br label %cond_end550

cond_end550:                                      ; preds = %cond_then_block549, %cond_jump_then547
  call void @ncfree(i8* %778)
  %788 = load i8*, i8** %word454, align 8
  %789 = ptrtoint i8* %788 to i64
  %790 = icmp ne i64 %789, 0
  br i1 %790, label %cond_then_block551, label %cond_end552

cond_then_block551:                               ; preds = %cond_end550
  br label %cond_end552

cond_end552:                                      ; preds = %cond_then_block551, %cond_end550
  call void @ncfree(i8* %788)
  ret i1 false

cond_then_block558:                               ; preds = %cond_end535
  br label %cond_end559

cond_end559:                                      ; preds = %cond_then_block558, %cond_end535
  call void @ncfree(i8* %773)
  br label %cond_end500

cond_jump_then578:                                ; preds = %"cond_jump_elif_then3\0A465"
  %791 = bitcast [8192 x i8*]* %lvtable to i8*
  %792 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %791, i64 65536)
  %793 = load i8*, i8** %word454, align 8
  %794 = ptrtoint i8* %793 to i64
  %795 = icmp ne i64 %794, 0
  br i1 %795, label %cond_then_block580, label %cond_end581

cond_end579:                                      ; preds = %"cond_jump_elif_then3\0A465"
  br label %cond_end483

cond_then_block580:                               ; preds = %cond_jump_then578
  br label %cond_end581

cond_end581:                                      ; preds = %cond_then_block580, %cond_jump_then578
  call void @ncfree(i8* %793)
  ret i1 false

cond_jump_then587:                                ; preds = %"cond_jump_elif_then4\0A467"
  %796 = bitcast [8192 x i8*]* %lvtable to i8*
  %797 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %796, i64 65536)
  %798 = load i8*, i8** %word454, align 8
  %799 = ptrtoint i8* %798 to i64
  %800 = icmp ne i64 %799, 0
  br i1 %800, label %cond_then_block589, label %cond_end590

cond_end588:                                      ; preds = %"cond_jump_elif_then4\0A467"
  br label %cond_end483

cond_then_block589:                               ; preds = %cond_jump_then587
  br label %cond_end590

cond_end590:                                      ; preds = %cond_then_block589, %cond_jump_then587
  call void @ncfree(i8* %798)
  ret i1 false

cond_jump_then596:                                ; preds = %"cond_jump_elif_then5\0A469"
  %801 = bitcast [8192 x i8*]* %lvtable to i8*
  %802 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %801, i64 65536)
  %803 = load i8*, i8** %word454, align 8
  %804 = ptrtoint i8* %803 to i64
  %805 = icmp ne i64 %804, 0
  br i1 %805, label %cond_then_block598, label %cond_end599

cond_end597:                                      ; preds = %"cond_jump_elif_then5\0A469"
  br label %cond_end483

cond_then_block598:                               ; preds = %cond_jump_then596
  br label %cond_end599

cond_end599:                                      ; preds = %cond_then_block598, %cond_jump_then596
  call void @ncfree(i8* %803)
  ret i1 false

cond_jump_then605:                                ; preds = %"cond_jump_elif_then6\0A471"
  %806 = bitcast [8192 x i8*]* %lvtable to i8*
  %807 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %806, i64 65536)
  %808 = load i8*, i8** %word454, align 8
  %809 = ptrtoint i8* %808 to i64
  %810 = icmp ne i64 %809, 0
  br i1 %810, label %cond_then_block607, label %cond_end608

cond_end606:                                      ; preds = %"cond_jump_elif_then6\0A471"
  br label %cond_end483

cond_then_block607:                               ; preds = %cond_jump_then605
  br label %cond_end608

cond_end608:                                      ; preds = %cond_then_block607, %cond_jump_then605
  call void @ncfree(i8* %808)
  ret i1 false

cond_jump_then614:                                ; preds = %"cond_jump_elif_then7\0A473"
  %811 = bitcast [8192 x i8*]* %lvtable to i8*
  %812 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %811, i64 65536)
  %813 = load i8*, i8** %word454, align 8
  %814 = ptrtoint i8* %813 to i64
  %815 = icmp ne i64 %814, 0
  br i1 %815, label %cond_then_block616, label %cond_end617

cond_end615:                                      ; preds = %"cond_jump_elif_then7\0A473"
  br label %cond_end483

cond_then_block616:                               ; preds = %cond_jump_then614
  br label %cond_end617

cond_end617:                                      ; preds = %cond_then_block616, %cond_jump_then614
  call void @ncfree(i8* %813)
  ret i1 false

cond_jump_then623:                                ; preds = %"cond_jump_elif_then8\0A475"
  %816 = bitcast [8192 x i8*]* %lvtable to i8*
  %817 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %816, i64 65536)
  %818 = load i8*, i8** %word454, align 8
  %819 = ptrtoint i8* %818 to i64
  %820 = icmp ne i64 %819, 0
  br i1 %820, label %cond_then_block625, label %cond_end626

cond_end624:                                      ; preds = %"cond_jump_elif_then8\0A475"
  br label %cond_end483

cond_then_block625:                               ; preds = %cond_jump_then623
  br label %cond_end626

cond_end626:                                      ; preds = %cond_then_block625, %cond_jump_then623
  call void @ncfree(i8* %818)
  ret i1 false

cond_jump_then632:                                ; preds = %"cond_jump_elif_then9\0A477"
  %821 = bitcast [8192 x i8*]* %lvtable to i8*
  %822 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %821, i64 65536)
  %823 = load i8*, i8** %word454, align 8
  %824 = ptrtoint i8* %823 to i64
  %825 = icmp ne i64 %824, 0
  br i1 %825, label %cond_then_block634, label %cond_end635

cond_end633:                                      ; preds = %"cond_jump_elif_then9\0A477"
  br label %cond_end483

cond_then_block634:                               ; preds = %cond_jump_then632
  br label %cond_end635

cond_end635:                                      ; preds = %cond_then_block634, %cond_jump_then632
  call void @ncfree(i8* %823)
  ret i1 false

cond_jump_then641:                                ; preds = %"cond_jump_elif_then10\0A479"
  %826 = bitcast [8192 x i8*]* %lvtable to i8*
  %827 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %826, i64 65536)
  %828 = load i8*, i8** %word454, align 8
  %829 = ptrtoint i8* %828 to i64
  %830 = icmp ne i64 %829, 0
  br i1 %830, label %cond_then_block643, label %cond_end644

cond_end642:                                      ; preds = %"cond_jump_elif_then10\0A479"
  br label %cond_end483

cond_then_block643:                               ; preds = %cond_jump_then641
  br label %cond_end644

cond_end644:                                      ; preds = %cond_then_block643, %cond_jump_then641
  call void @ncfree(i8* %828)
  ret i1 false

cond_jump_then650:                                ; preds = %"cond_jump_elif_then11\0A481"
  %831 = bitcast [8192 x i8*]* %lvtable to i8*
  %832 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %831, i64 65536)
  %833 = load i8*, i8** %word454, align 8
  %834 = ptrtoint i8* %833 to i64
  %835 = icmp ne i64 %834, 0
  br i1 %835, label %cond_then_block652, label %cond_end653

cond_end651:                                      ; preds = %"cond_jump_elif_then11\0A481"
  %836 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %837 = bitcast i8* %836 to %sCLNode***
  %node654 = load %sCLNode**, %sCLNode*** %837, align 8
  %838 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %839 = bitcast i8* %838 to %sCLNode***
  %node655 = load %sCLNode**, %sCLNode*** %839, align 8
  %derefference_value656 = load %sCLNode*, %sCLNode** %node655, align 8
  %840 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %841 = bitcast i8* %840 to %sParserInfo**
  %info657 = load %sParserInfo*, %sParserInfo** %841, align 8
  %842 = call %sCLNode* @sNodeTree_create_return(%sCLNode* %derefference_value656, %sParserInfo* %info657)
  store %sCLNode* %842, %sCLNode** %node654, align 8
  br label %cond_end483

cond_then_block652:                               ; preds = %cond_jump_then650
  br label %cond_end653

cond_end653:                                      ; preds = %cond_then_block652, %cond_jump_then650
  call void @ncfree(i8* %833)
  ret i1 false

cond_jump_then665:                                ; preds = %"cond_jump_elif_then12\0A"
  %843 = bitcast [8192 x i8*]* %lvtable to i8*
  %844 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %843, i64 65536)
  %845 = load i8*, i8** %word454, align 8
  %846 = ptrtoint i8* %845 to i64
  %847 = icmp ne i64 %846, 0
  br i1 %847, label %cond_then_block667, label %cond_end668

cond_end666:                                      ; preds = %"cond_jump_elif_then12\0A"
  %848 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %849 = bitcast i8* %848 to %sCLNode***
  %node669 = load %sCLNode**, %sCLNode*** %849, align 8
  %type670 = load %sCLType*, %sCLType** %type660, align 8
  %850 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %851 = bitcast i8* %850 to %sParserInfo**
  %info671 = load %sParserInfo*, %sParserInfo** %851, align 8
  %852 = call %sCLNode* @sNodeTree_create_object(%sCLType* %type670, %sParserInfo* %info671)
  store %sCLNode* %852, %sCLNode** %node669, align 8
  %853 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %854 = bitcast i8* %853 to %sParserInfo**
  %info672 = load %sParserInfo*, %sParserInfo** %854, align 8
  %855 = getelementptr inbounds %sParserInfo, %sParserInfo* %info672, i32 0, i32 4
  %856 = load i8*, i8** %855, align 8
  %derefference_value673 = load i8, i8* %856, align 8
  %eqtmpX674 = icmp eq i8 %derefference_value673, 40
  store i1 %eqtmpX674, i1* %andand_result_var1, align 1
  br i1 %eqtmpX674, label %cond_jump_end676, label %cond_jump_then675

cond_then_block667:                               ; preds = %cond_jump_then665
  br label %cond_end668

cond_end668:                                      ; preds = %cond_then_block667, %cond_jump_then665
  call void @ncfree(i8* %845)
  ret i1 false

cond_jump_then675:                                ; preds = %cond_end666
  %857 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %858 = bitcast i8* %857 to %sParserInfo**
  %info677 = load %sParserInfo*, %sParserInfo** %858, align 8
  %859 = getelementptr inbounds %sParserInfo, %sParserInfo* %info677, i32 0, i32 4
  %860 = load i8*, i8** %859, align 8
  %derefference_value678 = load i8, i8* %860, align 8
  %eqtmpX679 = icmp eq i8 %derefference_value678, 123
  %oror680 = or i1 %eqtmpX674, %eqtmpX679
  store i1 %oror680, i1* %andand_result_var1, align 1
  br label %cond_jump_end676

cond_jump_end676:                                 ; preds = %cond_jump_then675, %cond_end666
  %oror_result_value681 = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value681, label %cond_jump_then682, label %cond_end683

cond_jump_then682:                                ; preds = %cond_jump_end676
  %name = alloca i8*
  %861 = bitcast i8** %name to i8*
  store i8* %861, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_string.48, i32 0, i32 0), i8** %name, align 8
  %num_params684 = alloca i32
  %862 = bitcast i32* %num_params684 to i8*
  store i8* %862, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i32 0, i32* %num_params684, align 4
  %params685 = alloca [32 x %sCLNode*]
  %863 = bitcast [32 x %sCLNode*]* %params685 to i8*
  store i8* %863, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %864 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %865 = bitcast i8* %864 to %sCLNode***
  %node686 = load %sCLNode**, %sCLNode*** %865, align 8
  %derefference_value687 = load %sCLNode*, %sCLNode** %node686, align 8
  %866 = bitcast [32 x %sCLNode*]* %params685 to %sCLNode**
  %element_addressC688 = getelementptr %sCLNode*, %sCLNode** %866, i32 0
  store %sCLNode* %derefference_value687, %sCLNode** %element_addressC688, align 8
  store i32 1, i32* %num_params684, align 4
  %param_closed689 = alloca i1
  %867 = bitcast i1* %param_closed689 to i8*
  store i8* %867, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i1 false, i1* %param_closed689, align 1
  %num_params690 = load i32, i32* %num_params684, align 4
  %param_closed691 = load i1, i1* %param_closed689, align 1
  %868 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %869 = bitcast i8* %868 to %sParserInfo**
  %info692 = load %sParserInfo*, %sParserInfo** %869, align 8
  %870 = bitcast [32 x %sCLNode*]* %params685 to %sCLNode**
  %871 = call i1 @parse_calling_params(i32* %num_params684, %sCLNode** %870, i1* %param_closed689, %sParserInfo* %info692)
  %LOGICAL_DIANEAL693 = icmp eq i1 %871, false
  br i1 %LOGICAL_DIANEAL693, label %cond_jump_then694, label %cond_end695

cond_end683:                                      ; preds = %cond_end695, %cond_jump_end676
  br label %cond_end483

cond_jump_then694:                                ; preds = %cond_jump_then682
  %872 = bitcast [8192 x i8*]* %lvtable to i8*
  %873 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %872, i64 65536)
  %874 = load i8*, i8** %word454, align 8
  %875 = ptrtoint i8* %874 to i64
  %876 = icmp ne i64 %875, 0
  br i1 %876, label %cond_then_block696, label %cond_end697

cond_end695:                                      ; preds = %cond_jump_then682
  %877 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %878 = bitcast i8* %877 to %sCLNode***
  %node698 = load %sCLNode**, %sCLNode*** %878, align 8
  %name699 = load i8*, i8** %name, align 8
  %num_params700 = load i32, i32* %num_params684, align 4
  %param_closed701 = load i1, i1* %param_closed689, align 1
  %879 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %880 = bitcast i8* %879 to %sParserInfo**
  %info702 = load %sParserInfo*, %sParserInfo** %880, align 8
  %881 = bitcast [32 x %sCLNode*]* %params685 to %sCLNode**
  %882 = call %sCLNode* @sNodeTree_create_method_call(i8* %name699, i32 %num_params700, %sCLNode** %881, i1 %param_closed701, %sParserInfo* %info702)
  store %sCLNode* %882, %sCLNode** %node698, align 8
  br label %cond_end683

cond_then_block696:                               ; preds = %cond_jump_then694
  br label %cond_end697

cond_end697:                                      ; preds = %cond_then_block696, %cond_jump_then694
  call void @ncfree(i8* %874)
  ret i1 false

cond_jump_then708:                                ; preds = %"cond_jump_elif_then13\0A"
  %883 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %884 = bitcast i8* %883 to i8**
  %klass_name710 = load i8*, i8** %884, align 8
  %885 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_string.50, i32 0, i32 0), i8* %klass_name710)
  %886 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %887 = bitcast i8* %886 to %sCLClass**
  %klass711 = load %sCLClass*, %sCLClass** %887, align 8
  %888 = call i1 @save_class(%sCLClass* %klass711)
  %LOGICAL_DIANEAL712 = icmp eq i1 %888, false
  br i1 %LOGICAL_DIANEAL712, label %cond_jump_then713, label %cond_else_block714

cond_end709:                                      ; preds = %cond_end715, %"cond_jump_elif_then13\0A"
  %889 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %890 = bitcast i8* %889 to %sCLNode***
  %node716 = load %sCLNode**, %sCLNode*** %890, align 8
  %891 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %892 = bitcast i8* %891 to %sParserInfo**
  %info717 = load %sParserInfo*, %sParserInfo** %892, align 8
  %893 = call %sCLNode* @sNodeTree_create_null_value(%sParserInfo* %info717)
  store %sCLNode* %893, %sCLNode** %node716, align 8
  %894 = load i8*, i8** %klass_name, align 8
  %895 = ptrtoint i8* %894 to i64
  %896 = icmp ne i64 %895, 0
  br i1 %896, label %cond_then_block718, label %cond_end719

cond_jump_then713:                                ; preds = %cond_jump_then708
  %897 = call i32 @puts(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_string.51, i32 0, i32 0))
  br label %cond_end715

cond_else_block714:                               ; preds = %cond_jump_then708
  %898 = call i32 @puts(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_string.52, i32 0, i32 0))
  br label %cond_end715

cond_end715:                                      ; preds = %cond_else_block714, %cond_jump_then713
  br label %cond_end709

cond_then_block718:                               ; preds = %cond_end709
  br label %cond_end719

cond_end719:                                      ; preds = %cond_then_block718, %cond_end709
  call void @ncfree(i8* %894)
  br label %cond_end483

cond_jump_then727:                                ; preds = %"cond_jump_elif_then14\0A"
  br label %cond_end729

cond_else_block728:                               ; preds = %"cond_jump_elif_then14\0A"
  br label %cond_end729

cond_end729:                                      ; preds = %cond_else_block728, %cond_jump_then727
  %899 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %900 = bitcast i8* %899 to %sCLNode***
  %node730 = load %sCLNode**, %sCLNode*** %900, align 8
  %901 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %902 = bitcast i8* %901 to %sParserInfo**
  %info731 = load %sParserInfo*, %sParserInfo** %902, align 8
  %903 = call %sCLNode* @sNodeTree_create_null_value(%sParserInfo* %info731)
  store %sCLNode* %903, %sCLNode** %node730, align 8
  %904 = load i8*, i8** %klass_name723, align 8
  %905 = ptrtoint i8* %904 to i64
  %906 = icmp ne i64 %905, 0
  br i1 %906, label %cond_then_block732, label %cond_end733

cond_then_block732:                               ; preds = %cond_end729
  br label %cond_end733

cond_end733:                                      ; preds = %cond_then_block732, %cond_end729
  call void @ncfree(i8* %904)
  br label %cond_end483

cond_jump_then740:                                ; preds = %"cond_jump_elif_then15\0A"
  %907 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %908 = bitcast i8* %907 to [32 x %sCLNode*]*
  %909 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %910 = bitcast i8* %909 to %sParserInfo**
  %info743 = load %sParserInfo*, %sParserInfo** %910, align 8
  %911 = call %sCLNode* @sNodeTree_create_system_value(%sParserInfo* %info743)
  %912 = bitcast [32 x %sCLNode*]* %908 to %sCLNode**
  %element_addressC744 = getelementptr %sCLNode*, %sCLNode** %912, i32 0
  store %sCLNode* %911, %sCLNode** %element_addressC744, align 8
  br label %cond_end742

cond_else_block741:                               ; preds = %"cond_jump_elif_then15\0A"
  %913 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %914 = bitcast i8* %913 to [32 x %sCLNode*]*
  %915 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %916 = bitcast i8* %915 to %sCLNode***
  %node745 = load %sCLNode**, %sCLNode*** %916, align 8
  %derefference_value746 = load %sCLNode*, %sCLNode** %node745, align 8
  %917 = bitcast [32 x %sCLNode*]* %914 to %sCLNode**
  %element_addressC747 = getelementptr %sCLNode*, %sCLNode** %917, i32 0
  store %sCLNode* %derefference_value746, %sCLNode** %element_addressC747, align 8
  br label %cond_end742

cond_end742:                                      ; preds = %cond_else_block741, %cond_jump_then740
  %num_params748 = alloca i32
  %918 = bitcast i32* %num_params748 to i8*
  store i8* %918, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 1, i32* %num_params748, align 4
  %param_closed749 = alloca i1
  %919 = bitcast i1* %param_closed749 to i8*
  store i8* %919, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i1 false, i1* %param_closed749, align 1
  %num_params750 = load i32, i32* %num_params748, align 4
  %param_closed751 = load i1, i1* %param_closed749, align 1
  %920 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %921 = bitcast i8* %920 to %sParserInfo**
  %info752 = load %sParserInfo*, %sParserInfo** %921, align 8
  %922 = bitcast [32 x %sCLNode*]* %params736 to %sCLNode**
  %923 = call i1 @parse_calling_params(i32* %num_params748, %sCLNode** %922, i1* %param_closed749, %sParserInfo* %info752)
  %LOGICAL_DIANEAL753 = icmp eq i1 %923, false
  br i1 %LOGICAL_DIANEAL753, label %cond_jump_then754, label %cond_end755

cond_jump_then754:                                ; preds = %cond_end742
  %924 = bitcast [8192 x i8*]* %lvtable to i8*
  %925 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %924, i64 65536)
  %926 = load i8*, i8** %word454, align 8
  %927 = ptrtoint i8* %926 to i64
  %928 = icmp ne i64 %927, 0
  br i1 %928, label %cond_then_block756, label %cond_end757

cond_end755:                                      ; preds = %cond_end742
  %929 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %930 = bitcast i8* %929 to %sCLNode***
  %node758 = load %sCLNode**, %sCLNode*** %930, align 8
  %931 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %932 = bitcast i8* %931 to i8**
  %word759 = load i8*, i8** %932, align 8
  %num_params760 = load i32, i32* %num_params748, align 4
  %param_closed761 = load i1, i1* %param_closed749, align 1
  %933 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %934 = bitcast i8* %933 to %sParserInfo**
  %info762 = load %sParserInfo*, %sParserInfo** %934, align 8
  %935 = bitcast [32 x %sCLNode*]* %params736 to %sCLNode**
  %936 = call %sCLNode* @sNodeTree_create_method_call(i8* %word759, i32 %num_params760, %sCLNode** %935, i1 %param_closed761, %sParserInfo* %info762)
  store %sCLNode* %936, %sCLNode** %node758, align 8
  br label %cond_end483

cond_then_block756:                               ; preds = %cond_jump_then754
  br label %cond_end757

cond_end757:                                      ; preds = %cond_then_block756, %cond_jump_then754
  call void @ncfree(i8* %926)
  ret i1 false

cond_jump_then766:                                ; preds = %"cond_jump_elif16\0A"
  %937 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %938 = bitcast i8* %937 to %sParserInfo**
  %info768 = load %sParserInfo*, %sParserInfo** %938, align 8
  %939 = getelementptr inbounds %sParserInfo, %sParserInfo* %info768, i32 0, i32 4
  %940 = load i8*, i8** %939, align 8
  %941 = ptrtoint i8* %940 to i64
  %addtmp769 = add nsw i64 %941, 1
  %intToPtr2770 = inttoptr i64 %addtmp769 to i8*
  %derefference_value771 = load i8, i8* %intToPtr2770, align 8
  %eqtmpX772 = icmp eq i8 %derefference_value771, 40
  %andand773 = and i1 %eqtmpX765, %eqtmpX772
  store i1 %andand773, i1* %andand_result_var, align 1
  br label %cond_jump_end767

cond_jump_end767:                                 ; preds = %cond_jump_then766, %"cond_jump_elif16\0A"
  %andand_result_value774 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value774, label %"cond_jump_elif_then16\0A", label %cond_else_block482

cond_jump_then784:                                ; preds = %"cond_jump_elif_then16\0A"
  %942 = bitcast [8192 x i8*]* %lvtable to i8*
  %943 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %942, i64 65536)
  %944 = load %buffer*, %buffer** %block_text, align 8
  call void @buffer_finalize(%buffer* %944)
  %945 = ptrtoint %buffer* %944 to i64
  %946 = icmp ne i64 %945, 0
  br i1 %946, label %cond_then_block786, label %cond_end787

cond_end785:                                      ; preds = %"cond_jump_elif_then16\0A"
  %947 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %948 = bitcast i8* %947 to i8**
  %word790 = load i8*, i8** %948, align 8
  %name791 = alloca i8*
  %949 = bitcast i8** %name791 to i8*
  store i8* %949, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i8* %word790, i8** %name791, align 8
  %block_text792 = load %buffer*, %buffer** %block_text, align 8
  %950 = call i8* @buffer_to_string(%buffer* %block_text792)
  %951 = call i8* @string_substring(i8* %950, i32 0, i32 -2)
  %params793 = alloca i8*
  %952 = bitcast i8** %params793 to i8*
  store i8* %952, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i8* %951, i8** %params793, align 8
  %953 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %954 = bitcast i8* %953 to %sCLNode***
  %node794 = load %sCLNode**, %sCLNode*** %954, align 8
  %name795 = load i8*, i8** %name791, align 8
  %params796 = load i8*, i8** %params793, align 8
  %955 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %956 = bitcast i8* %955 to %sParserInfo**
  %info797 = load %sParserInfo*, %sParserInfo** %956, align 8
  %957 = call i1 @call_macro(%sCLNode** %node794, i8* %name795, i8* %params796, %sParserInfo* %info797)
  %LOGICAL_DIANEAL798 = icmp eq i1 %957, false
  %958 = ptrtoint i8* %950 to i64
  %959 = icmp ne i64 %958, 0
  br i1 %959, label %cond_then_block801, label %cond_end802

cond_then_block786:                               ; preds = %cond_jump_then784
  br label %cond_end787

cond_end787:                                      ; preds = %cond_then_block786, %cond_jump_then784
  %960 = bitcast %buffer* %944 to i8*
  call void @ncfree(i8* %960)
  %961 = load i8*, i8** %word454, align 8
  %962 = ptrtoint i8* %961 to i64
  %963 = icmp ne i64 %962, 0
  br i1 %963, label %cond_then_block788, label %cond_end789

cond_then_block788:                               ; preds = %cond_end787
  br label %cond_end789

cond_end789:                                      ; preds = %cond_then_block788, %cond_end787
  call void @ncfree(i8* %961)
  ret i1 false

cond_jump_then799:                                ; preds = %cond_end804
  %964 = bitcast [8192 x i8*]* %lvtable to i8*
  %965 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %964, i64 65536)
  %966 = load %buffer*, %buffer** %block_text, align 8
  call void @buffer_finalize(%buffer* %966)
  %967 = ptrtoint %buffer* %966 to i64
  %968 = icmp ne i64 %967, 0
  br i1 %968, label %cond_then_block805, label %cond_end806

cond_end800:                                      ; preds = %cond_end804
  %969 = load %buffer*, %buffer** %block_text, align 8
  call void @buffer_finalize(%buffer* %969)
  %970 = ptrtoint %buffer* %969 to i64
  %971 = icmp ne i64 %970, 0
  br i1 %971, label %cond_then_block809, label %cond_end810

cond_then_block801:                               ; preds = %cond_end785
  br label %cond_end802

cond_end802:                                      ; preds = %cond_then_block801, %cond_end785
  call void @ncfree(i8* %950)
  %972 = ptrtoint i8* %951 to i64
  %973 = icmp ne i64 %972, 0
  br i1 %973, label %cond_then_block803, label %cond_end804

cond_then_block803:                               ; preds = %cond_end802
  br label %cond_end804

cond_end804:                                      ; preds = %cond_then_block803, %cond_end802
  call void @ncfree(i8* %951)
  br i1 %LOGICAL_DIANEAL798, label %cond_jump_then799, label %cond_end800

cond_then_block805:                               ; preds = %cond_jump_then799
  br label %cond_end806

cond_end806:                                      ; preds = %cond_then_block805, %cond_jump_then799
  %974 = bitcast %buffer* %966 to i8*
  call void @ncfree(i8* %974)
  %975 = load i8*, i8** %word454, align 8
  %976 = ptrtoint i8* %975 to i64
  %977 = icmp ne i64 %976, 0
  br i1 %977, label %cond_then_block807, label %cond_end808

cond_then_block807:                               ; preds = %cond_end806
  br label %cond_end808

cond_end808:                                      ; preds = %cond_then_block807, %cond_end806
  call void @ncfree(i8* %975)
  ret i1 false

cond_then_block809:                               ; preds = %cond_end800
  br label %cond_end810

cond_end810:                                      ; preds = %cond_then_block809, %cond_end800
  %978 = bitcast %buffer* %969 to i8*
  call void @ncfree(i8* %978)
  br label %cond_end483

cond_jump_then814:                                ; preds = %cond_else_block482
  %979 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %980 = bitcast i8* %979 to %sParserInfo**
  %info816 = load %sParserInfo*, %sParserInfo** %980, align 8
  %981 = getelementptr inbounds %sParserInfo, %sParserInfo* %info816, i32 0, i32 4
  %982 = load i8*, i8** %981, align 8
  %983 = ptrtoint i8* %982 to i64
  %addtmp817 = add nsw i64 %983, 1
  %intToPtr2818 = inttoptr i64 %addtmp817 to i8*
  %derefference_value819 = load i8, i8* %intToPtr2818, align 8
  %noteqtmp820 = icmp ne i8 %derefference_value819, 61
  %andand821 = and i1 %eqtmpX813, %noteqtmp820
  store i1 %andand821, i1* %andand_result_var, align 1
  br label %cond_jump_end815

cond_jump_end815:                                 ; preds = %cond_jump_then814, %cond_else_block482
  %andand_result_value822 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value822, label %cond_jump_then823, label %"cond_jump_elif0\0A824"

cond_jump_then823:                                ; preds = %cond_jump_end815
  %984 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %985 = bitcast i8* %984 to %sParserInfo**
  %info830 = load %sParserInfo*, %sParserInfo** %985, align 8
  %986 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %987 = bitcast i8* %986 to %sParserInfo**
  %info831 = load %sParserInfo*, %sParserInfo** %987, align 8
  %988 = getelementptr inbounds %sParserInfo, %sParserInfo* %info831, i32 0, i32 4
  %989 = load i8*, i8** %988, align 8
  %990 = ptrtoint i8* %989 to i64
  %addtmp832 = add nsw i64 %990, 1
  %intToPtr2833 = inttoptr i64 %addtmp832 to i8*
  %991 = getelementptr inbounds %sParserInfo, %sParserInfo* %info830, i32 0, i32 4
  store i8* %intToPtr2833, i8** %991, align 8
  %992 = ptrtoint i8* %intToPtr2833 to i64
  %subtmp834 = sub nsw i64 %992, 1
  %IntTOPtr4b835 = inttoptr i64 %subtmp834 to i8*
  %993 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %994 = bitcast i8* %993 to %sParserInfo**
  %info836 = load %sParserInfo*, %sParserInfo** %994, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info836)
  %exp837 = alloca %sCLNode*
  %995 = bitcast %sCLNode** %exp837 to i8*
  store i8* %995, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store %sCLNode* null, %sCLNode** %exp837, align 8
  %exp838 = load %sCLNode*, %sCLNode** %exp837, align 8
  %996 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %997 = bitcast i8* %996 to %sParserInfo**
  %info839 = load %sParserInfo*, %sParserInfo** %997, align 8
  %998 = call i1 @expression(%sCLNode** %exp837, %sParserInfo* %info839)
  %LOGICAL_DIANEAL840 = icmp eq i1 %998, false
  br i1 %LOGICAL_DIANEAL840, label %cond_jump_then841, label %cond_end842

"cond_jump_elif0\0A824":                          ; preds = %cond_jump_end815
  %999 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %1000 = bitcast i8* %999 to i8**
  %word849 = load i8*, i8** %1000, align 8
  %1001 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1002 = bitcast i8* %1001 to %sParserInfo**
  %info850 = load %sParserInfo*, %sParserInfo** %1002, align 8
  %1003 = call i1 @is_local_variable(i8* %word849, %sParserInfo* %info850)
  %LOGICAL_DIANEAL851 = icmp eq i1 %1003, false
  store i1 %LOGICAL_DIANEAL851, i1* %andand_result_var, align 1
  br i1 %LOGICAL_DIANEAL851, label %cond_jump_then852, label %cond_jump_end853

"cond_jump_elif_then0\0A825":                     ; preds = %cond_jump_end853
  %params866 = alloca [32 x %sCLNode*]
  %1004 = bitcast [32 x %sCLNode*]* %params866 to i8*
  store i8* %1004, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %1005 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %1006 = bitcast i8* %1005 to %sCLNode***
  %node867 = load %sCLNode**, %sCLNode*** %1006, align 8
  %derefference_value868 = load %sCLNode*, %sCLNode** %node867, align 8
  %eqtmpX869 = icmp eq %sCLNode* %derefference_value868, null
  br i1 %eqtmpX869, label %cond_jump_then870, label %cond_else_block871

"cond_jump_elif1\0A826":                          ; preds = %cond_jump_end853
  %1007 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %1008 = bitcast i8* %1007 to i8**
  %word899 = load i8*, i8** %1008, align 8
  %1009 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1010 = bitcast i8* %1009 to %sParserInfo**
  %info900 = load %sParserInfo*, %sParserInfo** %1010, align 8
  %1011 = call i1 @is_local_variable(i8* %word899, %sParserInfo* %info900)
  br i1 %1011, label %"cond_jump_elif_then1\0A827", label %cond_else_block828

"cond_jump_elif_then1\0A827":                     ; preds = %"cond_jump_elif1\0A826"
  %1012 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %1013 = bitcast i8* %1012 to %sCLNode***
  %node901 = load %sCLNode**, %sCLNode*** %1013, align 8
  %1014 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %1015 = bitcast i8* %1014 to i8**
  %word902 = load i8*, i8** %1015, align 8
  %1016 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1017 = bitcast i8* %1016 to %sParserInfo**
  %info903 = load %sParserInfo*, %sParserInfo** %1017, align 8
  %1018 = call %sCLNode* @sNodeTree_create_load_variable(i8* %word902, %sParserInfo* %info903)
  store %sCLNode* %1018, %sCLNode** %node901, align 8
  %1019 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1020 = bitcast i8* %1019 to %sParserInfo**
  %info904 = load %sParserInfo*, %sParserInfo** %1020, align 8
  %1021 = getelementptr inbounds %sParserInfo, %sParserInfo* %info904, i32 0, i32 4
  %1022 = load i8*, i8** %1021, align 8
  %derefference_value905 = load i8, i8* %1022, align 8
  %eqtmpX906 = icmp eq i8 %derefference_value905, 43
  store i1 %eqtmpX906, i1* %andand_result_var, align 1
  br i1 %eqtmpX906, label %cond_jump_then907, label %cond_jump_end908

cond_else_block828:                               ; preds = %"cond_jump_elif1\0A826"
  %1023 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1024 = bitcast i8* %1023 to %sParserInfo**
  %info1043 = load %sParserInfo*, %sParserInfo** %1024, align 8
  %1025 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %1026 = bitcast i8* %1025 to i8**
  %p1044 = load i8*, i8** %1026, align 8
  %1027 = getelementptr inbounds %sParserInfo, %sParserInfo* %info1043, i32 0, i32 4
  store i8* %p1044, i8** %1027, align 8
  %1028 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1029 = bitcast i8* %1028 to %sParserInfo**
  %info1045 = load %sParserInfo*, %sParserInfo** %1029, align 8
  %1030 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %1031 = bitcast i8* %1030 to i32*
  %sline1046 = load i32, i32* %1031, align 4
  %1032 = getelementptr inbounds %sParserInfo, %sParserInfo* %info1045, i32 0, i32 1
  store i32 %sline1046, i32* %1032, align 4
  %1033 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1034 = bitcast i8* %1033 to %sParserInfo**
  %info1047 = load %sParserInfo*, %sParserInfo** %1034, align 8
  %1035 = call i8* @parse_word_for_shell(%sParserInfo* %info1047)
  %word1048 = alloca i8*
  %1036 = bitcast i8** %word1048 to i8*
  store i8* %1036, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i8* %1035, i8** %word1048, align 8
  %params1049 = alloca [32 x %sCLNode*]
  %1037 = bitcast [32 x %sCLNode*]* %params1049 to i8*
  store i8* %1037, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %1038 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %1039 = bitcast i8* %1038 to %sCLNode***
  %node1050 = load %sCLNode**, %sCLNode*** %1039, align 8
  %derefference_value1051 = load %sCLNode*, %sCLNode** %node1050, align 8
  %eqtmpX1052 = icmp eq %sCLNode* %derefference_value1051, null
  br i1 %eqtmpX1052, label %cond_jump_then1053, label %cond_else_block1054

cond_end829:                                      ; preds = %cond_end1101, %cond_end923, %cond_end891, %cond_end842
  br label %cond_end483

cond_jump_then841:                                ; preds = %cond_jump_then823
  %1040 = bitcast [8192 x i8*]* %lvtable to i8*
  %1041 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %1040, i64 65536)
  %1042 = load i8*, i8** %word454, align 8
  %1043 = ptrtoint i8* %1042 to i64
  %1044 = icmp ne i64 %1043, 0
  br i1 %1044, label %cond_then_block843, label %cond_end844

cond_end842:                                      ; preds = %cond_jump_then823
  %1045 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %1046 = bitcast i8* %1045 to %sCLNode***
  %node845 = load %sCLNode**, %sCLNode*** %1046, align 8
  %1047 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %1048 = bitcast i8* %1047 to i8**
  %word846 = load i8*, i8** %1048, align 8
  %exp847 = load %sCLNode*, %sCLNode** %exp837, align 8
  %1049 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1050 = bitcast i8* %1049 to %sParserInfo**
  %info848 = load %sParserInfo*, %sParserInfo** %1050, align 8
  %1051 = call %sCLNode* @sNodeTree_create_store_variable(i8* %word846, %sCLNode* %exp847, %sParserInfo* %info848)
  store %sCLNode* %1051, %sCLNode** %node845, align 8
  br label %cond_end829

cond_then_block843:                               ; preds = %cond_jump_then841
  br label %cond_end844

cond_end844:                                      ; preds = %cond_then_block843, %cond_jump_then841
  call void @ncfree(i8* %1042)
  ret i1 false

cond_jump_then852:                                ; preds = %"cond_jump_elif0\0A824"
  %1052 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1053 = bitcast i8* %1052 to %sParserInfo**
  %info854 = load %sParserInfo*, %sParserInfo** %1053, align 8
  %1054 = getelementptr inbounds %sParserInfo, %sParserInfo* %info854, i32 0, i32 4
  %1055 = load i8*, i8** %1054, align 8
  %derefference_value855 = load i8, i8* %1055, align 8
  %eqtmpX856 = icmp eq i8 %derefference_value855, 40
  store i1 %eqtmpX856, i1* %andand_result_var1, align 1
  br i1 %eqtmpX856, label %cond_jump_end858, label %cond_jump_then857

cond_jump_end853:                                 ; preds = %cond_jump_end858, %"cond_jump_elif0\0A824"
  %andand_result_value865 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value865, label %"cond_jump_elif_then0\0A825", label %"cond_jump_elif1\0A826"

cond_jump_then857:                                ; preds = %cond_jump_then852
  %1056 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1057 = bitcast i8* %1056 to %sParserInfo**
  %info859 = load %sParserInfo*, %sParserInfo** %1057, align 8
  %1058 = getelementptr inbounds %sParserInfo, %sParserInfo* %info859, i32 0, i32 4
  %1059 = load i8*, i8** %1058, align 8
  %derefference_value860 = load i8, i8* %1059, align 8
  %eqtmpX861 = icmp eq i8 %derefference_value860, 123
  %oror862 = or i1 %eqtmpX856, %eqtmpX861
  store i1 %oror862, i1* %andand_result_var1, align 1
  br label %cond_jump_end858

cond_jump_end858:                                 ; preds = %cond_jump_then857, %cond_jump_then852
  %oror_result_value863 = load i1, i1* %andand_result_var1, align 1
  %andand864 = and i1 %LOGICAL_DIANEAL851, %oror_result_value863
  store i1 %andand864, i1* %andand_result_var, align 1
  br label %cond_jump_end853

cond_jump_then870:                                ; preds = %"cond_jump_elif_then0\0A825"
  %1060 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %1061 = bitcast i8* %1060 to i8**
  %word873 = load i8*, i8** %1061, align 8
  %1062 = call i1 @is_system_method(i8* %word873)
  br i1 %1062, label %cond_jump_then874, label %cond_else_block875

cond_else_block871:                               ; preds = %"cond_jump_elif_then0\0A825"
  %1063 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %1064 = bitcast i8* %1063 to [32 x %sCLNode*]*
  %1065 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %1066 = bitcast i8* %1065 to %sCLNode***
  %node881 = load %sCLNode**, %sCLNode*** %1066, align 8
  %derefference_value882 = load %sCLNode*, %sCLNode** %node881, align 8
  %1067 = bitcast [32 x %sCLNode*]* %1064 to %sCLNode**
  %element_addressC883 = getelementptr %sCLNode*, %sCLNode** %1067, i32 0
  store %sCLNode* %derefference_value882, %sCLNode** %element_addressC883, align 8
  br label %cond_end872

cond_end872:                                      ; preds = %cond_else_block871, %cond_end876
  %num_params884 = alloca i32
  %1068 = bitcast i32* %num_params884 to i8*
  store i8* %1068, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 1, i32* %num_params884, align 4
  %param_closed885 = alloca i1
  %1069 = bitcast i1* %param_closed885 to i8*
  store i8* %1069, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i1 false, i1* %param_closed885, align 1
  %num_params886 = load i32, i32* %num_params884, align 4
  %param_closed887 = load i1, i1* %param_closed885, align 1
  %1070 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1071 = bitcast i8* %1070 to %sParserInfo**
  %info888 = load %sParserInfo*, %sParserInfo** %1071, align 8
  %1072 = bitcast [32 x %sCLNode*]* %params866 to %sCLNode**
  %1073 = call i1 @parse_calling_params(i32* %num_params884, %sCLNode** %1072, i1* %param_closed885, %sParserInfo* %info888)
  %LOGICAL_DIANEAL889 = icmp eq i1 %1073, false
  br i1 %LOGICAL_DIANEAL889, label %cond_jump_then890, label %cond_end891

cond_jump_then874:                                ; preds = %cond_jump_then870
  %1074 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %1075 = bitcast i8* %1074 to [32 x %sCLNode*]*
  %1076 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1077 = bitcast i8* %1076 to %sParserInfo**
  %info877 = load %sParserInfo*, %sParserInfo** %1077, align 8
  %1078 = call %sCLNode* @sNodeTree_create_system_value(%sParserInfo* %info877)
  %1079 = bitcast [32 x %sCLNode*]* %1075 to %sCLNode**
  %element_addressC878 = getelementptr %sCLNode*, %sCLNode** %1079, i32 0
  store %sCLNode* %1078, %sCLNode** %element_addressC878, align 8
  br label %cond_end876

cond_else_block875:                               ; preds = %cond_jump_then870
  %1080 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %1081 = bitcast i8* %1080 to [32 x %sCLNode*]*
  %1082 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1083 = bitcast i8* %1082 to %sParserInfo**
  %info879 = load %sParserInfo*, %sParserInfo** %1083, align 8
  %1084 = call %sCLNode* @sNodeTree_create_command_value(i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.55, i32 0, i32 0), %sParserInfo* %info879)
  %1085 = bitcast [32 x %sCLNode*]* %1081 to %sCLNode**
  %element_addressC880 = getelementptr %sCLNode*, %sCLNode** %1085, i32 0
  store %sCLNode* %1084, %sCLNode** %element_addressC880, align 8
  br label %cond_end876

cond_end876:                                      ; preds = %cond_else_block875, %cond_jump_then874
  br label %cond_end872

cond_jump_then890:                                ; preds = %cond_end872
  %1086 = bitcast [8192 x i8*]* %lvtable to i8*
  %1087 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %1086, i64 65536)
  %1088 = load i8*, i8** %word454, align 8
  %1089 = ptrtoint i8* %1088 to i64
  %1090 = icmp ne i64 %1089, 0
  br i1 %1090, label %cond_then_block892, label %cond_end893

cond_end891:                                      ; preds = %cond_end872
  %1091 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %1092 = bitcast i8* %1091 to %sCLNode***
  %node894 = load %sCLNode**, %sCLNode*** %1092, align 8
  %1093 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %1094 = bitcast i8* %1093 to i8**
  %word895 = load i8*, i8** %1094, align 8
  %num_params896 = load i32, i32* %num_params884, align 4
  %param_closed897 = load i1, i1* %param_closed885, align 1
  %1095 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1096 = bitcast i8* %1095 to %sParserInfo**
  %info898 = load %sParserInfo*, %sParserInfo** %1096, align 8
  %1097 = bitcast [32 x %sCLNode*]* %params866 to %sCLNode**
  %1098 = call %sCLNode* @sNodeTree_create_method_call(i8* %word895, i32 %num_params896, %sCLNode** %1097, i1 %param_closed897, %sParserInfo* %info898)
  store %sCLNode* %1098, %sCLNode** %node894, align 8
  br label %cond_end829

cond_then_block892:                               ; preds = %cond_jump_then890
  br label %cond_end893

cond_end893:                                      ; preds = %cond_then_block892, %cond_jump_then890
  call void @ncfree(i8* %1088)
  ret i1 false

cond_jump_then907:                                ; preds = %"cond_jump_elif_then1\0A827"
  %1099 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1100 = bitcast i8* %1099 to %sParserInfo**
  %info909 = load %sParserInfo*, %sParserInfo** %1100, align 8
  %1101 = getelementptr inbounds %sParserInfo, %sParserInfo* %info909, i32 0, i32 4
  %1102 = load i8*, i8** %1101, align 8
  %1103 = ptrtoint i8* %1102 to i64
  %addtmp910 = add nsw i64 %1103, 1
  %intToPtr2911 = inttoptr i64 %addtmp910 to i8*
  %derefference_value912 = load i8, i8* %intToPtr2911, align 8
  %eqtmpX913 = icmp eq i8 %derefference_value912, 43
  %andand914 = and i1 %eqtmpX906, %eqtmpX913
  store i1 %andand914, i1* %andand_result_var, align 1
  br label %cond_jump_end908

cond_jump_end908:                                 ; preds = %cond_jump_then907, %"cond_jump_elif_then1\0A827"
  %andand_result_value915 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value915, label %cond_jump_then916, label %"cond_jump_elif0\0A917"

cond_jump_then916:                                ; preds = %cond_jump_end908
  %1104 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1105 = bitcast i8* %1104 to %sParserInfo**
  %info924 = load %sParserInfo*, %sParserInfo** %1105, align 8
  %1106 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1107 = bitcast i8* %1106 to %sParserInfo**
  %info925 = load %sParserInfo*, %sParserInfo** %1107, align 8
  %1108 = getelementptr inbounds %sParserInfo, %sParserInfo* %info925, i32 0, i32 4
  %1109 = load i8*, i8** %1108, align 8
  %1110 = ptrtoint i8* %1109 to i64
  %addtmp926 = add nsw i64 %1110, 2
  %intToPtr2927 = inttoptr i64 %addtmp926 to i8*
  %1111 = getelementptr inbounds %sParserInfo, %sParserInfo* %info924, i32 0, i32 4
  store i8* %intToPtr2927, i8** %1111, align 8
  %1112 = ptrtoint i8* %intToPtr2927 to i64
  %subtmp928 = sub nsw i64 %1112, 2
  %IntTOPtr4b929 = inttoptr i64 %subtmp928 to i8*
  %1113 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1114 = bitcast i8* %1113 to %sParserInfo**
  %info930 = load %sParserInfo*, %sParserInfo** %1114, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info930)
  %1115 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1116 = bitcast i8* %1115 to %sParserInfo**
  %info931 = load %sParserInfo*, %sParserInfo** %1116, align 8
  %1117 = call %sCLNode* @sNodeTree_create_int_value(i32 1, %sParserInfo* %info931)
  %right = alloca %sCLNode*
  %1118 = bitcast %sCLNode** %right to i8*
  store i8* %1118, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store %sCLNode* %1117, %sCLNode** %right, align 8
  %1119 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %1120 = bitcast i8* %1119 to %sCLNode***
  %node932 = load %sCLNode**, %sCLNode*** %1120, align 8
  %derefference_value933 = load %sCLNode*, %sCLNode** %node932, align 8
  %right934 = load %sCLNode*, %sCLNode** %right, align 8
  %1121 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1122 = bitcast i8* %1121 to %sParserInfo**
  %info935 = load %sParserInfo*, %sParserInfo** %1122, align 8
  %1123 = call %sCLNode* @sNodeTree_create_plus(%sCLNode* %derefference_value933, %sCLNode* %right934, %sParserInfo* %info935)
  %exp936 = alloca %sCLNode*
  %1124 = bitcast %sCLNode** %exp936 to i8*
  store i8* %1124, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store %sCLNode* %1123, %sCLNode** %exp936, align 8
  %1125 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %1126 = bitcast i8* %1125 to %sCLNode***
  %node937 = load %sCLNode**, %sCLNode*** %1126, align 8
  %1127 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %1128 = bitcast i8* %1127 to i8**
  %word938 = load i8*, i8** %1128, align 8
  %exp939 = load %sCLNode*, %sCLNode** %exp936, align 8
  %1129 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1130 = bitcast i8* %1129 to %sParserInfo**
  %info940 = load %sParserInfo*, %sParserInfo** %1130, align 8
  %1131 = call %sCLNode* @sNodeTree_create_store_variable(i8* %word938, %sCLNode* %exp939, %sParserInfo* %info940)
  store %sCLNode* %1131, %sCLNode** %node937, align 8
  br label %cond_end923

"cond_jump_elif0\0A917":                          ; preds = %cond_jump_end908
  %1132 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1133 = bitcast i8* %1132 to %sParserInfo**
  %info941 = load %sParserInfo*, %sParserInfo** %1133, align 8
  %1134 = getelementptr inbounds %sParserInfo, %sParserInfo* %info941, i32 0, i32 4
  %1135 = load i8*, i8** %1134, align 8
  %derefference_value942 = load i8, i8* %1135, align 8
  %eqtmpX943 = icmp eq i8 %derefference_value942, 45
  store i1 %eqtmpX943, i1* %andand_result_var, align 1
  br i1 %eqtmpX943, label %cond_jump_then944, label %cond_jump_end945

"cond_jump_elif_then0\0A918":                     ; preds = %cond_jump_end945
  %1136 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1137 = bitcast i8* %1136 to %sParserInfo**
  %info953 = load %sParserInfo*, %sParserInfo** %1137, align 8
  %1138 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1139 = bitcast i8* %1138 to %sParserInfo**
  %info954 = load %sParserInfo*, %sParserInfo** %1139, align 8
  %1140 = getelementptr inbounds %sParserInfo, %sParserInfo* %info954, i32 0, i32 4
  %1141 = load i8*, i8** %1140, align 8
  %1142 = ptrtoint i8* %1141 to i64
  %addtmp955 = add nsw i64 %1142, 2
  %intToPtr2956 = inttoptr i64 %addtmp955 to i8*
  %1143 = getelementptr inbounds %sParserInfo, %sParserInfo* %info953, i32 0, i32 4
  store i8* %intToPtr2956, i8** %1143, align 8
  %1144 = ptrtoint i8* %intToPtr2956 to i64
  %subtmp957 = sub nsw i64 %1144, 2
  %IntTOPtr4b958 = inttoptr i64 %subtmp957 to i8*
  %1145 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1146 = bitcast i8* %1145 to %sParserInfo**
  %info959 = load %sParserInfo*, %sParserInfo** %1146, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info959)
  %1147 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1148 = bitcast i8* %1147 to %sParserInfo**
  %info960 = load %sParserInfo*, %sParserInfo** %1148, align 8
  %1149 = call %sCLNode* @sNodeTree_create_int_value(i32 1, %sParserInfo* %info960)
  %right961 = alloca %sCLNode*
  %1150 = bitcast %sCLNode** %right961 to i8*
  store i8* %1150, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store %sCLNode* %1149, %sCLNode** %right961, align 8
  %1151 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %1152 = bitcast i8* %1151 to %sCLNode***
  %node962 = load %sCLNode**, %sCLNode*** %1152, align 8
  %derefference_value963 = load %sCLNode*, %sCLNode** %node962, align 8
  %right964 = load %sCLNode*, %sCLNode** %right961, align 8
  %1153 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1154 = bitcast i8* %1153 to %sParserInfo**
  %info965 = load %sParserInfo*, %sParserInfo** %1154, align 8
  %1155 = call %sCLNode* @sNodeTree_create_minus(%sCLNode* %derefference_value963, %sCLNode* %right964, %sParserInfo* %info965)
  %exp966 = alloca %sCLNode*
  %1156 = bitcast %sCLNode** %exp966 to i8*
  store i8* %1156, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store %sCLNode* %1155, %sCLNode** %exp966, align 8
  %1157 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %1158 = bitcast i8* %1157 to %sCLNode***
  %node967 = load %sCLNode**, %sCLNode*** %1158, align 8
  %1159 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %1160 = bitcast i8* %1159 to i8**
  %word968 = load i8*, i8** %1160, align 8
  %exp969 = load %sCLNode*, %sCLNode** %exp966, align 8
  %1161 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1162 = bitcast i8* %1161 to %sParserInfo**
  %info970 = load %sParserInfo*, %sParserInfo** %1162, align 8
  %1163 = call %sCLNode* @sNodeTree_create_store_variable(i8* %word968, %sCLNode* %exp969, %sParserInfo* %info970)
  store %sCLNode* %1163, %sCLNode** %node967, align 8
  br label %cond_end923

"cond_jump_elif1\0A919":                          ; preds = %cond_jump_end945
  %1164 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1165 = bitcast i8* %1164 to %sParserInfo**
  %info971 = load %sParserInfo*, %sParserInfo** %1165, align 8
  %1166 = getelementptr inbounds %sParserInfo, %sParserInfo* %info971, i32 0, i32 4
  %1167 = load i8*, i8** %1166, align 8
  %derefference_value972 = load i8, i8* %1167, align 8
  %eqtmpX973 = icmp eq i8 %derefference_value972, 43
  store i1 %eqtmpX973, i1* %andand_result_var, align 1
  br i1 %eqtmpX973, label %cond_jump_then974, label %cond_jump_end975

"cond_jump_elif_then1\0A920":                     ; preds = %cond_jump_end975
  %1168 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1169 = bitcast i8* %1168 to %sParserInfo**
  %info983 = load %sParserInfo*, %sParserInfo** %1169, align 8
  %1170 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1171 = bitcast i8* %1170 to %sParserInfo**
  %info984 = load %sParserInfo*, %sParserInfo** %1171, align 8
  %1172 = getelementptr inbounds %sParserInfo, %sParserInfo* %info984, i32 0, i32 4
  %1173 = load i8*, i8** %1172, align 8
  %1174 = ptrtoint i8* %1173 to i64
  %addtmp985 = add nsw i64 %1174, 2
  %intToPtr2986 = inttoptr i64 %addtmp985 to i8*
  %1175 = getelementptr inbounds %sParserInfo, %sParserInfo* %info983, i32 0, i32 4
  store i8* %intToPtr2986, i8** %1175, align 8
  %1176 = ptrtoint i8* %intToPtr2986 to i64
  %subtmp987 = sub nsw i64 %1176, 2
  %IntTOPtr4b988 = inttoptr i64 %subtmp987 to i8*
  %1177 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1178 = bitcast i8* %1177 to %sParserInfo**
  %info989 = load %sParserInfo*, %sParserInfo** %1178, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info989)
  %right990 = alloca %sCLNode*
  %1179 = bitcast %sCLNode** %right990 to i8*
  store i8* %1179, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store %sCLNode* null, %sCLNode** %right990, align 8
  %right991 = load %sCLNode*, %sCLNode** %right990, align 8
  %1180 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1181 = bitcast i8* %1180 to %sParserInfo**
  %info992 = load %sParserInfo*, %sParserInfo** %1181, align 8
  %1182 = call i1 @expression(%sCLNode** %right990, %sParserInfo* %info992)
  %LOGICAL_DIANEAL993 = icmp eq i1 %1182, false
  br i1 %LOGICAL_DIANEAL993, label %cond_jump_then994, label %cond_end995

"cond_jump_elif2\0A921":                          ; preds = %cond_jump_end975
  %1183 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1184 = bitcast i8* %1183 to %sParserInfo**
  %info1007 = load %sParserInfo*, %sParserInfo** %1184, align 8
  %1185 = getelementptr inbounds %sParserInfo, %sParserInfo* %info1007, i32 0, i32 4
  %1186 = load i8*, i8** %1185, align 8
  %derefference_value1008 = load i8, i8* %1186, align 8
  %eqtmpX1009 = icmp eq i8 %derefference_value1008, 45
  store i1 %eqtmpX1009, i1* %andand_result_var, align 1
  br i1 %eqtmpX1009, label %cond_jump_then1010, label %cond_jump_end1011

"cond_jump_elif_then2\0A922":                     ; preds = %cond_jump_end1011
  %1187 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1188 = bitcast i8* %1187 to %sParserInfo**
  %info1019 = load %sParserInfo*, %sParserInfo** %1188, align 8
  %1189 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1190 = bitcast i8* %1189 to %sParserInfo**
  %info1020 = load %sParserInfo*, %sParserInfo** %1190, align 8
  %1191 = getelementptr inbounds %sParserInfo, %sParserInfo* %info1020, i32 0, i32 4
  %1192 = load i8*, i8** %1191, align 8
  %1193 = ptrtoint i8* %1192 to i64
  %addtmp1021 = add nsw i64 %1193, 2
  %intToPtr21022 = inttoptr i64 %addtmp1021 to i8*
  %1194 = getelementptr inbounds %sParserInfo, %sParserInfo* %info1019, i32 0, i32 4
  store i8* %intToPtr21022, i8** %1194, align 8
  %1195 = ptrtoint i8* %intToPtr21022 to i64
  %subtmp1023 = sub nsw i64 %1195, 2
  %IntTOPtr4b1024 = inttoptr i64 %subtmp1023 to i8*
  %1196 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1197 = bitcast i8* %1196 to %sParserInfo**
  %info1025 = load %sParserInfo*, %sParserInfo** %1197, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info1025)
  %right1026 = alloca %sCLNode*
  %1198 = bitcast %sCLNode** %right1026 to i8*
  store i8* %1198, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store %sCLNode* null, %sCLNode** %right1026, align 8
  %right1027 = load %sCLNode*, %sCLNode** %right1026, align 8
  %1199 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1200 = bitcast i8* %1199 to %sParserInfo**
  %info1028 = load %sParserInfo*, %sParserInfo** %1200, align 8
  %1201 = call i1 @expression(%sCLNode** %right1026, %sParserInfo* %info1028)
  %LOGICAL_DIANEAL1029 = icmp eq i1 %1201, false
  br i1 %LOGICAL_DIANEAL1029, label %cond_jump_then1030, label %cond_end1031

cond_end923:                                      ; preds = %cond_end1031, %cond_jump_end1011, %cond_end995, %"cond_jump_elif_then0\0A918", %cond_jump_then916
  br label %cond_end829

cond_jump_then944:                                ; preds = %"cond_jump_elif0\0A917"
  %1202 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1203 = bitcast i8* %1202 to %sParserInfo**
  %info946 = load %sParserInfo*, %sParserInfo** %1203, align 8
  %1204 = getelementptr inbounds %sParserInfo, %sParserInfo* %info946, i32 0, i32 4
  %1205 = load i8*, i8** %1204, align 8
  %1206 = ptrtoint i8* %1205 to i64
  %addtmp947 = add nsw i64 %1206, 1
  %intToPtr2948 = inttoptr i64 %addtmp947 to i8*
  %derefference_value949 = load i8, i8* %intToPtr2948, align 8
  %eqtmpX950 = icmp eq i8 %derefference_value949, 45
  %andand951 = and i1 %eqtmpX943, %eqtmpX950
  store i1 %andand951, i1* %andand_result_var, align 1
  br label %cond_jump_end945

cond_jump_end945:                                 ; preds = %cond_jump_then944, %"cond_jump_elif0\0A917"
  %andand_result_value952 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value952, label %"cond_jump_elif_then0\0A918", label %"cond_jump_elif1\0A919"

cond_jump_then974:                                ; preds = %"cond_jump_elif1\0A919"
  %1207 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1208 = bitcast i8* %1207 to %sParserInfo**
  %info976 = load %sParserInfo*, %sParserInfo** %1208, align 8
  %1209 = getelementptr inbounds %sParserInfo, %sParserInfo* %info976, i32 0, i32 4
  %1210 = load i8*, i8** %1209, align 8
  %1211 = ptrtoint i8* %1210 to i64
  %addtmp977 = add nsw i64 %1211, 1
  %intToPtr2978 = inttoptr i64 %addtmp977 to i8*
  %derefference_value979 = load i8, i8* %intToPtr2978, align 8
  %eqtmpX980 = icmp eq i8 %derefference_value979, 61
  %andand981 = and i1 %eqtmpX973, %eqtmpX980
  store i1 %andand981, i1* %andand_result_var, align 1
  br label %cond_jump_end975

cond_jump_end975:                                 ; preds = %cond_jump_then974, %"cond_jump_elif1\0A919"
  %andand_result_value982 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value982, label %"cond_jump_elif_then1\0A920", label %"cond_jump_elif2\0A921"

cond_jump_then994:                                ; preds = %"cond_jump_elif_then1\0A920"
  %1212 = bitcast [8192 x i8*]* %lvtable to i8*
  %1213 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %1212, i64 65536)
  %1214 = load i8*, i8** %word454, align 8
  %1215 = ptrtoint i8* %1214 to i64
  %1216 = icmp ne i64 %1215, 0
  br i1 %1216, label %cond_then_block996, label %cond_end997

cond_end995:                                      ; preds = %"cond_jump_elif_then1\0A920"
  %1217 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %1218 = bitcast i8* %1217 to %sCLNode***
  %node998 = load %sCLNode**, %sCLNode*** %1218, align 8
  %derefference_value999 = load %sCLNode*, %sCLNode** %node998, align 8
  %right1000 = load %sCLNode*, %sCLNode** %right990, align 8
  %1219 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1220 = bitcast i8* %1219 to %sParserInfo**
  %info1001 = load %sParserInfo*, %sParserInfo** %1220, align 8
  %1221 = call %sCLNode* @sNodeTree_create_plus(%sCLNode* %derefference_value999, %sCLNode* %right1000, %sParserInfo* %info1001)
  %exp1002 = alloca %sCLNode*
  %1222 = bitcast %sCLNode** %exp1002 to i8*
  store i8* %1222, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store %sCLNode* %1221, %sCLNode** %exp1002, align 8
  %1223 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %1224 = bitcast i8* %1223 to %sCLNode***
  %node1003 = load %sCLNode**, %sCLNode*** %1224, align 8
  %1225 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %1226 = bitcast i8* %1225 to i8**
  %word1004 = load i8*, i8** %1226, align 8
  %exp1005 = load %sCLNode*, %sCLNode** %exp1002, align 8
  %1227 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1228 = bitcast i8* %1227 to %sParserInfo**
  %info1006 = load %sParserInfo*, %sParserInfo** %1228, align 8
  %1229 = call %sCLNode* @sNodeTree_create_store_variable(i8* %word1004, %sCLNode* %exp1005, %sParserInfo* %info1006)
  store %sCLNode* %1229, %sCLNode** %node1003, align 8
  br label %cond_end923

cond_then_block996:                               ; preds = %cond_jump_then994
  br label %cond_end997

cond_end997:                                      ; preds = %cond_then_block996, %cond_jump_then994
  call void @ncfree(i8* %1214)
  ret i1 false

cond_jump_then1010:                               ; preds = %"cond_jump_elif2\0A921"
  %1230 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1231 = bitcast i8* %1230 to %sParserInfo**
  %info1012 = load %sParserInfo*, %sParserInfo** %1231, align 8
  %1232 = getelementptr inbounds %sParserInfo, %sParserInfo* %info1012, i32 0, i32 4
  %1233 = load i8*, i8** %1232, align 8
  %1234 = ptrtoint i8* %1233 to i64
  %addtmp1013 = add nsw i64 %1234, 1
  %intToPtr21014 = inttoptr i64 %addtmp1013 to i8*
  %derefference_value1015 = load i8, i8* %intToPtr21014, align 8
  %eqtmpX1016 = icmp eq i8 %derefference_value1015, 61
  %andand1017 = and i1 %eqtmpX1009, %eqtmpX1016
  store i1 %andand1017, i1* %andand_result_var, align 1
  br label %cond_jump_end1011

cond_jump_end1011:                                ; preds = %cond_jump_then1010, %"cond_jump_elif2\0A921"
  %andand_result_value1018 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value1018, label %"cond_jump_elif_then2\0A922", label %cond_end923

cond_jump_then1030:                               ; preds = %"cond_jump_elif_then2\0A922"
  %1235 = bitcast [8192 x i8*]* %lvtable to i8*
  %1236 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %1235, i64 65536)
  %1237 = load i8*, i8** %word454, align 8
  %1238 = ptrtoint i8* %1237 to i64
  %1239 = icmp ne i64 %1238, 0
  br i1 %1239, label %cond_then_block1032, label %cond_end1033

cond_end1031:                                     ; preds = %"cond_jump_elif_then2\0A922"
  %1240 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %1241 = bitcast i8* %1240 to %sCLNode***
  %node1034 = load %sCLNode**, %sCLNode*** %1241, align 8
  %derefference_value1035 = load %sCLNode*, %sCLNode** %node1034, align 8
  %right1036 = load %sCLNode*, %sCLNode** %right1026, align 8
  %1242 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1243 = bitcast i8* %1242 to %sParserInfo**
  %info1037 = load %sParserInfo*, %sParserInfo** %1243, align 8
  %1244 = call %sCLNode* @sNodeTree_create_minus(%sCLNode* %derefference_value1035, %sCLNode* %right1036, %sParserInfo* %info1037)
  %exp1038 = alloca %sCLNode*
  %1245 = bitcast %sCLNode** %exp1038 to i8*
  store i8* %1245, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store %sCLNode* %1244, %sCLNode** %exp1038, align 8
  %1246 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %1247 = bitcast i8* %1246 to %sCLNode***
  %node1039 = load %sCLNode**, %sCLNode*** %1247, align 8
  %1248 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %1249 = bitcast i8* %1248 to i8**
  %word1040 = load i8*, i8** %1249, align 8
  %exp1041 = load %sCLNode*, %sCLNode** %exp1038, align 8
  %1250 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1251 = bitcast i8* %1250 to %sParserInfo**
  %info1042 = load %sParserInfo*, %sParserInfo** %1251, align 8
  %1252 = call %sCLNode* @sNodeTree_create_store_variable(i8* %word1040, %sCLNode* %exp1041, %sParserInfo* %info1042)
  store %sCLNode* %1252, %sCLNode** %node1039, align 8
  br label %cond_end923

cond_then_block1032:                              ; preds = %cond_jump_then1030
  br label %cond_end1033

cond_end1033:                                     ; preds = %cond_then_block1032, %cond_jump_then1030
  call void @ncfree(i8* %1237)
  ret i1 false

cond_jump_then1053:                               ; preds = %cond_else_block828
  %1253 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %1254 = bitcast i8* %1253 to i8**
  %word1056 = load i8*, i8** %1254, align 8
  %1255 = call i1 @is_system_method(i8* %word1056)
  br i1 %1255, label %cond_jump_then1057, label %cond_else_block1058

cond_else_block1054:                              ; preds = %cond_else_block828
  %1256 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %1257 = bitcast i8* %1256 to [32 x %sCLNode*]*
  %1258 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %1259 = bitcast i8* %1258 to %sCLNode***
  %node1064 = load %sCLNode**, %sCLNode*** %1259, align 8
  %derefference_value1065 = load %sCLNode*, %sCLNode** %node1064, align 8
  %1260 = bitcast [32 x %sCLNode*]* %1257 to %sCLNode**
  %element_addressC1066 = getelementptr %sCLNode*, %sCLNode** %1260, i32 0
  store %sCLNode* %derefference_value1065, %sCLNode** %element_addressC1066, align 8
  br label %cond_end1055

cond_end1055:                                     ; preds = %cond_else_block1054, %cond_end1059
  %num_params1067 = alloca i32
  %1261 = bitcast i32* %num_params1067 to i8*
  store i8* %1261, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i32 1, i32* %num_params1067, align 4
  %num_params1068 = load i32, i32* %num_params1067, align 4
  %1262 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1263 = bitcast i8* %1262 to %sParserInfo**
  %info1069 = load %sParserInfo*, %sParserInfo** %1263, align 8
  %1264 = bitcast [32 x %sCLNode*]* %params1049 to %sCLNode**
  %1265 = call i1 @parse_shell_params(i32* %num_params1067, %sCLNode** %1264, %sParserInfo* %info1069)
  %LOGICAL_DIANEAL1070 = icmp eq i1 %1265, false
  br i1 %LOGICAL_DIANEAL1070, label %cond_jump_then1071, label %cond_end1072

cond_jump_then1057:                               ; preds = %cond_jump_then1053
  %1266 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %1267 = bitcast i8* %1266 to [32 x %sCLNode*]*
  %1268 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1269 = bitcast i8* %1268 to %sParserInfo**
  %info1060 = load %sParserInfo*, %sParserInfo** %1269, align 8
  %1270 = call %sCLNode* @sNodeTree_create_system_value(%sParserInfo* %info1060)
  %1271 = bitcast [32 x %sCLNode*]* %1267 to %sCLNode**
  %element_addressC1061 = getelementptr %sCLNode*, %sCLNode** %1271, i32 0
  store %sCLNode* %1270, %sCLNode** %element_addressC1061, align 8
  br label %cond_end1059

cond_else_block1058:                              ; preds = %cond_jump_then1053
  %1272 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %1273 = bitcast i8* %1272 to [32 x %sCLNode*]*
  %1274 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1275 = bitcast i8* %1274 to %sParserInfo**
  %info1062 = load %sParserInfo*, %sParserInfo** %1275, align 8
  %1276 = call %sCLNode* @sNodeTree_create_command_value(i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.56, i32 0, i32 0), %sParserInfo* %info1062)
  %1277 = bitcast [32 x %sCLNode*]* %1273 to %sCLNode**
  %element_addressC1063 = getelementptr %sCLNode*, %sCLNode** %1277, i32 0
  store %sCLNode* %1276, %sCLNode** %element_addressC1063, align 8
  br label %cond_end1059

cond_end1059:                                     ; preds = %cond_else_block1058, %cond_jump_then1057
  br label %cond_end1055

cond_jump_then1071:                               ; preds = %cond_end1055
  %1278 = bitcast [8192 x i8*]* %lvtable to i8*
  %1279 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %1278, i64 65536)
  %1280 = load i8*, i8** %word1048, align 8
  %1281 = ptrtoint i8* %1280 to i64
  %1282 = icmp ne i64 %1281, 0
  br i1 %1282, label %cond_then_block1073, label %cond_end1074

cond_end1072:                                     ; preds = %cond_end1055
  %word1077 = load i8*, i8** %word1048, align 8
  %1283 = call i1 @is_system_method(i8* %word1077)
  br i1 %1283, label %cond_jump_then1078, label %cond_end1079

cond_then_block1073:                              ; preds = %cond_jump_then1071
  br label %cond_end1074

cond_end1074:                                     ; preds = %cond_then_block1073, %cond_jump_then1071
  call void @ncfree(i8* %1280)
  %1284 = load i8*, i8** %word454, align 8
  %1285 = ptrtoint i8* %1284 to i64
  %1286 = icmp ne i64 %1285, 0
  br i1 %1286, label %cond_then_block1075, label %cond_end1076

cond_then_block1075:                              ; preds = %cond_end1074
  br label %cond_end1076

cond_end1076:                                     ; preds = %cond_then_block1075, %cond_end1074
  call void @ncfree(i8* %1284)
  ret i1 false

cond_jump_then1078:                               ; preds = %cond_end1072
  %gClasses1080 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** @gClasses, align 8
  %1287 = call %sCLClass* @"at_charp_sCLClassp25_src/parser"(%map__charp_sCLClassp* %gClasses1080, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_string.57, i32 0, i32 0), %sCLClass* null)
  %1288 = getelementptr inbounds %sCLClass, %sCLClass* %1287, i32 0, i32 1
  %1289 = load %map__charp_sCLMethodp*, %map__charp_sCLMethodp** %1288, align 8
  %1290 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %1291 = bitcast i8* %1290 to i8**
  %word1081 = load i8*, i8** %1291, align 8
  %1292 = call %sCLMethod* @"at_charp_sCLMethodp26_src/parser"(%map__charp_sCLMethodp* %1289, i8* %word1081, %sCLMethod* null)
  %1293 = getelementptr inbounds %sCLMethod, %sCLMethod* %1292, i32 0, i32 2
  %1294 = load i32, i32* %1293, align 4
  %num_method_params = alloca i32
  %1295 = bitcast i32* %num_method_params to i8*
  store i8* %1295, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 %1294, i32* %num_method_params, align 4
  %1296 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %1297 = bitcast i8* %1296 to i32*
  %num_params1082 = load i32, i32* %1297, align 4
  %i = alloca i32
  %1298 = bitcast i32* %i to i8*
  store i8* %1298, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store i32 %num_params1082, i32* %i, align 4
  br label %loop_top_block

cond_end1079:                                     ; preds = %cond_end_block, %cond_end1072
  %param_closed1094 = alloca i1
  %1299 = bitcast i1* %param_closed1094 to i8*
  store i8* %1299, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i1 true, i1* %param_closed1094, align 1
  %1300 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %1301 = bitcast i8* %1300 to %sCLNode***
  %node1095 = load %sCLNode**, %sCLNode*** %1301, align 8
  %word1096 = load i8*, i8** %word1048, align 8
  %num_params1097 = load i32, i32* %num_params1067, align 4
  %param_closed1098 = load i1, i1* %param_closed1094, align 1
  %1302 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1303 = bitcast i8* %1302 to %sParserInfo**
  %info1099 = load %sParserInfo*, %sParserInfo** %1303, align 8
  %1304 = bitcast [32 x %sCLNode*]* %params1049 to %sCLNode**
  %1305 = call %sCLNode* @sNodeTree_create_method_call(i8* %word1096, i32 %num_params1097, %sCLNode** %1304, i1 %param_closed1098, %sParserInfo* %info1099)
  store %sCLNode* %1305, %sCLNode** %node1095, align 8
  %1306 = load i8*, i8** %word1048, align 8
  %1307 = ptrtoint i8* %1306 to i64
  %1308 = icmp ne i64 %1307, 0
  br i1 %1308, label %cond_then_block1100, label %cond_end1101

loop_top_block:                                   ; preds = %cond_then_block1085, %cond_jump_then1078
  %i1083 = load i32, i32* %i, align 4
  %1309 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %1310 = bitcast i8* %1309 to i32*
  %num_method_params1084 = load i32, i32* %1310, align 4
  %letmp = icmp slt i32 %i1083, %num_method_params1084
  br i1 %letmp, label %cond_then_block1085, label %cond_end_block

cond_then_block1085:                              ; preds = %loop_top_block
  %1311 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %1312 = bitcast i8* %1311 to [32 x %sCLNode*]*
  %i1086 = load i32, i32* %i, align 4
  %1313 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %1314 = bitcast i8* %1313 to %sParserInfo**
  %info1087 = load %sParserInfo*, %sParserInfo** %1314, align 8
  %1315 = call %sCLNode* @sNodeTree_create_string_value(i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.58, i32 0, i32 0), %sParserInfo* %info1087)
  %1316 = bitcast [32 x %sCLNode*]* %1312 to %sCLNode**
  %element_addressC1088 = getelementptr %sCLNode*, %sCLNode** %1316, i32 %i1086
  store %sCLNode* %1315, %sCLNode** %element_addressC1088, align 8
  %1317 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %1318 = bitcast i8* %1317 to i32*
  %num_params1089 = load i32, i32* %1318, align 4
  %addtmp1090 = add nsw i32 %num_params1089, 1
  %1319 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %1320 = bitcast i8* %1319 to i32*
  store i32 %addtmp1090, i32* %1320, align 4
  %subttmp = sub nsw i32 %addtmp1090, 1
  %i1091 = load i32, i32* %i, align 4
  %addtmp1092 = add nsw i32 %i1091, 1
  store i32 %addtmp1092, i32* %i, align 4
  %subttmp1093 = sub nsw i32 %addtmp1092, 1
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  br label %cond_end1079

cond_then_block1100:                              ; preds = %cond_end1079
  br label %cond_end1101

cond_end1101:                                     ; preds = %cond_then_block1100, %cond_end1079
  call void @ncfree(i8* %1306)
  br label %cond_end829

cond_then_block1102:                              ; preds = %cond_end483
  br label %cond_end1103

cond_end1103:                                     ; preds = %cond_then_block1102, %cond_end483
  call void @ncfree(i8* %702)
  br label %cond_end

cond_jump_then1109:                               ; preds = %"cond_jump_elif_then11\0A"
  %1321 = bitcast [8192 x i8*]* %lvtable to i8*
  %1322 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %1321, i64 65536)
  ret i1 false

cond_end1110:                                     ; preds = %"cond_jump_elif_then11\0A"
  br label %cond_end

cond_then_block1114:                              ; preds = %cond_else_block
  br label %cond_end1115

cond_end1115:                                     ; preds = %cond_then_block1114, %cond_else_block
  call void @ncfree(i8* %238)
  ret i1 false

cond_jump_then1119:                               ; preds = %cond_end
  %1323 = bitcast [8192 x i8*]* %lvtable to i8*
  %1324 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %1323, i64 65536)
  ret i1 false

cond_end1120:                                     ; preds = %cond_end
  %1325 = bitcast [8192 x i8*]* %lvtable to i8*
  %1326 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %1325, i64 65536)
  ret i1 true
}

define %vector__sVarTablep* @"initialize_sVarTablep19_src/parser"(%vector__sVarTablep* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sVarTablep*
  store %vector__sVarTablep* %self, %vector__sVarTablep** %self2, align 8
  %2 = bitcast %vector__sVarTablep** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %self3 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %3 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self3, i32 0, i32 2
  store i32 16, i32* %3, align 4
  %self4 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %4 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self4, i32 0, i32 1
  store i32 0, i32* %4, align 4
  %self5 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %self6 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %5 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self6, i32 0, i32 2
  %6 = load i32, i32* %5, align 4
  %sext14 = zext i32 %6 to i64
  %7 = call i8* @nccalloc(i64 %sext14, i64 8)
  %8 = bitcast i8* %7 to %sVarTable**
  %9 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self5, i32 0, i32 0
  store %sVarTable** %8, %sVarTable*** %9, align 8
  %self7 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret %vector__sVarTablep* %self7
}

define void @"finalize_sVarTablep20_src/parser"(%vector__sVarTablep* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sVarTablep*
  store %vector__sVarTablep* %self, %vector__sVarTablep** %self2, align 8
  %2 = bitcast %vector__sVarTablep** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %self3 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %eqtmpX = icmp eq %vector__sVarTablep* %self3, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %3 = bitcast [8192 x i8*]* %lvtable to i8*
  %4 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %3, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  br i1 true, label %cond_jump_then4, label %cond_end5

cond_jump_then4:                                  ; preds = %cond_end
  %i = alloca i32
  %5 = bitcast i32* %i to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

cond_end5:                                        ; preds = %cond_end_block, %cond_end
  %self15 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %6 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self15, i32 0, i32 0
  %7 = load %sVarTable**, %sVarTable*** %6, align 8
  %8 = load %sVarTable**, %sVarTable*** %6, align 8
  %9 = bitcast %sVarTable** %8 to i8*
  call void @ncfree(i8* %9)
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret void

loop_top_block:                                   ; preds = %cond_end11, %cond_jump_then4
  %i6 = load i32, i32* %i, align 4
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %13 = bitcast i8* %12 to %vector__sVarTablep**
  %self7 = load %vector__sVarTablep*, %vector__sVarTablep** %13, align 8
  %14 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self7, i32 0, i32 1
  %15 = load i32, i32* %14, align 4
  %letmp = icmp slt i32 %i6, %15
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %17 = bitcast i8* %16 to %vector__sVarTablep**
  %self8 = load %vector__sVarTablep*, %vector__sVarTablep** %17, align 8
  %18 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self8, i32 0, i32 0
  %19 = load %sVarTable**, %sVarTable*** %18, align 8
  %i9 = load i32, i32* %i, align 4
  %element_addressB = getelementptr %sVarTable*, %sVarTable** %19, i32 %i9
  %element = load %sVarTable*, %sVarTable** %element_addressB, align 8
  %20 = load %sVarTable*, %sVarTable** %element_addressB, align 8
  %21 = ptrtoint %sVarTable* %20 to i64
  %22 = icmp ne i64 %21, 0
  br i1 %22, label %cond_then_block10, label %cond_end11

cond_end_block:                                   ; preds = %loop_top_block
  br label %cond_end5

cond_then_block10:                                ; preds = %cond_then_block
  %23 = getelementptr inbounds %sVarTable, %sVarTable* %20, i32 0, i32 0
  %24 = load %map__charp_sVarp*, %map__charp_sVarp** %23, align 8
  call void @"finalize_charp_sVarp21_src/parser"(%map__charp_sVarp* %24)
  %25 = ptrtoint %map__charp_sVarp* %24 to i64
  %26 = icmp ne i64 %25, 0
  br i1 %26, label %cond_then_block12, label %cond_end13

cond_end11:                                       ; preds = %cond_end13, %cond_then_block
  %27 = bitcast %sVarTable* %20 to i8*
  call void @ncfree(i8* %27)
  %i14 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i14, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_then_block12:                                ; preds = %cond_then_block10
  br label %cond_end13

cond_end13:                                       ; preds = %cond_then_block12, %cond_then_block10
  %28 = bitcast %map__charp_sVarp* %24 to i8*
  call void @ncfree(i8* %28)
  br label %cond_end11
}

define void @"finalize_charp_sVarp21_src/parser"(%map__charp_sVarp* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_sVarp*
  store %map__charp_sVarp* %self, %map__charp_sVarp** %self2, align 8
  %2 = bitcast %map__charp_sVarp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %self3 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %eqtmpX = icmp eq %map__charp_sVarp* %self3, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %3 = bitcast [8192 x i8*]* %lvtable to i8*
  %4 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %3, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  %i = alloca i32
  %5 = bitcast i32* %i to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end9, %cond_end
  %i4 = load i32, i32* %i, align 4
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %7 = bitcast i8* %6 to %map__charp_sVarp**
  %self5 = load %map__charp_sVarp*, %map__charp_sVarp** %7, align 8
  %8 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self5, i32 0, i32 3
  %9 = load i32, i32* %8, align 4
  %letmp = icmp slt i32 %i4, %9
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %11 = bitcast i8* %10 to %map__charp_sVarp**
  %self6 = load %map__charp_sVarp*, %map__charp_sVarp** %11, align 8
  %12 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self6, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %i7 = load i32, i32* %i, align 4
  %element_addressB = getelementptr i1, i1* %13, i32 %i7
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then8, label %cond_end9

cond_end_block:                                   ; preds = %loop_top_block
  %self21 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %14 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self21, i32 0, i32 2
  %15 = load %sVar**, %sVar*** %14, align 8
  %16 = load %sVar**, %sVar*** %14, align 8
  %17 = bitcast %sVar** %16 to i8*
  call void @ncfree(i8* %17)
  %i22 = alloca i32
  %18 = bitcast i32* %i22 to i8*
  store i8* %18, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i32 0, i32* %i22, align 4
  br label %loop_top_block23

cond_jump_then8:                                  ; preds = %cond_then_block
  br i1 false, label %cond_jump_then10, label %cond_end11

cond_end9:                                        ; preds = %cond_end11, %cond_then_block
  %i20 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i20, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_jump_then10:                                 ; preds = %cond_jump_then8
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %20 = bitcast i8* %19 to %map__charp_sVarp**
  %self12 = load %map__charp_sVarp*, %map__charp_sVarp** %20, align 8
  %21 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self12, i32 0, i32 2
  %22 = load %sVar**, %sVar*** %21, align 8
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %24 = bitcast i8* %23 to i32*
  %i13 = load i32, i32* %24, align 4
  %element_addressB14 = getelementptr %sVar*, %sVar** %22, i32 %i13
  %element15 = load %sVar*, %sVar** %element_addressB14, align 8
  %25 = load %sVar*, %sVar** %element_addressB14, align 8
  %26 = ptrtoint %sVar* %25 to i64
  %27 = icmp ne i64 %26, 0
  br i1 %27, label %cond_then_block16, label %cond_end17

cond_end11:                                       ; preds = %cond_end17, %cond_jump_then8
  br label %cond_end9

cond_then_block16:                                ; preds = %cond_jump_then10
  %28 = getelementptr inbounds %sVar, %sVar* %25, i32 0, i32 0
  %29 = load i8*, i8** %28, align 8
  %30 = ptrtoint i8* %29 to i64
  %31 = icmp ne i64 %30, 0
  br i1 %31, label %cond_then_block18, label %cond_end19

cond_end17:                                       ; preds = %cond_end19, %cond_jump_then10
  %32 = bitcast %sVar* %25 to i8*
  call void @ncfree(i8* %32)
  br label %cond_end11

cond_then_block18:                                ; preds = %cond_then_block16
  br label %cond_end19

cond_end19:                                       ; preds = %cond_then_block18, %cond_then_block16
  call void @ncfree(i8* %29)
  br label %cond_end17

loop_top_block23:                                 ; preds = %cond_end34, %cond_end_block
  %i24 = load i32, i32* %i22, align 4
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %34 = bitcast i8* %33 to %map__charp_sVarp**
  %self25 = load %map__charp_sVarp*, %map__charp_sVarp** %34, align 8
  %35 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self25, i32 0, i32 3
  %36 = load i32, i32* %35, align 4
  %letmp26 = icmp slt i32 %i24, %36
  br i1 %letmp26, label %cond_then_block27, label %cond_end_block28

cond_then_block27:                                ; preds = %loop_top_block23
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %38 = bitcast i8* %37 to %map__charp_sVarp**
  %self29 = load %map__charp_sVarp*, %map__charp_sVarp** %38, align 8
  %39 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self29, i32 0, i32 1
  %40 = load i1*, i1** %39, align 8
  %i30 = load i32, i32* %i22, align 4
  %element_addressB31 = getelementptr i1, i1* %40, i32 %i30
  %element32 = load i1, i1* %element_addressB31, align 1
  br i1 %element32, label %cond_jump_then33, label %cond_end34

cond_end_block28:                                 ; preds = %loop_top_block23
  %self46 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %41 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self46, i32 0, i32 0
  %42 = load i8**, i8*** %41, align 8
  %43 = load i8**, i8*** %41, align 8
  %44 = bitcast i8** %43 to i8*
  call void @ncfree(i8* %44)
  %self47 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %45 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self47, i32 0, i32 1
  %46 = load i1*, i1** %45, align 8
  %47 = load i1*, i1** %45, align 8
  %48 = ptrtoint i1* %47 to i64
  %49 = icmp ne i64 %48, 0
  br i1 %49, label %cond_then_block48, label %cond_end49

cond_jump_then33:                                 ; preds = %cond_then_block27
  br i1 true, label %cond_jump_then35, label %cond_end36

cond_end34:                                       ; preds = %cond_end36, %cond_then_block27
  %i43 = load i32, i32* %i22, align 4
  %addtmp44 = add nsw i32 %i43, 1
  store i32 %addtmp44, i32* %i22, align 4
  %subttmp45 = sub nsw i32 %addtmp44, 1
  br label %loop_top_block23

cond_jump_then35:                                 ; preds = %cond_jump_then33
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %51 = bitcast i8* %50 to %map__charp_sVarp**
  %self37 = load %map__charp_sVarp*, %map__charp_sVarp** %51, align 8
  %52 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self37, i32 0, i32 0
  %53 = load i8**, i8*** %52, align 8
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %55 = bitcast i8* %54 to i32*
  %i38 = load i32, i32* %55, align 4
  %element_addressB39 = getelementptr i8*, i8** %53, i32 %i38
  %element40 = load i8*, i8** %element_addressB39, align 8
  %56 = load i8*, i8** %element_addressB39, align 8
  %57 = ptrtoint i8* %56 to i64
  %58 = icmp ne i64 %57, 0
  br i1 %58, label %cond_then_block41, label %cond_end42

cond_end36:                                       ; preds = %cond_end42, %cond_jump_then33
  br label %cond_end34

cond_then_block41:                                ; preds = %cond_jump_then35
  br label %cond_end42

cond_end42:                                       ; preds = %cond_then_block41, %cond_jump_then35
  call void @ncfree(i8* %56)
  br label %cond_end36

cond_then_block48:                                ; preds = %cond_end_block28
  br label %cond_end49

cond_end49:                                       ; preds = %cond_then_block48, %cond_end_block28
  %59 = bitcast i1* %47 to i8*
  call void @ncfree(i8* %59)
  %60 = bitcast [8192 x i8*]* %lvtable to i8*
  %61 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %60, i64 65536)
  ret void
}

define void @"finalize_sVarTablep22_src/parser"(%vector__sVarTablep* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sVarTablep*
  store %vector__sVarTablep* %self, %vector__sVarTablep** %self2, align 8
  %2 = bitcast %vector__sVarTablep** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %self3 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %eqtmpX = icmp eq %vector__sVarTablep* %self3, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %3 = bitcast [8192 x i8*]* %lvtable to i8*
  %4 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %3, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  br i1 true, label %cond_jump_then4, label %cond_end5

cond_jump_then4:                                  ; preds = %cond_end
  %i = alloca i32
  %5 = bitcast i32* %i to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

cond_end5:                                        ; preds = %cond_end_block, %cond_end
  %self15 = load %vector__sVarTablep*, %vector__sVarTablep** %self2, align 8
  %6 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self15, i32 0, i32 0
  %7 = load %sVarTable**, %sVarTable*** %6, align 8
  %8 = load %sVarTable**, %sVarTable*** %6, align 8
  %9 = bitcast %sVarTable** %8 to i8*
  call void @ncfree(i8* %9)
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret void

loop_top_block:                                   ; preds = %cond_end11, %cond_jump_then4
  %i6 = load i32, i32* %i, align 4
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %13 = bitcast i8* %12 to %vector__sVarTablep**
  %self7 = load %vector__sVarTablep*, %vector__sVarTablep** %13, align 8
  %14 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self7, i32 0, i32 1
  %15 = load i32, i32* %14, align 4
  %letmp = icmp slt i32 %i6, %15
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %17 = bitcast i8* %16 to %vector__sVarTablep**
  %self8 = load %vector__sVarTablep*, %vector__sVarTablep** %17, align 8
  %18 = getelementptr inbounds %vector__sVarTablep, %vector__sVarTablep* %self8, i32 0, i32 0
  %19 = load %sVarTable**, %sVarTable*** %18, align 8
  %i9 = load i32, i32* %i, align 4
  %element_addressB = getelementptr %sVarTable*, %sVarTable** %19, i32 %i9
  %element = load %sVarTable*, %sVarTable** %element_addressB, align 8
  %20 = load %sVarTable*, %sVarTable** %element_addressB, align 8
  %21 = ptrtoint %sVarTable* %20 to i64
  %22 = icmp ne i64 %21, 0
  br i1 %22, label %cond_then_block10, label %cond_end11

cond_end_block:                                   ; preds = %loop_top_block
  br label %cond_end5

cond_then_block10:                                ; preds = %cond_then_block
  %23 = getelementptr inbounds %sVarTable, %sVarTable* %20, i32 0, i32 0
  %24 = load %map__charp_sVarp*, %map__charp_sVarp** %23, align 8
  call void @"finalize_charp_sVarp23_src/parser"(%map__charp_sVarp* %24)
  %25 = ptrtoint %map__charp_sVarp* %24 to i64
  %26 = icmp ne i64 %25, 0
  br i1 %26, label %cond_then_block12, label %cond_end13

cond_end11:                                       ; preds = %cond_end13, %cond_then_block
  %27 = bitcast %sVarTable* %20 to i8*
  call void @ncfree(i8* %27)
  %i14 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i14, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_then_block12:                                ; preds = %cond_then_block10
  br label %cond_end13

cond_end13:                                       ; preds = %cond_then_block12, %cond_then_block10
  %28 = bitcast %map__charp_sVarp* %24 to i8*
  call void @ncfree(i8* %28)
  br label %cond_end11
}

define void @"finalize_charp_sVarp23_src/parser"(%map__charp_sVarp* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_sVarp*
  store %map__charp_sVarp* %self, %map__charp_sVarp** %self2, align 8
  %2 = bitcast %map__charp_sVarp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %self3 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %eqtmpX = icmp eq %map__charp_sVarp* %self3, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %3 = bitcast [8192 x i8*]* %lvtable to i8*
  %4 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %3, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  %i = alloca i32
  %5 = bitcast i32* %i to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end9, %cond_end
  %i4 = load i32, i32* %i, align 4
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %7 = bitcast i8* %6 to %map__charp_sVarp**
  %self5 = load %map__charp_sVarp*, %map__charp_sVarp** %7, align 8
  %8 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self5, i32 0, i32 3
  %9 = load i32, i32* %8, align 4
  %letmp = icmp slt i32 %i4, %9
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %11 = bitcast i8* %10 to %map__charp_sVarp**
  %self6 = load %map__charp_sVarp*, %map__charp_sVarp** %11, align 8
  %12 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self6, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %i7 = load i32, i32* %i, align 4
  %element_addressB = getelementptr i1, i1* %13, i32 %i7
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then8, label %cond_end9

cond_end_block:                                   ; preds = %loop_top_block
  %self21 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %14 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self21, i32 0, i32 2
  %15 = load %sVar**, %sVar*** %14, align 8
  %16 = load %sVar**, %sVar*** %14, align 8
  %17 = bitcast %sVar** %16 to i8*
  call void @ncfree(i8* %17)
  %i22 = alloca i32
  %18 = bitcast i32* %i22 to i8*
  store i8* %18, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i32 0, i32* %i22, align 4
  br label %loop_top_block23

cond_jump_then8:                                  ; preds = %cond_then_block
  br i1 false, label %cond_jump_then10, label %cond_end11

cond_end9:                                        ; preds = %cond_end11, %cond_then_block
  %i20 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i20, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_jump_then10:                                 ; preds = %cond_jump_then8
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %20 = bitcast i8* %19 to %map__charp_sVarp**
  %self12 = load %map__charp_sVarp*, %map__charp_sVarp** %20, align 8
  %21 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self12, i32 0, i32 2
  %22 = load %sVar**, %sVar*** %21, align 8
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %24 = bitcast i8* %23 to i32*
  %i13 = load i32, i32* %24, align 4
  %element_addressB14 = getelementptr %sVar*, %sVar** %22, i32 %i13
  %element15 = load %sVar*, %sVar** %element_addressB14, align 8
  %25 = load %sVar*, %sVar** %element_addressB14, align 8
  %26 = ptrtoint %sVar* %25 to i64
  %27 = icmp ne i64 %26, 0
  br i1 %27, label %cond_then_block16, label %cond_end17

cond_end11:                                       ; preds = %cond_end17, %cond_jump_then8
  br label %cond_end9

cond_then_block16:                                ; preds = %cond_jump_then10
  %28 = getelementptr inbounds %sVar, %sVar* %25, i32 0, i32 0
  %29 = load i8*, i8** %28, align 8
  %30 = ptrtoint i8* %29 to i64
  %31 = icmp ne i64 %30, 0
  br i1 %31, label %cond_then_block18, label %cond_end19

cond_end17:                                       ; preds = %cond_end19, %cond_jump_then10
  %32 = bitcast %sVar* %25 to i8*
  call void @ncfree(i8* %32)
  br label %cond_end11

cond_then_block18:                                ; preds = %cond_then_block16
  br label %cond_end19

cond_end19:                                       ; preds = %cond_then_block18, %cond_then_block16
  call void @ncfree(i8* %29)
  br label %cond_end17

loop_top_block23:                                 ; preds = %cond_end34, %cond_end_block
  %i24 = load i32, i32* %i22, align 4
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %34 = bitcast i8* %33 to %map__charp_sVarp**
  %self25 = load %map__charp_sVarp*, %map__charp_sVarp** %34, align 8
  %35 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self25, i32 0, i32 3
  %36 = load i32, i32* %35, align 4
  %letmp26 = icmp slt i32 %i24, %36
  br i1 %letmp26, label %cond_then_block27, label %cond_end_block28

cond_then_block27:                                ; preds = %loop_top_block23
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %38 = bitcast i8* %37 to %map__charp_sVarp**
  %self29 = load %map__charp_sVarp*, %map__charp_sVarp** %38, align 8
  %39 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self29, i32 0, i32 1
  %40 = load i1*, i1** %39, align 8
  %i30 = load i32, i32* %i22, align 4
  %element_addressB31 = getelementptr i1, i1* %40, i32 %i30
  %element32 = load i1, i1* %element_addressB31, align 1
  br i1 %element32, label %cond_jump_then33, label %cond_end34

cond_end_block28:                                 ; preds = %loop_top_block23
  %self46 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %41 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self46, i32 0, i32 0
  %42 = load i8**, i8*** %41, align 8
  %43 = load i8**, i8*** %41, align 8
  %44 = bitcast i8** %43 to i8*
  call void @ncfree(i8* %44)
  %self47 = load %map__charp_sVarp*, %map__charp_sVarp** %self2, align 8
  %45 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self47, i32 0, i32 1
  %46 = load i1*, i1** %45, align 8
  %47 = load i1*, i1** %45, align 8
  %48 = ptrtoint i1* %47 to i64
  %49 = icmp ne i64 %48, 0
  br i1 %49, label %cond_then_block48, label %cond_end49

cond_jump_then33:                                 ; preds = %cond_then_block27
  br i1 true, label %cond_jump_then35, label %cond_end36

cond_end34:                                       ; preds = %cond_end36, %cond_then_block27
  %i43 = load i32, i32* %i22, align 4
  %addtmp44 = add nsw i32 %i43, 1
  store i32 %addtmp44, i32* %i22, align 4
  %subttmp45 = sub nsw i32 %addtmp44, 1
  br label %loop_top_block23

cond_jump_then35:                                 ; preds = %cond_jump_then33
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %51 = bitcast i8* %50 to %map__charp_sVarp**
  %self37 = load %map__charp_sVarp*, %map__charp_sVarp** %51, align 8
  %52 = getelementptr inbounds %map__charp_sVarp, %map__charp_sVarp* %self37, i32 0, i32 0
  %53 = load i8**, i8*** %52, align 8
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %55 = bitcast i8* %54 to i32*
  %i38 = load i32, i32* %55, align 4
  %element_addressB39 = getelementptr i8*, i8** %53, i32 %i38
  %element40 = load i8*, i8** %element_addressB39, align 8
  %56 = load i8*, i8** %element_addressB39, align 8
  %57 = ptrtoint i8* %56 to i64
  %58 = icmp ne i64 %57, 0
  br i1 %58, label %cond_then_block41, label %cond_end42

cond_end36:                                       ; preds = %cond_end42, %cond_jump_then33
  br label %cond_end34

cond_then_block41:                                ; preds = %cond_jump_then35
  br label %cond_end42

cond_end42:                                       ; preds = %cond_then_block41, %cond_jump_then35
  call void @ncfree(i8* %56)
  br label %cond_end36

cond_then_block48:                                ; preds = %cond_end_block28
  br label %cond_end49

cond_end49:                                       ; preds = %cond_then_block48, %cond_end_block28
  %59 = bitcast i1* %47 to i8*
  call void @ncfree(i8* %59)
  %60 = bitcast [8192 x i8*]* %lvtable to i8*
  %61 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %60, i64 65536)
  ret void
}

define %sCLClass* @"at_charp_sCLClassp24_src/parser"(%map__charp_sCLClassp* %self, i8* %key, %sCLClass* %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_sCLClassp*
  store %map__charp_sCLClassp* %self, %map__charp_sCLClassp** %self2, align 8
  %2 = bitcast %map__charp_sCLClassp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %default_value4 = alloca %sCLClass*
  store %sCLClass* %default_value, %sCLClass** %default_value4, align 8
  %4 = bitcast %sCLClass** %default_value4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %key5 = load i8*, i8** %key3, align 8
  %5 = call i32 @string_get_hash_key(i8* %key5)
  %self6 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %self2, align 8
  %6 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self6, i32 0, i32 3
  %7 = load i32, i32* %6, align 4
  %remtmp = srem i32 %5, %7
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash7 = load i32, i32* %hash, align 4
  %it = alloca i32
  %9 = bitcast i32* %it to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  store i32 %hash7, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %11 = bitcast i8* %10 to %map__charp_sCLClassp**
  %self8 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %11, align 8
  %12 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self8, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
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
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %19 = bitcast i8* %18 to %map__charp_sCLClassp**
  %self10 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %19, align 8
  %20 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self10, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %23 = bitcast i8* %22 to i32*
  %it11 = load i32, i32* %23, align 4
  %element_addressB12 = getelementptr i8*, i8** %21, i32 %it11
  %element13 = load i8*, i8** %element_addressB12, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %25 = bitcast i8* %24 to i8**
  %key14 = load i8*, i8** %25, align 8
  %26 = call i1 @string_equals(i8* %element13, i8* %key14)
  br i1 %26, label %cond_jump_then15, label %cond_end16

cond_else_block:                                  ; preds = %cond_then_block
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %28 = bitcast i8* %27 to %sCLClass**
  %default_value29 = load %sCLClass*, %sCLClass** %28, align 8
  %29 = bitcast [8192 x i8*]* %lvtable to i8*
  %30 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %29, i64 65536)
  ret %sCLClass* %default_value29

cond_end:                                         ; preds = %cond_end25
  br label %loop_top_block

cond_jump_then15:                                 ; preds = %cond_jump_then
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %32 = bitcast i8* %31 to %map__charp_sCLClassp**
  %self17 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %32, align 8
  %33 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self17, i32 0, i32 2
  %34 = load %sCLClass**, %sCLClass*** %33, align 8
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %36 = bitcast i8* %35 to i32*
  %it18 = load i32, i32* %36, align 4
  %element_addressB19 = getelementptr %sCLClass*, %sCLClass** %34, i32 %it18
  %element20 = load %sCLClass*, %sCLClass** %element_addressB19, align 8
  %37 = bitcast [8192 x i8*]* %lvtable to i8*
  %38 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %37, i64 65536)
  ret %sCLClass* %element20

cond_end16:                                       ; preds = %cond_jump_then
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %40 = bitcast i8* %39 to i32*
  %it21 = load i32, i32* %40, align 4
  %addtmp = add nsw i32 %it21, 1
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %42 = bitcast i8* %41 to i32*
  store i32 %addtmp, i32* %42, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %44 = bitcast i8* %43 to i32*
  %it22 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %46 = bitcast i8* %45 to %map__charp_sCLClassp**
  %self23 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %46, align 8
  %47 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self23, i32 0, i32 3
  %48 = load i32, i32* %47, align 4
  %getmp = icmp sge i32 %it22, %48
  br i1 %getmp, label %cond_jump_then24, label %"cond_jump_elif0\0A"

cond_jump_then24:                                 ; preds = %cond_end16
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %50 = bitcast i8* %49 to i32*
  store i32 0, i32* %50, align 4
  br label %cond_end25

"cond_jump_elif0\0A":                             ; preds = %cond_end16
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %52 = bitcast i8* %51 to i32*
  %it26 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %54 = bitcast i8* %53 to i32*
  %hash27 = load i32, i32* %54, align 4
  %eqtmpX = icmp eq i32 %it26, %hash27
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end25

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %56 = bitcast i8* %55 to %sCLClass**
  %default_value28 = load %sCLClass*, %sCLClass** %56, align 8
  %57 = bitcast [8192 x i8*]* %lvtable to i8*
  %58 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %57, i64 65536)
  ret %sCLClass* %default_value28

cond_end25:                                       ; preds = %"cond_jump_elif0\0A", %cond_jump_then24
  br label %cond_end
}

define %sCLClass* @"at_charp_sCLClassp25_src/parser"(%map__charp_sCLClassp* %self, i8* %key, %sCLClass* %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_sCLClassp*
  store %map__charp_sCLClassp* %self, %map__charp_sCLClassp** %self2, align 8
  %2 = bitcast %map__charp_sCLClassp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %default_value4 = alloca %sCLClass*
  store %sCLClass* %default_value, %sCLClass** %default_value4, align 8
  %4 = bitcast %sCLClass** %default_value4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %key5 = load i8*, i8** %key3, align 8
  %5 = call i32 @string_get_hash_key(i8* %key5)
  %self6 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %self2, align 8
  %6 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self6, i32 0, i32 3
  %7 = load i32, i32* %6, align 4
  %remtmp = srem i32 %5, %7
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash7 = load i32, i32* %hash, align 4
  %it = alloca i32
  %9 = bitcast i32* %it to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  store i32 %hash7, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %11 = bitcast i8* %10 to %map__charp_sCLClassp**
  %self8 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %11, align 8
  %12 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self8, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
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
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %19 = bitcast i8* %18 to %map__charp_sCLClassp**
  %self10 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %19, align 8
  %20 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self10, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %23 = bitcast i8* %22 to i32*
  %it11 = load i32, i32* %23, align 4
  %element_addressB12 = getelementptr i8*, i8** %21, i32 %it11
  %element13 = load i8*, i8** %element_addressB12, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %25 = bitcast i8* %24 to i8**
  %key14 = load i8*, i8** %25, align 8
  %26 = call i1 @string_equals(i8* %element13, i8* %key14)
  br i1 %26, label %cond_jump_then15, label %cond_end16

cond_else_block:                                  ; preds = %cond_then_block
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %28 = bitcast i8* %27 to %sCLClass**
  %default_value29 = load %sCLClass*, %sCLClass** %28, align 8
  %29 = bitcast [8192 x i8*]* %lvtable to i8*
  %30 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %29, i64 65536)
  ret %sCLClass* %default_value29

cond_end:                                         ; preds = %cond_end25
  br label %loop_top_block

cond_jump_then15:                                 ; preds = %cond_jump_then
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %32 = bitcast i8* %31 to %map__charp_sCLClassp**
  %self17 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %32, align 8
  %33 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self17, i32 0, i32 2
  %34 = load %sCLClass**, %sCLClass*** %33, align 8
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %36 = bitcast i8* %35 to i32*
  %it18 = load i32, i32* %36, align 4
  %element_addressB19 = getelementptr %sCLClass*, %sCLClass** %34, i32 %it18
  %element20 = load %sCLClass*, %sCLClass** %element_addressB19, align 8
  %37 = bitcast [8192 x i8*]* %lvtable to i8*
  %38 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %37, i64 65536)
  ret %sCLClass* %element20

cond_end16:                                       ; preds = %cond_jump_then
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %40 = bitcast i8* %39 to i32*
  %it21 = load i32, i32* %40, align 4
  %addtmp = add nsw i32 %it21, 1
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %42 = bitcast i8* %41 to i32*
  store i32 %addtmp, i32* %42, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %44 = bitcast i8* %43 to i32*
  %it22 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %46 = bitcast i8* %45 to %map__charp_sCLClassp**
  %self23 = load %map__charp_sCLClassp*, %map__charp_sCLClassp** %46, align 8
  %47 = getelementptr inbounds %map__charp_sCLClassp, %map__charp_sCLClassp* %self23, i32 0, i32 3
  %48 = load i32, i32* %47, align 4
  %getmp = icmp sge i32 %it22, %48
  br i1 %getmp, label %cond_jump_then24, label %"cond_jump_elif0\0A"

cond_jump_then24:                                 ; preds = %cond_end16
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %50 = bitcast i8* %49 to i32*
  store i32 0, i32* %50, align 4
  br label %cond_end25

"cond_jump_elif0\0A":                             ; preds = %cond_end16
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %52 = bitcast i8* %51 to i32*
  %it26 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %54 = bitcast i8* %53 to i32*
  %hash27 = load i32, i32* %54, align 4
  %eqtmpX = icmp eq i32 %it26, %hash27
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end25

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %56 = bitcast i8* %55 to %sCLClass**
  %default_value28 = load %sCLClass*, %sCLClass** %56, align 8
  %57 = bitcast [8192 x i8*]* %lvtable to i8*
  %58 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %57, i64 65536)
  ret %sCLClass* %default_value28

cond_end25:                                       ; preds = %"cond_jump_elif0\0A", %cond_jump_then24
  br label %cond_end
}

define %sCLMethod* @"at_charp_sCLMethodp26_src/parser"(%map__charp_sCLMethodp* %self, i8* %key, %sCLMethod* %default_value) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_sCLMethodp*
  store %map__charp_sCLMethodp* %self, %map__charp_sCLMethodp** %self2, align 8
  %2 = bitcast %map__charp_sCLMethodp** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %default_value4 = alloca %sCLMethod*
  store %sCLMethod* %default_value, %sCLMethod** %default_value4, align 8
  %4 = bitcast %sCLMethod** %default_value4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %key5 = load i8*, i8** %key3, align 8
  %5 = call i32 @string_get_hash_key(i8* %key5)
  %self6 = load %map__charp_sCLMethodp*, %map__charp_sCLMethodp** %self2, align 8
  %6 = getelementptr inbounds %map__charp_sCLMethodp, %map__charp_sCLMethodp* %self6, i32 0, i32 3
  %7 = load i32, i32* %6, align 4
  %remtmp = srem i32 %5, %7
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash7 = load i32, i32* %hash, align 4
  %it = alloca i32
  %9 = bitcast i32* %it to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  store i32 %hash7, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %11 = bitcast i8* %10 to %map__charp_sCLMethodp**
  %self8 = load %map__charp_sCLMethodp*, %map__charp_sCLMethodp** %11, align 8
  %12 = getelementptr inbounds %map__charp_sCLMethodp, %map__charp_sCLMethodp* %self8, i32 0, i32 1
  %13 = load i1*, i1** %12, align 8
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
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
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %19 = bitcast i8* %18 to %map__charp_sCLMethodp**
  %self10 = load %map__charp_sCLMethodp*, %map__charp_sCLMethodp** %19, align 8
  %20 = getelementptr inbounds %map__charp_sCLMethodp, %map__charp_sCLMethodp* %self10, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %23 = bitcast i8* %22 to i32*
  %it11 = load i32, i32* %23, align 4
  %element_addressB12 = getelementptr i8*, i8** %21, i32 %it11
  %element13 = load i8*, i8** %element_addressB12, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %25 = bitcast i8* %24 to i8**
  %key14 = load i8*, i8** %25, align 8
  %26 = call i1 @string_equals(i8* %element13, i8* %key14)
  br i1 %26, label %cond_jump_then15, label %cond_end16

cond_else_block:                                  ; preds = %cond_then_block
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %28 = bitcast i8* %27 to %sCLMethod**
  %default_value29 = load %sCLMethod*, %sCLMethod** %28, align 8
  %29 = bitcast [8192 x i8*]* %lvtable to i8*
  %30 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %29, i64 65536)
  ret %sCLMethod* %default_value29

cond_end:                                         ; preds = %cond_end25
  br label %loop_top_block

cond_jump_then15:                                 ; preds = %cond_jump_then
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %32 = bitcast i8* %31 to %map__charp_sCLMethodp**
  %self17 = load %map__charp_sCLMethodp*, %map__charp_sCLMethodp** %32, align 8
  %33 = getelementptr inbounds %map__charp_sCLMethodp, %map__charp_sCLMethodp* %self17, i32 0, i32 2
  %34 = load %sCLMethod**, %sCLMethod*** %33, align 8
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %36 = bitcast i8* %35 to i32*
  %it18 = load i32, i32* %36, align 4
  %element_addressB19 = getelementptr %sCLMethod*, %sCLMethod** %34, i32 %it18
  %element20 = load %sCLMethod*, %sCLMethod** %element_addressB19, align 8
  %37 = bitcast [8192 x i8*]* %lvtable to i8*
  %38 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %37, i64 65536)
  ret %sCLMethod* %element20

cond_end16:                                       ; preds = %cond_jump_then
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %40 = bitcast i8* %39 to i32*
  %it21 = load i32, i32* %40, align 4
  %addtmp = add nsw i32 %it21, 1
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %42 = bitcast i8* %41 to i32*
  store i32 %addtmp, i32* %42, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %44 = bitcast i8* %43 to i32*
  %it22 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %46 = bitcast i8* %45 to %map__charp_sCLMethodp**
  %self23 = load %map__charp_sCLMethodp*, %map__charp_sCLMethodp** %46, align 8
  %47 = getelementptr inbounds %map__charp_sCLMethodp, %map__charp_sCLMethodp* %self23, i32 0, i32 3
  %48 = load i32, i32* %47, align 4
  %getmp = icmp sge i32 %it22, %48
  br i1 %getmp, label %cond_jump_then24, label %"cond_jump_elif0\0A"

cond_jump_then24:                                 ; preds = %cond_end16
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %50 = bitcast i8* %49 to i32*
  store i32 0, i32* %50, align 4
  br label %cond_end25

"cond_jump_elif0\0A":                             ; preds = %cond_end16
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %52 = bitcast i8* %51 to i32*
  %it26 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %54 = bitcast i8* %53 to i32*
  %hash27 = load i32, i32* %54, align 4
  %eqtmpX = icmp eq i32 %it26, %hash27
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end25

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %56 = bitcast i8* %55 to %sCLMethod**
  %default_value28 = load %sCLMethod*, %sCLMethod** %56, align 8
  %57 = bitcast [8192 x i8*]* %lvtable to i8*
  %58 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %57, i64 65536)
  ret %sCLMethod* %default_value28

cond_end25:                                       ; preds = %"cond_jump_elif0\0A", %cond_jump_then24
  br label %cond_end
}

define internal i1 @expression_mult_div(%sCLNode** %node, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %node2 = alloca %sCLNode**
  store %sCLNode** %node, %sCLNode*** %node2, align 8
  %2 = bitcast %sCLNode*** %node2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %node4 = load %sCLNode**, %sCLNode*** %node2, align 8
  %info5 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %4 = call i1 @expression_node(%sCLNode** %node4, %sParserInfo* %info5)
  %LOGICAL_DIANEAL = icmp eq i1 %4, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %5 = bitcast [8192 x i8*]* %lvtable to i8*
  %6 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %5, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %entry
  %node6 = load %sCLNode**, %sCLNode*** %node2, align 8
  %derefference_value = load %sCLNode*, %sCLNode** %node6, align 8
  %eqtmpX = icmp eq %sCLNode* %derefference_value, null
  br i1 %eqtmpX, label %cond_jump_then7, label %cond_end8

cond_jump_then7:                                  ; preds = %cond_end
  %7 = bitcast [8192 x i8*]* %lvtable to i8*
  %8 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %7, i64 65536)
  ret i1 true

cond_end8:                                        ; preds = %cond_end
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end15, %cond_end8
  %info9 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %9 = getelementptr inbounds %sParserInfo, %sParserInfo* %info9, i32 0, i32 4
  %10 = load i8*, i8** %9, align 8
  %derefference_value10 = load i8, i8* %10, align 8
  %11 = icmp ne i8 %derefference_value10, 0
  br i1 %11, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %13 = bitcast i8* %12 to %sParserInfo**
  %info11 = load %sParserInfo*, %sParserInfo** %13, align 8
  %14 = getelementptr inbounds %sParserInfo, %sParserInfo* %info11, i32 0, i32 4
  %15 = load i8*, i8** %14, align 8
  %derefference_value12 = load i8, i8* %15, align 8
  %eqtmpX13 = icmp eq i8 %derefference_value12, 42
  br i1 %eqtmpX13, label %cond_jump_then14, label %"cond_jump_elif0\0A"

cond_end_block:                                   ; preds = %cond_else_block, %loop_top_block
  %16 = bitcast [8192 x i8*]* %lvtable to i8*
  %17 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %16, i64 65536)
  ret i1 true

cond_jump_then14:                                 ; preds = %cond_then_block
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %19 = bitcast i8* %18 to %sParserInfo**
  %info16 = load %sParserInfo*, %sParserInfo** %19, align 8
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %21 = bitcast i8* %20 to %sParserInfo**
  %info17 = load %sParserInfo*, %sParserInfo** %21, align 8
  %22 = getelementptr inbounds %sParserInfo, %sParserInfo* %info17, i32 0, i32 4
  %23 = load i8*, i8** %22, align 8
  %24 = ptrtoint i8* %23 to i64
  %addtmp = add nsw i64 %24, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %25 = getelementptr inbounds %sParserInfo, %sParserInfo* %info16, i32 0, i32 4
  store i8* %intToPtr2, i8** %25, align 8
  %26 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %26, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %28 = bitcast i8* %27 to %sParserInfo**
  %info18 = load %sParserInfo*, %sParserInfo** %28, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info18)
  %right = alloca %sCLNode*
  %29 = bitcast %sCLNode** %right to i8*
  store i8* %29, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right, align 8
  %right19 = load %sCLNode*, %sCLNode** %right, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %31 = bitcast i8* %30 to %sParserInfo**
  %info20 = load %sParserInfo*, %sParserInfo** %31, align 8
  %32 = call i1 @expression_node(%sCLNode** %right, %sParserInfo* %info20)
  %LOGICAL_DIANEAL21 = icmp eq i1 %32, false
  br i1 %LOGICAL_DIANEAL21, label %cond_jump_then22, label %cond_end23

"cond_jump_elif0\0A":                             ; preds = %cond_then_block
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %34 = bitcast i8* %33 to %sParserInfo**
  %info34 = load %sParserInfo*, %sParserInfo** %34, align 8
  %35 = getelementptr inbounds %sParserInfo, %sParserInfo* %info34, i32 0, i32 4
  %36 = load i8*, i8** %35, align 8
  %derefference_value35 = load i8, i8* %36, align 8
  %eqtmpX36 = icmp eq i8 %derefference_value35, 92
  store i1 %eqtmpX36, i1* %andand_result_var, align 1
  br i1 %eqtmpX36, label %cond_jump_then37, label %cond_jump_end

"cond_jump_elif_then0\0A":                        ; preds = %cond_jump_end
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %38 = bitcast i8* %37 to %sParserInfo**
  %info43 = load %sParserInfo*, %sParserInfo** %38, align 8
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %40 = bitcast i8* %39 to %sParserInfo**
  %info44 = load %sParserInfo*, %sParserInfo** %40, align 8
  %41 = getelementptr inbounds %sParserInfo, %sParserInfo* %info44, i32 0, i32 4
  %42 = load i8*, i8** %41, align 8
  %43 = ptrtoint i8* %42 to i64
  %addtmp45 = add nsw i64 %43, 2
  %intToPtr246 = inttoptr i64 %addtmp45 to i8*
  %44 = getelementptr inbounds %sParserInfo, %sParserInfo* %info43, i32 0, i32 4
  store i8* %intToPtr246, i8** %44, align 8
  %45 = ptrtoint i8* %intToPtr246 to i64
  %subtmp47 = sub nsw i64 %45, 2
  %IntTOPtr4b48 = inttoptr i64 %subtmp47 to i8*
  %46 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %47 = bitcast i8* %46 to %sParserInfo**
  %info49 = load %sParserInfo*, %sParserInfo** %47, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info49)
  %right50 = alloca %sCLNode*
  %48 = bitcast %sCLNode** %right50 to i8*
  store i8* %48, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right50, align 8
  %right51 = load %sCLNode*, %sCLNode** %right50, align 8
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %50 = bitcast i8* %49 to %sParserInfo**
  %info52 = load %sParserInfo*, %sParserInfo** %50, align 8
  %51 = call i1 @expression_node(%sCLNode** %right50, %sParserInfo* %info52)
  %LOGICAL_DIANEAL53 = icmp eq i1 %51, false
  br i1 %LOGICAL_DIANEAL53, label %cond_jump_then54, label %cond_end55

"cond_jump_elif1\0A":                             ; preds = %cond_jump_end
  %52 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %53 = bitcast i8* %52 to %sParserInfo**
  %info66 = load %sParserInfo*, %sParserInfo** %53, align 8
  %54 = getelementptr inbounds %sParserInfo, %sParserInfo* %info66, i32 0, i32 4
  %55 = load i8*, i8** %54, align 8
  %derefference_value67 = load i8, i8* %55, align 8
  %eqtmpX68 = icmp eq i8 %derefference_value67, 47
  br i1 %eqtmpX68, label %"cond_jump_elif_then1\0A", label %"cond_jump_elif2\0A"

"cond_jump_elif_then1\0A":                        ; preds = %"cond_jump_elif1\0A"
  %56 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %57 = bitcast i8* %56 to %sParserInfo**
  %info69 = load %sParserInfo*, %sParserInfo** %57, align 8
  %58 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %59 = bitcast i8* %58 to %sParserInfo**
  %info70 = load %sParserInfo*, %sParserInfo** %59, align 8
  %60 = getelementptr inbounds %sParserInfo, %sParserInfo* %info70, i32 0, i32 4
  %61 = load i8*, i8** %60, align 8
  %62 = ptrtoint i8* %61 to i64
  %addtmp71 = add nsw i64 %62, 1
  %intToPtr272 = inttoptr i64 %addtmp71 to i8*
  %63 = getelementptr inbounds %sParserInfo, %sParserInfo* %info69, i32 0, i32 4
  store i8* %intToPtr272, i8** %63, align 8
  %64 = ptrtoint i8* %intToPtr272 to i64
  %subtmp73 = sub nsw i64 %64, 1
  %IntTOPtr4b74 = inttoptr i64 %subtmp73 to i8*
  %65 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %66 = bitcast i8* %65 to %sParserInfo**
  %info75 = load %sParserInfo*, %sParserInfo** %66, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info75)
  %right76 = alloca %sCLNode*
  %67 = bitcast %sCLNode** %right76 to i8*
  store i8* %67, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right76, align 8
  %right77 = load %sCLNode*, %sCLNode** %right76, align 8
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %69 = bitcast i8* %68 to %sParserInfo**
  %info78 = load %sParserInfo*, %sParserInfo** %69, align 8
  %70 = call i1 @expression_node(%sCLNode** %right76, %sParserInfo* %info78)
  %LOGICAL_DIANEAL79 = icmp eq i1 %70, false
  br i1 %LOGICAL_DIANEAL79, label %cond_jump_then80, label %cond_end81

"cond_jump_elif2\0A":                             ; preds = %"cond_jump_elif1\0A"
  %71 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %72 = bitcast i8* %71 to %sParserInfo**
  %info92 = load %sParserInfo*, %sParserInfo** %72, align 8
  %73 = getelementptr inbounds %sParserInfo, %sParserInfo* %info92, i32 0, i32 4
  %74 = load i8*, i8** %73, align 8
  %derefference_value93 = load i8, i8* %74, align 8
  %eqtmpX94 = icmp eq i8 %derefference_value93, 92
  store i1 %eqtmpX94, i1* %andand_result_var, align 1
  br i1 %eqtmpX94, label %cond_jump_then95, label %cond_jump_end96

"cond_jump_elif_then2\0A":                        ; preds = %cond_jump_end96
  %75 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %76 = bitcast i8* %75 to %sParserInfo**
  %info104 = load %sParserInfo*, %sParserInfo** %76, align 8
  %77 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %78 = bitcast i8* %77 to %sParserInfo**
  %info105 = load %sParserInfo*, %sParserInfo** %78, align 8
  %79 = getelementptr inbounds %sParserInfo, %sParserInfo* %info105, i32 0, i32 4
  %80 = load i8*, i8** %79, align 8
  %81 = ptrtoint i8* %80 to i64
  %addtmp106 = add nsw i64 %81, 2
  %intToPtr2107 = inttoptr i64 %addtmp106 to i8*
  %82 = getelementptr inbounds %sParserInfo, %sParserInfo* %info104, i32 0, i32 4
  store i8* %intToPtr2107, i8** %82, align 8
  %83 = ptrtoint i8* %intToPtr2107 to i64
  %subtmp108 = sub nsw i64 %83, 2
  %IntTOPtr4b109 = inttoptr i64 %subtmp108 to i8*
  %84 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %85 = bitcast i8* %84 to %sParserInfo**
  %info110 = load %sParserInfo*, %sParserInfo** %85, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info110)
  %right111 = alloca %sCLNode*
  %86 = bitcast %sCLNode** %right111 to i8*
  store i8* %86, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right111, align 8
  %right112 = load %sCLNode*, %sCLNode** %right111, align 8
  %87 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %88 = bitcast i8* %87 to %sParserInfo**
  %info113 = load %sParserInfo*, %sParserInfo** %88, align 8
  %89 = call i1 @expression_node(%sCLNode** %right111, %sParserInfo* %info113)
  %LOGICAL_DIANEAL114 = icmp eq i1 %89, false
  br i1 %LOGICAL_DIANEAL114, label %cond_jump_then115, label %cond_end116

"cond_jump_elif3\0A":                             ; preds = %cond_jump_end96
  %90 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %91 = bitcast i8* %90 to %sParserInfo**
  %info127 = load %sParserInfo*, %sParserInfo** %91, align 8
  %92 = getelementptr inbounds %sParserInfo, %sParserInfo* %info127, i32 0, i32 4
  %93 = load i8*, i8** %92, align 8
  %derefference_value128 = load i8, i8* %93, align 8
  %eqtmpX129 = icmp eq i8 %derefference_value128, 37
  br i1 %eqtmpX129, label %"cond_jump_elif_then3\0A", label %"cond_jump_elif4\0A"

"cond_jump_elif_then3\0A":                        ; preds = %"cond_jump_elif3\0A"
  %94 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %95 = bitcast i8* %94 to %sParserInfo**
  %info130 = load %sParserInfo*, %sParserInfo** %95, align 8
  %96 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %97 = bitcast i8* %96 to %sParserInfo**
  %info131 = load %sParserInfo*, %sParserInfo** %97, align 8
  %98 = getelementptr inbounds %sParserInfo, %sParserInfo* %info131, i32 0, i32 4
  %99 = load i8*, i8** %98, align 8
  %100 = ptrtoint i8* %99 to i64
  %addtmp132 = add nsw i64 %100, 1
  %intToPtr2133 = inttoptr i64 %addtmp132 to i8*
  %101 = getelementptr inbounds %sParserInfo, %sParserInfo* %info130, i32 0, i32 4
  store i8* %intToPtr2133, i8** %101, align 8
  %102 = ptrtoint i8* %intToPtr2133 to i64
  %subtmp134 = sub nsw i64 %102, 1
  %IntTOPtr4b135 = inttoptr i64 %subtmp134 to i8*
  %103 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %104 = bitcast i8* %103 to %sParserInfo**
  %info136 = load %sParserInfo*, %sParserInfo** %104, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info136)
  %right137 = alloca %sCLNode*
  %105 = bitcast %sCLNode** %right137 to i8*
  store i8* %105, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right137, align 8
  %right138 = load %sCLNode*, %sCLNode** %right137, align 8
  %106 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %107 = bitcast i8* %106 to %sParserInfo**
  %info139 = load %sParserInfo*, %sParserInfo** %107, align 8
  %108 = call i1 @expression_node(%sCLNode** %right137, %sParserInfo* %info139)
  %LOGICAL_DIANEAL140 = icmp eq i1 %108, false
  br i1 %LOGICAL_DIANEAL140, label %cond_jump_then141, label %cond_end142

"cond_jump_elif4\0A":                             ; preds = %"cond_jump_elif3\0A"
  %109 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %110 = bitcast i8* %109 to %sParserInfo**
  %info153 = load %sParserInfo*, %sParserInfo** %110, align 8
  %111 = getelementptr inbounds %sParserInfo, %sParserInfo* %info153, i32 0, i32 4
  %112 = load i8*, i8** %111, align 8
  %derefference_value154 = load i8, i8* %112, align 8
  %eqtmpX155 = icmp eq i8 %derefference_value154, 92
  store i1 %eqtmpX155, i1* %andand_result_var, align 1
  br i1 %eqtmpX155, label %cond_jump_then156, label %cond_jump_end157

"cond_jump_elif_then4\0A":                        ; preds = %cond_jump_end157
  %113 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %114 = bitcast i8* %113 to %sParserInfo**
  %info165 = load %sParserInfo*, %sParserInfo** %114, align 8
  %115 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %116 = bitcast i8* %115 to %sParserInfo**
  %info166 = load %sParserInfo*, %sParserInfo** %116, align 8
  %117 = getelementptr inbounds %sParserInfo, %sParserInfo* %info166, i32 0, i32 4
  %118 = load i8*, i8** %117, align 8
  %119 = ptrtoint i8* %118 to i64
  %addtmp167 = add nsw i64 %119, 2
  %intToPtr2168 = inttoptr i64 %addtmp167 to i8*
  %120 = getelementptr inbounds %sParserInfo, %sParserInfo* %info165, i32 0, i32 4
  store i8* %intToPtr2168, i8** %120, align 8
  %121 = ptrtoint i8* %intToPtr2168 to i64
  %subtmp169 = sub nsw i64 %121, 2
  %IntTOPtr4b170 = inttoptr i64 %subtmp169 to i8*
  %122 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %123 = bitcast i8* %122 to %sParserInfo**
  %info171 = load %sParserInfo*, %sParserInfo** %123, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info171)
  %right172 = alloca %sCLNode*
  %124 = bitcast %sCLNode** %right172 to i8*
  store i8* %124, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right172, align 8
  %right173 = load %sCLNode*, %sCLNode** %right172, align 8
  %125 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %126 = bitcast i8* %125 to %sParserInfo**
  %info174 = load %sParserInfo*, %sParserInfo** %126, align 8
  %127 = call i1 @expression_node(%sCLNode** %right172, %sParserInfo* %info174)
  %LOGICAL_DIANEAL175 = icmp eq i1 %127, false
  br i1 %LOGICAL_DIANEAL175, label %cond_jump_then176, label %cond_end177

cond_else_block:                                  ; preds = %cond_jump_end157
  br label %cond_end_block

cond_end15:                                       ; preds = %after_break, %cond_end181, %cond_end146, %cond_end120, %cond_end85, %cond_end59, %cond_end27
  br label %loop_top_block

cond_jump_then22:                                 ; preds = %cond_jump_then14
  %128 = bitcast [8192 x i8*]* %lvtable to i8*
  %129 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %128, i64 65536)
  ret i1 false

cond_end23:                                       ; preds = %cond_jump_then14
  %right24 = load %sCLNode*, %sCLNode** %right, align 8
  %eqtmpX25 = icmp eq %sCLNode* %right24, null
  br i1 %eqtmpX25, label %cond_jump_then26, label %cond_end27

cond_jump_then26:                                 ; preds = %cond_end23
  %130 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %131 = bitcast i8* %130 to %sParserInfo**
  %info28 = load %sParserInfo*, %sParserInfo** %131, align 8
  call void @parser_err_msg(%sParserInfo* %info28, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.60, i32 0, i32 0))
  br label %cond_end27

cond_end27:                                       ; preds = %cond_jump_then26, %cond_end23
  %132 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %133 = bitcast i8* %132 to %sCLNode***
  %node29 = load %sCLNode**, %sCLNode*** %133, align 8
  %134 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %135 = bitcast i8* %134 to %sCLNode***
  %node30 = load %sCLNode**, %sCLNode*** %135, align 8
  %derefference_value31 = load %sCLNode*, %sCLNode** %node30, align 8
  %right32 = load %sCLNode*, %sCLNode** %right, align 8
  %136 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %137 = bitcast i8* %136 to %sParserInfo**
  %info33 = load %sParserInfo*, %sParserInfo** %137, align 8
  %138 = call %sCLNode* @sNodeTree_create_mult(%sCLNode* %derefference_value31, %sCLNode* %right32, %sParserInfo* %info33)
  store %sCLNode* %138, %sCLNode** %node29, align 8
  br label %cond_end15

cond_jump_then37:                                 ; preds = %"cond_jump_elif0\0A"
  %139 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %140 = bitcast i8* %139 to %sParserInfo**
  %info38 = load %sParserInfo*, %sParserInfo** %140, align 8
  %141 = getelementptr inbounds %sParserInfo, %sParserInfo* %info38, i32 0, i32 4
  %142 = load i8*, i8** %141, align 8
  %143 = ptrtoint i8* %142 to i64
  %addtmp39 = add nsw i64 %143, 1
  %intToPtr240 = inttoptr i64 %addtmp39 to i8*
  %derefference_value41 = load i8, i8* %intToPtr240, align 8
  %eqtmpX42 = icmp eq i8 %derefference_value41, 42
  %andand = and i1 %eqtmpX36, %eqtmpX42
  store i1 %andand, i1* %andand_result_var, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then37, %"cond_jump_elif0\0A"
  %andand_result_value = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value, label %"cond_jump_elif_then0\0A", label %"cond_jump_elif1\0A"

cond_jump_then54:                                 ; preds = %"cond_jump_elif_then0\0A"
  %144 = bitcast [8192 x i8*]* %lvtable to i8*
  %145 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %144, i64 65536)
  ret i1 false

cond_end55:                                       ; preds = %"cond_jump_elif_then0\0A"
  %right56 = load %sCLNode*, %sCLNode** %right50, align 8
  %eqtmpX57 = icmp eq %sCLNode* %right56, null
  br i1 %eqtmpX57, label %cond_jump_then58, label %cond_end59

cond_jump_then58:                                 ; preds = %cond_end55
  %146 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %147 = bitcast i8* %146 to %sParserInfo**
  %info60 = load %sParserInfo*, %sParserInfo** %147, align 8
  call void @parser_err_msg(%sParserInfo* %info60, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_string.61, i32 0, i32 0))
  br label %cond_end59

cond_end59:                                       ; preds = %cond_jump_then58, %cond_end55
  %148 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %149 = bitcast i8* %148 to %sCLNode***
  %node61 = load %sCLNode**, %sCLNode*** %149, align 8
  %150 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %151 = bitcast i8* %150 to %sCLNode***
  %node62 = load %sCLNode**, %sCLNode*** %151, align 8
  %derefference_value63 = load %sCLNode*, %sCLNode** %node62, align 8
  %right64 = load %sCLNode*, %sCLNode** %right50, align 8
  %152 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %153 = bitcast i8* %152 to %sParserInfo**
  %info65 = load %sParserInfo*, %sParserInfo** %153, align 8
  %154 = call %sCLNode* @sNodeTree_create_primitive_mult(%sCLNode* %derefference_value63, %sCLNode* %right64, %sParserInfo* %info65)
  store %sCLNode* %154, %sCLNode** %node61, align 8
  br label %cond_end15

cond_jump_then80:                                 ; preds = %"cond_jump_elif_then1\0A"
  %155 = bitcast [8192 x i8*]* %lvtable to i8*
  %156 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %155, i64 65536)
  ret i1 false

cond_end81:                                       ; preds = %"cond_jump_elif_then1\0A"
  %right82 = load %sCLNode*, %sCLNode** %right76, align 8
  %eqtmpX83 = icmp eq %sCLNode* %right82, null
  br i1 %eqtmpX83, label %cond_jump_then84, label %cond_end85

cond_jump_then84:                                 ; preds = %cond_end81
  %157 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %158 = bitcast i8* %157 to %sParserInfo**
  %info86 = load %sParserInfo*, %sParserInfo** %158, align 8
  call void @parser_err_msg(%sParserInfo* %info86, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.62, i32 0, i32 0))
  br label %cond_end85

cond_end85:                                       ; preds = %cond_jump_then84, %cond_end81
  %159 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %160 = bitcast i8* %159 to %sCLNode***
  %node87 = load %sCLNode**, %sCLNode*** %160, align 8
  %161 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %162 = bitcast i8* %161 to %sCLNode***
  %node88 = load %sCLNode**, %sCLNode*** %162, align 8
  %derefference_value89 = load %sCLNode*, %sCLNode** %node88, align 8
  %right90 = load %sCLNode*, %sCLNode** %right76, align 8
  %163 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %164 = bitcast i8* %163 to %sParserInfo**
  %info91 = load %sParserInfo*, %sParserInfo** %164, align 8
  %165 = call %sCLNode* @sNodeTree_create_div(%sCLNode* %derefference_value89, %sCLNode* %right90, %sParserInfo* %info91)
  store %sCLNode* %165, %sCLNode** %node87, align 8
  br label %cond_end15

cond_jump_then95:                                 ; preds = %"cond_jump_elif2\0A"
  %166 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %167 = bitcast i8* %166 to %sParserInfo**
  %info97 = load %sParserInfo*, %sParserInfo** %167, align 8
  %168 = getelementptr inbounds %sParserInfo, %sParserInfo* %info97, i32 0, i32 4
  %169 = load i8*, i8** %168, align 8
  %170 = ptrtoint i8* %169 to i64
  %addtmp98 = add nsw i64 %170, 1
  %intToPtr299 = inttoptr i64 %addtmp98 to i8*
  %derefference_value100 = load i8, i8* %intToPtr299, align 8
  %eqtmpX101 = icmp eq i8 %derefference_value100, 47
  %andand102 = and i1 %eqtmpX94, %eqtmpX101
  store i1 %andand102, i1* %andand_result_var, align 1
  br label %cond_jump_end96

cond_jump_end96:                                  ; preds = %cond_jump_then95, %"cond_jump_elif2\0A"
  %andand_result_value103 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value103, label %"cond_jump_elif_then2\0A", label %"cond_jump_elif3\0A"

cond_jump_then115:                                ; preds = %"cond_jump_elif_then2\0A"
  %171 = bitcast [8192 x i8*]* %lvtable to i8*
  %172 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %171, i64 65536)
  ret i1 false

cond_end116:                                      ; preds = %"cond_jump_elif_then2\0A"
  %right117 = load %sCLNode*, %sCLNode** %right111, align 8
  %eqtmpX118 = icmp eq %sCLNode* %right117, null
  br i1 %eqtmpX118, label %cond_jump_then119, label %cond_end120

cond_jump_then119:                                ; preds = %cond_end116
  %173 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %174 = bitcast i8* %173 to %sParserInfo**
  %info121 = load %sParserInfo*, %sParserInfo** %174, align 8
  call void @parser_err_msg(%sParserInfo* %info121, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_string.63, i32 0, i32 0))
  br label %cond_end120

cond_end120:                                      ; preds = %cond_jump_then119, %cond_end116
  %175 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %176 = bitcast i8* %175 to %sCLNode***
  %node122 = load %sCLNode**, %sCLNode*** %176, align 8
  %177 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %178 = bitcast i8* %177 to %sCLNode***
  %node123 = load %sCLNode**, %sCLNode*** %178, align 8
  %derefference_value124 = load %sCLNode*, %sCLNode** %node123, align 8
  %right125 = load %sCLNode*, %sCLNode** %right111, align 8
  %179 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %180 = bitcast i8* %179 to %sParserInfo**
  %info126 = load %sParserInfo*, %sParserInfo** %180, align 8
  %181 = call %sCLNode* @sNodeTree_create_primitive_div(%sCLNode* %derefference_value124, %sCLNode* %right125, %sParserInfo* %info126)
  store %sCLNode* %181, %sCLNode** %node122, align 8
  br label %cond_end15

cond_jump_then141:                                ; preds = %"cond_jump_elif_then3\0A"
  %182 = bitcast [8192 x i8*]* %lvtable to i8*
  %183 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %182, i64 65536)
  ret i1 false

cond_end142:                                      ; preds = %"cond_jump_elif_then3\0A"
  %right143 = load %sCLNode*, %sCLNode** %right137, align 8
  %eqtmpX144 = icmp eq %sCLNode* %right143, null
  br i1 %eqtmpX144, label %cond_jump_then145, label %cond_end146

cond_jump_then145:                                ; preds = %cond_end142
  %184 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %185 = bitcast i8* %184 to %sParserInfo**
  %info147 = load %sParserInfo*, %sParserInfo** %185, align 8
  call void @parser_err_msg(%sParserInfo* %info147, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.64, i32 0, i32 0))
  br label %cond_end146

cond_end146:                                      ; preds = %cond_jump_then145, %cond_end142
  %186 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %187 = bitcast i8* %186 to %sCLNode***
  %node148 = load %sCLNode**, %sCLNode*** %187, align 8
  %188 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %189 = bitcast i8* %188 to %sCLNode***
  %node149 = load %sCLNode**, %sCLNode*** %189, align 8
  %derefference_value150 = load %sCLNode*, %sCLNode** %node149, align 8
  %right151 = load %sCLNode*, %sCLNode** %right137, align 8
  %190 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %191 = bitcast i8* %190 to %sParserInfo**
  %info152 = load %sParserInfo*, %sParserInfo** %191, align 8
  %192 = call %sCLNode* @sNodeTree_create_mod(%sCLNode* %derefference_value150, %sCLNode* %right151, %sParserInfo* %info152)
  store %sCLNode* %192, %sCLNode** %node148, align 8
  br label %cond_end15

cond_jump_then156:                                ; preds = %"cond_jump_elif4\0A"
  %193 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %194 = bitcast i8* %193 to %sParserInfo**
  %info158 = load %sParserInfo*, %sParserInfo** %194, align 8
  %195 = getelementptr inbounds %sParserInfo, %sParserInfo* %info158, i32 0, i32 4
  %196 = load i8*, i8** %195, align 8
  %197 = ptrtoint i8* %196 to i64
  %addtmp159 = add nsw i64 %197, 1
  %intToPtr2160 = inttoptr i64 %addtmp159 to i8*
  %derefference_value161 = load i8, i8* %intToPtr2160, align 8
  %eqtmpX162 = icmp eq i8 %derefference_value161, 37
  %andand163 = and i1 %eqtmpX155, %eqtmpX162
  store i1 %andand163, i1* %andand_result_var, align 1
  br label %cond_jump_end157

cond_jump_end157:                                 ; preds = %cond_jump_then156, %"cond_jump_elif4\0A"
  %andand_result_value164 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value164, label %"cond_jump_elif_then4\0A", label %cond_else_block

cond_jump_then176:                                ; preds = %"cond_jump_elif_then4\0A"
  %198 = bitcast [8192 x i8*]* %lvtable to i8*
  %199 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %198, i64 65536)
  ret i1 false

cond_end177:                                      ; preds = %"cond_jump_elif_then4\0A"
  %right178 = load %sCLNode*, %sCLNode** %right172, align 8
  %eqtmpX179 = icmp eq %sCLNode* %right178, null
  br i1 %eqtmpX179, label %cond_jump_then180, label %cond_end181

cond_jump_then180:                                ; preds = %cond_end177
  %200 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %201 = bitcast i8* %200 to %sParserInfo**
  %info182 = load %sParserInfo*, %sParserInfo** %201, align 8
  call void @parser_err_msg(%sParserInfo* %info182, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_string.65, i32 0, i32 0))
  br label %cond_end181

cond_end181:                                      ; preds = %cond_jump_then180, %cond_end177
  %202 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %203 = bitcast i8* %202 to %sCLNode***
  %node183 = load %sCLNode**, %sCLNode*** %203, align 8
  %204 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %205 = bitcast i8* %204 to %sCLNode***
  %node184 = load %sCLNode**, %sCLNode*** %205, align 8
  %derefference_value185 = load %sCLNode*, %sCLNode** %node184, align 8
  %right186 = load %sCLNode*, %sCLNode** %right172, align 8
  %206 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %207 = bitcast i8* %206 to %sParserInfo**
  %info187 = load %sParserInfo*, %sParserInfo** %207, align 8
  %208 = call %sCLNode* @sNodeTree_create_primitive_mod(%sCLNode* %derefference_value185, %sCLNode* %right186, %sParserInfo* %info187)
  store %sCLNode* %208, %sCLNode** %node183, align 8
  br label %cond_end15

after_break:                                      ; No predecessors!
  br label %cond_end15
}

define internal i1 @expression_plus_minus(%sCLNode** %node, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %node2 = alloca %sCLNode**
  store %sCLNode** %node, %sCLNode*** %node2, align 8
  %2 = bitcast %sCLNode*** %node2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %node4 = load %sCLNode**, %sCLNode*** %node2, align 8
  %info5 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %4 = call i1 @expression_mult_div(%sCLNode** %node4, %sParserInfo* %info5)
  %LOGICAL_DIANEAL = icmp eq i1 %4, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %5 = bitcast [8192 x i8*]* %lvtable to i8*
  %6 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %5, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %entry
  %node6 = load %sCLNode**, %sCLNode*** %node2, align 8
  %derefference_value = load %sCLNode*, %sCLNode** %node6, align 8
  %eqtmpX = icmp eq %sCLNode* %derefference_value, null
  br i1 %eqtmpX, label %cond_jump_then7, label %cond_end8

cond_jump_then7:                                  ; preds = %cond_end
  %7 = bitcast [8192 x i8*]* %lvtable to i8*
  %8 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %7, i64 65536)
  ret i1 true

cond_end8:                                        ; preds = %cond_end
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end27, %cond_end8
  %info9 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %9 = getelementptr inbounds %sParserInfo, %sParserInfo* %info9, i32 0, i32 4
  %10 = load i8*, i8** %9, align 8
  %derefference_value10 = load i8, i8* %10, align 8
  %11 = icmp ne i8 %derefference_value10, 0
  br i1 %11, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %13 = bitcast i8* %12 to %sParserInfo**
  %info11 = load %sParserInfo*, %sParserInfo** %13, align 8
  %14 = getelementptr inbounds %sParserInfo, %sParserInfo* %info11, i32 0, i32 4
  %15 = load i8*, i8** %14, align 8
  %derefference_value12 = load i8, i8* %15, align 8
  %eqtmpX13 = icmp eq i8 %derefference_value12, 43
  store i1 %eqtmpX13, i1* %andand_result_var, align 1
  br i1 %eqtmpX13, label %cond_jump_then14, label %cond_jump_end

cond_end_block:                                   ; preds = %cond_else_block, %loop_top_block
  %16 = bitcast [8192 x i8*]* %lvtable to i8*
  %17 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %16, i64 65536)
  ret i1 true

cond_jump_then14:                                 ; preds = %cond_then_block
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %19 = bitcast i8* %18 to %sParserInfo**
  %info15 = load %sParserInfo*, %sParserInfo** %19, align 8
  %20 = getelementptr inbounds %sParserInfo, %sParserInfo* %info15, i32 0, i32 4
  %21 = load i8*, i8** %20, align 8
  %22 = ptrtoint i8* %21 to i64
  %addtmp = add nsw i64 %22, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %derefference_value16 = load i8, i8* %intToPtr2, align 8
  %noteqtmp = icmp ne i8 %derefference_value16, 61
  %andand = and i1 %eqtmpX13, %noteqtmp
  store i1 %andand, i1* %andand_result_var, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then14, %cond_then_block
  %andand_result_value = load i1, i1* %andand_result_var, align 1
  store i1 %andand_result_value, i1* %andand_result_var, align 1
  br i1 %andand_result_value, label %cond_jump_then17, label %cond_jump_end18

cond_jump_then17:                                 ; preds = %cond_jump_end
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %24 = bitcast i8* %23 to %sParserInfo**
  %info19 = load %sParserInfo*, %sParserInfo** %24, align 8
  %25 = getelementptr inbounds %sParserInfo, %sParserInfo* %info19, i32 0, i32 4
  %26 = load i8*, i8** %25, align 8
  %27 = ptrtoint i8* %26 to i64
  %addtmp20 = add nsw i64 %27, 1
  %intToPtr221 = inttoptr i64 %addtmp20 to i8*
  %derefference_value22 = load i8, i8* %intToPtr221, align 8
  %noteqtmp23 = icmp ne i8 %derefference_value22, 43
  %andand24 = and i1 %andand_result_value, %noteqtmp23
  store i1 %andand24, i1* %andand_result_var, align 1
  br label %cond_jump_end18

cond_jump_end18:                                  ; preds = %cond_jump_then17, %cond_jump_end
  %andand_result_value25 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value25, label %cond_jump_then26, label %"cond_jump_elif0\0A"

cond_jump_then26:                                 ; preds = %cond_jump_end18
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %29 = bitcast i8* %28 to %sParserInfo**
  %info28 = load %sParserInfo*, %sParserInfo** %29, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %31 = bitcast i8* %30 to %sParserInfo**
  %info29 = load %sParserInfo*, %sParserInfo** %31, align 8
  %32 = getelementptr inbounds %sParserInfo, %sParserInfo* %info29, i32 0, i32 4
  %33 = load i8*, i8** %32, align 8
  %34 = ptrtoint i8* %33 to i64
  %addtmp30 = add nsw i64 %34, 1
  %intToPtr231 = inttoptr i64 %addtmp30 to i8*
  %35 = getelementptr inbounds %sParserInfo, %sParserInfo* %info28, i32 0, i32 4
  store i8* %intToPtr231, i8** %35, align 8
  %36 = ptrtoint i8* %intToPtr231 to i64
  %subtmp = sub nsw i64 %36, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %38 = bitcast i8* %37 to %sParserInfo**
  %info32 = load %sParserInfo*, %sParserInfo** %38, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info32)
  %right = alloca %sCLNode*
  %39 = bitcast %sCLNode** %right to i8*
  store i8* %39, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right, align 8
  %right33 = load %sCLNode*, %sCLNode** %right, align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %41 = bitcast i8* %40 to %sParserInfo**
  %info34 = load %sParserInfo*, %sParserInfo** %41, align 8
  %42 = call i1 @expression_mult_div(%sCLNode** %right, %sParserInfo* %info34)
  %LOGICAL_DIANEAL35 = icmp eq i1 %42, false
  br i1 %LOGICAL_DIANEAL35, label %cond_jump_then36, label %cond_end37

"cond_jump_elif0\0A":                             ; preds = %cond_jump_end18
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %44 = bitcast i8* %43 to %sParserInfo**
  %info48 = load %sParserInfo*, %sParserInfo** %44, align 8
  %45 = getelementptr inbounds %sParserInfo, %sParserInfo* %info48, i32 0, i32 4
  %46 = load i8*, i8** %45, align 8
  %derefference_value49 = load i8, i8* %46, align 8
  %eqtmpX50 = icmp eq i8 %derefference_value49, 92
  store i1 %eqtmpX50, i1* %andand_result_var, align 1
  br i1 %eqtmpX50, label %cond_jump_then51, label %cond_jump_end52

"cond_jump_elif_then0\0A":                        ; preds = %cond_jump_end52
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %48 = bitcast i8* %47 to %sParserInfo**
  %info60 = load %sParserInfo*, %sParserInfo** %48, align 8
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %50 = bitcast i8* %49 to %sParserInfo**
  %info61 = load %sParserInfo*, %sParserInfo** %50, align 8
  %51 = getelementptr inbounds %sParserInfo, %sParserInfo* %info61, i32 0, i32 4
  %52 = load i8*, i8** %51, align 8
  %53 = ptrtoint i8* %52 to i64
  %addtmp62 = add nsw i64 %53, 2
  %intToPtr263 = inttoptr i64 %addtmp62 to i8*
  %54 = getelementptr inbounds %sParserInfo, %sParserInfo* %info60, i32 0, i32 4
  store i8* %intToPtr263, i8** %54, align 8
  %55 = ptrtoint i8* %intToPtr263 to i64
  %subtmp64 = sub nsw i64 %55, 2
  %IntTOPtr4b65 = inttoptr i64 %subtmp64 to i8*
  %56 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %57 = bitcast i8* %56 to %sParserInfo**
  %info66 = load %sParserInfo*, %sParserInfo** %57, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info66)
  %right67 = alloca %sCLNode*
  %58 = bitcast %sCLNode** %right67 to i8*
  store i8* %58, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right67, align 8
  %right68 = load %sCLNode*, %sCLNode** %right67, align 8
  %59 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %60 = bitcast i8* %59 to %sParserInfo**
  %info69 = load %sParserInfo*, %sParserInfo** %60, align 8
  %61 = call i1 @expression_mult_div(%sCLNode** %right67, %sParserInfo* %info69)
  %LOGICAL_DIANEAL70 = icmp eq i1 %61, false
  br i1 %LOGICAL_DIANEAL70, label %cond_jump_then71, label %cond_end72

"cond_jump_elif1\0A":                             ; preds = %cond_jump_end52
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %63 = bitcast i8* %62 to %sParserInfo**
  %info83 = load %sParserInfo*, %sParserInfo** %63, align 8
  %64 = getelementptr inbounds %sParserInfo, %sParserInfo* %info83, i32 0, i32 4
  %65 = load i8*, i8** %64, align 8
  %derefference_value84 = load i8, i8* %65, align 8
  %eqtmpX85 = icmp eq i8 %derefference_value84, 45
  store i1 %eqtmpX85, i1* %andand_result_var, align 1
  br i1 %eqtmpX85, label %cond_jump_then86, label %cond_jump_end87

"cond_jump_elif_then1\0A":                        ; preds = %cond_jump_end96
  %66 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %67 = bitcast i8* %66 to %sParserInfo**
  %info104 = load %sParserInfo*, %sParserInfo** %67, align 8
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %69 = bitcast i8* %68 to %sParserInfo**
  %info105 = load %sParserInfo*, %sParserInfo** %69, align 8
  %70 = getelementptr inbounds %sParserInfo, %sParserInfo* %info105, i32 0, i32 4
  %71 = load i8*, i8** %70, align 8
  %72 = ptrtoint i8* %71 to i64
  %addtmp106 = add nsw i64 %72, 1
  %intToPtr2107 = inttoptr i64 %addtmp106 to i8*
  %73 = getelementptr inbounds %sParserInfo, %sParserInfo* %info104, i32 0, i32 4
  store i8* %intToPtr2107, i8** %73, align 8
  %74 = ptrtoint i8* %intToPtr2107 to i64
  %subtmp108 = sub nsw i64 %74, 1
  %IntTOPtr4b109 = inttoptr i64 %subtmp108 to i8*
  %75 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %76 = bitcast i8* %75 to %sParserInfo**
  %info110 = load %sParserInfo*, %sParserInfo** %76, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info110)
  %right111 = alloca %sCLNode*
  %77 = bitcast %sCLNode** %right111 to i8*
  store i8* %77, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right111, align 8
  %right112 = load %sCLNode*, %sCLNode** %right111, align 8
  %78 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %79 = bitcast i8* %78 to %sParserInfo**
  %info113 = load %sParserInfo*, %sParserInfo** %79, align 8
  %80 = call i1 @expression_mult_div(%sCLNode** %right111, %sParserInfo* %info113)
  %LOGICAL_DIANEAL114 = icmp eq i1 %80, false
  br i1 %LOGICAL_DIANEAL114, label %cond_jump_then115, label %cond_end116

"cond_jump_elif2\0A":                             ; preds = %cond_jump_end96
  %81 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %82 = bitcast i8* %81 to %sParserInfo**
  %info127 = load %sParserInfo*, %sParserInfo** %82, align 8
  %83 = getelementptr inbounds %sParserInfo, %sParserInfo* %info127, i32 0, i32 4
  %84 = load i8*, i8** %83, align 8
  %derefference_value128 = load i8, i8* %84, align 8
  %eqtmpX129 = icmp eq i8 %derefference_value128, 92
  store i1 %eqtmpX129, i1* %andand_result_var, align 1
  br i1 %eqtmpX129, label %cond_jump_then130, label %cond_jump_end131

"cond_jump_elif_then2\0A":                        ; preds = %cond_jump_end131
  %85 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %86 = bitcast i8* %85 to %sParserInfo**
  %info139 = load %sParserInfo*, %sParserInfo** %86, align 8
  %87 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %88 = bitcast i8* %87 to %sParserInfo**
  %info140 = load %sParserInfo*, %sParserInfo** %88, align 8
  %89 = getelementptr inbounds %sParserInfo, %sParserInfo* %info140, i32 0, i32 4
  %90 = load i8*, i8** %89, align 8
  %91 = ptrtoint i8* %90 to i64
  %addtmp141 = add nsw i64 %91, 2
  %intToPtr2142 = inttoptr i64 %addtmp141 to i8*
  %92 = getelementptr inbounds %sParserInfo, %sParserInfo* %info139, i32 0, i32 4
  store i8* %intToPtr2142, i8** %92, align 8
  %93 = ptrtoint i8* %intToPtr2142 to i64
  %subtmp143 = sub nsw i64 %93, 2
  %IntTOPtr4b144 = inttoptr i64 %subtmp143 to i8*
  %94 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %95 = bitcast i8* %94 to %sParserInfo**
  %info145 = load %sParserInfo*, %sParserInfo** %95, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info145)
  %right146 = alloca %sCLNode*
  %96 = bitcast %sCLNode** %right146 to i8*
  store i8* %96, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right146, align 8
  %right147 = load %sCLNode*, %sCLNode** %right146, align 8
  %97 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %98 = bitcast i8* %97 to %sParserInfo**
  %info148 = load %sParserInfo*, %sParserInfo** %98, align 8
  %99 = call i1 @expression_mult_div(%sCLNode** %right146, %sParserInfo* %info148)
  %LOGICAL_DIANEAL149 = icmp eq i1 %99, false
  br i1 %LOGICAL_DIANEAL149, label %cond_jump_then150, label %cond_end151

cond_else_block:                                  ; preds = %cond_jump_end131
  br label %cond_end_block

cond_end27:                                       ; preds = %after_break, %cond_end155, %cond_end120, %cond_end76, %cond_end41
  br label %loop_top_block

cond_jump_then36:                                 ; preds = %cond_jump_then26
  %100 = bitcast [8192 x i8*]* %lvtable to i8*
  %101 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %100, i64 65536)
  ret i1 false

cond_end37:                                       ; preds = %cond_jump_then26
  %right38 = load %sCLNode*, %sCLNode** %right, align 8
  %eqtmpX39 = icmp eq %sCLNode* %right38, null
  br i1 %eqtmpX39, label %cond_jump_then40, label %cond_end41

cond_jump_then40:                                 ; preds = %cond_end37
  %102 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %103 = bitcast i8* %102 to %sParserInfo**
  %info42 = load %sParserInfo*, %sParserInfo** %103, align 8
  call void @parser_err_msg(%sParserInfo* %info42, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.66, i32 0, i32 0))
  br label %cond_end41

cond_end41:                                       ; preds = %cond_jump_then40, %cond_end37
  %104 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %105 = bitcast i8* %104 to %sCLNode***
  %node43 = load %sCLNode**, %sCLNode*** %105, align 8
  %106 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %107 = bitcast i8* %106 to %sCLNode***
  %node44 = load %sCLNode**, %sCLNode*** %107, align 8
  %derefference_value45 = load %sCLNode*, %sCLNode** %node44, align 8
  %right46 = load %sCLNode*, %sCLNode** %right, align 8
  %108 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %109 = bitcast i8* %108 to %sParserInfo**
  %info47 = load %sParserInfo*, %sParserInfo** %109, align 8
  %110 = call %sCLNode* @sNodeTree_create_plus(%sCLNode* %derefference_value45, %sCLNode* %right46, %sParserInfo* %info47)
  store %sCLNode* %110, %sCLNode** %node43, align 8
  br label %cond_end27

cond_jump_then51:                                 ; preds = %"cond_jump_elif0\0A"
  %111 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %112 = bitcast i8* %111 to %sParserInfo**
  %info53 = load %sParserInfo*, %sParserInfo** %112, align 8
  %113 = getelementptr inbounds %sParserInfo, %sParserInfo* %info53, i32 0, i32 4
  %114 = load i8*, i8** %113, align 8
  %115 = ptrtoint i8* %114 to i64
  %addtmp54 = add nsw i64 %115, 1
  %intToPtr255 = inttoptr i64 %addtmp54 to i8*
  %derefference_value56 = load i8, i8* %intToPtr255, align 8
  %eqtmpX57 = icmp eq i8 %derefference_value56, 43
  %andand58 = and i1 %eqtmpX50, %eqtmpX57
  store i1 %andand58, i1* %andand_result_var, align 1
  br label %cond_jump_end52

cond_jump_end52:                                  ; preds = %cond_jump_then51, %"cond_jump_elif0\0A"
  %andand_result_value59 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value59, label %"cond_jump_elif_then0\0A", label %"cond_jump_elif1\0A"

cond_jump_then71:                                 ; preds = %"cond_jump_elif_then0\0A"
  %116 = bitcast [8192 x i8*]* %lvtable to i8*
  %117 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %116, i64 65536)
  ret i1 false

cond_end72:                                       ; preds = %"cond_jump_elif_then0\0A"
  %right73 = load %sCLNode*, %sCLNode** %right67, align 8
  %eqtmpX74 = icmp eq %sCLNode* %right73, null
  br i1 %eqtmpX74, label %cond_jump_then75, label %cond_end76

cond_jump_then75:                                 ; preds = %cond_end72
  %118 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %119 = bitcast i8* %118 to %sParserInfo**
  %info77 = load %sParserInfo*, %sParserInfo** %119, align 8
  call void @parser_err_msg(%sParserInfo* %info77, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_string.67, i32 0, i32 0))
  br label %cond_end76

cond_end76:                                       ; preds = %cond_jump_then75, %cond_end72
  %120 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %121 = bitcast i8* %120 to %sCLNode***
  %node78 = load %sCLNode**, %sCLNode*** %121, align 8
  %122 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %123 = bitcast i8* %122 to %sCLNode***
  %node79 = load %sCLNode**, %sCLNode*** %123, align 8
  %derefference_value80 = load %sCLNode*, %sCLNode** %node79, align 8
  %right81 = load %sCLNode*, %sCLNode** %right67, align 8
  %124 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %125 = bitcast i8* %124 to %sParserInfo**
  %info82 = load %sParserInfo*, %sParserInfo** %125, align 8
  %126 = call %sCLNode* @sNodeTree_create_primitive_plus(%sCLNode* %derefference_value80, %sCLNode* %right81, %sParserInfo* %info82)
  store %sCLNode* %126, %sCLNode** %node78, align 8
  br label %cond_end27

cond_jump_then86:                                 ; preds = %"cond_jump_elif1\0A"
  %127 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %128 = bitcast i8* %127 to %sParserInfo**
  %info88 = load %sParserInfo*, %sParserInfo** %128, align 8
  %129 = getelementptr inbounds %sParserInfo, %sParserInfo* %info88, i32 0, i32 4
  %130 = load i8*, i8** %129, align 8
  %131 = ptrtoint i8* %130 to i64
  %addtmp89 = add nsw i64 %131, 1
  %intToPtr290 = inttoptr i64 %addtmp89 to i8*
  %derefference_value91 = load i8, i8* %intToPtr290, align 8
  %noteqtmp92 = icmp ne i8 %derefference_value91, 61
  %andand93 = and i1 %eqtmpX85, %noteqtmp92
  store i1 %andand93, i1* %andand_result_var, align 1
  br label %cond_jump_end87

cond_jump_end87:                                  ; preds = %cond_jump_then86, %"cond_jump_elif1\0A"
  %andand_result_value94 = load i1, i1* %andand_result_var, align 1
  store i1 %andand_result_value94, i1* %andand_result_var, align 1
  br i1 %andand_result_value94, label %cond_jump_then95, label %cond_jump_end96

cond_jump_then95:                                 ; preds = %cond_jump_end87
  %132 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %133 = bitcast i8* %132 to %sParserInfo**
  %info97 = load %sParserInfo*, %sParserInfo** %133, align 8
  %134 = getelementptr inbounds %sParserInfo, %sParserInfo* %info97, i32 0, i32 4
  %135 = load i8*, i8** %134, align 8
  %136 = ptrtoint i8* %135 to i64
  %addtmp98 = add nsw i64 %136, 1
  %intToPtr299 = inttoptr i64 %addtmp98 to i8*
  %derefference_value100 = load i8, i8* %intToPtr299, align 8
  %noteqtmp101 = icmp ne i8 %derefference_value100, 45
  %andand102 = and i1 %andand_result_value94, %noteqtmp101
  store i1 %andand102, i1* %andand_result_var, align 1
  br label %cond_jump_end96

cond_jump_end96:                                  ; preds = %cond_jump_then95, %cond_jump_end87
  %andand_result_value103 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value103, label %"cond_jump_elif_then1\0A", label %"cond_jump_elif2\0A"

cond_jump_then115:                                ; preds = %"cond_jump_elif_then1\0A"
  %137 = bitcast [8192 x i8*]* %lvtable to i8*
  %138 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %137, i64 65536)
  ret i1 false

cond_end116:                                      ; preds = %"cond_jump_elif_then1\0A"
  %right117 = load %sCLNode*, %sCLNode** %right111, align 8
  %eqtmpX118 = icmp eq %sCLNode* %right117, null
  br i1 %eqtmpX118, label %cond_jump_then119, label %cond_end120

cond_jump_then119:                                ; preds = %cond_end116
  %139 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %140 = bitcast i8* %139 to %sParserInfo**
  %info121 = load %sParserInfo*, %sParserInfo** %140, align 8
  call void @parser_err_msg(%sParserInfo* %info121, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.68, i32 0, i32 0))
  br label %cond_end120

cond_end120:                                      ; preds = %cond_jump_then119, %cond_end116
  %141 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %142 = bitcast i8* %141 to %sCLNode***
  %node122 = load %sCLNode**, %sCLNode*** %142, align 8
  %143 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %144 = bitcast i8* %143 to %sCLNode***
  %node123 = load %sCLNode**, %sCLNode*** %144, align 8
  %derefference_value124 = load %sCLNode*, %sCLNode** %node123, align 8
  %right125 = load %sCLNode*, %sCLNode** %right111, align 8
  %145 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %146 = bitcast i8* %145 to %sParserInfo**
  %info126 = load %sParserInfo*, %sParserInfo** %146, align 8
  %147 = call %sCLNode* @sNodeTree_create_minus(%sCLNode* %derefference_value124, %sCLNode* %right125, %sParserInfo* %info126)
  store %sCLNode* %147, %sCLNode** %node122, align 8
  br label %cond_end27

cond_jump_then130:                                ; preds = %"cond_jump_elif2\0A"
  %148 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %149 = bitcast i8* %148 to %sParserInfo**
  %info132 = load %sParserInfo*, %sParserInfo** %149, align 8
  %150 = getelementptr inbounds %sParserInfo, %sParserInfo* %info132, i32 0, i32 4
  %151 = load i8*, i8** %150, align 8
  %152 = ptrtoint i8* %151 to i64
  %addtmp133 = add nsw i64 %152, 1
  %intToPtr2134 = inttoptr i64 %addtmp133 to i8*
  %derefference_value135 = load i8, i8* %intToPtr2134, align 8
  %eqtmpX136 = icmp eq i8 %derefference_value135, 45
  %andand137 = and i1 %eqtmpX129, %eqtmpX136
  store i1 %andand137, i1* %andand_result_var, align 1
  br label %cond_jump_end131

cond_jump_end131:                                 ; preds = %cond_jump_then130, %"cond_jump_elif2\0A"
  %andand_result_value138 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value138, label %"cond_jump_elif_then2\0A", label %cond_else_block

cond_jump_then150:                                ; preds = %"cond_jump_elif_then2\0A"
  %153 = bitcast [8192 x i8*]* %lvtable to i8*
  %154 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %153, i64 65536)
  ret i1 false

cond_end151:                                      ; preds = %"cond_jump_elif_then2\0A"
  %right152 = load %sCLNode*, %sCLNode** %right146, align 8
  %eqtmpX153 = icmp eq %sCLNode* %right152, null
  br i1 %eqtmpX153, label %cond_jump_then154, label %cond_end155

cond_jump_then154:                                ; preds = %cond_end151
  %155 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %156 = bitcast i8* %155 to %sParserInfo**
  %info156 = load %sParserInfo*, %sParserInfo** %156, align 8
  call void @parser_err_msg(%sParserInfo* %info156, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_string.69, i32 0, i32 0))
  br label %cond_end155

cond_end155:                                      ; preds = %cond_jump_then154, %cond_end151
  %157 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %158 = bitcast i8* %157 to %sCLNode***
  %node157 = load %sCLNode**, %sCLNode*** %158, align 8
  %159 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %160 = bitcast i8* %159 to %sCLNode***
  %node158 = load %sCLNode**, %sCLNode*** %160, align 8
  %derefference_value159 = load %sCLNode*, %sCLNode** %node158, align 8
  %right160 = load %sCLNode*, %sCLNode** %right146, align 8
  %161 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %162 = bitcast i8* %161 to %sParserInfo**
  %info161 = load %sParserInfo*, %sParserInfo** %162, align 8
  %163 = call %sCLNode* @sNodeTree_create_primitive_minus(%sCLNode* %derefference_value159, %sCLNode* %right160, %sParserInfo* %info161)
  store %sCLNode* %163, %sCLNode** %node157, align 8
  br label %cond_end27

after_break:                                      ; No predecessors!
  br label %cond_end27
}

define i1 @expression_comparison_operator(%sCLNode** %node, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %node2 = alloca %sCLNode**
  store %sCLNode** %node, %sCLNode*** %node2, align 8
  %2 = bitcast %sCLNode*** %node2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %node4 = load %sCLNode**, %sCLNode*** %node2, align 8
  %info5 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %4 = call i1 @expression_plus_minus(%sCLNode** %node4, %sParserInfo* %info5)
  %LOGICAL_DIANEAL = icmp eq i1 %4, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %5 = bitcast [8192 x i8*]* %lvtable to i8*
  %6 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %5, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %entry
  %node6 = load %sCLNode**, %sCLNode*** %node2, align 8
  %derefference_value = load %sCLNode*, %sCLNode** %node6, align 8
  %eqtmpX = icmp eq %sCLNode* %derefference_value, null
  br i1 %eqtmpX, label %cond_jump_then7, label %cond_end8

cond_jump_then7:                                  ; preds = %cond_end
  %7 = bitcast [8192 x i8*]* %lvtable to i8*
  %8 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %7, i64 65536)
  ret i1 true

cond_end8:                                        ; preds = %cond_end
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end19, %cond_end8
  %info9 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %9 = getelementptr inbounds %sParserInfo, %sParserInfo* %info9, i32 0, i32 4
  %10 = load i8*, i8** %9, align 8
  %derefference_value10 = load i8, i8* %10, align 8
  %11 = icmp ne i8 %derefference_value10, 0
  br i1 %11, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %13 = bitcast i8* %12 to %sParserInfo**
  %info11 = load %sParserInfo*, %sParserInfo** %13, align 8
  %14 = getelementptr inbounds %sParserInfo, %sParserInfo* %info11, i32 0, i32 4
  %15 = load i8*, i8** %14, align 8
  %derefference_value12 = load i8, i8* %15, align 8
  %eqtmpX13 = icmp eq i8 %derefference_value12, 62
  store i1 %eqtmpX13, i1* %andand_result_var, align 1
  br i1 %eqtmpX13, label %cond_jump_then14, label %cond_jump_end

cond_end_block:                                   ; preds = %cond_else_block, %loop_top_block
  %16 = bitcast [8192 x i8*]* %lvtable to i8*
  %17 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %16, i64 65536)
  ret i1 true

cond_jump_then14:                                 ; preds = %cond_then_block
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %19 = bitcast i8* %18 to %sParserInfo**
  %info15 = load %sParserInfo*, %sParserInfo** %19, align 8
  %20 = getelementptr inbounds %sParserInfo, %sParserInfo* %info15, i32 0, i32 4
  %21 = load i8*, i8** %20, align 8
  %22 = ptrtoint i8* %21 to i64
  %addtmp = add nsw i64 %22, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %derefference_value16 = load i8, i8* %intToPtr2, align 8
  %eqtmpX17 = icmp eq i8 %derefference_value16, 61
  %andand = and i1 %eqtmpX13, %eqtmpX17
  store i1 %andand, i1* %andand_result_var, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then14, %cond_then_block
  %andand_result_value = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value, label %cond_jump_then18, label %"cond_jump_elif0\0A"

cond_jump_then18:                                 ; preds = %cond_jump_end
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %24 = bitcast i8* %23 to %sParserInfo**
  %info20 = load %sParserInfo*, %sParserInfo** %24, align 8
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %26 = bitcast i8* %25 to %sParserInfo**
  %info21 = load %sParserInfo*, %sParserInfo** %26, align 8
  %27 = getelementptr inbounds %sParserInfo, %sParserInfo* %info21, i32 0, i32 4
  %28 = load i8*, i8** %27, align 8
  %29 = ptrtoint i8* %28 to i64
  %addtmp22 = add nsw i64 %29, 2
  %intToPtr223 = inttoptr i64 %addtmp22 to i8*
  %30 = getelementptr inbounds %sParserInfo, %sParserInfo* %info20, i32 0, i32 4
  store i8* %intToPtr223, i8** %30, align 8
  %31 = ptrtoint i8* %intToPtr223 to i64
  %subtmp = sub nsw i64 %31, 2
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %33 = bitcast i8* %32 to %sParserInfo**
  %info24 = load %sParserInfo*, %sParserInfo** %33, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info24)
  %right = alloca %sCLNode*
  %34 = bitcast %sCLNode** %right to i8*
  store i8* %34, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right, align 8
  %right25 = load %sCLNode*, %sCLNode** %right, align 8
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %36 = bitcast i8* %35 to %sParserInfo**
  %info26 = load %sParserInfo*, %sParserInfo** %36, align 8
  %37 = call i1 @expression_plus_minus(%sCLNode** %right, %sParserInfo* %info26)
  %LOGICAL_DIANEAL27 = icmp eq i1 %37, false
  br i1 %LOGICAL_DIANEAL27, label %cond_jump_then28, label %cond_end29

"cond_jump_elif0\0A":                             ; preds = %cond_jump_end
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %39 = bitcast i8* %38 to %sParserInfo**
  %info40 = load %sParserInfo*, %sParserInfo** %39, align 8
  %40 = getelementptr inbounds %sParserInfo, %sParserInfo* %info40, i32 0, i32 4
  %41 = load i8*, i8** %40, align 8
  %derefference_value41 = load i8, i8* %41, align 8
  %eqtmpX42 = icmp eq i8 %derefference_value41, 92
  store i1 %eqtmpX42, i1* %andand_result_var, align 1
  br i1 %eqtmpX42, label %cond_jump_then43, label %cond_jump_end44

"cond_jump_elif_then0\0A":                        ; preds = %cond_jump_end53
  %42 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %43 = bitcast i8* %42 to %sParserInfo**
  %info61 = load %sParserInfo*, %sParserInfo** %43, align 8
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %45 = bitcast i8* %44 to %sParserInfo**
  %info62 = load %sParserInfo*, %sParserInfo** %45, align 8
  %46 = getelementptr inbounds %sParserInfo, %sParserInfo* %info62, i32 0, i32 4
  %47 = load i8*, i8** %46, align 8
  %48 = ptrtoint i8* %47 to i64
  %addtmp63 = add nsw i64 %48, 3
  %intToPtr264 = inttoptr i64 %addtmp63 to i8*
  %49 = getelementptr inbounds %sParserInfo, %sParserInfo* %info61, i32 0, i32 4
  store i8* %intToPtr264, i8** %49, align 8
  %50 = ptrtoint i8* %intToPtr264 to i64
  %subtmp65 = sub nsw i64 %50, 3
  %IntTOPtr4b66 = inttoptr i64 %subtmp65 to i8*
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %52 = bitcast i8* %51 to %sParserInfo**
  %info67 = load %sParserInfo*, %sParserInfo** %52, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info67)
  %right68 = alloca %sCLNode*
  %53 = bitcast %sCLNode** %right68 to i8*
  store i8* %53, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right68, align 8
  %right69 = load %sCLNode*, %sCLNode** %right68, align 8
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %55 = bitcast i8* %54 to %sParserInfo**
  %info70 = load %sParserInfo*, %sParserInfo** %55, align 8
  %56 = call i1 @expression_plus_minus(%sCLNode** %right68, %sParserInfo* %info70)
  %LOGICAL_DIANEAL71 = icmp eq i1 %56, false
  br i1 %LOGICAL_DIANEAL71, label %cond_jump_then72, label %cond_end73

"cond_jump_elif1\0A":                             ; preds = %cond_jump_end53
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %58 = bitcast i8* %57 to %sParserInfo**
  %info84 = load %sParserInfo*, %sParserInfo** %58, align 8
  %59 = getelementptr inbounds %sParserInfo, %sParserInfo* %info84, i32 0, i32 4
  %60 = load i8*, i8** %59, align 8
  %derefference_value85 = load i8, i8* %60, align 8
  %eqtmpX86 = icmp eq i8 %derefference_value85, 60
  store i1 %eqtmpX86, i1* %andand_result_var, align 1
  br i1 %eqtmpX86, label %cond_jump_then87, label %cond_jump_end88

"cond_jump_elif_then1\0A":                        ; preds = %cond_jump_end88
  %61 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %62 = bitcast i8* %61 to %sParserInfo**
  %info96 = load %sParserInfo*, %sParserInfo** %62, align 8
  %63 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %64 = bitcast i8* %63 to %sParserInfo**
  %info97 = load %sParserInfo*, %sParserInfo** %64, align 8
  %65 = getelementptr inbounds %sParserInfo, %sParserInfo* %info97, i32 0, i32 4
  %66 = load i8*, i8** %65, align 8
  %67 = ptrtoint i8* %66 to i64
  %addtmp98 = add nsw i64 %67, 2
  %intToPtr299 = inttoptr i64 %addtmp98 to i8*
  %68 = getelementptr inbounds %sParserInfo, %sParserInfo* %info96, i32 0, i32 4
  store i8* %intToPtr299, i8** %68, align 8
  %69 = ptrtoint i8* %intToPtr299 to i64
  %subtmp100 = sub nsw i64 %69, 2
  %IntTOPtr4b101 = inttoptr i64 %subtmp100 to i8*
  %70 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %71 = bitcast i8* %70 to %sParserInfo**
  %info102 = load %sParserInfo*, %sParserInfo** %71, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info102)
  %right103 = alloca %sCLNode*
  %72 = bitcast %sCLNode** %right103 to i8*
  store i8* %72, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right103, align 8
  %right104 = load %sCLNode*, %sCLNode** %right103, align 8
  %73 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %74 = bitcast i8* %73 to %sParserInfo**
  %info105 = load %sParserInfo*, %sParserInfo** %74, align 8
  %75 = call i1 @expression_plus_minus(%sCLNode** %right103, %sParserInfo* %info105)
  %LOGICAL_DIANEAL106 = icmp eq i1 %75, false
  br i1 %LOGICAL_DIANEAL106, label %cond_jump_then107, label %cond_end108

"cond_jump_elif2\0A":                             ; preds = %cond_jump_end88
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %77 = bitcast i8* %76 to %sParserInfo**
  %info119 = load %sParserInfo*, %sParserInfo** %77, align 8
  %78 = getelementptr inbounds %sParserInfo, %sParserInfo* %info119, i32 0, i32 4
  %79 = load i8*, i8** %78, align 8
  %derefference_value120 = load i8, i8* %79, align 8
  %eqtmpX121 = icmp eq i8 %derefference_value120, 92
  store i1 %eqtmpX121, i1* %andand_result_var, align 1
  br i1 %eqtmpX121, label %cond_jump_then122, label %cond_jump_end123

"cond_jump_elif_then2\0A":                        ; preds = %cond_jump_end132
  %80 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %81 = bitcast i8* %80 to %sParserInfo**
  %info140 = load %sParserInfo*, %sParserInfo** %81, align 8
  %82 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %83 = bitcast i8* %82 to %sParserInfo**
  %info141 = load %sParserInfo*, %sParserInfo** %83, align 8
  %84 = getelementptr inbounds %sParserInfo, %sParserInfo* %info141, i32 0, i32 4
  %85 = load i8*, i8** %84, align 8
  %86 = ptrtoint i8* %85 to i64
  %addtmp142 = add nsw i64 %86, 3
  %intToPtr2143 = inttoptr i64 %addtmp142 to i8*
  %87 = getelementptr inbounds %sParserInfo, %sParserInfo* %info140, i32 0, i32 4
  store i8* %intToPtr2143, i8** %87, align 8
  %88 = ptrtoint i8* %intToPtr2143 to i64
  %subtmp144 = sub nsw i64 %88, 3
  %IntTOPtr4b145 = inttoptr i64 %subtmp144 to i8*
  %89 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %90 = bitcast i8* %89 to %sParserInfo**
  %info146 = load %sParserInfo*, %sParserInfo** %90, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info146)
  %right147 = alloca %sCLNode*
  %91 = bitcast %sCLNode** %right147 to i8*
  store i8* %91, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right147, align 8
  %right148 = load %sCLNode*, %sCLNode** %right147, align 8
  %92 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %93 = bitcast i8* %92 to %sParserInfo**
  %info149 = load %sParserInfo*, %sParserInfo** %93, align 8
  %94 = call i1 @expression_plus_minus(%sCLNode** %right147, %sParserInfo* %info149)
  %LOGICAL_DIANEAL150 = icmp eq i1 %94, false
  br i1 %LOGICAL_DIANEAL150, label %cond_jump_then151, label %cond_end152

"cond_jump_elif3\0A":                             ; preds = %cond_jump_end132
  %95 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %96 = bitcast i8* %95 to %sParserInfo**
  %info163 = load %sParserInfo*, %sParserInfo** %96, align 8
  %97 = getelementptr inbounds %sParserInfo, %sParserInfo* %info163, i32 0, i32 4
  %98 = load i8*, i8** %97, align 8
  %derefference_value164 = load i8, i8* %98, align 8
  %eqtmpX165 = icmp eq i8 %derefference_value164, 62
  store i1 %eqtmpX165, i1* %andand_result_var, align 1
  br i1 %eqtmpX165, label %cond_jump_then166, label %cond_jump_end167

"cond_jump_elif_then3\0A":                        ; preds = %cond_jump_end167
  %99 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %100 = bitcast i8* %99 to %sParserInfo**
  %info174 = load %sParserInfo*, %sParserInfo** %100, align 8
  %101 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %102 = bitcast i8* %101 to %sParserInfo**
  %info175 = load %sParserInfo*, %sParserInfo** %102, align 8
  %103 = getelementptr inbounds %sParserInfo, %sParserInfo* %info175, i32 0, i32 4
  %104 = load i8*, i8** %103, align 8
  %105 = ptrtoint i8* %104 to i64
  %addtmp176 = add nsw i64 %105, 1
  %intToPtr2177 = inttoptr i64 %addtmp176 to i8*
  %106 = getelementptr inbounds %sParserInfo, %sParserInfo* %info174, i32 0, i32 4
  store i8* %intToPtr2177, i8** %106, align 8
  %107 = ptrtoint i8* %intToPtr2177 to i64
  %subtmp178 = sub nsw i64 %107, 1
  %IntTOPtr4b179 = inttoptr i64 %subtmp178 to i8*
  %108 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %109 = bitcast i8* %108 to %sParserInfo**
  %info180 = load %sParserInfo*, %sParserInfo** %109, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info180)
  %right181 = alloca %sCLNode*
  %110 = bitcast %sCLNode** %right181 to i8*
  store i8* %110, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right181, align 8
  %right182 = load %sCLNode*, %sCLNode** %right181, align 8
  %111 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %112 = bitcast i8* %111 to %sParserInfo**
  %info183 = load %sParserInfo*, %sParserInfo** %112, align 8
  %113 = call i1 @expression_plus_minus(%sCLNode** %right181, %sParserInfo* %info183)
  %LOGICAL_DIANEAL184 = icmp eq i1 %113, false
  br i1 %LOGICAL_DIANEAL184, label %cond_jump_then185, label %cond_end186

"cond_jump_elif4\0A":                             ; preds = %cond_jump_end167
  %114 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %115 = bitcast i8* %114 to %sParserInfo**
  %info197 = load %sParserInfo*, %sParserInfo** %115, align 8
  %116 = getelementptr inbounds %sParserInfo, %sParserInfo* %info197, i32 0, i32 4
  %117 = load i8*, i8** %116, align 8
  %derefference_value198 = load i8, i8* %117, align 8
  %eqtmpX199 = icmp eq i8 %derefference_value198, 92
  store i1 %eqtmpX199, i1* %andand_result_var, align 1
  br i1 %eqtmpX199, label %cond_jump_then200, label %cond_jump_end201

"cond_jump_elif_then4\0A":                        ; preds = %cond_jump_end210
  %118 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %119 = bitcast i8* %118 to %sParserInfo**
  %info218 = load %sParserInfo*, %sParserInfo** %119, align 8
  %120 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %121 = bitcast i8* %120 to %sParserInfo**
  %info219 = load %sParserInfo*, %sParserInfo** %121, align 8
  %122 = getelementptr inbounds %sParserInfo, %sParserInfo* %info219, i32 0, i32 4
  %123 = load i8*, i8** %122, align 8
  %124 = ptrtoint i8* %123 to i64
  %addtmp220 = add nsw i64 %124, 2
  %intToPtr2221 = inttoptr i64 %addtmp220 to i8*
  %125 = getelementptr inbounds %sParserInfo, %sParserInfo* %info218, i32 0, i32 4
  store i8* %intToPtr2221, i8** %125, align 8
  %126 = ptrtoint i8* %intToPtr2221 to i64
  %subtmp222 = sub nsw i64 %126, 2
  %IntTOPtr4b223 = inttoptr i64 %subtmp222 to i8*
  %127 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %128 = bitcast i8* %127 to %sParserInfo**
  %info224 = load %sParserInfo*, %sParserInfo** %128, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info224)
  %right225 = alloca %sCLNode*
  %129 = bitcast %sCLNode** %right225 to i8*
  store i8* %129, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right225, align 8
  %right226 = load %sCLNode*, %sCLNode** %right225, align 8
  %130 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %131 = bitcast i8* %130 to %sParserInfo**
  %info227 = load %sParserInfo*, %sParserInfo** %131, align 8
  %132 = call i1 @expression_plus_minus(%sCLNode** %right225, %sParserInfo* %info227)
  %LOGICAL_DIANEAL228 = icmp eq i1 %132, false
  br i1 %LOGICAL_DIANEAL228, label %cond_jump_then229, label %cond_end230

"cond_jump_elif5\0A":                             ; preds = %cond_jump_end210
  %133 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %134 = bitcast i8* %133 to %sParserInfo**
  %info241 = load %sParserInfo*, %sParserInfo** %134, align 8
  %135 = getelementptr inbounds %sParserInfo, %sParserInfo* %info241, i32 0, i32 4
  %136 = load i8*, i8** %135, align 8
  %derefference_value242 = load i8, i8* %136, align 8
  %eqtmpX243 = icmp eq i8 %derefference_value242, 60
  store i1 %eqtmpX243, i1* %andand_result_var, align 1
  br i1 %eqtmpX243, label %cond_jump_then244, label %cond_jump_end245

"cond_jump_elif_then5\0A":                        ; preds = %cond_jump_end245
  %137 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %138 = bitcast i8* %137 to %sParserInfo**
  %info253 = load %sParserInfo*, %sParserInfo** %138, align 8
  %139 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %140 = bitcast i8* %139 to %sParserInfo**
  %info254 = load %sParserInfo*, %sParserInfo** %140, align 8
  %141 = getelementptr inbounds %sParserInfo, %sParserInfo* %info254, i32 0, i32 4
  %142 = load i8*, i8** %141, align 8
  %143 = ptrtoint i8* %142 to i64
  %addtmp255 = add nsw i64 %143, 1
  %intToPtr2256 = inttoptr i64 %addtmp255 to i8*
  %144 = getelementptr inbounds %sParserInfo, %sParserInfo* %info253, i32 0, i32 4
  store i8* %intToPtr2256, i8** %144, align 8
  %145 = ptrtoint i8* %intToPtr2256 to i64
  %subtmp257 = sub nsw i64 %145, 1
  %IntTOPtr4b258 = inttoptr i64 %subtmp257 to i8*
  %146 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %147 = bitcast i8* %146 to %sParserInfo**
  %info259 = load %sParserInfo*, %sParserInfo** %147, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info259)
  %right260 = alloca %sCLNode*
  %148 = bitcast %sCLNode** %right260 to i8*
  store i8* %148, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right260, align 8
  %right261 = load %sCLNode*, %sCLNode** %right260, align 8
  %149 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %150 = bitcast i8* %149 to %sParserInfo**
  %info262 = load %sParserInfo*, %sParserInfo** %150, align 8
  %151 = call i1 @expression_plus_minus(%sCLNode** %right260, %sParserInfo* %info262)
  %LOGICAL_DIANEAL263 = icmp eq i1 %151, false
  br i1 %LOGICAL_DIANEAL263, label %cond_jump_then264, label %cond_end265

"cond_jump_elif6\0A":                             ; preds = %cond_jump_end245
  %152 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %153 = bitcast i8* %152 to %sParserInfo**
  %info276 = load %sParserInfo*, %sParserInfo** %153, align 8
  %154 = getelementptr inbounds %sParserInfo, %sParserInfo* %info276, i32 0, i32 4
  %155 = load i8*, i8** %154, align 8
  %derefference_value277 = load i8, i8* %155, align 8
  %eqtmpX278 = icmp eq i8 %derefference_value277, 92
  store i1 %eqtmpX278, i1* %andand_result_var, align 1
  br i1 %eqtmpX278, label %cond_jump_then279, label %cond_jump_end280

"cond_jump_elif_then6\0A":                        ; preds = %cond_jump_end289
  %156 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %157 = bitcast i8* %156 to %sParserInfo**
  %info297 = load %sParserInfo*, %sParserInfo** %157, align 8
  %158 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %159 = bitcast i8* %158 to %sParserInfo**
  %info298 = load %sParserInfo*, %sParserInfo** %159, align 8
  %160 = getelementptr inbounds %sParserInfo, %sParserInfo* %info298, i32 0, i32 4
  %161 = load i8*, i8** %160, align 8
  %162 = ptrtoint i8* %161 to i64
  %addtmp299 = add nsw i64 %162, 2
  %intToPtr2300 = inttoptr i64 %addtmp299 to i8*
  %163 = getelementptr inbounds %sParserInfo, %sParserInfo* %info297, i32 0, i32 4
  store i8* %intToPtr2300, i8** %163, align 8
  %164 = ptrtoint i8* %intToPtr2300 to i64
  %subtmp301 = sub nsw i64 %164, 2
  %IntTOPtr4b302 = inttoptr i64 %subtmp301 to i8*
  %165 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %166 = bitcast i8* %165 to %sParserInfo**
  %info303 = load %sParserInfo*, %sParserInfo** %166, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info303)
  %right304 = alloca %sCLNode*
  %167 = bitcast %sCLNode** %right304 to i8*
  store i8* %167, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right304, align 8
  %right305 = load %sCLNode*, %sCLNode** %right304, align 8
  %168 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %169 = bitcast i8* %168 to %sParserInfo**
  %info306 = load %sParserInfo*, %sParserInfo** %169, align 8
  %170 = call i1 @expression_plus_minus(%sCLNode** %right304, %sParserInfo* %info306)
  %LOGICAL_DIANEAL307 = icmp eq i1 %170, false
  br i1 %LOGICAL_DIANEAL307, label %cond_jump_then308, label %cond_end309

cond_else_block:                                  ; preds = %cond_jump_end289
  br label %cond_end_block

cond_end19:                                       ; preds = %after_break, %cond_end313, %cond_end269, %cond_end234, %cond_end190, %cond_end156, %cond_end112, %cond_end77, %cond_end33
  br label %loop_top_block

cond_jump_then28:                                 ; preds = %cond_jump_then18
  %171 = bitcast [8192 x i8*]* %lvtable to i8*
  %172 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %171, i64 65536)
  ret i1 false

cond_end29:                                       ; preds = %cond_jump_then18
  %right30 = load %sCLNode*, %sCLNode** %right, align 8
  %eqtmpX31 = icmp eq %sCLNode* %right30, null
  br i1 %eqtmpX31, label %cond_jump_then32, label %cond_end33

cond_jump_then32:                                 ; preds = %cond_end29
  %173 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %174 = bitcast i8* %173 to %sParserInfo**
  %info34 = load %sParserInfo*, %sParserInfo** %174, align 8
  call void @parser_err_msg(%sParserInfo* %info34, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_string.70, i32 0, i32 0))
  %175 = bitcast [8192 x i8*]* %lvtable to i8*
  %176 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %175, i64 65536)
  ret i1 true

cond_end33:                                       ; preds = %cond_end29
  %177 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %178 = bitcast i8* %177 to %sCLNode***
  %node35 = load %sCLNode**, %sCLNode*** %178, align 8
  %179 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %180 = bitcast i8* %179 to %sCLNode***
  %node36 = load %sCLNode**, %sCLNode*** %180, align 8
  %derefference_value37 = load %sCLNode*, %sCLNode** %node36, align 8
  %right38 = load %sCLNode*, %sCLNode** %right, align 8
  %181 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %182 = bitcast i8* %181 to %sParserInfo**
  %info39 = load %sParserInfo*, %sParserInfo** %182, align 8
  %183 = call %sCLNode* @sNodeTree_create_greater_equal(%sCLNode* %derefference_value37, %sCLNode* %right38, %sParserInfo* %info39)
  store %sCLNode* %183, %sCLNode** %node35, align 8
  br label %cond_end19

cond_jump_then43:                                 ; preds = %"cond_jump_elif0\0A"
  %184 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %185 = bitcast i8* %184 to %sParserInfo**
  %info45 = load %sParserInfo*, %sParserInfo** %185, align 8
  %186 = getelementptr inbounds %sParserInfo, %sParserInfo* %info45, i32 0, i32 4
  %187 = load i8*, i8** %186, align 8
  %188 = ptrtoint i8* %187 to i64
  %addtmp46 = add nsw i64 %188, 1
  %intToPtr247 = inttoptr i64 %addtmp46 to i8*
  %derefference_value48 = load i8, i8* %intToPtr247, align 8
  %eqtmpX49 = icmp eq i8 %derefference_value48, 62
  %andand50 = and i1 %eqtmpX42, %eqtmpX49
  store i1 %andand50, i1* %andand_result_var, align 1
  br label %cond_jump_end44

cond_jump_end44:                                  ; preds = %cond_jump_then43, %"cond_jump_elif0\0A"
  %andand_result_value51 = load i1, i1* %andand_result_var, align 1
  store i1 %andand_result_value51, i1* %andand_result_var, align 1
  br i1 %andand_result_value51, label %cond_jump_then52, label %cond_jump_end53

cond_jump_then52:                                 ; preds = %cond_jump_end44
  %189 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %190 = bitcast i8* %189 to %sParserInfo**
  %info54 = load %sParserInfo*, %sParserInfo** %190, align 8
  %191 = getelementptr inbounds %sParserInfo, %sParserInfo* %info54, i32 0, i32 4
  %192 = load i8*, i8** %191, align 8
  %193 = ptrtoint i8* %192 to i64
  %addtmp55 = add nsw i64 %193, 2
  %intToPtr256 = inttoptr i64 %addtmp55 to i8*
  %derefference_value57 = load i8, i8* %intToPtr256, align 8
  %eqtmpX58 = icmp eq i8 %derefference_value57, 61
  %andand59 = and i1 %andand_result_value51, %eqtmpX58
  store i1 %andand59, i1* %andand_result_var, align 1
  br label %cond_jump_end53

cond_jump_end53:                                  ; preds = %cond_jump_then52, %cond_jump_end44
  %andand_result_value60 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value60, label %"cond_jump_elif_then0\0A", label %"cond_jump_elif1\0A"

cond_jump_then72:                                 ; preds = %"cond_jump_elif_then0\0A"
  %194 = bitcast [8192 x i8*]* %lvtable to i8*
  %195 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %194, i64 65536)
  ret i1 false

cond_end73:                                       ; preds = %"cond_jump_elif_then0\0A"
  %right74 = load %sCLNode*, %sCLNode** %right68, align 8
  %eqtmpX75 = icmp eq %sCLNode* %right74, null
  br i1 %eqtmpX75, label %cond_jump_then76, label %cond_end77

cond_jump_then76:                                 ; preds = %cond_end73
  %196 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %197 = bitcast i8* %196 to %sParserInfo**
  %info78 = load %sParserInfo*, %sParserInfo** %197, align 8
  call void @parser_err_msg(%sParserInfo* %info78, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_string.71, i32 0, i32 0))
  %198 = bitcast [8192 x i8*]* %lvtable to i8*
  %199 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %198, i64 65536)
  ret i1 true

cond_end77:                                       ; preds = %cond_end73
  %200 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %201 = bitcast i8* %200 to %sCLNode***
  %node79 = load %sCLNode**, %sCLNode*** %201, align 8
  %202 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %203 = bitcast i8* %202 to %sCLNode***
  %node80 = load %sCLNode**, %sCLNode*** %203, align 8
  %derefference_value81 = load %sCLNode*, %sCLNode** %node80, align 8
  %right82 = load %sCLNode*, %sCLNode** %right68, align 8
  %204 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %205 = bitcast i8* %204 to %sParserInfo**
  %info83 = load %sParserInfo*, %sParserInfo** %205, align 8
  %206 = call %sCLNode* @sNodeTree_create_primitive_greater_equal(%sCLNode* %derefference_value81, %sCLNode* %right82, %sParserInfo* %info83)
  store %sCLNode* %206, %sCLNode** %node79, align 8
  br label %cond_end19

cond_jump_then87:                                 ; preds = %"cond_jump_elif1\0A"
  %207 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %208 = bitcast i8* %207 to %sParserInfo**
  %info89 = load %sParserInfo*, %sParserInfo** %208, align 8
  %209 = getelementptr inbounds %sParserInfo, %sParserInfo* %info89, i32 0, i32 4
  %210 = load i8*, i8** %209, align 8
  %211 = ptrtoint i8* %210 to i64
  %addtmp90 = add nsw i64 %211, 1
  %intToPtr291 = inttoptr i64 %addtmp90 to i8*
  %derefference_value92 = load i8, i8* %intToPtr291, align 8
  %eqtmpX93 = icmp eq i8 %derefference_value92, 61
  %andand94 = and i1 %eqtmpX86, %eqtmpX93
  store i1 %andand94, i1* %andand_result_var, align 1
  br label %cond_jump_end88

cond_jump_end88:                                  ; preds = %cond_jump_then87, %"cond_jump_elif1\0A"
  %andand_result_value95 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value95, label %"cond_jump_elif_then1\0A", label %"cond_jump_elif2\0A"

cond_jump_then107:                                ; preds = %"cond_jump_elif_then1\0A"
  %212 = bitcast [8192 x i8*]* %lvtable to i8*
  %213 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %212, i64 65536)
  ret i1 false

cond_end108:                                      ; preds = %"cond_jump_elif_then1\0A"
  %right109 = load %sCLNode*, %sCLNode** %right103, align 8
  %eqtmpX110 = icmp eq %sCLNode* %right109, null
  br i1 %eqtmpX110, label %cond_jump_then111, label %cond_end112

cond_jump_then111:                                ; preds = %cond_end108
  %214 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %215 = bitcast i8* %214 to %sParserInfo**
  %info113 = load %sParserInfo*, %sParserInfo** %215, align 8
  call void @parser_err_msg(%sParserInfo* %info113, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_string.72, i32 0, i32 0))
  %216 = bitcast [8192 x i8*]* %lvtable to i8*
  %217 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %216, i64 65536)
  ret i1 true

cond_end112:                                      ; preds = %cond_end108
  %218 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %219 = bitcast i8* %218 to %sCLNode***
  %node114 = load %sCLNode**, %sCLNode*** %219, align 8
  %220 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %221 = bitcast i8* %220 to %sCLNode***
  %node115 = load %sCLNode**, %sCLNode*** %221, align 8
  %derefference_value116 = load %sCLNode*, %sCLNode** %node115, align 8
  %right117 = load %sCLNode*, %sCLNode** %right103, align 8
  %222 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %223 = bitcast i8* %222 to %sParserInfo**
  %info118 = load %sParserInfo*, %sParserInfo** %223, align 8
  %224 = call %sCLNode* @sNodeTree_create_lesser_equal(%sCLNode* %derefference_value116, %sCLNode* %right117, %sParserInfo* %info118)
  store %sCLNode* %224, %sCLNode** %node114, align 8
  br label %cond_end19

cond_jump_then122:                                ; preds = %"cond_jump_elif2\0A"
  %225 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %226 = bitcast i8* %225 to %sParserInfo**
  %info124 = load %sParserInfo*, %sParserInfo** %226, align 8
  %227 = getelementptr inbounds %sParserInfo, %sParserInfo* %info124, i32 0, i32 4
  %228 = load i8*, i8** %227, align 8
  %229 = ptrtoint i8* %228 to i64
  %addtmp125 = add nsw i64 %229, 1
  %intToPtr2126 = inttoptr i64 %addtmp125 to i8*
  %derefference_value127 = load i8, i8* %intToPtr2126, align 8
  %eqtmpX128 = icmp eq i8 %derefference_value127, 60
  %andand129 = and i1 %eqtmpX121, %eqtmpX128
  store i1 %andand129, i1* %andand_result_var, align 1
  br label %cond_jump_end123

cond_jump_end123:                                 ; preds = %cond_jump_then122, %"cond_jump_elif2\0A"
  %andand_result_value130 = load i1, i1* %andand_result_var, align 1
  store i1 %andand_result_value130, i1* %andand_result_var, align 1
  br i1 %andand_result_value130, label %cond_jump_then131, label %cond_jump_end132

cond_jump_then131:                                ; preds = %cond_jump_end123
  %230 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %231 = bitcast i8* %230 to %sParserInfo**
  %info133 = load %sParserInfo*, %sParserInfo** %231, align 8
  %232 = getelementptr inbounds %sParserInfo, %sParserInfo* %info133, i32 0, i32 4
  %233 = load i8*, i8** %232, align 8
  %234 = ptrtoint i8* %233 to i64
  %addtmp134 = add nsw i64 %234, 2
  %intToPtr2135 = inttoptr i64 %addtmp134 to i8*
  %derefference_value136 = load i8, i8* %intToPtr2135, align 8
  %eqtmpX137 = icmp eq i8 %derefference_value136, 61
  %andand138 = and i1 %andand_result_value130, %eqtmpX137
  store i1 %andand138, i1* %andand_result_var, align 1
  br label %cond_jump_end132

cond_jump_end132:                                 ; preds = %cond_jump_then131, %cond_jump_end123
  %andand_result_value139 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value139, label %"cond_jump_elif_then2\0A", label %"cond_jump_elif3\0A"

cond_jump_then151:                                ; preds = %"cond_jump_elif_then2\0A"
  %235 = bitcast [8192 x i8*]* %lvtable to i8*
  %236 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %235, i64 65536)
  ret i1 false

cond_end152:                                      ; preds = %"cond_jump_elif_then2\0A"
  %right153 = load %sCLNode*, %sCLNode** %right147, align 8
  %eqtmpX154 = icmp eq %sCLNode* %right153, null
  br i1 %eqtmpX154, label %cond_jump_then155, label %cond_end156

cond_jump_then155:                                ; preds = %cond_end152
  %237 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %238 = bitcast i8* %237 to %sParserInfo**
  %info157 = load %sParserInfo*, %sParserInfo** %238, align 8
  call void @parser_err_msg(%sParserInfo* %info157, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_string.73, i32 0, i32 0))
  %239 = bitcast [8192 x i8*]* %lvtable to i8*
  %240 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %239, i64 65536)
  ret i1 true

cond_end156:                                      ; preds = %cond_end152
  %241 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %242 = bitcast i8* %241 to %sCLNode***
  %node158 = load %sCLNode**, %sCLNode*** %242, align 8
  %243 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %244 = bitcast i8* %243 to %sCLNode***
  %node159 = load %sCLNode**, %sCLNode*** %244, align 8
  %derefference_value160 = load %sCLNode*, %sCLNode** %node159, align 8
  %right161 = load %sCLNode*, %sCLNode** %right147, align 8
  %245 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %246 = bitcast i8* %245 to %sParserInfo**
  %info162 = load %sParserInfo*, %sParserInfo** %246, align 8
  %247 = call %sCLNode* @sNodeTree_create_primitive_lesser_equal(%sCLNode* %derefference_value160, %sCLNode* %right161, %sParserInfo* %info162)
  store %sCLNode* %247, %sCLNode** %node158, align 8
  br label %cond_end19

cond_jump_then166:                                ; preds = %"cond_jump_elif3\0A"
  %248 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %249 = bitcast i8* %248 to %sParserInfo**
  %info168 = load %sParserInfo*, %sParserInfo** %249, align 8
  %250 = getelementptr inbounds %sParserInfo, %sParserInfo* %info168, i32 0, i32 4
  %251 = load i8*, i8** %250, align 8
  %252 = ptrtoint i8* %251 to i64
  %addtmp169 = add nsw i64 %252, 1
  %intToPtr2170 = inttoptr i64 %addtmp169 to i8*
  %derefference_value171 = load i8, i8* %intToPtr2170, align 8
  %noteqtmp = icmp ne i8 %derefference_value171, 62
  %andand172 = and i1 %eqtmpX165, %noteqtmp
  store i1 %andand172, i1* %andand_result_var, align 1
  br label %cond_jump_end167

cond_jump_end167:                                 ; preds = %cond_jump_then166, %"cond_jump_elif3\0A"
  %andand_result_value173 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value173, label %"cond_jump_elif_then3\0A", label %"cond_jump_elif4\0A"

cond_jump_then185:                                ; preds = %"cond_jump_elif_then3\0A"
  %253 = bitcast [8192 x i8*]* %lvtable to i8*
  %254 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %253, i64 65536)
  ret i1 false

cond_end186:                                      ; preds = %"cond_jump_elif_then3\0A"
  %right187 = load %sCLNode*, %sCLNode** %right181, align 8
  %eqtmpX188 = icmp eq %sCLNode* %right187, null
  br i1 %eqtmpX188, label %cond_jump_then189, label %cond_end190

cond_jump_then189:                                ; preds = %cond_end186
  %255 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %256 = bitcast i8* %255 to %sParserInfo**
  %info191 = load %sParserInfo*, %sParserInfo** %256, align 8
  call void @parser_err_msg(%sParserInfo* %info191, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.74, i32 0, i32 0))
  %257 = bitcast [8192 x i8*]* %lvtable to i8*
  %258 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %257, i64 65536)
  ret i1 true

cond_end190:                                      ; preds = %cond_end186
  %259 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %260 = bitcast i8* %259 to %sCLNode***
  %node192 = load %sCLNode**, %sCLNode*** %260, align 8
  %261 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %262 = bitcast i8* %261 to %sCLNode***
  %node193 = load %sCLNode**, %sCLNode*** %262, align 8
  %derefference_value194 = load %sCLNode*, %sCLNode** %node193, align 8
  %right195 = load %sCLNode*, %sCLNode** %right181, align 8
  %263 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %264 = bitcast i8* %263 to %sParserInfo**
  %info196 = load %sParserInfo*, %sParserInfo** %264, align 8
  %265 = call %sCLNode* @sNodeTree_create_greater(%sCLNode* %derefference_value194, %sCLNode* %right195, %sParserInfo* %info196)
  store %sCLNode* %265, %sCLNode** %node192, align 8
  br label %cond_end19

cond_jump_then200:                                ; preds = %"cond_jump_elif4\0A"
  %266 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %267 = bitcast i8* %266 to %sParserInfo**
  %info202 = load %sParserInfo*, %sParserInfo** %267, align 8
  %268 = getelementptr inbounds %sParserInfo, %sParserInfo* %info202, i32 0, i32 4
  %269 = load i8*, i8** %268, align 8
  %270 = ptrtoint i8* %269 to i64
  %addtmp203 = add nsw i64 %270, 1
  %intToPtr2204 = inttoptr i64 %addtmp203 to i8*
  %derefference_value205 = load i8, i8* %intToPtr2204, align 8
  %eqtmpX206 = icmp eq i8 %derefference_value205, 62
  %andand207 = and i1 %eqtmpX199, %eqtmpX206
  store i1 %andand207, i1* %andand_result_var, align 1
  br label %cond_jump_end201

cond_jump_end201:                                 ; preds = %cond_jump_then200, %"cond_jump_elif4\0A"
  %andand_result_value208 = load i1, i1* %andand_result_var, align 1
  store i1 %andand_result_value208, i1* %andand_result_var, align 1
  br i1 %andand_result_value208, label %cond_jump_then209, label %cond_jump_end210

cond_jump_then209:                                ; preds = %cond_jump_end201
  %271 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %272 = bitcast i8* %271 to %sParserInfo**
  %info211 = load %sParserInfo*, %sParserInfo** %272, align 8
  %273 = getelementptr inbounds %sParserInfo, %sParserInfo* %info211, i32 0, i32 4
  %274 = load i8*, i8** %273, align 8
  %275 = ptrtoint i8* %274 to i64
  %addtmp212 = add nsw i64 %275, 2
  %intToPtr2213 = inttoptr i64 %addtmp212 to i8*
  %derefference_value214 = load i8, i8* %intToPtr2213, align 8
  %noteqtmp215 = icmp ne i8 %derefference_value214, 62
  %andand216 = and i1 %andand_result_value208, %noteqtmp215
  store i1 %andand216, i1* %andand_result_var, align 1
  br label %cond_jump_end210

cond_jump_end210:                                 ; preds = %cond_jump_then209, %cond_jump_end201
  %andand_result_value217 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value217, label %"cond_jump_elif_then4\0A", label %"cond_jump_elif5\0A"

cond_jump_then229:                                ; preds = %"cond_jump_elif_then4\0A"
  %276 = bitcast [8192 x i8*]* %lvtable to i8*
  %277 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %276, i64 65536)
  ret i1 false

cond_end230:                                      ; preds = %"cond_jump_elif_then4\0A"
  %right231 = load %sCLNode*, %sCLNode** %right225, align 8
  %eqtmpX232 = icmp eq %sCLNode* %right231, null
  br i1 %eqtmpX232, label %cond_jump_then233, label %cond_end234

cond_jump_then233:                                ; preds = %cond_end230
  %278 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %279 = bitcast i8* %278 to %sParserInfo**
  %info235 = load %sParserInfo*, %sParserInfo** %279, align 8
  call void @parser_err_msg(%sParserInfo* %info235, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.75, i32 0, i32 0))
  %280 = bitcast [8192 x i8*]* %lvtable to i8*
  %281 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %280, i64 65536)
  ret i1 true

cond_end234:                                      ; preds = %cond_end230
  %282 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %283 = bitcast i8* %282 to %sCLNode***
  %node236 = load %sCLNode**, %sCLNode*** %283, align 8
  %284 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %285 = bitcast i8* %284 to %sCLNode***
  %node237 = load %sCLNode**, %sCLNode*** %285, align 8
  %derefference_value238 = load %sCLNode*, %sCLNode** %node237, align 8
  %right239 = load %sCLNode*, %sCLNode** %right225, align 8
  %286 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %287 = bitcast i8* %286 to %sParserInfo**
  %info240 = load %sParserInfo*, %sParserInfo** %287, align 8
  %288 = call %sCLNode* @sNodeTree_create_primitive_greater(%sCLNode* %derefference_value238, %sCLNode* %right239, %sParserInfo* %info240)
  store %sCLNode* %288, %sCLNode** %node236, align 8
  br label %cond_end19

cond_jump_then244:                                ; preds = %"cond_jump_elif5\0A"
  %289 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %290 = bitcast i8* %289 to %sParserInfo**
  %info246 = load %sParserInfo*, %sParserInfo** %290, align 8
  %291 = getelementptr inbounds %sParserInfo, %sParserInfo* %info246, i32 0, i32 4
  %292 = load i8*, i8** %291, align 8
  %293 = ptrtoint i8* %292 to i64
  %addtmp247 = add nsw i64 %293, 1
  %intToPtr2248 = inttoptr i64 %addtmp247 to i8*
  %derefference_value249 = load i8, i8* %intToPtr2248, align 8
  %noteqtmp250 = icmp ne i8 %derefference_value249, 60
  %andand251 = and i1 %eqtmpX243, %noteqtmp250
  store i1 %andand251, i1* %andand_result_var, align 1
  br label %cond_jump_end245

cond_jump_end245:                                 ; preds = %cond_jump_then244, %"cond_jump_elif5\0A"
  %andand_result_value252 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value252, label %"cond_jump_elif_then5\0A", label %"cond_jump_elif6\0A"

cond_jump_then264:                                ; preds = %"cond_jump_elif_then5\0A"
  %294 = bitcast [8192 x i8*]* %lvtable to i8*
  %295 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %294, i64 65536)
  ret i1 false

cond_end265:                                      ; preds = %"cond_jump_elif_then5\0A"
  %right266 = load %sCLNode*, %sCLNode** %right260, align 8
  %eqtmpX267 = icmp eq %sCLNode* %right266, null
  br i1 %eqtmpX267, label %cond_jump_then268, label %cond_end269

cond_jump_then268:                                ; preds = %cond_end265
  %296 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %297 = bitcast i8* %296 to %sParserInfo**
  %info270 = load %sParserInfo*, %sParserInfo** %297, align 8
  call void @parser_err_msg(%sParserInfo* %info270, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.76, i32 0, i32 0))
  %298 = bitcast [8192 x i8*]* %lvtable to i8*
  %299 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %298, i64 65536)
  ret i1 true

cond_end269:                                      ; preds = %cond_end265
  %300 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %301 = bitcast i8* %300 to %sCLNode***
  %node271 = load %sCLNode**, %sCLNode*** %301, align 8
  %302 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %303 = bitcast i8* %302 to %sCLNode***
  %node272 = load %sCLNode**, %sCLNode*** %303, align 8
  %derefference_value273 = load %sCLNode*, %sCLNode** %node272, align 8
  %right274 = load %sCLNode*, %sCLNode** %right260, align 8
  %304 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %305 = bitcast i8* %304 to %sParserInfo**
  %info275 = load %sParserInfo*, %sParserInfo** %305, align 8
  %306 = call %sCLNode* @sNodeTree_create_lesser(%sCLNode* %derefference_value273, %sCLNode* %right274, %sParserInfo* %info275)
  store %sCLNode* %306, %sCLNode** %node271, align 8
  br label %cond_end19

cond_jump_then279:                                ; preds = %"cond_jump_elif6\0A"
  %307 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %308 = bitcast i8* %307 to %sParserInfo**
  %info281 = load %sParserInfo*, %sParserInfo** %308, align 8
  %309 = getelementptr inbounds %sParserInfo, %sParserInfo* %info281, i32 0, i32 4
  %310 = load i8*, i8** %309, align 8
  %311 = ptrtoint i8* %310 to i64
  %addtmp282 = add nsw i64 %311, 1
  %intToPtr2283 = inttoptr i64 %addtmp282 to i8*
  %derefference_value284 = load i8, i8* %intToPtr2283, align 8
  %eqtmpX285 = icmp eq i8 %derefference_value284, 60
  %andand286 = and i1 %eqtmpX278, %eqtmpX285
  store i1 %andand286, i1* %andand_result_var, align 1
  br label %cond_jump_end280

cond_jump_end280:                                 ; preds = %cond_jump_then279, %"cond_jump_elif6\0A"
  %andand_result_value287 = load i1, i1* %andand_result_var, align 1
  store i1 %andand_result_value287, i1* %andand_result_var, align 1
  br i1 %andand_result_value287, label %cond_jump_then288, label %cond_jump_end289

cond_jump_then288:                                ; preds = %cond_jump_end280
  %312 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %313 = bitcast i8* %312 to %sParserInfo**
  %info290 = load %sParserInfo*, %sParserInfo** %313, align 8
  %314 = getelementptr inbounds %sParserInfo, %sParserInfo* %info290, i32 0, i32 4
  %315 = load i8*, i8** %314, align 8
  %316 = ptrtoint i8* %315 to i64
  %addtmp291 = add nsw i64 %316, 2
  %intToPtr2292 = inttoptr i64 %addtmp291 to i8*
  %derefference_value293 = load i8, i8* %intToPtr2292, align 8
  %noteqtmp294 = icmp ne i8 %derefference_value293, 60
  %andand295 = and i1 %andand_result_value287, %noteqtmp294
  store i1 %andand295, i1* %andand_result_var, align 1
  br label %cond_jump_end289

cond_jump_end289:                                 ; preds = %cond_jump_then288, %cond_jump_end280
  %andand_result_value296 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value296, label %"cond_jump_elif_then6\0A", label %cond_else_block

cond_jump_then308:                                ; preds = %"cond_jump_elif_then6\0A"
  %317 = bitcast [8192 x i8*]* %lvtable to i8*
  %318 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %317, i64 65536)
  ret i1 false

cond_end309:                                      ; preds = %"cond_jump_elif_then6\0A"
  %right310 = load %sCLNode*, %sCLNode** %right304, align 8
  %eqtmpX311 = icmp eq %sCLNode* %right310, null
  br i1 %eqtmpX311, label %cond_jump_then312, label %cond_end313

cond_jump_then312:                                ; preds = %cond_end309
  %319 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %320 = bitcast i8* %319 to %sParserInfo**
  %info314 = load %sParserInfo*, %sParserInfo** %320, align 8
  call void @parser_err_msg(%sParserInfo* %info314, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.77, i32 0, i32 0))
  %321 = bitcast [8192 x i8*]* %lvtable to i8*
  %322 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %321, i64 65536)
  ret i1 true

cond_end313:                                      ; preds = %cond_end309
  %323 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %324 = bitcast i8* %323 to %sCLNode***
  %node315 = load %sCLNode**, %sCLNode*** %324, align 8
  %325 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %326 = bitcast i8* %325 to %sCLNode***
  %node316 = load %sCLNode**, %sCLNode*** %326, align 8
  %derefference_value317 = load %sCLNode*, %sCLNode** %node316, align 8
  %right318 = load %sCLNode*, %sCLNode** %right304, align 8
  %327 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %328 = bitcast i8* %327 to %sParserInfo**
  %info319 = load %sParserInfo*, %sParserInfo** %328, align 8
  %329 = call %sCLNode* @sNodeTree_create_primitive_lesser(%sCLNode* %derefference_value317, %sCLNode* %right318, %sParserInfo* %info319)
  store %sCLNode* %329, %sCLNode** %node315, align 8
  br label %cond_end19

after_break:                                      ; No predecessors!
  br label %cond_end19
}

define internal i1 @expression_comparison_equal_operator(%sCLNode** %node, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %node2 = alloca %sCLNode**
  store %sCLNode** %node, %sCLNode*** %node2, align 8
  %2 = bitcast %sCLNode*** %node2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %node4 = load %sCLNode**, %sCLNode*** %node2, align 8
  %info5 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %4 = call i1 @expression_comparison_operator(%sCLNode** %node4, %sParserInfo* %info5)
  %LOGICAL_DIANEAL = icmp eq i1 %4, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %5 = bitcast [8192 x i8*]* %lvtable to i8*
  %6 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %5, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %entry
  %node6 = load %sCLNode**, %sCLNode*** %node2, align 8
  %derefference_value = load %sCLNode*, %sCLNode** %node6, align 8
  %eqtmpX = icmp eq %sCLNode* %derefference_value, null
  br i1 %eqtmpX, label %cond_jump_then7, label %cond_end8

cond_jump_then7:                                  ; preds = %cond_end
  %7 = bitcast [8192 x i8*]* %lvtable to i8*
  %8 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %7, i64 65536)
  ret i1 true

cond_end8:                                        ; preds = %cond_end
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end19, %cond_end8
  %info9 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %9 = getelementptr inbounds %sParserInfo, %sParserInfo* %info9, i32 0, i32 4
  %10 = load i8*, i8** %9, align 8
  %derefference_value10 = load i8, i8* %10, align 8
  %11 = icmp ne i8 %derefference_value10, 0
  br i1 %11, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %13 = bitcast i8* %12 to %sParserInfo**
  %info11 = load %sParserInfo*, %sParserInfo** %13, align 8
  %14 = getelementptr inbounds %sParserInfo, %sParserInfo* %info11, i32 0, i32 4
  %15 = load i8*, i8** %14, align 8
  %derefference_value12 = load i8, i8* %15, align 8
  %eqtmpX13 = icmp eq i8 %derefference_value12, 61
  store i1 %eqtmpX13, i1* %andand_result_var, align 1
  br i1 %eqtmpX13, label %cond_jump_then14, label %cond_jump_end

cond_end_block:                                   ; preds = %cond_else_block, %loop_top_block
  %16 = bitcast [8192 x i8*]* %lvtable to i8*
  %17 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %16, i64 65536)
  ret i1 true

cond_jump_then14:                                 ; preds = %cond_then_block
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %19 = bitcast i8* %18 to %sParserInfo**
  %info15 = load %sParserInfo*, %sParserInfo** %19, align 8
  %20 = getelementptr inbounds %sParserInfo, %sParserInfo* %info15, i32 0, i32 4
  %21 = load i8*, i8** %20, align 8
  %22 = ptrtoint i8* %21 to i64
  %addtmp = add nsw i64 %22, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %derefference_value16 = load i8, i8* %intToPtr2, align 8
  %eqtmpX17 = icmp eq i8 %derefference_value16, 61
  %andand = and i1 %eqtmpX13, %eqtmpX17
  store i1 %andand, i1* %andand_result_var, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then14, %cond_then_block
  %andand_result_value = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value, label %cond_jump_then18, label %"cond_jump_elif0\0A"

cond_jump_then18:                                 ; preds = %cond_jump_end
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %24 = bitcast i8* %23 to %sParserInfo**
  %info20 = load %sParserInfo*, %sParserInfo** %24, align 8
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %26 = bitcast i8* %25 to %sParserInfo**
  %info21 = load %sParserInfo*, %sParserInfo** %26, align 8
  %27 = getelementptr inbounds %sParserInfo, %sParserInfo* %info21, i32 0, i32 4
  %28 = load i8*, i8** %27, align 8
  %29 = ptrtoint i8* %28 to i64
  %addtmp22 = add nsw i64 %29, 2
  %intToPtr223 = inttoptr i64 %addtmp22 to i8*
  %30 = getelementptr inbounds %sParserInfo, %sParserInfo* %info20, i32 0, i32 4
  store i8* %intToPtr223, i8** %30, align 8
  %31 = ptrtoint i8* %intToPtr223 to i64
  %subtmp = sub nsw i64 %31, 2
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %33 = bitcast i8* %32 to %sParserInfo**
  %info24 = load %sParserInfo*, %sParserInfo** %33, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info24)
  %right = alloca %sCLNode*
  %34 = bitcast %sCLNode** %right to i8*
  store i8* %34, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right, align 8
  %right25 = load %sCLNode*, %sCLNode** %right, align 8
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %36 = bitcast i8* %35 to %sParserInfo**
  %info26 = load %sParserInfo*, %sParserInfo** %36, align 8
  %37 = call i1 @expression_comparison_operator(%sCLNode** %right, %sParserInfo* %info26)
  %LOGICAL_DIANEAL27 = icmp eq i1 %37, false
  br i1 %LOGICAL_DIANEAL27, label %cond_jump_then28, label %cond_end29

"cond_jump_elif0\0A":                             ; preds = %cond_jump_end
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %39 = bitcast i8* %38 to %sParserInfo**
  %info40 = load %sParserInfo*, %sParserInfo** %39, align 8
  %40 = getelementptr inbounds %sParserInfo, %sParserInfo* %info40, i32 0, i32 4
  %41 = load i8*, i8** %40, align 8
  %derefference_value41 = load i8, i8* %41, align 8
  %eqtmpX42 = icmp eq i8 %derefference_value41, 92
  store i1 %eqtmpX42, i1* %andand_result_var, align 1
  br i1 %eqtmpX42, label %cond_jump_then43, label %cond_jump_end44

"cond_jump_elif_then0\0A":                        ; preds = %cond_jump_end53
  %42 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %43 = bitcast i8* %42 to %sParserInfo**
  %info61 = load %sParserInfo*, %sParserInfo** %43, align 8
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %45 = bitcast i8* %44 to %sParserInfo**
  %info62 = load %sParserInfo*, %sParserInfo** %45, align 8
  %46 = getelementptr inbounds %sParserInfo, %sParserInfo* %info62, i32 0, i32 4
  %47 = load i8*, i8** %46, align 8
  %48 = ptrtoint i8* %47 to i64
  %addtmp63 = add nsw i64 %48, 3
  %intToPtr264 = inttoptr i64 %addtmp63 to i8*
  %49 = getelementptr inbounds %sParserInfo, %sParserInfo* %info61, i32 0, i32 4
  store i8* %intToPtr264, i8** %49, align 8
  %50 = ptrtoint i8* %intToPtr264 to i64
  %subtmp65 = sub nsw i64 %50, 3
  %IntTOPtr4b66 = inttoptr i64 %subtmp65 to i8*
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %52 = bitcast i8* %51 to %sParserInfo**
  %info67 = load %sParserInfo*, %sParserInfo** %52, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info67)
  %right68 = alloca %sCLNode*
  %53 = bitcast %sCLNode** %right68 to i8*
  store i8* %53, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right68, align 8
  %right69 = load %sCLNode*, %sCLNode** %right68, align 8
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %55 = bitcast i8* %54 to %sParserInfo**
  %info70 = load %sParserInfo*, %sParserInfo** %55, align 8
  %56 = call i1 @expression_comparison_operator(%sCLNode** %right68, %sParserInfo* %info70)
  %LOGICAL_DIANEAL71 = icmp eq i1 %56, false
  br i1 %LOGICAL_DIANEAL71, label %cond_jump_then72, label %cond_end73

"cond_jump_elif1\0A":                             ; preds = %cond_jump_end53
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %58 = bitcast i8* %57 to %sParserInfo**
  %info84 = load %sParserInfo*, %sParserInfo** %58, align 8
  %59 = getelementptr inbounds %sParserInfo, %sParserInfo* %info84, i32 0, i32 4
  %60 = load i8*, i8** %59, align 8
  %derefference_value85 = load i8, i8* %60, align 8
  %eqtmpX86 = icmp eq i8 %derefference_value85, 33
  store i1 %eqtmpX86, i1* %andand_result_var, align 1
  br i1 %eqtmpX86, label %cond_jump_then87, label %cond_jump_end88

"cond_jump_elif_then1\0A":                        ; preds = %cond_jump_end88
  %61 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %62 = bitcast i8* %61 to %sParserInfo**
  %info96 = load %sParserInfo*, %sParserInfo** %62, align 8
  %63 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %64 = bitcast i8* %63 to %sParserInfo**
  %info97 = load %sParserInfo*, %sParserInfo** %64, align 8
  %65 = getelementptr inbounds %sParserInfo, %sParserInfo* %info97, i32 0, i32 4
  %66 = load i8*, i8** %65, align 8
  %67 = ptrtoint i8* %66 to i64
  %addtmp98 = add nsw i64 %67, 2
  %intToPtr299 = inttoptr i64 %addtmp98 to i8*
  %68 = getelementptr inbounds %sParserInfo, %sParserInfo* %info96, i32 0, i32 4
  store i8* %intToPtr299, i8** %68, align 8
  %69 = ptrtoint i8* %intToPtr299 to i64
  %subtmp100 = sub nsw i64 %69, 2
  %IntTOPtr4b101 = inttoptr i64 %subtmp100 to i8*
  %70 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %71 = bitcast i8* %70 to %sParserInfo**
  %info102 = load %sParserInfo*, %sParserInfo** %71, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info102)
  %right103 = alloca %sCLNode*
  %72 = bitcast %sCLNode** %right103 to i8*
  store i8* %72, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right103, align 8
  %right104 = load %sCLNode*, %sCLNode** %right103, align 8
  %73 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %74 = bitcast i8* %73 to %sParserInfo**
  %info105 = load %sParserInfo*, %sParserInfo** %74, align 8
  %75 = call i1 @expression_comparison_operator(%sCLNode** %right103, %sParserInfo* %info105)
  %LOGICAL_DIANEAL106 = icmp eq i1 %75, false
  br i1 %LOGICAL_DIANEAL106, label %cond_jump_then107, label %cond_end108

"cond_jump_elif2\0A":                             ; preds = %cond_jump_end88
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %77 = bitcast i8* %76 to %sParserInfo**
  %info119 = load %sParserInfo*, %sParserInfo** %77, align 8
  %78 = getelementptr inbounds %sParserInfo, %sParserInfo* %info119, i32 0, i32 4
  %79 = load i8*, i8** %78, align 8
  %derefference_value120 = load i8, i8* %79, align 8
  %eqtmpX121 = icmp eq i8 %derefference_value120, 92
  store i1 %eqtmpX121, i1* %andand_result_var, align 1
  br i1 %eqtmpX121, label %cond_jump_then122, label %cond_jump_end123

"cond_jump_elif_then2\0A":                        ; preds = %cond_jump_end132
  %80 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %81 = bitcast i8* %80 to %sParserInfo**
  %info140 = load %sParserInfo*, %sParserInfo** %81, align 8
  %82 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %83 = bitcast i8* %82 to %sParserInfo**
  %info141 = load %sParserInfo*, %sParserInfo** %83, align 8
  %84 = getelementptr inbounds %sParserInfo, %sParserInfo* %info141, i32 0, i32 4
  %85 = load i8*, i8** %84, align 8
  %86 = ptrtoint i8* %85 to i64
  %addtmp142 = add nsw i64 %86, 3
  %intToPtr2143 = inttoptr i64 %addtmp142 to i8*
  %87 = getelementptr inbounds %sParserInfo, %sParserInfo* %info140, i32 0, i32 4
  store i8* %intToPtr2143, i8** %87, align 8
  %88 = ptrtoint i8* %intToPtr2143 to i64
  %subtmp144 = sub nsw i64 %88, 3
  %IntTOPtr4b145 = inttoptr i64 %subtmp144 to i8*
  %89 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %90 = bitcast i8* %89 to %sParserInfo**
  %info146 = load %sParserInfo*, %sParserInfo** %90, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info146)
  %right147 = alloca %sCLNode*
  %91 = bitcast %sCLNode** %right147 to i8*
  store i8* %91, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right147, align 8
  %right148 = load %sCLNode*, %sCLNode** %right147, align 8
  %92 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %93 = bitcast i8* %92 to %sParserInfo**
  %info149 = load %sParserInfo*, %sParserInfo** %93, align 8
  %94 = call i1 @expression_comparison_operator(%sCLNode** %right147, %sParserInfo* %info149)
  %LOGICAL_DIANEAL150 = icmp eq i1 %94, false
  br i1 %LOGICAL_DIANEAL150, label %cond_jump_then151, label %cond_end152

cond_else_block:                                  ; preds = %cond_jump_end132
  br label %cond_end_block

cond_end19:                                       ; preds = %after_break, %cond_end156, %cond_end112, %cond_end77, %cond_end33
  br label %loop_top_block

cond_jump_then28:                                 ; preds = %cond_jump_then18
  %95 = bitcast [8192 x i8*]* %lvtable to i8*
  %96 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %95, i64 65536)
  ret i1 false

cond_end29:                                       ; preds = %cond_jump_then18
  %right30 = load %sCLNode*, %sCLNode** %right, align 8
  %eqtmpX31 = icmp eq %sCLNode* %right30, null
  br i1 %eqtmpX31, label %cond_jump_then32, label %cond_end33

cond_jump_then32:                                 ; preds = %cond_end29
  %97 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %98 = bitcast i8* %97 to %sParserInfo**
  %info34 = load %sParserInfo*, %sParserInfo** %98, align 8
  call void @parser_err_msg(%sParserInfo* %info34, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.78, i32 0, i32 0))
  br label %cond_end33

cond_end33:                                       ; preds = %cond_jump_then32, %cond_end29
  %99 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %100 = bitcast i8* %99 to %sCLNode***
  %node35 = load %sCLNode**, %sCLNode*** %100, align 8
  %101 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %102 = bitcast i8* %101 to %sCLNode***
  %node36 = load %sCLNode**, %sCLNode*** %102, align 8
  %derefference_value37 = load %sCLNode*, %sCLNode** %node36, align 8
  %right38 = load %sCLNode*, %sCLNode** %right, align 8
  %103 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %104 = bitcast i8* %103 to %sParserInfo**
  %info39 = load %sParserInfo*, %sParserInfo** %104, align 8
  %105 = call %sCLNode* @sNodeTree_create_equal(%sCLNode* %derefference_value37, %sCLNode* %right38, %sParserInfo* %info39)
  store %sCLNode* %105, %sCLNode** %node35, align 8
  br label %cond_end19

cond_jump_then43:                                 ; preds = %"cond_jump_elif0\0A"
  %106 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %107 = bitcast i8* %106 to %sParserInfo**
  %info45 = load %sParserInfo*, %sParserInfo** %107, align 8
  %108 = getelementptr inbounds %sParserInfo, %sParserInfo* %info45, i32 0, i32 4
  %109 = load i8*, i8** %108, align 8
  %110 = ptrtoint i8* %109 to i64
  %addtmp46 = add nsw i64 %110, 1
  %intToPtr247 = inttoptr i64 %addtmp46 to i8*
  %derefference_value48 = load i8, i8* %intToPtr247, align 8
  %eqtmpX49 = icmp eq i8 %derefference_value48, 61
  %andand50 = and i1 %eqtmpX42, %eqtmpX49
  store i1 %andand50, i1* %andand_result_var, align 1
  br label %cond_jump_end44

cond_jump_end44:                                  ; preds = %cond_jump_then43, %"cond_jump_elif0\0A"
  %andand_result_value51 = load i1, i1* %andand_result_var, align 1
  store i1 %andand_result_value51, i1* %andand_result_var, align 1
  br i1 %andand_result_value51, label %cond_jump_then52, label %cond_jump_end53

cond_jump_then52:                                 ; preds = %cond_jump_end44
  %111 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %112 = bitcast i8* %111 to %sParserInfo**
  %info54 = load %sParserInfo*, %sParserInfo** %112, align 8
  %113 = getelementptr inbounds %sParserInfo, %sParserInfo* %info54, i32 0, i32 4
  %114 = load i8*, i8** %113, align 8
  %115 = ptrtoint i8* %114 to i64
  %addtmp55 = add nsw i64 %115, 2
  %intToPtr256 = inttoptr i64 %addtmp55 to i8*
  %derefference_value57 = load i8, i8* %intToPtr256, align 8
  %eqtmpX58 = icmp eq i8 %derefference_value57, 61
  %andand59 = and i1 %andand_result_value51, %eqtmpX58
  store i1 %andand59, i1* %andand_result_var, align 1
  br label %cond_jump_end53

cond_jump_end53:                                  ; preds = %cond_jump_then52, %cond_jump_end44
  %andand_result_value60 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value60, label %"cond_jump_elif_then0\0A", label %"cond_jump_elif1\0A"

cond_jump_then72:                                 ; preds = %"cond_jump_elif_then0\0A"
  %116 = bitcast [8192 x i8*]* %lvtable to i8*
  %117 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %116, i64 65536)
  ret i1 false

cond_end73:                                       ; preds = %"cond_jump_elif_then0\0A"
  %right74 = load %sCLNode*, %sCLNode** %right68, align 8
  %eqtmpX75 = icmp eq %sCLNode* %right74, null
  br i1 %eqtmpX75, label %cond_jump_then76, label %cond_end77

cond_jump_then76:                                 ; preds = %cond_end73
  %118 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %119 = bitcast i8* %118 to %sParserInfo**
  %info78 = load %sParserInfo*, %sParserInfo** %119, align 8
  call void @parser_err_msg(%sParserInfo* %info78, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.79, i32 0, i32 0))
  br label %cond_end77

cond_end77:                                       ; preds = %cond_jump_then76, %cond_end73
  %120 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %121 = bitcast i8* %120 to %sCLNode***
  %node79 = load %sCLNode**, %sCLNode*** %121, align 8
  %122 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %123 = bitcast i8* %122 to %sCLNode***
  %node80 = load %sCLNode**, %sCLNode*** %123, align 8
  %derefference_value81 = load %sCLNode*, %sCLNode** %node80, align 8
  %right82 = load %sCLNode*, %sCLNode** %right68, align 8
  %124 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %125 = bitcast i8* %124 to %sParserInfo**
  %info83 = load %sParserInfo*, %sParserInfo** %125, align 8
  %126 = call %sCLNode* @sNodeTree_create_primitive_equal(%sCLNode* %derefference_value81, %sCLNode* %right82, %sParserInfo* %info83)
  store %sCLNode* %126, %sCLNode** %node79, align 8
  br label %cond_end19

cond_jump_then87:                                 ; preds = %"cond_jump_elif1\0A"
  %127 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %128 = bitcast i8* %127 to %sParserInfo**
  %info89 = load %sParserInfo*, %sParserInfo** %128, align 8
  %129 = getelementptr inbounds %sParserInfo, %sParserInfo* %info89, i32 0, i32 4
  %130 = load i8*, i8** %129, align 8
  %131 = ptrtoint i8* %130 to i64
  %addtmp90 = add nsw i64 %131, 1
  %intToPtr291 = inttoptr i64 %addtmp90 to i8*
  %derefference_value92 = load i8, i8* %intToPtr291, align 8
  %eqtmpX93 = icmp eq i8 %derefference_value92, 61
  %andand94 = and i1 %eqtmpX86, %eqtmpX93
  store i1 %andand94, i1* %andand_result_var, align 1
  br label %cond_jump_end88

cond_jump_end88:                                  ; preds = %cond_jump_then87, %"cond_jump_elif1\0A"
  %andand_result_value95 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value95, label %"cond_jump_elif_then1\0A", label %"cond_jump_elif2\0A"

cond_jump_then107:                                ; preds = %"cond_jump_elif_then1\0A"
  %132 = bitcast [8192 x i8*]* %lvtable to i8*
  %133 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %132, i64 65536)
  ret i1 false

cond_end108:                                      ; preds = %"cond_jump_elif_then1\0A"
  %right109 = load %sCLNode*, %sCLNode** %right103, align 8
  %eqtmpX110 = icmp eq %sCLNode* %right109, null
  br i1 %eqtmpX110, label %cond_jump_then111, label %cond_end112

cond_jump_then111:                                ; preds = %cond_end108
  %134 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %135 = bitcast i8* %134 to %sParserInfo**
  %info113 = load %sParserInfo*, %sParserInfo** %135, align 8
  call void @parser_err_msg(%sParserInfo* %info113, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.80, i32 0, i32 0))
  br label %cond_end112

cond_end112:                                      ; preds = %cond_jump_then111, %cond_end108
  %136 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %137 = bitcast i8* %136 to %sCLNode***
  %node114 = load %sCLNode**, %sCLNode*** %137, align 8
  %138 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %139 = bitcast i8* %138 to %sCLNode***
  %node115 = load %sCLNode**, %sCLNode*** %139, align 8
  %derefference_value116 = load %sCLNode*, %sCLNode** %node115, align 8
  %right117 = load %sCLNode*, %sCLNode** %right103, align 8
  %140 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %141 = bitcast i8* %140 to %sParserInfo**
  %info118 = load %sParserInfo*, %sParserInfo** %141, align 8
  %142 = call %sCLNode* @sNodeTree_create_not_equal(%sCLNode* %derefference_value116, %sCLNode* %right117, %sParserInfo* %info118)
  store %sCLNode* %142, %sCLNode** %node114, align 8
  br label %cond_end19

cond_jump_then122:                                ; preds = %"cond_jump_elif2\0A"
  %143 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %144 = bitcast i8* %143 to %sParserInfo**
  %info124 = load %sParserInfo*, %sParserInfo** %144, align 8
  %145 = getelementptr inbounds %sParserInfo, %sParserInfo* %info124, i32 0, i32 4
  %146 = load i8*, i8** %145, align 8
  %147 = ptrtoint i8* %146 to i64
  %addtmp125 = add nsw i64 %147, 1
  %intToPtr2126 = inttoptr i64 %addtmp125 to i8*
  %derefference_value127 = load i8, i8* %intToPtr2126, align 8
  %eqtmpX128 = icmp eq i8 %derefference_value127, 33
  %andand129 = and i1 %eqtmpX121, %eqtmpX128
  store i1 %andand129, i1* %andand_result_var, align 1
  br label %cond_jump_end123

cond_jump_end123:                                 ; preds = %cond_jump_then122, %"cond_jump_elif2\0A"
  %andand_result_value130 = load i1, i1* %andand_result_var, align 1
  store i1 %andand_result_value130, i1* %andand_result_var, align 1
  br i1 %andand_result_value130, label %cond_jump_then131, label %cond_jump_end132

cond_jump_then131:                                ; preds = %cond_jump_end123
  %148 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %149 = bitcast i8* %148 to %sParserInfo**
  %info133 = load %sParserInfo*, %sParserInfo** %149, align 8
  %150 = getelementptr inbounds %sParserInfo, %sParserInfo* %info133, i32 0, i32 4
  %151 = load i8*, i8** %150, align 8
  %152 = ptrtoint i8* %151 to i64
  %addtmp134 = add nsw i64 %152, 2
  %intToPtr2135 = inttoptr i64 %addtmp134 to i8*
  %derefference_value136 = load i8, i8* %intToPtr2135, align 8
  %eqtmpX137 = icmp eq i8 %derefference_value136, 61
  %andand138 = and i1 %andand_result_value130, %eqtmpX137
  store i1 %andand138, i1* %andand_result_var, align 1
  br label %cond_jump_end132

cond_jump_end132:                                 ; preds = %cond_jump_then131, %cond_jump_end123
  %andand_result_value139 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value139, label %"cond_jump_elif_then2\0A", label %cond_else_block

cond_jump_then151:                                ; preds = %"cond_jump_elif_then2\0A"
  %153 = bitcast [8192 x i8*]* %lvtable to i8*
  %154 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %153, i64 65536)
  ret i1 false

cond_end152:                                      ; preds = %"cond_jump_elif_then2\0A"
  %right153 = load %sCLNode*, %sCLNode** %right147, align 8
  %eqtmpX154 = icmp eq %sCLNode* %right153, null
  br i1 %eqtmpX154, label %cond_jump_then155, label %cond_end156

cond_jump_then155:                                ; preds = %cond_end152
  %155 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %156 = bitcast i8* %155 to %sParserInfo**
  %info157 = load %sParserInfo*, %sParserInfo** %156, align 8
  call void @parser_err_msg(%sParserInfo* %info157, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.81, i32 0, i32 0))
  br label %cond_end156

cond_end156:                                      ; preds = %cond_jump_then155, %cond_end152
  %157 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %158 = bitcast i8* %157 to %sCLNode***
  %node158 = load %sCLNode**, %sCLNode*** %158, align 8
  %159 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %160 = bitcast i8* %159 to %sCLNode***
  %node159 = load %sCLNode**, %sCLNode*** %160, align 8
  %derefference_value160 = load %sCLNode*, %sCLNode** %node159, align 8
  %right161 = load %sCLNode*, %sCLNode** %right147, align 8
  %161 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %162 = bitcast i8* %161 to %sParserInfo**
  %info162 = load %sParserInfo*, %sParserInfo** %162, align 8
  %163 = call %sCLNode* @sNodeTree_create_primitive_not_equal(%sCLNode* %derefference_value160, %sCLNode* %right161, %sParserInfo* %info162)
  store %sCLNode* %163, %sCLNode** %node158, align 8
  br label %cond_end19

after_break:                                      ; No predecessors!
  br label %cond_end19
}

define internal i1 @expression_and_and_or_or(%sCLNode** %node, %sParserInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %node2 = alloca %sCLNode**
  store %sCLNode** %node, %sCLNode*** %node2, align 8
  %2 = bitcast %sCLNode*** %node2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sParserInfo*
  store %sParserInfo* %info, %sParserInfo** %info3, align 8
  %3 = bitcast %sParserInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %node4 = load %sCLNode**, %sCLNode*** %node2, align 8
  %info5 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %4 = call i1 @expression_comparison_equal_operator(%sCLNode** %node4, %sParserInfo* %info5)
  %LOGICAL_DIANEAL = icmp eq i1 %4, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %5 = bitcast [8192 x i8*]* %lvtable to i8*
  %6 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %5, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %entry
  %node6 = load %sCLNode**, %sCLNode*** %node2, align 8
  %derefference_value = load %sCLNode*, %sCLNode** %node6, align 8
  %eqtmpX = icmp eq %sCLNode* %derefference_value, null
  br i1 %eqtmpX, label %cond_jump_then7, label %cond_end8

cond_jump_then7:                                  ; preds = %cond_end
  %7 = bitcast [8192 x i8*]* %lvtable to i8*
  %8 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %7, i64 65536)
  ret i1 true

cond_end8:                                        ; preds = %cond_end
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end19, %cond_end8
  %info9 = load %sParserInfo*, %sParserInfo** %info3, align 8
  %9 = getelementptr inbounds %sParserInfo, %sParserInfo* %info9, i32 0, i32 4
  %10 = load i8*, i8** %9, align 8
  %derefference_value10 = load i8, i8* %10, align 8
  %11 = icmp ne i8 %derefference_value10, 0
  br i1 %11, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %13 = bitcast i8* %12 to %sParserInfo**
  %info11 = load %sParserInfo*, %sParserInfo** %13, align 8
  %14 = getelementptr inbounds %sParserInfo, %sParserInfo* %info11, i32 0, i32 4
  %15 = load i8*, i8** %14, align 8
  %derefference_value12 = load i8, i8* %15, align 8
  %eqtmpX13 = icmp eq i8 %derefference_value12, 38
  store i1 %eqtmpX13, i1* %andand_result_var, align 1
  br i1 %eqtmpX13, label %cond_jump_then14, label %cond_jump_end

cond_end_block:                                   ; preds = %cond_else_block, %loop_top_block
  %16 = bitcast [8192 x i8*]* %lvtable to i8*
  %17 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %16, i64 65536)
  ret i1 true

cond_jump_then14:                                 ; preds = %cond_then_block
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %19 = bitcast i8* %18 to %sParserInfo**
  %info15 = load %sParserInfo*, %sParserInfo** %19, align 8
  %20 = getelementptr inbounds %sParserInfo, %sParserInfo* %info15, i32 0, i32 4
  %21 = load i8*, i8** %20, align 8
  %22 = ptrtoint i8* %21 to i64
  %addtmp = add nsw i64 %22, 1
  %intToPtr2 = inttoptr i64 %addtmp to i8*
  %derefference_value16 = load i8, i8* %intToPtr2, align 8
  %eqtmpX17 = icmp eq i8 %derefference_value16, 38
  %andand = and i1 %eqtmpX13, %eqtmpX17
  store i1 %andand, i1* %andand_result_var, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then14, %cond_then_block
  %andand_result_value = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value, label %cond_jump_then18, label %"cond_jump_elif0\0A"

cond_jump_then18:                                 ; preds = %cond_jump_end
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %24 = bitcast i8* %23 to %sParserInfo**
  %info20 = load %sParserInfo*, %sParserInfo** %24, align 8
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %26 = bitcast i8* %25 to %sParserInfo**
  %info21 = load %sParserInfo*, %sParserInfo** %26, align 8
  %27 = getelementptr inbounds %sParserInfo, %sParserInfo* %info21, i32 0, i32 4
  %28 = load i8*, i8** %27, align 8
  %29 = ptrtoint i8* %28 to i64
  %addtmp22 = add nsw i64 %29, 2
  %intToPtr223 = inttoptr i64 %addtmp22 to i8*
  %30 = getelementptr inbounds %sParserInfo, %sParserInfo* %info20, i32 0, i32 4
  store i8* %intToPtr223, i8** %30, align 8
  %31 = ptrtoint i8* %intToPtr223 to i64
  %subtmp = sub nsw i64 %31, 2
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %33 = bitcast i8* %32 to %sParserInfo**
  %info24 = load %sParserInfo*, %sParserInfo** %33, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info24)
  %right = alloca %sCLNode*
  %34 = bitcast %sCLNode** %right to i8*
  store i8* %34, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right, align 8
  %right25 = load %sCLNode*, %sCLNode** %right, align 8
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %36 = bitcast i8* %35 to %sParserInfo**
  %info26 = load %sParserInfo*, %sParserInfo** %36, align 8
  %37 = call i1 @expression_comparison_equal_operator(%sCLNode** %right, %sParserInfo* %info26)
  %LOGICAL_DIANEAL27 = icmp eq i1 %37, false
  br i1 %LOGICAL_DIANEAL27, label %cond_jump_then28, label %cond_end29

"cond_jump_elif0\0A":                             ; preds = %cond_jump_end
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %39 = bitcast i8* %38 to %sParserInfo**
  %info40 = load %sParserInfo*, %sParserInfo** %39, align 8
  %40 = getelementptr inbounds %sParserInfo, %sParserInfo* %info40, i32 0, i32 4
  %41 = load i8*, i8** %40, align 8
  %derefference_value41 = load i8, i8* %41, align 8
  %eqtmpX42 = icmp eq i8 %derefference_value41, 124
  store i1 %eqtmpX42, i1* %andand_result_var, align 1
  br i1 %eqtmpX42, label %cond_jump_then43, label %cond_jump_end44

"cond_jump_elif_then0\0A":                        ; preds = %cond_jump_end44
  %42 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %43 = bitcast i8* %42 to %sParserInfo**
  %info52 = load %sParserInfo*, %sParserInfo** %43, align 8
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %45 = bitcast i8* %44 to %sParserInfo**
  %info53 = load %sParserInfo*, %sParserInfo** %45, align 8
  %46 = getelementptr inbounds %sParserInfo, %sParserInfo* %info53, i32 0, i32 4
  %47 = load i8*, i8** %46, align 8
  %48 = ptrtoint i8* %47 to i64
  %addtmp54 = add nsw i64 %48, 2
  %intToPtr255 = inttoptr i64 %addtmp54 to i8*
  %49 = getelementptr inbounds %sParserInfo, %sParserInfo* %info52, i32 0, i32 4
  store i8* %intToPtr255, i8** %49, align 8
  %50 = ptrtoint i8* %intToPtr255 to i64
  %subtmp56 = sub nsw i64 %50, 2
  %IntTOPtr4b57 = inttoptr i64 %subtmp56 to i8*
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %52 = bitcast i8* %51 to %sParserInfo**
  %info58 = load %sParserInfo*, %sParserInfo** %52, align 8
  call void @skip_spaces_and_lf(%sParserInfo* %info58)
  %right59 = alloca %sCLNode*
  %53 = bitcast %sCLNode** %right59 to i8*
  store i8* %53, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store %sCLNode* null, %sCLNode** %right59, align 8
  %right60 = load %sCLNode*, %sCLNode** %right59, align 8
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %55 = bitcast i8* %54 to %sParserInfo**
  %info61 = load %sParserInfo*, %sParserInfo** %55, align 8
  %56 = call i1 @expression_comparison_equal_operator(%sCLNode** %right59, %sParserInfo* %info61)
  %LOGICAL_DIANEAL62 = icmp eq i1 %56, false
  br i1 %LOGICAL_DIANEAL62, label %cond_jump_then63, label %cond_end64

cond_else_block:                                  ; preds = %cond_jump_end44
  br label %cond_end_block

cond_end19:                                       ; preds = %after_break, %cond_end68, %cond_end33
  br label %loop_top_block

cond_jump_then28:                                 ; preds = %cond_jump_then18
  %57 = bitcast [8192 x i8*]* %lvtable to i8*
  %58 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %57, i64 65536)
  ret i1 false

cond_end29:                                       ; preds = %cond_jump_then18
  %right30 = load %sCLNode*, %sCLNode** %right, align 8
  %eqtmpX31 = icmp eq %sCLNode* %right30, null
  br i1 %eqtmpX31, label %cond_jump_then32, label %cond_end33

cond_jump_then32:                                 ; preds = %cond_end29
  %59 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %60 = bitcast i8* %59 to %sParserInfo**
  %info34 = load %sParserInfo*, %sParserInfo** %60, align 8
  call void @parser_err_msg(%sParserInfo* %info34, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_string.82, i32 0, i32 0))
  br label %cond_end33

cond_end33:                                       ; preds = %cond_jump_then32, %cond_end29
  %61 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %62 = bitcast i8* %61 to %sCLNode***
  %node35 = load %sCLNode**, %sCLNode*** %62, align 8
  %63 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %64 = bitcast i8* %63 to %sCLNode***
  %node36 = load %sCLNode**, %sCLNode*** %64, align 8
  %derefference_value37 = load %sCLNode*, %sCLNode** %node36, align 8
  %right38 = load %sCLNode*, %sCLNode** %right, align 8
  %65 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %66 = bitcast i8* %65 to %sParserInfo**
  %info39 = load %sParserInfo*, %sParserInfo** %66, align 8
  %67 = call %sCLNode* @sNodeTree_create_and_and(%sCLNode* %derefference_value37, %sCLNode* %right38, %sParserInfo* %info39)
  store %sCLNode* %67, %sCLNode** %node35, align 8
  br label %cond_end19

cond_jump_then43:                                 ; preds = %"cond_jump_elif0\0A"
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %69 = bitcast i8* %68 to %sParserInfo**
  %info45 = load %sParserInfo*, %sParserInfo** %69, align 8
  %70 = getelementptr inbounds %sParserInfo, %sParserInfo* %info45, i32 0, i32 4
  %71 = load i8*, i8** %70, align 8
  %72 = ptrtoint i8* %71 to i64
  %addtmp46 = add nsw i64 %72, 1
  %intToPtr247 = inttoptr i64 %addtmp46 to i8*
  %derefference_value48 = load i8, i8* %intToPtr247, align 8
  %eqtmpX49 = icmp eq i8 %derefference_value48, 124
  %andand50 = and i1 %eqtmpX42, %eqtmpX49
  store i1 %andand50, i1* %andand_result_var, align 1
  br label %cond_jump_end44

cond_jump_end44:                                  ; preds = %cond_jump_then43, %"cond_jump_elif0\0A"
  %andand_result_value51 = load i1, i1* %andand_result_var, align 1
  br i1 %andand_result_value51, label %"cond_jump_elif_then0\0A", label %cond_else_block

cond_jump_then63:                                 ; preds = %"cond_jump_elif_then0\0A"
  %73 = bitcast [8192 x i8*]* %lvtable to i8*
  %74 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %73, i64 65536)
  ret i1 false

cond_end64:                                       ; preds = %"cond_jump_elif_then0\0A"
  %right65 = load %sCLNode*, %sCLNode** %right59, align 8
  %eqtmpX66 = icmp eq %sCLNode* %right65, null
  br i1 %eqtmpX66, label %cond_jump_then67, label %cond_end68

cond_jump_then67:                                 ; preds = %cond_end64
  %75 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %76 = bitcast i8* %75 to %sParserInfo**
  %info69 = load %sParserInfo*, %sParserInfo** %76, align 8
  call void @parser_err_msg(%sParserInfo* %info69, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_string.83, i32 0, i32 0))
  br label %cond_end68

cond_end68:                                       ; preds = %cond_jump_then67, %cond_end64
  %77 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %78 = bitcast i8* %77 to %sCLNode***
  %node70 = load %sCLNode**, %sCLNode*** %78, align 8
  %79 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %80 = bitcast i8* %79 to %sCLNode***
  %node71 = load %sCLNode**, %sCLNode*** %80, align 8
  %derefference_value72 = load %sCLNode*, %sCLNode** %node71, align 8
  %right73 = load %sCLNode*, %sCLNode** %right59, align 8
  %81 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %82 = bitcast i8* %81 to %sParserInfo**
  %info74 = load %sParserInfo*, %sParserInfo** %82, align 8
  %83 = call %sCLNode* @sNodeTree_create_or_or(%sCLNode* %derefference_value72, %sCLNode* %right73, %sParserInfo* %info74)
  store %sCLNode* %83, %sCLNode** %node70, align 8
  br label %cond_end19

after_break:                                      ; No predecessors!
  br label %cond_end19
}

attributes #0 = { nounwind }
attributes #1 = { argmemonly nounwind }

!llvm.dbg.cu = !{!0}

!0 = distinct !DICompileUnit(language: DW_LANG_C, file: !1, producer: "neo-c", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, enums: !2)
!1 = !DIFile(filename: "src/parser.nc", directory: "/home/ab25cq/repo/neo-c/clover3")
!2 = !{}
