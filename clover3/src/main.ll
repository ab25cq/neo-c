; ModuleID = 'Module main'
source_filename = "Module main"

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
%tm.1 = type { i32, i32, i32, i32, i32, i32, i32, i32, i32, i64, i8* }
%sigevent = type { %sigval, i32, i32, %anon105 }
%anon105 = type { [12 x i32] }
%itimerspec = type { %timespec, %timespec }
%__dirstream = type opaque
%dirent = type { i64, i64, i16, i8, [256 x i8] }

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
@_sys_siglist = external externally_initialized global [65 x i8*], align 8
@sys_siglist = external externally_initialized global [65 x i8*], align 8
@__tzname = external externally_initialized global [2 x i8*], align 8
@__daylight = external externally_initialized global i32, align 4
@__timezone = external externally_initialized global i64
@tzname = external externally_initialized global [2 x i8*], align 8
@daylight = external externally_initialized global i32, align 4
@timezone = external externally_initialized global i64
@global_string = private constant [6 x i8] c"1.0.1\00", align 1
@gVersion = global i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_string, i32 0, i32 0), align 8
@global_string.1 = private constant [1 x i8] zeroinitializer, align 1
@global_string.2 = private constant [1 x i8] zeroinitializer, align 1
@global_string.3 = private constant [6 x i8] c"-core\00", align 1
@global_string.4 = private constant [3 x i8] c"-c\00", align 1
@global_string.5 = private constant [10 x i8] c"--version\00", align 1
@global_string.6 = private constant [9 x i8] c"-version\00", align 1
@global_string.7 = private constant [3 x i8] c"-v\00", align 1
@global_string.8 = private constant [3 x i8] c"-V\00", align 1
@global_string.9 = private constant [25 x i8] c"clover3 lang version %s\0A\00", align 1
@global_string.10 = private constant [26 x i8] c"clover3 can't compile %s\0A\00", align 1
@global_string.11 = private constant [26 x i8] c"clover3 can't compile %s\0A\00", align 1

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

declare i32 @ioctl(i32, i64, ...)

declare i64 @clock()

declare i64 @time(i64*)

declare double @difftime(i64, i64)

declare i64 @mktime(%tm.1*)

declare i64 @strftime(i8*, i64, i8*, %tm.1*)

declare i8* @strptime(i8*, i8*, %tm.1*)

declare i64 @strftime_l(i8*, i64, i8*, %tm.1*, %__locale_struct*)

declare %tm.1* @gmtime(i64*)

declare %tm.1* @localtime(i64*)

declare %tm.1* @gmtime_r(i64*, %tm.1*)

declare %tm.1* @localtime_r(i64*, %tm.1*)

declare i8* @asctime(%tm.1*)

declare i8* @ctime(i64*)

declare i8* @asctime_r(%tm.1*, i8*)

declare i8* @ctime_r(i64*, i8*)

declare void @tzset()

declare i32 @stime(i64*)

declare i64 @timegm(%tm.1*)

declare i64 @timelocal(%tm.1*)

declare i32 @dysize(i32)

declare i32 @nanosleep(%timespec*, %timespec*)

declare i32 @clock_getres(i32, %timespec*)

declare i32 @clock_gettime(i32, %timespec*)

declare i32 @clock_settime(i32, %timespec*)

declare i32 @clock_nanosleep(i32, i32, %timespec*, %timespec*)

declare i32 @clock_getcpuclockid(i32, i32*)

declare i32 @timer_create(i32, %sigevent*, i8**)

declare i32 @timer_delete(i8*)

declare i32 @timer_settime(i8*, i32, %itimerspec*, %itimerspec*)

declare i32 @timer_gettime(i8*, %itimerspec*)

declare i32 @timer_getoverrun(i8*)

declare i32 @timespec_get(%timespec*, i32)

declare %__dirstream* @opendir(i8*)

declare %__dirstream* @fdopendir(i32)

declare i32 @closedir(%__dirstream*)

declare %dirent* @readdir(%__dirstream*)

declare i32 @readdir_r(%__dirstream*, %dirent*, %dirent**)

declare void @rewinddir(%__dirstream*)

declare void @seekdir(%__dirstream*, i64)

declare i64 @telldir(%__dirstream*)

declare i32 @dirfd(%__dirstream*)

declare i32 @scandir(i8*, %dirent***, i32 (%dirent*)*, i32 (%dirent**, %dirent**)*)

declare i32 @alphasort(%dirent**, %dirent**)

