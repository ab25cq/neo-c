; ModuleID = 'Module native6'
source_filename = "Module native6"

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
%sCLObject = type { %sCLType*, i32, i32, %anon93 }
%anon93 = type { [32 x %CLVALUE] }

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
@global_string = private constant [4 x i8] c"map\00", align 1
@global_string.1 = private constant [25 x i8] c"type error on map.insert\00", align 1
@global_string.2 = private constant [7 x i8] c"string\00", align 1
@global_string.3 = private constant [25 x i8] c"type error on map.insert\00", align 1
@global_string.4 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.5 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.6 = private constant [32 x i8] c"unexpected error in map.insert\0A\00", align 1
@global_string.7 = private constant [4 x i8] c"map\00", align 1
@global_string.8 = private constant [21 x i8] c"type error on map.at\00", align 1
@global_string.9 = private constant [7 x i8] c"string\00", align 1
@global_string.10 = private constant [21 x i8] c"type error on map.at\00", align 1
@global_string.11 = private constant [4 x i8] c"map\00", align 1
@global_string.12 = private constant [23 x i8] c"type error on map.keys\00", align 1
@global_string.13 = private constant [4 x i8] c"map\00", align 1
@global_string.14 = private constant [23 x i8] c"type error on map.find\00", align 1
@global_string.15 = private constant [7 x i8] c"string\00", align 1
@global_string.16 = private constant [23 x i8] c"type error on map.find\00", align 1
@global_string.17 = private constant [4 x i8] c"map\00", align 1
@global_string.18 = private constant [25 x i8] c"type error on map.length\00", align 1
@global_string.19 = private constant [5 x i8] c"void\00", align 1
@global_string.20 = private constant [5 x i8] c"void\00", align 1
@global_string.21 = private constant [5 x i8] c"void\00", align 1
@global_string.22 = private constant [5 x i8] c"void\00", align 1
@global_string.23 = private constant [4 x i8] c"map\00", align 1
@global_string.24 = private constant [24 x i8] c"type error on map.equal\00", align 1
@global_string.25 = private constant [4 x i8] c"map\00", align 1
@global_string.26 = private constant [24 x i8] c"type error on map.equal\00", align 1
@global_string.27 = private constant [5 x i8] c"void\00", align 1
@global_string.28 = private constant [5 x i8] c"void\00", align 1
@global_string.29 = private constant [5 x i8] c"void\00", align 1
@global_string.30 = private constant [5 x i8] c"void\00", align 1
@global_string.31 = private constant [4 x i8] c"map\00", align 1
@global_string.32 = private constant [24 x i8] c"type error on map.equal\00", align 1
@global_string.33 = private constant [4 x i8] c"map\00", align 1
@global_string.34 = private constant [24 x i8] c"type error on map.equal\00", align 1
@global_string.35 = private constant [41 x i8] c"class not found(%s) on vm_invoke_method\0A\00", align 1
@global_string.36 = private constant [25 x i8] c"method not found(%s.%s)\0A\00", align 1
@global_string.37 = private constant [36 x i8] c"method parametor is invalid(%s.%s)\0A\00", align 1
@global_string.38 = private constant [30 x i8] c"native method error(%s.%s) 2\0A\00", align 1
@global_string.39 = private constant [5 x i8] c"void\00", align 1
@global_string.40 = private constant [5 x i8] c"void\00", align 1
@global_string.41 = private constant [4 x i8] c"map\00", align 1
@global_string.42 = private constant [24 x i8] c"type error on map.equal\00", align 1
@global_string.43 = private constant [10 x i8] c"to_string\00", align 1
@global_string.44 = private constant [2 x i8] c"\0A\00", align 1
@global_string.45 = private constant [2 x i8] c"\0A\00", align 1
@global_string.46 = private constant [10 x i8] c"to_string\00", align 1
@global_string.47 = private constant [2 x i8] c"\0A\00", align 1
@global_string.48 = private constant [2 x i8] c"\0A\00", align 1
@global_string.49 = private constant [2 x i8] c")\00", align 1
@global_string.50 = private constant [11 x i8] c"map.insert\00", align 1
@global_string.51 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.52 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.53 = private constant [32 x i8] c"unexpected error in map.insert\0A\00", align 1
@global_string.54 = private constant [7 x i8] c"map.at\00", align 1
@global_string.55 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.56 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.57 = private constant [32 x i8] c"unexpected error in map.insert\0A\00", align 1
@global_string.58 = private constant [9 x i8] c"map.find\00", align 1
@global_string.59 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.60 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.61 = private constant [32 x i8] c"unexpected error in map.insert\0A\00", align 1
@global_string.62 = private constant [11 x i8] c"map.length\00", align 1
@global_string.63 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.64 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.65 = private constant [32 x i8] c"unexpected error in map.insert\0A\00", align 1
@global_string.66 = private constant [10 x i8] c"map.equal\00", align 1
@global_string.67 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.68 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.69 = private constant [32 x i8] c"unexpected error in map.insert\0A\00", align 1
@global_string.70 = private constant [14 x i8] c"map.not_equal\00", align 1
@global_string.71 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.72 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.73 = private constant [32 x i8] c"unexpected error in map.insert\0A\00", align 1
@global_string.74 = private constant [14 x i8] c"map.to_string\00", align 1
@global_string.75 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.76 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.77 = private constant [32 x i8] c"unexpected error in map.insert\0A\00", align 1
@global_string.78 = private constant [9 x i8] c"map.keys\00", align 1
@global_string.79 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.80 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.81 = private constant [32 x i8] c"unexpected error in map.insert\0A\00", align 1
@global_string.82 = private constant [15 x i8] c"map.initialize\00", align 1
@global_string.83 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.84 = private constant [35 x i8] c"unexpected error in map.rehash(1)\0A\00", align 1
@global_string.85 = private constant [32 x i8] c"unexpected error in map.insert\0A\00", align 1

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

define void @native_init6() {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %gNativeMethods = load %map__charp_lambdap*, %map__charp_lambdap** @gNativeMethods, align 8
  %2 = call i8* @string(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_string.50, i32 0, i32 0))
  call void @"insert_charp_lambdap17_src/native6"(%map__charp_lambdap* %gNativeMethods, i8* %2, i1 (%CLVALUE**, %sVMInfo*)* @sevenstars_map_insert)
  %gNativeMethods2 = load %map__charp_lambdap*, %map__charp_lambdap** @gNativeMethods, align 8
  %3 = call i8* @string(i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_string.54, i32 0, i32 0))
  call void @"insert_charp_lambdap20_src/native6"(%map__charp_lambdap* %gNativeMethods2, i8* %3, i1 (%CLVALUE**, %sVMInfo*)* @sevenstars_map_at)
  %gNativeMethods3 = load %map__charp_lambdap*, %map__charp_lambdap** @gNativeMethods, align 8
  %4 = call i8* @string(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_string.58, i32 0, i32 0))
  call void @"insert_charp_lambdap23_src/native6"(%map__charp_lambdap* %gNativeMethods3, i8* %4, i1 (%CLVALUE**, %sVMInfo*)* @sevenstars_map_find)
  %gNativeMethods4 = load %map__charp_lambdap*, %map__charp_lambdap** @gNativeMethods, align 8
  %5 = call i8* @string(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_string.62, i32 0, i32 0))
  call void @"insert_charp_lambdap26_src/native6"(%map__charp_lambdap* %gNativeMethods4, i8* %5, i1 (%CLVALUE**, %sVMInfo*)* @sevenstars_map_length)
  %gNativeMethods5 = load %map__charp_lambdap*, %map__charp_lambdap** @gNativeMethods, align 8
  %6 = call i8* @string(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_string.66, i32 0, i32 0))
  call void @"insert_charp_lambdap29_src/native6"(%map__charp_lambdap* %gNativeMethods5, i8* %6, i1 (%CLVALUE**, %sVMInfo*)* @sevenstars_map_equal)
  %gNativeMethods6 = load %map__charp_lambdap*, %map__charp_lambdap** @gNativeMethods, align 8
  %7 = call i8* @string(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_string.70, i32 0, i32 0))
  call void @"insert_charp_lambdap32_src/native6"(%map__charp_lambdap* %gNativeMethods6, i8* %7, i1 (%CLVALUE**, %sVMInfo*)* @sevenstars_map_not_equal)
  %gNativeMethods7 = load %map__charp_lambdap*, %map__charp_lambdap** @gNativeMethods, align 8
  %8 = call i8* @string(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_string.74, i32 0, i32 0))
  call void @"insert_charp_lambdap35_src/native6"(%map__charp_lambdap* %gNativeMethods7, i8* %8, i1 (%CLVALUE**, %sVMInfo*)* @sevenstars_map_to_string)
  %gNativeMethods8 = load %map__charp_lambdap*, %map__charp_lambdap** @gNativeMethods, align 8
  %9 = call i8* @string(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_string.78, i32 0, i32 0))
  call void @"insert_charp_lambdap38_src/native6"(%map__charp_lambdap* %gNativeMethods8, i8* %9, i1 (%CLVALUE**, %sVMInfo*)* @sevenstars_map_keys)
  %gNativeMethods9 = load %map__charp_lambdap*, %map__charp_lambdap** @gNativeMethods, align 8
  %10 = call i8* @string(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_string.82, i32 0, i32 0))
  call void @"insert_charp_lambdap41_src/native6"(%map__charp_lambdap* %gNativeMethods9, i8* %10, i1 (%CLVALUE**, %sVMInfo*)* @sevenstars_map_initialize)
  %11 = bitcast [8192 x i8*]* %lvtable to i8*
  %12 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %11, i64 65536)
  ret void
}

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

define i1 @sevenstars_map_initialize(%CLVALUE** %stack_ptr, %sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %stack_ptr2 = alloca %CLVALUE**
  store %CLVALUE** %stack_ptr, %CLVALUE*** %stack_ptr2, align 8
  %2 = bitcast %CLVALUE*** %stack_ptr2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info3, align 8
  %3 = bitcast %sVMInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %info4 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %4 = call i32 @create_map_object(%sVMInfo* %info4)
  %obj = alloca i32
  %5 = bitcast i32* %obj to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store i32 %4, i32* %obj, align 4
  %stack_ptr5 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value = load %CLVALUE*, %CLVALUE** %stack_ptr5, align 8
  %obj6 = load i32, i32* %obj, align 4
  %6 = bitcast %CLVALUE* %derefference_value to i32*
  store i32 %obj6, i32* %6, align 4
  %stack_ptr7 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value8 = load %CLVALUE*, %CLVALUE** %stack_ptr7, align 8
  %7 = ptrtoint %CLVALUE* %derefference_value8 to i64
  %adddtmp = add nsw i64 %7, 4
  %IntTOPtr5c = inttoptr i64 %adddtmp to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c, %CLVALUE** %stack_ptr7, align 8
  %8 = bitcast [8192 x i8*]* %lvtable to i8*
  %9 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %8, i64 65536)
  ret i1 true
}

define i1 @sevenstars_map_insert(%CLVALUE** %stack_ptr, %sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %stack_ptr2 = alloca %CLVALUE**
  store %CLVALUE** %stack_ptr, %CLVALUE*** %stack_ptr2, align 8
  %2 = bitcast %CLVALUE*** %stack_ptr2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info3, align 8
  %3 = bitcast %sVMInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %stack_ptr4 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value = load %CLVALUE*, %CLVALUE** %stack_ptr4, align 8
  %4 = ptrtoint %CLVALUE* %derefference_value to i64
  %subtmp = sub nsw i64 %4, 12
  %IntTOPtr4b = inttoptr i64 %subtmp to %CLVALUE*
  %5 = bitcast %CLVALUE* %IntTOPtr4b to i32*
  %6 = load i32, i32* %5, align 4
  %self = alloca i32
  %7 = bitcast i32* %self to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store i32 %6, i32* %self, align 4
  %stack_ptr5 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value6 = load %CLVALUE*, %CLVALUE** %stack_ptr5, align 8
  %8 = ptrtoint %CLVALUE* %derefference_value6 to i64
  %subtmp7 = sub nsw i64 %8, 8
  %IntTOPtr4b8 = inttoptr i64 %subtmp7 to %CLVALUE*
  %9 = bitcast %CLVALUE* %IntTOPtr4b8 to i32*
  %10 = load i32, i32* %9, align 4
  %key = alloca i32
  %11 = bitcast i32* %key to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 %10, i32* %key, align 4
  %stack_ptr9 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value10 = load %CLVALUE*, %CLVALUE** %stack_ptr9, align 8
  %12 = ptrtoint %CLVALUE* %derefference_value10 to i64
  %subtmp11 = sub nsw i64 %12, 4
  %IntTOPtr4b12 = inttoptr i64 %subtmp11 to %CLVALUE*
  %13 = bitcast %CLVALUE* %IntTOPtr4b12 to i32*
  %14 = load i32, i32* %13, align 4
  %item = alloca i32
  %15 = bitcast i32* %item to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i32 %14, i32* %item, align 4
  %self13 = load i32, i32* %self, align 4
  %info14 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %16 = call i1 @check_type(i32 %self13, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_string, i32 0, i32 0), %sVMInfo* %info14)
  %LOGICAL_DIANEAL = icmp eq i1 %16, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %18 = bitcast i8* %17 to %CLVALUE***
  %stack_ptr15 = load %CLVALUE**, %CLVALUE*** %18, align 8
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %20 = bitcast i8* %19 to %sVMInfo**
  %info16 = load %sVMInfo*, %sVMInfo** %20, align 8
  call void @vm_err_msg(%CLVALUE** %stack_ptr15, %sVMInfo* %info16, i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_string.1, i32 0, i32 0))
  %21 = bitcast [8192 x i8*]* %lvtable to i8*
  %22 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %21, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %entry
  %key17 = load i32, i32* %key, align 4
  %info18 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %23 = call i1 @check_type(i32 %key17, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_string.2, i32 0, i32 0), %sVMInfo* %info18)
  %LOGICAL_DIANEAL19 = icmp eq i1 %23, false
  br i1 %LOGICAL_DIANEAL19, label %cond_jump_then20, label %cond_end21

cond_jump_then20:                                 ; preds = %cond_end
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %25 = bitcast i8* %24 to %CLVALUE***
  %stack_ptr22 = load %CLVALUE**, %CLVALUE*** %25, align 8
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %27 = bitcast i8* %26 to %sVMInfo**
  %info23 = load %sVMInfo*, %sVMInfo** %27, align 8
  call void @vm_err_msg(%CLVALUE** %stack_ptr22, %sVMInfo* %info23, i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_string.3, i32 0, i32 0))
  %28 = bitcast [8192 x i8*]* %lvtable to i8*
  %29 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %28, i64 65536)
  ret i1 false

cond_end21:                                       ; preds = %cond_end
  %self24 = load i32, i32* %self, align 4
  %30 = call %map__charp_int* @get_map_value(i32 %self24)
  %self_value = alloca %map__charp_int*
  %31 = bitcast %map__charp_int** %self_value to i8*
  store i8* %31, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store %map__charp_int* %30, %map__charp_int** %self_value, align 8
  %key25 = load i32, i32* %key, align 4
  %32 = call i8* @get_string_mem(i32 %key25)
  %key_value = alloca i8*
  %33 = bitcast i8** %key_value to i8*
  store i8* %33, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i8* %32, i8** %key_value, align 8
  %item26 = load i32, i32* %item, align 4
  %item_value = alloca i32
  %34 = bitcast i32* %item_value to i8*
  store i8* %34, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 %item26, i32* %item_value, align 4
  %self27 = load i32, i32* %self, align 4
  %35 = call %list__int* @get_map_keys(i32 %self27)
  %keys_value = alloca %list__int*
  %36 = bitcast %list__int** %keys_value to i8*
  store i8* %36, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store %list__int* %35, %list__int** %keys_value, align 8
  %self_value28 = load %map__charp_int*, %map__charp_int** %self_value, align 8
  %key_value29 = load i8*, i8** %key_value, align 8
  %item_value30 = load i32, i32* %item_value, align 4
  call void @"insert_charp_int0_src/native6"(%map__charp_int* %self_value28, i8* %key_value29, i32 %item_value30)
  %keys_value31 = load %list__int*, %list__int** %keys_value, align 8
  %key32 = load i32, i32* %key, align 4
  call void @"push_back_int3_src/native6"(%list__int* %keys_value31, i32 %key32)
  %stack_ptr33 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value34 = load %CLVALUE*, %CLVALUE** %stack_ptr33, align 8
  %self35 = load i32, i32* %self, align 4
  %37 = bitcast %CLVALUE* %derefference_value34 to i32*
  store i32 %self35, i32* %37, align 4
  %stack_ptr36 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value37 = load %CLVALUE*, %CLVALUE** %stack_ptr36, align 8
  %38 = ptrtoint %CLVALUE* %derefference_value37 to i64
  %adddtmp = add nsw i64 %38, 4
  %IntTOPtr5c = inttoptr i64 %adddtmp to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c, %CLVALUE** %stack_ptr36, align 8
  %39 = bitcast [8192 x i8*]* %lvtable to i8*
  %40 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %39, i64 65536)
  ret i1 true
}

define void @"insert_charp_int0_src/native6"(%map__charp_int* %self, i8* %key, i32 %item) {
entry:
  %result_variable36 = alloca i1
  %right = alloca i8*
  %left = alloca i8*
  %result_variable = alloca i32
  %value = alloca i8*
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %item4 = alloca i32
  store i32 %item, i32* %item4, align 4
  %4 = bitcast i32* %item4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
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
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %10 = bitcast i8* %9 to %map__charp_int**
  %self7 = load %map__charp_int*, %map__charp_int** %10, align 8
  call void @"rehash_charp_int1_src/native6"(%map__charp_int* %self7)
  br label %cond_end

cond_end:                                         ; preds = %cond_jump_then, %entry
  %key8 = load i8*, i8** %key3, align 8
  store i8* %key8, i8** %value, align 8
  br label %get_hash_key

get_hash_key:                                     ; preds = %cond_end
  %11 = bitcast i8** %value to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %result = alloca i32
  %12 = bitcast i32* %result to i8*
  store i8* %12, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  store i32 0, i32* %result, align 4
  %value9 = load i8*, i8** %value, align 8
  %p = alloca i8*
  %13 = bitcast i8** %p to i8*
  store i8* %13, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  store i8* %value9, i8** %p, align 8
  br label %loop_top_block

inline_func_end:                                  ; preds = %cond_end_block
  %result_variable20 = load i32, i32* %result_variable, align 4
  %self21 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %14 = getelementptr inbounds %map__charp_int, %map__charp_int* %self21, i32 0, i32 3
  %15 = load i32, i32* %14, align 4
  %remtmp = srem i32 %result_variable20, %15
  %hash = alloca i32
  %16 = bitcast i32* %hash to i8*
  store i8* %16, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash22 = load i32, i32* %hash, align 4
  %it = alloca i32
  %17 = bitcast i32* %it to i8*
  store i8* %17, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  store i32 %hash22, i32* %it, align 4
  br label %loop_top_block23

loop_top_block:                                   ; preds = %cond_then_block, %get_hash_key
  %p10 = load i8*, i8** %p, align 8
  %derefference_value = load i8, i8* %p10, align 8
  %18 = icmp ne i8 %derefference_value, 0
  br i1 %18, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %20 = bitcast i8* %19 to i32*
  %result11 = load i32, i32* %20, align 4
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %22 = bitcast i8* %21 to i8**
  %p12 = load i8*, i8** %22, align 8
  %derefference_value13 = load i8, i8* %p12, align 8
  %sext13 = zext i8 %derefference_value13 to i32
  %addtmp = add nsw i32 %result11, %sext13
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %24 = bitcast i8* %23 to i32*
  store i32 %addtmp, i32* %24, align 4
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %26 = bitcast i8* %25 to i8**
  %p14 = load i8*, i8** %26, align 8
  %derefference_value15 = load i8, i8* %p14, align 8
  %sext1316 = zext i8 %derefference_value15 to i32
  %subttmp = sub nsw i32 %addtmp, %sext1316
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %28 = bitcast i8* %27 to i8**
  %p17 = load i8*, i8** %28, align 8
  %29 = ptrtoint i8* %p17 to i64
  %addtmp18 = add nsw i64 %29, 1
  %intToPtr2 = inttoptr i64 %addtmp18 to i8*
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %31 = bitcast i8* %30 to i8**
  store i8* %intToPtr2, i8** %31, align 8
  %32 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %32, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %result19 = load i32, i32* %result, align 4
  store i32 %result19, i32* %result_variable, align 4
  br label %inline_func_end

loop_top_block23:                                 ; preds = %cond_end29, %inline_func_end
  br i1 true, label %cond_then_block24, label %cond_end_block25

cond_then_block24:                                ; preds = %loop_top_block23
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %34 = bitcast i8* %33 to %map__charp_int**
  %self26 = load %map__charp_int*, %map__charp_int** %34, align 8
  %35 = getelementptr inbounds %map__charp_int, %map__charp_int* %self26, i32 0, i32 1
  %36 = load i1*, i1** %35, align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %38 = bitcast i8* %37 to i32*
  %it27 = load i32, i32* %38, align 4
  %element_addressB = getelementptr i1, i1* %36, i32 %it27
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then28, label %cond_else_block

cond_end_block25:                                 ; preds = %cond_else_block, %cond_end51, %loop_top_block23
  %39 = bitcast [8192 x i8*]* %lvtable to i8*
  %40 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %39, i64 65536)
  ret void

cond_jump_then28:                                 ; preds = %cond_then_block24
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %42 = bitcast i8* %41 to %map__charp_int**
  %self30 = load %map__charp_int*, %map__charp_int** %42, align 8
  %43 = getelementptr inbounds %map__charp_int, %map__charp_int* %self30, i32 0, i32 0
  %44 = load i8**, i8*** %43, align 8
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %46 = bitcast i8* %45 to i32*
  %it31 = load i32, i32* %46, align 4
  %element_addressB32 = getelementptr i8*, i8** %44, i32 %it31
  %element33 = load i8*, i8** %element_addressB32, align 8
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %48 = bitcast i8* %47 to i8**
  %key34 = load i8*, i8** %48, align 8
  store i8* %element33, i8** %left, align 8
  store i8* %key34, i8** %right, align 8
  br label %equals

cond_else_block:                                  ; preds = %cond_then_block24
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %50 = bitcast i8* %49 to %map__charp_int**
  %self74 = load %map__charp_int*, %map__charp_int** %50, align 8
  %51 = getelementptr inbounds %map__charp_int, %map__charp_int* %self74, i32 0, i32 1
  %52 = load i1*, i1** %51, align 8
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %54 = bitcast i8* %53 to i32*
  %it75 = load i32, i32* %54, align 4
  %element_addressD76 = getelementptr i1, i1* %52, i32 %it75
  store i1 true, i1* %element_addressD76, align 1
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %56 = bitcast i8* %55 to %map__charp_int**
  %self77 = load %map__charp_int*, %map__charp_int** %56, align 8
  %57 = getelementptr inbounds %map__charp_int, %map__charp_int* %self77, i32 0, i32 0
  %58 = load i8**, i8*** %57, align 8
  %59 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %60 = bitcast i8* %59 to i32*
  %it78 = load i32, i32* %60, align 4
  %61 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %62 = bitcast i8* %61 to i8**
  %key79 = load i8*, i8** %62, align 8
  %element_addressD80 = getelementptr i8*, i8** %58, i32 %it78
  store i8* %key79, i8** %element_addressD80, align 8
  %63 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %64 = bitcast i8* %63 to %map__charp_int**
  %self81 = load %map__charp_int*, %map__charp_int** %64, align 8
  %65 = getelementptr inbounds %map__charp_int, %map__charp_int* %self81, i32 0, i32 2
  %66 = load i32*, i32** %65, align 8
  %67 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %68 = bitcast i8* %67 to i32*
  %it82 = load i32, i32* %68, align 4
  %69 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %70 = bitcast i8* %69 to i32*
  %item83 = load i32, i32* %70, align 4
  %element_addressD84 = getelementptr i32, i32* %66, i32 %it82
  store i32 %item83, i32* %element_addressD84, align 4
  %71 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %72 = bitcast i8* %71 to %map__charp_int**
  %self85 = load %map__charp_int*, %map__charp_int** %72, align 8
  %73 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %74 = bitcast i8* %73 to %map__charp_int**
  %self86 = load %map__charp_int*, %map__charp_int** %74, align 8
  %75 = getelementptr inbounds %map__charp_int, %map__charp_int* %self86, i32 0, i32 4
  %76 = load i32, i32* %75, align 4
  %addtmp87 = add nsw i32 %76, 1
  %77 = getelementptr inbounds %map__charp_int, %map__charp_int* %self85, i32 0, i32 4
  store i32 %addtmp87, i32* %77, align 4
  %subttmp88 = sub nsw i32 %addtmp87, 1
  br label %cond_end_block25

cond_end29:                                       ; preds = %after_break89, %cond_end70
  br label %loop_top_block23

equals:                                           ; preds = %cond_jump_then28
  %78 = bitcast i8** %left to i8*
  store i8* %78, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %79 = bitcast i8** %right to i8*
  store i8* %79, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %left37 = load i8*, i8** %left, align 8
  %right38 = load i8*, i8** %right, align 8
  %80 = call i32 @strcmp(i8* %left37, i8* %right38)
  %eqtmpX = icmp eq i32 %80, 0
  store i1 %eqtmpX, i1* %result_variable36, align 1
  br label %inline_func_end35

inline_func_end35:                                ; preds = %equals
  %result_variable39 = load i1, i1* %result_variable36, align 1
  br i1 %result_variable39, label %cond_jump_then40, label %cond_end41

cond_jump_then40:                                 ; preds = %inline_func_end35
  br i1 false, label %cond_jump_then42, label %cond_end43

cond_end41:                                       ; preds = %after_break, %inline_func_end35
  %81 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %82 = bitcast i8* %81 to i32*
  %it63 = load i32, i32* %82, align 4
  %addtmp64 = add nsw i32 %it63, 1
  %83 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %84 = bitcast i8* %83 to i32*
  store i32 %addtmp64, i32* %84, align 4
  %subttmp65 = sub nsw i32 %addtmp64, 1
  %85 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %86 = bitcast i8* %85 to i32*
  %it66 = load i32, i32* %86, align 4
  %87 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %88 = bitcast i8* %87 to %map__charp_int**
  %self67 = load %map__charp_int*, %map__charp_int** %88, align 8
  %89 = getelementptr inbounds %map__charp_int, %map__charp_int* %self67, i32 0, i32 3
  %90 = load i32, i32* %89, align 4
  %getmp68 = icmp sge i32 %it66, %90
  br i1 %getmp68, label %cond_jump_then69, label %"cond_jump_elif0\0A"

cond_jump_then42:                                 ; preds = %cond_jump_then40
  %91 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %92 = bitcast i8* %91 to %map__charp_int**
  %self44 = load %map__charp_int*, %map__charp_int** %92, align 8
  %93 = getelementptr inbounds %map__charp_int, %map__charp_int* %self44, i32 0, i32 0
  %94 = load i8**, i8*** %93, align 8
  %95 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %96 = bitcast i8* %95 to i32*
  %it45 = load i32, i32* %96, align 4
  %element_addressB46 = getelementptr i8*, i8** %94, i32 %it45
  %element47 = load i8*, i8** %element_addressB46, align 8
  %97 = load i8*, i8** %element_addressB46, align 8
  %98 = ptrtoint i8* %97 to i64
  %99 = icmp ne i64 %98, 0
  br i1 %99, label %cond_then_block48, label %cond_end49

cond_end43:                                       ; preds = %cond_end49, %cond_jump_then40
  br i1 false, label %cond_jump_then50, label %cond_end51

cond_then_block48:                                ; preds = %cond_jump_then42
  br label %cond_end49

cond_end49:                                       ; preds = %cond_then_block48, %cond_jump_then42
  call void @ncfree(i8* %97)
  br label %cond_end43

cond_jump_then50:                                 ; preds = %cond_end43
  %100 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %101 = bitcast i8* %100 to %map__charp_int**
  %self52 = load %map__charp_int*, %map__charp_int** %101, align 8
  %102 = getelementptr inbounds %map__charp_int, %map__charp_int* %self52, i32 0, i32 2
  %103 = load i32*, i32** %102, align 8
  %104 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %105 = bitcast i8* %104 to i32*
  %it53 = load i32, i32* %105, align 4
  %element_addressB54 = getelementptr i32, i32* %103, i32 %it53
  %element55 = load i32, i32* %element_addressB54, align 4
  %106 = load i32, i32* %element_addressB54, align 8
  br label %cond_end51

cond_end51:                                       ; preds = %cond_jump_then50, %cond_end43
  %107 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %108 = bitcast i8* %107 to %map__charp_int**
  %self56 = load %map__charp_int*, %map__charp_int** %108, align 8
  %109 = getelementptr inbounds %map__charp_int, %map__charp_int* %self56, i32 0, i32 0
  %110 = load i8**, i8*** %109, align 8
  %111 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %112 = bitcast i8* %111 to i32*
  %it57 = load i32, i32* %112, align 4
  %113 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %114 = bitcast i8* %113 to i8**
  %key58 = load i8*, i8** %114, align 8
  %element_addressD = getelementptr i8*, i8** %110, i32 %it57
  store i8* %key58, i8** %element_addressD, align 8
  %115 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %116 = bitcast i8* %115 to %map__charp_int**
  %self59 = load %map__charp_int*, %map__charp_int** %116, align 8
  %117 = getelementptr inbounds %map__charp_int, %map__charp_int* %self59, i32 0, i32 2
  %118 = load i32*, i32** %117, align 8
  %119 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %120 = bitcast i8* %119 to i32*
  %it60 = load i32, i32* %120, align 4
  %121 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %122 = bitcast i8* %121 to i32*
  %item61 = load i32, i32* %122, align 4
  %element_addressD62 = getelementptr i32, i32* %118, i32 %it60
  store i32 %item61, i32* %element_addressD62, align 4
  br label %cond_end_block25

after_break:                                      ; No predecessors!
  br label %cond_end41

cond_jump_then69:                                 ; preds = %cond_end41
  %123 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %124 = bitcast i8* %123 to i32*
  store i32 0, i32* %124, align 4
  br label %cond_end70

"cond_jump_elif0\0A":                             ; preds = %cond_end41
  %125 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %126 = bitcast i8* %125 to i32*
  %it71 = load i32, i32* %126, align 4
  %127 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %128 = bitcast i8* %127 to i32*
  %hash72 = load i32, i32* %128, align 4
  %eqtmpX73 = icmp eq i32 %it71, %hash72
  br i1 %eqtmpX73, label %"cond_jump_elif_then0\0A", label %cond_end70

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %129 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_string.6, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end70

cond_end70:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then69
  br label %cond_end29

after_break89:                                    ; No predecessors!
  br label %cond_end29
}

define void @"rehash_charp_int1_src/native6"(%map__charp_int* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %self3 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %3 = getelementptr inbounds %map__charp_int, %map__charp_int* %self3, i32 0, i32 3
  %4 = load i32, i32* %3, align 4
  %multtmp = mul nsw i32 %4, 3
  %size = alloca i32
  %5 = bitcast i32* %size to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  store i32 %multtmp, i32* %size, align 4
  %size4 = load i32, i32* %size, align 4
  %sext14 = zext i32 %size4 to i64
  %6 = call i8* @nccalloc(i64 %sext14, i64 8)
  %7 = bitcast i8* %6 to i8**
  %keys = alloca i8**
  %8 = bitcast i8*** %keys to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  store i8** %7, i8*** %keys, align 8
  %size5 = load i32, i32* %size, align 4
  %sext146 = zext i32 %size5 to i64
  %9 = call i8* @nccalloc(i64 %sext146, i64 4)
  %10 = bitcast i8* %9 to i32*
  %items = alloca i32*
  %11 = bitcast i32** %items to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 469), align 8
  store i32* %10, i32** %items, align 8
  %size7 = load i32, i32* %size, align 4
  %sext148 = zext i32 %size7 to i64
  %12 = call i8* @nccalloc(i64 %sext148, i64 1)
  %13 = bitcast i8* %12 to i1*
  %item_existance = alloca i1*
  %14 = bitcast i1** %item_existance to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  store i1* %13, i1** %item_existance, align 8
  %len = alloca i32
  %15 = bitcast i32* %len to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 471), align 8
  store i32 0, i32* %len, align 4
  %self9 = load %map__charp_int*, %map__charp_int** %self2, align 8
  call void @"each_charp_int2_src/native6"(%map__charp_int* %self9, void (i8*, i32, i1*)* @native6_lambda0)
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

define void @native6_lambda0(i8* %it, i32 %it2, i1* %it3) {
entry:
  %result_variable = alloca i32
  %value = alloca i8*
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i8*
  store i8* %it, i8** %it4, align 8
  %2 = bitcast i8** %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %it25 = alloca i32
  store i32 %it2, i32* %it25, align 4
  %3 = bitcast i32* %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 473), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  %it7 = load i8*, i8** %it4, align 8
  store i8* %it7, i8** %value, align 8
  br label %get_hash_key

get_hash_key:                                     ; preds = %entry
  %5 = bitcast i8** %value to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 477), align 8
  %result = alloca i32
  %6 = bitcast i32* %result to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 478), align 8
  store i32 0, i32* %result, align 4
  %value8 = load i8*, i8** %value, align 8
  %p = alloca i8*
  %7 = bitcast i8** %p to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 479), align 8
  store i8* %value8, i8** %p, align 8
  br label %loop_top_block

inline_func_end:                                  ; preds = %cond_end_block
  %result_variable19 = load i32, i32* %result_variable, align 4
  %8 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %9 = bitcast i8* %8 to i32*
  %size = load i32, i32* %9, align 4
  %remtmp = srem i32 %result_variable19, %size
  %hash = alloca i32
  %10 = bitcast i32* %hash to i8*
  store i8* %10, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 475), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash20 = load i32, i32* %hash, align 4
  %n = alloca i32
  %11 = bitcast i32* %n to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 476), align 8
  store i32 %hash20, i32* %n, align 4
  br label %loop_top_block21

loop_top_block:                                   ; preds = %cond_then_block, %get_hash_key
  %p9 = load i8*, i8** %p, align 8
  %derefference_value = load i8, i8* %p9, align 8
  %12 = icmp ne i8 %derefference_value, 0
  br i1 %12, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 478), align 8
  %14 = bitcast i8* %13 to i32*
  %result10 = load i32, i32* %14, align 4
  %15 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 479), align 8
  %16 = bitcast i8* %15 to i8**
  %p11 = load i8*, i8** %16, align 8
  %derefference_value12 = load i8, i8* %p11, align 8
  %sext13 = zext i8 %derefference_value12 to i32
  %addtmp = add nsw i32 %result10, %sext13
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 478), align 8
  %18 = bitcast i8* %17 to i32*
  store i32 %addtmp, i32* %18, align 4
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 479), align 8
  %20 = bitcast i8* %19 to i8**
  %p13 = load i8*, i8** %20, align 8
  %derefference_value14 = load i8, i8* %p13, align 8
  %sext1315 = zext i8 %derefference_value14 to i32
  %subttmp = sub nsw i32 %addtmp, %sext1315
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 479), align 8
  %22 = bitcast i8* %21 to i8**
  %p16 = load i8*, i8** %22, align 8
  %23 = ptrtoint i8* %p16 to i64
  %addtmp17 = add nsw i64 %23, 1
  %intToPtr2 = inttoptr i64 %addtmp17 to i8*
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 479), align 8
  %25 = bitcast i8* %24 to i8**
  store i8* %intToPtr2, i8** %25, align 8
  %26 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %26, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %result18 = load i32, i32* %result, align 4
  store i32 %result18, i32* %result_variable, align 4
  br label %inline_func_end

loop_top_block21:                                 ; preds = %cond_end, %inline_func_end
  br i1 true, label %cond_then_block22, label %cond_end_block23

cond_then_block22:                                ; preds = %loop_top_block21
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %28 = bitcast i8* %27 to i1**
  %item_existance = load i1*, i1** %28, align 8
  %29 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 476), align 8
  %30 = bitcast i8* %29 to i32*
  %n24 = load i32, i32* %30, align 4
  %element_addressB = getelementptr i1, i1* %item_existance, i32 %n24
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then, label %cond_else_block

cond_end_block23:                                 ; preds = %cond_else_block, %loop_top_block21
  %31 = bitcast [8192 x i8*]* %lvtable to i8*
  %32 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %31, i64 65536)
  ret void

cond_jump_then:                                   ; preds = %cond_then_block22
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 476), align 8
  %34 = bitcast i8* %33 to i32*
  %n25 = load i32, i32* %34, align 4
  %addtmp26 = add nsw i32 %n25, 1
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 476), align 8
  %36 = bitcast i8* %35 to i32*
  store i32 %addtmp26, i32* %36, align 4
  %subttmp27 = sub nsw i32 %addtmp26, 1
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 476), align 8
  %38 = bitcast i8* %37 to i32*
  %n28 = load i32, i32* %38, align 4
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %40 = bitcast i8* %39 to i32*
  %size29 = load i32, i32* %40, align 4
  %getmp = icmp sge i32 %n28, %size29
  br i1 %getmp, label %cond_jump_then30, label %"cond_jump_elif0\0A"

cond_else_block:                                  ; preds = %cond_then_block22
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %42 = bitcast i8* %41 to i1**
  %item_existance34 = load i1*, i1** %42, align 8
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 476), align 8
  %44 = bitcast i8* %43 to i32*
  %n35 = load i32, i32* %44, align 4
  %element_addressD = getelementptr i1, i1* %item_existance34, i32 %n35
  store i1 true, i1* %element_addressD, align 1
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %46 = bitcast i8* %45 to i8***
  %keys = load i8**, i8*** %46, align 8
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 476), align 8
  %48 = bitcast i8* %47 to i32*
  %n36 = load i32, i32* %48, align 4
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %50 = bitcast i8* %49 to i8**
  %it37 = load i8*, i8** %50, align 8
  %element_addressD38 = getelementptr i8*, i8** %keys, i32 %n36
  store i8* %it37, i8** %element_addressD38, align 8
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 469), align 8
  %52 = bitcast i8* %51 to i32**
  %items = load i32*, i32** %52, align 8
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 476), align 8
  %54 = bitcast i8* %53 to i32*
  %n39 = load i32, i32* %54, align 4
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 473), align 8
  %56 = bitcast i8* %55 to i32*
  %it240 = load i32, i32* %56, align 4
  %element_addressD41 = getelementptr i32, i32* %items, i32 %n39
  store i32 %it240, i32* %element_addressD41, align 4
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 471), align 8
  %58 = bitcast i8* %57 to i32*
  %len = load i32, i32* %58, align 4
  %addtmp42 = add nsw i32 %len, 1
  %59 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 471), align 8
  %60 = bitcast i8* %59 to i32*
  store i32 %addtmp42, i32* %60, align 4
  %subttmp43 = sub nsw i32 %addtmp42, 1
  br label %cond_end_block23

cond_end:                                         ; preds = %after_break, %cond_end31
  br label %loop_top_block21

cond_jump_then30:                                 ; preds = %cond_jump_then
  %61 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 476), align 8
  %62 = bitcast i8* %61 to i32*
  store i32 0, i32* %62, align 4
  br label %cond_end31

"cond_jump_elif0\0A":                             ; preds = %cond_jump_then
  %63 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 476), align 8
  %64 = bitcast i8* %63 to i32*
  %n32 = load i32, i32* %64, align 4
  %65 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 475), align 8
  %66 = bitcast i8* %65 to i32*
  %hash33 = load i32, i32* %66, align 4
  %eqtmpX = icmp eq i32 %n32, %hash33
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end31

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %67 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.5, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end31

cond_end31:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then30
  br label %cond_end

after_break:                                      ; No predecessors!
  br label %cond_end
}

define void @"each_charp_int2_src/native6"(%map__charp_int* %self, void (i8*, i32, i1*)* %block_) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %block_3 = alloca void (i8*, i32, i1*)*
  store void (i8*, i32, i1*)* %block_, void (i8*, i32, i1*)** %block_3, align 8
  %3 = bitcast void (i8*, i32, i1*)** %block_3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 473), align 8
  %i_ = alloca i32
  %4 = bitcast i32* %i_ to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  store i32 0, i32* %i_, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %i_4 = load i32, i32* %i_, align 4
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %6 = bitcast i8* %5 to %map__charp_int**
  %self5 = load %map__charp_int*, %map__charp_int** %6, align 8
  %7 = getelementptr inbounds %map__charp_int, %map__charp_int* %self5, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %letmp = icmp slt i32 %i_4, %8
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
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
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 475), align 8
  store i1 false, i1* %end_flag_, align 1
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 473), align 8
  %17 = bitcast i8* %16 to void (i8*, i32, i1*)**
  %block_8 = load void (i8*, i32, i1*)*, void (i8*, i32, i1*)** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %19 = bitcast i8* %18 to %map__charp_int**
  %self9 = load %map__charp_int*, %map__charp_int** %19, align 8
  %20 = getelementptr inbounds %map__charp_int, %map__charp_int* %self9, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  %23 = bitcast i8* %22 to i32*
  %i_10 = load i32, i32* %23, align 4
  %element_addressB11 = getelementptr i8*, i8** %21, i32 %i_10
  %element12 = load i8*, i8** %element_addressB11, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %25 = bitcast i8* %24 to %map__charp_int**
  %self13 = load %map__charp_int*, %map__charp_int** %25, align 8
  %26 = getelementptr inbounds %map__charp_int, %map__charp_int* %self13, i32 0, i32 2
  %27 = load i32*, i32** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
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

define void @"push_back_int3_src/native6"(%list__int* %self, i32 %item) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %list__int*
  store %list__int* %self, %list__int** %self2, align 8
  %2 = bitcast %list__int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %item3 = alloca i32
  store i32 %item, i32* %item3, align 4
  %3 = bitcast i32* %item3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
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
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store %list_item__int* %7, %list_item__int** %litem, align 8
  %litem5 = load %list_item__int*, %list_item__int** %litem, align 8
  %9 = getelementptr inbounds %list_item__int, %list_item__int* %litem5, i32 0, i32 1
  store %list_item__int* null, %list_item__int** %9, align 8
  %litem6 = load %list_item__int*, %list_item__int** %litem, align 8
  %10 = getelementptr inbounds %list_item__int, %list_item__int* %litem6, i32 0, i32 2
  store %list_item__int* null, %list_item__int** %10, align 8
  %litem7 = load %list_item__int*, %list_item__int** %litem, align 8
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %12 = bitcast i8* %11 to i32*
  %item8 = load i32, i32* %12, align 4
  %13 = getelementptr inbounds %list_item__int, %list_item__int* %litem7, i32 0, i32 0
  store i32 %item8, i32* %13, align 4
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %15 = bitcast i8* %14 to %list__int**
  %self9 = load %list__int*, %list__int** %15, align 8
  %litem10 = load %list_item__int*, %list_item__int** %litem, align 8
  %16 = getelementptr inbounds %list__int, %list__int* %self9, i32 0, i32 1
  store %list_item__int* %litem10, %list_item__int** %16, align 8
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
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
  store i8* %24, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store %list_item__int* %23, %list_item__int** %litem15, align 8
  %litem16 = load %list_item__int*, %list_item__int** %litem15, align 8
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
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
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %32 = bitcast i8* %31 to i32*
  %item20 = load i32, i32* %32, align 4
  %33 = getelementptr inbounds %list_item__int, %list_item__int* %litem19, i32 0, i32 0
  store i32 %item20, i32* %33, align 4
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %35 = bitcast i8* %34 to %list__int**
  %self21 = load %list__int*, %list__int** %35, align 8
  %litem22 = load %list_item__int*, %list_item__int** %litem15, align 8
  %36 = getelementptr inbounds %list__int, %list__int* %self21, i32 0, i32 1
  store %list_item__int* %litem22, %list_item__int** %36, align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
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
  store i8* %44, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store %list_item__int* %43, %list_item__int** %litem25, align 8
  %litem26 = load %list_item__int*, %list_item__int** %litem25, align 8
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
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
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %52 = bitcast i8* %51 to i32*
  %item30 = load i32, i32* %52, align 4
  %53 = getelementptr inbounds %list_item__int, %list_item__int* %litem29, i32 0, i32 0
  store i32 %item30, i32* %53, align 4
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %55 = bitcast i8* %54 to %list__int**
  %self31 = load %list__int*, %list__int** %55, align 8
  %56 = getelementptr inbounds %list__int, %list__int* %self31, i32 0, i32 1
  %57 = load %list_item__int*, %list_item__int** %56, align 8
  %litem32 = load %list_item__int*, %list_item__int** %litem25, align 8
  %58 = getelementptr inbounds %list_item__int, %list_item__int* %57, i32 0, i32 2
  store %list_item__int* %litem32, %list_item__int** %58, align 8
  %59 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
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

define i1 @sevenstars_map_at(%CLVALUE** %stack_ptr, %sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %stack_ptr2 = alloca %CLVALUE**
  store %CLVALUE** %stack_ptr, %CLVALUE*** %stack_ptr2, align 8
  %2 = bitcast %CLVALUE*** %stack_ptr2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info3, align 8
  %3 = bitcast %sVMInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %stack_ptr4 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value = load %CLVALUE*, %CLVALUE** %stack_ptr4, align 8
  %4 = ptrtoint %CLVALUE* %derefference_value to i64
  %subtmp = sub nsw i64 %4, 12
  %IntTOPtr4b = inttoptr i64 %subtmp to %CLVALUE*
  %5 = bitcast %CLVALUE* %IntTOPtr4b to i32*
  %6 = load i32, i32* %5, align 4
  %self = alloca i32
  %7 = bitcast i32* %self to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store i32 %6, i32* %self, align 4
  %stack_ptr5 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value6 = load %CLVALUE*, %CLVALUE** %stack_ptr5, align 8
  %8 = ptrtoint %CLVALUE* %derefference_value6 to i64
  %subtmp7 = sub nsw i64 %8, 8
  %IntTOPtr4b8 = inttoptr i64 %subtmp7 to %CLVALUE*
  %9 = bitcast %CLVALUE* %IntTOPtr4b8 to i32*
  %10 = load i32, i32* %9, align 4
  %key = alloca i32
  %11 = bitcast i32* %key to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 %10, i32* %key, align 4
  %stack_ptr9 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value10 = load %CLVALUE*, %CLVALUE** %stack_ptr9, align 8
  %12 = ptrtoint %CLVALUE* %derefference_value10 to i64
  %subtmp11 = sub nsw i64 %12, 4
  %IntTOPtr4b12 = inttoptr i64 %subtmp11 to %CLVALUE*
  %13 = bitcast %CLVALUE* %IntTOPtr4b12 to i32*
  %14 = load i32, i32* %13, align 4
  %default_value = alloca i32
  %15 = bitcast i32* %default_value to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i32 %14, i32* %default_value, align 4
  %self13 = load i32, i32* %self, align 4
  %info14 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %16 = call i1 @check_type(i32 %self13, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_string.7, i32 0, i32 0), %sVMInfo* %info14)
  %LOGICAL_DIANEAL = icmp eq i1 %16, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %18 = bitcast i8* %17 to %CLVALUE***
  %stack_ptr15 = load %CLVALUE**, %CLVALUE*** %18, align 8
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %20 = bitcast i8* %19 to %sVMInfo**
  %info16 = load %sVMInfo*, %sVMInfo** %20, align 8
  call void @vm_err_msg(%CLVALUE** %stack_ptr15, %sVMInfo* %info16, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_string.8, i32 0, i32 0))
  %21 = bitcast [8192 x i8*]* %lvtable to i8*
  %22 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %21, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %entry
  %key17 = load i32, i32* %key, align 4
  %info18 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %23 = call i1 @check_type(i32 %key17, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_string.9, i32 0, i32 0), %sVMInfo* %info18)
  %LOGICAL_DIANEAL19 = icmp eq i1 %23, false
  br i1 %LOGICAL_DIANEAL19, label %cond_jump_then20, label %cond_end21

cond_jump_then20:                                 ; preds = %cond_end
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %25 = bitcast i8* %24 to %CLVALUE***
  %stack_ptr22 = load %CLVALUE**, %CLVALUE*** %25, align 8
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %27 = bitcast i8* %26 to %sVMInfo**
  %info23 = load %sVMInfo*, %sVMInfo** %27, align 8
  call void @vm_err_msg(%CLVALUE** %stack_ptr22, %sVMInfo* %info23, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_string.10, i32 0, i32 0))
  %28 = bitcast [8192 x i8*]* %lvtable to i8*
  %29 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %28, i64 65536)
  ret i1 false

cond_end21:                                       ; preds = %cond_end
  %self24 = load i32, i32* %self, align 4
  %30 = call %map__charp_int* @get_map_value(i32 %self24)
  %self_value = alloca %map__charp_int*
  %31 = bitcast %map__charp_int** %self_value to i8*
  store i8* %31, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store %map__charp_int* %30, %map__charp_int** %self_value, align 8
  %key25 = load i32, i32* %key, align 4
  %32 = call i8* @get_string_mem(i32 %key25)
  %key_value = alloca i8*
  %33 = bitcast i8** %key_value to i8*
  store i8* %33, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i8* %32, i8** %key_value, align 8
  %default_value26 = load i32, i32* %default_value, align 4
  %default_value_value = alloca i32
  %34 = bitcast i32* %default_value_value to i8*
  store i8* %34, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 %default_value26, i32* %default_value_value, align 4
  %self_value27 = load %map__charp_int*, %map__charp_int** %self_value, align 8
  %key_value28 = load i8*, i8** %key_value, align 8
  %default_value_value29 = load i32, i32* %default_value_value, align 4
  %35 = call i32 @"at_charp_int4_src/native6"(%map__charp_int* %self_value27, i8* %key_value28, i32 %default_value_value29)
  %result = alloca i32
  %36 = bitcast i32* %result to i8*
  store i8* %36, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i32 %35, i32* %result, align 4
  %stack_ptr30 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value31 = load %CLVALUE*, %CLVALUE** %stack_ptr30, align 8
  %result32 = load i32, i32* %result, align 4
  %37 = bitcast %CLVALUE* %derefference_value31 to i32*
  store i32 %result32, i32* %37, align 4
  %stack_ptr33 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value34 = load %CLVALUE*, %CLVALUE** %stack_ptr33, align 8
  %38 = ptrtoint %CLVALUE* %derefference_value34 to i64
  %adddtmp = add nsw i64 %38, 4
  %IntTOPtr5c = inttoptr i64 %adddtmp to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c, %CLVALUE** %stack_ptr33, align 8
  %39 = bitcast [8192 x i8*]* %lvtable to i8*
  %40 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %39, i64 65536)
  ret i1 true
}

define i32 @"at_charp_int4_src/native6"(%map__charp_int* %self, i8* %key, i32 %default_value) {
entry:
  %result_variable31 = alloca i1
  %right = alloca i8*
  %left = alloca i8*
  %result_variable = alloca i32
  %value = alloca i8*
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %default_value4 = alloca i32
  store i32 %default_value, i32* %default_value4, align 4
  %4 = bitcast i32* %default_value4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %key5 = load i8*, i8** %key3, align 8
  store i8* %key5, i8** %value, align 8
  br label %get_hash_key

get_hash_key:                                     ; preds = %entry
  %5 = bitcast i8** %value to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %result = alloca i32
  %6 = bitcast i32* %result to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  store i32 0, i32* %result, align 4
  %value6 = load i8*, i8** %value, align 8
  %p = alloca i8*
  %7 = bitcast i8** %p to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  store i8* %value6, i8** %p, align 8
  br label %loop_top_block

inline_func_end:                                  ; preds = %cond_end_block
  %result_variable17 = load i32, i32* %result_variable, align 4
  %self18 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %8 = getelementptr inbounds %map__charp_int, %map__charp_int* %self18, i32 0, i32 3
  %9 = load i32, i32* %8, align 4
  %remtmp = srem i32 %result_variable17, %9
  %hash = alloca i32
  %10 = bitcast i32* %hash to i8*
  store i8* %10, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash19 = load i32, i32* %hash, align 4
  %it = alloca i32
  %11 = bitcast i32* %it to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  store i32 %hash19, i32* %it, align 4
  br label %loop_top_block20

loop_top_block:                                   ; preds = %cond_then_block, %get_hash_key
  %p7 = load i8*, i8** %p, align 8
  %derefference_value = load i8, i8* %p7, align 8
  %12 = icmp ne i8 %derefference_value, 0
  br i1 %12, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %14 = bitcast i8* %13 to i32*
  %result8 = load i32, i32* %14, align 4
  %15 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %16 = bitcast i8* %15 to i8**
  %p9 = load i8*, i8** %16, align 8
  %derefference_value10 = load i8, i8* %p9, align 8
  %sext13 = zext i8 %derefference_value10 to i32
  %addtmp = add nsw i32 %result8, %sext13
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %18 = bitcast i8* %17 to i32*
  store i32 %addtmp, i32* %18, align 4
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %20 = bitcast i8* %19 to i8**
  %p11 = load i8*, i8** %20, align 8
  %derefference_value12 = load i8, i8* %p11, align 8
  %sext1313 = zext i8 %derefference_value12 to i32
  %subttmp = sub nsw i32 %addtmp, %sext1313
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %22 = bitcast i8* %21 to i8**
  %p14 = load i8*, i8** %22, align 8
  %23 = ptrtoint i8* %p14 to i64
  %addtmp15 = add nsw i64 %23, 1
  %intToPtr2 = inttoptr i64 %addtmp15 to i8*
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %25 = bitcast i8* %24 to i8**
  store i8* %intToPtr2, i8** %25, align 8
  %26 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %26, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %result16 = load i32, i32* %result, align 4
  store i32 %result16, i32* %result_variable, align 4
  br label %inline_func_end

loop_top_block20:                                 ; preds = %cond_end, %inline_func_end
  br i1 true, label %cond_then_block21, label %cond_end_block22

cond_then_block21:                                ; preds = %loop_top_block20
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %28 = bitcast i8* %27 to %map__charp_int**
  %self23 = load %map__charp_int*, %map__charp_int** %28, align 8
  %29 = getelementptr inbounds %map__charp_int, %map__charp_int* %self23, i32 0, i32 1
  %30 = load i1*, i1** %29, align 8
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %32 = bitcast i8* %31 to i32*
  %it24 = load i32, i32* %32, align 4
  %element_addressB = getelementptr i1, i1* %30, i32 %it24
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then, label %cond_else_block

cond_end_block22:                                 ; preds = %loop_top_block20
  %default_value53 = load i32, i32* %default_value4, align 4
  %33 = bitcast [8192 x i8*]* %lvtable to i8*
  %34 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %33, i64 65536)
  ret i32 %default_value53

cond_jump_then:                                   ; preds = %cond_then_block21
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %36 = bitcast i8* %35 to %map__charp_int**
  %self25 = load %map__charp_int*, %map__charp_int** %36, align 8
  %37 = getelementptr inbounds %map__charp_int, %map__charp_int* %self25, i32 0, i32 0
  %38 = load i8**, i8*** %37, align 8
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %40 = bitcast i8* %39 to i32*
  %it26 = load i32, i32* %40, align 4
  %element_addressB27 = getelementptr i8*, i8** %38, i32 %it26
  %element28 = load i8*, i8** %element_addressB27, align 8
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %42 = bitcast i8* %41 to i8**
  %key29 = load i8*, i8** %42, align 8
  store i8* %element28, i8** %left, align 8
  store i8* %key29, i8** %right, align 8
  br label %equals

cond_else_block:                                  ; preds = %cond_then_block21
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %44 = bitcast i8* %43 to i32*
  %default_value52 = load i32, i32* %44, align 4
  %45 = bitcast [8192 x i8*]* %lvtable to i8*
  %46 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %45, i64 65536)
  ret i32 %default_value52

cond_end:                                         ; preds = %cond_end47
  br label %loop_top_block20

equals:                                           ; preds = %cond_jump_then
  %47 = bitcast i8** %left to i8*
  store i8* %47, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %48 = bitcast i8** %right to i8*
  store i8* %48, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %left32 = load i8*, i8** %left, align 8
  %right33 = load i8*, i8** %right, align 8
  %49 = call i32 @strcmp(i8* %left32, i8* %right33)
  %eqtmpX = icmp eq i32 %49, 0
  store i1 %eqtmpX, i1* %result_variable31, align 1
  br label %inline_func_end30

inline_func_end30:                                ; preds = %equals
  %result_variable34 = load i1, i1* %result_variable31, align 1
  br i1 %result_variable34, label %cond_jump_then35, label %cond_end36

cond_jump_then35:                                 ; preds = %inline_func_end30
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %51 = bitcast i8* %50 to %map__charp_int**
  %self37 = load %map__charp_int*, %map__charp_int** %51, align 8
  %52 = getelementptr inbounds %map__charp_int, %map__charp_int* %self37, i32 0, i32 2
  %53 = load i32*, i32** %52, align 8
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %55 = bitcast i8* %54 to i32*
  %it38 = load i32, i32* %55, align 4
  %element_addressB39 = getelementptr i32, i32* %53, i32 %it38
  %element40 = load i32, i32* %element_addressB39, align 4
  %56 = bitcast [8192 x i8*]* %lvtable to i8*
  %57 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %56, i64 65536)
  ret i32 %element40

cond_end36:                                       ; preds = %inline_func_end30
  %58 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %59 = bitcast i8* %58 to i32*
  %it41 = load i32, i32* %59, align 4
  %addtmp42 = add nsw i32 %it41, 1
  %60 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %61 = bitcast i8* %60 to i32*
  store i32 %addtmp42, i32* %61, align 4
  %subttmp43 = sub nsw i32 %addtmp42, 1
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %63 = bitcast i8* %62 to i32*
  %it44 = load i32, i32* %63, align 4
  %64 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %65 = bitcast i8* %64 to %map__charp_int**
  %self45 = load %map__charp_int*, %map__charp_int** %65, align 8
  %66 = getelementptr inbounds %map__charp_int, %map__charp_int* %self45, i32 0, i32 3
  %67 = load i32, i32* %66, align 4
  %getmp = icmp sge i32 %it44, %67
  br i1 %getmp, label %cond_jump_then46, label %"cond_jump_elif0\0A"

cond_jump_then46:                                 ; preds = %cond_end36
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %69 = bitcast i8* %68 to i32*
  store i32 0, i32* %69, align 4
  br label %cond_end47

"cond_jump_elif0\0A":                             ; preds = %cond_end36
  %70 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %71 = bitcast i8* %70 to i32*
  %it48 = load i32, i32* %71, align 4
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %73 = bitcast i8* %72 to i32*
  %hash49 = load i32, i32* %73, align 4
  %eqtmpX50 = icmp eq i32 %it48, %hash49
  br i1 %eqtmpX50, label %"cond_jump_elif_then0\0A", label %cond_end47

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %74 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %75 = bitcast i8* %74 to i32*
  %default_value51 = load i32, i32* %75, align 4
  %76 = bitcast [8192 x i8*]* %lvtable to i8*
  %77 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %76, i64 65536)
  ret i32 %default_value51

cond_end47:                                       ; preds = %"cond_jump_elif0\0A", %cond_jump_then46
  br label %cond_end
}

define i1 @sevenstars_map_keys(%CLVALUE** %stack_ptr, %sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %stack_ptr2 = alloca %CLVALUE**
  store %CLVALUE** %stack_ptr, %CLVALUE*** %stack_ptr2, align 8
  %2 = bitcast %CLVALUE*** %stack_ptr2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info3, align 8
  %3 = bitcast %sVMInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %stack_ptr4 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value = load %CLVALUE*, %CLVALUE** %stack_ptr4, align 8
  %4 = ptrtoint %CLVALUE* %derefference_value to i64
  %subtmp = sub nsw i64 %4, 4
  %IntTOPtr4b = inttoptr i64 %subtmp to %CLVALUE*
  %5 = bitcast %CLVALUE* %IntTOPtr4b to i32*
  %6 = load i32, i32* %5, align 4
  %self = alloca i32
  %7 = bitcast i32* %self to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store i32 %6, i32* %self, align 4
  %self5 = load i32, i32* %self, align 4
  %info6 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %8 = call i1 @check_type(i32 %self5, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_string.11, i32 0, i32 0), %sVMInfo* %info6)
  %LOGICAL_DIANEAL = icmp eq i1 %8, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %10 = bitcast i8* %9 to %CLVALUE***
  %stack_ptr7 = load %CLVALUE**, %CLVALUE*** %10, align 8
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %12 = bitcast i8* %11 to %sVMInfo**
  %info8 = load %sVMInfo*, %sVMInfo** %12, align 8
  call void @vm_err_msg(%CLVALUE** %stack_ptr7, %sVMInfo* %info8, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_string.12, i32 0, i32 0))
  %13 = bitcast [8192 x i8*]* %lvtable to i8*
  %14 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %13, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %entry
  %self9 = load i32, i32* %self, align 4
  %15 = call %map__charp_int* @get_map_value(i32 %self9)
  %self_value = alloca %map__charp_int*
  %16 = bitcast %map__charp_int** %self_value to i8*
  store i8* %16, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store %map__charp_int* %15, %map__charp_int** %self_value, align 8
  %self10 = load i32, i32* %self, align 4
  %17 = call %list__int* @get_map_keys(i32 %self10)
  %keys_value = alloca %list__int*
  %18 = bitcast %list__int** %keys_value to i8*
  store i8* %18, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store %list__int* %17, %list__int** %keys_value, align 8
  %stack_ptr11 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value12 = load %CLVALUE*, %CLVALUE** %stack_ptr11, align 8
  %keys_value13 = load %list__int*, %list__int** %keys_value, align 8
  %info14 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %19 = call i32 @create_list_object(%list__int* %keys_value13, %sVMInfo* %info14)
  %20 = bitcast %CLVALUE* %derefference_value12 to i32*
  store i32 %19, i32* %20, align 4
  %stack_ptr15 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value16 = load %CLVALUE*, %CLVALUE** %stack_ptr15, align 8
  %21 = ptrtoint %CLVALUE* %derefference_value16 to i64
  %adddtmp = add nsw i64 %21, 4
  %IntTOPtr5c = inttoptr i64 %adddtmp to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c, %CLVALUE** %stack_ptr15, align 8
  %22 = bitcast [8192 x i8*]* %lvtable to i8*
  %23 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %22, i64 65536)
  ret i1 true
}

define i1 @sevenstars_map_find(%CLVALUE** %stack_ptr, %sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %stack_ptr2 = alloca %CLVALUE**
  store %CLVALUE** %stack_ptr, %CLVALUE*** %stack_ptr2, align 8
  %2 = bitcast %CLVALUE*** %stack_ptr2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info3, align 8
  %3 = bitcast %sVMInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %stack_ptr4 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value = load %CLVALUE*, %CLVALUE** %stack_ptr4, align 8
  %4 = ptrtoint %CLVALUE* %derefference_value to i64
  %subtmp = sub nsw i64 %4, 8
  %IntTOPtr4b = inttoptr i64 %subtmp to %CLVALUE*
  %5 = bitcast %CLVALUE* %IntTOPtr4b to i32*
  %6 = load i32, i32* %5, align 4
  %self = alloca i32
  %7 = bitcast i32* %self to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store i32 %6, i32* %self, align 4
  %stack_ptr5 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value6 = load %CLVALUE*, %CLVALUE** %stack_ptr5, align 8
  %8 = ptrtoint %CLVALUE* %derefference_value6 to i64
  %subtmp7 = sub nsw i64 %8, 4
  %IntTOPtr4b8 = inttoptr i64 %subtmp7 to %CLVALUE*
  %9 = bitcast %CLVALUE* %IntTOPtr4b8 to i32*
  %10 = load i32, i32* %9, align 4
  %key = alloca i32
  %11 = bitcast i32* %key to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 %10, i32* %key, align 4
  %self9 = load i32, i32* %self, align 4
  %info10 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %12 = call i1 @check_type(i32 %self9, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_string.13, i32 0, i32 0), %sVMInfo* %info10)
  %LOGICAL_DIANEAL = icmp eq i1 %12, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %14 = bitcast i8* %13 to %CLVALUE***
  %stack_ptr11 = load %CLVALUE**, %CLVALUE*** %14, align 8
  %15 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %16 = bitcast i8* %15 to %sVMInfo**
  %info12 = load %sVMInfo*, %sVMInfo** %16, align 8
  call void @vm_err_msg(%CLVALUE** %stack_ptr11, %sVMInfo* %info12, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_string.14, i32 0, i32 0))
  %17 = bitcast [8192 x i8*]* %lvtable to i8*
  %18 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %17, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %entry
  %key13 = load i32, i32* %key, align 4
  %info14 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %19 = call i1 @check_type(i32 %key13, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_string.15, i32 0, i32 0), %sVMInfo* %info14)
  %LOGICAL_DIANEAL15 = icmp eq i1 %19, false
  br i1 %LOGICAL_DIANEAL15, label %cond_jump_then16, label %cond_end17

cond_jump_then16:                                 ; preds = %cond_end
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %21 = bitcast i8* %20 to %CLVALUE***
  %stack_ptr18 = load %CLVALUE**, %CLVALUE*** %21, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %23 = bitcast i8* %22 to %sVMInfo**
  %info19 = load %sVMInfo*, %sVMInfo** %23, align 8
  call void @vm_err_msg(%CLVALUE** %stack_ptr18, %sVMInfo* %info19, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_string.16, i32 0, i32 0))
  %24 = bitcast [8192 x i8*]* %lvtable to i8*
  %25 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %24, i64 65536)
  ret i1 false

cond_end17:                                       ; preds = %cond_end
  %self20 = load i32, i32* %self, align 4
  %26 = call %map__charp_int* @get_map_value(i32 %self20)
  %self_value = alloca %map__charp_int*
  %27 = bitcast %map__charp_int** %self_value to i8*
  store i8* %27, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store %map__charp_int* %26, %map__charp_int** %self_value, align 8
  %key21 = load i32, i32* %key, align 4
  %28 = call i8* @get_string_mem(i32 %key21)
  %key_value = alloca i8*
  %29 = bitcast i8** %key_value to i8*
  store i8* %29, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i8* %28, i8** %key_value, align 8
  %self_value22 = load %map__charp_int*, %map__charp_int** %self_value, align 8
  %key_value23 = load i8*, i8** %key_value, align 8
  %30 = call i1 @"find_charp_int5_src/native6"(%map__charp_int* %self_value22, i8* %key_value23)
  %sext13 = zext i1 %30 to i32
  %value = alloca i32
  %31 = bitcast i32* %value to i8*
  store i8* %31, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i32 %sext13, i32* %value, align 4
  %value24 = load i32, i32* %value, align 4
  %info25 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %32 = call i32 @create_bool_object(i32 %value24, %sVMInfo* %info25)
  %result = alloca i32
  %33 = bitcast i32* %result to i8*
  store i8* %33, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 %32, i32* %result, align 4
  %stack_ptr26 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value27 = load %CLVALUE*, %CLVALUE** %stack_ptr26, align 8
  %result28 = load i32, i32* %result, align 4
  %34 = bitcast %CLVALUE* %derefference_value27 to i32*
  store i32 %result28, i32* %34, align 4
  %stack_ptr29 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value30 = load %CLVALUE*, %CLVALUE** %stack_ptr29, align 8
  %35 = ptrtoint %CLVALUE* %derefference_value30 to i64
  %adddtmp = add nsw i64 %35, 4
  %IntTOPtr5c = inttoptr i64 %adddtmp to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c, %CLVALUE** %stack_ptr29, align 8
  %36 = bitcast [8192 x i8*]* %lvtable to i8*
  %37 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %36, i64 65536)
  ret i1 true
}

define i1 @"find_charp_int5_src/native6"(%map__charp_int* %self, i8* %key) {
entry:
  %result_variable30 = alloca i1
  %right = alloca i8*
  %left = alloca i8*
  %result_variable = alloca i32
  %value = alloca i8*
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %key4 = load i8*, i8** %key3, align 8
  store i8* %key4, i8** %value, align 8
  br label %get_hash_key

get_hash_key:                                     ; preds = %entry
  %4 = bitcast i8** %value to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %result = alloca i32
  %5 = bitcast i32* %result to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  store i32 0, i32* %result, align 4
  %value5 = load i8*, i8** %value, align 8
  %p = alloca i8*
  %6 = bitcast i8** %p to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i8* %value5, i8** %p, align 8
  br label %loop_top_block

inline_func_end:                                  ; preds = %cond_end_block
  %result_variable16 = load i32, i32* %result_variable, align 4
  %self17 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %7 = getelementptr inbounds %map__charp_int, %map__charp_int* %self17, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %remtmp = srem i32 %result_variable16, %8
  %hash = alloca i32
  %9 = bitcast i32* %hash to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash18 = load i32, i32* %hash, align 4
  %it = alloca i32
  %10 = bitcast i32* %it to i8*
  store i8* %10, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store i32 %hash18, i32* %it, align 4
  br label %loop_top_block19

loop_top_block:                                   ; preds = %cond_then_block, %get_hash_key
  %p6 = load i8*, i8** %p, align 8
  %derefference_value = load i8, i8* %p6, align 8
  %11 = icmp ne i8 %derefference_value, 0
  br i1 %11, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %13 = bitcast i8* %12 to i32*
  %result7 = load i32, i32* %13, align 4
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %15 = bitcast i8* %14 to i8**
  %p8 = load i8*, i8** %15, align 8
  %derefference_value9 = load i8, i8* %p8, align 8
  %sext13 = zext i8 %derefference_value9 to i32
  %addtmp = add nsw i32 %result7, %sext13
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %17 = bitcast i8* %16 to i32*
  store i32 %addtmp, i32* %17, align 4
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %19 = bitcast i8* %18 to i8**
  %p10 = load i8*, i8** %19, align 8
  %derefference_value11 = load i8, i8* %p10, align 8
  %sext1312 = zext i8 %derefference_value11 to i32
  %subttmp = sub nsw i32 %addtmp, %sext1312
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %21 = bitcast i8* %20 to i8**
  %p13 = load i8*, i8** %21, align 8
  %22 = ptrtoint i8* %p13 to i64
  %addtmp14 = add nsw i64 %22, 1
  %intToPtr2 = inttoptr i64 %addtmp14 to i8*
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %24 = bitcast i8* %23 to i8**
  store i8* %intToPtr2, i8** %24, align 8
  %25 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %25, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %result15 = load i32, i32* %result, align 4
  store i32 %result15, i32* %result_variable, align 4
  br label %inline_func_end

loop_top_block19:                                 ; preds = %cond_end, %inline_func_end
  br i1 true, label %cond_then_block20, label %cond_end_block21

cond_then_block20:                                ; preds = %loop_top_block19
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %27 = bitcast i8* %26 to %map__charp_int**
  %self22 = load %map__charp_int*, %map__charp_int** %27, align 8
  %28 = getelementptr inbounds %map__charp_int, %map__charp_int* %self22, i32 0, i32 1
  %29 = load i1*, i1** %28, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %31 = bitcast i8* %30 to i32*
  %it23 = load i32, i32* %31, align 4
  %element_addressB = getelementptr i1, i1* %29, i32 %it23
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then, label %cond_else_block

cond_end_block21:                                 ; preds = %loop_top_block19
  %32 = bitcast [8192 x i8*]* %lvtable to i8*
  %33 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %32, i64 65536)
  ret i1 false

cond_jump_then:                                   ; preds = %cond_then_block20
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %35 = bitcast i8* %34 to %map__charp_int**
  %self24 = load %map__charp_int*, %map__charp_int** %35, align 8
  %36 = getelementptr inbounds %map__charp_int, %map__charp_int* %self24, i32 0, i32 0
  %37 = load i8**, i8*** %36, align 8
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %39 = bitcast i8* %38 to i32*
  %it25 = load i32, i32* %39, align 4
  %element_addressB26 = getelementptr i8*, i8** %37, i32 %it25
  %element27 = load i8*, i8** %element_addressB26, align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %41 = bitcast i8* %40 to i8**
  %key28 = load i8*, i8** %41, align 8
  store i8* %element27, i8** %left, align 8
  store i8* %key28, i8** %right, align 8
  br label %equals

cond_else_block:                                  ; preds = %cond_then_block20
  %42 = bitcast [8192 x i8*]* %lvtable to i8*
  %43 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %42, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %cond_end42
  br label %loop_top_block19

equals:                                           ; preds = %cond_jump_then
  %44 = bitcast i8** %left to i8*
  store i8* %44, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %45 = bitcast i8** %right to i8*
  store i8* %45, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %left31 = load i8*, i8** %left, align 8
  %right32 = load i8*, i8** %right, align 8
  %46 = call i32 @strcmp(i8* %left31, i8* %right32)
  %eqtmpX = icmp eq i32 %46, 0
  store i1 %eqtmpX, i1* %result_variable30, align 1
  br label %inline_func_end29

inline_func_end29:                                ; preds = %equals
  %result_variable33 = load i1, i1* %result_variable30, align 1
  br i1 %result_variable33, label %cond_jump_then34, label %cond_end35

cond_jump_then34:                                 ; preds = %inline_func_end29
  %47 = bitcast [8192 x i8*]* %lvtable to i8*
  %48 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %47, i64 65536)
  ret i1 true

cond_end35:                                       ; preds = %inline_func_end29
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %50 = bitcast i8* %49 to i32*
  %it36 = load i32, i32* %50, align 4
  %addtmp37 = add nsw i32 %it36, 1
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %52 = bitcast i8* %51 to i32*
  store i32 %addtmp37, i32* %52, align 4
  %subttmp38 = sub nsw i32 %addtmp37, 1
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %54 = bitcast i8* %53 to i32*
  %it39 = load i32, i32* %54, align 4
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %56 = bitcast i8* %55 to %map__charp_int**
  %self40 = load %map__charp_int*, %map__charp_int** %56, align 8
  %57 = getelementptr inbounds %map__charp_int, %map__charp_int* %self40, i32 0, i32 3
  %58 = load i32, i32* %57, align 4
  %getmp = icmp sge i32 %it39, %58
  br i1 %getmp, label %cond_jump_then41, label %"cond_jump_elif0\0A"

cond_jump_then41:                                 ; preds = %cond_end35
  %59 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %60 = bitcast i8* %59 to i32*
  store i32 0, i32* %60, align 4
  br label %cond_end42

"cond_jump_elif0\0A":                             ; preds = %cond_end35
  %61 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %62 = bitcast i8* %61 to i32*
  %it43 = load i32, i32* %62, align 4
  %63 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %64 = bitcast i8* %63 to i32*
  %hash44 = load i32, i32* %64, align 4
  %eqtmpX45 = icmp eq i32 %it43, %hash44
  br i1 %eqtmpX45, label %"cond_jump_elif_then0\0A", label %cond_end42

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %65 = bitcast [8192 x i8*]* %lvtable to i8*
  %66 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %65, i64 65536)
  ret i1 false

cond_end42:                                       ; preds = %"cond_jump_elif0\0A", %cond_jump_then41
  br label %cond_end
}

define i1 @sevenstars_map_length(%CLVALUE** %stack_ptr, %sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %stack_ptr2 = alloca %CLVALUE**
  store %CLVALUE** %stack_ptr, %CLVALUE*** %stack_ptr2, align 8
  %2 = bitcast %CLVALUE*** %stack_ptr2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info3, align 8
  %3 = bitcast %sVMInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %stack_ptr4 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value = load %CLVALUE*, %CLVALUE** %stack_ptr4, align 8
  %4 = ptrtoint %CLVALUE* %derefference_value to i64
  %subtmp = sub nsw i64 %4, 4
  %IntTOPtr4b = inttoptr i64 %subtmp to %CLVALUE*
  %5 = bitcast %CLVALUE* %IntTOPtr4b to i32*
  %6 = load i32, i32* %5, align 4
  %self = alloca i32
  %7 = bitcast i32* %self to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store i32 %6, i32* %self, align 4
  %self5 = load i32, i32* %self, align 4
  %info6 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %8 = call i1 @check_type(i32 %self5, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_string.17, i32 0, i32 0), %sVMInfo* %info6)
  %LOGICAL_DIANEAL = icmp eq i1 %8, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %10 = bitcast i8* %9 to %CLVALUE***
  %stack_ptr7 = load %CLVALUE**, %CLVALUE*** %10, align 8
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %12 = bitcast i8* %11 to %sVMInfo**
  %info8 = load %sVMInfo*, %sVMInfo** %12, align 8
  call void @vm_err_msg(%CLVALUE** %stack_ptr7, %sVMInfo* %info8, i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_string.18, i32 0, i32 0))
  %13 = bitcast [8192 x i8*]* %lvtable to i8*
  %14 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %13, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %entry
  %self9 = load i32, i32* %self, align 4
  %15 = call %map__charp_int* @get_map_value(i32 %self9)
  %self_value = alloca %map__charp_int*
  %16 = bitcast %map__charp_int** %self_value to i8*
  store i8* %16, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store %map__charp_int* %15, %map__charp_int** %self_value, align 8
  %self_value10 = load %map__charp_int*, %map__charp_int** %self_value, align 8
  %17 = call i32 @"length_charp_int6_src/native6"(%map__charp_int* %self_value10)
  %value = alloca i32
  %18 = bitcast i32* %value to i8*
  store i8* %18, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i32 %17, i32* %value, align 4
  %value11 = load i32, i32* %value, align 4
  %info12 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %19 = call i32 @create_int_object(i32 %value11, %sVMInfo* %info12)
  %result = alloca i32
  %20 = bitcast i32* %result to i8*
  store i8* %20, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i32 %19, i32* %result, align 4
  %stack_ptr13 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value14 = load %CLVALUE*, %CLVALUE** %stack_ptr13, align 8
  %result15 = load i32, i32* %result, align 4
  %21 = bitcast %CLVALUE* %derefference_value14 to i32*
  store i32 %result15, i32* %21, align 4
  %stack_ptr16 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value17 = load %CLVALUE*, %CLVALUE** %stack_ptr16, align 8
  %22 = ptrtoint %CLVALUE* %derefference_value17 to i64
  %adddtmp = add nsw i64 %22, 4
  %IntTOPtr5c = inttoptr i64 %adddtmp to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c, %CLVALUE** %stack_ptr16, align 8
  %23 = bitcast [8192 x i8*]* %lvtable to i8*
  %24 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %23, i64 65536)
  ret i1 true
}

define i32 @"length_charp_int6_src/native6"(%map__charp_int* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %self3 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %3 = getelementptr inbounds %map__charp_int, %map__charp_int* %self3, i32 0, i32 4
  %4 = load i32, i32* %3, align 4
  %5 = bitcast [8192 x i8*]* %lvtable to i8*
  %6 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %5, i64 65536)
  ret i32 %4
}

define i1 @sevenstars_map_equal(%CLVALUE** %stack_ptr, %sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %stack_ptr2 = alloca %CLVALUE**
  store %CLVALUE** %stack_ptr, %CLVALUE*** %stack_ptr2, align 8
  %2 = bitcast %CLVALUE*** %stack_ptr2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info3, align 8
  %3 = bitcast %sVMInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %stack_ptr4 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value = load %CLVALUE*, %CLVALUE** %stack_ptr4, align 8
  %4 = ptrtoint %CLVALUE* %derefference_value to i64
  %subtmp = sub nsw i64 %4, 8
  %IntTOPtr4b = inttoptr i64 %subtmp to %CLVALUE*
  %5 = bitcast %CLVALUE* %IntTOPtr4b to i32*
  %6 = load i32, i32* %5, align 4
  %self = alloca i32
  %7 = bitcast i32* %self to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store i32 %6, i32* %self, align 4
  %stack_ptr5 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value6 = load %CLVALUE*, %CLVALUE** %stack_ptr5, align 8
  %8 = ptrtoint %CLVALUE* %derefference_value6 to i64
  %subtmp7 = sub nsw i64 %8, 4
  %IntTOPtr4b8 = inttoptr i64 %subtmp7 to %CLVALUE*
  %9 = bitcast %CLVALUE* %IntTOPtr4b8 to i32*
  %10 = load i32, i32* %9, align 4
  %right = alloca i32
  %11 = bitcast i32* %right to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 %10, i32* %right, align 4
  %self9 = load i32, i32* %self, align 4
  %info10 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %12 = call i1 @check_type(i32 %self9, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.19, i32 0, i32 0), %sVMInfo* %info10)
  store i1 %12, i1* %andand_result_var1, align 1
  br i1 %12, label %cond_jump_end, label %cond_jump_then

cond_jump_then:                                   ; preds = %entry
  %right11 = load i32, i32* %right, align 4
  %info12 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %13 = call i1 @check_type(i32 %right11, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.20, i32 0, i32 0), %sVMInfo* %info12)
  %oror = or i1 %12, %13
  store i1 %oror, i1* %andand_result_var1, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then, %entry
  %oror_result_value = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value, label %cond_jump_then13, label %cond_end

cond_jump_then13:                                 ; preds = %cond_jump_end
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %15 = bitcast i8* %14 to i32*
  %self14 = load i32, i32* %15, align 4
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %17 = bitcast i8* %16 to %sVMInfo**
  %info15 = load %sVMInfo*, %sVMInfo** %17, align 8
  %18 = call i1 @check_type(i32 %self14, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.21, i32 0, i32 0), %sVMInfo* %info15)
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %20 = bitcast i8* %19 to i32*
  %right16 = load i32, i32* %20, align 4
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %22 = bitcast i8* %21 to %sVMInfo**
  %info17 = load %sVMInfo*, %sVMInfo** %22, align 8
  %23 = call i1 @check_type(i32 %right16, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.22, i32 0, i32 0), %sVMInfo* %info17)
  %eqtmpX = icmp eq i1 %18, %23
  %sext13 = zext i1 %eqtmpX to i32
  %value = alloca i32
  %24 = bitcast i32* %value to i8*
  store i8* %24, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i32 %sext13, i32* %value, align 4
  %value18 = load i32, i32* %value, align 4
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %26 = bitcast i8* %25 to %sVMInfo**
  %info19 = load %sVMInfo*, %sVMInfo** %26, align 8
  %27 = call i32 @create_bool_object(i32 %value18, %sVMInfo* %info19)
  %obj = alloca i32
  %28 = bitcast i32* %obj to i8*
  store i8* %28, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i32 %27, i32* %obj, align 4
  %29 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %30 = bitcast i8* %29 to %CLVALUE***
  %stack_ptr20 = load %CLVALUE**, %CLVALUE*** %30, align 8
  %derefference_value21 = load %CLVALUE*, %CLVALUE** %stack_ptr20, align 8
  %obj22 = load i32, i32* %obj, align 4
  %31 = bitcast %CLVALUE* %derefference_value21 to i32*
  store i32 %obj22, i32* %31, align 4
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %33 = bitcast i8* %32 to %CLVALUE***
  %stack_ptr23 = load %CLVALUE**, %CLVALUE*** %33, align 8
  %derefference_value24 = load %CLVALUE*, %CLVALUE** %stack_ptr23, align 8
  %34 = ptrtoint %CLVALUE* %derefference_value24 to i64
  %adddtmp = add nsw i64 %34, 4
  %IntTOPtr5c = inttoptr i64 %adddtmp to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c, %CLVALUE** %stack_ptr23, align 8
  %35 = bitcast [8192 x i8*]* %lvtable to i8*
  %36 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %35, i64 65536)
  ret i1 true

cond_end:                                         ; preds = %cond_jump_end
  %self25 = load i32, i32* %self, align 4
  %info26 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %37 = call i1 @check_type(i32 %self25, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_string.23, i32 0, i32 0), %sVMInfo* %info26)
  %LOGICAL_DIANEAL = icmp eq i1 %37, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then27, label %cond_end28

cond_jump_then27:                                 ; preds = %cond_end
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %39 = bitcast i8* %38 to %CLVALUE***
  %stack_ptr29 = load %CLVALUE**, %CLVALUE*** %39, align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %41 = bitcast i8* %40 to %sVMInfo**
  %info30 = load %sVMInfo*, %sVMInfo** %41, align 8
  call void @vm_err_msg(%CLVALUE** %stack_ptr29, %sVMInfo* %info30, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_string.24, i32 0, i32 0))
  %42 = bitcast [8192 x i8*]* %lvtable to i8*
  %43 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %42, i64 65536)
  ret i1 false

cond_end28:                                       ; preds = %cond_end
  %right31 = load i32, i32* %right, align 4
  %info32 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %44 = call i1 @check_type(i32 %right31, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_string.25, i32 0, i32 0), %sVMInfo* %info32)
  %LOGICAL_DIANEAL33 = icmp eq i1 %44, false
  br i1 %LOGICAL_DIANEAL33, label %cond_jump_then34, label %cond_end35

cond_jump_then34:                                 ; preds = %cond_end28
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %46 = bitcast i8* %45 to %CLVALUE***
  %stack_ptr36 = load %CLVALUE**, %CLVALUE*** %46, align 8
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %48 = bitcast i8* %47 to %sVMInfo**
  %info37 = load %sVMInfo*, %sVMInfo** %48, align 8
  call void @vm_err_msg(%CLVALUE** %stack_ptr36, %sVMInfo* %info37, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_string.26, i32 0, i32 0))
  %49 = bitcast [8192 x i8*]* %lvtable to i8*
  %50 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %49, i64 65536)
  ret i1 false

cond_end35:                                       ; preds = %cond_end28
  %self38 = load i32, i32* %self, align 4
  %51 = call %map__charp_int* @get_map_value(i32 %self38)
  %self_value = alloca %map__charp_int*
  %52 = bitcast %map__charp_int** %self_value to i8*
  store i8* %52, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store %map__charp_int* %51, %map__charp_int** %self_value, align 8
  %right39 = load i32, i32* %right, align 4
  %53 = call %map__charp_int* @get_map_value(i32 %right39)
  %right_value = alloca %map__charp_int*
  %54 = bitcast %map__charp_int** %right_value to i8*
  store i8* %54, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store %map__charp_int* %53, %map__charp_int** %right_value, align 8
  %value40 = alloca i1
  %55 = bitcast i1* %value40 to i8*
  store i8* %55, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i1 true, i1* %value40, align 1
  %self_value41 = load %map__charp_int*, %map__charp_int** %self_value, align 8
  %56 = getelementptr inbounds %map__charp_int, %map__charp_int* %self_value41, i32 0, i32 4
  %57 = load i32, i32* %56, align 4
  %right_value42 = load %map__charp_int*, %map__charp_int** %right_value, align 8
  %58 = getelementptr inbounds %map__charp_int, %map__charp_int* %right_value42, i32 0, i32 4
  %59 = load i32, i32* %58, align 4
  %eqtmpX43 = icmp eq i32 %57, %59
  br i1 %eqtmpX43, label %cond_jump_then44, label %cond_else_block

cond_jump_then44:                                 ; preds = %cond_end35
  %60 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %61 = bitcast i8* %60 to %map__charp_int**
  %self_value46 = load %map__charp_int*, %map__charp_int** %61, align 8
  call void @"each_charp_int10_src/native6"(%map__charp_int* %self_value46, void (i8*, i32, i1*)* @native6_lambda1)
  br label %cond_end45

cond_else_block:                                  ; preds = %cond_end35
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %63 = bitcast i8* %62 to i1*
  store i1 false, i1* %63, align 1
  br label %cond_end45

cond_end45:                                       ; preds = %cond_else_block, %cond_jump_then44
  %value47 = load i1, i1* %value40, align 1
  %info48 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %sext1349 = zext i1 %value47 to i32
  %64 = call i32 @create_bool_object(i32 %sext1349, %sVMInfo* %info48)
  %result = alloca i32
  %65 = bitcast i32* %result to i8*
  store i8* %65, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 %64, i32* %result, align 4
  %stack_ptr50 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value51 = load %CLVALUE*, %CLVALUE** %stack_ptr50, align 8
  %result52 = load i32, i32* %result, align 4
  %66 = bitcast %CLVALUE* %derefference_value51 to i32*
  store i32 %result52, i32* %66, align 4
  %stack_ptr53 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value54 = load %CLVALUE*, %CLVALUE** %stack_ptr53, align 8
  %67 = ptrtoint %CLVALUE* %derefference_value54 to i64
  %adddtmp55 = add nsw i64 %67, 4
  %IntTOPtr5c56 = inttoptr i64 %adddtmp55 to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c56, %CLVALUE** %stack_ptr53, align 8
  %68 = bitcast [8192 x i8*]* %lvtable to i8*
  %69 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %68, i64 65536)
  ret i1 true
}

define void @native6_lambda2(i8* %it, i32 %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i8*
  store i8* %it, i8** %it4, align 8
  %2 = bitcast i8** %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %it25 = alloca i32
  store i32 %it2, i32* %it25, align 4
  %3 = bitcast i32* %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %6 = bitcast i8* %5 to %map__charp_int**
  %7 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %8 = bitcast i8* %7 to i8**
  %dummy = alloca i1
  %dummy_value = load i1, i1* %dummy, align 1
  br i1 %dummy_value, label %cond_jump_then, label %cond_else_block

cond_jump_then:                                   ; preds = %entry
  %default_value = alloca i32
  %9 = bitcast i32* %default_value to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %11 = bitcast i8* %10 to %map__charp_int**
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %13 = bitcast i8* %12 to i8**
  %dummy7 = alloca i32
  %dummy_value8 = load i32, i32* %dummy7, align 4
  %item = alloca i32
  %14 = bitcast i32* %item to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 469), align 8
  %15 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %16 = bitcast i8* %15 to i32*
  br i1 false, label %cond_jump_then9, label %cond_end10

cond_else_block:                                  ; preds = %entry
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %18 = bitcast i8* %17 to i1*
  br label %cond_end

cond_end:                                         ; preds = %cond_else_block, %cond_end10
  %19 = bitcast [8192 x i8*]* %lvtable to i8*
  %20 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %19, i64 65536)
  ret void

cond_jump_then9:                                  ; preds = %cond_jump_then
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %22 = bitcast i8* %21 to i1*
  br label %cond_end10

cond_end10:                                       ; preds = %cond_jump_then9, %cond_jump_then
  br label %cond_end
}

define void @native6_lambda1(i8* %it, i32 %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i8*
  store i8* %it, i8** %it4, align 8
  %2 = bitcast i8** %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %it25 = alloca i32
  store i32 %it2, i32* %it25, align 4
  %3 = bitcast i32* %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %it7 = load i8*, i8** %it4, align 8
  %key = alloca i8*
  %5 = bitcast i8** %key to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store i8* %it7, i8** %key, align 8
  %value2 = alloca i1
  %6 = bitcast i1* %value2 to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  store i1 true, i1* %value2, align 1
  %7 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %8 = bitcast i8* %7 to %map__charp_int**
  %right_value = load %map__charp_int*, %map__charp_int** %8, align 8
  call void @"each_charp_int9_src/native6"(%map__charp_int* %right_value, void (i8*, i32, i1*)* @native6_lambda3)
  %value28 = load i1, i1* %value2, align 1
  %eqtmpX = icmp eq i1 %value28, false
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %10 = bitcast i8* %9 to i1*
  store i1 false, i1* %10, align 1
  br label %cond_end

cond_end:                                         ; preds = %cond_jump_then, %entry
  %11 = bitcast [8192 x i8*]* %lvtable to i8*
  %12 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %11, i64 65536)
  ret void
}

define void @native6_lambda3(i8* %it, i32 %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i8*
  store i8* %it, i8** %it4, align 8
  %2 = bitcast i8** %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %it25 = alloca i32
  store i32 %it2, i32* %it25, align 4
  %3 = bitcast i32* %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %6 = bitcast i8* %5 to %map__charp_int**
  %right_value = load %map__charp_int*, %map__charp_int** %6, align 8
  %7 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %8 = bitcast i8* %7 to i8**
  %key = load i8*, i8** %8, align 8
  %9 = call i1 @"find_charp_int7_src/native6"(%map__charp_int* %right_value, i8* %key)
  br i1 %9, label %cond_jump_then, label %cond_else_block

cond_jump_then:                                   ; preds = %entry
  %default_value = alloca i32
  %10 = bitcast i32* %default_value to i8*
  store i8* %10, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  store i32 -1, i32* %default_value, align 4
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %12 = bitcast i8* %11 to %map__charp_int**
  %right_value7 = load %map__charp_int*, %map__charp_int** %12, align 8
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %14 = bitcast i8* %13 to i8**
  %key8 = load i8*, i8** %14, align 8
  %default_value9 = load i32, i32* %default_value, align 4
  %15 = call i32 @"at_charp_int8_src/native6"(%map__charp_int* %right_value7, i8* %key8, i32 %default_value9)
  %item = alloca i32
  %16 = bitcast i32* %item to i8*
  store i8* %16, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 469), align 8
  store i32 %15, i32* %item, align 4
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %18 = bitcast i8* %17 to i32*
  %it210 = load i32, i32* %18, align 4
  %item11 = load i32, i32* %item, align 4
  %noteqtmp = icmp ne i32 %it210, %item11
  br i1 %noteqtmp, label %cond_jump_then12, label %cond_end13

cond_else_block:                                  ; preds = %entry
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %20 = bitcast i8* %19 to i1*
  store i1 false, i1* %20, align 1
  br label %cond_end

cond_end:                                         ; preds = %cond_else_block, %cond_end13
  %21 = bitcast [8192 x i8*]* %lvtable to i8*
  %22 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %21, i64 65536)
  ret void

cond_jump_then12:                                 ; preds = %cond_jump_then
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %24 = bitcast i8* %23 to i1*
  store i1 false, i1* %24, align 1
  br label %cond_end13

cond_end13:                                       ; preds = %cond_jump_then12, %cond_jump_then
  br label %cond_end
}

define i1 @"find_charp_int7_src/native6"(%map__charp_int* %self, i8* %key) {
entry:
  %result_variable30 = alloca i1
  %right = alloca i8*
  %left = alloca i8*
  %result_variable = alloca i32
  %value = alloca i8*
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 469), align 8
  %key4 = load i8*, i8** %key3, align 8
  store i8* %key4, i8** %value, align 8
  br label %get_hash_key

get_hash_key:                                     ; preds = %entry
  %4 = bitcast i8** %value to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %result = alloca i32
  %5 = bitcast i32* %result to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 473), align 8
  store i32 0, i32* %result, align 4
  %value5 = load i8*, i8** %value, align 8
  %p = alloca i8*
  %6 = bitcast i8** %p to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  store i8* %value5, i8** %p, align 8
  br label %loop_top_block

inline_func_end:                                  ; preds = %cond_end_block
  %result_variable16 = load i32, i32* %result_variable, align 4
  %self17 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %7 = getelementptr inbounds %map__charp_int, %map__charp_int* %self17, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %remtmp = srem i32 %result_variable16, %8
  %hash = alloca i32
  %9 = bitcast i32* %hash to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash18 = load i32, i32* %hash, align 4
  %it = alloca i32
  %10 = bitcast i32* %it to i8*
  store i8* %10, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 471), align 8
  store i32 %hash18, i32* %it, align 4
  br label %loop_top_block19

loop_top_block:                                   ; preds = %cond_then_block, %get_hash_key
  %p6 = load i8*, i8** %p, align 8
  %derefference_value = load i8, i8* %p6, align 8
  %11 = icmp ne i8 %derefference_value, 0
  br i1 %11, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 473), align 8
  %13 = bitcast i8* %12 to i32*
  %result7 = load i32, i32* %13, align 4
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  %15 = bitcast i8* %14 to i8**
  %p8 = load i8*, i8** %15, align 8
  %derefference_value9 = load i8, i8* %p8, align 8
  %sext13 = zext i8 %derefference_value9 to i32
  %addtmp = add nsw i32 %result7, %sext13
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 473), align 8
  %17 = bitcast i8* %16 to i32*
  store i32 %addtmp, i32* %17, align 4
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  %19 = bitcast i8* %18 to i8**
  %p10 = load i8*, i8** %19, align 8
  %derefference_value11 = load i8, i8* %p10, align 8
  %sext1312 = zext i8 %derefference_value11 to i32
  %subttmp = sub nsw i32 %addtmp, %sext1312
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  %21 = bitcast i8* %20 to i8**
  %p13 = load i8*, i8** %21, align 8
  %22 = ptrtoint i8* %p13 to i64
  %addtmp14 = add nsw i64 %22, 1
  %intToPtr2 = inttoptr i64 %addtmp14 to i8*
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  %24 = bitcast i8* %23 to i8**
  store i8* %intToPtr2, i8** %24, align 8
  %25 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %25, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %result15 = load i32, i32* %result, align 4
  store i32 %result15, i32* %result_variable, align 4
  br label %inline_func_end

loop_top_block19:                                 ; preds = %cond_end, %inline_func_end
  br i1 true, label %cond_then_block20, label %cond_end_block21

cond_then_block20:                                ; preds = %loop_top_block19
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %27 = bitcast i8* %26 to %map__charp_int**
  %self22 = load %map__charp_int*, %map__charp_int** %27, align 8
  %28 = getelementptr inbounds %map__charp_int, %map__charp_int* %self22, i32 0, i32 1
  %29 = load i1*, i1** %28, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 471), align 8
  %31 = bitcast i8* %30 to i32*
  %it23 = load i32, i32* %31, align 4
  %element_addressB = getelementptr i1, i1* %29, i32 %it23
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then, label %cond_else_block

cond_end_block21:                                 ; preds = %loop_top_block19
  %32 = bitcast [8192 x i8*]* %lvtable to i8*
  %33 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %32, i64 65536)
  ret i1 false

cond_jump_then:                                   ; preds = %cond_then_block20
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %35 = bitcast i8* %34 to %map__charp_int**
  %self24 = load %map__charp_int*, %map__charp_int** %35, align 8
  %36 = getelementptr inbounds %map__charp_int, %map__charp_int* %self24, i32 0, i32 0
  %37 = load i8**, i8*** %36, align 8
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 471), align 8
  %39 = bitcast i8* %38 to i32*
  %it25 = load i32, i32* %39, align 4
  %element_addressB26 = getelementptr i8*, i8** %37, i32 %it25
  %element27 = load i8*, i8** %element_addressB26, align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 469), align 8
  %41 = bitcast i8* %40 to i8**
  %key28 = load i8*, i8** %41, align 8
  store i8* %element27, i8** %left, align 8
  store i8* %key28, i8** %right, align 8
  br label %equals

cond_else_block:                                  ; preds = %cond_then_block20
  %42 = bitcast [8192 x i8*]* %lvtable to i8*
  %43 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %42, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %cond_end42
  br label %loop_top_block19

equals:                                           ; preds = %cond_jump_then
  %44 = bitcast i8** %left to i8*
  store i8* %44, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %45 = bitcast i8** %right to i8*
  store i8* %45, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 473), align 8
  %left31 = load i8*, i8** %left, align 8
  %right32 = load i8*, i8** %right, align 8
  %46 = call i32 @strcmp(i8* %left31, i8* %right32)
  %eqtmpX = icmp eq i32 %46, 0
  store i1 %eqtmpX, i1* %result_variable30, align 1
  br label %inline_func_end29

inline_func_end29:                                ; preds = %equals
  %result_variable33 = load i1, i1* %result_variable30, align 1
  br i1 %result_variable33, label %cond_jump_then34, label %cond_end35

cond_jump_then34:                                 ; preds = %inline_func_end29
  %47 = bitcast [8192 x i8*]* %lvtable to i8*
  %48 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %47, i64 65536)
  ret i1 true

cond_end35:                                       ; preds = %inline_func_end29
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 471), align 8
  %50 = bitcast i8* %49 to i32*
  %it36 = load i32, i32* %50, align 4
  %addtmp37 = add nsw i32 %it36, 1
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 471), align 8
  %52 = bitcast i8* %51 to i32*
  store i32 %addtmp37, i32* %52, align 4
  %subttmp38 = sub nsw i32 %addtmp37, 1
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 471), align 8
  %54 = bitcast i8* %53 to i32*
  %it39 = load i32, i32* %54, align 4
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %56 = bitcast i8* %55 to %map__charp_int**
  %self40 = load %map__charp_int*, %map__charp_int** %56, align 8
  %57 = getelementptr inbounds %map__charp_int, %map__charp_int* %self40, i32 0, i32 3
  %58 = load i32, i32* %57, align 4
  %getmp = icmp sge i32 %it39, %58
  br i1 %getmp, label %cond_jump_then41, label %"cond_jump_elif0\0A"

cond_jump_then41:                                 ; preds = %cond_end35
  %59 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 471), align 8
  %60 = bitcast i8* %59 to i32*
  store i32 0, i32* %60, align 4
  br label %cond_end42

"cond_jump_elif0\0A":                             ; preds = %cond_end35
  %61 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 471), align 8
  %62 = bitcast i8* %61 to i32*
  %it43 = load i32, i32* %62, align 4
  %63 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %64 = bitcast i8* %63 to i32*
  %hash44 = load i32, i32* %64, align 4
  %eqtmpX45 = icmp eq i32 %it43, %hash44
  br i1 %eqtmpX45, label %"cond_jump_elif_then0\0A", label %cond_end42

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %65 = bitcast [8192 x i8*]* %lvtable to i8*
  %66 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %65, i64 65536)
  ret i1 false

cond_end42:                                       ; preds = %"cond_jump_elif0\0A", %cond_jump_then41
  br label %cond_end
}

define i32 @"at_charp_int8_src/native6"(%map__charp_int* %self, i8* %key, i32 %default_value) {
entry:
  %result_variable31 = alloca i1
  %right = alloca i8*
  %left = alloca i8*
  %result_variable = alloca i32
  %value = alloca i8*
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 471), align 8
  %default_value4 = alloca i32
  store i32 %default_value, i32* %default_value4, align 4
  %4 = bitcast i32* %default_value4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %key5 = load i8*, i8** %key3, align 8
  store i8* %key5, i8** %value, align 8
  br label %get_hash_key

get_hash_key:                                     ; preds = %entry
  %5 = bitcast i8** %value to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 475), align 8
  %result = alloca i32
  %6 = bitcast i32* %result to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 476), align 8
  store i32 0, i32* %result, align 4
  %value6 = load i8*, i8** %value, align 8
  %p = alloca i8*
  %7 = bitcast i8** %p to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 477), align 8
  store i8* %value6, i8** %p, align 8
  br label %loop_top_block

inline_func_end:                                  ; preds = %cond_end_block
  %result_variable17 = load i32, i32* %result_variable, align 4
  %self18 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %8 = getelementptr inbounds %map__charp_int, %map__charp_int* %self18, i32 0, i32 3
  %9 = load i32, i32* %8, align 4
  %remtmp = srem i32 %result_variable17, %9
  %hash = alloca i32
  %10 = bitcast i32* %hash to i8*
  store i8* %10, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 473), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash19 = load i32, i32* %hash, align 4
  %it = alloca i32
  %11 = bitcast i32* %it to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  store i32 %hash19, i32* %it, align 4
  br label %loop_top_block20

loop_top_block:                                   ; preds = %cond_then_block, %get_hash_key
  %p7 = load i8*, i8** %p, align 8
  %derefference_value = load i8, i8* %p7, align 8
  %12 = icmp ne i8 %derefference_value, 0
  br i1 %12, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 476), align 8
  %14 = bitcast i8* %13 to i32*
  %result8 = load i32, i32* %14, align 4
  %15 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 477), align 8
  %16 = bitcast i8* %15 to i8**
  %p9 = load i8*, i8** %16, align 8
  %derefference_value10 = load i8, i8* %p9, align 8
  %sext13 = zext i8 %derefference_value10 to i32
  %addtmp = add nsw i32 %result8, %sext13
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 476), align 8
  %18 = bitcast i8* %17 to i32*
  store i32 %addtmp, i32* %18, align 4
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 477), align 8
  %20 = bitcast i8* %19 to i8**
  %p11 = load i8*, i8** %20, align 8
  %derefference_value12 = load i8, i8* %p11, align 8
  %sext1313 = zext i8 %derefference_value12 to i32
  %subttmp = sub nsw i32 %addtmp, %sext1313
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 477), align 8
  %22 = bitcast i8* %21 to i8**
  %p14 = load i8*, i8** %22, align 8
  %23 = ptrtoint i8* %p14 to i64
  %addtmp15 = add nsw i64 %23, 1
  %intToPtr2 = inttoptr i64 %addtmp15 to i8*
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 477), align 8
  %25 = bitcast i8* %24 to i8**
  store i8* %intToPtr2, i8** %25, align 8
  %26 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %26, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %result16 = load i32, i32* %result, align 4
  store i32 %result16, i32* %result_variable, align 4
  br label %inline_func_end

loop_top_block20:                                 ; preds = %cond_end, %inline_func_end
  br i1 true, label %cond_then_block21, label %cond_end_block22

cond_then_block21:                                ; preds = %loop_top_block20
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %28 = bitcast i8* %27 to %map__charp_int**
  %self23 = load %map__charp_int*, %map__charp_int** %28, align 8
  %29 = getelementptr inbounds %map__charp_int, %map__charp_int* %self23, i32 0, i32 1
  %30 = load i1*, i1** %29, align 8
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  %32 = bitcast i8* %31 to i32*
  %it24 = load i32, i32* %32, align 4
  %element_addressB = getelementptr i1, i1* %30, i32 %it24
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then, label %cond_else_block

cond_end_block22:                                 ; preds = %loop_top_block20
  %default_value53 = load i32, i32* %default_value4, align 4
  %33 = bitcast [8192 x i8*]* %lvtable to i8*
  %34 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %33, i64 65536)
  ret i32 %default_value53

cond_jump_then:                                   ; preds = %cond_then_block21
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %36 = bitcast i8* %35 to %map__charp_int**
  %self25 = load %map__charp_int*, %map__charp_int** %36, align 8
  %37 = getelementptr inbounds %map__charp_int, %map__charp_int* %self25, i32 0, i32 0
  %38 = load i8**, i8*** %37, align 8
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  %40 = bitcast i8* %39 to i32*
  %it26 = load i32, i32* %40, align 4
  %element_addressB27 = getelementptr i8*, i8** %38, i32 %it26
  %element28 = load i8*, i8** %element_addressB27, align 8
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 471), align 8
  %42 = bitcast i8* %41 to i8**
  %key29 = load i8*, i8** %42, align 8
  store i8* %element28, i8** %left, align 8
  store i8* %key29, i8** %right, align 8
  br label %equals

cond_else_block:                                  ; preds = %cond_then_block21
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %44 = bitcast i8* %43 to i32*
  %default_value52 = load i32, i32* %44, align 4
  %45 = bitcast [8192 x i8*]* %lvtable to i8*
  %46 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %45, i64 65536)
  ret i32 %default_value52

cond_end:                                         ; preds = %cond_end47
  br label %loop_top_block20

equals:                                           ; preds = %cond_jump_then
  %47 = bitcast i8** %left to i8*
  store i8* %47, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 475), align 8
  %48 = bitcast i8** %right to i8*
  store i8* %48, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 476), align 8
  %left32 = load i8*, i8** %left, align 8
  %right33 = load i8*, i8** %right, align 8
  %49 = call i32 @strcmp(i8* %left32, i8* %right33)
  %eqtmpX = icmp eq i32 %49, 0
  store i1 %eqtmpX, i1* %result_variable31, align 1
  br label %inline_func_end30

inline_func_end30:                                ; preds = %equals
  %result_variable34 = load i1, i1* %result_variable31, align 1
  br i1 %result_variable34, label %cond_jump_then35, label %cond_end36

cond_jump_then35:                                 ; preds = %inline_func_end30
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %51 = bitcast i8* %50 to %map__charp_int**
  %self37 = load %map__charp_int*, %map__charp_int** %51, align 8
  %52 = getelementptr inbounds %map__charp_int, %map__charp_int* %self37, i32 0, i32 2
  %53 = load i32*, i32** %52, align 8
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  %55 = bitcast i8* %54 to i32*
  %it38 = load i32, i32* %55, align 4
  %element_addressB39 = getelementptr i32, i32* %53, i32 %it38
  %element40 = load i32, i32* %element_addressB39, align 4
  %56 = bitcast [8192 x i8*]* %lvtable to i8*
  %57 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %56, i64 65536)
  ret i32 %element40

cond_end36:                                       ; preds = %inline_func_end30
  %58 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  %59 = bitcast i8* %58 to i32*
  %it41 = load i32, i32* %59, align 4
  %addtmp42 = add nsw i32 %it41, 1
  %60 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  %61 = bitcast i8* %60 to i32*
  store i32 %addtmp42, i32* %61, align 4
  %subttmp43 = sub nsw i32 %addtmp42, 1
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  %63 = bitcast i8* %62 to i32*
  %it44 = load i32, i32* %63, align 4
  %64 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %65 = bitcast i8* %64 to %map__charp_int**
  %self45 = load %map__charp_int*, %map__charp_int** %65, align 8
  %66 = getelementptr inbounds %map__charp_int, %map__charp_int* %self45, i32 0, i32 3
  %67 = load i32, i32* %66, align 4
  %getmp = icmp sge i32 %it44, %67
  br i1 %getmp, label %cond_jump_then46, label %"cond_jump_elif0\0A"

cond_jump_then46:                                 ; preds = %cond_end36
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  %69 = bitcast i8* %68 to i32*
  store i32 0, i32* %69, align 4
  br label %cond_end47

"cond_jump_elif0\0A":                             ; preds = %cond_end36
  %70 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  %71 = bitcast i8* %70 to i32*
  %it48 = load i32, i32* %71, align 4
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 473), align 8
  %73 = bitcast i8* %72 to i32*
  %hash49 = load i32, i32* %73, align 4
  %eqtmpX50 = icmp eq i32 %it48, %hash49
  br i1 %eqtmpX50, label %"cond_jump_elif_then0\0A", label %cond_end47

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %74 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %75 = bitcast i8* %74 to i32*
  %default_value51 = load i32, i32* %75, align 4
  %76 = bitcast [8192 x i8*]* %lvtable to i8*
  %77 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %76, i64 65536)
  ret i32 %default_value51

cond_end47:                                       ; preds = %"cond_jump_elif0\0A", %cond_jump_then46
  br label %cond_end
}

define void @"each_charp_int9_src/native6"(%map__charp_int* %self, void (i8*, i32, i1*)* %block_) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %block_3 = alloca void (i8*, i32, i1*)*
  store void (i8*, i32, i1*)* %block_, void (i8*, i32, i1*)** %block_3, align 8
  %3 = bitcast void (i8*, i32, i1*)** %block_3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %i_ = alloca i32
  %4 = bitcast i32* %i_ to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  store i32 0, i32* %i_, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %i_4 = load i32, i32* %i_, align 4
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %6 = bitcast i8* %5 to %map__charp_int**
  %self5 = load %map__charp_int*, %map__charp_int** %6, align 8
  %7 = getelementptr inbounds %map__charp_int, %map__charp_int* %self5, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %letmp = icmp slt i32 %i_4, %8
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
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
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  store i1 false, i1* %end_flag_, align 1
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %17 = bitcast i8* %16 to void (i8*, i32, i1*)**
  %block_8 = load void (i8*, i32, i1*)*, void (i8*, i32, i1*)** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %19 = bitcast i8* %18 to %map__charp_int**
  %self9 = load %map__charp_int*, %map__charp_int** %19, align 8
  %20 = getelementptr inbounds %map__charp_int, %map__charp_int* %self9, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %23 = bitcast i8* %22 to i32*
  %i_10 = load i32, i32* %23, align 4
  %element_addressB11 = getelementptr i8*, i8** %21, i32 %i_10
  %element12 = load i8*, i8** %element_addressB11, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %25 = bitcast i8* %24 to %map__charp_int**
  %self13 = load %map__charp_int*, %map__charp_int** %25, align 8
  %26 = getelementptr inbounds %map__charp_int, %map__charp_int* %self13, i32 0, i32 2
  %27 = load i32*, i32** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
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

define void @"each_charp_int10_src/native6"(%map__charp_int* %self, void (i8*, i32, i1*)* %block_) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %block_3 = alloca void (i8*, i32, i1*)*
  store void (i8*, i32, i1*)* %block_, void (i8*, i32, i1*)** %block_3, align 8
  %3 = bitcast void (i8*, i32, i1*)** %block_3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %i_ = alloca i32
  %4 = bitcast i32* %i_ to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 0, i32* %i_, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %i_4 = load i32, i32* %i_, align 4
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %6 = bitcast i8* %5 to %map__charp_int**
  %self5 = load %map__charp_int*, %map__charp_int** %6, align 8
  %7 = getelementptr inbounds %map__charp_int, %map__charp_int* %self5, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %letmp = icmp slt i32 %i_4, %8
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
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
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store i1 false, i1* %end_flag_, align 1
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %17 = bitcast i8* %16 to void (i8*, i32, i1*)**
  %block_8 = load void (i8*, i32, i1*)*, void (i8*, i32, i1*)** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %19 = bitcast i8* %18 to %map__charp_int**
  %self9 = load %map__charp_int*, %map__charp_int** %19, align 8
  %20 = getelementptr inbounds %map__charp_int, %map__charp_int* %self9, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %23 = bitcast i8* %22 to i32*
  %i_10 = load i32, i32* %23, align 4
  %element_addressB11 = getelementptr i8*, i8** %21, i32 %i_10
  %element12 = load i8*, i8** %element_addressB11, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %25 = bitcast i8* %24 to %map__charp_int**
  %self13 = load %map__charp_int*, %map__charp_int** %25, align 8
  %26 = getelementptr inbounds %map__charp_int, %map__charp_int* %self13, i32 0, i32 2
  %27 = load i32*, i32** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
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

define i1 @sevenstars_map_not_equal(%CLVALUE** %stack_ptr, %sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %stack_ptr2 = alloca %CLVALUE**
  store %CLVALUE** %stack_ptr, %CLVALUE*** %stack_ptr2, align 8
  %2 = bitcast %CLVALUE*** %stack_ptr2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info3, align 8
  %3 = bitcast %sVMInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %stack_ptr4 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value = load %CLVALUE*, %CLVALUE** %stack_ptr4, align 8
  %4 = ptrtoint %CLVALUE* %derefference_value to i64
  %subtmp = sub nsw i64 %4, 8
  %IntTOPtr4b = inttoptr i64 %subtmp to %CLVALUE*
  %5 = bitcast %CLVALUE* %IntTOPtr4b to i32*
  %6 = load i32, i32* %5, align 4
  %self = alloca i32
  %7 = bitcast i32* %self to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store i32 %6, i32* %self, align 4
  %stack_ptr5 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value6 = load %CLVALUE*, %CLVALUE** %stack_ptr5, align 8
  %8 = ptrtoint %CLVALUE* %derefference_value6 to i64
  %subtmp7 = sub nsw i64 %8, 4
  %IntTOPtr4b8 = inttoptr i64 %subtmp7 to %CLVALUE*
  %9 = bitcast %CLVALUE* %IntTOPtr4b8 to i32*
  %10 = load i32, i32* %9, align 4
  %right = alloca i32
  %11 = bitcast i32* %right to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 %10, i32* %right, align 4
  %self9 = load i32, i32* %self, align 4
  %info10 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %12 = call i1 @check_type(i32 %self9, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.27, i32 0, i32 0), %sVMInfo* %info10)
  store i1 %12, i1* %andand_result_var1, align 1
  br i1 %12, label %cond_jump_end, label %cond_jump_then

cond_jump_then:                                   ; preds = %entry
  %right11 = load i32, i32* %right, align 4
  %info12 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %13 = call i1 @check_type(i32 %right11, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.28, i32 0, i32 0), %sVMInfo* %info12)
  %oror = or i1 %12, %13
  store i1 %oror, i1* %andand_result_var1, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then, %entry
  %oror_result_value = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value, label %cond_jump_then13, label %cond_end

cond_jump_then13:                                 ; preds = %cond_jump_end
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %15 = bitcast i8* %14 to i32*
  %self14 = load i32, i32* %15, align 4
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %17 = bitcast i8* %16 to %sVMInfo**
  %info15 = load %sVMInfo*, %sVMInfo** %17, align 8
  %18 = call i1 @check_type(i32 %self14, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.29, i32 0, i32 0), %sVMInfo* %info15)
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %20 = bitcast i8* %19 to i32*
  %right16 = load i32, i32* %20, align 4
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %22 = bitcast i8* %21 to %sVMInfo**
  %info17 = load %sVMInfo*, %sVMInfo** %22, align 8
  %23 = call i1 @check_type(i32 %right16, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.30, i32 0, i32 0), %sVMInfo* %info17)
  %noteqtmp = icmp ne i1 %18, %23
  %sext13 = zext i1 %noteqtmp to i32
  %value = alloca i32
  %24 = bitcast i32* %value to i8*
  store i8* %24, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i32 %sext13, i32* %value, align 4
  %value18 = load i32, i32* %value, align 4
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %26 = bitcast i8* %25 to %sVMInfo**
  %info19 = load %sVMInfo*, %sVMInfo** %26, align 8
  %27 = call i32 @create_bool_object(i32 %value18, %sVMInfo* %info19)
  %obj = alloca i32
  %28 = bitcast i32* %obj to i8*
  store i8* %28, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i32 %27, i32* %obj, align 4
  %29 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %30 = bitcast i8* %29 to %CLVALUE***
  %stack_ptr20 = load %CLVALUE**, %CLVALUE*** %30, align 8
  %derefference_value21 = load %CLVALUE*, %CLVALUE** %stack_ptr20, align 8
  %obj22 = load i32, i32* %obj, align 4
  %31 = bitcast %CLVALUE* %derefference_value21 to i32*
  store i32 %obj22, i32* %31, align 4
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %33 = bitcast i8* %32 to %CLVALUE***
  %stack_ptr23 = load %CLVALUE**, %CLVALUE*** %33, align 8
  %derefference_value24 = load %CLVALUE*, %CLVALUE** %stack_ptr23, align 8
  %34 = ptrtoint %CLVALUE* %derefference_value24 to i64
  %adddtmp = add nsw i64 %34, 4
  %IntTOPtr5c = inttoptr i64 %adddtmp to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c, %CLVALUE** %stack_ptr23, align 8
  %35 = bitcast [8192 x i8*]* %lvtable to i8*
  %36 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %35, i64 65536)
  ret i1 true

cond_end:                                         ; preds = %cond_jump_end
  %self25 = load i32, i32* %self, align 4
  %info26 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %37 = call i1 @check_type(i32 %self25, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_string.31, i32 0, i32 0), %sVMInfo* %info26)
  %LOGICAL_DIANEAL = icmp eq i1 %37, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then27, label %cond_end28

cond_jump_then27:                                 ; preds = %cond_end
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %39 = bitcast i8* %38 to %CLVALUE***
  %stack_ptr29 = load %CLVALUE**, %CLVALUE*** %39, align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %41 = bitcast i8* %40 to %sVMInfo**
  %info30 = load %sVMInfo*, %sVMInfo** %41, align 8
  call void @vm_err_msg(%CLVALUE** %stack_ptr29, %sVMInfo* %info30, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_string.32, i32 0, i32 0))
  %42 = bitcast [8192 x i8*]* %lvtable to i8*
  %43 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %42, i64 65536)
  ret i1 false

cond_end28:                                       ; preds = %cond_end
  %right31 = load i32, i32* %right, align 4
  %info32 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %44 = call i1 @check_type(i32 %right31, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_string.33, i32 0, i32 0), %sVMInfo* %info32)
  %LOGICAL_DIANEAL33 = icmp eq i1 %44, false
  br i1 %LOGICAL_DIANEAL33, label %cond_jump_then34, label %cond_end35

cond_jump_then34:                                 ; preds = %cond_end28
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %46 = bitcast i8* %45 to %CLVALUE***
  %stack_ptr36 = load %CLVALUE**, %CLVALUE*** %46, align 8
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %48 = bitcast i8* %47 to %sVMInfo**
  %info37 = load %sVMInfo*, %sVMInfo** %48, align 8
  call void @vm_err_msg(%CLVALUE** %stack_ptr36, %sVMInfo* %info37, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_string.34, i32 0, i32 0))
  %49 = bitcast [8192 x i8*]* %lvtable to i8*
  %50 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %49, i64 65536)
  ret i1 false

cond_end35:                                       ; preds = %cond_end28
  %self38 = load i32, i32* %self, align 4
  %51 = call %map__charp_int* @get_map_value(i32 %self38)
  %self_value = alloca %map__charp_int*
  %52 = bitcast %map__charp_int** %self_value to i8*
  store i8* %52, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store %map__charp_int* %51, %map__charp_int** %self_value, align 8
  %right39 = load i32, i32* %right, align 4
  %53 = call %map__charp_int* @get_map_value(i32 %right39)
  %right_value = alloca %map__charp_int*
  %54 = bitcast %map__charp_int** %right_value to i8*
  store i8* %54, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store %map__charp_int* %53, %map__charp_int** %right_value, align 8
  %value40 = alloca i1
  %55 = bitcast i1* %value40 to i8*
  store i8* %55, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i1 false, i1* %value40, align 1
  %self_value41 = load %map__charp_int*, %map__charp_int** %self_value, align 8
  %56 = getelementptr inbounds %map__charp_int, %map__charp_int* %self_value41, i32 0, i32 4
  %57 = load i32, i32* %56, align 4
  %right_value42 = load %map__charp_int*, %map__charp_int** %right_value, align 8
  %58 = getelementptr inbounds %map__charp_int, %map__charp_int* %right_value42, i32 0, i32 4
  %59 = load i32, i32* %58, align 4
  %eqtmpX = icmp eq i32 %57, %59
  br i1 %eqtmpX, label %cond_jump_then43, label %cond_end44

cond_jump_then43:                                 ; preds = %cond_end35
  %60 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %61 = bitcast i8* %60 to %map__charp_int**
  %self_value45 = load %map__charp_int*, %map__charp_int** %61, align 8
  call void @"each_charp_int14_src/native6"(%map__charp_int* %self_value45, void (i8*, i32, i1*)* @native6_lambda4)
  br label %cond_end44

cond_end44:                                       ; preds = %cond_jump_then43, %cond_end35
  %value46 = load i1, i1* %value40, align 1
  %LOGICAL_DIANEAL47 = icmp eq i1 %value46, false
  %info48 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %sext1349 = zext i1 %LOGICAL_DIANEAL47 to i32
  %62 = call i32 @create_bool_object(i32 %sext1349, %sVMInfo* %info48)
  %result = alloca i32
  %63 = bitcast i32* %result to i8*
  store i8* %63, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 %62, i32* %result, align 4
  %stack_ptr50 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value51 = load %CLVALUE*, %CLVALUE** %stack_ptr50, align 8
  %result52 = load i32, i32* %result, align 4
  %64 = bitcast %CLVALUE* %derefference_value51 to i32*
  store i32 %result52, i32* %64, align 4
  %stack_ptr53 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value54 = load %CLVALUE*, %CLVALUE** %stack_ptr53, align 8
  %65 = ptrtoint %CLVALUE* %derefference_value54 to i64
  %adddtmp55 = add nsw i64 %65, 4
  %IntTOPtr5c56 = inttoptr i64 %adddtmp55 to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c56, %CLVALUE** %stack_ptr53, align 8
  %66 = bitcast [8192 x i8*]* %lvtable to i8*
  %67 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %66, i64 65536)
  ret i1 true
}

define void @native6_lambda5(i8* %it, i32 %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i8*
  store i8* %it, i8** %it4, align 8
  %2 = bitcast i8** %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %it25 = alloca i32
  store i32 %it2, i32* %it25, align 4
  %3 = bitcast i32* %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %6 = bitcast i8* %5 to %map__charp_int**
  %dummy = alloca i1
  %dummy_value = load i1, i1* %dummy, align 1
  br i1 %dummy_value, label %cond_jump_then, label %cond_else_block

cond_jump_then:                                   ; preds = %entry
  %default_value = alloca i32
  %7 = bitcast i32* %default_value to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %8 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %9 = bitcast i8* %8 to %map__charp_int**
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %11 = bitcast i8* %10 to i8**
  %dummy7 = alloca i32
  %dummy_value8 = load i32, i32* %dummy7, align 4
  %item = alloca i32
  %12 = bitcast i32* %item to i8*
  store i8* %12, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %14 = bitcast i8* %13 to i32*
  br i1 false, label %cond_jump_then9, label %cond_end10

cond_else_block:                                  ; preds = %entry
  %15 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %16 = bitcast i8* %15 to i1*
  br label %cond_end

cond_end:                                         ; preds = %cond_else_block, %cond_end10
  %17 = bitcast [8192 x i8*]* %lvtable to i8*
  %18 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %17, i64 65536)
  ret void

cond_jump_then9:                                  ; preds = %cond_jump_then
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %20 = bitcast i8* %19 to i1*
  br label %cond_end10

cond_end10:                                       ; preds = %cond_jump_then9, %cond_jump_then
  br label %cond_end
}

define void @native6_lambda4(i8* %it, i32 %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i8*
  store i8* %it, i8** %it4, align 8
  %2 = bitcast i8** %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %it25 = alloca i32
  store i32 %it2, i32* %it25, align 4
  %3 = bitcast i32* %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %6 = bitcast i8* %5 to i1*
  store i1 true, i1* %6, align 1
  %7 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %8 = bitcast i8* %7 to %map__charp_int**
  %right_value = load %map__charp_int*, %map__charp_int** %8, align 8
  call void @"each_charp_int13_src/native6"(%map__charp_int* %right_value, void (i8*, i32, i1*)* @native6_lambda6)
  %9 = bitcast [8192 x i8*]* %lvtable to i8*
  %10 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %9, i64 65536)
  ret void
}

define void @native6_lambda6(i8* %it, i32 %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i8*
  store i8* %it, i8** %it4, align 8
  %2 = bitcast i8** %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %it25 = alloca i32
  store i32 %it2, i32* %it25, align 4
  %3 = bitcast i32* %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %6 = bitcast i8* %5 to %map__charp_int**
  %right_value = load %map__charp_int*, %map__charp_int** %6, align 8
  %it7 = load i8*, i8** %it4, align 8
  %7 = call i1 @"find_charp_int11_src/native6"(%map__charp_int* %right_value, i8* %it7)
  br i1 %7, label %cond_jump_then, label %cond_else_block

cond_jump_then:                                   ; preds = %entry
  %default_value = alloca i32
  %8 = bitcast i32* %default_value to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i32 -1, i32* %default_value, align 4
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %10 = bitcast i8* %9 to %map__charp_int**
  %right_value8 = load %map__charp_int*, %map__charp_int** %10, align 8
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %12 = bitcast i8* %11 to i8**
  %it9 = load i8*, i8** %12, align 8
  %default_value10 = load i32, i32* %default_value, align 4
  %13 = call i32 @"at_charp_int12_src/native6"(%map__charp_int* %right_value8, i8* %it9, i32 %default_value10)
  %item = alloca i32
  %14 = bitcast i32* %item to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  store i32 %13, i32* %item, align 4
  %15 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %16 = bitcast i8* %15 to i32*
  %it211 = load i32, i32* %16, align 4
  %item12 = load i32, i32* %item, align 4
  %noteqtmp = icmp ne i32 %it211, %item12
  br i1 %noteqtmp, label %cond_jump_then13, label %cond_end14

cond_else_block:                                  ; preds = %entry
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %18 = bitcast i8* %17 to i1*
  store i1 false, i1* %18, align 1
  br label %cond_end

cond_end:                                         ; preds = %cond_else_block, %cond_end14
  %19 = bitcast [8192 x i8*]* %lvtable to i8*
  %20 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %19, i64 65536)
  ret void

cond_jump_then13:                                 ; preds = %cond_jump_then
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %22 = bitcast i8* %21 to i1*
  store i1 false, i1* %22, align 1
  br label %cond_end14

cond_end14:                                       ; preds = %cond_jump_then13, %cond_jump_then
  br label %cond_end
}

define i1 @"find_charp_int11_src/native6"(%map__charp_int* %self, i8* %key) {
entry:
  %result_variable30 = alloca i1
  %right = alloca i8*
  %left = alloca i8*
  %result_variable = alloca i32
  %value = alloca i8*
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %key4 = load i8*, i8** %key3, align 8
  store i8* %key4, i8** %value, align 8
  br label %get_hash_key

get_hash_key:                                     ; preds = %entry
  %4 = bitcast i8** %value to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %result = alloca i32
  %5 = bitcast i32* %result to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 471), align 8
  store i32 0, i32* %result, align 4
  %value5 = load i8*, i8** %value, align 8
  %p = alloca i8*
  %6 = bitcast i8** %p to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  store i8* %value5, i8** %p, align 8
  br label %loop_top_block

inline_func_end:                                  ; preds = %cond_end_block
  %result_variable16 = load i32, i32* %result_variable, align 4
  %self17 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %7 = getelementptr inbounds %map__charp_int, %map__charp_int* %self17, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %remtmp = srem i32 %result_variable16, %8
  %hash = alloca i32
  %9 = bitcast i32* %hash to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash18 = load i32, i32* %hash, align 4
  %it = alloca i32
  %10 = bitcast i32* %it to i8*
  store i8* %10, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 469), align 8
  store i32 %hash18, i32* %it, align 4
  br label %loop_top_block19

loop_top_block:                                   ; preds = %cond_then_block, %get_hash_key
  %p6 = load i8*, i8** %p, align 8
  %derefference_value = load i8, i8* %p6, align 8
  %11 = icmp ne i8 %derefference_value, 0
  br i1 %11, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 471), align 8
  %13 = bitcast i8* %12 to i32*
  %result7 = load i32, i32* %13, align 4
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %15 = bitcast i8* %14 to i8**
  %p8 = load i8*, i8** %15, align 8
  %derefference_value9 = load i8, i8* %p8, align 8
  %sext13 = zext i8 %derefference_value9 to i32
  %addtmp = add nsw i32 %result7, %sext13
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 471), align 8
  %17 = bitcast i8* %16 to i32*
  store i32 %addtmp, i32* %17, align 4
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %19 = bitcast i8* %18 to i8**
  %p10 = load i8*, i8** %19, align 8
  %derefference_value11 = load i8, i8* %p10, align 8
  %sext1312 = zext i8 %derefference_value11 to i32
  %subttmp = sub nsw i32 %addtmp, %sext1312
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %21 = bitcast i8* %20 to i8**
  %p13 = load i8*, i8** %21, align 8
  %22 = ptrtoint i8* %p13 to i64
  %addtmp14 = add nsw i64 %22, 1
  %intToPtr2 = inttoptr i64 %addtmp14 to i8*
  %23 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %24 = bitcast i8* %23 to i8**
  store i8* %intToPtr2, i8** %24, align 8
  %25 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %25, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %result15 = load i32, i32* %result, align 4
  store i32 %result15, i32* %result_variable, align 4
  br label %inline_func_end

loop_top_block19:                                 ; preds = %cond_end, %inline_func_end
  br i1 true, label %cond_then_block20, label %cond_end_block21

cond_then_block20:                                ; preds = %loop_top_block19
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %27 = bitcast i8* %26 to %map__charp_int**
  %self22 = load %map__charp_int*, %map__charp_int** %27, align 8
  %28 = getelementptr inbounds %map__charp_int, %map__charp_int* %self22, i32 0, i32 1
  %29 = load i1*, i1** %28, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 469), align 8
  %31 = bitcast i8* %30 to i32*
  %it23 = load i32, i32* %31, align 4
  %element_addressB = getelementptr i1, i1* %29, i32 %it23
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then, label %cond_else_block

cond_end_block21:                                 ; preds = %loop_top_block19
  %32 = bitcast [8192 x i8*]* %lvtable to i8*
  %33 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %32, i64 65536)
  ret i1 false

cond_jump_then:                                   ; preds = %cond_then_block20
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %35 = bitcast i8* %34 to %map__charp_int**
  %self24 = load %map__charp_int*, %map__charp_int** %35, align 8
  %36 = getelementptr inbounds %map__charp_int, %map__charp_int* %self24, i32 0, i32 0
  %37 = load i8**, i8*** %36, align 8
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 469), align 8
  %39 = bitcast i8* %38 to i32*
  %it25 = load i32, i32* %39, align 4
  %element_addressB26 = getelementptr i8*, i8** %37, i32 %it25
  %element27 = load i8*, i8** %element_addressB26, align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %41 = bitcast i8* %40 to i8**
  %key28 = load i8*, i8** %41, align 8
  store i8* %element27, i8** %left, align 8
  store i8* %key28, i8** %right, align 8
  br label %equals

cond_else_block:                                  ; preds = %cond_then_block20
  %42 = bitcast [8192 x i8*]* %lvtable to i8*
  %43 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %42, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %cond_end42
  br label %loop_top_block19

equals:                                           ; preds = %cond_jump_then
  %44 = bitcast i8** %left to i8*
  store i8* %44, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %45 = bitcast i8** %right to i8*
  store i8* %45, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 471), align 8
  %left31 = load i8*, i8** %left, align 8
  %right32 = load i8*, i8** %right, align 8
  %46 = call i32 @strcmp(i8* %left31, i8* %right32)
  %eqtmpX = icmp eq i32 %46, 0
  store i1 %eqtmpX, i1* %result_variable30, align 1
  br label %inline_func_end29

inline_func_end29:                                ; preds = %equals
  %result_variable33 = load i1, i1* %result_variable30, align 1
  br i1 %result_variable33, label %cond_jump_then34, label %cond_end35

cond_jump_then34:                                 ; preds = %inline_func_end29
  %47 = bitcast [8192 x i8*]* %lvtable to i8*
  %48 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %47, i64 65536)
  ret i1 true

cond_end35:                                       ; preds = %inline_func_end29
  %49 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 469), align 8
  %50 = bitcast i8* %49 to i32*
  %it36 = load i32, i32* %50, align 4
  %addtmp37 = add nsw i32 %it36, 1
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 469), align 8
  %52 = bitcast i8* %51 to i32*
  store i32 %addtmp37, i32* %52, align 4
  %subttmp38 = sub nsw i32 %addtmp37, 1
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 469), align 8
  %54 = bitcast i8* %53 to i32*
  %it39 = load i32, i32* %54, align 4
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %56 = bitcast i8* %55 to %map__charp_int**
  %self40 = load %map__charp_int*, %map__charp_int** %56, align 8
  %57 = getelementptr inbounds %map__charp_int, %map__charp_int* %self40, i32 0, i32 3
  %58 = load i32, i32* %57, align 4
  %getmp = icmp sge i32 %it39, %58
  br i1 %getmp, label %cond_jump_then41, label %"cond_jump_elif0\0A"

cond_jump_then41:                                 ; preds = %cond_end35
  %59 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 469), align 8
  %60 = bitcast i8* %59 to i32*
  store i32 0, i32* %60, align 4
  br label %cond_end42

"cond_jump_elif0\0A":                             ; preds = %cond_end35
  %61 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 469), align 8
  %62 = bitcast i8* %61 to i32*
  %it43 = load i32, i32* %62, align 4
  %63 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %64 = bitcast i8* %63 to i32*
  %hash44 = load i32, i32* %64, align 4
  %eqtmpX45 = icmp eq i32 %it43, %hash44
  br i1 %eqtmpX45, label %"cond_jump_elif_then0\0A", label %cond_end42

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %65 = bitcast [8192 x i8*]* %lvtable to i8*
  %66 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %65, i64 65536)
  ret i1 false

cond_end42:                                       ; preds = %"cond_jump_elif0\0A", %cond_jump_then41
  br label %cond_end
}

define i32 @"at_charp_int12_src/native6"(%map__charp_int* %self, i8* %key, i32 %default_value) {
entry:
  %result_variable31 = alloca i1
  %right = alloca i8*
  %left = alloca i8*
  %result_variable = alloca i32
  %value = alloca i8*
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 469), align 8
  %default_value4 = alloca i32
  store i32 %default_value, i32* %default_value4, align 4
  %4 = bitcast i32* %default_value4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %key5 = load i8*, i8** %key3, align 8
  store i8* %key5, i8** %value, align 8
  br label %get_hash_key

get_hash_key:                                     ; preds = %entry
  %5 = bitcast i8** %value to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 473), align 8
  %result = alloca i32
  %6 = bitcast i32* %result to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  store i32 0, i32* %result, align 4
  %value6 = load i8*, i8** %value, align 8
  %p = alloca i8*
  %7 = bitcast i8** %p to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 475), align 8
  store i8* %value6, i8** %p, align 8
  br label %loop_top_block

inline_func_end:                                  ; preds = %cond_end_block
  %result_variable17 = load i32, i32* %result_variable, align 4
  %self18 = load %map__charp_int*, %map__charp_int** %self2, align 8
  %8 = getelementptr inbounds %map__charp_int, %map__charp_int* %self18, i32 0, i32 3
  %9 = load i32, i32* %8, align 4
  %remtmp = srem i32 %result_variable17, %9
  %hash = alloca i32
  %10 = bitcast i32* %hash to i8*
  store i8* %10, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 471), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash19 = load i32, i32* %hash, align 4
  %it = alloca i32
  %11 = bitcast i32* %it to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  store i32 %hash19, i32* %it, align 4
  br label %loop_top_block20

loop_top_block:                                   ; preds = %cond_then_block, %get_hash_key
  %p7 = load i8*, i8** %p, align 8
  %derefference_value = load i8, i8* %p7, align 8
  %12 = icmp ne i8 %derefference_value, 0
  br i1 %12, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  %14 = bitcast i8* %13 to i32*
  %result8 = load i32, i32* %14, align 4
  %15 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 475), align 8
  %16 = bitcast i8* %15 to i8**
  %p9 = load i8*, i8** %16, align 8
  %derefference_value10 = load i8, i8* %p9, align 8
  %sext13 = zext i8 %derefference_value10 to i32
  %addtmp = add nsw i32 %result8, %sext13
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  %18 = bitcast i8* %17 to i32*
  store i32 %addtmp, i32* %18, align 4
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 475), align 8
  %20 = bitcast i8* %19 to i8**
  %p11 = load i8*, i8** %20, align 8
  %derefference_value12 = load i8, i8* %p11, align 8
  %sext1313 = zext i8 %derefference_value12 to i32
  %subttmp = sub nsw i32 %addtmp, %sext1313
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 475), align 8
  %22 = bitcast i8* %21 to i8**
  %p14 = load i8*, i8** %22, align 8
  %23 = ptrtoint i8* %p14 to i64
  %addtmp15 = add nsw i64 %23, 1
  %intToPtr2 = inttoptr i64 %addtmp15 to i8*
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 475), align 8
  %25 = bitcast i8* %24 to i8**
  store i8* %intToPtr2, i8** %25, align 8
  %26 = ptrtoint i8* %intToPtr2 to i64
  %subtmp = sub nsw i64 %26, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  br label %loop_top_block

cond_end_block:                                   ; preds = %loop_top_block
  %result16 = load i32, i32* %result, align 4
  store i32 %result16, i32* %result_variable, align 4
  br label %inline_func_end

loop_top_block20:                                 ; preds = %cond_end, %inline_func_end
  br i1 true, label %cond_then_block21, label %cond_end_block22

cond_then_block21:                                ; preds = %loop_top_block20
  %27 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %28 = bitcast i8* %27 to %map__charp_int**
  %self23 = load %map__charp_int*, %map__charp_int** %28, align 8
  %29 = getelementptr inbounds %map__charp_int, %map__charp_int* %self23, i32 0, i32 1
  %30 = load i1*, i1** %29, align 8
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %32 = bitcast i8* %31 to i32*
  %it24 = load i32, i32* %32, align 4
  %element_addressB = getelementptr i1, i1* %30, i32 %it24
  %element = load i1, i1* %element_addressB, align 1
  br i1 %element, label %cond_jump_then, label %cond_else_block

cond_end_block22:                                 ; preds = %loop_top_block20
  %default_value53 = load i32, i32* %default_value4, align 4
  %33 = bitcast [8192 x i8*]* %lvtable to i8*
  %34 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %33, i64 65536)
  ret i32 %default_value53

cond_jump_then:                                   ; preds = %cond_then_block21
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %36 = bitcast i8* %35 to %map__charp_int**
  %self25 = load %map__charp_int*, %map__charp_int** %36, align 8
  %37 = getelementptr inbounds %map__charp_int, %map__charp_int* %self25, i32 0, i32 0
  %38 = load i8**, i8*** %37, align 8
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %40 = bitcast i8* %39 to i32*
  %it26 = load i32, i32* %40, align 4
  %element_addressB27 = getelementptr i8*, i8** %38, i32 %it26
  %element28 = load i8*, i8** %element_addressB27, align 8
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 469), align 8
  %42 = bitcast i8* %41 to i8**
  %key29 = load i8*, i8** %42, align 8
  store i8* %element28, i8** %left, align 8
  store i8* %key29, i8** %right, align 8
  br label %equals

cond_else_block:                                  ; preds = %cond_then_block21
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %44 = bitcast i8* %43 to i32*
  %default_value52 = load i32, i32* %44, align 4
  %45 = bitcast [8192 x i8*]* %lvtable to i8*
  %46 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %45, i64 65536)
  ret i32 %default_value52

cond_end:                                         ; preds = %cond_end47
  br label %loop_top_block20

equals:                                           ; preds = %cond_jump_then
  %47 = bitcast i8** %left to i8*
  store i8* %47, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 473), align 8
  %48 = bitcast i8** %right to i8*
  store i8* %48, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 474), align 8
  %left32 = load i8*, i8** %left, align 8
  %right33 = load i8*, i8** %right, align 8
  %49 = call i32 @strcmp(i8* %left32, i8* %right33)
  %eqtmpX = icmp eq i32 %49, 0
  store i1 %eqtmpX, i1* %result_variable31, align 1
  br label %inline_func_end30

inline_func_end30:                                ; preds = %equals
  %result_variable34 = load i1, i1* %result_variable31, align 1
  br i1 %result_variable34, label %cond_jump_then35, label %cond_end36

cond_jump_then35:                                 ; preds = %inline_func_end30
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %51 = bitcast i8* %50 to %map__charp_int**
  %self37 = load %map__charp_int*, %map__charp_int** %51, align 8
  %52 = getelementptr inbounds %map__charp_int, %map__charp_int* %self37, i32 0, i32 2
  %53 = load i32*, i32** %52, align 8
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %55 = bitcast i8* %54 to i32*
  %it38 = load i32, i32* %55, align 4
  %element_addressB39 = getelementptr i32, i32* %53, i32 %it38
  %element40 = load i32, i32* %element_addressB39, align 4
  %56 = bitcast [8192 x i8*]* %lvtable to i8*
  %57 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %56, i64 65536)
  ret i32 %element40

cond_end36:                                       ; preds = %inline_func_end30
  %58 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %59 = bitcast i8* %58 to i32*
  %it41 = load i32, i32* %59, align 4
  %addtmp42 = add nsw i32 %it41, 1
  %60 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %61 = bitcast i8* %60 to i32*
  store i32 %addtmp42, i32* %61, align 4
  %subttmp43 = sub nsw i32 %addtmp42, 1
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %63 = bitcast i8* %62 to i32*
  %it44 = load i32, i32* %63, align 4
  %64 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 468), align 8
  %65 = bitcast i8* %64 to %map__charp_int**
  %self45 = load %map__charp_int*, %map__charp_int** %65, align 8
  %66 = getelementptr inbounds %map__charp_int, %map__charp_int* %self45, i32 0, i32 3
  %67 = load i32, i32* %66, align 4
  %getmp = icmp sge i32 %it44, %67
  br i1 %getmp, label %cond_jump_then46, label %"cond_jump_elif0\0A"

cond_jump_then46:                                 ; preds = %cond_end36
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %69 = bitcast i8* %68 to i32*
  store i32 0, i32* %69, align 4
  br label %cond_end47

"cond_jump_elif0\0A":                             ; preds = %cond_end36
  %70 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 472), align 8
  %71 = bitcast i8* %70 to i32*
  %it48 = load i32, i32* %71, align 4
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 471), align 8
  %73 = bitcast i8* %72 to i32*
  %hash49 = load i32, i32* %73, align 4
  %eqtmpX50 = icmp eq i32 %it48, %hash49
  br i1 %eqtmpX50, label %"cond_jump_elif_then0\0A", label %cond_end47

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %74 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 470), align 8
  %75 = bitcast i8* %74 to i32*
  %default_value51 = load i32, i32* %75, align 4
  %76 = bitcast [8192 x i8*]* %lvtable to i8*
  %77 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %76, i64 65536)
  ret i32 %default_value51

cond_end47:                                       ; preds = %"cond_jump_elif0\0A", %cond_jump_then46
  br label %cond_end
}

define void @"each_charp_int13_src/native6"(%map__charp_int* %self, void (i8*, i32, i1*)* %block_) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %block_3 = alloca void (i8*, i32, i1*)*
  store void (i8*, i32, i1*)* %block_, void (i8*, i32, i1*)** %block_3, align 8
  %3 = bitcast void (i8*, i32, i1*)** %block_3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %i_ = alloca i32
  %4 = bitcast i32* %i_ to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  store i32 0, i32* %i_, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %i_4 = load i32, i32* %i_, align 4
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %6 = bitcast i8* %5 to %map__charp_int**
  %self5 = load %map__charp_int*, %map__charp_int** %6, align 8
  %7 = getelementptr inbounds %map__charp_int, %map__charp_int* %self5, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %letmp = icmp slt i32 %i_4, %8
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
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
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i1 false, i1* %end_flag_, align 1
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %17 = bitcast i8* %16 to void (i8*, i32, i1*)**
  %block_8 = load void (i8*, i32, i1*)*, void (i8*, i32, i1*)** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %19 = bitcast i8* %18 to %map__charp_int**
  %self9 = load %map__charp_int*, %map__charp_int** %19, align 8
  %20 = getelementptr inbounds %map__charp_int, %map__charp_int* %self9, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %23 = bitcast i8* %22 to i32*
  %i_10 = load i32, i32* %23, align 4
  %element_addressB11 = getelementptr i8*, i8** %21, i32 %i_10
  %element12 = load i8*, i8** %element_addressB11, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %25 = bitcast i8* %24 to %map__charp_int**
  %self13 = load %map__charp_int*, %map__charp_int** %25, align 8
  %26 = getelementptr inbounds %map__charp_int, %map__charp_int* %self13, i32 0, i32 2
  %27 = load i32*, i32** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
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

define void @"each_charp_int14_src/native6"(%map__charp_int* %self, void (i8*, i32, i1*)* %block_) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %block_3 = alloca void (i8*, i32, i1*)*
  store void (i8*, i32, i1*)* %block_, void (i8*, i32, i1*)** %block_3, align 8
  %3 = bitcast void (i8*, i32, i1*)** %block_3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %i_ = alloca i32
  %4 = bitcast i32* %i_ to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 0, i32* %i_, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %i_4 = load i32, i32* %i_, align 4
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %6 = bitcast i8* %5 to %map__charp_int**
  %self5 = load %map__charp_int*, %map__charp_int** %6, align 8
  %7 = getelementptr inbounds %map__charp_int, %map__charp_int* %self5, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %letmp = icmp slt i32 %i_4, %8
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
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
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store i1 false, i1* %end_flag_, align 1
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %17 = bitcast i8* %16 to void (i8*, i32, i1*)**
  %block_8 = load void (i8*, i32, i1*)*, void (i8*, i32, i1*)** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %19 = bitcast i8* %18 to %map__charp_int**
  %self9 = load %map__charp_int*, %map__charp_int** %19, align 8
  %20 = getelementptr inbounds %map__charp_int, %map__charp_int* %self9, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %23 = bitcast i8* %22 to i32*
  %i_10 = load i32, i32* %23, align 4
  %element_addressB11 = getelementptr i8*, i8** %21, i32 %i_10
  %element12 = load i8*, i8** %element_addressB11, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %25 = bitcast i8* %24 to %map__charp_int**
  %self13 = load %map__charp_int*, %map__charp_int** %25, align 8
  %26 = getelementptr inbounds %map__charp_int, %map__charp_int* %self13, i32 0, i32 2
  %27 = load i32*, i32** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
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

define i1 @vm_invoke_method(i32 %obj, i8* %method_name, i32 %num_params, %CLVALUE** %stack_ptr, %sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %obj2 = alloca i32
  store i32 %obj, i32* %obj2, align 4
  %2 = bitcast i32* %obj2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %method_name3 = alloca i8*
  store i8* %method_name, i8** %method_name3, align 8
  %3 = bitcast i8** %method_name3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %num_params4 = alloca i32
  store i32 %num_params, i32* %num_params4, align 4
  %4 = bitcast i32* %num_params4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %stack_ptr5 = alloca %CLVALUE**
  store %CLVALUE** %stack_ptr, %CLVALUE*** %stack_ptr5, align 8
  %5 = bitcast %CLVALUE*** %stack_ptr5 to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %info6 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info6, align 8
  %6 = bitcast %sVMInfo** %info6 to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %obj7 = load i32, i32* %obj2, align 4
  %7 = call %sCLHeapMem* @get_object_pointer(i32 %obj7)
  %8 = bitcast %sCLHeapMem* %7 to %sCLObject*
  %object_data = alloca %sCLObject*
  %9 = bitcast %sCLObject** %object_data to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store %sCLObject* %8, %sCLObject** %object_data, align 8
  %object_data8 = load %sCLObject*, %sCLObject** %object_data, align 8
  %10 = getelementptr inbounds %sCLObject, %sCLObject* %object_data8, i32 0, i32 0
  %11 = load %sCLType*, %sCLType** %10, align 8
  %generics_types = alloca %sCLType*
  %12 = bitcast %sCLType** %generics_types to i8*
  store i8* %12, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store %sCLType* %11, %sCLType** %generics_types, align 8
  %object_data9 = load %sCLObject*, %sCLObject** %object_data, align 8
  %13 = getelementptr inbounds %sCLObject, %sCLObject* %object_data9, i32 0, i32 0
  %14 = load %sCLType*, %sCLType** %13, align 8
  %15 = getelementptr inbounds %sCLType, %sCLType* %14, i32 0, i32 1
  %16 = load %sCLClass*, %sCLClass** %15, align 8
  %klass = alloca %sCLClass*
  %17 = bitcast %sCLClass** %klass to i8*
  store i8* %17, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store %sCLClass* %16, %sCLClass** %klass, align 8
  %klass10 = load %sCLClass*, %sCLClass** %klass, align 8
  %eqtmpX = icmp eq %sCLClass* %klass10, null
  br i1 %eqtmpX, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %19 = bitcast i8* %18 to %CLVALUE***
  %stack_ptr11 = load %CLVALUE**, %CLVALUE*** %19, align 8
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %21 = bitcast i8* %20 to %sVMInfo**
  %info12 = load %sVMInfo*, %sVMInfo** %21, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %23 = bitcast i8* %22 to %sCLClass**
  %klass13 = load %sCLClass*, %sCLClass** %23, align 8
  %24 = getelementptr inbounds %sCLClass, %sCLClass* %klass13, i32 0, i32 0
  %25 = load i8*, i8** %24, align 8
  %26 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([41 x i8], [41 x i8]* @global_string.35, i32 0, i32 0), i8* %25)
  call void @vm_err_msg(%CLVALUE** %stack_ptr11, %sVMInfo* %info12, i8* %26)
  %27 = bitcast [8192 x i8*]* %lvtable to i8*
  %28 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %27, i64 65536)
  %29 = ptrtoint i8* %26 to i64
  %30 = icmp ne i64 %29, 0
  br i1 %30, label %cond_then_block, label %cond_end14

cond_end:                                         ; preds = %entry
  %klass15 = load %sCLClass*, %sCLClass** %klass, align 8
  %31 = getelementptr inbounds %sCLClass, %sCLClass* %klass15, i32 0, i32 0
  %32 = load i8*, i8** %31, align 8
  %klass_name = alloca i8*
  %33 = bitcast i8** %klass_name to i8*
  store i8* %33, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i8* %32, i8** %klass_name, align 8
  %method = alloca %sCLMethod*
  %34 = bitcast %sCLMethod** %method to i8*
  store i8* %34, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store %sCLMethod* null, %sCLMethod** %method, align 8
  br label %loop_top_block

cond_then_block:                                  ; preds = %cond_jump_then
  br label %cond_end14

cond_end14:                                       ; preds = %cond_then_block, %cond_jump_then
  call void @ncfree(i8* %26)
  ret i1 false

loop_top_block:                                   ; preds = %cond_end22, %cond_end
  %klass16 = load %sCLClass*, %sCLClass** %klass, align 8
  %35 = ptrtoint %sCLClass* %klass16 to i64
  %36 = icmp ne i64 %35, 0
  br i1 %36, label %cond_then_block17, label %cond_end_block

cond_then_block17:                                ; preds = %loop_top_block
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %38 = bitcast i8* %37 to %sCLClass**
  %klass18 = load %sCLClass*, %sCLClass** %38, align 8
  %39 = getelementptr inbounds %sCLClass, %sCLClass* %klass18, i32 0, i32 1
  %40 = load %map__charp_sCLMethodp*, %map__charp_sCLMethodp** %39, align 8
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %42 = bitcast i8* %41 to i8**
  %method_name19 = load i8*, i8** %42, align 8
  %43 = call %sCLMethod* @"at_charp_sCLMethodp15_src/native6"(%map__charp_sCLMethodp* %40, i8* %method_name19, %sCLMethod* null)
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %45 = bitcast i8* %44 to %sCLMethod**
  store %sCLMethod* %43, %sCLMethod** %45, align 8
  %46 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %47 = bitcast i8* %46 to %sCLMethod**
  %method20 = load %sCLMethod*, %sCLMethod** %47, align 8
  %48 = ptrtoint %sCLMethod* %method20 to i64
  %49 = icmp ne i64 %48, 0
  br i1 %49, label %cond_jump_then21, label %cond_end22

cond_end_block:                                   ; preds = %cond_jump_then21, %loop_top_block
  %method24 = load %sCLMethod*, %sCLMethod** %method, align 8
  %eqtmpX25 = icmp eq %sCLMethod* %method24, null
  br i1 %eqtmpX25, label %cond_jump_then26, label %cond_end27

cond_jump_then21:                                 ; preds = %cond_then_block17
  br label %cond_end_block

cond_end22:                                       ; preds = %after_break, %cond_then_block17
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %51 = bitcast i8* %50 to %sCLClass**
  %klass23 = load %sCLClass*, %sCLClass** %51, align 8
  %52 = getelementptr inbounds %sCLClass, %sCLClass* %klass23, i32 0, i32 3
  %53 = load %sCLClass*, %sCLClass** %52, align 8
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %55 = bitcast i8* %54 to %sCLClass**
  store %sCLClass* %53, %sCLClass** %55, align 8
  br label %loop_top_block

after_break:                                      ; No predecessors!
  br label %cond_end22

cond_jump_then26:                                 ; preds = %cond_end_block
  %56 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %57 = bitcast i8* %56 to %CLVALUE***
  %stack_ptr28 = load %CLVALUE**, %CLVALUE*** %57, align 8
  %58 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %59 = bitcast i8* %58 to %sVMInfo**
  %info29 = load %sVMInfo*, %sVMInfo** %59, align 8
  %60 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %61 = bitcast i8* %60 to i8**
  %klass_name30 = load i8*, i8** %61, align 8
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %63 = bitcast i8* %62 to i8**
  %method_name31 = load i8*, i8** %63, align 8
  %64 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_string.36, i32 0, i32 0), i8* %klass_name30, i8* %method_name31)
  call void @vm_err_msg(%CLVALUE** %stack_ptr28, %sVMInfo* %info29, i8* %64)
  %65 = bitcast [8192 x i8*]* %lvtable to i8*
  %66 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %65, i64 65536)
  %67 = ptrtoint i8* %64 to i64
  %68 = icmp ne i64 %67, 0
  br i1 %68, label %cond_then_block32, label %cond_end33

cond_end27:                                       ; preds = %cond_end_block
  %method34 = load %sCLMethod*, %sCLMethod** %method, align 8
  %69 = getelementptr inbounds %sCLMethod, %sCLMethod* %method34, i32 0, i32 6
  %70 = load i32, i32* %69, align 4
  %var_num = alloca i32
  %71 = bitcast i32* %var_num to i8*
  store i8* %71, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 %70, i32* %var_num, align 4
  %method35 = load %sCLMethod*, %sCLMethod** %method, align 8
  %72 = getelementptr inbounds %sCLMethod, %sCLMethod* %method35, i32 0, i32 1
  %73 = bitcast [32 x %sCLParam]* %72 to %sCLParam*
  %method36 = load %sCLMethod*, %sCLMethod** %method, align 8
  %74 = getelementptr inbounds %sCLMethod, %sCLMethod* %method36, i32 0, i32 2
  %75 = load i32, i32* %74, align 4
  %stack_ptr37 = load %CLVALUE**, %CLVALUE*** %stack_ptr5, align 8
  %derefference_value = load %CLVALUE*, %CLVALUE** %stack_ptr37, align 8
  %generics_types38 = load %sCLType*, %sCLType** %generics_types, align 8
  %info39 = load %sVMInfo*, %sVMInfo** %info6, align 8
  %76 = call i1 @param_check(%sCLParam* %73, i32 %75, %CLVALUE* %derefference_value, %sCLType* %generics_types38, %sVMInfo* %info39)
  %LOGICAL_DIANEAL = icmp eq i1 %76, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then40, label %cond_end41

cond_then_block32:                                ; preds = %cond_jump_then26
  br label %cond_end33

cond_end33:                                       ; preds = %cond_then_block32, %cond_jump_then26
  call void @ncfree(i8* %64)
  ret i1 false

cond_jump_then40:                                 ; preds = %cond_end27
  %77 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %78 = bitcast i8* %77 to %CLVALUE***
  %stack_ptr42 = load %CLVALUE**, %CLVALUE*** %78, align 8
  %79 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %80 = bitcast i8* %79 to %sVMInfo**
  %info43 = load %sVMInfo*, %sVMInfo** %80, align 8
  %81 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %82 = bitcast i8* %81 to %sCLClass**
  %klass44 = load %sCLClass*, %sCLClass** %82, align 8
  %83 = getelementptr inbounds %sCLClass, %sCLClass* %klass44, i32 0, i32 0
  %84 = load i8*, i8** %83, align 8
  %85 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %86 = bitcast i8* %85 to i8**
  %method_name45 = load i8*, i8** %86, align 8
  %87 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_string.37, i32 0, i32 0), i8* %84, i8* %method_name45)
  call void @vm_err_msg(%CLVALUE** %stack_ptr42, %sVMInfo* %info43, i8* %87)
  %88 = bitcast [8192 x i8*]* %lvtable to i8*
  %89 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %88, i64 65536)
  %90 = ptrtoint i8* %87 to i64
  %91 = icmp ne i64 %90, 0
  br i1 %91, label %cond_then_block46, label %cond_end47

cond_end41:                                       ; preds = %cond_end27
  %method48 = load %sCLMethod*, %sCLMethod** %method, align 8
  %92 = getelementptr inbounds %sCLMethod, %sCLMethod* %method48, i32 0, i32 4
  %93 = load %buffer*, %buffer** %92, align 8
  %eqtmpX49 = icmp eq %buffer* %93, null
  br i1 %eqtmpX49, label %cond_jump_then50, label %cond_else_block

cond_then_block46:                                ; preds = %cond_jump_then40
  br label %cond_end47

cond_end47:                                       ; preds = %cond_then_block46, %cond_jump_then40
  call void @ncfree(i8* %87)
  ret i1 false

cond_jump_then50:                                 ; preds = %cond_end41
  %94 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %95 = bitcast i8* %94 to %sCLClass**
  %klass52 = load %sCLClass*, %sCLClass** %95, align 8
  %96 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %97 = bitcast i8* %96 to %sCLMethod**
  %method53 = load %sCLMethod*, %sCLMethod** %97, align 8
  %98 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %99 = bitcast i8* %98 to %CLVALUE***
  %stack_ptr54 = load %CLVALUE**, %CLVALUE*** %99, align 8
  %100 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %101 = bitcast i8* %100 to %sVMInfo**
  %info55 = load %sVMInfo*, %sVMInfo** %101, align 8
  %102 = call i1 @invoke_native_method(%sCLClass* %klass52, %sCLMethod* %method53, %CLVALUE** %stack_ptr54, %sVMInfo* %info55)
  %LOGICAL_DIANEAL56 = icmp eq i1 %102, false
  br i1 %LOGICAL_DIANEAL56, label %cond_jump_then57, label %cond_end58

cond_else_block:                                  ; preds = %cond_end41
  %103 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %104 = bitcast i8* %103 to %sCLMethod**
  %method94 = load %sCLMethod*, %sCLMethod** %104, align 8
  %105 = getelementptr inbounds %sCLMethod, %sCLMethod* %method94, i32 0, i32 4
  %106 = load %buffer*, %buffer** %105, align 8
  %codes = alloca %buffer*
  %107 = bitcast %buffer** %codes to i8*
  store i8* %107, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store %buffer* %106, %buffer** %codes, align 8
  %108 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %109 = bitcast i8* %108 to %sCLMethod**
  %method95 = load %sCLMethod*, %sCLMethod** %109, align 8
  %110 = getelementptr inbounds %sCLMethod, %sCLMethod* %method95, i32 0, i32 6
  %111 = load i32, i32* %110, align 4
  %var_num96 = alloca i32
  %112 = bitcast i32* %var_num96 to i8*
  store i8* %112, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  store i32 %111, i32* %var_num96, align 4
  %result = alloca %CLVALUE
  %113 = bitcast %CLVALUE* %result to i8*
  store i8* %113, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %codes97 = load %buffer*, %buffer** %codes, align 8
  %114 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %115 = bitcast i8* %114 to %CLVALUE***
  %stack_ptr98 = load %CLVALUE**, %CLVALUE*** %115, align 8
  %derefference_value99 = load %CLVALUE*, %CLVALUE** %stack_ptr98, align 8
  %116 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %117 = bitcast i8* %116 to i32*
  %num_params100 = load i32, i32* %117, align 4
  %var_num101 = load i32, i32* %var_num96, align 4
  %result102 = load %CLVALUE, %CLVALUE* %result, align 8
  %118 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %119 = bitcast i8* %118 to %sVMInfo**
  %info103 = load %sVMInfo*, %sVMInfo** %119, align 8
  %120 = call i1 @vm(%buffer* %codes97, %CLVALUE* %derefference_value99, i32 %num_params100, i32 %var_num101, %CLVALUE* %result, %CLVALUE* null, %sVMInfo* %info103)
  %LOGICAL_DIANEAL104 = icmp eq i1 %120, false
  br i1 %LOGICAL_DIANEAL104, label %cond_jump_then105, label %cond_end106

cond_end51:                                       ; preds = %cond_end121, %cond_end78
  %121 = bitcast [8192 x i8*]* %lvtable to i8*
  %122 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %121, i64 65536)
  ret i1 true

cond_jump_then57:                                 ; preds = %cond_jump_then50
  %123 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %124 = bitcast i8* %123 to %CLVALUE***
  %stack_ptr59 = load %CLVALUE**, %CLVALUE*** %124, align 8
  %125 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %126 = bitcast i8* %125 to %sVMInfo**
  %info60 = load %sVMInfo*, %sVMInfo** %126, align 8
  %127 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %128 = bitcast i8* %127 to %sCLClass**
  %klass61 = load %sCLClass*, %sCLClass** %128, align 8
  %129 = getelementptr inbounds %sCLClass, %sCLClass* %klass61, i32 0, i32 0
  %130 = load i8*, i8** %129, align 8
  %131 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %132 = bitcast i8* %131 to i8**
  %method_name62 = load i8*, i8** %132, align 8
  %133 = call i8* (i8*, ...) @xsprintf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_string.38, i32 0, i32 0), i8* %130, i8* %method_name62)
  call void @vm_err_msg(%CLVALUE** %stack_ptr59, %sVMInfo* %info60, i8* %133)
  %134 = bitcast [8192 x i8*]* %lvtable to i8*
  %135 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %134, i64 65536)
  %136 = ptrtoint i8* %133 to i64
  %137 = icmp ne i64 %136, 0
  br i1 %137, label %cond_then_block63, label %cond_end64

cond_end58:                                       ; preds = %cond_jump_then50
  %138 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %139 = bitcast i8* %138 to %CLVALUE***
  %stack_ptr65 = load %CLVALUE**, %CLVALUE*** %139, align 8
  %derefference_value66 = load %CLVALUE*, %CLVALUE** %stack_ptr65, align 8
  %140 = ptrtoint %CLVALUE* %derefference_value66 to i64
  %subtmp = sub nsw i64 %140, 4
  %IntTOPtr4b = inttoptr i64 %subtmp to %CLVALUE*
  %derefference_value67 = load %CLVALUE, %CLVALUE* %IntTOPtr4b, align 8
  %result_value = alloca %CLVALUE
  %141 = bitcast %CLVALUE* %result_value to i8*
  store i8* %141, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store %CLVALUE %derefference_value67, %CLVALUE* %result_value, align 8
  %142 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %143 = bitcast i8* %142 to %CLVALUE***
  %stack_ptr68 = load %CLVALUE**, %CLVALUE*** %143, align 8
  %derefference_value69 = load %CLVALUE*, %CLVALUE** %stack_ptr68, align 8
  %144 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %145 = bitcast i8* %144 to i32*
  %num_params70 = load i32, i32* %145, align 4
  %146 = ptrtoint %CLVALUE* %derefference_value69 to i64
  %sext5 = sext i32 %num_params70 to i64
  %multtmp = mul nsw i64 %sext5, 4
  %subtmp71 = sub nsw i64 %146, %multtmp
  %IntToPtr8 = inttoptr i64 %subtmp71 to %CLVALUE*
  store %CLVALUE* %IntToPtr8, %CLVALUE** %stack_ptr68, align 8
  %147 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %148 = bitcast i8* %147 to %sCLMethod**
  %method72 = load %sCLMethod*, %sCLMethod** %148, align 8
  %149 = getelementptr inbounds %sCLMethod, %sCLMethod* %method72, i32 0, i32 3
  %150 = load %sCLType*, %sCLType** %149, align 8
  %151 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %152 = bitcast i8* %151 to %sVMInfo**
  %info73 = load %sVMInfo*, %sVMInfo** %152, align 8
  %153 = getelementptr inbounds %sVMInfo, %sVMInfo* %info73, i32 0, i32 2
  %154 = load %sParserInfo*, %sParserInfo** %153, align 8
  %155 = call i1 @type_identify_with_class_name(%sCLType* %150, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.39, i32 0, i32 0), %sParserInfo* %154)
  %LOGICAL_DIANEAL74 = icmp eq i1 %155, false
  %result_existance = alloca i1
  %156 = bitcast i1* %result_existance to i8*
  store i8* %156, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  store i1 %LOGICAL_DIANEAL74, i1* %result_existance, align 1
  %result_existance75 = load i1, i1* %result_existance, align 1
  br i1 %result_existance75, label %cond_jump_then76, label %cond_else_block77

cond_then_block63:                                ; preds = %cond_jump_then57
  br label %cond_end64

cond_end64:                                       ; preds = %cond_then_block63, %cond_jump_then57
  call void @ncfree(i8* %133)
  ret i1 false

cond_jump_then76:                                 ; preds = %cond_end58
  %157 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %158 = bitcast i8* %157 to %CLVALUE***
  %stack_ptr79 = load %CLVALUE**, %CLVALUE*** %158, align 8
  %derefference_value80 = load %CLVALUE*, %CLVALUE** %stack_ptr79, align 8
  %159 = ptrtoint %CLVALUE* %derefference_value80 to i64
  %subtmp81 = sub nsw i64 %159, 4
  %IntTOPtr6d = inttoptr i64 %subtmp81 to %CLVALUE*
  store %CLVALUE* %IntTOPtr6d, %CLVALUE** %stack_ptr79, align 8
  %160 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %161 = bitcast i8* %160 to %CLVALUE***
  %stack_ptr82 = load %CLVALUE**, %CLVALUE*** %161, align 8
  %derefference_value83 = load %CLVALUE*, %CLVALUE** %stack_ptr82, align 8
  %162 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %163 = bitcast i8* %162 to %CLVALUE*
  %result_value84 = load %CLVALUE, %CLVALUE* %163, align 8
  %164 = bitcast %CLVALUE* %163 to i32*
  %165 = load i32, i32* %164, align 4
  %166 = bitcast %CLVALUE* %derefference_value83 to i32*
  store i32 %165, i32* %166, align 4
  %167 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %168 = bitcast i8* %167 to %CLVALUE***
  %stack_ptr85 = load %CLVALUE**, %CLVALUE*** %168, align 8
  %derefference_value86 = load %CLVALUE*, %CLVALUE** %stack_ptr85, align 8
  %169 = ptrtoint %CLVALUE* %derefference_value86 to i64
  %adddtmp = add nsw i64 %169, 4
  %IntTOPtr5c = inttoptr i64 %adddtmp to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c, %CLVALUE** %stack_ptr85, align 8
  br label %cond_end78

cond_else_block77:                                ; preds = %cond_end58
  %170 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %171 = bitcast i8* %170 to %CLVALUE***
  %stack_ptr87 = load %CLVALUE**, %CLVALUE*** %171, align 8
  %derefference_value88 = load %CLVALUE*, %CLVALUE** %stack_ptr87, align 8
  %172 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %173 = bitcast i8* %172 to %sVMInfo**
  %info89 = load %sVMInfo*, %sVMInfo** %173, align 8
  %174 = call i32 @create_null_object(%sVMInfo* %info89)
  %175 = bitcast %CLVALUE* %derefference_value88 to i32*
  store i32 %174, i32* %175, align 4
  %176 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %177 = bitcast i8* %176 to %CLVALUE***
  %stack_ptr90 = load %CLVALUE**, %CLVALUE*** %177, align 8
  %derefference_value91 = load %CLVALUE*, %CLVALUE** %stack_ptr90, align 8
  %178 = ptrtoint %CLVALUE* %derefference_value91 to i64
  %adddtmp92 = add nsw i64 %178, 4
  %IntTOPtr5c93 = inttoptr i64 %adddtmp92 to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c93, %CLVALUE** %stack_ptr90, align 8
  br label %cond_end78

cond_end78:                                       ; preds = %cond_else_block77, %cond_jump_then76
  br label %cond_end51

cond_jump_then105:                                ; preds = %cond_else_block
  %179 = bitcast [8192 x i8*]* %lvtable to i8*
  %180 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %179, i64 65536)
  ret i1 false

cond_end106:                                      ; preds = %cond_else_block
  %181 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %182 = bitcast i8* %181 to %CLVALUE***
  %stack_ptr107 = load %CLVALUE**, %CLVALUE*** %182, align 8
  %derefference_value108 = load %CLVALUE*, %CLVALUE** %stack_ptr107, align 8
  %183 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %184 = bitcast i8* %183 to i32*
  %num_params109 = load i32, i32* %184, align 4
  %185 = ptrtoint %CLVALUE* %derefference_value108 to i64
  %sext5110 = sext i32 %num_params109 to i64
  %multtmp111 = mul nsw i64 %sext5110, 4
  %subtmp112 = sub nsw i64 %185, %multtmp111
  %IntToPtr8113 = inttoptr i64 %subtmp112 to %CLVALUE*
  store %CLVALUE* %IntToPtr8113, %CLVALUE** %stack_ptr107, align 8
  %186 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %187 = bitcast i8* %186 to %sCLMethod**
  %method114 = load %sCLMethod*, %sCLMethod** %187, align 8
  %188 = getelementptr inbounds %sCLMethod, %sCLMethod* %method114, i32 0, i32 3
  %189 = load %sCLType*, %sCLType** %188, align 8
  %190 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %191 = bitcast i8* %190 to %sVMInfo**
  %info115 = load %sVMInfo*, %sVMInfo** %191, align 8
  %192 = getelementptr inbounds %sVMInfo, %sVMInfo* %info115, i32 0, i32 2
  %193 = load %sParserInfo*, %sParserInfo** %192, align 8
  %194 = call i1 @type_identify_with_class_name(%sCLType* %189, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_string.40, i32 0, i32 0), %sParserInfo* %193)
  %LOGICAL_DIANEAL116 = icmp eq i1 %194, false
  %result_existance117 = alloca i1
  %195 = bitcast i1* %result_existance117 to i8*
  store i8* %195, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i1 %LOGICAL_DIANEAL116, i1* %result_existance117, align 1
  %result_existance118 = load i1, i1* %result_existance117, align 1
  br i1 %result_existance118, label %cond_jump_then119, label %cond_else_block120

cond_jump_then119:                                ; preds = %cond_end106
  %196 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %197 = bitcast i8* %196 to %CLVALUE***
  %stack_ptr122 = load %CLVALUE**, %CLVALUE*** %197, align 8
  %derefference_value123 = load %CLVALUE*, %CLVALUE** %stack_ptr122, align 8
  %198 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %199 = bitcast i8* %198 to %CLVALUE*
  %result124 = load %CLVALUE, %CLVALUE* %199, align 8
  %200 = bitcast %CLVALUE* %199 to i32*
  %201 = load i32, i32* %200, align 4
  %202 = bitcast %CLVALUE* %derefference_value123 to i32*
  store i32 %201, i32* %202, align 4
  %203 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %204 = bitcast i8* %203 to %CLVALUE***
  %stack_ptr125 = load %CLVALUE**, %CLVALUE*** %204, align 8
  %derefference_value126 = load %CLVALUE*, %CLVALUE** %stack_ptr125, align 8
  %205 = ptrtoint %CLVALUE* %derefference_value126 to i64
  %adddtmp127 = add nsw i64 %205, 4
  %IntTOPtr5c128 = inttoptr i64 %adddtmp127 to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c128, %CLVALUE** %stack_ptr125, align 8
  br label %cond_end121

cond_else_block120:                               ; preds = %cond_end106
  %206 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %207 = bitcast i8* %206 to %CLVALUE***
  %stack_ptr129 = load %CLVALUE**, %CLVALUE*** %207, align 8
  %derefference_value130 = load %CLVALUE*, %CLVALUE** %stack_ptr129, align 8
  %208 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %209 = bitcast i8* %208 to %sVMInfo**
  %info131 = load %sVMInfo*, %sVMInfo** %209, align 8
  %210 = call i32 @create_null_object(%sVMInfo* %info131)
  %211 = bitcast %CLVALUE* %derefference_value130 to i32*
  store i32 %210, i32* %211, align 4
  %212 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %213 = bitcast i8* %212 to %CLVALUE***
  %stack_ptr132 = load %CLVALUE**, %CLVALUE*** %213, align 8
  %derefference_value133 = load %CLVALUE*, %CLVALUE** %stack_ptr132, align 8
  %214 = ptrtoint %CLVALUE* %derefference_value133 to i64
  %adddtmp134 = add nsw i64 %214, 4
  %IntTOPtr5c135 = inttoptr i64 %adddtmp134 to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c135, %CLVALUE** %stack_ptr132, align 8
  br label %cond_end121

cond_end121:                                      ; preds = %cond_else_block120, %cond_jump_then119
  br label %cond_end51
}

define %sCLMethod* @"at_charp_sCLMethodp15_src/native6"(%map__charp_sCLMethodp* %self, i8* %key, %sCLMethod* %default_value) {
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

define i1 @sevenstars_map_to_string(%CLVALUE** %stack_ptr, %sVMInfo* %info) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %stack_ptr2 = alloca %CLVALUE**
  store %CLVALUE** %stack_ptr, %CLVALUE*** %stack_ptr2, align 8
  %2 = bitcast %CLVALUE*** %stack_ptr2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %info3 = alloca %sVMInfo*
  store %sVMInfo* %info, %sVMInfo** %info3, align 8
  %3 = bitcast %sVMInfo** %info3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %stack_ptr4 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value = load %CLVALUE*, %CLVALUE** %stack_ptr4, align 8
  %4 = ptrtoint %CLVALUE* %derefference_value to i64
  %subtmp = sub nsw i64 %4, 4
  %IntTOPtr4b = inttoptr i64 %subtmp to %CLVALUE*
  %5 = bitcast %CLVALUE* %IntTOPtr4b to i32*
  %6 = load i32, i32* %5, align 4
  %self = alloca i32
  %7 = bitcast i32* %self to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  store i32 %6, i32* %self, align 4
  %self5 = load i32, i32* %self, align 4
  %info6 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %8 = call i1 @check_type(i32 %self5, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_string.41, i32 0, i32 0), %sVMInfo* %info6)
  %LOGICAL_DIANEAL = icmp eq i1 %8, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %10 = bitcast i8* %9 to %CLVALUE***
  %stack_ptr7 = load %CLVALUE**, %CLVALUE*** %10, align 8
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %12 = bitcast i8* %11 to %sVMInfo**
  %info8 = load %sVMInfo*, %sVMInfo** %12, align 8
  call void @vm_err_msg(%CLVALUE** %stack_ptr7, %sVMInfo* %info8, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_string.42, i32 0, i32 0))
  %13 = bitcast [8192 x i8*]* %lvtable to i8*
  %14 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %13, i64 65536)
  ret i1 false

cond_end:                                         ; preds = %entry
  %self9 = load i32, i32* %self, align 4
  %15 = call %map__charp_int* @get_map_value(i32 %self9)
  %self_value = alloca %map__charp_int*
  %16 = bitcast %map__charp_int** %self_value to i8*
  store i8* %16, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store %map__charp_int* %15, %map__charp_int** %self_value, align 8
  %17 = call i8* @nccalloc(i64 1, i64 16)
  %18 = bitcast i8* %17 to %buffer*
  %19 = call %buffer* @buffer_initialize(%buffer* %18)
  %buf = alloca %buffer*
  %20 = bitcast %buffer** %buf to i8*
  store i8* %20, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store %buffer* %19, %buffer** %buf, align 8
  %return_false = alloca i1
  %21 = bitcast i1* %return_false to i8*
  store i8* %21, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  store i1 false, i1* %return_false, align 1
  %n = alloca i32
  %22 = bitcast i32* %n to i8*
  store i8* %22, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i32 0, i32* %n, align 4
  %self_value10 = load %map__charp_int*, %map__charp_int** %self_value, align 8
  call void @"each_charp_int16_src/native6"(%map__charp_int* %self_value10, void (i8*, i32, i1*)* @native6_lambda7)
  %buf11 = load %buffer*, %buffer** %buf, align 8
  call void @buffer_append_str(%buffer* %buf11, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_string.49, i32 0, i32 0))
  %return_false12 = load i1, i1* %return_false, align 1
  br i1 %return_false12, label %cond_jump_then13, label %cond_end14

cond_jump_then13:                                 ; preds = %cond_end
  %23 = bitcast [8192 x i8*]* %lvtable to i8*
  %24 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %23, i64 65536)
  %25 = load %buffer*, %buffer** %buf, align 8
  call void @buffer_finalize(%buffer* %25)
  %26 = ptrtoint %buffer* %25 to i64
  %27 = icmp ne i64 %26, 0
  br i1 %27, label %cond_then_block, label %cond_end15

cond_end14:                                       ; preds = %cond_end
  %buf16 = load %buffer*, %buffer** %buf, align 8
  %28 = call i8* @buffer_to_string(%buffer* %buf16)
  %info17 = load %sVMInfo*, %sVMInfo** %info3, align 8
  %29 = call i32 @create_string_object(i8* %28, %sVMInfo* %info17)
  %result = alloca i32
  %30 = bitcast i32* %result to i8*
  store i8* %30, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i32 %29, i32* %result, align 4
  %stack_ptr18 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value19 = load %CLVALUE*, %CLVALUE** %stack_ptr18, align 8
  %result20 = load i32, i32* %result, align 4
  %31 = bitcast %CLVALUE* %derefference_value19 to i32*
  store i32 %result20, i32* %31, align 4
  %stack_ptr21 = load %CLVALUE**, %CLVALUE*** %stack_ptr2, align 8
  %derefference_value22 = load %CLVALUE*, %CLVALUE** %stack_ptr21, align 8
  %32 = ptrtoint %CLVALUE* %derefference_value22 to i64
  %adddtmp = add nsw i64 %32, 4
  %IntTOPtr5c = inttoptr i64 %adddtmp to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c, %CLVALUE** %stack_ptr21, align 8
  %33 = bitcast [8192 x i8*]* %lvtable to i8*
  %34 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %33, i64 65536)
  %35 = ptrtoint i8* %28 to i64
  %36 = icmp ne i64 %35, 0
  br i1 %36, label %cond_then_block23, label %cond_end24

cond_then_block:                                  ; preds = %cond_jump_then13
  br label %cond_end15

cond_end15:                                       ; preds = %cond_then_block, %cond_jump_then13
  %37 = bitcast %buffer* %25 to i8*
  call void @ncfree(i8* %37)
  ret i1 false

cond_then_block23:                                ; preds = %cond_end14
  br label %cond_end24

cond_end24:                                       ; preds = %cond_then_block23, %cond_end14
  call void @ncfree(i8* %28)
  %38 = load %buffer*, %buffer** %buf, align 8
  call void @buffer_finalize(%buffer* %38)
  %39 = ptrtoint %buffer* %38 to i64
  %40 = icmp ne i64 %39, 0
  br i1 %40, label %cond_then_block25, label %cond_end26

cond_then_block25:                                ; preds = %cond_end24
  br label %cond_end26

cond_end26:                                       ; preds = %cond_then_block25, %cond_end24
  %41 = bitcast %buffer* %38 to i8*
  call void @ncfree(i8* %41)
  ret i1 true
}

define void @native6_lambda7(i8* %it, i32 %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i8*
  store i8* %it, i8** %it4, align 8
  %2 = bitcast i8** %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %it25 = alloca i32
  store i32 %it2, i32* %it25, align 4
  %3 = bitcast i32* %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %it27 = load i32, i32* %it25, align 4
  %obj = alloca i32
  %5 = bitcast i32* %obj to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store i32 %it27, i32* %obj, align 4
  %method_name = alloca i8*
  %6 = bitcast i8** %method_name to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  store i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_string.46, i32 0, i32 0), i8** %method_name, align 8
  %7 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %8 = bitcast i8* %7 to %CLVALUE***
  %stack_ptr = load %CLVALUE**, %CLVALUE*** %8, align 8
  %derefference_value = load %CLVALUE*, %CLVALUE** %stack_ptr, align 8
  %obj8 = load i32, i32* %obj, align 4
  %9 = bitcast %CLVALUE* %derefference_value to i32*
  store i32 %obj8, i32* %9, align 4
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %11 = bitcast i8* %10 to %CLVALUE***
  %stack_ptr9 = load %CLVALUE**, %CLVALUE*** %11, align 8
  %derefference_value10 = load %CLVALUE*, %CLVALUE** %stack_ptr9, align 8
  %12 = ptrtoint %CLVALUE* %derefference_value10 to i64
  %adddtmp = add nsw i64 %12, 4
  %IntTOPtr5c = inttoptr i64 %adddtmp to %CLVALUE*
  store %CLVALUE* %IntTOPtr5c, %CLVALUE** %stack_ptr9, align 8
  %num_params = alloca i32
  %13 = bitcast i32* %num_params to i8*
  store i8* %13, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  store i32 1, i32* %num_params, align 4
  %obj11 = load i32, i32* %obj, align 4
  %method_name12 = load i8*, i8** %method_name, align 8
  %num_params13 = load i32, i32* %num_params, align 4
  %14 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %15 = bitcast i8* %14 to %CLVALUE***
  %stack_ptr14 = load %CLVALUE**, %CLVALUE*** %15, align 8
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %17 = bitcast i8* %16 to %sVMInfo**
  %info = load %sVMInfo*, %sVMInfo** %17, align 8
  %18 = call i1 @vm_invoke_method(i32 %obj11, i8* %method_name12, i32 %num_params13, %CLVALUE** %stack_ptr14, %sVMInfo* %info)
  %LOGICAL_DIANEAL = icmp eq i1 %18, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %20 = bitcast i8* %19 to i1**
  %it315 = load i1*, i1** %20, align 8
  store i1 true, i1* %it315, align 1
  %21 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %22 = bitcast i8* %21 to i1*
  store i1 true, i1* %22, align 1
  %23 = bitcast [8192 x i8*]* %lvtable to i8*
  %24 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %23, i64 65536)
  ret void

cond_end:                                         ; preds = %entry
  %25 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %26 = bitcast i8* %25 to %CLVALUE***
  %stack_ptr16 = load %CLVALUE**, %CLVALUE*** %26, align 8
  %derefference_value17 = load %CLVALUE*, %CLVALUE** %stack_ptr16, align 8
  %27 = ptrtoint %CLVALUE* %derefference_value17 to i64
  %subtmp = sub nsw i64 %27, 4
  %IntTOPtr4b = inttoptr i64 %subtmp to %CLVALUE*
  %28 = bitcast %CLVALUE* %IntTOPtr4b to i32*
  %29 = load i32, i32* %28, align 4
  %to_string_result = alloca i32
  %30 = bitcast i32* %to_string_result to i8*
  store i8* %30, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i32 %29, i32* %to_string_result, align 4
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %32 = bitcast i8* %31 to %CLVALUE***
  %stack_ptr18 = load %CLVALUE**, %CLVALUE*** %32, align 8
  %derefference_value19 = load %CLVALUE*, %CLVALUE** %stack_ptr18, align 8
  %33 = ptrtoint %CLVALUE* %derefference_value19 to i64
  %subtmp20 = sub nsw i64 %33, 4
  %IntTOPtr6d = inttoptr i64 %subtmp20 to %CLVALUE*
  store %CLVALUE* %IntTOPtr6d, %CLVALUE** %stack_ptr18, align 8
  %to_string_result21 = load i32, i32* %to_string_result, align 4
  %34 = call i8* @get_string_mem(i32 %to_string_result21)
  %string_data = alloca i8*
  %35 = bitcast i8** %string_data to i8*
  store i8* %35, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  store i8* %34, i8** %string_data, align 8
  %36 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %37 = bitcast i8* %36 to %buffer**
  %buf = load %buffer*, %buffer** %37, align 8
  %it22 = load i8*, i8** %it4, align 8
  call void @buffer_append_str(%buffer* %buf, i8* %it22)
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %39 = bitcast i8* %38 to %buffer**
  %buf23 = load %buffer*, %buffer** %39, align 8
  call void @buffer_append_str(%buffer* %buf23, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_string.47, i32 0, i32 0))
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %41 = bitcast i8* %40 to %buffer**
  %buf24 = load %buffer*, %buffer** %41, align 8
  %string_data25 = load i8*, i8** %string_data, align 8
  call void @buffer_append_str(%buffer* %buf24, i8* %string_data25)
  %42 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %43 = bitcast i8* %42 to %buffer**
  %buf26 = load %buffer*, %buffer** %43, align 8
  call void @buffer_append_str(%buffer* %buf26, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_string.48, i32 0, i32 0))
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %45 = bitcast i8* %44 to i32*
  %n = load i32, i32* %45, align 4
  %addtmp = add nsw i32 %n, 1
  %46 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %47 = bitcast i8* %46 to i32*
  store i32 %addtmp, i32* %47, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %48 = bitcast [8192 x i8*]* %lvtable to i8*
  %49 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %48, i64 65536)
  ret void
}

define void @"each_charp_int16_src/native6"(%map__charp_int* %self, void (i8*, i32, i1*)* %block_) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_int*
  store %map__charp_int* %self, %map__charp_int** %self2, align 8
  %2 = bitcast %map__charp_int** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %block_3 = alloca void (i8*, i32, i1*)*
  store void (i8*, i32, i1*)* %block_, void (i8*, i32, i1*)** %block_3, align 8
  %3 = bitcast void (i8*, i32, i1*)** %block_3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %i_ = alloca i32
  %4 = bitcast i32* %i_ to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 0, i32* %i_, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %i_4 = load i32, i32* %i_, align 4
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %6 = bitcast i8* %5 to %map__charp_int**
  %self5 = load %map__charp_int*, %map__charp_int** %6, align 8
  %7 = getelementptr inbounds %map__charp_int, %map__charp_int* %self5, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %letmp = icmp slt i32 %i_4, %8
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
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
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  store i1 false, i1* %end_flag_, align 1
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %17 = bitcast i8* %16 to void (i8*, i32, i1*)**
  %block_8 = load void (i8*, i32, i1*)*, void (i8*, i32, i1*)** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %19 = bitcast i8* %18 to %map__charp_int**
  %self9 = load %map__charp_int*, %map__charp_int** %19, align 8
  %20 = getelementptr inbounds %map__charp_int, %map__charp_int* %self9, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %23 = bitcast i8* %22 to i32*
  %i_10 = load i32, i32* %23, align 4
  %element_addressB11 = getelementptr i8*, i8** %21, i32 %i_10
  %element12 = load i8*, i8** %element_addressB11, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %25 = bitcast i8* %24 to %map__charp_int**
  %self13 = load %map__charp_int*, %map__charp_int** %25, align 8
  %26 = getelementptr inbounds %map__charp_int, %map__charp_int* %self13, i32 0, i32 2
  %27 = load i32*, i32** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
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

define void @"insert_charp_lambdap17_src/native6"(%map__charp_lambdap* %self, i8* %key, i1 (%CLVALUE**, %sVMInfo*)* %item) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %item4 = alloca i1 (%CLVALUE**, %sVMInfo*)*
  store i1 (%CLVALUE**, %sVMInfo*)* %item, i1 (%CLVALUE**, %sVMInfo*)** %item4, align 8
  %4 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %item4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %self5 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %5 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self5, i32 0, i32 4
  %6 = load i32, i32* %5, align 4
  %multtmp = mul nsw i32 %6, 2
  %self6 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %7 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self6, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %getmp = icmp sge i32 %multtmp, %8
  br i1 %getmp, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %10 = bitcast i8* %9 to %map__charp_lambdap**
  %self7 = load %map__charp_lambdap*, %map__charp_lambdap** %10, align 8
  call void @"rehash_charp_lambdap18_src/native6"(%map__charp_lambdap* %self7)
  br label %cond_end

cond_end:                                         ; preds = %cond_jump_then, %entry
  %key8 = load i8*, i8** %key3, align 8
  %11 = call i32 @string_get_hash_key(i8* %key8)
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %12 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self9, i32 0, i32 3
  %13 = load i32, i32* %12, align 4
  %remtmp = srem i32 %11, %13
  %hash = alloca i32
  %14 = bitcast i32* %hash to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash10 = load i32, i32* %hash, align 4
  %it = alloca i32
  %15 = bitcast i32* %it to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i32 %hash10, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end14, %cond_end
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %17 = bitcast i8* %16 to %map__charp_lambdap**
  %self11 = load %map__charp_lambdap*, %map__charp_lambdap** %17, align 8
  %18 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self11, i32 0, i32 1
  %19 = load i1*, i1** %18, align 8
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
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
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %25 = bitcast i8* %24 to %map__charp_lambdap**
  %self15 = load %map__charp_lambdap*, %map__charp_lambdap** %25, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self15, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %29 = bitcast i8* %28 to i32*
  %it16 = load i32, i32* %29, align 4
  %element_addressB17 = getelementptr i8*, i8** %27, i32 %it16
  %element18 = load i8*, i8** %element_addressB17, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %31 = bitcast i8* %30 to i8**
  %key19 = load i8*, i8** %31, align 8
  %32 = call i1 @string_equals(i8* %element18, i8* %key19)
  br i1 %32, label %cond_jump_then20, label %cond_end21

cond_else_block:                                  ; preds = %cond_then_block
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %34 = bitcast i8* %33 to %map__charp_lambdap**
  %self53 = load %map__charp_lambdap*, %map__charp_lambdap** %34, align 8
  %35 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self53, i32 0, i32 1
  %36 = load i1*, i1** %35, align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %38 = bitcast i8* %37 to i32*
  %it54 = load i32, i32* %38, align 4
  %element_addressD55 = getelementptr i1, i1* %36, i32 %it54
  store i1 true, i1* %element_addressD55, align 1
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %40 = bitcast i8* %39 to %map__charp_lambdap**
  %self56 = load %map__charp_lambdap*, %map__charp_lambdap** %40, align 8
  %41 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self56, i32 0, i32 0
  %42 = load i8**, i8*** %41, align 8
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %44 = bitcast i8* %43 to i32*
  %it57 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %46 = bitcast i8* %45 to i8**
  %key58 = load i8*, i8** %46, align 8
  %element_addressD59 = getelementptr i8*, i8** %42, i32 %it57
  store i8* %key58, i8** %element_addressD59, align 8
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %48 = bitcast i8* %47 to %map__charp_lambdap**
  %self60 = load %map__charp_lambdap*, %map__charp_lambdap** %48, align 8
  %49 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self60, i32 0, i32 2
  %50 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %49, align 8
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %52 = bitcast i8* %51 to i32*
  %it61 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %54 = bitcast i8* %53 to i1 (%CLVALUE**, %sVMInfo*)**
  %item62 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %54, align 8
  %element_addressD63 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %50, i32 %it61
  store i1 (%CLVALUE**, %sVMInfo*)* %item62, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD63, align 8
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %56 = bitcast i8* %55 to %map__charp_lambdap**
  %self64 = load %map__charp_lambdap*, %map__charp_lambdap** %56, align 8
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %58 = bitcast i8* %57 to %map__charp_lambdap**
  %self65 = load %map__charp_lambdap*, %map__charp_lambdap** %58, align 8
  %59 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self65, i32 0, i32 4
  %60 = load i32, i32* %59, align 4
  %addtmp66 = add nsw i32 %60, 1
  %61 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self64, i32 0, i32 4
  store i32 %addtmp66, i32* %61, align 4
  %subttmp67 = sub nsw i32 %addtmp66, 1
  br label %cond_end_block

cond_end14:                                       ; preds = %after_break68, %cond_end50
  br label %loop_top_block

cond_jump_then20:                                 ; preds = %cond_jump_then13
  br i1 true, label %cond_jump_then22, label %cond_end23

cond_end21:                                       ; preds = %after_break, %cond_jump_then13
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %63 = bitcast i8* %62 to i32*
  %it45 = load i32, i32* %63, align 4
  %addtmp = add nsw i32 %it45, 1
  %64 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %65 = bitcast i8* %64 to i32*
  store i32 %addtmp, i32* %65, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %66 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %67 = bitcast i8* %66 to i32*
  %it46 = load i32, i32* %67, align 4
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %69 = bitcast i8* %68 to %map__charp_lambdap**
  %self47 = load %map__charp_lambdap*, %map__charp_lambdap** %69, align 8
  %70 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self47, i32 0, i32 3
  %71 = load i32, i32* %70, align 4
  %getmp48 = icmp sge i32 %it46, %71
  br i1 %getmp48, label %cond_jump_then49, label %"cond_jump_elif0\0A"

cond_jump_then22:                                 ; preds = %cond_jump_then20
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %73 = bitcast i8* %72 to %map__charp_lambdap**
  %self24 = load %map__charp_lambdap*, %map__charp_lambdap** %73, align 8
  %74 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self24, i32 0, i32 0
  %75 = load i8**, i8*** %74, align 8
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
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
  %81 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %82 = bitcast i8* %81 to %map__charp_lambdap**
  %self32 = load %map__charp_lambdap*, %map__charp_lambdap** %82, align 8
  %83 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self32, i32 0, i32 2
  %84 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %83, align 8
  %85 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %86 = bitcast i8* %85 to i32*
  %it33 = load i32, i32* %86, align 4
  %element_addressB34 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %84, i32 %it33
  %element35 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB34, align 8
  %87 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB34, align 8
  %88 = ptrtoint i1 (%CLVALUE**, %sVMInfo*)* %87 to i64
  %89 = icmp ne i64 %88, 0
  br i1 %89, label %cond_then_block36, label %cond_end37

cond_end31:                                       ; preds = %cond_end37, %cond_end23
  %90 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %91 = bitcast i8* %90 to %map__charp_lambdap**
  %self38 = load %map__charp_lambdap*, %map__charp_lambdap** %91, align 8
  %92 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self38, i32 0, i32 0
  %93 = load i8**, i8*** %92, align 8
  %94 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %95 = bitcast i8* %94 to i32*
  %it39 = load i32, i32* %95, align 4
  %96 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %97 = bitcast i8* %96 to i8**
  %key40 = load i8*, i8** %97, align 8
  %element_addressD = getelementptr i8*, i8** %93, i32 %it39
  store i8* %key40, i8** %element_addressD, align 8
  %98 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %99 = bitcast i8* %98 to %map__charp_lambdap**
  %self41 = load %map__charp_lambdap*, %map__charp_lambdap** %99, align 8
  %100 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self41, i32 0, i32 2
  %101 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %100, align 8
  %102 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %103 = bitcast i8* %102 to i32*
  %it42 = load i32, i32* %103, align 4
  %104 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %105 = bitcast i8* %104 to i1 (%CLVALUE**, %sVMInfo*)**
  %item43 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %105, align 8
  %element_addressD44 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %101, i32 %it42
  store i1 (%CLVALUE**, %sVMInfo*)* %item43, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD44, align 8
  br label %cond_end_block

cond_then_block36:                                ; preds = %cond_jump_then30
  br label %cond_end37

cond_end37:                                       ; preds = %cond_then_block36, %cond_jump_then30
  %106 = bitcast i1 (%CLVALUE**, %sVMInfo*)* %87 to i8*
  call void @ncfree(i8* %106)
  br label %cond_end31

after_break:                                      ; No predecessors!
  br label %cond_end21

cond_jump_then49:                                 ; preds = %cond_end21
  %107 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %108 = bitcast i8* %107 to i32*
  store i32 0, i32* %108, align 4
  br label %cond_end50

"cond_jump_elif0\0A":                             ; preds = %cond_end21
  %109 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %110 = bitcast i8* %109 to i32*
  %it51 = load i32, i32* %110, align 4
  %111 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %112 = bitcast i8* %111 to i32*
  %hash52 = load i32, i32* %112, align 4
  %eqtmpX = icmp eq i32 %it51, %hash52
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end50

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %113 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_string.53, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end50

cond_end50:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then49
  br label %cond_end14

after_break68:                                    ; No predecessors!
  br label %cond_end14
}

define void @"rehash_charp_lambdap18_src/native6"(%map__charp_lambdap* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %self3 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %3 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self3, i32 0, i32 3
  %4 = load i32, i32* %3, align 4
  %multtmp = mul nsw i32 %4, 3
  %size = alloca i32
  %5 = bitcast i32* %size to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i32 %multtmp, i32* %size, align 4
  %size4 = load i32, i32* %size, align 4
  %sext14 = zext i32 %size4 to i64
  %6 = call i8* @nccalloc(i64 %sext14, i64 8)
  %7 = bitcast i8* %6 to i8**
  %keys = alloca i8**
  %8 = bitcast i8*** %keys to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i8** %7, i8*** %keys, align 8
  %size5 = load i32, i32* %size, align 4
  %sext146 = zext i32 %size5 to i64
  %9 = call i8* @nccalloc(i64 %sext146, i64 8)
  %10 = bitcast i8* %9 to i1 (%CLVALUE**, %sVMInfo*)**
  %items = alloca i1 (%CLVALUE**, %sVMInfo*)**
  %11 = bitcast i1 (%CLVALUE**, %sVMInfo*)*** %items to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i1 (%CLVALUE**, %sVMInfo*)** %10, i1 (%CLVALUE**, %sVMInfo*)*** %items, align 8
  %size7 = load i32, i32* %size, align 4
  %sext148 = zext i32 %size7 to i64
  %12 = call i8* @nccalloc(i64 %sext148, i64 1)
  %13 = bitcast i8* %12 to i1*
  %item_existance = alloca i1*
  %14 = bitcast i1** %item_existance to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i1* %13, i1** %item_existance, align 8
  %len = alloca i32
  %15 = bitcast i32* %len to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 0, i32* %len, align 4
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  call void @"each_charp_lambdap19_src/native6"(%map__charp_lambdap* %self9, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* @native6_lambda8)
  %self10 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %16 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self10, i32 0, i32 2
  %17 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %16, align 8
  %18 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %16, align 8
  %19 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %18 to i8*
  call void @ncfree(i8* %19)
  %self11 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %20 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self11, i32 0, i32 1
  %21 = load i1*, i1** %20, align 8
  %22 = load i1*, i1** %20, align 8
  %23 = ptrtoint i1* %22 to i64
  %24 = icmp ne i64 %23, 0
  br i1 %24, label %cond_then_block, label %cond_end

cond_then_block:                                  ; preds = %entry
  br label %cond_end

cond_end:                                         ; preds = %cond_then_block, %entry
  %25 = bitcast i1* %22 to i8*
  call void @ncfree(i8* %25)
  %self12 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self12, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8**, i8*** %26, align 8
  %29 = bitcast i8** %28 to i8*
  call void @ncfree(i8* %29)
  %self13 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %keys14 = load i8**, i8*** %keys, align 8
  %30 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self13, i32 0, i32 0
  store i8** %keys14, i8*** %30, align 8
  %self15 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %items16 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %items, align 8
  %31 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self15, i32 0, i32 2
  store i1 (%CLVALUE**, %sVMInfo*)** %items16, i1 (%CLVALUE**, %sVMInfo*)*** %31, align 8
  %self17 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %item_existance18 = load i1*, i1** %item_existance, align 8
  %32 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self17, i32 0, i32 1
  store i1* %item_existance18, i1** %32, align 8
  %self19 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %size20 = load i32, i32* %size, align 4
  %33 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self19, i32 0, i32 3
  store i32 %size20, i32* %33, align 4
  %self21 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %len22 = load i32, i32* %len, align 4
  %34 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self21, i32 0, i32 4
  store i32 %len22, i32* %34, align 4
  %35 = bitcast [8192 x i8*]* %lvtable to i8*
  %36 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %35, i64 65536)
  ret void
}

define void @native6_lambda8(i8* %it, i1 (%CLVALUE**, %sVMInfo*)* %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i8*
  store i8* %it, i8** %it4, align 8
  %2 = bitcast i8** %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %it25 = alloca i1 (%CLVALUE**, %sVMInfo*)*
  store i1 (%CLVALUE**, %sVMInfo*)* %it2, i1 (%CLVALUE**, %sVMInfo*)** %it25, align 8
  %3 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %it7 = load i8*, i8** %it4, align 8
  %5 = call i32 @string_get_hash_key(i8* %it7)
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %7 = bitcast i8* %6 to i32*
  %size = load i32, i32* %7, align 4
  %remtmp = srem i32 %5, %size
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash8 = load i32, i32* %hash, align 4
  %n = alloca i32
  %9 = bitcast i32* %n to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  store i32 %hash8, i32* %n, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %11 = bitcast i8* %10 to i1**
  %item_existance = load i1*, i1** %11, align 8
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
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
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %17 = bitcast i8* %16 to i32*
  %n10 = load i32, i32* %17, align 4
  %addtmp = add nsw i32 %n10, 1
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %19 = bitcast i8* %18 to i32*
  store i32 %addtmp, i32* %19, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %21 = bitcast i8* %20 to i32*
  %n11 = load i32, i32* %21, align 4
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %23 = bitcast i8* %22 to i32*
  %size12 = load i32, i32* %23, align 4
  %getmp = icmp sge i32 %n11, %size12
  br i1 %getmp, label %cond_jump_then13, label %"cond_jump_elif0\0A"

cond_else_block:                                  ; preds = %cond_then_block
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %25 = bitcast i8* %24 to i1**
  %item_existance17 = load i1*, i1** %25, align 8
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %27 = bitcast i8* %26 to i32*
  %n18 = load i32, i32* %27, align 4
  %element_addressD = getelementptr i1, i1* %item_existance17, i32 %n18
  store i1 true, i1* %element_addressD, align 1
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %29 = bitcast i8* %28 to i8***
  %keys = load i8**, i8*** %29, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %31 = bitcast i8* %30 to i32*
  %n19 = load i32, i32* %31, align 4
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %33 = bitcast i8* %32 to i8**
  %it20 = load i8*, i8** %33, align 8
  %element_addressD21 = getelementptr i8*, i8** %keys, i32 %n19
  store i8* %it20, i8** %element_addressD21, align 8
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %35 = bitcast i8* %34 to i1 (%CLVALUE**, %sVMInfo*)***
  %items = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %35, align 8
  %36 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %37 = bitcast i8* %36 to i32*
  %n22 = load i32, i32* %37, align 4
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %39 = bitcast i8* %38 to i1 (%CLVALUE**, %sVMInfo*)**
  %it223 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %39, align 8
  %element_addressD24 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %items, i32 %n22
  store i1 (%CLVALUE**, %sVMInfo*)* %it223, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD24, align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %41 = bitcast i8* %40 to i32*
  %len = load i32, i32* %41, align 4
  %addtmp25 = add nsw i32 %len, 1
  %42 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %43 = bitcast i8* %42 to i32*
  store i32 %addtmp25, i32* %43, align 4
  %subttmp26 = sub nsw i32 %addtmp25, 1
  br label %cond_end_block

cond_end:                                         ; preds = %after_break, %cond_end14
  br label %loop_top_block

cond_jump_then13:                                 ; preds = %cond_jump_then
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %45 = bitcast i8* %44 to i32*
  store i32 0, i32* %45, align 4
  br label %cond_end14

"cond_jump_elif0\0A":                             ; preds = %cond_jump_then
  %46 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %47 = bitcast i8* %46 to i32*
  %n15 = load i32, i32* %47, align 4
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %49 = bitcast i8* %48 to i32*
  %hash16 = load i32, i32* %49, align 4
  %eqtmpX = icmp eq i32 %n15, %hash16
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end14

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %50 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.52, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end14

cond_end14:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then13
  br label %cond_end

after_break:                                      ; No predecessors!
  br label %cond_end
}

define void @"each_charp_lambdap19_src/native6"(%map__charp_lambdap* %self, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* %block_) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %block_3 = alloca void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)*
  store void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* %block_, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %block_3, align 8
  %3 = bitcast void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %block_3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %i_ = alloca i32
  %4 = bitcast i32* %i_ to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  store i32 0, i32* %i_, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %i_4 = load i32, i32* %i_, align 4
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %6 = bitcast i8* %5 to %map__charp_lambdap**
  %self5 = load %map__charp_lambdap*, %map__charp_lambdap** %6, align 8
  %7 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self5, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %letmp = icmp slt i32 %i_4, %8
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %10 = bitcast i8* %9 to %map__charp_lambdap**
  %self6 = load %map__charp_lambdap*, %map__charp_lambdap** %10, align 8
  %11 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self6, i32 0, i32 1
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
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i1 false, i1* %end_flag_, align 1
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %17 = bitcast i8* %16 to void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)**
  %block_8 = load void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)*, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %19 = bitcast i8* %18 to %map__charp_lambdap**
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %19, align 8
  %20 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self9, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %23 = bitcast i8* %22 to i32*
  %i_10 = load i32, i32* %23, align 4
  %element_addressB11 = getelementptr i8*, i8** %21, i32 %i_10
  %element12 = load i8*, i8** %element_addressB11, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %25 = bitcast i8* %24 to %map__charp_lambdap**
  %self13 = load %map__charp_lambdap*, %map__charp_lambdap** %25, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self13, i32 0, i32 2
  %27 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %29 = bitcast i8* %28 to i32*
  %i_14 = load i32, i32* %29, align 4
  %element_addressB15 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %27, i32 %i_14
  %element16 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB15, align 8
  %end_flag_17 = load i1, i1* %end_flag_, align 1
  call void %block_8(i8* %element12, i1 (%CLVALUE**, %sVMInfo*)* %element16, i1* %end_flag_)
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

define void @"insert_charp_lambdap20_src/native6"(%map__charp_lambdap* %self, i8* %key, i1 (%CLVALUE**, %sVMInfo*)* %item) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %item4 = alloca i1 (%CLVALUE**, %sVMInfo*)*
  store i1 (%CLVALUE**, %sVMInfo*)* %item, i1 (%CLVALUE**, %sVMInfo*)** %item4, align 8
  %4 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %item4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %self5 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %5 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self5, i32 0, i32 4
  %6 = load i32, i32* %5, align 4
  %multtmp = mul nsw i32 %6, 2
  %self6 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %7 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self6, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %getmp = icmp sge i32 %multtmp, %8
  br i1 %getmp, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %10 = bitcast i8* %9 to %map__charp_lambdap**
  %self7 = load %map__charp_lambdap*, %map__charp_lambdap** %10, align 8
  call void @"rehash_charp_lambdap21_src/native6"(%map__charp_lambdap* %self7)
  br label %cond_end

cond_end:                                         ; preds = %cond_jump_then, %entry
  %key8 = load i8*, i8** %key3, align 8
  %11 = call i32 @string_get_hash_key(i8* %key8)
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %12 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self9, i32 0, i32 3
  %13 = load i32, i32* %12, align 4
  %remtmp = srem i32 %11, %13
  %hash = alloca i32
  %14 = bitcast i32* %hash to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash10 = load i32, i32* %hash, align 4
  %it = alloca i32
  %15 = bitcast i32* %it to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i32 %hash10, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end14, %cond_end
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %17 = bitcast i8* %16 to %map__charp_lambdap**
  %self11 = load %map__charp_lambdap*, %map__charp_lambdap** %17, align 8
  %18 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self11, i32 0, i32 1
  %19 = load i1*, i1** %18, align 8
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
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
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %25 = bitcast i8* %24 to %map__charp_lambdap**
  %self15 = load %map__charp_lambdap*, %map__charp_lambdap** %25, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self15, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %29 = bitcast i8* %28 to i32*
  %it16 = load i32, i32* %29, align 4
  %element_addressB17 = getelementptr i8*, i8** %27, i32 %it16
  %element18 = load i8*, i8** %element_addressB17, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %31 = bitcast i8* %30 to i8**
  %key19 = load i8*, i8** %31, align 8
  %32 = call i1 @string_equals(i8* %element18, i8* %key19)
  br i1 %32, label %cond_jump_then20, label %cond_end21

cond_else_block:                                  ; preds = %cond_then_block
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %34 = bitcast i8* %33 to %map__charp_lambdap**
  %self53 = load %map__charp_lambdap*, %map__charp_lambdap** %34, align 8
  %35 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self53, i32 0, i32 1
  %36 = load i1*, i1** %35, align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %38 = bitcast i8* %37 to i32*
  %it54 = load i32, i32* %38, align 4
  %element_addressD55 = getelementptr i1, i1* %36, i32 %it54
  store i1 true, i1* %element_addressD55, align 1
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %40 = bitcast i8* %39 to %map__charp_lambdap**
  %self56 = load %map__charp_lambdap*, %map__charp_lambdap** %40, align 8
  %41 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self56, i32 0, i32 0
  %42 = load i8**, i8*** %41, align 8
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %44 = bitcast i8* %43 to i32*
  %it57 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %46 = bitcast i8* %45 to i8**
  %key58 = load i8*, i8** %46, align 8
  %element_addressD59 = getelementptr i8*, i8** %42, i32 %it57
  store i8* %key58, i8** %element_addressD59, align 8
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %48 = bitcast i8* %47 to %map__charp_lambdap**
  %self60 = load %map__charp_lambdap*, %map__charp_lambdap** %48, align 8
  %49 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self60, i32 0, i32 2
  %50 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %49, align 8
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %52 = bitcast i8* %51 to i32*
  %it61 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %54 = bitcast i8* %53 to i1 (%CLVALUE**, %sVMInfo*)**
  %item62 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %54, align 8
  %element_addressD63 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %50, i32 %it61
  store i1 (%CLVALUE**, %sVMInfo*)* %item62, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD63, align 8
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %56 = bitcast i8* %55 to %map__charp_lambdap**
  %self64 = load %map__charp_lambdap*, %map__charp_lambdap** %56, align 8
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %58 = bitcast i8* %57 to %map__charp_lambdap**
  %self65 = load %map__charp_lambdap*, %map__charp_lambdap** %58, align 8
  %59 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self65, i32 0, i32 4
  %60 = load i32, i32* %59, align 4
  %addtmp66 = add nsw i32 %60, 1
  %61 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self64, i32 0, i32 4
  store i32 %addtmp66, i32* %61, align 4
  %subttmp67 = sub nsw i32 %addtmp66, 1
  br label %cond_end_block

cond_end14:                                       ; preds = %after_break68, %cond_end50
  br label %loop_top_block

cond_jump_then20:                                 ; preds = %cond_jump_then13
  br i1 true, label %cond_jump_then22, label %cond_end23

cond_end21:                                       ; preds = %after_break, %cond_jump_then13
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %63 = bitcast i8* %62 to i32*
  %it45 = load i32, i32* %63, align 4
  %addtmp = add nsw i32 %it45, 1
  %64 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %65 = bitcast i8* %64 to i32*
  store i32 %addtmp, i32* %65, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %66 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %67 = bitcast i8* %66 to i32*
  %it46 = load i32, i32* %67, align 4
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %69 = bitcast i8* %68 to %map__charp_lambdap**
  %self47 = load %map__charp_lambdap*, %map__charp_lambdap** %69, align 8
  %70 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self47, i32 0, i32 3
  %71 = load i32, i32* %70, align 4
  %getmp48 = icmp sge i32 %it46, %71
  br i1 %getmp48, label %cond_jump_then49, label %"cond_jump_elif0\0A"

cond_jump_then22:                                 ; preds = %cond_jump_then20
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %73 = bitcast i8* %72 to %map__charp_lambdap**
  %self24 = load %map__charp_lambdap*, %map__charp_lambdap** %73, align 8
  %74 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self24, i32 0, i32 0
  %75 = load i8**, i8*** %74, align 8
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
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
  %81 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %82 = bitcast i8* %81 to %map__charp_lambdap**
  %self32 = load %map__charp_lambdap*, %map__charp_lambdap** %82, align 8
  %83 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self32, i32 0, i32 2
  %84 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %83, align 8
  %85 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %86 = bitcast i8* %85 to i32*
  %it33 = load i32, i32* %86, align 4
  %element_addressB34 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %84, i32 %it33
  %element35 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB34, align 8
  %87 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB34, align 8
  %88 = ptrtoint i1 (%CLVALUE**, %sVMInfo*)* %87 to i64
  %89 = icmp ne i64 %88, 0
  br i1 %89, label %cond_then_block36, label %cond_end37

cond_end31:                                       ; preds = %cond_end37, %cond_end23
  %90 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %91 = bitcast i8* %90 to %map__charp_lambdap**
  %self38 = load %map__charp_lambdap*, %map__charp_lambdap** %91, align 8
  %92 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self38, i32 0, i32 0
  %93 = load i8**, i8*** %92, align 8
  %94 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %95 = bitcast i8* %94 to i32*
  %it39 = load i32, i32* %95, align 4
  %96 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %97 = bitcast i8* %96 to i8**
  %key40 = load i8*, i8** %97, align 8
  %element_addressD = getelementptr i8*, i8** %93, i32 %it39
  store i8* %key40, i8** %element_addressD, align 8
  %98 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %99 = bitcast i8* %98 to %map__charp_lambdap**
  %self41 = load %map__charp_lambdap*, %map__charp_lambdap** %99, align 8
  %100 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self41, i32 0, i32 2
  %101 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %100, align 8
  %102 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %103 = bitcast i8* %102 to i32*
  %it42 = load i32, i32* %103, align 4
  %104 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %105 = bitcast i8* %104 to i1 (%CLVALUE**, %sVMInfo*)**
  %item43 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %105, align 8
  %element_addressD44 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %101, i32 %it42
  store i1 (%CLVALUE**, %sVMInfo*)* %item43, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD44, align 8
  br label %cond_end_block

cond_then_block36:                                ; preds = %cond_jump_then30
  br label %cond_end37

cond_end37:                                       ; preds = %cond_then_block36, %cond_jump_then30
  %106 = bitcast i1 (%CLVALUE**, %sVMInfo*)* %87 to i8*
  call void @ncfree(i8* %106)
  br label %cond_end31

after_break:                                      ; No predecessors!
  br label %cond_end21

cond_jump_then49:                                 ; preds = %cond_end21
  %107 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %108 = bitcast i8* %107 to i32*
  store i32 0, i32* %108, align 4
  br label %cond_end50

"cond_jump_elif0\0A":                             ; preds = %cond_end21
  %109 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %110 = bitcast i8* %109 to i32*
  %it51 = load i32, i32* %110, align 4
  %111 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %112 = bitcast i8* %111 to i32*
  %hash52 = load i32, i32* %112, align 4
  %eqtmpX = icmp eq i32 %it51, %hash52
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end50

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %113 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_string.57, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end50

cond_end50:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then49
  br label %cond_end14

after_break68:                                    ; No predecessors!
  br label %cond_end14
}

define void @"rehash_charp_lambdap21_src/native6"(%map__charp_lambdap* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %self3 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %3 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self3, i32 0, i32 3
  %4 = load i32, i32* %3, align 4
  %multtmp = mul nsw i32 %4, 3
  %size = alloca i32
  %5 = bitcast i32* %size to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i32 %multtmp, i32* %size, align 4
  %size4 = load i32, i32* %size, align 4
  %sext14 = zext i32 %size4 to i64
  %6 = call i8* @nccalloc(i64 %sext14, i64 8)
  %7 = bitcast i8* %6 to i8**
  %keys = alloca i8**
  %8 = bitcast i8*** %keys to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i8** %7, i8*** %keys, align 8
  %size5 = load i32, i32* %size, align 4
  %sext146 = zext i32 %size5 to i64
  %9 = call i8* @nccalloc(i64 %sext146, i64 8)
  %10 = bitcast i8* %9 to i1 (%CLVALUE**, %sVMInfo*)**
  %items = alloca i1 (%CLVALUE**, %sVMInfo*)**
  %11 = bitcast i1 (%CLVALUE**, %sVMInfo*)*** %items to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i1 (%CLVALUE**, %sVMInfo*)** %10, i1 (%CLVALUE**, %sVMInfo*)*** %items, align 8
  %size7 = load i32, i32* %size, align 4
  %sext148 = zext i32 %size7 to i64
  %12 = call i8* @nccalloc(i64 %sext148, i64 1)
  %13 = bitcast i8* %12 to i1*
  %item_existance = alloca i1*
  %14 = bitcast i1** %item_existance to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i1* %13, i1** %item_existance, align 8
  %len = alloca i32
  %15 = bitcast i32* %len to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 0, i32* %len, align 4
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  call void @"each_charp_lambdap22_src/native6"(%map__charp_lambdap* %self9, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* @native6_lambda9)
  %self10 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %16 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self10, i32 0, i32 2
  %17 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %16, align 8
  %18 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %16, align 8
  %19 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %18 to i8*
  call void @ncfree(i8* %19)
  %self11 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %20 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self11, i32 0, i32 1
  %21 = load i1*, i1** %20, align 8
  %22 = load i1*, i1** %20, align 8
  %23 = ptrtoint i1* %22 to i64
  %24 = icmp ne i64 %23, 0
  br i1 %24, label %cond_then_block, label %cond_end

cond_then_block:                                  ; preds = %entry
  br label %cond_end

cond_end:                                         ; preds = %cond_then_block, %entry
  %25 = bitcast i1* %22 to i8*
  call void @ncfree(i8* %25)
  %self12 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self12, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8**, i8*** %26, align 8
  %29 = bitcast i8** %28 to i8*
  call void @ncfree(i8* %29)
  %self13 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %keys14 = load i8**, i8*** %keys, align 8
  %30 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self13, i32 0, i32 0
  store i8** %keys14, i8*** %30, align 8
  %self15 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %items16 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %items, align 8
  %31 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self15, i32 0, i32 2
  store i1 (%CLVALUE**, %sVMInfo*)** %items16, i1 (%CLVALUE**, %sVMInfo*)*** %31, align 8
  %self17 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %item_existance18 = load i1*, i1** %item_existance, align 8
  %32 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self17, i32 0, i32 1
  store i1* %item_existance18, i1** %32, align 8
  %self19 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %size20 = load i32, i32* %size, align 4
  %33 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self19, i32 0, i32 3
  store i32 %size20, i32* %33, align 4
  %self21 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %len22 = load i32, i32* %len, align 4
  %34 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self21, i32 0, i32 4
  store i32 %len22, i32* %34, align 4
  %35 = bitcast [8192 x i8*]* %lvtable to i8*
  %36 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %35, i64 65536)
  ret void
}

define void @native6_lambda9(i8* %it, i1 (%CLVALUE**, %sVMInfo*)* %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i8*
  store i8* %it, i8** %it4, align 8
  %2 = bitcast i8** %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %it25 = alloca i1 (%CLVALUE**, %sVMInfo*)*
  store i1 (%CLVALUE**, %sVMInfo*)* %it2, i1 (%CLVALUE**, %sVMInfo*)** %it25, align 8
  %3 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %it7 = load i8*, i8** %it4, align 8
  %5 = call i32 @string_get_hash_key(i8* %it7)
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %7 = bitcast i8* %6 to i32*
  %size = load i32, i32* %7, align 4
  %remtmp = srem i32 %5, %size
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash8 = load i32, i32* %hash, align 4
  %n = alloca i32
  %9 = bitcast i32* %n to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  store i32 %hash8, i32* %n, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %11 = bitcast i8* %10 to i1**
  %item_existance = load i1*, i1** %11, align 8
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
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
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %17 = bitcast i8* %16 to i32*
  %n10 = load i32, i32* %17, align 4
  %addtmp = add nsw i32 %n10, 1
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %19 = bitcast i8* %18 to i32*
  store i32 %addtmp, i32* %19, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %21 = bitcast i8* %20 to i32*
  %n11 = load i32, i32* %21, align 4
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %23 = bitcast i8* %22 to i32*
  %size12 = load i32, i32* %23, align 4
  %getmp = icmp sge i32 %n11, %size12
  br i1 %getmp, label %cond_jump_then13, label %"cond_jump_elif0\0A"

cond_else_block:                                  ; preds = %cond_then_block
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %25 = bitcast i8* %24 to i1**
  %item_existance17 = load i1*, i1** %25, align 8
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %27 = bitcast i8* %26 to i32*
  %n18 = load i32, i32* %27, align 4
  %element_addressD = getelementptr i1, i1* %item_existance17, i32 %n18
  store i1 true, i1* %element_addressD, align 1
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %29 = bitcast i8* %28 to i8***
  %keys = load i8**, i8*** %29, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %31 = bitcast i8* %30 to i32*
  %n19 = load i32, i32* %31, align 4
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %33 = bitcast i8* %32 to i8**
  %it20 = load i8*, i8** %33, align 8
  %element_addressD21 = getelementptr i8*, i8** %keys, i32 %n19
  store i8* %it20, i8** %element_addressD21, align 8
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %35 = bitcast i8* %34 to i1 (%CLVALUE**, %sVMInfo*)***
  %items = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %35, align 8
  %36 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %37 = bitcast i8* %36 to i32*
  %n22 = load i32, i32* %37, align 4
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %39 = bitcast i8* %38 to i1 (%CLVALUE**, %sVMInfo*)**
  %it223 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %39, align 8
  %element_addressD24 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %items, i32 %n22
  store i1 (%CLVALUE**, %sVMInfo*)* %it223, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD24, align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %41 = bitcast i8* %40 to i32*
  %len = load i32, i32* %41, align 4
  %addtmp25 = add nsw i32 %len, 1
  %42 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %43 = bitcast i8* %42 to i32*
  store i32 %addtmp25, i32* %43, align 4
  %subttmp26 = sub nsw i32 %addtmp25, 1
  br label %cond_end_block

cond_end:                                         ; preds = %after_break, %cond_end14
  br label %loop_top_block

cond_jump_then13:                                 ; preds = %cond_jump_then
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %45 = bitcast i8* %44 to i32*
  store i32 0, i32* %45, align 4
  br label %cond_end14

"cond_jump_elif0\0A":                             ; preds = %cond_jump_then
  %46 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %47 = bitcast i8* %46 to i32*
  %n15 = load i32, i32* %47, align 4
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %49 = bitcast i8* %48 to i32*
  %hash16 = load i32, i32* %49, align 4
  %eqtmpX = icmp eq i32 %n15, %hash16
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end14

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %50 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.56, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end14

cond_end14:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then13
  br label %cond_end

after_break:                                      ; No predecessors!
  br label %cond_end
}

define void @"each_charp_lambdap22_src/native6"(%map__charp_lambdap* %self, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* %block_) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %block_3 = alloca void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)*
  store void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* %block_, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %block_3, align 8
  %3 = bitcast void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %block_3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %i_ = alloca i32
  %4 = bitcast i32* %i_ to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  store i32 0, i32* %i_, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %i_4 = load i32, i32* %i_, align 4
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %6 = bitcast i8* %5 to %map__charp_lambdap**
  %self5 = load %map__charp_lambdap*, %map__charp_lambdap** %6, align 8
  %7 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self5, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %letmp = icmp slt i32 %i_4, %8
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %10 = bitcast i8* %9 to %map__charp_lambdap**
  %self6 = load %map__charp_lambdap*, %map__charp_lambdap** %10, align 8
  %11 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self6, i32 0, i32 1
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
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i1 false, i1* %end_flag_, align 1
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %17 = bitcast i8* %16 to void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)**
  %block_8 = load void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)*, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %19 = bitcast i8* %18 to %map__charp_lambdap**
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %19, align 8
  %20 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self9, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %23 = bitcast i8* %22 to i32*
  %i_10 = load i32, i32* %23, align 4
  %element_addressB11 = getelementptr i8*, i8** %21, i32 %i_10
  %element12 = load i8*, i8** %element_addressB11, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %25 = bitcast i8* %24 to %map__charp_lambdap**
  %self13 = load %map__charp_lambdap*, %map__charp_lambdap** %25, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self13, i32 0, i32 2
  %27 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %29 = bitcast i8* %28 to i32*
  %i_14 = load i32, i32* %29, align 4
  %element_addressB15 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %27, i32 %i_14
  %element16 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB15, align 8
  %end_flag_17 = load i1, i1* %end_flag_, align 1
  call void %block_8(i8* %element12, i1 (%CLVALUE**, %sVMInfo*)* %element16, i1* %end_flag_)
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

define void @"insert_charp_lambdap23_src/native6"(%map__charp_lambdap* %self, i8* %key, i1 (%CLVALUE**, %sVMInfo*)* %item) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %item4 = alloca i1 (%CLVALUE**, %sVMInfo*)*
  store i1 (%CLVALUE**, %sVMInfo*)* %item, i1 (%CLVALUE**, %sVMInfo*)** %item4, align 8
  %4 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %item4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %self5 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %5 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self5, i32 0, i32 4
  %6 = load i32, i32* %5, align 4
  %multtmp = mul nsw i32 %6, 2
  %self6 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %7 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self6, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %getmp = icmp sge i32 %multtmp, %8
  br i1 %getmp, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %10 = bitcast i8* %9 to %map__charp_lambdap**
  %self7 = load %map__charp_lambdap*, %map__charp_lambdap** %10, align 8
  call void @"rehash_charp_lambdap24_src/native6"(%map__charp_lambdap* %self7)
  br label %cond_end

cond_end:                                         ; preds = %cond_jump_then, %entry
  %key8 = load i8*, i8** %key3, align 8
  %11 = call i32 @string_get_hash_key(i8* %key8)
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %12 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self9, i32 0, i32 3
  %13 = load i32, i32* %12, align 4
  %remtmp = srem i32 %11, %13
  %hash = alloca i32
  %14 = bitcast i32* %hash to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash10 = load i32, i32* %hash, align 4
  %it = alloca i32
  %15 = bitcast i32* %it to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i32 %hash10, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end14, %cond_end
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %17 = bitcast i8* %16 to %map__charp_lambdap**
  %self11 = load %map__charp_lambdap*, %map__charp_lambdap** %17, align 8
  %18 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self11, i32 0, i32 1
  %19 = load i1*, i1** %18, align 8
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
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
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %25 = bitcast i8* %24 to %map__charp_lambdap**
  %self15 = load %map__charp_lambdap*, %map__charp_lambdap** %25, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self15, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %29 = bitcast i8* %28 to i32*
  %it16 = load i32, i32* %29, align 4
  %element_addressB17 = getelementptr i8*, i8** %27, i32 %it16
  %element18 = load i8*, i8** %element_addressB17, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %31 = bitcast i8* %30 to i8**
  %key19 = load i8*, i8** %31, align 8
  %32 = call i1 @string_equals(i8* %element18, i8* %key19)
  br i1 %32, label %cond_jump_then20, label %cond_end21

cond_else_block:                                  ; preds = %cond_then_block
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %34 = bitcast i8* %33 to %map__charp_lambdap**
  %self53 = load %map__charp_lambdap*, %map__charp_lambdap** %34, align 8
  %35 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self53, i32 0, i32 1
  %36 = load i1*, i1** %35, align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %38 = bitcast i8* %37 to i32*
  %it54 = load i32, i32* %38, align 4
  %element_addressD55 = getelementptr i1, i1* %36, i32 %it54
  store i1 true, i1* %element_addressD55, align 1
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %40 = bitcast i8* %39 to %map__charp_lambdap**
  %self56 = load %map__charp_lambdap*, %map__charp_lambdap** %40, align 8
  %41 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self56, i32 0, i32 0
  %42 = load i8**, i8*** %41, align 8
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %44 = bitcast i8* %43 to i32*
  %it57 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %46 = bitcast i8* %45 to i8**
  %key58 = load i8*, i8** %46, align 8
  %element_addressD59 = getelementptr i8*, i8** %42, i32 %it57
  store i8* %key58, i8** %element_addressD59, align 8
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %48 = bitcast i8* %47 to %map__charp_lambdap**
  %self60 = load %map__charp_lambdap*, %map__charp_lambdap** %48, align 8
  %49 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self60, i32 0, i32 2
  %50 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %49, align 8
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %52 = bitcast i8* %51 to i32*
  %it61 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %54 = bitcast i8* %53 to i1 (%CLVALUE**, %sVMInfo*)**
  %item62 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %54, align 8
  %element_addressD63 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %50, i32 %it61
  store i1 (%CLVALUE**, %sVMInfo*)* %item62, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD63, align 8
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %56 = bitcast i8* %55 to %map__charp_lambdap**
  %self64 = load %map__charp_lambdap*, %map__charp_lambdap** %56, align 8
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %58 = bitcast i8* %57 to %map__charp_lambdap**
  %self65 = load %map__charp_lambdap*, %map__charp_lambdap** %58, align 8
  %59 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self65, i32 0, i32 4
  %60 = load i32, i32* %59, align 4
  %addtmp66 = add nsw i32 %60, 1
  %61 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self64, i32 0, i32 4
  store i32 %addtmp66, i32* %61, align 4
  %subttmp67 = sub nsw i32 %addtmp66, 1
  br label %cond_end_block

cond_end14:                                       ; preds = %after_break68, %cond_end50
  br label %loop_top_block

cond_jump_then20:                                 ; preds = %cond_jump_then13
  br i1 true, label %cond_jump_then22, label %cond_end23

cond_end21:                                       ; preds = %after_break, %cond_jump_then13
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %63 = bitcast i8* %62 to i32*
  %it45 = load i32, i32* %63, align 4
  %addtmp = add nsw i32 %it45, 1
  %64 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %65 = bitcast i8* %64 to i32*
  store i32 %addtmp, i32* %65, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %66 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %67 = bitcast i8* %66 to i32*
  %it46 = load i32, i32* %67, align 4
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %69 = bitcast i8* %68 to %map__charp_lambdap**
  %self47 = load %map__charp_lambdap*, %map__charp_lambdap** %69, align 8
  %70 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self47, i32 0, i32 3
  %71 = load i32, i32* %70, align 4
  %getmp48 = icmp sge i32 %it46, %71
  br i1 %getmp48, label %cond_jump_then49, label %"cond_jump_elif0\0A"

cond_jump_then22:                                 ; preds = %cond_jump_then20
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %73 = bitcast i8* %72 to %map__charp_lambdap**
  %self24 = load %map__charp_lambdap*, %map__charp_lambdap** %73, align 8
  %74 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self24, i32 0, i32 0
  %75 = load i8**, i8*** %74, align 8
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
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
  %81 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %82 = bitcast i8* %81 to %map__charp_lambdap**
  %self32 = load %map__charp_lambdap*, %map__charp_lambdap** %82, align 8
  %83 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self32, i32 0, i32 2
  %84 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %83, align 8
  %85 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %86 = bitcast i8* %85 to i32*
  %it33 = load i32, i32* %86, align 4
  %element_addressB34 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %84, i32 %it33
  %element35 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB34, align 8
  %87 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB34, align 8
  %88 = ptrtoint i1 (%CLVALUE**, %sVMInfo*)* %87 to i64
  %89 = icmp ne i64 %88, 0
  br i1 %89, label %cond_then_block36, label %cond_end37

cond_end31:                                       ; preds = %cond_end37, %cond_end23
  %90 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %91 = bitcast i8* %90 to %map__charp_lambdap**
  %self38 = load %map__charp_lambdap*, %map__charp_lambdap** %91, align 8
  %92 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self38, i32 0, i32 0
  %93 = load i8**, i8*** %92, align 8
  %94 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %95 = bitcast i8* %94 to i32*
  %it39 = load i32, i32* %95, align 4
  %96 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %97 = bitcast i8* %96 to i8**
  %key40 = load i8*, i8** %97, align 8
  %element_addressD = getelementptr i8*, i8** %93, i32 %it39
  store i8* %key40, i8** %element_addressD, align 8
  %98 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %99 = bitcast i8* %98 to %map__charp_lambdap**
  %self41 = load %map__charp_lambdap*, %map__charp_lambdap** %99, align 8
  %100 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self41, i32 0, i32 2
  %101 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %100, align 8
  %102 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %103 = bitcast i8* %102 to i32*
  %it42 = load i32, i32* %103, align 4
  %104 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %105 = bitcast i8* %104 to i1 (%CLVALUE**, %sVMInfo*)**
  %item43 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %105, align 8
  %element_addressD44 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %101, i32 %it42
  store i1 (%CLVALUE**, %sVMInfo*)* %item43, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD44, align 8
  br label %cond_end_block

cond_then_block36:                                ; preds = %cond_jump_then30
  br label %cond_end37

cond_end37:                                       ; preds = %cond_then_block36, %cond_jump_then30
  %106 = bitcast i1 (%CLVALUE**, %sVMInfo*)* %87 to i8*
  call void @ncfree(i8* %106)
  br label %cond_end31

after_break:                                      ; No predecessors!
  br label %cond_end21

cond_jump_then49:                                 ; preds = %cond_end21
  %107 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %108 = bitcast i8* %107 to i32*
  store i32 0, i32* %108, align 4
  br label %cond_end50

"cond_jump_elif0\0A":                             ; preds = %cond_end21
  %109 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %110 = bitcast i8* %109 to i32*
  %it51 = load i32, i32* %110, align 4
  %111 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %112 = bitcast i8* %111 to i32*
  %hash52 = load i32, i32* %112, align 4
  %eqtmpX = icmp eq i32 %it51, %hash52
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end50

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %113 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_string.61, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end50

cond_end50:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then49
  br label %cond_end14

after_break68:                                    ; No predecessors!
  br label %cond_end14
}

define void @"rehash_charp_lambdap24_src/native6"(%map__charp_lambdap* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %self3 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %3 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self3, i32 0, i32 3
  %4 = load i32, i32* %3, align 4
  %multtmp = mul nsw i32 %4, 3
  %size = alloca i32
  %5 = bitcast i32* %size to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i32 %multtmp, i32* %size, align 4
  %size4 = load i32, i32* %size, align 4
  %sext14 = zext i32 %size4 to i64
  %6 = call i8* @nccalloc(i64 %sext14, i64 8)
  %7 = bitcast i8* %6 to i8**
  %keys = alloca i8**
  %8 = bitcast i8*** %keys to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i8** %7, i8*** %keys, align 8
  %size5 = load i32, i32* %size, align 4
  %sext146 = zext i32 %size5 to i64
  %9 = call i8* @nccalloc(i64 %sext146, i64 8)
  %10 = bitcast i8* %9 to i1 (%CLVALUE**, %sVMInfo*)**
  %items = alloca i1 (%CLVALUE**, %sVMInfo*)**
  %11 = bitcast i1 (%CLVALUE**, %sVMInfo*)*** %items to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i1 (%CLVALUE**, %sVMInfo*)** %10, i1 (%CLVALUE**, %sVMInfo*)*** %items, align 8
  %size7 = load i32, i32* %size, align 4
  %sext148 = zext i32 %size7 to i64
  %12 = call i8* @nccalloc(i64 %sext148, i64 1)
  %13 = bitcast i8* %12 to i1*
  %item_existance = alloca i1*
  %14 = bitcast i1** %item_existance to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i1* %13, i1** %item_existance, align 8
  %len = alloca i32
  %15 = bitcast i32* %len to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 0, i32* %len, align 4
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  call void @"each_charp_lambdap25_src/native6"(%map__charp_lambdap* %self9, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* @native6_lambda10)
  %self10 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %16 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self10, i32 0, i32 2
  %17 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %16, align 8
  %18 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %16, align 8
  %19 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %18 to i8*
  call void @ncfree(i8* %19)
  %self11 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %20 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self11, i32 0, i32 1
  %21 = load i1*, i1** %20, align 8
  %22 = load i1*, i1** %20, align 8
  %23 = ptrtoint i1* %22 to i64
  %24 = icmp ne i64 %23, 0
  br i1 %24, label %cond_then_block, label %cond_end

cond_then_block:                                  ; preds = %entry
  br label %cond_end

cond_end:                                         ; preds = %cond_then_block, %entry
  %25 = bitcast i1* %22 to i8*
  call void @ncfree(i8* %25)
  %self12 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self12, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8**, i8*** %26, align 8
  %29 = bitcast i8** %28 to i8*
  call void @ncfree(i8* %29)
  %self13 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %keys14 = load i8**, i8*** %keys, align 8
  %30 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self13, i32 0, i32 0
  store i8** %keys14, i8*** %30, align 8
  %self15 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %items16 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %items, align 8
  %31 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self15, i32 0, i32 2
  store i1 (%CLVALUE**, %sVMInfo*)** %items16, i1 (%CLVALUE**, %sVMInfo*)*** %31, align 8
  %self17 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %item_existance18 = load i1*, i1** %item_existance, align 8
  %32 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self17, i32 0, i32 1
  store i1* %item_existance18, i1** %32, align 8
  %self19 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %size20 = load i32, i32* %size, align 4
  %33 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self19, i32 0, i32 3
  store i32 %size20, i32* %33, align 4
  %self21 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %len22 = load i32, i32* %len, align 4
  %34 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self21, i32 0, i32 4
  store i32 %len22, i32* %34, align 4
  %35 = bitcast [8192 x i8*]* %lvtable to i8*
  %36 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %35, i64 65536)
  ret void
}

define void @native6_lambda10(i8* %it, i1 (%CLVALUE**, %sVMInfo*)* %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i8*
  store i8* %it, i8** %it4, align 8
  %2 = bitcast i8** %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %it25 = alloca i1 (%CLVALUE**, %sVMInfo*)*
  store i1 (%CLVALUE**, %sVMInfo*)* %it2, i1 (%CLVALUE**, %sVMInfo*)** %it25, align 8
  %3 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %it7 = load i8*, i8** %it4, align 8
  %5 = call i32 @string_get_hash_key(i8* %it7)
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %7 = bitcast i8* %6 to i32*
  %size = load i32, i32* %7, align 4
  %remtmp = srem i32 %5, %size
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash8 = load i32, i32* %hash, align 4
  %n = alloca i32
  %9 = bitcast i32* %n to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  store i32 %hash8, i32* %n, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %11 = bitcast i8* %10 to i1**
  %item_existance = load i1*, i1** %11, align 8
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
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
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %17 = bitcast i8* %16 to i32*
  %n10 = load i32, i32* %17, align 4
  %addtmp = add nsw i32 %n10, 1
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %19 = bitcast i8* %18 to i32*
  store i32 %addtmp, i32* %19, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %21 = bitcast i8* %20 to i32*
  %n11 = load i32, i32* %21, align 4
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %23 = bitcast i8* %22 to i32*
  %size12 = load i32, i32* %23, align 4
  %getmp = icmp sge i32 %n11, %size12
  br i1 %getmp, label %cond_jump_then13, label %"cond_jump_elif0\0A"

cond_else_block:                                  ; preds = %cond_then_block
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %25 = bitcast i8* %24 to i1**
  %item_existance17 = load i1*, i1** %25, align 8
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %27 = bitcast i8* %26 to i32*
  %n18 = load i32, i32* %27, align 4
  %element_addressD = getelementptr i1, i1* %item_existance17, i32 %n18
  store i1 true, i1* %element_addressD, align 1
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %29 = bitcast i8* %28 to i8***
  %keys = load i8**, i8*** %29, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %31 = bitcast i8* %30 to i32*
  %n19 = load i32, i32* %31, align 4
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %33 = bitcast i8* %32 to i8**
  %it20 = load i8*, i8** %33, align 8
  %element_addressD21 = getelementptr i8*, i8** %keys, i32 %n19
  store i8* %it20, i8** %element_addressD21, align 8
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %35 = bitcast i8* %34 to i1 (%CLVALUE**, %sVMInfo*)***
  %items = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %35, align 8
  %36 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %37 = bitcast i8* %36 to i32*
  %n22 = load i32, i32* %37, align 4
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %39 = bitcast i8* %38 to i1 (%CLVALUE**, %sVMInfo*)**
  %it223 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %39, align 8
  %element_addressD24 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %items, i32 %n22
  store i1 (%CLVALUE**, %sVMInfo*)* %it223, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD24, align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %41 = bitcast i8* %40 to i32*
  %len = load i32, i32* %41, align 4
  %addtmp25 = add nsw i32 %len, 1
  %42 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %43 = bitcast i8* %42 to i32*
  store i32 %addtmp25, i32* %43, align 4
  %subttmp26 = sub nsw i32 %addtmp25, 1
  br label %cond_end_block

cond_end:                                         ; preds = %after_break, %cond_end14
  br label %loop_top_block

cond_jump_then13:                                 ; preds = %cond_jump_then
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %45 = bitcast i8* %44 to i32*
  store i32 0, i32* %45, align 4
  br label %cond_end14

"cond_jump_elif0\0A":                             ; preds = %cond_jump_then
  %46 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %47 = bitcast i8* %46 to i32*
  %n15 = load i32, i32* %47, align 4
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %49 = bitcast i8* %48 to i32*
  %hash16 = load i32, i32* %49, align 4
  %eqtmpX = icmp eq i32 %n15, %hash16
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end14

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %50 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.60, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end14

cond_end14:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then13
  br label %cond_end

after_break:                                      ; No predecessors!
  br label %cond_end
}

define void @"each_charp_lambdap25_src/native6"(%map__charp_lambdap* %self, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* %block_) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %block_3 = alloca void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)*
  store void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* %block_, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %block_3, align 8
  %3 = bitcast void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %block_3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %i_ = alloca i32
  %4 = bitcast i32* %i_ to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  store i32 0, i32* %i_, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %i_4 = load i32, i32* %i_, align 4
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %6 = bitcast i8* %5 to %map__charp_lambdap**
  %self5 = load %map__charp_lambdap*, %map__charp_lambdap** %6, align 8
  %7 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self5, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %letmp = icmp slt i32 %i_4, %8
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %10 = bitcast i8* %9 to %map__charp_lambdap**
  %self6 = load %map__charp_lambdap*, %map__charp_lambdap** %10, align 8
  %11 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self6, i32 0, i32 1
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
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i1 false, i1* %end_flag_, align 1
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %17 = bitcast i8* %16 to void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)**
  %block_8 = load void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)*, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %19 = bitcast i8* %18 to %map__charp_lambdap**
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %19, align 8
  %20 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self9, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %23 = bitcast i8* %22 to i32*
  %i_10 = load i32, i32* %23, align 4
  %element_addressB11 = getelementptr i8*, i8** %21, i32 %i_10
  %element12 = load i8*, i8** %element_addressB11, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %25 = bitcast i8* %24 to %map__charp_lambdap**
  %self13 = load %map__charp_lambdap*, %map__charp_lambdap** %25, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self13, i32 0, i32 2
  %27 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %29 = bitcast i8* %28 to i32*
  %i_14 = load i32, i32* %29, align 4
  %element_addressB15 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %27, i32 %i_14
  %element16 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB15, align 8
  %end_flag_17 = load i1, i1* %end_flag_, align 1
  call void %block_8(i8* %element12, i1 (%CLVALUE**, %sVMInfo*)* %element16, i1* %end_flag_)
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

define void @"insert_charp_lambdap26_src/native6"(%map__charp_lambdap* %self, i8* %key, i1 (%CLVALUE**, %sVMInfo*)* %item) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %item4 = alloca i1 (%CLVALUE**, %sVMInfo*)*
  store i1 (%CLVALUE**, %sVMInfo*)* %item, i1 (%CLVALUE**, %sVMInfo*)** %item4, align 8
  %4 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %item4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %self5 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %5 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self5, i32 0, i32 4
  %6 = load i32, i32* %5, align 4
  %multtmp = mul nsw i32 %6, 2
  %self6 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %7 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self6, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %getmp = icmp sge i32 %multtmp, %8
  br i1 %getmp, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %10 = bitcast i8* %9 to %map__charp_lambdap**
  %self7 = load %map__charp_lambdap*, %map__charp_lambdap** %10, align 8
  call void @"rehash_charp_lambdap27_src/native6"(%map__charp_lambdap* %self7)
  br label %cond_end

cond_end:                                         ; preds = %cond_jump_then, %entry
  %key8 = load i8*, i8** %key3, align 8
  %11 = call i32 @string_get_hash_key(i8* %key8)
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %12 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self9, i32 0, i32 3
  %13 = load i32, i32* %12, align 4
  %remtmp = srem i32 %11, %13
  %hash = alloca i32
  %14 = bitcast i32* %hash to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash10 = load i32, i32* %hash, align 4
  %it = alloca i32
  %15 = bitcast i32* %it to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i32 %hash10, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end14, %cond_end
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %17 = bitcast i8* %16 to %map__charp_lambdap**
  %self11 = load %map__charp_lambdap*, %map__charp_lambdap** %17, align 8
  %18 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self11, i32 0, i32 1
  %19 = load i1*, i1** %18, align 8
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
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
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %25 = bitcast i8* %24 to %map__charp_lambdap**
  %self15 = load %map__charp_lambdap*, %map__charp_lambdap** %25, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self15, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %29 = bitcast i8* %28 to i32*
  %it16 = load i32, i32* %29, align 4
  %element_addressB17 = getelementptr i8*, i8** %27, i32 %it16
  %element18 = load i8*, i8** %element_addressB17, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %31 = bitcast i8* %30 to i8**
  %key19 = load i8*, i8** %31, align 8
  %32 = call i1 @string_equals(i8* %element18, i8* %key19)
  br i1 %32, label %cond_jump_then20, label %cond_end21

cond_else_block:                                  ; preds = %cond_then_block
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %34 = bitcast i8* %33 to %map__charp_lambdap**
  %self53 = load %map__charp_lambdap*, %map__charp_lambdap** %34, align 8
  %35 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self53, i32 0, i32 1
  %36 = load i1*, i1** %35, align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %38 = bitcast i8* %37 to i32*
  %it54 = load i32, i32* %38, align 4
  %element_addressD55 = getelementptr i1, i1* %36, i32 %it54
  store i1 true, i1* %element_addressD55, align 1
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %40 = bitcast i8* %39 to %map__charp_lambdap**
  %self56 = load %map__charp_lambdap*, %map__charp_lambdap** %40, align 8
  %41 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self56, i32 0, i32 0
  %42 = load i8**, i8*** %41, align 8
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %44 = bitcast i8* %43 to i32*
  %it57 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %46 = bitcast i8* %45 to i8**
  %key58 = load i8*, i8** %46, align 8
  %element_addressD59 = getelementptr i8*, i8** %42, i32 %it57
  store i8* %key58, i8** %element_addressD59, align 8
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %48 = bitcast i8* %47 to %map__charp_lambdap**
  %self60 = load %map__charp_lambdap*, %map__charp_lambdap** %48, align 8
  %49 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self60, i32 0, i32 2
  %50 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %49, align 8
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %52 = bitcast i8* %51 to i32*
  %it61 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %54 = bitcast i8* %53 to i1 (%CLVALUE**, %sVMInfo*)**
  %item62 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %54, align 8
  %element_addressD63 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %50, i32 %it61
  store i1 (%CLVALUE**, %sVMInfo*)* %item62, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD63, align 8
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %56 = bitcast i8* %55 to %map__charp_lambdap**
  %self64 = load %map__charp_lambdap*, %map__charp_lambdap** %56, align 8
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %58 = bitcast i8* %57 to %map__charp_lambdap**
  %self65 = load %map__charp_lambdap*, %map__charp_lambdap** %58, align 8
  %59 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self65, i32 0, i32 4
  %60 = load i32, i32* %59, align 4
  %addtmp66 = add nsw i32 %60, 1
  %61 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self64, i32 0, i32 4
  store i32 %addtmp66, i32* %61, align 4
  %subttmp67 = sub nsw i32 %addtmp66, 1
  br label %cond_end_block

cond_end14:                                       ; preds = %after_break68, %cond_end50
  br label %loop_top_block

cond_jump_then20:                                 ; preds = %cond_jump_then13
  br i1 true, label %cond_jump_then22, label %cond_end23

cond_end21:                                       ; preds = %after_break, %cond_jump_then13
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %63 = bitcast i8* %62 to i32*
  %it45 = load i32, i32* %63, align 4
  %addtmp = add nsw i32 %it45, 1
  %64 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %65 = bitcast i8* %64 to i32*
  store i32 %addtmp, i32* %65, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %66 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %67 = bitcast i8* %66 to i32*
  %it46 = load i32, i32* %67, align 4
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %69 = bitcast i8* %68 to %map__charp_lambdap**
  %self47 = load %map__charp_lambdap*, %map__charp_lambdap** %69, align 8
  %70 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self47, i32 0, i32 3
  %71 = load i32, i32* %70, align 4
  %getmp48 = icmp sge i32 %it46, %71
  br i1 %getmp48, label %cond_jump_then49, label %"cond_jump_elif0\0A"

cond_jump_then22:                                 ; preds = %cond_jump_then20
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %73 = bitcast i8* %72 to %map__charp_lambdap**
  %self24 = load %map__charp_lambdap*, %map__charp_lambdap** %73, align 8
  %74 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self24, i32 0, i32 0
  %75 = load i8**, i8*** %74, align 8
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
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
  %81 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %82 = bitcast i8* %81 to %map__charp_lambdap**
  %self32 = load %map__charp_lambdap*, %map__charp_lambdap** %82, align 8
  %83 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self32, i32 0, i32 2
  %84 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %83, align 8
  %85 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %86 = bitcast i8* %85 to i32*
  %it33 = load i32, i32* %86, align 4
  %element_addressB34 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %84, i32 %it33
  %element35 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB34, align 8
  %87 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB34, align 8
  %88 = ptrtoint i1 (%CLVALUE**, %sVMInfo*)* %87 to i64
  %89 = icmp ne i64 %88, 0
  br i1 %89, label %cond_then_block36, label %cond_end37

cond_end31:                                       ; preds = %cond_end37, %cond_end23
  %90 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %91 = bitcast i8* %90 to %map__charp_lambdap**
  %self38 = load %map__charp_lambdap*, %map__charp_lambdap** %91, align 8
  %92 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self38, i32 0, i32 0
  %93 = load i8**, i8*** %92, align 8
  %94 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %95 = bitcast i8* %94 to i32*
  %it39 = load i32, i32* %95, align 4
  %96 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %97 = bitcast i8* %96 to i8**
  %key40 = load i8*, i8** %97, align 8
  %element_addressD = getelementptr i8*, i8** %93, i32 %it39
  store i8* %key40, i8** %element_addressD, align 8
  %98 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %99 = bitcast i8* %98 to %map__charp_lambdap**
  %self41 = load %map__charp_lambdap*, %map__charp_lambdap** %99, align 8
  %100 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self41, i32 0, i32 2
  %101 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %100, align 8
  %102 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %103 = bitcast i8* %102 to i32*
  %it42 = load i32, i32* %103, align 4
  %104 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %105 = bitcast i8* %104 to i1 (%CLVALUE**, %sVMInfo*)**
  %item43 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %105, align 8
  %element_addressD44 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %101, i32 %it42
  store i1 (%CLVALUE**, %sVMInfo*)* %item43, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD44, align 8
  br label %cond_end_block

cond_then_block36:                                ; preds = %cond_jump_then30
  br label %cond_end37

cond_end37:                                       ; preds = %cond_then_block36, %cond_jump_then30
  %106 = bitcast i1 (%CLVALUE**, %sVMInfo*)* %87 to i8*
  call void @ncfree(i8* %106)
  br label %cond_end31

after_break:                                      ; No predecessors!
  br label %cond_end21

cond_jump_then49:                                 ; preds = %cond_end21
  %107 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %108 = bitcast i8* %107 to i32*
  store i32 0, i32* %108, align 4
  br label %cond_end50

"cond_jump_elif0\0A":                             ; preds = %cond_end21
  %109 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %110 = bitcast i8* %109 to i32*
  %it51 = load i32, i32* %110, align 4
  %111 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %112 = bitcast i8* %111 to i32*
  %hash52 = load i32, i32* %112, align 4
  %eqtmpX = icmp eq i32 %it51, %hash52
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end50

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %113 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_string.65, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end50

cond_end50:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then49
  br label %cond_end14

after_break68:                                    ; No predecessors!
  br label %cond_end14
}

define void @"rehash_charp_lambdap27_src/native6"(%map__charp_lambdap* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %self3 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %3 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self3, i32 0, i32 3
  %4 = load i32, i32* %3, align 4
  %multtmp = mul nsw i32 %4, 3
  %size = alloca i32
  %5 = bitcast i32* %size to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i32 %multtmp, i32* %size, align 4
  %size4 = load i32, i32* %size, align 4
  %sext14 = zext i32 %size4 to i64
  %6 = call i8* @nccalloc(i64 %sext14, i64 8)
  %7 = bitcast i8* %6 to i8**
  %keys = alloca i8**
  %8 = bitcast i8*** %keys to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i8** %7, i8*** %keys, align 8
  %size5 = load i32, i32* %size, align 4
  %sext146 = zext i32 %size5 to i64
  %9 = call i8* @nccalloc(i64 %sext146, i64 8)
  %10 = bitcast i8* %9 to i1 (%CLVALUE**, %sVMInfo*)**
  %items = alloca i1 (%CLVALUE**, %sVMInfo*)**
  %11 = bitcast i1 (%CLVALUE**, %sVMInfo*)*** %items to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i1 (%CLVALUE**, %sVMInfo*)** %10, i1 (%CLVALUE**, %sVMInfo*)*** %items, align 8
  %size7 = load i32, i32* %size, align 4
  %sext148 = zext i32 %size7 to i64
  %12 = call i8* @nccalloc(i64 %sext148, i64 1)
  %13 = bitcast i8* %12 to i1*
  %item_existance = alloca i1*
  %14 = bitcast i1** %item_existance to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i1* %13, i1** %item_existance, align 8
  %len = alloca i32
  %15 = bitcast i32* %len to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 0, i32* %len, align 4
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  call void @"each_charp_lambdap28_src/native6"(%map__charp_lambdap* %self9, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* @native6_lambda11)
  %self10 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %16 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self10, i32 0, i32 2
  %17 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %16, align 8
  %18 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %16, align 8
  %19 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %18 to i8*
  call void @ncfree(i8* %19)
  %self11 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %20 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self11, i32 0, i32 1
  %21 = load i1*, i1** %20, align 8
  %22 = load i1*, i1** %20, align 8
  %23 = ptrtoint i1* %22 to i64
  %24 = icmp ne i64 %23, 0
  br i1 %24, label %cond_then_block, label %cond_end

cond_then_block:                                  ; preds = %entry
  br label %cond_end

cond_end:                                         ; preds = %cond_then_block, %entry
  %25 = bitcast i1* %22 to i8*
  call void @ncfree(i8* %25)
  %self12 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self12, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8**, i8*** %26, align 8
  %29 = bitcast i8** %28 to i8*
  call void @ncfree(i8* %29)
  %self13 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %keys14 = load i8**, i8*** %keys, align 8
  %30 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self13, i32 0, i32 0
  store i8** %keys14, i8*** %30, align 8
  %self15 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %items16 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %items, align 8
  %31 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self15, i32 0, i32 2
  store i1 (%CLVALUE**, %sVMInfo*)** %items16, i1 (%CLVALUE**, %sVMInfo*)*** %31, align 8
  %self17 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %item_existance18 = load i1*, i1** %item_existance, align 8
  %32 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self17, i32 0, i32 1
  store i1* %item_existance18, i1** %32, align 8
  %self19 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %size20 = load i32, i32* %size, align 4
  %33 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self19, i32 0, i32 3
  store i32 %size20, i32* %33, align 4
  %self21 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %len22 = load i32, i32* %len, align 4
  %34 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self21, i32 0, i32 4
  store i32 %len22, i32* %34, align 4
  %35 = bitcast [8192 x i8*]* %lvtable to i8*
  %36 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %35, i64 65536)
  ret void
}

define void @native6_lambda11(i8* %it, i1 (%CLVALUE**, %sVMInfo*)* %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i8*
  store i8* %it, i8** %it4, align 8
  %2 = bitcast i8** %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %it25 = alloca i1 (%CLVALUE**, %sVMInfo*)*
  store i1 (%CLVALUE**, %sVMInfo*)* %it2, i1 (%CLVALUE**, %sVMInfo*)** %it25, align 8
  %3 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %it7 = load i8*, i8** %it4, align 8
  %5 = call i32 @string_get_hash_key(i8* %it7)
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %7 = bitcast i8* %6 to i32*
  %size = load i32, i32* %7, align 4
  %remtmp = srem i32 %5, %size
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash8 = load i32, i32* %hash, align 4
  %n = alloca i32
  %9 = bitcast i32* %n to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  store i32 %hash8, i32* %n, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %11 = bitcast i8* %10 to i1**
  %item_existance = load i1*, i1** %11, align 8
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
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
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %17 = bitcast i8* %16 to i32*
  %n10 = load i32, i32* %17, align 4
  %addtmp = add nsw i32 %n10, 1
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %19 = bitcast i8* %18 to i32*
  store i32 %addtmp, i32* %19, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %21 = bitcast i8* %20 to i32*
  %n11 = load i32, i32* %21, align 4
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %23 = bitcast i8* %22 to i32*
  %size12 = load i32, i32* %23, align 4
  %getmp = icmp sge i32 %n11, %size12
  br i1 %getmp, label %cond_jump_then13, label %"cond_jump_elif0\0A"

cond_else_block:                                  ; preds = %cond_then_block
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %25 = bitcast i8* %24 to i1**
  %item_existance17 = load i1*, i1** %25, align 8
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %27 = bitcast i8* %26 to i32*
  %n18 = load i32, i32* %27, align 4
  %element_addressD = getelementptr i1, i1* %item_existance17, i32 %n18
  store i1 true, i1* %element_addressD, align 1
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %29 = bitcast i8* %28 to i8***
  %keys = load i8**, i8*** %29, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %31 = bitcast i8* %30 to i32*
  %n19 = load i32, i32* %31, align 4
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %33 = bitcast i8* %32 to i8**
  %it20 = load i8*, i8** %33, align 8
  %element_addressD21 = getelementptr i8*, i8** %keys, i32 %n19
  store i8* %it20, i8** %element_addressD21, align 8
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %35 = bitcast i8* %34 to i1 (%CLVALUE**, %sVMInfo*)***
  %items = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %35, align 8
  %36 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %37 = bitcast i8* %36 to i32*
  %n22 = load i32, i32* %37, align 4
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %39 = bitcast i8* %38 to i1 (%CLVALUE**, %sVMInfo*)**
  %it223 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %39, align 8
  %element_addressD24 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %items, i32 %n22
  store i1 (%CLVALUE**, %sVMInfo*)* %it223, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD24, align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %41 = bitcast i8* %40 to i32*
  %len = load i32, i32* %41, align 4
  %addtmp25 = add nsw i32 %len, 1
  %42 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %43 = bitcast i8* %42 to i32*
  store i32 %addtmp25, i32* %43, align 4
  %subttmp26 = sub nsw i32 %addtmp25, 1
  br label %cond_end_block

cond_end:                                         ; preds = %after_break, %cond_end14
  br label %loop_top_block

cond_jump_then13:                                 ; preds = %cond_jump_then
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %45 = bitcast i8* %44 to i32*
  store i32 0, i32* %45, align 4
  br label %cond_end14

"cond_jump_elif0\0A":                             ; preds = %cond_jump_then
  %46 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %47 = bitcast i8* %46 to i32*
  %n15 = load i32, i32* %47, align 4
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %49 = bitcast i8* %48 to i32*
  %hash16 = load i32, i32* %49, align 4
  %eqtmpX = icmp eq i32 %n15, %hash16
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end14

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %50 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.64, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end14

cond_end14:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then13
  br label %cond_end

after_break:                                      ; No predecessors!
  br label %cond_end
}

define void @"each_charp_lambdap28_src/native6"(%map__charp_lambdap* %self, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* %block_) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %block_3 = alloca void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)*
  store void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* %block_, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %block_3, align 8
  %3 = bitcast void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %block_3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %i_ = alloca i32
  %4 = bitcast i32* %i_ to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  store i32 0, i32* %i_, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %i_4 = load i32, i32* %i_, align 4
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %6 = bitcast i8* %5 to %map__charp_lambdap**
  %self5 = load %map__charp_lambdap*, %map__charp_lambdap** %6, align 8
  %7 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self5, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %letmp = icmp slt i32 %i_4, %8
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %10 = bitcast i8* %9 to %map__charp_lambdap**
  %self6 = load %map__charp_lambdap*, %map__charp_lambdap** %10, align 8
  %11 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self6, i32 0, i32 1
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
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i1 false, i1* %end_flag_, align 1
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %17 = bitcast i8* %16 to void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)**
  %block_8 = load void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)*, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %19 = bitcast i8* %18 to %map__charp_lambdap**
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %19, align 8
  %20 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self9, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %23 = bitcast i8* %22 to i32*
  %i_10 = load i32, i32* %23, align 4
  %element_addressB11 = getelementptr i8*, i8** %21, i32 %i_10
  %element12 = load i8*, i8** %element_addressB11, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %25 = bitcast i8* %24 to %map__charp_lambdap**
  %self13 = load %map__charp_lambdap*, %map__charp_lambdap** %25, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self13, i32 0, i32 2
  %27 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %29 = bitcast i8* %28 to i32*
  %i_14 = load i32, i32* %29, align 4
  %element_addressB15 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %27, i32 %i_14
  %element16 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB15, align 8
  %end_flag_17 = load i1, i1* %end_flag_, align 1
  call void %block_8(i8* %element12, i1 (%CLVALUE**, %sVMInfo*)* %element16, i1* %end_flag_)
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

define void @"insert_charp_lambdap29_src/native6"(%map__charp_lambdap* %self, i8* %key, i1 (%CLVALUE**, %sVMInfo*)* %item) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %item4 = alloca i1 (%CLVALUE**, %sVMInfo*)*
  store i1 (%CLVALUE**, %sVMInfo*)* %item, i1 (%CLVALUE**, %sVMInfo*)** %item4, align 8
  %4 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %item4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %self5 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %5 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self5, i32 0, i32 4
  %6 = load i32, i32* %5, align 4
  %multtmp = mul nsw i32 %6, 2
  %self6 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %7 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self6, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %getmp = icmp sge i32 %multtmp, %8
  br i1 %getmp, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %10 = bitcast i8* %9 to %map__charp_lambdap**
  %self7 = load %map__charp_lambdap*, %map__charp_lambdap** %10, align 8
  call void @"rehash_charp_lambdap30_src/native6"(%map__charp_lambdap* %self7)
  br label %cond_end

cond_end:                                         ; preds = %cond_jump_then, %entry
  %key8 = load i8*, i8** %key3, align 8
  %11 = call i32 @string_get_hash_key(i8* %key8)
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %12 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self9, i32 0, i32 3
  %13 = load i32, i32* %12, align 4
  %remtmp = srem i32 %11, %13
  %hash = alloca i32
  %14 = bitcast i32* %hash to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash10 = load i32, i32* %hash, align 4
  %it = alloca i32
  %15 = bitcast i32* %it to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i32 %hash10, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end14, %cond_end
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %17 = bitcast i8* %16 to %map__charp_lambdap**
  %self11 = load %map__charp_lambdap*, %map__charp_lambdap** %17, align 8
  %18 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self11, i32 0, i32 1
  %19 = load i1*, i1** %18, align 8
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
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
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %25 = bitcast i8* %24 to %map__charp_lambdap**
  %self15 = load %map__charp_lambdap*, %map__charp_lambdap** %25, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self15, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %29 = bitcast i8* %28 to i32*
  %it16 = load i32, i32* %29, align 4
  %element_addressB17 = getelementptr i8*, i8** %27, i32 %it16
  %element18 = load i8*, i8** %element_addressB17, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %31 = bitcast i8* %30 to i8**
  %key19 = load i8*, i8** %31, align 8
  %32 = call i1 @string_equals(i8* %element18, i8* %key19)
  br i1 %32, label %cond_jump_then20, label %cond_end21

cond_else_block:                                  ; preds = %cond_then_block
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %34 = bitcast i8* %33 to %map__charp_lambdap**
  %self53 = load %map__charp_lambdap*, %map__charp_lambdap** %34, align 8
  %35 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self53, i32 0, i32 1
  %36 = load i1*, i1** %35, align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %38 = bitcast i8* %37 to i32*
  %it54 = load i32, i32* %38, align 4
  %element_addressD55 = getelementptr i1, i1* %36, i32 %it54
  store i1 true, i1* %element_addressD55, align 1
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %40 = bitcast i8* %39 to %map__charp_lambdap**
  %self56 = load %map__charp_lambdap*, %map__charp_lambdap** %40, align 8
  %41 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self56, i32 0, i32 0
  %42 = load i8**, i8*** %41, align 8
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %44 = bitcast i8* %43 to i32*
  %it57 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %46 = bitcast i8* %45 to i8**
  %key58 = load i8*, i8** %46, align 8
  %element_addressD59 = getelementptr i8*, i8** %42, i32 %it57
  store i8* %key58, i8** %element_addressD59, align 8
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %48 = bitcast i8* %47 to %map__charp_lambdap**
  %self60 = load %map__charp_lambdap*, %map__charp_lambdap** %48, align 8
  %49 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self60, i32 0, i32 2
  %50 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %49, align 8
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %52 = bitcast i8* %51 to i32*
  %it61 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %54 = bitcast i8* %53 to i1 (%CLVALUE**, %sVMInfo*)**
  %item62 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %54, align 8
  %element_addressD63 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %50, i32 %it61
  store i1 (%CLVALUE**, %sVMInfo*)* %item62, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD63, align 8
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %56 = bitcast i8* %55 to %map__charp_lambdap**
  %self64 = load %map__charp_lambdap*, %map__charp_lambdap** %56, align 8
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %58 = bitcast i8* %57 to %map__charp_lambdap**
  %self65 = load %map__charp_lambdap*, %map__charp_lambdap** %58, align 8
  %59 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self65, i32 0, i32 4
  %60 = load i32, i32* %59, align 4
  %addtmp66 = add nsw i32 %60, 1
  %61 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self64, i32 0, i32 4
  store i32 %addtmp66, i32* %61, align 4
  %subttmp67 = sub nsw i32 %addtmp66, 1
  br label %cond_end_block

cond_end14:                                       ; preds = %after_break68, %cond_end50
  br label %loop_top_block

cond_jump_then20:                                 ; preds = %cond_jump_then13
  br i1 true, label %cond_jump_then22, label %cond_end23

cond_end21:                                       ; preds = %after_break, %cond_jump_then13
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %63 = bitcast i8* %62 to i32*
  %it45 = load i32, i32* %63, align 4
  %addtmp = add nsw i32 %it45, 1
  %64 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %65 = bitcast i8* %64 to i32*
  store i32 %addtmp, i32* %65, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %66 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %67 = bitcast i8* %66 to i32*
  %it46 = load i32, i32* %67, align 4
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %69 = bitcast i8* %68 to %map__charp_lambdap**
  %self47 = load %map__charp_lambdap*, %map__charp_lambdap** %69, align 8
  %70 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self47, i32 0, i32 3
  %71 = load i32, i32* %70, align 4
  %getmp48 = icmp sge i32 %it46, %71
  br i1 %getmp48, label %cond_jump_then49, label %"cond_jump_elif0\0A"

cond_jump_then22:                                 ; preds = %cond_jump_then20
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %73 = bitcast i8* %72 to %map__charp_lambdap**
  %self24 = load %map__charp_lambdap*, %map__charp_lambdap** %73, align 8
  %74 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self24, i32 0, i32 0
  %75 = load i8**, i8*** %74, align 8
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
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
  %81 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %82 = bitcast i8* %81 to %map__charp_lambdap**
  %self32 = load %map__charp_lambdap*, %map__charp_lambdap** %82, align 8
  %83 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self32, i32 0, i32 2
  %84 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %83, align 8
  %85 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %86 = bitcast i8* %85 to i32*
  %it33 = load i32, i32* %86, align 4
  %element_addressB34 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %84, i32 %it33
  %element35 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB34, align 8
  %87 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB34, align 8
  %88 = ptrtoint i1 (%CLVALUE**, %sVMInfo*)* %87 to i64
  %89 = icmp ne i64 %88, 0
  br i1 %89, label %cond_then_block36, label %cond_end37

cond_end31:                                       ; preds = %cond_end37, %cond_end23
  %90 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %91 = bitcast i8* %90 to %map__charp_lambdap**
  %self38 = load %map__charp_lambdap*, %map__charp_lambdap** %91, align 8
  %92 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self38, i32 0, i32 0
  %93 = load i8**, i8*** %92, align 8
  %94 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %95 = bitcast i8* %94 to i32*
  %it39 = load i32, i32* %95, align 4
  %96 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %97 = bitcast i8* %96 to i8**
  %key40 = load i8*, i8** %97, align 8
  %element_addressD = getelementptr i8*, i8** %93, i32 %it39
  store i8* %key40, i8** %element_addressD, align 8
  %98 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %99 = bitcast i8* %98 to %map__charp_lambdap**
  %self41 = load %map__charp_lambdap*, %map__charp_lambdap** %99, align 8
  %100 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self41, i32 0, i32 2
  %101 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %100, align 8
  %102 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %103 = bitcast i8* %102 to i32*
  %it42 = load i32, i32* %103, align 4
  %104 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %105 = bitcast i8* %104 to i1 (%CLVALUE**, %sVMInfo*)**
  %item43 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %105, align 8
  %element_addressD44 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %101, i32 %it42
  store i1 (%CLVALUE**, %sVMInfo*)* %item43, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD44, align 8
  br label %cond_end_block

cond_then_block36:                                ; preds = %cond_jump_then30
  br label %cond_end37

cond_end37:                                       ; preds = %cond_then_block36, %cond_jump_then30
  %106 = bitcast i1 (%CLVALUE**, %sVMInfo*)* %87 to i8*
  call void @ncfree(i8* %106)
  br label %cond_end31

after_break:                                      ; No predecessors!
  br label %cond_end21

cond_jump_then49:                                 ; preds = %cond_end21
  %107 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %108 = bitcast i8* %107 to i32*
  store i32 0, i32* %108, align 4
  br label %cond_end50

"cond_jump_elif0\0A":                             ; preds = %cond_end21
  %109 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %110 = bitcast i8* %109 to i32*
  %it51 = load i32, i32* %110, align 4
  %111 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %112 = bitcast i8* %111 to i32*
  %hash52 = load i32, i32* %112, align 4
  %eqtmpX = icmp eq i32 %it51, %hash52
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end50

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %113 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_string.69, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end50

cond_end50:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then49
  br label %cond_end14

after_break68:                                    ; No predecessors!
  br label %cond_end14
}

define void @"rehash_charp_lambdap30_src/native6"(%map__charp_lambdap* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %self3 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %3 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self3, i32 0, i32 3
  %4 = load i32, i32* %3, align 4
  %multtmp = mul nsw i32 %4, 3
  %size = alloca i32
  %5 = bitcast i32* %size to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i32 %multtmp, i32* %size, align 4
  %size4 = load i32, i32* %size, align 4
  %sext14 = zext i32 %size4 to i64
  %6 = call i8* @nccalloc(i64 %sext14, i64 8)
  %7 = bitcast i8* %6 to i8**
  %keys = alloca i8**
  %8 = bitcast i8*** %keys to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i8** %7, i8*** %keys, align 8
  %size5 = load i32, i32* %size, align 4
  %sext146 = zext i32 %size5 to i64
  %9 = call i8* @nccalloc(i64 %sext146, i64 8)
  %10 = bitcast i8* %9 to i1 (%CLVALUE**, %sVMInfo*)**
  %items = alloca i1 (%CLVALUE**, %sVMInfo*)**
  %11 = bitcast i1 (%CLVALUE**, %sVMInfo*)*** %items to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i1 (%CLVALUE**, %sVMInfo*)** %10, i1 (%CLVALUE**, %sVMInfo*)*** %items, align 8
  %size7 = load i32, i32* %size, align 4
  %sext148 = zext i32 %size7 to i64
  %12 = call i8* @nccalloc(i64 %sext148, i64 1)
  %13 = bitcast i8* %12 to i1*
  %item_existance = alloca i1*
  %14 = bitcast i1** %item_existance to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i1* %13, i1** %item_existance, align 8
  %len = alloca i32
  %15 = bitcast i32* %len to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 0, i32* %len, align 4
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  call void @"each_charp_lambdap31_src/native6"(%map__charp_lambdap* %self9, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* @native6_lambda12)
  %self10 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %16 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self10, i32 0, i32 2
  %17 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %16, align 8
  %18 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %16, align 8
  %19 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %18 to i8*
  call void @ncfree(i8* %19)
  %self11 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %20 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self11, i32 0, i32 1
  %21 = load i1*, i1** %20, align 8
  %22 = load i1*, i1** %20, align 8
  %23 = ptrtoint i1* %22 to i64
  %24 = icmp ne i64 %23, 0
  br i1 %24, label %cond_then_block, label %cond_end

cond_then_block:                                  ; preds = %entry
  br label %cond_end

cond_end:                                         ; preds = %cond_then_block, %entry
  %25 = bitcast i1* %22 to i8*
  call void @ncfree(i8* %25)
  %self12 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self12, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8**, i8*** %26, align 8
  %29 = bitcast i8** %28 to i8*
  call void @ncfree(i8* %29)
  %self13 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %keys14 = load i8**, i8*** %keys, align 8
  %30 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self13, i32 0, i32 0
  store i8** %keys14, i8*** %30, align 8
  %self15 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %items16 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %items, align 8
  %31 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self15, i32 0, i32 2
  store i1 (%CLVALUE**, %sVMInfo*)** %items16, i1 (%CLVALUE**, %sVMInfo*)*** %31, align 8
  %self17 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %item_existance18 = load i1*, i1** %item_existance, align 8
  %32 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self17, i32 0, i32 1
  store i1* %item_existance18, i1** %32, align 8
  %self19 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %size20 = load i32, i32* %size, align 4
  %33 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self19, i32 0, i32 3
  store i32 %size20, i32* %33, align 4
  %self21 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %len22 = load i32, i32* %len, align 4
  %34 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self21, i32 0, i32 4
  store i32 %len22, i32* %34, align 4
  %35 = bitcast [8192 x i8*]* %lvtable to i8*
  %36 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %35, i64 65536)
  ret void
}

define void @native6_lambda12(i8* %it, i1 (%CLVALUE**, %sVMInfo*)* %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i8*
  store i8* %it, i8** %it4, align 8
  %2 = bitcast i8** %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %it25 = alloca i1 (%CLVALUE**, %sVMInfo*)*
  store i1 (%CLVALUE**, %sVMInfo*)* %it2, i1 (%CLVALUE**, %sVMInfo*)** %it25, align 8
  %3 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %it7 = load i8*, i8** %it4, align 8
  %5 = call i32 @string_get_hash_key(i8* %it7)
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %7 = bitcast i8* %6 to i32*
  %size = load i32, i32* %7, align 4
  %remtmp = srem i32 %5, %size
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash8 = load i32, i32* %hash, align 4
  %n = alloca i32
  %9 = bitcast i32* %n to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  store i32 %hash8, i32* %n, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %11 = bitcast i8* %10 to i1**
  %item_existance = load i1*, i1** %11, align 8
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
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
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %17 = bitcast i8* %16 to i32*
  %n10 = load i32, i32* %17, align 4
  %addtmp = add nsw i32 %n10, 1
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %19 = bitcast i8* %18 to i32*
  store i32 %addtmp, i32* %19, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %21 = bitcast i8* %20 to i32*
  %n11 = load i32, i32* %21, align 4
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %23 = bitcast i8* %22 to i32*
  %size12 = load i32, i32* %23, align 4
  %getmp = icmp sge i32 %n11, %size12
  br i1 %getmp, label %cond_jump_then13, label %"cond_jump_elif0\0A"

cond_else_block:                                  ; preds = %cond_then_block
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %25 = bitcast i8* %24 to i1**
  %item_existance17 = load i1*, i1** %25, align 8
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %27 = bitcast i8* %26 to i32*
  %n18 = load i32, i32* %27, align 4
  %element_addressD = getelementptr i1, i1* %item_existance17, i32 %n18
  store i1 true, i1* %element_addressD, align 1
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %29 = bitcast i8* %28 to i8***
  %keys = load i8**, i8*** %29, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %31 = bitcast i8* %30 to i32*
  %n19 = load i32, i32* %31, align 4
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %33 = bitcast i8* %32 to i8**
  %it20 = load i8*, i8** %33, align 8
  %element_addressD21 = getelementptr i8*, i8** %keys, i32 %n19
  store i8* %it20, i8** %element_addressD21, align 8
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %35 = bitcast i8* %34 to i1 (%CLVALUE**, %sVMInfo*)***
  %items = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %35, align 8
  %36 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %37 = bitcast i8* %36 to i32*
  %n22 = load i32, i32* %37, align 4
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %39 = bitcast i8* %38 to i1 (%CLVALUE**, %sVMInfo*)**
  %it223 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %39, align 8
  %element_addressD24 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %items, i32 %n22
  store i1 (%CLVALUE**, %sVMInfo*)* %it223, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD24, align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %41 = bitcast i8* %40 to i32*
  %len = load i32, i32* %41, align 4
  %addtmp25 = add nsw i32 %len, 1
  %42 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %43 = bitcast i8* %42 to i32*
  store i32 %addtmp25, i32* %43, align 4
  %subttmp26 = sub nsw i32 %addtmp25, 1
  br label %cond_end_block

cond_end:                                         ; preds = %after_break, %cond_end14
  br label %loop_top_block

cond_jump_then13:                                 ; preds = %cond_jump_then
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %45 = bitcast i8* %44 to i32*
  store i32 0, i32* %45, align 4
  br label %cond_end14

"cond_jump_elif0\0A":                             ; preds = %cond_jump_then
  %46 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %47 = bitcast i8* %46 to i32*
  %n15 = load i32, i32* %47, align 4
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %49 = bitcast i8* %48 to i32*
  %hash16 = load i32, i32* %49, align 4
  %eqtmpX = icmp eq i32 %n15, %hash16
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end14

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %50 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.68, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end14

cond_end14:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then13
  br label %cond_end

after_break:                                      ; No predecessors!
  br label %cond_end
}

define void @"each_charp_lambdap31_src/native6"(%map__charp_lambdap* %self, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* %block_) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %block_3 = alloca void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)*
  store void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* %block_, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %block_3, align 8
  %3 = bitcast void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %block_3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %i_ = alloca i32
  %4 = bitcast i32* %i_ to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  store i32 0, i32* %i_, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %i_4 = load i32, i32* %i_, align 4
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %6 = bitcast i8* %5 to %map__charp_lambdap**
  %self5 = load %map__charp_lambdap*, %map__charp_lambdap** %6, align 8
  %7 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self5, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %letmp = icmp slt i32 %i_4, %8
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %10 = bitcast i8* %9 to %map__charp_lambdap**
  %self6 = load %map__charp_lambdap*, %map__charp_lambdap** %10, align 8
  %11 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self6, i32 0, i32 1
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
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i1 false, i1* %end_flag_, align 1
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %17 = bitcast i8* %16 to void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)**
  %block_8 = load void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)*, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %19 = bitcast i8* %18 to %map__charp_lambdap**
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %19, align 8
  %20 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self9, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %23 = bitcast i8* %22 to i32*
  %i_10 = load i32, i32* %23, align 4
  %element_addressB11 = getelementptr i8*, i8** %21, i32 %i_10
  %element12 = load i8*, i8** %element_addressB11, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %25 = bitcast i8* %24 to %map__charp_lambdap**
  %self13 = load %map__charp_lambdap*, %map__charp_lambdap** %25, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self13, i32 0, i32 2
  %27 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %29 = bitcast i8* %28 to i32*
  %i_14 = load i32, i32* %29, align 4
  %element_addressB15 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %27, i32 %i_14
  %element16 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB15, align 8
  %end_flag_17 = load i1, i1* %end_flag_, align 1
  call void %block_8(i8* %element12, i1 (%CLVALUE**, %sVMInfo*)* %element16, i1* %end_flag_)
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

define void @"insert_charp_lambdap32_src/native6"(%map__charp_lambdap* %self, i8* %key, i1 (%CLVALUE**, %sVMInfo*)* %item) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %item4 = alloca i1 (%CLVALUE**, %sVMInfo*)*
  store i1 (%CLVALUE**, %sVMInfo*)* %item, i1 (%CLVALUE**, %sVMInfo*)** %item4, align 8
  %4 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %item4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %self5 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %5 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self5, i32 0, i32 4
  %6 = load i32, i32* %5, align 4
  %multtmp = mul nsw i32 %6, 2
  %self6 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %7 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self6, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %getmp = icmp sge i32 %multtmp, %8
  br i1 %getmp, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %10 = bitcast i8* %9 to %map__charp_lambdap**
  %self7 = load %map__charp_lambdap*, %map__charp_lambdap** %10, align 8
  call void @"rehash_charp_lambdap33_src/native6"(%map__charp_lambdap* %self7)
  br label %cond_end

cond_end:                                         ; preds = %cond_jump_then, %entry
  %key8 = load i8*, i8** %key3, align 8
  %11 = call i32 @string_get_hash_key(i8* %key8)
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %12 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self9, i32 0, i32 3
  %13 = load i32, i32* %12, align 4
  %remtmp = srem i32 %11, %13
  %hash = alloca i32
  %14 = bitcast i32* %hash to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash10 = load i32, i32* %hash, align 4
  %it = alloca i32
  %15 = bitcast i32* %it to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i32 %hash10, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end14, %cond_end
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %17 = bitcast i8* %16 to %map__charp_lambdap**
  %self11 = load %map__charp_lambdap*, %map__charp_lambdap** %17, align 8
  %18 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self11, i32 0, i32 1
  %19 = load i1*, i1** %18, align 8
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
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
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %25 = bitcast i8* %24 to %map__charp_lambdap**
  %self15 = load %map__charp_lambdap*, %map__charp_lambdap** %25, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self15, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %29 = bitcast i8* %28 to i32*
  %it16 = load i32, i32* %29, align 4
  %element_addressB17 = getelementptr i8*, i8** %27, i32 %it16
  %element18 = load i8*, i8** %element_addressB17, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %31 = bitcast i8* %30 to i8**
  %key19 = load i8*, i8** %31, align 8
  %32 = call i1 @string_equals(i8* %element18, i8* %key19)
  br i1 %32, label %cond_jump_then20, label %cond_end21

cond_else_block:                                  ; preds = %cond_then_block
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %34 = bitcast i8* %33 to %map__charp_lambdap**
  %self53 = load %map__charp_lambdap*, %map__charp_lambdap** %34, align 8
  %35 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self53, i32 0, i32 1
  %36 = load i1*, i1** %35, align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %38 = bitcast i8* %37 to i32*
  %it54 = load i32, i32* %38, align 4
  %element_addressD55 = getelementptr i1, i1* %36, i32 %it54
  store i1 true, i1* %element_addressD55, align 1
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %40 = bitcast i8* %39 to %map__charp_lambdap**
  %self56 = load %map__charp_lambdap*, %map__charp_lambdap** %40, align 8
  %41 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self56, i32 0, i32 0
  %42 = load i8**, i8*** %41, align 8
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %44 = bitcast i8* %43 to i32*
  %it57 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %46 = bitcast i8* %45 to i8**
  %key58 = load i8*, i8** %46, align 8
  %element_addressD59 = getelementptr i8*, i8** %42, i32 %it57
  store i8* %key58, i8** %element_addressD59, align 8
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %48 = bitcast i8* %47 to %map__charp_lambdap**
  %self60 = load %map__charp_lambdap*, %map__charp_lambdap** %48, align 8
  %49 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self60, i32 0, i32 2
  %50 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %49, align 8
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %52 = bitcast i8* %51 to i32*
  %it61 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %54 = bitcast i8* %53 to i1 (%CLVALUE**, %sVMInfo*)**
  %item62 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %54, align 8
  %element_addressD63 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %50, i32 %it61
  store i1 (%CLVALUE**, %sVMInfo*)* %item62, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD63, align 8
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %56 = bitcast i8* %55 to %map__charp_lambdap**
  %self64 = load %map__charp_lambdap*, %map__charp_lambdap** %56, align 8
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %58 = bitcast i8* %57 to %map__charp_lambdap**
  %self65 = load %map__charp_lambdap*, %map__charp_lambdap** %58, align 8
  %59 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self65, i32 0, i32 4
  %60 = load i32, i32* %59, align 4
  %addtmp66 = add nsw i32 %60, 1
  %61 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self64, i32 0, i32 4
  store i32 %addtmp66, i32* %61, align 4
  %subttmp67 = sub nsw i32 %addtmp66, 1
  br label %cond_end_block

cond_end14:                                       ; preds = %after_break68, %cond_end50
  br label %loop_top_block

cond_jump_then20:                                 ; preds = %cond_jump_then13
  br i1 true, label %cond_jump_then22, label %cond_end23

cond_end21:                                       ; preds = %after_break, %cond_jump_then13
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %63 = bitcast i8* %62 to i32*
  %it45 = load i32, i32* %63, align 4
  %addtmp = add nsw i32 %it45, 1
  %64 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %65 = bitcast i8* %64 to i32*
  store i32 %addtmp, i32* %65, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %66 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %67 = bitcast i8* %66 to i32*
  %it46 = load i32, i32* %67, align 4
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %69 = bitcast i8* %68 to %map__charp_lambdap**
  %self47 = load %map__charp_lambdap*, %map__charp_lambdap** %69, align 8
  %70 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self47, i32 0, i32 3
  %71 = load i32, i32* %70, align 4
  %getmp48 = icmp sge i32 %it46, %71
  br i1 %getmp48, label %cond_jump_then49, label %"cond_jump_elif0\0A"

cond_jump_then22:                                 ; preds = %cond_jump_then20
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %73 = bitcast i8* %72 to %map__charp_lambdap**
  %self24 = load %map__charp_lambdap*, %map__charp_lambdap** %73, align 8
  %74 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self24, i32 0, i32 0
  %75 = load i8**, i8*** %74, align 8
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
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
  %81 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %82 = bitcast i8* %81 to %map__charp_lambdap**
  %self32 = load %map__charp_lambdap*, %map__charp_lambdap** %82, align 8
  %83 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self32, i32 0, i32 2
  %84 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %83, align 8
  %85 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %86 = bitcast i8* %85 to i32*
  %it33 = load i32, i32* %86, align 4
  %element_addressB34 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %84, i32 %it33
  %element35 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB34, align 8
  %87 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB34, align 8
  %88 = ptrtoint i1 (%CLVALUE**, %sVMInfo*)* %87 to i64
  %89 = icmp ne i64 %88, 0
  br i1 %89, label %cond_then_block36, label %cond_end37

cond_end31:                                       ; preds = %cond_end37, %cond_end23
  %90 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %91 = bitcast i8* %90 to %map__charp_lambdap**
  %self38 = load %map__charp_lambdap*, %map__charp_lambdap** %91, align 8
  %92 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self38, i32 0, i32 0
  %93 = load i8**, i8*** %92, align 8
  %94 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %95 = bitcast i8* %94 to i32*
  %it39 = load i32, i32* %95, align 4
  %96 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %97 = bitcast i8* %96 to i8**
  %key40 = load i8*, i8** %97, align 8
  %element_addressD = getelementptr i8*, i8** %93, i32 %it39
  store i8* %key40, i8** %element_addressD, align 8
  %98 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %99 = bitcast i8* %98 to %map__charp_lambdap**
  %self41 = load %map__charp_lambdap*, %map__charp_lambdap** %99, align 8
  %100 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self41, i32 0, i32 2
  %101 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %100, align 8
  %102 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %103 = bitcast i8* %102 to i32*
  %it42 = load i32, i32* %103, align 4
  %104 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %105 = bitcast i8* %104 to i1 (%CLVALUE**, %sVMInfo*)**
  %item43 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %105, align 8
  %element_addressD44 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %101, i32 %it42
  store i1 (%CLVALUE**, %sVMInfo*)* %item43, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD44, align 8
  br label %cond_end_block

cond_then_block36:                                ; preds = %cond_jump_then30
  br label %cond_end37

cond_end37:                                       ; preds = %cond_then_block36, %cond_jump_then30
  %106 = bitcast i1 (%CLVALUE**, %sVMInfo*)* %87 to i8*
  call void @ncfree(i8* %106)
  br label %cond_end31

after_break:                                      ; No predecessors!
  br label %cond_end21

cond_jump_then49:                                 ; preds = %cond_end21
  %107 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %108 = bitcast i8* %107 to i32*
  store i32 0, i32* %108, align 4
  br label %cond_end50

"cond_jump_elif0\0A":                             ; preds = %cond_end21
  %109 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %110 = bitcast i8* %109 to i32*
  %it51 = load i32, i32* %110, align 4
  %111 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %112 = bitcast i8* %111 to i32*
  %hash52 = load i32, i32* %112, align 4
  %eqtmpX = icmp eq i32 %it51, %hash52
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end50

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %113 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_string.73, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end50

cond_end50:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then49
  br label %cond_end14

after_break68:                                    ; No predecessors!
  br label %cond_end14
}

define void @"rehash_charp_lambdap33_src/native6"(%map__charp_lambdap* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %self3 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %3 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self3, i32 0, i32 3
  %4 = load i32, i32* %3, align 4
  %multtmp = mul nsw i32 %4, 3
  %size = alloca i32
  %5 = bitcast i32* %size to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i32 %multtmp, i32* %size, align 4
  %size4 = load i32, i32* %size, align 4
  %sext14 = zext i32 %size4 to i64
  %6 = call i8* @nccalloc(i64 %sext14, i64 8)
  %7 = bitcast i8* %6 to i8**
  %keys = alloca i8**
  %8 = bitcast i8*** %keys to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i8** %7, i8*** %keys, align 8
  %size5 = load i32, i32* %size, align 4
  %sext146 = zext i32 %size5 to i64
  %9 = call i8* @nccalloc(i64 %sext146, i64 8)
  %10 = bitcast i8* %9 to i1 (%CLVALUE**, %sVMInfo*)**
  %items = alloca i1 (%CLVALUE**, %sVMInfo*)**
  %11 = bitcast i1 (%CLVALUE**, %sVMInfo*)*** %items to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i1 (%CLVALUE**, %sVMInfo*)** %10, i1 (%CLVALUE**, %sVMInfo*)*** %items, align 8
  %size7 = load i32, i32* %size, align 4
  %sext148 = zext i32 %size7 to i64
  %12 = call i8* @nccalloc(i64 %sext148, i64 1)
  %13 = bitcast i8* %12 to i1*
  %item_existance = alloca i1*
  %14 = bitcast i1** %item_existance to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i1* %13, i1** %item_existance, align 8
  %len = alloca i32
  %15 = bitcast i32* %len to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 0, i32* %len, align 4
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  call void @"each_charp_lambdap34_src/native6"(%map__charp_lambdap* %self9, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* @native6_lambda13)
  %self10 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %16 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self10, i32 0, i32 2
  %17 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %16, align 8
  %18 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %16, align 8
  %19 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %18 to i8*
  call void @ncfree(i8* %19)
  %self11 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %20 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self11, i32 0, i32 1
  %21 = load i1*, i1** %20, align 8
  %22 = load i1*, i1** %20, align 8
  %23 = ptrtoint i1* %22 to i64
  %24 = icmp ne i64 %23, 0
  br i1 %24, label %cond_then_block, label %cond_end

cond_then_block:                                  ; preds = %entry
  br label %cond_end

cond_end:                                         ; preds = %cond_then_block, %entry
  %25 = bitcast i1* %22 to i8*
  call void @ncfree(i8* %25)
  %self12 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self12, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8**, i8*** %26, align 8
  %29 = bitcast i8** %28 to i8*
  call void @ncfree(i8* %29)
  %self13 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %keys14 = load i8**, i8*** %keys, align 8
  %30 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self13, i32 0, i32 0
  store i8** %keys14, i8*** %30, align 8
  %self15 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %items16 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %items, align 8
  %31 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self15, i32 0, i32 2
  store i1 (%CLVALUE**, %sVMInfo*)** %items16, i1 (%CLVALUE**, %sVMInfo*)*** %31, align 8
  %self17 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %item_existance18 = load i1*, i1** %item_existance, align 8
  %32 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self17, i32 0, i32 1
  store i1* %item_existance18, i1** %32, align 8
  %self19 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %size20 = load i32, i32* %size, align 4
  %33 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self19, i32 0, i32 3
  store i32 %size20, i32* %33, align 4
  %self21 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %len22 = load i32, i32* %len, align 4
  %34 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self21, i32 0, i32 4
  store i32 %len22, i32* %34, align 4
  %35 = bitcast [8192 x i8*]* %lvtable to i8*
  %36 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %35, i64 65536)
  ret void
}

define void @native6_lambda13(i8* %it, i1 (%CLVALUE**, %sVMInfo*)* %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i8*
  store i8* %it, i8** %it4, align 8
  %2 = bitcast i8** %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %it25 = alloca i1 (%CLVALUE**, %sVMInfo*)*
  store i1 (%CLVALUE**, %sVMInfo*)* %it2, i1 (%CLVALUE**, %sVMInfo*)** %it25, align 8
  %3 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %it7 = load i8*, i8** %it4, align 8
  %5 = call i32 @string_get_hash_key(i8* %it7)
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %7 = bitcast i8* %6 to i32*
  %size = load i32, i32* %7, align 4
  %remtmp = srem i32 %5, %size
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash8 = load i32, i32* %hash, align 4
  %n = alloca i32
  %9 = bitcast i32* %n to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  store i32 %hash8, i32* %n, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %11 = bitcast i8* %10 to i1**
  %item_existance = load i1*, i1** %11, align 8
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
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
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %17 = bitcast i8* %16 to i32*
  %n10 = load i32, i32* %17, align 4
  %addtmp = add nsw i32 %n10, 1
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %19 = bitcast i8* %18 to i32*
  store i32 %addtmp, i32* %19, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %21 = bitcast i8* %20 to i32*
  %n11 = load i32, i32* %21, align 4
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %23 = bitcast i8* %22 to i32*
  %size12 = load i32, i32* %23, align 4
  %getmp = icmp sge i32 %n11, %size12
  br i1 %getmp, label %cond_jump_then13, label %"cond_jump_elif0\0A"

cond_else_block:                                  ; preds = %cond_then_block
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %25 = bitcast i8* %24 to i1**
  %item_existance17 = load i1*, i1** %25, align 8
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %27 = bitcast i8* %26 to i32*
  %n18 = load i32, i32* %27, align 4
  %element_addressD = getelementptr i1, i1* %item_existance17, i32 %n18
  store i1 true, i1* %element_addressD, align 1
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %29 = bitcast i8* %28 to i8***
  %keys = load i8**, i8*** %29, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %31 = bitcast i8* %30 to i32*
  %n19 = load i32, i32* %31, align 4
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %33 = bitcast i8* %32 to i8**
  %it20 = load i8*, i8** %33, align 8
  %element_addressD21 = getelementptr i8*, i8** %keys, i32 %n19
  store i8* %it20, i8** %element_addressD21, align 8
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %35 = bitcast i8* %34 to i1 (%CLVALUE**, %sVMInfo*)***
  %items = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %35, align 8
  %36 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %37 = bitcast i8* %36 to i32*
  %n22 = load i32, i32* %37, align 4
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %39 = bitcast i8* %38 to i1 (%CLVALUE**, %sVMInfo*)**
  %it223 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %39, align 8
  %element_addressD24 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %items, i32 %n22
  store i1 (%CLVALUE**, %sVMInfo*)* %it223, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD24, align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %41 = bitcast i8* %40 to i32*
  %len = load i32, i32* %41, align 4
  %addtmp25 = add nsw i32 %len, 1
  %42 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %43 = bitcast i8* %42 to i32*
  store i32 %addtmp25, i32* %43, align 4
  %subttmp26 = sub nsw i32 %addtmp25, 1
  br label %cond_end_block

cond_end:                                         ; preds = %after_break, %cond_end14
  br label %loop_top_block

cond_jump_then13:                                 ; preds = %cond_jump_then
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %45 = bitcast i8* %44 to i32*
  store i32 0, i32* %45, align 4
  br label %cond_end14

"cond_jump_elif0\0A":                             ; preds = %cond_jump_then
  %46 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %47 = bitcast i8* %46 to i32*
  %n15 = load i32, i32* %47, align 4
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %49 = bitcast i8* %48 to i32*
  %hash16 = load i32, i32* %49, align 4
  %eqtmpX = icmp eq i32 %n15, %hash16
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end14

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %50 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.72, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end14

cond_end14:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then13
  br label %cond_end

after_break:                                      ; No predecessors!
  br label %cond_end
}

define void @"each_charp_lambdap34_src/native6"(%map__charp_lambdap* %self, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* %block_) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %block_3 = alloca void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)*
  store void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* %block_, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %block_3, align 8
  %3 = bitcast void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %block_3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %i_ = alloca i32
  %4 = bitcast i32* %i_ to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  store i32 0, i32* %i_, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %i_4 = load i32, i32* %i_, align 4
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %6 = bitcast i8* %5 to %map__charp_lambdap**
  %self5 = load %map__charp_lambdap*, %map__charp_lambdap** %6, align 8
  %7 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self5, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %letmp = icmp slt i32 %i_4, %8
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %10 = bitcast i8* %9 to %map__charp_lambdap**
  %self6 = load %map__charp_lambdap*, %map__charp_lambdap** %10, align 8
  %11 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self6, i32 0, i32 1
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
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i1 false, i1* %end_flag_, align 1
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %17 = bitcast i8* %16 to void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)**
  %block_8 = load void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)*, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %19 = bitcast i8* %18 to %map__charp_lambdap**
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %19, align 8
  %20 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self9, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %23 = bitcast i8* %22 to i32*
  %i_10 = load i32, i32* %23, align 4
  %element_addressB11 = getelementptr i8*, i8** %21, i32 %i_10
  %element12 = load i8*, i8** %element_addressB11, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %25 = bitcast i8* %24 to %map__charp_lambdap**
  %self13 = load %map__charp_lambdap*, %map__charp_lambdap** %25, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self13, i32 0, i32 2
  %27 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %29 = bitcast i8* %28 to i32*
  %i_14 = load i32, i32* %29, align 4
  %element_addressB15 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %27, i32 %i_14
  %element16 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB15, align 8
  %end_flag_17 = load i1, i1* %end_flag_, align 1
  call void %block_8(i8* %element12, i1 (%CLVALUE**, %sVMInfo*)* %element16, i1* %end_flag_)
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

define void @"insert_charp_lambdap35_src/native6"(%map__charp_lambdap* %self, i8* %key, i1 (%CLVALUE**, %sVMInfo*)* %item) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %item4 = alloca i1 (%CLVALUE**, %sVMInfo*)*
  store i1 (%CLVALUE**, %sVMInfo*)* %item, i1 (%CLVALUE**, %sVMInfo*)** %item4, align 8
  %4 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %item4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %self5 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %5 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self5, i32 0, i32 4
  %6 = load i32, i32* %5, align 4
  %multtmp = mul nsw i32 %6, 2
  %self6 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %7 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self6, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %getmp = icmp sge i32 %multtmp, %8
  br i1 %getmp, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %10 = bitcast i8* %9 to %map__charp_lambdap**
  %self7 = load %map__charp_lambdap*, %map__charp_lambdap** %10, align 8
  call void @"rehash_charp_lambdap36_src/native6"(%map__charp_lambdap* %self7)
  br label %cond_end

cond_end:                                         ; preds = %cond_jump_then, %entry
  %key8 = load i8*, i8** %key3, align 8
  %11 = call i32 @string_get_hash_key(i8* %key8)
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %12 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self9, i32 0, i32 3
  %13 = load i32, i32* %12, align 4
  %remtmp = srem i32 %11, %13
  %hash = alloca i32
  %14 = bitcast i32* %hash to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash10 = load i32, i32* %hash, align 4
  %it = alloca i32
  %15 = bitcast i32* %it to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i32 %hash10, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end14, %cond_end
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %17 = bitcast i8* %16 to %map__charp_lambdap**
  %self11 = load %map__charp_lambdap*, %map__charp_lambdap** %17, align 8
  %18 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self11, i32 0, i32 1
  %19 = load i1*, i1** %18, align 8
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
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
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %25 = bitcast i8* %24 to %map__charp_lambdap**
  %self15 = load %map__charp_lambdap*, %map__charp_lambdap** %25, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self15, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %29 = bitcast i8* %28 to i32*
  %it16 = load i32, i32* %29, align 4
  %element_addressB17 = getelementptr i8*, i8** %27, i32 %it16
  %element18 = load i8*, i8** %element_addressB17, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %31 = bitcast i8* %30 to i8**
  %key19 = load i8*, i8** %31, align 8
  %32 = call i1 @string_equals(i8* %element18, i8* %key19)
  br i1 %32, label %cond_jump_then20, label %cond_end21

cond_else_block:                                  ; preds = %cond_then_block
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %34 = bitcast i8* %33 to %map__charp_lambdap**
  %self53 = load %map__charp_lambdap*, %map__charp_lambdap** %34, align 8
  %35 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self53, i32 0, i32 1
  %36 = load i1*, i1** %35, align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %38 = bitcast i8* %37 to i32*
  %it54 = load i32, i32* %38, align 4
  %element_addressD55 = getelementptr i1, i1* %36, i32 %it54
  store i1 true, i1* %element_addressD55, align 1
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %40 = bitcast i8* %39 to %map__charp_lambdap**
  %self56 = load %map__charp_lambdap*, %map__charp_lambdap** %40, align 8
  %41 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self56, i32 0, i32 0
  %42 = load i8**, i8*** %41, align 8
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %44 = bitcast i8* %43 to i32*
  %it57 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %46 = bitcast i8* %45 to i8**
  %key58 = load i8*, i8** %46, align 8
  %element_addressD59 = getelementptr i8*, i8** %42, i32 %it57
  store i8* %key58, i8** %element_addressD59, align 8
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %48 = bitcast i8* %47 to %map__charp_lambdap**
  %self60 = load %map__charp_lambdap*, %map__charp_lambdap** %48, align 8
  %49 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self60, i32 0, i32 2
  %50 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %49, align 8
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %52 = bitcast i8* %51 to i32*
  %it61 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %54 = bitcast i8* %53 to i1 (%CLVALUE**, %sVMInfo*)**
  %item62 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %54, align 8
  %element_addressD63 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %50, i32 %it61
  store i1 (%CLVALUE**, %sVMInfo*)* %item62, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD63, align 8
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %56 = bitcast i8* %55 to %map__charp_lambdap**
  %self64 = load %map__charp_lambdap*, %map__charp_lambdap** %56, align 8
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %58 = bitcast i8* %57 to %map__charp_lambdap**
  %self65 = load %map__charp_lambdap*, %map__charp_lambdap** %58, align 8
  %59 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self65, i32 0, i32 4
  %60 = load i32, i32* %59, align 4
  %addtmp66 = add nsw i32 %60, 1
  %61 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self64, i32 0, i32 4
  store i32 %addtmp66, i32* %61, align 4
  %subttmp67 = sub nsw i32 %addtmp66, 1
  br label %cond_end_block

cond_end14:                                       ; preds = %after_break68, %cond_end50
  br label %loop_top_block

cond_jump_then20:                                 ; preds = %cond_jump_then13
  br i1 true, label %cond_jump_then22, label %cond_end23

cond_end21:                                       ; preds = %after_break, %cond_jump_then13
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %63 = bitcast i8* %62 to i32*
  %it45 = load i32, i32* %63, align 4
  %addtmp = add nsw i32 %it45, 1
  %64 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %65 = bitcast i8* %64 to i32*
  store i32 %addtmp, i32* %65, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %66 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %67 = bitcast i8* %66 to i32*
  %it46 = load i32, i32* %67, align 4
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %69 = bitcast i8* %68 to %map__charp_lambdap**
  %self47 = load %map__charp_lambdap*, %map__charp_lambdap** %69, align 8
  %70 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self47, i32 0, i32 3
  %71 = load i32, i32* %70, align 4
  %getmp48 = icmp sge i32 %it46, %71
  br i1 %getmp48, label %cond_jump_then49, label %"cond_jump_elif0\0A"

cond_jump_then22:                                 ; preds = %cond_jump_then20
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %73 = bitcast i8* %72 to %map__charp_lambdap**
  %self24 = load %map__charp_lambdap*, %map__charp_lambdap** %73, align 8
  %74 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self24, i32 0, i32 0
  %75 = load i8**, i8*** %74, align 8
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
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
  %81 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %82 = bitcast i8* %81 to %map__charp_lambdap**
  %self32 = load %map__charp_lambdap*, %map__charp_lambdap** %82, align 8
  %83 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self32, i32 0, i32 2
  %84 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %83, align 8
  %85 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %86 = bitcast i8* %85 to i32*
  %it33 = load i32, i32* %86, align 4
  %element_addressB34 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %84, i32 %it33
  %element35 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB34, align 8
  %87 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB34, align 8
  %88 = ptrtoint i1 (%CLVALUE**, %sVMInfo*)* %87 to i64
  %89 = icmp ne i64 %88, 0
  br i1 %89, label %cond_then_block36, label %cond_end37

cond_end31:                                       ; preds = %cond_end37, %cond_end23
  %90 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %91 = bitcast i8* %90 to %map__charp_lambdap**
  %self38 = load %map__charp_lambdap*, %map__charp_lambdap** %91, align 8
  %92 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self38, i32 0, i32 0
  %93 = load i8**, i8*** %92, align 8
  %94 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %95 = bitcast i8* %94 to i32*
  %it39 = load i32, i32* %95, align 4
  %96 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %97 = bitcast i8* %96 to i8**
  %key40 = load i8*, i8** %97, align 8
  %element_addressD = getelementptr i8*, i8** %93, i32 %it39
  store i8* %key40, i8** %element_addressD, align 8
  %98 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %99 = bitcast i8* %98 to %map__charp_lambdap**
  %self41 = load %map__charp_lambdap*, %map__charp_lambdap** %99, align 8
  %100 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self41, i32 0, i32 2
  %101 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %100, align 8
  %102 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %103 = bitcast i8* %102 to i32*
  %it42 = load i32, i32* %103, align 4
  %104 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %105 = bitcast i8* %104 to i1 (%CLVALUE**, %sVMInfo*)**
  %item43 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %105, align 8
  %element_addressD44 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %101, i32 %it42
  store i1 (%CLVALUE**, %sVMInfo*)* %item43, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD44, align 8
  br label %cond_end_block

cond_then_block36:                                ; preds = %cond_jump_then30
  br label %cond_end37

cond_end37:                                       ; preds = %cond_then_block36, %cond_jump_then30
  %106 = bitcast i1 (%CLVALUE**, %sVMInfo*)* %87 to i8*
  call void @ncfree(i8* %106)
  br label %cond_end31

after_break:                                      ; No predecessors!
  br label %cond_end21

cond_jump_then49:                                 ; preds = %cond_end21
  %107 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %108 = bitcast i8* %107 to i32*
  store i32 0, i32* %108, align 4
  br label %cond_end50

"cond_jump_elif0\0A":                             ; preds = %cond_end21
  %109 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %110 = bitcast i8* %109 to i32*
  %it51 = load i32, i32* %110, align 4
  %111 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %112 = bitcast i8* %111 to i32*
  %hash52 = load i32, i32* %112, align 4
  %eqtmpX = icmp eq i32 %it51, %hash52
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end50

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %113 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_string.77, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end50

cond_end50:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then49
  br label %cond_end14

after_break68:                                    ; No predecessors!
  br label %cond_end14
}

define void @"rehash_charp_lambdap36_src/native6"(%map__charp_lambdap* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %self3 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %3 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self3, i32 0, i32 3
  %4 = load i32, i32* %3, align 4
  %multtmp = mul nsw i32 %4, 3
  %size = alloca i32
  %5 = bitcast i32* %size to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i32 %multtmp, i32* %size, align 4
  %size4 = load i32, i32* %size, align 4
  %sext14 = zext i32 %size4 to i64
  %6 = call i8* @nccalloc(i64 %sext14, i64 8)
  %7 = bitcast i8* %6 to i8**
  %keys = alloca i8**
  %8 = bitcast i8*** %keys to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i8** %7, i8*** %keys, align 8
  %size5 = load i32, i32* %size, align 4
  %sext146 = zext i32 %size5 to i64
  %9 = call i8* @nccalloc(i64 %sext146, i64 8)
  %10 = bitcast i8* %9 to i1 (%CLVALUE**, %sVMInfo*)**
  %items = alloca i1 (%CLVALUE**, %sVMInfo*)**
  %11 = bitcast i1 (%CLVALUE**, %sVMInfo*)*** %items to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i1 (%CLVALUE**, %sVMInfo*)** %10, i1 (%CLVALUE**, %sVMInfo*)*** %items, align 8
  %size7 = load i32, i32* %size, align 4
  %sext148 = zext i32 %size7 to i64
  %12 = call i8* @nccalloc(i64 %sext148, i64 1)
  %13 = bitcast i8* %12 to i1*
  %item_existance = alloca i1*
  %14 = bitcast i1** %item_existance to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i1* %13, i1** %item_existance, align 8
  %len = alloca i32
  %15 = bitcast i32* %len to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 0, i32* %len, align 4
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  call void @"each_charp_lambdap37_src/native6"(%map__charp_lambdap* %self9, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* @native6_lambda14)
  %self10 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %16 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self10, i32 0, i32 2
  %17 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %16, align 8
  %18 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %16, align 8
  %19 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %18 to i8*
  call void @ncfree(i8* %19)
  %self11 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %20 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self11, i32 0, i32 1
  %21 = load i1*, i1** %20, align 8
  %22 = load i1*, i1** %20, align 8
  %23 = ptrtoint i1* %22 to i64
  %24 = icmp ne i64 %23, 0
  br i1 %24, label %cond_then_block, label %cond_end

cond_then_block:                                  ; preds = %entry
  br label %cond_end

cond_end:                                         ; preds = %cond_then_block, %entry
  %25 = bitcast i1* %22 to i8*
  call void @ncfree(i8* %25)
  %self12 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self12, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8**, i8*** %26, align 8
  %29 = bitcast i8** %28 to i8*
  call void @ncfree(i8* %29)
  %self13 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %keys14 = load i8**, i8*** %keys, align 8
  %30 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self13, i32 0, i32 0
  store i8** %keys14, i8*** %30, align 8
  %self15 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %items16 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %items, align 8
  %31 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self15, i32 0, i32 2
  store i1 (%CLVALUE**, %sVMInfo*)** %items16, i1 (%CLVALUE**, %sVMInfo*)*** %31, align 8
  %self17 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %item_existance18 = load i1*, i1** %item_existance, align 8
  %32 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self17, i32 0, i32 1
  store i1* %item_existance18, i1** %32, align 8
  %self19 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %size20 = load i32, i32* %size, align 4
  %33 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self19, i32 0, i32 3
  store i32 %size20, i32* %33, align 4
  %self21 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %len22 = load i32, i32* %len, align 4
  %34 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self21, i32 0, i32 4
  store i32 %len22, i32* %34, align 4
  %35 = bitcast [8192 x i8*]* %lvtable to i8*
  %36 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %35, i64 65536)
  ret void
}

define void @native6_lambda14(i8* %it, i1 (%CLVALUE**, %sVMInfo*)* %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i8*
  store i8* %it, i8** %it4, align 8
  %2 = bitcast i8** %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %it25 = alloca i1 (%CLVALUE**, %sVMInfo*)*
  store i1 (%CLVALUE**, %sVMInfo*)* %it2, i1 (%CLVALUE**, %sVMInfo*)** %it25, align 8
  %3 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %it7 = load i8*, i8** %it4, align 8
  %5 = call i32 @string_get_hash_key(i8* %it7)
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %7 = bitcast i8* %6 to i32*
  %size = load i32, i32* %7, align 4
  %remtmp = srem i32 %5, %size
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash8 = load i32, i32* %hash, align 4
  %n = alloca i32
  %9 = bitcast i32* %n to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  store i32 %hash8, i32* %n, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %11 = bitcast i8* %10 to i1**
  %item_existance = load i1*, i1** %11, align 8
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
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
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %17 = bitcast i8* %16 to i32*
  %n10 = load i32, i32* %17, align 4
  %addtmp = add nsw i32 %n10, 1
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %19 = bitcast i8* %18 to i32*
  store i32 %addtmp, i32* %19, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %21 = bitcast i8* %20 to i32*
  %n11 = load i32, i32* %21, align 4
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %23 = bitcast i8* %22 to i32*
  %size12 = load i32, i32* %23, align 4
  %getmp = icmp sge i32 %n11, %size12
  br i1 %getmp, label %cond_jump_then13, label %"cond_jump_elif0\0A"

cond_else_block:                                  ; preds = %cond_then_block
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %25 = bitcast i8* %24 to i1**
  %item_existance17 = load i1*, i1** %25, align 8
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %27 = bitcast i8* %26 to i32*
  %n18 = load i32, i32* %27, align 4
  %element_addressD = getelementptr i1, i1* %item_existance17, i32 %n18
  store i1 true, i1* %element_addressD, align 1
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %29 = bitcast i8* %28 to i8***
  %keys = load i8**, i8*** %29, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %31 = bitcast i8* %30 to i32*
  %n19 = load i32, i32* %31, align 4
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %33 = bitcast i8* %32 to i8**
  %it20 = load i8*, i8** %33, align 8
  %element_addressD21 = getelementptr i8*, i8** %keys, i32 %n19
  store i8* %it20, i8** %element_addressD21, align 8
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %35 = bitcast i8* %34 to i1 (%CLVALUE**, %sVMInfo*)***
  %items = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %35, align 8
  %36 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %37 = bitcast i8* %36 to i32*
  %n22 = load i32, i32* %37, align 4
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %39 = bitcast i8* %38 to i1 (%CLVALUE**, %sVMInfo*)**
  %it223 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %39, align 8
  %element_addressD24 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %items, i32 %n22
  store i1 (%CLVALUE**, %sVMInfo*)* %it223, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD24, align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %41 = bitcast i8* %40 to i32*
  %len = load i32, i32* %41, align 4
  %addtmp25 = add nsw i32 %len, 1
  %42 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %43 = bitcast i8* %42 to i32*
  store i32 %addtmp25, i32* %43, align 4
  %subttmp26 = sub nsw i32 %addtmp25, 1
  br label %cond_end_block

cond_end:                                         ; preds = %after_break, %cond_end14
  br label %loop_top_block

cond_jump_then13:                                 ; preds = %cond_jump_then
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %45 = bitcast i8* %44 to i32*
  store i32 0, i32* %45, align 4
  br label %cond_end14

"cond_jump_elif0\0A":                             ; preds = %cond_jump_then
  %46 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %47 = bitcast i8* %46 to i32*
  %n15 = load i32, i32* %47, align 4
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %49 = bitcast i8* %48 to i32*
  %hash16 = load i32, i32* %49, align 4
  %eqtmpX = icmp eq i32 %n15, %hash16
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end14

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %50 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.76, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end14

cond_end14:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then13
  br label %cond_end

after_break:                                      ; No predecessors!
  br label %cond_end
}

define void @"each_charp_lambdap37_src/native6"(%map__charp_lambdap* %self, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* %block_) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %block_3 = alloca void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)*
  store void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* %block_, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %block_3, align 8
  %3 = bitcast void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %block_3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %i_ = alloca i32
  %4 = bitcast i32* %i_ to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  store i32 0, i32* %i_, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %i_4 = load i32, i32* %i_, align 4
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %6 = bitcast i8* %5 to %map__charp_lambdap**
  %self5 = load %map__charp_lambdap*, %map__charp_lambdap** %6, align 8
  %7 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self5, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %letmp = icmp slt i32 %i_4, %8
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %10 = bitcast i8* %9 to %map__charp_lambdap**
  %self6 = load %map__charp_lambdap*, %map__charp_lambdap** %10, align 8
  %11 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self6, i32 0, i32 1
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
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i1 false, i1* %end_flag_, align 1
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %17 = bitcast i8* %16 to void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)**
  %block_8 = load void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)*, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %19 = bitcast i8* %18 to %map__charp_lambdap**
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %19, align 8
  %20 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self9, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %23 = bitcast i8* %22 to i32*
  %i_10 = load i32, i32* %23, align 4
  %element_addressB11 = getelementptr i8*, i8** %21, i32 %i_10
  %element12 = load i8*, i8** %element_addressB11, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %25 = bitcast i8* %24 to %map__charp_lambdap**
  %self13 = load %map__charp_lambdap*, %map__charp_lambdap** %25, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self13, i32 0, i32 2
  %27 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %29 = bitcast i8* %28 to i32*
  %i_14 = load i32, i32* %29, align 4
  %element_addressB15 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %27, i32 %i_14
  %element16 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB15, align 8
  %end_flag_17 = load i1, i1* %end_flag_, align 1
  call void %block_8(i8* %element12, i1 (%CLVALUE**, %sVMInfo*)* %element16, i1* %end_flag_)
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

define void @"insert_charp_lambdap38_src/native6"(%map__charp_lambdap* %self, i8* %key, i1 (%CLVALUE**, %sVMInfo*)* %item) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %item4 = alloca i1 (%CLVALUE**, %sVMInfo*)*
  store i1 (%CLVALUE**, %sVMInfo*)* %item, i1 (%CLVALUE**, %sVMInfo*)** %item4, align 8
  %4 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %item4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %self5 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %5 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self5, i32 0, i32 4
  %6 = load i32, i32* %5, align 4
  %multtmp = mul nsw i32 %6, 2
  %self6 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %7 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self6, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %getmp = icmp sge i32 %multtmp, %8
  br i1 %getmp, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %10 = bitcast i8* %9 to %map__charp_lambdap**
  %self7 = load %map__charp_lambdap*, %map__charp_lambdap** %10, align 8
  call void @"rehash_charp_lambdap39_src/native6"(%map__charp_lambdap* %self7)
  br label %cond_end

cond_end:                                         ; preds = %cond_jump_then, %entry
  %key8 = load i8*, i8** %key3, align 8
  %11 = call i32 @string_get_hash_key(i8* %key8)
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %12 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self9, i32 0, i32 3
  %13 = load i32, i32* %12, align 4
  %remtmp = srem i32 %11, %13
  %hash = alloca i32
  %14 = bitcast i32* %hash to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash10 = load i32, i32* %hash, align 4
  %it = alloca i32
  %15 = bitcast i32* %it to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i32 %hash10, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end14, %cond_end
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %17 = bitcast i8* %16 to %map__charp_lambdap**
  %self11 = load %map__charp_lambdap*, %map__charp_lambdap** %17, align 8
  %18 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self11, i32 0, i32 1
  %19 = load i1*, i1** %18, align 8
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
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
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %25 = bitcast i8* %24 to %map__charp_lambdap**
  %self15 = load %map__charp_lambdap*, %map__charp_lambdap** %25, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self15, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %29 = bitcast i8* %28 to i32*
  %it16 = load i32, i32* %29, align 4
  %element_addressB17 = getelementptr i8*, i8** %27, i32 %it16
  %element18 = load i8*, i8** %element_addressB17, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %31 = bitcast i8* %30 to i8**
  %key19 = load i8*, i8** %31, align 8
  %32 = call i1 @string_equals(i8* %element18, i8* %key19)
  br i1 %32, label %cond_jump_then20, label %cond_end21

cond_else_block:                                  ; preds = %cond_then_block
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %34 = bitcast i8* %33 to %map__charp_lambdap**
  %self53 = load %map__charp_lambdap*, %map__charp_lambdap** %34, align 8
  %35 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self53, i32 0, i32 1
  %36 = load i1*, i1** %35, align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %38 = bitcast i8* %37 to i32*
  %it54 = load i32, i32* %38, align 4
  %element_addressD55 = getelementptr i1, i1* %36, i32 %it54
  store i1 true, i1* %element_addressD55, align 1
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %40 = bitcast i8* %39 to %map__charp_lambdap**
  %self56 = load %map__charp_lambdap*, %map__charp_lambdap** %40, align 8
  %41 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self56, i32 0, i32 0
  %42 = load i8**, i8*** %41, align 8
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %44 = bitcast i8* %43 to i32*
  %it57 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %46 = bitcast i8* %45 to i8**
  %key58 = load i8*, i8** %46, align 8
  %element_addressD59 = getelementptr i8*, i8** %42, i32 %it57
  store i8* %key58, i8** %element_addressD59, align 8
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %48 = bitcast i8* %47 to %map__charp_lambdap**
  %self60 = load %map__charp_lambdap*, %map__charp_lambdap** %48, align 8
  %49 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self60, i32 0, i32 2
  %50 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %49, align 8
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %52 = bitcast i8* %51 to i32*
  %it61 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %54 = bitcast i8* %53 to i1 (%CLVALUE**, %sVMInfo*)**
  %item62 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %54, align 8
  %element_addressD63 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %50, i32 %it61
  store i1 (%CLVALUE**, %sVMInfo*)* %item62, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD63, align 8
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %56 = bitcast i8* %55 to %map__charp_lambdap**
  %self64 = load %map__charp_lambdap*, %map__charp_lambdap** %56, align 8
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %58 = bitcast i8* %57 to %map__charp_lambdap**
  %self65 = load %map__charp_lambdap*, %map__charp_lambdap** %58, align 8
  %59 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self65, i32 0, i32 4
  %60 = load i32, i32* %59, align 4
  %addtmp66 = add nsw i32 %60, 1
  %61 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self64, i32 0, i32 4
  store i32 %addtmp66, i32* %61, align 4
  %subttmp67 = sub nsw i32 %addtmp66, 1
  br label %cond_end_block

cond_end14:                                       ; preds = %after_break68, %cond_end50
  br label %loop_top_block

cond_jump_then20:                                 ; preds = %cond_jump_then13
  br i1 true, label %cond_jump_then22, label %cond_end23

cond_end21:                                       ; preds = %after_break, %cond_jump_then13
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %63 = bitcast i8* %62 to i32*
  %it45 = load i32, i32* %63, align 4
  %addtmp = add nsw i32 %it45, 1
  %64 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %65 = bitcast i8* %64 to i32*
  store i32 %addtmp, i32* %65, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %66 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %67 = bitcast i8* %66 to i32*
  %it46 = load i32, i32* %67, align 4
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %69 = bitcast i8* %68 to %map__charp_lambdap**
  %self47 = load %map__charp_lambdap*, %map__charp_lambdap** %69, align 8
  %70 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self47, i32 0, i32 3
  %71 = load i32, i32* %70, align 4
  %getmp48 = icmp sge i32 %it46, %71
  br i1 %getmp48, label %cond_jump_then49, label %"cond_jump_elif0\0A"

cond_jump_then22:                                 ; preds = %cond_jump_then20
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %73 = bitcast i8* %72 to %map__charp_lambdap**
  %self24 = load %map__charp_lambdap*, %map__charp_lambdap** %73, align 8
  %74 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self24, i32 0, i32 0
  %75 = load i8**, i8*** %74, align 8
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
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
  %81 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %82 = bitcast i8* %81 to %map__charp_lambdap**
  %self32 = load %map__charp_lambdap*, %map__charp_lambdap** %82, align 8
  %83 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self32, i32 0, i32 2
  %84 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %83, align 8
  %85 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %86 = bitcast i8* %85 to i32*
  %it33 = load i32, i32* %86, align 4
  %element_addressB34 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %84, i32 %it33
  %element35 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB34, align 8
  %87 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB34, align 8
  %88 = ptrtoint i1 (%CLVALUE**, %sVMInfo*)* %87 to i64
  %89 = icmp ne i64 %88, 0
  br i1 %89, label %cond_then_block36, label %cond_end37

cond_end31:                                       ; preds = %cond_end37, %cond_end23
  %90 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %91 = bitcast i8* %90 to %map__charp_lambdap**
  %self38 = load %map__charp_lambdap*, %map__charp_lambdap** %91, align 8
  %92 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self38, i32 0, i32 0
  %93 = load i8**, i8*** %92, align 8
  %94 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %95 = bitcast i8* %94 to i32*
  %it39 = load i32, i32* %95, align 4
  %96 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %97 = bitcast i8* %96 to i8**
  %key40 = load i8*, i8** %97, align 8
  %element_addressD = getelementptr i8*, i8** %93, i32 %it39
  store i8* %key40, i8** %element_addressD, align 8
  %98 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %99 = bitcast i8* %98 to %map__charp_lambdap**
  %self41 = load %map__charp_lambdap*, %map__charp_lambdap** %99, align 8
  %100 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self41, i32 0, i32 2
  %101 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %100, align 8
  %102 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %103 = bitcast i8* %102 to i32*
  %it42 = load i32, i32* %103, align 4
  %104 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %105 = bitcast i8* %104 to i1 (%CLVALUE**, %sVMInfo*)**
  %item43 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %105, align 8
  %element_addressD44 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %101, i32 %it42
  store i1 (%CLVALUE**, %sVMInfo*)* %item43, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD44, align 8
  br label %cond_end_block

cond_then_block36:                                ; preds = %cond_jump_then30
  br label %cond_end37

cond_end37:                                       ; preds = %cond_then_block36, %cond_jump_then30
  %106 = bitcast i1 (%CLVALUE**, %sVMInfo*)* %87 to i8*
  call void @ncfree(i8* %106)
  br label %cond_end31

after_break:                                      ; No predecessors!
  br label %cond_end21

cond_jump_then49:                                 ; preds = %cond_end21
  %107 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %108 = bitcast i8* %107 to i32*
  store i32 0, i32* %108, align 4
  br label %cond_end50

"cond_jump_elif0\0A":                             ; preds = %cond_end21
  %109 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %110 = bitcast i8* %109 to i32*
  %it51 = load i32, i32* %110, align 4
  %111 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %112 = bitcast i8* %111 to i32*
  %hash52 = load i32, i32* %112, align 4
  %eqtmpX = icmp eq i32 %it51, %hash52
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end50

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %113 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_string.81, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end50

cond_end50:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then49
  br label %cond_end14

after_break68:                                    ; No predecessors!
  br label %cond_end14
}

define void @"rehash_charp_lambdap39_src/native6"(%map__charp_lambdap* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %self3 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %3 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self3, i32 0, i32 3
  %4 = load i32, i32* %3, align 4
  %multtmp = mul nsw i32 %4, 3
  %size = alloca i32
  %5 = bitcast i32* %size to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i32 %multtmp, i32* %size, align 4
  %size4 = load i32, i32* %size, align 4
  %sext14 = zext i32 %size4 to i64
  %6 = call i8* @nccalloc(i64 %sext14, i64 8)
  %7 = bitcast i8* %6 to i8**
  %keys = alloca i8**
  %8 = bitcast i8*** %keys to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i8** %7, i8*** %keys, align 8
  %size5 = load i32, i32* %size, align 4
  %sext146 = zext i32 %size5 to i64
  %9 = call i8* @nccalloc(i64 %sext146, i64 8)
  %10 = bitcast i8* %9 to i1 (%CLVALUE**, %sVMInfo*)**
  %items = alloca i1 (%CLVALUE**, %sVMInfo*)**
  %11 = bitcast i1 (%CLVALUE**, %sVMInfo*)*** %items to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i1 (%CLVALUE**, %sVMInfo*)** %10, i1 (%CLVALUE**, %sVMInfo*)*** %items, align 8
  %size7 = load i32, i32* %size, align 4
  %sext148 = zext i32 %size7 to i64
  %12 = call i8* @nccalloc(i64 %sext148, i64 1)
  %13 = bitcast i8* %12 to i1*
  %item_existance = alloca i1*
  %14 = bitcast i1** %item_existance to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i1* %13, i1** %item_existance, align 8
  %len = alloca i32
  %15 = bitcast i32* %len to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 0, i32* %len, align 4
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  call void @"each_charp_lambdap40_src/native6"(%map__charp_lambdap* %self9, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* @native6_lambda15)
  %self10 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %16 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self10, i32 0, i32 2
  %17 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %16, align 8
  %18 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %16, align 8
  %19 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %18 to i8*
  call void @ncfree(i8* %19)
  %self11 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %20 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self11, i32 0, i32 1
  %21 = load i1*, i1** %20, align 8
  %22 = load i1*, i1** %20, align 8
  %23 = ptrtoint i1* %22 to i64
  %24 = icmp ne i64 %23, 0
  br i1 %24, label %cond_then_block, label %cond_end

cond_then_block:                                  ; preds = %entry
  br label %cond_end

cond_end:                                         ; preds = %cond_then_block, %entry
  %25 = bitcast i1* %22 to i8*
  call void @ncfree(i8* %25)
  %self12 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self12, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8**, i8*** %26, align 8
  %29 = bitcast i8** %28 to i8*
  call void @ncfree(i8* %29)
  %self13 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %keys14 = load i8**, i8*** %keys, align 8
  %30 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self13, i32 0, i32 0
  store i8** %keys14, i8*** %30, align 8
  %self15 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %items16 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %items, align 8
  %31 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self15, i32 0, i32 2
  store i1 (%CLVALUE**, %sVMInfo*)** %items16, i1 (%CLVALUE**, %sVMInfo*)*** %31, align 8
  %self17 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %item_existance18 = load i1*, i1** %item_existance, align 8
  %32 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self17, i32 0, i32 1
  store i1* %item_existance18, i1** %32, align 8
  %self19 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %size20 = load i32, i32* %size, align 4
  %33 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self19, i32 0, i32 3
  store i32 %size20, i32* %33, align 4
  %self21 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %len22 = load i32, i32* %len, align 4
  %34 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self21, i32 0, i32 4
  store i32 %len22, i32* %34, align 4
  %35 = bitcast [8192 x i8*]* %lvtable to i8*
  %36 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %35, i64 65536)
  ret void
}

define void @native6_lambda15(i8* %it, i1 (%CLVALUE**, %sVMInfo*)* %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i8*
  store i8* %it, i8** %it4, align 8
  %2 = bitcast i8** %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %it25 = alloca i1 (%CLVALUE**, %sVMInfo*)*
  store i1 (%CLVALUE**, %sVMInfo*)* %it2, i1 (%CLVALUE**, %sVMInfo*)** %it25, align 8
  %3 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %it7 = load i8*, i8** %it4, align 8
  %5 = call i32 @string_get_hash_key(i8* %it7)
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %7 = bitcast i8* %6 to i32*
  %size = load i32, i32* %7, align 4
  %remtmp = srem i32 %5, %size
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash8 = load i32, i32* %hash, align 4
  %n = alloca i32
  %9 = bitcast i32* %n to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  store i32 %hash8, i32* %n, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %11 = bitcast i8* %10 to i1**
  %item_existance = load i1*, i1** %11, align 8
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
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
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %17 = bitcast i8* %16 to i32*
  %n10 = load i32, i32* %17, align 4
  %addtmp = add nsw i32 %n10, 1
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %19 = bitcast i8* %18 to i32*
  store i32 %addtmp, i32* %19, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %21 = bitcast i8* %20 to i32*
  %n11 = load i32, i32* %21, align 4
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %23 = bitcast i8* %22 to i32*
  %size12 = load i32, i32* %23, align 4
  %getmp = icmp sge i32 %n11, %size12
  br i1 %getmp, label %cond_jump_then13, label %"cond_jump_elif0\0A"

cond_else_block:                                  ; preds = %cond_then_block
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %25 = bitcast i8* %24 to i1**
  %item_existance17 = load i1*, i1** %25, align 8
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %27 = bitcast i8* %26 to i32*
  %n18 = load i32, i32* %27, align 4
  %element_addressD = getelementptr i1, i1* %item_existance17, i32 %n18
  store i1 true, i1* %element_addressD, align 1
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %29 = bitcast i8* %28 to i8***
  %keys = load i8**, i8*** %29, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %31 = bitcast i8* %30 to i32*
  %n19 = load i32, i32* %31, align 4
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %33 = bitcast i8* %32 to i8**
  %it20 = load i8*, i8** %33, align 8
  %element_addressD21 = getelementptr i8*, i8** %keys, i32 %n19
  store i8* %it20, i8** %element_addressD21, align 8
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %35 = bitcast i8* %34 to i1 (%CLVALUE**, %sVMInfo*)***
  %items = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %35, align 8
  %36 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %37 = bitcast i8* %36 to i32*
  %n22 = load i32, i32* %37, align 4
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %39 = bitcast i8* %38 to i1 (%CLVALUE**, %sVMInfo*)**
  %it223 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %39, align 8
  %element_addressD24 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %items, i32 %n22
  store i1 (%CLVALUE**, %sVMInfo*)* %it223, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD24, align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %41 = bitcast i8* %40 to i32*
  %len = load i32, i32* %41, align 4
  %addtmp25 = add nsw i32 %len, 1
  %42 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %43 = bitcast i8* %42 to i32*
  store i32 %addtmp25, i32* %43, align 4
  %subttmp26 = sub nsw i32 %addtmp25, 1
  br label %cond_end_block

cond_end:                                         ; preds = %after_break, %cond_end14
  br label %loop_top_block

cond_jump_then13:                                 ; preds = %cond_jump_then
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %45 = bitcast i8* %44 to i32*
  store i32 0, i32* %45, align 4
  br label %cond_end14

"cond_jump_elif0\0A":                             ; preds = %cond_jump_then
  %46 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %47 = bitcast i8* %46 to i32*
  %n15 = load i32, i32* %47, align 4
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %49 = bitcast i8* %48 to i32*
  %hash16 = load i32, i32* %49, align 4
  %eqtmpX = icmp eq i32 %n15, %hash16
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end14

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %50 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.80, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end14

cond_end14:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then13
  br label %cond_end

after_break:                                      ; No predecessors!
  br label %cond_end
}

define void @"each_charp_lambdap40_src/native6"(%map__charp_lambdap* %self, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* %block_) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %block_3 = alloca void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)*
  store void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* %block_, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %block_3, align 8
  %3 = bitcast void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %block_3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %i_ = alloca i32
  %4 = bitcast i32* %i_ to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  store i32 0, i32* %i_, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %i_4 = load i32, i32* %i_, align 4
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %6 = bitcast i8* %5 to %map__charp_lambdap**
  %self5 = load %map__charp_lambdap*, %map__charp_lambdap** %6, align 8
  %7 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self5, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %letmp = icmp slt i32 %i_4, %8
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %10 = bitcast i8* %9 to %map__charp_lambdap**
  %self6 = load %map__charp_lambdap*, %map__charp_lambdap** %10, align 8
  %11 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self6, i32 0, i32 1
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
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i1 false, i1* %end_flag_, align 1
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %17 = bitcast i8* %16 to void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)**
  %block_8 = load void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)*, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %19 = bitcast i8* %18 to %map__charp_lambdap**
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %19, align 8
  %20 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self9, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %23 = bitcast i8* %22 to i32*
  %i_10 = load i32, i32* %23, align 4
  %element_addressB11 = getelementptr i8*, i8** %21, i32 %i_10
  %element12 = load i8*, i8** %element_addressB11, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %25 = bitcast i8* %24 to %map__charp_lambdap**
  %self13 = load %map__charp_lambdap*, %map__charp_lambdap** %25, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self13, i32 0, i32 2
  %27 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %29 = bitcast i8* %28 to i32*
  %i_14 = load i32, i32* %29, align 4
  %element_addressB15 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %27, i32 %i_14
  %element16 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB15, align 8
  %end_flag_17 = load i1, i1* %end_flag_, align 1
  call void %block_8(i8* %element12, i1 (%CLVALUE**, %sVMInfo*)* %element16, i1* %end_flag_)
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

define void @"insert_charp_lambdap41_src/native6"(%map__charp_lambdap* %self, i8* %key, i1 (%CLVALUE**, %sVMInfo*)* %item) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %key3 = alloca i8*
  store i8* %key, i8** %key3, align 8
  %3 = bitcast i8** %key3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %item4 = alloca i1 (%CLVALUE**, %sVMInfo*)*
  store i1 (%CLVALUE**, %sVMInfo*)* %item, i1 (%CLVALUE**, %sVMInfo*)** %item4, align 8
  %4 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %item4 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %self5 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %5 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self5, i32 0, i32 4
  %6 = load i32, i32* %5, align 4
  %multtmp = mul nsw i32 %6, 2
  %self6 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %7 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self6, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %getmp = icmp sge i32 %multtmp, %8
  br i1 %getmp, label %cond_jump_then, label %cond_end

cond_jump_then:                                   ; preds = %entry
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %10 = bitcast i8* %9 to %map__charp_lambdap**
  %self7 = load %map__charp_lambdap*, %map__charp_lambdap** %10, align 8
  call void @"rehash_charp_lambdap42_src/native6"(%map__charp_lambdap* %self7)
  br label %cond_end

cond_end:                                         ; preds = %cond_jump_then, %entry
  %key8 = load i8*, i8** %key3, align 8
  %11 = call i32 @string_get_hash_key(i8* %key8)
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %12 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self9, i32 0, i32 3
  %13 = load i32, i32* %12, align 4
  %remtmp = srem i32 %11, %13
  %hash = alloca i32
  %14 = bitcast i32* %hash to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash10 = load i32, i32* %hash, align 4
  %it = alloca i32
  %15 = bitcast i32* %it to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  store i32 %hash10, i32* %it, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end14, %cond_end
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %17 = bitcast i8* %16 to %map__charp_lambdap**
  %self11 = load %map__charp_lambdap*, %map__charp_lambdap** %17, align 8
  %18 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self11, i32 0, i32 1
  %19 = load i1*, i1** %18, align 8
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
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
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %25 = bitcast i8* %24 to %map__charp_lambdap**
  %self15 = load %map__charp_lambdap*, %map__charp_lambdap** %25, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self15, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %29 = bitcast i8* %28 to i32*
  %it16 = load i32, i32* %29, align 4
  %element_addressB17 = getelementptr i8*, i8** %27, i32 %it16
  %element18 = load i8*, i8** %element_addressB17, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %31 = bitcast i8* %30 to i8**
  %key19 = load i8*, i8** %31, align 8
  %32 = call i1 @string_equals(i8* %element18, i8* %key19)
  br i1 %32, label %cond_jump_then20, label %cond_end21

cond_else_block:                                  ; preds = %cond_then_block
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %34 = bitcast i8* %33 to %map__charp_lambdap**
  %self53 = load %map__charp_lambdap*, %map__charp_lambdap** %34, align 8
  %35 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self53, i32 0, i32 1
  %36 = load i1*, i1** %35, align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %38 = bitcast i8* %37 to i32*
  %it54 = load i32, i32* %38, align 4
  %element_addressD55 = getelementptr i1, i1* %36, i32 %it54
  store i1 true, i1* %element_addressD55, align 1
  %39 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %40 = bitcast i8* %39 to %map__charp_lambdap**
  %self56 = load %map__charp_lambdap*, %map__charp_lambdap** %40, align 8
  %41 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self56, i32 0, i32 0
  %42 = load i8**, i8*** %41, align 8
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %44 = bitcast i8* %43 to i32*
  %it57 = load i32, i32* %44, align 4
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %46 = bitcast i8* %45 to i8**
  %key58 = load i8*, i8** %46, align 8
  %element_addressD59 = getelementptr i8*, i8** %42, i32 %it57
  store i8* %key58, i8** %element_addressD59, align 8
  %47 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %48 = bitcast i8* %47 to %map__charp_lambdap**
  %self60 = load %map__charp_lambdap*, %map__charp_lambdap** %48, align 8
  %49 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self60, i32 0, i32 2
  %50 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %49, align 8
  %51 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %52 = bitcast i8* %51 to i32*
  %it61 = load i32, i32* %52, align 4
  %53 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %54 = bitcast i8* %53 to i1 (%CLVALUE**, %sVMInfo*)**
  %item62 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %54, align 8
  %element_addressD63 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %50, i32 %it61
  store i1 (%CLVALUE**, %sVMInfo*)* %item62, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD63, align 8
  %55 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %56 = bitcast i8* %55 to %map__charp_lambdap**
  %self64 = load %map__charp_lambdap*, %map__charp_lambdap** %56, align 8
  %57 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %58 = bitcast i8* %57 to %map__charp_lambdap**
  %self65 = load %map__charp_lambdap*, %map__charp_lambdap** %58, align 8
  %59 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self65, i32 0, i32 4
  %60 = load i32, i32* %59, align 4
  %addtmp66 = add nsw i32 %60, 1
  %61 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self64, i32 0, i32 4
  store i32 %addtmp66, i32* %61, align 4
  %subttmp67 = sub nsw i32 %addtmp66, 1
  br label %cond_end_block

cond_end14:                                       ; preds = %after_break68, %cond_end50
  br label %loop_top_block

cond_jump_then20:                                 ; preds = %cond_jump_then13
  br i1 true, label %cond_jump_then22, label %cond_end23

cond_end21:                                       ; preds = %after_break, %cond_jump_then13
  %62 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %63 = bitcast i8* %62 to i32*
  %it45 = load i32, i32* %63, align 4
  %addtmp = add nsw i32 %it45, 1
  %64 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %65 = bitcast i8* %64 to i32*
  store i32 %addtmp, i32* %65, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %66 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %67 = bitcast i8* %66 to i32*
  %it46 = load i32, i32* %67, align 4
  %68 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %69 = bitcast i8* %68 to %map__charp_lambdap**
  %self47 = load %map__charp_lambdap*, %map__charp_lambdap** %69, align 8
  %70 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self47, i32 0, i32 3
  %71 = load i32, i32* %70, align 4
  %getmp48 = icmp sge i32 %it46, %71
  br i1 %getmp48, label %cond_jump_then49, label %"cond_jump_elif0\0A"

cond_jump_then22:                                 ; preds = %cond_jump_then20
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %73 = bitcast i8* %72 to %map__charp_lambdap**
  %self24 = load %map__charp_lambdap*, %map__charp_lambdap** %73, align 8
  %74 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self24, i32 0, i32 0
  %75 = load i8**, i8*** %74, align 8
  %76 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
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
  %81 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %82 = bitcast i8* %81 to %map__charp_lambdap**
  %self32 = load %map__charp_lambdap*, %map__charp_lambdap** %82, align 8
  %83 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self32, i32 0, i32 2
  %84 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %83, align 8
  %85 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %86 = bitcast i8* %85 to i32*
  %it33 = load i32, i32* %86, align 4
  %element_addressB34 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %84, i32 %it33
  %element35 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB34, align 8
  %87 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB34, align 8
  %88 = ptrtoint i1 (%CLVALUE**, %sVMInfo*)* %87 to i64
  %89 = icmp ne i64 %88, 0
  br i1 %89, label %cond_then_block36, label %cond_end37

cond_end31:                                       ; preds = %cond_end37, %cond_end23
  %90 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %91 = bitcast i8* %90 to %map__charp_lambdap**
  %self38 = load %map__charp_lambdap*, %map__charp_lambdap** %91, align 8
  %92 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self38, i32 0, i32 0
  %93 = load i8**, i8*** %92, align 8
  %94 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %95 = bitcast i8* %94 to i32*
  %it39 = load i32, i32* %95, align 4
  %96 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 453), align 8
  %97 = bitcast i8* %96 to i8**
  %key40 = load i8*, i8** %97, align 8
  %element_addressD = getelementptr i8*, i8** %93, i32 %it39
  store i8* %key40, i8** %element_addressD, align 8
  %98 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 452), align 8
  %99 = bitcast i8* %98 to %map__charp_lambdap**
  %self41 = load %map__charp_lambdap*, %map__charp_lambdap** %99, align 8
  %100 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self41, i32 0, i32 2
  %101 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %100, align 8
  %102 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %103 = bitcast i8* %102 to i32*
  %it42 = load i32, i32* %103, align 4
  %104 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 454), align 8
  %105 = bitcast i8* %104 to i1 (%CLVALUE**, %sVMInfo*)**
  %item43 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %105, align 8
  %element_addressD44 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %101, i32 %it42
  store i1 (%CLVALUE**, %sVMInfo*)* %item43, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD44, align 8
  br label %cond_end_block

cond_then_block36:                                ; preds = %cond_jump_then30
  br label %cond_end37

cond_end37:                                       ; preds = %cond_then_block36, %cond_jump_then30
  %106 = bitcast i1 (%CLVALUE**, %sVMInfo*)* %87 to i8*
  call void @ncfree(i8* %106)
  br label %cond_end31

after_break:                                      ; No predecessors!
  br label %cond_end21

cond_jump_then49:                                 ; preds = %cond_end21
  %107 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %108 = bitcast i8* %107 to i32*
  store i32 0, i32* %108, align 4
  br label %cond_end50

"cond_jump_elif0\0A":                             ; preds = %cond_end21
  %109 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 456), align 8
  %110 = bitcast i8* %109 to i32*
  %it51 = load i32, i32* %110, align 4
  %111 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 455), align 8
  %112 = bitcast i8* %111 to i32*
  %hash52 = load i32, i32* %112, align 4
  %eqtmpX = icmp eq i32 %it51, %hash52
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end50

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %113 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_string.85, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end50

cond_end50:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then49
  br label %cond_end14

after_break68:                                    ; No predecessors!
  br label %cond_end14
}

define void @"rehash_charp_lambdap42_src/native6"(%map__charp_lambdap* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 457), align 8
  %self3 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %3 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self3, i32 0, i32 3
  %4 = load i32, i32* %3, align 4
  %multtmp = mul nsw i32 %4, 3
  %size = alloca i32
  %5 = bitcast i32* %size to i8*
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  store i32 %multtmp, i32* %size, align 4
  %size4 = load i32, i32* %size, align 4
  %sext14 = zext i32 %size4 to i64
  %6 = call i8* @nccalloc(i64 %sext14, i64 8)
  %7 = bitcast i8* %6 to i8**
  %keys = alloca i8**
  %8 = bitcast i8*** %keys to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  store i8** %7, i8*** %keys, align 8
  %size5 = load i32, i32* %size, align 4
  %sext146 = zext i32 %size5 to i64
  %9 = call i8* @nccalloc(i64 %sext146, i64 8)
  %10 = bitcast i8* %9 to i1 (%CLVALUE**, %sVMInfo*)**
  %items = alloca i1 (%CLVALUE**, %sVMInfo*)**
  %11 = bitcast i1 (%CLVALUE**, %sVMInfo*)*** %items to i8*
  store i8* %11, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  store i1 (%CLVALUE**, %sVMInfo*)** %10, i1 (%CLVALUE**, %sVMInfo*)*** %items, align 8
  %size7 = load i32, i32* %size, align 4
  %sext148 = zext i32 %size7 to i64
  %12 = call i8* @nccalloc(i64 %sext148, i64 1)
  %13 = bitcast i8* %12 to i1*
  %item_existance = alloca i1*
  %14 = bitcast i1** %item_existance to i8*
  store i8* %14, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  store i1* %13, i1** %item_existance, align 8
  %len = alloca i32
  %15 = bitcast i32* %len to i8*
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  store i32 0, i32* %len, align 4
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  call void @"each_charp_lambdap43_src/native6"(%map__charp_lambdap* %self9, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* @native6_lambda16)
  %self10 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %16 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self10, i32 0, i32 2
  %17 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %16, align 8
  %18 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %16, align 8
  %19 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %18 to i8*
  call void @ncfree(i8* %19)
  %self11 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %20 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self11, i32 0, i32 1
  %21 = load i1*, i1** %20, align 8
  %22 = load i1*, i1** %20, align 8
  %23 = ptrtoint i1* %22 to i64
  %24 = icmp ne i64 %23, 0
  br i1 %24, label %cond_then_block, label %cond_end

cond_then_block:                                  ; preds = %entry
  br label %cond_end

cond_end:                                         ; preds = %cond_then_block, %entry
  %25 = bitcast i1* %22 to i8*
  call void @ncfree(i8* %25)
  %self12 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self12, i32 0, i32 0
  %27 = load i8**, i8*** %26, align 8
  %28 = load i8**, i8*** %26, align 8
  %29 = bitcast i8** %28 to i8*
  call void @ncfree(i8* %29)
  %self13 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %keys14 = load i8**, i8*** %keys, align 8
  %30 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self13, i32 0, i32 0
  store i8** %keys14, i8*** %30, align 8
  %self15 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %items16 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %items, align 8
  %31 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self15, i32 0, i32 2
  store i1 (%CLVALUE**, %sVMInfo*)** %items16, i1 (%CLVALUE**, %sVMInfo*)*** %31, align 8
  %self17 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %item_existance18 = load i1*, i1** %item_existance, align 8
  %32 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self17, i32 0, i32 1
  store i1* %item_existance18, i1** %32, align 8
  %self19 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %size20 = load i32, i32* %size, align 4
  %33 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self19, i32 0, i32 3
  store i32 %size20, i32* %33, align 4
  %self21 = load %map__charp_lambdap*, %map__charp_lambdap** %self2, align 8
  %len22 = load i32, i32* %len, align 4
  %34 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self21, i32 0, i32 4
  store i32 %len22, i32* %34, align 4
  %35 = bitcast [8192 x i8*]* %lvtable to i8*
  %36 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %35, i64 65536)
  ret void
}

define void @native6_lambda16(i8* %it, i1 (%CLVALUE**, %sVMInfo*)* %it2, i1* %it3) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %it4 = alloca i8*
  store i8* %it, i8** %it4, align 8
  %2 = bitcast i8** %it4 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %it25 = alloca i1 (%CLVALUE**, %sVMInfo*)*
  store i1 (%CLVALUE**, %sVMInfo*)* %it2, i1 (%CLVALUE**, %sVMInfo*)** %it25, align 8
  %3 = bitcast i1 (%CLVALUE**, %sVMInfo*)** %it25 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %it36 = alloca i1*
  store i1* %it3, i1** %it36, align 8
  %4 = bitcast i1** %it36 to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %it7 = load i8*, i8** %it4, align 8
  %5 = call i32 @string_get_hash_key(i8* %it7)
  %6 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %7 = bitcast i8* %6 to i32*
  %size = load i32, i32* %7, align 4
  %remtmp = srem i32 %5, %size
  %hash = alloca i32
  %8 = bitcast i32* %hash to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i32 %remtmp, i32* %hash, align 4
  %hash8 = load i32, i32* %hash, align 4
  %n = alloca i32
  %9 = bitcast i32* %n to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  store i32 %hash8, i32* %n, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  br i1 true, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %10 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %11 = bitcast i8* %10 to i1**
  %item_existance = load i1*, i1** %11, align 8
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
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
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %17 = bitcast i8* %16 to i32*
  %n10 = load i32, i32* %17, align 4
  %addtmp = add nsw i32 %n10, 1
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %19 = bitcast i8* %18 to i32*
  store i32 %addtmp, i32* %19, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  %20 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %21 = bitcast i8* %20 to i32*
  %n11 = load i32, i32* %21, align 4
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 458), align 8
  %23 = bitcast i8* %22 to i32*
  %size12 = load i32, i32* %23, align 4
  %getmp = icmp sge i32 %n11, %size12
  br i1 %getmp, label %cond_jump_then13, label %"cond_jump_elif0\0A"

cond_else_block:                                  ; preds = %cond_then_block
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 461), align 8
  %25 = bitcast i8* %24 to i1**
  %item_existance17 = load i1*, i1** %25, align 8
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %27 = bitcast i8* %26 to i32*
  %n18 = load i32, i32* %27, align 4
  %element_addressD = getelementptr i1, i1* %item_existance17, i32 %n18
  store i1 true, i1* %element_addressD, align 1
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 459), align 8
  %29 = bitcast i8* %28 to i8***
  %keys = load i8**, i8*** %29, align 8
  %30 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %31 = bitcast i8* %30 to i32*
  %n19 = load i32, i32* %31, align 4
  %32 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %33 = bitcast i8* %32 to i8**
  %it20 = load i8*, i8** %33, align 8
  %element_addressD21 = getelementptr i8*, i8** %keys, i32 %n19
  store i8* %it20, i8** %element_addressD21, align 8
  %34 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 460), align 8
  %35 = bitcast i8* %34 to i1 (%CLVALUE**, %sVMInfo*)***
  %items = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %35, align 8
  %36 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %37 = bitcast i8* %36 to i32*
  %n22 = load i32, i32* %37, align 4
  %38 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %39 = bitcast i8* %38 to i1 (%CLVALUE**, %sVMInfo*)**
  %it223 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %39, align 8
  %element_addressD24 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %items, i32 %n22
  store i1 (%CLVALUE**, %sVMInfo*)* %it223, i1 (%CLVALUE**, %sVMInfo*)** %element_addressD24, align 8
  %40 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %41 = bitcast i8* %40 to i32*
  %len = load i32, i32* %41, align 4
  %addtmp25 = add nsw i32 %len, 1
  %42 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 462), align 8
  %43 = bitcast i8* %42 to i32*
  store i32 %addtmp25, i32* %43, align 4
  %subttmp26 = sub nsw i32 %addtmp25, 1
  br label %cond_end_block

cond_end:                                         ; preds = %after_break, %cond_end14
  br label %loop_top_block

cond_jump_then13:                                 ; preds = %cond_jump_then
  %44 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %45 = bitcast i8* %44 to i32*
  store i32 0, i32* %45, align 4
  br label %cond_end14

"cond_jump_elif0\0A":                             ; preds = %cond_jump_then
  %46 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 467), align 8
  %47 = bitcast i8* %46 to i32*
  %n15 = load i32, i32* %47, align 4
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  %49 = bitcast i8* %48 to i32*
  %hash16 = load i32, i32* %49, align 4
  %eqtmpX = icmp eq i32 %n15, %hash16
  br i1 %eqtmpX, label %"cond_jump_elif_then0\0A", label %cond_end14

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %50 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_string.84, i32 0, i32 0))
  call void @exit(i32 2)
  br label %cond_end14

cond_end14:                                       ; preds = %"cond_jump_elif_then0\0A", %"cond_jump_elif0\0A", %cond_jump_then13
  br label %cond_end

after_break:                                      ; No predecessors!
  br label %cond_end
}

define void @"each_charp_lambdap43_src/native6"(%map__charp_lambdap* %self, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* %block_) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %map__charp_lambdap*
  store %map__charp_lambdap* %self, %map__charp_lambdap** %self2, align 8
  %2 = bitcast %map__charp_lambdap** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %block_3 = alloca void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)*
  store void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)* %block_, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %block_3, align 8
  %3 = bitcast void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %block_3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %i_ = alloca i32
  %4 = bitcast i32* %i_ to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  store i32 0, i32* %i_, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %i_4 = load i32, i32* %i_, align 4
  %5 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %6 = bitcast i8* %5 to %map__charp_lambdap**
  %self5 = load %map__charp_lambdap*, %map__charp_lambdap** %6, align 8
  %7 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self5, i32 0, i32 3
  %8 = load i32, i32* %7, align 4
  %letmp = icmp slt i32 %i_4, %8
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %9 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %10 = bitcast i8* %9 to %map__charp_lambdap**
  %self6 = load %map__charp_lambdap*, %map__charp_lambdap** %10, align 8
  %11 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self6, i32 0, i32 1
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
  store i8* %15, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 466), align 8
  store i1 false, i1* %end_flag_, align 1
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 464), align 8
  %17 = bitcast i8* %16 to void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)**
  %block_8 = load void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)*, void (i8*, i1 (%CLVALUE**, %sVMInfo*)*, i1*)** %17, align 8
  %18 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %19 = bitcast i8* %18 to %map__charp_lambdap**
  %self9 = load %map__charp_lambdap*, %map__charp_lambdap** %19, align 8
  %20 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self9, i32 0, i32 0
  %21 = load i8**, i8*** %20, align 8
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %23 = bitcast i8* %22 to i32*
  %i_10 = load i32, i32* %23, align 4
  %element_addressB11 = getelementptr i8*, i8** %21, i32 %i_10
  %element12 = load i8*, i8** %element_addressB11, align 8
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 463), align 8
  %25 = bitcast i8* %24 to %map__charp_lambdap**
  %self13 = load %map__charp_lambdap*, %map__charp_lambdap** %25, align 8
  %26 = getelementptr inbounds %map__charp_lambdap, %map__charp_lambdap* %self13, i32 0, i32 2
  %27 = load i1 (%CLVALUE**, %sVMInfo*)**, i1 (%CLVALUE**, %sVMInfo*)*** %26, align 8
  %28 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 465), align 8
  %29 = bitcast i8* %28 to i32*
  %i_14 = load i32, i32* %29, align 4
  %element_addressB15 = getelementptr i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %27, i32 %i_14
  %element16 = load i1 (%CLVALUE**, %sVMInfo*)*, i1 (%CLVALUE**, %sVMInfo*)** %element_addressB15, align 8
  %end_flag_17 = load i1, i1* %end_flag_, align 1
  call void %block_8(i8* %element12, i1 (%CLVALUE**, %sVMInfo*)* %element16, i1* %end_flag_)
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

attributes #0 = { nounwind }
attributes #1 = { argmemonly nounwind }

!llvm.dbg.cu = !{!0}

!0 = distinct !DICompileUnit(language: DW_LANG_C, file: !1, producer: "neo-c", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, enums: !2)
!1 = !DIFile(filename: "src/native6.nc", directory: "/home/ab25cq/repo/neo-c/clover3")
!2 = !{}