declare i64 @getdirentries(i32, i8*, i64, i64*)

declare i8* @dirname(i8*)

declare i8* @__xpg_basename(i8*)

define i32 @main(i32 %argc, i8** %argv) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %argc2 = alloca i32
  store i32 %argc, i32* %argc2, align 4
  %2 = bitcast i32* %argc2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %argv3 = alloca i8**
  store i8** %argv, i8*** %argv3, align 8
  %3 = bitcast i8*** %argv3 to i8*
  store i8* %3, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %i = alloca i32
  %4 = bitcast i32* %i to i8*
  store i8* %4, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %5 = call i8* @setlocale(i32 6, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.1, i32 0, i32 0))
  %opt_c = alloca i1
  %6 = bitcast i1* %opt_c to i8*
  store i8* %6, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  store i1 false, i1* %opt_c, align 1
  %source = alloca i8*
  %7 = bitcast i8** %source to i8*
  store i8* %7, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %element_memory = alloca i8, i32 8192
  store i8* %element_memory, i8** %source, align 8
  %no_load_fudamental_classes = alloca i1
  %8 = bitcast i1* %no_load_fudamental_classes to i8*
  store i8* %8, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  store i1 false, i1* %no_load_fudamental_classes, align 1
  %sname = alloca i8*
  %9 = bitcast i8** %sname to i8*
  store i8* %9, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %element_memory4 = alloca i8, i32 4096
  store i8* %element_memory4, i8** %sname, align 8
  %sname5 = load i8*, i8** %sname, align 8
  %10 = call i8* @xstrncpy(i8* %sname5, i8* getelementptr inbounds ([1 x i8], [1 x i8]* @global_string.2, i32 0, i32 0), i32 4096)
  %11 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %12 = bitcast i8* %11 to i32*
  store i32 1, i32* %12, align 4
  br label %loop_top_block

loop_top_block:                                   ; preds = %cond_end, %entry
  %13 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %14 = bitcast i8* %13 to i32*
  %i6 = load i32, i32* %14, align 4
  %15 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %16 = bitcast i8* %15 to i32*
  %argc7 = load i32, i32* %16, align 4
  %letmp = icmp slt i32 %i6, %argc7
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %17 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %18 = bitcast i8* %17 to i8***
  %argv8 = load i8**, i8*** %18, align 8
  %19 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %20 = bitcast i8* %19 to i32*
  %i9 = load i32, i32* %20, align 4
  %element_addressB = getelementptr i8*, i8** %argv8, i32 %i9
  %element = load i8*, i8** %element_addressB, align 8
  %21 = call i32 @strcmp(i8* %element, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_string.3, i32 0, i32 0))
  %eqtmpX = icmp eq i32 %21, 0
  br i1 %eqtmpX, label %cond_jump_then, label %"cond_jump_elif0\0A"

cond_end_block:                                   ; preds = %loop_top_block
  %sname66 = load i8*, i8** %sname, align 8
  %element_addressB67 = getelementptr i8, i8* %sname66, i32 0
  %element68 = load i8, i8* %element_addressB67, align 1
  %noteqtmp = icmp ne i8 %element68, 0
  br i1 %noteqtmp, label %cond_jump_then69, label %"cond_jump_elif0\0A70"

cond_jump_then:                                   ; preds = %cond_then_block
  %22 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %23 = bitcast i8* %22 to i1*
  store i1 true, i1* %23, align 1
  br label %cond_end

"cond_jump_elif0\0A":                             ; preds = %cond_then_block
  %24 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %25 = bitcast i8* %24 to i8***
  %argv10 = load i8**, i8*** %25, align 8
  %26 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %27 = bitcast i8* %26 to i32*
  %i11 = load i32, i32* %27, align 4
  %element_addressB12 = getelementptr i8*, i8** %argv10, i32 %i11
  %element13 = load i8*, i8** %element_addressB12, align 8
  %28 = call i32 @strcmp(i8* %element13, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_string.4, i32 0, i32 0))
  %eqtmpX14 = icmp eq i32 %28, 0
  br i1 %eqtmpX14, label %"cond_jump_elif_then0\0A", label %"cond_jump_elif1\0A"

"cond_jump_elif_then0\0A":                        ; preds = %"cond_jump_elif0\0A"
  %29 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %30 = bitcast i8* %29 to i1*
  store i1 true, i1* %30, align 1
  %31 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %32 = bitcast i8* %31 to i32*
  %i15 = load i32, i32* %32, align 4
  %addtmp = add nsw i32 %i15, 1
  %33 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 522), align 8
  %34 = bitcast i8* %33 to i32*
  %argc16 = load i32, i32* %34, align 4
  %letmp17 = icmp slt i32 %addtmp, %argc16
  br i1 %letmp17, label %cond_jump_then18, label %cond_else_block19

"cond_jump_elif1\0A":                             ; preds = %"cond_jump_elif0\0A"
  %35 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %36 = bitcast i8* %35 to i8***
  %argv29 = load i8**, i8*** %36, align 8
  %37 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %38 = bitcast i8* %37 to i32*
  %i30 = load i32, i32* %38, align 4
  %element_addressB31 = getelementptr i8*, i8** %argv29, i32 %i30
  %element32 = load i8*, i8** %element_addressB31, align 8
  %39 = call i32 @strcmp(i8* %element32, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_string.5, i32 0, i32 0))
  %eqtmpX33 = icmp eq i32 %39, 0
  store i1 %eqtmpX33, i1* %andand_result_var1, align 1
  br i1 %eqtmpX33, label %cond_jump_end, label %cond_jump_then34

"cond_jump_elif_then1\0A":                        ; preds = %cond_jump_end50
  %gVersion = load i8*, i8** @gVersion, align 8
  %40 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_string.9, i32 0, i32 0), i8* %gVersion)
  call void @exit(i32 0)
  br label %cond_end

cond_else_block:                                  ; preds = %cond_jump_end50
  %41 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %42 = bitcast i8* %41 to i8**
  %sname58 = load i8*, i8** %42, align 8
  %43 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %44 = bitcast i8* %43 to i8***
  %argv59 = load i8**, i8*** %44, align 8
  %45 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %46 = bitcast i8* %45 to i32*
  %i60 = load i32, i32* %46, align 4
  %element_addressB61 = getelementptr i8*, i8** %argv59, i32 %i60
  %element62 = load i8*, i8** %element_addressB61, align 8
  %47 = call i8* @xstrncpy(i8* %sname58, i8* %element62, i32 4096)
  br label %cond_end

cond_end:                                         ; preds = %cond_else_block, %"cond_jump_elif_then1\0A", %cond_end20, %cond_jump_then
  %48 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %49 = bitcast i8* %48 to i32*
  %i63 = load i32, i32* %49, align 4
  %addtmp64 = add nsw i32 %i63, 1
  %50 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %51 = bitcast i8* %50 to i32*
  store i32 %addtmp64, i32* %51, align 4
  %subttmp65 = sub nsw i32 %addtmp64, 1
  br label %loop_top_block

cond_jump_then18:                                 ; preds = %"cond_jump_elif_then0\0A"
  %52 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %53 = bitcast i8* %52 to i8**
  %source21 = load i8*, i8** %53, align 8
  %54 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %55 = bitcast i8* %54 to i8***
  %argv22 = load i8**, i8*** %55, align 8
  %56 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %57 = bitcast i8* %56 to i32*
  %i23 = load i32, i32* %57, align 4
  %addtmp24 = add nsw i32 %i23, 1
  %element_addressB25 = getelementptr i8*, i8** %argv22, i32 %addtmp24
  %element26 = load i8*, i8** %element_addressB25, align 8
  %58 = call i8* @xstrncpy(i8* %source21, i8* %element26, i32 8192)
  %59 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %60 = bitcast i8* %59 to i32*
  %i27 = load i32, i32* %60, align 4
  %addtmp28 = add nsw i32 %i27, 1
  %61 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %62 = bitcast i8* %61 to i32*
  store i32 %addtmp28, i32* %62, align 4
  %subttmp = sub nsw i32 %addtmp28, 1
  br label %cond_end20

cond_else_block19:                                ; preds = %"cond_jump_elif_then0\0A"
  %63 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 525), align 8
  %64 = bitcast i8* %63 to i1*
  store i1 false, i1* %64, align 1
  br label %cond_end20

cond_end20:                                       ; preds = %cond_else_block19, %cond_jump_then18
  br label %cond_end

cond_jump_then34:                                 ; preds = %"cond_jump_elif1\0A"
  %65 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %66 = bitcast i8* %65 to i8***
  %argv35 = load i8**, i8*** %66, align 8
  %67 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %68 = bitcast i8* %67 to i32*
  %i36 = load i32, i32* %68, align 4
  %element_addressB37 = getelementptr i8*, i8** %argv35, i32 %i36
  %element38 = load i8*, i8** %element_addressB37, align 8
  %69 = call i32 @strcmp(i8* %element38, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_string.6, i32 0, i32 0))
  %eqtmpX39 = icmp eq i32 %69, 0
  %oror = or i1 %eqtmpX33, %eqtmpX39
  store i1 %oror, i1* %andand_result_var1, align 1
  br label %cond_jump_end

cond_jump_end:                                    ; preds = %cond_jump_then34, %"cond_jump_elif1\0A"
  %oror_result_value = load i1, i1* %andand_result_var1, align 1
  store i1 %oror_result_value, i1* %andand_result_var1, align 1
  br i1 %oror_result_value, label %cond_jump_end41, label %cond_jump_then40

cond_jump_then40:                                 ; preds = %cond_jump_end
  %70 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %71 = bitcast i8* %70 to i8***
  %argv42 = load i8**, i8*** %71, align 8
  %72 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %73 = bitcast i8* %72 to i32*
  %i43 = load i32, i32* %73, align 4
  %element_addressB44 = getelementptr i8*, i8** %argv42, i32 %i43
  %element45 = load i8*, i8** %element_addressB44, align 8
  %74 = call i32 @strcmp(i8* %element45, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_string.7, i32 0, i32 0))
  %eqtmpX46 = icmp eq i32 %74, 0
  %oror47 = or i1 %oror_result_value, %eqtmpX46
  store i1 %oror47, i1* %andand_result_var1, align 1
  br label %cond_jump_end41

cond_jump_end41:                                  ; preds = %cond_jump_then40, %cond_jump_end
  %oror_result_value48 = load i1, i1* %andand_result_var1, align 1
  store i1 %oror_result_value48, i1* %andand_result_var1, align 1
  br i1 %oror_result_value48, label %cond_jump_end50, label %cond_jump_then49

cond_jump_then49:                                 ; preds = %cond_jump_end41
  %75 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %76 = bitcast i8* %75 to i8***
  %argv51 = load i8**, i8*** %76, align 8
  %77 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %78 = bitcast i8* %77 to i32*
  %i52 = load i32, i32* %78, align 4
  %element_addressB53 = getelementptr i8*, i8** %argv51, i32 %i52
  %element54 = load i8*, i8** %element_addressB53, align 8
  %79 = call i32 @strcmp(i8* %element54, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_string.8, i32 0, i32 0))
  %eqtmpX55 = icmp eq i32 %79, 0
  %oror56 = or i1 %oror_result_value48, %eqtmpX55
  store i1 %oror56, i1* %andand_result_var1, align 1
  br label %cond_jump_end50

cond_jump_end50:                                  ; preds = %cond_jump_then49, %cond_jump_end41
  %oror_result_value57 = load i1, i1* %andand_result_var1, align 1
  br i1 %oror_result_value57, label %"cond_jump_elif_then1\0A", label %cond_else_block

cond_jump_then69:                                 ; preds = %cond_end_block
  call void @set_signal()
  %80 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %81 = bitcast i8* %80 to i8**
  %sname74 = load i8*, i8** %81, align 8
  %82 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %83 = bitcast i8* %82 to i8**
  %sname75 = load i8*, i8** %83, align 8
  %84 = call i64 @strlen(i8* %sname75)
  %85 = ptrtoint i8* %sname74 to i64
  %multtmp = mul nsw i64 %84, 1
  %addtmp76 = add nsw i64 %85, %multtmp
  %intToPtr2 = inttoptr i64 %addtmp76 to i8*
  %p = alloca i8*
  %86 = bitcast i8** %p to i8*
  store i8* %86, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 529), align 8
  store i8* %intToPtr2, i8** %p, align 8
  br label %loop_top_block77

"cond_jump_elif0\0A70":                           ; preds = %cond_end_block
  %opt_c104 = load i1, i1* %opt_c, align 1
  br i1 %opt_c104, label %"cond_jump_elif_then0\0A71", label %cond_else_block72

"cond_jump_elif_then0\0A71":                      ; preds = %"cond_jump_elif0\0A70"
  call void @set_signal()
  %87 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %88 = bitcast i8* %87 to i8**
  %sname105 = load i8*, i8** %88, align 8
  %89 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %90 = bitcast i8* %89 to i8**
  %sname106 = load i8*, i8** %90, align 8
  %91 = call i64 @strlen(i8* %sname106)
  %92 = ptrtoint i8* %sname105 to i64
  %multtmp107 = mul nsw i64 %91, 1
  %addtmp108 = add nsw i64 %92, %multtmp107
  %intToPtr2109 = inttoptr i64 %addtmp108 to i8*
  %p110 = alloca i8*
  %93 = bitcast i8** %p110 to i8*
  store i8* %93, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 529), align 8
  store i8* %intToPtr2109, i8** %p110, align 8
  br label %loop_top_block111

cond_else_block72:                                ; preds = %"cond_jump_elif0\0A70"
  call void @set_signal_shell()
  %94 = call i8* @nccalloc(i64 1, i64 16)
  %95 = bitcast i8* %94 to %vector__sCLTypep*
  %96 = call %vector__sCLTypep* @"initialize_sCLTypep0_src/main"(%vector__sCLTypep* %95)
  %types = alloca %vector__sCLTypep*
  %97 = bitcast %vector__sCLTypep** %types to i8*
  store i8* %97, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 529), align 8
  store %vector__sCLTypep* %96, %vector__sCLTypep** %types, align 8
  %98 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %99 = bitcast i8* %98 to i1*
  %no_load_fudamental_classes150 = load i1, i1* %99, align 1
  call void @clover3_init(i1 %no_load_fudamental_classes150)
  call void @heap_init(i32 128, i32 128)
  %types151 = load %vector__sCLTypep*, %vector__sCLTypep** %types, align 8
  call void @shell(%vector__sCLTypep* %types151)
  call void @heap_final()
  call void @clover3_final()
  %100 = load %vector__sCLTypep*, %vector__sCLTypep** %types, align 8
  call void @"finalize_sCLTypep1_src/main"(%vector__sCLTypep* %100)
  %101 = ptrtoint %vector__sCLTypep* %100 to i64
  %102 = icmp ne i64 %101, 0
  br i1 %102, label %cond_then_block152, label %cond_end153

cond_end73:                                       ; preds = %cond_end153, %cond_end140, %cond_end99
  %103 = bitcast [8192 x i8*]* %lvtable to i8*
  %104 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %103, i64 65536)
  call void @debug_show_none_freed_heap_memory()
  ret i32 0

loop_top_block77:                                 ; preds = %cond_end86, %cond_jump_then69
  %p78 = load i8*, i8** %p, align 8
  %105 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %106 = bitcast i8* %105 to i8**
  %sname79 = load i8*, i8** %106, align 8
  %getmp = icmp sge i8* %p78, %sname79
  br i1 %getmp, label %cond_then_block80, label %cond_end_block81

cond_then_block80:                                ; preds = %loop_top_block77
  %107 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 529), align 8
  %108 = bitcast i8* %107 to i8**
  %p82 = load i8*, i8** %108, align 8
  %derefference_value = load i8, i8* %p82, align 8
  %eqtmpX83 = icmp eq i8 %derefference_value, 46
  br i1 %eqtmpX83, label %cond_jump_then84, label %cond_else_block85

cond_end_block81:                                 ; preds = %cond_jump_then84, %loop_top_block77
  %p90 = load i8*, i8** %p, align 8
  %109 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %110 = bitcast i8* %109 to i8**
  %sname91 = load i8*, i8** %110, align 8
  %letmp92 = icmp slt i8* %p90, %sname91
  br i1 %letmp92, label %cond_jump_then93, label %cond_end94

cond_jump_then84:                                 ; preds = %cond_then_block80
  br label %cond_end_block81

cond_else_block85:                                ; preds = %cond_then_block80
  %111 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 529), align 8
  %112 = bitcast i8* %111 to i8**
  %p87 = load i8*, i8** %112, align 8
  %113 = ptrtoint i8* %p87 to i64
  %subtmp = sub nsw i64 %113, 1
  %IntTOPtr4b = inttoptr i64 %subtmp to i8*
  %114 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 529), align 8
  %115 = bitcast i8* %114 to i8**
  store i8* %IntTOPtr4b, i8** %115, align 8
  %116 = ptrtoint i8* %IntTOPtr4b to i64
  %addtmp88 = add nsw i64 %116, 1
  %intToPtr289 = inttoptr i64 %addtmp88 to i8*
  br label %cond_end86

cond_end86:                                       ; preds = %cond_else_block85, %after_break
  br label %loop_top_block77

after_break:                                      ; No predecessors!
  br label %cond_end86

cond_jump_then93:                                 ; preds = %cond_end_block81
  %117 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 529), align 8
  %118 = bitcast i8* %117 to i8**
  store i8* null, i8** %118, align 8
  br label %cond_end94

cond_end94:                                       ; preds = %cond_jump_then93, %cond_end_block81
  %p95 = load i8*, i8** %p, align 8
  %ext_sname = alloca i8*
  %119 = bitcast i8** %ext_sname to i8*
  store i8* %119, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  store i8* %p95, i8** %ext_sname, align 8
  %120 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %121 = bitcast i8* %120 to i1*
  %no_load_fudamental_classes96 = load i1, i1* %121, align 1
  call void @clover3_init(i1 %no_load_fudamental_classes96)
  %122 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %123 = bitcast i8* %122 to i8**
  %sname97 = load i8*, i8** %123, align 8
  %124 = call i1 @compiler(i8* %sname97)
  %LOGICAL_DIANEAL = icmp eq i1 %124, false
  br i1 %LOGICAL_DIANEAL, label %cond_jump_then98, label %cond_end99

cond_jump_then98:                                 ; preds = %cond_end94
  %stderr = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %125 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %126 = bitcast i8* %125 to i8***
  %argv100 = load i8**, i8*** %126, align 8
  %127 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %128 = bitcast i8* %127 to i32*
  %i101 = load i32, i32* %128, align 4
  %element_addressB102 = getelementptr i8*, i8** %argv100, i32 %i101
  %element103 = load i8*, i8** %element_addressB102, align 8
  %129 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr, i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_string.10, i32 0, i32 0), i8* %element103)
  call void @clover3_final()
  %130 = bitcast [8192 x i8*]* %lvtable to i8*
  %131 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %130, i64 65536)
  call void @debug_show_none_freed_heap_memory()
  ret i32 1

cond_end99:                                       ; preds = %cond_end94
  call void @clover3_final()
  br label %cond_end73

loop_top_block111:                                ; preds = %cond_end122, %"cond_jump_elif_then0\0A71"
  %p112 = load i8*, i8** %p110, align 8
  %132 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %133 = bitcast i8* %132 to i8**
  %sname113 = load i8*, i8** %133, align 8
  %getmp114 = icmp sge i8* %p112, %sname113
  br i1 %getmp114, label %cond_then_block115, label %cond_end_block116

cond_then_block115:                               ; preds = %loop_top_block111
  %134 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 529), align 8
  %135 = bitcast i8* %134 to i8**
  %p117 = load i8*, i8** %135, align 8
  %derefference_value118 = load i8, i8* %p117, align 8
  %eqtmpX119 = icmp eq i8 %derefference_value118, 46
  br i1 %eqtmpX119, label %cond_jump_then120, label %cond_else_block121

cond_end_block116:                                ; preds = %cond_jump_then120, %loop_top_block111
  %p129 = load i8*, i8** %p110, align 8
  %136 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 528), align 8
  %137 = bitcast i8* %136 to i8**
  %sname130 = load i8*, i8** %137, align 8
  %letmp131 = icmp slt i8* %p129, %sname130
  br i1 %letmp131, label %cond_jump_then132, label %cond_end133

cond_jump_then120:                                ; preds = %cond_then_block115
  br label %cond_end_block116

cond_else_block121:                               ; preds = %cond_then_block115
  %138 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 529), align 8
  %139 = bitcast i8* %138 to i8**
  %p124 = load i8*, i8** %139, align 8
  %140 = ptrtoint i8* %p124 to i64
  %subtmp125 = sub nsw i64 %140, 1
  %IntTOPtr4b126 = inttoptr i64 %subtmp125 to i8*
  %141 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 529), align 8
  %142 = bitcast i8* %141 to i8**
  store i8* %IntTOPtr4b126, i8** %142, align 8
  %143 = ptrtoint i8* %IntTOPtr4b126 to i64
  %addtmp127 = add nsw i64 %143, 1
  %intToPtr2128 = inttoptr i64 %addtmp127 to i8*
  br label %cond_end122

cond_end122:                                      ; preds = %cond_else_block121, %after_break123
  br label %loop_top_block111

after_break123:                                   ; No predecessors!
  br label %cond_end122

cond_jump_then132:                                ; preds = %cond_end_block116
  %144 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 529), align 8
  %145 = bitcast i8* %144 to i8**
  store i8* null, i8** %145, align 8
  br label %cond_end133

cond_end133:                                      ; preds = %cond_jump_then132, %cond_end_block116
  %p134 = load i8*, i8** %p110, align 8
  %ext_sname135 = alloca i8*
  %146 = bitcast i8** %ext_sname135 to i8*
  store i8* %146, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  store i8* %p134, i8** %ext_sname135, align 8
  %147 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 527), align 8
  %148 = bitcast i8* %147 to i1*
  %no_load_fudamental_classes136 = load i1, i1* %148, align 1
  call void @clover3_init(i1 %no_load_fudamental_classes136)
  %149 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 526), align 8
  %150 = bitcast i8* %149 to i8**
  %source137 = load i8*, i8** %150, align 8
  %151 = call i8* @string(i8* %source137)
  %152 = call %buffer* @string_to_buffer(i8* %151)
  %153 = call i1 @compiler2(%buffer* %152)
  %LOGICAL_DIANEAL138 = icmp eq i1 %153, false
  %154 = ptrtoint i8* %151 to i64
  %155 = icmp ne i64 %154, 0
  br i1 %155, label %cond_then_block141, label %cond_end142

cond_jump_then139:                                ; preds = %cond_end144
  %stderr145 = load %_IO_FILE*, %_IO_FILE** @stderr, align 8
  %156 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 523), align 8
  %157 = bitcast i8* %156 to i8***
  %argv146 = load i8**, i8*** %157, align 8
  %158 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 524), align 8
  %159 = bitcast i8* %158 to i32*
  %i147 = load i32, i32* %159, align 4
  %element_addressB148 = getelementptr i8*, i8** %argv146, i32 %i147
  %element149 = load i8*, i8** %element_addressB148, align 8
  %160 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stderr145, i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_string.11, i32 0, i32 0), i8* %element149)
  call void @clover3_final()
  %161 = bitcast [8192 x i8*]* %lvtable to i8*
  %162 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %161, i64 65536)
  call void @debug_show_none_freed_heap_memory()
  ret i32 1

cond_end140:                                      ; preds = %cond_end144
  call void @clover3_final()
  br label %cond_end73

cond_then_block141:                               ; preds = %cond_end133
  br label %cond_end142

cond_end142:                                      ; preds = %cond_then_block141, %cond_end133
  call void @ncfree(i8* %151)
  call void @buffer_finalize(%buffer* %152)
  %163 = ptrtoint %buffer* %152 to i64
  %164 = icmp ne i64 %163, 0
  br i1 %164, label %cond_then_block143, label %cond_end144

cond_then_block143:                               ; preds = %cond_end142
  br label %cond_end144

cond_end144:                                      ; preds = %cond_then_block143, %cond_end142
  %165 = bitcast %buffer* %152 to i8*
  call void @ncfree(i8* %165)
  br i1 %LOGICAL_DIANEAL138, label %cond_jump_then139, label %cond_end140

cond_then_block152:                               ; preds = %cond_else_block72
  br label %cond_end153

cond_end153:                                      ; preds = %cond_then_block152, %cond_else_block72
  %166 = bitcast %vector__sCLTypep* %100 to i8*
  call void @ncfree(i8* %166)
  br label %cond_end73
}

define %vector__sCLTypep* @"initialize_sCLTypep0_src/main"(%vector__sCLTypep* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLTypep*
  store %vector__sCLTypep* %self, %vector__sCLTypep** %self2, align 8
  %2 = bitcast %vector__sCLTypep** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  %self3 = load %vector__sCLTypep*, %vector__sCLTypep** %self2, align 8
  %3 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self3, i32 0, i32 2
  store i32 16, i32* %3, align 4
  %self4 = load %vector__sCLTypep*, %vector__sCLTypep** %self2, align 8
  %4 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self4, i32 0, i32 1
  store i32 0, i32* %4, align 4
  %self5 = load %vector__sCLTypep*, %vector__sCLTypep** %self2, align 8
  %self6 = load %vector__sCLTypep*, %vector__sCLTypep** %self2, align 8
  %5 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self6, i32 0, i32 2
  %6 = load i32, i32* %5, align 4
  %sext14 = zext i32 %6 to i64
  %7 = call i8* @nccalloc(i64 %sext14, i64 8)
  %8 = bitcast i8* %7 to %sCLType**
  %9 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self5, i32 0, i32 0
  store %sCLType** %8, %sCLType*** %9, align 8
  %self7 = load %vector__sCLTypep*, %vector__sCLTypep** %self2, align 8
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret %vector__sCLTypep* %self7
}

define void @"finalize_sCLTypep1_src/main"(%vector__sCLTypep* %self) {
entry:
  %andand_result_var = alloca i1
  %andand_result_var1 = alloca i1
  %lvtable = alloca [8192 x i8*]
  %0 = bitcast [8192 x i8*]* %lvtable to i8*
  %1 = call i8* @ncmemcpy(i8* %0, i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i64 65536)
  %self2 = alloca %vector__sCLTypep*
  store %vector__sCLTypep* %self, %vector__sCLTypep** %self2, align 8
  %2 = bitcast %vector__sCLTypep** %self2 to i8*
  store i8* %2, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  %self3 = load %vector__sCLTypep*, %vector__sCLTypep** %self2, align 8
  %eqtmpX = icmp eq %vector__sCLTypep* %self3, null
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
  store i8* %5, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 531), align 8
  store i32 0, i32* %i, align 4
  br label %loop_top_block

cond_end5:                                        ; preds = %cond_end_block, %cond_end
  %self15 = load %vector__sCLTypep*, %vector__sCLTypep** %self2, align 8
  %6 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self15, i32 0, i32 0
  %7 = load %sCLType**, %sCLType*** %6, align 8
  %8 = load %sCLType**, %sCLType*** %6, align 8
  %9 = bitcast %sCLType** %8 to i8*
  call void @ncfree(i8* %9)
  %10 = bitcast [8192 x i8*]* %lvtable to i8*
  %11 = call i8* @ncmemcpy(i8* bitcast ([8192 x i8*]* @gLVTable to i8*), i8* %10, i64 65536)
  ret void

loop_top_block:                                   ; preds = %cond_end11, %cond_jump_then4
  %i6 = load i32, i32* %i, align 4
  %12 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  %13 = bitcast i8* %12 to %vector__sCLTypep**
  %self7 = load %vector__sCLTypep*, %vector__sCLTypep** %13, align 8
  %14 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self7, i32 0, i32 1
  %15 = load i32, i32* %14, align 4
  %letmp = icmp slt i32 %i6, %15
  br i1 %letmp, label %cond_then_block, label %cond_end_block

cond_then_block:                                  ; preds = %loop_top_block
  %16 = load i8*, i8** getelementptr inbounds ([8192 x i8*], [8192 x i8*]* @gLVTable, i32 0, i32 530), align 8
  %17 = bitcast i8* %16 to %vector__sCLTypep**
  %self8 = load %vector__sCLTypep*, %vector__sCLTypep** %17, align 8
  %18 = getelementptr inbounds %vector__sCLTypep, %vector__sCLTypep* %self8, i32 0, i32 0
  %19 = load %sCLType**, %sCLType*** %18, align 8
  %i9 = load i32, i32* %i, align 4
  %element_addressB = getelementptr %sCLType*, %sCLType** %19, i32 %i9
  %element = load %sCLType*, %sCLType** %element_addressB, align 8
  %20 = load %sCLType*, %sCLType** %element_addressB, align 8
  %21 = ptrtoint %sCLType* %20 to i64
  %22 = icmp ne i64 %21, 0
  br i1 %22, label %cond_then_block10, label %cond_end11

cond_end_block:                                   ; preds = %loop_top_block
  br label %cond_end5

cond_then_block10:                                ; preds = %cond_then_block
  %23 = getelementptr inbounds %sCLType, %sCLType* %20, i32 0, i32 0
  %24 = load i8*, i8** %23, align 8
  %25 = ptrtoint i8* %24 to i64
  %26 = icmp ne i64 %25, 0
  br i1 %26, label %cond_then_block12, label %cond_end13

cond_end11:                                       ; preds = %cond_end13, %cond_then_block
  %27 = bitcast %sCLType* %20 to i8*
  call void @ncfree(i8* %27)
  %i14 = load i32, i32* %i, align 4
  %addtmp = add nsw i32 %i14, 1
  store i32 %addtmp, i32* %i, align 4
  %subttmp = sub nsw i32 %addtmp, 1
  br label %loop_top_block

cond_then_block12:                                ; preds = %cond_then_block10
  br label %cond_end13

cond_end13:                                       ; preds = %cond_then_block12, %cond_then_block10
  call void @ncfree(i8* %24)
  br label %cond_end11
}

attributes #0 = { nounwind }
attributes #1 = { argmemonly nounwind }

!llvm.dbg.cu = !{!0}

!0 = distinct !DICompileUnit(language: DW_LANG_C, file: !1, producer: "neo-c", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, enums: !2)
!1 = !DIFile(filename: "src/main.nc", directory: "/home/ab25cq/repo/neo-c/clover3")
!2 = !{}
